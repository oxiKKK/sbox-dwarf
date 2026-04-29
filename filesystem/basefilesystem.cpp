
//
// filesystem/basefilesystem.cpp
//
//	referenced by: libfilesystem_stdio.so
//
//	functions: 259
//	classes: 3
//	structs: 3
//

// <00104699> filesystem/basefilesystem.cpp:63
// variables: 2
// function call: 1
bool V_CheckDoubleSlashes(const char* pStr)
{
	int len; // 65
	{
		int i; // 67
	}
	V_strlen(const char* str); // 65
} /* size: 115, variables: 1, inline expansions: 1 (10 bytes) */

// <001043A4> filesystem/basefilesystem.cpp:75
// variable: 1
// function calls: 10
void V_FixupPotentialVPKPathName(CBufferString* pOut, const char* pPath)
{
	CPathBufferString tempName; // 77
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 1256
	CBufferString::CopyAndFixupPathName(
				const char* pPath,
				char chSeparator);  // 78
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 77
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 79
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 80
} /* size: 199, variables: 1, inline expansions: 10 (242 bytes) */

// <00103E7E> filesystem/basefilesystem.cpp:85
// variables: 6
// function calls: 12
void CBaseFileSystem::LogFileOpen(const char* vpk, const char* pFilename, const char* pAbsPath)
{
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_99; // 99
	const char   __FUNCTION__; // 26245
	{
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_90; // 90
		CThreadMutex::Lock(
			const char* pFileName,
			int nLineNumber);  // 943
		Lock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
				const CThreadMutex& lock,
				const char* pFilename,
				int nLineNumber);  // 90
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 94
	}
	{
		const char* pOpenMode; // 104
		FILE* f; // 106
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 107
		}
	}
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 943
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
			const CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 99
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 123
} /* size: 0, variables: 2, inline expansions: 6 (300 bytes) */

// <0010DBBA> filesystem/basefilesystem.cpp:126
// variables: 3
// function calls: 21
void CBaseFileSystem::WriteFileAccessLog(const char* pHeader, const char* pFileName, const char* pPath, bool bClearLog)
{
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_131; // 131
	CUtlBuffer tempBuffer; // 133
	bool bSuccess; // 138
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 943
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
			const CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 131
	V_strlen(const char* str); // 134
	CBufferString::Length(); // 134
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 136
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 151
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 151
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 142
	CBaseFileSystem::WriteFileAccessLog(
				const char* pHeader,
				const char* pFileName,
				const char* pPath,
				bool bClearLog);  // 126
} /* size: 556, variables: 3, inline expansions: 21 (1202 bytes) */

// <00103CC9> filesystem/basefilesystem.cpp:126
// variables: 3
void CBaseFileSystem::WriteFileAccessLog(const char* pHeader, const char* pFileName, const char* pPath, bool bClearLog)
{
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_131; // 131
	CUtlBuffer tempBuffer; // 133
	bool bSuccess; // 138
} /* size: 0, variables: 3 */

// <00103C3A> filesystem/basefilesystem.cpp:165
// function call: 1
void path(const CCommandContext& ctx, const CCommand& args)
{
	BaseFileSystem(void); // 167
} /* size: 50, inline expansions: 1 (14 bytes) */

// <000EDE2A> filesystem/basefilesystem.cpp:170
void CFileHandleTimer::CFileHandleTimer()
{
} /* size: 0 */

// <000EDE0E> filesystem/basefilesystem.cpp:170
inline void CFileHandleTimer::CFileHandleTimer()
{
} /* size: 0 */

// <000EDDF7> filesystem/basefilesystem.cpp:170
void CFileHandleTimer::~CFileHandleTimer()
{
} /* size: 0 */

// <000EDDDB> filesystem/basefilesystem.cpp:170
inline void CFileHandleTimer::~CFileHandleTimer()
{
} /* size: 0 */

// <000A0B8B> filesystem/basefilesystem.cpp:170
// member functions: 4
// member variables: 3
// class size: 24
class CFileHandleTimer : public CRelativeTickTimer {
public:
	/* class CRelativeTickTimer <ancestor>; */ /* 0 8 */
	FileHandle_t m_hFile; /* 8 8 */
	CUtlString m_name; /* 16 8 */
	void ~CFileHandleTimer(CFileHandleTimer* );
	void CFileHandleTimer(CFileHandleTimer* );
	void ~CFileHandleTimer(class CFileHandleTimer *); /* linkage=_ZN16CFileHandleTimerD4Ev */
	void CFileHandleTimer(class CFileHandleTimer *); /* linkage=_ZN16CFileHandleTimerC4Ev */
};

// <000D3183> filesystem/basefilesystem.cpp:177
void FileOpenDuplicateTime_t::~FileOpenDuplicateTime_t()
{
} /* size: 0 */

// <000D3167> filesystem/basefilesystem.cpp:177
inline void FileOpenDuplicateTime_t::~FileOpenDuplicateTime_t()
{
} /* size: 0 */

// <000A5715> filesystem/basefilesystem.cpp:177
// member functions: 2
// member variables: 3
// struct size: 24
struct FileOpenDuplicateTime_t {
	CUtlString m_name; /* 0 8 */
	int m_nLoadCount; /* 8 4 */
	float64 m_flAccumulatedMicroSeconds; /* 16 8 */
	/* filesystem/basefilesystem.cpp:183 */
	void FileOpenDuplicateTime_t(FileOpenDuplicateTime_t* );
	void ~FileOpenDuplicateTime_t(FileOpenDuplicateTime_t* );
};

// <00103C23> filesystem/basefilesystem.cpp:183
void FileOpenDuplicateTime_t::FileOpenDuplicateTime_t()
{
} /* size: 0 */

// <00103C0A> filesystem/basefilesystem.cpp:183
inline void FileOpenDuplicateTime_t::FileOpenDuplicateTime_t()
{
} /* size: 0 */

// <0010275F> filesystem/basefilesystem.cpp:336
// function calls: 83
void CBaseFileSystem::CBaseFileSystem()
{
	{
	}
	{
		IAppSystem::IAppSystem(); // 451
		IBaseFileSystem::IBaseFileSystem(); // 451
		IFileSystem::IFileSystem(); // 120
		CBaseAppSystem<IFileSystem>::CBaseAppSystem(); // 171
		CTier0AppSystem<IFileSystem, 0>::CTier0AppSystem(); // 225
		CTier1AppSystem<IFileSystem, 0>::CTier1AppSystem(); // 48
		CUtlMemory<ResourceManifestDesc_t::ValidateGrowSize(); // 475
		CUtlMemory<ResourceManifestDesc_t::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<ResourceManifestDesc_t::ResetDbgInfo(); // 530
		CUtlVectorBase<ResourceManifestDesc_t::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<ResourceManifestDesc_t::CUtlVector(); // 48
		CTier2AppSystem<IFileSystem, 0>::CTier2AppSystem(); // 338
		CUtlMemory<void (::ValidateGrowSize()(char const*, char const*), int>* this); // 475
		CUtlMemory<void (::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<void (::ResetDbgInfo()(char const*, char const*), CUtlMemory<void (*)(char const*, char const*), int> >* this); // 530
		CUtlVectorBase<void (::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<void (::CUtlVector()(char const*, char const*), CUtlMemory<void (*)(char const*, char const*), int> >* this); // 338
		CUtlMemory<CBaseFileSystem::CSearchPath, int>::ValidateGrowSize(); // 475
		CUtlMemory<CBaseFileSystem::CSearchPath, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<CBaseFileSystem::CSearchPath, CUtlMemory<CBaseFileSystem::CSearchPath, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<CBaseFileSystem::CSearchPath, CUtlMemory<CBaseFileSystem::CSearchPath, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<CBaseFileSystem::CSearchPath, CUtlMemory<CBaseFileSystem::CSearchPath, int> >::CUtlVector(); // 338
		CUtlMemory<CBaseFileSystem::CPathIDInfo::ValidateGrowSize(); // 475
		CUtlMemory<CBaseFileSystem::CPathIDInfo::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<CBaseFileSystem::CPathIDInfo::ResetDbgInfo(); // 530
		CUtlVectorBase<CBaseFileSystem::CPathIDInfo::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<CBaseFileSystem::CPathIDInfo::CUtlVector(); // 338
		CUtlFixedMemory<UtlLinkedListElem_t<CBaseFileSystem::FindData_t, long long int> >::Grow(
			int num);  // 193
		CUtlFixedMemory<UtlLinkedListElem_t<CBaseFileSystem::FindData_t, long long int> >::Init(
			int nGrowSize,
			int nInitSize);  // 161
		CUtlFixedMemory<UtlLinkedListElem_t<CBaseFileSystem::FindData_t, long long int> >::CUtlFixedMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 448
		Iterator_t::Iterator_t(
				BlockHeader_t* p,
				intp i);  // 96
		CUtlFixedMemory<UtlLinkedListElem_t<CBaseFileSystem::FindData_t, long long int> >::InvalidIterator(); // 448
		ConstructList(const CUtlLinkedList<CBaseFileSystem::FindData_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t this); // 454
		ResetDbgInfo(const CUtlLinkedList<CBaseFileSystem::FindData_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t this); // 455
		CUtlLinkedList(const CUtlLinkedList<CBaseFileSystem::FindData_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t this,
				int growSize,
				int initSize);  // 404
		CUtlFixedLinkedList<CBaseFileSystem::FindData_t>::CUtlFixedLinkedList(
					int growSize,
					int initSize);  // 338
		CUtlMemory<CUtlString, int>::ValidateGrowSize(); // 475
		CUtlMemory<CUtlString, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVector(); // 338
		CUtlMemory<CFileHandleTimer::ValidateGrowSize(); // 475
		CUtlMemory<CFileHandleTimer::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<CFileHandleTimer::ResetDbgInfo(); // 530
		CUtlVectorBase<CFileHandleTimer::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<CFileHandleTimer::CUtlVector(); // 338
		CThreadMutex::CThreadMutex(
				const char* pName);  // 338
		CInterlockedIntT<unsigned int, 4>::CInterlockedIntT(); // 206
		CInterlockedIntT<unsigned int, 4>::CInterlockedIntT(); // 206
		CInterlockedIntT<unsigned int, 4>::CInterlockedIntT(); // 206
		CInterlockedIntT<unsigned int, 4>::CInterlockedIntT(); // 206
		CInterlockedIntT<unsigned int, 4>::CInterlockedIntT(); // 206
		FileSystemStatistics::FileSystemStatistics(); // 338
		CUtlMemory<CBaseFileSystem::COpenedFile, int>::ValidateGrowSize(); // 475
		CUtlMemory<CBaseFileSystem::COpenedFile, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<CBaseFileSystem::COpenedFile, CUtlMemory<CBaseFileSystem::COpenedFile, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<CBaseFileSystem::COpenedFile, CUtlMemory<CBaseFileSystem::COpenedFile, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<CBaseFileSystem::COpenedFile, CUtlMemory<CBaseFileSystem::COpenedFile, int> >::CUtlVector(); // 338
		{
			CInterlockedIntT<int, 4>::CInterlockedIntT(); // 2282
			{
			}
			memset(void* __dest,
				int __ch,
				size_t __len);  // 67
			V_memset(void* dest,
				int fill,
				size_t count);  // 2291
		}
		CThreadSpinRWLock::CThreadSpinRWLock(
					const char* pLockName);  // 24
		CUtlFilenameSymbolTable::CUtlFilenameSymbolTable(); // 338
		CThreadMutex::CThreadMutex(
				const char* pName);  // 338
		ResetDbgInfo(const CUtlRBTree<CUtlMap<CUtlString, CBaseFileSystem::SymLink_t>::Node_t, short unsigned int, CUtlMap<CUtlString, CBaseFi this); // 503
		ValidateGrowSize(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CBaseFileSystem::SymLink_t>::Node_t, short unsigned int>, short unsi this); // 475
		CUtlMemory(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CBaseFileSystem::SymLink_t>::Node_t, short unsigned int>, short unsi this,
				int nGrowSize,
				int nInitAllocationCount);  // 496
		InvalidIndex(void); // 498
		InvalidIndex(void); // 500
		Iterator_t::Iterator_t(
				short unsigned int i);  // 86
		InvalidIterator(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CBaseFileSystem::SymLink_t>::Node_t, short unsigned int>, shor this); // 501
		CUtlRBTree(const CUtlRBTree<CUtlMap<CUtlString, CBaseFileSystem::SymLink_t>::Node_t, short unsigned int, CUtlMap<CUtlString, CBaseFi this,
				const LessFunc_t& lessfunc);  // 69
		CKeyLess::CKeyLess(
			LessFunc_t lessFunc);  // 69
		CUtlMap<CUtlString, CBaseFileSystem::SymLink_t, short unsigned int, bool (::CUtlMap(
			LessFunc_t lessfunc);  // 338
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 338
		CUtlMemory<CUtlString, int>::ValidateGrowSize(); // 475
		CUtlMemory<CUtlString, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVector(); // 338
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 353
	}
} /* size: 0 */

// <0010272C> filesystem/basefilesystem.cpp:336
// variables: 2
void CBaseFileSystem::CBaseFileSystem()
{
	const char   __FUNCTION__; // 26353
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 350
	}
} /* size: 0, variables: 1 */

// <00100FC0> filesystem/basefilesystem.cpp:380
// variables: 6
// function calls: 115
void CBaseFileSystem::~CBaseFileSystem()
{
	{
		int i; // 1721
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 1526
		Destruct<CUtlString>(CUtlString* pMemory); // 1723
	}
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::RemoveAll(); // 1798
	CUtlMemory<CUtlString, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlString, int>::Purge(); // 903
	CUtlMemory<CUtlString, int>::Purge(); // 1799
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Purge(); // 560
	ValidateAlignment<CUtlString>(void); // 508
	CUtlMemory<CUtlString, int>::Purge(); // 510
	CUtlMemory<CUtlString, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVector(); // 382
	IsExternallyAllocated(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CBaseFileSystem::SymLink_t>::Node_t, short unsigned int>, shor this); // 905
	Purge(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CBaseFileSystem::SymLink_t>::Node_t, short unsigned int>, short unsi this); // 903
	Purge(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CBaseFileSystem::SymLink_t>::Node_t, short unsigned int>, short unsi this); // 1287
	Iterator_t::Iterator_t(
			short unsigned int i);  // 86
	InvalidIterator(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CBaseFileSystem::SymLink_t>::Node_t, short unsigned int>, shor this); // 1288
	Purge(const CUtlRBTree<CUtlMap<CUtlString, CBaseFileSystem::SymLink_t>::Node_t, short unsigned int, CUtlMap<CUtlString, CBaseFi this); // 509
	ValidateAlignment<UtlRBTreeNode_t<CUtlMap<CUtlString, CBaseFileSystem::SymLink_t>::Node_t, short unsigned int> >(void); // 508
	Purge(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CBaseFileSystem::SymLink_t>::Node_t, short unsigned int>, short unsi this); // 510
	~CUtlMemory(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CBaseFileSystem::SymLink_t>::Node_t, short unsigned int>, short unsi this); // 510
	~CUtlRBTree(const CUtlRBTree<CUtlMap<CUtlString, CBaseFileSystem::SymLink_t>::Node_t, short unsigned int, CUtlMap<CUtlString, CBaseFi this); // 47
	CUtlMap<CUtlString, CBaseFileSystem::SymLink_t, short unsigned int, bool (::~CUtlMap()(const CUtlString&, const CUtlString&)> this); // 382
	CBufferString::~CBufferString(); // 382
	CThreadMutex::~CThreadMutex(); // 382
	CUtlFilenameSymbolTable::~CUtlFilenameSymbolTable(); // 382
	{
		int i; // 1721
		CUtlMemory<CBaseFileSystem::COpenedFile, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CBaseFileSystem::COpenedFile, CUtlMemory<CBaseFileSystem::COpenedFile, int> >::Element(
			int i);  // 1723
		COpenedFile::~COpenedFile(); // 1526
		Destruct<CBaseFileSystem::COpenedFile>(COpenedFile* pMemory); // 1723
	}
	CUtlVectorBase<CBaseFileSystem::COpenedFile, CUtlMemory<CBaseFileSystem::COpenedFile, int> >::RemoveAll(); // 1798
	CUtlMemory<CBaseFileSystem::COpenedFile, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CBaseFileSystem::COpenedFile, int>::Purge(); // 903
	CUtlMemory<CBaseFileSystem::COpenedFile, int>::Purge(); // 1799
	CUtlVectorBase<CBaseFileSystem::COpenedFile, CUtlMemory<CBaseFileSystem::COpenedFile, int> >::Purge(); // 560
	ValidateAlignment<CBaseFileSystem::COpenedFile>(void); // 508
	CUtlMemory<CBaseFileSystem::COpenedFile, int>::Purge(); // 510
	CUtlMemory<CBaseFileSystem::COpenedFile, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CBaseFileSystem::COpenedFile, CUtlMemory<CBaseFileSystem::COpenedFile, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CBaseFileSystem::COpenedFile, CUtlMemory<CBaseFileSystem::COpenedFile, int> >::~CUtlVector(); // 382
	CThreadMutex::~CThreadMutex(); // 382
	CUtlVectorBase<CFileHandleTimer::RemoveAll(); // 1798
	CUtlMemory<CFileHandleTimer::IsExternallyAllocated(); // 905
	CUtlMemory<CFileHandleTimer::Purge(); // 903
	CUtlMemory<CFileHandleTimer::Purge(); // 1799
	CUtlVectorBase<CFileHandleTimer::Purge(); // 560
	ValidateAlignment<CFileHandleTimer*>(void); // 508
	CUtlMemory<CFileHandleTimer::Purge(); // 510
	CUtlMemory<CFileHandleTimer::~CUtlMemory(); // 562
	CUtlVectorBase<CFileHandleTimer::~CUtlVectorBase(); // 410
	CUtlVector<CFileHandleTimer::~CUtlVector(); // 382
	{
		int i; // 1721
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 1526
		Destruct<CUtlString>(CUtlString* pMemory); // 1723
	}
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::RemoveAll(); // 1798
	CUtlMemory<CUtlString, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlString, int>::Purge(); // 903
	CUtlMemory<CUtlString, int>::Purge(); // 1799
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Purge(); // 560
	ValidateAlignment<CUtlString>(void); // 508
	CUtlMemory<CUtlString, int>::Purge(); // 510
	CUtlMemory<CUtlString, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVector(); // 382
	{
		BlockHeader_t* pbh; // 338
		{
			BlockHeader_t* pFree; // 340
		}
	}
	CUtlFixedMemory<UtlLinkedListElem_t<CBaseFileSystem::FindData_t, long long int> >::Purge(); // 167
	CUtlFixedMemory<UtlLinkedListElem_t<CBaseFileSystem::FindData_t, long long int> >::~CUtlFixedMemory(); // 462
	~CUtlLinkedList(const CUtlLinkedList<CBaseFileSystem::FindData_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t this); // 400
	CUtlFixedLinkedList<CBaseFileSystem::FindData_t>::~CUtlFixedLinkedList(); // 382
	CUtlVectorBase<CBaseFileSystem::CPathIDInfo::RemoveAll(); // 1798
	CUtlMemory<CBaseFileSystem::CPathIDInfo::IsExternallyAllocated(); // 905
	CUtlMemory<CBaseFileSystem::CPathIDInfo::Purge(); // 903
	CUtlMemory<CBaseFileSystem::CPathIDInfo::Purge(); // 1799
	CUtlVectorBase<CBaseFileSystem::CPathIDInfo::Purge(); // 560
	ValidateAlignment<CBaseFileSystem::CPathIDInfo*>(void); // 508
	CUtlMemory<CBaseFileSystem::CPathIDInfo::Purge(); // 510
	CUtlMemory<CBaseFileSystem::CPathIDInfo::~CUtlMemory(); // 562
	CUtlVectorBase<CBaseFileSystem::CPathIDInfo::~CUtlVectorBase(); // 410
	CUtlVector<CBaseFileSystem::CPathIDInfo::~CUtlVector(); // 382
	{
		int i; // 1721
		CUtlMemory<CBaseFileSystem::CSearchPath, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CBaseFileSystem::CSearchPath, CUtlMemory<CBaseFileSystem::CSearchPath, int> >::Element(
			int i);  // 1723
		Destruct<CBaseFileSystem::CSearchPath>(CSearchPath* pMemory); // 1723
	}
	CUtlVectorBase<CBaseFileSystem::CSearchPath, CUtlMemory<CBaseFileSystem::CSearchPath, int> >::RemoveAll(); // 1798
	CUtlMemory<CBaseFileSystem::CSearchPath, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CBaseFileSystem::CSearchPath, int>::Purge(); // 903
	CUtlMemory<CBaseFileSystem::CSearchPath, int>::Purge(); // 1799
	CUtlVectorBase<CBaseFileSystem::CSearchPath, CUtlMemory<CBaseFileSystem::CSearchPath, int> >::Purge(); // 560
	ValidateAlignment<CBaseFileSystem::CSearchPath>(void); // 508
	CUtlMemory<CBaseFileSystem::CSearchPath, int>::Purge(); // 510
	CUtlMemory<CBaseFileSystem::CSearchPath, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CBaseFileSystem::CSearchPath, CUtlMemory<CBaseFileSystem::CSearchPath, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CBaseFileSystem::CSearchPath, CUtlMemory<CBaseFileSystem::CSearchPath, int> >::~CUtlVector(); // 382
	CThreadEvent::~CThreadEvent(); // 2177
	CThreadEvent::~CThreadEvent(); // 2177
	CThreadRWLock_FastRead::~CThreadRWLock_FastRead(); // 382
	CUtlVectorBase<void (::RemoveAll()(char const*, char const*), CUtlMemory<void (*)(char const*, char const*), int> >* this); // 1798
	CUtlMemory<void (::IsExternallyAllocated()(char const*, char const*), int>* this); // 905
	CUtlMemory<void (::Purge()(char const*, char const*), int>* this); // 903
	CUtlMemory<void (::Purge()(char const*, char const*), int>* this); // 1799
	CUtlVectorBase<void (::Purge()(char const*, char const*), CUtlMemory<void (*)(char const*, char const*), int> >* this); // 560
	ValidateAlignment<void (*)(char const*, char const*)>(void); // 508
	CUtlMemory<void (::Purge()(char const*, char const*), int>* this); // 510
	CUtlMemory<void (::~CUtlMemory()(char const*, char const*), int>* this); // 562
	CUtlVectorBase<void (::~CUtlVectorBase()(char const*, char const*), CUtlMemory<void (*)(char const*, char const*), int> >* this); // 410
	CUtlVector<void (::~CUtlVector()(char const*, char const*), CUtlMemory<void (*)(char const*, char const*), int> >* this); // 382
	CUtlMemory<ResourceManifestDesc_t::IsExternallyAllocated(); // 905
	CUtlMemory<ResourceManifestDesc_t::Purge(); // 903
	CUtlMemory<ResourceManifestDesc_t::Purge(); // 1799
	CUtlVectorBase<ResourceManifestDesc_t::RemoveAll(); // 1798
	CUtlVectorBase<ResourceManifestDesc_t::Purge(); // 560
	CUtlVectorBase<ResourceManifestDesc_t::~CUtlVectorBase(); // 410
	CUtlVector<ResourceManifestDesc_t::~CUtlVector(); // 42
	CTier2AppSystem<IFileSystem, 0>::~CTier2AppSystem(); // 382
} /* size: 875, inline expansions: 100 (2974 bytes) */

// <00100FA7> filesystem/basefilesystem.cpp:380
void CBaseFileSystem::~CBaseFileSystem()
{
} /* size: 0 */

// <00100EF2> filesystem/basefilesystem.cpp:387
// function call: 1
void* CBaseFileSystem::QueryInterface(const char* pInterfaceName)
{
	V_strncmp<int>(const char* s1,
			const char* s2,
			int count);  // 390
} /* size: 57, inline expansions: 1 (20 bytes) */

// <00100D00> filesystem/basefilesystem.cpp:396
// variable: 1
// function calls: 4
void CBaseFileSystem::Init()
{
	InitReturnVal_t nRetVal; // 398
	CTier0AppSystem<IFileSystem, 0>::Init(); // 71
	CTier2AppSystem<IFileSystem, 0>::Init(); // 398
	CUtlSymbolTableMT::AddString(
			const char* pString);  // 402
	CUtlSymbol::operator=(
			const CUtlSymbol& src);  // 402
} /* size: 188, variables: 1, inline expansions: 4 (126 bytes) */

// <00100CD2> filesystem/basefilesystem.cpp:412
void CBaseFileSystem::PreShutdown()
{
} /* size: 5 */

// <00100A33> filesystem/basefilesystem.cpp:417
// variable: 1
// function calls: 11
void CBaseFileSystem::Shutdown()
{
	CTier0AppSystem<IFileSystem, 0>::Shutdown(); // 85
	CTier2AppSystem<IFileSystem, 0>::Shutdown(); // 424
	{
		int i; // 1807
		CUtlMemory<CBaseFileSystem::CPathIDInfo::operator[](
				int i);  // 602
		CUtlVectorBase<CBaseFileSystem::CPathIDInfo::Element(
			int i);  // 1809
	}
	CUtlVectorBase<CBaseFileSystem::CPathIDInfo::RemoveAll(); // 1798
	CUtlMemory<CBaseFileSystem::CPathIDInfo::Purge(); // 903
	CUtlMemory<CBaseFileSystem::CPathIDInfo::IsExternallyAllocated(); // 905
	CUtlMemory<CBaseFileSystem::CPathIDInfo::Purge(); // 1799
	CUtlVectorBase<CBaseFileSystem::CPathIDInfo::ResetDbgInfo(); // 1800
	CUtlVectorBase<CBaseFileSystem::CPathIDInfo::Purge(); // 1811
	CUtlVectorBase<CBaseFileSystem::CPathIDInfo::PurgeAndDeleteElements(); // 426
} /* size: 218, inline expansions: 9 (378 bytes) */

// <00100451> filesystem/basefilesystem.cpp:436
// variables: 2
// function calls: 18
void CBaseFileSystem::ComputeFullWritePath(CBufferString* pDest, const char* pRelativePath, const char* pWritePathID)
{
	CPathBufferString fixedName; // 454
	const char* pWritePath; // 456
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 1256
	CBufferString::CopyAndFixupPathName(
				const char* pPath,
				char chSeparator);  // 450
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 454
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 1256
	CBufferString::CopyAndFixupPathName(
				const char* pPath,
				char chSeparator);  // 455
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 456
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 459
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 461
} /* size: 466, variables: 2, inline expansions: 18 (547 bytes) */

// <00100323> filesystem/basefilesystem.cpp:463
// function calls: 3
void CBaseFileSystem::RelativePathToFullWritePath(const char* pRelativePath, const char* pWritePathID, CBufferString* pLocalPath)
{
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 467
} /* size: 67, inline expansions: 3 (50 bytes) */

// <001002E6> filesystem/basefilesystem.cpp:481
void OpenedFileLessFunc(const COpenedFile& src1, const COpenedFile& src2)
{
} /* size: 0 */

// <001081BB> filesystem/basefilesystem.cpp:486
// function call: 1
void CBaseFileSystem::SuppressAsyncFileRequestFlushOnPathChange(bool bEnable)
{
	{
	}
	CBaseFileSystem::SuppressAsyncFileRequestFlushOnPathChange(
							bool bEnable);  // 486
} /* size: 0, inline expansions: 1 (42 bytes) */

// <0010029C> filesystem/basefilesystem.cpp:486
// variables: 2
void CBaseFileSystem::SuppressAsyncFileRequestFlushOnPathChange(bool bEnable)
{
	const char   __FUNCTION__; // 26980
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 494
	}
} /* size: 0, variables: 1 */

// <000FFD36> filesystem/basefilesystem.cpp:504
// variables: 4
// function calls: 14
void CBaseFileSystem::LogAccessToFile(const char* accesstype, const char* fullpath, const char* options)
{
	CThreadFastMutex autoMutex__; // 506
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_506; // 506
	int c; // 513
	{
		int i; // 517
		CUtlMemory<void (::operator[](
				int i);  // 588
		CUtlVectorBase<void (::operator[](
				int i);  // 519
	}
	ThreadInterlockedAssignIf64(volatile int64* pDest,
					int64 value,
					int64 comparand);  // 800
	CThreadFastMutex::TryLockInline(
			const char* pFileName,
			int nLineNumber,
			const ThreadId_t  threadId);  // 837
	ThreadPause(void); // 839
	CThreadFastMutex::Lock(
		const char* pFileName,
		int nLineNumber,
		unsigned int nSpinSleepTime);  // 943
	Lock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::CAutoLockT(
			const CThreadFastMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 506
	CUtlVectorBase<void (::Count()(char const*, char const*), CUtlMemory<void (*)(char const*, char const*), int> >* this); // 513
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 521
	CThreadFastMutex::CThreadFastMutex(
			const char* pLockName);  // 506
} /* size: 470, variables: 3, inline expansions: 12 (582 bytes) */

// <000FF4C0> filesystem/basefilesystem.cpp:530
// variables: 4
// function calls: 28
void CBaseFileSystem::Trace_FOpen(const char* filename, const char* options, unsigned int flags, int64* size)
{
	VirtualFileHandle_t fileHandle; // 534
	{
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_547; // 547
		COpenedFile file; // 548
		CThreadMutex::Lock(
			const char* pFileName,
			int nLineNumber);  // 943
		Lock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
				const CThreadMutex& lock,
				const char* pFilename,
				int nLineNumber);  // 547
		V_strlen(const char* str); // 4277
		V_strncpy<int>(char* pDest,
				const char* pSrc,
				int maxLenInChars);  // 4279
		COpenedFile::SetName(
			const char* name);  // 550
		COpenedFile::COpenedFile(); // 548
		CUtlMemory<CBaseFileSystem::COpenedFile, int>::NumAllocated(); // 1196
		CUtlMemory<CBaseFileSystem::COpenedFile, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CBaseFileSystem::COpenedFile, CUtlMemory<CBaseFileSystem::COpenedFile, int> >::Element(
			int i);  // 1201
		{
			int len; // 4250
			V_strlen(const char* str); // 4250
			V_strncpy<int>(char* pDest,
					const char* pSrc,
					int maxLenInChars);  // 4252
		}
		COpenedFile::COpenedFile(
				const COpenedFile& src);  // 1520
		CopyConstruct<CBaseFileSystem::COpenedFile>(COpenedFile* pMemory,
								const COpenedFile& src);  // 1201
		CUtlMemory<CBaseFileSystem::COpenedFile, int>::IsGrowable(); // 823
		CUtlMemory<CBaseFileSystem::COpenedFile, int>::IsExternallyAllocated(); // 859
		CUtlMemory<CBaseFileSystem::COpenedFile, int>::IsExternallyAllocated(); // 861
		CUtlMemory<CBaseFileSystem::COpenedFile, int>::Grow(
			int num);  // 806
		CUtlMemory<CBaseFileSystem::COpenedFile, int>::Base(); // 112
		CUtlVectorBase<CBaseFileSystem::COpenedFile, CUtlMemory<CBaseFileSystem::COpenedFile, int> >::Base(); // 368
		CUtlVectorBase<CBaseFileSystem::COpenedFile, CUtlMemory<CBaseFileSystem::COpenedFile, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<CBaseFileSystem::COpenedFile, CUtlMemory<CBaseFileSystem::COpenedFile, int> >::GrowMemory(
				int num);  // 1198
		CUtlVectorBase<CBaseFileSystem::COpenedFile, CUtlMemory<CBaseFileSystem::COpenedFile, int> >::AddToTail(
				const COpenedFile& src);  // 553
		COpenedFile::~COpenedFile(); // 556
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 556
		ConVar::GetInt(); // 540
	}
} /* size: 703, variables: 1 */

// <0010ADF3> filesystem/basefilesystem.cpp:566
void CBaseFileSystem::Trace_FClose(VirtualFileHandle_t fileHandle)
{
} /* size: 0 */

// <0010A609> filesystem/basefilesystem.cpp:566
// variables: 5
// function calls: 28
void CBaseFileSystem::Trace_FClose(VirtualFileHandle_t fileHandle)
{
	{
		COpenedFile file; // 572
		int result; // 575
		CThreadMutex::Lock(
			const char* pFileName,
			int nLineNumber);  // 570
		{
			int i; // 1531
			CUtlVectorBase<CBaseFileSystem::COpenedFile, CUtlMemory<CBaseFileSystem::COpenedFile, int> >::Count(); // 1531
			CUtlMemory<CBaseFileSystem::COpenedFile, int>::operator[](
					int i);  // 609
			CUtlVectorBase<CBaseFileSystem::COpenedFile, CUtlMemory<CBaseFileSystem::COpenedFile, int> >::Element(
				int i);  // 1533
			COpenedFile::operator==(
					const COpenedFile& src);  // 1533
		}
		CUtlVectorBase<CBaseFileSystem::COpenedFile, CUtlMemory<CBaseFileSystem::COpenedFile, int> >::Find(
			const COpenedFile& src);  // 575
		COpenedFile::COpenedFile(); // 572
		{
			COpenedFile found; // 578
			CUtlMemory<CBaseFileSystem::COpenedFile, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CBaseFileSystem::COpenedFile, CUtlMemory<CBaseFileSystem::COpenedFile, int> >::operator[](
					int i);  // 578
			{
				int len; // 4250
				V_strlen(const char* str); // 4250
				V_strncpy<int>(char* pDest,
						const char* pSrc,
						int maxLenInChars);  // 4252
			}
			COpenedFile::COpenedFile(
					const COpenedFile& src);  // 578
			CUtlMemory<CBaseFileSystem::COpenedFile, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CBaseFileSystem::COpenedFile, CUtlMemory<CBaseFileSystem::COpenedFile, int> >::Element(
				int i);  // 1607
			COpenedFile::~COpenedFile(); // 1526
			Destruct<CBaseFileSystem::COpenedFile>(COpenedFile* pMemory); // 1607
			CUtlMemory<CBaseFileSystem::COpenedFile, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CBaseFileSystem::COpenedFile, CUtlMemory<CBaseFileSystem::COpenedFile, int> >::Element(
				int i);  // 1114
			CUtlMemory<CBaseFileSystem::COpenedFile, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CBaseFileSystem::COpenedFile, CUtlMemory<CBaseFileSystem::COpenedFile, int> >::Element(
				int i);  // 1114
			memmove(void* __dest,
				const void* __src,
				size_t __len);  // 115
			V_memmove(void* dest,
					const void* src,
					size_t count);  // 1114
			CUtlVectorBase<CBaseFileSystem::COpenedFile, CUtlMemory<CBaseFileSystem::COpenedFile, int> >::ShiftElementsLeft(
						int elem,
						int num);  // 1608
			CUtlVectorBase<CBaseFileSystem::COpenedFile, CUtlMemory<CBaseFileSystem::COpenedFile, int> >::Remove(
				int elem);  // 583
			COpenedFile::~COpenedFile(); // 584
			CUtlVectorBase<CBaseFileSystem::COpenedFile, CUtlMemory<CBaseFileSystem::COpenedFile, int> >::Count(); // 581
			COpenedFile::GetName(); // 581
		}
		{
		}
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 595
	}
} /* size: 0 */

// <000FF447> filesystem/basefilesystem.cpp:566
// variables: 5
void CBaseFileSystem::Trace_FClose(VirtualFileHandle_t fileHandle)
{
	const char   __FUNCTION__; // 26272
	{
		COpenedFile file; // 572
		int result; // 575
		{
			COpenedFile found; // 578
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 587
		}
	}
} /* size: 0, variables: 1 */

// <000FEDCB> filesystem/basefilesystem.cpp:602
// variables: 6
// function calls: 20
void CBaseFileSystem::Trace_FRead(int size, VirtualFileHandle_t fileHandle)
{
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_607; // 607
	COpenedFile file; // 609
	int result; // 612
	{
		COpenedFile found; // 616
		CUtlMemory<CBaseFileSystem::COpenedFile, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CBaseFileSystem::COpenedFile, CUtlMemory<CBaseFileSystem::COpenedFile, int> >::operator[](
				int i);  // 616
		{
			int len; // 4250
			V_strlen(const char* str); // 4250
			V_strncpy<int>(char* pDest,
					const char* pSrc,
					int maxLenInChars);  // 4252
		}
		COpenedFile::COpenedFile(
				const COpenedFile& src);  // 616
		COpenedFile::GetName(); // 618
		COpenedFile::~COpenedFile(); // 619
	}
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 943
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
			const CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 607
	{
		int i; // 1531
		CUtlVectorBase<CBaseFileSystem::COpenedFile, CUtlMemory<CBaseFileSystem::COpenedFile, int> >::Count(); // 1531
		CUtlMemory<CBaseFileSystem::COpenedFile, int>::operator[](
				int i);  // 609
		CUtlVectorBase<CBaseFileSystem::COpenedFile, CUtlMemory<CBaseFileSystem::COpenedFile, int> >::Element(
			int i);  // 1533
		COpenedFile::operator==(
				const COpenedFile& src);  // 1533
	}
	CUtlVectorBase<CBaseFileSystem::COpenedFile, CUtlMemory<CBaseFileSystem::COpenedFile, int> >::Find(
		const COpenedFile& src);  // 612
	COpenedFile::COpenedFile(); // 609
	COpenedFile::~COpenedFile(); // 625
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 625
} /* size: 551, variables: 3, inline expansions: 9 (354 bytes) */

// <0010AE3D> filesystem/basefilesystem.cpp:627
// variables: 6
// function calls: 20
void CBaseFileSystem::Trace_FWrite(int size, VirtualFileHandle_t fileHandle)
{
	COpenedFile file; // 632
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_635; // 635
	int result; // 637
	COpenedFile::COpenedFile(); // 632
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 943
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
			const CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 635
	{
		int i; // 1531
		CUtlVectorBase<CBaseFileSystem::COpenedFile, CUtlMemory<CBaseFileSystem::COpenedFile, int> >::Count(); // 1531
		CUtlMemory<CBaseFileSystem::COpenedFile, int>::operator[](
				int i);  // 609
		CUtlVectorBase<CBaseFileSystem::COpenedFile, CUtlMemory<CBaseFileSystem::COpenedFile, int> >::Element(
			int i);  // 1533
		COpenedFile::operator==(
				const COpenedFile& src);  // 1533
	}
	CUtlVectorBase<CBaseFileSystem::COpenedFile, CUtlMemory<CBaseFileSystem::COpenedFile, int> >::Find(
		const COpenedFile& src);  // 637
	{
		COpenedFile found; // 641
		CUtlMemory<CBaseFileSystem::COpenedFile, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CBaseFileSystem::COpenedFile, CUtlMemory<CBaseFileSystem::COpenedFile, int> >::operator[](
				int i);  // 641
		{
			int len; // 4250
			V_strlen(const char* str); // 4250
			V_strncpy<int>(char* pDest,
					const char* pSrc,
					int maxLenInChars);  // 4252
		}
		COpenedFile::COpenedFile(
				const COpenedFile& src);  // 641
		COpenedFile::GetName(); // 643
		COpenedFile::~COpenedFile(); // 644
	}
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 649
	CBaseFileSystem::Trace_FWrite(
			int size,
			VirtualFileHandle_t fileHandle);  // 627
} /* size: 516, variables: 3, inline expansions: 9 (836 bytes) */

// <000FED62> filesystem/basefilesystem.cpp:627
// variables: 4
void CBaseFileSystem::Trace_FWrite(int size, VirtualFileHandle_t fileHandle)
{
	COpenedFile file; // 632
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_635; // 635
	int result; // 637
	{
		COpenedFile found; // 641
	}
} /* size: 0, variables: 3 */

// <000FEA60> filesystem/basefilesystem.cpp:654
// variables: 3
// function calls: 10
void CBaseFileSystem::Trace_DumpUnclosedFiles()
{
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_656; // 656
	{
		int i; // 657
		{
			COpenedFile* found; // 659
			COpenedFile::GetName(); // 663
			CUtlMemory<CBaseFileSystem::COpenedFile, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CBaseFileSystem::COpenedFile, CUtlMemory<CBaseFileSystem::COpenedFile, int> >::operator[](
					int i);  // 659
		}
		CUtlVectorBase<CBaseFileSystem::COpenedFile, CUtlMemory<CBaseFileSystem::COpenedFile, int> >::Count(); // 657
	}
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 943
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
			const CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 656
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 666
} /* size: 262, variables: 1, inline expansions: 6 (378 bytes) */

// <000FEA02> filesystem/basefilesystem.cpp:671
// variable: 1
void CBaseFileSystem::PrintOpenedFiles()
{
	FileWarningLevel_t saveLevel; // 673
} /* size: 48, variables: 1 */

// <000FE92D> filesystem/basefilesystem.cpp:679
// function call: 1
void CBaseFileSystem::AddVPKFile(const char* pVPKFileName, const char* pPathID, SearchPathAdd_t addType)
{
	CUtlStringToken::CUtlStringToken(); // 681
} /* size: 33, inline expansions: 1 (0 bytes) */

// <00108250> filesystem/basefilesystem.cpp:691
// function call: 1
void CBaseFileSystem::RemoveVPKFile(const char* pVPKFileName, const char* pPathID)
{
	CBaseFileSystem::RemoveVPKFile(
			const char* pVPKFileName,
			const char* pPathID);  // 691
} /* size: 52, inline expansions: 1 (15 bytes) */

// <000FE8FA> filesystem/basefilesystem.cpp:691
void CBaseFileSystem::RemoveVPKFile(const char* pVPKFileName, const char* pPathID)
{
} /* size: 0 */

// <000FE1F4> filesystem/basefilesystem.cpp:703
// variables: 4
// function calls: 27
void CBaseFileSystem::IsVPKFileLoaded(const char* pBaseName)
{
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForReadTrait<CThreadRWLock_FastRead> > generated_id_705; // 705
	CPathBufferString testPath; // 707
	{
		int i; // 710
		{
			CSearchPath* pSearchPath; // 712
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 781
			CBufferString::operator char const*(); // 716
			CUtlMemory<CBaseFileSystem::CSearchPath, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CBaseFileSystem::CSearchPath, CUtlMemory<CBaseFileSystem::CSearchPath, int> >::operator[](
					int i);  // 712
			CSearchPath::GetPackFile(); // 713
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 776
			CBufferString::String(); // 323
			CPackedStore::BaseName(); // 716
		}
		CUtlVectorBase<CBaseFileSystem::CSearchPath, CUtlMemory<CBaseFileSystem::CSearchPath, int> >::Count(); // 710
	}
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<unsigned int, 4>::operator++(); // 3093
	CThreadRWLock_FastRead::LockForRead(
			const char* pFileName,
			int nLineNumber);  // 951
	Lock(CThreadRWLock_FastRead& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForReadTrait<CThreadRWLock_FastRead> >::CAutoLockT(
			const CThreadRWLock_FastRead& lock,
			const char* pFilename,
			int nLineNumber);  // 705
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 707
	FixupSearchPathName(const char* pInPathName,
				CBufferString* pOut);  // 708
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 721
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<unsigned int, 4>::operator--(); // 3106
	CThreadRWLock_FastRead::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 952
	Unlock(CThreadRWLock_FastRead& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForReadTrait<CThreadRWLock_FastRead> >::~CAutoLockT(); // 721
} /* size: 406, variables: 2, inline expansions: 16 (428 bytes) */

// <00109A7B> filesystem/basefilesystem.cpp:731
// variables: 4
// function calls: 21
void CBaseFileSystem::ParseVPKFileNameFromFilename(const char* pFilename, CBufferString* pVPKFileName, CBufferString* pRelativeFileName)
{
	const char* pVPKNameStart; // 738
	CPathBufferString fixedBuf; // 743
	const char* pTrailingColon; // 752
	int nLen; // 756
	V_strnicmp_fast<int>(const char* s1,
				const char* s2,
				int n);  // 734
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 743
	CBufferString::Length(); // 745
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 752
	strrchr(const char* __s,
		int __c);  // 204
	V_strrchr(const char* s,
			char c);  // 752
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 757
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 759
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 761
	CBaseFileSystem::ParseVPKFileNameFromFilename(
					const char* pFilename,
					CBufferString* pVPKFileName,
					CBufferString* pRelativeFileName);  // 731
} /* size: 414, variables: 4, inline expansions: 21 (794 bytes) */

// <000FE180> filesystem/basefilesystem.cpp:731
// variables: 4
void CBaseFileSystem::ParseVPKFileNameFromFilename(const char* pFilename, CBufferString* pVPKFileName, CBufferString* pRelativeFileName)
{
	const char* pVPKNameStart; // 738
	CPathBufferString fixedBuf; // 743
	const char* pTrailingColon; // 752
	int nLen; // 756
} /* size: 0, variables: 4 */

// <000C70F5> filesystem/basefilesystem.cpp:763
// variables: 58
// function calls: 103
void CBaseFileSystem::PrintSearchPaths()
{
	CUtlRBTree<CBaseFileSystem::PrintSearchPaths()::sort_search_paths_t, short unsigned int, bool (*)(const CBaseFileSystem::PrintSearchPaths()::sort_search_paths_t&, const CBaseFileSystem::PrintSearchPaths()::sort_search_paths_t&), CUtlMemory<UtlRBTreeNode_t<CBaseFileSystem::PrintSearchPaths()::sort_search_paths_t, short unsigned int>, short unsigned int> > sortedByPathID; // 786
	int c; // 788
	{
		int i; // 789
		{
			const CSearchPath* pSearchPath; // 791
			sort_search_paths_t record; // 793
			CThreadMutex::Lock(
				const char* pFileName,
				int nLineNumber);  // 3047
			CThreadMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 3053
			CThreadRWLock::LockForRead(
					const char* pFileName,
					int nLineNumber);  // 267
			CUtlSymbol::CUtlSymbol(
					const CUtlSymbol& sym);  // 268
			CThreadMutex::Lock(
				const char* pFileName,
				int nLineNumber);  // 3058
			CThreadMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 3064
			CThreadRWLock::UnlockRead(
					const char* pFileName,
					int nLineNumber);  // 269
			CUtlSymbolTableMT::String(
				CUtlSymbol id);  // 755
			CUtlSymbol::CUtlSymbol(
					const CUtlSymbol& sym);  // 755
			CPathIDInfo::GetPathIDString(); // 784
			CSearchPath::GetPathIDString(); // 794
			CUtlString::CUtlString(); // 768
			sort_search_paths_t::sort_search_paths_t(); // 793
			CUtlMemory<CBaseFileSystem::CSearchPath, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CBaseFileSystem::CSearchPath, CUtlMemory<CBaseFileSystem::CSearchPath, int> >::operator[](
					int i);  // 791
			CUtlString::operator=(
					const char* src);  // 794
			CUtlRBTree<CBaseFileSystem::PrintSearchPaths()::sort_search_paths_t, short unsigned int, bool (::LeftChild(
					short unsigned int i); // 1667
			operator[](const CUtlMemory<UtlRBTreeNode_t<CBaseFileSystem::PrintSearchPaths()::sort_search_paths_t, short unsigned int>, short uns this,
					short unsigned int i); // 539
			CUtlRBTree<CBaseFileSystem::PrintSearchPaths()::sort_search_paths_t, short unsigned int, bool (::Element(
				short unsigned int i); // 1665
			CUtlRBTree<CBaseFileSystem::PrintSearchPaths()::sort_search_paths_t, short unsigned int, bool (::RightChild(
					short unsigned int i); // 1677
			CUtlRBTree<CBaseFileSystem::PrintSearchPaths()::sort_search_paths_t, short unsigned int, bool (::FindInsertionPosition(
						const sort_search_paths_t& insert,
						bool bCheckForDuplicates,
						short unsigned int& parent,
						bool& leftchild,
						bool& isDuplicate); // 1693
			{
				short unsigned int newNode; // 1696
				operator[](const CUtlMemory<UtlRBTreeNode_t<CBaseFileSystem::PrintSearchPaths()::sort_search_paths_t, short unsigned int>, short uns this,
						short unsigned int i); // 737
				CUtlRBTree<CBaseFileSystem::PrintSearchPaths()::sort_search_paths_t, short unsigned int, bool (::Links(
					short unsigned int i); // 1008
				operator[](const CUtlMemory<UtlRBTreeNode_t<CBaseFileSystem::PrintSearchPaths()::sort_search_paths_t, short unsigned int>, short uns this,
						short unsigned int i); // 737
				CUtlRBTree<CBaseFileSystem::PrintSearchPaths()::sort_search_paths_t, short unsigned int, bool (::Links(
					short unsigned int i); // 999
				CUtlRBTree<CBaseFileSystem::PrintSearchPaths()::sort_search_paths_t, short unsigned int, bool (::LinkToParent(
						short unsigned int i,
						short unsigned int parent,
						bool isLeft); // 984
				CUtlRBTree<CBaseFileSystem::PrintSearchPaths()::sort_search_paths_t, short unsigned int, bool (::InsertAt(
					short unsigned int parent,
					bool leftchild,
					const sort_search_paths_t* pCopyFrom); // 1696
			}
			{
				short unsigned int newNode; // 1709
				{
				}
				operator[](const CUtlMemory<UtlRBTreeNode_t<CBaseFileSystem::PrintSearchPaths()::sort_search_paths_t, short unsigned int>, short uns this,
						short unsigned int i); // 737
				CUtlRBTree<CBaseFileSystem::PrintSearchPaths()::sort_search_paths_t, short unsigned int, bool (::Links(
					short unsigned int i); // 999
				CUtlRBTree<CBaseFileSystem::PrintSearchPaths()::sort_search_paths_t, short unsigned int, bool (::LinkToParent(
						short unsigned int i,
						short unsigned int parent,
						bool isLeft); // 984
				CUtlRBTree<CBaseFileSystem::PrintSearchPaths()::sort_search_paths_t, short unsigned int, bool (::InsertAt(
					short unsigned int parent,
					bool leftchild,
					const sort_search_paths_t* pCopyFrom); // 1709
			}
			CUtlRBTree<CBaseFileSystem::PrintSearchPaths()::sort_search_paths_t, short unsigned int, bool (::Insert(
				const sort_search_paths_t& insert,
				ERBTreeInsertBehavior eInsertBehavior); // 798
			CUtlString::~CUtlString(); // 768
			sort_search_paths_t::~sort_search_paths_t(); // 799
		}
	}
	{
		short unsigned int i; // 801
		{
			const sort_search_paths_t& record; // 803
			const char* pszPack; // 805
			const char* pszType; // 806
			operator[](const CUtlMemory<UtlRBTreeNode_t<CBaseFileSystem::PrintSearchPaths()::sort_search_paths_t, short unsigned int>, short uns this,
					short unsigned int i); // 539
			CUtlRBTree<CBaseFileSystem::PrintSearchPaths()::sort_search_paths_t, short unsigned int, bool (::Element(
				short unsigned int i); // 551
			CUtlRBTree<CBaseFileSystem::PrintSearchPaths()::sort_search_paths_t, short unsigned int, bool (::operator[](
					short unsigned int i); // 803
			CSearchPath::GetPackFile(); // 807
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 776
			CBufferString::String(); // 323
			CPackedStore::BaseName(); // 810
			CUtlSymbol::CUtlSymbol(
					const CUtlSymbol& sym);  // 761
			CThreadMutex::Lock(
				const char* pFileName,
				int nLineNumber);  // 3047
			CThreadMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 3053
			CThreadRWLock::LockForRead(
					const char* pFileName,
					int nLineNumber);  // 267
			CUtlSymbol::CUtlSymbol(
					const CUtlSymbol& sym);  // 268
			CThreadMutex::Lock(
				const char* pFileName,
				int nLineNumber);  // 3058
			CThreadMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 3064
			CThreadRWLock::UnlockRead(
					const char* pFileName,
					int nLineNumber);  // 269
			CUtlSymbolTableMT::String(
				CUtlSymbol id);  // 761
			CSearchPath::GetPathString(); // 813
			CUtlString::Get(); // 99
			CUtlString::String(); // 813
		}
		operator[](const CUtlMemory<UtlRBTreeNode_t<CBaseFileSystem::PrintSearchPaths()::sort_search_paths_t, short unsigned int>, sho this,
				short unsigned int i); // 611
		CUtlRBTree<CBaseFileSystem::PrintSearchPaths()::sort_search_paths_t, short unsigned int, bool (::LeftChild(
				short unsigned int i); // 1329
		CUtlRBTree<CBaseFileSystem::PrintSearchPaths()::sort_search_paths_t, short unsigned int, bool (::FirstInorder()::sort_search_paths_t, short unsigned int, bool (*)(const CBase this); // 801
		IsIdxValid(const CUtlMemory<UtlRBTreeNode_t<CBaseFileSystem::PrintSearchPaths()::sort_search_paths_t, short unsigned int>, sho this,
				short unsigned int i); // 661
		CUtlRBTree<CBaseFileSystem::PrintSearchPaths()::sort_search_paths_t, short unsigned int, bool (::LeftChild(
				short unsigned int i); // 667
		CUtlRBTree<CBaseFileSystem::PrintSearchPaths()::sort_search_paths_t, short unsigned int, bool (::IsValidIndex(
				short unsigned int i); // 659
		CUtlRBTree<CBaseFileSystem::PrintSearchPaths()::sort_search_paths_t, short unsigned int, bool (::IsValidIndex(
				short unsigned int i); // 1339
		CUtlRBTree<CBaseFileSystem::PrintSearchPaths()::sort_search_paths_t, short unsigned int, bool (::RightChild(
				short unsigned int i); // 1343
		{
			short unsigned int left; // 1346
			operator[](const CUtlMemory<UtlRBTreeNode_t<CBaseFileSystem::PrintSearchPaths()::sort_search_paths_t, short unsigned int>, sho this,
					short unsigned int i); // 611
			CUtlRBTree<CBaseFileSystem::PrintSearchPaths()::sort_search_paths_t, short unsigned int, bool (::LeftChild(
					short unsigned int i); // 1347
		}
		CUtlRBTree<CBaseFileSystem::PrintSearchPaths()::sort_search_paths_t, short unsigned int, bool (::Parent(
			short unsigned int i); // 1352
		operator[](const CUtlMemory<UtlRBTreeNode_t<CBaseFileSystem::PrintSearchPaths()::sort_search_paths_t, short unsigned int>, sho this,
				short unsigned int i); // 617
		CUtlRBTree<CBaseFileSystem::PrintSearchPaths()::sort_search_paths_t, short unsigned int, bool (::RightChild(
				short unsigned int i); // 633
		CUtlRBTree<CBaseFileSystem::PrintSearchPaths()::sort_search_paths_t, short unsigned int, bool (::IsRightChild(
				short unsigned int i); // 1353
		CUtlRBTree<CBaseFileSystem::PrintSearchPaths()::sort_search_paths_t, short unsigned int, bool (::Parent(
			short unsigned int i); // 1357
		CUtlRBTree<CBaseFileSystem::PrintSearchPaths()::sort_search_paths_t, short unsigned int, bool (::NextInorder(
				short unsigned int i); // 801
	}
	ValidateGrowSize(const CUtlMemory<UtlRBTreeNode_t<CBaseFileSystem::PrintSearchPaths()::sort_search_paths_t, short unsigned int>, short uns this); // 475
	CUtlMemory(const CUtlMemory<UtlRBTreeNode_t<CBaseFileSystem::PrintSearchPaths()::sort_search_paths_t, short unsigned int>, short uns this,
			int nGrowSize,
			int nInitAllocationCount); // 484
	InvalidIndex(void); // 486
	InvalidIndex(void); // 488
	Iterator_t::Iterator_t(
			short unsigned int i);  // 86
	InvalidIterator(const CUtlMemory<UtlRBTreeNode_t<CBaseFileSystem::PrintSearchPaths()::sort_search_paths_t, short unsigned int>, sho this); // 489
	CUtlRBTree<CBaseFileSystem::PrintSearchPaths()::sort_search_paths_t, short unsigned int, bool (::ResetDbgInfo()::sort_search_paths_t, short unsigned int, bool (*)(const CBaseFileSy this); // 491
	CUtlRBTree<CBaseFileSystem::PrintSearchPaths()::sort_search_paths_t, short unsigned int, bool (::CUtlRBTree(
			int growSize,
			int initSize,
			const LessFunc_t& lessfunc); // 786
	CUtlVectorBase<CBaseFileSystem::CSearchPath, CUtlMemory<CBaseFileSystem::CSearchPath, int> >::Count(); // 788
	Iterator_t::Iterator_t(
			short unsigned int i);  // 86
	InvalidIterator(const CUtlMemory<UtlRBTreeNode_t<CBaseFileSystem::PrintSearchPaths()::sort_search_paths_t, short unsigned int>, sho this); // 1248
	{
	}
	{
	}
	{
	}
	{
		Iterator_t it; // 1256
		IsIdxValid(const CUtlMemory<UtlRBTreeNode_t<CBaseFileSystem::PrintSearchPaths()::sort_search_paths_t, short unsigned int>, sho this,
				short unsigned int i); // 81
		Iterator_t::Iterator_t(
				short unsigned int i);  // 81
		First(const CUtlMemory<UtlRBTreeNode_t<CBaseFileSystem::PrintSearchPaths()::sort_search_paths_t, short unsigned int>, sho this); // 1256
		{
			short unsigned int i; // 1258
			IsIdxValid(const CUtlMemory<UtlRBTreeNode_t<CBaseFileSystem::PrintSearchPaths()::sort_search_paths_t, short unsigned int>, sho this,
					short unsigned int i); // 661
			operator[](const CUtlMemory<UtlRBTreeNode_t<CBaseFileSystem::PrintSearchPaths()::sort_search_paths_t, short unsigned int>, sho this,
					short unsigned int i); // 611
			CUtlRBTree<CBaseFileSystem::PrintSearchPaths()::sort_search_paths_t, short unsigned int, bool (::LeftChild(
					short unsigned int i); // 667
			CUtlRBTree<CBaseFileSystem::PrintSearchPaths()::sort_search_paths_t, short unsigned int, bool (::IsValidIndex(
					short unsigned int i); // 659
			CUtlRBTree<CBaseFileSystem::PrintSearchPaths()::sort_search_paths_t, short unsigned int, bool (::IsValidIndex(
					short unsigned int i); // 1259
			CUtlString::~CUtlString(); // 768
			sort_search_paths_t::~sort_search_paths_t(); // 1526
			Destruct<CBaseFileSystem::PrintSearchPaths()::sort_search_paths_t>(sort_search_paths_t* pMemory); // 1261
			CUtlRBTree<CBaseFileSystem::PrintSearchPaths()::sort_search_paths_t, short unsigned int, bool (::SetLeftChild(
					short unsigned int i,
					short unsigned int child); // 1263
		}
		Iterator_t::Iterator_t(
				short unsigned int i);  // 86
		InvalidIterator(const CUtlMemory<UtlRBTreeNode_t<CBaseFileSystem::PrintSearchPaths()::sort_search_paths_t, short unsigned int>, sho this); // 1256
		IsIdxValid(const CUtlMemory<UtlRBTreeNode_t<CBaseFileSystem::PrintSearchPaths()::sort_search_paths_t, short unsigned int>, sho this,
				short unsigned int i); // 82
		Next(const CUtlMemory<UtlRBTreeNode_t<CBaseFileSystem::PrintSearchPaths()::sort_search_paths_t, short unsigned int>, sho this,
			const Iterator_t& it); // 1256
	}
	CUtlRBTree<CBaseFileSystem::PrintSearchPaths()::sort_search_paths_t, short unsigned int, bool (::RemoveAll()::sort_search_paths_t, short unsigned int, bool (*)(const CBaseFileSy this); // 1285
	Purge(const CUtlMemory<UtlRBTreeNode_t<CBaseFileSystem::PrintSearchPaths()::sort_search_paths_t, short unsigned int>, short uns this); // 903
	Purge(const CUtlMemory<UtlRBTreeNode_t<CBaseFileSystem::PrintSearchPaths()::sort_search_paths_t, short unsigned int>, short uns this); // 1287
	CUtlRBTree<CBaseFileSystem::PrintSearchPaths()::sort_search_paths_t, short unsigned int, bool (::Purge()::sort_search_paths_t, short unsigned int, bool (*)(const CBaseFileSy this); // 509
	CUtlRBTree<CBaseFileSystem::PrintSearchPaths()::sort_search_paths_t, short unsigned int, bool (::~CUtlRBTree()::sort_search_paths_t, short unsigned int, bool (*)(const CBaseFileSy this); // 815
} /* size: 0, variables: 2, inline expansions: 16 (1675 bytes) */

// <000FD6E6> filesystem/basefilesystem.cpp:821
// variables: 9
// function calls: 39
void CBaseFileSystem::CreateVPKStoreForSearchPath(const char* pPath, CUtlStringToken pathMergeToken)
{
	CPackedStore* pParentVPK; // 824
	CPathBufferString relativeName; // 825
	CPackedStore* pVPKFile; // 871
	{
		CPathBufferString VPKName; // 829
		{
			int i; // 832
			{
				CSearchPath* pSearchPath; // 834
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 776
				CBufferString::String(); // 323
				CPackedStore::BaseName(); // 838
				CUtlMemory<CBaseFileSystem::CSearchPath, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CBaseFileSystem::CSearchPath, CUtlMemory<CBaseFileSystem::CSearchPath, int> >::operator[](
						int i);  // 834
				CSearchPath::GetPackFile(); // 835
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 781
				CBufferString::operator char const*(); // 838
				CSearchPath::GetPackFile(); // 840
			}
			CUtlVectorBase<CBaseFileSystem::CSearchPath, CUtlMemory<CBaseFileSystem::CSearchPath, int> >::Count(); // 832
		}
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<200>::CBufferStringN(); // 829
		CBufferString::IsEmpty(); // 846
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 776
		CBufferString::String(); // 848
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 852
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 852
	}
	{
		int i; // 855
		{
			CSearchPath* pSearchPath; // 857
			CPackedStore* pVPKFile; // 858
			CUtlMemory<CBaseFileSystem::CSearchPath, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CBaseFileSystem::CSearchPath, CUtlMemory<CBaseFileSystem::CSearchPath, int> >::operator[](
					int i);  // 857
			CSearchPath::GetPackFile(); // 858
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 776
			CBufferString::String(); // 323
			CPackedStore::BaseName(); // 862
		}
		CUtlVectorBase<CBaseFileSystem::CSearchPath, CUtlMemory<CBaseFileSystem::CSearchPath, int> >::Count(); // 855
	}
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 825
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 881
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 871
} /* size: 946, variables: 3, inline expansions: 8 (194 bytes) */

// <000FA2D8> filesystem/basefilesystem.cpp:891
// variables: 45
// function calls: 196
void CBaseFileSystem::AddSearchPathInternal(const char* pPath, const char* pathID, SearchPathAdd_t addType, bool bPathIsExplicitVPK, SearchPathPriority_t priority, CUtlStringToken pathMergeToken, int iForceInsertIndex)
{
	const char   __FUNCTION__; // 26510
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> > generated_id_905; // 905
	CPathBufferString newPath; // 908
	bool bMountingVPK; // 909
	CPackedStore* pVPKFile; // 922
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > previouslyAutoloadedVPKs; // 963
	bool bPreviouslyAddedSearchPath; // 964
	CUtlSymbol pathSym; // 965
	CUtlSymbol pathIDSym; // 965
	int c; // 968
	int id; // 969
	int nCount; // 1014
	int nFirstIndex; // 1015
	int nLastIndex; // 1016
	int nIndex; // 1031
	CSearchPath* sp; // 1038
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 901
	}
	{
		CUtlStringToken parentPathMergeToken; // 926
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 925
		}
		CUtlStringToken::IsValid(); // 925
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 927
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 941
	}
	{
		int i; // 970
		{
			CSearchPath* pSearchPath; // 972
			CUtlSymbol::operator==(
					const CUtlSymbol& src);  // 1000
			CUtlMemory<CBaseFileSystem::CSearchPath, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CBaseFileSystem::CSearchPath, CUtlMemory<CBaseFileSystem::CSearchPath, int> >::operator[](
					int i);  // 972
			CUtlSymbol::operator==(
					const CUtlSymbol& src);  // 973
			CSearchPath::GetPathID(); // 973
			CUtlSymbol::operator==(
					const CUtlSymbol& src);  // 973
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 573
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::GrowMemory(
					int num);  // 784
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::GrowVector(
					int num);  // 1445
			{
				int i; // 1451
				CUtlString::CUtlString(); // 1479
				Construct<CUtlString>(CUtlString* pMemory); // 1453
			}
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::InsertMultipleBefore(
						int elem,
						int num);  // 1437
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::InsertMultipleBefore(
						int elem,
						int num);  // 1294
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::AddMultipleToTail(
						int num);  // 1319
			{
				int i; // 1696
				CUtlMemory<CUtlString, int>::operator[](
						int i);  // 602
				CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
					int i);  // 1697
				CUtlString::~CUtlString(); // 1526
				Destruct<CUtlString>(CUtlString* pMemory); // 1697
			}
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::RemoveMultipleFromTail(
						int num);  // 1323
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::SetCount(
				int count);  // 573
			CUtlMemory<CUtlString, int>::Base(); // 113
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 105
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 105
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::end(); // 574
			V_strlen(const char* str); // 393
			CUtlString::Length(); // 161
			CUtlString::Get(); // 161
			CUtlString::operator=(
					const CUtlString& src);  // 209
			UtlTraitsCopyRange<CUtlString>(const CUtlString* pFrom,
							const CUtlString* pFromEnd,
							CUtlString* pTo);  // 200
			UtlTraitsCopyRange<CUtlString>(const CUtlString* pFrom,
							const CUtlString* pFromEnd,
							CUtlString* pTo);  // 574
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator=(
					const CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >& other);  // 565
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator=(
					const CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >& other);  // 452
			CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::operator=(
					const CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& src);  // 992
			CUtlMemory<CBaseFileSystem::CSearchPath, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CBaseFileSystem::CSearchPath, CUtlMemory<CBaseFileSystem::CSearchPath, int> >::operator[](
					int i);  // 993
			{
				int i; // 1721
				CUtlMemory<CUtlString, int>::operator[](
						int i);  // 602
				CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
					int i);  // 1723
				CUtlString::~CUtlString(); // 1526
				Destruct<CUtlString>(CUtlString* pMemory); // 1723
			}
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::RemoveAll(); // 993
		}
	}
	{
		int s; // 1017
		CUtlMemory<CBaseFileSystem::CSearchPath, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CBaseFileSystem::CSearchPath, CUtlMemory<CBaseFileSystem::CSearchPath, int> >::operator[](
				int i);  // 1019
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1032
	}
	{
		int i; // 1053
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 1053
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 1055
		CUtlString::Get(); // 441
		CUtlString::operator char const*(); // 1055
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
				int i);  // 1055
		V_strcmp(const char* s1,
			const char* s2);  // 1055
	}
	{
		int nSPLen; // 1065
		CPathBufferString spWithSlash; // 1066
		CPathBufferString searchPathWithSlash; // 1067
		int nSPLenWithSlash; // 1070
		{
			int i; // 1072
			{
				CSearchPath* pSearchPath; // 1074
				const char* pSearchPathString; // 1081
				int nSearchLength; // 1082
				bool bSearchIsShorter; // 1083
				const char* pUseSP; // 1085
				int nUseSPLen; // 1086
				const char* pUseSearch; // 1087
				int nMinLength; // 1103
				{
					CUtlSymbol symToAdd; // 1107
					CSearchPath* pAddToPath; // 1108
					CUtlSymbol::operator=(
							const CUtlSymbol& src);  // 1111
					{
						int i; // 1531
						CUtlVectorBase<CUtlSymbol, CUtlMemory<CUtlSymbol, int> >::Count(); // 1531
						CUtlMemory<CUtlSymbol, int>::operator[](
								int i);  // 609
						CUtlVectorBase<CUtlSymbol, CUtlMemory<CUtlSymbol, int> >::Element(
							int i);  // 1533
						CUtlSymbol::operator==(
								const CUtlSymbol& src);  // 1533
					}
					CUtlVectorBase<CUtlSymbol, CUtlMemory<CUtlSymbol, int> >::Find(
						const CUtlSymbol& src);  // 1120
					CUtlVectorBase<CUtlSymbol, CUtlMemory<CUtlSymbol, int> >::IsValidIndex(
							int i);  // 1120
					CUtlMemory<CUtlSymbol, int>::NumAllocated(); // 1196
					CUtlMemory<CUtlSymbol, int>::operator[](
							int i);  // 602
					CUtlVectorBase<CUtlSymbol, CUtlMemory<CUtlSymbol, int> >::Element(
						int i);  // 1201
					CUtlSymbol::CUtlSymbol(
							const CUtlSymbol& sym);  // 1520
					CopyConstruct<CUtlSymbol>(CUtlSymbol* pMemory,
									const CUtlSymbol& src);  // 1201
					CUtlMemory<CUtlSymbol, int>::Base(); // 112
					CUtlVectorBase<CUtlSymbol, CUtlMemory<CUtlSymbol, int> >::Base(); // 368
					CUtlVectorBase<CUtlSymbol, CUtlMemory<CUtlSymbol, int> >::ResetDbgInfo(); // 824
					CUtlVectorBase<CUtlSymbol, CUtlMemory<CUtlSymbol, int> >::GrowMemory(
							int num);  // 1198
					CUtlVectorBase<CUtlSymbol, CUtlMemory<CUtlSymbol, int> >::AddToTail(
							const CUtlSymbol& src);  // 1122
					CUtlSymbol::operator=(
							const CUtlSymbol& src);  // 1116
				}
				CThreadMutex::Lock(
					const char* pFileName,
					int nLineNumber);  // 3047
				CThreadMutex::Unlock(
					const char* pFileName,
					int nLineNumber);  // 3053
				CThreadRWLock::LockForRead(
						const char* pFileName,
						int nLineNumber);  // 267
				CUtlSymbol::CUtlSymbol(
						const CUtlSymbol& sym);  // 268
				CThreadMutex::Lock(
					const char* pFileName,
					int nLineNumber);  // 3058
				CThreadMutex::Unlock(
					const char* pFileName,
					int nLineNumber);  // 3064
				CThreadRWLock::UnlockRead(
						const char* pFileName,
						int nLineNumber);  // 269
				CUtlSymbolTableMT::String(
					CUtlSymbol id);  // 761
				CUtlSymbol::CUtlSymbol(
						const CUtlSymbol& sym);  // 761
				CSearchPath::GetPathString(); // 1081
				V_strlen(const char* str); // 1082
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 781
				CBufferString::operator char const*(); // 1099
				Min<int>(const int& val1,
					const int& val2);  // 1103
				CUtlMemory<CBaseFileSystem::CSearchPath, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CBaseFileSystem::CSearchPath, CUtlMemory<CBaseFileSystem::CSearchPath, int> >::operator[](
						int i);  // 1074
				CUtlSymbol::operator==(
						const CUtlSymbol& src);  // 1078
				CBufferString::WriteBuffer(); // 1390
				CBufferString::WriteBuffer(); // 1101
				CBufferString::RemoveAll(); // 901
				CBufferString::Set(
					const char* pString,
					int nChars,
					bool bExact);  // 1256
				CBufferString::CopyAndFixupPathName(
							const char* pPath,
							char chSeparator);  // 1090
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 781
				CBufferString::operator char const*(); // 1092
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 781
				CBufferString::operator char const*(); // 1094
				V_strlen(const char* str); // 1095
			}
			CUtlVectorBase<CBaseFileSystem::CSearchPath, CUtlMemory<CBaseFileSystem::CSearchPath, int> >::Count(); // 1072
		}
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 1065
		V_strlen(const char* str); // 1065
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<200>::CBufferStringN(); // 1066
		CBufferString::Set(
			const char* pString,
			int nChars,
			bool bExact);  // 1256
		CBufferString::CopyAndFixupPathName(
					const char* pPath,
					char chSeparator);  // 1068
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<200>::CBufferStringN(); // 1067
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 1070
		V_strlen(const char* str); // 1070
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 1126
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 1126
	}
	CBaseFileSystem::ShouldSuppressAsyncFileRequestFlushOnPathChange(); // 893
	CInterlockedIntT<int, 4>::GetRaw(); // 3180
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<unsigned int, 4>::AtomicAdd(
			unsigned int add);  // 3189
	CThreadRWLock_FastRead::LockForWrite(
			const char* pFileName,
			int nLineNumber);  // 959
	Lock(CThreadRWLock_FastRead& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> >::CAutoLockT(
			const CThreadRWLock_FastRead& lock,
			const char* pFilename,
			int nLineNumber);  // 905
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 908
	FixupSearchPathName(const char* pInPathName,
				CBufferString* pOut);  // 909
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 966
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 530
	CUtlMemory<CUtlString, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlString, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVector(); // 963
	CUtlSymbol::CUtlSymbol(); // 965
	CUtlSymbol::CUtlSymbol(); // 965
	CUtlSymbolTableMT::AddString(
			const char* pString);  // 966
	CUtlSymbol::operator=(
			const CUtlSymbol& src);  // 966
	CUtlSymbolTableMT::AddString(
			const char* pString);  // 967
	CUtlSymbol::operator=(
			const CUtlSymbol& src);  // 967
	CUtlVectorBase<CBaseFileSystem::CSearchPath, CUtlMemory<CBaseFileSystem::CSearchPath, int> >::Count(); // 968
	{
		int i; // 1721
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 1526
		Destruct<CUtlString>(CUtlString* pMemory); // 1723
	}
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::RemoveAll(); // 1798
	CUtlMemory<CUtlString, int>::Purge(); // 903
	CUtlMemory<CUtlString, int>::Purge(); // 1799
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Purge(); // 560
	ValidateAlignment<CUtlString>(void); // 508
	CUtlMemory<CUtlString, int>::Purge(); // 510
	CUtlMemory<CUtlString, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVector(); // 1129
	CUtlVectorBase<CBaseFileSystem::CSearchPath, CUtlMemory<CBaseFileSystem::CSearchPath, int> >::Count(); // 1014
	CUtlMemory<CBaseFileSystem::CSearchPath, int>::NumAllocated(); // 782
	CUtlMemory<CBaseFileSystem::CSearchPath, int>::Base(); // 112
	CUtlVectorBase<CBaseFileSystem::CSearchPath, CUtlMemory<CBaseFileSystem::CSearchPath, int> >::Base(); // 368
	CUtlVectorBase<CBaseFileSystem::CSearchPath, CUtlMemory<CBaseFileSystem::CSearchPath, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CBaseFileSystem::CSearchPath, CUtlMemory<CBaseFileSystem::CSearchPath, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<CBaseFileSystem::CSearchPath, CUtlMemory<CBaseFileSystem::CSearchPath, int> >::GrowVector(
			int num);  // 1171
	CUtlMemory<CBaseFileSystem::CSearchPath, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CBaseFileSystem::CSearchPath, CUtlMemory<CBaseFileSystem::CSearchPath, int> >::Element(
		int i);  // 1173
	Construct<CBaseFileSystem::CSearchPath>(CSearchPath* pMemory); // 1173
	CUtlVectorBase<CBaseFileSystem::CSearchPath, CUtlMemory<CBaseFileSystem::CSearchPath, int> >::InsertBefore(
			int elem);  // 1035
	CUtlMemory<CBaseFileSystem::CSearchPath, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CBaseFileSystem::CSearchPath, CUtlMemory<CBaseFileSystem::CSearchPath, int> >::operator[](
			int i);  // 1038
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 3047
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 3053
	CThreadRWLock::LockForRead(
			const char* pFileName,
			int nLineNumber);  // 267
	CUtlSymbol::CUtlSymbol(
			const CUtlSymbol& sym);  // 268
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 3058
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 3064
	CThreadRWLock::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 269
	CUtlSymbolTableMT::String(
		CUtlSymbol id);  // 790
	CUtlSymbol::operator=(
			const CUtlSymbol& src);  // 789
	CUtlSymbol::CUtlSymbol(
			const CUtlSymbol& sym);  // 790
	CSearchPath::SetPath(
		CUtlSymbol id);  // 1039
	CUtlSymbol::CUtlSymbol(
			const CUtlSymbol& sym);  // 1039
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator=(
			const CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >& other);  // 452
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::operator=(
			const CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& src);  // 1040
	CSearchPath::SetPackFile(
			CPackedStore* pPackFile);  // 1042
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1129
	Unlock(CThreadRWLock_FastRead& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> >::~CAutoLockT(); // 1129
} /* size: 0, variables: 16, inline expansions: 67 (4547 bytes) */

// <000FA0D0> filesystem/basefilesystem.cpp:1136
// variables: 3
// function calls: 6
void CBaseFileSystem::FindSearchPath(CUtlSymbol pathSym, CUtlSymbol pathIDSym)
{
	const int  nNumSearchPaths; // 1138
	{
		int iPath; // 1139
		{
			const CSearchPath& currentPath; // 1141
			CUtlSymbol::operator==(
					const CUtlSymbol& src);  // 1143
			CUtlMemory<CBaseFileSystem::CSearchPath, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CBaseFileSystem::CSearchPath, CUtlMemory<CBaseFileSystem::CSearchPath, int> >::operator[](
					int i);  // 1141
			CSearchPath::GetPathID(); // 1144
			CUtlSymbol::operator==(
					const CUtlSymbol& src);  // 1144
		}
	}
	CUtlVectorBase<CBaseFileSystem::CSearchPath, CUtlMemory<CBaseFileSystem::CSearchPath, int> >::Count(); // 1138
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <00112E0F> filesystem/basefilesystem.cpp:1157
void CBaseFileSystem::AddSearchPath(const char* pPath, const char* pPathID, SearchPathAdd_t addType, SearchPathPriority_t nPriority, CUtlStringToken pathMergeToken)
{
} /* size: 27 */

// <000F9488> filesystem/basefilesystem.cpp:1166
// variables: 7
// function calls: 39
void CBaseFileSystem::GetSearchPathImpl(const char* pathID, GetSearchPathTypes_t nPathTypes, CBufferString* pPath, int nMaxElements)
{
	int nLen; // 1169
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForReadTrait<CThreadRWLock_FastRead> > generated_id_1175; // 1175
	CPathBufferString pathBuf; // 1177
	CSearchPathsIterator iter; // 1179
	{
		const CSearchPath* pSearchPath; // 1180
		{
			CPackedStore* pPackFile; // 1192
			const char* pPathString; // 1202
			CThreadMutex::Lock(
				const char* pFileName,
				int nLineNumber);  // 3047
			CThreadMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 3053
			CThreadRWLock::LockForRead(
					const char* pFileName,
					int nLineNumber);  // 267
			CUtlSymbol::CUtlSymbol(
					const CUtlSymbol& sym);  // 268
			CThreadMutex::Lock(
				const char* pFileName,
				int nLineNumber);  // 3058
			CThreadMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 3064
			CThreadRWLock::UnlockRead(
					const char* pFileName,
					int nLineNumber);  // 269
			CUtlSymbolTableMT::String(
				CUtlSymbol id);  // 761
			CUtlSymbol::CUtlSymbol(
					const CUtlSymbol& sym);  // 761
			CSearchPath::GetPathString(); // 1205
			CSearchPath::GetPackFile(); // 1192
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 776
			CBufferString::String(); // 1210
			CBufferString::Append(
				char ch,
				bool bExact);  // 1219
			V_strlen(const char* str); // 1223
			CBufferString::Append(
				const char* pString,
				int nChars,
				bool bExact);  // 1226
		}
		CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 447
		CSearchPathsVisits::Reset(); // 4479
		CSearchPathsIterator::GetFirst(); // 4475
		CSearchPathsIterator::GetFirst(); // 1180
	}
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 1172
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<unsigned int, 4>::operator++(); // 3093
	CThreadRWLock_FastRead::LockForRead(
			const char* pFileName,
			int nLineNumber);  // 951
	Lock(CThreadRWLock_FastRead& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForReadTrait<CThreadRWLock_FastRead> >::CAutoLockT(
			const CThreadRWLock_FastRead& lock,
			const char* pFilename,
			int nLineNumber);  // 1175
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 1177
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1232
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<unsigned int, 4>::operator--(); // 3106
	CThreadRWLock_FastRead::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 952
	Unlock(CThreadRWLock_FastRead& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForReadTrait<CThreadRWLock_FastRead> >::~CAutoLockT(); // 1232
} /* size: 1509, variables: 4, inline expansions: 18 (501 bytes) */

// <000F93CE> filesystem/basefilesystem.cpp:1234
void CBaseFileSystem::GetSearchPath(const char* pathID, GetSearchPathTypes_t nPathTypes, CBufferString* pPath, int nMaxElements)
{
} /* size: 21 */

// <000F90A6> filesystem/basefilesystem.cpp:1240
// variables: 2
// function calls: 10
void CBaseFileSystem::GetMergeTokenForPath(const char* pPath, const char* pathID)
{
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForReadTrait<CThreadRWLock_FastRead> > generated_id_1242; // 1242
	const CSearchPath* pSearchPath; // 1243
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<unsigned int, 4>::operator++(); // 3093
	CThreadRWLock_FastRead::LockForRead(
			const char* pFileName,
			int nLineNumber);  // 951
	Lock(CThreadRWLock_FastRead& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForReadTrait<CThreadRWLock_FastRead> >::CAutoLockT(
			const CThreadRWLock_FastRead& lock,
			const char* pFilename,
			int nLineNumber);  // 1242
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<unsigned int, 4>::operator--(); // 3106
	CThreadRWLock_FastRead::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 952
	Unlock(CThreadRWLock_FastRead& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForReadTrait<CThreadRWLock_FastRead> >::~CAutoLockT(); // 1250
} /* size: 187, variables: 2, inline expansions: 10 (381 bytes) */

// <000F7CDD> filesystem/basefilesystem.cpp:1252
// variables: 10
// function calls: 75
void CBaseFileSystem::GetMergedPaths(CUtlStringToken pathMergeToken, CBufferString* pPath)
{
	{
		CUtlVectorFixedGrowable<CUtlSymbol, 128> matchingPaths; // 1258
		bool bNotFirst; // 1271
		{
			CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForReadTrait<CThreadRWLock_FastRead> > generated_id_1260; // 1260
			{
				int i; // 1261
				{
					CSearchPath* pSearchPath; // 1263
					CUtlMemory<CBaseFileSystem::CSearchPath, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CBaseFileSystem::CSearchPath, CUtlMemory<CBaseFileSystem::CSearchPath, int> >::operator[](
							int i);  // 1263
					CUtlStringToken::operator!=(
							const CUtlStringToken& other);  // 1264
					CUtlMemory<CUtlSymbol, int>::NumAllocated(); // 1196
					CUtlMemory<CUtlSymbol, int>::operator[](
							int i);  // 602
					CUtlVectorBase<CUtlSymbol, CUtlMemoryFixedGrowable<CUtlSymbol, 128, int> >::Element(
						int i);  // 1201
					CUtlSymbol::CUtlSymbol(
							const CUtlSymbol& sym);  // 1520
					CopyConstruct<CUtlSymbol>(CUtlSymbol* pMemory,
									const CUtlSymbol& src);  // 1201
					CUtlMemory<CUtlSymbol, int>::Base(); // 112
					CUtlVectorBase<CUtlSymbol, CUtlMemoryFixedGrowable<CUtlSymbol, 128, int> >::Base(); // 368
					CUtlVectorBase<CUtlSymbol, CUtlMemoryFixedGrowable<CUtlSymbol, 128, int> >::ResetDbgInfo(); // 824
					CUtlVectorBase<CUtlSymbol, CUtlMemoryFixedGrowable<CUtlSymbol, 128, int> >::GrowMemory(
							int num);  // 1198
					CUtlVectorBase<CUtlSymbol, CUtlMemoryFixedGrowable<CUtlSymbol, 128, int> >::AddToTail(
							const CUtlSymbol& src);  // 1267
				}
				CUtlVectorBase<CBaseFileSystem::CSearchPath, CUtlMemory<CBaseFileSystem::CSearchPath, int> >::Count(); // 1261
			}
			ThreadInterlockedIncrement(volatile int32* p); // 576
			CInterlockedIntT<unsigned int, 4>::operator++(); // 3093
			CThreadRWLock_FastRead::LockForRead(
					const char* pFileName,
					int nLineNumber);  // 951
			Lock(CThreadRWLock_FastRead& lock,
				const char* pFileName,
				int nLineNumber);  // 978
			CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForReadTrait<CThreadRWLock_FastRead> >::CAutoLockT(
					const CThreadRWLock_FastRead& lock,
					const char* pFilename,
					int nLineNumber);  // 1260
			ThreadInterlockedDecrement(volatile int32* p); // 586
			CInterlockedIntT<unsigned int, 4>::operator--(); // 3106
			CThreadRWLock_FastRead::UnlockRead(
					const char* pFileName,
					int nLineNumber);  // 952
			Unlock(CThreadRWLock_FastRead& lock,
				const char* pFileName,
				int nLineNumber);  // 983
			CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForReadTrait<CThreadRWLock_FastRead> >::~CAutoLockT(); // 1269
		}
		{
			int i; // 1272
			{
				CUtlSymbol curSym; // 1274
				bool bDuplicate; // 1275
				const char* pPathString; // 1288
				{
					int j; // 1276
					CUtlSymbol::operator==(
							const CUtlSymbol& src);  // 1278
				}
				CUtlMemory<CUtlSymbol, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CUtlSymbol, CUtlMemoryFixedGrowable<CUtlSymbol, 128, int> >::operator[](
						int i);  // 1274
				CUtlSymbol::CUtlSymbol(
						const CUtlSymbol& sym);  // 1274
				CUtlSymbol::CUtlSymbol(
						const CUtlSymbol& sym);  // 1288
				CThreadMutex::Lock(
					const char* pFileName,
					int nLineNumber);  // 3047
				CThreadMutex::Unlock(
					const char* pFileName,
					int nLineNumber);  // 3053
				CThreadRWLock::LockForRead(
						const char* pFileName,
						int nLineNumber);  // 267
				CUtlSymbol::CUtlSymbol(
						const CUtlSymbol& sym);  // 268
				CThreadMutex::Lock(
					const char* pFileName,
					int nLineNumber);  // 3058
				CThreadMutex::Unlock(
					const char* pFileName,
					int nLineNumber);  // 3064
				CThreadRWLock::UnlockRead(
						const char* pFileName,
						int nLineNumber);  // 269
				CUtlSymbolTableMT::String(
					CUtlSymbol id);  // 1288
				CBufferString::Append(
					const char* pString,
					int nChars,
					bool bExact);  // 1298
				CBufferString::Append(
					char ch,
					bool bExact);  // 1292
			}
			CUtlVectorBase<CUtlSymbol, CUtlMemoryFixedGrowable<CUtlSymbol, 128, int> >::Count(); // 1272
		}
		CUtlMemory<CUtlSymbol, int>::CUtlMemory(
				CUtlSymbol* pMemory,
				int numElements,
				bool bGrowable,
				uint32 nGrowable_GrowSize);  // 197
		CUtlMemory<CUtlSymbol, int>::EnsureCapacity(
				int num);  // 199
		CUtlMemoryFixedGrowable_Base<CUtlSymbol, int>::CUtlMemoryFixedGrowable_Base(
						CUtlSymbol* pFixedMemory,
						int nFixedElements,
						int nGrowSize,
						int nInitAllocationCount);  // 228
		AlignedByteArrayExplicit_t<128, CUtlSymbol, 2>::AlignedByteArrayExplicit_t(); // 1597
		AlignedByteArray_t<128, CUtlSymbol>::AlignedByteArray_t(); // 228
		AlignedByteArrayExplicit_t<128, CUtlSymbol, 2>::Base(); // 231
		CUtlMemoryFixedGrowable<CUtlSymbol, 128, int>::CUtlMemoryFixedGrowable(
					int nGrowSize,
					int nInitSize);  // 527
		CUtlVectorBase<CUtlSymbol, CUtlMemoryFixedGrowable<CUtlSymbol, 128, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<CUtlSymbol, CUtlMemoryFixedGrowable<CUtlSymbol, 128, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 484
		CUtlVectorFixedGrowable<CUtlSymbol, 128>::CUtlVectorFixedGrowable(
					int growSize);  // 1258
		CUtlMemory<CUtlSymbol, int>::IsExternallyAllocated(); // 577
		CUtlMemory<CUtlSymbol, int>::ConvertToExternalMemory(
					CUtlSymbol* pMemory,
					int numElements,
					int nCopyElements,
					bool bSetGrowable,
					uint32 nGrowable_GrowSize);  // 207
		CUtlMemoryFixedGrowable_Base<CUtlSymbol, int>::Purge_FixedGrowable(
					CUtlSymbol* pFixedMemory,
					int nFixedElements,
					int nPurgeToCount);  // 203
		CUtlMemoryFixedGrowable_Base<CUtlSymbol, int>::Purge_FixedGrowable(
					CUtlSymbol* pFixedMemory,
					int nFixedElements,
					int nPurgeToCount);  // 237
		AlignedByteArrayExplicit_t<128, CUtlSymbol, 2>::Base(); // 237
		CUtlMemoryFixedGrowable<CUtlSymbol, 128, int>::Purge(
			int numElements);  // 1799
		CUtlVectorBase<CUtlSymbol, CUtlMemoryFixedGrowable<CUtlSymbol, 128, int> >::RemoveAll(); // 1798
		CUtlMemory<CUtlSymbol, int>::Base(); // 112
		CUtlVectorBase<CUtlSymbol, CUtlMemoryFixedGrowable<CUtlSymbol, 128, int> >::Base(); // 368
		CUtlVectorBase<CUtlSymbol, CUtlMemoryFixedGrowable<CUtlSymbol, 128, int> >::ResetDbgInfo(); // 1800
		CUtlVectorBase<CUtlSymbol, CUtlMemoryFixedGrowable<CUtlSymbol, 128, int> >::Purge(); // 560
		ValidateAlignment<CUtlSymbol>(void); // 508
		CUtlMemory<CUtlSymbol, int>::Purge(); // 903
		CUtlMemory<CUtlSymbol, int>::Purge(); // 510
		CUtlMemory<CUtlSymbol, int>::~CUtlMemory(); // 191
		CUtlMemoryFixedGrowable_Base<CUtlSymbol, int>::~CUtlMemoryFixedGrowable_Base(); // 223
		CUtlMemoryFixedGrowable<CUtlSymbol, 128, int>::~CUtlMemoryFixedGrowable(); // 562
		CUtlVectorBase<CUtlSymbol, CUtlMemoryFixedGrowable<CUtlSymbol, 128, int> >::~CUtlVectorBase(); // 478
		CUtlVectorFixedGrowable<CUtlSymbol, 128>::~CUtlVectorFixedGrowable(); // 1300
	}
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 1254
	CUtlStringToken::IsValid(); // 1255
	CBufferString::Length(); // 1302
} /* size: 1309, inline expansions: 6 (140 bytes) */

// <000F714F> filesystem/basefilesystem.cpp:1306
// variables: 5
// function calls: 43
void CBaseFileSystem::GetSearchPathsForPathID(const char* pathID, GetSearchPathTypes_t nPathTypes, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& list)
{
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForReadTrait<CThreadRWLock_FastRead> > generated_id_1308; // 1308
	CPathBufferString pathBuf; // 1310
	CSearchPathsIterator iter; // 1312
	{
		const CSearchPath* pSearchPath; // 1313
		{
			CPackedStore* pPackFile; // 1315
			CThreadMutex::Lock(
				const char* pFileName,
				int nLineNumber);  // 3047
			CThreadMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 3053
			CThreadRWLock::LockForRead(
					const char* pFileName,
					int nLineNumber);  // 267
			CUtlSymbol::CUtlSymbol(
					const CUtlSymbol& sym);  // 268
			CThreadMutex::Lock(
				const char* pFileName,
				int nLineNumber);  // 3058
			CThreadMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 3064
			CThreadRWLock::UnlockRead(
					const char* pFileName,
					int nLineNumber);  // 269
			CUtlSymbolTableMT::String(
				CUtlSymbol id);  // 761
			CUtlSymbol::CUtlSymbol(
					const CUtlSymbol& sym);  // 761
			CSearchPath::GetPathString(); // 1325
			CUtlString::CUtlString(
					const char* pString);  // 1325
			CUtlMemory<CUtlString, int>::NumAllocated(); // 1247
			CUtlMemory<CUtlString, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
				int i);  // 1252
			CUtlString::Get(); // 354
			CUtlString::CUtlString(
					const CUtlString& string);  // 1514
			Construct<CUtlString, CUtlString>(CUtlString* pMemory); // 1252
			CUtlMemory<CUtlString, int>::Base(); // 112
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 368
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::GrowMemory(
					int num);  // 1249
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::AddToTail(
					CUtlString& src);  // 1325
			CUtlString::~CUtlString(); // 1325
			CSearchPath::GetPackFile(); // 1315
		}
		CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 447
		CSearchPathsVisits::Reset(); // 4479
		CSearchPathsIterator::GetFirst(); // 4475
		CSearchPathsIterator::GetFirst(); // 1313
	}
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<unsigned int, 4>::operator++(); // 3093
	CThreadRWLock_FastRead::LockForRead(
			const char* pFileName,
			int nLineNumber);  // 951
	Lock(CThreadRWLock_FastRead& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForReadTrait<CThreadRWLock_FastRead> >::CAutoLockT(
			const CThreadRWLock_FastRead& lock,
			const char* pFilename,
			int nLineNumber);  // 1308
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 1310
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1327
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<unsigned int, 4>::operator--(); // 3106
	CThreadRWLock_FastRead::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 952
	Unlock(CThreadRWLock_FastRead& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForReadTrait<CThreadRWLock_FastRead> >::~CAutoLockT(); // 1327
} /* size: 1053, variables: 3, inline expansions: 15 (403 bytes) */

// <000F62B4> filesystem/basefilesystem.cpp:1333
// variables: 5
// function calls: 56
void CBaseFileSystem::GetSearchPathID(CBufferString* pStrBuf)
{
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForReadTrait<CThreadRWLock_FastRead> > generated_id_1335; // 1335
	CUtlVector<CUtlSymbol, CUtlMemory<CUtlSymbol, int> > list; // 1340
	{
		int i; // 1341
		{
			CUtlSymbol pathID; // 1343
			CUtlMemory<CBaseFileSystem::CSearchPath, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CBaseFileSystem::CSearchPath, CUtlMemory<CBaseFileSystem::CSearchPath, int> >::operator[](
					int i);  // 1343
			CSearchPath::GetPathID(); // 1343
			CUtlSymbol::CUtlSymbol(
					const CUtlSymbol& sym);  // 1343
			{
				int i; // 1531
				CUtlSymbol::operator==(
						const CUtlSymbol& src);  // 1533
			}
			CUtlVectorBase<CUtlSymbol, CUtlMemory<CUtlSymbol, int> >::Find(
				const CUtlSymbol& src);  // 1344
			CUtlSymbol::CUtlSymbol(
					const CUtlSymbol& sym);  // 1520
			CopyConstruct<CUtlSymbol>(CUtlSymbol* pMemory,
							const CUtlSymbol& src);  // 1201
			CUtlMemory<CUtlSymbol, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CUtlSymbol, CUtlMemory<CUtlSymbol, int> >::Element(
				int i);  // 1201
			CUtlVectorBase<CUtlSymbol, CUtlMemory<CUtlSymbol, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<CUtlSymbol, CUtlMemory<CUtlSymbol, int> >::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<CUtlSymbol, CUtlMemory<CUtlSymbol, int> >::AddToTail(
					const CUtlSymbol& src);  // 1346
			CUtlMemory<CBaseFileSystem::CSearchPath, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CBaseFileSystem::CSearchPath, CUtlMemory<CBaseFileSystem::CSearchPath, int> >::operator[](
					int i);  // 1347
			CUtlSymbol::CUtlSymbol(
					const CUtlSymbol& sym);  // 755
			CThreadMutex::Lock(
				const char* pFileName,
				int nLineNumber);  // 3047
			CThreadMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 3053
			CThreadRWLock::LockForRead(
					const char* pFileName,
					int nLineNumber);  // 267
			CUtlSymbol::CUtlSymbol(
					const CUtlSymbol& sym);  // 268
			CThreadMutex::Lock(
				const char* pFileName,
				int nLineNumber);  // 3058
			CThreadMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 3064
			CThreadRWLock::UnlockRead(
					const char* pFileName,
					int nLineNumber);  // 269
			CUtlSymbolTableMT::String(
				CUtlSymbol id);  // 755
			CPathIDInfo::GetPathIDString(); // 784
			CSearchPath::GetPathIDString(); // 1347
			CBufferString::Append(
				const char* pString,
				int nChars,
				bool bExact);  // 1347
			CBufferString::Append(
				const char* pString,
				int nChars,
				bool bExact);  // 1348
		}
		CUtlVectorBase<CBaseFileSystem::CSearchPath, CUtlMemory<CBaseFileSystem::CSearchPath, int> >::Count(); // 1341
	}
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<unsigned int, 4>::operator++(); // 3093
	CThreadRWLock_FastRead::LockForRead(
			const char* pFileName,
			int nLineNumber);  // 951
	Lock(CThreadRWLock_FastRead& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForReadTrait<CThreadRWLock_FastRead> >::CAutoLockT(
			const CThreadRWLock_FastRead& lock,
			const char* pFilename,
			int nLineNumber);  // 1335
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 1337
	CUtlMemory<CUtlSymbol, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlSymbol, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CUtlSymbol, CUtlMemory<CUtlSymbol, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CUtlSymbol, CUtlMemory<CUtlSymbol, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CUtlSymbol, CUtlMemory<CUtlSymbol, int> >::CUtlVector(); // 1340
	CBufferString::Length(); // 1352
	CUtlMemory<CUtlSymbol, int>::Purge(); // 903
	CUtlMemory<CUtlSymbol, int>::Purge(); // 1799
	CUtlVectorBase<CUtlSymbol, CUtlMemory<CUtlSymbol, int> >::Purge(); // 560
	ValidateAlignment<CUtlSymbol>(void); // 508
	CUtlMemory<CUtlSymbol, int>::Purge(); // 510
	CUtlMemory<CUtlSymbol, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CUtlSymbol, CUtlMemory<CUtlSymbol, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CUtlSymbol, CUtlMemory<CUtlSymbol, int> >::~CUtlVector(); // 1353
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<unsigned int, 4>::operator--(); // 3106
	CThreadRWLock_FastRead::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 952
	Unlock(CThreadRWLock_FastRead& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForReadTrait<CThreadRWLock_FastRead> >::~CAutoLockT(); // 1353
} /* size: 1072, variables: 2, inline expansions: 27 (649 bytes) */

// <000F594B> filesystem/basefilesystem.cpp:1360
// variables: 10
// function calls: 28
void CBaseFileSystem::RemoveSearchPath(const char* pPath, const char* pathID)
{
	const char   __FUNCTION__; // 26380
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> > generated_id_1378; // 1378
	CPathBufferString newPath; // 1380
	CUtlSymbol lookup; // 1384
	CUtlSymbol id; // 1385
	bool bret; // 1387
	bool bContinueRemoving; // 1392
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1362
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1374
	}
	{
		int i; // 1399
		CUtlVectorBase<CBaseFileSystem::CSearchPath, CUtlMemory<CBaseFileSystem::CSearchPath, int> >::Count(); // 1399
		CUtlSymbol::operator==(
				const CUtlSymbol& src);  // 1401
		CUtlSymbol::operator UtlSymId_t(); // 807
		CSearchPath::GetPathID(); // 815
		CUtlSymbol::operator==(
				const CUtlSymbol& src);  // 815
		FilterByPathID(const CSearchPath* pSearchPath,
				const CUtlSymbol& pathID,
				bool bForceRequested);  // 1404
		CUtlMemory<CBaseFileSystem::CSearchPath, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CBaseFileSystem::CSearchPath, CUtlMemory<CBaseFileSystem::CSearchPath, int> >::operator[](
				int i);  // 1401
	}
	CBaseFileSystem::ShouldSuppressAsyncFileRequestFlushOnPathChange(); // 1366
	CInterlockedIntT<int, 4>::GetRaw(); // 3180
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<unsigned int, 4>::AtomicAdd(
			unsigned int add);  // 3189
	CThreadRWLock_FastRead::LockForWrite(
			const char* pFileName,
			int nLineNumber);  // 959
	Lock(CThreadRWLock_FastRead& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> >::CAutoLockT(
			const CThreadRWLock_FastRead& lock,
			const char* pFilename,
			int nLineNumber);  // 1378
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 1380
	FixupSearchPathName(const char* pInPathName,
				CBufferString* pOut);  // 1381
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 1382
	CUtlSymbolTableMT::AddString(
			const char* pString);  // 1384
	CUtlSymbolTableMT::AddString(
			const char* pString);  // 1385
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1417
	Unlock(CThreadRWLock_FastRead& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> >::~CAutoLockT(); // 1417
} /* size: 0, variables: 7, inline expansions: 20 (985 bytes) */

// <00110C9D> filesystem/basefilesystem.cpp:1433
// variables: 3
// function calls: 2
void CBaseFileSystem::RemoveSearchPathInternal(int nSearchPathIndex)
{
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > autoLoadedVPKs; // 1443
	CUtlString removedSearchPathID; // 1448
	const int  nNumAutoLoadedVPKs; // 1454
	CUtlVectorBase<CBaseFileSystem::CSearchPath, CUtlMemory<CBaseFileSystem::CSearchPath, int> >::Count(); // 1435
	{
	}
	CUtlVectorBase<CBaseFileSystem::CSearchPath, CUtlMemory<CBaseFileSystem::CSearchPath, int> >::Count(); // 1436
} /* size: 0, variables: 3, inline expansions: 2 (0 bytes) */

// <0010ED04> filesystem/basefilesystem.cpp:1433
// variables: 14
// function calls: 138
void CBaseFileSystem::RemoveSearchPathInternal(int nSearchPathIndex)
{
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > autoLoadedVPKs; // 1443
	CUtlString removedSearchPathID; // 1448
	const int  nNumAutoLoadedVPKs; // 1454
	CUtlMemory<CBaseFileSystem::CSearchPath, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CBaseFileSystem::CSearchPath, CUtlMemory<CBaseFileSystem::CSearchPath, int> >::operator[](
			int i);  // 1444
	CUtlMemory<CUtlString, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlString, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVector(); // 1443
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 573
	{
		int i; // 1696
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
			int i);  // 1697
		CUtlString::~CUtlString(); // 1526
		Destruct<CUtlString>(CUtlString* pMemory); // 1697
	}
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::RemoveMultipleFromTail(
				int num);  // 1323
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::GrowVector(
			int num);  // 1445
	{
		int i; // 1451
		CUtlString::CUtlString(); // 1479
		Construct<CUtlString>(CUtlString* pMemory); // 1453
	}
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::SetCount(
		int count);  // 573
	CUtlMemory<CUtlString, int>::Base(); // 113
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 105
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 105
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::end(); // 574
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 209
	UtlTraitsCopyRange<CUtlString>(const CUtlString* pFrom,
					const CUtlString* pFromEnd,
					CUtlString* pTo);  // 200
	UtlTraitsCopyRange<CUtlString>(const CUtlString* pFrom,
					const CUtlString* pFromEnd,
					CUtlString* pTo);  // 574
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator=(
			const CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >& other);  // 565
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator=(
			const CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >& other);  // 452
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::operator=(
			const CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& src);  // 1444
	{
		int i; // 1721
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 1526
		Destruct<CUtlString>(CUtlString* pMemory); // 1723
	}
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::RemoveAll(); // 1447
	CUtlMemory<CBaseFileSystem::CSearchPath, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CBaseFileSystem::CSearchPath, CUtlMemory<CBaseFileSystem::CSearchPath, int> >::operator[](
			int i);  // 1448
	CUtlSymbol::CUtlSymbol(
			const CUtlSymbol& sym);  // 755
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 3047
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 3053
	CThreadRWLock::LockForRead(
			const char* pFileName,
			int nLineNumber);  // 267
	CUtlSymbol::CUtlSymbol(
			const CUtlSymbol& sym);  // 268
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 3058
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 3064
	CThreadRWLock::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 269
	CUtlSymbolTableMT::String(
		CUtlSymbol id);  // 755
	CPathIDInfo::GetPathIDString(); // 784
	CSearchPath::GetPathIDString(); // 1448
	CUtlString::CUtlString(
			const char* pString);  // 1448
	{
		int i; // 1455
		CUtlString::Get(); // 441
		CUtlString::operator char const*(); // 1457
		CBaseFileSystem::RemoveVPKFile(
				const char* pVPKFileName,
				const char* pPathID);  // 691
		CBaseFileSystem::RemoveVPKFile(
				const char* pVPKFileName,
				const char* pPathID);  // 1457
		CUtlString::Get(); // 441
		CUtlString::operator char const*(); // 1457
	}
	{
		CUtlVectorFixedGrowable<CUtlSymbol, 128> validPaths; // 1463
		CUtlMemory<CUtlSymbol, int>::CUtlMemory(
				CUtlSymbol* pMemory,
				int numElements,
				bool bGrowable,
				uint32 nGrowable_GrowSize);  // 197
		CUtlMemory<CUtlSymbol, int>::EnsureCapacity(
				int num);  // 199
		CUtlMemoryFixedGrowable_Base<CUtlSymbol, int>::CUtlMemoryFixedGrowable_Base(
						CUtlSymbol* pFixedMemory,
						int nFixedElements,
						int nGrowSize,
						int nInitAllocationCount);  // 228
		AlignedByteArrayExplicit_t<128, CUtlSymbol, 2>::AlignedByteArrayExplicit_t(); // 1597
		AlignedByteArray_t<128, CUtlSymbol>::AlignedByteArray_t(); // 228
		AlignedByteArrayExplicit_t<128, CUtlSymbol, 2>::Base(); // 231
		CUtlMemoryFixedGrowable<CUtlSymbol, 128, int>::CUtlMemoryFixedGrowable(
					int nGrowSize,
					int nInitSize);  // 527
		CUtlVectorBase<CUtlSymbol, CUtlMemoryFixedGrowable<CUtlSymbol, 128, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<CUtlSymbol, CUtlMemoryFixedGrowable<CUtlSymbol, 128, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 484
		CUtlVectorFixedGrowable<CUtlSymbol, 128>::CUtlVectorFixedGrowable(
					int growSize);  // 1463
		{
			int i; // 1464
			CUtlMemory<CUtlSymbol, int>::Base(); // 112
			CUtlVectorBase<CUtlSymbol, CUtlMemoryFixedGrowable<CUtlSymbol, 128, int> >::Base(); // 368
			CUtlVectorBase<CUtlSymbol, CUtlMemoryFixedGrowable<CUtlSymbol, 128, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<CUtlSymbol, CUtlMemoryFixedGrowable<CUtlSymbol, 128, int> >::GrowMemory(
					int num);  // 1198
			CUtlMemory<CUtlSymbol, int>::NumAllocated(); // 1196
			CUtlMemory<CUtlSymbol, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CUtlSymbol, CUtlMemoryFixedGrowable<CUtlSymbol, 128, int> >::Element(
				int i);  // 1201
			CUtlSymbol::CUtlSymbol(
					const CUtlSymbol& sym);  // 1520
			CopyConstruct<CUtlSymbol>(CUtlSymbol* pMemory,
							const CUtlSymbol& src);  // 1201
			CUtlVectorBase<CUtlSymbol, CUtlMemoryFixedGrowable<CUtlSymbol, 128, int> >::AddToTail(
					const CUtlSymbol& src);  // 1468
			CUtlVectorBase<CBaseFileSystem::CSearchPath, CUtlMemory<CBaseFileSystem::CSearchPath, int> >::Count(); // 1464
			CUtlMemory<CBaseFileSystem::CSearchPath, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CBaseFileSystem::CSearchPath, CUtlMemory<CBaseFileSystem::CSearchPath, int> >::operator[](
					int i);  // 1466
			{
				int i; // 1531
				CUtlVectorBase<CUtlSymbol, CUtlMemoryFixedGrowable<CUtlSymbol, 128, int> >::Count(); // 1531
				CUtlMemory<CUtlSymbol, int>::operator[](
						int i);  // 609
				CUtlVectorBase<CUtlSymbol, CUtlMemoryFixedGrowable<CUtlSymbol, 128, int> >::Element(
					int i);  // 1533
				CUtlSymbol::operator==(
						const CUtlSymbol& src);  // 1533
			}
			CUtlVectorBase<CUtlSymbol, CUtlMemoryFixedGrowable<CUtlSymbol, 128, int> >::Find(
				const CUtlSymbol& src);  // 1466
			CUtlVectorBase<CUtlSymbol, CUtlMemoryFixedGrowable<CUtlSymbol, 128, int> >::IsValidIndex(
					int i);  // 1466
		}
		{
			int i; // 1473
			CUtlVectorBase<CBaseFileSystem::CSearchPath, CUtlMemory<CBaseFileSystem::CSearchPath, int> >::Count(); // 1473
			{
				int j; // 1475
				CUtlMemory<CBaseFileSystem::CSearchPath, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CBaseFileSystem::CSearchPath, CUtlMemory<CBaseFileSystem::CSearchPath, int> >::operator[](
						int i);  // 1475
				CUtlVectorBase<CUtlSymbol, CUtlMemory<CUtlSymbol, int> >::Count(); // 1475
				CUtlMemory<CUtlSymbol, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CUtlSymbol, CUtlMemory<CUtlSymbol, int> >::operator[](
						int i);  // 1477
				{
					int i; // 1531
					CUtlVectorBase<CUtlSymbol, CUtlMemoryFixedGrowable<CUtlSymbol, 128, int> >::Count(); // 1531
					CUtlMemory<CUtlSymbol, int>::operator[](
							int i);  // 609
					CUtlVectorBase<CUtlSymbol, CUtlMemoryFixedGrowable<CUtlSymbol, 128, int> >::Element(
						int i);  // 1533
					CUtlSymbol::operator==(
							const CUtlSymbol& src);  // 1533
				}
				CUtlVectorBase<CUtlSymbol, CUtlMemoryFixedGrowable<CUtlSymbol, 128, int> >::Find(
					const CUtlSymbol& src);  // 1477
				CUtlVectorBase<CUtlSymbol, CUtlMemoryFixedGrowable<CUtlSymbol, 128, int> >::IsValidIndex(
						int i);  // 1477
				CUtlMemory<CUtlSymbol, int>::operator[](
						int i);  // 602
				CUtlVectorBase<CUtlSymbol, CUtlMemory<CUtlSymbol, int> >::Element(
					int i);  // 1114
				memmove(void* __dest,
					const void* __src,
					size_t __len);  // 115
				V_memmove(void* dest,
						const void* src,
						size_t count);  // 1114
				CUtlVectorBase<CUtlSymbol, CUtlMemory<CUtlSymbol, int> >::ShiftElementsLeft(
							int elem,
							int num);  // 1608
				CUtlVectorBase<CUtlSymbol, CUtlMemory<CUtlSymbol, int> >::Remove(
					int elem);  // 1479
			}
		}
		CUtlMemory<CUtlSymbol, int>::IsExternallyAllocated(); // 577
		CUtlMemory<CUtlSymbol, int>::ConvertToExternalMemory(
					CUtlSymbol* pMemory,
					int numElements,
					int nCopyElements,
					bool bSetGrowable,
					uint32 nGrowable_GrowSize);  // 207
		CUtlMemoryFixedGrowable_Base<CUtlSymbol, int>::Purge_FixedGrowable(
					CUtlSymbol* pFixedMemory,
					int nFixedElements,
					int nPurgeToCount);  // 203
		CUtlMemoryFixedGrowable_Base<CUtlSymbol, int>::Purge_FixedGrowable(
					CUtlSymbol* pFixedMemory,
					int nFixedElements,
					int nPurgeToCount);  // 237
		AlignedByteArrayExplicit_t<128, CUtlSymbol, 2>::Base(); // 237
		CUtlMemoryFixedGrowable<CUtlSymbol, 128, int>::Purge(
			int numElements);  // 1799
		CUtlVectorBase<CUtlSymbol, CUtlMemoryFixedGrowable<CUtlSymbol, 128, int> >::RemoveAll(); // 1798
		CUtlMemory<CUtlSymbol, int>::Base(); // 112
		CUtlVectorBase<CUtlSymbol, CUtlMemoryFixedGrowable<CUtlSymbol, 128, int> >::Base(); // 368
		CUtlVectorBase<CUtlSymbol, CUtlMemoryFixedGrowable<CUtlSymbol, 128, int> >::ResetDbgInfo(); // 1800
		CUtlVectorBase<CUtlSymbol, CUtlMemoryFixedGrowable<CUtlSymbol, 128, int> >::Purge(); // 560
		CUtlMemory<CUtlSymbol, int>::Purge(); // 903
		CUtlMemory<CUtlSymbol, int>::Purge(); // 510
		ValidateAlignment<CUtlSymbol>(void); // 508
		CUtlMemory<CUtlSymbol, int>::~CUtlMemory(); // 191
		CUtlMemoryFixedGrowable_Base<CUtlSymbol, int>::~CUtlMemoryFixedGrowable_Base(); // 223
		CUtlMemoryFixedGrowable<CUtlSymbol, 128, int>::~CUtlMemoryFixedGrowable(); // 562
		CUtlVectorBase<CUtlSymbol, CUtlMemoryFixedGrowable<CUtlSymbol, 128, int> >::~CUtlVectorBase(); // 478
		CUtlVectorFixedGrowable<CUtlSymbol, 128>::~CUtlVectorFixedGrowable(); // 1484
	}
	CUtlString::~CUtlString(); // 1485
	{
		int i; // 1721
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 1526
		Destruct<CUtlString>(CUtlString* pMemory); // 1723
	}
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::RemoveAll(); // 1798
	CUtlMemory<CUtlString, int>::Purge(); // 903
	CUtlMemory<CUtlString, int>::Purge(); // 1799
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Purge(); // 560
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVector(); // 1485
	CUtlMemory<CBaseFileSystem::CSearchPath, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CBaseFileSystem::CSearchPath, CUtlMemory<CBaseFileSystem::CSearchPath, int> >::operator[](
			int i);  // 1447
} /* size: 2048, variables: 3, inline expansions: 52 (4682 bytes) */

// <000F5851> filesystem/basefilesystem.cpp:1433
// variables: 10
void CBaseFileSystem::RemoveSearchPathInternal(int nSearchPathIndex)
{
	const char   __FUNCTION__; // 26586
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > autoLoadedVPKs; // 1443
	CUtlString removedSearchPathID; // 1448
	const int  nNumAutoLoadedVPKs; // 1454
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1435
	}
	{
		int i; // 1455
	}
	{
		CUtlVectorFixedGrowable<CUtlSymbol, 128> validPaths; // 1463
		{
			int i; // 1464
		}
		{
			int i; // 1473
			{
				int j; // 1475
			}
		}
	}
} /* size: 0, variables: 4 */

// <000F4EF1> filesystem/basefilesystem.cpp:1492
// variables: 6
// function calls: 28
void CBaseFileSystem::RemoveSearchPaths(const char* pathID)
{
	const char   __FUNCTION__; // 26407
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> > generated_id_1506; // 1506
	bool bContinueRemoving; // 1510
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1502
	}
	{
		int i; // 1517
		{
			CUtlString p; // 1519
			CThreadMutex::Lock(
				const char* pFileName,
				int nLineNumber);  // 3047
			CThreadMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 3053
			CThreadRWLock::LockForRead(
					const char* pFileName,
					int nLineNumber);  // 267
			CUtlSymbol::CUtlSymbol(
					const CUtlSymbol& sym);  // 268
			CThreadMutex::Lock(
				const char* pFileName,
				int nLineNumber);  // 3058
			CThreadMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 3064
			CThreadRWLock::UnlockRead(
					const char* pFileName,
					int nLineNumber);  // 269
			CUtlSymbolTableMT::String(
				CUtlSymbol id);  // 755
			CUtlSymbol::CUtlSymbol(
					const CUtlSymbol& sym);  // 755
			CPathIDInfo::GetPathIDString(); // 784
			CSearchPath::GetPathIDString(); // 1519
			CUtlString::CUtlString(
					const char* pString);  // 1519
			CUtlString::CUtlString(
					const char* pString);  // 1521
			CUtlString::~CUtlString(); // 1521
			CUtlString::~CUtlString(); // 1530
			CUtlMemory<CBaseFileSystem::CSearchPath, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CBaseFileSystem::CSearchPath, CUtlMemory<CBaseFileSystem::CSearchPath, int> >::Element(
				int i);  // 1519
			CUtlString::~CUtlString(); // 1530
		}
		CUtlVectorBase<CBaseFileSystem::CSearchPath, CUtlMemory<CBaseFileSystem::CSearchPath, int> >::Count(); // 1517
	}
	CBaseFileSystem::ShouldSuppressAsyncFileRequestFlushOnPathChange(); // 1494
	CInterlockedIntT<int, 4>::GetRaw(); // 3180
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<unsigned int, 4>::AtomicAdd(
			unsigned int add);  // 3189
	CThreadRWLock_FastRead::LockForWrite(
			const char* pFileName,
			int nLineNumber);  // 959
	Lock(CThreadRWLock_FastRead& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> >::CAutoLockT(
			const CThreadRWLock_FastRead& lock,
			const char* pFilename,
			int nLineNumber);  // 1506
	Unlock(CThreadRWLock_FastRead& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> >::~CAutoLockT(); // 1532
} /* size: 0, variables: 3, inline expansions: 9 (714 bytes) */

// <000F4A77> filesystem/basefilesystem.cpp:1535
// variable: 1
// function calls: 18
void CBaseFileSystem::GetMergedSearchPaths(CUtlStringToken pathMergeToken, CUtlVector<CBaseFileSystem::CSearchPath*, CUtlMemory<CBaseFileSystem::CSearchPath*, int> >& resultsOut)
{
	{
		int i; // 1540
		CUtlVectorBase<CBaseFileSystem::CSearchPath, CUtlMemory<CBaseFileSystem::CSearchPath, int> >::Count(); // 1540
		CUtlMemory<CBaseFileSystem::CSearchPath, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CBaseFileSystem::CSearchPath, CUtlMemory<CBaseFileSystem::CSearchPath, int> >::operator[](
				int i);  // 1542
		CUtlStringToken::operator==(
				const CUtlStringToken& other);  // 1542
		CUtlMemory<CBaseFileSystem::CSearchPath::NumAllocated(); // 1247
		CUtlMemory<CBaseFileSystem::CSearchPath::Base(); // 112
		CUtlVectorBase<CBaseFileSystem::CSearchPath::Base(); // 368
		CUtlVectorBase<CBaseFileSystem::CSearchPath::ResetDbgInfo(); // 824
		CUtlMemory<CBaseFileSystem::CSearchPath::IsGrowable(); // 823
		CUtlMemory<CBaseFileSystem::CSearchPath::IsExternallyAllocated(); // 859
		CUtlMemory<CBaseFileSystem::CSearchPath::IsExternallyAllocated(); // 861
		CUtlMemory<CBaseFileSystem::CSearchPath::Grow(
			int num);  // 806
		CUtlVectorBase<CBaseFileSystem::CSearchPath::GrowMemory(
				int num);  // 1249
		CUtlMemory<CBaseFileSystem::CSearchPath::operator[](
				int i);  // 602
		CUtlVectorBase<CBaseFileSystem::CSearchPath::Element(
			int i);  // 1252
		Construct<CBaseFileSystem::CSearchPath*, CBaseFileSystem::CSearchPath*>(CSearchPath** pMemory); // 1252
		CUtlVectorBase<CBaseFileSystem::CSearchPath::AddToTail(
				CSearchPath *& src);  // 1544
	}
	CUtlStringToken::IsValid(); // 1537
} /* size: 0, inline expansions: 1 (0 bytes) */

// <000F3BBE> filesystem/basefilesystem.cpp:1552
// variables: 9
// function calls: 50
void CBaseFileSystem::SaveSearchPathState(const char* pathID)
{
	CUtlSymbol symPathID; // 1555
	CSearchPathState* pState; // 1556
	const char   __FUNCTION__; // 26461
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> > generated_id_1560; // 1560
	const int  nNumSearchPaths; // 1563
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1559
	}
	{
		int iPath; // 1564
		{
			const CSearchPath& searchPath; // 1566
			SearchPathStateEntry_t& searchPathEntry; // 1578
			CThreadMutex::Lock(
				const char* pFileName,
				int nLineNumber);  // 3047
			CThreadMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 3053
			CThreadRWLock::LockForRead(
					const char* pFileName,
					int nLineNumber);  // 267
			CUtlSymbol::CUtlSymbol(
					const CUtlSymbol& sym);  // 268
			CThreadMutex::Lock(
				const char* pFileName,
				int nLineNumber);  // 3058
			CThreadMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 3064
			CThreadRWLock::UnlockRead(
					const char* pFileName,
					int nLineNumber);  // 269
			CUtlSymbolTableMT::String(
				CUtlSymbol id);  // 761
			CUtlSymbol::CUtlSymbol(
					const CUtlSymbol& sym);  // 761
			CSearchPath::GetPathString(); // 1579
			CUtlSymbol::operator==(
					const CUtlSymbol& src);  // 815
			CUtlSymbol::operator UtlSymId_t(); // 807
			FilterByPathID(const CSearchPath* pSearchPath,
					const CUtlSymbol& pathID,
					bool bForceRequested);  // 1574
			CUtlMemory<CBaseFileSystem::SearchPathStateEntry_t, int>::NumAllocated(); // 1143
			CUtlMemory<CBaseFileSystem::SearchPathStateEntry_t, int>::Base(); // 112
			Base(const CUtlVectorBase<CBaseFileSystem::SearchPathStateEntry_t, CUtlMemory<CBaseFileSystem::SearchPathStateEntry_t, int> > this); // 368
			ResetDbgInfo(const CUtlVectorBase<CBaseFileSystem::SearchPathStateEntry_t, CUtlMemory<CBaseFileSystem::SearchPathStateEntry_t, int> > this); // 824
			CUtlMemory<CBaseFileSystem::SearchPathStateEntry_t, int>::IsGrowable(); // 823
			CUtlMemory<CBaseFileSystem::SearchPathStateEntry_t, int>::IsExternallyAllocated(); // 859
			CUtlMemory<CBaseFileSystem::SearchPathStateEntry_t, int>::IsExternallyAllocated(); // 861
			CUtlMemory<CBaseFileSystem::SearchPathStateEntry_t, int>::Grow(
				int num);  // 806
			GrowMemory(const CUtlVectorBase<CBaseFileSystem::SearchPathStateEntry_t, CUtlMemory<CBaseFileSystem::SearchPathStateEntry_t, int> >  this,
					int num);  // 1145
			CUtlMemory<CBaseFileSystem::SearchPathStateEntry_t, int>::operator[](
					int i);  // 602
			Element(const CUtlVectorBase<CBaseFileSystem::SearchPathStateEntry_t, CUtlMemory<CBaseFileSystem::SearchPathStateEntry_t, int> >  this,
				int i);  // 1148
			CUtlString::CUtlString(); // 428
			SearchPathStateEntry_t::SearchPathStateEntry_t(); // 1479
			Construct<CBaseFileSystem::SearchPathStateEntry_t>(SearchPathStateEntry_t* pMemory); // 1148
			AddToTail(const CUtlVectorBase<CBaseFileSystem::SearchPathStateEntry_t, CUtlMemory<CBaseFileSystem::SearchPathStateEntry_t, int> > this); // 1578
			CUtlMemory<CBaseFileSystem::SearchPathStateEntry_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CBaseFileSystem::SearchPathStateEntry_t, CUtlMemory<CBaseFileSystem::SearchPathStateEntry_t, int> >  this,
					int i);  // 1578
			CUtlString::operator=(
					const char* src);  // 1579
			CUtlMemory<CBaseFileSystem::CSearchPath, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CBaseFileSystem::CSearchPath, CUtlMemory<CBaseFileSystem::CSearchPath, int> >::operator[](
					int i);  // 1566
		}
	}
	CUtlSymbolTableMT::AddString(
			const char* pString);  // 1555
	CUtlString::CUtlString(
			const char* pString);  // 437
	CUtlMemory<CBaseFileSystem::SearchPathStateEntry_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CBaseFileSystem::SearchPathStateEntry_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CBaseFileSystem::SearchPathStateEntry_t, CUtlMemory<CBaseFileSystem::SearchPathStateEntry_t, int> > this); // 530
	CUtlVectorBase(const CUtlVectorBase<CBaseFileSystem::SearchPathStateEntry_t, CUtlMemory<CBaseFileSystem::SearchPathStateEntry_t, int> >  this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CBaseFileSystem::SearchPathStateEntry_t, CUtlMemory<CBaseFileSystem::SearchPathStateEntry_t, int> >::CUtlVector(); // 437
	CSearchPathState::CSearchPathState(
			const char* pPathID);  // 1556
	CInterlockedIntT<int, 4>::GetRaw(); // 3180
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<unsigned int, 4>::AtomicAdd(
			unsigned int add);  // 3189
	CThreadRWLock_FastRead::LockForWrite(
			const char* pFileName,
			int nLineNumber);  // 959
	Lock(CThreadRWLock_FastRead& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> >::CAutoLockT(
			const CThreadRWLock_FastRead& lock,
			const char* pFilename,
			int nLineNumber);  // 1560
	CUtlVectorBase<CBaseFileSystem::CSearchPath, CUtlMemory<CBaseFileSystem::CSearchPath, int> >::Count(); // 1563
	Unlock(CThreadRWLock_FastRead& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> >::~CAutoLockT(); // 1585
} /* size: 0, variables: 5, inline expansions: 17 (926 bytes) */

// <000F3620> filesystem/basefilesystem.cpp:1590
// variables: 7
// function calls: 17
void CBaseFileSystem::RestoreSearchPathState(SearchPathStateHandle_t hSearchPathState)
{
	const CSearchPathState* pState; // 1592
	const char   __FUNCTION__; // 26537
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> > generated_id_1605; // 1605
	const int  nNumStatePaths; // 1614
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1604
	}
	{
		int iPath; // 1615
		{
			const SearchPathStateEntry_t& savedPathEntry; // 1617
			CBaseFileSystem::AddSearchPath(
					const char* pPath,
					const char* pPathID,
					SearchPathAdd_t addType,
					SearchPathPriority_t nPriority,
					CUtlStringToken pathMergeToken);  // 1618
			CUtlMemory<CBaseFileSystem::SearchPathStateEntry_t, int>::operator[](
					int i);  // 595
			operator[](const CUtlVectorBase<CBaseFileSystem::SearchPathStateEntry_t, CUtlMemory<CBaseFileSystem::SearchPathStateEntry_t, i this,
					int i);  // 1617
			CUtlString::Get(); // 1618
			CUtlString::Get(); // 1618
			CUtlStringToken::CUtlStringToken(); // 1618
		}
	}
	CBaseFileSystem::ShouldSuppressAsyncFileRequestFlushOnPathChange(); // 1597
	CInterlockedIntT<int, 4>::GetRaw(); // 3180
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<unsigned int, 4>::AtomicAdd(
			unsigned int add);  // 3189
	CThreadRWLock_FastRead::LockForWrite(
			const char* pFileName,
			int nLineNumber);  // 959
	Lock(CThreadRWLock_FastRead& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> >::CAutoLockT(
			const CThreadRWLock_FastRead& lock,
			const char* pFilename,
			int nLineNumber);  // 1605
	CUtlString::Get(); // 1608
	Count(const CUtlVectorBase<CBaseFileSystem::SearchPathStateEntry_t, CUtlMemory<CBaseFileSystem::SearchPathStateEntry_t, i this); // 1614
	Unlock(CThreadRWLock_FastRead& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> >::~CAutoLockT(); // 1620
} /* size: 0, variables: 4, inline expansions: 11 (580 bytes) */

// <0010885B> filesystem/basefilesystem.cpp:1625
// variables: 2
// function calls: 18
void CBaseFileSystem::DestroySearchPathState(SearchPathStateHandle_t hSearchPathState)
{
	const CSearchPathState* pState; // 1627
	{
		int i; // 1721
		CUtlMemory<CBaseFileSystem::SearchPathStateEntry_t, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CBaseFileSystem::SearchPathStateEntry_t, CUtlMemory<CBaseFileSystem::SearchPathStateEntry_t, int> >  this,
			int i);  // 1723
		CUtlString::~CUtlString(); // 428
		SearchPathStateEntry_t::~SearchPathStateEntry_t(); // 1526
		Destruct<CBaseFileSystem::SearchPathStateEntry_t>(SearchPathStateEntry_t* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CBaseFileSystem::SearchPathStateEntry_t, CUtlMemory<CBaseFileSystem::SearchPathStateEntry_t, int> > this); // 1798
	CUtlMemory<CBaseFileSystem::SearchPathStateEntry_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CBaseFileSystem::SearchPathStateEntry_t, int>::Purge(); // 903
	CUtlMemory<CBaseFileSystem::SearchPathStateEntry_t, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CBaseFileSystem::SearchPathStateEntry_t, CUtlMemory<CBaseFileSystem::SearchPathStateEntry_t, int> > this); // 560
	ValidateAlignment<CBaseFileSystem::SearchPathStateEntry_t>(void); // 508
	CUtlMemory<CBaseFileSystem::SearchPathStateEntry_t, int>::Purge(); // 510
	CUtlMemory<CBaseFileSystem::SearchPathStateEntry_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CBaseFileSystem::SearchPathStateEntry_t, CUtlMemory<CBaseFileSystem::SearchPathStateEntry_t, int> > this); // 410
	CUtlVector<CBaseFileSystem::SearchPathStateEntry_t, CUtlMemory<CBaseFileSystem::SearchPathStateEntry_t, int> >::~CUtlVector(); // 434
	CUtlString::~CUtlString(); // 434
	CSearchPathState::~CSearchPathState(); // 1630
	CBaseFileSystem::DestroySearchPathState(
				SearchPathStateHandle_t hSearchPathState);  // 1625
} /* size: 169, variables: 1, inline expansions: 13 (665 bytes) */

// <000F35B3> filesystem/basefilesystem.cpp:1625
// variable: 1
void CBaseFileSystem::DestroySearchPathState(SearchPathStateHandle_t hSearchPathState)
{
	const CSearchPathState* pState; // 1627
} /* size: 0, variables: 1 */

// <000F2DED> filesystem/basefilesystem.cpp:1638
// variables: 6
// function calls: 27
void CBaseFileSystem::FindWritePath(const char* pFilename, const char* pathID, bool* pFoundPathId)
{
	CUtlSymbol lookup; // 1645
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForReadTrait<CThreadRWLock_FastRead> > generated_id_1647; // 1647
	int c; // 1650
	{
		int i; // 1651
		{
			CSearchPath* pSearchPath; // 1654
			{
				CPathBufferString fullPath; // 1670
				CBufferString::InitMinConstruct(
						bool bGrowable);  // 712
				CBufferString::CBufferString(); // 591
				CBufferStringN<200>::CBufferStringN(); // 1670
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 781
				CBufferString::operator char const*(); // 1672
				CBufferString::~CBufferString(); // 587
				CBufferStringN<200>::~CBufferStringN(); // 1682
				CBufferString::~CBufferString(); // 587
				CBufferStringN<200>::~CBufferStringN(); // 1682
			}
			CUtlMemory<CBaseFileSystem::CSearchPath, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CBaseFileSystem::CSearchPath, CUtlMemory<CBaseFileSystem::CSearchPath, int> >::operator[](
					int i);  // 1654
			CSearchPath::GetPathID(); // 1657
			CUtlSymbol::operator==(
					const CUtlSymbol& src);  // 1657
			CSearchPath::GetPackFile(); // 1665
		}
	}
	CUtlSymbolTableMT::AddString(
			const char* pString);  // 1645
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<unsigned int, 4>::operator++(); // 3093
	CThreadRWLock_FastRead::LockForRead(
			const char* pFileName,
			int nLineNumber);  // 951
	Lock(CThreadRWLock_FastRead& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForReadTrait<CThreadRWLock_FastRead> >::CAutoLockT(
			const CThreadRWLock_FastRead& lock,
			const char* pFilename,
			int nLineNumber);  // 1647
	CUtlVectorBase<CBaseFileSystem::CSearchPath, CUtlMemory<CBaseFileSystem::CSearchPath, int> >::Count(); // 1650
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<unsigned int, 4>::operator--(); // 3106
	CThreadRWLock_FastRead::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 952
	Unlock(CThreadRWLock_FastRead& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForReadTrait<CThreadRWLock_FastRead> >::~CAutoLockT(); // 1687
} /* size: 570, variables: 3, inline expansions: 12 (417 bytes) */

// <000F298B> filesystem/basefilesystem.cpp:1693
// variables: 2
// function calls: 10
void CBaseFileSystem::GetWritePath(const char* pFilename, const char* pathID)
{
	CSearchPath* pSearchPath; // 1695
	{
		bool bFoundPathId; // 1698
	}
	CUtlSymbol::CUtlSymbol(
			const CUtlSymbol& sym);  // 761
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 3047
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 3053
	CThreadRWLock::LockForRead(
			const char* pFileName,
			int nLineNumber);  // 267
	CUtlSymbol::CUtlSymbol(
			const CUtlSymbol& sym);  // 268
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 3058
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 3064
	CThreadRWLock::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 269
	CUtlSymbolTableMT::String(
		CUtlSymbol id);  // 761
	CSearchPath::GetPathString(); // 1727
} /* size: 685, variables: 1, inline expansions: 10 (1439 bytes) */

// <000F1BF9> filesystem/basefilesystem.cpp:1739
// variables: 16
// function calls: 34
void CBaseFileSystem::ReadToBuffer(FileHandle_t fp, CUtlBuffer& buf, int nMaxBytes, FSAllocFunc_t pfnAlloc)
{
	int64 nBytesToRead64; // 1743
	const char   __FUNCTION__; // 26272
	int nBytesToRead; // 1765
	int nBytesRead; // 1772
	int nBytesOffset; // 1773
	int64 iStartPos; // 1775
	{
		int nBytesDestBuffer; // 1779
		unsigned int nSizeAlign; // 1780
		unsigned int nBufferAlign; // 1780
		unsigned int nOffsetAlign; // 1780
		bool bBinary; // 1782
		int seekGet; // 1833
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1793
		}
		{
			void* pMemory; // 1820
			CUtlBuffer::GetFlags(); // 1821
		}
		{
			int nAlignedBase; // 1837
		}
		CUtlBuffer::TellPut(); // 1807
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 1166
		CUtlBuffer::PeekPut(
			int offset);  // 1845
		CBaseFileSystem::NoteIO(); // 2871
		CBaseFileSystem::ReadEx(
			void* pOutput,
			int destSize,
			int size,
			FileHandle_t file);  // 1845
		CBaseFileSystem::Seek(
			FileHandle_t file,
			int64 pos,
			FileSystemSeek_t whence);  // 2686
		CBaseFileSystem::Seek(
			FileHandle_t file,
			int64 pos,
			FileSystemSeek_t whence);  // 1854
	}
	CBaseFileSystem::SetBufferSize(
			FileHandle_t file,
			unsigned int nBytes);  // 2976
	CBaseFileSystem::SetBufferSize(
			FileHandle_t file,
			unsigned int nBytes);  // 1741
	CFileHandle::IsValid(); // 5250
	{
	}
	CPackedStoreFileHandle::operator bool(); // 5255
	CFileHandle::Size(); // 5248
	CFileHandle::Size(); // 2728
	CBaseFileSystem::Size(
		FileHandle_t file);  // 2720
	CBaseFileSystem::Size(
		FileHandle_t file);  // 1743
	Min<int>(const int& val1,
		const int& val2);  // 1769
	CBaseFileSystem::Tell(
		FileHandle_t file);  // 2703
	CBaseFileSystem::Tell(
		FileHandle_t file);  // 1775
	CUtlBuffer::IsText(); // 1750
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
		char c);  // 1753
} /* size: 0, variables: 6, inline expansions: 22 (845 bytes) */

// <00108705> filesystem/basefilesystem.cpp:1863
// variable: 1
// function calls: 3
void CBaseFileSystem::CreateMemoryMap(FileHandle_t file, MemoryMappedFileFlags_t nFlags)
{
	CFileHandle* pFile; // 1868
	CPackedStoreFileHandle::operator bool(); // 1870
	CPackedStoreFileHandle::MemoryMapFile(
			MemoryMappedFileFlags_t nFlags);  // 1872
	CBaseFileSystem::CreateMemoryMap(
			FileHandle_t file,
			MemoryMappedFileFlags_t nFlags);  // 1863
} /* size: 59, variables: 1, inline expansions: 3 (32 bytes) */

// <000F1BB9> filesystem/basefilesystem.cpp:1863
// variable: 1
void CBaseFileSystem::CreateMemoryMap(FileHandle_t file, MemoryMappedFileFlags_t nFlags)
{
	CFileHandle* pFile; // 1868
} /* size: 0, variables: 1 */

// <000F1A58> filesystem/basefilesystem.cpp:1883
// variables: 2
// function call: 1
void CBaseFileSystem::CreateMemoryMap(const char* pFileName, const char* pPath, MemoryMappedFileFlags_t nFlags)
{
	FileHandle_t fp; // 1885
	IMemoryMappedFile* pRet; // 1889
	CBaseFileSystem::OpenForRead(
			const char* pFileName,
			const char* pOptions,
			unsigned int flags,
			const char* pathID);  // 1885
} /* size: 149, variables: 2, inline expansions: 1 (21 bytes) */

// <000F16F3> filesystem/basefilesystem.cpp:1900
// variables: 5
// function calls: 4
void CBaseFileSystem::ReadFile(const char* pFileName, const char* pPath, CUtlBuffer& buf, int nMaxBytes, int nStartingByte, FSAllocFunc_t pfnAlloc)
{
	const char   __FUNCTION__; // 26164
	bool bBinary; // 1904
	FileHandle_t fp; // 1906
	bool bSuccess; // 1920
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1902
	}
	CUtlBuffer::IsText(); // 1904
	CUtlBuffer::ContainsCRLF(); // 1904
	CBaseFileSystem::Open(
		const char* pFileName,
		const char* pOptions,
		const char* pathID);  // 1906
	CBaseFileSystem::Seek(
		FileHandle_t file,
		int64 pos,
		FileSystemSeek_t whence);  // 1912
} /* size: 0, variables: 4, inline expansions: 4 (48 bytes) */

// <000F0F42> filesystem/basefilesystem.cpp:1930
// variables: 6
// function calls: 14
void CBaseFileSystem::ReadFileEx(const char* pFileName, const char* pPath, void** ppBuf, bool bNullTerminate, bool bOptimalAlloc, int nMaxBytes, int nStartingByte, FSAllocFunc_t pfnAlloc)
{
	FileHandle_t fp; // 1932
	int64 nBytesToRead64; // 1940
	const char   __FUNCTION__; // 26218
	int nBytesToRead; // 1947
	int nBytesRead; // 1949
	{
		int nBytesBuf; // 1961
		CBaseFileSystem::Seek(
			FileHandle_t file,
			int64 pos,
			FileSystemSeek_t whence);  // 1987
		CBaseFileSystem::NoteIO(); // 2871
		CBaseFileSystem::ReadEx(
			void* pOutput,
			int destSize,
			int size,
			FileHandle_t file);  // 1990
		CBaseFileSystem::AllocOptimalReadBuffer(
					FileHandle_t hFile,
					unsigned int nSize,
					unsigned int nOffset);  // 1972
		AlignValue<int>(int val,
				uintp alignment);  // 845
		IFileSystem::GetOptimalReadSize<int>(
					FileHandle_t hFile,
					int nLogicalSize);  // 1973
	}
	CBaseFileSystem::Open(
		const char* pFileName,
		const char* pOptions,
		const char* pathID);  // 1932
	CBaseFileSystem::SetBufferSize(
			FileHandle_t file,
			unsigned int nBytes);  // 1938
	CFileHandle::IsValid(); // 5250
	{
	}
	CPackedStoreFileHandle::operator bool(); // 5255
	CFileHandle::Size(); // 5248
	CFileHandle::Size(); // 2728
	CBaseFileSystem::Size(
		FileHandle_t file);  // 1940
	Min<int>(const int& val1,
		const int& val2);  // 1952
} /* size: 0, variables: 5, inline expansions: 8 (205 bytes) */

// <000F0BEE> filesystem/basefilesystem.cpp:2008
// variables: 5
// function calls: 7
void CBaseFileSystem::WriteFile(const char* pFileName, const char* pPath, const CUtlBuffer& buf)
{
	const char   __FUNCTION__; // 26191
	const char* pWriteFlags; // 2012
	FileHandle_t fp; // 2018
	int nBytesWritten; // 2022
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2010
	}
	CUtlBuffer::IsText(); // 2013
	CUtlBuffer::ContainsCRLF(); // 2013
	CBaseFileSystem::Open(
		const char* pFileName,
		const char* pOptions,
		const char* pathID);  // 2018
	CUtlBuffer::TellMaxPut(); // 2022
	CUtlMemory<unsigned char, int>::Base(); // 1479
	CUtlBuffer::Base(); // 2022
	CBaseFileSystem::Write(
		const void* pInput,
		int size,
		FileHandle_t file);  // 2022
} /* size: 0, variables: 4, inline expansions: 7 (60 bytes) */

// <001083E8> filesystem/basefilesystem.cpp:2029
// function calls: 2
void CBaseFileSystem::UnzipFile(const char* pFileName, const char* pPath, const char* pDestination)
{
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 2032
	CBaseFileSystem::UnzipFile(
			const char* pFileName,
			const char* pPath,
			const char* pDestination);  // 2029
} /* size: 141, inline expansions: 2 (85 bytes) */

// <000F0BA3> filesystem/basefilesystem.cpp:2029
// variable: 1
void CBaseFileSystem::UnzipFile(const char* pFileName, const char* pPath, const char* pDestination)
{
	const char   __FUNCTION__; // 26191
} /* size: 0, variables: 1 */

// <000F00D7> filesystem/basefilesystem.cpp:2120
// variables: 10
// function calls: 25
void CBaseFileSystem::CopyAFile(const char* pFileName, const char* pPath, const char* pDestination, bool bFailIfExists)
{
	FileHandle_t hSource; // 2139
	bool bSuccess; // 2140
	{
		FileHandle_t hDest; // 2156
		{
			CPathBufferString destDir; // 2152
			CBufferString::InitMinConstruct(
					bool bGrowable);  // 712
			CBufferString::CBufferString(); // 591
			CBufferStringN<200>::CBufferStringN(); // 2152
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 781
			CBufferString::operator char const*(); // 2154
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 2155
		}
		{
			int64 nSourceBytes; // 2159
			int64 nDestBytes; // 2160
			CUtlMemory<char, int> buffer; // 2162
			{
				int64 nRemaining; // 2165
				int nToRead; // 2166
				int nBytes; // 2172
				CBaseFileSystem::NoteIO(); // 2871
				CBaseFileSystem::ReadEx(
					void* pOutput,
					int destSize,
					int size,
					FileHandle_t file);  // 2172
				CBaseFileSystem::Write(
					const void* pInput,
					int size,
					FileHandle_t file);  // 2178
			}
			CFileHandle::IsValid(); // 5250
			{
			}
			CPackedStoreFileHandle::operator bool(); // 5255
			CFileHandle::Size(); // 5248
			CFileHandle::Size(); // 2728
			CBaseFileSystem::Size(
				FileHandle_t file);  // 2159
			CUtlMemory<char, int>::ValidateGrowSize(); // 475
			CUtlMemory<char, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 472
			CUtlMemory<char, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 2162
			ValidateAlignment<char>(void); // 508
			CUtlMemory<char, int>::Purge(); // 903
			CUtlMemory<char, int>::Purge(); // 510
			CUtlMemory<char, int>::~CUtlMemory(); // 2181
		}
		CBaseFileSystem::Open(
			const char* pFileName,
			const char* pOptions,
			const char* pathID);  // 2156
	}
	CBaseFileSystem::Open(
		const char* pFileName,
		const char* pOptions,
		const char* pathID);  // 2139
} /* size: 0, variables: 2, inline expansions: 1 (31 bytes) */

// <000EFDA1> filesystem/basefilesystem.cpp:2196
// variable: 1
// function calls: 10
void CBaseFileSystem::RemoveAllSearchPaths()
{
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> > generated_id_2198; // 2198
	CInterlockedIntT<int, 4>::GetRaw(); // 3180
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<unsigned int, 4>::AtomicAdd(
			unsigned int add);  // 3189
	CThreadRWLock_FastRead::LockForWrite(
			const char* pFileName,
			int nLineNumber);  // 959
	Lock(CThreadRWLock_FastRead& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> >::CAutoLockT(
			const CThreadRWLock_FastRead& lock,
			const char* pFilename,
			int nLineNumber);  // 2198
	CUtlVectorBase<CBaseFileSystem::CSearchPath, CUtlMemory<CBaseFileSystem::CSearchPath, int> >::Count(); // 2200
	CBaseFileSystem::RemoveSearchPathInternal(
				int nSearchPathIndex);  // 2202
	Unlock(CThreadRWLock_FastRead& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> >::~CAutoLockT(); // 2204
} /* size: 237, variables: 1, inline expansions: 10 (545 bytes) */

// <000AB5E9> filesystem/basefilesystem.cpp:2207
// member functions: 4
// member variables: 7
// class size: 256
class CFileOpenInfo {
	/* filesystem/basefilesystem.cpp:2210 */
	void CFileOpenInfo(CFileOpenInfo* , CBaseFileSystem* , const char* , const CSearchPath* , const char* , int);
	/* filesystem/basefilesystem.cpp:2217 */
	void ~CFileOpenInfo(CFileOpenInfo* );
	CBaseFileSystem * m_pFileSystem; /* 0 8 */
	CFileHandle * m_pFileHandle; /* 8 8 */
	const char * m_pFileName; /* 16 8 */
	const class CSearchPath * m_pPath; /* 24 8 */
	const char * m_pOptions; /* 32 8 */
	int m_Flags; /* 40 4 */
	CPathBufferString m_AbsolutePath; /* 48 208 */
	void CFileOpenInfo(class CFileOpenInfo *, class CBaseFileSystem *, const char  *, const class CSearchPath  *, const char  *, int); /* linkage=_ZN13CFileOpenInfoC4EP15CBaseFileSystemPKcPKNS0_11CSearchPathES3_i */
	void ~CFileOpenInfo(class CFileOpenInfo *); /* linkage=_ZN13CFileOpenInfoD4Ev */
};

// <000EFD71> filesystem/basefilesystem.cpp:2210
void CFileOpenInfo::CFileOpenInfo(CBaseFileSystem* pFileSystem, const char* pFileName, const CSearchPath* path, const char* pOptions, int flags)
{
} /* size: 0 */

// <000EFD17> filesystem/basefilesystem.cpp:2210
inline void CFileOpenInfo::CFileOpenInfo(CBaseFileSystem* pFileSystem, const char* pFileName, const CSearchPath* path, const char* pOptions, int flags)
{
} /* size: 0 */

// <000EFD00> filesystem/basefilesystem.cpp:2217
void CFileOpenInfo::~CFileOpenInfo()
{
} /* size: 0 */

// <000EFCE7> filesystem/basefilesystem.cpp:2217
inline void CFileOpenInfo::~CFileOpenInfo()
{
} /* size: 0 */

// <000EFA07> filesystem/basefilesystem.cpp:2237
// variable: 1
// function calls: 12
void CBaseFileSystem::HandleOpenFromZipFile(CFileOpenInfo& openInfo)
{
	char* pZipExt; // 2242
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 803
	CBufferString::Access(); // 2242
	V_stristr_fast(char* pStr,
			const char* pSearch);  // 2242
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 895
	V_strlen(const char* str); // 895
	CBufferString::SyncStringChars(); // 2252
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 803
	CBufferString::Access(); // 2245
	V_stristr_fast(char* pStr,
			const char* pSearch);  // 2245
} /* size: 0, variables: 1, inline expansions: 12 (0 bytes) */

// <000EF733> filesystem/basefilesystem.cpp:2261
// variables: 3
// function calls: 9
void CBaseFileSystem::HandleOpenRegularFile(CFileOpenInfo& openInfo, bool bIsAbsolutePath)
{
	const char* pFilename; // 2265
	int64 size; // 2267
	VirtualFileHandle_t fileHandle; // 2268
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 2265
	CPackedStoreFileHandle::CPackedStoreFileHandle(); // 5083
	CFileHandle::Init(
		CBaseFileSystem* fs);  // 5085
	CFileHandle::CFileHandle(
			CBaseFileSystem* fs);  // 2279
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 2284
} /* size: 330, variables: 3, inline expansions: 9 (309 bytes) */

// <000EF565> filesystem/basefilesystem.cpp:2289
// variables: 3
// function calls: 4
void CBaseFileSystem::FindFileInTargetVPK(CFileOpenInfo& openInfo, CPackedStore* pTarget)
{
	CPackedStoreFileHandle fHandle; // 2291
	const char   __FUNCTION__; // 26461
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2299
	}
	CPackedStoreFileHandle::operator bool(); // 2292
	CPackedStoreFileHandle::CPackedStoreFileHandle(); // 5083
	CFileHandle::Init(
		CBaseFileSystem* fs);  // 5085
	CFileHandle::CFileHandle(
			CBaseFileSystem* fs);  // 2294
} /* size: 0, variables: 2, inline expansions: 4 (67 bytes) */

// <000EF0AF> filesystem/basefilesystem.cpp:2316
// variables: 5
// function calls: 12
void CBaseFileSystem::FindFile(const CSearchPath* path, const char* pFileName, const char* pOptions, unsigned int flags)
{
	const char   __FUNCTION__; // 26164
	CFileOpenInfo openInfo; // 2324
	bool bIsAbsolutePath; // 2350
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2322
	}
	{
		FileHandle_t hVPKFileHandle; // 2328
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 2331
		CFileHandle::~CFileHandle(); // 2338
	}
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 2211
	CFileOpenInfo::CFileOpenInfo(
			CBaseFileSystem* pFileSystem,
			const char* pFileName,
			const CSearchPath* path,
			const char* pOptions,
			int flags);  // 2324
	CSearchPath::GetPackFile(); // 2326
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 2220
	CFileOpenInfo::~CFileOpenInfo(); // 2353
} /* size: 0, variables: 3, inline expansions: 8 (184 bytes) */

// <000EE6BA> filesystem/basefilesystem.cpp:2356
// variables: 14
// function calls: 27
void CBaseFileSystem::FindFileInSearchPaths(const char* pFileName, const char* pOptions, const char* pathID, unsigned int flags)
{
	PathTypeFilter_t pathFilter; // 2363
	bool bSearchVPKLast; // 2366
	const char* pOrigFileName; // 2368
	CSearchPathsIterator iter; // 2369
	const char* strPath; // 2380
	{
		const CSearchPath* pSearchPath; // 2370
		{
			FileHandle_t filehandle; // 2375
			CSearchPath::GetPackFile(); // 2372
		}
		CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 447
		CSearchPathsVisits::Reset(); // 4479
		CSearchPathsIterator::GetFirst(); // 4475
		CSearchPathsIterator::GetFirst(); // 2370
	}
	{
		CPathBufferString str; // 2383
		int64 size; // 2385
		VirtualFileHandle_t handle; // 2387
		{
			CFileHandle* fh; // 2390
			CPackedStoreFileHandle::CPackedStoreFileHandle(); // 5083
			CFileHandle::Init(
				CBaseFileSystem* fs);  // 5085
			CFileHandle::CFileHandle(
					CBaseFileSystem* fs);  // 2390
		}
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
				bool bGrowable);  // 2383
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 2387
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 2398
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 2400
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 2400
	}
	{
		CSearchPathsIterator itervpk; // 2405
		{
			const CSearchPath* pSearchPath; // 2406
			{
				FileHandle_t filehandle; // 2411
				CSearchPath::GetPackFile(); // 2408
			}
			CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 447
			CSearchPathsVisits::Reset(); // 4479
			CSearchPathsIterator::GetFirst(); // 4475
			CSearchPathsIterator::GetFirst(); // 2406
		}
	}
} /* size: 1159, variables: 5 */

// <00110D60> filesystem/basefilesystem.cpp:2424
void CBaseFileSystem::OpenForRead(const char* pFileName, const char* pOptions, unsigned int flags, const char* pathID)
{
} /* size: 0 */

// <000EE1A6> filesystem/basefilesystem.cpp:2433
// variables: 6
// function calls: 16
void CBaseFileSystem::OpenForWrite(const char* pFileName, const char* pOptions, const char* pathID)
{
	CPathIDBufferString tempPathID; // 2435
	const char* pTmpFileName; // 2440
	CPathBufferString scratchFileName; // 2441
	int64 size; // 2447
	VirtualFileHandle_t fileHandle; // 2448
	CFileHandle* fh; // 2454
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<40>::CBufferStringN(); // 2435
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 2441
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 2445
	CPackedStoreFileHandle::CPackedStoreFileHandle(); // 5083
	CFileHandle::Init(
		CBaseFileSystem* fs);  // 5085
	CFileHandle::CFileHandle(
			CBaseFileSystem* fs);  // 2454
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 2460
	CBufferString::~CBufferString(); // 587
	CBufferStringN<40>::~CBufferStringN(); // 2460
} /* size: 393, variables: 6, inline expansions: 16 (333 bytes) */

// <000EDEB5> filesystem/basefilesystem.cpp:2466
// variable: 1
// function calls: 10
void CBaseFileSystem::ParsePathID(const char *& pFilename, const char *& pPathID, CBufferString* pTempPathID)
{
	const char* pIn; // 2477
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 2468
	CBufferString::Append(
		char ch,
		bool bExact);  // 2485
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 2491
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 793
	CBufferString::GetHeadChar(); // 2495
} /* size: 334, variables: 1, inline expansions: 10 (241 bytes) */

// <00107FB5> filesystem/basefilesystem.cpp:2516
void CBaseFileSystem::Open(const char* pFileName, const char* pOptions, const char* pathID)
{
} /* size: 21 */

// <000ECBFA> filesystem/basefilesystem.cpp:2524
// variables: 12
// function calls: 67
void CBaseFileSystem::OpenEx(const char* pFileName, const char* pOptions, unsigned int flags, const char* pathID)
{
	int nTimer; // 2530
	CFileHandleTimer* pTimer; // 2531
	bool bReportLongLoads; // 2532
	const char   __FUNCTION__; // 26110
	CPathIDBufferString tempPathID; // 2550
	CPathBufferString tempFileName; // 2552
	FileHandle_t hFile; // 2570
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2546
	}
	{
		FileOpenDuplicateTime_t* pFileOpenDuplicate; // 2592
		{
			int nFileOpenDuplicate; // 2593
			{
				FileOpenDuplicateTime_t* pTempFileOpenDuplicate; // 2595
				CUtlMemory<FileOpenDuplicateTime_t::operator[](
						int i);  // 588
				CUtlVectorBase<FileOpenDuplicateTime_t::operator[](
						int i);  // 2595
				CUtlString::Get(); // 441
				CUtlString::operator char const*(); // 2596
				V_strcmp(const char* s1,
					const char* s2);  // 2596
			}
			CUtlVectorBase<FileOpenDuplicateTime_t::Count(); // 2593
		}
		{
			int nFileOpenDuplicate; // 2607
			CUtlMemory<FileOpenDuplicateTime_t::NumAllocated(); // 1247
			Construct<FileOpenDuplicateTime_t*, FileOpenDuplicateTime_t*>(FileOpenDuplicateTime_t** pMemory); // 1252
			CUtlMemory<FileOpenDuplicateTime_t::operator[](
					int i);  // 602
			CUtlVectorBase<FileOpenDuplicateTime_t::Element(
				int i);  // 1252
			CUtlMemory<FileOpenDuplicateTime_t::IsGrowable(); // 823
			CUtlMemory<FileOpenDuplicateTime_t::IsExternallyAllocated(); // 859
			CUtlMemory<FileOpenDuplicateTime_t::IsExternallyAllocated(); // 861
			CUtlMemory<FileOpenDuplicateTime_t::Grow(
				int num);  // 806
			CUtlVectorBase<FileOpenDuplicateTime_t::ResetDbgInfo(); // 824
			CUtlVectorBase<FileOpenDuplicateTime_t::GrowMemory(
					int num);  // 1249
			CUtlVectorBase<FileOpenDuplicateTime_t::AddToTail(
					FileOpenDuplicateTime_t *& src);  // 2607
			CUtlString::CUtlString(); // 184
			FileOpenDuplicateTime_t::FileOpenDuplicateTime_t(); // 2607
			CUtlString::operator=(
					const char* src);  // 2609
			CUtlMemory<FileOpenDuplicateTime_t::operator[](
					int i);  // 588
			CUtlVectorBase<FileOpenDuplicateTime_t::operator[](
					int i);  // 2608
		}
		CUtlString::operator=(
				const char* src);  // 2589
	}
	CBaseFileSystem::NoteIO(); // 2529
	ConVar::GetInt(); // 2532
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<40>::CBufferStringN(); // 2550
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 2552
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 2554
	ConVar::GetInt(); // 2557
	strstr(const char* __haystack,
		const char* __needle);  // 2574
	strstr(const char* __haystack,
		const char* __needle);  // 2574
	CUtlString::~CUtlString(); // 170
	CFileHandleTimer::~CFileHandleTimer(); // 2621
	CUtlVectorBase<CFileHandleTimer::Remove(
		int elem);  // 2622
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 2627
	CBufferString::~CBufferString(); // 587
	CBufferStringN<40>::~CBufferStringN(); // 2627
	CUtlMemory<CFileHandleTimer::NumAllocated(); // 1247
	CUtlMemory<CFileHandleTimer::Base(); // 112
	CUtlVectorBase<CFileHandleTimer::Base(); // 368
	CUtlVectorBase<CFileHandleTimer::ResetDbgInfo(); // 824
	CUtlMemory<CFileHandleTimer::IsGrowable(); // 823
	CUtlMemory<CFileHandleTimer::IsExternallyAllocated(); // 859
	CUtlMemory<CFileHandleTimer::IsExternallyAllocated(); // 861
	CUtlMemory<CFileHandleTimer::Grow(
		int num);  // 806
	CUtlVectorBase<CFileHandleTimer::GrowMemory(
			int num);  // 1249
	CUtlMemory<CFileHandleTimer::operator[](
			int i);  // 602
	CUtlVectorBase<CFileHandleTimer::Element(
		int i);  // 1252
	Construct<CFileHandleTimer*, CFileHandleTimer*>(CFileHandleTimer** pMemory); // 1252
	CUtlVectorBase<CFileHandleTimer::AddToTail(
			CFileHandleTimer *& src);  // 2537
	CRelativeTickCount::Init(); // 547
	CRelativeTickCount::CRelativeTickCount(); // 613
	CRelativeTickTimer::CRelativeTickTimer(); // 170
	CUtlString::CUtlString(); // 170
	CFileHandleTimer::CFileHandleTimer(); // 2537
	CUtlMemory<CFileHandleTimer::operator[](
			int i);  // 588
	CUtlVectorBase<CFileHandleTimer::operator[](
			int i);  // 2538
	CRelativeTickCount::Sample(); // 618
	CRelativeTickTimer::Start(); // 2542
	CBaseFileSystem::OpenForRead(
			const char* pFileName,
			const char* pOptions,
			unsigned int flags,
			const char* pathID);  // 2576
} /* size: 0, variables: 7, inline expansions: 44 (1512 bytes) */

// <000EC602> filesystem/basefilesystem.cpp:2633
// variables: 6
// function calls: 21
void CBaseFileSystem::Close(FileHandle_t file)
{
	long unsigned int ulLongLoadThreshold; // 2641
	{
		int nTimer; // 2644
		{
			CFileHandleTimer* pTimer; // 2647
			{
				uint64 ulMicroseconds; // 2653
				{
					int nFileOpenDuplicate; // 2661
					{
						FileOpenDuplicateTime_t* pFileOpenDuplicate; // 2663
						CUtlString::Get(); // 441
						CUtlString::operator char const*(); // 2664
						V_strcmp(const char* s1,
							const char* s2);  // 2664
						CUtlMemory<FileOpenDuplicateTime_t::operator[](
								int i);  // 588
						CUtlVectorBase<FileOpenDuplicateTime_t::operator[](
								int i);  // 2663
						CUtlString::Get(); // 441
						CUtlString::operator char const*(); // 2664
						CRelativeTickCount::GetMicrosecondsF(); // 2668
					}
					CUtlVectorBase<FileOpenDuplicateTime_t::Count(); // 2661
				}
				CRelativeTickTimer::End(); // 2651
				CRelativeTickCount::GetMicroseconds64(); // 2653
				CUtlString::~CUtlString(); // 170
				CFileHandleTimer::~CFileHandleTimer(); // 2674
				CUtlVectorBase<CFileHandleTimer::Remove(
					int elem);  // 2675
				CUtlString::Get(); // 99
				CUtlString::String(); // 2657
			}
			CUtlMemory<CFileHandleTimer::operator[](
					int i);  // 588
			CUtlVectorBase<CFileHandleTimer::operator[](
					int i);  // 2647
		}
		CUtlVectorBase<CFileHandleTimer::Count(); // 2644
	}
	ConVar::GetInt(); // 2641
	CFileHandle::~CFileHandle(); // 2680
} /* size: 589, variables: 1, inline expansions: 2 (24 bytes) */

// <0010D41E> filesystem/basefilesystem.cpp:2686
// variable: 1
// function call: 1
void CBaseFileSystem::Seek(FileHandle_t file, int64 pos, FileSystemSeek_t whence)
{
	CFileHandle* fh; // 2688
	CBaseFileSystem::Seek(
		FileHandle_t file,
		int64 pos,
		FileSystemSeek_t whence);  // 2686
} /* size: 54, variables: 1, inline expansions: 1 (22 bytes) */

// <000EC5B6> filesystem/basefilesystem.cpp:2686
// variable: 1
void CBaseFileSystem::Seek(FileHandle_t file, int64 pos, FileSystemSeek_t whence)
{
	CFileHandle* fh; // 2688
} /* size: 0, variables: 1 */

// <0010A040> filesystem/basefilesystem.cpp:2703
// function calls: 6
void CBaseFileSystem::Tell(FileHandle_t file)
{
	CFileHandle::IsValid(); // 5233
	{
	}
	CPackedStoreFileHandle::operator bool(); // 5236
	CPackedStoreFileHandle::Tell(); // 5238
	CFileHandle::Tell(); // 5231
	CFileHandle::Tell(); // 2712
	CBaseFileSystem::Tell(
		FileHandle_t file);  // 2703
} /* size: 0, inline expansions: 6 (146 bytes) */

// <000EC590> filesystem/basefilesystem.cpp:2703
void CBaseFileSystem::Tell(FileHandle_t file)
{
} /* size: 0 */

// <0010A1F1> filesystem/basefilesystem.cpp:2720
// function calls: 5
void CBaseFileSystem::Size(FileHandle_t file)
{
	CFileHandle::IsValid(); // 5250
	{
	}
	CPackedStoreFileHandle::operator bool(); // 5255
	CFileHandle::Size(); // 5248
	CFileHandle::Size(); // 2728
	CBaseFileSystem::Size(
		FileHandle_t file);  // 2720
} /* size: 0, inline expansions: 5 (114 bytes) */

// <000EC56A> filesystem/basefilesystem.cpp:2720
void CBaseFileSystem::Size(FileHandle_t file)
{
} /* size: 0 */

// <000EBFC2> filesystem/basefilesystem.cpp:2736
// variables: 8
// function calls: 17
void CBaseFileSystem::Size(const char* pFileName, const char* pPathID)
{
	const char   __FUNCTION__; // 26056
	CPathIDBufferString tempPathID; // 2747
	CPathBufferString fixedName; // 2750
	int64 iSize; // 2758
	CSearchPathsIterator iter; // 2760
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2738
	}
	{
		const CSearchPath* pSearchPath; // 2761
		{
			int64 nRetVal; // 2763
		}
		CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 447
		CSearchPathsVisits::Reset(); // 4479
		CSearchPathsIterator::GetFirst(); // 4475
		CSearchPathsIterator::GetFirst(); // 2761
	}
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<40>::CBufferStringN(); // 2747
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 2750
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 2755
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 2771
	CBufferString::~CBufferString(); // 587
	CBufferStringN<40>::~CBufferStringN(); // 2771
} /* size: 0, variables: 5, inline expansions: 13 (279 bytes) */

// <000EBB81> filesystem/basefilesystem.cpp:2779
// variables: 5
// function calls: 14
void CBaseFileSystem::FastGetFileTime(const CSearchPath* pSearchPath, const char* pFileName)
{
	CPathBufferString tempBuf; // 2781
	const char* pTestFileName; // 2782
	CPackedStore* pPackedStore; // 2783
	FioBaseFileInfo_t buf; // 2807
	{
		CPackedStoreFileHandle fHandle; // 2786
		CPackedStoreFileHandle::operator bool(); // 2787
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 776
		CBufferString::String(); // 328
		CPackedStore::FullPathName(); // 2795
	}
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 2781
	CSearchPath::GetPackFile(); // 2783
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 2804
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 2815
} /* size: 462, variables: 4, inline expansions: 9 (276 bytes) */

// <000EB78F> filesystem/basefilesystem.cpp:2817
// variables: 5
// function calls: 13
void CBaseFileSystem::FastGetFileSize(const CSearchPath* path, const char* pFileName)
{
	const char   __FUNCTION__; // 26353
	CPathBufferString tempFileName; // 2831
	FioBaseFileInfo_t buf; // 2834
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2819
	}
	{
		CPackedStoreFileHandle fHandle; // 2823
		CPackedStoreFileHandle::operator bool(); // 2824
	}
	CSearchPath::GetPackFile(); // 2821
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 2831
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 2835
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 2842
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 2837
} /* size: 0, variables: 3, inline expansions: 12 (349 bytes) */

// <0010D607> filesystem/basefilesystem.cpp:2847
// function calls: 7
void CBaseFileSystem::EndOfFile(FileHandle_t file)
{
	CFileHandle::IsValid(); // 5275
	{
	}
	CFileHandle::IsValid(); // 5250
	{
	}
	CPackedStoreFileHandle::operator bool(); // 5255
	CFileHandle::Size(); // 5248
	CFileHandle::Size(); // 5277
	CFileHandle::EndOfFile(); // 2855
	CBaseFileSystem::EndOfFile(
			FileHandle_t file);  // 2847
} /* size: 0, inline expansions: 7 (281 bytes) */

// <000EB769> filesystem/basefilesystem.cpp:2847
void CBaseFileSystem::EndOfFile(FileHandle_t file)
{
} /* size: 0 */

// <0010D09A> filesystem/basefilesystem.cpp:2861
// function calls: 2
void CBaseFileSystem::Read(void* pOutput, int size, FileHandle_t file)
{
	CBaseFileSystem::NoteIO(); // 2871
	CBaseFileSystem::ReadEx(
		void* pOutput,
		int destSize,
		int size,
		FileHandle_t file);  // 2863
} /* size: 151, inline expansions: 2 (146 bytes) */

// <000EB729> filesystem/basefilesystem.cpp:2861
void CBaseFileSystem::Read(void* pOutput, int size, FileHandle_t file)
{
} /* size: 0 */

// <0010CFCC> filesystem/basefilesystem.cpp:2869
// variable: 1
// function call: 1
void CBaseFileSystem::ReadEx(void* pOutput, int destSize, int size, FileHandle_t file)
{
	int nRet; // 2881
	CBaseFileSystem::NoteIO(); // 2871
} /* size: 119, variables: 1, inline expansions: 1 (59 bytes) */

// <000EB6CF> filesystem/basefilesystem.cpp:2869
// variable: 1
void CBaseFileSystem::ReadEx(void* pOutput, int destSize, int size, FileHandle_t file)
{
	int nRet; // 2881
} /* size: 0, variables: 1 */

// <000EB4FE> filesystem/basefilesystem.cpp:2894
// variables: 2
// function calls: 5
void CBaseFileSystem::LoadKeyValues(KeyValues& head, KeyValuesPreloadType_t type, const char* filename, const char* pPathID)
{
	bool bret; // 2896
	CPathIDBufferString tempPathID; // 2898
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<40>::CBufferStringN(); // 2898
	CBufferString::~CBufferString(); // 587
	CBufferStringN<40>::~CBufferStringN(); // 2902
} /* size: 159, variables: 2, inline expansions: 5 (69 bytes) */

// <000EB410> filesystem/basefilesystem.cpp:2914
// variable: 1
void CBaseFileSystem::LoadKeyValues(KeyValuesPreloadType_t type, const char* filename, const char* pPathID)
{
	KeyValues* kv; // 2916
} /* size: 97, variables: 1 */

// <0010D1D9> filesystem/basefilesystem.cpp:2928
// variable: 1
// function call: 1
void CBaseFileSystem::Write(const void* pInput, int size, FileHandle_t file)
{
	CFileHandle* fh; // 2932
	CBaseFileSystem::Write(
		const void* pInput,
		int size,
		FileHandle_t file);  // 2928
} /* size: 51, variables: 1, inline expansions: 1 (19 bytes) */

// <000EB3C4> filesystem/basefilesystem.cpp:2928
// variable: 1
void CBaseFileSystem::Write(const void* pInput, int size, FileHandle_t file)
{
	CFileHandle* fh; // 2932
} /* size: 0, variables: 1 */

// <000EB28A> filesystem/basefilesystem.cpp:2945
// variables: 4
void CBaseFileSystem::FPrintf(FileHandle_t file, const char* pFormat, ...)
{
	va_list args; // 2947
	CFileHandle* fh; // 2949
	char buffer; // 2964
	int len; // 2965
} /* size: 276, variables: 4 */

// <0010A388> filesystem/basefilesystem.cpp:2976
// variable: 1
// function calls: 3
void CBaseFileSystem::SetBufferSize(FileHandle_t file, unsigned int nBytes)
{
	CFileHandle* fh; // 2978
	CFileHandle::IsValid(); // 5157
	{
	}
	CFileHandle::SetBufferSize(
			int nBytes);  // 2984
	CBaseFileSystem::SetBufferSize(
			FileHandle_t file,
			unsigned int nBytes);  // 2976
} /* size: 0, variables: 1, inline expansions: 3 (105 bytes) */

// <000EB24B> filesystem/basefilesystem.cpp:2976
// variable: 1
void CBaseFileSystem::SetBufferSize(FileHandle_t file, unsigned int nBytes)
{
	CFileHandle* fh; // 2978
} /* size: 0, variables: 1 */

// <0010B487> filesystem/basefilesystem.cpp:2990
// variable: 1
// function calls: 4
void CBaseFileSystem::IsOk(FileHandle_t file)
{
	CFileHandle* fh; // 2992
	CPackedStoreFileHandle::operator bool(); // 5134
	CFileHandle::IsValid(); // 5139
	CFileHandle::IsOK(); // 2999
	CBaseFileSystem::IsOk(
		FileHandle_t file);  // 2990
} /* size: 139, variables: 1, inline expansions: 4 (92 bytes) */

// <000EB219> filesystem/basefilesystem.cpp:2990
// variable: 1
void CBaseFileSystem::IsOk(FileHandle_t file)
{
	CFileHandle* fh; // 2992
} /* size: 0, variables: 1 */

// <0010A4DC> filesystem/basefilesystem.cpp:3005
// variable: 1
// function calls: 3
void CBaseFileSystem::Flush(FileHandle_t file)
{
	CFileHandle* fh; // 3007
	CFileHandle::IsValid(); // 5147
	{
	}
	CFileHandle::Flush(); // 3014
	CBaseFileSystem::Flush(
		FileHandle_t file);  // 3005
} /* size: 0, variables: 1, inline expansions: 3 (99 bytes) */

// <000EB1E7> filesystem/basefilesystem.cpp:3005
// variable: 1
void CBaseFileSystem::Flush(FileHandle_t file)
{
	CFileHandle* fh; // 3007
} /* size: 0, variables: 1 */

// <000EAE98> filesystem/basefilesystem.cpp:3018
// variables: 4
// function calls: 4
void CBaseFileSystem::Precache(const char* pFileName, const char* pPathID)
{
	const char   __FUNCTION__; // 26164
	FileHandle_t f; // 3024
	char buffer; // 3029
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3020
	}
	CBaseFileSystem::Open(
		const char* pFileName,
		const char* pOptions,
		const char* pathID);  // 3024
	CBaseFileSystem::NoteIO(); // 2871
	CBaseFileSystem::ReadEx(
		void* pOutput,
		int destSize,
		int size,
		FileHandle_t file);  // 2863
	CBaseFileSystem::Read(
		void* pOutput,
		int size,
		FileHandle_t file);  // 3030
} /* size: 0, variables: 3, inline expansions: 4 (186 bytes) */

// <000EAC86> filesystem/basefilesystem.cpp:3037
// variables: 5
// function calls: 3
void CBaseFileSystem::ReadLine(FileHandle_t file, bool bStripLineEndings)
{
	CFileHandle* fh; // 3039
	CUtlString ret; // 3041
	char nLocalBuffer; // 3043
	int nBuffered; // 3044
	{
		char c; // 3048
		CFileHandle::IsValid(); // 5167
		{
		}
		CFileHandle::Read(
			void* pBuffer,
			int nLength);  // 3049
	}
	CUtlString::CUtlString(); // 3041
} /* size: 0, variables: 4, inline expansions: 1 (7 bytes) */

// <000EAA17> filesystem/basefilesystem.cpp:3087
// variables: 2
// function calls: 7
void CBaseFileSystem::ReadLine(char* pOutput, int maxChars, FileHandle_t file)
{
	CFileHandle* fh; // 3089
	int nRead; // 3097
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<unsigned int, 4>::operator++(); // 582
	CInterlockedIntT<unsigned int, 4>::operator++(
			int);  // 3095
	CFileHandle::IsValid(); // 5167
	{
	}
	CFileHandle::Read(
		void* pBuffer,
		int nLength);  // 3103
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 669
	CInterlockedIntT<unsigned int, 4>::operator+=(
			unsigned int add);  // 3135
} /* size: 0, variables: 2, inline expansions: 7 (199 bytes) */

// <000EA4B0> filesystem/basefilesystem.cpp:3144
// variables: 7
// function calls: 17
void CBaseFileSystem::GetFileTime(const char* pFileName, const char* pPathID)
{
	const char   __FUNCTION__; // 26245
	CPathIDBufferString tempPathID; // 3148
	CPathBufferString fixedName; // 3151
	CSearchPathsIterator iter; // 3158
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3146
	}
	{
		const CSearchPath* pSearchPath; // 3159
		{
			int64 ft; // 3161
		}
		CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 447
		CSearchPathsVisits::Reset(); // 4479
		CSearchPathsIterator::GetFirst(); // 4475
		CSearchPathsIterator::GetFirst(); // 3159
	}
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<40>::CBufferStringN(); // 3148
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 3151
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 3156
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 3166
	CBufferString::~CBufferString(); // 587
	CBufferStringN<40>::~CBufferStringN(); // 3166
} /* size: 0, variables: 4, inline expansions: 13 (255 bytes) */

// <000E9FC3> filesystem/basefilesystem.cpp:3169
// variables: 6
// function calls: 17
void CBaseFileSystem::GetPathTime(const char* pFileName, const char* pPathID)
{
	CPathIDBufferString tempPathID; // 3171
	CPathBufferString fixedName; // 3174
	int64 pathTime; // 3181
	CSearchPathsIterator iter; // 3182
	{
		const CSearchPath* pSearchPath; // 3183
		{
			int64 ft; // 3185
		}
		CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 447
		CSearchPathsVisits::Reset(); // 4479
		CSearchPathsIterator::GetFirst(); // 4475
		CSearchPathsIterator::GetFirst(); // 3183
	}
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<40>::CBufferStringN(); // 3171
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 3174
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 3179
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 3192
	CBufferString::~CBufferString(); // 587
	CBufferStringN<40>::~CBufferStringN(); // 3192
} /* size: 489, variables: 4, inline expansions: 13 (268 bytes) */

// <000E9CCB> filesystem/basefilesystem.cpp:3200
// variable: 1
// function calls: 10
void CBaseFileSystem::FileTimeToString(int64 fileTime, CBufferString* pStrBuf)
{
	time_t timeval; // 3202
	CBufferString::LengthAllocated(); // 3209
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 808
	CBufferString::GetForModify(); // 3209
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 798
	CBufferString::GetTailChar(); // 796
	CBufferString::GetTailChar(); // 3216
	CBufferString::Length(); // 983
	CBufferString::RemoveTail(
			int nChars);  // 3218
} /* size: 257, variables: 1, inline expansions: 10 (223 bytes) */

// <000E8E4F> filesystem/basefilesystem.cpp:3223
// variables: 4
// function calls: 67
void CBaseFileSystem::CopySearchPathsToIterator(CUtlVector<CBaseFileSystem::CSearchPath, CUtlMemory<CBaseFileSystem::CSearchPath, int> >& searchPaths)
{
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForReadTrait<CThreadRWLock_FastRead> > generated_id_3225; // 3225
	{
		int i; // 3228
		CUtlVectorBase<CBaseFileSystem::CSearchPath, CUtlMemory<CBaseFileSystem::CSearchPath, int> >::Count(); // 3228
		CUtlMemory<CBaseFileSystem::CSearchPath, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CBaseFileSystem::CSearchPath, CUtlMemory<CBaseFileSystem::CSearchPath, int> >::operator[](
				int i);  // 3232
		{
			int i; // 1721
			CUtlMemory<CUtlString, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
				int i);  // 1723
			CUtlString::~CUtlString(); // 1526
			Destruct<CUtlString>(CUtlString* pMemory); // 1723
		}
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::RemoveAll(); // 3232
		CUtlMemory<CBaseFileSystem::CSearchPath, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CBaseFileSystem::CSearchPath, CUtlMemory<CBaseFileSystem::CSearchPath, int> >::operator[](
				int i);  // 3234
		CSearchPath::GetPackFile(); // 3234
	}
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<unsigned int, 4>::operator++(); // 3093
	CThreadRWLock_FastRead::LockForRead(
			const char* pFileName,
			int nLineNumber);  // 951
	Lock(CThreadRWLock_FastRead& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForReadTrait<CThreadRWLock_FastRead> >::CAutoLockT(
			const CThreadRWLock_FastRead& lock,
			const char* pFilename,
			int nLineNumber);  // 3225
	CUtlVectorBase<CBaseFileSystem::CSearchPath, CUtlMemory<CBaseFileSystem::CSearchPath, int> >::Count(); // 573
	CUtlMemory<CBaseFileSystem::CSearchPath, int>::Base(); // 112
	CUtlVectorBase<CBaseFileSystem::CSearchPath, CUtlMemory<CBaseFileSystem::CSearchPath, int> >::Base(); // 102
	CUtlVectorBase<CBaseFileSystem::CSearchPath, CUtlMemory<CBaseFileSystem::CSearchPath, int> >::begin(); // 574
	CUtlMemory<CBaseFileSystem::CSearchPath, int>::Base(); // 113
	CUtlVectorBase<CBaseFileSystem::CSearchPath, CUtlMemory<CBaseFileSystem::CSearchPath, int> >::Base(); // 105
	CUtlVectorBase<CBaseFileSystem::CSearchPath, CUtlMemory<CBaseFileSystem::CSearchPath, int> >::Count(); // 105
	CUtlVectorBase<CBaseFileSystem::CSearchPath, CUtlMemory<CBaseFileSystem::CSearchPath, int> >::end(); // 574
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator=(
			const CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >& other);  // 452
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::operator=(
			const CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& src);  // 377
	CUtlVectorBase<CUtlSymbol, CUtlMemory<CUtlSymbol, int> >::Count(); // 573
	CUtlVectorBase<CUtlSymbol, CUtlMemory<CUtlSymbol, int> >::RemoveMultipleFromTail(
				int num);  // 1323
	CUtlMemory<CUtlSymbol, int>::NumAllocated(); // 782
	CUtlMemory<CUtlSymbol, int>::Base(); // 112
	CUtlVectorBase<CUtlSymbol, CUtlMemory<CUtlSymbol, int> >::Base(); // 368
	CUtlVectorBase<CUtlSymbol, CUtlMemory<CUtlSymbol, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CUtlSymbol, CUtlMemory<CUtlSymbol, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<CUtlSymbol, CUtlMemory<CUtlSymbol, int> >::GrowVector(
			int num);  // 1445
	{
		int i; // 1451
		CUtlMemory<CUtlSymbol, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlSymbol, CUtlMemory<CUtlSymbol, int> >::Element(
			int i);  // 1453
		CUtlSymbol::CUtlSymbol(); // 1479
		Construct<CUtlSymbol>(CUtlSymbol* pMemory); // 1453
	}
	CUtlVectorBase<CUtlSymbol, CUtlMemory<CUtlSymbol, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<CUtlSymbol, CUtlMemory<CUtlSymbol, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<CUtlSymbol, CUtlMemory<CUtlSymbol, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<CUtlSymbol, CUtlMemory<CUtlSymbol, int> >::SetCount(
		int count);  // 573
	CUtlMemory<CUtlSymbol, int>::Base(); // 112
	CUtlVectorBase<CUtlSymbol, CUtlMemory<CUtlSymbol, int> >::Base(); // 102
	CUtlVectorBase<CUtlSymbol, CUtlMemory<CUtlSymbol, int> >::begin(); // 574
	CUtlMemory<CUtlSymbol, int>::Base(); // 113
	CUtlVectorBase<CUtlSymbol, CUtlMemory<CUtlSymbol, int> >::Base(); // 105
	CUtlVectorBase<CUtlSymbol, CUtlMemory<CUtlSymbol, int> >::Count(); // 105
	CUtlVectorBase<CUtlSymbol, CUtlMemory<CUtlSymbol, int> >::end(); // 574
	CUtlSymbol::operator=(
			const CUtlSymbol& src);  // 209
	UtlTraitsCopyRange<CUtlSymbol>(const CUtlSymbol* pFrom,
					const CUtlSymbol* pFromEnd,
					CUtlSymbol* pTo);  // 200
	UtlTraitsCopyRange<CUtlSymbol>(const CUtlSymbol* pFrom,
					const CUtlSymbol* pFromEnd,
					CUtlSymbol* pTo);  // 574
	CUtlVectorBase<CUtlSymbol, CUtlMemory<CUtlSymbol, int> >::operator=(
			const CUtlVectorBase<CUtlSymbol, CUtlMemory<CUtlSymbol, int> >& other);  // 565
	CUtlVectorBase<CUtlSymbol, CUtlMemory<CUtlSymbol, int> >::operator=(
			const CUtlVectorBase<CUtlSymbol, CUtlMemory<CUtlSymbol, int> >& other);  // 452
	CUtlVector<CUtlSymbol, CUtlMemory<CUtlSymbol, int> >::operator=(
			const CUtlVector<CUtlSymbol, CUtlMemory<CUtlSymbol, int> >& src);  // 377
	CUtlSymbol::operator=(
			const CUtlSymbol& src);  // 377
	CSearchPath::operator=(
			const CSearchPath  &);  // 209
	UtlTraitsCopyRange<CBaseFileSystem::CSearchPath>(const CSearchPath* pFrom,
							const CSearchPath* pFromEnd,
							CSearchPath* pTo);  // 200
	UtlTraitsCopyRange<CBaseFileSystem::CSearchPath>(const CSearchPath* pFrom,
							const CSearchPath* pFromEnd,
							CSearchPath* pTo);  // 574
	CUtlVectorBase<CBaseFileSystem::CSearchPath, CUtlMemory<CBaseFileSystem::CSearchPath, int> >::operator=(
			const CUtlVectorBase<CBaseFileSystem::CSearchPath, CUtlMemory<CBaseFileSystem::CSearchPath, int> >& other);  // 565
	CUtlVectorBase<CBaseFileSystem::CSearchPath, CUtlMemory<CBaseFileSystem::CSearchPath, int> >::operator=(
			const CUtlVectorBase<CBaseFileSystem::CSearchPath, CUtlMemory<CBaseFileSystem::CSearchPath, int> >& other);  // 452
	CUtlVector<CBaseFileSystem::CSearchPath, CUtlMemory<CBaseFileSystem::CSearchPath, int> >::operator=(
			const CUtlVector<CBaseFileSystem::CSearchPath, CUtlMemory<CBaseFileSystem::CSearchPath, int> >& src);  // 3226
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<unsigned int, 4>::operator--(); // 3106
	CThreadRWLock_FastRead::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 952
	Unlock(CThreadRWLock_FastRead& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForReadTrait<CThreadRWLock_FastRead> >::~CAutoLockT(); // 3239
} /* size: 0, variables: 1, inline expansions: 52 (0 bytes) */

// <000E79DB> filesystem/basefilesystem.cpp:3244
// variables: 6
// function calls: 81
void CBaseFileSystem::CopySearchPathToIteratorForAbsolutePath(const char* pAbsolutePath, CSearchPath& searchPath, CBufferString* pSearchFileName)
{
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForReadTrait<CThreadRWLock_FastRead> > generated_id_3246; // 3246
	CPathBufferString VPKName; // 3249
	{
		int i; // 3252
		{
			CSearchPath* pSearchPath; // 3254
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 776
			CBufferString::String(); // 323
			CPackedStore::BaseName(); // 3258
			CUtlMemory<CBaseFileSystem::CSearchPath, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CBaseFileSystem::CSearchPath, CUtlMemory<CBaseFileSystem::CSearchPath, int> >::operator[](
					int i);  // 3254
			CSearchPath::GetPackFile(); // 3255
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 781
			CBufferString::operator char const*(); // 3258
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator=(
					const CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >& other);  // 452
			CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::operator=(
					const CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& src);  // 377
			CUtlVectorBase<CUtlSymbol, CUtlMemory<CUtlSymbol, int> >::Count(); // 573
			CUtlVectorBase<CUtlSymbol, CUtlMemory<CUtlSymbol, int> >::RemoveMultipleFromTail(
						int num);  // 1323
			CUtlMemory<CUtlSymbol, int>::NumAllocated(); // 782
			CUtlMemory<CUtlSymbol, int>::Base(); // 112
			CUtlVectorBase<CUtlSymbol, CUtlMemory<CUtlSymbol, int> >::Base(); // 368
			CUtlVectorBase<CUtlSymbol, CUtlMemory<CUtlSymbol, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<CUtlSymbol, CUtlMemory<CUtlSymbol, int> >::GrowMemory(
					int num);  // 784
			CUtlVectorBase<CUtlSymbol, CUtlMemory<CUtlSymbol, int> >::GrowVector(
					int num);  // 1445
			{
				int i; // 1451
				CUtlMemory<CUtlSymbol, int>::operator[](
						int i);  // 602
				CUtlVectorBase<CUtlSymbol, CUtlMemory<CUtlSymbol, int> >::Element(
					int i);  // 1453
				CUtlSymbol::CUtlSymbol(); // 1479
				Construct<CUtlSymbol>(CUtlSymbol* pMemory); // 1453
			}
			CUtlVectorBase<CUtlSymbol, CUtlMemory<CUtlSymbol, int> >::InsertMultipleBefore(
						int elem,
						int num);  // 1437
			CUtlVectorBase<CUtlSymbol, CUtlMemory<CUtlSymbol, int> >::InsertMultipleBefore(
						int elem,
						int num);  // 1294
			CUtlVectorBase<CUtlSymbol, CUtlMemory<CUtlSymbol, int> >::AddMultipleToTail(
						int num);  // 1319
			CUtlVectorBase<CUtlSymbol, CUtlMemory<CUtlSymbol, int> >::SetCount(
				int count);  // 573
			CUtlMemory<CUtlSymbol, int>::Base(); // 112
			CUtlVectorBase<CUtlSymbol, CUtlMemory<CUtlSymbol, int> >::Base(); // 102
			CUtlVectorBase<CUtlSymbol, CUtlMemory<CUtlSymbol, int> >::begin(); // 574
			CUtlMemory<CUtlSymbol, int>::Base(); // 113
			CUtlVectorBase<CUtlSymbol, CUtlMemory<CUtlSymbol, int> >::Base(); // 105
			CUtlVectorBase<CUtlSymbol, CUtlMemory<CUtlSymbol, int> >::Count(); // 105
			CUtlVectorBase<CUtlSymbol, CUtlMemory<CUtlSymbol, int> >::end(); // 574
			CUtlSymbol::operator=(
					const CUtlSymbol& src);  // 209
			UtlTraitsCopyRange<CUtlSymbol>(const CUtlSymbol* pFrom,
							const CUtlSymbol* pFromEnd,
							CUtlSymbol* pTo);  // 200
			UtlTraitsCopyRange<CUtlSymbol>(const CUtlSymbol* pFrom,
							const CUtlSymbol* pFromEnd,
							CUtlSymbol* pTo);  // 574
			CUtlVectorBase<CUtlSymbol, CUtlMemory<CUtlSymbol, int> >::operator=(
					const CUtlVectorBase<CUtlSymbol, CUtlMemory<CUtlSymbol, int> >& other);  // 565
			CUtlVectorBase<CUtlSymbol, CUtlMemory<CUtlSymbol, int> >::operator=(
					const CUtlVectorBase<CUtlSymbol, CUtlMemory<CUtlSymbol, int> >& other);  // 452
			CUtlVector<CUtlSymbol, CUtlMemory<CUtlSymbol, int> >::operator=(
					const CUtlVector<CUtlSymbol, CUtlMemory<CUtlSymbol, int> >& src);  // 377
			CUtlSymbol::operator=(
					const CUtlSymbol& src);  // 377
			CSearchPath::operator=(
					const CSearchPath  &);  // 3260
			{
				int i; // 1721
				CUtlMemory<CUtlString, int>::operator[](
						int i);  // 602
				CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
					int i);  // 1723
				CUtlString::~CUtlString(); // 1526
				Destruct<CUtlString>(CUtlString* pMemory); // 1723
			}
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::RemoveAll(); // 3261
			CSearchPath::GetPackFile(); // 3262
		}
		CUtlVectorBase<CBaseFileSystem::CSearchPath, CUtlMemory<CBaseFileSystem::CSearchPath, int> >::Count(); // 3252
	}
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<unsigned int, 4>::operator++(); // 3093
	CThreadRWLock_FastRead::LockForRead(
			const char* pFileName,
			int nLineNumber);  // 951
	Lock(CThreadRWLock_FastRead& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForReadTrait<CThreadRWLock_FastRead> >::CAutoLockT(
			const CThreadRWLock_FastRead& lock,
			const char* pFilename,
			int nLineNumber);  // 3246
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 3249
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 3274
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<unsigned int, 4>::operator--(); // 3106
	CThreadRWLock_FastRead::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 952
	Unlock(CThreadRWLock_FastRead& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForReadTrait<CThreadRWLock_FastRead> >::~CAutoLockT(); // 3274
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 3270
	CUtlSymbolTableMT::AddString(
			const char* pString);  // 795
	CUtlSymbol::operator=(
			const CUtlSymbol& src);  // 795
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 3047
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 3053
	CThreadRWLock::LockForRead(
			const char* pFileName,
			int nLineNumber);  // 267
	CUtlSymbol::CUtlSymbol(
			const CUtlSymbol& sym);  // 268
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 3058
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 3064
	CThreadRWLock::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 269
	CUtlSymbolTableMT::String(
		CUtlSymbol id);  // 796
	CUtlSymbol::CUtlSymbol(
			const CUtlSymbol& sym);  // 796
	CSearchPath::SetPath(
		const char* pPathID);  // 3271
} /* size: 1466, variables: 2, inline expansions: 31 (2312 bytes) */

// <000E73CB> filesystem/basefilesystem.cpp:3281
// variables: 8
// function calls: 19
void CBaseFileSystem::FileExists(const char* pFileName, const char* pPathID)
{
	const char   __FUNCTION__; // 26218
	CPathIDBufferString tempPathID; // 3287
	CPathBufferString fixedName; // 3290
	CSearchPathsIterator iter; // 3299
	const char* strPath; // 3308
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3285
	}
	{
		const CSearchPath* pSearchPath; // 3300
		{
			int64 size; // 3302
		}
		CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 447
		CSearchPathsVisits::Reset(); // 4479
		CSearchPathsIterator::GetFirst(); // 4475
		CSearchPathsIterator::GetFirst(); // 3300
	}
	CBaseFileSystem::NoteIO(); // 3283
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<40>::CBufferStringN(); // 3287
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 3290
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 3295
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 3312
	CBufferString::~CBufferString(); // 587
	CBufferStringN<40>::~CBufferStringN(); // 3312
	V_strlen(const char* str); // 3297
} /* size: 0, variables: 5, inline expansions: 15 (274 bytes) */

// <000E6B00> filesystem/basefilesystem.cpp:3314
// variables: 9
// function calls: 32
void CBaseFileSystem::IsFileWritable(const char* pFileName, const char* pPathID)
{
	const char   __FUNCTION__; // 26326
	CPathIDBufferString tempPathID; // 3318
	CPathBufferString fixedName; // 3321
	CSearchPathsIterator iter; // 3328
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3316
	}
	{
		const CSearchPath* pSearchPath; // 3329
		{
			CPathBufferString tempFileName; // 3340
			FioBaseFileInfo_t buf; // 3343
			{
				CPackedStoreFileHandle fHandle; // 3334
				CPackedStoreFileHandle::operator bool(); // 3335
			}
			CSearchPath::GetPackFile(); // 3332
			CBufferString::InitMinConstruct(
					bool bGrowable);  // 712
			CBufferString::CBufferString(); // 591
			CBufferStringN<200>::CBufferStringN(); // 3340
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 781
			CBufferString::operator char const*(); // 3344
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 3360
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 781
			CBufferString::operator char const*(); // 3346
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 3360
		}
		CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 447
		CSearchPathsVisits::Reset(); // 4479
		CSearchPathsIterator::GetFirst(); // 4475
		CSearchPathsIterator::GetFirst(); // 3329
	}
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<40>::CBufferStringN(); // 3318
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 3321
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 3326
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 3362
	CBufferString::~CBufferString(); // 587
	CBufferStringN<40>::~CBufferStringN(); // 3362
} /* size: 0, variables: 4, inline expansions: 13 (255 bytes) */

// <000E60D8> filesystem/basefilesystem.cpp:3365
// variables: 9
// function calls: 38
void CBaseFileSystem::SetFileWritable(const char* pFileName, bool writable, const char* pPathID)
{
	const char   __FUNCTION__; // 26353
	CPathIDBufferString tempPathID; // 3369
	CPathBufferString fixedName; // 3372
	CSearchPathsIterator iter; // 3379
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3367
	}
	{
		const CSearchPath* pSearchPath; // 3380
		{
			CPathBufferString tempFileName; // 3391
			FioBaseFileInfo_t buf; // 3393
			{
				CPackedStoreFileHandle fHandle; // 3385
				CPackedStoreFileHandle::operator bool(); // 3386
			}
			CSearchPath::GetPackFile(); // 3383
			CBufferString::InitMinConstruct(
					bool bGrowable);  // 712
			CBufferString::CBufferString(); // 591
			CBufferStringN<200>::CBufferStringN(); // 3391
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 781
			CBufferString::operator char const*(); // 3394
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 3406
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 781
			CBufferString::operator char const*(); // 3396
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 781
			CBufferString::operator char const*(); // 3403
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 781
			CBufferString::operator char const*(); // 3404
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 3406
		}
		CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 447
		CSearchPathsVisits::Reset(); // 4479
		CSearchPathsIterator::GetFirst(); // 4475
		CSearchPathsIterator::GetFirst(); // 3380
	}
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<40>::CBufferStringN(); // 3369
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 3372
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 3377
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 3410
	CBufferString::~CBufferString(); // 587
	CBufferStringN<40>::~CBufferStringN(); // 3410
} /* size: 0, variables: 4, inline expansions: 13 (255 bytes) */

// <000E588B> filesystem/basefilesystem.cpp:3418
// variables: 8
// function calls: 31
void CBaseFileSystem::IsDirectory(const char* pFileName, const char* pathID)
{
	const char   __FUNCTION__; // 26245
	CPathIDBufferString tempPathID; // 3423
	CPathBufferString tempBuf; // 3426
	CSearchPathsIterator iter; // 3431
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3420
	}
	{
		const CSearchPath* pSearchPath; // 3432
		{
			CPathBufferString tempFileName; // 3449
			FioBaseFileInfo_t buf; // 3451
			CSearchPath::GetPackFile(); // 3434
			CBufferString::InitMinConstruct(
					bool bGrowable);  // 712
			CBufferString::CBufferString(); // 591
			CBufferStringN<200>::CBufferStringN(); // 3449
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 781
			CBufferString::operator char const*(); // 3452
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 3459
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 781
			CBufferString::operator char const*(); // 3454
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 3459
		}
		CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 447
		CSearchPathsVisits::Reset(); // 4479
		CSearchPathsIterator::GetFirst(); // 4475
		CSearchPathsIterator::GetFirst(); // 3432
	}
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<40>::CBufferStringN(); // 3423
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 3426
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 3429
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 3461
	CBufferString::~CBufferString(); // 587
	CBufferStringN<40>::~CBufferStringN(); // 3461
} /* size: 0, variables: 4, inline expansions: 13 (255 bytes) */

// <000E524A> filesystem/basefilesystem.cpp:3468
// variables: 8
// function calls: 23
void CBaseFileSystem::CreateDirHierarchy(const char* pRelativePath, const char* pathID)
{
	const char   __FUNCTION__; // 26434
	CPathIDBufferString tempPathID; // 3473
	CPathBufferString scratchFileName; // 3476
	int len; // 3482
	char* end; // 3483
	char* s; // 3484
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3470
	}
	{
		char save; // 3492
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 3494
	}
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<40>::CBufferStringN(); // 3473
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 3476
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 3501
	CBufferString::~CBufferString(); // 587
	CBufferStringN<40>::~CBufferStringN(); // 3501
	CBufferString::Length(); // 3482
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 803
	CBufferString::Access(); // 3483
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 803
	CBufferString::Access(); // 3488
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 3500
} /* size: 0, variables: 6, inline expansions: 20 (529 bytes) */

// <000E4FDE> filesystem/basefilesystem.cpp:3503
// variable: 1
// function calls: 9
void CBaseFileSystem::CreateDirHierarchyForFile(const char* pFile, const char* pathID)
{
	CPathBufferString dir; // 3505
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 3505
	CBufferString::IsEmpty(); // 3507
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 3513
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 3514
} /* size: 211, variables: 1, inline expansions: 9 (181 bytes) */

// <000E496A> filesystem/basefilesystem.cpp:3522
// variables: 4
// function calls: 24
void CBaseFileSystem::FindFileAbsoluteList(CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& outAbsolutePathNames, const char* pWildCard, const char* pPathID)
{
	FileFindHandle_t fh; // 3525
	{
		const char* pFound; // 3526
		{
			int nIndex; // 3528
			CUtlMemory<CUtlString, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
				int i);  // 1148
			CUtlString::CUtlString(); // 1479
			Construct<CUtlString>(CUtlString* pMemory); // 1148
			CUtlMemory<CUtlString, int>::NumAllocated(); // 1143
			CUtlMemory<CUtlString, int>::Base(); // 112
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 368
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::GrowMemory(
					int num);  // 1145
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::AddToTail(); // 3528
			CUtlMemory<CUtlString, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
					int i);  // 3529
		}
	}
	{
		int i; // 1721
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 1526
		Destruct<CUtlString>(CUtlString* pMemory); // 1723
	}
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::RemoveAll(); // 1798
	CUtlMemory<CUtlString, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlString, int>::Purge(); // 903
	CUtlMemory<CUtlString, int>::Purge(); // 1799
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Purge(); // 3524
	FileFindHandle_t::FileFindHandle_t(); // 3525
	FileFindHandle_t::~FileFindHandle_t(); // 3532
} /* size: 470, variables: 1, inline expansions: 8 (328 bytes) */

// <000E4856> filesystem/basefilesystem.cpp:3541
// variables: 2
void CBaseFileSystem::FindFirstEx(const char* pWildCard, const char* pPathID, FileFindHandle_t* pHandle)
{
	const char   __FUNCTION__; // 26245
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3543
	}
} /* size: 0, variables: 1 */

// <000E30D3> filesystem/basefilesystem.cpp:3548
// variables: 6
// function calls: 103
void CBaseFileSystem::FindFileInSearchPath(FindData_t* pFindData, const CSearchPath* pSearchPath, bool bGenerateAbsPaths)
{
	bool bIsFirstIterationInPath; // 3550
	{
		CPackedStore* pPackFile; // 3553
		CSearchPath::GetPackFile(); // 3553
		CUtlVectorBase<char::Count(); // 3563
		CBufferString::WriteBuffer(); // 1390
		CBufferString::WriteBuffer(); // 1101
		CBufferString::RemoveAll(); // 901
		CBufferString::Set(
			const char* pString,
			int nChars,
			bool bExact);  // 3567
		CUtlMemory<char::operator[](
				int i);  // 588
		CUtlVectorBase<char::operator[](
				int i);  // 3567
		CUtlVectorBase<char::Count(); // 54
		{
		}
		CUtlMemory<char::operator[](
				int i);  // 602
		CUtlVectorBase<char::Element(
			int i);  // 55
		CUtlMemory<char::operator[](
				int i);  // 602
		CUtlVectorBase<char::Element(
			int i);  // 1114
		memmove(void* __dest,
			const void* __src,
			size_t __len);  // 115
		V_memmove(void* dest,
				const void* src,
				size_t count);  // 1114
		CUtlVectorBase<char::ShiftElementsLeft(
					int elem,
					int num);  // 1608
		CUtlVectorBase<char::Remove(
			int elem);  // 56
		CUtlStringList_Base<CUtlVector<char::RemoveAndDelete(
				int nIndex);  // 3574
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 3575
		{
			int i; // 22
			CUtlVectorBase<char::Count(); // 22
			CUtlMemory<char::operator[](
					int i);  // 602
			CUtlVectorBase<char::Element(
				int i);  // 24
		}
		CUtlVectorBase<char::RemoveAll(); // 26
		CUtlStringList_Base<CUtlVector<char::PurgeAndFreeElements(); // 31
		CUtlStringList_Base<CUtlVector<char::PurgeAndDeleteElements(); // 3557
		{
			int i; // 22
			CUtlVectorBase<char::Count(); // 22
			CUtlMemory<char::operator[](
					int i);  // 602
			CUtlVectorBase<char::Element(
				int i);  // 24
		}
		CUtlVectorBase<char::RemoveAll(); // 26
		CUtlStringList_Base<CUtlVector<char::PurgeAndFreeElements(); // 31
		CUtlStringList_Base<CUtlVector<char::PurgeAndDeleteElements(); // 3558
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 3559
		CUtlVectorBase<char::Count(); // 3578
		CUtlVectorBase<char::Count(); // 54
		{
		}
		CUtlMemory<char::operator[](
				int i);  // 602
		CUtlVectorBase<char::Element(
			int i);  // 55
		CUtlMemory<char::operator[](
				int i);  // 602
		CUtlVectorBase<char::Element(
			int i);  // 1114
		memmove(void* __dest,
			const void* __src,
			size_t __len);  // 115
		V_memmove(void* dest,
				const void* src,
				size_t count);  // 1114
		CUtlVectorBase<char::ShiftElementsLeft(
					int elem,
					int num);  // 1608
		CUtlVectorBase<char::Remove(
			int elem);  // 56
		CUtlStringList_Base<CUtlVector<char::RemoveAndDelete(
				int nIndex);  // 3589
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 3590
		CBufferString::WriteBuffer(); // 1390
		CBufferString::WriteBuffer(); // 1101
		CBufferString::RemoveAll(); // 901
		CBufferString::Set(
			const char* pString,
			int nChars,
			bool bExact);  // 3582
		CUtlMemory<char::operator[](
				int i);  // 588
		CUtlVectorBase<char::operator[](
				int i);  // 3582
		CBufferString::WriteBuffer(); // 1390
		CBufferString::WriteBuffer(); // 1101
		CBufferString::RemoveAll(); // 3593
	}
	{
		CPathBufferString tempFileName; // 3601
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 3602
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<200>::CBufferStringN(); // 3601
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 3603
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 3604
	}
	{
		CPathBufferString relativePath; // 3639
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<200>::CBufferStringN(); // 3639
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 3640
		CBufferString::Set(
			const char* pString,
			int nChars,
			bool bExact);  // 3640
		CDirIterator::CurrentFileName(); // 3642
		CBufferString::WriteBuffer(); // 1390
		CBufferString::WriteBuffer(); // 803
		CBufferString::Access(); // 3642
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 3643
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 3644
	}
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 3645
	CDirIterator::CurrentFileName(); // 431
	CDirIterator::CurrentIsDotDir(); // 3620
	CDirIterator::CurrentIsDir(); // 3632
	CDirIterator::CurrentFileName(); // 3635
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 3635
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 3625
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 3610
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 3648
} /* size: 0, variables: 1, inline expansions: 18 (383 bytes) */

// <000E1B7F> filesystem/basefilesystem.cpp:3653
// variables: 11
// function calls: 81
void CBaseFileSystem::FindFirstHelper(const char* pWildCard, const char* pPathID, FileFindHandle_t* pHandle, bool bUseAbsPaths, int* pFoundStoreID)
{
	const char   __FUNCTION__; // 26353
	CPathIDBufferString tempPathID; // 3658
	CPathBufferString tempFileName; // 3660
	FindData_t* pFindData; // 3671
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3655
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3656
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3665
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3672
	}
	{
		const CSearchPath* pSearchPath; // 3681
		{
			const char* pFoundFile; // 3683
		}
		CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 447
		CSearchPathsVisits::Reset(); // 4479
		CSearchPathsIterator::GetFirst(); // 4475
		CSearchPathsIterator::GetFirst(); // 3681
	}
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<40>::CBufferStringN(); // 3658
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 3660
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 3662
	CUtlFixedMemory<UtlLinkedListElem_t<CBaseFileSystem::FindData_t, long long int> >::IsValidIterator(
			const Iterator_t& it);  // 81
	CUtlFixedMemory<UtlLinkedListElem_t<CBaseFileSystem::FindData_t, long long int> >::IsValidIterator(
			const Iterator_t& it);  // 82
	CUtlFixedMemory<UtlLinkedListElem_t<CBaseFileSystem::FindData_t, long long int> >::HeaderToBlock(
			const BlockHeader_t* pHeader);  // 131
	CUtlFixedMemory<UtlLinkedListElem_t<CBaseFileSystem::FindData_t, long long int> >::IsInBlock(
			intp i,
			BlockHeader_t* pBlockHeader);  // 85
	CUtlFixedMemory<UtlLinkedListElem_t<CBaseFileSystem::FindData_t, long long int> >::GetIndex(
		const Iterator_t& it);  // 86
	{
		BlockHeader_t* pbh; // 88
		CUtlFixedMemory<UtlLinkedListElem_t<CBaseFileSystem::FindData_t, long long int> >::HeaderToBlock(
				const BlockHeader_t* pHeader);  // 131
		CUtlFixedMemory<UtlLinkedListElem_t<CBaseFileSystem::FindData_t, long long int> >::IsInBlock(
				intp i,
				BlockHeader_t* pBlockHeader);  // 90
	}
	{
	}
	CUtlFixedMemory<UtlLinkedListElem_t<CBaseFileSystem::FindData_t, long long int> >::IsIdxAfter(
			intp i,
			const Iterator_t& it);  // 591
	CUtlFixedMemory<UtlLinkedListElem_t<CBaseFileSystem::FindData_t, long long int> >::operator[](
			intp i);  // 594
	IsValidIndex(const CUtlLinkedList<CBaseFileSystem::FindData_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedList this,
			long long int i);  // 977
	CUtlFixedMemory<UtlLinkedListElem_t<CBaseFileSystem::FindData_t, long long int> >::operator[](
			intp i);  // 367
	InternalElement(const CUtlLinkedList<CBaseFileSystem::FindData_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t this,
			long long int i);  // 1011
	{
	}
	LinkBefore(const CUtlLinkedList<CBaseFileSystem::FindData_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t this,
			long long int before,
			long long int elem);  // 771
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<100>::CBufferStringN(); // 496
	{
		CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::ValidateGrowSize(); // 475
		CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 178
		Eq_t::Eq_t(); // 178
		Hash_t::Hash_t(); // 178
		Init(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::Hash_t, CUtlSymbolTab this); // 178
		CUtlHashtable(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::Hash_t, CUtlSymbolTab this,
				int minimumSize);  // 49
		CUtlMemory<unsigned int, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 472
		CUtlMemory<unsigned int, int>::ValidateGrowSize(); // 475
		CUtlMemory<unsigned int, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 419
		CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVector(
				int growSize,
				int initCapacity);  // 49
		CThreadNullMutex::CThreadNullMutex(
				const char* pName);  // 48
		GetEqualRef(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::Hash_t, CUtlSymbolTab this); // 52
		Eq_t::SetSymbolTable(
				CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* pTable);  // 52
		GetHashRef(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::Hash_t, CUtlSymbolTab this); // 53
		Hash_t::SetSymbolTable(
				CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* pTable);  // 53
	}
	CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::CUtlSymbolTableLargeBase(
				int growSize,
				int initSize,
				bool caseInsensitive);  // 496
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 496
	CUtlVectorBase<char::ResetDbgInfo(); // 530
	CUtlMemory<char::ValidateGrowSize(); // 475
	CUtlMemory<char::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<char::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<char::CUtlVector(); // 11
	CUtlStringList_Base<CUtlVector<char::CUtlStringList_Base(); // 71
	CUtlStringList::CUtlStringList(); // 496
	CUtlMemory<char::ValidateGrowSize(); // 475
	CUtlMemory<char::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<char::ResetDbgInfo(); // 530
	CUtlVectorBase<char::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<char::CUtlVector(); // 11
	CUtlStringList_Base<CUtlVector<char::CUtlStringList_Base(); // 71
	CUtlStringList::CUtlStringList(); // 496
	FindData_t::FindData_t(); // 1479
	Construct<CBaseFileSystem::FindData_t>(FindData_t* pMemory); // 774
	InsertBefore(const CUtlLinkedList<CBaseFileSystem::FindData_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t this,
			long long int before);  // 805
	AddToTail(const CUtlLinkedList<CBaseFileSystem::FindData_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t this); // 3670
	operator[](const CUtlLinkedList<CBaseFileSystem::FindData_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t this,
			long long int i);  // 3671
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 3675
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 3678
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 3704
	CBufferString::~CBufferString(); // 587
	CBufferStringN<40>::~CBufferStringN(); // 3704
	FileFindHandle_t::operator=(
			FileSystemInvalidFindHandle_t nInvalidHandle);  // 3702
} /* size: 0, variables: 4, inline expansions: 58 (3985 bytes) */

// <000E1AFB> filesystem/basefilesystem.cpp:3706
void CBaseFileSystem::FindFirst(const char* pWildCard, FileFindHandle_t* pHandle)
{
} /* size: 21 */

// <000E1879> filesystem/basefilesystem.cpp:3713
// variables: 3
// function calls: 7
void CBaseFileSystem::FindNextFileHelper(FileFindHandle_t& handle, bool bGetAbsPaths, int* pFoundStoreID)
{
	FindData_t* pFindData; // 3715
	const CSearchPath* pCurrent; // 3718
	{
		const char* pFound; // 3725
	}
	{
	}
	CUtlFixedMemory<UtlLinkedListElem_t<CBaseFileSystem::FindData_t, long long int> >::operator[](
			intp i);  // 494
	operator[](const CUtlLinkedList<CBaseFileSystem::FindData_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t this,
			long long int i);  // 3715
	CUtlVectorBase<CBaseFileSystem::CSearchPath, CUtlMemory<CBaseFileSystem::CSearchPath, int> >::Count(); // 4493
	CUtlMemory<CBaseFileSystem::CSearchPath, int>::operator[](
			int i);  // 609
	CUtlVectorBase<CBaseFileSystem::CSearchPath, CUtlMemory<CBaseFileSystem::CSearchPath, int> >::Element(
		int i);  // 4493
	CSearchPathsIterator::GetCurrent(); // 4488
	CSearchPathsIterator::GetCurrent(); // 3718
} /* size: 0, variables: 2, inline expansions: 7 (137 bytes) */

// <000E10FE> filesystem/basefilesystem.cpp:3749
// variables: 2
// function calls: 26
void CBaseFileSystem::FindNext(FileFindHandle_t& handle)
{
	FindData_t* pFindData; // 3754
	{
		const char* pFileName; // 3757
		V_strlen(const char* str); // 86
		Lock(CThreadNullMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForReadTrait<CThreadNullMutex> >::CAutoLockT(
				const CThreadNullMutex& lock,
				const char* pFilename,
				int nLineNumber);  // 318
		Hash_t::HashString(
				const char* pString,
				int nLength);  // 319
		EqMatch_t::EqMatch_t(
				const CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* pTable,
				const char* pString);  // 320
		CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::operator[](
				int i);  // 296
		operator[](const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::Hash_t, CUtlSym this,
				handle_t idx);  // 324
		Unlock(CThreadNullMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForReadTrait<CThreadNullMutex> >::~CAutoLockT(); // 326
		CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::FindElementInternal(
					const char* pString,
					int nStringLen);  // 309
		CUtlMemory<unsigned int, int>::operator[](
				int i);  // 595
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
				int i);  // 250
		CUtlMemoryBlockAllocator::PageFromBlock(
				blockpooloffset_t nBlock);  // 508
		CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::IsValidIndex(
				int i);  // 509
		CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::operator[](
				int i);  // 511
		CUtlMemoryBlockAllocator::OffsetFromBlock(
				blockpooloffset_t nBlock);  // 511
		CUtlMemoryBlockAllocator::MemFromBlock(
				blockpooloffset_t nIndex);  // 250
		CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::StringFromSymbolID(
					uint nId);  // 253
		CUtlSymbolLarge::CUtlSymbolLarge(
				UtlSymLargeId_t id);  // 253
		CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::SymbolFromID(
				uint nId);  // 312
		CUtlSymbolLarge::CUtlSymbolLarge(); // 311
		CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::FindInternal(
				const char* pString,
				int nStringLen);  // 86
		CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::Find(
			const char* pString);  // 104
		CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::HasElement(
				const char* pStr);  // 3761
	}
	FileFindHandle_t::operator==(
			FileSystemInvalidFindHandle_t);  // 3751
} /* size: 288, variables: 1, inline expansions: 1 (29 bytes) */

// <000E1002> filesystem/basefilesystem.cpp:3774
// variable: 1
// function calls: 3
void CBaseFileSystem::FindIsDirectory(const FileFindHandle_t& handle)
{
	FindData_t* pFindData; // 3779
	FileFindHandle_t::operator==(
			FileSystemInvalidFindHandle_t);  // 3776
	CUtlFixedMemory<UtlLinkedListElem_t<CBaseFileSystem::FindData_t, long long int> >::operator[](
			intp i);  // 494
	operator[](const CUtlLinkedList<CBaseFileSystem::FindData_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t this,
			long long int i);  // 3779
} /* size: 40, variables: 1, inline expansions: 3 (15 bytes) */

// <000E077A> filesystem/basefilesystem.cpp:3788
// variables: 6
// function calls: 29
void CBaseFileSystem::FindClose(FileFindHandle_t& handle)
{
	FindData_t* pFindData; // 3793
	const char   __FUNCTION__; // 26191
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3794
	}
	FileFindHandle_t::operator==(
			FileSystemInvalidFindHandle_t);  // 3790
	CUtlFixedMemory<UtlLinkedListElem_t<CBaseFileSystem::FindData_t, long long int> >::IsValidIterator(
			const Iterator_t& it);  // 81
	CUtlFixedMemory<UtlLinkedListElem_t<CBaseFileSystem::FindData_t, long long int> >::IsValidIterator(
			const Iterator_t& it);  // 82
	CUtlFixedMemory<UtlLinkedListElem_t<CBaseFileSystem::FindData_t, long long int> >::HeaderToBlock(
			const BlockHeader_t* pHeader);  // 131
	CUtlFixedMemory<UtlLinkedListElem_t<CBaseFileSystem::FindData_t, long long int> >::IsInBlock(
			intp i,
			BlockHeader_t* pBlockHeader);  // 85
	CUtlFixedMemory<UtlLinkedListElem_t<CBaseFileSystem::FindData_t, long long int> >::GetIndex(
		const Iterator_t& it);  // 86
	{
		BlockHeader_t* pbh; // 88
		CUtlFixedMemory<UtlLinkedListElem_t<CBaseFileSystem::FindData_t, long long int> >::HeaderToBlock(
				const BlockHeader_t* pHeader);  // 131
		CUtlFixedMemory<UtlLinkedListElem_t<CBaseFileSystem::FindData_t, long long int> >::IsInBlock(
				intp i,
				BlockHeader_t* pBlockHeader);  // 90
	}
	{
	}
	CUtlFixedMemory<UtlLinkedListElem_t<CBaseFileSystem::FindData_t, long long int> >::IsIdxAfter(
			intp i,
			const Iterator_t& it);  // 600
	IsInList(const CUtlLinkedList<CBaseFileSystem::FindData_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedList this,
		long long int i);  // 3790
	{
	}
	CUtlFixedMemory<UtlLinkedListElem_t<CBaseFileSystem::FindData_t, long long int> >::operator[](
			intp i);  // 494
	operator[](const CUtlLinkedList<CBaseFileSystem::FindData_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t this,
			long long int i);  // 3793
	{
		int i; // 22
		CUtlVectorBase<char::Count(); // 22
		CUtlMemory<char::operator[](
				int i);  // 602
		CUtlVectorBase<char::Element(
			int i);  // 24
	}
	CUtlVectorBase<char::RemoveAll(); // 26
	CUtlStringList_Base<CUtlVector<char::PurgeAndFreeElements(); // 31
	CUtlStringList_Base<CUtlVector<char::PurgeAndDeleteElements(); // 3803
	{
		int i; // 22
		CUtlVectorBase<char::Count(); // 22
		CUtlMemory<char::operator[](
				int i);  // 602
		CUtlVectorBase<char::Element(
			int i);  // 24
	}
	CUtlVectorBase<char::RemoveAll(); // 26
	CUtlStringList_Base<CUtlVector<char::PurgeAndFreeElements(); // 31
	CUtlStringList_Base<CUtlVector<char::PurgeAndDeleteElements(); // 3804
	{
	}
	{
	}
	CUtlFixedMemory<UtlLinkedListElem_t<CBaseFileSystem::FindData_t, long long int> >::operator[](
			intp i);  // 367
	InternalElement(const CUtlLinkedList<CBaseFileSystem::FindData_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t this,
			long long int i);  // 752
	Destruct<CBaseFileSystem::FindData_t>(FindData_t* pMemory); // 753
	Free(const CUtlLinkedList<CBaseFileSystem::FindData_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t this,
		long long int elem);  // 907
	Remove(const CUtlLinkedList<CBaseFileSystem::FindData_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t this,
		long long int elem);  // 3806
} /* size: 0, variables: 2, inline expansions: 21 (1220 bytes) */

// <000E073D> filesystem/basefilesystem.cpp:3816
void CBaseFileSystem::GetLocalCopy(const char* pFileName)
{
} /* size: 5 */

// <000DFA30> filesystem/basefilesystem.cpp:3828
// variables: 11
// function calls: 52
void CBaseFileSystem::RelativePathToFullPath(const char* pFileName, const char* pPathID, CBufferString* pFullPath, PathTypeFilter_t pathFilter)
{
	const char   __FUNCTION__; // 26537
	CPathIDBufferString tempPathID; // 3833
	CPathBufferString inPath; // 3836
	CSearchPathsIterator iter; // 3841
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3830
	}
	{
		const CSearchPath* pSearchPath; // 3842
		{
			CPackedStore* pPack; // 3844
			CPathBufferString tempFileName; // 3865
			FioBaseFileInfo_t buf; // 3867
			bool bFound; // 3868
			{
				CPackedStoreFileHandle fHandle; // 3854
				CPackedStoreFileHandle::operator bool(); // 3855
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 776
				CBufferString::String(); // 3851
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 776
				CBufferString::String(); // 3859
			}
			CSearchPath::GetPackFile(); // 3844
			CBufferString::InitMinConstruct(
					bool bGrowable);  // 712
			CBufferString::CBufferString(); // 591
			CBufferStringN<200>::CBufferStringN(); // 3865
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 781
			CBufferString::operator char const*(); // 3868
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 3875
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 781
			CBufferString::operator char const*(); // 3871
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 781
			CBufferString::operator char const*(); // 3872
			CBufferString::WriteBuffer(); // 1390
			CBufferString::WriteBuffer(); // 1101
			CBufferString::RemoveAll(); // 901
			CBufferString::Set(
				const char* pString,
				int nChars,
				bool bExact);  // 3872
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 776
			CBufferString::String(); // 3873
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 3875
		}
		CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 447
		CSearchPathsVisits::Reset(); // 4479
		CSearchPathsIterator::GetFirst(); // 4475
		CSearchPathsIterator::GetFirst(); // 3842
	}
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<40>::CBufferStringN(); // 3833
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 3836
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 3838
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 3839
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 3879
	CBufferString::~CBufferString(); // 587
	CBufferStringN<40>::~CBufferStringN(); // 3879
} /* size: 0, variables: 4, inline expansions: 17 (355 bytes) */

// <0010E27F> filesystem/basefilesystem.cpp:3884
void CBaseFileSystem::FullPathToRelativePath(const char* pFullPath, const char* pPathId, CBufferString* pRelative)
{
} /* size: 17 */

// <000DE6A6> filesystem/basefilesystem.cpp:3889
// variables: 11
// function calls: 75
void CBaseFileSystem::FullPathToRelativePathInternal(const char* pFullPath, const char* pPathId, bool bForceRequested, CBufferString* pRelative, CUtlVector<int, CUtlMemory<int, int> >* pSearchPathIndices)
{
	const char   __FUNCTION__; // 26733
	int nInlen; // 3893
	CPathBufferString fixedPath; // 3903
	CPathBufferString inPath; // 3912
	CUtlSymbol lookup; // 3915
	int nFullPathLen; // 3921
	CSearchPathsIterator iter; // 3924
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3891
	}
	{
		const CSearchPath* pSearchPath; // 3925
		{
			CPathBufferString searchBase; // 3931
			int nSearchLen; // 3933
			CBufferString::InitMinConstruct(
					bool bGrowable);  // 712
			CBufferString::CBufferString(); // 591
			CBufferStringN<200>::CBufferStringN(); // 3931
			CBufferString::Length(); // 3933
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 781
			CBufferString::operator char const*(); // 3938
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 776
			CBufferString::String(); // 3949
			CBufferString::WriteBuffer(); // 1390
			CBufferString::WriteBuffer(); // 1101
			CBufferString::RemoveAll(); // 901
			CBufferString::Set(
				const char* pString,
				int nChars,
				bool bExact);  // 3949
			CUtlVectorBase<CBaseFileSystem::CSearchPath, CUtlMemory<CBaseFileSystem::CSearchPath, int> >::Count(); // 4498
			CSearchPathsIterator::GetCurrentIndex(); // 3956
			CUtlMemory<int, int>::NumAllocated(); // 1247
			CUtlMemory<int, int>::operator[](
					int i);  // 602
			CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
				int i);  // 1252
			Construct<int, int>(int* pMemory); // 1252
			CUtlMemory<int, int>::Base(); // 112
			CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 368
			CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<int, CUtlMemory<int, int> >::GrowMemory(
					int num);  // 1249
			CUtlVectorBase<int, CUtlMemory<int, int> >::AddToTail(
					int& src);  // 3956
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 3962
			CSearchPath::GetPathID(); // 815
			CUtlSymbol::operator==(
					const CUtlSymbol& src);  // 815
			FilterByPathID(const CSearchPath* pSearchPath,
					const CUtlSymbol& pathID,
					bool bForceRequested);  // 3928
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 3962
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 781
			CBufferString::operator char const*(); // 3943
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 781
			CBufferString::operator char const*(); // 3943
			V_strnicmp_fast<int>(const char* s1,
						const char* s2,
						int n);  // 3943
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 3962
		}
		CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 447
		CSearchPathsVisits::Reset(); // 4479
		CSearchPathsIterator::GetFirst(); // 4475
		CSearchPathsIterator::GetFirst(); // 3925
	}
	V_strlen(const char* str); // 3893
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 3903
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 1256
	CBufferString::CopyAndFixupPathName(
				const char* pPath,
				char chSeparator);  // 3904
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 3907
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 3909
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 3912
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 3913
	CUtlSymbol::CUtlSymbol(); // 3915
	CUtlSymbolTableMT::AddString(
			const char* pString);  // 3918
	CUtlSymbol::operator=(
			const CUtlSymbol& src);  // 3918
	V_strlen(const char* str); // 3921
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 3965
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 3965
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 3898
} /* size: 0, variables: 7, inline expansions: 30 (784 bytes) */

// <000DE2AB> filesystem/basefilesystem.cpp:3993
// variables: 5
// function calls: 13
void CBaseFileSystem::RemoveFile(const char* pRelativePath, const char* pPathID)
{
	const char   __FUNCTION__; // 26218
	CPathIDBufferString tempPathID; // 3998
	CPathBufferString scratchFileName; // 4002
	bool bSucc; // 4006
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3995
	}
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<40>::CBufferStringN(); // 3998
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 4002
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 4013
	CBufferString::~CBufferString(); // 587
	CBufferStringN<40>::~CBufferStringN(); // 4013
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 4006
} /* size: 0, variables: 4, inline expansions: 13 (255 bytes) */

// <000DDDEE> filesystem/basefilesystem.cpp:4015
// variables: 5
// function calls: 16
void CBaseFileSystem::DeleteDirectory(const char* pPath, const char* pPathID)
{
	const char   __FUNCTION__; // 26353
	CPathIDBufferString pTempPathID; // 4020
	CPathBufferString scratchFileName; // 4024
	bool bSucc; // 4028
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4017
	}
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<40>::CBufferStringN(); // 4020
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 4024
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 4034
	CBufferString::~CBufferString(); // 587
	CBufferStringN<40>::~CBufferStringN(); // 4034
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 4028
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 4031
} /* size: 0, variables: 4, inline expansions: 16 (362 bytes) */

// <000DD454> filesystem/basefilesystem.cpp:4040
// variables: 8
// function calls: 35
void CBaseFileSystem::DeleteDirectoryAndContents_R(const char* pPath, const char* pPathID, bool bForce)
{
	const char   __FUNCTION__; // 26684
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > files; // 4044
	int nFileCount; // 4046
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4042
	}
	{
		int i; // 4047
		CUtlString::Get(); // 4051
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
				int i);  // 4051
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
				int i);  // 4053
		CUtlString::Get(); // 4053
	}
	{
		int i; // 4060
		CUtlString::Get(); // 4062
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
				int i);  // 4062
	}
	CUtlMemory<CUtlString, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlString, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVector(); // 4044
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 4046
	{
		int i; // 1721
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 1526
		Destruct<CUtlString>(CUtlString* pMemory); // 1723
	}
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::RemoveAll(); // 4057
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 4059
	{
		int i; // 1721
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 1526
		Destruct<CUtlString>(CUtlString* pMemory); // 1723
	}
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::RemoveAll(); // 1798
	CUtlMemory<CUtlString, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlString, int>::Purge(); // 903
	CUtlMemory<CUtlString, int>::Purge(); // 1799
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Purge(); // 560
	ValidateAlignment<CUtlString>(void); // 508
	CUtlMemory<CUtlString, int>::Purge(); // 510
	CUtlMemory<CUtlString, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVector(); // 4067
} /* size: 0, variables: 3, inline expansions: 18 (543 bytes) */

// <000DC768> filesystem/basefilesystem.cpp:4072
// variables: 11
// function calls: 45
void CBaseFileSystem::RenameFile(const char* pOldPath, const char* pNewPath, const char* pathID)
{
	const char   __FUNCTION__; // 26218
	CPathIDBufferString pathIdCopy; // 4080
	const char* pOldPathId; // 4081
	CPathBufferString tempOldPath; // 4095
	CPathIDBufferString tempNewPathID; // 4105
	CPathBufferString newFileName; // 4108
	CPathBufferString pathOnly; // 4113
	bool bSucc; // 4118
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4074
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4076
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4077
	}
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<40>::CBufferStringN(); // 4080
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 4084
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 4085
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 4095
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 4097
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<40>::CBufferStringN(); // 4105
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 4108
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 4124
	CBufferString::~CBufferString(); // 587
	CBufferStringN<40>::~CBufferStringN(); // 4124
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 4124
	CBufferString::~CBufferString(); // 587
	CBufferStringN<40>::~CBufferStringN(); // 4124
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 4113
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 4114
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 4114
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 4116
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 4118
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 4124
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 4121
} /* size: 0, variables: 8, inline expansions: 45 (1085 bytes) */

// <0010831E> filesystem/basefilesystem.cpp:4130
// function call: 1
void CBaseFileSystem::GetCurrentDirectory(CBufferString* pDirectory)
{
	CBaseFileSystem::GetCurrentDirectory(
				CBufferString* pDirectory);  // 4130
} /* size: 68, inline expansions: 1 (28 bytes) */

// <000DC742> filesystem/basefilesystem.cpp:4130
void CBaseFileSystem::GetCurrentDirectory(CBufferString* pDirectory)
{
} /* size: 0 */

// <000DC705> filesystem/basefilesystem.cpp:4145
void CBaseFileSystem::SetWarningFunc(void (*pfnWarning)(const char *, ...))
{
} /* size: 12 */

// <000DC6C8> filesystem/basefilesystem.cpp:4154
void CBaseFileSystem::SetWarningLevel(FileWarningLevel_t level)
{
} /* size: 11 */

// <000AB6F2> filesystem/basefilesystem.cpp:4168
// member functions: 2
// member variables: 2
// struct size: 16
struct CUtlTempSet<FileWarningLevel_t> {
	/* filesystem/basefilesystem.cpp:4170 */
	void CUtlTempSet(CUtlTempSet<FileWarningLevel_t>* , FileWarningLevel_t& , const FileWarningLevel_t& );
	/* filesystem/basefilesystem.cpp:4176 */
	void ~CUtlTempSet(CUtlTempSet<FileWarningLevel_t>* );
	FileWarningLevel_t & m_target; /* 0 8 */
	const enum FileWarningLevel_t m_originalValue; /* 8 4 */
};

// <000CACAB> filesystem/basefilesystem.cpp:4170
void CUtlTempSet<FileWarningLevel_t>::CUtlTempSet(FileWarningLevel_t& target, const FileWarningLevel_t& override)
{
} /* size: 0 */

// <000CAC78> filesystem/basefilesystem.cpp:4170
inline void CUtlTempSet<FileWarningLevel_t>::CUtlTempSet(FileWarningLevel_t& target, const FileWarningLevel_t& override)
{
} /* size: 0 */

// <000CAC61> filesystem/basefilesystem.cpp:4176
void CUtlTempSet<FileWarningLevel_t>::~CUtlTempSet()
{
} /* size: 0 */

// <000CAC48> filesystem/basefilesystem.cpp:4176
inline void CUtlTempSet<FileWarningLevel_t>::~CUtlTempSet()
{
} /* size: 0 */

// <000DC470> filesystem/basefilesystem.cpp:4227
void COpenedFile::COpenedFile()
{
} /* size: 0 */

// <000DC411> filesystem/basefilesystem.cpp:4236
void COpenedFile::~COpenedFile()
{
} /* size: 0 */

// <000DC2D4> filesystem/basefilesystem.cpp:4245
// variables: 2
// function calls: 2
void COpenedFile::COpenedFile(const COpenedFile& src)
{
	{
		int len; // 4250
	}
	{
		int len; // 4250
		V_strlen(const char* str); // 4250
		V_strncpy<int>(char* pDest,
				const char* pSrc,
				int maxLenInChars);  // 4252
	}
} /* size: 0 */

// <000DC29B> filesystem/basefilesystem.cpp:4245
// variable: 1
void COpenedFile::COpenedFile(const COpenedFile& src)
{
	{
		int len; // 4250
	}
} /* size: 0 */

// <0010B5F1> filesystem/basefilesystem.cpp:4265
void COpenedFile::operator==(const COpenedFile& src)
{
} /* size: 0 */

// <0010B623> filesystem/basefilesystem.cpp:4274
// variable: 1
// function calls: 2
void COpenedFile::SetName(const char* name)
{
	int len; // 4277
	V_strlen(const char* str); // 4277
	V_strncpy<int>(char* pDest,
			const char* pSrc,
			int maxLenInChars);  // 4279
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <000DC23A> filesystem/basefilesystem.cpp:4274
// variable: 1
void COpenedFile::SetName(const char* name)
{
	int len; // 4277
} /* size: 0, variables: 1 */

// <0010B70D> filesystem/basefilesystem.cpp:4286
void COpenedFile::GetName()
{
} /* size: 0 */

// <000DBE0A> filesystem/basefilesystem.cpp:4295
// function calls: 14
void CSearchPath::CSearchPath()
{
	{
	}
	CUtlMemory<CUtlString, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlString, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVector(); // 4295
	CUtlMemory<CUtlSymbol, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlSymbol, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CUtlSymbol, CUtlMemory<CUtlSymbol, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CUtlSymbol, CUtlMemory<CUtlSymbol, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CUtlSymbol, CUtlMemory<CUtlSymbol, int> >::CUtlVector(); // 4295
	CUtlSymbol::CUtlSymbol(); // 4295
	CUtlStringToken::CUtlStringToken(); // 4295
	{
		CUtlSymbol::operator=(
				const CUtlSymbol& src);  // 4299
		CUtlSymbolTableMT::AddString(
				const char* pString);  // 4297
	}
} /* size: 330, inline expansions: 12 (96 bytes) */

// <000DBDD4> filesystem/basefilesystem.cpp:4295
// variable: 1
void CSearchPath::CSearchPath()
{
	{
		CUtlSymbol s_emptyPath; // 4297
	}
} /* size: 0 */

// <000DB588> filesystem/basefilesystem.cpp:4314
// variables: 3
// function calls: 32
void CSearchPath::~CSearchPath()
{
	{
		{
			int nRefCount; // 4318
		}
		{
		}
	}
	{
		{
			int nRefCount; // 4318
			CUtlSymbol::CUtlSymbol(
					const CUtlSymbol& sym);  // 761
			CThreadMutex::Lock(
				const char* pFileName,
				int nLineNumber);  // 3047
			CThreadMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 3053
			CThreadRWLock::LockForRead(
					const char* pFileName,
					int nLineNumber);  // 267
			CUtlSymbol::CUtlSymbol(
					const CUtlSymbol& sym);  // 268
			CThreadMutex::Lock(
				const char* pFileName,
				int nLineNumber);  // 3058
			CThreadMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 3064
			CThreadRWLock::UnlockRead(
					const char* pFileName,
					int nLineNumber);  // 269
			CUtlSymbolTableMT::String(
				CUtlSymbol id);  // 761
			CSearchPath::GetPathString(); // 4321
		}
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 4332
		{
		}
		CUtlVectorBase<CUtlSymbol, CUtlMemory<CUtlSymbol, int> >::RemoveAll(); // 1798
		CUtlMemory<CUtlSymbol, int>::IsExternallyAllocated(); // 905
		CUtlMemory<CUtlSymbol, int>::Purge(); // 903
		CUtlMemory<CUtlSymbol, int>::Purge(); // 1799
		CUtlVectorBase<CUtlSymbol, CUtlMemory<CUtlSymbol, int> >::Purge(); // 560
		ValidateAlignment<CUtlSymbol>(void); // 508
		CUtlMemory<CUtlSymbol, int>::Purge(); // 510
		CUtlMemory<CUtlSymbol, int>::~CUtlMemory(); // 562
		CUtlVectorBase<CUtlSymbol, CUtlMemory<CUtlSymbol, int> >::~CUtlVectorBase(); // 410
		CUtlVector<CUtlSymbol, CUtlMemory<CUtlSymbol, int> >::~CUtlVector(); // 4333
		{
			int i; // 1721
			CUtlMemory<CUtlString, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
				int i);  // 1723
			CUtlString::~CUtlString(); // 1526
			Destruct<CUtlString>(CUtlString* pMemory); // 1723
		}
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::RemoveAll(); // 1798
		CUtlMemory<CUtlString, int>::IsExternallyAllocated(); // 905
		CUtlMemory<CUtlString, int>::Purge(); // 903
		CUtlMemory<CUtlString, int>::Purge(); // 1799
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Purge(); // 560
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVectorBase(); // 410
		CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVector(); // 4333
	}
} /* size: 0 */

// <000DB534> filesystem/basefilesystem.cpp:4314
// variables: 3
void CSearchPath::~CSearchPath()
{
	const char   __FUNCTION__; // 26272
	{
		int nRefCount; // 4318
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4332
	}
} /* size: 0, variables: 1 */

// <0010B737> filesystem/basefilesystem.cpp:4335
// variable: 1
// function calls: 41
void CSearchPath::ConstructFullPath(const char* pFileName, CBufferString* pFullPath)
{
	bool bAbsolutePath; // 4337
	CSearchPath::GetPackFile(); // 4345
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 4348
	CSearchPath::GetPackFile(); // 4349
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 323
	CPackedStore::BaseName(); // 4349
	CBufferString::Append(
		const char* pString,
		int nChars,
		bool bExact);  // 4349
	CBufferString::Append(
		char ch,
		bool bExact);  // 4350
	CBufferString::Append(
		const char* pString,
		int nChars,
		bool bExact);  // 4351
	CUtlSymbol::CUtlSymbol(
			const CUtlSymbol& sym);  // 761
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 3047
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 3053
	CThreadRWLock::LockForRead(
			const char* pFileName,
			int nLineNumber);  // 267
	CUtlSymbol::CUtlSymbol(
			const CUtlSymbol& sym);  // 268
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 3058
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 3064
	CThreadRWLock::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 269
	CUtlSymbolTableMT::String(
		CUtlSymbol id);  // 761
	CSearchPath::GetPathString(); // 4353
	CUtlSymbol::CUtlSymbol(
			const CUtlSymbol& sym);  // 761
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 3047
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 3053
	CThreadRWLock::LockForRead(
			const char* pFileName,
			int nLineNumber);  // 267
	CUtlSymbol::CUtlSymbol(
			const CUtlSymbol& sym);  // 268
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 3058
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 3064
	CThreadRWLock::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 269
	CUtlSymbolTableMT::String(
		CUtlSymbol id);  // 761
	CSearchPath::GetPathString(); // 4355
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 803
	CBufferString::Access(); // 4361
	CSearchPath::ConstructFullPath(
				const char* pFileName,
				CBufferString* pFullPath);  // 4335
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 4340
} /* size: 1485, variables: 1, inline expansions: 41 (5347 bytes) */

// <000DB4F0> filesystem/basefilesystem.cpp:4335
// variable: 1
void CSearchPath::ConstructFullPath(const char* pFileName, CBufferString* pFullPath)
{
	bool bAbsolutePath; // 4337
} /* size: 0, variables: 1 */

// <000DA66B> filesystem/basefilesystem.cpp:4370
// variables: 2
// function calls: 48
void CSearchPathsIterator::CSearchPathsIterator(CBaseFileSystem* pFileSystem, const char ** ppszFilename, const char* pszPathID, PathTypeFilter_t pathTypeFilter, bool bForceRequested)
{
	{
		CPathIDBufferString tempPathID; // 4379
	}
	CUtlSymbol::CUtlSymbol(); // 4377
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 442
	CSearchPathsVisits::CSearchPathsVisits(); // 4377
	CUtlSymbol::CUtlSymbol(); // 358
	CPathIDInfo::CPathIDInfo(); // 4377
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 4377
	{
		CPathIDBufferString tempPathID; // 4379
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<40>::CBufferStringN(); // 4379
		CUtlSymbolTableMT::AddString(
				const char* pString);  // 4387
		CUtlSymbol::operator=(
				const CUtlSymbol& src);  // 4387
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 4428
		CBufferString::~CBufferString(); // 587
		CBufferStringN<40>::~CBufferStringN(); // 4429
		ThreadInterlockedIncrement(volatile int32* p); // 576
		CInterlockedIntT<unsigned int, 4>::operator++(); // 3093
		CThreadRWLock_FastRead::LockForRead(
				const char* pFileName,
				int nLineNumber);  // 4396
		CUtlVectorBase<CBaseFileSystem::CSearchPath, CUtlMemory<CBaseFileSystem::CSearchPath, int> >::Count(); // 4397
		CBufferString::WriteBuffer(); // 1390
		CBufferString::WriteBuffer(); // 1101
		CBufferString::RemoveAll(); // 901
		CBufferString::Set(
			const char* pString,
			int nChars,
			bool bExact);  // 1256
		CBufferString::CopyAndFixupPathName(
					const char* pPath,
					char chSeparator);  // 4412
		CUtlSymbol::CUtlSymbol(
				UtlSymId_t id);  // 4391
		CUtlSymbol::operator=(
				const CUtlSymbol& src);  // 4391
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<unsigned int, 4>::operator--(); // 3106
		CThreadRWLock_FastRead::UnlockRead(
				const char* pFileName,
				int nLineNumber);  // 4404
		CUtlSymbolTableMT::AddString(
				const char* pString);  // 795
		CUtlSymbol::operator=(
				const CUtlSymbol& src);  // 795
		CThreadMutex::Lock(
			const char* pFileName,
			int nLineNumber);  // 3047
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 3053
		CThreadRWLock::LockForRead(
				const char* pFileName,
				int nLineNumber);  // 267
		CUtlSymbol::CUtlSymbol(
				const CUtlSymbol& sym);  // 268
		CThreadMutex::Lock(
			const char* pFileName,
			int nLineNumber);  // 3058
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 3064
		CThreadRWLock::UnlockRead(
				const char* pFileName,
				int nLineNumber);  // 269
		CUtlSymbolTableMT::String(
			CUtlSymbol id);  // 796
		CUtlSymbol::CUtlSymbol(
				const CUtlSymbol& sym);  // 796
		CSearchPath::SetPath(
			const char* pPathID);  // 4408
	}
} /* size: 1477, inline expansions: 12 (142 bytes) */

// <000DA5FE> filesystem/basefilesystem.cpp:4370
// variable: 1
void CSearchPathsIterator::CSearchPathsIterator(CBaseFileSystem* pFileSystem, const char ** ppszFilename, const char* pszPathID, PathTypeFilter_t pathTypeFilter, bool bForceRequested)
{
	{
		CPathIDBufferString tempPathID; // 4379
	}
} /* size: 0 */

// <000D9B48> filesystem/basefilesystem.cpp:4431
// function calls: 38
void CSearchPathsIterator::CSearchPathsIterator(CBaseFileSystem* pFileSystem, const char* pszPathID, PathTypeFilter_t pathTypeFilter, bool bForceRequested)
{
	CUtlSymbol::CUtlSymbol(); // 4438
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 442
	CSearchPathsVisits::CSearchPathsVisits(); // 4438
	CUtlSymbol::CUtlSymbol(); // 358
	CPathIDInfo::CPathIDInfo(); // 4438
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 4438
	CUtlSymbolTableMT::AddString(
			const char* pString);  // 4442
	CUtlSymbol::operator=(
			const CUtlSymbol& src);  // 4442
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<unsigned int, 4>::operator++(); // 3093
	CThreadRWLock_FastRead::LockForRead(
			const char* pFileName,
			int nLineNumber);  // 4448
	CUtlVectorBase<CBaseFileSystem::CSearchPath, CUtlMemory<CBaseFileSystem::CSearchPath, int> >::Count(); // 4449
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 4464
	CUtlSymbol::CUtlSymbol(
			UtlSymId_t id);  // 4446
	CUtlSymbol::operator=(
			const CUtlSymbol& src);  // 4446
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<unsigned int, 4>::operator--(); // 3106
	CThreadRWLock_FastRead::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 4456
	CUtlSymbolTableMT::AddString(
			const char* pString);  // 795
	CUtlSymbol::operator=(
			const CUtlSymbol& src);  // 795
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 3047
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 3053
	CThreadRWLock::LockForRead(
			const char* pFileName,
			int nLineNumber);  // 267
	CUtlSymbol::CUtlSymbol(
			const CUtlSymbol& sym);  // 268
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 3058
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 3064
	CThreadRWLock::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 269
	CUtlSymbolTableMT::String(
		CUtlSymbol id);  // 796
	CUtlSymbol::CUtlSymbol(
			const CUtlSymbol& sym);  // 796
	CSearchPath::SetPath(
		const char* pPathID);  // 4460
} /* size: 1102, inline expansions: 38 (2304 bytes) */

// <000D9AF7> filesystem/basefilesystem.cpp:4431
void CSearchPathsIterator::CSearchPathsIterator(CBaseFileSystem* pFileSystem, const char* pszPathID, PathTypeFilter_t pathTypeFilter, bool bForceRequested)
{
} /* size: 0 */

// <000D981D> filesystem/basefilesystem.cpp:4467
// function calls: 13
void CSearchPathsIterator::~CSearchPathsIterator()
{
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<unsigned int, 4>::operator--(); // 3106
	CThreadRWLock_FastRead::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 4471
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 4473
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
	CUtlMemory<int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 442
	CSearchPathsVisits::~CSearchPathsVisits(); // 4473
} /* size: 131, inline expansions: 13 (262 bytes) */

// <000D9800> filesystem/basefilesystem.cpp:4467
void CSearchPathsIterator::~CSearchPathsIterator()
{
} /* size: 0 */

// <0010E19F> filesystem/basefilesystem.cpp:4475
// function calls: 3
void CSearchPathsIterator::GetFirst()
{
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 447
	CSearchPathsVisits::Reset(); // 4479
	CSearchPathsIterator::GetFirst(); // 4475
} /* size: 0, inline expansions: 3 (0 bytes) */

// <000D97E3> filesystem/basefilesystem.cpp:4475
void CSearchPathsIterator::GetFirst()
{
} /* size: 0 */

// <0010C342> filesystem/basefilesystem.cpp:4488
// function calls: 4
void CSearchPathsIterator::GetCurrent()
{
	CUtlVectorBase<CBaseFileSystem::CSearchPath, CUtlMemory<CBaseFileSystem::CSearchPath, int> >::Count(); // 4493
	CUtlMemory<CBaseFileSystem::CSearchPath, int>::operator[](
			int i);  // 609
	CUtlVectorBase<CBaseFileSystem::CSearchPath, CUtlMemory<CBaseFileSystem::CSearchPath, int> >::Element(
		int i);  // 4493
	CSearchPathsIterator::GetCurrent(); // 4488
} /* size: 0, inline expansions: 4 (0 bytes) */

// <000D97C6> filesystem/basefilesystem.cpp:4488
void CSearchPathsIterator::GetCurrent()
{
} /* size: 0 */

// <0010C446> filesystem/basefilesystem.cpp:4496
// function call: 1
void CSearchPathsIterator::GetCurrentIndex()
{
	CUtlVectorBase<CBaseFileSystem::CSearchPath, CUtlMemory<CBaseFileSystem::CSearchPath, int> >::Count(); // 4498
} /* size: 0, inline expansions: 1 (0 bytes) */

// <000D97A9> filesystem/basefilesystem.cpp:4496
void CSearchPathsIterator::GetCurrentIndex()
{
} /* size: 0 */

// <000D92B5> filesystem/basefilesystem.cpp:4510
// variables: 3
// function calls: 23
void CSearchPathsIterator::GetNext()
{
	const CSearchPath* pSearchPath; // 4517
	{
		const CPackedStore* pPackFile; // 4522
		CUtlMemory<CBaseFileSystem::CSearchPath, int>::operator[](
				int i);  // 609
		CUtlVectorBase<CBaseFileSystem::CSearchPath, CUtlMemory<CBaseFileSystem::CSearchPath, int> >::Element(
			int i);  // 4520
		CSearchPath::GetPackFile(); // 4522
		CUtlSymbol::operator UtlSymId_t(); // 807
		CSearchPath::GetPathID(); // 815
		CUtlSymbol::operator==(
				const CUtlSymbol& src);  // 815
		FilterByPathID(const CSearchPath* pSearchPath,
				const CUtlSymbol& pathID,
				bool bForceRequested);  // 4533
		{
			int i; // 1531
			CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 1531
			CUtlMemory<int, int>::operator[](
					int i);  // 609
			CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
				int i);  // 1533
		}
		CUtlVectorBase<int, CUtlMemory<int, int> >::Find(
			const int& src);  // 452
		CUtlMemory<int, int>::NumAllocated(); // 1196
		CUtlMemory<int, int>::operator[](
				int i);  // 602
		CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
			int i);  // 1201
		CopyConstruct<int>(int* pMemory,
					const int& src);  // 1201
		CUtlMemory<int, int>::Base(); // 112
		CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 368
		CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<int, CUtlMemory<int, int> >::GrowMemory(
				int num);  // 1198
		CUtlVectorBase<int, CUtlMemory<int, int> >::AddToTail(
				const int& src);  // 454
		CSearchPathsVisits::MarkVisit(
				const CSearchPath& searchPath);  // 4536
	}
	CUtlVectorBase<CBaseFileSystem::CSearchPath, CUtlMemory<CBaseFileSystem::CSearchPath, int> >::Count(); // 4518
	CUtlVectorBase<CBaseFileSystem::CSearchPath, CUtlMemory<CBaseFileSystem::CSearchPath, int> >::Count(); // 4540
} /* size: 348, variables: 1, inline expansions: 2 (4 bytes) */

// <000D8987> filesystem/basefilesystem.cpp:4551
// variables: 7
// function calls: 26
void CBaseFileSystem::LoadModule(const char* pFileName, const char* pPathID, bool bValidatedDllOnly)
{
	const char   __FUNCTION__; // 26218
	CPathIDBufferString tempPathID; // 4560
	CUtlSymbol lookup; // 4563
	int c; // 4566
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4553
	}
	{
		int i; // 4567
		{
			PlatModule_t pModule; // 4577
			CUtlMemory<CBaseFileSystem::CSearchPath, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CBaseFileSystem::CSearchPath, CUtlMemory<CBaseFileSystem::CSearchPath, int> >::operator[](
					int i);  // 4570
			CSearchPath::GetPackFile(); // 4570
			CUtlSymbol::operator UtlSymId_t(); // 807
			CUtlSymbol::operator==(
					const CUtlSymbol& src);  // 815
			FilterByPathID(const CSearchPath* pSearchPath,
					const CUtlSymbol& pathID,
					bool bForceRequested);  // 4573
			CThreadMutex::Lock(
				const char* pFileName,
				int nLineNumber);  // 3047
			CThreadMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 3053
			CThreadRWLock::LockForRead(
					const char* pFileName,
					int nLineNumber);  // 267
			CUtlSymbol::CUtlSymbol(
					const CUtlSymbol& sym);  // 268
			CThreadMutex::Lock(
				const char* pFileName,
				int nLineNumber);  // 3058
			CThreadMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 3064
			CThreadRWLock::UnlockRead(
					const char* pFileName,
					int nLineNumber);  // 269
			CUtlSymbolTableMT::String(
				CUtlSymbol id);  // 761
			CUtlSymbol::CUtlSymbol(
					const CUtlSymbol& sym);  // 761
			CSearchPath::GetPathString(); // 4576
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 781
			CBufferString::operator char const*(); // 4577
		}
	}
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<40>::CBufferStringN(); // 4560
	CUtlSymbolTableMT::AddString(
			const char* pString);  // 4563
	CUtlVectorBase<CBaseFileSystem::CSearchPath, CUtlMemory<CBaseFileSystem::CSearchPath, int> >::Count(); // 4566
	CBufferString::~CBufferString(); // 587
	CBufferStringN<40>::~CBufferStringN(); // 4587
} /* size: 0, variables: 4, inline expansions: 7 (137 bytes) */

// <000D8928> filesystem/basefilesystem.cpp:4592
void CBaseFileSystem::UnloadModule(PlatModule_t pModule)
{
} /* size: 12 */

// <000D84F3> filesystem/basefilesystem.cpp:4600
// variables: 3
// function calls: 19
void CBaseFileSystem::AddLoggingFunc(FileSystemLoggingFunc_t logFunc)
{
	const char   __FUNCTION__; // 26326
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4602
	}
	{
		int i; // 1531
		CUtlVectorBase<void (::Count()(char const*, char const*), CUtlMemory<void (*)(char const*, char const*), int> >* this); // 1531
		CUtlMemory<void (::operator[](
				int i);  // 609
		CUtlVectorBase<void (::Element(
			int i);  // 1533
	}
	CUtlVectorBase<void (::Find(
		void ()(const char *, const char *)* const& src);  // 4602
	CUtlVectorBase<void (::IsValidIndex(
			int i);  // 4602
	CUtlMemory<void (::NumAllocated()(char const*, char const*), int>* this); // 1196
	CUtlMemory<void (::Base()(char const*, char const*), int>* this); // 112
	CUtlVectorBase<void (::Base()(char const*, char const*), CUtlMemory<void (*)(char const*, char const*), int> >* this); // 368
	CUtlVectorBase<void (::ResetDbgInfo()(char const*, char const*), CUtlMemory<void (*)(char const*, char const*), int> >* this); // 824
	CUtlMemory<void (::IsGrowable()(char const*, char const*), int>* this); // 823
	CUtlMemory<void (::IsExternallyAllocated()(char const*, char const*), int>* this); // 859
	CUtlMemory<void (::IsExternallyAllocated()(char const*, char const*), int>* this); // 861
	CUtlMemory<void (::Grow(
		int num);  // 806
	CUtlVectorBase<void (::GrowMemory(
			int num);  // 1198
	CUtlMemory<void (::operator[](
			int i);  // 602
	CUtlVectorBase<void (::Element(
		int i);  // 1201
	CopyConstruct<void (*)(char const*, char const*)>(void ()(const char *, const char *)** pMemory,
								void ()(const char *, const char *)* const& src); // 1201
	CUtlVectorBase<void (::AddToTail(
			void ()(const char *, const char *)* const& src);  // 4603
} /* size: 0, variables: 1, inline expansions: 15 (895 bytes) */

// <000D81F0> filesystem/basefilesystem.cpp:4609
// variable: 1
// function calls: 13
void CBaseFileSystem::RemoveLoggingFunc(FileSystemLoggingFunc_t logFunc)
{
	{
		int i; // 1531
		CUtlVectorBase<void (::Count()(char const*, char const*), CUtlMemory<void (*)(char const*, char const*), int> >* this); // 1531
		CUtlMemory<void (::operator[](
				int i);  // 609
		CUtlVectorBase<void (::Element(
			int i);  // 1533
	}
	CUtlVectorBase<void (::Find(
		void ()(const char *, const char *)* const& src);  // 1617
	CUtlMemory<void (::operator[](
			int i);  // 602
	CUtlVectorBase<void (::Element(
		int i);  // 1114
	CUtlMemory<void (::operator[](
			int i);  // 602
	CUtlVectorBase<void (::Element(
		int i);  // 1114
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 115
	V_memmove(void* dest,
			const void* src,
			size_t count);  // 1114
	CUtlVectorBase<void (::ShiftElementsLeft(
				int elem,
				int num);  // 1608
	CUtlVectorBase<void (::Remove(
		int elem);  // 1620
	CUtlVectorBase<void (::FindAndRemove(
			void ()(const char *, const char *)* const& src);  // 4611
} /* size: 143, inline expansions: 10 (365 bytes) */

// <000D81D9> filesystem/basefilesystem.cpp:4614
void FixupSearchCacheEntry::FixupSearchCacheEntry()
{
} /* size: 0 */

// <000D81BC> filesystem/basefilesystem.cpp:4614
inline void FixupSearchCacheEntry::FixupSearchCacheEntry()
{
} /* size: 0 */

// <000D81A5> filesystem/basefilesystem.cpp:4614
void FixupSearchCacheEntry::~FixupSearchCacheEntry()
{
} /* size: 0 */

// <000D8188> filesystem/basefilesystem.cpp:4614
inline void FixupSearchCacheEntry::~FixupSearchCacheEntry()
{
} /* size: 0 */

// <000C143F> filesystem/basefilesystem.cpp:4614
void FixupSearchCacheEntry::FixupSearchCacheEntry(const FixupSearchCacheEntry &)
{
} /* size: 0 */

// <000C141D> filesystem/basefilesystem.cpp:4614
inline void FixupSearchCacheEntry::FixupSearchCacheEntry(const FixupSearchCacheEntry &)
{
} /* size: 0 */

// <000AB785> filesystem/basefilesystem.cpp:4614
// member functions: 3
// member variables: 2
// struct size: 24
struct FixupSearchCacheEntry {
	CBufferString Path; /* 0 16 */
	bool IsMountingVPK; /* 16 1 */
	void FixupSearchCacheEntry(FixupSearchCacheEntry* , const FixupSearchCacheEntry& );
	void ~FixupSearchCacheEntry(FixupSearchCacheEntry* );
	void FixupSearchCacheEntry(FixupSearchCacheEntry* );
};

// <00111917> filesystem/basefilesystem.cpp:4631
// variables: 9
// function calls: 74
bool FixupSearchPathName(const char* pInPathName, CBufferString* pOut)
{
	int ex; // 4639
	const char* pExt; // 4648
	bool bMountingVPK; // 4649
	bool bIsFakePath; // 4656
	CPathBufferString path; // 4658
	FixupSearchCacheEntry entry; // 4687
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::operator[](
			int i);  // 611
	CUtlRBTree<CUtlMap<char const::LeftChild(
			int i);  // 1913
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::operator[](
			int i);  // 545
	CUtlRBTree<CUtlMap<char const::Element(
		int i);  // 1912
	CKeyLess::operator(
			const KeyType_t& left,
			const Node_t& right);  // 1912
	CKeyLess::operator(
			const Node_t& left,
			const KeyType_t& right);  // 1914
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::operator[](
			int i);  // 617
	CUtlRBTree<CUtlMap<char const::RightChild(
			int i);  // 1915
	CUtlRBTree<CUtlMap<char const::FindAltKeyType<char const*, CUtlMap<char const*, FixupSearchCacheEntry, int, bool (
																const char* const& search,
																const CKeyLess& altLess);  // 298
	CUtlRBTree<CUtlMap<char const::FindAltKeyType<char const*>(
					const char* const& search);  // 243
	CUtlMap<char const::Find(
		const KeyType_t& key);  // 360
	CUtlDict<FixupSearchCacheEntry, int>::Find(
		const char* pName);  // 4639
	strstr(const char* __haystack,
		const char* __needle);  // 247
	V_strstr(const char* s1,
		const char* search);  // 4653
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 4658
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 4680
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 4614
	FixupSearchCacheEntry::FixupSearchCacheEntry(); // 4687
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 4688
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 4688
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 745
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 744
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 745
	CBufferString::CBufferString(
			const CBufferString& string);  // 4614
	FixupSearchCacheEntry::FixupSearchCacheEntry(
				const FixupSearchCacheEntry  &);  // 406
	Node_t::Node_t(
		const KeyType_t& k,
		const ElemType_t& e);  // 207
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::operator[](
			int i);  // 611
	CUtlRBTree<CUtlMap<char const::LeftChild(
			int i);  // 1667
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::operator[](
			int i);  // 539
	CUtlRBTree<CUtlMap<char const::Element(
		int i);  // 1665
	CKeyLess::operator(
			const Node_t& left,
			const Node_t& right);  // 1665
	CKeyLess::operator(
			const Node_t& left,
			const Node_t& right);  // 1669
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::operator[](
			int i);  // 617
	CUtlRBTree<CUtlMap<char const::RightChild(
			int i);  // 1677
	CUtlRBTree<CUtlMap<char const::FindInsertionPosition(
				const Node_t& insert,
				bool bCheckForDuplicates,
				int& parent,
				bool& leftchild,
				bool& isDuplicate);  // 1693
	{
		int newNode; // 1709
		{
		}
	}
	{
		int newNode; // 1696
	}
	CUtlRBTree<CUtlMap<char const::Insert(
		const Node_t& insert,
		ERBTreeInsertBehavior eInsertBehavior);  // 207
	CBufferString::~CBufferString(); // 4614
	FixupSearchCacheEntry::~FixupSearchCacheEntry(); // 402
	Node_t::~Node_t(); // 207
	CUtlMap<char const::Insert(
		const KeyType_t& key,
		const ElemType_t& insert,
		ERBTreeInsertBehavior eInsertBehavior);  // 343
	CUtlDict<FixupSearchCacheEntry, int>::Insert(
		const char* pName,
		const FixupSearchCacheEntry& element,
		ERBTreeInsertBehavior eInsertBehavior);  // 4691
	CBufferString::~CBufferString(); // 4614
	FixupSearchCacheEntry::~FixupSearchCacheEntry(); // 4694
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 4694
	{
		FixupSearchCacheEntry& entry; // 4642
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::operator[](
				int i);  // 539
		CUtlRBTree<CUtlMap<char const::Element(
			int i);  // 92
		CUtlMap<char const::operator[](
				IndexType_t i);  // 180
		CUtlDict<FixupSearchCacheEntry, int>::Element(
			int i);  // 207
		CUtlDict<FixupSearchCacheEntry, int>::operator[](
				int i);  // 4642
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 4643
		CBufferString::WriteBuffer(); // 1390
		CBufferString::WriteBuffer(); // 1101
		CBufferString::RemoveAll(); // 901
		CBufferString::Set(
			const char* pString,
			int nChars,
			bool bExact);  // 4643
	}
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 4684
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 4684
	strstr(const char* __haystack,
		const char* __needle);  // 247
	V_strstr(const char* s1,
		const char* search);  // 4654
} /* size: 0, variables: 6, inline expansions: 62 (2717 bytes) */

// <000D80FE> filesystem/basefilesystem.cpp:4631
// variables: 7
bool FixupSearchPathName(const char* pInPathName, CBufferString* pOut)
{
	int ex; // 4639
	const char* pExt; // 4648
	bool bMountingVPK; // 4649
	bool bIsFakePath; // 4656
	CPathBufferString path; // 4658
	FixupSearchCacheEntry entry; // 4687
	{
		FixupSearchCacheEntry& entry; // 4642
	}
} /* size: 0, variables: 6 */

// <000D8095> filesystem/basefilesystem.cpp:4701
void CBaseFileSystem::FindOrAddFileName(const char* pFileName)
{
} /* size: 16 */

// <000D802C> filesystem/basefilesystem.cpp:4706
void CBaseFileSystem::FindFileName(const char* pFileName)
{
} /* size: 16 */

// <000D7F9F> filesystem/basefilesystem.cpp:4716
void CBaseFileSystem::String(const FileNameHandle_t& handle, CBufferString* pBufferOut)
{
} /* size: 16 */

// <000D7F24> filesystem/basefilesystem.cpp:4721
// function call: 1
void CBaseFileSystem::GetPathIndex(const FileNameHandle_t& handle)
{
	CUtlFilenameSymbolTable::PathIndex(
			const FileNameHandle_t& handle);  // 4723
} /* size: 8, inline expansions: 1 (3 bytes) */

// <0010C4A1> filesystem/basefilesystem.cpp:4726
// variables: 3
// function calls: 31
void CBaseFileSystem::FindOrAddPathIDInfo(const CUtlSymbol& id, int bByRequestOnly)
{
	CPathIDInfo* pInfo; // 4742
	{
		int i; // 4728
		CUtlVectorBase<CBaseFileSystem::CPathIDInfo::Count(); // 4728
		{
			CPathIDInfo* pInfo; // 4730
			CUtlSymbol::operator==(
					const CUtlSymbol& src);  // 4731
			CUtlMemory<CBaseFileSystem::CPathIDInfo::operator[](
					int i);  // 588
			CUtlVectorBase<CBaseFileSystem::CPathIDInfo::operator[](
					int i);  // 4730
		}
	}
	CUtlMemory<CBaseFileSystem::CPathIDInfo::NumAllocated(); // 1196
	CUtlMemory<CBaseFileSystem::CPathIDInfo::operator[](
			int i);  // 602
	CUtlVectorBase<CBaseFileSystem::CPathIDInfo::Element(
		int i);  // 1201
	CopyConstruct<CBaseFileSystem::CPathIDInfo*>(CPathIDInfo** pMemory,
							CPathIDInfo* const& src);  // 1201
	CUtlMemory<CBaseFileSystem::CPathIDInfo::IsGrowable(); // 823
	CUtlMemory<CBaseFileSystem::CPathIDInfo::IsExternallyAllocated(); // 859
	CUtlMemory<CBaseFileSystem::CPathIDInfo::IsExternallyAllocated(); // 861
	CUtlMemory<CBaseFileSystem::CPathIDInfo::Grow(
		int num);  // 806
	CUtlVectorBase<CBaseFileSystem::CPathIDInfo::ResetDbgInfo(); // 824
	CUtlVectorBase<CBaseFileSystem::CPathIDInfo::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<CBaseFileSystem::CPathIDInfo::AddToTail(
			CPathIDInfo* const& src);  // 4743
	CUtlSymbol::CUtlSymbol(); // 358
	CPathIDInfo::CPathIDInfo(); // 4742
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 3047
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 3053
	CThreadRWLock::LockForRead(
			const char* pFileName,
			int nLineNumber);  // 267
	CUtlSymbol::CUtlSymbol(
			const CUtlSymbol& sym);  // 268
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 3058
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 3064
	CThreadRWLock::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 269
	CUtlSymbolTableMT::String(
		CUtlSymbol id);  // 755
	CUtlSymbol::CUtlSymbol(
			const CUtlSymbol& sym);  // 755
	CPathIDInfo::GetPathIDString(); // 772
	CUtlSymbol::operator=(
			const CUtlSymbol& src);  // 771
	CPathIDInfo::SetPathID(
			CUtlSymbol sym);  // 4744
	CUtlSymbol::CUtlSymbol(
			const CUtlSymbol& sym);  // 4744
	CBaseFileSystem::FindOrAddPathIDInfo(
				const CUtlSymbol& id,
				int bByRequestOnly);  // 4726
} /* size: 962, variables: 1, inline expansions: 27 (3573 bytes) */

// <000D7EC9> filesystem/basefilesystem.cpp:4726
// variables: 3
void CBaseFileSystem::FindOrAddPathIDInfo(const CUtlSymbol& id, int bByRequestOnly)
{
	CPathIDInfo* pInfo; // 4742
	{
		int i; // 4728
		{
			CPathIDInfo* pInfo; // 4730
		}
	}
} /* size: 0, variables: 1 */

// <000D7D70> filesystem/basefilesystem.cpp:4750
// function call: 1
void CBaseFileSystem::MarkPathIDByRequestOnly(const char* pPathID, bool bRequestOnly)
{
	CUtlSymbolTableMT::AddString(
			const char* pString);  // 4752
} /* size: 155, inline expansions: 1 (67 bytes) */

// <000D64AA> filesystem/basefilesystem.cpp:4755
// variables: 24
// function calls: 88
void CBaseFileSystem::FindBestPathMatch(const char* pPath, const char* pathID, PathTypeFilter_t pathTypeFilter, bool bForceRequested)
{
	const char   __FUNCTION__; // 26407
	CPathIDBufferString tempPathID; // 4763
	CUtlSymbol pathIDSym; // 4766
	CPathBufferString tempFileName; // 4772
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4758
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4760
	}
	{
		int i; // 4781
		{
			const CSearchPath* pSearchPath; // 4783
			const char* pPathString; // 4787
			int nPathStringLength; // 4788
			{
				int nBestMatchLength; // 4792
				const CSearchPath* pBestSearchPath; // 4793
				{
					int nBetterMatchIter; // 4796
					{
						CUtlSymbol betterMatchSym; // 4798
						const char* pBetterMatchString; // 4799
						int nBetterMatchLength; // 4800
						{
							int nFindSymIter; // 4805
							{
								const CSearchPath* pSymSearchPath; // 4807
								{
									const CPackedStore* pPackFile; // 826
									CSearchPath::GetPackFile(); // 826
								}
								FilterSearchPath(const CSearchPath* pSearchPath,
										CUtlSymbol pathID,
										PathTypeFilter_t pathTypeFilter,
										bool bForceRequested);  // 819
								CSearchPath::GetPathID(); // 815
								CUtlSymbol::operator==(
										const CUtlSymbol& src);  // 815
								FilterByPathID(const CSearchPath* pSearchPath,
										const CUtlSymbol& pathID,
										bool bForceRequested);  // 821
								FilterSearchPath(const CSearchPath* pSearchPath,
										CUtlSymbol pathID,
										PathTypeFilter_t pathTypeFilter,
										bool bForceRequested);  // 4810
								CUtlMemory<CBaseFileSystem::CSearchPath, int>::operator[](
										int i);  // 588
								CUtlVectorBase<CBaseFileSystem::CSearchPath, CUtlMemory<CBaseFileSystem::CSearchPath, int> >::operator[](
										int i);  // 4807
								CUtlSymbol::operator==(
										const CUtlSymbol& src);  // 4808
								CUtlSymbol::CUtlSymbol(
										const CUtlSymbol& sym);  // 4810
							}
							CUtlVectorBase<CBaseFileSystem::CSearchPath, CUtlMemory<CBaseFileSystem::CSearchPath, int> >::Count(); // 4805
						}
						CThreadMutex::Lock(
							const char* pFileName,
							int nLineNumber);  // 3047
						CThreadMutex::Unlock(
							const char* pFileName,
							int nLineNumber);  // 3053
						CThreadRWLock::LockForRead(
								const char* pFileName,
								int nLineNumber);  // 267
						CUtlSymbol::CUtlSymbol(
								const CUtlSymbol& sym);  // 268
						CThreadMutex::Lock(
							const char* pFileName,
							int nLineNumber);  // 3058
						CThreadMutex::Unlock(
							const char* pFileName,
							int nLineNumber);  // 3064
						CThreadRWLock::UnlockRead(
								const char* pFileName,
								int nLineNumber);  // 269
						CUtlSymbolTableMT::String(
							CUtlSymbol id);  // 4799
						V_strlen(const char* str); // 4800
						CBufferString::ReadBuffer(); // 1374
						CBufferString::ReadBuffer(); // 781
						CBufferString::operator char const*(); // 4802
						CUtlMemory<CUtlSymbol, int>::operator[](
								int i);  // 595
						CUtlVectorBase<CUtlSymbol, CUtlMemory<CUtlSymbol, int> >::operator[](
								int i);  // 4798
						CUtlSymbol::CUtlSymbol(
								const CUtlSymbol& sym);  // 4798
						CUtlSymbol::CUtlSymbol(
								const CUtlSymbol& sym);  // 4799
					}
					CUtlVectorBase<CUtlSymbol, CUtlMemory<CUtlSymbol, int> >::Count(); // 4796
				}
			}
			{
				const CPackedStore* pPackFile; // 826
				CSearchPath::GetPackFile(); // 826
			}
			FilterSearchPath(const CSearchPath* pSearchPath,
					CUtlSymbol pathID,
					PathTypeFilter_t pathTypeFilter,
					bool bForceRequested);  // 819
			CSearchPath::GetPathID(); // 815
			CUtlSymbol::operator==(
					const CUtlSymbol& src);  // 815
			FilterByPathID(const CSearchPath* pSearchPath,
					const CUtlSymbol& pathID,
					bool bForceRequested);  // 821
			FilterSearchPath(const CSearchPath* pSearchPath,
					CUtlSymbol pathID,
					PathTypeFilter_t pathTypeFilter,
					bool bForceRequested);  // 4784
			CThreadMutex::Lock(
				const char* pFileName,
				int nLineNumber);  // 3047
			CThreadMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 3053
			CThreadRWLock::LockForRead(
					const char* pFileName,
					int nLineNumber);  // 267
			CThreadMutex::Lock(
				const char* pFileName,
				int nLineNumber);  // 3058
			CThreadMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 3064
			CThreadRWLock::UnlockRead(
					const char* pFileName,
					int nLineNumber);  // 269
			CUtlSymbol::CUtlSymbol(
					const CUtlSymbol& sym);  // 268
			CUtlSymbolTableMT::String(
				CUtlSymbol id);  // 761
			CUtlSymbol::CUtlSymbol(
					const CUtlSymbol& sym);  // 761
			CSearchPath::GetPathString(); // 4787
			V_strlen(const char* str); // 4788
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 781
			CBufferString::operator char const*(); // 4789
			CUtlMemory<CBaseFileSystem::CSearchPath, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CBaseFileSystem::CSearchPath, CUtlMemory<CBaseFileSystem::CSearchPath, int> >::operator[](
					int i);  // 4783
			CUtlSymbol::CUtlSymbol(
					const CUtlSymbol& sym);  // 4784
		}
		CUtlVectorBase<CBaseFileSystem::CSearchPath, CUtlMemory<CBaseFileSystem::CSearchPath, int> >::Count(); // 4781
	}
	{
		int i; // 4838
		{
			const CSearchPath* pSearchPath; // 4840
			int64 size; // 4844
			{
				const CPackedStore* pPackFile; // 826
				CSearchPath::GetPackFile(); // 826
			}
			FilterSearchPath(const CSearchPath* pSearchPath,
					CUtlSymbol pathID,
					PathTypeFilter_t pathTypeFilter,
					bool bForceRequested);  // 819
			CSearchPath::GetPathID(); // 815
			CUtlSymbol::operator==(
					const CUtlSymbol& src);  // 815
			FilterByPathID(const CSearchPath* pSearchPath,
					const CUtlSymbol& pathID,
					bool bForceRequested);  // 821
			FilterSearchPath(const CSearchPath* pSearchPath,
					CUtlSymbol pathID,
					PathTypeFilter_t pathTypeFilter,
					bool bForceRequested);  // 4841
			CUtlMemory<CBaseFileSystem::CSearchPath, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CBaseFileSystem::CSearchPath, CUtlMemory<CBaseFileSystem::CSearchPath, int> >::operator[](
					int i);  // 4840
			CUtlSymbol::CUtlSymbol(
					const CUtlSymbol& sym);  // 4841
		}
		CUtlVectorBase<CBaseFileSystem::CSearchPath, CUtlMemory<CBaseFileSystem::CSearchPath, int> >::Count(); // 4838
	}
	CInterlockedIntT<unsigned int, 4>::operator unsigned int(); // 3115
	CThreadRWLock_FastRead::GetActiveAndWaitingLocksForRead(); // 4758
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<40>::CBufferStringN(); // 4763
	CUtlSymbol::CUtlSymbol(); // 4766
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 4772
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 1256
	CBufferString::CopyAndFixupPathName(
				const char* pPath,
				char chSeparator);  // 4775
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 4776
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 4836
	CUtlSymbolTableMT::AddString(
			const char* pString);  // 4769
	CUtlSymbol::operator=(
			const CUtlSymbol& src);  // 4769
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 4852
	CBufferString::~CBufferString(); // 587
	CBufferStringN<40>::~CBufferStringN(); // 4852
} /* size: 0, variables: 4, inline expansions: 26 (763 bytes) */

// <000D5779> filesystem/basefilesystem.cpp:4854
// variables: 10
// function calls: 49
void CBaseFileSystem::IsFileInReadOnlySearchPath(const char* pPath, const char* pathID)
{
	const char   __FUNCTION__; // 26635
	CPathIDBufferString tempPathID; // 4859
	CPathBufferString tempFileName; // 4862
	CSearchPathsIterator iter; // 4897
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4856
	}
	{
		CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForReadTrait<CThreadRWLock_FastRead> > generated_id_4873; // 4873
		bool bIsReadOnly; // 4877
		{
			int i; // 4879
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 4879
			CUtlMemory<CUtlString, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
					int i);  // 4881
			CUtlString::Get(); // 441
			CUtlString::operator char const*(); // 4881
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 781
			CBufferString::operator char const*(); // 4881
			CUtlMemory<CUtlString, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
					int i);  // 4882
			CUtlString::Get(); // 441
			CUtlString::operator char const*(); // 4882
			V_strlen(const char* str); // 4882
		}
		CBufferString::WriteBuffer(); // 1390
		CBufferString::WriteBuffer(); // 1101
		CBufferString::RemoveAll(); // 901
		CBufferString::Set(
			const char* pString,
			int nChars,
			bool bExact);  // 1256
		CBufferString::CopyAndFixupPathName(
					const char* pPath,
					char chSeparator);  // 4865
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 4866
		ThreadInterlockedIncrement(volatile int32* p); // 576
		CInterlockedIntT<unsigned int, 4>::operator++(); // 3093
		CThreadRWLock_FastRead::LockForRead(
				const char* pFileName,
				int nLineNumber);  // 951
		Lock(CThreadRWLock_FastRead& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForReadTrait<CThreadRWLock_FastRead> >::CAutoLockT(
				const CThreadRWLock_FastRead& lock,
				const char* pFilename,
				int nLineNumber);  // 4873
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<unsigned int, 4>::operator--(); // 3106
		CThreadRWLock_FastRead::UnlockRead(
				const char* pFileName,
				int nLineNumber);  // 952
		Unlock(CThreadRWLock_FastRead& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForReadTrait<CThreadRWLock_FastRead> >::~CAutoLockT(); // 4890
	}
	{
		const CSearchPath* pSearchPath; // 4898
		{
			int64 size; // 4900
			CSearchPath::GetPackFile(); // 4903
		}
		CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 447
		CSearchPathsVisits::Reset(); // 4479
		CSearchPathsIterator::GetFirst(); // 4475
		CSearchPathsIterator::GetFirst(); // 4898
	}
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<40>::CBufferStringN(); // 4859
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 4862
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 4895
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 4914
	CBufferString::~CBufferString(); // 587
	CBufferStringN<40>::~CBufferStringN(); // 4914
} /* size: 0, variables: 4, inline expansions: 13 (255 bytes) */

// <000D412E> filesystem/basefilesystem.cpp:4916
// variables: 14
// function calls: 88
void CBaseFileSystem::SetSearchPathReadOnly(const char* pPath, const char* pathID, bool bReadOnly)
{
	const char   __FUNCTION__; // 26510
	CPathIDBufferString tempPathID; // 4924
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> > generated_id_4931; // 4931
	CSearchPathsIterator iter; // 4993
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4920
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4927
	}
	{
		CPathBufferString fixedPath; // 4935
		CUtlVector<int, CUtlMemory<int, int> > searchPathIndices; // 4939
		{
			int i; // 4947
			{
				CSearchPath* pSearchPath; // 4951
				CUtlMemory<CBaseFileSystem::CSearchPath, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CBaseFileSystem::CSearchPath, CUtlMemory<CBaseFileSystem::CSearchPath, int> >::operator[](
						int i);  // 4951
				CSearchPath::GetPackFile(); // 4954
			}
		}
		{
			int i; // 4968
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 4968
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 781
			CBufferString::operator char const*(); // 4970
			CUtlMemory<CUtlString, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
					int i);  // 4970
			CUtlString::Get(); // 441
			CUtlString::operator char const*(); // 4970
		}
		{
			int i; // 4981
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 4981
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 781
			CBufferString::operator char const*(); // 4983
			CUtlMemory<CUtlString, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
					int i);  // 4983
			CUtlString::Get(); // 441
			CUtlString::operator char const*(); // 4983
			CUtlMemory<CUtlString, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
				int i);  // 1607
			CUtlString::~CUtlString(); // 1526
			Destruct<CUtlString>(CUtlString* pMemory); // 1607
			CUtlMemory<CUtlString, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
				int i);  // 1114
			CUtlMemory<CUtlString, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
				int i);  // 1114
			memmove(void* __dest,
				const void* __src,
				size_t __len);  // 115
			V_memmove(void* dest,
					const void* src,
					size_t count);  // 1114
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ShiftElementsLeft(
						int elem,
						int num);  // 1608
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Remove(
				int elem);  // 4985
		}
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<200>::CBufferStringN(); // 4935
		CUtlMemory<int, int>::ValidateGrowSize(); // 475
		CUtlMemory<int, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 4939
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 4942
		CUtlMemory<CUtlString, int>::NumAllocated(); // 1247
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
			int i);  // 1252
		CUtlString::Get(); // 354
		CUtlString::CUtlString(
				const CUtlString& string);  // 1514
		Construct<CUtlString, CUtlString>(CUtlString* pMemory); // 1252
		CUtlMemory<CUtlString, int>::Base(); // 112
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 368
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::GrowMemory(
				int num);  // 1249
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::AddToTail(
				CUtlString& src);  // 4977
		CUtlString::~CUtlString(); // 4977
		CUtlMemory<int, int>::Purge(); // 903
		CUtlMemory<int, int>::Purge(); // 1799
		CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
		ValidateAlignment<int>(void); // 508
		CUtlMemory<int, int>::Purge(); // 510
		CUtlMemory<int, int>::~CUtlMemory(); // 562
		CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
		CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 4991
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 4991
	}
	{
		const CSearchPath* pSearchPath; // 4994
		{
			CSearchPath* pNonConstSearchPath; // 5002
			CUtlVectorBase<CBaseFileSystem::CSearchPath, CUtlMemory<CBaseFileSystem::CSearchPath, int> >::Count(); // 4498
			CSearchPathsIterator::GetCurrentIndex(); // 5002
			CUtlMemory<CBaseFileSystem::CSearchPath, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CBaseFileSystem::CSearchPath, CUtlMemory<CBaseFileSystem::CSearchPath, int> >::operator[](
					int i);  // 5002
		}
		CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 447
		CSearchPathsVisits::Reset(); // 4479
		CSearchPathsIterator::GetFirst(); // 4475
		CSearchPathsIterator::GetFirst(); // 4994
		CSearchPath::GetPackFile(); // 4997
	}
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<40>::CBufferStringN(); // 4924
	CInterlockedIntT<int, 4>::GetRaw(); // 3180
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<unsigned int, 4>::AtomicAdd(
			unsigned int add);  // 3189
	CThreadRWLock_FastRead::LockForWrite(
			const char* pFileName,
			int nLineNumber);  // 959
	Lock(CThreadRWLock_FastRead& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> >::CAutoLockT(
			const CThreadRWLock_FastRead& lock,
			const char* pFilename,
			int nLineNumber);  // 4931
	Unlock(CThreadRWLock_FastRead& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> >::~CAutoLockT(); // 5007
	Unlock(CThreadRWLock_FastRead& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> >::~CAutoLockT(); // 5007
	CBufferString::~CBufferString(); // 587
	CBufferStringN<40>::~CBufferStringN(); // 5007
} /* size: 0, variables: 4, inline expansions: 15 (672 bytes) */

// <000D40B3> filesystem/basefilesystem.cpp:5061
void CBaseFileSystem::GetFileTypeForFullPath(const char* pFullPath, CBufferString* pStrBuf)
{
} /* size: 15 */

// <000D4049> filesystem/basefilesystem.cpp:5067
void CBaseFileSystem::GetOptimalIOConstraints(FileHandle_t hFile, unsigned int* pOffsetAlign, unsigned int* pSizeAlign, unsigned int* pBufferAlign)
{
} /* size: 41 */

// <000D3FB7> filesystem/basefilesystem.cpp:5083
// function calls: 2
void CFileHandle::CFileHandle(CBaseFileSystem* fs)
{
	CPackedStoreFileHandle::CPackedStoreFileHandle(); // 5083
	CFileHandle::Init(
		CBaseFileSystem* fs);  // 5085
} /* size: 0, inline expansions: 2 (0 bytes) */

// <000D3F92> filesystem/basefilesystem.cpp:5083
void CFileHandle::CFileHandle(CBaseFileSystem* fs)
{
} /* size: 0 */

// <000D3E9E> filesystem/basefilesystem.cpp:5088
// function calls: 2
void CFileHandle::~CFileHandle()
{
	{
		{
		}
	}
	{
		CFileHandle::IsValid(); // 5090
		{
		}
		CBaseFileSystem::Trace_FClose(
				VirtualFileHandle_t fileHandle);  // 5095
	}
} /* size: 0 */

// <000D3D6A> filesystem/basefilesystem.cpp:5088
// function calls: 3
void CFileHandle::~CFileHandle()
{
	CFileHandle::IsValid(); // 5090
	{
	}
	CBaseFileSystem::Trace_FClose(
			VirtualFileHandle_t fileHandle);  // 5095
	CFileHandle::~CFileHandle(); // 5100
} /* size: 0, inline expansions: 3 (92 bytes) */

// <000D3D2D> filesystem/basefilesystem.cpp:5088
// variables: 2
void CFileHandle::~CFileHandle()
{
	const char   __FUNCTION__; // 26272
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 5090
	}
} /* size: 0, variables: 1 */

// <0010CCEC> filesystem/basefilesystem.cpp:5102
void CFileHandle::Init(CBaseFileSystem* fs)
{
} /* size: 0 */

// <0010CD1E> filesystem/basefilesystem.cpp:5112
void CFileHandle::IsValid()
{
} /* size: 0 */

// <000D3C42> filesystem/basefilesystem.cpp:5117
// variables: 2
// function call: 1
void CFileHandle::GetSectorSize()
{
	const char   __FUNCTION__; // 26299
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 5119
	}
	CFileHandle::IsValid(); // 5119
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <0010CD48> filesystem/basefilesystem.cpp:5131
// function calls: 2
void CFileHandle::IsOK()
{
	CPackedStoreFileHandle::operator bool(); // 5134
	CFileHandle::IsValid(); // 5139
} /* size: 0, inline expansions: 2 (0 bytes) */

// <000D3C29> filesystem/basefilesystem.cpp:5131
void CFileHandle::IsOK()
{
} /* size: 0 */

// <0010CE04> filesystem/basefilesystem.cpp:5145
// function call: 1
void CFileHandle::Flush()
{
	CFileHandle::IsValid(); // 5147
	{
	}
} /* size: 0, inline expansions: 1 (0 bytes) */

// <000D3BD1> filesystem/basefilesystem.cpp:5145
// variables: 2
void CFileHandle::Flush()
{
	const char   __FUNCTION__; // 26083
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 5147
	}
} /* size: 0, variables: 1 */

// <0010CE73> filesystem/basefilesystem.cpp:5155
// function call: 1
void CFileHandle::SetBufferSize(int nBytes)
{
	CFileHandle::IsValid(); // 5157
	{
	}
} /* size: 0, inline expansions: 1 (0 bytes) */

// <000D3B6C> filesystem/basefilesystem.cpp:5155
// variables: 2
void CFileHandle::SetBufferSize(int nBytes)
{
	const char   __FUNCTION__; // 26299
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 5157
	}
} /* size: 0, variables: 1 */

// <0010CEEF> filesystem/basefilesystem.cpp:5165
// function call: 1
void CFileHandle::Read(void* pBuffer, int nLength)
{
	CFileHandle::IsValid(); // 5167
	{
	}
} /* size: 0, inline expansions: 1 (0 bytes) */

// <000D3AFA> filesystem/basefilesystem.cpp:5165
// variables: 2
void CFileHandle::Read(void* pBuffer, int nLength)
{
	const char   __FUNCTION__; // 26056
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 5167
	}
} /* size: 0, variables: 1 */

// <000D3941> filesystem/basefilesystem.cpp:5171
// variables: 2
// function calls: 4
void CFileHandle::Read(void* pBuffer, int nDestSize, int nLength)
{
	const char   __FUNCTION__; // 26056
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 5173
	}
	CFileHandle::IsValid(); // 5173
	ConVar::GetInt(); // 5176
	CPackedStoreFileHandle::operator bool(); // 5180
	CPackedStoreFileHandle::Read(
		void* pOutData,
		int nNumBytes);  // 5184
} /* size: 0, variables: 1, inline expansions: 4 (27 bytes) */

// <000D3815> filesystem/basefilesystem.cpp:5196
// variables: 3
// function call: 1
void CFileHandle::Write(const void* pBuffer, int nLength)
{
	const char   __FUNCTION__; // 26083
	int nBytesWritten; // 5206
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 5198
	}
	CFileHandle::IsValid(); // 5198
} /* size: 0, variables: 2, inline expansions: 1 (0 bytes) */

// <0010D2DE> filesystem/basefilesystem.cpp:5213
// function calls: 4
void CFileHandle::Seek(int64 nOffset, int nWhence)
{
	CFileHandle::IsValid(); // 5215
	{
	}
	CPackedStoreFileHandle::operator bool(); // 5218
	CFileHandle::Seek(
		int64 nOffset,
		int nWhence);  // 5213
	CPackedStoreFileHandle::Seek(
		int64 nOffset,
		int nWhence);  // 5220
} /* size: 0, inline expansions: 4 (92 bytes) */

// <000D37A3> filesystem/basefilesystem.cpp:5213
// variables: 2
void CFileHandle::Seek(int64 nOffset, int nWhence)
{
	const char   __FUNCTION__; // 26056
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 5215
	}
} /* size: 0, variables: 1 */

// <0010D529> filesystem/basefilesystem.cpp:5231
// function calls: 4
void CFileHandle::Tell()
{
	CFileHandle::IsValid(); // 5233
	{
	}
	CPackedStoreFileHandle::operator bool(); // 5236
	CPackedStoreFileHandle::Tell(); // 5238
	CFileHandle::Tell(); // 5231
} /* size: 0, inline expansions: 4 (53 bytes) */

// <000D374B> filesystem/basefilesystem.cpp:5231
// variables: 2
void CFileHandle::Tell()
{
	const char   __FUNCTION__; // 26056
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 5233
	}
} /* size: 0, variables: 1 */

// <0010D831> filesystem/basefilesystem.cpp:5248
// variable: 1
// function calls: 3
void CFileHandle::Size()
{
	int64 nReturnedSize; // 5252
	CFileHandle::IsValid(); // 5250
	{
	}
	CPackedStoreFileHandle::operator bool(); // 5255
	CFileHandle::Size(); // 5248
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <000D36E6> filesystem/basefilesystem.cpp:5248
// variables: 3
void CFileHandle::Size()
{
	const char   __FUNCTION__; // 26056
	int64 nReturnedSize; // 5252
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 5250
	}
} /* size: 0, variables: 2 */

// <000D3645> filesystem/basefilesystem.cpp:5267
// variables: 2
// function call: 1
void CFileHandle::AbsoluteBaseOffset()
{
	const char   __FUNCTION__; // 26434
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 5269
	}
	CFileHandle::IsValid(); // 5269
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <0010D901> filesystem/basefilesystem.cpp:5273
// function calls: 10
void CFileHandle::EndOfFile()
{
	CFileHandle::IsValid(); // 5275
	{
	}
	CPackedStoreFileHandle::operator bool(); // 5236
	CPackedStoreFileHandle::Tell(); // 5238
	CFileHandle::Tell(); // 5231
	CFileHandle::IsValid(); // 5233
	{
	}
	CFileHandle::Tell(); // 5277
	CFileHandle::IsValid(); // 5250
	{
	}
	CPackedStoreFileHandle::operator bool(); // 5255
	CFileHandle::Size(); // 5248
	CFileHandle::Size(); // 5277
} /* size: 0, inline expansions: 10 (0 bytes) */

// <000D35ED> filesystem/basefilesystem.cpp:5273
// variables: 2
void CFileHandle::EndOfFile()
{
	const char   __FUNCTION__; // 26191
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 5275
	}
} /* size: 0, variables: 1 */

// <000B3A39> filesystem/basefilesystem.cpp:5284
// function call: 1
void CIODelayAlarmThread::~CIODelayAlarmThread()
{
	CThreadEvent::~CThreadEvent(); // 5284
} /* size: 65, inline expansions: 1 (22 bytes) */

// <000B3974> filesystem/basefilesystem.cpp:5284
// function calls: 2
void CIODelayAlarmThread::~CIODelayAlarmThread()
{
	CThreadEvent::~CThreadEvent(); // 5284
	CIODelayAlarmThread::~CIODelayAlarmThread(); // 5284
} /* size: 78, inline expansions: 2 (66 bytes) */

// <000B3957> filesystem/basefilesystem.cpp:5284
inline void CIODelayAlarmThread::~CIODelayAlarmThread()
{
} /* size: 0 */

// <000AE2F7> filesystem/basefilesystem.cpp:5284
// member functions: 12
// member variables: 4
// vtable entry: 1
// class size: 544
class CIODelayAlarmThread : public CThread {
public:
	/* class CThread <ancestor>; */ /* 0 0 */
	void CIODelayAlarmThread(CIODelayAlarmThread* , CIODelayAlarmThread& );
	void CIODelayAlarmThread(CIODelayAlarmThread* , const CIODelayAlarmThread& );
	/* filesystem/basefilesystem.cpp:5298 */
	void CIODelayAlarmThread(CIODelayAlarmThread* , CBaseFileSystem* );
	/* filesystem/basefilesystem.cpp:5305 */
	void WakeUp(CIODelayAlarmThread* );
	CBaseFileSystem * m_pFileSystem; /* 400 8 */
	CThreadEvent m_hThreadEvent; /* 408 128 */
	volatile bool m_bThreadShouldExit; /* 536 1 */
	/* filesystem/basefilesystem.cpp:5310 */
	virtual int Run(CIODelayAlarmThread* );
	virtual void ~CIODelayAlarmThread(CIODelayAlarmThread* );
	void CIODelayAlarmThread(class CIODelayAlarmThread *, class CIODelayAlarmThread &); /* linkage=_ZN19CIODelayAlarmThreadC4EOS_ */
	void CIODelayAlarmThread(class CIODelayAlarmThread *, const class CIODelayAlarmThread  &); /* linkage=_ZN19CIODelayAlarmThreadC4ERKS_ */
	void CIODelayAlarmThread(class CIODelayAlarmThread *, class CBaseFileSystem *); /* linkage=_ZN19CIODelayAlarmThreadC4EP15CBaseFileSystem */
	/* <10db72> filesystem/basefilesystem.cpp:5305 */
	void WakeUp(class CIODelayAlarmThread *); /* linkage=_ZN19CIODelayAlarmThread6WakeUpEv */
	virtual int Run(class CIODelayAlarmThread *); /* linkage=_ZN19CIODelayAlarmThread3RunEv */
	virtual void ~CIODelayAlarmThread(class CIODelayAlarmThread *); /* linkage=_ZN19CIODelayAlarmThreadD4Ev */
};

// <000D3579> filesystem/basefilesystem.cpp:5298
void CIODelayAlarmThread::CIODelayAlarmThread(CBaseFileSystem* pFileSystem)
{
} /* size: 0 */

// <0010DB72> filesystem/basefilesystem.cpp:5305
void CIODelayAlarmThread::WakeUp()
{
} /* size: 0 */

// <000D3409> filesystem/basefilesystem.cpp:5310
// variables: 3
// function call: 1
void CIODelayAlarmThread::Run()
{
	{
		uint32 nWaitTime; // 5314
		float flCurTimeout; // 5315
		float64 flCurTime; // 5322
		Plat_IsInDebugSession(void); // 5326
	}
} /* size: 310 */

// <001090A1> filesystem/basefilesystem.cpp:5336
// function calls: 3
void CBaseFileSystem::SetIODelayAlarm(float flTime)
{
	CIODelayAlarmThread::WakeUp(); // 5348
	CIODelayAlarmThread::CIODelayAlarmThread(
				CBaseFileSystem* pFileSystem);  // 5345
	CBaseFileSystem::SetIODelayAlarm(
			float flTime);  // 5336
} /* size: 179, inline expansions: 3 (234 bytes) */

// <000D33E3> filesystem/basefilesystem.cpp:5336
void CBaseFileSystem::SetIODelayAlarm(float flTime)
{
} /* size: 0 */

// <000D319A> filesystem/basefilesystem.cpp:5355
// variables: 4
// function calls: 5
void fs_dump_open_duplicate_times(const CCommandContext& ctx, const CCommand& args)
{
	float64 flTotalTime; // 5357
	{
		int nFileOpenDuplicate; // 5359
		{
			FileOpenDuplicateTime_t* pFileOpenDuplicate; // 5361
			{
				float64 flAccumulatedMilliseconds; // 5367
				CUtlString::Get(); // 99
				CUtlString::String(); // 5368
			}
			CUtlMemory<FileOpenDuplicateTime_t::operator[](
					int i);  // 588
			CUtlVectorBase<FileOpenDuplicateTime_t::operator[](
					int i);  // 5361
		}
		CUtlVectorBase<FileOpenDuplicateTime_t::Count(); // 5359
	}
} /* size: 385, variables: 1 */

// <000D2F33> filesystem/basefilesystem.cpp:5378
// variables: 2
// function calls: 7
void fs_clear_open_duplicate_times(const CCommandContext& ctx, const CCommand& args)
{
	{
		int nFileOpenDuplicate; // 5380
		{
			FileOpenDuplicateTime_t* pFileOpenDuplicate; // 5382
			CUtlMemory<FileOpenDuplicateTime_t::operator[](
					int i);  // 588
			CUtlVectorBase<FileOpenDuplicateTime_t::operator[](
					int i);  // 5382
			CUtlString::~CUtlString(); // 177
			FileOpenDuplicateTime_t::~FileOpenDuplicateTime_t(); // 5383
			CUtlMemory<FileOpenDuplicateTime_t::operator[](
					int i);  // 588
			CUtlVectorBase<FileOpenDuplicateTime_t::operator[](
					int i);  // 5384
		}
		CUtlVectorBase<FileOpenDuplicateTime_t::Count(); // 5380
	}
} /* size: 129 */

// <000D2EAF> filesystem/basefilesystem.cpp:5390
// function call: 1
void CBaseFileSystem::IsPathInvalidForFilesystem(const char* pPath)
{
	V_strlen(const char* str); // 5392
} /* size: 35, inline expansions: 1 (10 bytes) */

// <000D2A3A> filesystem/basefilesystem.cpp:5411
// variable: 1
// function calls: 18
void CBaseFileSystem::GetAvailableDrives(CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& outAbsoluteDrivePaths)
{
	{
		int i; // 1721
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 1526
		Destruct<CUtlString>(CUtlString* pMemory); // 1723
	}
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::RemoveAll(); // 5413
	CUtlString::CUtlString(
			const char* pString);  // 5430
	CUtlMemory<CUtlString, int>::NumAllocated(); // 1247
	CUtlMemory<CUtlString, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
		int i);  // 1252
	CUtlString::Get(); // 354
	CUtlString::CUtlString(
			const CUtlString& string);  // 1514
	Construct<CUtlString, CUtlString>(CUtlString* pMemory); // 1252
	CUtlMemory<CUtlString, int>::Base(); // 112
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 368
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::GrowMemory(
			int num);  // 1249
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::AddToTail(
			CUtlString& src);  // 5430
	CUtlString::~CUtlString(); // 5430
} /* size: 276, inline expansions: 14 (353 bytes) */

// <00108535> filesystem/basefilesystem.cpp:5438
// function calls: 3
void CBaseFileSystem::MarkContentCorrupt(bool bMissingFilesOnly, const char* pFile, const char* pReason)
{
	SteamApps(void); // 5459
	{
	}
	SteamApps(void); // 5465
	CBaseFileSystem::MarkContentCorrupt(
				bool bMissingFilesOnly,
				const char* pFile,
				const char* pReason);  // 5438
} /* size: 0, inline expansions: 3 (151 bytes) */

// <000D29D6> filesystem/basefilesystem.cpp:5438
// variables: 2
void CBaseFileSystem::MarkContentCorrupt(bool bMissingFilesOnly, const char* pFile, const char* pReason)
{
	const char   __FUNCTION__; // 26434
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 5462
	}
} /* size: 0, variables: 1 */

// <000D2999> filesystem/basefilesystem.cpp:5479
void CBaseFileSystem::SetContentCorruptionReportingEnabled(bool bEnabled)
{
} /* size: 9 */

// <000D223F> filesystem/basefilesystem.cpp:5485
// variables: 3
// function calls: 22
void CBaseFileSystem::GetModPath(const char* modName)
{
	CBufferString pathId; // 5487
	CSearchPathsIterator iter; // 5491
	{
		const CSearchPath* pSearchPath; // 5492
		CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 447
		CSearchPathsVisits::Reset(); // 4479
		CSearchPathsIterator::GetFirst(); // 4475
		CSearchPathsIterator::GetFirst(); // 5492
		CUtlSymbol::CUtlSymbol(
				const CUtlSymbol& sym);  // 761
		CThreadMutex::Lock(
			const char* pFileName,
			int nLineNumber);  // 3047
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 3053
		CThreadRWLock::LockForRead(
				const char* pFileName,
				int nLineNumber);  // 267
		CUtlSymbol::CUtlSymbol(
				const CUtlSymbol& sym);  // 268
		CThreadMutex::Lock(
			const char* pFileName,
			int nLineNumber);  // 3058
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 3064
		CThreadRWLock::UnlockRead(
				const char* pFileName,
				int nLineNumber);  // 269
		CUtlSymbolTableMT::String(
			CUtlSymbol id);  // 761
		CSearchPath::GetPathString(); // 5494
	}
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 718
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 717
	CBufferString::CBufferString(
			const char* pString,
			int nChars,
			bool bExact,
			bool bGrowable);  // 5487
	CBufferString::Append(
		const char* pString,
		int nChars,
		bool bExact);  // 5488
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 5491
	CBufferString::~CBufferString(); // 5500
} /* size: 895, variables: 2, inline expansions: 8 (251 bytes) */

// <000D1F9F> filesystem/basefilesystem.cpp:5502
// variable: 1
// function calls: 9
void CBaseFileSystem::GetSymLink(const char* pPath, const char* pathID)
{
	short unsigned int i; // 5504
	CUtlString::CUtlString(
			const char* pString);  // 5504
	FindAltKeyType<CUtlString>(const CUtlRBTree<CUtlMap<CUtlString, CBaseFileSystem::SymLink_t>::Node_t, short unsigned int, CUtlMap<CUtlString, C this,
					const CUtlString& search);  // 243
	CUtlMap<CUtlString, CBaseFileSystem::SymLink_t, short unsigned int, bool (::Find(
		const KeyType_t& key);  // 5504
	CUtlString::~CUtlString(); // 5504
	operator[](const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CBaseFileSystem::SymLink_t>::Node_t, short unsigned int>, short unsi this,
			short unsigned int i);  // 539
	Element(const CUtlRBTree<CUtlMap<CUtlString, CBaseFileSystem::SymLink_t>::Node_t, short unsigned int, CUtlMap<CUtlString, CBaseFi this,
		short unsigned int i);  // 92
	CUtlMap<CUtlString, CBaseFileSystem::SymLink_t, short unsigned int, bool (::operator[](
			IndexType_t i);  // 5509
	CUtlString::Get(); // 99
	CUtlString::String(); // 5509
} /* size: 169, variables: 1, inline expansions: 9 (145 bytes) */

// <000D0B4F> filesystem/basefilesystem.cpp:5512
// variables: 8
// function calls: 73
void CBaseFileSystem::AddSymLink(const char* pPath, const char* pathID, const char* realPath)
{
	const char   __FUNCTION__; // 26218
	char fixedFilename; // 5526
	short unsigned int i; // 5532
	short unsigned int newi; // 5551
	{
		int* _pCrash; // 5515
	}
	{
		int* _pCrash; // 5518
	}
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 5515
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 5518
	V_strEndsWith(const char* pStr,
			const char* pSuffix);  // 5521
	V_strncpy<long unsigned int>(char* pDest,
					const char* pSrc,
					long unsigned int maxLenInChars);  // 5527
	CUtlString::CUtlString(
			const char* pString);  // 5532
	FindAltKeyType<CUtlString>(const CUtlRBTree<CUtlMap<CUtlString, CBaseFileSystem::SymLink_t>::Node_t, short unsigned int, CUtlMap<CUtlString, C this,
					const CUtlString& search);  // 243
	CUtlMap<CUtlString, CBaseFileSystem::SymLink_t, short unsigned int, bool (::Find(
		const KeyType_t& key);  // 5532
	CUtlString::~CUtlString(); // 5532
	CUtlString::CUtlString(
			const char* pString);  // 5551
	CUtlString::Get(); // 354
	CUtlString::CUtlString(
			const CUtlString& string);  // 405
	CUtlString::CUtlString(); // 405
	CUtlString::CUtlString(); // 405
	Node_t::Node_t(
		const KeyType_t& k);  // 213
	operator[](const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CBaseFileSystem::SymLink_t>::Node_t, short unsigned int>, shor this,
			short unsigned int i);  // 611
	LeftChild(const CUtlRBTree<CUtlMap<CUtlString, CBaseFileSystem::SymLink_t>::Node_t, short unsigned int, CUtlMap<CUtlString, C this,
			short unsigned int i);  // 1667
	operator[](const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CBaseFileSystem::SymLink_t>::Node_t, short unsigned int>, short unsi this,
			short unsigned int i);  // 539
	Element(const CUtlRBTree<CUtlMap<CUtlString, CBaseFileSystem::SymLink_t>::Node_t, short unsigned int, CUtlMap<CUtlString, CBaseFi this,
		short unsigned int i);  // 1665
	CKeyLess::operator(
			const Node_t& left,
			const Node_t& right);  // 1665
	CKeyLess::operator(
			const Node_t& left,
			const Node_t& right);  // 1669
	operator[](const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CBaseFileSystem::SymLink_t>::Node_t, short unsigned int>, shor this,
			short unsigned int i);  // 617
	RightChild(const CUtlRBTree<CUtlMap<CUtlString, CBaseFileSystem::SymLink_t>::Node_t, short unsigned int, CUtlMap<CUtlString, C this,
			short unsigned int i);  // 1677
	FindInsertionPosition(const CUtlRBTree<CUtlMap<CUtlString, CBaseFileSystem::SymLink_t>::Node_t, short unsigned int, CUtlMap<CUtlString, CBaseFi this,
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
	Insert(const CUtlRBTree<CUtlMap<CUtlString, CBaseFileSystem::SymLink_t>::Node_t, short unsigned int, CUtlMap<CUtlString, CBaseFi this,
		const Node_t& insert,
		ERBTreeInsertBehavior eInsertBehavior);  // 213
	CUtlString::~CUtlString(); // 737
	CUtlString::~CUtlString(); // 737
	SymLink_t::~SymLink_t(); // 402
	CUtlString::~CUtlString(); // 402
	Node_t::~Node_t(); // 213
	CUtlMap<CUtlString, CBaseFileSystem::SymLink_t, short unsigned int, bool (::Insert(
		const KeyType_t& key,
		ERBTreeInsertBehavior eInsertBehavior);  // 5551
	CUtlString::~CUtlString(); // 5551
	operator[](const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CBaseFileSystem::SymLink_t>::Node_t, short unsigned int>, short unsi this,
			short unsigned int i);  // 539
	Element(const CUtlRBTree<CUtlMap<CUtlString, CBaseFileSystem::SymLink_t>::Node_t, short unsigned int, CUtlMap<CUtlString, CBaseFi this,
		short unsigned int i);  // 92
	CUtlMap<CUtlString, CBaseFileSystem::SymLink_t, short unsigned int, bool (::operator[](
			IndexType_t i);  // 5552
	CUtlString::operator=(
			const char* src);  // 5552
	operator[](const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CBaseFileSystem::SymLink_t>::Node_t, short unsigned int>, short unsi this,
			short unsigned int i);  // 539
	Element(const CUtlRBTree<CUtlMap<CUtlString, CBaseFileSystem::SymLink_t>::Node_t, short unsigned int, CUtlMap<CUtlString, CBaseFi this,
		short unsigned int i);  // 92
	CUtlMap<CUtlString, CBaseFileSystem::SymLink_t, short unsigned int, bool (::operator[](
			IndexType_t i);  // 5553
	CUtlString::operator=(
			const char* src);  // 5553
	operator[](const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CBaseFileSystem::SymLink_t>::Node_t, short unsigned int>, short unsi this,
			short unsigned int i);  // 539
	Element(const CUtlRBTree<CUtlMap<CUtlString, CBaseFileSystem::SymLink_t>::Node_t, short unsigned int, CUtlMap<CUtlString, CBaseFi this,
		short unsigned int i);  // 92
	CUtlMap<CUtlString, CBaseFileSystem::SymLink_t, short unsigned int, bool (::operator[](
			IndexType_t i);  // 5554
	operator[](const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CBaseFileSystem::SymLink_t>::Node_t, short unsigned int>, short unsi this,
			short unsigned int i);  // 539
	Element(const CUtlRBTree<CUtlMap<CUtlString, CBaseFileSystem::SymLink_t>::Node_t, short unsigned int, CUtlMap<CUtlString, CBaseFi this,
		short unsigned int i);  // 92
	CUtlMap<CUtlString, CBaseFileSystem::SymLink_t, short unsigned int, bool (::operator[](
			IndexType_t i);  // 5557
	CUtlMemory<CUtlString, int>::NumAllocated(); // 1196
	CUtlMemory<CUtlString, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
		int i);  // 1201
	CUtlString::Get(); // 354
	CUtlString::CUtlString(
			const CUtlString& string);  // 1520
	CopyConstruct<CUtlString>(CUtlString* pMemory,
					const CUtlString& src);  // 1201
	CUtlMemory<CUtlString, int>::Base(); // 112
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 368
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::AddToTail(
			const CUtlString& src);  // 5557
	operator[](const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CBaseFileSystem::SymLink_t>::Node_t, short unsigned int>, short unsi this,
			short unsigned int i);  // 539
	Element(const CUtlRBTree<CUtlMap<CUtlString, CBaseFileSystem::SymLink_t>::Node_t, short unsigned int, CUtlMap<CUtlString, CBaseFi this,
		short unsigned int i);  // 92
	CUtlMap<CUtlString, CBaseFileSystem::SymLink_t, short unsigned int, bool (::operator[](
			IndexType_t i);  // 5543
	operator[](const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CBaseFileSystem::SymLink_t>::Node_t, short unsigned int>, short unsi this,
			short unsigned int i);  // 539
	Element(const CUtlRBTree<CUtlMap<CUtlString, CBaseFileSystem::SymLink_t>::Node_t, short unsigned int, CUtlMap<CUtlString, CBaseFi this,
		short unsigned int i);  // 92
	CUtlMap<CUtlString, CBaseFileSystem::SymLink_t, short unsigned int, bool (::operator[](
			IndexType_t i);  // 5545
	CUtlMemory<CUtlString, int>::NumAllocated(); // 1196
	CUtlMemory<CUtlString, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
		int i);  // 1201
	CUtlString::Get(); // 354
	CUtlString::CUtlString(
			const CUtlString& string);  // 1520
	CopyConstruct<CUtlString>(CUtlString* pMemory,
					const CUtlString& src);  // 1201
	CUtlMemory<CUtlString, int>::Base(); // 112
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 368
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::AddToTail(
			const CUtlString& src);  // 5545
} /* size: 0, variables: 4, inline expansions: 73 (2158 bytes) */

// <000D0651> filesystem/basefilesystem.cpp:5560
// variables: 4
// function calls: 13
void CBaseFileSystem::RemoveSymLink(const char* pPath, const char* pathID)
{
	const char   __FUNCTION__; // 26299
	char fixedFilename; // 5565
	short unsigned int i; // 5570
	{
		int* _pCrash; // 5563
	}
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 5563
	V_strncpy<long unsigned int>(char* pDest,
					const char* pSrc,
					long unsigned int maxLenInChars);  // 5566
	CUtlString::CUtlString(
			const char* pString);  // 5570
	FindAltKeyType<CUtlString>(const CUtlRBTree<CUtlMap<CUtlString, CBaseFileSystem::SymLink_t>::Node_t, short unsigned int, CUtlMap<CUtlString, C this,
					const CUtlString& search);  // 243
	CUtlMap<CUtlString, CBaseFileSystem::SymLink_t, short unsigned int, bool (::Find(
		const KeyType_t& key);  // 5570
	CUtlString::~CUtlString(); // 5570
	operator[](const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CBaseFileSystem::SymLink_t>::Node_t, short unsigned int>, short unsi this,
			short unsigned int i);  // 539
	Element(const CUtlRBTree<CUtlMap<CUtlString, CBaseFileSystem::SymLink_t>::Node_t, short unsigned int, CUtlMap<CUtlString, CBaseFi this,
		short unsigned int i);  // 92
	CUtlMap<CUtlString, CBaseFileSystem::SymLink_t, short unsigned int, bool (::operator[](
			IndexType_t i);  // 5574
	operator[](const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CBaseFileSystem::SymLink_t>::Node_t, short unsigned int>, short unsi this,
			short unsigned int i);  // 539
	Element(const CUtlRBTree<CUtlMap<CUtlString, CBaseFileSystem::SymLink_t>::Node_t, short unsigned int, CUtlMap<CUtlString, CBaseFi this,
		short unsigned int i);  // 92
	CUtlMap<CUtlString, CBaseFileSystem::SymLink_t, short unsigned int, bool (::operator[](
			IndexType_t i);  // 5576
	CUtlMap<CUtlString, CBaseFileSystem::SymLink_t, short unsigned int, bool (::RemoveAt(
		IndexType_t i);  // 5578
} /* size: 398, variables: 3, inline expansions: 13 (263 bytes) */

// <000D028B> filesystem/basefilesystem.cpp:5587
// variable: 1
// function calls: 17
void CBaseFileSystem::ClearSymLinks()
{
	{
		short unsigned int i; // 5590
		Count(const CUtlRBTree<CUtlMap<CUtlString, CBaseFileSystem::SymLink_t>::Node_t, short unsigned int, CUtlMap<CUtlString, C this); // 177
		CUtlMap<CUtlString, CBaseFileSystem::SymLink_t, short unsigned int, bool (::Count()(const CUtlString&, const CUtlStr this); // 5590
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
			int i);  // 1201
		CUtlString::Get(); // 354
		CUtlString::CUtlString(
				const CUtlString& string);  // 1520
		CopyConstruct<CUtlString>(CUtlString* pMemory,
						const CUtlString& src);  // 1201
		CUtlMemory<CUtlString, int>::NumAllocated(); // 1196
		CUtlMemory<CUtlString, int>::Base(); // 112
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 368
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::GrowMemory(
				int num);  // 1198
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::AddToTail(
				const CUtlString& src);  // 5592
		operator[](const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CBaseFileSystem::SymLink_t>::Node_t, short unsigned int>, short unsi this,
				short unsigned int i);  // 539
		Element(const CUtlRBTree<CUtlMap<CUtlString, CBaseFileSystem::SymLink_t>::Node_t, short unsigned int, CUtlMap<CUtlString, CBaseFi this,
			short unsigned int i);  // 92
		CUtlMap<CUtlString, CBaseFileSystem::SymLink_t, short unsigned int, bool (::operator[](
				IndexType_t i);  // 5592
	}
	CUtlMap<CUtlString, CBaseFileSystem::SymLink_t, short unsigned int, bool (::RemoveAll()(const CUtlString&, const CUtlString&)> this); // 5595
} /* size: 218, inline expansions: 1 (12 bytes) */

// <001091F9> filesystem/basefilesystem.cpp:5598
// variable: 1
// function calls: 27
void CBaseFileSystem::GetSearchPath(int index, CUtlString* pathid, CUtlString* path)
{
	const CSearchPath* pSearchPath; // 5601
	CUtlVectorBase<CBaseFileSystem::CSearchPath, CUtlMemory<CBaseFileSystem::CSearchPath, int> >::Count(); // 5600
	CUtlMemory<CBaseFileSystem::CSearchPath, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CBaseFileSystem::CSearchPath, CUtlMemory<CBaseFileSystem::CSearchPath, int> >::operator[](
			int i);  // 5601
	CUtlSymbol::CUtlSymbol(
			const CUtlSymbol& sym);  // 755
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 3047
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 3053
	CThreadRWLock::LockForRead(
			const char* pFileName,
			int nLineNumber);  // 267
	CUtlSymbol::CUtlSymbol(
			const CUtlSymbol& sym);  // 268
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 3058
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 3064
	CThreadRWLock::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 269
	CUtlSymbolTableMT::String(
		CUtlSymbol id);  // 755
	CPathIDInfo::GetPathIDString(); // 784
	CSearchPath::GetPathIDString(); // 5603
	CUtlString::operator=(
			const char* src);  // 5603
	CUtlSymbol::CUtlSymbol(
			const CUtlSymbol& sym);  // 761
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 3047
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 3053
	CThreadRWLock::LockForRead(
			const char* pFileName,
			int nLineNumber);  // 267
	CUtlSymbol::CUtlSymbol(
			const CUtlSymbol& sym);  // 268
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 3058
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 3064
	CThreadRWLock::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 269
	CUtlSymbolTableMT::String(
		CUtlSymbol id);  // 761
	CSearchPath::GetPathString(); // 5604
	CUtlString::operator=(
			const char* src);  // 5604
	CBaseFileSystem::GetSearchPath(
			int index,
			CUtlString* pathid,
			CUtlString* path);  // 5598
} /* size: 1101, variables: 1, inline expansions: 27 (5014 bytes) */

// <000D023E> filesystem/basefilesystem.cpp:5598
// variable: 1
void CBaseFileSystem::GetSearchPath(int index, CUtlString* pathid, CUtlString* path)
{
	const CSearchPath* pSearchPath; // 5601
} /* size: 0, variables: 1 */

// <000CF245> filesystem/basefilesystem.cpp:5612
// variables: 7
// function calls: 51
void CBaseFileSystem::GetSearchPathArgs(const char* pathID, CBufferString* pPath)
{
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForReadTrait<CThreadRWLock_FastRead> > generated_id_5614; // 5614
	bool first; // 5618
	CSearchPathsIterator iter; // 5620
	{
		const CSearchPath* pSearchPath; // 5621
		{
			CBufferString mod; // 5626
			CBufferString rel; // 5627
			char path; // 5631
			CBufferString::Append(
				const char* pString,
				int nChars,
				bool bExact);  // 5623
			CThreadMutex::Lock(
				const char* pFileName,
				int nLineNumber);  // 3047
			CThreadMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 3053
			CThreadRWLock::LockForRead(
					const char* pFileName,
					int nLineNumber);  // 267
			CUtlSymbol::CUtlSymbol(
					const CUtlSymbol& sym);  // 268
			CThreadMutex::Lock(
				const char* pFileName,
				int nLineNumber);  // 3058
			CThreadMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 3064
			CThreadRWLock::UnlockRead(
					const char* pFileName,
					int nLineNumber);  // 269
			CUtlSymbolTableMT::String(
				CUtlSymbol id);  // 761
			CUtlSymbol::CUtlSymbol(
					const CUtlSymbol& sym);  // 761
			CSearchPath::GetPathString(); // 5628
			CUtlSymbol::CUtlSymbol(
					const CUtlSymbol& sym);  // 761
			CThreadMutex::Lock(
				const char* pFileName,
				int nLineNumber);  // 3047
			CThreadMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 3053
			CThreadRWLock::LockForRead(
					const char* pFileName,
					int nLineNumber);  // 267
			CUtlSymbol::CUtlSymbol(
					const CUtlSymbol& sym);  // 268
			CThreadMutex::Lock(
				const char* pFileName,
				int nLineNumber);  // 3058
			CThreadMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 3064
			CThreadRWLock::UnlockRead(
					const char* pFileName,
					int nLineNumber);  // 269
			CUtlSymbolTableMT::String(
				CUtlSymbol id);  // 761
			CSearchPath::GetPathString(); // 5632
			V_strncpy<int>(char* pDest,
					const char* pSrc,
					int maxLenInChars);  // 5632
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 776
			CBufferString::String(); // 5635
			CBufferString::Append(
				const char* pString,
				int nChars,
				bool bExact);  // 5635
			CBufferString::Append(
				const char* pString,
				int nChars,
				bool bExact);  // 5636
			CBufferString::Append(
				const char* pString,
				int nChars,
				bool bExact);  // 5637
			CBufferString::~CBufferString(); // 5638
			CBufferString::~CBufferString(); // 5638
			CBufferString::InitMinConstruct(
					bool bGrowable);  // 712
			CBufferString::CBufferString(); // 5626
			CBufferString::InitMinConstruct(
					bool bGrowable);  // 712
			CBufferString::CBufferString(); // 5627
		}
		CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 447
		CSearchPathsVisits::Reset(); // 4479
		CSearchPathsIterator::GetFirst(); // 4475
		CSearchPathsIterator::GetFirst(); // 5621
	}
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<unsigned int, 4>::operator++(); // 3093
	CThreadRWLock_FastRead::LockForRead(
			const char* pFileName,
			int nLineNumber);  // 951
	Lock(CThreadRWLock_FastRead& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForReadTrait<CThreadRWLock_FastRead> >::CAutoLockT(
			const CThreadRWLock_FastRead& lock,
			const char* pFilename,
			int nLineNumber);  // 5614
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 5616
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<unsigned int, 4>::operator--(); // 3106
	CThreadRWLock_FastRead::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 952
	Unlock(CThreadRWLock_FastRead& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForReadTrait<CThreadRWLock_FastRead> >::~CAutoLockT(); // 5641
} /* size: 1670, variables: 3, inline expansions: 13 (357 bytes) */

// <000CE494> filesystem/basefilesystem.cpp:5643
// variables: 6
// function calls: 51
void CBaseFileSystem::SplitFullPath(const char* pFullPath, CBufferString* pOutMod, CBufferString* pOutRelativePath, CBufferString* pContentRoot)
{
	CUtlString fullPathFixed; // 5651
	CUtlString modPathId; // 5654
	CUtlString modName; // 5655
	{
		int idx; // 5661
		CUtlString pathid; // 5662
		CUtlString path; // 5663
		CUtlString::CUtlString(
				const char* pString);  // 5667
		CUtlString::CUtlString(); // 5662
		CUtlString::CUtlString(); // 5663
		CUtlString::~CUtlString(); // 5667
		V_strlen(const char* str); // 393
		CUtlString::Length(); // 5668
		CUtlString::Get(); // 5668
		V_strnicmp_fast<int>(const char* s1,
					const char* s2,
					int n);  // 5668
		V_strlen(const char* str); // 393
		CUtlString::Length(); // 161
		CUtlString::Get(); // 161
		CUtlString::operator=(
				const CUtlString& src);  // 5670
		CUtlString::~CUtlString(); // 5670
		V_strlen(const char* str); // 393
		CUtlString::Length(); // 161
		CUtlString::Get(); // 161
		CUtlString::operator=(
				const CUtlString& src);  // 5671
		CUtlString::Get(); // 441
		CUtlString::operator char const*(); // 5674
		CBufferString::WriteBuffer(); // 1390
		CBufferString::WriteBuffer(); // 1101
		CBufferString::RemoveAll(); // 901
		CBufferString::Set(
			const char* pString,
			int nChars,
			bool bExact);  // 1114
		CBufferString::operator=(
				const char* pSrc);  // 5674
		CUtlString::~CUtlString(); // 5678
		CUtlString::~CUtlString(); // 5678
		CUtlString::CUtlString(
				const char* pString);  // 5667
		CUtlString::~CUtlString(); // 5667
		CUtlString::Get(); // 5668
	}
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 5646
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 5649
	CUtlString::CUtlString(
			const char* pString);  // 5651
	CUtlString::CUtlString(); // 5654
	CUtlString::CUtlString(); // 5655
	CUtlString::IsEmpty(); // 5681
	CUtlString::~CUtlString(); // 5705
	CUtlString::~CUtlString(); // 5705
	CUtlString::~CUtlString(); // 5705
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 1114
	CBufferString::operator=(
			const char* pSrc);  // 5689
	CUtlString::Get(); // 441
	CUtlString::operator char const*(); // 5692
	CUtlString::Get(); // 5692
	CBaseFileSystem::FullPathToRelativePath(
				const char* pFullPath,
				const char* pPathId,
				CBufferString* pRelative);  // 5692
} /* size: 1342, variables: 3, inline expansions: 22 (694 bytes) */

