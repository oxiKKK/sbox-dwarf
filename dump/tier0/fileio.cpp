
//
// tier0/fileio.cpp
//
//	referenced by: libtier0.so
//
//	functions: 76
//

// <0017B27F> tier0/fileio.cpp:135
// function call: 1
void CPathString::~CPathString()
{
	DeleteUTF8PathStringBuffer(char* pBuffer); // 138
} /* size: 34, inline expansions: 1 (8 bytes) */

// <0017B262> tier0/fileio.cpp:135
void CPathString::~CPathString()
{
} /* size: 0 */

// <0017B161> tier0/fileio.cpp:146
// function call: 1
void CPathString::Set(const char* pchUTF8Path)
{
	V_MakeAbsolutePath<int>(char* pOut,
				int outLen,
				const char* pPath,
				const char* pStartingDir,
				bool bLowercaseName);  // 153
} /* size: 55, inline expansions: 1 (21 bytes) */

// <0017AF56> tier0/fileio.cpp:159
// variable: 1
// function calls: 4
void CPathString::Set(const char* pchUTF8Dir, const char* pchUTF8File)
{
	char* pchComposedPath; // 165
	NewUTF8PathStringBuffer(void); // 165
	V_ComposeFileName<int>(const char* path,
				const char* filename,
				char* dest,
				int destSize);  // 166
	V_MakeAbsolutePath<int>(char* pOut,
				int outLen,
				const char* pPath,
				const char* pStartingDir,
				bool bLowercaseName);  // 169
	DeleteUTF8PathStringBuffer(char* pBuffer); // 174
} /* size: 103, variables: 1, inline expansions: 4 (57 bytes) */

// <0017ACBE> tier0/fileio.cpp:181
// variables: 5
// function calls: 6
void CPathString::PopulateWCharPath()
{
	const char   __FUNCTION__; // 37451
	{
		int cchResult; // 191
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 193
		}
		NewWCharPathStringBuffer(void); // 189
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 190
	}
	{
		int cchResult; // 202
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 204
		}
		NewWCharPathStringBuffer(void); // 200
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 201
	}
} /* size: 0, variables: 1 */

// <0017AC55> tier0/fileio.cpp:211
// function call: 1
void CPathString::DeleteWCharPath()
{
	DeleteWCharPathStringBuffer(wchar_t* pBuffer); // 213
} /* size: 39, inline expansions: 1 (9 bytes) */

// <0017ABB3> tier0/fileio.cpp:217
// function call: 1
void CPathString::Reset()
{
	NewUTF8PathStringBuffer(void); // 221
} /* size: 57, inline expansions: 1 (5 bytes) */

// <0017AA04> tier0/fileio.cpp:228
// function calls: 6
void NewPathStringBuffer(void)
{
	ThreadPause(void); // 208
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 203
	CTSListBase::Pop(); // 528
	CTSOverlayPool<CPathString::Buffer_t>::GetObject(); // 542
	CTSOverlayPool<CPathString::Buffer_t>::Get(); // 230
} /* size: 161, inline expansions: 6 (406 bytes) */

// <00182F5E> tier0/fileio.cpp:233
// function calls: 6
void DeletePathStringBuffer(Buffer_t* pBuffer)
{
	ThreadPause(void); // 173
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 168
	CTSListBase::Push(
		TSLNodeBase_t* pNode);  // 523
	CTSOverlayPool<CPathString::Buffer_t>::PutObject(
			Buffer_t* pNode);  // 237
	DeletePathStringBuffer(Buffer_t* pBuffer); // 233
} /* size: 113, inline expansions: 6 (245 bytes) */

// <0017A9E9> tier0/fileio.cpp:233
void DeletePathStringBuffer(Buffer_t* pBuffer)
{
} /* size: 0 */

// <0017A9BC> tier0/fileio.cpp:254
// variable: 1
FioFileTime_t UnixSecondsToFioTime(time_t t)
{
	uint64 ll; // 261
} /* size: 0, variables: 1 */

// <0017A968> tier0/fileio.cpp:266
// variable: 1
FioFileTime_t UnixTimeSpecToFioTime(timespec* pSpec)
{
	uint64 ll; // 273
} /* size: 0, variables: 1 */

// <0017A928> tier0/fileio.cpp:293
int64 FioFileTimeToTimeT(FioFileTime_t nFioTime)
{
} /* size: 52 */

// <0017A140> tier0/fileio.cpp:742
// variables: 7
int FioWrite(OSFILEHANDLE Handle, const void* pBuffer, size_t nBytes, size_t* pBytesWritten)
{
	size_t junk; // 744
	size_t cubTotalWritten; // 748
	const char   __FUNCTION__; // 36902
	{
		int32 nBytesToWrite; // 751
		int32 nActualWritten; // 752
		int ret; // 753
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 759
		}
	}
} /* size: 0, variables: 3 */

// <00179FCE> tier0/fileio.cpp:777
// variables: 3
// function call: 1
int FioReadAt(OSFILEHANDLE Handle, uint64 nFilePos, void* pBuffer, int32 nBytes, int32* pBytesRead)
{
	int32 nRead; // 779
	{
		int32 nBytesToRead; // 806
		ssize_t ret; // 807
		pread(int __fd,
			void* __buf,
			size_t __nbytes,
			__off64_t __offset);  // 808
	}
} /* size: 278, variables: 1 */

// <00179E68> tier0/fileio.cpp:854
// variables: 5
int FioWriteAt(OSFILEHANDLE Handle, uint64 nFilePos, const void* pBuffer, int32 nBytes, int32* pBytesWritten)
{
	int32 nWritten; // 856
	const char   __FUNCTION__; // 27239
	{
		int32 nBytesToWrite; // 880
		ssize_t ret; // 881
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 885
		}
	}
} /* size: 0, variables: 2 */

// <00179D98> tier0/fileio.cpp:909
// variables: 2
int FioSeek(OSFILEHANDLE Handle, int64 nOffset, EFioSeekMode eHow, uint64* pNewPosition)
{
	int nOsHow; // 948
	off_t nNewPosition; // 965
} /* size: 73, variables: 2 */

// <00179CBC> tier0/fileio.cpp:1019
// variable: 1
int FioTruncateToSeekPosition(OSFILEHANDLE Handle)
{
	off_t nSize; // 1030
} /* size: 69, variables: 1 */

// <00179C39> tier0/fileio.cpp:1050
int FioSetSize(OSFILEHANDLE Handle, uint64 nBytes)
{
} /* size: 33 */

// <00179BD2> tier0/fileio.cpp:1094
int FioFlush(OSFILEHANDLE Handle)
{
} /* size: 33 */

// <00179B98> tier0/fileio.cpp:1123
int FioCancelIo(OSFILEHANDLE Handle)
{
} /* size: 7 */

// <00179AE2> tier0/fileio.cpp:1145
// variable: 1
int FioGetFileIdentity(OSFILEHANDLE Handle, uint64* pDiskId, uint64* pFileId)
{
	stat StatBuf; // 1163
} /* size: 118, variables: 1 */

// <00179A38> tier0/fileio.cpp:1182
int FioDuplicate(OSFILEHANDLE Handle, bool bInherit, OSFILEHANDLE* pDuplicate)
{
} /* size: 84 */

// <00179985> tier0/fileio.cpp:1240
// variable: 1
int FioCreatePipe(OSFILEHANDLE* pRead, OSFILEHANDLE* pWrite, int32 nBufferBytesHint)
{
	int pPipeFd; // 1260
} /* size: 102, variables: 1 */

// <001796AE> tier0/fileio.cpp:1280
// variables: 4
// function calls: 5
int FioGetFileChecksumBuffer(const char* pFilename, uint32* pCRC, uint8* pBuf, int32 nBufferBytes)
{
	int nErr; // 1282
	OSFILEHANDLE hFile; // 1283
	XXH_NAMESPACEXXH3_state_t state; // 1296
	{
		int32 nDone; // 1301
		XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
						const void* input,
						size_t len);  // 1313
	}
	memset(void* __dest,
		int __ch,
		size_t __len);  // 6602
	XXH3_reset_internal(XXH_NAMESPACEXXH3_state_t* statePtr,
				XXH64_hash_t seed,
				const void* secret,
				size_t secretSize);  // 6624
	XXH_INLINE_XXH3_64bits_reset(XXH_NAMESPACEXXH3_state_t* statePtr); // 6621
	XXH_INLINE_XXH3_64bits_reset(XXH_NAMESPACEXXH3_state_t* statePtr); // 1297
} /* size: 352, variables: 3, inline expansions: 4 (439 bytes) */

// <001793BF> tier0/fileio.cpp:1323
// variables: 5
// function calls: 5
int FioGetFileChecksum(const char* pFilename, uint32* pCRC, int32 nBufferBytes)
{
	int nErr; // 1325
	OSFILEHANDLE hFile; // 1326
	uint8* pBuf; // 1339
	XXH_NAMESPACEXXH3_state_t state; // 1341
	{
		int32 nDone; // 1346
		XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
						const void* input,
						size_t len);  // 1358
	}
	memset(void* __dest,
		int __ch,
		size_t __len);  // 6602
	XXH3_reset_internal(XXH_NAMESPACEXXH3_state_t* statePtr,
				XXH64_hash_t seed,
				const void* secret,
				size_t secretSize);  // 6624
	XXH_INLINE_XXH3_64bits_reset(XXH_NAMESPACEXXH3_state_t* statePtr); // 6621
	XXH_INLINE_XXH3_64bits_reset(XXH_NAMESPACEXXH3_state_t* statePtr); // 1342
} /* size: 368, variables: 4, inline expansions: 4 (433 bytes) */

// <001791DF> tier0/fileio.cpp:1368
// variable: 1
// function calls: 4
int FioGetBaseFileInfo(const char* pFileName, FioBaseFileInfo_t* pInfo, uint nMetaFlags)
{
	stat statBuf; // 1445
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 1372
	UnixSecondsToFioTime(time_t t); // 1482
	UnixSecondsToFioTime(time_t t); // 1483
} /* size: 350, variables: 1, inline expansions: 4 (116 bytes) */

// <00178B1E> tier0/fileio.cpp:1512
// variables: 3
// function calls: 24
int FioReadLink(const char* pLinkName, CBufferString* pTargetBuf, bool bFullPath)
{
	stat statBuf; // 1594
	int nTargetChars; // 1616
	CPathBufferString absLinkPath; // 1648
	CBufferString::LengthAllocated(); // 1616
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 808
	CBufferString::GetForModify(); // 1616
	readlink(const char* __path,
		char* __buf,
		size_t __len);  // 1616
	CBufferString::LengthAllocated(); // 1621
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 1637
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 1648
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 1656
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 1657
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 1657
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1660
} /* size: 612, variables: 3, inline expansions: 24 (630 bytes) */

// <00178AD5> tier0/fileio.cpp:1662
int FioGetSectorSize(const char* pDiskPath, int* pSectorSize)
{
} /* size: 16 */

// <00178AB0> tier0/fileio.cpp:1738
bool FioIsDotDir(const char* pDir)
{
} /* size: 0 */

// <0017875C> tier0/fileio.cpp:1749
// variables: 6
// function calls: 4
int FioReadFileTo(const char* pFileName, void** pContent, int32* pContentBytes, CUtlBuffer* pBuffer, bool bZeroTerminate, int32 nMaxBytes)
{
	OSFILEHANDLE hFile; // 1766
	int nErr; // 1767
	uint64 nFileSize64; // 1778
	int32 nFileSize; // 1804
	uint8* pData; // 1806
	{
		int32 nDataSize; // 1815
	}
	CUtlBuffer::Clear(); // 1758
	CUtlMemory<unsigned char, int>::Base(); // 1484
	CUtlBuffer::Base(); // 1811
	CUtlBuffer::Clear(); // 1828
} /* size: 549, variables: 5, inline expansions: 4 (76 bytes) */

// <00178688> tier0/fileio.cpp:1850
int FioReadFileToMemory(const char* pFileName, void** pContent, int32* pContentBytes, bool bZeroTerminate, int32 nMaxBytes)
{
} /* size: 18 */

// <001785EB> tier0/fileio.cpp:1864
int FioReadFileToBuffer(const char* pFileName, CUtlBuffer* pBuffer, int32 nMaxBytes)
{
} /* size: 25 */

// <00177DEA> tier0/fileio.cpp:1879
// variables: 7
// function calls: 21
const char* FioFindFileInDirCaseInsensitive(const char* pFile, CBufferString* pFileNameOut)
{
	const char* dirSep; // 1881
	char* pFileNameOutBuffer; // 1895
	const char* pGameContentTail; // 1901
	const char* pScan; // 1902
	DIR* pDirStream; // 1943
	{
		stat testStat; // 1925
		V_strcmp(const char* s1,
			const char* s2);  // 1928
		CBufferString::WriteBuffer(); // 1390
		CBufferString::WriteBuffer(); // 1101
		CBufferString::RemoveAll(); // 901
		CBufferString::Set(
			const char* pString,
			int nChars,
			bool bExact);  // 1938
	}
	{
		dirent* pDirEnt; // 1972
		strcpy(char* __dest,
			const char* __src);  // 124
		V_strcpy(char* dest,
			const char* src);  // 1984
	}
	strrchr(const char* __s,
		int __c);  // 204
	V_strrchr(const char* s,
			char c);  // 1881
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 1894
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 808
	CBufferString::GetForModify(); // 1895
	V_strncmp<int>(const char* s1,
			const char* s2,
			int count);  // 1905
	V_strcmp(const char* s1,
		const char* s2);  // 1956
	V_strncmp<int>(const char* s1,
			const char* s2,
			int count);  // 1911
	strrchr(const char* __s,
		int __c);  // 204
	V_strrchr(const char* s,
			char c);  // 1884
} /* size: 816, variables: 5, inline expansions: 14 (363 bytes) */

// <00177BF1> tier0/fileio.cpp:2000
// variables: 2
// function calls: 7
int FileSelect(const dirent* ent)
{
	const char* mask; // 2005
	const char* name; // 2006
	V_strcmp(const char* s1,
		const char* s2);  // 2015
	V_strcmp(const char* s1,
		const char* s2);  // 2015
	toupper(int __c); // 2037
	toupper(int __c); // 2037
	toupper(int __c); // 2026
	toupper(int __c); // 2026
	FileSelect(const char* name,
			const char* mask);  // 2008
} /* size: 273, variables: 2, inline expansions: 7 (289 bytes) */

// <00177BC4> tier0/fileio.cpp:2011
int FileSelect(const char* name, const char* mask)
{
} /* size: 0 */

// <00177B46> tier0/fileio.cpp:2069
// function call: 1
void CDirIterator::CDirIterator()
{
	CUtlString::CUtlString(); // 2069
} /* size: 17, inline expansions: 1 (8 bytes) */

// <00177B29> tier0/fileio.cpp:2069
void CDirIterator::CDirIterator()
{
} /* size: 0 */

// <00177A5C> tier0/fileio.cpp:2074
// function call: 1
void CDirIterator::CDirIterator(const char* pPath, const char* pPattern, uint nMetaFlags)
{
	CUtlString::CUtlString(); // 2074
} /* size: 67, inline expansions: 1 (8 bytes) */

// <00177A18> tier0/fileio.cpp:2074
void CDirIterator::CDirIterator(const char* pPath, const char* pPattern, uint nMetaFlags)
{
} /* size: 0 */

// <0017795A> tier0/fileio.cpp:2080
// function call: 1
void CDirIterator::CDirIterator(const char* pPathAndPattern, uint nMetaFlags)
{
	CUtlString::CUtlString(); // 2080
} /* size: 65, inline expansions: 1 (8 bytes) */

// <00177923> tier0/fileio.cpp:2080
void CDirIterator::CDirIterator(const char* pPathAndPattern, uint nMetaFlags)
{
} /* size: 0 */

// <00177858> tier0/fileio.cpp:2086
// function calls: 2
void CDirIterator::~CDirIterator()
{
	DeleteUTF8PathStringBuffer(char* pBuffer); // 2093
	CUtlString::~CUtlString(); // 2094
} /* size: 62, inline expansions: 2 (26 bytes) */

// <0017783B> tier0/fileio.cpp:2086
void CDirIterator::~CDirIterator()
{
} /* size: 0 */

// <001773A2> tier0/fileio.cpp:2096
// variables: 2
// function calls: 12
void CDirIterator::Init(const char* pPath, const char* pPattern, const char* pPathAndPattern, uint nMetaFlags)
{
	CUtlString pathStr; // 2102
	CUtlString patternStr; // 2103
	CUtlString::CUtlString(); // 2102
	CUtlString::CUtlString(); // 2103
	CUtlString::Get(); // 441
	CUtlString::operator char const*(); // 2111
	CUtlString::Get(); // 441
	CUtlString::operator char const*(); // 2112
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 2162
	V_strcpy_safe<4096>(char& pDest,
				const char* pSrc);  // 2164
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 2167
	CUtlString::~CUtlString(); // 2203
	CUtlString::~CUtlString(); // 2203
	CUtlString::operator=(
			const char* src);  // 2117
} /* size: 482, variables: 2, inline expansions: 12 (252 bytes) */

// <0017731E> tier0/fileio.cpp:2205
// variable: 1
void CDirIterator::Stop()
{
	{
		int i; // 2217
	}
} /* size: 105 */

// <001772D0> tier0/fileio.cpp:2232
void CDirIterator::NextFile()
{
} /* size: 104 */

// <00177121> tier0/fileio.cpp:2282
// function calls: 6
void CDirIterator::CurrentFileFullPath()
{
	CUtlString::IsEmpty(); // 2293
	CDirIterator::CurrentFileName(); // 2295
	CDirIterator::CurrentFileName(); // 2299
	V_strncpy<int>(char* pDest,
			const char* pSrc,
			int maxLenInChars);  // 2299
	V_ComposeFileName<int>(const char* path,
				const char* filename,
				char* dest,
				int destSize);  // 2295
	NewUTF8PathStringBuffer(void); // 2289
} /* size: 130, inline expansions: 6 (59 bytes) */

// <00177031> tier0/fileio.cpp:2356
// function calls: 2
void CDirIterator::SetCurInfo()
{
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 2358
} /* size: 136, inline expansions: 2 (64 bytes) */

// <00176FFD> tier0/fileio.cpp:2374
void CDirIterator::Construct()
{
} /* size: 40 */

// <00176EDD> tier0/fileio.cpp:2391
// variable: 1
void CDirIterator::SplitPathAndPattern(const char* pPathAndPattern, CUtlString* pPathStr, CUtlString* pPatternStr)
{
	const char* pTail; // 2394
} /* size: 138, variables: 1 */

// <00176D04> tier0/fileio.cpp:2430
// function calls: 8
void CDirWatcher::CDirWatcher()
{
	CUtlString::CUtlString(); // 2430
	CUtlMemory<UtlLinkedListElem_t<CUtlString, unsigned int>, unsigned int>::ValidateGrowSize(); // 475
	CUtlMemory<UtlLinkedListElem_t<CUtlString, unsigned int>, unsigned int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 448
	Iterator_t::Iterator_t(
			unsigned int i);  // 86
	CUtlMemory<UtlLinkedListElem_t<CUtlString, unsigned int>, unsigned int>::InvalidIterator(); // 448
	ConstructList(const CUtlLinkedList<CUtlString, unsigned int, false, unsigned int, CUtlMemory<UtlLinkedListElem_t<CUtlString, unsigned i this); // 454
	ResetDbgInfo(const CUtlLinkedList<CUtlString, unsigned int, false, unsigned int, CUtlMemory<UtlLinkedListElem_t<CUtlString, unsigned i this); // 455
	CUtlLinkedList(const CUtlLinkedList<CUtlString, unsigned int, false, unsigned int, CUtlMemory<UtlLinkedListElem_t<CUtlString, unsigned i this,
			int growSize,
			int initSize);  // 2430
} /* size: 70, inline expansions: 8 (23 bytes) */

// <00176CE7> tier0/fileio.cpp:2430
void CDirWatcher::CDirWatcher()
{
} /* size: 0 */

// <00183469> tier0/fileio.cpp:2601
// variables: 2
void CDirWatcher::SetDirToWatch(const char* pchDir, uint nMetaFlags, bool bWatchSubDirsIfPossible)
{
	CPathString strPath; // 2608
	char szFullPath; // 2718
} /* size: 32, variables: 2 */

// <001830B1> tier0/fileio.cpp:2601
// variables: 2
// function calls: 3
void CDirWatcher::SetDirToWatch(const char* pchDir, bool bWatchSubDirsIfPossible, uint nMetaFlags)
{
	CPathString strPath; // 2608
	char szFullPath; // 2718
	CPathString::CPathString(
			const char* pchUTF8Path);  // 2608
	V_MakeAbsolutePath<long unsigned int>(char* pOut,
						long unsigned int outLen,
						const char* pPath,
						const char* pStartingDir,
						bool bLowercaseName);  // 2719
	CUtlString::operator=(
			const char* src);  // 2720
} /* size: 179, variables: 2, inline expansions: 3 (63 bytes) */

// <00176590> tier0/fileio.cpp:2757
// variable: 1
// function calls: 26
void CDirWatcher::AddFileToChangeList(const char* pchFile)
{
	{
		unsigned int i; // 2760
		Head(const CUtlLinkedList<CUtlString, unsigned int, false, unsigned int, CUtlMemory<UtlLinkedListElem_t<CUtlString, unsi this); // 2760
		CUtlMemory<UtlLinkedListElem_t<CUtlString, unsigned int>, unsigned int>::operator[](
				unsigned int i);  // 494
		operator[](const CUtlLinkedList<CUtlString, unsigned int, false, unsigned int, CUtlMemory<UtlLinkedListElem_t<CUtlString, unsigned i this,
				unsigned int i);  // 2762
		CUtlString::Get(); // 2762
		CUtlMemory<UtlLinkedListElem_t<CUtlString, unsigned int>, unsigned int>::operator[](
				unsigned int i);  // 368
		InternalElement(const CUtlLinkedList<CUtlString, unsigned int, false, unsigned int, CUtlMemory<UtlLinkedListElem_t<CUtlString, unsi this,
				unsigned int i);  // 550
		Next(const CUtlLinkedList<CUtlString, unsigned int, false, unsigned int, CUtlMemory<UtlLinkedListElem_t<CUtlString, unsi this,
			unsigned int i);  // 2760
	}
	CUtlString::CUtlString(
			const char* pString);  // 2766
	CUtlMemory<UtlLinkedListElem_t<CUtlString, unsigned int>, unsigned int>::IsIdxValid(
			unsigned int i);  // 588
	CUtlMemory<UtlLinkedListElem_t<CUtlString, unsigned int>, unsigned int>::operator[](
			unsigned int i);  // 594
	IsValidIndex(const CUtlLinkedList<CUtlString, unsigned int, false, unsigned int, CUtlMemory<UtlLinkedListElem_t<CUtlString, unsi this,
			unsigned int i);  // 583
	CUtlMemory<UtlLinkedListElem_t<CUtlString, unsigned int>, unsigned int>::IsIdxAfter(
			unsigned int i,
			const Iterator_t& it);  // 591
	IsValidIndex(const CUtlLinkedList<CUtlString, unsigned int, false, unsigned int, CUtlMemory<UtlLinkedListElem_t<CUtlString, unsi this,
			unsigned int i);  // 977
	CUtlMemory<UtlLinkedListElem_t<CUtlString, unsigned int>, unsigned int>::operator[](
			unsigned int i);  // 367
	InternalElement(const CUtlLinkedList<CUtlString, unsigned int, false, unsigned int, CUtlMemory<UtlLinkedListElem_t<CUtlString, unsigned i this,
			unsigned int i);  // 982
	CUtlMemory<UtlLinkedListElem_t<CUtlString, unsigned int>, unsigned int>::operator[](
			unsigned int i);  // 367
	InternalElement(const CUtlLinkedList<CUtlString, unsigned int, false, unsigned int, CUtlMemory<UtlLinkedListElem_t<CUtlString, unsigned i this,
			unsigned int i);  // 1011
	{
	}
	LinkBefore(const CUtlLinkedList<CUtlString, unsigned int, false, unsigned int, CUtlMemory<UtlLinkedListElem_t<CUtlString, unsigned i this,
			unsigned int before,
			unsigned int elem);  // 822
	CUtlMemory<UtlLinkedListElem_t<CUtlString, unsigned int>, unsigned int>::operator[](
			unsigned int i);  // 482
	Element(const CUtlLinkedList<CUtlString, unsigned int, false, unsigned int, CUtlMemory<UtlLinkedListElem_t<CUtlString, unsigned i this,
		unsigned int i);  // 825
	CUtlString::Get(); // 354
	CUtlString::CUtlString(
			const CUtlString& string);  // 1520
	CopyConstruct<CUtlString>(CUtlString* pMemory,
					const CUtlString& src);  // 825
	InsertBefore(const CUtlLinkedList<CUtlString, unsigned int, false, unsigned int, CUtlMemory<UtlLinkedListElem_t<CUtlString, unsigned i this,
			unsigned int before,
			const CUtlString& src);  // 856
	AddToTail(const CUtlLinkedList<CUtlString, unsigned int, false, unsigned int, CUtlMemory<UtlLinkedListElem_t<CUtlString, unsigned i this,
			const CUtlString& src);  // 2766
	CUtlString::~CUtlString(); // 2766
} /* size: 0, inline expansions: 19 (905 bytes) */

// <00183B24> tier0/fileio.cpp:2773
// function call: 1
void CDirWatcher::GetChangedFile(CUtlString* psFile, bool bFullPath)
{
	Count(const CUtlLinkedList<CUtlString, unsigned int, false, unsigned int, CUtlMemory<UtlLinkedListElem_t<CUtlString, unsi this); // 2781
} /* size: 27, inline expansions: 1 (0 bytes) */

// <001834EC> tier0/fileio.cpp:2773
// variable: 1
// function calls: 25
void CDirWatcher::GetChangedFile(CUtlString* psFile, bool bFullPath)
{
	{
		char fullPath; // 2786
		CUtlMemory<UtlLinkedListElem_t<CUtlString, unsigned int>, unsigned int>::operator[](
				unsigned int i);  // 494
		operator[](const CUtlLinkedList<CUtlString, unsigned int, false, unsigned int, CUtlMemory<UtlLinkedListElem_t<CUtlString, unsigned i this,
				unsigned int i);  // 2787
		CUtlString::Get(); // 441
		CUtlString::operator char const*(); // 2787
		Head(const CUtlLinkedList<CUtlString, unsigned int, false, unsigned int, CUtlMemory<UtlLinkedListElem_t<CUtlString, unsi this); // 2787
		CUtlString::Get(); // 441
		CUtlString::operator char const*(); // 2787
		V_ComposeFileName<long unsigned int>(const char* path,
							const char* filename,
							char* dest,
							long unsigned int destSize);  // 2787
		CUtlString::operator=(
				const char* src);  // 2788
	}
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 2792
	Head(const CUtlLinkedList<CUtlString, unsigned int, false, unsigned int, CUtlMemory<UtlLinkedListElem_t<CUtlString, unsi this); // 2795
	CUtlMemory<UtlLinkedListElem_t<CUtlString, unsigned int>, unsigned int>::operator[](
			unsigned int i);  // 594
	IsValidIndex(const CUtlLinkedList<CUtlString, unsigned int, false, unsigned int, CUtlMemory<UtlLinkedListElem_t<CUtlString, unsi this,
			unsigned int i);  // 583
	CUtlMemory<UtlLinkedListElem_t<CUtlString, unsigned int>, unsigned int>::IsIdxValid(
			unsigned int i);  // 588
	CUtlMemory<UtlLinkedListElem_t<CUtlString, unsigned int>, unsigned int>::IsIdxAfter(
			unsigned int i,
			const Iterator_t& it);  // 591
	IsValidIndex(const CUtlLinkedList<CUtlString, unsigned int, false, unsigned int, CUtlMemory<UtlLinkedListElem_t<CUtlString, unsi this,
			unsigned int i);  // 749
	CUtlMemory<UtlLinkedListElem_t<CUtlString, unsigned int>, unsigned int>::operator[](
			unsigned int i);  // 367
	InternalElement(const CUtlLinkedList<CUtlString, unsigned int, false, unsigned int, CUtlMemory<UtlLinkedListElem_t<CUtlString, unsigned i this,
			unsigned int i);  // 752
	CUtlString::~CUtlString(); // 1526
	Destruct<CUtlString>(CUtlString* pMemory); // 753
	{
	}
	Free(const CUtlLinkedList<CUtlString, unsigned int, false, unsigned int, CUtlMemory<UtlLinkedListElem_t<CUtlString, unsigned i this,
		unsigned int elem);  // 907
	Remove(const CUtlLinkedList<CUtlString, unsigned int, false, unsigned int, CUtlMemory<UtlLinkedListElem_t<CUtlString, unsigned i this,
		unsigned int elem);  // 2795
} /* size: 0, inline expansions: 16 (611 bytes) */

// <0017654A> tier0/fileio.cpp:2773
// variable: 1
void CDirWatcher::GetChangedFile(CUtlString* psFile, bool bFullPath)
{
	{
		char fullPath; // 2786
	}
} /* size: 0 */

// <001764F7> tier0/fileio.cpp:2800
void CDirWatcher::Stop()
{
} /* size: 77 */

// <00176440> tier0/fileio.cpp:2874
// function calls: 3
void CDirTreeWatchManager::CDirTreeWatchManager(uint nMetaFlags, bool bFullPaths)
{
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 2875
} /* size: 40, inline expansions: 3 (24 bytes) */

// <00176409> tier0/fileio.cpp:2874
void CDirTreeWatchManager::CDirTreeWatchManager(uint nMetaFlags, bool bFullPaths)
{
} /* size: 0 */

// <0017635B> tier0/fileio.cpp:2883
// function calls: 2
void CDirTreeWatchManager::~CDirTreeWatchManager()
{
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 2886
} /* size: 35, inline expansions: 2 (14 bytes) */

// <0017633E> tier0/fileio.cpp:2883
void CDirTreeWatchManager::~CDirTreeWatchManager()
{
} /* size: 0 */

// <0017623F> tier0/fileio.cpp:2889
// variable: 1
void CDirTreeWatchManager::TraverseAndAddWatch(const char* pDir, Visitor* pVisitor)
{
	Watcher_t* pWatch; // 2891
} /* size: 111, variables: 1 */

// <00175F56> tier0/fileio.cpp:2910
// variables: 4
// function calls: 7
void CDirTreeWatchManager::GetChangedFile(CUtlString* psFile, FioBaseFileInfo_t* pFileInfo)
{
	const char   __FUNCTION__; // 41134
	{
		Watcher_t* pWatcher; // 2913
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2938
		}
		{
			char remapFile; // 2943
			CUtlString::Get(); // 441
			CUtlString::operator char const*(); // 2945
			V_StrSubst<long unsigned int>(const char* pIn,
							const char* pMatch,
							const char* pReplaceWith,
							char* pOut,
							long unsigned int outLen,
							bool bCaseSensitive);  // 2945
			CUtlString::Get(); // 441
			CUtlString::operator char const*(); // 2945
		}
		CUtlString::Get(); // 2920
		CUtlString::IsEmpty(); // 2941
	}
} /* size: 0, variables: 1 */

// <00175CCE> tier0/fileio.cpp:2963
// variables: 2
// function calls: 8
void CDirTreeWatchManager::TraverseMissedChanges(Visitor* pVisitor)
{
	{
		Watcher_t* pWatcher; // 2965
		{
			char saveDirName; // 2969
			CUtlString::Get(); // 441
			CUtlString::operator char const*(); // 503
			CDirWatcher::GetDirName(); // 2971
			CUtlString::Get(); // 441
			CUtlString::operator char const*(); // 503
			CDirWatcher::GetDirName(); // 2974
			V_strcpy_safe<4096>(char& pDest,
						const char* pSrc);  // 2974
		}
		CDirWatcher::HasMissedChanges(); // 2967
	}
} /* size: 251 */

// <00175C81> tier0/fileio.cpp:2990
void CDirTreeWatchManager::Stop()
{
} /* size: 65 */

// <00175C63> tier0/fileio.cpp:2999
void CheckForPendingChanges(void)
{
} /* size: 5 */

// <00175B61> tier0/fileio.cpp:3009
// variable: 1
// function calls: 3
void CDirTreeWatchManager::IsContainedInExistingWatch(const char* pDir)
{
	{
		Watcher_t* pWatcher; // 3013
		CUtlString::Get(); // 441
		CUtlString::operator char const*(); // 503
		CDirWatcher::GetDirName(); // 3015
	}
} /* size: 120 */

// <00175A5F> tier0/fileio.cpp:3026
// variable: 1
// function calls: 3
void CDirTreeWatchManager::ContainsExistingWatch(const char* pDir)
{
	{
		Watcher_t* pWatcher; // 3030
		CUtlString::Get(); // 441
		CUtlString::operator char const*(); // 503
		CDirWatcher::GetDirName(); // 3032
	}
} /* size: 112 */

// <0017592A> tier0/fileio.cpp:3042
// variables: 2
// function calls: 3
void CDirTreeWatchManager::RemoveContainedWatches(const char* pDir)
{
	Watcher_t* pNext; // 3046
	{
		Watcher_t* pWatcher; // 3047
		CUtlString::Get(); // 441
		CUtlString::operator char const*(); // 503
		CDirWatcher::GetDirName(); // 3051
	}
} /* size: 116, variables: 1 */

// <001753DC> tier0/fileio.cpp:3062
// variable: 1
// function calls: 17
void CDirTreeWatchManager::AddWatch(const char* pDir, const char* pLinkRemapFrom, const char* pLinkRemapTo)
{
	Watcher_t* pWatcher; // 3066
	CUtlString::CUtlString(); // 657
	CUtlString::CUtlString(); // 657
	Watcher_t::Watcher_t(); // 3066
	CUtlString::operator=(
			const char* src);  // 3075
	CUtlString::operator=(
			const char* src);  // 3076
	AddToHead<CDirTreeWatchManager::Watcher_t, CDirTreeWatchManager::Watcher_t>(Watcher_t *& head,
											Watcher_t* node);  // 3077
	CUtlString::~CUtlString(); // 657
	CUtlString::~CUtlString(); // 657
	ValidateAlignment<UtlLinkedListElem_t<CUtlString, unsigned int> >(void); // 508
	CUtlMemory<UtlLinkedListElem_t<CUtlString, unsigned int>, unsigned int>::IsExternallyAllocated(); // 905
	CUtlMemory<UtlLinkedListElem_t<CUtlString, unsigned int>, unsigned int>::Purge(); // 903
	CUtlMemory<UtlLinkedListElem_t<CUtlString, unsigned int>, unsigned int>::Purge(); // 510
	CUtlMemory<UtlLinkedListElem_t<CUtlString, unsigned int>, unsigned int>::~CUtlMemory(); // 462
	~CUtlLinkedList(const CUtlLinkedList<CUtlString, unsigned int, false, unsigned int, CUtlMemory<UtlLinkedListElem_t<CUtlString, unsigned i this); // 487
	CUtlString::~CUtlString(); // 487
	CDirWatcher::~CDirWatcher(); // 657
	Watcher_t::~Watcher_t(); // 3069
} /* size: 256, variables: 1, inline expansions: 17 (336 bytes) */

// <001751B7> tier0/fileio.cpp:3083
// variables: 3
// function calls: 2
void CDirTreeWatchManager::AddLinkTransition(const char* pLinkSource, const char* pLinkTarget, bool bIsDir)
{
	char linkScope; // 3087
	const char   __FUNCTION__; // 37451
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3115
	}
	V_strcpy_safe<4096>(char& pDest,
				const char* pSrc);  // 3091
	V_ExtractFilePath<long unsigned int>(const char* path,
						char* dest,
						long unsigned int destSize);  // 3095
} /* size: 0, variables: 2, inline expansions: 2 (39 bytes) */

// <00174C0C> tier0/fileio.cpp:3132
// variables: 8
// function calls: 13
void CDirTreeWatchManager::Traverse(const char* pDir, Visitor* pVisitor)
{
	CDirIterator dirIter; // 3137
	const char   __FUNCTION__; // 36902
	{
		const char* pCurName; // 3146
		const FioBaseFileInfo_t* pCurInfo; // 3147
		{
			const char* pCurFullPath; // 3151
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3159
			}
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 781
			CBufferString::operator char const*(); // 3155
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 781
			CBufferString::operator char const*(); // 3169
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 781
			CBufferString::operator char const*(); // 3173
		}
		{
			const char* pVisitName; // 3189
		}
		{
			const char* pVisitName; // 3203
		}
		CDirIterator::CurrentIsSymbolicLink(); // 3149
		CDirIterator::CurrentFileName(); // 3146
		CDirIterator::CurrentFileInfo(); // 3147
	}
	CDirIterator::IsValid(); // 3138
} /* size: 0, variables: 2, inline expansions: 1 (0 bytes) */

// <001748A5> tier0/fileio.cpp:3210
// variables: 5
// function calls: 3
void RawTraverse(const char* pDir, Visitor* pVisitor, uint nMetaFlags, bool bFullPaths)
{
	CDirIterator dirIter; // 3216
	{
		const char* pCurName; // 3225
		const FioBaseFileInfo_t* pCurInfo; // 3226
		{
			const char* pVisitName; // 3234
		}
		{
			const char* pVisitName; // 3248
		}
		CDirIterator::CurrentFileName(); // 3225
		CDirIterator::CurrentFileInfo(); // 3226
	}
	CDirIterator::IsValid(); // 3217
} /* size: 527, variables: 1, inline expansions: 1 (0 bytes) */

