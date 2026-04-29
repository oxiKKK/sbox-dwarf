
//
// tier2/fileutils.cpp
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libfilesystem_stdio.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//				   libvfx_vulkan.so
//
//	functions: 59
//

// <06811E59> tier2/fileutils.cpp:17
// variables: 3
// function calls: 16
const char* GetTemporaryFolder(void)
{
	CBufferString TempPath; // 19
	CThreadMutex mutex; // 20
	{
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_24; // 24
		CThreadMutex::Lock(
			const char* pFileName,
			int nLineNumber);  // 943
		Lock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
				const CThreadMutex& lock,
				const char* pFilename,
				int nLineNumber);  // 24
		CBufferString::IsEmpty(); // 25
		IFileSystem::GetSearchPath(
				const char* pathID,
				CBufferString* pPath,
				int nMaxElements);  // 27
		CBufferString::Append(
			const char* pString,
			int nChars,
			bool bExact);  // 28
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 30
	}
	CBufferString::IsEmpty(); // 22
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 32
	CThreadMutex::CThreadMutex(
			const char* pName);  // 20
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 19
} /* size: 0, variables: 2, inline expansions: 7 (0 bytes) */

// <0147A282> tier2/fileutils.cpp:66
// function calls: 4
bool SplitFullPath(const char* pFullPath, CBufferString* pOutMod, CBufferString* pOutRelativePath)
{
	CFileSystemPassThru::SplitFullPath(
			const char* pFullPath,
			CBufferString* pOutMod,
			CBufferString* pOutRelativePath,
			CBufferString* pContentRoot);  // 233
	CFileSystemPassThru::SplitFullPath(
			const char* pFullPath,
			CBufferString* pOutMod,
			CBufferString* pOutRelativePath,
			CBufferString* pContentRoot);  // 233
	CFileSystemPassThru::SplitFullPath(
			const char* pFullPath,
			CBufferString* pOutMod,
			CBufferString* pOutRelativePath,
			CBufferString* pContentRoot);  // 233
	CFileSystemPassThru::SplitFullPath(
			const char* pFullPath,
			CBufferString* pOutMod,
			CBufferString* pOutRelativePath,
			CBufferString* pContentRoot);  // 68
} /* size: 0, inline expansions: 4 (0 bytes) */

// <068111C9> tier2/fileutils.cpp:72
// variables: 3
// function calls: 33
bool SplitFullPathFuzzy(const char* pFullPath, CBufferString* pOutRoot, CBufferString* pOutMod, CBufferString* pOutRelativePath)
{
	const char   __FUNCTION__; // 25874
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 74
	}
	{
		const char* pszUnqualifiedFileName; // 85
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 1135
		CBufferString::IsEqual_FastCaseInsensitive(
						const char* src);  // 1128
		CBufferString::IsEqual_FastCaseInsensitive(
						const char* src);  // 82
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 895
		V_strlen(const char* str); // 895
		CBufferString::SyncStringChars(); // 80
		CBufferString::IsEmpty(); // 1354
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 1356
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 1359
		CBufferString::GetUnqualifiedFileName(); // 1352
		CBufferString::GetUnqualifiedFileName(); // 85
	}
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 76
	CBufferString::LengthAllocated(); // 78
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 808
	CBufferString::GetForModify(); // 78
	V_StripLastDir<int>(char* dirName,
				int maxlen);  // 78
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 96
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 100
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 105
} /* size: 0, variables: 1, inline expansions: 18 (0 bytes) */

// <031B9097> tier2/fileutils.cpp:72
// variables: 3
// function calls: 33
bool SplitFullPathFuzzy(const char* pFullPath, CBufferString* pOutRoot, CBufferString* pOutMod, CBufferString* pOutRelativePath)
{
	const char   __FUNCTION__; // 45781
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 74
	}
	{
		const char* pszUnqualifiedFileName; // 85
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 1135
		CBufferString::IsEqual_FastCaseInsensitive(
						const char* src);  // 1128
		CBufferString::IsEqual_FastCaseInsensitive(
						const char* src);  // 82
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 895
		V_strlen(const char* str); // 895
		CBufferString::SyncStringChars(); // 80
		CBufferString::IsEmpty(); // 1354
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 1356
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 1359
		CBufferString::GetUnqualifiedFileName(); // 1352
		CBufferString::GetUnqualifiedFileName(); // 85
	}
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 76
	CBufferString::LengthAllocated(); // 78
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 808
	CBufferString::GetForModify(); // 78
	V_StripLastDir<int>(char* dirName,
				int maxlen);  // 78
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 96
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 100
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 105
} /* size: 0, variables: 1, inline expansions: 18 (0 bytes) */

// <01479A87> tier2/fileutils.cpp:72
// variables: 3
// function calls: 33
bool SplitFullPathFuzzy(const char* pFullPath, CBufferString* pOutRoot, CBufferString* pOutMod, CBufferString* pOutRelativePath)
{
	const char   __FUNCTION__; // 54403
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 74
	}
	{
		const char* pszUnqualifiedFileName; // 85
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 1135
		CBufferString::IsEqual_FastCaseInsensitive(
						const char* src);  // 1128
		CBufferString::IsEqual_FastCaseInsensitive(
						const char* src);  // 82
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 895
		V_strlen(const char* str); // 895
		CBufferString::SyncStringChars(); // 80
		CBufferString::IsEmpty(); // 1354
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 1356
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 1359
		CBufferString::GetUnqualifiedFileName(); // 1352
		CBufferString::GetUnqualifiedFileName(); // 85
	}
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 76
	CBufferString::LengthAllocated(); // 78
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 808
	CBufferString::GetForModify(); // 78
	V_StripLastDir<int>(char* dirName,
				int maxlen);  // 78
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 96
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 100
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 105
} /* size: 0, variables: 1, inline expansions: 18 (0 bytes) */

// <003B1A47> tier2/fileutils.cpp:72
// variables: 3
// function calls: 33
bool SplitFullPathFuzzy(const char* pFullPath, CBufferString* pOutRoot, CBufferString* pOutMod, CBufferString* pOutRelativePath)
{
	const char   __FUNCTION__; // 44448
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 74
	}
	{
		const char* pszUnqualifiedFileName; // 85
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 1135
		CBufferString::IsEqual_FastCaseInsensitive(
						const char* src);  // 1128
		CBufferString::IsEqual_FastCaseInsensitive(
						const char* src);  // 82
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 895
		V_strlen(const char* str); // 895
		CBufferString::SyncStringChars(); // 80
		CBufferString::IsEmpty(); // 1354
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 1356
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 1359
		CBufferString::GetUnqualifiedFileName(); // 1352
		CBufferString::GetUnqualifiedFileName(); // 85
	}
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 76
	CBufferString::LengthAllocated(); // 78
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 808
	CBufferString::GetForModify(); // 78
	V_StripLastDir<int>(char* dirName,
				int maxlen);  // 78
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 96
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 100
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 105
} /* size: 0, variables: 1, inline expansions: 18 (0 bytes) */

// <01A1EB53> tier2/fileutils.cpp:72
// variables: 3
// function calls: 33
bool SplitFullPathFuzzy(const char* pFullPath, CBufferString* pOutRoot, CBufferString* pOutMod, CBufferString* pOutRelativePath)
{
	const char   __FUNCTION__; // 19201
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 74
	}
	{
		const char* pszUnqualifiedFileName; // 85
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 1135
		CBufferString::IsEqual_FastCaseInsensitive(
						const char* src);  // 1128
		CBufferString::IsEqual_FastCaseInsensitive(
						const char* src);  // 82
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 895
		V_strlen(const char* str); // 895
		CBufferString::SyncStringChars(); // 80
		CBufferString::IsEmpty(); // 1354
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 1356
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 1359
		CBufferString::GetUnqualifiedFileName(); // 1352
		CBufferString::GetUnqualifiedFileName(); // 85
	}
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 76
	CBufferString::LengthAllocated(); // 78
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 808
	CBufferString::GetForModify(); // 78
	V_StripLastDir<int>(char* dirName,
				int maxlen);  // 78
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 96
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 100
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 105
} /* size: 0, variables: 1, inline expansions: 18 (0 bytes) */

// <00A8763D> tier2/fileutils.cpp:72
// variables: 3
// function calls: 33
bool SplitFullPathFuzzy(const char* pFullPath, CBufferString* pOutRoot, CBufferString* pOutMod, CBufferString* pOutRelativePath)
{
	const char   __FUNCTION__; // 15206
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 74
	}
	{
		const char* pszUnqualifiedFileName; // 85
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 1135
		CBufferString::IsEqual_FastCaseInsensitive(
						const char* src);  // 1128
		CBufferString::IsEqual_FastCaseInsensitive(
						const char* src);  // 82
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 895
		V_strlen(const char* str); // 895
		CBufferString::SyncStringChars(); // 80
		CBufferString::IsEmpty(); // 1354
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 1356
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 1359
		CBufferString::GetUnqualifiedFileName(); // 1352
		CBufferString::GetUnqualifiedFileName(); // 85
	}
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 76
	CBufferString::LengthAllocated(); // 78
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 808
	CBufferString::GetForModify(); // 78
	V_StripLastDir<int>(char* dirName,
				int maxlen);  // 78
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 96
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 100
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 105
} /* size: 0, variables: 1, inline expansions: 18 (0 bytes) */

// <001C84DD> tier2/fileutils.cpp:72
// variables: 3
// function calls: 33
bool SplitFullPathFuzzy(const char* pFullPath, CBufferString* pOutRoot, CBufferString* pOutMod, CBufferString* pOutRelativePath)
{
	const char   __FUNCTION__; // 34867
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 74
	}
	{
		const char* pszUnqualifiedFileName; // 85
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 1135
		CBufferString::IsEqual_FastCaseInsensitive(
						const char* src);  // 1128
		CBufferString::IsEqual_FastCaseInsensitive(
						const char* src);  // 82
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 895
		V_strlen(const char* str); // 895
		CBufferString::SyncStringChars(); // 80
		CBufferString::IsEmpty(); // 1354
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 1356
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 1359
		CBufferString::GetUnqualifiedFileName(); // 1352
		CBufferString::GetUnqualifiedFileName(); // 85
	}
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 76
	CBufferString::LengthAllocated(); // 78
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 808
	CBufferString::GetForModify(); // 78
	V_StripLastDir<int>(char* dirName,
				int maxlen);  // 78
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 96
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 100
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 105
} /* size: 0, variables: 1, inline expansions: 18 (0 bytes) */

// <06810D95> tier2/fileutils.cpp:113
// variables: 2
// function calls: 14
void FixupGameOrContentPathName(CBufferString* pOut, const char* pPath)
{
	const char   __FUNCTION__; // 26060
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 116
	}
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 118
	CBufferString::IsEmpty(); // 1299
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1304
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 895
	V_strlen(const char* str); // 895
	CBufferString::SyncStringChars(); // 1305
	CBufferString::ReadBuffer(); // 1306
	CBufferString::FixDoubleSlashes(); // 1297
	CBufferString::FixDoubleSlashes(); // 121
} /* size: 0, variables: 1, inline expansions: 14 (0 bytes) */

// <031B8C63> tier2/fileutils.cpp:113
// variables: 2
// function calls: 14
void FixupGameOrContentPathName(CBufferString* pOut, const char* pPath)
{
	const char   __FUNCTION__; // 45967
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 116
	}
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 118
	CBufferString::IsEmpty(); // 1299
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1304
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 895
	V_strlen(const char* str); // 895
	CBufferString::SyncStringChars(); // 1305
	CBufferString::ReadBuffer(); // 1306
	CBufferString::FixDoubleSlashes(); // 1297
	CBufferString::FixDoubleSlashes(); // 121
} /* size: 0, variables: 1, inline expansions: 14 (0 bytes) */

// <003B1613> tier2/fileutils.cpp:113
// variables: 2
// function calls: 14
void FixupGameOrContentPathName(CBufferString* pOut, const char* pPath)
{
	const char   __FUNCTION__; // 44634
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 116
	}
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 118
	CBufferString::IsEmpty(); // 1299
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1304
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 895
	V_strlen(const char* str); // 895
	CBufferString::SyncStringChars(); // 1305
	CBufferString::ReadBuffer(); // 1306
	CBufferString::FixDoubleSlashes(); // 1297
	CBufferString::FixDoubleSlashes(); // 121
} /* size: 0, variables: 1, inline expansions: 14 (0 bytes) */

// <01A1E71F> tier2/fileutils.cpp:113
// variables: 2
// function calls: 14
void FixupGameOrContentPathName(CBufferString* pOut, const char* pPath)
{
	const char   __FUNCTION__; // 19387
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 116
	}
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 118
	CBufferString::IsEmpty(); // 1299
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1304
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 895
	V_strlen(const char* str); // 895
	CBufferString::SyncStringChars(); // 1305
	CBufferString::ReadBuffer(); // 1306
	CBufferString::FixDoubleSlashes(); // 1297
	CBufferString::FixDoubleSlashes(); // 121
} /* size: 0, variables: 1, inline expansions: 14 (0 bytes) */

// <00A87209> tier2/fileutils.cpp:113
// variables: 2
// function calls: 14
void FixupGameOrContentPathName(CBufferString* pOut, const char* pPath)
{
	const char   __FUNCTION__; // 15392
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 116
	}
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 118
	CBufferString::IsEmpty(); // 1299
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1304
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 895
	V_strlen(const char* str); // 895
	CBufferString::SyncStringChars(); // 1305
	CBufferString::ReadBuffer(); // 1306
	CBufferString::FixDoubleSlashes(); // 1297
	CBufferString::FixDoubleSlashes(); // 121
} /* size: 0, variables: 1, inline expansions: 14 (0 bytes) */

// <001C80A9> tier2/fileutils.cpp:113
// variables: 2
// function calls: 14
void FixupGameOrContentPathName(CBufferString* pOut, const char* pPath)
{
	const char   __FUNCTION__; // 35053
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 116
	}
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 118
	CBufferString::IsEmpty(); // 1299
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1304
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 895
	V_strlen(const char* str); // 895
	CBufferString::SyncStringChars(); // 1305
	CBufferString::ReadBuffer(); // 1306
	CBufferString::FixDoubleSlashes(); // 1297
	CBufferString::FixDoubleSlashes(); // 121
} /* size: 0, variables: 1, inline expansions: 14 (0 bytes) */

// <06810465> tier2/fileutils.cpp:129
// variables: 3
// function calls: 27
void GetModSubdirectory(const char* pSubDir, bool bRequireWritable, CBufferString* pOutBuf)
{
	CPathBufferString tempBuf; // 132
	char* pTempBuf; // 135
	{
		char* pSemi; // 138
		strchr(char* __s,
			int __c);  // 194
		V_strchr(char* s,
			char c);  // 138
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
						const char* pathID);  // 144
		CBufferString::WriteBuffer(); // 1390
		CBufferString::WriteBuffer(); // 1101
		CBufferString::RemoveAll(); // 901
		CBufferString::Set(
			const char* pString,
			int nChars,
			bool bExact);  // 146
		CBufferString::WriteBuffer(); // 1390
		CBufferString::WriteBuffer(); // 1101
		CBufferString::RemoveAll(); // 901
		CBufferString::Set(
			const char* pString,
			int nChars,
			bool bExact);  // 156
	}
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 132
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
			int nMaxElements);  // 499
	IFileSystem::GetSearchPath(
			const char* pathID,
			CBufferString* pPath,
			int nMaxElements);  // 133
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 803
	CBufferString::Access(); // 135
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 168
} /* size: 0, variables: 2, inline expansions: 13 (0 bytes) */

// <0681022C> tier2/fileutils.cpp:174
// variable: 1
// function calls: 8
void GetModContentSubdirectory(const char* pSubDir, CBufferString* pBuf)
{
	CPathBufferString tempBuf; // 176
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 176
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 178
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 179
} /* size: 0, variables: 1, inline expansions: 8 (0 bytes) */

// <0680F9CE> tier2/fileutils.cpp:185
// variable: 1
// function calls: 27
void ComputeModFilename(const char* pContentFileName, CBufferString* pBuf)
{
	CPathBufferString root; // 187
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 187
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
			int nMaxElements);  // 499
	IFileSystem::GetSearchPath(
			const char* pathID,
			CBufferString* pPath,
			int nMaxElements);  // 188
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 189
	CBufferString::Length(); // 196
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
			int nMaxElements);  // 499
	IFileSystem::GetSearchPath(
			const char* pathID,
			CBufferString* pPath,
			int nMaxElements);  // 198
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 199
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 200
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 192
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 200
} /* size: 0, variables: 1, inline expansions: 27 (0 bytes) */

// <0680F170> tier2/fileutils.cpp:206
// variable: 1
// function calls: 27
void ComputeModContentFilename(const char* pGameFileName, CBufferString* pBuf)
{
	CPathBufferString root; // 208
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 208
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
			int nMaxElements);  // 499
	IFileSystem::GetSearchPath(
			const char* pathID,
			CBufferString* pPath,
			int nMaxElements);  // 209
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 210
	CBufferString::Length(); // 217
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
			int nMaxElements);  // 499
	IFileSystem::GetSearchPath(
			const char* pathID,
			CBufferString* pPath,
			int nMaxElements);  // 219
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 220
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 221
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 213
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 221
} /* size: 0, variables: 1, inline expansions: 27 (0 bytes) */

// <0680F134> tier2/fileutils.cpp:223
// variable: 1
char* MatchAndSkipFolder(char* str, const char* strFolderName)
{
	int len; // 225
} /* size: 0, variables: 1 */

// <0680F111> tier2/fileutils.cpp:233
char* SkipFolder(char* str)
{
} /* size: 0 */

// <0680EDA4> tier2/fileutils.cpp:291
const char* SkipToModRelativePathFromGameOrContentRelativePath(const char* pPathOrFileName)
{
} /* size: 0 */

// <0680E688> tier2/fileutils.cpp:296
// variable: 1
// function calls: 22
const char* SkipToGameOrContentRelativePathFromFullPath(const char* pFullPath)
{
	CPathBufferString root; // 299
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 299
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
			int nMaxElements);  // 499
	IFileSystem::GetSearchPath(
			const char* pathID,
			CBufferString* pPath,
			int nMaxElements);  // 300
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 301
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
			int nMaxElements);  // 499
	IFileSystem::GetSearchPath(
			const char* pathID,
			CBufferString* pPath,
			int nMaxElements);  // 307
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 308
	CBufferString::Length(); // 310
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 315
} /* size: 0, variables: 1, inline expansions: 22 (0 bytes) */

// <0680DCAA> tier2/fileutils.cpp:318
// variables: 2
// function calls: 32
bool GetContentRootForPathWithinContent(const char* pPathOrFileName, const char* pPathID, CBufferString* pDestPathOrFileName)
{
	CPathBufferString root; // 332
	char* pStr; // 337
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
				PathTypeFilter_t pathFilter);  // 322
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 332
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
			int nMaxElements);  // 499
	IFileSystem::GetSearchPath(
			const char* pathID,
			CBufferString* pPath,
			int nMaxElements);  // 333
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 334
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 334
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 808
	CBufferString::GetForModify(); // 337
	CBufferString::Length(); // 337
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 348
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 327
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 895
	V_strlen(const char* str); // 895
	CBufferString::SyncStringChars(); // 344
} /* size: 0, variables: 2, inline expansions: 32 (0 bytes) */

// <0680D2CC> tier2/fileutils.cpp:353
// variables: 2
// function calls: 32
bool GetGameRootForPathWithinGame(const char* pPathOrFileName, const char* pPathID, CBufferString* pDestPathOrFileName)
{
	CPathBufferString root; // 367
	char* pStr; // 372
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
				PathTypeFilter_t pathFilter);  // 357
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 367
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
			int nMaxElements);  // 499
	IFileSystem::GetSearchPath(
			const char* pathID,
			CBufferString* pPath,
			int nMaxElements);  // 368
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 369
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 369
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 808
	CBufferString::GetForModify(); // 372
	CBufferString::Length(); // 372
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 383
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 362
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 895
	V_strlen(const char* str); // 895
	CBufferString::SyncStringChars(); // 379
} /* size: 0, variables: 2, inline expansions: 32 (0 bytes) */

// <0680C752> tier2/fileutils.cpp:388
// variables: 3
// function calls: 40
bool FullPathToModRelativePath(const char* pInputFullPath, CBufferString* pDestPath)
{
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > paths; // 405
	{
		int i; // 407
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 407
		CUtlString::Get(); // 413
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
				int i);  // 413
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
				int i);  // 415
		V_strlen(const char* str); // 393
		CUtlString::Length(); // 415
		CBufferString::TrimHead(
			char c);  // 416
		CBufferString::TrimHead(
			char c);  // 417
	}
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
				CBufferString* pRelative);  // 393
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 402
	CUtlMemory<CUtlString, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlString, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVector(); // 405
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
				CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& list);  // 406
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
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVector(); // 428
} /* size: 0, variables: 1, inline expansions: 26 (0 bytes) */

// <0680C41F> tier2/fileutils.cpp:433
// variable: 1
// function calls: 12
bool FullPathToRootPath(const char* pInputFullPath, CBufferString* pDestPath)
{
	char* pContentStr; // 441
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 435
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 437
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 441
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 895
	V_strlen(const char* str); // 895
	CBufferString::SyncStringChars(); // 450
} /* size: 0, variables: 1, inline expansions: 12 (0 bytes) */

// <0680C3D7> tier2/fileutils.cpp:457
// variables: 2
void ModNameFromRootPath(CBufferString* pBuf, const char* pRootPath)
{
	const char* pAddons; // 466
	const char* pSearchFrom; // 467
} /* size: 0, variables: 2 */

// <0680BF7A> tier2/fileutils.cpp:491
// variable: 1
// function calls: 15
void GetModAndAddonPathsFromModOrAddonName(CBufferString* pModOut, CBufferString* pAddonOut, const char* pModOrAddonPath)
{
	const char* pAddons; // 493
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 498
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 502
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 509
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 513
} /* size: 0, variables: 1, inline expansions: 15 (0 bytes) */

// <0680BC45> tier2/fileutils.cpp:523
// variables: 2
// function calls: 13
void GetAddonNameFromFullPath(const char* pFullPath, CBufferString* pOutAddonName)
{
	CPathBufferString modNameAndAddonName; // 525
	CPathBufferString modName; // 528
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 525
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 528
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 529
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 530
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 530
} /* size: 0, variables: 2, inline expansions: 13 (0 bytes) */

// <0680BA06> tier2/fileutils.cpp:534
// variable: 1
// function calls: 8
bool ModNameFromFullPath(CBufferString* pBuf, const char* pFullPath)
{
	CPathBufferString rootPath; // 536
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 536
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 542
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 540
} /* size: 0, variables: 1, inline expansions: 8 (0 bytes) */

// <0680B7DA> tier2/fileutils.cpp:544
// variables: 4
// function calls: 5
void ModNameFromGameOrContentRelativePath(CBufferString* pBuf, const char* pBaseRelativePath)
{
	const char* pModRelativePath; // 546
	intp nCount; // 554
	const char   __FUNCTION__; // 26285
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 555
	}
	SkipToModRelativePathFromGameOrContentRelativePath(const char* pPathOrFileName); // 546
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 556
} /* size: 0, variables: 3, inline expansions: 5 (0 bytes) */

// <031B36A8> tier2/fileutils.cpp:544
// variables: 4
// function calls: 5
void ModNameFromGameOrContentRelativePath(CBufferString* pBuf, const char* pBaseRelativePath)
{
	const char* pModRelativePath; // 546
	intp nCount; // 554
	const char   __FUNCTION__; // 46192
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 555
	}
	SkipToModRelativePathFromGameOrContentRelativePath(const char* pPathOrFileName); // 546
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 556
} /* size: 0, variables: 3, inline expansions: 5 (0 bytes) */

// <003AC058> tier2/fileutils.cpp:544
// variables: 4
// function calls: 5
void ModNameFromGameOrContentRelativePath(CBufferString* pBuf, const char* pBaseRelativePath)
{
	const char* pModRelativePath; // 546
	intp nCount; // 554
	const char   __FUNCTION__; // 44859
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 555
	}
	SkipToModRelativePathFromGameOrContentRelativePath(const char* pPathOrFileName); // 546
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 556
} /* size: 0, variables: 3, inline expansions: 5 (0 bytes) */

// <01A19164> tier2/fileutils.cpp:544
// variables: 4
// function calls: 5
void ModNameFromGameOrContentRelativePath(CBufferString* pBuf, const char* pBaseRelativePath)
{
	const char* pModRelativePath; // 546
	intp nCount; // 554
	const char   __FUNCTION__; // 19612
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 555
	}
	SkipToModRelativePathFromGameOrContentRelativePath(const char* pPathOrFileName); // 546
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 556
} /* size: 0, variables: 3, inline expansions: 5 (0 bytes) */

// <00A81C4E> tier2/fileutils.cpp:544
// variables: 4
// function calls: 5
void ModNameFromGameOrContentRelativePath(CBufferString* pBuf, const char* pBaseRelativePath)
{
	const char* pModRelativePath; // 546
	intp nCount; // 554
	const char   __FUNCTION__; // 15617
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 555
	}
	SkipToModRelativePathFromGameOrContentRelativePath(const char* pPathOrFileName); // 546
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 556
} /* size: 0, variables: 3, inline expansions: 5 (0 bytes) */

// <001C2AEE> tier2/fileutils.cpp:544
// variables: 4
// function calls: 5
void ModNameFromGameOrContentRelativePath(CBufferString* pBuf, const char* pBaseRelativePath)
{
	const char* pModRelativePath; // 546
	intp nCount; // 554
	const char   __FUNCTION__; // 35278
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 555
	}
	SkipToModRelativePathFromGameOrContentRelativePath(const char* pPathOrFileName); // 546
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 556
} /* size: 0, variables: 3, inline expansions: 5 (0 bytes) */

// <031B1D37> tier2/fileutils.cpp:617
// variables: 2
// function calls: 9
void BuildFileList(const char* pSearchSpec, const char* pPathID, bool bRecursive, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& list)
{
	CPathBufferString dir; // 619
	const char* pSpec; // 621
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 619
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 622
	BuildFileList(const char* pDir,
			const char* pSearchSpec,
			const char* pPathID,
			bool bRecursive,
			CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& list);  // 622
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 623
} /* size: 0, variables: 2, inline expansions: 9 (0 bytes) */

// <06808754> tier2/fileutils.cpp:630
// variables: 7
// function calls: 86
void BuildDirectoryList(const char* pDir, const char* pSearchSpec, const char* pPathID, bool bRecursive, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& list)
{
	FileFindHandle_t findHandle; // 633
	CPathBufferString fullSearchSpec; // 635
	const char* pFoundFileName; // 637
	{
		CPathBufferString foundFullPath; // 643
		int i; // 647
		CFileSystemPassThru::FindIsDirectory(
				const FileFindHandle_t& handle);  // 129
		CFileSystemPassThru::FindIsDirectory(
				const FileFindHandle_t& handle);  // 129
		CFileSystemPassThru::FindIsDirectory(
				const FileFindHandle_t& handle);  // 129
		CFileSystemPassThru::FindIsDirectory(
				const FileFindHandle_t& handle);  // 640
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<200>::CBufferStringN(); // 643
		CUtlMemory<CUtlString, int>::NumAllocated(); // 1143
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
			int i);  // 1148
		CUtlString::CUtlString(); // 1479
		Construct<CUtlString>(CUtlString* pMemory); // 1148
		CUtlMemory<CUtlString, int>::Base(); // 112
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 368
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::GrowMemory(
				int num);  // 1145
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::AddToTail(); // 647
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
				int i);  // 648
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 649
	}
	{
		const char* pFoundDirName; // 657
		{
			CPathBufferString subDir; // 666
			CFileSystemPassThru::FindIsDirectory(
					const FileFindHandle_t& handle);  // 129
			CFileSystemPassThru::FindIsDirectory(
					const FileFindHandle_t& handle);  // 129
			CFileSystemPassThru::FindIsDirectory(
					const FileFindHandle_t& handle);  // 129
			CFileSystemPassThru::FindIsDirectory(
					const FileFindHandle_t& handle);  // 660
			V_strnicmp_fast<int>(const char* s1,
						const char* s2,
						int n);  // 663
			V_strnicmp_fast<int>(const char* s1,
						const char* s2,
						int n);  // 663
			CBufferString::InitMinConstruct(
					bool bGrowable);  // 712
			CBufferString::CBufferString(); // 591
			CBufferStringN<200>::CBufferStringN(); // 666
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 781
			CBufferString::operator char const*(); // 669
			BuildFileList(const char* pDir,
					const char* pSearchSpec,
					const char* pPathID,
					bool bRecursive,
					CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& list);  // 669
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 670
		}
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 657
		CFileSystemPassThru::FindNext(
			FileFindHandle_t& handle);  // 128
		CFileSystemPassThru::FindNext(
			FileFindHandle_t& handle);  // 128
		CFileSystemPassThru::FindNext(
			FileFindHandle_t& handle);  // 128
		CFileSystemPassThru::FindNext(
			FileFindHandle_t& handle);  // 658
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
		CFileSystemPassThru::FindClose(
				FileFindHandle_t& handle);  // 672
	}
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 635
	FileFindHandle_t::FileFindHandle_t(); // 633
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 637
	CFileSystemPassThru::FindFirstEx(
			const char* pWildCard,
			const char* pPathID,
			FileFindHandle_t* pHandle);  // 159
	CFileSystemPassThru::FindFirstEx(
			const char* pWildCard,
			const char* pPathID,
			FileFindHandle_t* pHandle);  // 637
	CFileSystemPassThru::FindNext(
		FileFindHandle_t& handle);  // 128
	CFileSystemPassThru::FindNext(
		FileFindHandle_t& handle);  // 128
	CFileSystemPassThru::FindNext(
		FileFindHandle_t& handle);  // 128
	CFileSystemPassThru::FindNext(
		FileFindHandle_t& handle);  // 638
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
	CFileSystemPassThru::FindClose(
			FileFindHandle_t& handle);  // 651
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 674
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
	CFileSystemPassThru::FindClose(
			FileFindHandle_t& handle);  // 798
	FileFindHandle_t::~FileFindHandle_t(); // 674
} /* size: 0, variables: 3, inline expansions: 34 (0 bytes) */

// <06807CA4> tier2/fileutils.cpp:680
// variables: 3
// function calls: 40
void GetSearchPath(CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& path, GetSearchPathTypes_t nPathTypes, const char* pPathID)
{
	CPathBufferString pathBuf; // 682
	char* pBuf; // 684
	char* pSemi; // 686
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 682
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
			int nMaxElements);  // 683
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 808
	CBufferString::GetForModify(); // 684
	CUtlString::Get(); // 354
	CUtlString::CUtlString(
			const CUtlString& string);  // 1514
	Construct<CUtlString, CUtlString>(CUtlString* pMemory); // 1252
	CUtlMemory<CUtlString, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
		int i);  // 1252
	CUtlMemory<CUtlString, int>::NumAllocated(); // 1247
	CUtlMemory<CUtlString, int>::Base(); // 112
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 368
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::GrowMemory(
			int num);  // 1249
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::AddToTail(
			CUtlString& src);  // 690
	CUtlString::~CUtlString(); // 690
	strchr(char* __s,
		int __c);  // 194
	V_strchr(char* s,
		char c);  // 687
	CUtlString::CUtlString(
			const char* pString);  // 690
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 698
	CUtlString::CUtlString(
			const char* pString);  // 696
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
			CUtlString& src);  // 696
	CUtlString::~CUtlString(); // 696
} /* size: 0, variables: 3, inline expansions: 40 (0 bytes) */

// <06807609> tier2/fileutils.cpp:703
// variables: 2
// function calls: 19
bool GenerateFullPath(const char* pFileName, const char* pPathID, CBufferString* pBuf)
{
	const char* pFullPath; // 712
	CPathBufferString dir; // 716
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
				PathTypeFilter_t pathFilter);  // 712
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 716
	CFileSystemPassThru::GetCurrentDirectory(
				CBufferString* pDirectory);  // 134
	CFileSystemPassThru::GetCurrentDirectory(
				CBufferString* pDirectory);  // 134
	CFileSystemPassThru::GetCurrentDirectory(
				CBufferString* pDirectory);  // 717
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 720
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 722
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 707
} /* size: 0, variables: 2, inline expansions: 19 (0 bytes) */

// <06806A6F> tier2/fileutils.cpp:724
// variables: 4
// function calls: 41
bool GenerateFullPathForce(const char* pFileName, const char* pPathID, CBufferString* pBuf)
{
	const char* pFullPath; // 733
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > list; // 738
	CPathBufferString dir; // 747
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
				PathTypeFilter_t pathFilter);  // 733
	CUtlMemory<CUtlString, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlString, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVector(); // 738
	CFileSystemPassThru::GetSearchPathsForPathID(
				const char* pathID,
				GetSearchPathTypes_t nPathTypes,
				CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& list);  // 206
	CFileSystemPassThru::GetSearchPathsForPathID(
				const char* pathID,
				GetSearchPathTypes_t nPathTypes,
				CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& list);  // 739
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 740
	CUtlMemory<CUtlString, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
			int i);  // 743
	CUtlString::Get(); // 441
	CUtlString::operator char const*(); // 743
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
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVector(); // 753
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 728
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 747
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 751
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 753
} /* size: 0, variables: 3, inline expansions: 37 (0 bytes) */

// <06804E01> tier2/fileutils.cpp:758
// variables: 11
// function calls: 112
void AddFilesToList(CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& list, const char* pDirectory, const char* pPathID, const char* pExtension)
{
	CPathBufferString searchString; // 760
	bool bIsAbsolute; // 762
	FileFindHandle_t hFind; // 765
	const char* pFoundFile; // 766
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > subDirs; // 769
	int nCount; // 805
	{
		CPathBufferString childPath; // 772
		const char* pExt; // 785
		CPathBufferString fullPathBuf; // 789
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<200>::CBufferStringN(); // 789
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 792
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
					PathTypeFilter_t pathFilter);  // 792
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 776
		CBufferString::String(); // 800
		CUtlString::CUtlString(
				const char* pString);  // 800
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
				CUtlString& src);  // 800
		CUtlString::~CUtlString(); // 800
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 801
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 801
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<200>::CBufferStringN(); // 772
		CFileSystemPassThru::FindIsDirectory(
				const FileFindHandle_t& handle);  // 129
		CFileSystemPassThru::FindIsDirectory(
				const FileFindHandle_t& handle);  // 129
		CFileSystemPassThru::FindIsDirectory(
				const FileFindHandle_t& handle);  // 129
		CFileSystemPassThru::FindIsDirectory(
				const FileFindHandle_t& handle);  // 775
		V_strnicmp_fast<int>(const char* s1,
					const char* s2,
					int n);  // 777
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 801
		V_strnicmp_fast<int>(const char* s1,
					const char* s2,
					int n);  // 777
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 776
		CBufferString::String(); // 779
		CUtlString::CUtlString(
				const char* pString);  // 779
		CUtlString::Get(); // 354
		CUtlString::CUtlString(
				const CUtlString& string);  // 1514
		Construct<CUtlString, CUtlString>(CUtlString* pMemory); // 1252
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
			int i);  // 1252
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::GrowMemory(
				int num);  // 1249
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::AddToTail(
				CUtlString& src);  // 779
		CUtlString::~CUtlString(); // 779
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 796
		CBufferString::Set(
			const char* pString,
			int nChars,
			bool bExact);  // 796
	}
	{
		int i; // 806
		CUtlString::Get(); // 808
	}
	CBufferString::AppendConcat(
			const char* pStr1,
			int nChars1,
			const char* pStr2,
			int nChars2,
			bool bExact);  // 609
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 604
	CBufferStringN<200>::CBufferStringN(
			const char* pString1,
			const char* pString2,
			bool bExact,
			bool bGrowable);  // 760
	FileFindHandle_t::FileFindHandle_t(); // 765
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 766
	CFileSystemPassThru::FindFirstEx(
			const char* pWildCard,
			const char* pPathID,
			FileFindHandle_t* pHandle);  // 766
	CUtlMemory<CUtlString, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlString, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVector(); // 769
	CFileSystemPassThru::FindNext(
		FileFindHandle_t& handle);  // 128
	CFileSystemPassThru::FindNext(
		FileFindHandle_t& handle);  // 128
	CFileSystemPassThru::FindNext(
		FileFindHandle_t& handle);  // 128
	CFileSystemPassThru::FindNext(
		FileFindHandle_t& handle);  // 770
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
	CFileSystemPassThru::FindClose(
			FileFindHandle_t& handle);  // 130
	CFileSystemPassThru::FindClose(
			FileFindHandle_t& handle);  // 803
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
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVector(); // 810
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
	CFileSystemPassThru::FindClose(
			FileFindHandle_t& handle);  // 798
	FileFindHandle_t::~FileFindHandle_t(); // 810
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 810
} /* size: 0, variables: 6, inline expansions: 49 (0 bytes) */

// <06804733> tier2/fileutils.cpp:812
// variables: 2
// function calls: 23
void CBaseFile::ReadLines(CUtlStringList& lineList, int nMaxLineLength)
{
	char* pLine; // 814
	{
		char* pEOL; // 817
		strchr(char* __s,
			int __c);  // 817
		V_strlen(const char* str); // 46
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 75
		V_memcpy(void* dest,
			const void* src,
			int count);  // 48
		CUtlMemory<char::NumAllocated(); // 1196
		CUtlMemory<char::Base(); // 112
		CUtlVectorBase<char::Base(); // 368
		CUtlVectorBase<char::ResetDbgInfo(); // 824
		CUtlMemory<char::IsGrowable(); // 823
		CUtlMemory<char::IsExternallyAllocated(); // 859
		CUtlMemory<char::IsExternallyAllocated(); // 861
		CUtlMemory<char::Grow(
			int num);  // 806
		CUtlVectorBase<char::GrowMemory(
				int num);  // 1198
		CUtlMemory<char::operator[](
				int i);  // 602
		CUtlVectorBase<char::Element(
			int i);  // 1201
		CopyConstruct<char*>(char** pMemory,
					char* const& src);  // 1201
		CUtlVectorBase<char::AddToTail(
				char* const& src);  // 49
		CUtlStringList_Base<CUtlVector<char::CopyAndAddToTail(
				const char* pString);  // 820
	}
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
		FileHandle_t file);  // 204
	CBaseFile::ReadLine(
		char* pOutput,
		int maxChars);  // 815
} /* size: 752, variables: 1, inline expansions: 5 (420 bytes) */

// <06804407> tier2/fileutils.cpp:824
// variables: 4
// function calls: 9
void CBaseFile::ReadFile(CUtlBuffer& fileData)
{
	int64 nFileSize; // 826
	const char   __FUNCTION__; // 25649
	int nSize; // 829
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 827
	}
	CFileSystemPassThru::IsOk(
		FileHandle_t file);  // 111
	CFileSystemPassThru::IsOk(
		FileHandle_t file);  // 111
	CFileSystemPassThru::IsOk(
		FileHandle_t file);  // 111
	CFileSystemPassThru::IsOk(
		FileHandle_t file);  // 267
	CBaseFile::IsOk(); // 284
	{
	}
	CBaseFile::Size(); // 826
	CUtlMemory<unsigned char, int>::Base(); // 1484
	CUtlBuffer::Base(); // 829
	CBaseFile::Read(
		void* pOutput,
		int size);  // 829
} /* size: 0, variables: 3, inline expansions: 9 (0 bytes) */

// <031AC2D5> tier2/fileutils.cpp:824
// variables: 4
// function calls: 9
void CBaseFile::ReadFile(CUtlBuffer& fileData)
{
	int64 nFileSize; // 826
	const char   __FUNCTION__; // 45556
	int nSize; // 829
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 827
	}
	CFileSystemPassThru::IsOk(
		FileHandle_t file);  // 111
	CFileSystemPassThru::IsOk(
		FileHandle_t file);  // 111
	CFileSystemPassThru::IsOk(
		FileHandle_t file);  // 111
	CFileSystemPassThru::IsOk(
		FileHandle_t file);  // 267
	CBaseFile::IsOk(); // 284
	{
	}
	CBaseFile::Size(); // 826
	CUtlMemory<unsigned char, int>::Base(); // 1484
	CUtlBuffer::Base(); // 829
	CBaseFile::Read(
		void* pOutput,
		int size);  // 829
} /* size: 0, variables: 3, inline expansions: 9 (0 bytes) */

// <003A4C85> tier2/fileutils.cpp:824
// variables: 4
// function calls: 9
void CBaseFile::ReadFile(CUtlBuffer& fileData)
{
	int64 nFileSize; // 826
	const char   __FUNCTION__; // 44223
	int nSize; // 829
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 827
	}
	CFileSystemPassThru::IsOk(
		FileHandle_t file);  // 111
	CFileSystemPassThru::IsOk(
		FileHandle_t file);  // 111
	CFileSystemPassThru::IsOk(
		FileHandle_t file);  // 111
	CFileSystemPassThru::IsOk(
		FileHandle_t file);  // 267
	CBaseFile::IsOk(); // 284
	{
	}
	CBaseFile::Size(); // 826
	CUtlMemory<unsigned char, int>::Base(); // 1484
	CUtlBuffer::Base(); // 829
	CBaseFile::Read(
		void* pOutput,
		int size);  // 829
} /* size: 0, variables: 3, inline expansions: 9 (0 bytes) */

// <01A11D91> tier2/fileutils.cpp:824
// variables: 4
// function calls: 9
void CBaseFile::ReadFile(CUtlBuffer& fileData)
{
	int64 nFileSize; // 826
	const char   __FUNCTION__; // 18976
	int nSize; // 829
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 827
	}
	CFileSystemPassThru::IsOk(
		FileHandle_t file);  // 111
	CFileSystemPassThru::IsOk(
		FileHandle_t file);  // 111
	CFileSystemPassThru::IsOk(
		FileHandle_t file);  // 111
	CFileSystemPassThru::IsOk(
		FileHandle_t file);  // 267
	CBaseFile::IsOk(); // 284
	{
	}
	CBaseFile::Size(); // 826
	CUtlMemory<unsigned char, int>::Base(); // 1484
	CUtlBuffer::Base(); // 829
	CBaseFile::Read(
		void* pOutput,
		int size);  // 829
} /* size: 0, variables: 3, inline expansions: 9 (0 bytes) */

// <00A7A87B> tier2/fileutils.cpp:824
// variables: 4
// function calls: 9
void CBaseFile::ReadFile(CUtlBuffer& fileData)
{
	int64 nFileSize; // 826
	const char   __FUNCTION__; // 14981
	int nSize; // 829
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 827
	}
	CFileSystemPassThru::IsOk(
		FileHandle_t file);  // 111
	CFileSystemPassThru::IsOk(
		FileHandle_t file);  // 111
	CFileSystemPassThru::IsOk(
		FileHandle_t file);  // 111
	CFileSystemPassThru::IsOk(
		FileHandle_t file);  // 267
	CBaseFile::IsOk(); // 284
	{
	}
	CBaseFile::Size(); // 826
	CUtlMemory<unsigned char, int>::Base(); // 1484
	CUtlBuffer::Base(); // 829
	CBaseFile::Read(
		void* pOutput,
		int size);  // 829
} /* size: 0, variables: 3, inline expansions: 9 (0 bytes) */

// <001BB71B> tier2/fileutils.cpp:824
// variables: 4
// function calls: 9
void CBaseFile::ReadFile(CUtlBuffer& fileData)
{
	int64 nFileSize; // 826
	const char   __FUNCTION__; // 34642
	int nSize; // 829
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 827
	}
	CFileSystemPassThru::IsOk(
		FileHandle_t file);  // 111
	CFileSystemPassThru::IsOk(
		FileHandle_t file);  // 111
	CFileSystemPassThru::IsOk(
		FileHandle_t file);  // 111
	CFileSystemPassThru::IsOk(
		FileHandle_t file);  // 267
	CBaseFile::IsOk(); // 284
	{
	}
	CBaseFile::Size(); // 826
	CUtlMemory<unsigned char, int>::Base(); // 1484
	CUtlBuffer::Base(); // 829
	CBaseFile::Read(
		void* pOutput,
		int size);  // 829
} /* size: 0, variables: 3, inline expansions: 9 (0 bytes) */

// <0680434A> tier2/fileutils.cpp:836
// variables: 4
// function call: 1
bool V_RelativePathHasInvalidChars(const char* pRelativePath)
{
	char prevChar; // 838
	const char* p; // 839
	{
		bool bValid; // 842
		char c; // 843
		V_isalnum(char c); // 850
	}
} /* size: 0, variables: 2 */

// <0680430E> tier2/fileutils.cpp:887
const char* V_DescribeFilePathClass(FilePathClass_t nClass)
{
} /* size: 0 */

// <0680334B> tier2/fileutils.cpp:905
// variables: 10
// function calls: 63
void V_ClassifyAndValidatePath(const char* pPathOrFileName, FilePathClass_t* pOutClass, bool* pOutIsInvalid)
{
	CPathBufferString fixedPath; // 908
	CPathBufferString extractedRelativePath; // 964
	CPathBufferString contentRoot; // 970
	const char   __FUNCTION__; // 26033
	CPathBufferString gameRoot; // 993
	{
		bool bInvalid; // 949
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 949
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 972
	}
	{
		bool bInvalid; // 976
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 995
	}
	{
		bool bInvalid; // 999
	}
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 1256
	CBufferString::CopyAndFixupPathName(
				const char* pPath,
				char chSeparator);  // 909
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 908
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 915
	CFileSystemPassThru::IsPathInvalidForFilesystem(
					const char* pPath);  // 202
	CFileSystemPassThru::IsPathInvalidForFilesystem(
					const char* pPath);  // 915
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 919
	V_strlen(const char* str); // 919
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1024
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 947
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 964
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 970
	IFileSystem::GetSearchPath(
			const char* pathID,
			CBufferString* pPath,
			int nMaxElements);  // 971
	CBufferString::IsEmpty(); // 972
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 973
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 973
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 793
	CBufferString::GetHeadChar(); // 974
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1024
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1024
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 993
	IFileSystem::GetSearchPath(
			const char* pathID,
			CBufferString* pPath,
			int nMaxElements);  // 994
	CBufferString::IsEmpty(); // 995
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 996
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 996
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 793
	CBufferString::GetHeadChar(); // 997
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1024
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1024
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1024
} /* size: 0, variables: 5, inline expansions: 60 (0 bytes) */

// <031AB219> tier2/fileutils.cpp:905
// variables: 10
// function calls: 63
void V_ClassifyAndValidatePath(const char* pPathOrFileName, FilePathClass_t* pOutClass, bool* pOutIsInvalid)
{
	CPathBufferString fixedPath; // 908
	CPathBufferString extractedRelativePath; // 964
	CPathBufferString contentRoot; // 970
	const char   __FUNCTION__; // 45940
	CPathBufferString gameRoot; // 993
	{
		bool bInvalid; // 949
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 949
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 972
	}
	{
		bool bInvalid; // 976
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 995
	}
	{
		bool bInvalid; // 999
	}
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 1256
	CBufferString::CopyAndFixupPathName(
				const char* pPath,
				char chSeparator);  // 909
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 908
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 915
	CFileSystemPassThru::IsPathInvalidForFilesystem(
					const char* pPath);  // 202
	CFileSystemPassThru::IsPathInvalidForFilesystem(
					const char* pPath);  // 915
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 919
	V_strlen(const char* str); // 919
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1024
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 947
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 964
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 970
	IFileSystem::GetSearchPath(
			const char* pathID,
			CBufferString* pPath,
			int nMaxElements);  // 971
	CBufferString::IsEmpty(); // 972
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 973
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 973
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 793
	CBufferString::GetHeadChar(); // 974
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1024
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1024
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 993
	IFileSystem::GetSearchPath(
			const char* pathID,
			CBufferString* pPath,
			int nMaxElements);  // 994
	CBufferString::IsEmpty(); // 995
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 996
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 996
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 793
	CBufferString::GetHeadChar(); // 997
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1024
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1024
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1024
} /* size: 0, variables: 5, inline expansions: 60 (0 bytes) */

// <003A3BC9> tier2/fileutils.cpp:905
// variables: 10
// function calls: 63
void V_ClassifyAndValidatePath(const char* pPathOrFileName, FilePathClass_t* pOutClass, bool* pOutIsInvalid)
{
	CPathBufferString fixedPath; // 908
	CPathBufferString extractedRelativePath; // 964
	CPathBufferString contentRoot; // 970
	const char   __FUNCTION__; // 44607
	CPathBufferString gameRoot; // 993
	{
		bool bInvalid; // 949
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 949
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 972
	}
	{
		bool bInvalid; // 976
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 995
	}
	{
		bool bInvalid; // 999
	}
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 1256
	CBufferString::CopyAndFixupPathName(
				const char* pPath,
				char chSeparator);  // 909
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 908
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 915
	CFileSystemPassThru::IsPathInvalidForFilesystem(
					const char* pPath);  // 202
	CFileSystemPassThru::IsPathInvalidForFilesystem(
					const char* pPath);  // 915
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 919
	V_strlen(const char* str); // 919
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1024
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 947
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 964
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 970
	IFileSystem::GetSearchPath(
			const char* pathID,
			CBufferString* pPath,
			int nMaxElements);  // 971
	CBufferString::IsEmpty(); // 972
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 973
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 973
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 793
	CBufferString::GetHeadChar(); // 974
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1024
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1024
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 993
	IFileSystem::GetSearchPath(
			const char* pathID,
			CBufferString* pPath,
			int nMaxElements);  // 994
	CBufferString::IsEmpty(); // 995
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 996
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 996
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 793
	CBufferString::GetHeadChar(); // 997
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1024
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1024
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1024
} /* size: 0, variables: 5, inline expansions: 60 (0 bytes) */

// <01A10CD5> tier2/fileutils.cpp:905
// variables: 10
// function calls: 63
void V_ClassifyAndValidatePath(const char* pPathOrFileName, FilePathClass_t* pOutClass, bool* pOutIsInvalid)
{
	CPathBufferString fixedPath; // 908
	CPathBufferString extractedRelativePath; // 964
	CPathBufferString contentRoot; // 970
	const char   __FUNCTION__; // 19360
	CPathBufferString gameRoot; // 993
	{
		bool bInvalid; // 949
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 949
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 972
	}
	{
		bool bInvalid; // 976
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 995
	}
	{
		bool bInvalid; // 999
	}
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 1256
	CBufferString::CopyAndFixupPathName(
				const char* pPath,
				char chSeparator);  // 909
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 908
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 915
	CFileSystemPassThru::IsPathInvalidForFilesystem(
					const char* pPath);  // 202
	CFileSystemPassThru::IsPathInvalidForFilesystem(
					const char* pPath);  // 915
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 919
	V_strlen(const char* str); // 919
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1024
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 947
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 964
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 970
	IFileSystem::GetSearchPath(
			const char* pathID,
			CBufferString* pPath,
			int nMaxElements);  // 971
	CBufferString::IsEmpty(); // 972
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 973
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 973
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 793
	CBufferString::GetHeadChar(); // 974
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1024
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1024
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 993
	IFileSystem::GetSearchPath(
			const char* pathID,
			CBufferString* pPath,
			int nMaxElements);  // 994
	CBufferString::IsEmpty(); // 995
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 996
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 996
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 793
	CBufferString::GetHeadChar(); // 997
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1024
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1024
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1024
} /* size: 0, variables: 5, inline expansions: 60 (0 bytes) */

// <00A797BF> tier2/fileutils.cpp:905
// variables: 10
// function calls: 63
void V_ClassifyAndValidatePath(const char* pPathOrFileName, FilePathClass_t* pOutClass, bool* pOutIsInvalid)
{
	CPathBufferString fixedPath; // 908
	CPathBufferString extractedRelativePath; // 964
	CPathBufferString contentRoot; // 970
	const char   __FUNCTION__; // 15365
	CPathBufferString gameRoot; // 993
	{
		bool bInvalid; // 949
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 949
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 972
	}
	{
		bool bInvalid; // 976
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 995
	}
	{
		bool bInvalid; // 999
	}
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 1256
	CBufferString::CopyAndFixupPathName(
				const char* pPath,
				char chSeparator);  // 909
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 908
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 915
	CFileSystemPassThru::IsPathInvalidForFilesystem(
					const char* pPath);  // 202
	CFileSystemPassThru::IsPathInvalidForFilesystem(
					const char* pPath);  // 915
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 919
	V_strlen(const char* str); // 919
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1024
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 947
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 964
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 970
	IFileSystem::GetSearchPath(
			const char* pathID,
			CBufferString* pPath,
			int nMaxElements);  // 971
	CBufferString::IsEmpty(); // 972
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 973
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 973
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 793
	CBufferString::GetHeadChar(); // 974
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1024
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1024
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 993
	IFileSystem::GetSearchPath(
			const char* pathID,
			CBufferString* pPath,
			int nMaxElements);  // 994
	CBufferString::IsEmpty(); // 995
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 996
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 996
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 793
	CBufferString::GetHeadChar(); // 997
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1024
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1024
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1024
} /* size: 0, variables: 5, inline expansions: 60 (0 bytes) */

// <0101C71E> tier2/fileutils.cpp:905
// variables: 10
// function calls: 63
void V_ClassifyAndValidatePath(const char* pPathOrFileName, FilePathClass_t* pOutClass, bool* pOutIsInvalid)
{
	CPathBufferString fixedPath; // 908
	CPathBufferString extractedRelativePath; // 964
	CPathBufferString contentRoot; // 970
	const char   __FUNCTION__; // 41321
	CPathBufferString gameRoot; // 993
	{
		bool bInvalid; // 949
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 949
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 972
	}
	{
		bool bInvalid; // 976
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 995
	}
	{
		bool bInvalid; // 999
	}
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 1256
	CBufferString::CopyAndFixupPathName(
				const char* pPath,
				char chSeparator);  // 909
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 908
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 915
	CFileSystemPassThru::IsPathInvalidForFilesystem(
					const char* pPath);  // 202
	CFileSystemPassThru::IsPathInvalidForFilesystem(
					const char* pPath);  // 915
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 919
	V_strlen(const char* str); // 919
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1024
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 947
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 964
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 970
	IFileSystem::GetSearchPath(
			const char* pathID,
			CBufferString* pPath,
			int nMaxElements);  // 971
	CBufferString::IsEmpty(); // 972
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 973
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 973
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 793
	CBufferString::GetHeadChar(); // 974
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1024
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1024
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 993
	IFileSystem::GetSearchPath(
			const char* pathID,
			CBufferString* pPath,
			int nMaxElements);  // 994
	CBufferString::IsEmpty(); // 995
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 996
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 996
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 793
	CBufferString::GetHeadChar(); // 997
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1024
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1024
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1024
} /* size: 0, variables: 5, inline expansions: 60 (0 bytes) */

// <001BA65F> tier2/fileutils.cpp:905
// variables: 10
// function calls: 63
void V_ClassifyAndValidatePath(const char* pPathOrFileName, FilePathClass_t* pOutClass, bool* pOutIsInvalid)
{
	CPathBufferString fixedPath; // 908
	CPathBufferString extractedRelativePath; // 964
	CPathBufferString contentRoot; // 970
	const char   __FUNCTION__; // 35026
	CPathBufferString gameRoot; // 993
	{
		bool bInvalid; // 949
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 949
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 972
	}
	{
		bool bInvalid; // 976
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 995
	}
	{
		bool bInvalid; // 999
	}
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 1256
	CBufferString::CopyAndFixupPathName(
				const char* pPath,
				char chSeparator);  // 909
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 908
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 915
	CFileSystemPassThru::IsPathInvalidForFilesystem(
					const char* pPath);  // 202
	CFileSystemPassThru::IsPathInvalidForFilesystem(
					const char* pPath);  // 915
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 919
	V_strlen(const char* str); // 919
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1024
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 947
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 964
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 970
	IFileSystem::GetSearchPath(
			const char* pathID,
			CBufferString* pPath,
			int nMaxElements);  // 971
	CBufferString::IsEmpty(); // 972
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 973
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 973
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 793
	CBufferString::GetHeadChar(); // 974
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1024
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1024
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 993
	IFileSystem::GetSearchPath(
			const char* pathID,
			CBufferString* pPath,
			int nMaxElements);  // 994
	CBufferString::IsEmpty(); // 995
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 996
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 996
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 793
	CBufferString::GetHeadChar(); // 997
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1024
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1024
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1024
} /* size: 0, variables: 5, inline expansions: 60 (0 bytes) */

