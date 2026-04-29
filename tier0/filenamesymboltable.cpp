
//
// tier0/filenamesymboltable.cpp
//
//	referenced by: libtier0.so
//
//	functions: 8
//

// <0018C511> tier0/filenamesymboltable.cpp:14
// variables: 5
// function calls: 13
void CUtlFilenameSymbolTable::FindOrAddFileName(const char* pFileName)
{
	FileNameHandle_t hFileName; // 22
	char fn; // 29
	char basepath; // 37
	char filename; // 39
	FileNameHandleInternal_t handle; // 43
	V_strncpy<long unsigned int>(char* pDest,
					const char* pSrc,
					long unsigned int maxLenInChars);  // 30
	V_ExtractFilePath<long unsigned int>(const char* path,
						char* dest,
						long unsigned int destSize);  // 38
	V_strlen(const char* str); // 40
	V_strncpy<long unsigned int>(char* pDest,
					const char* pSrc,
					long unsigned int maxLenInChars);  // 40
	FileNameHandleInternal_t::FileNameHandleInternal_t(); // 43
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 582
	CInterlockedIntT<int, 4>::operator++(
			int);  // 3305
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 3226
	CThreadSpinRWLock::AssignIf(
		const union LockInfo_t& newValue,
		const union LockInfo_t& comparand);  // 3257
	CThreadSpinRWLock::TryLockForWrite(
			const char* pFileName,
			int nLineNumber,
			const ThreadId_t  threadId);  // 3307
	ThreadPause(void); // 3309
	CThreadSpinRWLock::LockForWrite(
			const char* pFileName,
			int nLineNumber);  // 44
} /* size: 528, variables: 5, inline expansions: 13 (322 bytes) */

// <0018C1F4> tier0/filenamesymboltable.cpp:62
// variables: 4
// function calls: 5
void CUtlFilenameSymbolTable::FindFileName(const char* pFileName)
{
	char fn; // 70
	char basepath; // 78
	char filename; // 80
	FileNameHandleInternal_t handle; // 83
	V_strncpy<long unsigned int>(char* pDest,
					const char* pSrc,
					long unsigned int maxLenInChars);  // 71
	V_ExtractFilePath<long unsigned int>(const char* path,
						char* dest,
						long unsigned int destSize);  // 79
	V_strlen(const char* str); // 81
	V_strncpy<long unsigned int>(char* pDest,
					const char* pSrc,
					long unsigned int maxLenInChars);  // 81
	FileNameHandleInternal_t::FileNameHandleInternal_t(); // 83
} /* size: 296, variables: 4, inline expansions: 5 (70 bytes) */

// <0018BFC4> tier0/filenamesymboltable.cpp:102
// variables: 3
// function calls: 2
void CUtlFilenameSymbolTable::String(const FileNameHandle_t& handle, char* pBuf, int nBufferLength)
{
	FileNameHandleInternal_t* pInternalHandle; // 106
	{
		const char* pPath; // 110
		const char* pFilename; // 111
		V_strncpy<int>(char* pDest,
				const char* pSrc,
				int maxLenInChars);  // 116
		V_strncat<int>(char* pDest,
				const char* pSrc,
				int maxLenInChars,
				int nMaxCharsToCopy);  // 117
	}
} /* size: 191, variables: 1 */

// <0018BDEA> tier0/filenamesymboltable.cpp:125
// variables: 3
// function calls: 3
void CUtlFilenameSymbolTable::String(const FileNameHandle_t& handle, CBufferString* pBuf)
{
	FileNameHandleInternal_t* pInternalHandle; // 129
	{
		const char* pPath; // 133
		const char* pFilename; // 134
	}
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 127
} /* size: 196, variables: 1, inline expansions: 3 (50 bytes) */

// <0018BD9C> tier0/filenamesymboltable.cpp:148
void CUtlFilenameSymbolTable::RemoveAll()
{
} /* size: 9 */

// <0018BCF5> tier0/filenamesymboltable.cpp:153
void CUtlFilenameSymbolTable::SpewStrings()
{
} /* size: 69 */

// <0018BC21> tier0/filenamesymboltable.cpp:160
// variable: 1
void CUtlFilenameSymbolTable::SaveToBuffer(CUtlBuffer& buffer)
{
	bool bResult; // 163
} /* size: 94, variables: 1 */

// <0018B958> tier0/filenamesymboltable.cpp:169
// variable: 1
// function calls: 8
void CUtlFilenameSymbolTable::RestoreFromBuffer(CUtlBuffer& buffer)
{
	bool bResult; // 172
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 582
	CInterlockedIntT<int, 4>::operator++(
			int);  // 3305
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 3226
	CThreadSpinRWLock::AssignIf(
		const union LockInfo_t& newValue,
		const union LockInfo_t& comparand);  // 3257
	CThreadSpinRWLock::TryLockForWrite(
			const char* pFileName,
			int nLineNumber,
			const ThreadId_t  threadId);  // 3307
	ThreadPause(void); // 3309
	CThreadSpinRWLock::LockForWrite(
			const char* pFileName,
			int nLineNumber);  // 171
} /* size: 168, variables: 1, inline expansions: 8 (214 bytes) */

