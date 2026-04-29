
//
// tier2/tier2_logging.cpp
//
//	referenced by: libengine2.so
//
//	functions: 6
//

// <068351CA> tier2/tier2_logging.cpp:12
// function calls: 2
void CFileLoggingListener::CFileLoggingListener()
{
	ILoggingListener::ILoggingListener(); // 19
	IFileLoggingListener::IFileLoggingListener(); // 12
} /* size: 34, inline expansions: 2 (0 bytes) */

// <068351B1> tier2/tier2_logging.cpp:12
void CFileLoggingListener::CFileLoggingListener()
{
} /* size: 0 */

// <0683514E> tier2/tier2_logging.cpp:19
// function call: 1
void CFileLoggingListener::~CFileLoggingListener()
{
	CFileLoggingListener::Close(); // 21
} /* size: 33, inline expansions: 1 (18 bytes) */

// <06835135> tier2/tier2_logging.cpp:19
void CFileLoggingListener::~CFileLoggingListener()
{
} /* size: 0 */

// <06834CC0> tier2/tier2_logging.cpp:24
// variables: 2
// function calls: 13
void CFileLoggingListener::Open(const char* pFilename, int nFlags, const char* pszPathID)
{
	CPathBufferString localPath; // 32
	CThreadedFileLogger* pFileLogger; // 36
	CFileLoggingListener::Close(); // 26
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 32
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
					CBufferString* pLocalPath);  // 33
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 37
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 45
} /* size: 542, variables: 2, inline expansions: 13 (542 bytes) */

// <06835755> tier2/tier2_logging.cpp:47
void CFileLoggingListener::Close()
{
} /* size: 56 */

