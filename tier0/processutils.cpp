
//
// tier0/processutils.cpp
//
//	referenced by: libtier0.so
//
//	functions: 82
//	classes: 3
//	struct: 1
//

// <003E029B> tier0/processutils.cpp:50
void CProcessPipeRead::CProcessPipeRead()
{
} /* size: 0 */

// <003E027F> tier0/processutils.cpp:50
inline void CProcessPipeRead::CProcessPipeRead()
{
} /* size: 0 */

// <003E0268> tier0/processutils.cpp:50
void CProcessPipeRead::~CProcessPipeRead()
{
} /* size: 0 */

// <003E024C> tier0/processutils.cpp:50
inline void CProcessPipeRead::~CProcessPipeRead()
{
} /* size: 0 */

// <003D6D3C> tier0/processutils.cpp:50
// member functions: 32
// member variables: 4
// vtable entries: 5
// class size: 104
class CProcessPipeRead : public IPipeRead {
public:
	/* class IPipeRead <ancestor>; */ /* 0 8 */
	void CProcessPipeRead(CProcessPipeRead* , CProcessPipeRead& );
	void CProcessPipeRead(CProcessPipeRead* , const CProcessPipeRead& );
	void CProcessPipeRead(CProcessPipeRead* );
	void ~CProcessPipeRead(CProcessPipeRead* );
	/* tier0/processutils.cpp:312 */
	virtual int GetNumBytesAvailable(CProcessPipeRead* );
	/* tier0/processutils.cpp:321 */
	virtual void ReadAvailable(CProcessPipeRead* , CUtlString& , int32);
	/* tier0/processutils.cpp:336 */
	virtual void ReadAvailable(CProcessPipeRead* , CUtlBuffer* , int);
	/* tier0/processutils.cpp:355 */
	virtual void Read(CProcessPipeRead* , CUtlString& , int32);
	/* tier0/processutils.cpp:386 */
	virtual void ReadLine(CProcessPipeRead* , CUtlString& );
	/* tier0/processutils.cpp:287 */
	bool Init(CProcessPipeRead* , CProcess* , OSFILEHANDLE);
	/* tier0/processutils.cpp:307 */
	bool IsValid(const CProcessPipeRead* );
	/* tier0/processutils.cpp:433 */
	int CacheOutput(CProcessPipeRead* );
protected:
	CProcess * m_pProcess; /* 8 8 */
	OSFILEHANDLE m_hRead; /* 16 4 */
	CUtlBuffer m_CachedOutput; /* 24 80 */
	/* tier0/processutils.cpp:491 */
	int GetBytesToRead(CProcessPipeRead* , int);
	/* tier0/processutils.cpp:513 */
	int GetProcessOutput(CProcessPipeRead* , void* , int);
	/* tier0/processutils.cpp:530 */
	int GetActualProcessOutput(CProcessPipeRead* , void* , int);
	/* tier0/processutils.cpp:568 */
	bool WaitForOutput(CProcessPipeRead* );
	void CProcessPipeRead(class CProcessPipeRead *, class CProcessPipeRead &); /* linkage=_ZN16CProcessPipeReadC4EOS_ */
	void CProcessPipeRead(class CProcessPipeRead *, const class CProcessPipeRead  &); /* linkage=_ZN16CProcessPipeReadC4ERKS_ */
	void CProcessPipeRead(class CProcessPipeRead *); /* linkage=_ZN16CProcessPipeReadC4Ev */
	void ~CProcessPipeRead(class CProcessPipeRead *); /* linkage=_ZN16CProcessPipeReadD4Ev */
	/* <3e2db9> tier0/processutils.cpp:312 */
	virtual int GetNumBytesAvailable(class CProcessPipeRead *); /* linkage=_ZN16CProcessPipeRead20GetNumBytesAvailableEv */
	virtual void ReadAvailable(class CProcessPipeRead *, class CUtlString &, int32); /* linkage=_ZN16CProcessPipeRead13ReadAvailableER10CUtlStringi */
	virtual void ReadAvailable(class CProcessPipeRead *, class CUtlBuffer *, int); /* linkage=_ZN16CProcessPipeRead13ReadAvailableEP10CUtlBufferi */
	virtual void Read(class CProcessPipeRead *, class CUtlString &, int32); /* linkage=_ZN16CProcessPipeRead4ReadER10CUtlStringi */
	virtual void ReadLine(class CProcessPipeRead *, class CUtlString &); /* linkage=_ZN16CProcessPipeRead8ReadLineER10CUtlString */
	/* <3e2d08> tier0/processutils.cpp:287 */
	bool Init(class CProcessPipeRead *, class CProcess *, OSFILEHANDLE); /* linkage=_ZN16CProcessPipeRead4InitEP8CProcessi */
	/* <3e2d90> tier0/processutils.cpp:307 */
	bool IsValid(const class CProcessPipeRead  *); /* linkage=_ZNK16CProcessPipeRead7IsValidEv */
	int CacheOutput(class CProcessPipeRead *); /* linkage=_ZN16CProcessPipeRead11CacheOutputEv */
	/* <3e2dfe> tier0/processutils.cpp:491 */
	int GetBytesToRead(class CProcessPipeRead *, int); /* linkage=_ZN16CProcessPipeRead14GetBytesToReadEi */
	int GetProcessOutput(class CProcessPipeRead *, void *, int); /* linkage=_ZN16CProcessPipeRead16GetProcessOutputEPvi */
	/* <3e2f49> tier0/processutils.cpp:530 */
	int GetActualProcessOutput(class CProcessPipeRead *, void *, int); /* linkage=_ZN16CProcessPipeRead22GetActualProcessOutputEPvi */
	bool WaitForOutput(class CProcessPipeRead *); /* linkage=_ZN16CProcessPipeRead13WaitForOutputEv */
};

// <003E0367> tier0/processutils.cpp:91
void ProcessInfo_t::ProcessInfo_t()
{
} /* size: 0 */

// <003E034B> tier0/processutils.cpp:91
inline void ProcessInfo_t::ProcessInfo_t()
{
} /* size: 0 */

// <003E0334> tier0/processutils.cpp:91
void ProcessInfo_t::~ProcessInfo_t()
{
} /* size: 0 */

// <003E0318> tier0/processutils.cpp:91
inline void ProcessInfo_t::~ProcessInfo_t()
{
} /* size: 0 */

// <003E022B> tier0/processutils.cpp:91
inline void ProcessInfo_t::operator=(const ProcessInfo_t &)
{
} /* size: 0 */

// <003D32C7> tier0/processutils.cpp:91
// member functions: 3
// member variables: 10
// struct size: 48
struct ProcessInfo_t {
	OSFILEHANDLE m_hChildStdinRd; /* 0 4 */
	OSFILEHANDLE m_hChildStdinWr; /* 4 4 */
	OSFILEHANDLE m_hChildStdoutRd; /* 8 4 */
	OSFILEHANDLE m_hChildStdoutWr; /* 12 4 */
	OSFILEHANDLE m_hChildStderrRd; /* 16 4 */
	OSFILEHANDLE m_hChildStderrWr; /* 20 4 */
	ProcessHandle_t m_hProcess; /* 24 4 */
	CUtlString m_CommandLine; /* 32 8 */
	int m_fFlags; /* 40 4 */
	uint32 m_nProcessId; /* 44 4 */
	ProcessInfo_t& operator=(ProcessInfo_t* , const ProcessInfo_t& );
	void ~ProcessInfo_t(ProcessInfo_t* );
	void ProcessInfo_t(ProcessInfo_t* );
};

// <003DF9D8> tier0/processutils.cpp:110
// function calls: 16
void CProcess::~CProcess()
{
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 50
	CProcessPipeRead::~CProcessPipeRead(); // 110
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 50
	CProcessPipeRead::~CProcessPipeRead(); // 110
	CUtlString::~CUtlString(); // 91
	ProcessInfo_t::~ProcessInfo_t(); // 110
} /* size: 134, inline expansions: 16 (300 bytes) */

// <003DF64C> tier0/processutils.cpp:110
// function calls: 18
void CProcess::~CProcess()
{
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 50
	CProcessPipeRead::~CProcessPipeRead(); // 110
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 50
	CProcessPipeRead::~CProcessPipeRead(); // 110
	CUtlString::~CUtlString(); // 91
	ProcessInfo_t::~ProcessInfo_t(); // 110
	IProcess::~IProcess(); // 110
	CProcess::~CProcess(); // 110
} /* size: 137, inline expansions: 18 (395 bytes) */

// <003DF630> tier0/processutils.cpp:110
inline void CProcess::~CProcess()
{
} /* size: 0 */

// <003D4226> tier0/processutils.cpp:110
// member functions: 32
// member variables: 10
// vtable entries: 10
// class size: 288
class CProcess : public IProcess {
public:
	/* class IProcess <ancestor>; */ /* 0 8 */
	void CProcess(CProcess* , CProcess& );
	void CProcess(CProcess* , const CProcess& );
	/* tier0/processutils.cpp:673 */
	void CProcess(CProcess* , CProcessUtils* , const ProcessInfo_t& );
	/* tier0/processutils.cpp:695 */
	virtual void SetPriority(CProcess* , ProcessPriority_t);
	/* tier0/processutils.cpp:714 */
	virtual void Release(CProcess* );
	/* tier0/processutils.cpp:740 */
	virtual void Abort(CProcess* );
	/* tier0/processutils.cpp:748 */
	virtual bool IsComplete(CProcess* );
	/* tier0/processutils.cpp:769 */
	virtual int WaitUntilComplete(CProcess* );
	/* tier0/processutils.cpp:806 */
	virtual int WriteStdin(CProcess* , char* , int);
	/* tier0/processutils.cpp:822 */
	virtual IPipeRead* GetStdout(CProcess* );
	/* tier0/processutils.cpp:827 */
	virtual IPipeRead* GetStderr(CProcess* );
	/* tier0/processutils.cpp:832 */
	virtual int GetExitCode(CProcess* );
	/* tier0/processutils.cpp:896 */
	virtual bool DidCrash(CProcess* );
	/* tier0/processutils.cpp:131 */
	void SetHasCrashMonitor(CProcess* , bool);
	/* tier0/processutils.cpp:853 */
	bool WaitForExit(CProcess* , uint);
	ProcessInfo_t m_Info; /* 8 48 */
	CProcessPipeRead m_StdoutRead; /* 56 104 */
	CProcessPipeRead m_StderrRead; /* 160 104 */
	CProcessUtils * m_pProcessUtils; /* 264 8 */
	bool m_bHasCrashMonitor; /* 272 1 */
	bool m_bProcessedInitialBreak; /* 273 1 */
	bool m_bHaveExitCode; /* 274 1 */
	int32 m_nExitCode; /* 276 4 */
	bool m_bDidCrash; /* 280 1 */
	virtual void ~CProcess(CProcess* );
	void CProcess(class CProcess *, class CProcess &); /* linkage=_ZN8CProcessC4EOS_ */
	void CProcess(class CProcess *, const class CProcess  &); /* linkage=_ZN8CProcessC4ERKS_ */
	void CProcess(class CProcess *, class CProcessUtils *, const class ProcessInfo_t  &); /* linkage=_ZN8CProcessC4EP13CProcessUtilsRK13ProcessInfo_t */
	/* <3e23fa> tier0/processutils.cpp:695 */
	virtual void SetPriority(class CProcess *, enum ProcessPriority_t); /* linkage=_ZN8CProcess11SetPriorityE17ProcessPriority_t */
	virtual void Release(class CProcess *); /* linkage=_ZN8CProcess7ReleaseEv */
	/* <3e24bc> tier0/processutils.cpp:740 */
	virtual void Abort(class CProcess *); /* linkage=_ZN8CProcess5AbortEv */
	/* <3e25e2> tier0/processutils.cpp:748 */
	virtual bool IsComplete(class CProcess *); /* linkage=_ZN8CProcess10IsCompleteEv */
	virtual int WaitUntilComplete(class CProcess *); /* linkage=_ZN8CProcess17WaitUntilCompleteEv */
	virtual int WriteStdin(class CProcess *, char *, int); /* linkage=_ZN8CProcess10WriteStdinEPci */
	/* <3e234e> tier0/processutils.cpp:822 */
	virtual class IPipeRead * GetStdout(class CProcess *); /* linkage=_ZN8CProcess9GetStdoutEv */
	virtual class IPipeRead * GetStderr(class CProcess *); /* linkage=_ZN8CProcess9GetStderrEv */
	/* <3e2945> tier0/processutils.cpp:832 */
	virtual int GetExitCode(class CProcess *); /* linkage=_ZN8CProcess11GetExitCodeEv */
	virtual bool DidCrash(class CProcess *); /* linkage=_ZN8CProcess8DidCrashEv */
	void SetHasCrashMonitor(class CProcess *, bool); /* linkage=_ZN8CProcess18SetHasCrashMonitorEb */
	bool WaitForExit(class CProcess *, uint); /* linkage=_ZN8CProcess11WaitForExitEj */
	virtual void ~CProcess(class CProcess *); /* linkage=_ZN8CProcessD4Ev */
};

// <003D7DB3> tier0/processutils.cpp:171
// variables: 2
// function calls: 6
void CProcessUtils::~CProcessUtils()
{
	CUtlString::~CUtlString(); // 171
	CUtlString::~CUtlString(); // 171
	{
		BlockHeader_t* pbh; // 338
		{
			BlockHeader_t* pFree; // 340
		}
	}
	CUtlFixedMemory<UtlLinkedListElem_t<CProcess::Purge(); // 167
	CUtlFixedMemory<UtlLinkedListElem_t<CProcess::~CUtlFixedMemory(); // 462
	CUtlLinkedList<CProcess::~CUtlLinkedList(); // 400
	CUtlFixedLinkedList<CProcess::~CUtlFixedLinkedList(); // 171
} /* size: 110, inline expansions: 6 (165 bytes) */

// <003D7D97> tier0/processutils.cpp:171
inline void CProcessUtils::~CProcessUtils()
{
} /* size: 0 */

// <003D466E> tier0/processutils.cpp:171
// member functions: 62
// member variables: 9
// vtable entries: 17
// class size: 152
class CProcessUtils : public CTier0AppSystem<IProcessUtils, 0> {
public:
	/* class CTier0AppSystem<IProcessUtils, 0> <ancestor>; */ /* 0 8 */
	void CProcessUtils(CProcessUtils* , CProcessUtils& );
	void CProcessUtils(CProcessUtils* , const CProcessUtils& );
	/* tier0/processutils.cpp:902 */
	void CProcessUtils(CProcessUtils* );
	/* tier0/processutils.cpp:928 */
	virtual InitReturnVal_t Init(CProcessUtils* );
	/* tier0/processutils.cpp:945 */
	virtual void Shutdown(CProcessUtils* );
	/* tier0/processutils.cpp:1342 */
	virtual IProcess* StartProcess(CProcessUtils* , const char* , int, const char* );
	/* tier0/processutils.cpp:1413 */
	virtual IProcess* StartProcess(CProcessUtils* , int, const char** , int, const char* );
	/* tier0/processutils.cpp:1347 */
	virtual IProcess* StartProcessWithEnv(CProcessUtils* , const char* , int, const char* , const char* );
	/* tier0/processutils.cpp:1428 */
	virtual int SimpleRunProcess(CProcessUtils* , const char* , const char* , CUtlString* );
	/* tier0/processutils.cpp:1651 */
	virtual bool OpenURL(CProcessUtils* , const char* );
	/* tier0/processutils.cpp:1656 */
	virtual bool OpenFileWithAssociatedApplication(CProcessUtils* , const char* );
	/* tier0/processutils.cpp:1661 */
	virtual const char* GetMiniDumpPath(CProcessUtils* );
	/* tier0/processutils.cpp:1666 */
	virtual void SetMiniDumpPath(CProcessUtils* , const char* );
	/* tier0/processutils.cpp:1671 */
	virtual const char* GetMiniDumpPrefix(CProcessUtils* );
	/* tier0/processutils.cpp:1676 */
	virtual void SetMiniDumpPrefix(CProcessUtils* , const char* );
	/* tier0/processutils.cpp:1681 */
	virtual uint32 GetMiniDumpFlags(CProcessUtils* );
	/* tier0/processutils.cpp:1686 */
	virtual void SetMiniDumpFlags(CProcessUtils* , uint32);
	/* tier0/processutils.cpp:1691 */
	virtual int GetNumMiniDumpsWritten(CProcessUtils* );
	/* tier0/processutils.cpp:1696 */
	virtual int GetMiniDumpWriteLimit(CProcessUtils* );
	/* tier0/processutils.cpp:1701 */
	virtual void SetMiniDumpWriteLimit(CProcessUtils* , int);
	/* tier0/processutils.cpp:977 */
	void OnProcessDelete(CProcessUtils* , CProcess* );
	/* tier0/processutils.cpp:1706 */
	bool WriteMiniDump(CProcessUtils* , IProcess* , bool);
	/* tier0/processutils.cpp:205 */
	void LockProcessList(CProcessUtils* );
	/* tier0/processutils.cpp:209 */
	void UnlockProcessList(CProcessUtils* );
	/* tier0/processutils.cpp:1815 */
	CProcess* FindProcess(CProcessUtils* , uint32);
private:
	/* tier0/processutils.cpp:984 */
	CProcess* CreateProcess(CProcessUtils* , ProcessInfo_t& , int, const char* , const char* );
	CThreadFastMutex m_ProcessListMutex; /* 8 24 */
	CUtlFixedLinkedList<CProcess*> m_Processes; /* 32 80 */
	bool m_bInitialized; /* 112 1 */
	/* tier0/processutils.cpp:1474 */
	void EnsureChildProcessKillOnParentEnd(CProcessUtils* , ProcessHandle_t);
	/* tier0/processutils.cpp:1511 */
	void CleanupSharedKillJob(CProcessUtils* );
	/* tier0/processutils.cpp:1788 */
	bool WriteMiniDumpIfEnabled(CProcessUtils* , CProcess* , bool);
	/* tier0/processutils.cpp:1803 */
	CProcess* FindProcessWithListLock(CProcessUtils* , uint32);
	CUtlString m_sMiniDumpPath; /* 120 8 */
	CUtlString m_sMiniDumpPrefix; /* 128 8 */
	uint32 m_nMiniDumpFlags; /* 136 4 */
	int m_nNumMiniDumps; /* 140 4 */
	int m_nMiniDumpWriteLimit; /* 144 4 */
	void ~CProcessUtils(CProcessUtils* );
	void CProcessUtils(class CProcessUtils *, class CProcessUtils &); /* linkage=_ZN13CProcessUtilsC4EOS_ */
	void CProcessUtils(class CProcessUtils *, const class CProcessUtils  &); /* linkage=_ZN13CProcessUtilsC4ERKS_ */
	void CProcessUtils(class CProcessUtils *); /* linkage=_ZN13CProcessUtilsC4Ev */
	/* <3e2531> tier0/processutils.cpp:928 */
	virtual enum InitReturnVal_t Init(class CProcessUtils *); /* linkage=_ZN13CProcessUtils4InitEv */
	virtual void Shutdown(class CProcessUtils *); /* linkage=_ZN13CProcessUtils8ShutdownEv */
	/* <3e2377> tier0/processutils.cpp:1342 */
	virtual class IProcess * StartProcess(class CProcessUtils *, const char  *, int, const char  *); /* linkage=_ZN13CProcessUtils12StartProcessEPKciS1_ */
	virtual class IProcess * StartProcess(class CProcessUtils *, int, const char  * *, int, const char  *); /* linkage=_ZN13CProcessUtils12StartProcessEiPPKciS1_ */
	virtual class IProcess * StartProcessWithEnv(class CProcessUtils *, const char  *, int, const char  *, const char  *); /* linkage=_ZN13CProcessUtils19StartProcessWithEnvEPKciS1_S1_ */
	virtual int SimpleRunProcess(class CProcessUtils *, const char  *, const char  *, class CUtlString *); /* linkage=_ZN13CProcessUtils16SimpleRunProcessEPKcS1_P10CUtlString */
	virtual bool OpenURL(class CProcessUtils *, const char  *); /* linkage=_ZN13CProcessUtils7OpenURLEPKc */
	virtual bool OpenFileWithAssociatedApplication(class CProcessUtils *, const char  *); /* linkage=_ZN13CProcessUtils33OpenFileWithAssociatedApplicationEPKc */
	virtual const char  * GetMiniDumpPath(class CProcessUtils *); /* linkage=_ZN13CProcessUtils15GetMiniDumpPathEv */
	virtual void SetMiniDumpPath(class CProcessUtils *, const char  *); /* linkage=_ZN13CProcessUtils15SetMiniDumpPathEPKc */
	virtual const char  * GetMiniDumpPrefix(class CProcessUtils *); /* linkage=_ZN13CProcessUtils17GetMiniDumpPrefixEv */
	virtual void SetMiniDumpPrefix(class CProcessUtils *, const char  *); /* linkage=_ZN13CProcessUtils17SetMiniDumpPrefixEPKc */
	virtual uint32 GetMiniDumpFlags(class CProcessUtils *); /* linkage=_ZN13CProcessUtils16GetMiniDumpFlagsEv */
	virtual void SetMiniDumpFlags(class CProcessUtils *, uint32); /* linkage=_ZN13CProcessUtils16SetMiniDumpFlagsEj */
	virtual int GetNumMiniDumpsWritten(class CProcessUtils *); /* linkage=_ZN13CProcessUtils22GetNumMiniDumpsWrittenEv */
	virtual int GetMiniDumpWriteLimit(class CProcessUtils *); /* linkage=_ZN13CProcessUtils21GetMiniDumpWriteLimitEv */
	virtual void SetMiniDumpWriteLimit(class CProcessUtils *, int); /* linkage=_ZN13CProcessUtils21SetMiniDumpWriteLimitEi */
	void OnProcessDelete(class CProcessUtils *, class CProcess *); /* linkage=_ZN13CProcessUtils15OnProcessDeleteEP8CProcess */
	/* <3e3007> tier0/processutils.cpp:1706 */
	bool WriteMiniDump(class CProcessUtils *, class IProcess *, bool); /* linkage=_ZN13CProcessUtils13WriteMiniDumpEP8IProcessb */
	void LockProcessList(class CProcessUtils *); /* linkage=_ZN13CProcessUtils15LockProcessListEv */
	void UnlockProcessList(class CProcessUtils *); /* linkage=_ZN13CProcessUtils17UnlockProcessListEv */
	class CProcess * FindProcess(class CProcessUtils *, uint32); /* linkage=_ZN13CProcessUtils11FindProcessEj */
	class CProcess * CreateProcess(class CProcessUtils *, class ProcessInfo_t &, int, const char  *, const char  *); /* linkage=_ZN13CProcessUtils13CreateProcessER13ProcessInfo_tiPKcS3_ */
	void EnsureChildProcessKillOnParentEnd(class CProcessUtils *, ProcessHandle_t); /* linkage=_ZN13CProcessUtils33EnsureChildProcessKillOnParentEndEi */
	/* <3e2fde> tier0/processutils.cpp:1511 */
	void CleanupSharedKillJob(class CProcessUtils *); /* linkage=_ZN13CProcessUtils20CleanupSharedKillJobEv */
	bool WriteMiniDumpIfEnabled(class CProcessUtils *, class CProcess *, bool); /* linkage=_ZN13CProcessUtils22WriteMiniDumpIfEnabledEP8CProcessb */
	/* <3e303e> tier0/processutils.cpp:1803 */
	class CProcess * FindProcessWithListLock(class CProcessUtils *, uint32); /* linkage=_ZN13CProcessUtils23FindProcessWithListLockEj */
	void ~CProcessUtils(class CProcessUtils *); /* linkage=_ZN13CProcessUtilsD4Ev */
};

// <003E1A8E> tier0/processutils.cpp:205
inline void CProcessUtils::LockProcessList()
{
} /* size: 0 */

// <003E1A75> tier0/processutils.cpp:209
inline void CProcessUtils::UnlockProcessList()
{
} /* size: 0 */

// <003E1A53> tier0/processutils.cpp:256
void* __CreateCProcessUtilsIProcessUtils_interface(void)
{
} /* size: 12 */

// <003E1980> tier0/processutils.cpp:258
// function calls: 3
IProcessUtils* GetProcessUtilsDirectly(void)
{
	CTier0AppSystem<IProcessUtils, 0>::Init(); // 933
	CProcessUtils::Init(); // 928
	CProcessUtils::Init(); // 260
} /* size: 0, inline expansions: 3 (0 bytes) */

// <003E194E> tier0/processutils.cpp:266
char* GetErrorString(char* pBuf, int nBufLen)
{
} /* size: 0 */

// <003E2D08> tier0/processutils.cpp:287
// variable: 1
void CProcessPipeRead::Init(CProcess* pProcess, OSFILEHANDLE hFile)
{
	int nFlags; // 297
} /* size: 0, variables: 1 */

// <003E2D90> tier0/processutils.cpp:307
void CProcessPipeRead::IsValid()
{
} /* size: 0 */

// <003E2DB9> tier0/processutils.cpp:312
void CProcessPipeRead::GetNumBytesAvailable()
{
} /* size: 9 */

// <003E177C> tier0/processutils.cpp:321
// variables: 5
void CProcessPipeRead::ReadAvailable(CUtlString& sStr, int32 nMaxBytes)
{
	int nToRead; // 323
	const char   __FUNCTION__; // 53729
	{
		char* pOut; // 327
		int nBytesGotten; // 328
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 329
		}
	}
} /* size: 0, variables: 2 */

// <003E14C1> tier0/processutils.cpp:336
// variables: 6
// function calls: 5
void CProcessPipeRead::ReadAvailable(CUtlBuffer* pOutBuffer, int nMaxBytes)
{
	int nToRead; // 338
	const char   __FUNCTION__; // 53729
	{
		char* pOut; // 345
		int nBytesGotten; // 346
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 344
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 347
		}
		CUtlBuffer::IsText(); // 344
		CUtlBuffer::ContainsCRLF(); // 344
		{
		}
		CUtlMemory<unsigned char, int>::Base(); // 1484
		CUtlBuffer::Base(); // 1562
		CUtlBuffer::AccessForDirectRead(
					int nBytes);  // 345
	}
} /* size: 0, variables: 2 */

// <003E1233> tier0/processutils.cpp:355
// variables: 5
// function calls: 5
void CProcessPipeRead::Read(CUtlString& sStr, int32 nBytes)
{
	int nBytesLeftToRead; // 359
	const char   __FUNCTION__; // 49111
	{
		int nToRead; // 362
		CUtlString sTemp; // 377
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 379
		}
		CUtlString::CUtlString(); // 377
		V_strlen(const char* str); // 393
		CUtlString::Length(); // 379
		CUtlString::~CUtlString(); // 383
	}
	CUtlString::Clear(); // 357
} /* size: 0, variables: 2, inline expansions: 1 (8 bytes) */

// <003E0E4A> tier0/processutils.cpp:386
// variables: 5
// function calls: 12
void CProcessPipeRead::ReadLine(CUtlString& sStr)
{
	{
		char* pStr; // 400
		int nBytes; // 401
		int i; // 407
		{
			int nBytesToRead; // 417
			CUtlString sTemp; // 421
			CUtlString::CUtlString(
					const char* pString,
					int length);  // 421
			CUtlBuffer::TellGet(); // 615
			CUtlBuffer::GetBytesRemaining(); // 425
			CUtlString::~CUtlString(); // 429
			CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
			CUtlMemory<unsigned char, int>::Purge(); // 903
			CUtlMemory<unsigned char, int>::Purge(); // 1551
			CUtlBuffer::Purge(); // 426
		}
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 624
		CUtlBuffer::PeekGet(
			int offset);  // 400
		CUtlBuffer::GetBytesRemaining(); // 401
	}
	CUtlString::Clear(); // 388
} /* size: 408, inline expansions: 1 (12 bytes) */

// <003E0A2A> tier0/processutils.cpp:433
// variables: 4
// function calls: 13
void CProcessPipeRead::CacheOutput()
{
	const char   __FUNCTION__; // 15294
	int nToRead; // 464
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 437
	}
	{
		int nBytesRead; // 484
		CUtlBuffer::TellPut(); // 483
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 1166
		CUtlBuffer::PeekPut(
			int offset);  // 484
		{
		}
		CProcessPipeRead::GetActualProcessOutput(
					void* pBuf,
					int nBufLen);  // 484
	}
	CUtlBuffer::TellGet(); // 448
	CUtlBuffer::TellGet(); // 615
	CUtlBuffer::GetBytesRemaining(); // 488
	CUtlBuffer::GetBytesRemaining(); // 1499
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 624
	CUtlBuffer::PeekGet(
		int offset);  // 1506
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 99
	V_memmove(void* dest,
			const void* src,
			int count);  // 1506
	CUtlBuffer::PackGet(); // 450
} /* size: 0, variables: 2, inline expansions: 9 (161 bytes) */

// <003E2DFE> tier0/processutils.cpp:491
// function calls: 5
void CProcessPipeRead::GetBytesToRead(int nMaxBytes)
{
	{
	}
	CUtlBuffer::TellGet(); // 615
	CUtlBuffer::GetBytesRemaining(); // 499
	CProcessPipeRead::GetNumBytesAvailable(); // 505
	Min<int>(const int& val1,
		const int& val2);  // 505
	CProcessPipeRead::GetBytesToRead(
			int nMaxBytes);  // 491
} /* size: 0, inline expansions: 5 (70 bytes) */

// <003E09B0> tier0/processutils.cpp:491
// variables: 2
void CProcessPipeRead::GetBytesToRead(int nMaxBytes)
{
	const char   __FUNCTION__; // 18585
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 493
	}
} /* size: 0, variables: 1 */

// <003E06AB> tier0/processutils.cpp:513
// variables: 3
// function calls: 10
void CProcessPipeRead::GetProcessOutput(void* pBuf, int nBytes)
{
	int nCachedBytes; // 515
	int nPipeBytes; // 516
	int nPipedBytesRead; // 526
	CUtlBuffer::TellGet(); // 615
	CUtlBuffer::GetBytesRemaining(); // 515
	Min<int>(const int& val1,
		const int& val2);  // 515
	CUtlBuffer::TellGet(); // 615
	CUtlBuffer::GetBytesRemaining(); // 520
	{
	}
	CProcessPipeRead::GetActualProcessOutput(
				void* pBuf,
				int nBufLen);  // 526
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 1551
	CUtlBuffer::Purge(); // 522
} /* size: 0, variables: 3, inline expansions: 10 (235 bytes) */

// <003E2F49> tier0/processutils.cpp:530
// variables: 2
void CProcessPipeRead::GetActualProcessOutput(void* pBuf, int nBufLen)
{
	int32 nBytesRead; // 542
	int nErr; // 543
	{
	}
} /* size: 0, variables: 2 */

// <003E060A> tier0/processutils.cpp:530
// variables: 4
void CProcessPipeRead::GetActualProcessOutput(void* pBuf, int nBufLen)
{
	const char   __FUNCTION__; // 17690
	int32 nBytesRead; // 542
	int nErr; // 543
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 534
	}
} /* size: 0, variables: 3 */

// <003E03B1> tier0/processutils.cpp:568
// variables: 5
// function calls: 4
void CProcessPipeRead::WaitForOutput()
{
	const char   __FUNCTION__; // 53729
	int nRet; // 595
	pollfd Poll; // 596
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 572
	}
	{
		char buf; // 618
		V_strncpy<int>(char* pDest,
				const char* pSrc,
				int maxLenInChars);  // 277
		GetErrorString(char* pBuf,
				int nBufLen);  // 619
		CUtlString::Get(); // 619
	}
	poll(pollfd* __fds,
		nfds_t __nfds,
		int __timeout);  // 603
} /* size: 0, variables: 3, inline expansions: 1 (22 bytes) */

// <003DFDC3> tier0/processutils.cpp:673
// function calls: 14
void CProcess::CProcess(CProcessUtils* pProcessUtils, const ProcessInfo_t& info)
{
	{
		{
		}
		{
		}
	}
	{
		IProcess::IProcess(); // 673
		IPipeRead::IPipeRead(); // 50
		CProcessPipeRead::CProcessPipeRead(); // 673
		CUtlString::CUtlString(); // 91
		ProcessInfo_t::ProcessInfo_t(); // 673
		IPipeRead::IPipeRead(); // 50
		CProcessPipeRead::CProcessPipeRead(); // 673
		V_strlen(const char* str); // 393
		CUtlString::Length(); // 161
		CUtlString::Get(); // 161
		CUtlString::operator=(
				const CUtlString& src);  // 91
		ProcessInfo_t::operator=(
				const ProcessInfo_t  &);  // 676
		CProcessPipeRead::Init(
			CProcess* pProcess,
			OSFILEHANDLE hFile);  // 678
		{
		}
		CProcessPipeRead::Init(
			CProcess* pProcess,
			OSFILEHANDLE hFile);  // 682
		{
		}
	}
} /* size: 0 */

// <003DFD4F> tier0/processutils.cpp:673
// variables: 3
void CProcess::CProcess(CProcessUtils* pProcessUtils, const ProcessInfo_t& info)
{
	const char   __FUNCTION__; // 54672
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 680
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 684
	}
} /* size: 0, variables: 1 */

// <003E23FA> tier0/processutils.cpp:695
// variable: 1
// function call: 1
void CProcess::SetPriority(ProcessPriority_t priority)
{
	ThreadProcessPriority_t ePriority; // 697
	{
	}
	CProcess::SetPriority(
			ProcessPriority_t priority);  // 695
} /* size: 0, variables: 1, inline expansions: 1 (26 bytes) */

// <003DFCE3> tier0/processutils.cpp:695
// variables: 3
void CProcess::SetPriority(ProcessPriority_t priority)
{
	ThreadProcessPriority_t ePriority; // 697
	const char   __FUNCTION__; // 15294
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 707
	}
} /* size: 0, variables: 2 */

// <003DF4F3> tier0/processutils.cpp:714
// variable: 1
// function calls: 2
void CProcess::Release()
{
	ProcessInfo_t& info; // 721
	CProcess::Abort(); // 740
	CProcess::Abort(); // 718
} /* size: 148, variables: 1, inline expansions: 2 (39 bytes) */

// <003E24BC> tier0/processutils.cpp:740
// function call: 1
void CProcess::Abort()
{
	CProcess::Abort(); // 740
} /* size: 50, inline expansions: 1 (13 bytes) */

// <003DF4DA> tier0/processutils.cpp:740
void CProcess::Abort()
{
} /* size: 0 */

// <003E25E2> tier0/processutils.cpp:748
// variable: 1
// function calls: 12
void CProcess::IsComplete()
{
	bool bActive; // 758
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
		unsigned int nSpinSleepTime);  // 207
	CProcessUtils::LockProcessList(); // 750
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 211
	CProcessUtils::UnlockProcessList(); // 764
	CProcess::IsComplete(); // 748
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 211
	CProcessUtils::UnlockProcessList(); // 754
} /* size: 228, variables: 1, inline expansions: 12 (375 bytes) */

// <003DF4B4> tier0/processutils.cpp:748
// variable: 1
void CProcess::IsComplete()
{
	bool bActive; // 758
} /* size: 0, variables: 1 */

// <003DF3C0> tier0/processutils.cpp:769
// variable: 1
// function call: 1
void CProcess::WaitUntilComplete()
{
	{
		bool bAfterExit; // 781
		CProcessPipeRead::IsValid(); // 785
	}
} /* size: 124 */

// <003DF2CA> tier0/processutils.cpp:806
// variables: 4
void CProcess::WriteStdin(char* pBuf, int nBufLen)
{
	ProcessInfo_t& info; // 808
	const char   __FUNCTION__; // 51075
	int32 nBytesWritten; // 815
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 811
	}
} /* size: 0, variables: 3 */

// <003E234E> tier0/processutils.cpp:822
void CProcess::GetStdout()
{
} /* size: 9 */

// <003DF283> tier0/processutils.cpp:827
void CProcess::GetStderr()
{
} /* size: 12 */

// <003E2945> tier0/processutils.cpp:832
// variable: 1
// function calls: 11
void CProcess::GetExitCode()
{
	bool bOk; // 842
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
		unsigned int nSpinSleepTime);  // 207
	CProcessUtils::LockProcessList(); // 834
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 211
	CProcessUtils::UnlockProcessList(); // 848
	CProcess::GetExitCode(); // 832
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 211
	CProcessUtils::UnlockProcessList(); // 838
} /* size: 259, variables: 1, inline expansions: 11 (455 bytes) */

// <003DF25D> tier0/processutils.cpp:832
// variable: 1
void CProcess::GetExitCode()
{
	bool bOk; // 842
} /* size: 0, variables: 1 */

// <003DED2F> tier0/processutils.cpp:853
// variable: 1
// function calls: 18
void CProcess::WaitForExit(uint nMillis)
{
	int32 nExitCode; // 865
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
		unsigned int nSpinSleepTime);  // 207
	CProcessUtils::LockProcessList(); // 855
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 211
	CProcessUtils::UnlockProcessList(); // 859
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 211
	CProcessUtils::UnlockProcessList(); // 863
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
		unsigned int nSpinSleepTime);  // 207
	CProcessUtils::LockProcessList(); // 883
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 211
	CProcessUtils::UnlockProcessList(); // 891
} /* size: 381, variables: 1, inline expansions: 18 (503 bytes) */

// <003DED01> tier0/processutils.cpp:896
void CProcess::DidCrash()
{
} /* size: 12 */

// <003DE854> tier0/processutils.cpp:902
// function calls: 16
void CProcessUtils::CProcessUtils()
{
	IAppSystem::IAppSystem(); // 134
	IProcessUtils::IProcessUtils(); // 120
	CBaseAppSystem<IProcessUtils>::CBaseAppSystem(); // 171
	CTier0AppSystem<IProcessUtils, 0>::CTier0AppSystem(); // 902
	CThreadFastMutex::CThreadFastMutex(
			const char* pLockName);  // 902
	CUtlFixedMemory<UtlLinkedListElem_t<CProcess::Grow(
		int num);  // 193
	CUtlFixedMemory<UtlLinkedListElem_t<CProcess::Init(
		int nGrowSize,
		int nInitSize);  // 161
	CUtlFixedMemory<UtlLinkedListElem_t<CProcess::CUtlFixedMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 448
	Iterator_t::Iterator_t(
			BlockHeader_t* p,
			intp i);  // 96
	CUtlFixedMemory<UtlLinkedListElem_t<CProcess::InvalidIterator(); // 448
	CUtlLinkedList<CProcess::ConstructList(); // 454
	CUtlLinkedList<CProcess::ResetDbgInfo(); // 455
	CUtlLinkedList<CProcess::CUtlLinkedList(
			int growSize,
			int initSize);  // 404
	CUtlFixedLinkedList<CProcess::CUtlFixedLinkedList(
				int growSize,
				int initSize);  // 902
	CUtlString::CUtlString(); // 902
	CUtlString::CUtlString(); // 902
} /* size: 114, inline expansions: 16 (155 bytes) */

// <003DE83B> tier0/processutils.cpp:902
void CProcessUtils::CProcessUtils()
{
} /* size: 0 */

// <003E2531> tier0/processutils.cpp:928
// variable: 1
// function calls: 2
void CProcessUtils::Init()
{
	InitReturnVal_t nRetVal; // 933
	CTier0AppSystem<IProcessUtils, 0>::Init(); // 933
	CProcessUtils::Init(); // 928
} /* size: 74, variables: 1, inline expansions: 2 (60 bytes) */

// <003DE815> tier0/processutils.cpp:928
// variable: 1
void CProcessUtils::Init()
{
	InitReturnVal_t nRetVal; // 933
} /* size: 0, variables: 1 */

// <003DE30F> tier0/processutils.cpp:945
// variables: 4
// function calls: 16
void CProcessUtils::Shutdown()
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_947; // 947
	const char   __FUNCTION__; // 54672
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 959
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 960
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
			int nLineNumber);  // 947
	CUtlLinkedList<CProcess::Count(); // 960
	CTier0AppSystem<IProcessUtils, 0>::Shutdown(); // 973
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 974
	CUtlLinkedList<CProcess::Count(); // 963
	CUtlLinkedList<CProcess::Head(); // 965
	{
	}
	CUtlFixedMemory<UtlLinkedListElem_t<CProcess::operator[](
			intp i);  // 494
	CUtlLinkedList<CProcess::operator[](
			long long int i);  // 965
} /* size: 0, variables: 2, inline expansions: 16 (426 bytes) */

// <003DDAEF> tier0/processutils.cpp:977
// variables: 3
// function calls: 28
void CProcessUtils::OnProcessDelete(CProcess* pProcess)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_979; // 979
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
			int nLineNumber);  // 979
	{
		long long int i; // 867
		CUtlLinkedList<CProcess::Head(); // 867
		CUtlLinkedList<CProcess::Next(
			long long int i);  // 867
		CUtlFixedMemory<UtlLinkedListElem_t<CProcess::operator[](
				intp i);  // 488
		CUtlLinkedList<CProcess::Element(
			long long int i);  // 869
	}
	CUtlLinkedList<CProcess::Find(
		CProcess* const& src);  // 879
	CUtlFixedMemory<UtlLinkedListElem_t<CProcess::IsValidIterator(
			const Iterator_t& it);  // 81
	CUtlFixedMemory<UtlLinkedListElem_t<CProcess::IsValidIterator(
			const Iterator_t& it);  // 82
	CUtlFixedMemory<UtlLinkedListElem_t<CProcess::HeaderToBlock(
			const BlockHeader_t* pHeader);  // 131
	CUtlFixedMemory<UtlLinkedListElem_t<CProcess::IsInBlock(
			intp i,
			BlockHeader_t* pBlockHeader);  // 85
	CUtlFixedMemory<UtlLinkedListElem_t<CProcess::GetIndex(
		const Iterator_t& it);  // 86
	{
		BlockHeader_t* pbh; // 88
		CUtlFixedMemory<UtlLinkedListElem_t<CProcess::HeaderToBlock(
				const BlockHeader_t* pHeader);  // 131
		CUtlFixedMemory<UtlLinkedListElem_t<CProcess::IsInBlock(
				intp i,
				BlockHeader_t* pBlockHeader);  // 90
	}
	{
	}
	CUtlFixedMemory<UtlLinkedListElem_t<CProcess::IsIdxAfter(
			intp i,
			const Iterator_t& it);  // 591
	CUtlLinkedList<CProcess::IsValidIndex(
			long long int i);  // 749
	Destruct<CProcess*>(CProcess** pMemory); // 753
	{
	}
	CUtlLinkedList<CProcess::Free(
		long long int elem);  // 907
	CUtlLinkedList<CProcess::Remove(
		long long int elem);  // 886
	CUtlLinkedList<CProcess::FindAndRemove(
			CProcess* const& src);  // 981
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 982
} /* size: 0, variables: 1, inline expansions: 22 (1738 bytes) */

// <003DBBDE> tier0/processutils.cpp:984
// variables: 16
// function calls: 117
void CProcessUtils::CreateProcess(ProcessInfo_t& info, int fFlags, const char* pWorkingDir, const char* pEnv)
{
	const char* pCommandLine; // 988
	CPathBufferString strTempBuf; // 989
	pid_t hChild; // 1116
	char buf; // 1331
	{
		int nMax; // 1150
		CUtlString strCmdLineCopy; // 1202
		CUtlVector<char*, CUtlMemory<char*, int> > vecArgv; // 1203
		char* pCmdLine; // 1205
		CUtlVector<char*, CUtlMemory<char*, int> > vecEnv; // 1269
		char** ppEnv; // 1270
		{
			int i; // 1156
		}
		{
			bool bQuoted; // 1217
			CUtlMemory<char::NumAllocated(); // 1196
			CUtlMemory<char::operator[](
					int i);  // 602
			CUtlVectorBase<char::Element(
				int i);  // 1201
			CopyConstruct<char*>(char** pMemory,
						char* const& src);  // 1201
			CUtlMemory<char::Base(); // 112
			CUtlVectorBase<char::Base(); // 368
			CUtlVectorBase<char::ResetDbgInfo(); // 824
			CUtlVectorBase<char::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<char::AddToTail(
					char* const& src);  // 1224
			V_strlen(const char* str); // 1231
			memmove(void* __dest,
				const void* __src,
				size_t __len);  // 99
			V_memmove(void* dest,
					const void* src,
					int count);  // 1231
		}
		{
			char* pEnvStr; // 1273
			CUtlMemory<char::operator[](
					int i);  // 602
			CUtlVectorBase<char::Element(
				int i);  // 1201
			CopyConstruct<char*>(char** pMemory,
						char* const& src);  // 1201
			CUtlMemory<char::Base(); // 112
			CUtlVectorBase<char::Base(); // 368
			CUtlVectorBase<char::ResetDbgInfo(); // 824
			CUtlVectorBase<char::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<char::AddToTail(
					char* const& src);  // 1276
			V_strlen(const char* str); // 1277
			CUtlMemory<char::NumAllocated(); // 1247
			CUtlMemory<char::operator[](
					int i);  // 602
			CUtlVectorBase<char::Element(
				int i);  // 1252
			Construct<char*, char*>(char** pMemory); // 1252
			CUtlMemory<char::Base(); // 112
			CUtlVectorBase<char::Base(); // 368
			CUtlVectorBase<char::ResetDbgInfo(); // 824
			CUtlVectorBase<char::GrowMemory(
					int num);  // 1249
			CUtlVectorBase<char::AddToTail(
					char *& src);  // 1280
			CUtlMemory<char::Base(); // 112
			CUtlVectorBase<char::Base(); // 1282
		}
		CUtlString::CUtlString(
				const char* pString);  // 1202
		CUtlMemory<char::ValidateGrowSize(); // 475
		CUtlMemory<char::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<char::ResetDbgInfo(); // 530
		CUtlVectorBase<char::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<char::CUtlVector(); // 1203
		CUtlString::Get(); // 99
		CUtlString::String(); // 1205
		CUtlMemory<char::operator[](
				int i);  // 602
		CUtlVectorBase<char::Element(
			int i);  // 1252
		CUtlMemory<char::NumAllocated(); // 1247
		Construct<char*, char*>(char** pMemory); // 1252
		CUtlMemory<char::Base(); // 112
		CUtlVectorBase<char::Base(); // 368
		CUtlVectorBase<char::ResetDbgInfo(); // 824
		CUtlVectorBase<char::GrowMemory(
				int num);  // 1249
		CUtlVectorBase<char::AddToTail(
				char *& src);  // 1261
		CUtlMemory<char::ValidateGrowSize(); // 475
		CUtlMemory<char::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<char::ResetDbgInfo(); // 530
		CUtlVectorBase<char::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<char::CUtlVector(); // 1269
		CUtlMemory<char::Base(); // 112
		CUtlVectorBase<char::Base(); // 1304
		CUtlVectorBase<char::RemoveAll(); // 1798
		CUtlMemory<char::IsExternallyAllocated(); // 905
		CUtlMemory<char::Purge(); // 903
		CUtlMemory<char::Purge(); // 1799
		CUtlVectorBase<char::Purge(); // 560
		ValidateAlignment<char*>(void); // 508
		CUtlMemory<char::Purge(); // 510
		CUtlMemory<char::~CUtlMemory(); // 562
		CUtlVectorBase<char::~CUtlVectorBase(); // 410
		CUtlVector<char::~CUtlVector(); // 1310
		CUtlVectorBase<char::RemoveAll(); // 1798
		CUtlMemory<char::IsExternallyAllocated(); // 905
		CUtlMemory<char::Purge(); // 903
		CUtlMemory<char::Purge(); // 1799
		CUtlVectorBase<char::Purge(); // 560
		ValidateAlignment<char*>(void); // 508
		CUtlMemory<char::Purge(); // 510
		CUtlMemory<char::~CUtlMemory(); // 562
		CUtlVectorBase<char::~CUtlVectorBase(); // 410
		CUtlVector<char::~CUtlVector(); // 1310
		CUtlString::~CUtlString(); // 1310
		CUtlMemory<char::operator[](
				int i);  // 588
		CUtlVectorBase<char::operator[](
				int i);  // 1307
	}
	{
		CProcess* pProcess; // 1320
		{
			CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_1322; // 1322
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
					int nLineNumber);  // 1322
			CUtlFixedMemory<UtlLinkedListElem_t<CProcess::IsValidIterator(
					const Iterator_t& it);  // 81
			CUtlFixedMemory<UtlLinkedListElem_t<CProcess::IsValidIterator(
					const Iterator_t& it);  // 82
			CUtlFixedMemory<UtlLinkedListElem_t<CProcess::HeaderToBlock(
					const BlockHeader_t* pHeader);  // 131
			CUtlFixedMemory<UtlLinkedListElem_t<CProcess::IsInBlock(
					intp i,
					BlockHeader_t* pBlockHeader);  // 85
			CUtlFixedMemory<UtlLinkedListElem_t<CProcess::GetIndex(
				const Iterator_t& it);  // 86
			{
				BlockHeader_t* pbh; // 88
				CUtlFixedMemory<UtlLinkedListElem_t<CProcess::HeaderToBlock(
						const BlockHeader_t* pHeader);  // 131
				CUtlFixedMemory<UtlLinkedListElem_t<CProcess::IsInBlock(
						intp i,
						BlockHeader_t* pBlockHeader);  // 90
			}
			{
			}
			CUtlFixedMemory<UtlLinkedListElem_t<CProcess::IsIdxAfter(
					intp i,
					const Iterator_t& it);  // 591
			CUtlFixedMemory<UtlLinkedListElem_t<CProcess::operator[](
					intp i);  // 594
			CUtlLinkedList<CProcess::IsValidIndex(
					long long int i);  // 977
			CUtlFixedMemory<UtlLinkedListElem_t<CProcess::operator[](
					intp i);  // 367
			CUtlLinkedList<CProcess::InternalElement(
					long long int i);  // 1011
			{
			}
			CUtlLinkedList<CProcess::LinkBefore(
					long long int before,
					long long int elem);  // 822
			CopyConstruct<CProcess*>(CProcess** pMemory,
						CProcess* const& src);  // 825
			CUtlLinkedList<CProcess::InsertBefore(
					long long int before,
					CProcess* const& src);  // 856
			CUtlLinkedList<CProcess::AddToTail(
					CProcess* const& src);  // 1323
			ThreadInterlockedExchange64(volatile int64* p,
							int64 value);  // 874
			CThreadFastMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 944
			Unlock(CThreadFastMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 983
			CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 1324
		}
	}
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 989
	CUtlString::Get(); // 988
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 993
	V_strncpy<int>(char* pDest,
			const char* pSrc,
			int maxLenInChars);  // 277
	GetErrorString(char* pBuf,
			int nBufLen);  // 1332
	CUtlString::Get(); // 1332
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1337
} /* size: 0, variables: 4, inline expansions: 12 (271 bytes) */

// <003E2377> tier0/processutils.cpp:1342
void CProcessUtils::StartProcess(const char* pCommandLine, int fFlags, const char* pWorkingDir)
{
} /* size: 16 */

// <003DB7EE> tier0/processutils.cpp:1347
// variables: 6
// function calls: 5
void CProcessUtils::StartProcessWithEnv(const char* pCommandLine, int fFlags, const char* pWorkingDir, const char* pEnvironment)
{
	const char   __FUNCTION__; // 64013
	ProcessInfo_t info; // 1351
	int32 nPipeSize; // 1363
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1349
	}
	{
		bool bSuccess; // 1375
		{
			IProcess* pProcess; // 1389
		}
	}
	CUtlString::CUtlString(); // 91
	ProcessInfo_t::ProcessInfo_t(); // 1351
	CUtlString::operator=(
			const char* src);  // 1352
	CUtlString::~CUtlString(); // 91
	ProcessInfo_t::~ProcessInfo_t(); // 1407
} /* size: 0, variables: 3, inline expansions: 5 (57 bytes) */

// <003DB5A8> tier0/processutils.cpp:1413
// variables: 2
// function calls: 4
void CProcessUtils::StartProcess(int argc, const char ** argv, int fFlags, const char* pWorkingDir)
{
	CUtlString commandLine; // 1415
	{
		int i; // 1416
	}
	CUtlString::CUtlString(); // 1415
	CUtlString::Get(); // 1424
	CProcessUtils::StartProcess(
			const char* pCommandLine,
			int fFlags,
			const char* pWorkingDir);  // 1424
	CUtlString::~CUtlString(); // 1425
} /* size: 292, variables: 1, inline expansions: 4 (86 bytes) */

// <003DB3CB> tier0/processutils.cpp:1428
// variables: 3
// function calls: 2
void CProcessUtils::SimpleRunProcess(const char* pCommandLine, const char* pWorkingDir, CUtlString* pStdout)
{
	int nFlags; // 1430
	IProcess* pProcess; // 1434
	int nExitCode; // 1438
	CProcessUtils::StartProcess(
			const char* pCommandLine,
			int fFlags,
			const char* pWorkingDir);  // 1434
	CProcess::GetStdout(); // 1441
} /* size: 178, variables: 3, inline expansions: 2 (16 bytes) */

// <003DB379> tier0/processutils.cpp:1450
// variable: 1
void TranslateLinefeedsToUnix(char* pBuffer)
{
	char* pOut; // 1452
} /* size: 0, variables: 1 */

// <003DB33C> tier0/processutils.cpp:1474
void CProcessUtils::EnsureChildProcessKillOnParentEnd(ProcessHandle_t hChildProcess)
{
} /* size: 0 */

// <003E2FDE> tier0/processutils.cpp:1511
void CProcessUtils::CleanupSharedKillJob()
{
} /* size: 0 */

// <003DB27B> tier0/processutils.cpp:1651
// function call: 1
void CProcessUtils::OpenURL(const char* pURL)
{
	ThreadShellOpen(const char* pchFile,
			const char* pchCurrentDirectory);  // 1653
} /* size: 31, inline expansions: 1 (16 bytes) */

// <003DB255> tier0/processutils.cpp:1656
void CProcessUtils::OpenFileWithAssociatedApplication(const char* pFilename)
{
} /* size: 0 */

// <003DB1C6> tier0/processutils.cpp:1661
// function calls: 2
void CProcessUtils::GetMiniDumpPath()
{
	CUtlString::Get(); // 99
	CUtlString::String(); // 1663
} /* size: 23, inline expansions: 2 (36 bytes) */

// <003DB15E> tier0/processutils.cpp:1666
void CProcessUtils::SetMiniDumpPath(const char* pPath)
{
} /* size: 13 */

// <003DB0CF> tier0/processutils.cpp:1671
// function calls: 2
void CProcessUtils::GetMiniDumpPrefix()
{
	CUtlString::Get(); // 99
	CUtlString::String(); // 1673
} /* size: 26, inline expansions: 2 (42 bytes) */

// <003DB066> tier0/processutils.cpp:1676
void CProcessUtils::SetMiniDumpPrefix(const char* pPrefix)
{
} /* size: 13 */

// <003DB038> tier0/processutils.cpp:1681
void CProcessUtils::GetMiniDumpFlags()
{
} /* size: 11 */

// <003DAFFB> tier0/processutils.cpp:1686
void CProcessUtils::SetMiniDumpFlags(uint32 nFlags)
{
} /* size: 15 */

// <003DAFCD> tier0/processutils.cpp:1691
void CProcessUtils::GetNumMiniDumpsWritten()
{
} /* size: 11 */

// <003DAF9F> tier0/processutils.cpp:1696
void CProcessUtils::GetMiniDumpWriteLimit()
{
} /* size: 11 */

// <003DAF62> tier0/processutils.cpp:1701
void CProcessUtils::SetMiniDumpWriteLimit(int nLimit)
{
} /* size: 11 */

// <003E3007> tier0/processutils.cpp:1706
void CProcessUtils::WriteMiniDump(IProcess* pApiProcess, bool bQuiet)
{
} /* size: 0 */

// <003DAEFC> tier0/processutils.cpp:1788
void CProcessUtils::WriteMiniDumpIfEnabled(CProcess* pProcess, bool bQuiet)
{
} /* size: 0 */

// <003E303E> tier0/processutils.cpp:1803
// variable: 1
// function calls: 4
void CProcessUtils::FindProcessWithListLock(uint32 nProcessId)
{
	{
		long long int nProcess; // 1805
		CUtlLinkedList<CProcess::Head(); // 1805
		CUtlLinkedList<CProcess::Next(
			long long int i);  // 1805
		CUtlFixedMemory<UtlLinkedListElem_t<CProcess::operator[](
				intp i);  // 494
		CUtlLinkedList<CProcess::operator[](
				long long int i);  // 1807
	}
} /* size: 0 */

// <003DAEC7> tier0/processutils.cpp:1803
// variable: 1
void CProcessUtils::FindProcessWithListLock(uint32 nProcessId)
{
	{
		long long int nProcess; // 1805
	}
} /* size: 0 */

// <003DAA6A> tier0/processutils.cpp:1815
// variables: 2
// function calls: 15
void CProcessUtils::FindProcess(uint32 nProcessId)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_1817; // 1817
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
			int nLineNumber);  // 1817
	{
		long long int nProcess; // 1805
		CUtlLinkedList<CProcess::Head(); // 1805
		CUtlLinkedList<CProcess::Next(
			long long int i);  // 1805
		CUtlFixedMemory<UtlLinkedListElem_t<CProcess::operator[](
				intp i);  // 494
		CUtlLinkedList<CProcess::operator[](
				long long int i);  // 1807
	}
	CProcessUtils::FindProcessWithListLock(
				uint32 nProcessId);  // 1818
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 1819
} /* size: 0, variables: 1, inline expansions: 11 (0 bytes) */

// <003DAA28> tier0/processutils.cpp:1823
void SetDisableFocusBasedPriorityBoost(ProcessHandle_t hProcess, bool bDisableFocusBasedPriorityBoost)
{
} /* size: 5 */

// <003DA9F1> tier0/processutils.cpp:1831
bool GetDisableFocusBasedPriorityBoost(ProcessHandle_t hProcess)
{
} /* size: 7 */

