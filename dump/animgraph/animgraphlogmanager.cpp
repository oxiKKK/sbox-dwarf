
//
// animgraph/animgraphlogmanager.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 7
//

// <00E42EF6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphlogmanager.cpp:12
// function calls: 15
void CAnimGraphLogManager::AddListener(IAnimGraphLogListener* pListener)
{
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 14
	CUtlMemory<IAnimGraphLogListener::NumAllocated(); // 1196
	CUtlMemory<IAnimGraphLogListener::Base(); // 112
	CUtlVectorBase<IAnimGraphLogListener::Base(); // 368
	CUtlVectorBase<IAnimGraphLogListener::ResetDbgInfo(); // 824
	CUtlMemory<IAnimGraphLogListener::IsGrowable(); // 823
	CUtlMemory<IAnimGraphLogListener::IsExternallyAllocated(); // 859
	CUtlMemory<IAnimGraphLogListener::IsExternallyAllocated(); // 861
	CUtlMemory<IAnimGraphLogListener::Grow(
		int num);  // 806
	CUtlVectorBase<IAnimGraphLogListener::GrowMemory(
			int num);  // 1198
	CUtlMemory<IAnimGraphLogListener::operator[](
			int i);  // 602
	CUtlVectorBase<IAnimGraphLogListener::Element(
		int i);  // 1201
	CopyConstruct<IAnimGraphLogListener*>(IAnimGraphLogListener** pMemory,
						IAnimGraphLogListener* const& src);  // 1201
	CUtlVectorBase<IAnimGraphLogListener::AddToTail(
			IAnimGraphLogListener* const& src);  // 15
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 16
} /* size: 347, inline expansions: 15 (818 bytes) */

// <00E42B64> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphlogmanager.cpp:21
// variable: 1
// function calls: 15
void CAnimGraphLogManager::RemoveListener(IAnimGraphLogListener* pListener)
{
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 23
	{
		int i; // 1531
		CUtlVectorBase<IAnimGraphLogListener::Count(); // 1531
		CUtlMemory<IAnimGraphLogListener::operator[](
				int i);  // 609
		CUtlVectorBase<IAnimGraphLogListener::Element(
			int i);  // 1533
	}
	CUtlVectorBase<IAnimGraphLogListener::Find(
		IAnimGraphLogListener* const& src);  // 1617
	CUtlMemory<IAnimGraphLogListener::operator[](
			int i);  // 602
	CUtlVectorBase<IAnimGraphLogListener::Element(
		int i);  // 1114
	CUtlMemory<IAnimGraphLogListener::operator[](
			int i);  // 602
	CUtlVectorBase<IAnimGraphLogListener::Element(
		int i);  // 1114
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 115
	V_memmove(void* dest,
			const void* src,
			size_t count);  // 1114
	CUtlVectorBase<IAnimGraphLogListener::ShiftElementsLeft(
				int elem,
				int num);  // 1608
	CUtlVectorBase<IAnimGraphLogListener::Remove(
		int elem);  // 1620
	CUtlVectorBase<IAnimGraphLogListener::FindAndRemove(
			IAnimGraphLogListener* const& src);  // 24
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 25
} /* size: 250, inline expansions: 12 (444 bytes) */

// <00E429FC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphlogmanager.cpp:30
// variables: 2
// function calls: 2
void CAnimGraphLogManager::LogMessage(LogSeverity severity, const AnimNodeLocation_t& nodeLocation, const char* pMsg, ...)
{
	CUtlString errorString; // 32
	va_list marker; // 34
	CUtlString::CUtlString(); // 32
	CUtlString::~CUtlString(); // 40
} /* size: 0, variables: 2, inline expansions: 2 (0 bytes) */

// <00E4287D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphlogmanager.cpp:42
// variables: 2
// function calls: 2
void CAnimGraphLogManager::LogMessage(const LoggingMetaData_t& metaData, LogSeverity severity, const AnimNodeLocation_t& nodeLocation, const char* pMsg, ...)
{
	CUtlString errorString; // 44
	va_list marker; // 46
	CUtlString::CUtlString(); // 44
	CUtlString::~CUtlString(); // 52
} /* size: 272, variables: 2, inline expansions: 2 (33 bytes) */

// <00E42717> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphlogmanager.cpp:55
// variable: 1
// function calls: 2
void CAnimGraphLogManager::vLogMessage(LogSeverity severity, const AnimNodeLocation_t& nodeLocation, const char* pMsg, typedef __va_list_tag __va_list_tag* args)
{
	CUtlString errorString; // 57
	CUtlString::CUtlString(); // 57
	CUtlString::~CUtlString(); // 61
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <00E4258E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphlogmanager.cpp:63
// variable: 1
// function calls: 2
void CAnimGraphLogManager::vLogMessage(const LoggingMetaData_t& metaData, LogSeverity severity, const AnimNodeLocation_t& nodeLocation, const char* pMsg, typedef __va_list_tag __va_list_tag* args)
{
	CUtlString errorString; // 65
	CUtlString::CUtlString(); // 65
	CUtlString::~CUtlString(); // 69
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <00E42160> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphlogmanager.cpp:71
// variables: 2
// function calls: 13
void CAnimGraphLogManager::SendLogMessage(const LoggingMetaData_t* pMetaData, LogSeverity severity, const AnimNodeLocation_t& nodeLocation, const CUtlString& msg)
{
	{
		int i; // 78
		{
			IAnimGraphLogListener* pListener; // 80
			CUtlMemory<IAnimGraphLogListener::operator[](
					int i);  // 588
			CUtlVectorBase<IAnimGraphLogListener::operator[](
					int i);  // 80
		}
		CUtlVectorBase<IAnimGraphLogListener::Count(); // 78
	}
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 73
	CUtlVectorBase<IAnimGraphLogListener::Count(); // 135
	CUtlVectorBase<IAnimGraphLogListener::IsEmpty(); // 76
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 101
	CUtlString::Get(); // 99
	CUtlString::String(); // 90
	CUtlString::Get(); // 99
	CUtlString::String(); // 93
	CUtlString::Get(); // 99
	CUtlString::String(); // 97
} /* size: 404, inline expansions: 10 (138 bytes) */

