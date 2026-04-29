
//
// public/tier0/iprocessutils.h
//
//	referenced by: libengine2.so
//				   libtier0.so
//
//	functions: 10
//	classes: 4
//

// <003E0301> ../public/tier0/iprocessutils.h:28
void IPipeRead::IPipeRead()
{
} /* size: 0 */

// <003E02E5> ../public/tier0/iprocessutils.h:28
inline void IPipeRead::IPipeRead()
{
} /* size: 0 */

// <003D6BB9> ../public/tier0/iprocessutils.h:28
// member functions: 18
// member variable: 1
// vtable entries: 5
// class size: 8
class IPipeRead {
	void IPipeRead(IPipeRead* , IPipeRead& );
	void IPipeRead(IPipeRead* , const IPipeRead& );
	void IPipeRead(IPipeRead* );
	void ~IPipeRead(IPipeRead* );
	int ()(void) * * _vptr.IPipeRead; /* 0 8 */
	/* ../public/tier0/iprocessutils.h:34 */
	virtual int GetNumBytesAvailable(IPipeRead* );
	/* ../public/tier0/iprocessutils.h:38 */
	virtual void ReadAvailable(IPipeRead* , CUtlString& , int32);
	/* ../public/tier0/iprocessutils.h:41 */
	virtual void ReadAvailable(IPipeRead* , CUtlBuffer* , int32);
	/* ../public/tier0/iprocessutils.h:48 */
	virtual void ReadLine(IPipeRead* , CUtlString& );
	/* ../public/tier0/iprocessutils.h:55 */
	virtual void Read(IPipeRead* , CUtlString& , int32);
	void IPipeRead(class IPipeRead *, class IPipeRead &); /* linkage=_ZN9IPipeReadC4EOS_ */
	void IPipeRead(class IPipeRead *, const class IPipeRead  &); /* linkage=_ZN9IPipeReadC4ERKS_ */
	void IPipeRead(class IPipeRead *); /* linkage=_ZN9IPipeReadC4Ev */
	void ~IPipeRead(class IPipeRead *); /* linkage=_ZN9IPipeReadD4Ev */
	virtual int GetNumBytesAvailable(class IPipeRead *); /* linkage=_ZN9IPipeRead20GetNumBytesAvailableEv */
	virtual void ReadAvailable(class IPipeRead *, class CUtlString &, int32); /* linkage=_ZN9IPipeRead13ReadAvailableER10CUtlStringi */
	virtual void ReadAvailable(class IPipeRead *, class CUtlBuffer *, int32); /* linkage=_ZN9IPipeRead13ReadAvailableEP10CUtlBufferi */
	virtual void ReadLine(class IPipeRead *, class CUtlString &); /* linkage=_ZN9IPipeRead8ReadLineER10CUtlString */
	virtual void Read(class IPipeRead *, class CUtlString &, int32); /* linkage=_ZN9IPipeRead4ReadER10CUtlStringi */
};

// <003E039A> ../public/tier0/iprocessutils.h:68
void IProcess::IProcess()
{
} /* size: 0 */

// <003E037E> ../public/tier0/iprocessutils.h:68
inline void IProcess::IProcess()
{
} /* size: 0 */

// <0073BBF6> ../public/tier0/iprocessutils.h:68
// member functions: 24
// member variable: 1
// vtable entries: 10
// class size: 8
class IProcess {
	int ()(void) * * _vptr.IProcess; /* 0 8 */
	/* ../public/tier0/iprocessutils.h:71 */
	virtual void ~IProcess(IProcess* );
	/* ../public/tier0/iprocessutils.h:74 */
	virtual void SetPriority(IProcess* , ProcessPriority_t);
	/* ../public/tier0/iprocessutils.h:78 */
	virtual void Release(IProcess* );
	/* ../public/tier0/iprocessutils.h:81 */
	virtual void Abort(IProcess* );
	/* ../public/tier0/iprocessutils.h:84 */
	virtual bool IsComplete(IProcess* );
	/* ../public/tier0/iprocessutils.h:88 */
	virtual int WaitUntilComplete(IProcess* );
	/* ../public/tier0/iprocessutils.h:92 */
	virtual int WriteStdin(IProcess* , char* , int);
	/* ../public/tier0/iprocessutils.h:95 */
	virtual IPipeRead* GetStdout(IProcess* );
	/* ../public/tier0/iprocessutils.h:96 */
	virtual IPipeRead* GetStderr(IProcess* );
	/* ../public/tier0/iprocessutils.h:100 */
	virtual int GetExitCode(IProcess* );
	/* ../public/tier0/iprocessutils.h:103 */
	virtual bool DidCrash(IProcess* );
	void IProcess(class IProcess *, const class IProcess  &); /* linkage=_ZN8IProcessC4ERKS_ */
	void IProcess(class IProcess *); /* linkage=_ZN8IProcessC4Ev */
	virtual void ~IProcess(class IProcess *); /* linkage=_ZN8IProcessD4Ev */
	virtual void SetPriority(class IProcess *, enum ProcessPriority_t); /* linkage=_ZN8IProcess11SetPriorityE17ProcessPriority_t */
	virtual void Release(class IProcess *); /* linkage=_ZN8IProcess7ReleaseEv */
	virtual void Abort(class IProcess *); /* linkage=_ZN8IProcess5AbortEv */
	virtual bool IsComplete(class IProcess *); /* linkage=_ZN8IProcess10IsCompleteEv */
	virtual int WaitUntilComplete(class IProcess *); /* linkage=_ZN8IProcess17WaitUntilCompleteEv */
	virtual int WriteStdin(class IProcess *, char *, int); /* linkage=_ZN8IProcess10WriteStdinEPci */
	virtual class IPipeRead * GetStdout(class IProcess *); /* linkage=_ZN8IProcess9GetStdoutEv */
	virtual class IPipeRead * GetStderr(class IProcess *); /* linkage=_ZN8IProcess9GetStderrEv */
	virtual int GetExitCode(class IProcess *); /* linkage=_ZN8IProcess11GetExitCodeEv */
	virtual bool DidCrash(class IProcess *); /* linkage=_ZN8IProcess8DidCrashEv */
};

// <003D671A> ../public/tier0/iprocessutils.h:68
// member functions: 26
// member variable: 1
// vtable entries: 10
// class size: 8
class IProcess {
	void IProcess(IProcess* , const IProcess& );
	void IProcess(IProcess* );
	int ()(void) * * _vptr.IProcess; /* 0 8 */
	/* ../public/tier0/iprocessutils.h:71 */
	virtual void ~IProcess(IProcess* );
	/* ../public/tier0/iprocessutils.h:74 */
	virtual void SetPriority(IProcess* , ProcessPriority_t);
	/* ../public/tier0/iprocessutils.h:78 */
	virtual void Release(IProcess* );
	/* ../public/tier0/iprocessutils.h:81 */
	virtual void Abort(IProcess* );
	/* ../public/tier0/iprocessutils.h:84 */
	virtual bool IsComplete(IProcess* );
	/* ../public/tier0/iprocessutils.h:88 */
	virtual int WaitUntilComplete(IProcess* );
	/* ../public/tier0/iprocessutils.h:92 */
	virtual int WriteStdin(IProcess* , char* , int);
	/* ../public/tier0/iprocessutils.h:95 */
	virtual IPipeRead* GetStdout(IProcess* );
	/* ../public/tier0/iprocessutils.h:96 */
	virtual IPipeRead* GetStderr(IProcess* );
	/* ../public/tier0/iprocessutils.h:100 */
	virtual int GetExitCode(IProcess* );
	/* ../public/tier0/iprocessutils.h:103 */
	virtual bool DidCrash(IProcess* );
	void IProcess(class IProcess *, const class IProcess  &); /* linkage=_ZN8IProcessC4ERKS_ */
	void IProcess(class IProcess *); /* linkage=_ZN8IProcessC4Ev */
	virtual void ~IProcess(class IProcess *); /* linkage=_ZN8IProcessD4Ev */
	virtual void SetPriority(class IProcess *, enum ProcessPriority_t); /* linkage=_ZN8IProcess11SetPriorityE17ProcessPriority_t */
	virtual void Release(class IProcess *); /* linkage=_ZN8IProcess7ReleaseEv */
	virtual void Abort(class IProcess *); /* linkage=_ZN8IProcess5AbortEv */
	virtual bool IsComplete(class IProcess *); /* linkage=_ZN8IProcess10IsCompleteEv */
	virtual int WaitUntilComplete(class IProcess *); /* linkage=_ZN8IProcess17WaitUntilCompleteEv */
	virtual int WriteStdin(class IProcess *, char *, int); /* linkage=_ZN8IProcess10WriteStdinEPci */
	virtual class IPipeRead * GetStdout(class IProcess *); /* linkage=_ZN8IProcess9GetStdoutEv */
	virtual class IPipeRead * GetStderr(class IProcess *); /* linkage=_ZN8IProcess9GetStderrEv */
	virtual int GetExitCode(class IProcess *); /* linkage=_ZN8IProcess11GetExitCodeEv */
	virtual bool DidCrash(class IProcess *); /* linkage=_ZN8IProcess8DidCrashEv */
};

// <003E1B9E> ../public/tier0/iprocessutils.h:71
void IProcess::~IProcess()
{
} /* size: 0 */

// <003E1B6E> ../public/tier0/iprocessutils.h:71
inline void IProcess::~IProcess()
{
} /* size: 0 */

// <003DECB7> ../public/tier0/iprocessutils.h:134
void IProcessUtils::IProcessUtils()
{
} /* size: 0 */

// <003DEC9B> ../public/tier0/iprocessutils.h:134
inline void IProcessUtils::IProcessUtils()
{
} /* size: 0 */

// <003CB9F3> ../public/tier0/iprocessutils.h:134
// member functions: 38
// member variable: 1
// vtable entries: 15
// class size: 8
class IProcessUtils : public IAppSystem {
public:
	/* class IAppSystem <ancestor>; */ /* 0 8 */
	void ~IProcessUtils(IProcessUtils* );
	void IProcessUtils(IProcessUtils* , IProcessUtils& );
	void IProcessUtils(IProcessUtils* , const IProcessUtils& );
	void IProcessUtils(IProcessUtils* );
	/* ../public/tier0/iprocessutils.h:139 */
	virtual IProcess* StartProcess(IProcessUtils* , const char* , int, const char* );
	/* ../public/tier0/iprocessutils.h:140 */
	virtual IProcess* StartProcess(IProcessUtils* , int, const char** , int, const char* );
	/* ../public/tier0/iprocessutils.h:141 */
	virtual IProcess* StartProcessWithEnv(IProcessUtils* , const char* , int, const char* , const char* );
	/* ../public/tier0/iprocessutils.h:148 */
	virtual int SimpleRunProcess(IProcessUtils* , const char* , const char* , CUtlString* );
	/* ../public/tier0/iprocessutils.h:151 */
	virtual bool OpenURL(IProcessUtils* , const char* );
	/* ../public/tier0/iprocessutils.h:154 */
	virtual bool OpenFileWithAssociatedApplication(IProcessUtils* , const char* );
	/* ../public/tier0/iprocessutils.h:159 */
	virtual const char* GetMiniDumpPath(IProcessUtils* );
	/* ../public/tier0/iprocessutils.h:160 */
	virtual void SetMiniDumpPath(IProcessUtils* , const char* );
	/* ../public/tier0/iprocessutils.h:161 */
	virtual const char* GetMiniDumpPrefix(IProcessUtils* );
	/* ../public/tier0/iprocessutils.h:162 */
	virtual void SetMiniDumpPrefix(IProcessUtils* , const char* );
	/* ../public/tier0/iprocessutils.h:163 */
	virtual uint32 GetMiniDumpFlags(IProcessUtils* );
	/* ../public/tier0/iprocessutils.h:164 */
	virtual void SetMiniDumpFlags(IProcessUtils* , uint32);
	/* ../public/tier0/iprocessutils.h:165 */
	virtual int GetNumMiniDumpsWritten(IProcessUtils* );
	/* ../public/tier0/iprocessutils.h:166 */
	virtual int GetMiniDumpWriteLimit(IProcessUtils* );
	/* ../public/tier0/iprocessutils.h:167 */
	virtual void SetMiniDumpWriteLimit(IProcessUtils* , int);
	void ~IProcessUtils(class IProcessUtils *); /* linkage=_ZN13IProcessUtilsD4Ev */
	void IProcessUtils(class IProcessUtils *, class IProcessUtils &); /* linkage=_ZN13IProcessUtilsC4EOS_ */
	void IProcessUtils(class IProcessUtils *, const class IProcessUtils  &); /* linkage=_ZN13IProcessUtilsC4ERKS_ */
	void IProcessUtils(class IProcessUtils *); /* linkage=_ZN13IProcessUtilsC4Ev */
	virtual class IProcess * StartProcess(class IProcessUtils *, const char  *, int, const char  *); /* linkage=_ZN13IProcessUtils12StartProcessEPKciS1_ */
	virtual class IProcess * StartProcess(class IProcessUtils *, int, const char  * *, int, const char  *); /* linkage=_ZN13IProcessUtils12StartProcessEiPPKciS1_ */
	virtual class IProcess * StartProcessWithEnv(class IProcessUtils *, const char  *, int, const char  *, const char  *); /* linkage=_ZN13IProcessUtils19StartProcessWithEnvEPKciS1_S1_ */
	virtual int SimpleRunProcess(class IProcessUtils *, const char  *, const char  *, class CUtlString *); /* linkage=_ZN13IProcessUtils16SimpleRunProcessEPKcS1_P10CUtlString */
	virtual bool OpenURL(class IProcessUtils *, const char  *); /* linkage=_ZN13IProcessUtils7OpenURLEPKc */
	virtual bool OpenFileWithAssociatedApplication(class IProcessUtils *, const char  *); /* linkage=_ZN13IProcessUtils33OpenFileWithAssociatedApplicationEPKc */
	virtual const char  * GetMiniDumpPath(class IProcessUtils *); /* linkage=_ZN13IProcessUtils15GetMiniDumpPathEv */
	virtual void SetMiniDumpPath(class IProcessUtils *, const char  *); /* linkage=_ZN13IProcessUtils15SetMiniDumpPathEPKc */
	virtual const char  * GetMiniDumpPrefix(class IProcessUtils *); /* linkage=_ZN13IProcessUtils17GetMiniDumpPrefixEv */
	virtual void SetMiniDumpPrefix(class IProcessUtils *, const char  *); /* linkage=_ZN13IProcessUtils17SetMiniDumpPrefixEPKc */
	virtual uint32 GetMiniDumpFlags(class IProcessUtils *); /* linkage=_ZN13IProcessUtils16GetMiniDumpFlagsEv */
	virtual void SetMiniDumpFlags(class IProcessUtils *, uint32); /* linkage=_ZN13IProcessUtils16SetMiniDumpFlagsEj */
	virtual int GetNumMiniDumpsWritten(class IProcessUtils *); /* linkage=_ZN13IProcessUtils22GetNumMiniDumpsWrittenEv */
	virtual int GetMiniDumpWriteLimit(class IProcessUtils *); /* linkage=_ZN13IProcessUtils21GetMiniDumpWriteLimitEv */
	virtual void SetMiniDumpWriteLimit(class IProcessUtils *, int); /* linkage=_ZN13IProcessUtils21SetMiniDumpWriteLimitEi */
};

// <00128851> ../public/tier0/iprocessutils.h:170
void SetDisableFocusBasedPriorityBoost(ProcessHandle_t, bool)
{
} /* size: 0 */

// <00128899> ../public/tier0/iprocessutils.h:171
bool GetDisableFocusBasedPriorityBoost(ProcessHandle_t)
{
} /* size: 0 */

