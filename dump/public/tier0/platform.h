
//
// public/tier0/platform.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libfilesystem_stdio.so
//				   liblocalize.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//				   libschemasystem.so
//				   libtier0.so
//				   libvfx_vulkan.so
//
//	functions: 2,438
//	classes: 3
//	structs: 5
//

// <066ECFBF> ../public/tier0/platform.h:53
uint Plat_GetPlatformError(void)
{
} /* size: 0 */

// <008A5655> ../public/tier0/platform.h:60
void Plat_SetupFPUControlWord(void)
{
} /* size: 0 */

// <05998AA6> ../public/tier0/platform.h:64
void Plat_SetDenormalsAreZero(void)
{
} /* size: 0 */

// <00128A52> ../public/tier0/platform.h:70
void Plat_MessageBox(const char *, const char *)
{
} /* size: 0 */

// <047373B0> ../public/tier0/platform.h:82
// variables: 2
inline short unsigned int WordSwapC<short unsigned int>(short unsigned int w)
{
	union  t1; // 87
	union  t2; // 87
} /* size: 0, variables: 2 */

// <04736538> ../public/tier0/platform.h:82
// variables: 2
inline short int WordSwapC<short int>(short int w)
{
	union  t1; // 87
	union  t2; // 87
} /* size: 0, variables: 2 */

// <00F2CCA6> ../public/tier0/platform.h:100
// variables: 2
inline unsigned int DWordSwapC<unsigned int>(unsigned int dw)
{
	union  t1; // 105
	union  t2; // 105
} /* size: 0, variables: 2 */

// <0046051E> ../public/tier0/platform.h:120
// variables: 2
inline long long unsigned int QWordSwapC<long long unsigned int>(long long unsigned int qw)
{
	union  t1; // 125
	union  t2; // 125
} /* size: 0, variables: 2 */

// <04421AEF> ../public/tier0/platform.h:314
inline uint32 LoadLittleDWord(const uint32* base, unsigned int dwordIndex)
{
} /* size: 0 */

// <04421AB3> ../public/tier0/platform.h:319
inline void StoreLittleDWord(uint32* base, unsigned int dwordIndex, uint32 dword)
{
} /* size: 0 */

// <008A5679> ../public/tier0/platform.h:337
uint64 Plat_GetCurrentFrame(void)
{
} /* size: 0 */

// <01259897> ../public/tier0/platform.h:338
void Plat_SetCurrentFrame(uint64)
{
} /* size: 0 */

// <001284AD> ../public/tier0/platform.h:339
void Plat_ChangeCurrentFrame(int64)
{
} /* size: 0 */

// <00F43C89> ../public/tier0/platform.h:375
// variables: 2
inline long long unsigned int PLAT_CPU_TIME(void)
{
	long long unsigned int Low; // 378
	long long unsigned int High; // 378
} /* size: 0, variables: 2 */

// <00128986> ../public/tier0/platform.h:413
uint64 Plat_RelativeTicks(void)
{
} /* size: 0 */

// <00B63FC1> ../public/tier0/platform.h:414
uint64 Plat_RelativeTickFrequency(void)
{
} /* size: 0 */

// <00128968> ../public/tier0/platform.h:421
double Plat_TickDiffMilliSecF(uint64, uint64)
{
} /* size: 0 */

// <000B0F1F> ../public/tier0/platform.h:422
uint64 Plat_TickDiffMicroSec(uint64, uint64)
{
} /* size: 0 */

// <000B0F01> ../public/tier0/platform.h:423
double Plat_TickDiffMicroSecF(uint64, uint64)
{
} /* size: 0 */

// <0029D6DD> ../public/tier0/platform.h:427
uint64 Plat_MilliSecTickDiff(uint64)
{
} /* size: 0 */

// <023461FD> ../public/tier0/platform.h:429
uint64 Plat_MicroSecTickDiff(uint64)
{
} /* size: 0 */

// <00B63FF7> ../public/tier0/platform.h:435
uint64 Plat_TicksAfterSecsF(double)
{
} /* size: 0 */

// <004A7018> ../public/tier0/platform.h:436
uint64 Plat_TicksAfterMilliSecs(uint64)
{
} /* size: 0 */

// <02384C93> ../public/tier0/platform.h:457
// variables: 3
inline uint64 Plat_TickDiffMilliSec(uint64 nStartTicks, uint64 nEndTicks, uint64 nFreq)
{
	uint64 nTicks; // 460
	uint64 nSeconds; // 461
	uint64 nRemainder; // 462
} /* size: 0, variables: 3 */

// <022DF752> ../public/tier0/platform.h:477
// variables: 3
inline uint64 Plat_TickDiffMicroSec(uint64 nStartTicks, uint64 nEndTicks, uint64 nFreq)
{
	uint64 nTicks; // 480
	uint64 nSeconds; // 481
	uint64 nRemainder; // 482
} /* size: 0, variables: 3 */

// <006845C2> ../public/tier0/platform.h:487
// variables: 3
inline double Plat_TickDiffMicroSecF(uint64 nStartTicks, uint64 nEndTicks, uint64 nFreq)
{
	uint64 nTicks; // 490
	uint64 nSeconds; // 491
	uint64 nRemainder; // 492
} /* size: 0, variables: 3 */

// <0006AFF3> ../public/tier0/platform.h:542
// member functions: 26
// member variable: 1
// class size: 8
class CRelativeTickCount {
	/* ../public/tier0/platform.h:545 */
	void CRelativeTickCount(CRelativeTickCount* );
	/* ../public/tier0/platform.h:549 */
	void CRelativeTickCount(CRelativeTickCount* , uint64);
	/* ../public/tier0/platform.h:554 */
	void Sample(CRelativeTickCount* );
	/* ../public/tier0/platform.h:559 */
	void Init(CRelativeTickCount* );
	/* ../public/tier0/platform.h:563 */
	void Init(CRelativeTickCount* , double);
	/* ../public/tier0/platform.h:567 */
	void Init(CRelativeTickCount* , uint64);
	/* ../public/tier0/platform.h:575 */
	uint64 GetCycles64(const CRelativeTickCount* );
	/* ../public/tier0/platform.h:579 */
	uint64 GetRelativeTicks64(const CRelativeTickCount* );
	/* ../public/tier0/platform.h:584 */
	uint64 GetMicroseconds64(const CRelativeTickCount* );
	/* ../public/tier0/platform.h:588 */
	double GetMicrosecondsF(const CRelativeTickCount* );
	/* ../public/tier0/platform.h:593 */
	uint64 GetMilliseconds64(const CRelativeTickCount* );
	/* ../public/tier0/platform.h:597 */
	double GetMillisecondsF(const CRelativeTickCount* );
	/* ../public/tier0/platform.h:602 */
	double GetSeconds(const CRelativeTickCount* );
	uint64 m_Int64; /* 0 8 */
	void CRelativeTickCount(class CRelativeTickCount *); /* linkage=_ZN18CRelativeTickCountC4Ev */
	void CRelativeTickCount(class CRelativeTickCount *, uint64); /* linkage=_ZN18CRelativeTickCountC4Ey */
	void Sample(class CRelativeTickCount *); /* linkage=_ZN18CRelativeTickCount6SampleEv */
	void Init(class CRelativeTickCount *); /* linkage=_ZN18CRelativeTickCount4InitEv */
	void Init(class CRelativeTickCount *, double); /* linkage=_ZN18CRelativeTickCount4InitEd */
	void Init(class CRelativeTickCount *, uint64); /* linkage=_ZN18CRelativeTickCount4InitEy */
	uint64 GetCycles64(const class CRelativeTickCount  *); /* linkage=_ZNK18CRelativeTickCount11GetCycles64Ev */
	uint64 GetRelativeTicks64(const class CRelativeTickCount  *); /* linkage=_ZNK18CRelativeTickCount18GetRelativeTicks64Ev */
	uint64 GetMicroseconds64(const class CRelativeTickCount  *); /* linkage=_ZNK18CRelativeTickCount17GetMicroseconds64Ev */
	double GetMicrosecondsF(const class CRelativeTickCount  *); /* linkage=_ZNK18CRelativeTickCount16GetMicrosecondsFEv */
	uint64 GetMilliseconds64(const class CRelativeTickCount  *); /* linkage=_ZNK18CRelativeTickCount17GetMilliseconds64Ev */
	double GetMillisecondsF(const class CRelativeTickCount  *); /* linkage=_ZNK18CRelativeTickCount16GetMillisecondsFEv */
	double GetSeconds(const class CRelativeTickCount  *); /* linkage=_ZNK18CRelativeTickCount10GetSecondsEv */
};

// <0464BD64> ../public/tier0/platform.h:545
void CRelativeTickCount::CRelativeTickCount()
{
} /* size: 0 */

// <0464BD4B> ../public/tier0/platform.h:545
inline void CRelativeTickCount::CRelativeTickCount()
{
} /* size: 0 */

// <005A85C5> ../public/tier0/platform.h:549
void CRelativeTickCount::CRelativeTickCount(uint64 nVal)
{
} /* size: 0 */

// <0464BD32> ../public/tier0/platform.h:554
inline void CRelativeTickCount::Sample()
{
} /* size: 0 */

// <0464BD19> ../public/tier0/platform.h:559
inline void CRelativeTickCount::Init()
{
} /* size: 0 */

// <005A8547> ../public/tier0/platform.h:567
inline void CRelativeTickCount::Init(uint64 nVal)
{
} /* size: 0 */

// <02384C18> ../public/tier0/platform.h:575
inline void CRelativeTickCount::GetCycles64()
{
} /* size: 0 */

// <02384BFF> ../public/tier0/platform.h:579
inline void CRelativeTickCount::GetRelativeTicks64()
{
} /* size: 0 */

// <00107D3E> ../public/tier0/platform.h:584
inline void CRelativeTickCount::GetMicroseconds64()
{
} /* size: 0 */

// <00107D25> ../public/tier0/platform.h:588
inline void CRelativeTickCount::GetMicrosecondsF()
{
} /* size: 0 */

// <0464BD00> ../public/tier0/platform.h:597
inline void CRelativeTickCount::GetMillisecondsF()
{
} /* size: 0 */

// <005A852E> ../public/tier0/platform.h:602
inline void CRelativeTickCount::GetSeconds()
{
} /* size: 0 */

// <0463E7AC> ../public/tier0/platform.h:613
void CRelativeTickTimer::CRelativeTickTimer()
{
} /* size: 0 */

// <0463E78F> ../public/tier0/platform.h:613
inline void CRelativeTickTimer::CRelativeTickTimer()
{
} /* size: 0 */

// <0006B1DE> ../public/tier0/platform.h:613
// member functions: 10
// member variable: 1
// class size: 8
class CRelativeTickTimer {
	/* ../public/tier0/platform.h:616 */
	void Start(CRelativeTickTimer* );
	/* ../public/tier0/platform.h:620 */
	void End(CRelativeTickTimer* );
	/* ../public/tier0/platform.h:625 */
	const CRelativeTickCount& GetDuration(const CRelativeTickTimer* );
	/* ../public/tier0/platform.h:629 */
	CRelativeTickCount GetDurationInProgress(const CRelativeTickTimer* );
private:
	CRelativeTickCount m_Duration; /* 0 8 */
	void CRelativeTickTimer(CRelativeTickTimer* );
	void Start(class CRelativeTickTimer *); /* linkage=_ZN18CRelativeTickTimer5StartEv */
	void End(class CRelativeTickTimer *); /* linkage=_ZN18CRelativeTickTimer3EndEv */
	const class CRelativeTickCount  & GetDuration(const class CRelativeTickTimer  *); /* linkage=_ZNK18CRelativeTickTimer11GetDurationEv */
	class CRelativeTickCount GetDurationInProgress(const class CRelativeTickTimer  *); /* linkage=_ZNK18CRelativeTickTimer21GetDurationInProgressEv */
	void CRelativeTickTimer(class CRelativeTickTimer *); /* linkage=_ZN18CRelativeTickTimerC4Ev */
};

// <0464BCE7> ../public/tier0/platform.h:616
inline void CRelativeTickTimer::Start()
{
} /* size: 0 */

// <0464BCCE> ../public/tier0/platform.h:620
inline void CRelativeTickTimer::End()
{
} /* size: 0 */

// <0464BCB5> ../public/tier0/platform.h:625
inline void CRelativeTickTimer::GetDuration()
{
} /* size: 0 */

// <005A84FC> ../public/tier0/platform.h:629
inline void CRelativeTickTimer::GetDurationInProgress()
{
} /* size: 0 */

// <001BF83F> ../../public/tier0/platform.h:646
uint64 Plat_GetTime(void)
{
} /* size: 0 */

// <06831CDD> ../public/tier0/platform.h:650
void Plat_GetLocalTime(tm *)
{
} /* size: 0 */

// <00128958> ../public/tier0/platform.h:661
double Plat_FloatTime(void)
{
} /* size: 0 */

// <008A58F8> ../public/tier0/platform.h:663
uint32 Plat_MSTime(void)
{
} /* size: 0 */

// <0229A96F> ../public/tier0/platform.h:665
uint64 Plat_USTime(void)
{
} /* size: 0 */

// <000B0E6C> ../public/tier0/platform.h:667
char* Plat_ctime(const time_t *, char *, size_t)
{
} /* size: 0 */

// <00042EFE> ../public/tier0/platform.h:668
tm* Plat_gmtime(const time_t *, tm *)
{
} /* size: 0 */

// <00042EDA> ../public/tier0/platform.h:670
tm* Plat_localtime(const time_t *, tm *)
{
} /* size: 0 */

// <0006B2B8> ../public/tier0/platform.h:750
// member functions: 8
// member variables: 6
// struct size: 16
struct CPULogicalProcessor_t {
	uint16 m_nPhysicalID; /* 0 2 */
	uint8 m_nCoreID; /* 2 1 */
	uint8 m_nSMTIndex; /* 3 1 */
	uint8 m_nProcessorGroup; /* 4 1 */
	uint8 m_nProcessorGroupRelIndex; /* 5 1 */
	uint64 m_nMaxFrequency; /* 8 8 */
	/* ../public/tier0/platform.h:776 */
	bool IsSameCore(const CPULogicalProcessor_t* , const CPULogicalProcessor_t& );
	/* ../public/tier0/platform.h:782 */
	void Reset(CPULogicalProcessor_t* );
	/* ../public/tier0/platform.h:791 */
	bool IsPhysicalIDSet(const CPULogicalProcessor_t* );
	/* ../public/tier0/platform.h:795 */
	bool IsCoreIDSet(const CPULogicalProcessor_t* );
	/* ../public/tier0/platform.h:799 */
	bool IsProcessorGroupSet(const CPULogicalProcessor_t* );
	/* ../public/tier0/platform.h:803 */
	bool IsProcessorGroupRelIndexSet(const CPULogicalProcessor_t* );
	/* ../public/tier0/platform.h:807 */
	bool IsSet(const CPULogicalProcessor_t* );
	/* ../public/tier0/platform.h:813 */
	bool IsMaxFrequencySet(const CPULogicalProcessor_t* );
};

// <004E41E4> ../public/tier0/platform.h:776
inline void CPULogicalProcessor_t::IsSameCore(const CPULogicalProcessor_t& other)
{
} /* size: 0 */

// <000ABB1C> ../public/tier0/platform.h:782
inline void CPULogicalProcessor_t::Reset()
{
} /* size: 0 */

// <000ABB03> ../public/tier0/platform.h:791
inline void CPULogicalProcessor_t::IsPhysicalIDSet()
{
} /* size: 0 */

// <000ABAEA> ../public/tier0/platform.h:795
inline void CPULogicalProcessor_t::IsCoreIDSet()
{
} /* size: 0 */

// <000ABAD1> ../public/tier0/platform.h:799
inline void CPULogicalProcessor_t::IsProcessorGroupSet()
{
} /* size: 0 */

// <000ABAB8> ../public/tier0/platform.h:813
inline void CPULogicalProcessor_t::IsMaxFrequencySet()
{
} /* size: 0 */

// <0006B44C> ../public/tier0/platform.h:819
// member function: 1
// member variables: 29
// struct size: 80
struct CPUInformation {
	int m_Size; /* 0 4 */
	uint16 m_nLogicalProcessors; /* 4 2 */
	uint16 m_nPhysicalProcessors; /* 6 2 */
	bool m_bRDTSC:1; /* 8: 0 1 */
	bool m_bInvariantTSC:1; /* 8: 1 1 */
	bool m_bCMOV:1; /* 8: 2 1 */
	bool m_bFCMOV:1; /* 8: 3 1 */
	bool m_bSSE:1; /* 8: 4 1 */
	bool m_bSSE2:1; /* 8: 5 1 */
	bool m_b3DNow:1; /* 8: 6 1 */
	bool m_bMMX:1; /* 8: 7 1 */
	bool m_bHT:1; /* 9: 0 1 */
	bool m_bSSE3:1; /* 9: 1 1 */
	bool m_bSSSE3:1; /* 9: 2 1 */
	bool m_bSSE4a:1; /* 9: 3 1 */
	bool m_bSSE41:1; /* 9: 4 1 */
	bool m_bSSE42:1; /* 9: 5 1 */
	bool m_bAVX:1; /* 9: 6 1 */
	char * m_szProcessorID; /* 16 8 */
	char * m_szProcessorBrand; /* 24 8 */
	uint32 m_nModel; /* 32 4 */
	uint32 m_nFeatures[3]; /* 36 12 */
	uint32 m_nL1CacheSizeKb; /* 48 4 */
	uint32 m_nL1CacheDesc; /* 52 4 */
	uint32 m_nL2CacheSizeKb; /* 56 4 */
	uint32 m_nL2CacheDesc; /* 60 4 */
	uint32 m_nL3CacheSizeKb; /* 64 4 */
	uint32 m_nL3CacheDesc; /* 68 4 */
	CPULogicalProcessor_t * m_pPerLogicalInfo; /* 72 8 */
	/* ../public/tier0/platform.h:867 */
	void CPUInformation(CPUInformation* );
};

// <000ABAA1> ../public/tier0/platform.h:867
void CPUInformation::CPUInformation()
{
} /* size: 0 */

// <000ABA88> ../public/tier0/platform.h:867
inline void CPUInformation::CPUInformation()
{
} /* size: 0 */

// <001284D3> ../public/tier0/platform.h:870
const CPUInformation& GetCPUInformation(void)
{
} /* size: 0 */

// <001284C3> ../public/tier0/platform.h:894
uint64 Plat_GetCPUFrequency(void)
{
} /* size: 0 */

// <00128286> ../public/tier0/platform.h:899
const char* Plat_GetEnv(const char *)
{
} /* size: 0 */

// <00128BD5> ../public/tier0/platform.h:907
void Plat_SetGameDirectories(const char* const *, int)
{
} /* size: 0 */

// <01711B82> ../public/tier0/platform.h:916
size_t Plat_ApproximateProcessMemoryUsage(void)
{
} /* size: 0 */

// <0006B69D> ../public/tier0/platform.h:922
// member variables: 8
// struct size: 64
struct OsMemoryStatus_t {
	uint32 m_nMemoryLoad; /* 0 4 */
	uint64 m_nTotalPhys; /* 8 8 */
	uint64 m_nAvailPhys; /* 16 8 */
	uint64 m_nTotalPageFile; /* 24 8 */
	uint64 m_nAvailPageFile; /* 32 8 */
	uint64 m_nTotalVirtual; /* 40 8 */
	uint64 m_nAvailVirtual; /* 48 8 */
	uint64 m_nAvailExtendedVirtual; /* 56 8 */
};

// <00128744> ../public/tier0/platform.h:934
bool Plat_GlobalMemoryStatus(OsMemoryStatus_t *)
{
} /* size: 0 */

// <001287E2> ../public/tier0/platform.h:935
bool Plat_InstallUrlHandler(const char *)
{
} /* size: 0 */

// <001284F8> ../public/tier0/platform.h:942
void SetExitProcessCallback(ExitProcessCallbackType)
{
} /* size: 0 */

// <000040C4> ../public/tier0/platform.h:944
void Plat_ExitProcess(int)
{
} /* size: 0 */

// <00228D93> ../public/tier0/platform.h:947
bool Plat_NeedsLowFragmentation(void)
{
} /* size: 0 */

// <01259861> ../public/tier0/platform.h:962
bool Plat_HasClipboardText(void)
{
} /* size: 0 */

// <0125983B> ../public/tier0/platform.h:965
char* Plat_GetClipboardText(void)
{
} /* size: 0 */

// <0125984B> ../public/tier0/platform.h:967
void Plat_SetClipboardText(const char *)
{
} /* size: 0 */

// <0125982F> ../public/tier0/platform.h:969
void Plat_ClearClipboardText(void)
{
} /* size: 0 */

// <001286DE> ../public/tier0/platform.h:975
void Plat_AttachDebuggerToProcess(bool, bool)
{
} /* size: 0 */

// <00128BF0> ../public/tier0/platform.h:991
bool Plat_VerifyHardwareKeyPrompt(void)
{
} /* size: 0 */

// <001281E1> ../public/tier0/platform.h:1006
bool Plat_FileExists(const char *)
{
} /* size: 0 */

// <0013F28A> ../public/tier0/platform.h:1009
uint64 Plat_FileSize(const char *)
{
} /* size: 0 */

// <001281FA> ../public/tier0/platform.h:1010
bool Plat_IsDirectory(const char *)
{
} /* size: 0 */

// <000B0E4E> ../public/tier0/platform.h:1014
bool Plat_CreateDirectory(const char *, bool)
{
} /* size: 0 */

// <000B0D8B> ../public/tier0/platform.h:1015
bool Plat_RemoveDirectory(const char *)
{
} /* size: 0 */

// <00024601> ../public/tier0/platform.h:1016
bool Plat_RemoveFile(const char *)
{
} /* size: 0 */

// <012598ED> ../public/tier0/platform.h:1022
bool Plat_SafeRemoveFile(const char *, bool)
{
} /* size: 0 */

// <04635D01> ../public/tier0/platform.h:1028
void Plat_Printf(const char *, ...)
{
} /* size: 0 */

// <00128244> ../public/tier0/platform.h:1031
void Plat_DisableIOBuffering(void)
{
} /* size: 0 */

// <009A66AF> ../public/tier0/platform.h:1034
bool Plat_IsConsoleApplication(void)
{
} /* size: 0 */

// <00128C16> ../public/tier0/platform.h:1035
void Plat_SetIsConsoleApplication(bool)
{
} /* size: 0 */

// <001288DC> ../public/tier0/platform.h:1039
bool Plat_IsInTestMode(void)
{
} /* size: 0 */

// <00128C00> ../public/tier0/platform.h:1040
void Plat_SetIsInTestMode(bool)
{
} /* size: 0 */

// <0002447B> ../public/tier0/platform.h:1043
bool Plat_IsInHeadlessMode(void)
{
} /* size: 0 */

// <009DC58A> ../public/tier0/platform.h:1047
bool Plat_IsRunningOnCustomerMachine(void)
{
} /* size: 0 */

// <00128260> ../public/tier0/platform.h:1050
bool Plat_IgnoreContentAsserts(void)
{
} /* size: 0 */

// <0002423E> ../public/tier0/platform.h:1052
bool Plat_IsNoAssert(void)
{
} /* size: 0 */

// <01259809> ../public/tier0/platform.h:1053
void Plat_SetNoAssert(void)
{
} /* size: 0 */

// <003DDE5B> ../public/tier0/platform.h:1169
void* Plat_GetProcAddress(const char *, const char *)
{
} /* size: 0 */

// <0008348C> ../public/tier0/platform.h:1170
void* Plat_GetModuleProcAddress(PlatModule_t, const char *)
{
} /* size: 0 */

// <007CD9E1> ../public/tier0/platform.h:1171
PlatModule_t Plat_LoadModule(const char *, int *)
{
} /* size: 0 */

// <04635F25> ../public/tier0/platform.h:1175
int Plat_LoadModuleRaw(const char *, PlatModule_t *, uint32)
{
} /* size: 0 */

// <04635E4A> ../public/tier0/platform.h:1176
void Plat_UnloadModule(PlatModule_t)
{
} /* size: 0 */

// <04635E2C> ../public/tier0/platform.h:1186
CreateInterfaceFn Plat_GetModuleInterfaceFactory(PlatModule_t, int *)
{
} /* size: 0 */

// <003643AE> ../public/tier0/platform.h:1254
uint Plat_GetPageSize(void)
{
} /* size: 0 */

// <0036439F> ../public/tier0/platform.h:1255
uint Plat_GetAllocationGranularity(void)
{
} /* size: 0 */

// <066ECFCD> ../public/tier0/platform.h:1283
void* Plat_VirtualAlloc(void *, size_t, PlatVirtualOperation_t, uint, uintp)
{
} /* size: 0 */

// <066ECF9C> ../public/tier0/platform.h:1285
bool Plat_VirtualFree(void *, size_t, PlatVirtualOperation_t)
{
} /* size: 0 */

// <00128B49> ../public/tier0/platform.h:1289
size_t Plat_SetVirtualReserveWarnLimit(size_t)
{
} /* size: 0 */

// <04636140> ../public/tier0/platform.h:1295
bool Plat_InitializeCOM(void)
{
} /* size: 0 */

// <04636276> ../public/tier0/platform.h:1296
void Plat_ShutdownCOM(void)
{
} /* size: 0 */

// <00128B7B> ../public/tier0/platform.h:1411
EOSType Plat_GetOSType(void)
{
} /* size: 0 */

// <00128B62> ../public/tier0/platform.h:1412
const char* GetNameFromOSType(EOSType)
{
} /* size: 0 */

// <001286AF> ../public/tier0/platform.h:1417
bool Plat_IsRunningUnderProton(void)
{
} /* size: 0 */

// <00228C62> ../public/tier0/platform.h:1425
void Plat_BeginWatchdogTimer(int)
{
} /* size: 0 */

// <00228C56> ../public/tier0/platform.h:1426
void Plat_EndWatchdogTimer(void)
{
} /* size: 0 */

// <00228FB7> ../public/tier0/platform.h:1429
void Plat_SetWatchdogHandlerFunction(Plat_WatchDogHandlerFunction_t)
{
} /* size: 0 */

// <00394539> ../public/tier0/platform.h:1437
// member variables: 2
// struct size: 16
struct SignalName_t {
	const char * szName; /* 0 8 */
	SignalName_t * pNext; /* 8 8 */
};

// <0039456E> ../public/tier0/platform.h:1443
// member variable: 1
// struct size: 8
struct VSignalHandlerInfo_t {
	SignalName_t * pNames; /* 0 8 */
};

// <06F1F424> ../../public/tier0/platform.h:1477
inline CCluster** Construct<CFeAgglomerator::CCluster*>(CCluster** pMemory)
{
} /* size: 0 */

// <06F1EEF0> ../../public/tier0/platform.h:1477
inline CLink* Construct<CFeAgglomerator::CLink>(CLink* pMemory)
{
} /* size: 0 */

// <06E92990> ../public/tier0/platform.h:1477
inline CUtlTokenReference* Construct<CUtlTokenReference>(CUtlTokenReference* pMemory)
{
} /* size: 0 */

// <06E928CE> ../public/tier0/platform.h:1477
inline TokenWarning_t* Construct<TokenWarning_t>(TokenWarning_t* pMemory)
{
} /* size: 0 */

// <06D5C7C9> ../../public/tier0/platform.h:1477
inline audio_device_description_t* Construct<audio_device_description_t>(audio_device_description_t* pMemory)
{
} /* size: 0 */

// <06AAF718> ../public/tier0/platform.h:1477
inline DynamicComboInfo_t* Construct<CVfxByteCodeManager::DynamicComboInfo_t>(DynamicComboInfo_t* pMemory)
{
} /* size: 0 */

// <06AAF5DF> ../public/tier0/platform.h:1477
inline ByteCodeInfo_t* Construct<CVfxByteCodeManager::ByteCodeInfo_t>(ByteCodeInfo_t* pMemory)
{
} /* size: 0 */

// <06AAB2C5> ../public/tier0/platform.h:1477
inline Node_t* Construct<CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t*, int>::Node_t>(Node_t* pMemory)
{
} /* size: 0 */

// <06AAA661> ../public/tier0/platform.h:1477
inline Node_t* Construct<CUtlMap<CVfxHashValue, int, int>::Node_t>(Node_t* pMemory)
{
} /* size: 0 */

// <06A5C00B> ../public/tier0/platform.h:1477
inline Node_t* Construct<CUtlMap<CUtlString, bool>::Node_t>(Node_t* pMemory)
{
} /* size: 0 */

// <069DB066> ../public/tier0/platform.h:1477
inline Node_t* Construct<CUtlMap<long long unsigned int, bool, unsigned int>::Node_t>(Node_t* pMemory)
{
} /* size: 0 */

// <069DA354> ../public/tier0/platform.h:1477
inline Node_t* Construct<CUtlMap<unsigned int, int, int>::Node_t>(Node_t* pMemory)
{
} /* size: 0 */

// <068EE8B2> ../public/tier0/platform.h:1477
inline CVfxStaticComboData* Construct<CVfxStaticComboData>(CVfxStaticComboData* pMemory)
{
} /* size: 0 */

// <068EE0EA> ../public/tier0/platform.h:1477
inline SerializeStaticCombosWorkUnit_t* Construct<SerializeStaticCombosWorkUnit_t>(SerializeStaticCombosWorkUnit_t* pMemory)
{
} /* size: 0 */

// <068EDA5D> ../public/tier0/platform.h:1477
inline CVfxMode* Construct<CVfxMode>(CVfxMode* pMemory)
{
} /* size: 0 */

// <068ED991> ../public/tier0/platform.h:1477
inline CVfxModeSettings* Construct<CVfxModeSettings>(CVfxModeSettings* pMemory)
{
} /* size: 0 */

// <068ED8DE> ../public/tier0/platform.h:1477
inline CVfxRule* Construct<CVfxRule>(CVfxRule* pMemory)
{
} /* size: 0 */

// <068ED84F> ../public/tier0/platform.h:1477
inline CVfxCombo* Construct<CVfxCombo>(CVfxCombo* pMemory)
{
} /* size: 0 */

// <068E711F> ../public/tier0/platform.h:1477
inline CVfxVariableIndexArray* Construct<CVfxVariableIndexArray>(CVfxVariableIndexArray* pMemory)
{
} /* size: 0 */

// <068E6179> ../public/tier0/platform.h:1477
inline CVfxShaderAttribute* Construct<CVfxShaderAttribute>(CVfxShaderAttribute* pMemory)
{
} /* size: 0 */

// <068E58A5> ../public/tier0/platform.h:1477
inline ConstantBufferVariable_t* Construct<ConstantBufferVariable_t>(ConstantBufferVariable_t* pMemory)
{
} /* size: 0 */

// <068E56B5> ../public/tier0/platform.h:1477
inline CVfxStaticComboVcsEntry* Construct<CVfxStaticComboVcsEntry>(CVfxStaticComboVcsEntry* pMemory)
{
} /* size: 0 */

// <068E5392> ../public/tier0/platform.h:1477
inline CVfxVariableDescription* Construct<CVfxVariableDescription>(CVfxVariableDescription* pMemory)
{
} /* size: 0 */

// <068E52F3> ../public/tier0/platform.h:1477
inline CVfxTextureChannelProcessor* Construct<CVfxTextureChannelProcessor>(CVfxTextureChannelProcessor* pMemory)
{
} /* size: 0 */

// <068E5254> ../public/tier0/platform.h:1477
inline ConstantBufferDescription_t* Construct<ConstantBufferDescription_t>(ConstantBufferDescription_t* pMemory)
{
} /* size: 0 */

// <068E51B5> ../public/tier0/platform.h:1477
inline CUtlVector<VsInputSignatureElement_t, CUtlMemory<VsInputSignatureElement_t, int> >* Construct<CUtlVector<VsInputSignatureElement_t> >(CUtlVector<VsInputSignatureElement_t, CUtlMemory<VsInputSignatureElement_t, int> >* pMemory)
{
} /* size: 0 */

// <068E4C6A> ../public/tier0/platform.h:1477
inline VfxStaticComboLoadRequest_t* Construct<VfxStaticComboLoadRequest_t>(VfxStaticComboLoadRequest_t* pMemory)
{
} /* size: 0 */

// <068E27EF> ../public/tier0/platform.h:1477
inline Node_t* Construct<CUtlMap<unsigned int, CVfxStaticComboData::ComputeVariablesUsedInStaticCombo(const CVfxProgramData*)::BindInfo_t, int>::Node_t>(Node_t* pMemory)
{
} /* size: 0 */

// <068E12B8> ../public/tier0/platform.h:1477
inline Node_t* Construct<CUtlMap<unsigned int, unsigned int, int>::Node_t>(Node_t* pMemory)
{
} /* size: 0 */

// <06651614> ../public/tier0/platform.h:1477
inline VectorAligned* Construct<VectorAligned>(VectorAligned* pMemory)
{
} /* size: 0 */

// <064C2402> ../public/tier0/platform.h:1477
inline CJointIndexData* Construct<CJointIndexData>(CJointIndexData* pMemory)
{
} /* size: 0 */

// <06310EC9> ../public/tier0/platform.h:1477
inline RayTracingResult_t* Construct<RayTracingResult_t>(RayTracingResult_t* pMemory)
{
} /* size: 0 */

// <0630FD75> ../public/tier0/platform.h:1477
inline InstancedRayTracingEnvironmentBVHNode_t* Construct<InstancedRayTracingEnvironmentBVHNode_t>(InstancedRayTracingEnvironmentBVHNode_t* pMemory)
{
} /* size: 0 */

// <0630A9B2> ../public/tier0/platform.h:1477
inline MeshTraceOutput* Construct<MeshTraceOutput>(MeshTraceOutput* pMemory)
{
} /* size: 0 */

// <06190470> ../public/tier0/platform.h:1477
inline RayTracingSingleResult_t* Construct<RayTracingSingleResult_t>(RayTracingSingleResult_t* pMemory)
{
} /* size: 0 */

// <0614CD87> ../public/tier0/platform.h:1477
inline CQEMEdge* Construct<CQEMEdge>(CQEMEdge* pMemory)
{
} /* size: 0 */

// <0614C516> ../public/tier0/platform.h:1477
inline edge_queue_entry_t* Construct<edge_queue_entry_t>(edge_queue_entry_t* pMemory)
{
} /* size: 0 */

// <0614B3CC> ../public/tier0/platform.h:1477
inline CVertVisit* Construct<CVertVisit>(CVertVisit* pMemory)
{
} /* size: 0 */

// <0614B271> ../public/tier0/platform.h:1477
inline CQuadricError* Construct<CQuadricError>(CQuadricError* pMemory)
{
} /* size: 0 */

// <0610E686> ../public/tier0/platform.h:1477
inline Face_t* Construct<CQuickHullSimplifier::Face_t>(Face_t* pMemory)
{
} /* size: 0 */

// <0610DC0E> ../public/tier0/platform.h:1477
inline Cluster_t* Construct<CQuickHullSimplifier::Cluster_t>(Cluster_t* pMemory)
{
} /* size: 0 */

// <06084EAD> ../public/tier0/platform.h:1477
inline CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentLis Construct<CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int> > >(CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentLis pMemory)
{
} /* size: 0 */

// <0606FD3E> ../public/tier0/platform.h:1477
inline TransferVertex_t* Construct<TransferVertex_t>(TransferVertex_t* pMemory)
{
} /* size: 0 */

// <0606FC9F> ../public/tier0/platform.h:1477
inline VertexStreamIndex_t* Construct<CModelMesh::VertexStreamIndex_t>(VertexStreamIndex_t* pMemory)
{
} /* size: 0 */

// <0606AF41> ../public/tier0/platform.h:1477
inline Vector4D* Construct<Vector4D>(Vector4D* pMemory)
{
} /* size: 0 */

// <05F6F135> ../public/tier0/platform.h:1477
inline FaceGroup_t* Construct<CModelMesh::FaceGroup_t>(FaceGroup_t* pMemory)
{
} /* size: 0 */

// <05F63BEC> ../public/tier0/platform.h:1477
inline ComponentEntry_t* Construct<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t>(ComponentEntry_t* pMemory)
{
} /* size: 0 */

// <05F63B5D> ../public/tier0/platform.h:1477
inline ComponentReference_t* Construct<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t>(ComponentReference_t* pMemory)
{
} /* size: 0 */

// <05F627E2> ../public/tier0/platform.h:1477
inline ComponentEntry_t* Construct<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t>(ComponentEntry_t* pMemory)
{
} /* size: 0 */

// <05F62777> ../public/tier0/platform.h:1477
inline ComponentReference_t* Construct<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t>(ComponentReference_t* pMemory)
{
} /* size: 0 */

// <05F62601> ../public/tier0/platform.h:1477
inline ComponentEntry_t* Construct<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t>(ComponentEntry_t* pMemory)
{
} /* size: 0 */

// <05F62572> ../public/tier0/platform.h:1477
inline ComponentReference_t* Construct<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t>(ComponentReference_t* pMemory)
{
} /* size: 0 */

// <05F5FA23> ../public/tier0/platform.h:1477
inline ComponentEntry_t* Construct<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t>(ComponentEntry_t* pMemory)
{
} /* size: 0 */

// <05F5F9B8> ../public/tier0/platform.h:1477
inline ComponentReference_t* Construct<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t>(ComponentReference_t* pMemory)
{
} /* size: 0 */

// <05EE458B> ../public/tier0/platform.h:1477
inline HullIfrSourceTriangle_t* Construct<HullIfrSourceTriangle_t>(HullIfrSourceTriangle_t* pMemory)
{
} /* size: 0 */

// <05EE362D> ../public/tier0/platform.h:1477
inline ComponentHandleWithListPointer_t* Construct<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge_t>::ComponentHandleWithListPointer_t>(ComponentHandleWithListPointer_t* pMemory)
{
} /* size: 0 */

// <05ED6C66> ../public/tier0/platform.h:1477
inline ComponentEntry_t* Construct<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Vertex_t>::ComponentEntry_t>(ComponentEntry_t* pMemory)
{
} /* size: 0 */

// <05ED6BFB> ../public/tier0/platform.h:1477
inline ComponentReference_t* Construct<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Vertex_t>::ComponentReference_t>(ComponentReference_t* pMemory)
{
} /* size: 0 */

// <05ED6935> ../public/tier0/platform.h:1477
inline ComponentEntry_t* Construct<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Face_t>::ComponentEntry_t>(ComponentEntry_t* pMemory)
{
} /* size: 0 */

// <05ED68CA> ../public/tier0/platform.h:1477
inline ComponentReference_t* Construct<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Face_t>::ComponentReference_t>(ComponentReference_t* pMemory)
{
} /* size: 0 */

// <05ED2F4D> ../public/tier0/platform.h:1477
inline ComponentEntry_t* Construct<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge_t>::ComponentEntry_t>(ComponentEntry_t* pMemory)
{
} /* size: 0 */

// <05ED2EE2> ../public/tier0/platform.h:1477
inline ComponentReference_t* Construct<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge_t>::ComponentReference_t>(ComponentReference_t* pMemory)
{
} /* size: 0 */

// <05E5C35F> ../public/tier0/platform.h:1477
inline qhVector3* Construct<qhVector3>(qhVector3* pMemory)
{
} /* size: 0 */

// <05E5BF65> ../public/tier0/platform.h:1477
inline ComponentHandleWithListPointer_t* Construct<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t>(ComponentHandleWithListPointer_t* pMemory)
{
} /* size: 0 */

// <05E56155> ../public/tier0/platform.h:1477
inline VertexSet_t** Construct<CHullIVR::VertexSet_t*>(VertexSet_t** pMemory)
{
} /* size: 0 */

// <05E4DFFD> ../public/tier0/platform.h:1477
inline ComponentEntry_t* Construct<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::ComponentEntry_t>(ComponentEntry_t* pMemory)
{
} /* size: 0 */

// <05E4DF92> ../public/tier0/platform.h:1477
inline ComponentReference_t* Construct<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::ComponentReference_t>(ComponentReference_t* pMemory)
{
} /* size: 0 */

// <05E4DD87> ../public/tier0/platform.h:1477
inline ComponentEntry_t* Construct<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentEntry_t>(ComponentEntry_t* pMemory)
{
} /* size: 0 */

// <05E4DD1C> ../public/tier0/platform.h:1477
inline ComponentReference_t* Construct<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentReference_t>(ComponentReference_t* pMemory)
{
} /* size: 0 */

// <05E4D5C2> ../public/tier0/platform.h:1477
inline ComponentEntry_t* Construct<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>::ComponentEntry_t>(ComponentEntry_t* pMemory)
{
} /* size: 0 */

// <05E4D557> ../public/tier0/platform.h:1477
inline ComponentReference_t* Construct<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>::ComponentReference_t>(ComponentReference_t* pMemory)
{
} /* size: 0 */

// <05DDCF59> ../public/tier0/platform.h:1477
inline CClusterInfo* Construct<CDualHullAgglomerator::CClusterInfo>(CClusterInfo* pMemory)
{
} /* size: 0 */

// <05DD3941> ../public/tier0/platform.h:1477
inline int* Construct<int>(int* pMemory)
{
} /* size: 0 */

// <05DBC38F> ../public/tier0/platform.h:1477
inline ComponentEntry_t* Construct<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentEntry_t>(ComponentEntry_t* pMemory)
{
} /* size: 0 */

// <05DBC324> ../public/tier0/platform.h:1477
inline ComponentReference_t* Construct<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentReference_t>(ComponentReference_t* pMemory)
{
} /* size: 0 */

// <05DBC035> ../public/tier0/platform.h:1477
inline ComponentEntry_t* Construct<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>::ComponentEntry_t>(ComponentEntry_t* pMemory)
{
} /* size: 0 */

// <05DBBFCA> ../public/tier0/platform.h:1477
inline ComponentReference_t* Construct<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>::ComponentReference_t>(ComponentReference_t* pMemory)
{
} /* size: 0 */

// <05DB6A0F> ../public/tier0/platform.h:1477
inline ComponentEntry_t* Construct<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::ComponentEntry_t>(ComponentEntry_t* pMemory)
{
} /* size: 0 */

// <05DB69A4> ../public/tier0/platform.h:1477
inline ComponentReference_t* Construct<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::ComponentReference_t>(ComponentReference_t* pMemory)
{
} /* size: 0 */

// <05D32FCA> ../public/tier0/platform.h:1477
inline MaterialParamInt_t* Construct<MaterialParamInt_t>(MaterialParamInt_t* pMemory)
{
} /* size: 0 */

// <05D32F2B> ../public/tier0/platform.h:1477
inline MaterialParamFloat_t* Construct<MaterialParamFloat_t>(MaterialParamFloat_t* pMemory)
{
} /* size: 0 */

// <05D32E8C> ../public/tier0/platform.h:1477
inline MaterialParamVector_t* Construct<MaterialParamVector_t>(MaterialParamVector_t* pMemory)
{
} /* size: 0 */

// <05D32DED> ../public/tier0/platform.h:1477
inline MaterialParamTexture_t* Construct<MaterialParamTexture_t>(MaterialParamTexture_t* pMemory)
{
} /* size: 0 */

// <05D32D4E> ../public/tier0/platform.h:1477
inline MaterialParamString_t* Construct<MaterialParamString_t>(MaterialParamString_t* pMemory)
{
} /* size: 0 */

// <05CDB48B> ../public/tier0/platform.h:1477
inline CUtlVector<BoundaryLoopVertex_t, CUtlMemory<BoundaryLoopVertex_t, int> >* Construct<CUtlVector<BoundaryLoopVertex_t> >(CUtlVector<BoundaryLoopVertex_t, CUtlMemory<BoundaryLoopVertex_t, int> >* pMemory)
{
} /* size: 0 */

// <05CDABC6> ../public/tier0/platform.h:1477
inline PossibleCorner_t* Construct<PossibleCorner_t>(PossibleCorner_t* pMemory)
{
} /* size: 0 */

// <05CD9BD8> ../public/tier0/platform.h:1477
inline VertexMatrixPosition_t* Construct<VertexMatrixPosition_t>(VertexMatrixPosition_t* pMemory)
{
} /* size: 0 */

// <05CD8A89> ../public/tier0/platform.h:1477
inline CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >* Construct<CUtlVector<unsigned int> >(CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >* pMemory)
{
} /* size: 0 */

// <05CD7C34> ../public/tier0/platform.h:1477
inline BoundaryLoopVertex_t* Construct<BoundaryLoopVertex_t>(BoundaryLoopVertex_t* pMemory)
{
} /* size: 0 */

// <05C9740B> ../public/tier0/platform.h:1477
inline CUtlVector<Vector, CUtlMemory<Vector, int> >* Construct<CUtlVector<Vector> >(CUtlVector<Vector, CUtlMemory<Vector, int> >* pMemory)
{
} /* size: 0 */

// <05C96B6B> ../public/tier0/platform.h:1477
inline Vector2D* Construct<Vector2D>(Vector2D* pMemory)
{
} /* size: 0 */

// <05C95AAD> ../public/tier0/platform.h:1477
inline CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >* Construct<CUtlVector<Vector2D> >(CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >* pMemory)
{
} /* size: 0 */

// <05C94C32> ../public/tier0/platform.h:1477
inline TriangleVertexBarycentric_t* Construct<TriangleVertexBarycentric_t>(TriangleVertexBarycentric_t* pMemory)
{
} /* size: 0 */

// <05C1F7BC> ../public/tier0/platform.h:1477
inline HalfEdgeWithLength_t* Construct<CMeshEdgeSplitter::HalfEdgeWithLength_t>(HalfEdgeWithLength_t* pMemory)
{
} /* size: 0 */

// <05C1BF82> ../public/tier0/platform.h:1477
inline Node_t* Construct<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t>(Node_t* pMemory)
{
} /* size: 0 */

// <05BAC205> ../public/tier0/platform.h:1477
inline CMesh* Construct<CMesh>(CMesh* pMemory)
{
} /* size: 0 */

// <05BA9295> ../public/tier0/platform.h:1477
inline VsInputSignatureElement_t* Construct<VsInputSignatureElement_t>(VsInputSignatureElement_t* pMemory)
{
} /* size: 0 */

// <05B2AA11> ../public/tier0/platform.h:1477
inline GLViewLine_t* Construct<GLViewLine_t>(GLViewLine_t* pMemory)
{
} /* size: 0 */

// <05B2A906> ../public/tier0/platform.h:1477
inline GLViewPoly_t* Construct<GLViewPoly_t>(GLViewPoly_t* pMemory)
{
} /* size: 0 */

// <05B2A7F9> ../public/tier0/platform.h:1477
inline CGeoViewVertex* Construct<CGeoViewVertex>(CGeoViewVertex* pMemory)
{
} /* size: 0 */

// <05A9F01E> ../public/tier0/platform.h:1477
inline CPackNode* Construct<CPackNode>(CPackNode* pMemory)
{
} /* size: 0 */

// <05759428> ../public/tier0/platform.h:1477
inline KeyValues3* Construct<KeyValues3>(KeyValues3* pMemory)
{
} /* size: 0 */

// <056BD245> ../public/tier0/platform.h:1477
inline CKV3MemberName* Construct<CKV3MemberName>(CKV3MemberName* pMemory)
{
} /* size: 0 */

// <0566690E> ../public/tier0/platform.h:1477
inline pair<unsigned char*, unsigned int>* Construct<std::pair<unsigned char*, unsigned int> >(pair<unsigned char*, unsigned int>* pMemory)
{
} /* size: 0 */

// <055BE1F0> ../public/tier0/platform.h:1477
inline LoadedObject_t* Construct<CLoadKV3FromDynData::LoadedObject_t>(LoadedObject_t* pMemory)
{
} /* size: 0 */

// <055BE10A> ../public/tier0/platform.h:1477
inline UnresolvedElementReference_t* Construct<CLoadKV3FromDynData::UnresolvedElementReference_t>(UnresolvedElementReference_t* pMemory)
{
} /* size: 0 */

// <0554C307> ../public/tier0/platform.h:1477
inline StackEntry_t* Construct<CKeyValues3Iterator::StackEntry_t>(StackEntry_t* pMemory)
{
} /* size: 0 */

// <054D1B5C> ../public/tier0/platform.h:1477
inline CAnimBone* Construct<CAnimBone>(CAnimBone* pMemory)
{
} /* size: 0 */

// <054D1A1E> ../public/tier0/platform.h:1477
inline CAnimDataChannelDesc* Construct<CAnimDataChannelDesc>(CAnimDataChannelDesc* pMemory)
{
} /* size: 0 */

// <054D16D6> ../public/tier0/platform.h:1477
inline CAnimRetargetElementData* Construct<CAnimRetargetElementData>(CAnimRetargetElementData* pMemory)
{
} /* size: 0 */

// <054D1637> ../public/tier0/platform.h:1477
inline CAnimRetargetChainData* Construct<CAnimRetargetChainData>(CAnimRetargetChainData* pMemory)
{
} /* size: 0 */

// <054D0743> ../public/tier0/platform.h:1477
inline CStrongHandle<InfoForResourceTypeCAnimData>* Construct<CStrongHandle<InfoForResourceTypeCAnimData> >(CStrongHandle<InfoForResourceTypeCAnimData>* pMemory)
{
} /* size: 0 */

// <053E93AA> ../public/tier0/platform.h:1477
inline QuaternionAligned* Construct<QuaternionAligned>(QuaternionAligned* pMemory)
{
} /* size: 0 */

// <04FAF783> ../public/tier0/platform.h:1477
inline CFingerChain* Construct<CFingerChain>(CFingerChain* pMemory)
{
} /* size: 0 */

// <04FAF5FF> ../public/tier0/platform.h:1477
inline CWristBone* Construct<CWristBone>(CWristBone* pMemory)
{
} /* size: 0 */

// <04FAF47B> ../public/tier0/platform.h:1477
inline CFingerBone* Construct<CFingerBone>(CFingerBone* pMemory)
{
} /* size: 0 */

// <04FAF2F7> ../public/tier0/platform.h:1477
inline CFingerSource* Construct<CFingerSource>(CFingerSource* pMemory)
{
} /* size: 0 */

// <04FAF14D> ../public/tier0/platform.h:1477
inline CFootStride* Construct<CFootStride>(CFootStride* pMemory)
{
} /* size: 0 */

// <04FAEFED> ../public/tier0/platform.h:1477
inline CFootTrajectory* Construct<CFootTrajectory>(CFootTrajectory* pMemory)
{
} /* size: 0 */

// <04FAEDCE> ../public/tier0/platform.h:1477
inline CFlexRule* Construct<CFlexRule>(CFlexRule* pMemory)
{
} /* size: 0 */

// <04FAEC4A> ../public/tier0/platform.h:1477
inline CFlexController* Construct<CFlexController>(CFlexController* pMemory)
{
} /* size: 0 */

// <04FAEAC6> ../public/tier0/platform.h:1477
inline CFlexDesc* Construct<CFlexDesc>(CFlexDesc* pMemory)
{
} /* size: 0 */

// <04FAE87F> ../public/tier0/platform.h:1477
inline CMorphData* Construct<CMorphData>(CMorphData* pMemory)
{
} /* size: 0 */

// <04FAE4E0> ../public/tier0/platform.h:1477
inline CMorphRectData* Construct<CMorphRectData>(CMorphRectData* pMemory)
{
} /* size: 0 */

// <04FAE336> ../public/tier0/platform.h:1477
inline CMorphBundleData* Construct<CMorphBundleData>(CMorphBundleData* pMemory)
{
} /* size: 0 */

// <04FADE13> ../public/tier0/platform.h:1477
inline Input_t* Construct<CBoneConstraintPoseSpaceMorph::Input_t>(Input_t* pMemory)
{
} /* size: 0 */

// <04FADC8F> ../public/tier0/platform.h:1477
inline CConstraintTarget* Construct<CConstraintTarget>(CConstraintTarget* pMemory)
{
} /* size: 0 */

// <04FADB0B> ../public/tier0/platform.h:1477
inline CConstraintSlave* Construct<CConstraintSlave>(CConstraintSlave* pMemory)
{
} /* size: 0 */

// <04FAD6D1> ../public/tier0/platform.h:1477
inline CHitBoxSet* Construct<CHitBoxSet>(CHitBoxSet* pMemory)
{
} /* size: 0 */

// <04FAD415> ../public/tier0/platform.h:1477
inline CDrawCullingData* Construct<CDrawCullingData>(CDrawCullingData* pMemory)
{
} /* size: 0 */

// <04FACB9B> ../public/tier0/platform.h:1477
inline CStrongHandle<InfoForResourceTypeCSequenceGroupData>* Construct<CStrongHandle<InfoForResourceTypeCSequenceGroupData> >(CStrongHandle<InfoForResourceTypeCSequenceGroupData>* pMemory)
{
} /* size: 0 */

// <04FAC308> ../public/tier0/platform.h:1477
inline PermModelExtPart_t* Construct<PermModelExtPart_t>(PermModelExtPart_t* pMemory)
{
} /* size: 0 */

// <04FABBBE> ../public/tier0/platform.h:1477
inline VPhysXCollisionAttributes_t* Construct<VPhysXCollisionAttributes_t>(VPhysXCollisionAttributes_t* pMemory)
{
} /* size: 0 */

// <04FAB94E> ../public/tier0/platform.h:1477
inline VPhysXConstraint2_t* Construct<VPhysXConstraint2_t>(VPhysXConstraint2_t* pMemory)
{
} /* size: 0 */

// <04FAB608> ../public/tier0/platform.h:1477
inline VPhysXBodyPart_t* Construct<VPhysXBodyPart_t>(VPhysXBodyPart_t* pMemory)
{
} /* size: 0 */

// <04FAB1F0> ../public/tier0/platform.h:1477
inline RnSoftbodyCapsule_t* Construct<RnSoftbodyCapsule_t>(RnSoftbodyCapsule_t* pMemory)
{
} /* size: 0 */

// <04FAAAE1> ../public/tier0/platform.h:1477
inline RnMeshDesc_t* Construct<RnMeshDesc_t>(RnMeshDesc_t* pMemory)
{
} /* size: 0 */

// <04FAA83B> ../public/tier0/platform.h:1477
inline RnHullDesc_t* Construct<RnHullDesc_t>(RnHullDesc_t* pMemory)
{
} /* size: 0 */

// <04FAA703> ../public/tier0/platform.h:1477
inline RnCapsuleDesc_t* Construct<RnCapsuleDesc_t>(RnCapsuleDesc_t* pMemory)
{
} /* size: 0 */

// <04FAA5CB> ../public/tier0/platform.h:1477
inline RnSphereDesc_t* Construct<RnSphereDesc_t>(RnSphereDesc_t* pMemory)
{
} /* size: 0 */

// <04E81FF4> ../public/tier0/platform.h:1477
inline CBufferString* Construct<CBufferString>(CBufferString* pMemory)
{
} /* size: 0 */

// <04E81CE2> ../public/tier0/platform.h:1477
inline FlexControllerMapping_t* Construct<FlexControllerMapping_t>(FlexControllerMapping_t* pMemory)
{
} /* size: 0 */

// <04E81107> ../public/tier0/platform.h:1477
inline FlexDescMapping_t* Construct<FlexDescMapping_t>(FlexDescMapping_t* pMemory)
{
} /* size: 0 */

// <04E7FFC7> ../public/tier0/platform.h:1477
inline CUtlVector<CUtlHashDict<const CMorphData*, false, false>::Entry_t, CUtlMemory<CUtlHashDict<const CMorphData*, false, fals Construct<CUtlVector<CUtlHashDict<const CMorphData*, false, false>::Entry_t, CUtlMemory<CUtlHashDict<const CMorphData*, false, false>::Entry_t, int> > >(CUtlVector<CUtlHashDict<const CMorphData*, false, false>::Entry_t, CUtlMemory<CUtlHashDict<const CMorphData*, false, fals pMemory)
{
} /* size: 0 */

// <04E34299> ../public/tier0/platform.h:1477
inline CModelMaterialGroup* Construct<CModelMaterialGroup>(CModelMaterialGroup* pMemory)
{
} /* size: 0 */

// <04E3406E> ../public/tier0/platform.h:1477
inline CBoneFlexDriver* Construct<CBoneFlexDriver>(CBoneFlexDriver* pMemory)
{
} /* size: 0 */

// <04E33F6B> ../public/tier0/platform.h:1477
inline CBoneFlexDriverControl* Construct<CBoneFlexDriverControl>(CBoneFlexDriverControl* pMemory)
{
} /* size: 0 */

// <04DBA0C9> ../public/tier0/platform.h:1477
inline CMoveSpeed* Construct<CMoveSpeed>(CMoveSpeed* pMemory)
{
} /* size: 0 */

// <04D98403> ../public/tier0/platform.h:1477
inline CLookAtChainItem* Construct<CLookAtChainItem>(CLookAtChainItem* pMemory)
{
} /* size: 0 */

// <04D6F542> ../public/tier0/platform.h:1477
inline CActivityModifierWeight* Construct<CActivityModifierWeight>(CActivityModifierWeight* pMemory)
{
} /* size: 0 */

// <04D6CC55> ../public/tier0/platform.h:1477
inline CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueType, int> >* Construct<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueType, int> > >(CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueType, int> >* pMemory)
{
} /* size: 0 */

// <04D6CB85> ../public/tier0/platform.h:1477
inline HashValueType* Construct<CActivityToSequenceMapping::HashValueType>(HashValueType* pMemory)
{
} /* size: 0 */

// <04CB989C> ../public/tier0/platform.h:1477
inline CRenderBufferBinding* Construct<CRenderBufferBinding>(CRenderBufferBinding* pMemory)
{
} /* size: 0 */

// <04CB94B9> ../public/tier0/platform.h:1477
inline CMaterialDrawDescriptor* Construct<CMaterialDrawDescriptor>(CMaterialDrawDescriptor* pMemory)
{
} /* size: 0 */

// <04CB92CE> ../public/tier0/platform.h:1477
inline CHitBox* Construct<CHitBox>(CHitBox* pMemory)
{
} /* size: 0 */

// <04CB8E79> ../public/tier0/platform.h:1477
inline CSceneObjectData* Construct<CSceneObjectData>(CSceneObjectData* pMemory)
{
} /* size: 0 */

// <04CB23E3> ../public/tier0/platform.h:1477
inline RenderSkeletonBone_t* Construct<RenderSkeletonBone_t>(RenderSkeletonBone_t* pMemory)
{
} /* size: 0 */

// <04CB08AC> ../public/tier0/platform.h:1477
inline TraceVertex_t* Construct<TraceVertex_t>(TraceVertex_t* pMemory)
{
} /* size: 0 */

// <04CB074D> ../public/tier0/platform.h:1477
inline BufferInfo_t* Construct<RuntimeBuffersInfo_t::BufferInfo_t>(BufferInfo_t* pMemory)
{
} /* size: 0 */

// <04CAE14A> ../public/tier0/platform.h:1477
inline Node_t* Construct<CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::Node_t>(Node_t* pMemory)
{
} /* size: 0 */

// <04CAD4E6> ../public/tier0/platform.h:1477
inline Node_t* Construct<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t>(Node_t* pMemory)
{
} /* size: 0 */

// <04BAD969> ../public/tier0/platform.h:1477
inline CStrongHandle<InfoForResourceTypeIMaterial2>* Construct<CStrongHandle<InfoForResourceTypeIMaterial2> >(CStrongHandle<InfoForResourceTypeIMaterial2>* pMemory)
{
} /* size: 0 */

// <04BABE7A> ../public/tier0/platform.h:1477
inline CSmartPtr<CRenderMesh, CRefCountAccessor>* Construct<CSmartPtr<CRenderMesh> >(CSmartPtr<CRenderMesh, CRefCountAccessor>* pMemory)
{
} /* size: 0 */

// <04BABE4E> ../public/tier0/platform.h:1477
inline long long unsigned int* Construct<long long unsigned int>(long long unsigned int* pMemory)
{
} /* size: 0 */

// <04BABCB5> ../public/tier0/platform.h:1477
inline CompileTimeMesh_t* Construct<CModelBuilder::CompileTimeMesh_t>(CompileTimeMesh_t* pMemory)
{
} /* size: 0 */

// <04BABB7B> ../public/tier0/platform.h:1477
inline CStrongHandle<InfoForResourceTypeCAnimationGroup>* Construct<CStrongHandle<InfoForResourceTypeCAnimationGroup> >(CStrongHandle<InfoForResourceTypeCAnimationGroup>* pMemory)
{
} /* size: 0 */

// <04BABA89> ../public/tier0/platform.h:1477
inline CAnimationGroupResource** Construct<CAnimationGroupResource*>(CAnimationGroupResource** pMemory)
{
} /* size: 0 */

// <04BAB718> ../public/tier0/platform.h:1477
inline BuilderModelBoneFlexDriver_t* Construct<BuilderModelBoneFlexDriver_t>(BuilderModelBoneFlexDriver_t* pMemory)
{
} /* size: 0 */

// <04BA539B> ../public/tier0/platform.h:1477
inline BuilderModelBoneFlexDriverControl_t* Construct<BuilderModelBoneFlexDriverControl_t>(BuilderModelBoneFlexDriverControl_t* pMemory)
{
} /* size: 0 */

// <04BA1FE1> ../public/tier0/platform.h:1477
inline Quaternion* Construct<Quaternion>(Quaternion* pMemory)
{
} /* size: 0 */

// <04BA17C0> ../public/tier0/platform.h:1477
inline CUtlVector<short int, CUtlMemory<short int, int> >* Construct<CUtlVector<short int> >(CUtlVector<short int, CUtlMemory<short int, int> >* pMemory)
{
} /* size: 0 */

// <04BA1675> ../public/tier0/platform.h:1477
inline CStrongHandle<InfoForResourceTypeCRenderMesh>* Construct<CStrongHandle<InfoForResourceTypeCRenderMesh> >(CStrongHandle<InfoForResourceTypeCRenderMesh>* pMemory)
{
} /* size: 0 */

// <04BA1596> ../public/tier0/platform.h:1477
inline CStrongHandle<InfoForResourceTypeCPhysAggregateData>* Construct<CStrongHandle<InfoForResourceTypeCPhysAggregateData> >(CStrongHandle<InfoForResourceTypeCPhysAggregateData>* pMemory)
{
} /* size: 0 */

// <04BA1408> ../public/tier0/platform.h:1477
inline MaterialGroup_t* Construct<MaterialGroup_t>(MaterialGroup_t* pMemory)
{
} /* size: 0 */

// <04BA1293> ../public/tier0/platform.h:1477
inline ModelBoneFlexDriver_t* Construct<ModelBoneFlexDriver_t>(ModelBoneFlexDriver_t* pMemory)
{
} /* size: 0 */

// <04BA1191> ../public/tier0/platform.h:1477
inline ModelBoneFlexDriverControl_t* Construct<ModelBoneFlexDriverControl_t>(ModelBoneFlexDriverControl_t* pMemory)
{
} /* size: 0 */

// <04BA0B2E> ../public/tier0/platform.h:1477
inline Node_t* Construct<CUtlMap<RetargetKey_t, int>::Node_t>(Node_t* pMemory)
{
} /* size: 0 */

// <04AAEF45> ../public/tier0/platform.h:1477
inline HitBoxSetAndMesh_t* Construct<HitBoxSetAndMesh_t>(HitBoxSetAndMesh_t* pMemory)
{
} /* size: 0 */

// <04AAEE92> ../public/tier0/platform.h:1477
inline HitBoxAndMesh_t* Construct<HitBoxAndMesh_t>(HitBoxAndMesh_t* pMemory)
{
} /* size: 0 */

// <04AA989E> ../public/tier0/platform.h:1477
inline CWeakHandle<InfoForResourceTypeIMaterial2>* Construct<CWeakHandle<InfoForResourceTypeIMaterial2> >(CWeakHandle<InfoForResourceTypeIMaterial2>* pMemory)
{
} /* size: 0 */

// <04AA61C5> ../public/tier0/platform.h:1477
inline CFootDefinition* Construct<CFootDefinition>(CFootDefinition* pMemory)
{
} /* size: 0 */

// <04AA60C2> ../public/tier0/platform.h:1477
inline CLookAtChain* Construct<CLookAtChain>(CLookAtChain* pMemory)
{
} /* size: 0 */

// <0496F633> ../public/tier0/platform.h:1477
inline ClassToTraverse_t* Construct<CSchemaInheritanceIterator::ClassToTraverse_t>(ClassToTraverse_t* pMemory)
{
} /* size: 0 */

// <04638060> ../public/tier0/platform.h:1477
inline ModuleInfo_t* Construct<CAppSystemDict::ModuleInfo_t>(ModuleInfo_t* pMemory)
{
} /* size: 0 */

// <04637EAB> ../public/tier0/platform.h:1477
inline AppSystem_t* Construct<CAppSystemDict::AppSystem_t>(AppSystem_t* pMemory)
{
} /* size: 0 */

// <04636F72> ../public/tier0/platform.h:1477
inline InterfaceInfo_t* Construct<CAppSystemDict::InterfaceInfo_t>(InterfaceInfo_t* pMemory)
{
} /* size: 0 */

// <04498D01> ../public/tier0/platform.h:1477
inline FourVectors* Construct<FourVectors>(FourVectors* pMemory)
{
} /* size: 0 */

// <0437EF89> ../public/tier0/platform.h:1477
inline AnimationDecodeDebugDumpElement_t* Construct<AnimationDecodeDebugDumpElement_t>(AnimationDecodeDebugDumpElement_t* pMemory)
{
} /* size: 0 */

// <042DEBCF> ../public/tier0/platform.h:1477
inline NodeData_t* Construct<NodeData_t>(NodeData_t* pMemory)
{
} /* size: 0 */

// <04231C0E> ../public/tier0/platform.h:1477
inline AggregateMeshInfo_t* Construct<AggregateMeshInfo_t>(AggregateMeshInfo_t* pMemory)
{
} /* size: 0 */

// <042319B2> ../public/tier0/platform.h:1477
inline SceneObject_t* Construct<SceneObject_t>(SceneObject_t* pMemory)
{
} /* size: 0 */

// <04231913> ../public/tier0/platform.h:1477
inline InfoOverlayData_t* Construct<InfoOverlayData_t>(InfoOverlayData_t* pMemory)
{
} /* size: 0 */

// <042317D5> ../public/tier0/platform.h:1477
inline AggregateSceneObject_t* Construct<AggregateSceneObject_t>(AggregateSceneObject_t* pMemory)
{
} /* size: 0 */

// <04231736> ../public/tier0/platform.h:1477
inline ExtraVertexStreamOverride_t* Construct<ExtraVertexStreamOverride_t>(ExtraVertexStreamOverride_t* pMemory)
{
} /* size: 0 */

// <04231697> ../public/tier0/platform.h:1477
inline MaterialOverride_t* Construct<MaterialOverride_t>(MaterialOverride_t* pMemory)
{
} /* size: 0 */

// <042315F8> ../public/tier0/platform.h:1477
inline WorldNodeOnDiskBufferData_t* Construct<WorldNodeOnDiskBufferData_t>(WorldNodeOnDiskBufferData_t* pMemory)
{
} /* size: 0 */

// <041ADBAD> ../public/tier0/platform.h:1477
inline EntityIOConnectionData_t* Construct<EntityIOConnectionData_t>(EntityIOConnectionData_t* pMemory)
{
} /* size: 0 */

// <041AD846> ../public/tier0/platform.h:1477
inline EntityKeyValueData_t* Construct<EntityKeyValueData_t>(EntityKeyValueData_t* pMemory)
{
} /* size: 0 */

// <0413FD24> ../public/tier0/platform.h:1477
inline CUtlVector<IWrappedInterpolatedVar::CWrappedIVHashElement_t, CUtlMemory<IWrappedInterpolatedVar::CWrappedIVHashElement_t, Construct<CUtlVector<IWrappedInterpolatedVar::CWrappedIVHashElement_t, CUtlMemory<IWrappedInterpolatedVar::CWrappedIVHashElement_t, int> > >(CUtlVector<IWrappedInterpolatedVar::CWrappedIVHashElement_t, CUtlMemory<IWrappedInterpolatedVar::CWrappedIVHashElement_t, pMemory)
{
} /* size: 0 */

// <0413FC85> ../public/tier0/platform.h:1477
inline CWrappedIVHashElement_t* Construct<IWrappedInterpolatedVar::CWrappedIVHashElement_t>(CWrappedIVHashElement_t* pMemory)
{
} /* size: 0 */

// <04136D99> ../public/tier0/platform.h:1477
inline CStrongHandle<InfoForResourceTypeCTextureBase>* Construct<CStrongHandle<InfoForResourceTypeCTextureBase> >(CStrongHandle<InfoForResourceTypeCTextureBase>* pMemory)
{
} /* size: 0 */

// <03D92436> ../public/tier0/platform.h:1477
inline MeshFragment_t* Construct<CAggregateSceneObject::MeshFragment_t>(MeshFragment_t* pMemory)
{
} /* size: 0 */

// <03D9229F> ../public/tier0/platform.h:1477
inline PerFragmentData_t* Construct<PerFragmentData_t>(PerFragmentData_t* pMemory)
{
} /* size: 0 */

// <03B888B3> ../public/tier0/platform.h:1477
inline CMDLAttachmentData* Construct<CMDLAttachmentData>(CMDLAttachmentData* pMemory)
{
} /* size: 0 */

// <03896AEA> ../public/tier0/platform.h:1477
inline HashFastData_t_<CViewIdInternal>* Construct<CUtlHashFast<CViewIdInternal>::HashFastData_t_<CViewIdInternal> >(HashFastData_t_<CViewIdInternal>* pMemory)
{
} /* size: 0 */

// <03879D1B> ../public/tier0/platform.h:1477
inline TimestampSceneViewData_t* Construct<CTimestampManager::TimestampSceneViewData_t>(TimestampSceneViewData_t* pMemory)
{
} /* size: 0 */

// <03879BC7> ../public/tier0/platform.h:1477
inline SceneSystemTimestampFrameData_t* Construct<SceneSystemTimestampFrameData_t>(SceneSystemTimestampFrameData_t* pMemory)
{
} /* size: 0 */

// <0373952B> ../public/tier0/platform.h:1477
inline RenderTargetInfo_t* Construct<CScratchRenderTargetSystem::RenderTargetInfo_t>(RenderTargetInfo_t* pMemory)
{
} /* size: 0 */

// <036A61EB> ../public/tier0/platform.h:1477
inline TLASInstance_t* Construct<TLASInstance_t>(TLASInstance_t* pMemory)
{
} /* size: 0 */

// <035329BD> ../public/tier0/platform.h:1477
inline CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >* Construct<CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> > >(CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >* pMemory)
{
} /* size: 0 */

// <03529DE0> ../public/tier0/platform.h:1477
inline CStrongHandleCopyable<InfoForResourceTypeIMaterial2>* Construct<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >(CStrongHandleCopyable<InfoForResourceTypeIMaterial2>* pMemory)
{
} /* size: 0 */

// <03464727> ../public/tier0/platform.h:1477
inline RenderPassAttachmentDesc_t* Construct<RenderPassAttachmentDesc_t>(RenderPassAttachmentDesc_t* pMemory)
{
} /* size: 0 */

// <0346260A> ../public/tier0/platform.h:1477
inline RenderPassSubPass_t* Construct<RenderPassSubPass_t>(RenderPassSubPass_t* pMemory)
{
} /* size: 0 */

// <03462599> ../public/tier0/platform.h:1477
inline RenderPassSubPassDependency_t* Construct<RenderPassSubPassDependency_t>(RenderPassSubPassDependency_t* pMemory)
{
} /* size: 0 */

// <0346116E> ../public/tier0/platform.h:1477
inline RenderSubPassAttachment_t* Construct<RenderSubPassAttachment_t>(RenderSubPassAttachment_t* pMemory)
{
} /* size: 0 */

// <0345E754> ../public/tier0/platform.h:1477
inline CWeakHandle<InfoForResourceTypeCTextureBase>* Construct<CWeakHandle<InfoForResourceTypeCTextureBase> >(CWeakHandle<InfoForResourceTypeCTextureBase>* pMemory)
{
} /* size: 0 */

// <03121DF4> ../public/tier0/platform.h:1477
inline DebugTextureDisplay_t* Construct<DebugTextureDisplay_t>(DebugTextureDisplay_t* pMemory)
{
} /* size: 0 */

// <03121CF3> ../public/tier0/platform.h:1477
inline DebugSceneObject_t* Construct<DebugSceneObject_t>(DebugSceneObject_t* pMemory)
{
} /* size: 0 */

// <03121B33> ../public/tier0/platform.h:1477
inline Debug2DText_t* Construct<Debug2DText_t>(Debug2DText_t* pMemory)
{
} /* size: 0 */

// <03121A41> ../public/tier0/platform.h:1477
inline Debug3DText_t* Construct<Debug3DText_t>(Debug3DText_t* pMemory)
{
} /* size: 0 */

// <0311D315> ../public/tier0/platform.h:1477
inline DebugLineSegment3D_t* Construct<DebugLineSegment3D_t>(DebugLineSegment3D_t* pMemory)
{
} /* size: 0 */

// <0311D2A9> ../public/tier0/platform.h:1477
inline DebugLineSegment2D_t* Construct<DebugLineSegment2D_t>(DebugLineSegment2D_t* pMemory)
{
} /* size: 0 */

// <0311D1BF> ../public/tier0/platform.h:1477
inline DebugTextBase_t* Construct<DebugTextBase_t>(DebugTextBase_t* pMemory)
{
} /* size: 0 */

// <02E97E50> ../public/tier0/platform.h:1477
inline ScratchRenderTarget_t* Construct<CSceneSystem::ScratchRenderTarget_t>(ScratchRenderTarget_t* pMemory)
{
} /* size: 0 */

// <02E96535> ../public/tier0/platform.h:1477
inline CRenderBatchList* Construct<CRenderBatchList>(CRenderBatchList* pMemory)
{
} /* size: 0 */

// <02E964A3> ../public/tier0/platform.h:1477
inline CSceneLayer* Construct<CSceneLayer>(CSceneLayer* pMemory)
{
} /* size: 0 */

// <02E9513F> ../public/tier0/platform.h:1477
inline DisplayListToSubmit_t* Construct<DisplayListToSubmit_t>(DisplayListToSubmit_t* pMemory)
{
} /* size: 0 */

// <02E94629> ../public/tier0/platform.h:1477
inline AtlasChart_t* Construct<AtlasChart_t>(AtlasChart_t* pMemory)
{
} /* size: 0 */

// <02E934FC> ../public/tier0/platform.h:1477
inline VertexCacheUpdateRequest_t* Construct<CSceneSystem::VertexCacheUpdateRequest_t>(VertexCacheUpdateRequest_t* pMemory)
{
} /* size: 0 */

// <02E230B2> ../public/tier0/platform.h:1477
inline RenderDescriptorDesc_t* Construct<RenderDescriptorDesc_t>(RenderDescriptorDesc_t* pMemory)
{
} /* size: 0 */

// <02E23023> ../public/tier0/platform.h:1477
inline RenderDescriptorBinding_t* Construct<RenderDescriptorBinding_t>(RenderDescriptorBinding_t* pMemory)
{
} /* size: 0 */

// <02E1B41D> ../public/tier0/platform.h:1477
inline CUtlVector<NameToLightCookieSequence_t, CUtlMemory<NameToLightCookieSequence_t, int> >* Construct<CUtlVector<NameToLightCookieSequence_t, CUtlMemory<NameToLightCookieSequence_t, int> > >(CUtlVector<NameToLightCookieSequence_t, CUtlMemory<NameToLightCookieSequence_t, int> >* pMemory)
{
} /* size: 0 */

// <02E1B31B> ../public/tier0/platform.h:1477
inline NameToLightCookieSequence_t* Construct<NameToLightCookieSequence_t>(NameToLightCookieSequence_t* pMemory)
{
} /* size: 0 */

// <02E1A9AC> ../public/tier0/platform.h:1477
inline CUtlDelegate<void(ISceneView*, const CRenderAttributes*)>* Construct<CUtlDelegate<void(ISceneView*, const CRenderAttributes*)> >(CUtlDelegate<void(ISceneView*, const CRenderAttributes*)>* pMemory)
{
} /* size: 0 */

// <02E1A1BA> ../public/tier0/platform.h:1477
inline CUtlVectorFixedGrowableCompat<CSceneDrawList*, 32>* Construct<CUtlVectorFixedGrowableCompat<CSceneDrawList*, 32> >(CUtlVectorFixedGrowableCompat<CSceneDrawList*, 32>* pMemory)
{
} /* size: 0 */

// <02E183ED> ../public/tier0/platform.h:1477
inline CUtlVector<CUtlHashDict<ISceneObjectDesc*>::Entry_t, CUtlMemory<CUtlHashDict<ISceneObjectDesc*>::Entry_t, int> >* Construct<CUtlVector<CUtlHashDict<ISceneObjectDesc*>::Entry_t, CUtlMemory<CUtlHashDict<ISceneObjectDesc*>::Entry_t, int> > >(CUtlVector<CUtlHashDict<ISceneObjectDesc*>::Entry_t, CUtlMemory<CUtlHashDict<ISceneObjectDesc*>::Entry_t, int> >* pMemory)
{
} /* size: 0 */

// <02E180E0> ../public/tier0/platform.h:1477
inline CUtlVector<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned char, true, true>::Entry_t, Construct<CUtlVector<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned char, true, true>::Entry_t, int> > >(CUtlVector<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned char, true, true>::Entry_t, pMemory)
{
} /* size: 0 */

// <02E174E3> ../public/tier0/platform.h:1477
inline Node_t* Construct<CUtlMap<char const*, int, int, bool (*)(char const* const&, char const* const&)>::Node_t>(Node_t* pMemory)
{
} /* size: 0 */

// <02B764FE> ../public/tier0/platform.h:1477
inline CFrustum* Construct<CFrustum>(CFrustum* pMemory)
{
} /* size: 0 */

// <02B74929> ../public/tier0/platform.h:1477
inline CStrongHandleCopyable<InfoForResourceTypeCTextureBase>* Construct<CStrongHandleCopyable<InfoForResourceTypeCTextureBase> >(CStrongHandleCopyable<InfoForResourceTypeCTextureBase>* pMemory)
{
} /* size: 0 */

// <0269DDCC> ../public/tier0/platform.h:1477
inline CSfxTable* Construct<CSfxTable>(CSfxTable* pMemory)
{
} /* size: 0 */

// <024DAD77> ../public/tier0/platform.h:1477
inline cache_table_t* Construct<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t>(cache_table_t* pMemory)
{
} /* size: 0 */

// <02425EFA> ../public/tier0/platform.h:1477
inline audio_buffer_input_t* Construct<audio_buffer_input_t>(audio_buffer_input_t* pMemory)
{
} /* size: 0 */

// <02358093> ../public/tier0/platform.h:1477
inline CResourceBindingReferenceTrackingData* Construct<CResourceBindingReferenceTrackingData>(CResourceBindingReferenceTrackingData* pMemory)
{
} /* size: 0 */

// <0235413F> ../public/tier0/platform.h:1477
inline ResourceTypeRegistration_t* Construct<ResourceTypeRegistration_t>(ResourceTypeRegistration_t* pMemory)
{
} /* size: 0 */

// <0235408C> ../public/tier0/platform.h:1477
inline NullTypeManager_t* Construct<NullTypeManager_t>(NullTypeManager_t* pMemory)
{
} /* size: 0 */

// <023517B3> ../public/tier0/platform.h:1477
inline ForcedSynchronizationCallbackInfo_t* Construct<CResourceSystem::ForcedSynchronizationCallbackInfo_t>(ForcedSynchronizationCallbackInfo_t* pMemory)
{
} /* size: 0 */

// <0234C4DF> ../public/tier0/platform.h:1477
inline ResourceBindingBase_t* Construct<ResourceBindingBase_t>(ResourceBindingBase_t* pMemory)
{
} /* size: 0 */

// <0229F9F0> ../public/tier0/platform.h:1477
inline ResourceStatusChange_t* Construct<ResourceStatusChange_t>(ResourceStatusChange_t* pMemory)
{
} /* size: 0 */

// <01B56EA0> ../public/tier0/platform.h:1477
inline SboxVertex_t* Construct<SboxVertex_t>(SboxVertex_t* pMemory)
{
} /* size: 0 */

// <0185650B> ../public/tier0/platform.h:1477
inline VBIBBlockHeader_t* Construct<VBIBBlockHeader_t>(VBIBBlockHeader_t* pMemory)
{
} /* size: 0 */

// <01856304> ../public/tier0/platform.h:1477
inline RenderMeshInputLayoutField_t* Construct<RenderMeshInputLayoutField_t>(RenderMeshInputLayoutField_t* pMemory)
{
} /* size: 0 */

// <0185620E> ../public/tier0/platform.h:1477
inline unsigned char* Construct<unsigned char>(unsigned char* pMemory)
{
} /* size: 0 */

// <01851D2A> ../public/tier0/platform.h:1477
inline VPhysXJoint_t* Construct<VPhysXJoint_t>(VPhysXJoint_t* pMemory)
{
} /* size: 0 */

// <0126E079> ../public/tier0/platform.h:1477
inline CUtlVector<CTransform, CUtlMemory<CTransform, int> >* Construct<CUtlVector<CTransform> >(CUtlVector<CTransform, CUtlMemory<CTransform, int> >* pMemory)
{
} /* size: 0 */

// <0126D9EA> ../public/tier0/platform.h:1477
inline RenderInputLayoutField_t* Construct<RenderInputLayoutField_t>(RenderInputLayoutField_t* pMemory)
{
} /* size: 0 */

// <01260CE7> ../public/tier0/platform.h:1477
inline CBuilderMaterialGroup* Construct<CBuilderMaterialGroup>(CBuilderMaterialGroup* pMemory)
{
} /* size: 0 */

// <01260AE4> ../public/tier0/platform.h:1477
inline CTransform* Construct<CTransform>(CTransform* pMemory)
{
} /* size: 0 */

// <01260518> ../public/tier0/platform.h:1477
inline bone_merge_list_t* Construct<bone_merge_list_t>(bone_merge_list_t* pMemory)
{
} /* size: 0 */

// <01260454> ../public/tier0/platform.h:1477
inline matrix3x4a_t* Construct<matrix3x4a_t>(matrix3x4a_t* pMemory)
{
} /* size: 0 */

// <01260381> ../public/tier0/platform.h:1477
inline FlexWeight_t* Construct<CSceneAnimatableObject::FlexWeight_t>(FlexWeight_t* pMemory)
{
} /* size: 0 */

// <0125C446> ../public/tier0/platform.h:1477
inline SphereAndAttr_t* Construct<CPhysBodyDesc::SphereAndAttr_t>(SphereAndAttr_t* pMemory)
{
} /* size: 0 */

// <0125C373> ../public/tier0/platform.h:1477
inline CapsuleAndAttr_t* Construct<CPhysBodyDesc::CapsuleAndAttr_t>(CapsuleAndAttr_t* pMemory)
{
} /* size: 0 */

// <0125C2A0> ../public/tier0/platform.h:1477
inline HullAndAttr_t* Construct<CPhysBodyDesc::HullAndAttr_t>(HullAndAttr_t* pMemory)
{
} /* size: 0 */

// <010F548F> ../public/tier0/platform.h:1477
inline ExtraSceneObjectStreamDesc_t* Construct<ExtraSceneObjectStreamDesc_t>(ExtraSceneObjectStreamDesc_t* pMemory)
{
} /* size: 0 */

// <010F13CB> ../public/tier0/platform.h:1477
inline MaterialOverrideDesc_t* Construct<MaterialOverrideDesc_t>(MaterialOverrideDesc_t* pMemory)
{
} /* size: 0 */

// <010EEB62> ../public/tier0/platform.h:1477
inline CUtlVector<int, CUtlMemory<int, int> >* Construct<CUtlVector<int> >(CUtlVector<int, CUtlMemory<int, int> >* pMemory)
{
} /* size: 0 */

// <00FFC45E> ../public/tier0/platform.h:1477
inline KeyValueInfo_t* Construct<CEntityKeyValues::KeyValueInfo_t>(KeyValueInfo_t* pMemory)
{
} /* size: 0 */

// <00FFBFD4> ../public/tier0/platform.h:1477
inline CUtlVector<CWorldSceneObjectRef*, CUtlMemory<CWorldSceneObjectRef*, int> >* Construct<CUtlVector<CWorldSceneObjectRef*> >(CUtlVector<CWorldSceneObjectRef*, CUtlMemory<CWorldSceneObjectRef*, int> >* pMemory)
{
} /* size: 0 */

// <00FFBE9F> ../public/tier0/platform.h:1477
inline Node_t* Construct<CUtlMap<long long unsigned int, WorldTraversal_t*>::Node_t>(Node_t* pMemory)
{
} /* size: 0 */

// <00F2687A> ../public/tier0/platform.h:1477
inline WindEntry_t* Construct<CWorldRendererMgr::WindEntry_t>(WindEntry_t* pMemory)
{
} /* size: 0 */

// <00E6F9F6> ../public/tier0/platform.h:1477
inline CStrongHandleCopyable<InfoForResourceTypeCEntityLump>* Construct<CStrongHandleCopyable<InfoForResourceTypeCEntityLump> >(CStrongHandleCopyable<InfoForResourceTypeCEntityLump>* pMemory)
{
} /* size: 0 */

// <00D6EDB8> ../public/tier0/platform.h:1477
inline CUtlStringToken* Construct<CUtlStringToken>(CUtlStringToken* pMemory)
{
} /* size: 0 */

// <00D0FAAA> ../public/tier0/platform.h:1477
inline IPhysicsBody** Construct<IPhysicsBody*>(IPhysicsBody** pMemory)
{
} /* size: 0 */

// <00B10F69> ../public/tier0/platform.h:1477
inline RnVertex_t* Construct<RnVertex_t>(RnVertex_t* pMemory)
{
} /* size: 0 */

// <009F05B7> ../public/tier0/platform.h:1477
inline CStrongHandleVoid* Construct<CStrongHandleVoid>(CStrongHandleVoid* pMemory)
{
} /* size: 0 */

// <009EF7D1> ../public/tier0/platform.h:1477
inline DebugMeshInfo_t* Construct<DebugMeshInfo_t>(DebugMeshInfo_t* pMemory)
{
} /* size: 0 */

// <009EE697> ../public/tier0/platform.h:1477
inline Vector* Construct<Vector>(Vector* pMemory)
{
} /* size: 0 */

// <009EA597> ../public/tier0/platform.h:1477
inline RnTriangle_t* Construct<RnTriangle_t>(RnTriangle_t* pMemory)
{
} /* size: 0 */

// <009E951C> ../public/tier0/platform.h:1477
inline RnPlane_t* Construct<RnPlane_t>(RnPlane_t* pMemory)
{
} /* size: 0 */

// <009E3AA3> ../public/tier0/platform.h:1477
inline Part_t* Construct<CPhysicsSystem::CreateDebugSceneObject(const DebugSceneObjectParams_t&, SceneObjectBuffers_t*)::Part_t>(Part_t* pMemory)
{
} /* size: 0 */

// <009E361D> ../public/tier0/platform.h:1477
inline RnNode_t* Construct<RnNode_t>(RnNode_t* pMemory)
{
} /* size: 0 */

// <008DF4D5> ../public/tier0/platform.h:1477
inline Node_t* Construct<CUtlMap<unsigned int, ButtonCode_t>::Node_t>(Node_t* pMemory)
{
} /* size: 0 */

// <008AA2EE> ../public/tier0/platform.h:1477
inline InputWindow_t* Construct<CInputSystem::InputWindow_t>(InputWindow_t* pMemory)
{
} /* size: 0 */

// <008A8942> ../public/tier0/platform.h:1477
inline CursorSurface_t* Construct<CInputSystem::CursorSurface_t>(CursorSurface_t* pMemory)
{
} /* size: 0 */

// <004AFBF0> ../public/tier0/platform.h:1477
inline AsyncConfigFile_t* Construct<CInputService::AsyncConfigFile_t>(AsyncConfigFile_t* pMemory)
{
} /* size: 0 */

// <004AF572> ../public/tier0/platform.h:1477
inline ConVar** Construct<ConVar*>(ConVar** pMemory)
{
} /* size: 0 */

// <004AB427> ../public/tier0/platform.h:1477
inline Node_t* Construct<CUtlMap<const CSchemaClassInfo*, CUtlVector<CEventDispatcher_Base::EventListenerInfo_t>, unsigned int, bool (*)(const CSchemaClassInfo* const&, const CSchemaClassInfo* const&)>::Node_t>(Node_t* pMemory)
{
} /* size: 0 */

// <004A9431> ../public/tier0/platform.h:1477
inline EventListenerInfo_t* Construct<CEventDispatcher_Base::EventListenerInfo_t>(EventListenerInfo_t* pMemory)
{
} /* size: 0 */

// <003C6BBD> ../public/tier0/platform.h:1477
inline AABB_t* Construct<AABB_t>(AABB_t* pMemory)
{
} /* size: 0 */

// <003C6A7B> ../public/tier0/platform.h:1477
inline CVisCluster* Construct<CVisCluster>(CVisCluster* pMemory)
{
} /* size: 0 */

// <0029E9CA> ../public/tier0/platform.h:1477
inline ServiceDependency_t* Construct<CLoopTypeBase::ServiceDependency_t>(ServiceDependency_t* pMemory)
{
} /* size: 0 */

// <0022FE08> ../public/tier0/platform.h:1477
inline Entry_t* Construct<CPrerequisiteDescriptionHelper::Entry_t>(Entry_t* pMemory)
{
} /* size: 0 */

// <00135011> ../public/tier0/platform.h:1477
inline CBufferStringN<200>* Construct<CBufferStringN<200> >(CBufferStringN<200>* pMemory)
{
} /* size: 0 */

// <001323EC> ../public/tier0/platform.h:1477
inline CMeshDrawPrimitive_t* Construct<CMeshDrawPrimitive_t>(CMeshDrawPrimitive_t* pMemory)
{
} /* size: 0 */

// <0012E55B> ../public/tier0/platform.h:1477
inline CUtlString* Construct<CUtlString>(CUtlString* pMemory)
{
} /* size: 0 */

// <00060F3F> ../public/tier0/platform.h:1477
inline DebugVisElement_t* Construct<CDebugVisualizerMgr::DebugVisElement_t>(DebugVisElement_t* pMemory)
{
} /* size: 0 */

// <032D016E> ../public/tier0/platform.h:1477
inline CIKChainData_t* Construct<CIKChainData_t>(CIKChainData_t* pMemory)
{
} /* size: 0 */

// <027ECBE8> ../public/tier0/platform.h:1477
inline IKLocked_t* Construct<IKLocked_t>(IKLocked_t* pMemory)
{
} /* size: 0 */

// <027EC03B> ../public/tier0/platform.h:1477
inline CAnimationChannelResult* Construct<CAnimationChannelResult>(CAnimationChannelResult* pMemory)
{
} /* size: 0 */

// <0272BC57> ../public/tier0/platform.h:1477
inline CInternalOperation* Construct<CInternalOperation>(CInternalOperation* pMemory)
{
} /* size: 0 */

// <0272A126> ../public/tier0/platform.h:1477
inline CAnimationResult* Construct<CAnimationResult>(CAnimationResult* pMemory)
{
} /* size: 0 */

// <0269B10C> ../public/tier0/platform.h:1477
inline CRetargetingChain* Construct<CRetargetingChain>(CRetargetingChain* pMemory)
{
} /* size: 0 */

// <0232B98D> ../public/tier0/platform.h:1477
inline CAnimFoot* Construct<CAnimFoot>(CAnimFoot* pMemory)
{
} /* size: 0 */

// <01A66BDB> ../public/tier0/platform.h:1477
inline CSmartPtr<Reflection::CTypeFactory<CAnimStateConditionBase>::CFactoryMaker, CRefCountAccessor>* Construct<CSmartPtr<Reflection::CTypeFactory<CAnimStateConditionBase>::CFactoryMaker, CRefCountAccessor> >(CSmartPtr<Reflection::CTypeFactory<CAnimStateConditionBase>::CFactoryMaker, CRefCountAccessor>* pMemory)
{
} /* size: 0 */

// <0156C01F> ../public/tier0/platform.h:1477
inline PoseOpDesc* Construct<CPoseRecipe::PoseOpDesc>(PoseOpDesc* pMemory)
{
} /* size: 0 */

// <0156B487> ../public/tier0/platform.h:1477
inline AnimNodeLocation_t* Construct<AnimNodeLocation_t>(AnimNodeLocation_t* pMemory)
{
} /* size: 0 */

// <014B7405> ../public/tier0/platform.h:1477
inline CSmartPtr<Reflection::CTypeFactory<CAnimParameterBase>::CFactoryMaker, CRefCountAccessor>* Construct<CSmartPtr<Reflection::CTypeFactory<CAnimParameterBase>::CFactoryMaker, CRefCountAccessor> >(CSmartPtr<Reflection::CTypeFactory<CAnimParameterBase>::CFactoryMaker, CRefCountAccessor>* pMemory)
{
} /* size: 0 */

// <01460A50> ../public/tier0/platform.h:1477
inline CSmartPtr<Reflection::CTypeFactory<CAnimMotorBase>::CFactoryMaker, CRefCountAccessor>* Construct<CSmartPtr<Reflection::CTypeFactory<CAnimMotorBase>::CFactoryMaker, CRefCountAccessor> >(CSmartPtr<Reflection::CTypeFactory<CAnimMotorBase>::CFactoryMaker, CRefCountAccessor>* pMemory)
{
} /* size: 0 */

// <013E8FEB> ../public/tier0/platform.h:1477
inline CSmartPtr<Reflection::CTypeFactory<CMotionMetricBase>::CFactoryMaker, CRefCountAccessor>* Construct<CSmartPtr<Reflection::CTypeFactory<CMotionMetricBase>::CFactoryMaker, CRefCountAccessor> >(CSmartPtr<Reflection::CTypeFactory<CMotionMetricBase>::CFactoryMaker, CRefCountAccessor>* pMemory)
{
} /* size: 0 */

// <01305638> ../public/tier0/platform.h:1477
inline CSmartPtr<Reflection::CTypeFactory<CAnimTagBase>::CFactoryMaker, CRefCountAccessor>* Construct<CSmartPtr<Reflection::CTypeFactory<CAnimTagBase>::CFactoryMaker, CRefCountAccessor> >(CSmartPtr<Reflection::CTypeFactory<CAnimTagBase>::CFactoryMaker, CRefCountAccessor>* pMemory)
{
} /* size: 0 */

// <01155CAE> ../public/tier0/platform.h:1477
inline ClipSampleInfo* Construct<ClipSampleInfo>(ClipSampleInfo* pMemory)
{
} /* size: 0 */

// <0114DF31> ../public/tier0/platform.h:1477
inline CSmartPtr<CMotionMetricInstance, CRefCountAccessor>* Construct<CSmartPtr<CMotionMetricInstance> >(CSmartPtr<CMotionMetricInstance, CRefCountAccessor>* pMemory)
{
} /* size: 0 */

// <0114C56D> ../public/tier0/platform.h:1477
inline AnimOutputID* Construct<AnimOutputID>(AnimOutputID* pMemory)
{
} /* size: 0 */

// <01054C56> ../public/tier0/platform.h:1477
inline CSmartPtr<Reflection::CTypeFactory<CAnimNodeBase>::CFactoryMaker, CRefCountAccessor>* Construct<CSmartPtr<Reflection::CTypeFactory<CAnimNodeBase>::CFactoryMaker, CRefCountAccessor> >(CSmartPtr<Reflection::CTypeFactory<CAnimNodeBase>::CFactoryMaker, CRefCountAccessor>* pMemory)
{
} /* size: 0 */

// <00F49360> ../public/tier0/platform.h:1477
inline CSmartPtr<CAnimMotorInstance, CRefCountAccessor>* Construct<CSmartPtr<CAnimMotorInstance> >(CSmartPtr<CAnimMotorInstance, CRefCountAccessor>* pMemory)
{
} /* size: 0 */

// <00F437D9> ../public/tier0/platform.h:1477
inline CCachedPose* Construct<CCachedPose>(CCachedPose* pMemory)
{
} /* size: 0 */

// <00E0060F> ../public/tier0/platform.h:1477
inline AnimNodeID* Construct<AnimNodeID>(AnimNodeID* pMemory)
{
} /* size: 0 */

// <00C65CAC> ../public/tier0/platform.h:1477
inline activitylist_t* Construct<activitylist_t>(activitylist_t* pMemory)
{
} /* size: 0 */

// <00C618CF> ../public/tier0/platform.h:1477
inline BoneTableEntry* Construct<BoneTableEntry>(BoneTableEntry* pMemory)
{
} /* size: 0 */

// <00C60EBD> ../public/tier0/platform.h:1477
inline AnimationEventOccurrence_t* Construct<AnimationEventOccurrence_t>(AnimationEventOccurrence_t* pMemory)
{
} /* size: 0 */

// <00C5E9D1> ../public/tier0/platform.h:1477
inline CAnimationDecodeOp* Construct<CAnimationDecodeOp>(CAnimationDecodeOp* pMemory)
{
} /* size: 0 */

// <00C5E67B> ../public/tier0/platform.h:1477
inline AnimEventDetectDesc_t* Construct<AnimEventDetectDesc_t>(AnimEventDetectDesc_t* pMemory)
{
} /* size: 0 */

// <00C5D5ED> ../public/tier0/platform.h:1477
inline const CAnimationGroupResource ** Construct<const CAnimationGroupResource*>(const CAnimationGroupResource ** pMemory)
{
} /* size: 0 */

// <00C5D3DC> ../public/tier0/platform.h:1477
inline CAnimDataChannel* Construct<CAnimDataChannel>(CAnimDataChannel* pMemory)
{
} /* size: 0 */

// <00C5CC66> ../public/tier0/platform.h:1477
inline AnimationGroupImp_t* Construct<CAnimContainer_Imp::AnimationGroupImp_t>(AnimationGroupImp_t* pMemory)
{
} /* size: 0 */

// <00C5C839> ../public/tier0/platform.h:1477
inline ChannelElementWeights_t* Construct<ChannelElementWeights_t>(ChannelElementWeights_t* pMemory)
{
} /* size: 0 */

// <00C5C37B> ../public/tier0/platform.h:1477
inline ChannelWeightlist_t* Construct<ChannelWeightlist_t>(ChannelWeightlist_t* pMemory)
{
} /* size: 0 */

// <00C5983B> ../public/tier0/platform.h:1477
inline EventList_t* Construct<EventList_t>(EventList_t* pMemory)
{
} /* size: 0 */

// <00C587DD> ../public/tier0/platform.h:1477
inline CSegmentTmp* Construct<CAnimDataBuilder::CSegmentTmp>(CSegmentTmp* pMemory)
{
} /* size: 0 */

// <00C4C5D5> ../public/tier0/platform.h:1477
inline notify_t* Construct<CAnimationHelper::FrameAdvance(matrix3x4a_t&, float, AnimationEventOccurrences_t*)::notify_t>(notify_t* pMemory)
{
} /* size: 0 */

// <00C4C4F5> ../public/tier0/platform.h:1477
inline TransitioningLaterMetaInfo_t* Construct<CSimpleSequenceTransitioner<CAnimationHelper>::TransitioningLaterMetaInfo_t>(TransitioningLaterMetaInfo_t* pMemory)
{
} /* size: 0 */

// <00C4A3B1> ../public/tier0/platform.h:1477
inline AnimInstanceMap_t* Construct<AnimInstanceMap_t>(AnimInstanceMap_t* pMemory)
{
} /* size: 0 */

// <00C4A2AF> ../public/tier0/platform.h:1477
inline ElementRequestPattern_t* Construct<ElementRequestPattern_t>(ElementRequestPattern_t* pMemory)
{
} /* size: 0 */

// <00C49A5C> ../public/tier0/platform.h:1477
inline IndexWeightPair_t* Construct<ChannelWeightlist_t::IndexWeightPair_t>(IndexWeightPair_t* pMemory)
{
} /* size: 0 */

// <00C49969> ../public/tier0/platform.h:1477
inline pair<LocalFlexController_t, float>* Construct<std::pair<LocalFlexController_t, float> >(pair<LocalFlexController_t, float>* pMemory)
{
} /* size: 0 */

// <00C49654> ../public/tier0/platform.h:1477
inline CIKChainJointData_t* Construct<CIKChainJointData_t>(CIKChainJointData_t* pMemory)
{
} /* size: 0 */

// <00C3E6B7> ../public/tier0/platform.h:1477
inline unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >* Construct<std::unique_ptr<CAnimationResource> >(unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >* pMemory)
{
} /* size: 0 */

// <00C3CF56> ../public/tier0/platform.h:1477
inline CUtlVector<float, CUtlMemory<float, int> >* Construct<CUtlVector<float> >(CUtlVector<float, CUtlMemory<float, int> >* pMemory)
{
} /* size: 0 */

// <00C3CC6F> ../public/tier0/platform.h:1477
inline CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >* Construct<CUtlVector<Quaternion> >(CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >* pMemory)
{
} /* size: 0 */

// <00C37CDA> ../public/tier0/platform.h:1477
inline CAnimRetarget* Construct<CAnimRetarget>(CAnimRetarget* pMemory)
{
} /* size: 0 */

// <00C37995> ../public/tier0/platform.h:1477
inline CAnimDecodeSwizzle* Construct<CAnimDecodeSwizzle>(CAnimDecodeSwizzle* pMemory)
{
} /* size: 0 */

// <00C3749A> ../public/tier0/platform.h:1477
inline UserDataElementMap_t* Construct<UserDataElementMap_t>(UserDataElementMap_t* pMemory)
{
} /* size: 0 */

// <00C364EA> ../public/tier0/platform.h:1477
inline RequestElementWeights_t* Construct<RequestElementWeights_t>(RequestElementWeights_t* pMemory)
{
} /* size: 0 */

// <00C35E30> ../public/tier0/platform.h:1477
inline HSequence* Construct<HSequence>(HSequence* pMemory)
{
} /* size: 0 */

// <00C35B59> ../public/tier0/platform.h:1477
inline AnimBounds_t* Construct<AnimBounds_t>(AnimBounds_t* pMemory)
{
} /* size: 0 */

// <00C34A75> ../public/tier0/platform.h:1477
inline BoneTableChannel* Construct<BoneTableChannel>(BoneTableChannel* pMemory)
{
} /* size: 0 */

// <00C3356B> ../public/tier0/platform.h:1477
inline AnimEvent_t* Construct<AnimEvent_t>(AnimEvent_t* pMemory)
{
} /* size: 0 */

// <00C331F2> ../public/tier0/platform.h:1477
inline unique_ptr<CEnduringClassMemoryPool<CAnimPose>::Block, std::default_delete<CEnduringClassMemoryPool<CAnimPose>::Block> >  Construct<std::unique_ptr<CEnduringClassMemoryPool<CAnimPose>::Block, std::default_delete<CEnduringClassMemoryPool<CAnimPose>::Block> > >(unique_ptr<CEnduringClassMemoryPool<CAnimPose>::Block, std::default_delete<CEnduringClassMemoryPool<CAnimPose>::Block> > pMemory)
{
} /* size: 0 */

// <00C2D3E4> ../public/tier0/platform.h:1477
inline Node_t* Construct<CUtlMap<unsigned int, int, int, CDefLess<unsigned int> >::Node_t>(Node_t* pMemory)
{
} /* size: 0 */

// <00C2C6B8> ../public/tier0/platform.h:1477
inline BoneInfo* Construct<CAnimSkeleton::BoneInfo>(BoneInfo* pMemory)
{
} /* size: 0 */

// <00C2B0BA> ../public/tier0/platform.h:1477
inline Node_t* Construct<CUtlMap<char const*, CActivityRemapCache, int, bool (*)(char const* const&, char const* const&)>::Node_t>(Node_t* pMemory)
{
} /* size: 0 */

// <00C292C4> ../public/tier0/platform.h:1477
inline CUtlVector<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, false>::Entry_t, int>  Construct<CUtlVector<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, false>::Entry_t, int> > >(CUtlVector<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, false>::Entry_t, int> pMemory)
{
} /* size: 0 */

// <00C28BA1> ../public/tier0/platform.h:1477
inline CUtlVector<CUtlHashDict<short int, true, true>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, true>::Entry_t, int> >  Construct<CUtlVector<CUtlHashDict<short int, true, true>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, true>::Entry_t, int> > >(CUtlVector<CUtlHashDict<short int, true, true>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, true>::Entry_t, int> > pMemory)
{
} /* size: 0 */

// <00C289A6> ../public/tier0/platform.h:1477
inline CUtlVector<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<ChannelElementMap_t, true, tru Construct<CUtlVector<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, int> > >(CUtlVector<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<ChannelElementMap_t, true, tru pMemory)
{
} /* size: 0 */

// <00C287F4> ../public/tier0/platform.h:1477
inline CUtlVector<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlMemory<CUtlHashDict<UserDataElement_t, true, false> Construct<CUtlVector<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlMemory<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, int> > >(CUtlVector<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlMemory<CUtlHashDict<UserDataElement_t, true, false> pMemory)
{
} /* size: 0 */

// <0032A87F> ../public/tier0/platform.h:1477
inline CUtlVector<char const*, CUtlMemory<char const*, int> >* Construct<CUtlVector<char const*, CUtlMemory<char const*, int> > >(CUtlVector<char const*, CUtlMemory<char const*, int> >* pMemory)
{
} /* size: 0 */

// <002AEFCD> ../public/tier0/platform.h:1477
inline CSmartPtr<CAnimReplayFrame, CRefCountAccessor>* Construct<CSmartPtr<CAnimReplayFrame> >(CSmartPtr<CAnimReplayFrame, CRefCountAccessor>* pMemory)
{
} /* size: 0 */

// <002AEE05> ../public/tier0/platform.h:1477
inline CSmartPtr<CMotionClip, CRefCountAccessor>* Construct<CSmartPtr<CMotionClip> >(CSmartPtr<CMotionClip, CRefCountAccessor>* pMemory)
{
} /* size: 0 */

// <002AEC3D> ../public/tier0/platform.h:1477
inline CSmartPtr<CAnimTagBase, CRefCountAccessor>* Construct<CSmartPtr<CAnimTagBase> >(CSmartPtr<CAnimTagBase, CRefCountAccessor>* pMemory)
{
} /* size: 0 */

// <002AEA75> ../public/tier0/platform.h:1477
inline CSmartPtr<CAnimStateConditionBase, CRefCountAccessor>* Construct<CSmartPtr<CAnimStateConditionBase> >(CSmartPtr<CAnimStateConditionBase, CRefCountAccessor>* pMemory)
{
} /* size: 0 */

// <002AE8AD> ../public/tier0/platform.h:1477
inline CSmartPtr<CAnimStateTransition, CRefCountAccessor>* Construct<CSmartPtr<CAnimStateTransition> >(CSmartPtr<CAnimStateTransition, CRefCountAccessor>* pMemory)
{
} /* size: 0 */

// <002AE57F> ../public/tier0/platform.h:1477
inline CFootStepTriggerItem* Construct<CFootStepTriggerItem>(CFootStepTriggerItem* pMemory)
{
} /* size: 0 */

// <002AE3FB> ../public/tier0/platform.h:1477
inline CJiggleBoneItem* Construct<CJiggleBoneItem>(CJiggleBoneItem* pMemory)
{
} /* size: 0 */

// <002AE233> ../public/tier0/platform.h:1477
inline CSmartPtr<CMotionMetricBase, CRefCountAccessor>* Construct<CSmartPtr<CMotionMetricBase> >(CSmartPtr<CMotionMetricBase, CRefCountAccessor>* pMemory)
{
} /* size: 0 */

// <002AE06B> ../public/tier0/platform.h:1477
inline CSmartPtr<CMotionClipGroup, CRefCountAccessor>* Construct<CSmartPtr<CMotionClipGroup> >(CSmartPtr<CMotionClipGroup, CRefCountAccessor>* pMemory)
{
} /* size: 0 */

// <002ADEE7> ../public/tier0/platform.h:1477
inline CFootLockItem* Construct<CFootLockItem>(CFootLockItem* pMemory)
{
} /* size: 0 */

// <002ADD17> ../public/tier0/platform.h:1477
inline CBlend2DItem* Construct<CBlend2DItem>(CBlend2DItem* pMemory)
{
} /* size: 0 */

// <002ADBB7> ../public/tier0/platform.h:1477
inline AnimTagID* Construct<AnimTagID>(AnimTagID* pMemory)
{
} /* size: 0 */

// <002ADA5B> ../public/tier0/platform.h:1477
inline CNodeConnection* Construct<CNodeConnection>(CNodeConnection* pMemory)
{
} /* size: 0 */

// <002AD8D7> ../public/tier0/platform.h:1477
inline CSolveIKChainAnimNodeChainData* Construct<CSolveIKChainAnimNodeChainData>(CSolveIKChainAnimNodeChainData* pMemory)
{
} /* size: 0 */

// <002AD753> ../public/tier0/platform.h:1477
inline CChoiceNodeChild* Construct<CChoiceNodeChild>(CChoiceNodeChild* pMemory)
{
} /* size: 0 */

// <002AD58B> ../public/tier0/platform.h:1477
inline CSmartPtr<CAnimState, CRefCountAccessor>* Construct<CSmartPtr<CAnimState> >(CSmartPtr<CAnimState, CRefCountAccessor>* pMemory)
{
} /* size: 0 */

// <002AD407> ../public/tier0/platform.h:1477
inline CBlendNodeChild* Construct<CBlendNodeChild>(CBlendNodeChild* pMemory)
{
} /* size: 0 */

// <002AD281> ../public/tier0/platform.h:1477
inline CSmartPtr<CAnimTagSpan, CRefCountAccessor>* Construct<CSmartPtr<CAnimTagSpan> >(CSmartPtr<CAnimTagSpan, CRefCountAccessor>* pMemory)
{
} /* size: 0 */

// <002AD0E1> ../public/tier0/platform.h:1477
inline CSmartPtr<CAnimMotorBase, CRefCountAccessor>* Construct<CSmartPtr<CAnimMotorBase> >(CSmartPtr<CAnimMotorBase, CRefCountAccessor>* pMemory)
{
} /* size: 0 */

// <002ACF19> ../public/tier0/platform.h:1477
inline CSmartPtr<CClipProperties, CRefCountAccessor>* Construct<CSmartPtr<CClipProperties> >(CSmartPtr<CClipProperties, CRefCountAccessor>* pMemory)
{
} /* size: 0 */

// <002ACD51> ../public/tier0/platform.h:1477
inline CSmartPtr<CAnimGraphSettingsGroup, CRefCountAccessor>* Construct<CSmartPtr<CAnimGraphSettingsGroup> >(CSmartPtr<CAnimGraphSettingsGroup, CRefCountAccessor>* pMemory)
{
} /* size: 0 */

// <002AC8D9> ../public/tier0/platform.h:1477
inline CSmartPtr<CActivityValues, CRefCountAccessor>* Construct<CSmartPtr<CActivityValues> >(CSmartPtr<CActivityValues, CRefCountAccessor>* pMemory)
{
} /* size: 0 */

// <002AC711> ../public/tier0/platform.h:1477
inline CSmartPtr<CParameterValue, CRefCountAccessor>* Construct<CSmartPtr<CParameterValue> >(CSmartPtr<CParameterValue, CRefCountAccessor>* pMemory)
{
} /* size: 0 */

// <002AC549> ../public/tier0/platform.h:1477
inline CSmartPtr<CAnimParameterBase, CRefCountAccessor>* Construct<CSmartPtr<CAnimParameterBase> >(CSmartPtr<CAnimParameterBase, CRefCountAccessor>* pMemory)
{
} /* size: 0 */

// <002AB7C9> ../public/tier0/platform.h:1477
inline CSeqPoseParamDesc* Construct<CSeqPoseParamDesc>(CSeqPoseParamDesc* pMemory)
{
} /* size: 0 */

// <002AB4BF> ../public/tier0/platform.h:1477
inline CSeqBoneMaskList* Construct<CSeqBoneMaskList>(CSeqBoneMaskList* pMemory)
{
} /* size: 0 */

// <002AB02F> ../public/tier0/platform.h:1477
inline CSeqCmdSeqDesc* Construct<CSeqCmdSeqDesc>(CSeqCmdSeqDesc* pMemory)
{
} /* size: 0 */

// <002AAEAB> ../public/tier0/platform.h:1477
inline CSeqSynthAnimDesc* Construct<CSeqSynthAnimDesc>(CSeqSynthAnimDesc* pMemory)
{
} /* size: 0 */

// <002AAADE> ../public/tier0/platform.h:1477
inline CSeqS1SeqDesc* Construct<CSeqS1SeqDesc>(CSeqS1SeqDesc* pMemory)
{
} /* size: 0 */

// <002AA95A> ../public/tier0/platform.h:1477
inline CSeqPoseSetting* Construct<CSeqPoseSetting>(CSeqPoseSetting* pMemory)
{
} /* size: 0 */

// <002AA5E3> ../public/tier0/platform.h:1477
inline CFootMotion* Construct<CFootMotion>(CFootMotion* pMemory)
{
} /* size: 0 */

// <002AA45F> ../public/tier0/platform.h:1477
inline CSeqIKLock* Construct<CSeqIKLock>(CSeqIKLock* pMemory)
{
} /* size: 0 */

// <002AA2DB> ../public/tier0/platform.h:1477
inline CSeqAutoLayer* Construct<CSeqAutoLayer>(CSeqAutoLayer* pMemory)
{
} /* size: 0 */

// <002AA157> ../public/tier0/platform.h:1477
inline pair<CBufferString, float>* Construct<std::pair<CBufferString, float> >(pair<CBufferString, float>* pMemory)
{
} /* size: 0 */

// <002A90DB> ../public/tier0/platform.h:1477
inline CAnimDecoder* Construct<CAnimDecoder>(CAnimDecoder* pMemory)
{
} /* size: 0 */

// <002A8A32> ../public/tier0/platform.h:1477
inline CAnimDesc* Construct<CAnimDesc>(CAnimDesc* pMemory)
{
} /* size: 0 */

// <002A886E> ../public/tier0/platform.h:1477
inline CAnimLocalHierarchy* Construct<CAnimLocalHierarchy>(CAnimLocalHierarchy* pMemory)
{
} /* size: 0 */

// <002A86EA> ../public/tier0/platform.h:1477
inline CAnimActivity* Construct<CAnimActivity>(CAnimActivity* pMemory)
{
} /* size: 0 */

// <002A8566> ../public/tier0/platform.h:1477
inline CAnimAnimEvent* Construct<CAnimAnimEvent>(CAnimAnimEvent* pMemory)
{
} /* size: 0 */

// <002A83E2> ../public/tier0/platform.h:1477
inline CAnimMovement* Construct<CAnimMovement>(CAnimMovement* pMemory)
{
} /* size: 0 */

// <002A825E> ../public/tier0/platform.h:1477
inline CAnimFrameBlockAnim* Construct<CAnimFrameBlockAnim>(CAnimFrameBlockAnim* pMemory)
{
} /* size: 0 */

// <002A7ED6> ../public/tier0/platform.h:1477
inline CAnimMorphDifference* Construct<CAnimMorphDifference>(CAnimMorphDifference* pMemory)
{
} /* size: 0 */

// <002A7D52> ../public/tier0/platform.h:1477
inline CAnimBoneDifference* Construct<CAnimBoneDifference>(CAnimBoneDifference* pMemory)
{
} /* size: 0 */

// <0014206F> ../public/tier0/platform.h:1477
inline CIKChainContext* Construct<CIKChainContext>(CIKChainContext* pMemory)
{
} /* size: 0 */

// <00141E6F> ../public/tier0/platform.h:1477
inline CIKChainInterpolationState* Construct<CIKChainInterpolationState>(CIKChainInterpolationState* pMemory)
{
} /* size: 0 */

// <000E9DF8> ../public/tier0/platform.h:1477
inline Node_t* Construct<CUtlMap<int, JointTreeNode*>::Node_t>(Node_t* pMemory)
{
} /* size: 0 */

// <000E7B00> ../public/tier0/platform.h:1477
inline CIKChainOldData_t* Construct<CIKChainOldData_t>(CIKChainOldData_t* pMemory)
{
} /* size: 0 */

// <00089C3D> ../public/tier0/platform.h:1477
inline CIKChainRuleInterpolationState* Construct<CIKChainRuleInterpolationState>(CIKChainRuleInterpolationState* pMemory)
{
} /* size: 0 */

// <00F4521B> ../public/tier0/platform.h:1477
inline SheetInfo_t* Construct<CSheet::SheetInfo_t>(SheetInfo_t* pMemory)
{
} /* size: 0 */

// <00C2EF1B> ../public/tier0/platform.h:1477
inline ExternalTextureInfo_t* Construct<CTextureManagerBase::ExternalTextureInfo_t>(ExternalTextureInfo_t* pMemory)
{
} /* size: 0 */

// <00C26999> ../public/tier0/platform.h:1477
inline Node_t* Construct<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlHashtable<CDescriptorSetVulkan*>*, int, CDefLess<CWeakHandle<InfoForResourceTypeCTextureBase> > >::Node_t>(Node_t* pMemory)
{
} /* size: 0 */

// <00B6E2CD> ../public/tier0/platform.h:1477
inline VkSemaphore_T** Construct<VkSemaphore_T*>(VkSemaphore_T** pMemory)
{
} /* size: 0 */

// <00B07343> ../public/tier0/platform.h:1477
inline OutstandingFrame_t* Construct<CRenderPipelineStatsVulkan::OutstandingFrame_t>(OutstandingFrame_t* pMemory)
{
} /* size: 0 */

// <00B0707D> ../public/tier0/platform.h:1477
inline SampleQueries_t* Construct<CRenderPipelineStatsVulkan::SampleQueries_t>(SampleQueries_t* pMemory)
{
} /* size: 0 */

// <00B07012> ../public/tier0/platform.h:1477
inline RenderPipelineSample_t* Construct<RenderPipelineSample_t>(RenderPipelineSample_t* pMemory)
{
} /* size: 0 */

// <00B06E7A> ../public/tier0/platform.h:1477
inline CRenderPipelineFrameStats* Construct<CRenderPipelineFrameStats>(CRenderPipelineFrameStats* pMemory)
{
} /* size: 0 */

// <00AC40E5> ../public/tier0/platform.h:1477
inline VkAttachmentDescription* Construct<VkAttachmentDescription>(VkAttachmentDescription* pMemory)
{
} /* size: 0 */

// <00AC3F71> ../public/tier0/platform.h:1477
inline VkSubpassDescription* Construct<VkSubpassDescription>(VkSubpassDescription* pMemory)
{
} /* size: 0 */

// <00AC3B03> ../public/tier0/platform.h:1477
inline VkImageView_T** Construct<VkImageView_T*>(VkImageView_T** pMemory)
{
} /* size: 0 */

// <00AC3A1D> ../public/tier0/platform.h:1477
inline VulkanRenderPassImageLayout_t* Construct<VulkanRenderPassImageLayout_t>(VulkanRenderPassImageLayout_t* pMemory)
{
} /* size: 0 */

// <00AC372A> ../public/tier0/platform.h:1477
inline VkSubpassDependency* Construct<VkSubpassDependency>(VkSubpassDependency* pMemory)
{
} /* size: 0 */

// <00AB7D99> ../public/tier0/platform.h:1477
inline Node_t* Construct<CUtlMap<CRenderPassDesc, CRenderPassVulkan*>::Node_t>(Node_t* pMemory)
{
} /* size: 0 */

// <009D6265> ../public/tier0/platform.h:1477
inline FencedVertexBufferRelease_t* Construct<CRenderDeviceVulkan::FencedVertexBufferRelease_t>(FencedVertexBufferRelease_t* pMemory)
{
} /* size: 0 */

// <009D5FB9> ../public/tier0/platform.h:1477
inline FencedIndexBufferRelease_t* Construct<CRenderDeviceVulkan::FencedIndexBufferRelease_t>(FencedIndexBufferRelease_t* pMemory)
{
} /* size: 0 */

// <009D4C35> ../public/tier0/platform.h:1477
inline FencedVulkanTextureRelease_t* Construct<CRenderDeviceVulkan::FencedVulkanTextureRelease_t>(FencedVulkanTextureRelease_t* pMemory)
{
} /* size: 0 */

// <009C8EC4> ../public/tier0/platform.h:1477
inline CVertexShaderVulkan* Construct<CVertexShaderVulkan>(CVertexShaderVulkan* pMemory)
{
} /* size: 0 */

// <009C739E> ../public/tier0/platform.h:1477
inline RasterizerStateVulkan_t* Construct<RasterizerStateVulkan_t>(RasterizerStateVulkan_t* pMemory)
{
} /* size: 0 */

// <009C6A86> ../public/tier0/platform.h:1477
inline DepthStencilStateVulkan_t* Construct<DepthStencilStateVulkan_t>(DepthStencilStateVulkan_t* pMemory)
{
} /* size: 0 */

// <009C616E> ../public/tier0/platform.h:1477
inline BlendStateVulkan_t* Construct<BlendStateVulkan_t>(BlendStateVulkan_t* pMemory)
{
} /* size: 0 */

// <009B4145> ../public/tier0/platform.h:1477
inline Node_t* Construct<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, VulkanDeviceSpecificTexture_t, unsigned int, CDefLess<CWeakHandle<InfoForResourceTypeCTextureBase> > >::Node_t>(Node_t* pMemory)
{
} /* size: 0 */

// <009B34BC> ../public/tier0/platform.h:1477
inline Node_t* Construct<CUtlMap<RenderResourceHandle_t__*, VulkanDeviceSpecificBuffer_t, unsigned int, CDefLess<RenderResourceHandle_t__*> >::Node_t>(Node_t* pMemory)
{
} /* size: 0 */

// <009B2833> ../public/tier0/platform.h:1477
inline Node_t* Construct<CUtlMap<RenderDescriptorSetHandle_t__*, VulkanDeviceSpecificDescriptorSet_t, unsigned int, CDefLess<RenderDescriptorSetHandle_t__*> >::Node_t>(Node_t* pMemory)
{
} /* size: 0 */

// <009B1BCA> ../public/tier0/platform.h:1477
inline Node_t* Construct<CUtlMap<RenderRayTracePipelineHandle_t__*, VulkanDeviceSpecificRayTracePipeline_t, unsigned int, CDefLess<RenderRayTracePipelineHandle_t__*> >::Node_t>(Node_t* pMemory)
{
} /* size: 0 */

// <009AFE5A> ../public/tier0/platform.h:1477
inline Node_t* Construct<CUtlMap<unsigned int, unsigned int, short unsigned int, CDefLess<unsigned int> >::Node_t>(Node_t* pMemory)
{
} /* size: 0 */

// <008C0FF9> ../public/tier0/platform.h:1477
inline VulkanPhysicalDeviceInfo_t* Construct<VulkanPhysicalDeviceInfo_t>(VulkanPhysicalDeviceInfo_t* pMemory)
{
} /* size: 0 */

// <008C0F45> ../public/tier0/platform.h:1477
inline AdapterInfo_t* Construct<CRenderDeviceMgrBase::AdapterInfo_t>(AdapterInfo_t* pMemory)
{
} /* size: 0 */

// <007AADFB> ../public/tier0/platform.h:1477
inline VkPipelineShaderStageCreateInfo* Construct<VkPipelineShaderStageCreateInfo>(VkPipelineShaderStageCreateInfo* pMemory)
{
} /* size: 0 */

// <007A9B3C> ../public/tier0/platform.h:1477
inline VkRayTracingShaderGroupCreateInfoKHR* Construct<VkRayTracingShaderGroupCreateInfoKHR>(VkRayTracingShaderGroupCreateInfoKHR* pMemory)
{
} /* size: 0 */

// <00708D60> ../public/tier0/platform.h:1477
inline VkPushConstantRange* Construct<VkPushConstantRange>(VkPushConstantRange* pMemory)
{
} /* size: 0 */

// <0064929F> ../public/tier0/platform.h:1477
inline Node_t* Construct<CUtlMap<long unsigned int, CSamplerStateDesc*, short unsigned int, CDefLess<long unsigned int> >::Node_t>(Node_t* pMemory)
{
} /* size: 0 */

// <006486B3> ../public/tier0/platform.h:1477
inline Node_t* Construct<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeDescriptorSetLayout_t*, short unsigned int, CDefLess<long unsigned int> >::Node_t>(Node_t* pMemory)
{
} /* size: 0 */

// <006478C8> ../public/tier0/platform.h:1477
inline Node_t* Construct<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizePipelineLayout_t*, short unsigned int, CDefLess<long unsigned int> >::Node_t>(Node_t* pMemory)
{
} /* size: 0 */

// <00646CDC> ../public/tier0/platform.h:1477
inline Node_t* Construct<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeRenderPass_t*, short unsigned int, CDefLess<long unsigned int> >::Node_t>(Node_t* pMemory)
{
} /* size: 0 */

// <006460D7> ../public/tier0/platform.h:1477
inline Node_t* Construct<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeComputePipeline_t*, unsigned int, CDefLess<long unsigned int> >::Node_t>(Node_t* pMemory)
{
} /* size: 0 */

// <0064548A> ../public/tier0/platform.h:1477
inline Node_t* Construct<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeGraphicsPipeline_t*, unsigned int, CDefLess<long unsigned int> >::Node_t>(Node_t* pMemory)
{
} /* size: 0 */

// <00644856> ../public/tier0/platform.h:1477
inline Node_t* Construct<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeShaderModule_t*, unsigned int, CDefLess<long unsigned int> >::Node_t>(Node_t* pMemory)
{
} /* size: 0 */

// <006439BC> ../public/tier0/platform.h:1477
inline Node_t* Construct<CUtlMap<const CShaderVulkanBase*, CUtlLinkedList<CFossilizeStateCreator::FossilizeShaderModule_t*>*, short unsigned int, CDefLess<const CShaderVulkanBase*> >::Node_t>(Node_t* pMemory)
{
} /* size: 0 */

// <004D6E20> ../public/tier0/platform.h:1477
inline VulkanFramebufferState_t* Construct<VulkanFramebufferState_t>(VulkanFramebufferState_t* pMemory)
{
} /* size: 0 */

// <004A62A2> ../public/tier0/platform.h:1477
inline CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >* Construct<CUtlVector<VkDescriptorSetLayoutBinding> >(CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >* pMemory)
{
} /* size: 0 */

// <004A60A5> ../public/tier0/platform.h:1477
inline PipelineLayoutImmutableSampler_t* Construct<PipelineLayoutImmutableSampler_t>(PipelineLayoutImmutableSampler_t* pMemory)
{
} /* size: 0 */

// <0042628C> ../public/tier0/platform.h:1477
inline RenderBufferBarrier_t* Construct<RenderBufferBarrier_t>(RenderBufferBarrier_t* pMemory)
{
} /* size: 0 */

// <002FB863> ../public/tier0/platform.h:1477
inline TextureResidencyInfo_t* Construct<TextureResidencyInfo_t>(TextureResidencyInfo_t* pMemory)
{
} /* size: 0 */

// <002A2E98> ../public/tier0/platform.h:1477
inline CTextureSequenceRecord_t* Construct<CTextureSequenceRecord_t>(CTextureSequenceRecord_t* pMemory)
{
} /* size: 0 */

// <0016ED5D> ../public/tier0/platform.h:1477
inline MultiViewCBPool_t* Construct<CRenderDeviceBase::MultiViewCBPool_t>(MultiViewCBPool_t* pMemory)
{
} /* size: 0 */

// <000F9F01> ../public/tier0/platform.h:1477
inline CCommandStream* Construct<CCommandStream>(CCommandStream* pMemory)
{
} /* size: 0 */

// <0008392D> ../public/tier0/platform.h:1477
inline RBNode_t** Construct<RBNode_t*>(RBNode_t** pMemory)
{
} /* size: 0 */

// <00078E46> ../public/tier0/platform.h:1477
inline OcclusionQueryObject_t* Construct<COcclusionQueryMgr::OcclusionQueryObject_t>(OcclusionQueryObject_t* pMemory)
{
} /* size: 0 */

// <00291EBC> ../../public/tier0/platform.h:1477
inline CVfxFunctionAttribute* Construct<CVfxFunctionAttribute>(CVfxFunctionAttribute* pMemory)
{
} /* size: 0 */

// <0028D24A> ../../public/tier0/platform.h:1477
inline Node_t* Construct<CUtlMap<CUtlString, CVfxParsedShaderParam*>::Node_t>(Node_t* pMemory)
{
} /* size: 0 */

// <0028C5F1> ../../public/tier0/platform.h:1477
inline Node_t* Construct<CUtlMap<CUtlString, CVfxAnnotation>::Node_t>(Node_t* pMemory)
{
} /* size: 0 */

// <0018BAE3> ../../public/tier0/platform.h:1477
inline Node_t* Construct<CUtlMap<char const*, CUtlBuffer*, int, bool (*)(char const* const&, char const* const&)>::Node_t>(Node_t* pMemory)
{
} /* size: 0 */

// <005A43DD> ../public/tier0/platform.h:1477
inline TokenPairing_t* Construct<CUtlStringTokenSystem::TokenPairing_t>(TokenPairing_t* pMemory)
{
} /* size: 0 */

// <005647F3> ../public/tier0/platform.h:1477
inline CUtlVector<CUtlHashDict<void*>::Entry_t, CUtlMemory<CUtlHashDict<void*>::Entry_t, int> >* Construct<CUtlVector<CUtlHashDict<void*>::Entry_t, CUtlMemory<CUtlHashDict<void*>::Entry_t, int> > >(CUtlVector<CUtlHashDict<void*>::Entry_t, CUtlMemory<CUtlHashDict<void*>::Entry_t, int> >* pMemory)
{
} /* size: 0 */

// <004CD5F9> ../public/tier0/platform.h:1477
inline CConstructedMainThreadID* Construct<CConstructedMainThreadID>(CConstructedMainThreadID* pMemory)
{
} /* size: 0 */

// <004CD52F> ../public/tier0/platform.h:1477
inline CThreadLocalScope* Construct<CThreadLocalScope>(CThreadLocalScope* pMemory)
{
} /* size: 0 */

// <004B3CC0> ../public/tier0/platform.h:1477
inline Node_t* Construct<CUtlMap<char const*, int, short unsigned int, bool (*)(char const* const&, char const* const&)>::Node_t>(Node_t* pMemory)
{
} /* size: 0 */

// <004A3429> ../public/tier0/platform.h:1477
inline hash_item_t* Construct<CCountedStringPool::hash_item_t>(hash_item_t* pMemory)
{
} /* size: 0 */

// <004A215F> ../public/tier0/platform.h:1477
inline const char ** Construct<char const*>(const char ** pMemory)
{
} /* size: 0 */

// <0048AD7B> ../public/tier0/platform.h:1477
inline CThreadFastMutex* Construct<CThreadFastMutex>(CThreadFastMutex* pMemory)
{
} /* size: 0 */

// <0039FD40> ../public/tier0/platform.h:1477
inline SignalHandlerMemory_t* Construct<SignalHandlerMemory_t>(SignalHandlerMemory_t* pMemory)
{
} /* size: 0 */

// <0038263F> ../public/tier0/platform.h:1477
inline CThreadKeyHolder* Construct<CThreadKeyHolder>(CThreadKeyHolder* pMemory)
{
} /* size: 0 */

// <002A7F0E> ../public/tier0/platform.h:1477
inline MemPage_t* Construct<CUtlMemoryBlockAllocator::MemPage_t>(MemPage_t* pMemory)
{
} /* size: 0 */

// <002A579B> ../public/tier0/platform.h:1477
inline void** Construct<void*>(void** pMemory)
{
} /* size: 0 */

// <002824E7> ../public/tier0/platform.h:1477
inline CLoggingSystem* Construct<CLoggingSystem>(CLoggingSystem* pMemory)
{
} /* size: 0 */

// <0025D8D5> ../public/tier0/platform.h:1477
inline IndexedString_t* Construct<CKeyValuesSystem::IndexedString_t>(IndexedString_t* pMemory)
{
} /* size: 0 */

// <00259150> ../public/tier0/platform.h:1477
inline Node_t* Construct<CUtlMap<HKeySymbol, bool>::Node_t>(Node_t* pMemory)
{
} /* size: 0 */

// <001CB6B3> ../public/tier0/platform.h:1477
inline ThreadMultiWaitExtra_t* Construct<ThreadMultiWaitExtra_t>(ThreadMultiWaitExtra_t* pMemory)
{
} /* size: 0 */

// <001CB1B1> ../public/tier0/platform.h:1477
inline CJobThread** Construct<CJobThread*>(CJobThread** pMemory)
{
} /* size: 0 */

// <001CAFC8> ../public/tier0/platform.h:1477
inline scheduled_call_t* Construct<CAsyncScheduledFunctionManager::scheduled_call_t>(scheduled_call_t* pMemory)
{
} /* size: 0 */

// <001CACC5> ../public/tier0/platform.h:1477
inline MainThreadjob* Construct<CThreadPool::MainThreadjob>(MainThreadjob* pMemory)
{
} /* size: 0 */

// <001C951A> ../public/tier0/platform.h:1477
inline CCountJob* Construct<ThreadPoolTest::CCountJob>(CCountJob* pMemory)
{
} /* size: 0 */

// <00196F62> ../public/tier0/platform.h:1477
inline OrGroup_t* Construct<CFilterString::OrGroup_t>(OrGroup_t* pMemory)
{
} /* size: 0 */

// <00196EC4> ../public/tier0/platform.h:1477
inline MatchString_t* Construct<CFilterString::MatchString_t>(MatchString_t* pMemory)
{
} /* size: 0 */

// <001580E8> ../public/tier0/platform.h:1477
inline CFiber* Construct<CFiber>(CFiber* pMemory)
{
} /* size: 0 */

// <00153EC8> ../public/tier0/platform.h:1477
inline FiberToolsOrderedConstructionGlobals_t* Construct<FiberToolsOrderedConstructionGlobals_t>(FiberToolsOrderedConstructionGlobals_t* pMemory)
{
} /* size: 0 */

// <00153DA9> ../public/tier0/platform.h:1477
inline CFiberJobPool* Construct<CFiberJobPool>(CFiberJobPool* pMemory)
{
} /* size: 0 */

// <001268F0> ../public/tier0/platform.h:1477
inline CEventId* Construct<CEventId>(CEventId* pMemory)
{
} /* size: 0 */

// <000CAD1D> ../public/tier0/platform.h:1477
inline HashEntry_t* Construct<CConCommandHash::HashEntry_t>(HashEntry_t* pMemory)
{
} /* size: 0 */

// <0009EE72> ../public/tier0/platform.h:1477
inline ArgumentSet_t* Construct<CCommandLine::ArgumentSet_t>(ArgumentSet_t* pMemory)
{
} /* size: 0 */

// <0009DCFA> ../public/tier0/platform.h:1477
inline CCommandLine* Construct<CCommandLine>(CCommandLine* pMemory)
{
} /* size: 0 */

// <001314D3> ../public/tier0/platform.h:1477
inline SchemaBaseBindingInfo_t* Construct<SchemaBaseBindingInfo_t>(SchemaBaseBindingInfo_t* pMemory)
{
} /* size: 0 */

// <000CFC4C> ../public/tier0/platform.h:1477
inline DetectedSchemaMismatch_t* Construct<CSchemaSystem::DetectedSchemaMismatch_t>(DetectedSchemaMismatch_t* pMemory)
{
} /* size: 0 */

// <000A5980> ../public/tier0/platform.h:1477
inline Node_t* Construct<CUtlMap<CSchemaType*, CSchemaType_Ptr*, short unsigned int, bool (*)(CSchemaType* const&, CSchemaType* const&)>::Node_t>(Node_t* pMemory)
{
} /* size: 0 */

// <000A4D64> ../public/tier0/platform.h:1477
inline Node_t* Construct<CUtlMap<TypeAndCountInfo_t, CSchemaType_FixedArray*, short unsigned int, bool (*)(const TypeAndCountInfo_t&, const TypeAndCountInfo_t&)>::Node_t>(Node_t* pMemory)
{
} /* size: 0 */

// <000A414C> ../public/tier0/platform.h:1477
inline Node_t* Construct<CUtlMap<int, CSchemaType_Bitfield*, short unsigned int, bool (*)(int const&, int const&)>::Node_t>(Node_t* pMemory)
{
} /* size: 0 */

// <000A3560> ../public/tier0/platform.h:1477
inline Node_t* Construct<CUtlMap<int, CSchemaType_Atomic*, short unsigned int, bool (*)(int const&, int const&)>::Node_t>(Node_t* pMemory)
{
} /* size: 0 */

// <000A2944> ../public/tier0/platform.h:1477
inline Node_t* Construct<CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_T*, short unsigned int, bool (*)(const AtomicTypeInfo_T_t&, const AtomicTypeInfo_T_t&)>::Node_t>(Node_t* pMemory)
{
} /* size: 0 */

// <000A1CFC> ../public/tier0/platform.h:1477
inline Node_t* Construct<CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT*, short unsigned int, bool (*)(const AtomicTypeInfo_T_t&, const AtomicTypeInfo_T_t&)>::Node_t>(Node_t* pMemory)
{
} /* size: 0 */

// <000A10B4> ../public/tier0/platform.h:1477
inline Node_t* Construct<CUtlMap<AtomicTypeInfo_TT_t, CSchemaType_Atomic_TT*, short unsigned int, bool (*)(const AtomicTypeInfo_TT_t&, const AtomicTypeInfo_TT_t&)>::Node_t>(Node_t* pMemory)
{
} /* size: 0 */

// <000A0498> ../public/tier0/platform.h:1477
inline Node_t* Construct<CUtlMap<AtomicTypeInfo_I_t, CSchemaType_Atomic_I*, short unsigned int, bool (*)(const AtomicTypeInfo_I_t&, const AtomicTypeInfo_I_t&)>::Node_t>(Node_t* pMemory)
{
} /* size: 0 */

// <0009F8AC> ../public/tier0/platform.h:1477
inline Node_t* Construct<CUtlMap<unsigned int, CSchemaType_DeclaredClass*, short unsigned int, bool (*)(unsigned int const&, unsigned int const&)>::Node_t>(Node_t* pMemory)
{
} /* size: 0 */

// <000900A2> ../public/tier0/platform.h:1477
inline Node_t* Construct<CUtlMap<unsigned int, CSchemaType_DeclaredEnum*, short unsigned int, bool (*)(unsigned int const&, unsigned int const&)>::Node_t>(Node_t* pMemory)
{
} /* size: 0 */

// <0008F4B6> ../public/tier0/platform.h:1477
inline Node_t* Construct<CUtlMap<int, const SchemaAtomicTypeInfo_t*, short unsigned int, bool (*)(int const&, int const&)>::Node_t>(Node_t* pMemory)
{
} /* size: 0 */

// <003FFB11> ../public/tier0/platform.h:1477
inline Node_t* Construct<CUtlMap<const CRenderMesh*, CMeshRayTrace*>::Node_t>(Node_t* pMemory)
{
} /* size: 0 */

// <003513B7> ../public/tier0/platform.h:1477
inline BodyPart_t* Construct<CModel::BodyPart_t>(BodyPart_t* pMemory)
{
} /* size: 0 */

// <00350FC2> ../public/tier0/platform.h:1477
inline AttachmentPairing_t* Construct<AttachmentPairing_t>(AttachmentPairing_t* pMemory)
{
} /* size: 0 */

// <0034F72F> ../public/tier0/platform.h:1477
inline CUtlHashtable<int, float, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<i Construct<CUtlHashtable<int, float> >(CUtlHashtable<int, float, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<i pMemory)
{
} /* size: 0 */

// <0034B771> ../public/tier0/platform.h:1477
inline EmbeddedMeshData_t* Construct<EmbeddedMeshData_t>(EmbeddedMeshData_t* pMemory)
{
} /* size: 0 */

// <00217D20> ../public/tier0/platform.h:1477
inline VertexColor_t* Construct<VertexColor_t>(VertexColor_t* pMemory)
{
} /* size: 0 */

// <00CA2956> ../public/tier0/platform.h:1477
inline TreeEntry_t* Construct<CTexturePacker::TreeEntry_t>(TreeEntry_t* pMemory)
{
} /* size: 0 */

// <005ECFB9> ../public/tier0/platform.h:1477
inline CCharRenderGeometry* Construct<CCharRenderGeometry>(CCharRenderGeometry* pMemory)
{
} /* size: 0 */

// <005ECF29> ../public/tier0/platform.h:1477
inline CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >* Construct<CUtlVector<CCharRenderGeometry> >(CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >* pMemory)
{
} /* size: 0 */

// <0057B084> ../public/tier0/platform.h:1477
inline PendingManifest_t* Construct<CTextureDictionary::PendingManifest_t>(PendingManifest_t* pMemory)
{
} /* size: 0 */

// <0057AEFA> ../public/tier0/platform.h:1477
inline DeferredResourceLoads_t* Construct<CTextureDictionary::DeferredResourceLoads_t>(DeferredResourceLoads_t* pMemory)
{
} /* size: 0 */

// <00579A53> ../public/tier0/platform.h:1477
inline CMatSystemTexture* Construct<CMatSystemTexture>(CMatSystemTexture* pMemory)
{
} /* size: 0 */

// <00533C07> ../public/tier0/platform.h:1477
inline Page_t* Construct<CFontTextureCache::Page_t>(Page_t* pMemory)
{
} /* size: 0 */

// <004F7421> ../public/tier0/platform.h:1477
inline FontAlias_t* Construct<FontAlias_t>(FontAlias_t* pMemory)
{
} /* size: 0 */

// <004F30C5> ../public/tier0/platform.h:1477
inline SFontDescription* Construct<SFontDescription>(SFontDescription* pMemory)
{
} /* size: 0 */

// <004F2866> ../public/tier0/platform.h:1477
inline Node_t* Construct<CUtlMap<CFontManager::CFontAttributes, CFontManager::CFontInfo, int>::Node_t>(Node_t* pMemory)
{
} /* size: 0 */

// <004F1C32> ../public/tier0/platform.h:1477
inline Node_t* Construct<CUtlMap<short unsigned int, CFontManager::CFontDataFile, int>::Node_t>(Node_t* pMemory)
{
} /* size: 0 */

// <004B1C79> ../public/tier0/platform.h:1477
inline SFontRange* Construct<CFontAmalgam::SFontRange>(SFontRange* pMemory)
{
} /* size: 0 */

// <0043AB62> ../public/tier0/platform.h:1477
inline CUtlVector<IQueuedRenderable*, CUtlMemory<IQueuedRenderable*, int> >* Construct<CUtlVector<IQueuedRenderable*> >(CUtlVector<IQueuedRenderable*, CUtlMemory<IQueuedRenderable*, int> >* pMemory)
{
} /* size: 0 */

// <00430652> ../public/tier0/platform.h:1477
inline Color* Construct<Color>(Color* pMemory)
{
} /* size: 0 */

// <00267E47> ../public/tier0/platform.h:1477
inline texture_use_info_t* Construct<texture_use_info_t>(texture_use_info_t* pMemory)
{
} /* size: 0 */

// <00156B71> ../public/tier0/platform.h:1477
inline CMaterialMode* Construct<CMaterialMode>(CMaterialMode* pMemory)
{
} /* size: 0 */

// <00154441> ../public/tier0/platform.h:1477
inline MaterialStaticComboLoadRequest_t* Construct<MaterialStaticComboLoadRequest_t>(MaterialStaticComboLoadRequest_t* pMemory)
{
} /* size: 0 */

// <000496A9> ../public/tier0/platform.h:1477
inline LocalizationFileInfoRaw_t* Construct<LocalizationFileInfoRaw_t>(LocalizationFileInfoRaw_t* pMemory)
{
} /* size: 0 */

// <00047BB8> ../public/tier0/platform.h:1477
inline LocalizedString_t* Construct<CLocalize::LocalizedString_t>(LocalizedString_t* pMemory)
{
} /* size: 0 */

// <002175B4> ../public/tier0/platform.h:1477
inline FileHandleTracker_t* Construct<FileHandleTracker_t>(FileHandleTracker_t* pMemory)
{
} /* size: 0 */

// <00211F43> ../public/tier0/platform.h:1477
inline VPKContentFileInfo_t* Construct<VPKContentFileInfo_t>(VPKContentFileInfo_t* pMemory)
{
} /* size: 0 */

// <0020EA49> ../public/tier0/platform.h:1477
inline FileSort_t* Construct<CPackedStore::ChangeMultipleDirectoryEntries(const CUtlVector<VPKContentFileInfo_t>&, const CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >&)::FileSort_t>(FileSort_t* pMemory)
{
} /* size: 0 */

// <0015BDE0> ../public/tier0/platform.h:1477
inline CZipEntry* Construct<CZipFile::CZipEntry>(CZipEntry* pMemory)
{
} /* size: 0 */

// <000C6CCA> ../public/tier0/platform.h:1477
inline CSearchPath* Construct<CBaseFileSystem::CSearchPath>(CSearchPath* pMemory)
{
} /* size: 0 */

// <000C67BF> ../public/tier0/platform.h:1477
inline SearchPathStateEntry_t* Construct<CBaseFileSystem::SearchPathStateEntry_t>(SearchPathStateEntry_t* pMemory)
{
} /* size: 0 */

// <000C1FFC> ../public/tier0/platform.h:1477
inline FindData_t* Construct<CBaseFileSystem::FindData_t>(FindData_t* pMemory)
{
} /* size: 0 */

// <000BF27C> ../public/tier0/platform.h:1477
inline sort_search_paths_t* Construct<CBaseFileSystem::PrintSearchPaths()::sort_search_paths_t>(sort_search_paths_t* pMemory)
{
} /* size: 0 */

// <000B81AB> ../public/tier0/platform.h:1477
inline Node_t* Construct<CUtlMap<CUtlString, CBaseFileSystem::SymLink_t>::Node_t>(Node_t* pMemory)
{
} /* size: 0 */

// <000B664A> ../public/tier0/platform.h:1477
inline CUtlSymbol* Construct<CUtlSymbol>(CUtlSymbol* pMemory)
{
} /* size: 0 */

// <000B57EE> ../public/tier0/platform.h:1477
inline Node_t* Construct<CUtlMap<char const*, FixupSearchCacheEntry, int, bool (*)(char const* const&, char const* const&)>::Node_t>(Node_t* pMemory)
{
} /* size: 0 */

// <06E7DB46> ../public/tier0/platform.h:1503
void forward<int>(type& value)
{
} /* size: 0 */

// <06E7CB42> ../public/tier0/platform.h:1503
void forward<unsigned int&>(type& value)
{
} /* size: 0 */

// <06E7CB1D> ../public/tier0/platform.h:1503
void forward<int&>(type& value)
{
} /* size: 0 */

// <068EA63D> ../public/tier0/platform.h:1503
void forward<long long unsigned int>(type& value)
{
} /* size: 0 */

// <068E3F1B> ../public/tier0/platform.h:1503
void forward<const CUtlString&>(type& value)
{
} /* size: 0 */

// <068DEFD2> ../public/tier0/platform.h:1503
void forward<VfxStaticComboLoadRequest_t>(type& value)
{
} /* size: 0 */

// <06832134> ../public/tier0/platform.h:1503
void forward<char>(type& value)
{
} /* size: 0 */

// <06802B5B> ../public/tier0/platform.h:1503
void forward<CUtlString>(type& value)
{
} /* size: 0 */

// <067D0F33> ../public/tier0/platform.h:1503
void forward<CEntityKeyValues::KeyValueInfo_t>(type& value)
{
} /* size: 0 */

// <0657C012> ../public/tier0/platform.h:1503
void forward<unsigned int>(type& value)
{
} /* size: 0 */

// <064C652D> ../public/tier0/platform.h:1503
void forward<const CPhysAggregateData*>(type& value)
{
} /* size: 0 */

// <06451AF3> ../public/tier0/platform.h:1503
void forward<RnVertex_t>(type& value)
{
} /* size: 0 */

// <06080086> ../public/tier0/platform.h:1503
void forward<Vector>(type& value)
{
} /* size: 0 */

// <0607707D> ../public/tier0/platform.h:1503
void forward<CModelMesh::VertexStreamIndex_t>(type& value)
{
} /* size: 0 */

// <060762EA> ../public/tier0/platform.h:1503
void forward<const CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t&>(type& value)
{
} /* size: 0 */

// <060761E8> ../public/tier0/platform.h:1503
void forward<const CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t&>(type& value)
{
} /* size: 0 */

// <060724F0> ../public/tier0/platform.h:1503
void forward<const CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t&>(type& value)
{
} /* size: 0 */

// <06072105> ../public/tier0/platform.h:1503
void forward<const CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t&>(type& value)
{
} /* size: 0 */

// <05FD24BC> ../public/tier0/platform.h:1503
void forward<CModelStreamAccessor>(type& value)
{
} /* size: 0 */

// <05FD22D9> ../public/tier0/platform.h:1503
void forward<CModelStreamReader>(type& value)
{
} /* size: 0 */

// <05F6808C> ../public/tier0/platform.h:1503
void forward<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t>(type& value)
{
} /* size: 0 */

// <05F65658> ../public/tier0/platform.h:1503
void forward<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t>(type& value)
{
} /* size: 0 */

// <05F5EB32> ../public/tier0/platform.h:1503
void forward<const CUtlKeyValuePair<unsigned int, int>&>(type& value)
{
} /* size: 0 */

// <05EE36DE> ../public/tier0/platform.h:1503
void forward<qhPlane>(type& value)
{
} /* size: 0 */

// <05EE1F45> ../public/tier0/platform.h:1503
void forward<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t>(type& value)
{
} /* size: 0 */

// <05ED96D6> ../public/tier0/platform.h:1503
void forward<const qhVertex*&>(type& value)
{
} /* size: 0 */

// <05ED96AB> ../public/tier0/platform.h:1503
void forward<const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t&>(type& value)
{
} /* size: 0 */

// <05E57421> ../public/tier0/platform.h:1503
void forward<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t>(type& value)
{
} /* size: 0 */

// <05E512C1> ../public/tier0/platform.h:1503
void forward<qhVertex*&>(type& value)
{
} /* size: 0 */

// <05E503B8> ../public/tier0/platform.h:1503
void forward<const CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t&>(type& value)
{
} /* size: 0 */

// <05DD8A29> ../public/tier0/platform.h:1503
void forward<qhVector3>(type& value)
{
} /* size: 0 */

// <05DC74BB> ../public/tier0/platform.h:1503
void forward<const qhFace*&>(type& value)
{
} /* size: 0 */

// <05DB5C56> ../public/tier0/platform.h:1503
void forward<std::pair<CHalfEdgeMesh<int, EdgeDataPair_t, int>::FullEdgeHandle_t, CHalfEdgeMesh<int, EdgeDataPair_t, int>::FullEdgeHandle_t> >(type& value)
{
} /* size: 0 */

// <05CDB2E3> ../public/tier0/platform.h:1503
void forward<BoundaryLoopVertex_t>(type& value)
{
} /* size: 0 */

// <05CD95C4> ../public/tier0/platform.h:1503
void forward<const UndirectedEdge_t&>(type& value)
{
} /* size: 0 */

// <05CD86BF> ../public/tier0/platform.h:1503
void forward<const EdgeFaceIdEntry_t&>(type& value)
{
} /* size: 0 */

// <05C96097> ../public/tier0/platform.h:1503
void forward<TriangleVertexBarycentric_t>(type& value)
{
} /* size: 0 */

// <05C95E28> ../public/tier0/platform.h:1503
void forward<ClippedLineSegment_t>(type& value)
{
} /* size: 0 */

// <05BB0BC6> ../public/tier0/platform.h:1503
void forward<float>(type& value)
{
} /* size: 0 */

// <056BD5E0> ../public/tier0/platform.h:1503
void forward<CLoadKV3FromKV1Text::CTranslationPath*>(type& value)
{
} /* size: 0 */

// <0568D0FA> ../public/tier0/platform.h:1503
void forward<std::pair<void const*, unsigned int> >(type& value)
{
} /* size: 0 */

// <0568B643> ../public/tier0/platform.h:1503
void forward<const empty_t&>(type& value)
{
} /* size: 0 */

// <05666F86> ../public/tier0/platform.h:1503
void forward<CUtlStringToken>(type& value)
{
} /* size: 0 */

// <0554B398> ../public/tier0/platform.h:1503
void forward<CKeyValues3Context*>(type& value)
{
} /* size: 0 */

// <05549C08> ../public/tier0/platform.h:1503
void forward<char const*>(type& value)
{
} /* size: 0 */

// <05549A95> ../public/tier0/platform.h:1503
void forward<KeyValues3*>(type& value)
{
} /* size: 0 */

// <055474BC> ../public/tier0/platform.h:1503
void forward<const CUtlStringToken&>(type& value)
{
} /* size: 0 */

// <04E37231> ../public/tier0/platform.h:1503
void forward<CAnimationGroupResource*>(type& value)
{
} /* size: 0 */

// <04E36760> ../public/tier0/platform.h:1503
void forward<const CUtlKeyValuePair<unsigned int, short unsigned int>&>(type& value)
{
} /* size: 0 */

// <04E34978> ../public/tier0/platform.h:1503
void forward<const ResourceBindingBase_t*&>(type& value)
{
} /* size: 0 */

// <04E34674> ../public/tier0/platform.h:1503
void forward<short unsigned int&>(type& value)
{
} /* size: 0 */

// <04CB09D6> ../public/tier0/platform.h:1503
void forward<long long unsigned int&>(type& value)
{
} /* size: 0 */

// <0496EFE3> ../public/tier0/platform.h:1503
void *& forward<void*>(type& value)
{
} /* size: 0 */

// <04456EB3> ../public/tier0/platform.h:1503
void forward<CCallStackMarker_Manual>(type& value)
{
} /* size: 0 */

// <03FF80E4> ../public/tier0/platform.h:1503
void forward<const IMaterial2*&>(type& value)
{
} /* size: 0 */

// <03AE24E9> ../public/tier0/platform.h:1503
void forward<CWeakHandle<InfoForResourceTypeCTextureBase> >(type& value)
{
} /* size: 0 */

// <03879CFB> ../public/tier0/platform.h:1503
void forward<SceneViewTimestampQuery_t*>(type& value)
{
} /* size: 0 */

// <0352F77B> ../public/tier0/platform.h:1503
void forward<CWeakHandle<InfoForResourceTypeIMaterial2> >(type& value)
{
} /* size: 0 */

// <0352F4D3> ../public/tier0/platform.h:1503
void forward<std::function<void(CSceneObject*)>*>(type& value)
{
} /* size: 0 */

// <0345EF6E> ../public/tier0/platform.h:1503
void forward<RenderPassAttachmentDesc_t>(type& value)
{
} /* size: 0 */

// <0345EDEC> ../public/tier0/platform.h:1503
void forward<RenderPassSubPass_t>(type& value)
{
} /* size: 0 */

// <0345E8E5> ../public/tier0/platform.h:1503
void forward<RenderSubPassAttachment_t>(type& value)
{
} /* size: 0 */

// <033A94B8> ../public/tier0/platform.h:1503
void forward<const CSceneSystem::FrameBufferScratchTexInfo_t&>(type& value)
{
} /* size: 0 */

// <0321F435> ../public/tier0/platform.h:1503
void forward<const CUtlKeyValuePair<unsigned int, empty_t>&>(type& value)
{
} /* size: 0 */

// <02E8B0DE> ../public/tier0/platform.h:1503
void forward<ISceneWorld*>(type& value)
{
} /* size: 0 */

// <02E25B74> ../public/tier0/platform.h:1503
void forward<CRenderBatchList*>(type& value)
{
} /* size: 0 */

// <02E241B2> ../public/tier0/platform.h:1503
void forward<CSceneWorld*>(type& value)
{
} /* size: 0 */

// <02E17592> ../public/tier0/platform.h:1503
void forward<PendingVisitList_t>(type& value)
{
} /* size: 0 */

// <02B76D62> ../public/tier0/platform.h:1503
void forward<Vector4D>(type& value)
{
} /* size: 0 */

// <02B7561D> ../public/tier0/platform.h:1503
void forward<CSceneLightProbeVolumeObject*&>(type& value)
{
} /* size: 0 */

// <0269CD0C> ../public/tier0/platform.h:1503
void forward<const CVSoundTypeManager::SfxDictEntry&>(type& value)
{
} /* size: 0 */

// <023E73E4> ../public/tier0/platform.h:1503
void forward<CManifestResourceGatherer::ResourceFenceGroup_t*>(type& value)
{
} /* size: 0 */

// <0234E254> ../public/tier0/platform.h:1503
void forward<const ResourceBindingBase_t*>(type& value)
{
} /* size: 0 */

// <0234D265> ../public/tier0/platform.h:1503
void forward<char*>(type& value)
{
} /* size: 0 */

// <0234D120> ../public/tier0/platform.h:1503
void forward<const ResourceTypeRegistration_t*>(type& value)
{
} /* size: 0 */

// <0234B85F> ../public/tier0/platform.h:1503
void forward<const ResourceId_t&>(type& value)
{
} /* size: 0 */

// <0229FA97> ../public/tier0/platform.h:1503
void forward<CLoadingResource*>(type& value)
{
} /* size: 0 */

// <0229D5C0> ../public/tier0/platform.h:1503
void forward<CLoadingResource*&>(type& value)
{
} /* size: 0 */

// <021CB7D0> ../public/tier0/platform.h:1503
void forward<CUtlVector<IGenericDataResourceListener*>*&>(type& value)
{
} /* size: 0 */

// <0218D5B3> ../public/tier0/platform.h:1503
void forward<CodeResourceManifestFenceGroup_t*>(type& value)
{
} /* size: 0 */

// <0215CC0A> ../public/tier0/platform.h:1503
void forward<CAsyncResourceDataRequest*>(type& value)
{
} /* size: 0 */

// <01FD331F> ../public/tier0/platform.h:1503
void forward<CVideoRecorder::VideoFrameData*>(type& value)
{
} /* size: 0 */

// <0185379F> ../public/tier0/platform.h:1503
void forward<unsigned char>(type& value)
{
} /* size: 0 */

// <01853716> ../public/tier0/platform.h:1503
void forward<CStrongHandle<InfoForResourceTypeCRenderMesh> >(type& value)
{
} /* size: 0 */

// <0175D098> ../public/tier0/platform.h:1503
void forward<PhysicsTrace::Result>(type& value)
{
} /* size: 0 */

// <01265176> ../public/tier0/platform.h:1503
void forward<CSteamItemInstance*>(type& value)
{
} /* size: 0 */

// <012645AE> ../public/tier0/platform.h:1503
void forward<VPhysXJoint_t>(type& value)
{
} /* size: 0 */

// <010000F1> ../public/tier0/platform.h:1503
void forward<CWorldNode*>(type& value)
{
} /* size: 0 */

// <00FFE637> ../public/tier0/platform.h:1503
void forward<const CWeakHandle<InfoForResourceTypeCEntityLump>&>(type& value)
{
} /* size: 0 */

// <00B9AE55> ../public/tier0/platform.h:1503
void forward<b3SurfaceMaterial>(type& value)
{
} /* size: 0 */

// <00B0F310> ../public/tier0/platform.h:1503
void forward<IPhysicsShape*>(type& value)
{
} /* size: 0 */

// <00B0D37B> ../public/tier0/platform.h:1503
void forward<const b3ContactId&>(type& value)
{
} /* size: 0 */

// <00594FB9> ../public/tier0/platform.h:1503
void forward<SceneScratchRenderTargetInfo_t>(type& value)
{
} /* size: 0 */

// <004ACCD9> ../public/tier0/platform.h:1503
void forward<CInputService::AsyncConfigFile_t>(type& value)
{
} /* size: 0 */

// <0012F52C> ../public/tier0/platform.h:1503
void forward<AppSystemInfo_t>(type& value)
{
} /* size: 0 */

// <000047B7> ../public/tier0/platform.h:1503
void forward<COrderedConstructor_DependencyManagement<void>*&>(type& value)
{
} /* size: 0 */

// <0336B3F1> ../public/tier0/platform.h:1503
void forward<IIKRuleData*>(type& value)
{
} /* size: 0 */

// <03343DBB> ../public/tier0/platform.h:1503
void forward<IIKJointConstraintData*>(type& value)
{
} /* size: 0 */

// <02729FBC> ../public/tier0/platform.h:1503
void forward<bool>(type& value)
{
} /* size: 0 */

// <025B0DB3> ../public/tier0/platform.h:1503
void forward<const CAnimationDecodeCacheEntry_t&>(type& value)
{
} /* size: 0 */

// <01A6731E> ../public/tier0/platform.h:1503
void forward<const Reflection::ClassID&>(type& value)
{
} /* size: 0 */

// <01A672F9> ../public/tier0/platform.h:1503
void forward<const std::shared_ptr<Reflection::CAttribute>&>(type& value)
{
} /* size: 0 */

// <019EEAE5> ../public/tier0/platform.h:1503
void forward<AnimTagID>(type& value)
{
} /* size: 0 */

// <019EDB2E> ../public/tier0/platform.h:1503
void forward<const Reflection::CClassInfo*>(type& value)
{
} /* size: 0 */

// <0157521B> ../public/tier0/platform.h:1503
void forward<CAnimGraphUpdateContext::AnimTagWithStatus>(type& value)
{
} /* size: 0 */

// <01572671> ../public/tier0/platform.h:1503
void forward<const AnimNodeID&>(type& value)
{
} /* size: 0 */

// <015718DB> ../public/tier0/platform.h:1503
void forward<const CSmartPtr<CUpdateNodeManager>&>(type& value)
{
} /* size: 0 */

// <015715AD> ../public/tier0/platform.h:1503
void forward<const CSmartPtr<const CAnimNodeBase>&>(type& value)
{
} /* size: 0 */

// <01570741> ../public/tier0/platform.h:1503
void forward<const CAnimUpdateNodeBase*&>(type& value)
{
} /* size: 0 */

// <01570716> ../public/tier0/platform.h:1503
void forward<const CRootMotion&>(type& value)
{
} /* size: 0 */

// <0156FCB2> ../public/tier0/platform.h:1503
void forward<const CStrideStatus&>(type& value)
{
} /* size: 0 */

// <01464AA9> ../public/tier0/platform.h:1503
void forward<CSmartPtr<CAnimMotorBase> >(type& value)
{
} /* size: 0 */

// <01460CFE> ../public/tier0/platform.h:1503
void forward<const CSmartPtr<Reflection::CInstanceFactory<CAnimMotorInstance, CAnimMotorBase, const CAnimMotorUpdaterBase*, const CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>&>::CFactoryMaker, CRefCountAccessor>&>(type& value)
{
} /* size: 0 */

// <013EC7B3> ../public/tier0/platform.h:1503
void forward<const CSmartPtr<CSequenceDistanceHelper>&>(type& value)
{
} /* size: 0 */

// <013E9B24> ../public/tier0/platform.h:1503
void forward<const CSmartPtr<Reflection::CInstanceFactory<CMotionMetricInstance, CMotionMetricBase, const CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>&, CPackedHandle<const CMotionMetricEvaluator> >::CFactoryMaker, CRefCountAccessor>&>(type& value)
{
} /* size: 0 */

// <0134E9D1> ../public/tier0/platform.h:1503
void forward<CSmartPtr<CMotionClip> >(type& value)
{
} /* size: 0 */

// <01309469> ../public/tier0/platform.h:1503
void forward<CSmartPtr<CAnimTagBase> >(type& value)
{
} /* size: 0 */

// <012655A8> ../public/tier0/platform.h:1503
void forward<CSmartPtr<CAnimState> >(type& value)
{
} /* size: 0 */

// <012654C4> ../public/tier0/platform.h:1503
void forward<IAnimState*>(type& value)
{
} /* size: 0 */

// <01264FFE> ../public/tier0/platform.h:1503
void forward<AnimNodeID>(type& value)
{
} /* size: 0 */

// <01260E6F> ../public/tier0/platform.h:1503
void forward<const AnimOutputID&>(type& value)
{
} /* size: 0 */

// <01260E4A> ../public/tier0/platform.h:1503
void forward<const CNodeConnection&>(type& value)
{
} /* size: 0 */

// <012600BF> ../public/tier0/platform.h:1503
void forward<const CSmartPtr<CSubGraph>&>(type& value)
{
} /* size: 0 */

// <011517C0> ../public/tier0/platform.h:1503
void forward<CSmartPtr<CMotionClipGroup> >(type& value)
{
} /* size: 0 */

// <00F4BF1A> ../public/tier0/platform.h:1503
void forward<IAnimNode*>(type& value)
{
} /* size: 0 */

// <00F4AAA7> ../public/tier0/platform.h:1503
void forward<CSmartPtr<CAnimParameterBase> >(type& value)
{
} /* size: 0 */

// <00F49CA5> ../public/tier0/platform.h:1503
void forward<CAnimState*>(type& value)
{
} /* size: 0 */

// <00F46E2F> ../public/tier0/platform.h:1503
void forward<const CSmartPtr<CAnimNodeBase>&>(type& value)
{
} /* size: 0 */

// <00F450EE> ../public/tier0/platform.h:1503
void forward<const AnimParamID&>(type& value)
{
} /* size: 0 */

// <00F4388F> ../public/tier0/platform.h:1503
void forward<CCachedPose>(type& value)
{
} /* size: 0 */

// <00F42807> ../public/tier0/platform.h:1503
void forward<const CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker>&>(type& value)
{
} /* size: 0 */

// <00F41E76> ../public/tier0/platform.h:1503
void forward<CTransform>(type& value)
{
} /* size: 0 */

// <00E0827E> ../public/tier0/platform.h:1503
void forward<AnimNodeLocation_t>(type& value)
{
} /* size: 0 */

// <00E07DCF> ../public/tier0/platform.h:1503
void forward<CSmartPtr<CAnimGraphSettingsGroup> >(type& value)
{
} /* size: 0 */

// <00E05E1D> ../public/tier0/platform.h:1503
void forward<const CSmartPtr<const CActivityValues>&>(type& value)
{
} /* size: 0 */

// <00E04FE4> ../public/tier0/platform.h:1503
void forward<const CSmartPtr<CAnimNodeInstanceBase>&>(type& value)
{
} /* size: 0 */

// <00E04184> ../public/tier0/platform.h:1503
void forward<const CAnimParameterBase*&>(type& value)
{
} /* size: 0 */

// <00E03690> ../public/tier0/platform.h:1503
void forward<const AnimTagID&>(type& value)
{
} /* size: 0 */

// <00E0366B> ../public/tier0/platform.h:1503
void forward<const CAnimTagBase*&>(type& value)
{
} /* size: 0 */

// <00C52CBD> ../public/tier0/platform.h:1503
void forward<CCompressor<float>*>(type& value)
{
} /* size: 0 */

// <00C52BD1> ../public/tier0/platform.h:1503
void forward<CCompressor<Vector>*>(type& value)
{
} /* size: 0 */

// <00C52AE5> ../public/tier0/platform.h:1503
void forward<CCompressor<Quaternion>*>(type& value)
{
} /* size: 0 */

// <00C529F9> ../public/tier0/platform.h:1503
void forward<CCompressor<int>*>(type& value)
{
} /* size: 0 */

// <00C5290D> ../public/tier0/platform.h:1503
void forward<CCompressor<bool>*>(type& value)
{
} /* size: 0 */

// <00C52821> ../public/tier0/platform.h:1503
void forward<CCompressor<Color>*>(type& value)
{
} /* size: 0 */

// <00C52735> ../public/tier0/platform.h:1503
void forward<CCompressor<Vector2D>*>(type& value)
{
} /* size: 0 */

// <00C52649> ../public/tier0/platform.h:1503
void forward<CCompressor<Vector4D>*>(type& value)
{
} /* size: 0 */

// <00C5207B> ../public/tier0/platform.h:1503
void forward<CCompressorSegment*>(type& value)
{
} /* size: 0 */

// <00C4B1C3> ../public/tier0/platform.h:1503
void forward<ISequence*>(type& value)
{
} /* size: 0 */

// <00C369EC> ../public/tier0/platform.h:1503
void forward<char const*&>(type& value)
{
} /* size: 0 */

// <00C31600> ../public/tier0/platform.h:1503
void forward<CCompressedAnim<float>*>(type& value)
{
} /* size: 0 */

// <00C31550> ../public/tier0/platform.h:1503
void forward<CCompressedAnim<Vector>*>(type& value)
{
} /* size: 0 */

// <00C313F0> ../public/tier0/platform.h:1503
void forward<CCompressedAnim<int>*>(type& value)
{
} /* size: 0 */

// <00C31340> ../public/tier0/platform.h:1503
void forward<CCompressedAnim<bool>*>(type& value)
{
} /* size: 0 */

// <00C31290> ../public/tier0/platform.h:1503
void forward<CCompressedAnim<Color>*>(type& value)
{
} /* size: 0 */

// <00C311E0> ../public/tier0/platform.h:1503
void forward<CCompressedAnim<Vector2D>*>(type& value)
{
} /* size: 0 */

// <00C31130> ../public/tier0/platform.h:1503
void forward<CCompressedAnim<Vector4D>*>(type& value)
{
} /* size: 0 */

// <0059E022> ../public/tier0/platform.h:1503
void forward<const CUtlKeyValuePair<AnimOutputID, CNodeConnection>&>(type& value)
{
} /* size: 0 */

// <00416AE5> ../public/tier0/platform.h:1503
void forward<const CUtlKeyValuePair<AnimNodeID, CSmartPtr<CAnimNodeBase> >&>(type& value)
{
} /* size: 0 */

// <00415FB2> ../public/tier0/platform.h:1503
void forward<const CUtlKeyValuePair<AnimNodeID, CAnimNodeBase*>&>(type& value)
{
} /* size: 0 */

// <00142670> ../public/tier0/platform.h:1503
void forward<CTraceResult*>(type& value)
{
} /* size: 0 */

// <0177772D> ../public/tier0/platform.h:1503
void forward<VfxDescriptor_t>(type& value)
{
} /* size: 0 */

// <00C82F84> ../public/tier0/platform.h:1503
void forward<CRefCounted<CRefCountServiceBase<true, CRefMT> >*>(type& value)
{
} /* size: 0 */

// <00C2D2C9> ../public/tier0/platform.h:1503
void forward<CVulkanSamplerObject*>(type& value)
{
} /* size: 0 */

// <00C28F22> ../public/tier0/platform.h:1503
void forward<CDescriptorSetVulkan*&>(type& value)
{
} /* size: 0 */

// <00BB9BDA> ../public/tier0/platform.h:1503
void forward<const CShaderTableVulkan::RefCountedShaderFile_t&>(type& value)
{
} /* size: 0 */

// <00BB889F> ../public/tier0/platform.h:1503
void forward<const CShaderTableVulkan::RefCountedShaderModule_t&>(type& value)
{
} /* size: 0 */

// <00BB74ED> ../public/tier0/platform.h:1503
void forward<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t>::IndirectIndex&>(type& value)
{
} /* size: 0 */

// <00BB686A> ../public/tier0/platform.h:1503
void forward<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t>::IndirectIndex&>(type& value)
{
} /* size: 0 */

// <009B6BC9> ../public/tier0/platform.h:1503
void forward<RenderDescriptorSetHandle_t__*&>(type& value)
{
} /* size: 0 */

// <009B03AA> ../public/tier0/platform.h:1503
void forward<const CInputLayoutDict<CInputLayoutVulkan>::RenderInputLayoutDesc_t&>(type& value)
{
} /* size: 0 */

// <009B0385> ../public/tier0/platform.h:1503
void forward<CInputLayoutVulkan*&>(type& value)
{
} /* size: 0 */

// <008C0A4F> ../public/tier0/platform.h:1503
void forward<VkValidationFeatureEnableEXT>(type& value)
{
} /* size: 0 */

// <008C0897> ../public/tier0/platform.h:1503
void forward<VkPhysicalDeviceType>(type& value)
{
} /* size: 0 */

// <006FF096> ../public/tier0/platform.h:1503
void forward<VkDynamicState>(type& value)
{
} /* size: 0 */

// <006FD0EE> ../public/tier0/platform.h:1503
void forward<const PipelineCreateInfo_t&>(type& value)
{
} /* size: 0 */

// <006FD0C9> ../public/tier0/platform.h:1503
void forward<PipelineObjectVulkan_t*&>(type& value)
{
} /* size: 0 */

// <006FBFEB> ../public/tier0/platform.h:1503
void forward<VkRenderPass_T*&>(type& value)
{
} /* size: 0 */

// <006FA7BF> ../public/tier0/platform.h:1503
void forward<const PipelineLayoutCreateInfo_t&>(type& value)
{
} /* size: 0 */

// <006FA79A> ../public/tier0/platform.h:1503
void forward<const PipelineLayoutVulkan_t&>(type& value)
{
} /* size: 0 */

// <0064C298> ../public/tier0/platform.h:1503
void forward<long unsigned int&>(type& value)
{
} /* size: 0 */

// <0064C273> ../public/tier0/platform.h:1503
void forward<const CShaderVulkanBase*&>(type& value)
{
} /* size: 0 */

// <005896EF> ../public/tier0/platform.h:1503
void forward<CMemoryManagerVulkan::VmaQueuedResourceMove_t>(type& value)
{
} /* size: 0 */

// <004FDB39> ../public/tier0/platform.h:1503
void forward<CVulkanImage*&>(type& value)
{
} /* size: 0 */

// <004FDABC> ../public/tier0/platform.h:1503
void forward<const CImageLayoutTracker::ImageTransition_t&>(type& value)
{
} /* size: 0 */

// <004D5A53> ../public/tier0/platform.h:1503
void forward<const VulkanFramebufferState_t&>(type& value)
{
} /* size: 0 */

// <004D5A2E> ../public/tier0/platform.h:1503
void forward<VkFramebuffer_T*&>(type& value)
{
} /* size: 0 */

// <0045B262> ../public/tier0/platform.h:1503
void forward<ImageFormat>(type& value)
{
} /* size: 0 */

// <004473F9> ../public/tier0/platform.h:1503
void forward<RenderResourceHandle_t__*&>(type& value)
{
} /* size: 0 */

// <004473CD> ../public/tier0/platform.h:1503
void forward<const RenderDescriptorBinding_t&>(type& value)
{
} /* size: 0 */

// <0042645F> ../public/tier0/platform.h:1503
void forward<CBarrierHelperVulkan::BufferState_t>(type& value)
{
} /* size: 0 */

// <004263F9> ../public/tier0/platform.h:1503
void forward<CBarrierHelperVulkan::UAVState_t>(type& value)
{
} /* size: 0 */

// <00409549> ../public/tier0/platform.h:1503
void forward<CAsyncCompileHelperVulkan::ShaderWaitEntry_t>(type& value)
{
} /* size: 0 */

// <003002C2> ../public/tier0/platform.h:1503
void forward<std::pair<ResourceId_t, long unsigned int> >(type& value)
{
} /* size: 0 */

// <002FBB89> ../public/tier0/platform.h:1503
void forward<CTextureInfoId>(type& value)
{
} /* size: 0 */

// <00293C81> ../../public/tier0/platform.h:1503
void forward<CVfxParsedShaderParam*>(type& value)
{
} /* size: 0 */

// <0012D474> ../../public/tier0/platform.h:1503
void forward<CVfxSpirVReflect::BindingNumberChange_t>(type& value)
{
} /* size: 0 */

// <00052EE0> ../../public/tier0/platform.h:1503
void forward<VfxCompileTarget_t>(type& value)
{
} /* size: 0 */

// <005E76B7> ../public/tier0/platform.h:1503
void forward<wchar_t*>(type& value)
{
} /* size: 0 */

// <004CD409> ../public/tier0/platform.h:1503
void ()(CThreadLocalScope *, bool)& forward<void (&)(CThreadLocalScope*, bool)>(type& value)
{
} /* size: 0 */

// <0016073B> ../public/tier0/platform.h:1503
void forward<const CResourceDiskEnum*&>(type& value)
{
} /* size: 0 */

// <0015FC31> ../public/tier0/platform.h:1503
void forward<const CResourceDiskStructField*&>(type& value)
{
} /* size: 0 */

// <0015F188> ../public/tier0/platform.h:1503
void forward<const KV3ConvertSpecialFieldBehavior_t*&>(type& value)
{
} /* size: 0 */

// <0034AF12> ../public/tier0/platform.h:1503
void forward<const CBoneConstraintBase*>(type& value)
{
} /* size: 0 */

// <003445F2> ../public/tier0/platform.h:1503
void forward<float&>(type& value)
{
} /* size: 0 */

// <00167365> ../public/tier0/platform.h:1503
void forward<CStrongHandleCopyable<InfoForResourceTypeCModel> >(type& value)
{
} /* size: 0 */

// <00167282> ../public/tier0/platform.h:1503
void forward<CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph> >(type& value)
{
} /* size: 0 */

// <00431EF4> ../public/tier0/platform.h:1503
void forward<IQueuedRenderable*>(type& value)
{
} /* size: 0 */

// <002ECDD7> ../public/tier0/platform.h:1503
void forward<const SpamKey_t&>(type& value)
{
} /* size: 0 */

// <00267CC2> ../public/tier0/platform.h:1503
void forward<RenderDescriptorBinding_t>(type& value)
{
} /* size: 0 */

// <00267C9C> ../public/tier0/platform.h:1503
void forward<texture_use_info_t>(type& value)
{
} /* size: 0 */

// <001582C8> ../public/tier0/platform.h:1503
void forward<IMaterial2::TextureAttributeValue_t>(type& value)
{
} /* size: 0 */

// <001532CF> ../public/tier0/platform.h:1503
void forward<MaterialStaticComboLoadRequest_t>(type& value)
{
} /* size: 0 */

// <000C3048> ../public/tier0/platform.h:1503
void forward<CBaseFileSystem::CSearchPath*>(type& value)
{
} /* size: 0 */

// <000C2F65> ../public/tier0/platform.h:1503
void forward<CFileHandleTimer*>(type& value)
{
} /* size: 0 */

// <000C2F00> ../public/tier0/platform.h:1503
void forward<FileOpenDuplicateTime_t*>(type& value)
{
} /* size: 0 */

// <068E8135> ../public/tier0/platform.h:1512
inline CUtlKeyValuePair<CUtlString, empty_t>* Construct<CUtlKeyValuePair<CUtlString, empty_t>, const CUtlString&>(CUtlKeyValuePair<CUtlString, empty_t>* pMemory)
{
} /* size: 0 */

// <068E162D> ../public/tier0/platform.h:1512
inline VfxStaticComboLoadRequest_t* Construct<VfxStaticComboLoadRequest_t, VfxStaticComboLoadRequest_t>(VfxStaticComboLoadRequest_t* pMemory)
{
} /* size: 0 */

// <068324B3> ../public/tier0/platform.h:1512
inline char* Construct<char, char>(char* pMemory)
{
} /* size: 0 */

// <064C8945> ../public/tier0/platform.h:1512
inline const CPhysAggregateData ** Construct<const CPhysAggregateData*, const CPhysAggregateData*>(const CPhysAggregateData ** pMemory)
{
} /* size: 0 */

// <064553A4> ../public/tier0/platform.h:1512
inline RnVertex_t* Construct<RnVertex_t, RnVertex_t>(RnVertex_t* pMemory)
{
} /* size: 0 */

// <06080283> ../public/tier0/platform.h:1512
inline VertexStreamIndex_t* Construct<CModelMesh::VertexStreamIndex_t, CModelMesh::VertexStreamIndex_t>(VertexStreamIndex_t* pMemory)
{
} /* size: 0 */

// <0607F003> ../public/tier0/platform.h:1512
inline CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>* Construct<CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>, const CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t&, int&>(CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>* pMemory)
{
} /* size: 0 */

// <0607ED79> ../public/tier0/platform.h:1512
inline CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>* Construct<CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>, const CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t&, int&>(CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>* pMemory)
{
} /* size: 0 */

// <0607ACC5> ../public/tier0/platform.h:1512
inline CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>* Construct<CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>, const CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t&>(CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>* pMemory)
{
} /* size: 0 */

// <0607AAFB> ../public/tier0/platform.h:1512
inline CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>* Construct<CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>, const CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t&>(CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>* pMemory)
{
} /* size: 0 */

// <0607A4B8> ../public/tier0/platform.h:1512
inline CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>* Construct<CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>, const CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t&, int&>(CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>* pMemory)
{
} /* size: 0 */

// <06079EFD> ../public/tier0/platform.h:1512
inline CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, empty_t>* Construct<CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, empty_t>, const CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t&>(CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, empty_t>* pMemory)
{
} /* size: 0 */

// <060797C1> ../public/tier0/platform.h:1512
inline CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, empty_t>* Construct<CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, empty_t>, const CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t&>(CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, empty_t>* pMemory)
{
} /* size: 0 */

// <0607897A> ../public/tier0/platform.h:1512
inline CUtlKeyValuePair<int, empty_t>* Construct<CUtlKeyValuePair<int, empty_t>, int&>(CUtlKeyValuePair<int, empty_t>* pMemory)
{
} /* size: 0 */

// <06068179> ../public/tier0/platform.h:1512
inline CUtlKeyValuePair<unsigned int, int>* Construct<CUtlKeyValuePair<unsigned int, int>, unsigned int&, int&>(CUtlKeyValuePair<unsigned int, int>* pMemory)
{
} /* size: 0 */

// <05FD29DE> ../public/tier0/platform.h:1512
inline CModelStreamAccessor* Construct<CModelStreamAccessor, CModelStreamAccessor>(CModelStreamAccessor* pMemory)
{
} /* size: 0 */

// <05FD28EF> ../public/tier0/platform.h:1512
inline CModelStreamReader* Construct<CModelStreamReader, CModelStreamReader>(CModelStreamReader* pMemory)
{
} /* size: 0 */

// <05F7137B> ../public/tier0/platform.h:1512
inline ComponentHandleWithListPointer_t* Construct<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t>(ComponentHandleWithListPointer_t* pMemory)
{
} /* size: 0 */

// <05F6EDC3> ../public/tier0/platform.h:1512
inline ComponentHandleWithListPointer_t* Construct<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t>(ComponentHandleWithListPointer_t* pMemory)
{
} /* size: 0 */

// <05F67CAC> ../public/tier0/platform.h:1512
inline CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, empty_t>* Construct<CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, empty_t>, const CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t&>(CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, empty_t>* pMemory)
{
} /* size: 0 */

// <05F61321> ../public/tier0/platform.h:1512
inline CUtlKeyValuePair<unsigned int, int>* Construct<CUtlKeyValuePair<unsigned int, int>, const CUtlKeyValuePair<unsigned int, int>&>(CUtlKeyValuePair<unsigned int, int>* pMemory)
{
} /* size: 0 */

// <05EE9469> ../public/tier0/platform.h:1512
inline qhPlane* Construct<qhPlane, qhPlane>(qhPlane* pMemory)
{
} /* size: 0 */

// <05EE79AD> ../public/tier0/platform.h:1512
inline ComponentHandleWithListPointer_t* Construct<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t, CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t>(ComponentHandleWithListPointer_t* pMemory)
{
} /* size: 0 */

// <05EE21D4> ../public/tier0/platform.h:1512
inline CUtlKeyValuePair<const qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIF Construct<CUtlKeyValuePair<const qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t>, const qhVertex*&, const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t&>(CUtlKeyValuePair<const qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIF pMemory)
{
} /* size: 0 */

// <05E5DA8E> ../public/tier0/platform.h:1512
inline ComponentHandleWithListPointer_t* Construct<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t, CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t>(ComponentHandleWithListPointer_t* pMemory)
{
} /* size: 0 */

// <05E57112> ../public/tier0/platform.h:1512
inline CUtlKeyValuePair<qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex Construct<CUtlKeyValuePair<qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t>, qhVertex*&>(CUtlKeyValuePair<qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex pMemory)
{
} /* size: 0 */

// <05E55C1B> ../public/tier0/platform.h:1512
inline CUtlKeyValuePair<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon Construct<CUtlKeyValuePair<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t, empty_t>, const CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t&>(CUtlKeyValuePair<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon pMemory)
{
} /* size: 0 */

// <05E55912> ../public/tier0/platform.h:1512
inline CUtlKeyValuePair<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon Construct<CUtlKeyValuePair<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t, Vector>, const CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t&>(CUtlKeyValuePair<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon pMemory)
{
} /* size: 0 */

// <05DE19A5> ../public/tier0/platform.h:1512
inline qhVector3* Construct<qhVector3, qhVector3>(qhVector3* pMemory)
{
} /* size: 0 */

// <05DD7DB3> ../public/tier0/platform.h:1512
inline CUtlKeyValuePair<const qhFace*, int>* Construct<CUtlKeyValuePair<const qhFace*, int>, const qhFace*&, int&>(CUtlKeyValuePair<const qhFace*, int>* pMemory)
{
} /* size: 0 */

// <05DD6984> ../public/tier0/platform.h:1512
inline CUtlKeyValuePair<const qhVertex*, int>* Construct<CUtlKeyValuePair<const qhVertex*, int>, const qhVertex*&>(CUtlKeyValuePair<const qhVertex*, int>* pMemory)
{
} /* size: 0 */

// <05DC83A1> ../public/tier0/platform.h:1512
inline CUtlKeyValuePair<const qhVertex*, int>* Construct<CUtlKeyValuePair<const qhVertex*, int>, const qhVertex*&, int&>(CUtlKeyValuePair<const qhVertex*, int>* pMemory)
{
} /* size: 0 */

// <05DB9BB0> ../public/tier0/platform.h:1512
inline pair<CHalfEdgeMesh<int, EdgeDataPair_t, int>::FullEdgeHandle_t, CHalfEdgeMesh<int, EdgeDataPair_t, int>::FullEdgeHandle_t Construct<std::pair<CHalfEdgeMesh<int, EdgeDataPair_t, int>::FullEdgeHandle_t, CHalfEdgeMesh<int, EdgeDataPair_t, int>::FullEdgeHandle_t>, std::pair<CHalfEdgeMesh<int, EdgeDataPair_t, int>::FullEdgeHandle_t, CHalfEdgeMesh<int, EdgeDataPair_t, int>::FullEdgeHandle_t> >(pair<CHalfEdgeMesh<int, EdgeDataPair_t, int>::FullEdgeHandle_t, CHalfEdgeMesh<int, EdgeDataPair_t, int>::FullEdgeHandle_t pMemory)
{
} /* size: 0 */

// <05CDDE27> ../public/tier0/platform.h:1512
inline BoundaryLoopVertex_t* Construct<BoundaryLoopVertex_t, BoundaryLoopVertex_t>(BoundaryLoopVertex_t* pMemory)
{
} /* size: 0 */

// <05CDBC7B> ../public/tier0/platform.h:1512
inline CUtlKeyValuePair<UndirectedEdge_t, int>* Construct<CUtlKeyValuePair<UndirectedEdge_t, int>, const UndirectedEdge_t&, int&>(CUtlKeyValuePair<UndirectedEdge_t, int>* pMemory)
{
} /* size: 0 */

// <05CDA463> ../public/tier0/platform.h:1512
inline CUtlKeyValuePair<UndirectedEdge_t, EdgeFaceIdEntry_t>* Construct<CUtlKeyValuePair<UndirectedEdge_t, EdgeFaceIdEntry_t>, const UndirectedEdge_t&, const EdgeFaceIdEntry_t&>(CUtlKeyValuePair<UndirectedEdge_t, EdgeFaceIdEntry_t>* pMemory)
{
} /* size: 0 */

// <05C97A6D> ../public/tier0/platform.h:1512
inline TriangleVertexBarycentric_t* Construct<TriangleVertexBarycentric_t, TriangleVertexBarycentric_t>(TriangleVertexBarycentric_t* pMemory)
{
} /* size: 0 */

// <05C97790> ../public/tier0/platform.h:1512
inline ClippedLineSegment_t* Construct<ClippedLineSegment_t, ClippedLineSegment_t>(ClippedLineSegment_t* pMemory)
{
} /* size: 0 */

// <056BDBD5> ../public/tier0/platform.h:1512
inline CTranslationPath** Construct<CLoadKV3FromKV1Text::CTranslationPath*, CLoadKV3FromKV1Text::CTranslationPath*>(CTranslationPath** pMemory)
{
} /* size: 0 */

// <0568D887> ../public/tier0/platform.h:1512
inline pair<void const*, unsigned int>* Construct<std::pair<void const*, unsigned int>, std::pair<void const*, unsigned int> >(pair<void const*, unsigned int>* pMemory)
{
} /* size: 0 */

// <0554D1BC> ../public/tier0/platform.h:1512
inline CKeyValues3ContextImpl* Construct<CKeyValues3ContextImpl, CKeyValues3Context*>(CKeyValues3ContextImpl* pMemory)
{
} /* size: 0 */

// <0554BBD9> ../public/tier0/platform.h:1512
inline KeyValues3** Construct<KeyValues3*, KeyValues3*>(KeyValues3** pMemory)
{
} /* size: 0 */

// <055496BF> ../public/tier0/platform.h:1512
inline CUtlKeyValuePair<CUtlStringToken, int>* Construct<CUtlKeyValuePair<CUtlStringToken, int>, const CUtlStringToken&, int&>(CUtlKeyValuePair<CUtlStringToken, int>* pMemory)
{
} /* size: 0 */

// <053ECAF5> ../public/tier0/platform.h:1512
inline float* Construct<float, float>(float* pMemory)
{
} /* size: 0 */

// <04E3958E> ../public/tier0/platform.h:1512
inline CAnimationGroupResource** Construct<CAnimationGroupResource*, CAnimationGroupResource*>(CAnimationGroupResource** pMemory)
{
} /* size: 0 */

// <04E390A4> ../public/tier0/platform.h:1512
inline CUtlKeyValuePair<unsigned int, short unsigned int>* Construct<CUtlKeyValuePair<unsigned int, short unsigned int>, const CUtlKeyValuePair<unsigned int, short unsigned int>&>(CUtlKeyValuePair<unsigned int, short unsigned int>* pMemory)
{
} /* size: 0 */

// <04E37E34> ../public/tier0/platform.h:1512
inline CUtlKeyValuePair<short unsigned int, unsigned int>* Construct<CUtlKeyValuePair<short unsigned int, unsigned int>, short unsigned int&, unsigned int&>(CUtlKeyValuePair<short unsigned int, unsigned int>* pMemory)
{
} /* size: 0 */

// <04CB480E> ../public/tier0/platform.h:1512
inline CUtlKeyValuePair<long long unsigned int, empty_t>* Construct<CUtlKeyValuePair<long long unsigned int, empty_t>, long long unsigned int&>(CUtlKeyValuePair<long long unsigned int, empty_t>* pMemory)
{
} /* size: 0 */

// <0445738A> ../public/tier0/platform.h:1512
inline CStackAnnotation_SimpleString* Construct<CStackAnnotation_SimpleString, char const*, CCallStackMarker_Manual>(CStackAnnotation_SimpleString* pMemory)
{
} /* size: 0 */

// <03D926C1> ../public/tier0/platform.h:1512
inline CUtlKeyValuePair<const IMaterial2*, empty_t>* Construct<CUtlKeyValuePair<const IMaterial2*, empty_t>, const IMaterial2*&>(CUtlKeyValuePair<const IMaterial2*, empty_t>* pMemory)
{
} /* size: 0 */

// <0387ABB3> ../public/tier0/platform.h:1512
inline SceneViewTimestampQuery_t** Construct<SceneViewTimestampQuery_t*, SceneViewTimestampQuery_t*>(SceneViewTimestampQuery_t** pMemory)
{
} /* size: 0 */

// <0353280B> ../public/tier0/platform.h:1512
inline CWeakHandle<InfoForResourceTypeIMaterial2>* Construct<CWeakHandle<InfoForResourceTypeIMaterial2>, CWeakHandle<InfoForResourceTypeIMaterial2> >(CWeakHandle<InfoForResourceTypeIMaterial2>* pMemory)
{
} /* size: 0 */

// <035325E2> ../public/tier0/platform.h:1512
inline function<void(CSceneObject*)>** Construct<std::function<void(CSceneObject*)>*, std::function<void(CSceneObject*)>*>(function<void(CSceneObject*)>** pMemory)
{
} /* size: 0 */

// <0346025A> ../public/tier0/platform.h:1512
inline RenderPassAttachmentDesc_t* Construct<RenderPassAttachmentDesc_t, RenderPassAttachmentDesc_t>(RenderPassAttachmentDesc_t* pMemory)
{
} /* size: 0 */

// <034600FA> ../public/tier0/platform.h:1512
inline RenderPassSubPass_t* Construct<RenderPassSubPass_t, RenderPassSubPass_t>(RenderPassSubPass_t* pMemory)
{
} /* size: 0 */

// <0345F619> ../public/tier0/platform.h:1512
inline RenderSubPassAttachment_t* Construct<RenderSubPassAttachment_t, RenderSubPassAttachment_t>(RenderSubPassAttachment_t* pMemory)
{
} /* size: 0 */

// <0345E5DB> ../public/tier0/platform.h:1512
inline CWeakHandle<InfoForResourceTypeCTextureBase>* Construct<CWeakHandle<InfoForResourceTypeCTextureBase>, CWeakHandle<InfoForResourceTypeCTextureBase> >(CWeakHandle<InfoForResourceTypeCTextureBase>* pMemory)
{
} /* size: 0 */

// <033AAA3F> ../public/tier0/platform.h:1512
inline CUtlKeyValuePair<unsigned int, CSceneSystem::FrameBufferScratchTexInfo_t>* Construct<CUtlKeyValuePair<unsigned int, CSceneSystem::FrameBufferScratchTexInfo_t>, unsigned int&, const CSceneSystem::FrameBufferScratchTexInfo_t&>(CUtlKeyValuePair<unsigned int, CSceneSystem::FrameBufferScratchTexInfo_t>* pMemory)
{
} /* size: 0 */

// <03221E50> ../public/tier0/platform.h:1512
inline CUtlKeyValuePair<unsigned int, empty_t>* Construct<CUtlKeyValuePair<unsigned int, empty_t>, const CUtlKeyValuePair<unsigned int, empty_t>&>(CUtlKeyValuePair<unsigned int, empty_t>* pMemory)
{
} /* size: 0 */

// <02E95E9B> ../public/tier0/platform.h:1512
inline CRenderBatchList** Construct<CRenderBatchList*, CRenderBatchList*>(CRenderBatchList** pMemory)
{
} /* size: 0 */

// <02E93E80> ../public/tier0/platform.h:1512
inline CSceneWorld** Construct<CSceneWorld*, CSceneWorld*>(CSceneWorld** pMemory)
{
} /* size: 0 */

// <02E93638> ../public/tier0/platform.h:1512
inline void** Construct<void*, void*>(void** pMemory)
{
} /* size: 0 */

// <02E19F49> ../public/tier0/platform.h:1512
inline PendingVisitList_t* Construct<PendingVisitList_t, PendingVisitList_t>(PendingVisitList_t* pMemory)
{
} /* size: 0 */

// <02B7A504> ../public/tier0/platform.h:1512
inline ISceneWorld** Construct<ISceneWorld*, ISceneWorld*>(ISceneWorld** pMemory)
{
} /* size: 0 */

// <02B78CC6> ../public/tier0/platform.h:1512
inline Vector4D* Construct<Vector4D, Vector4D>(Vector4D* pMemory)
{
} /* size: 0 */

// <02B77380> ../public/tier0/platform.h:1512
inline CUtlKeyValuePair<CSceneLightProbeVolumeObject*, int>* Construct<CUtlKeyValuePair<CSceneLightProbeVolumeObject*, int>, CSceneLightProbeVolumeObject*&, int&>(CUtlKeyValuePair<CSceneLightProbeVolumeObject*, int>* pMemory)
{
} /* size: 0 */

// <02B770FC> ../public/tier0/platform.h:1512
inline CUtlKeyValuePair<int, int>* Construct<CUtlKeyValuePair<int, int>, int&, int&>(CUtlKeyValuePair<int, int>* pMemory)
{
} /* size: 0 */

// <0269D7AE> ../public/tier0/platform.h:1512
inline CUtlKeyValuePair<unsigned int, CVSoundTypeManager::SfxDictEntry>* Construct<CUtlKeyValuePair<unsigned int, CVSoundTypeManager::SfxDictEntry>, unsigned int&, const CVSoundTypeManager::SfxDictEntry&>(CUtlKeyValuePair<unsigned int, CVSoundTypeManager::SfxDictEntry>* pMemory)
{
} /* size: 0 */

// <023E938C> ../public/tier0/platform.h:1512
inline const char ** Construct<char const*, char const*>(const char ** pMemory)
{
} /* size: 0 */

// <023E9300> ../public/tier0/platform.h:1512
inline ResourceFenceGroup_t** Construct<CManifestResourceGatherer::ResourceFenceGroup_t*, CManifestResourceGatherer::ResourceFenceGroup_t*>(ResourceFenceGroup_t** pMemory)
{
} /* size: 0 */

// <023E6EE4> ../public/tier0/platform.h:1512
inline CUtlKeyValuePair<const ResourceBindingBase_t*, empty_t>* Construct<CUtlKeyValuePair<const ResourceBindingBase_t*, empty_t>, const ResourceBindingBase_t*&>(CUtlKeyValuePair<const ResourceBindingBase_t*, empty_t>* pMemory)
{
} /* size: 0 */

// <0235331C> ../public/tier0/platform.h:1512
inline const ResourceBindingBase_t ** Construct<const ResourceBindingBase_t*, const ResourceBindingBase_t*>(const ResourceBindingBase_t ** pMemory)
{
} /* size: 0 */

// <02351614> ../public/tier0/platform.h:1512
inline char** Construct<char*, char*>(char** pMemory)
{
} /* size: 0 */

// <0235142E> ../public/tier0/platform.h:1512
inline const ResourceTypeRegistration_t ** Construct<const ResourceTypeRegistration_t*, const ResourceTypeRegistration_t*>(const ResourceTypeRegistration_t ** pMemory)
{
} /* size: 0 */

// <0234E69C> ../public/tier0/platform.h:1512
inline CUtlKeyValuePair<ResourceId_t, const ResourceBindingBase_t*>* Construct<CUtlKeyValuePair<ResourceId_t, const ResourceBindingBase_t*>, const ResourceId_t&, const ResourceBindingBase_t*&>(CUtlKeyValuePair<ResourceId_t, const ResourceBindingBase_t*>* pMemory)
{
} /* size: 0 */

// <022A2BEF> ../public/tier0/platform.h:1512
inline CLoadingResource** Construct<CLoadingResource*, CLoadingResource*>(CLoadingResource** pMemory)
{
} /* size: 0 */

// <022A004E> ../public/tier0/platform.h:1512
inline CUtlKeyValuePair<const ResourceBindingBase_t*, unsigned int>* Construct<CUtlKeyValuePair<const ResourceBindingBase_t*, unsigned int>, const ResourceBindingBase_t*&>(CUtlKeyValuePair<const ResourceBindingBase_t*, unsigned int>* pMemory)
{
} /* size: 0 */

// <0229FB33> ../public/tier0/platform.h:1512
inline CUtlKeyValuePair<CLoadingResource*, empty_t>* Construct<CUtlKeyValuePair<CLoadingResource*, empty_t>, CLoadingResource*&>(CUtlKeyValuePair<CLoadingResource*, empty_t>* pMemory)
{
} /* size: 0 */

// <021CCA36> ../public/tier0/platform.h:1512
inline CUtlKeyValuePair<ResourceId_t, CUtlVector<IGenericDataResourceListener*, CUtlMemory<IGenericDataResourceListener*, int> > Construct<CUtlKeyValuePair<ResourceId_t, CUtlVector<IGenericDataResourceListener*>*>, const ResourceId_t&, CUtlVector<IGenericDataResourceListener*, CUtlMemory<IGenericDataResourceListener*, int> >*&>(CUtlKeyValuePair<ResourceId_t, CUtlVector<IGenericDataResourceListener*, CUtlMemory<IGenericDataResourceListener*, int> > pMemory)
{
} /* size: 0 */

// <0218DBED> ../public/tier0/platform.h:1512
inline CodeResourceManifestFenceGroup_t** Construct<CodeResourceManifestFenceGroup_t*, CodeResourceManifestFenceGroup_t*>(CodeResourceManifestFenceGroup_t** pMemory)
{
} /* size: 0 */

// <0215D347> ../public/tier0/platform.h:1512
inline CAsyncResourceDataRequest** Construct<CAsyncResourceDataRequest*, CAsyncResourceDataRequest*>(CAsyncResourceDataRequest** pMemory)
{
} /* size: 0 */

// <01FD3B0D> ../public/tier0/platform.h:1512
inline VideoFrameData** Construct<CVideoRecorder::VideoFrameData*, CVideoRecorder::VideoFrameData*>(VideoFrameData** pMemory)
{
} /* size: 0 */

// <01FD3A5D> ../public/tier0/platform.h:1512
inline AudioSampleData** Construct<CVideoRecorder::AudioSampleData*, CVideoRecorder::AudioSampleData*>(AudioSampleData** pMemory)
{
} /* size: 0 */

// <01D97159> ../public/tier0/platform.h:1512
inline CUtlKeyValuePair<unsigned int, empty_t>* Construct<CUtlKeyValuePair<unsigned int, empty_t>, unsigned int&>(CUtlKeyValuePair<unsigned int, empty_t>* pMemory)
{
} /* size: 0 */

// <01856808> ../public/tier0/platform.h:1512
inline CUtlStringToken* Construct<CUtlStringToken, CUtlStringToken>(CUtlStringToken* pMemory)
{
} /* size: 0 */

// <0185677C> ../public/tier0/platform.h:1512
inline int* Construct<int, int>(int* pMemory)
{
} /* size: 0 */

// <018560A1> ../public/tier0/platform.h:1512
inline long long unsigned int* Construct<long long unsigned int, long long unsigned int>(long long unsigned int* pMemory)
{
} /* size: 0 */

// <0185600A> ../public/tier0/platform.h:1512
inline unsigned char* Construct<unsigned char, unsigned char>(unsigned char* pMemory)
{
} /* size: 0 */

// <01855F5A> ../public/tier0/platform.h:1512
inline CStrongHandle<InfoForResourceTypeCRenderMesh>* Construct<CStrongHandle<InfoForResourceTypeCRenderMesh>, CStrongHandle<InfoForResourceTypeCRenderMesh> >(CStrongHandle<InfoForResourceTypeCRenderMesh>* pMemory)
{
} /* size: 0 */

// <0175D2AA> ../public/tier0/platform.h:1512
inline Result* Construct<PhysicsTrace::Result, PhysicsTrace::Result>(Result* pMemory)
{
} /* size: 0 */

// <0126D422> ../public/tier0/platform.h:1512
inline CSteamItemInstance** Construct<CSteamItemInstance*, CSteamItemInstance*>(CSteamItemInstance** pMemory)
{
} /* size: 0 */

// <0126C450> ../public/tier0/platform.h:1512
inline CPhysBodyDesc* Construct<CPhysBodyDesc, CPhysBodyDesc>(CPhysBodyDesc* pMemory)
{
} /* size: 0 */

// <0126C39F> ../public/tier0/platform.h:1512
inline VPhysXJoint_t* Construct<VPhysXJoint_t, VPhysXJoint_t>(VPhysXJoint_t* pMemory)
{
} /* size: 0 */

// <01003950> ../public/tier0/platform.h:1512
inline CWorldNode** Construct<CWorldNode*, CWorldNode*>(CWorldNode** pMemory)
{
} /* size: 0 */

// <01001CB0> ../public/tier0/platform.h:1512
inline CUtlKeyValuePair<CUtlStringToken, CWeakHandle<InfoForResourceTypeCEntityLump> >* Construct<CUtlKeyValuePair<CUtlStringToken, CWeakHandle<InfoForResourceTypeCEntityLump> >, const CUtlStringToken&, const CWeakHandle<InfoForResourceTypeCEntityLump>&>(CUtlKeyValuePair<CUtlStringToken, CWeakHandle<InfoForResourceTypeCEntityLump> >* pMemory)
{
} /* size: 0 */

// <00FFB199> ../public/tier0/platform.h:1512
inline KeyValueInfo_t* Construct<CEntityKeyValues::KeyValueInfo_t, CEntityKeyValues::KeyValueInfo_t>(KeyValueInfo_t* pMemory)
{
} /* size: 0 */

// <00E6A4A4> ../public/tier0/platform.h:1512
inline CUtlKeyValuePair<unsigned int, empty_t>* Construct<CUtlKeyValuePair<unsigned int, empty_t>, unsigned int&, const empty_t&>(CUtlKeyValuePair<unsigned int, empty_t>* pMemory)
{
} /* size: 0 */

// <00B9B857> ../public/tier0/platform.h:1512
inline b3SurfaceMaterial* Construct<b3SurfaceMaterial, b3SurfaceMaterial>(b3SurfaceMaterial* pMemory)
{
} /* size: 0 */

// <00B142D0> ../public/tier0/platform.h:1512
inline Vector* Construct<Vector, Vector>(Vector* pMemory)
{
} /* size: 0 */

// <00B11FBE> ../public/tier0/platform.h:1512
inline IPhysicsShape** Construct<IPhysicsShape*, IPhysicsShape*>(IPhysicsShape** pMemory)
{
} /* size: 0 */

// <00B0F4B3> ../public/tier0/platform.h:1512
inline CUtlKeyValuePair<b3ContactId, empty_t>* Construct<CUtlKeyValuePair<b3ContactId, empty_t>, const b3ContactId&>(CUtlKeyValuePair<b3ContactId, empty_t>* pMemory)
{
} /* size: 0 */

// <005963EC> ../public/tier0/platform.h:1512
inline SceneScratchRenderTargetInfo_t* Construct<SceneScratchRenderTargetInfo_t, SceneScratchRenderTargetInfo_t>(SceneScratchRenderTargetInfo_t* pMemory)
{
} /* size: 0 */

// <004AE65F> ../public/tier0/platform.h:1512
inline AsyncConfigFile_t* Construct<CInputService::AsyncConfigFile_t, CInputService::AsyncConfigFile_t>(AsyncConfigFile_t* pMemory)
{
} /* size: 0 */

// <003C812B> ../public/tier0/platform.h:1512
inline unsigned int* Construct<unsigned int, unsigned int>(unsigned int* pMemory)
{
} /* size: 0 */

// <00132E42> ../public/tier0/platform.h:1512
inline CUtlString* Construct<CUtlString, CUtlString>(CUtlString* pMemory)
{
} /* size: 0 */

// <00131AC6> ../public/tier0/platform.h:1512
inline AppSystemInfo_t* Construct<AppSystemInfo_t, AppSystemInfo_t>(AppSystemInfo_t* pMemory)
{
} /* size: 0 */

// <0000483D> ../public/tier0/platform.h:1512
inline COrderedInitShutdownRefWrapper<EarlyInit_Common>* Construct<COrderedInitShutdownRefWrapper<EarlyInit_Common>, COrderedConstructor_DependencyManagement<void>*&>(COrderedInitShutdownRefWrapper<EarlyInit_Common>* pMemory)
{
} /* size: 0 */

// <0336BC37> ../public/tier0/platform.h:1512
inline IIKRuleData** Construct<IIKRuleData*, IIKRuleData*>(IIKRuleData** pMemory)
{
} /* size: 0 */

// <0272C07A> ../public/tier0/platform.h:1512
inline bool* Construct<bool, bool>(bool* pMemory)
{
} /* size: 0 */

// <025B2D8A> ../public/tier0/platform.h:1512
inline CUtlKeyValuePair<unsigned int, CAnimationDecodeCacheEntry_t>* Construct<CUtlKeyValuePair<unsigned int, CAnimationDecodeCacheEntry_t>, unsigned int&, const CAnimationDecodeCacheEntry_t&>(CUtlKeyValuePair<unsigned int, CAnimationDecodeCacheEntry_t>* pMemory)
{
} /* size: 0 */

// <019EFDF1> ../public/tier0/platform.h:1512
inline AnimTagID* Construct<AnimTagID, AnimTagID>(AnimTagID* pMemory)
{
} /* size: 0 */

// <0157BDA2> ../public/tier0/platform.h:1512
inline AnimTagWithStatus* Construct<CAnimGraphUpdateContext::AnimTagWithStatus, CAnimGraphUpdateContext::AnimTagWithStatus>(AnimTagWithStatus* pMemory)
{
} /* size: 0 */

// <01576AC9> ../public/tier0/platform.h:1512
inline CUtlKeyValuePair<AnimNodeID, int>* Construct<CUtlKeyValuePair<AnimNodeID, int>, const AnimNodeID&, int&>(CUtlKeyValuePair<AnimNodeID, int>* pMemory)
{
} /* size: 0 */

// <01576849> ../public/tier0/platform.h:1512
inline CUtlKeyValuePair<AnimNodeID, CPackedHandle<CAnimUpdateNodeBase> >* Construct<CUtlKeyValuePair<AnimNodeID, CPackedHandle<CAnimUpdateNodeBase> >, const AnimNodeID&, const CPackedHandle<CAnimUpdateNodeBase>&>(CUtlKeyValuePair<AnimNodeID, CPackedHandle<CAnimUpdateNodeBase> >* pMemory)
{
} /* size: 0 */

// <01576535> ../public/tier0/platform.h:1512
inline CUtlKeyValuePair<AnimNodeID, CSmartPtr<CUpdateNodeManager, CRefCountAccessor> >* Construct<CUtlKeyValuePair<AnimNodeID, CSmartPtr<CUpdateNodeManager> >, const AnimNodeID&, const CSmartPtr<CUpdateNodeManager, CRefCountAccessor>&>(CUtlKeyValuePair<AnimNodeID, CSmartPtr<CUpdateNodeManager, CRefCountAccessor> >* pMemory)
{
} /* size: 0 */

// <015762B5> ../public/tier0/platform.h:1512
inline CUtlKeyValuePair<AnimNodeID, CSmartPtr<const CAnimNodeBase, CRefCountAccessor> >* Construct<CUtlKeyValuePair<AnimNodeID, CSmartPtr<const CAnimNodeBase> >, const AnimNodeID&, const CSmartPtr<const CAnimNodeBase, CRefCountAccessor>&>(CUtlKeyValuePair<AnimNodeID, CSmartPtr<const CAnimNodeBase, CRefCountAccessor> >* pMemory)
{
} /* size: 0 */

// <01575769> ../public/tier0/platform.h:1512
inline CUtlKeyValuePair<const CAnimUpdateNodeBase*, CRootMotion>* Construct<CUtlKeyValuePair<const CAnimUpdateNodeBase*, CRootMotion>, const CAnimUpdateNodeBase*&, const CRootMotion&>(CUtlKeyValuePair<const CAnimUpdateNodeBase*, CRootMotion>* pMemory)
{
} /* size: 0 */

// <0157545F> ../public/tier0/platform.h:1512
inline CUtlKeyValuePair<const CAnimUpdateNodeBase*, CStrideStatus>* Construct<CUtlKeyValuePair<const CAnimUpdateNodeBase*, CStrideStatus>, const CAnimUpdateNodeBase*&, const CStrideStatus&>(CUtlKeyValuePair<const CAnimUpdateNodeBase*, CStrideStatus>* pMemory)
{
} /* size: 0 */

// <014669DF> ../public/tier0/platform.h:1512
inline CSmartPtr<CAnimMotorBase, CRefCountAccessor>* Construct<CSmartPtr<CAnimMotorBase>, CSmartPtr<CAnimMotorBase, CRefCountAccessor> >(CSmartPtr<CAnimMotorBase, CRefCountAccessor>* pMemory)
{
} /* size: 0 */

// <01462693> ../public/tier0/platform.h:1512
inline CUtlKeyValuePair<Reflection::ClassID, CSmartPtr<Reflection::CInstanceFactory<CAnimMotorInstance, CAnimMotorBase, const CA Construct<CUtlKeyValuePair<Reflection::ClassID, CSmartPtr<Reflection::CInstanceFactory<CAnimMotorInstance, CAnimMotorBase, const CAnimMotorUpdaterBase*, const CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>&>::CFactoryMaker, CRefCountAccessor> >, const Reflection::ClassID&, const CSmartPtr<Reflection::CInstanceFactory<CAnimMotorInstance, CAnimMotorBase, const CAnimMotorUpdaterBase*, const CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>&>::CFactoryMaker, CRefCountAccessor>&>(CUtlKeyValuePair<Reflection::ClassID, CSmartPtr<Reflection::CInstanceFactory<CAnimMotorInstance, CAnimMotorBase, const CA pMemory)
{
} /* size: 0 */

// <013EEB0B> ../public/tier0/platform.h:1512
inline CUtlKeyValuePair<HSequence, CSmartPtr<CSequenceDistanceHelper, CRefCountAccessor> >* Construct<CUtlKeyValuePair<HSequence, CSmartPtr<CSequenceDistanceHelper> >, const HSequence&, const CSmartPtr<CSequenceDistanceHelper, CRefCountAccessor>&>(CUtlKeyValuePair<HSequence, CSmartPtr<CSequenceDistanceHelper, CRefCountAccessor> >* pMemory)
{
} /* size: 0 */

// <013EBA1E> ../public/tier0/platform.h:1512
inline CUtlKeyValuePair<Reflection::ClassID, CSmartPtr<Reflection::CInstanceFactory<CMotionMetricInstance, CMotionMetricBase, co Construct<CUtlKeyValuePair<Reflection::ClassID, CSmartPtr<Reflection::CInstanceFactory<CMotionMetricInstance, CMotionMetricBase, const CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>&, CPackedHandle<const CMotionMetricEvaluator> >::CFactoryMaker, CRefCountAccessor> >, const Reflection::ClassID&, const CSmartPtr<Reflection::CInstanceFactory<CMotionMetricInstance, CMotionMetricBase, const CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>&, CPackedHandle<const CMotionMetricEvaluator> >::CFactoryMaker, CRefCountAccessor>&>(CUtlKeyValuePair<Reflection::ClassID, CSmartPtr<Reflection::CInstanceFactory<CMotionMetricInstance, CMotionMetricBase, co pMemory)
{
} /* size: 0 */

// <0134F090> ../public/tier0/platform.h:1512
inline CSmartPtr<CMotionClip, CRefCountAccessor>* Construct<CSmartPtr<CMotionClip>, CSmartPtr<CMotionClip, CRefCountAccessor> >(CSmartPtr<CMotionClip, CRefCountAccessor>* pMemory)
{
} /* size: 0 */

// <0130B2A2> ../public/tier0/platform.h:1512
inline CSmartPtr<CAnimTagBase, CRefCountAccessor>* Construct<CSmartPtr<CAnimTagBase>, CSmartPtr<CAnimTagBase, CRefCountAccessor> >(CSmartPtr<CAnimTagBase, CRefCountAccessor>* pMemory)
{
} /* size: 0 */

// <01308E46> ../public/tier0/platform.h:1512
inline CUtlKeyValuePair<Reflection::ClassID, CUtlVector<IAnimTagListener*, CUtlMemory<IAnimTagListener*, int> > >* Construct<CUtlKeyValuePair<Reflection::ClassID, CUtlVector<IAnimTagListener*> >, const Reflection::ClassID&>(CUtlKeyValuePair<Reflection::ClassID, CUtlVector<IAnimTagListener*, CUtlMemory<IAnimTagListener*, int> > >* pMemory)
{
} /* size: 0 */

// <0126A8B5> ../public/tier0/platform.h:1512
inline CSmartPtr<CAnimState, CRefCountAccessor>* Construct<CSmartPtr<CAnimState>, CSmartPtr<CAnimState, CRefCountAccessor> >(CSmartPtr<CAnimState, CRefCountAccessor>* pMemory)
{
} /* size: 0 */

// <0126A806> ../public/tier0/platform.h:1512
inline IAnimState** Construct<IAnimState*, IAnimState*>(IAnimState** pMemory)
{
} /* size: 0 */

// <012625DC> ../public/tier0/platform.h:1512
inline CUtlKeyValuePair<CUtlString, CSmartPtr<CSubGraph, CRefCountAccessor> >* Construct<CUtlKeyValuePair<CUtlString, CSmartPtr<CSubGraph> >, const CUtlString&, const CSmartPtr<CSubGraph, CRefCountAccessor>&>(CUtlKeyValuePair<CUtlString, CSmartPtr<CSubGraph, CRefCountAccessor> >* pMemory)
{
} /* size: 0 */

// <01157FA6> ../public/tier0/platform.h:1512
inline AnimNodeID* Construct<AnimNodeID, AnimNodeID>(AnimNodeID* pMemory)
{
} /* size: 0 */

// <011558B1> ../public/tier0/platform.h:1512
inline CSmartPtr<CMotionClipGroup, CRefCountAccessor>* Construct<CSmartPtr<CMotionClipGroup>, CSmartPtr<CMotionClipGroup, CRefCountAccessor> >(CSmartPtr<CMotionClipGroup, CRefCountAccessor>* pMemory)
{
} /* size: 0 */

// <0114F992> ../public/tier0/platform.h:1512
inline CUtlKeyValuePair<AnimOutputID, CNodeConnection>* Construct<CUtlKeyValuePair<AnimOutputID, CNodeConnection>, const AnimOutputID&, const CNodeConnection&>(CUtlKeyValuePair<AnimOutputID, CNodeConnection>* pMemory)
{
} /* size: 0 */

// <0105B570> ../public/tier0/platform.h:1512
inline CUtlKeyValuePair<CUtlString, int>* Construct<CUtlKeyValuePair<CUtlString, int>, const CUtlString&>(CUtlKeyValuePair<CUtlString, int>* pMemory)
{
} /* size: 0 */

// <01056F0D> ../public/tier0/platform.h:1512
inline CUtlKeyValuePair<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >* Construct<CUtlKeyValuePair<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, const Reflection::ClassID&, const std::shared_ptr<Reflection::CAttribute>&>(CUtlKeyValuePair<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >* pMemory)
{
} /* size: 0 */

// <00F53684> ../public/tier0/platform.h:1512
inline CAnimNodeBase** Construct<CAnimNodeBase*, CAnimNodeBase*>(CAnimNodeBase** pMemory)
{
} /* size: 0 */

// <00F51629> ../public/tier0/platform.h:1512
inline IAnimNode** Construct<IAnimNode*, IAnimNode*>(IAnimNode** pMemory)
{
} /* size: 0 */

// <00F50D1E> ../public/tier0/platform.h:1512
inline CSmartPtr<CAnimParameterBase, CRefCountAccessor>* Construct<CSmartPtr<CAnimParameterBase>, CSmartPtr<CAnimParameterBase, CRefCountAccessor> >(CSmartPtr<CAnimParameterBase, CRefCountAccessor>* pMemory)
{
} /* size: 0 */

// <00F4FD01> ../public/tier0/platform.h:1512
inline CAnimState** Construct<CAnimState*, CAnimState*>(CAnimState** pMemory)
{
} /* size: 0 */

// <00F4C2E2> ../public/tier0/platform.h:1512
inline CUtlKeyValuePair<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> >* Construct<CUtlKeyValuePair<AnimNodeID, CSmartPtr<CAnimNodeBase> >, const AnimNodeID&, const CSmartPtr<CAnimNodeBase, CRefCountAccessor>&>(CUtlKeyValuePair<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> >* pMemory)
{
} /* size: 0 */

// <00F4C1BC> ../public/tier0/platform.h:1512
inline const CClassInfo ** Construct<const Reflection::CClassInfo*, const Reflection::CClassInfo*>(const CClassInfo ** pMemory)
{
} /* size: 0 */

// <00F4B59F> ../public/tier0/platform.h:1512
inline CUtlKeyValuePair<AnimNodeID, CAnimNodeBase*>* Construct<CUtlKeyValuePair<AnimNodeID, CAnimNodeBase*>, const AnimNodeID&, CAnimNodeBase*&>(CUtlKeyValuePair<AnimNodeID, CAnimNodeBase*>* pMemory)
{
} /* size: 0 */

// <00F4A2F1> ../public/tier0/platform.h:1512
inline CUtlKeyValuePair<AnimParamID, int>* Construct<CUtlKeyValuePair<AnimParamID, int>, const AnimParamID&, int&>(CUtlKeyValuePair<AnimParamID, int>* pMemory)
{
} /* size: 0 */

// <00F4A29C> ../public/tier0/platform.h:1512
inline CUtlKeyValuePair<CUtlString, int>* Construct<CUtlKeyValuePair<CUtlString, int>, const CUtlString&, int&>(CUtlKeyValuePair<CUtlString, int>* pMemory)
{
} /* size: 0 */

// <00F47C5D> ../public/tier0/platform.h:1512
inline CUtlKeyValuePair<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor> >* Construct<CUtlKeyValuePair<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker> >, const Reflection::ClassID&, const CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>&>(CUtlKeyValuePair<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor> >* pMemory)
{
} /* size: 0 */

// <00F438E1> ../public/tier0/platform.h:1512
inline CTransform* Construct<CTransform, CTransform>(CTransform* pMemory)
{
} /* size: 0 */

// <00E0D71A> ../public/tier0/platform.h:1512
inline AnimNodeLocation_t* Construct<AnimNodeLocation_t, AnimNodeLocation_t>(AnimNodeLocation_t* pMemory)
{
} /* size: 0 */

// <00E0D4AA> ../public/tier0/platform.h:1512
inline CSmartPtr<CAnimGraphSettingsGroup, CRefCountAccessor>* Construct<CSmartPtr<CAnimGraphSettingsGroup>, CSmartPtr<CAnimGraphSettingsGroup, CRefCountAccessor> >(CSmartPtr<CAnimGraphSettingsGroup, CRefCountAccessor>* pMemory)
{
} /* size: 0 */

// <00E09F6F> ../public/tier0/platform.h:1512
inline CUtlKeyValuePair<int, CSmartPtr<const CActivityValues, CRefCountAccessor> >* Construct<CUtlKeyValuePair<int, CSmartPtr<const CActivityValues> >, int&, const CSmartPtr<const CActivityValues, CRefCountAccessor>&>(CUtlKeyValuePair<int, CSmartPtr<const CActivityValues, CRefCountAccessor> >* pMemory)
{
} /* size: 0 */

// <00E09754> ../public/tier0/platform.h:1512
inline CUtlKeyValuePair<int, CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor> >* Construct<CUtlKeyValuePair<int, CSmartPtr<CAnimNodeInstanceBase> >, int&, const CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor>&>(CUtlKeyValuePair<int, CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor> >* pMemory)
{
} /* size: 0 */

// <00E08E38> ../public/tier0/platform.h:1512
inline CUtlKeyValuePair<AnimParamID, const CAnimParameterBase*>* Construct<CUtlKeyValuePair<AnimParamID, const CAnimParameterBase*>, const AnimParamID&, const CAnimParameterBase*&>(CUtlKeyValuePair<AnimParamID, const CAnimParameterBase*>* pMemory)
{
} /* size: 0 */

// <00E08B0C> ../public/tier0/platform.h:1512
inline CUtlKeyValuePair<AnimTagID, const CAnimTagBase*>* Construct<CUtlKeyValuePair<AnimTagID, const CAnimTagBase*>, const AnimTagID&, const CAnimTagBase*&>(CUtlKeyValuePair<AnimTagID, const CAnimTagBase*>* pMemory)
{
} /* size: 0 */

// <00C636A7> ../public/tier0/platform.h:1512
inline CCompressor<float>** Construct<CCompressor<float>*, CCompressor<float>*>(CCompressor<float>** pMemory)
{
} /* size: 0 */

// <00C63552> ../public/tier0/platform.h:1512
inline CCompressor<Vector>** Construct<CCompressor<Vector>*, CCompressor<Vector>*>(CCompressor<Vector>** pMemory)
{
} /* size: 0 */

// <00C633FD> ../public/tier0/platform.h:1512
inline CCompressor<Quaternion>** Construct<CCompressor<Quaternion>*, CCompressor<Quaternion>*>(CCompressor<Quaternion>** pMemory)
{
} /* size: 0 */

// <00C632A8> ../public/tier0/platform.h:1512
inline CCompressor<int>** Construct<CCompressor<int>*, CCompressor<int>*>(CCompressor<int>** pMemory)
{
} /* size: 0 */

// <00C63153> ../public/tier0/platform.h:1512
inline CCompressor<bool>** Construct<CCompressor<bool>*, CCompressor<bool>*>(CCompressor<bool>** pMemory)
{
} /* size: 0 */

// <00C62FFE> ../public/tier0/platform.h:1512
inline CCompressor<Color>** Construct<CCompressor<Color>*, CCompressor<Color>*>(CCompressor<Color>** pMemory)
{
} /* size: 0 */

// <00C62EA9> ../public/tier0/platform.h:1512
inline CCompressor<Vector2D>** Construct<CCompressor<Vector2D>*, CCompressor<Vector2D>*>(CCompressor<Vector2D>** pMemory)
{
} /* size: 0 */

// <00C62D54> ../public/tier0/platform.h:1512
inline CCompressor<Vector4D>** Construct<CCompressor<Vector4D>*, CCompressor<Vector4D>*>(CCompressor<Vector4D>** pMemory)
{
} /* size: 0 */

// <00C6220A> ../public/tier0/platform.h:1512
inline CCompressorSegment** Construct<CCompressorSegment*, CCompressorSegment*>(CCompressorSegment** pMemory)
{
} /* size: 0 */

// <00C5D67C> ../public/tier0/platform.h:1512
inline ISequence** Construct<ISequence*, ISequence*>(ISequence** pMemory)
{
} /* size: 0 */

// <00C5BE0B> ../public/tier0/platform.h:1512
inline IIKJointConstraintData** Construct<IIKJointConstraintData*, IIKJointConstraintData*>(IIKJointConstraintData** pMemory)
{
} /* size: 0 */

// <00C4A5BA> ../public/tier0/platform.h:1512
inline CUtlKeyValuePair<char const*, empty_t>* Construct<CUtlKeyValuePair<char const*, empty_t>, char const*&>(CUtlKeyValuePair<char const*, empty_t>* pMemory)
{
} /* size: 0 */

// <00C3D92D> ../public/tier0/platform.h:1512
inline CCompressedAnim<float>** Construct<CCompressedAnim<float>*, CCompressedAnim<float>*>(CCompressedAnim<float>** pMemory)
{
} /* size: 0 */

// <00C3D7F9> ../public/tier0/platform.h:1512
inline CCompressedAnim<Vector>** Construct<CCompressedAnim<Vector>*, CCompressedAnim<Vector>*>(CCompressedAnim<Vector>** pMemory)
{
} /* size: 0 */

// <00C3D6C5> ../public/tier0/platform.h:1512
inline CCompressedAnim<Quaternion>** Construct<CCompressedAnim<Quaternion>*, CCompressedAnim<Quaternion>*>(CCompressedAnim<Quaternion>** pMemory)
{
} /* size: 0 */

// <00C3D591> ../public/tier0/platform.h:1512
inline CCompressedAnim<int>** Construct<CCompressedAnim<int>*, CCompressedAnim<int>*>(CCompressedAnim<int>** pMemory)
{
} /* size: 0 */

// <00C3D45D> ../public/tier0/platform.h:1512
inline CCompressedAnim<bool>** Construct<CCompressedAnim<bool>*, CCompressedAnim<bool>*>(CCompressedAnim<bool>** pMemory)
{
} /* size: 0 */

// <00C3D329> ../public/tier0/platform.h:1512
inline CCompressedAnim<Color>** Construct<CCompressedAnim<Color>*, CCompressedAnim<Color>*>(CCompressedAnim<Color>** pMemory)
{
} /* size: 0 */

// <00C3D1F5> ../public/tier0/platform.h:1512
inline CCompressedAnim<Vector2D>** Construct<CCompressedAnim<Vector2D>*, CCompressedAnim<Vector2D>*>(CCompressedAnim<Vector2D>** pMemory)
{
} /* size: 0 */

// <00C3D0C1> ../public/tier0/platform.h:1512
inline CCompressedAnim<Vector4D>** Construct<CCompressedAnim<Vector4D>*, CCompressedAnim<Vector4D>*>(CCompressedAnim<Vector4D>** pMemory)
{
} /* size: 0 */

// <004C128B> ../public/tier0/platform.h:1512
inline CUtlKeyValuePair<AnimOutputID, CNodeConnection>* Construct<CUtlKeyValuePair<AnimOutputID, CNodeConnection>, const CUtlKeyValuePair<AnimOutputID, CNodeConnection>&>(CUtlKeyValuePair<AnimOutputID, CNodeConnection>* pMemory)
{
} /* size: 0 */

// <0041A8E4> ../public/tier0/platform.h:1512
inline CUtlKeyValuePair<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> >* Construct<CUtlKeyValuePair<AnimNodeID, CSmartPtr<CAnimNodeBase> >, const CUtlKeyValuePair<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> >&>(CUtlKeyValuePair<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> >* pMemory)
{
} /* size: 0 */

// <0041A3B4> ../public/tier0/platform.h:1512
inline CUtlKeyValuePair<AnimNodeID, CAnimNodeBase*>* Construct<CUtlKeyValuePair<AnimNodeID, CAnimNodeBase*>, const CUtlKeyValuePair<AnimNodeID, CAnimNodeBase*>&>(CUtlKeyValuePair<AnimNodeID, CAnimNodeBase*>* pMemory)
{
} /* size: 0 */

// <0014341E> ../public/tier0/platform.h:1512
inline CTraceResult** Construct<CTraceResult*, CTraceResult*>(CTraceResult** pMemory)
{
} /* size: 0 */

// <01777D5D> ../public/tier0/platform.h:1512
inline VfxDescriptor_t* Construct<VfxDescriptor_t, VfxDescriptor_t>(VfxDescriptor_t* pMemory)
{
} /* size: 0 */

// <00C2EE6B> ../public/tier0/platform.h:1512
inline CVulkanSamplerObject** Construct<CVulkanSamplerObject*, CVulkanSamplerObject*>(CVulkanSamplerObject** pMemory)
{
} /* size: 0 */

// <00C2EC33> ../public/tier0/platform.h:1512
inline TextureUpdate_t* Construct<CTextureManagerVulkan::TextureUpdate_t, CTextureManagerVulkan::TextureUpdate_t>(TextureUpdate_t* pMemory)
{
} /* size: 0 */

// <00C2C51E> ../public/tier0/platform.h:1512
inline CUtlKeyValuePair<CDescriptorSetVulkan*, empty_t>* Construct<CUtlKeyValuePair<CDescriptorSetVulkan*, empty_t>, CDescriptorSetVulkan*&>(CUtlKeyValuePair<CDescriptorSetVulkan*, empty_t>* pMemory)
{
} /* size: 0 */

// <00BBB10E> ../public/tier0/platform.h:1512
inline CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t>* Construct<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t>, long long unsigned int&, const CShaderTableVulkan::RefCountedShaderFile_t&>(CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t>* pMemory)
{
} /* size: 0 */

// <00BBAB1D> ../public/tier0/platform.h:1512
inline CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t>* Construct<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t>, long long unsigned int&, const CShaderTableVulkan::RefCountedShaderModule_t&>(CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t>* pMemory)
{
} /* size: 0 */

// <00BB98BA> ../public/tier0/platform.h:1512
inline CUtlKeyValuePair<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t>::IndirectIndex,  Construct<CUtlKeyValuePair<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t>::IndirectIndex, empty_t>, CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t>::IndirectIndex&, const empty_t&>(CUtlKeyValuePair<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t>::IndirectIndex, pMemory)
{
} /* size: 0 */

// <00BB857F> ../public/tier0/platform.h:1512
inline CUtlKeyValuePair<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t>::IndirectIndex Construct<CUtlKeyValuePair<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t>::IndirectIndex, empty_t>, CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t>::IndirectIndex&, const empty_t&>(CUtlKeyValuePair<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t>::IndirectIndex pMemory)
{
} /* size: 0 */

// <00ABCF44> ../public/tier0/platform.h:1512
inline CUtlKeyValuePair<short unsigned int, empty_t>* Construct<CUtlKeyValuePair<short unsigned int, empty_t>, short unsigned int&>(CUtlKeyValuePair<short unsigned int, empty_t>* pMemory)
{
} /* size: 0 */

// <009C29DE> ../public/tier0/platform.h:1512
inline CUtlKeyValuePair<CUtlStringToken, RenderDescriptorSetHandle_t__*>* Construct<CUtlKeyValuePair<CUtlStringToken, RenderDescriptorSetHandle_t__*>, const CUtlStringToken&, RenderDescriptorSetHandle_t__*&>(CUtlKeyValuePair<CUtlStringToken, RenderDescriptorSetHandle_t__*>* pMemory)
{
} /* size: 0 */

// <009B82B7> ../public/tier0/platform.h:1512
inline CUtlKeyValuePair<CInputLayoutDict<CInputLayoutVulkan>::RenderInputLayoutDesc_t, CInputLayoutVulkan*>* Construct<CUtlKeyValuePair<CInputLayoutDict<CInputLayoutVulkan>::RenderInputLayoutDesc_t, CInputLayoutVulkan*>, const CInputLayoutDict<CInputLayoutVulkan>::RenderInputLayoutDesc_t&, CInputLayoutVulkan*&>(CUtlKeyValuePair<CInputLayoutDict<CInputLayoutVulkan>::RenderInputLayoutDesc_t, CInputLayoutVulkan*>* pMemory)
{
} /* size: 0 */

// <008C12CA> ../public/tier0/platform.h:1512
inline VkValidationFeatureEnableEXT* Construct<VkValidationFeatureEnableEXT, VkValidationFeatureEnableEXT>(VkValidationFeatureEnableEXT* pMemory)
{
} /* size: 0 */

// <008C10AD> ../public/tier0/platform.h:1512
inline VkPhysicalDeviceType* Construct<VkPhysicalDeviceType, VkPhysicalDeviceType>(VkPhysicalDeviceType* pMemory)
{
} /* size: 0 */

// <007ABA66> ../public/tier0/platform.h:1512
inline CRefCounted<CRefCountServiceBase<true, CRefMT> >** Construct<CRefCounted<CRefCountServiceBase<true, CRefMT> >*, CRefCounted<CRefCountServiceBase<true, CRefMT> >*>(CRefCounted<CRefCountServiceBase<true, CRefMT> >** pMemory)
{
} /* size: 0 */

// <00706EF5> ../public/tier0/platform.h:1512
inline VkDynamicState* Construct<VkDynamicState, VkDynamicState>(VkDynamicState* pMemory)
{
} /* size: 0 */

// <00703BB9> ../public/tier0/platform.h:1512
inline CUtlKeyValuePair<PipelineCreateInfo_t, PipelineObjectVulkan_t*>* Construct<CUtlKeyValuePair<PipelineCreateInfo_t, PipelineObjectVulkan_t*>, const PipelineCreateInfo_t&, PipelineObjectVulkan_t*&>(CUtlKeyValuePair<PipelineCreateInfo_t, PipelineObjectVulkan_t*>* pMemory)
{
} /* size: 0 */

// <007018B1> ../public/tier0/platform.h:1512
inline CUtlKeyValuePair<VkRenderPass_T*, empty_t>* Construct<CUtlKeyValuePair<VkRenderPass_T*, empty_t>, VkRenderPass_T*&>(CUtlKeyValuePair<VkRenderPass_T*, empty_t>* pMemory)
{
} /* size: 0 */

// <006FF6AB> ../public/tier0/platform.h:1512
inline CUtlKeyValuePair<PipelineLayoutCreateInfo_t, PipelineLayoutVulkan_t>* Construct<CUtlKeyValuePair<PipelineLayoutCreateInfo_t, PipelineLayoutVulkan_t>, const PipelineLayoutCreateInfo_t&, const PipelineLayoutVulkan_t&>(CUtlKeyValuePair<PipelineLayoutCreateInfo_t, PipelineLayoutVulkan_t>* pMemory)
{
} /* size: 0 */

// <00656E36> ../public/tier0/platform.h:1512
inline CUtlKeyValuePair<long unsigned int, const CShaderVulkanBase*>* Construct<CUtlKeyValuePair<long unsigned int, const CShaderVulkanBase*>, long unsigned int&, const CShaderVulkanBase*&>(CUtlKeyValuePair<long unsigned int, const CShaderVulkanBase*>* pMemory)
{
} /* size: 0 */

// <0058C80C> ../public/tier0/platform.h:1512
inline VmaQueuedResourceMove_t* Construct<CMemoryManagerVulkan::VmaQueuedResourceMove_t, CMemoryManagerVulkan::VmaQueuedResourceMove_t>(VmaQueuedResourceMove_t* pMemory)
{
} /* size: 0 */

// <004FE89A> ../public/tier0/platform.h:1512
inline CUtlKeyValuePair<CVulkanImage*, CImageLayoutTracker::ImageTransition_t>* Construct<CUtlKeyValuePair<CVulkanImage*, CImageLayoutTracker::ImageTransition_t>, CVulkanImage*&>(CUtlKeyValuePair<CVulkanImage*, CImageLayoutTracker::ImageTransition_t>* pMemory)
{
} /* size: 0 */

// <004FE7B6> ../public/tier0/platform.h:1512
inline CUtlKeyValuePair<CVulkanImage*, CImageLayoutTracker::ImageTransition_t>* Construct<CUtlKeyValuePair<CVulkanImage*, CImageLayoutTracker::ImageTransition_t>, CVulkanImage*&, const CImageLayoutTracker::ImageTransition_t&>(CUtlKeyValuePair<CVulkanImage*, CImageLayoutTracker::ImageTransition_t>* pMemory)
{
} /* size: 0 */

// <004D68FE> ../public/tier0/platform.h:1512
inline CUtlKeyValuePair<VulkanFramebufferState_t, VkFramebuffer_T*>* Construct<CUtlKeyValuePair<VulkanFramebufferState_t, VkFramebuffer_T*>, const VulkanFramebufferState_t&, VkFramebuffer_T*&>(CUtlKeyValuePair<VulkanFramebufferState_t, VkFramebuffer_T*>* pMemory)
{
} /* size: 0 */

// <004D6637> ../public/tier0/platform.h:1512
inline CUtlKeyValuePair<VulkanFramebufferState_t, VkRenderPass_T*>* Construct<CUtlKeyValuePair<VulkanFramebufferState_t, VkRenderPass_T*>, const VulkanFramebufferState_t&, VkRenderPass_T*&>(CUtlKeyValuePair<VulkanFramebufferState_t, VkRenderPass_T*>* pMemory)
{
} /* size: 0 */

// <00447FE2> ../public/tier0/platform.h:1512
inline CUtlKeyValuePair<RenderResourceHandle_t__*, RenderDescriptorBinding_t>* Construct<CUtlKeyValuePair<RenderResourceHandle_t__*, RenderDescriptorBinding_t>, RenderResourceHandle_t__*&, const RenderDescriptorBinding_t&>(CUtlKeyValuePair<RenderResourceHandle_t__*, RenderDescriptorBinding_t>* pMemory)
{
} /* size: 0 */

// <00426C02> ../public/tier0/platform.h:1512
inline BufferState_t* Construct<CBarrierHelperVulkan::BufferState_t, CBarrierHelperVulkan::BufferState_t>(BufferState_t* pMemory)
{
} /* size: 0 */

// <00426B15> ../public/tier0/platform.h:1512
inline UAVState_t* Construct<CBarrierHelperVulkan::UAVState_t, CBarrierHelperVulkan::UAVState_t>(UAVState_t* pMemory)
{
} /* size: 0 */

// <00409824> ../public/tier0/platform.h:1512
inline ShaderWaitEntry_t* Construct<CAsyncCompileHelperVulkan::ShaderWaitEntry_t, CAsyncCompileHelperVulkan::ShaderWaitEntry_t>(ShaderWaitEntry_t* pMemory)
{
} /* size: 0 */

// <00303F05> ../public/tier0/platform.h:1512
inline pair<ResourceId_t, long unsigned int>* Construct<std::pair<ResourceId_t, long unsigned int>, std::pair<ResourceId_t, long unsigned int> >(pair<ResourceId_t, long unsigned int>* pMemory)
{
} /* size: 0 */

// <00301DA4> ../public/tier0/platform.h:1512
inline CTextureInfoId* Construct<CTextureInfoId, CTextureInfoId>(CTextureInfoId* pMemory)
{
} /* size: 0 */

// <0012EBD2> ../../public/tier0/platform.h:1512
inline BindingNumberChange_t* Construct<CVfxSpirVReflect::BindingNumberChange_t, CVfxSpirVReflect::BindingNumberChange_t>(BindingNumberChange_t* pMemory)
{
} /* size: 0 */

// <000BDF7C> ../../public/tier0/platform.h:1512
inline CVfxParsedShaderParam** Construct<CVfxParsedShaderParam*, CVfxParsedShaderParam*>(CVfxParsedShaderParam** pMemory)
{
} /* size: 0 */

// <00053030> ../../public/tier0/platform.h:1512
inline VfxCompileTarget_t* Construct<VfxCompileTarget_t, VfxCompileTarget_t>(VfxCompileTarget_t* pMemory)
{
} /* size: 0 */

// <005E8028> ../public/tier0/platform.h:1512
inline wchar_t** Construct<wchar_t*, wchar_t*>(wchar_t** pMemory)
{
} /* size: 0 */

// <005A5841> ../public/tier0/platform.h:1512
inline CTokenStringAndSource* Construct<CUtlStringTokenSystem::CTokenStringAndSource, char const*&, int&>(CTokenStringAndSource* pMemory)
{
} /* size: 0 */

// <00572E57> ../public/tier0/platform.h:1512
inline CUtlKeyValuePair<char const*, int>* Construct<CUtlKeyValuePair<char const*, int>, char const*&, int&>(CUtlKeyValuePair<char const*, int>* pMemory)
{
} /* size: 0 */

// <004CD6CC> ../public/tier0/platform.h:1512
inline CScopeCreatedOrDestroyedHandler* Construct<CThreadLocalScope::CScopeCreatedOrDestroyedHandler, void (&)(CThreadLocalScope*, bool)>(CScopeCreatedOrDestroyedHandler* pMemory)
{
} /* size: 0 */

// <0025BDFE> ../public/tier0/platform.h:1512
inline CUtlKeyValuePair<CKeyValuesSystem::SharedStringData_t*, CInterlockedIntT<int, 4> >* Construct<CUtlKeyValuePair<CKeyValuesSystem::SharedStringData_t*, CInterlockedIntT<int> >, CKeyValuesSystem::SharedStringData_t*&, const CInterlockedIntT<int, 4>&>(CUtlKeyValuePair<CKeyValuesSystem::SharedStringData_t*, CInterlockedIntT<int, 4> >* pMemory)
{
} /* size: 0 */

// <0025BA95> ../public/tier0/platform.h:1512
inline CUtlKeyValuePair<unsigned int, CKeyValuesSystem::SharedStringData_t*>* Construct<CUtlKeyValuePair<unsigned int, CKeyValuesSystem::SharedStringData_t*>, unsigned int&, CKeyValuesSystem::SharedStringData_t*&>(CUtlKeyValuePair<unsigned int, CKeyValuesSystem::SharedStringData_t*>* pMemory)
{
} /* size: 0 */

// <0000D712> ../public/tier0/platform.h:1512
inline COrderedInitShutdownRefWrapper<OrderedInit_Platform>* Construct<COrderedInitShutdownRefWrapper<OrderedInit_Platform>, COrderedConstructor_DependencyManagement<void>*&>(COrderedInitShutdownRefWrapper<OrderedInit_Platform>* pMemory)
{
} /* size: 0 */

// <00162466> ../public/tier0/platform.h:1512
inline CUtlKeyValuePair<long long unsigned int, char const*>* Construct<CUtlKeyValuePair<long long unsigned int, char const*>, long long unsigned int&, char const*&>(CUtlKeyValuePair<long long unsigned int, char const*>* pMemory)
{
} /* size: 0 */

// <00161E2B> ../public/tier0/platform.h:1512
inline CUtlKeyValuePair<unsigned int, const CResourceDiskStruct*>* Construct<CUtlKeyValuePair<unsigned int, const CResourceDiskStruct*>, unsigned int&, const CResourceDiskStruct*&>(CUtlKeyValuePair<unsigned int, const CResourceDiskStruct*>* pMemory)
{
} /* size: 0 */

// <00161DD4> ../public/tier0/platform.h:1512
inline CUtlKeyValuePair<unsigned int, const CResourceDiskEnum*>* Construct<CUtlKeyValuePair<unsigned int, const CResourceDiskEnum*>, unsigned int&, const CResourceDiskEnum*&>(CUtlKeyValuePair<unsigned int, const CResourceDiskEnum*>* pMemory)
{
} /* size: 0 */

// <00161975> ../public/tier0/platform.h:1512
inline CUtlKeyValuePair<const CResourceDiskStructField*, empty_t>* Construct<CUtlKeyValuePair<const CResourceDiskStructField*, empty_t>, const CResourceDiskStructField*&>(CUtlKeyValuePair<const CResourceDiskStructField*, empty_t>* pMemory)
{
} /* size: 0 */

// <0016150C> ../public/tier0/platform.h:1512
inline CUtlKeyValuePair<const CResourceDiskStructField*, const KV3ConvertSpecialFieldBehavior_t*>* Construct<CUtlKeyValuePair<const CResourceDiskStructField*, const KV3ConvertSpecialFieldBehavior_t*>, const CResourceDiskStructField*&, const KV3ConvertSpecialFieldBehavior_t*&>(CUtlKeyValuePair<const CResourceDiskStructField*, const KV3ConvertSpecialFieldBehavior_t*>* pMemory)
{
} /* size: 0 */

// <0034FB80> ../public/tier0/platform.h:1512
inline const CBoneConstraintBase ** Construct<const CBoneConstraintBase*, const CBoneConstraintBase*>(const CBoneConstraintBase ** pMemory)
{
} /* size: 0 */

// <0034C383> ../public/tier0/platform.h:1512
inline CUtlKeyValuePair<ResourceId_t, int>* Construct<CUtlKeyValuePair<ResourceId_t, int>, const ResourceId_t&, int&>(CUtlKeyValuePair<ResourceId_t, int>* pMemory)
{
} /* size: 0 */

// <0034A626> ../public/tier0/platform.h:1512
inline CUtlKeyValuePair<int, float>* Construct<CUtlKeyValuePair<int, float>, int&, float&>(CUtlKeyValuePair<int, float>* pMemory)
{
} /* size: 0 */

// <0016A656> ../public/tier0/platform.h:1512
inline CStrongHandleCopyable<InfoForResourceTypeCModel>* Construct<CStrongHandleCopyable<InfoForResourceTypeCModel>, CStrongHandleCopyable<InfoForResourceTypeCModel> >(CStrongHandleCopyable<InfoForResourceTypeCModel>* pMemory)
{
} /* size: 0 */

// <0016A527> ../public/tier0/platform.h:1512
inline CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>* Construct<CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>, CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph> >(CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>* pMemory)
{
} /* size: 0 */

// <00439E20> ../public/tier0/platform.h:1512
inline IQueuedRenderable** Construct<IQueuedRenderable*, IQueuedRenderable*>(IQueuedRenderable** pMemory)
{
} /* size: 0 */

// <00267DBC> ../public/tier0/platform.h:1512
inline RenderDescriptorBinding_t* Construct<RenderDescriptorBinding_t, RenderDescriptorBinding_t>(RenderDescriptorBinding_t* pMemory)
{
} /* size: 0 */

// <00267CE2> ../public/tier0/platform.h:1512
inline texture_use_info_t* Construct<texture_use_info_t, texture_use_info_t>(texture_use_info_t* pMemory)
{
} /* size: 0 */

// <001604C4> ../public/tier0/platform.h:1512
inline TextureAttributeValue_t* Construct<IMaterial2::TextureAttributeValue_t, IMaterial2::TextureAttributeValue_t>(TextureAttributeValue_t* pMemory)
{
} /* size: 0 */

// <00153955> ../public/tier0/platform.h:1512
inline MaterialStaticComboLoadRequest_t* Construct<MaterialStaticComboLoadRequest_t, MaterialStaticComboLoadRequest_t>(MaterialStaticComboLoadRequest_t* pMemory)
{
} /* size: 0 */

// <0008E73D> ../public/tier0/platform.h:1512
inline CUtlKeyValuePair<CUtlStringToken, CUtlStringToken>* Construct<CUtlKeyValuePair<CUtlStringToken, CUtlStringToken>, const CUtlStringToken&, const CUtlStringToken&>(CUtlKeyValuePair<CUtlStringToken, CUtlStringToken>* pMemory)
{
} /* size: 0 */

// <000C6882> ../public/tier0/platform.h:1512
inline CSearchPath** Construct<CBaseFileSystem::CSearchPath*, CBaseFileSystem::CSearchPath*>(CSearchPath** pMemory)
{
} /* size: 0 */

// <000C667A> ../public/tier0/platform.h:1512
inline CFileHandleTimer** Construct<CFileHandleTimer*, CFileHandleTimer*>(CFileHandleTimer** pMemory)
{
} /* size: 0 */

// <000C6582> ../public/tier0/platform.h:1512
inline FileOpenDuplicateTime_t** Construct<FileOpenDuplicateTime_t*, FileOpenDuplicateTime_t*>(FileOpenDuplicateTime_t** pMemory)
{
} /* size: 0 */

// <06F1F302> ../../public/tier0/platform.h:1518
inline CCluster** CopyConstruct<CFeAgglomerator::CCluster*>(CCluster** pMemory, CCluster* const& src)
{
} /* size: 0 */

// <06D6B1A7> ../../public/tier0/platform.h:1518
inline audio_mix_command_t* CopyConstruct<audio_mix_command_t>(audio_mix_command_t* pMemory, const audio_mix_command_t& src)
{
} /* size: 0 */

// <06AAD9C4> ../public/tier0/platform.h:1518
inline Node_t* CopyConstruct<CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t*, int>::Node_t>(Node_t* pMemory, const Node_t& src)
{
} /* size: 0 */

// <06AAD2BD> ../public/tier0/platform.h:1518
inline Node_t* CopyConstruct<CUtlMap<CVfxHashValue, int, int>::Node_t>(Node_t* pMemory, const Node_t& src)
{
} /* size: 0 */

// <06A5E9A0> ../public/tier0/platform.h:1518
inline Constant_t* CopyConstruct<CVfxStackMachineBuilder::Constant_t>(Constant_t* pMemory, const Constant_t& src)
{
} /* size: 0 */

// <06A5C067> ../public/tier0/platform.h:1518
inline Node_t* CopyConstruct<CUtlMap<CUtlString, bool>::Node_t>(Node_t* pMemory, const Node_t& src)
{
} /* size: 0 */

// <069E3CA7> ../public/tier0/platform.h:1518
inline Node_t* CopyConstruct<CUtlMap<long long unsigned int, bool, unsigned int>::Node_t>(Node_t* pMemory, const Node_t& src)
{
} /* size: 0 */

// <069E3603> ../public/tier0/platform.h:1518
inline Node_t* CopyConstruct<CUtlMap<unsigned int, int, int>::Node_t>(Node_t* pMemory, const Node_t& src)
{
} /* size: 0 */

// <068F0A2C> ../public/tier0/platform.h:1518
inline CVfxShaderAttribute* CopyConstruct<CVfxShaderAttribute>(CVfxShaderAttribute* pMemory, const CVfxShaderAttribute& src)
{
} /* size: 0 */

// <068F00E0> ../public/tier0/platform.h:1518
inline ConstantBufferBindInfo_t* CopyConstruct<ConstantBufferBindInfo_t>(ConstantBufferBindInfo_t* pMemory, const ConstantBufferBindInfo_t& src)
{
} /* size: 0 */

// <068EFE1F> ../public/tier0/platform.h:1518
inline RsRasterizerStateHandle_t__** CopyConstruct<RsRasterizerStateHandle_t__*>(RsRasterizerStateHandle_t__** pMemory, RsRasterizerStateHandle_t__* const& src)
{
} /* size: 0 */

// <068EFB5E> ../public/tier0/platform.h:1518
inline RsDepthStencilStateHandle_t__** CopyConstruct<RsDepthStencilStateHandle_t__*>(RsDepthStencilStateHandle_t__** pMemory, RsDepthStencilStateHandle_t__* const& src)
{
} /* size: 0 */

// <068EF89D> ../public/tier0/platform.h:1518
inline RsBlendStateHandle_t__** CopyConstruct<RsBlendStateHandle_t__*>(RsBlendStateHandle_t__** pMemory, RsBlendStateHandle_t__* const& src)
{
} /* size: 0 */

// <068EEFF0> ../public/tier0/platform.h:1518
inline RenderShaderHandle_t__** CopyConstruct<RenderShaderHandle_t__*>(RenderShaderHandle_t__** pMemory, RenderShaderHandle_t__* const& src)
{
} /* size: 0 */

// <068EE71F> ../public/tier0/platform.h:1518
inline CVfxVariableDescription* CopyConstruct<CVfxVariableDescription>(CVfxVariableDescription* pMemory, const CVfxVariableDescription& src)
{
} /* size: 0 */

// <068EE65F> ../public/tier0/platform.h:1518
inline CVfxTextureChannelProcessor* CopyConstruct<CVfxTextureChannelProcessor>(CVfxTextureChannelProcessor* pMemory, const CVfxTextureChannelProcessor& src)
{
} /* size: 0 */

// <068EE53D> ../public/tier0/platform.h:1518
inline ConstantBufferDescription_t* CopyConstruct<ConstantBufferDescription_t>(ConstantBufferDescription_t* pMemory, const ConstantBufferDescription_t& src)
{
} /* size: 0 */

// <068EE3DC> ../public/tier0/platform.h:1518
inline CUtlVector<VsInputSignatureElement_t, CUtlMemory<VsInputSignatureElement_t, int> >* CopyConstruct<CUtlVector<VsInputSignatureElement_t> >(CUtlVector<VsInputSignatureElement_t, CUtlMemory<VsInputSignatureElement_t, int> >* pMemory, const CUtlVector<VsInputSignatureElement_t, CUtlMemory<VsInputSignatureElement_t, int> >& src)
{
} /* size: 0 */

// <068EB8DE> ../public/tier0/platform.h:1518
inline Node_t* CopyConstruct<CUtlMap<unsigned int, CVfxStaticComboData::ComputeVariablesUsedInStaticCombo(const CVfxProgramData*)::BindInfo_t, int>::Node_t>(Node_t* pMemory, const Node_t& src)
{
} /* size: 0 */

// <068E7D20> ../public/tier0/platform.h:1518
inline Node_t* CopyConstruct<CUtlMap<unsigned int, unsigned int, int>::Node_t>(Node_t* pMemory, const Node_t& src)
{
} /* size: 0 */

// <0685C201> ../public/tier0/platform.h:1518
inline Buffer_t** CopyConstruct<CThreadedLogger::Buffer_t*>(Buffer_t** pMemory, Buffer_t* const& src)
{
} /* size: 0 */

// <0683247A> ../public/tier0/platform.h:1518
inline char* CopyConstruct<char>(char* pMemory, const char& src)
{
} /* size: 0 */

// <06802ADD> ../public/tier0/platform.h:1518
inline char** CopyConstruct<char*>(char** pMemory, char* const& src)
{
} /* size: 0 */

// <0657C183> ../public/tier0/platform.h:1518
inline PhysicsDebugVertex_t* CopyConstruct<PhysicsDebugVertex_t>(PhysicsDebugVertex_t* pMemory, const PhysicsDebugVertex_t& src)
{
} /* size: 0 */

// <064C8599> ../public/tier0/platform.h:1518
inline SphereAndAttr_t* CopyConstruct<CPhysBodyDesc::SphereAndAttr_t>(SphereAndAttr_t* pMemory, const SphereAndAttr_t& src)
{
} /* size: 0 */

// <064C84FD> ../public/tier0/platform.h:1518
inline CapsuleAndAttr_t* CopyConstruct<CPhysBodyDesc::CapsuleAndAttr_t>(CapsuleAndAttr_t* pMemory, const CapsuleAndAttr_t& src)
{
} /* size: 0 */

// <064C8461> ../public/tier0/platform.h:1518
inline HullAndAttr_t* CopyConstruct<CPhysBodyDesc::HullAndAttr_t>(HullAndAttr_t* pMemory, const HullAndAttr_t& src)
{
} /* size: 0 */

// <064C83C5> ../public/tier0/platform.h:1518
inline MeshAndAttr_t* CopyConstruct<CPhysBodyDesc::MeshAndAttr_t>(MeshAndAttr_t* pMemory, const MeshAndAttr_t& src)
{
} /* size: 0 */

// <064520F4> ../public/tier0/platform.h:1518
inline RnHull_t** CopyConstruct<RnHull_t*>(RnHull_t** pMemory, RnHull_t* const& src)
{
} /* size: 0 */

// <06312504> ../public/tier0/platform.h:1518
inline RayTracingResult_t* CopyConstruct<RayTracingResult_t>(RayTracingResult_t* pMemory, const RayTracingResult_t& src)
{
} /* size: 0 */

// <06310CBE> ../public/tier0/platform.h:1518
inline RayTracingEnvironment** CopyConstruct<RayTracingEnvironment*>(RayTracingEnvironment** pMemory, RayTracingEnvironment* const& src)
{
} /* size: 0 */

// <06310B22> ../public/tier0/platform.h:1518
inline InstancedRayTracingEnvironmentReference_t** CopyConstruct<InstancedRayTracingEnvironmentReference_t*>(InstancedRayTracingEnvironmentReference_t** pMemory, InstancedRayTracingEnvironmentReference_t* const& src)
{
} /* size: 0 */

// <06310A16> ../public/tier0/platform.h:1518
inline TraceVertex_t** CopyConstruct<TraceVertex_t*>(TraceVertex_t** pMemory, TraceVertex_t* const& src)
{
} /* size: 0 */

// <0631097A> ../public/tier0/platform.h:1518
inline CacheOptimizedTriangle_t* CopyConstruct<CacheOptimizedTriangle_t>(CacheOptimizedTriangle_t* pMemory, const CacheOptimizedTriangle_t& src)
{
} /* size: 0 */

// <063107B1> ../public/tier0/platform.h:1518
inline CacheOptimizedKDNode_t* CopyConstruct<CacheOptimizedKDNode_t>(CacheOptimizedKDNode_t* pMemory, const CacheOptimizedKDNode_t& src)
{
} /* size: 0 */

// <0630F36F> ../public/tier0/platform.h:1518
inline LightDesc_t* CopyConstruct<LightDesc_t>(LightDesc_t* pMemory, const LightDesc_t& src)
{
} /* size: 0 */

// <0614D119> ../public/tier0/platform.h:1518
inline vertex_triangle_t* CopyConstruct<vertex_triangle_t>(vertex_triangle_t* pMemory, const vertex_triangle_t& src)
{
} /* size: 0 */

// <06069F2C> ../public/tier0/platform.h:1518
inline CModelMeshDelta<CModelMesh::Vertex_t>** CopyConstruct<CModelMeshDelta<CModelMesh::Vertex_t>*>(CModelMeshDelta<CModelMesh::Vertex_t>** pMemory, CModelMeshDelta<CModelMesh::Vertex_t>* const& src)
{
} /* size: 0 */

// <06069C69> ../public/tier0/platform.h:1518
inline CModelMeshDelta<CModelMesh::FaceVertex_t>** CopyConstruct<CModelMeshDelta<CModelMesh::FaceVertex_t>*>(CModelMeshDelta<CModelMesh::FaceVertex_t>** pMemory, CModelMeshDelta<CModelMesh::FaceVertex_t>* const& src)
{
} /* size: 0 */

// <06069AB7> ../public/tier0/platform.h:1518
inline CModelMeshDelta<CModelMesh::Edge_t>** CopyConstruct<CModelMeshDelta<CModelMesh::Edge_t>*>(CModelMeshDelta<CModelMesh::Edge_t>** pMemory, CModelMeshDelta<CModelMesh::Edge_t>* const& src)
{
} /* size: 0 */

// <06069905> ../public/tier0/platform.h:1518
inline CModelMeshDelta<CModelMesh::Face_t>** CopyConstruct<CModelMeshDelta<CModelMesh::Face_t>*>(CModelMeshDelta<CModelMesh::Face_t>** pMemory, CModelMeshDelta<CModelMesh::Face_t>* const& src)
{
} /* size: 0 */

// <05FD2B36> ../public/tier0/platform.h:1518
inline CModelStream** CopyConstruct<CModelStream*>(CModelStream** pMemory, CModelStream* const& src)
{
} /* size: 0 */

// <05F69C21> ../public/tier0/platform.h:1518
inline ComponentHandleWithListPointer_t* CopyConstruct<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t>(ComponentHandleWithListPointer_t* pMemory, const ComponentHandleWithListPointer_t& src)
{
} /* size: 0 */

// <05F6986B> ../public/tier0/platform.h:1518
inline ComponentHandleWithListPointer_t* CopyConstruct<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t>(ComponentHandleWithListPointer_t* pMemory, const ComponentHandleWithListPointer_t& src)
{
} /* size: 0 */

// <05F696E3> ../public/tier0/platform.h:1518
inline ComponentHandleWithListPointer_t* CopyConstruct<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t>(ComponentHandleWithListPointer_t* pMemory, const ComponentHandleWithListPointer_t& src)
{
} /* size: 0 */

// <05F67B58> ../public/tier0/platform.h:1518
inline ComponentHandleWithListPointer_t* CopyConstruct<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t>(ComponentHandleWithListPointer_t* pMemory, const ComponentHandleWithListPointer_t& src)
{
} /* size: 0 */

// <05E5DDF6> ../public/tier0/platform.h:1518
inline Tri_t** CopyConstruct<HullIVRHole_t::Tri_t*>(Tri_t** pMemory, Tri_t* const& src)
{
} /* size: 0 */

// <05E5D785> ../public/tier0/platform.h:1518
inline Face_t* CopyConstruct<CHullIVR::StraightenAllFaces()::Face_t>(Face_t* pMemory, const Face_t& src)
{
} /* size: 0 */

// <05E5D3F2> ../public/tier0/platform.h:1518
inline ComponentHandleWithListPointer_t* CopyConstruct<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::ComponentHandleWithListPointer_t>(ComponentHandleWithListPointer_t* pMemory, const ComponentHandleWithListPointer_t& src)
{
} /* size: 0 */

// <05E5C168> ../public/tier0/platform.h:1518
inline ComponentHandleWithListPointer_t* CopyConstruct<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t>(ComponentHandleWithListPointer_t* pMemory, const ComponentHandleWithListPointer_t& src)
{
} /* size: 0 */

// <05DE183A> ../public/tier0/platform.h:1518
inline qhPlane* CopyConstruct<qhPlane>(qhPlane* pMemory, const qhPlane& src)
{
} /* size: 0 */

// <05DE0135> ../public/tier0/platform.h:1518
inline ComponentHandleWithListPointer_t* CopyConstruct<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPointer_t>(ComponentHandleWithListPointer_t* pMemory, const ComponentHandleWithListPointer_t& src)
{
} /* size: 0 */

// <05DDD31A> ../public/tier0/platform.h:1518
inline CUtlVectorFixedGrowable<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithLis CopyConstruct<CUtlVectorFixedGrowable<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPointer_t, 8>*>(CUtlVectorFixedGrowable<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithLis pMemory, CUtlVectorFixedGrowable<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithLis src)
{
} /* size: 0 */

// <05DB5A58> ../public/tier0/platform.h:1518
inline ComponentHandleWithListPointer_t* CopyConstruct<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>::ComponentHandleWithListPointer_t>(ComponentHandleWithListPointer_t* pMemory, const ComponentHandleWithListPointer_t& src)
{
} /* size: 0 */

// <05C97BA4> ../public/tier0/platform.h:1518
inline TriangleVertexBarycentric_t* CopyConstruct<TriangleVertexBarycentric_t>(TriangleVertexBarycentric_t* pMemory, const TriangleVertexBarycentric_t& src)
{
} /* size: 0 */

// <05C97696> ../public/tier0/platform.h:1518
inline ClippedLineSegment_t* CopyConstruct<ClippedLineSegment_t>(ClippedLineSegment_t* pMemory, const ClippedLineSegment_t& src)
{
} /* size: 0 */

// <05C96B32> ../public/tier0/platform.h:1518
inline Vector2D* CopyConstruct<Vector2D>(Vector2D* pMemory, const Vector2D& src)
{
} /* size: 0 */

// <05C77F29> ../public/tier0/platform.h:1518
inline qhConvex** CopyConstruct<qhConvex*>(qhConvex** pMemory, qhConvex* const& src)
{
} /* size: 0 */

// <05C1E702> ../public/tier0/platform.h:1518
inline Node_t* CopyConstruct<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t>(Node_t* pMemory, const Node_t& src)
{
} /* size: 0 */

// <05BB4245> ../public/tier0/platform.h:1518
inline const float ** CopyConstruct<float const*>(const float ** pMemory, const float* const& src)
{
} /* size: 0 */

// <05BB1508> ../public/tier0/platform.h:1518
inline VsInputSignatureElement_t* CopyConstruct<VsInputSignatureElement_t>(VsInputSignatureElement_t* pMemory, const VsInputSignatureElement_t& src)
{
} /* size: 0 */

// <05ADEBCC> ../public/tier0/platform.h:1518
inline RenderInputLayoutField_t* CopyConstruct<RenderInputLayoutField_t>(RenderInputLayoutField_t* pMemory, const RenderInputLayoutField_t& src)
{
} /* size: 0 */

// <0572DBDB> ../public/tier0/platform.h:1518
inline Conversion_t** CopyConstruct<CKV3FormatManager::Conversion_t*>(Conversion_t** pMemory, Conversion_t* const& src)
{
} /* size: 0 */

// <0572D8D5> ../public/tier0/platform.h:1518
inline const Conversion_t ** CopyConstruct<const CKV3FormatManager::Conversion_t*>(const Conversion_t ** pMemory, const Conversion_t* const& src)
{
} /* size: 0 */

// <05716527> ../public/tier0/platform.h:1518
inline const KeyValues3 ** CopyConstruct<const KeyValues3*>(const KeyValues3 ** pMemory, const KeyValues3* const& src)
{
} /* size: 0 */

// <0571641C> ../public/tier0/platform.h:1518
inline KeyValues3** CopyConstruct<KeyValues3*>(KeyValues3** pMemory, KeyValues3* const& src)
{
} /* size: 0 */

// <056BDACB> ../public/tier0/platform.h:1518
inline CKV3MemberName* CopyConstruct<CKV3MemberName>(CKV3MemberName* pMemory, const CKV3MemberName& src)
{
} /* size: 0 */

// <0554BB56> ../public/tier0/platform.h:1518
inline unsigned char* CopyConstruct<unsigned char>(unsigned char* pMemory, const unsigned char& src)
{
} /* size: 0 */

// <05549298> ../public/tier0/platform.h:1518
inline CKeyValues3ArrayCluster** CopyConstruct<CKeyValues3ArrayCluster*>(CKeyValues3ArrayCluster** pMemory, CKeyValues3ArrayCluster* const& src)
{
} /* size: 0 */

// <05549220> ../public/tier0/platform.h:1518
inline CKeyValues3TableCluster** CopyConstruct<CKeyValues3TableCluster*>(CKeyValues3TableCluster** pMemory, CKeyValues3TableCluster* const& src)
{
} /* size: 0 */

// <053EB2DB> ../public/tier0/platform.h:1518
inline const char ** CopyConstruct<char const*>(const char ** pMemory, const char* const& src)
{
} /* size: 0 */

// <04E81F73> ../public/tier0/platform.h:1518
inline CBufferString* CopyConstruct<CBufferString>(CBufferString* pMemory, const CBufferString& src)
{
} /* size: 0 */

// <04E807A2> ../public/tier0/platform.h:1518
inline Entry_t* CopyConstruct<CUtlHashDict<const CMorphData*, false, false>::Entry_t>(Entry_t* pMemory, const Entry_t& src)
{
} /* size: 0 */

// <04D6DF4B> ../public/tier0/platform.h:1518
inline HashValueType* CopyConstruct<CActivityToSequenceMapping::HashValueType>(HashValueType* pMemory, const HashValueType& src)
{
} /* size: 0 */

// <04D20405> ../public/tier0/platform.h:1518
inline TraceDataForDraw_t* CopyConstruct<TraceDataForDraw_t>(TraceDataForDraw_t* pMemory, const TraceDataForDraw_t& src)
{
} /* size: 0 */

// <04CBA492> ../public/tier0/platform.h:1518
inline RenderSkeletonBone_t* CopyConstruct<RenderSkeletonBone_t>(RenderSkeletonBone_t* pMemory, const RenderSkeletonBone_t& src)
{
} /* size: 0 */

// <04CB95F1> ../public/tier0/platform.h:1518
inline CMaterialDrawDescriptor* CopyConstruct<CMaterialDrawDescriptor>(CMaterialDrawDescriptor* pMemory, const CMaterialDrawDescriptor& src)
{
} /* size: 0 */

// <04CB9524> ../public/tier0/platform.h:1518
inline CDrawCullingData* CopyConstruct<CDrawCullingData>(CDrawCullingData* pMemory, const CDrawCullingData& src)
{
} /* size: 0 */

// <04CB92FA> ../public/tier0/platform.h:1518
inline CHitBox* CopyConstruct<CHitBox>(CHitBox* pMemory, const CHitBox& src)
{
} /* size: 0 */

// <04CB9196> ../public/tier0/platform.h:1518
inline CHitBoxSet* CopyConstruct<CHitBoxSet>(CHitBoxSet* pMemory, const CHitBoxSet& src)
{
} /* size: 0 */

// <04CB191F> ../public/tier0/platform.h:1518
inline Node_t* CopyConstruct<CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::Node_t>(Node_t* pMemory, const Node_t& src)
{
} /* size: 0 */

// <04CB15BC> ../public/tier0/platform.h:1518
inline Node_t* CopyConstruct<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t>(Node_t* pMemory, const Node_t& src)
{
} /* size: 0 */

// <04C39F59> ../public/tier0/platform.h:1518
inline AttachmentHandle_t* CopyConstruct<AttachmentHandle_t>(AttachmentHandle_t* pMemory, const AttachmentHandle_t& src)
{
} /* size: 0 */

// <04BAD30B> ../public/tier0/platform.h:1518
inline float* CopyConstruct<float>(float* pMemory, const float& src)
{
} /* size: 0 */

// <04BAD293> ../public/tier0/platform.h:1518
inline BoneFlags_t* CopyConstruct<CModelSkeleton::BoneFlags_t>(BoneFlags_t* pMemory, const BoneFlags_t& src)
{
} /* size: 0 */

// <04BAD21B> ../public/tier0/platform.h:1518
inline Quaternion* CopyConstruct<Quaternion>(Quaternion* pMemory, const Quaternion& src)
{
} /* size: 0 */

// <04BAD1A3> ../public/tier0/platform.h:1518
inline bool* CopyConstruct<bool>(bool* pMemory, const bool& src)
{
} /* size: 0 */

// <04BAB8BA> ../public/tier0/platform.h:1518
inline const CFlexController ** CopyConstruct<const CFlexController*>(const CFlexController ** pMemory, const CFlexController* const& src)
{
} /* size: 0 */

// <04BA6D50> ../public/tier0/platform.h:1518
inline Node_t* CopyConstruct<CUtlMap<RetargetKey_t, int>::Node_t>(Node_t* pMemory, const Node_t& src)
{
} /* size: 0 */

// <04BA5325> ../public/tier0/platform.h:1518
inline BuilderModelBoneFlexDriverControl_t* CopyConstruct<BuilderModelBoneFlexDriverControl_t>(BuilderModelBoneFlexDriverControl_t* pMemory, const BuilderModelBoneFlexDriverControl_t& src)
{
} /* size: 0 */

// <04AAE1DB> ../public/tier0/platform.h:1518
inline CSlopeTrace* CopyConstruct<CSlopeTrace>(CSlopeTrace* pMemory, const CSlopeTrace& src)
{
} /* size: 0 */

// <0496F573> ../public/tier0/platform.h:1518
inline const CSchemaClassInfo ** CopyConstruct<const CSchemaClassInfo*>(const CSchemaClassInfo ** pMemory, const CSchemaClassInfo* const& src)
{
} /* size: 0 */

// <04638A47> ../public/tier0/platform.h:1518
inline AppSystemRequest_t* CopyConstruct<CAppSystemDict::AppSystemRequest_t>(AppSystemRequest_t* pMemory, const AppSystemRequest_t& src)
{
} /* size: 0 */

// <046386BD> ../public/tier0/platform.h:1518
inline void* ()(const char *, int *)** CopyConstruct<void* (*)(char const*, int*)>(void* ()(const char *, int *)** pMemory, void* ()(const char *, int *)* const& src)
{
} /* size: 0 */

// <044C38E9> ../public/tier0/platform.h:1518
inline function<void()>** CopyConstruct<std::function<void()>*>(function<void()>** pMemory, function<void()>* const& src)
{
} /* size: 0 */

// <044BC832> ../public/tier0/platform.h:1518
inline HeightmapSampleLocation_t* CopyConstruct<HeightmapSampleLocation_t>(HeightmapSampleLocation_t* pMemory, const HeightmapSampleLocation_t& src)
{
} /* size: 0 */

// <0448F139> ../public/tier0/platform.h:1518
inline QueuedSweepNode_t* CopyConstruct<QueuedSweepNode_t>(QueuedSweepNode_t* pMemory, const QueuedSweepNode_t& src)
{
} /* size: 0 */

// <0448DDB7> ../public/tier0/platform.h:1518
inline SweepGroup_t** CopyConstruct<SweepGroup_t*>(SweepGroup_t** pMemory, SweepGroup_t* const& src)
{
} /* size: 0 */

// <044385FB> ../public/tier0/platform.h:1518
inline CallbackInfo_t* CopyConstruct<ConCommand::CallbackInfo_t>(CallbackInfo_t* pMemory, const CallbackInfo_t& src)
{
} /* size: 0 */

// <0443850E> ../public/tier0/platform.h:1518
inline void ()(IConVar *, const char *, float)** CopyConstruct<void (*)(IConVar*, char const*, float)>(void ()(IConVar *, const char *, float)** pMemory, void ()(IConVar *, const char *, float)* const& src)
{
} /* size: 0 */

// <03E81EDE> ../public/tier0/platform.h:1518
inline CachedSlotAndExtraData_t* CopyConstruct<CachedSlotAndExtraData_t>(CachedSlotAndExtraData_t* pMemory, const CachedSlotAndExtraData_t& src)
{
} /* size: 0 */

// <03D93B28> ../public/tier0/platform.h:1518
inline CAggregateSceneObject** CopyConstruct<CAggregateSceneObject*>(CAggregateSceneObject** pMemory, CAggregateSceneObject* const& src)
{
} /* size: 0 */

// <039D2795> ../public/tier0/platform.h:1518
inline FogVolume_t* CopyConstruct<CVolumetricFog::FogVolume_t>(FogVolume_t* pMemory, const FogVolume_t& src)
{
} /* size: 0 */

// <03928DDB> ../public/tier0/platform.h:1518
inline VertexUVPosColorNormalAndTangent_t* CopyConstruct<VertexUVPosColorNormalAndTangent_t>(VertexUVPosColorNormalAndTangent_t* pMemory, const VertexUVPosColorNormalAndTangent_t& src)
{
} /* size: 0 */

// <03898933> ../public/tier0/platform.h:1518
inline CViewIdInternal* CopyConstruct<CViewIdInternal>(CViewIdInternal* pMemory, const CViewIdInternal& src)
{
} /* size: 0 */

// <0387ACD5> ../public/tier0/platform.h:1518
inline SceneViewTimestampQuery_t** CopyConstruct<SceneViewTimestampQuery_t*>(SceneViewTimestampQuery_t** pMemory, SceneViewTimestampQuery_t* const& src)
{
} /* size: 0 */

// <0373946A> ../public/tier0/platform.h:1518
inline ImageFormat* CopyConstruct<ImageFormat>(ImageFormat* pMemory, const ImageFormat& src)
{
} /* size: 0 */

// <0361C296> ../public/tier0/platform.h:1518
inline Entry_t* CopyConstruct<CUtlHashDict<unsigned char, true, true>::Entry_t>(Entry_t* pMemory, const Entry_t& src)
{
} /* size: 0 */

// <03532908> ../public/tier0/platform.h:1518
inline CWeakHandle<InfoForResourceTypeIMaterial2>* CopyConstruct<CWeakHandle<InfoForResourceTypeIMaterial2> >(CWeakHandle<InfoForResourceTypeIMaterial2>* pMemory, const CWeakHandle<InfoForResourceTypeIMaterial2>& src)
{
} /* size: 0 */

// <03530F95> ../public/tier0/platform.h:1518
inline ChildSceneObjectReference_t* CopyConstruct<ChildSceneObjectReference_t>(ChildSceneObjectReference_t* pMemory, const ChildSceneObjectReference_t& src)
{
} /* size: 0 */

// <0352A4B5> ../public/tier0/platform.h:1518
inline Entry_t* CopyConstruct<CUtlHashDict<ISceneObjectDesc*>::Entry_t>(Entry_t* pMemory, const Entry_t& src)
{
} /* size: 0 */

// <03467CCE> ../public/tier0/platform.h:1518
inline ISceneLayer** CopyConstruct<ISceneLayer*>(ISceneLayer** pMemory, ISceneLayer* const& src)
{
} /* size: 0 */

// <03467817> ../public/tier0/platform.h:1518
inline ConstantBufferHandle_t__** CopyConstruct<ConstantBufferHandle_t__*>(ConstantBufferHandle_t__** pMemory, ConstantBufferHandle_t__* const& src)
{
} /* size: 0 */

// <03224455> ../public/tier0/platform.h:1518
inline CFrustum* CopyConstruct<CFrustum>(CFrustum* pMemory, const CFrustum& src)
{
} /* size: 0 */

// <0322385C> ../public/tier0/platform.h:1518
inline CPVSBits* CopyConstruct<CPVSBits>(CPVSBits* pMemory, const CPVSBits& src)
{
} /* size: 0 */

// <0322379B> ../public/tier0/platform.h:1518
inline WorldList_t* CopyConstruct<ISceneView::WorldList_t>(WorldList_t* pMemory, const WorldList_t& src)
{
} /* size: 0 */

// <03122125> ../public/tier0/platform.h:1518
inline DebugLineSegment3D_t* CopyConstruct<DebugLineSegment3D_t>(DebugLineSegment3D_t* pMemory, const DebugLineSegment3D_t& src)
{
} /* size: 0 */

// <0312200D> ../public/tier0/platform.h:1518
inline DebugTriangle3D_t* CopyConstruct<DebugTriangle3D_t>(DebugTriangle3D_t* pMemory, const DebugTriangle3D_t& src)
{
} /* size: 0 */

// <03121EF5> ../public/tier0/platform.h:1518
inline DebugLineSegment2D_t* CopyConstruct<DebugLineSegment2D_t>(DebugLineSegment2D_t* pMemory, const DebugLineSegment2D_t& src)
{
} /* size: 0 */

// <0312175A> ../public/tier0/platform.h:1518
inline const DebugSphere_t ** CopyConstruct<const DebugSphere_t*>(const DebugSphere_t ** pMemory, const DebugSphere_t* const& src)
{
} /* size: 0 */

// <03121157> ../public/tier0/platform.h:1518
inline DebugCross3D_t* CopyConstruct<DebugCross3D_t>(DebugCross3D_t* pMemory, const DebugCross3D_t& src)
{
} /* size: 0 */

// <0312103F> ../public/tier0/platform.h:1518
inline DebugCircle3D_t* CopyConstruct<DebugCircle3D_t>(DebugCircle3D_t* pMemory, const DebugCircle3D_t& src)
{
} /* size: 0 */

// <03120CF2> ../public/tier0/platform.h:1518
inline DebugTickMarkedLine3D_t* CopyConstruct<DebugTickMarkedLine3D_t>(DebugTickMarkedLine3D_t* pMemory, const DebugTickMarkedLine3D_t& src)
{
} /* size: 0 */

// <0311E82D> ../public/tier0/platform.h:1518
inline DebugTextureDisplay_t* CopyConstruct<DebugTextureDisplay_t>(DebugTextureDisplay_t* pMemory, const DebugTextureDisplay_t& src)
{
} /* size: 0 */

// <0311E79D> ../public/tier0/platform.h:1518
inline Debug3DVectorText_t* CopyConstruct<Debug3DVectorText_t>(Debug3DVectorText_t* pMemory, const Debug3DVectorText_t& src)
{
} /* size: 0 */

// <0311E70D> ../public/tier0/platform.h:1518
inline Debug2DText_t* CopyConstruct<Debug2DText_t>(Debug2DText_t* pMemory, const Debug2DText_t& src)
{
} /* size: 0 */

// <0311E67D> ../public/tier0/platform.h:1518
inline Debug3DText_t* CopyConstruct<Debug3DText_t>(Debug3DText_t* pMemory, const Debug3DText_t& src)
{
} /* size: 0 */

// <0311E478> ../public/tier0/platform.h:1518
inline DebugSphere_t* CopyConstruct<DebugSphere_t>(DebugSphere_t* pMemory, const DebugSphere_t& src)
{
} /* size: 0 */

// <0305E49E> ../public/tier0/platform.h:1518
inline ISceneLightListener** CopyConstruct<ISceneLightListener*>(ISceneLightListener** pMemory, ISceneLightListener* const& src)
{
} /* size: 0 */

// <0305E399> ../public/tier0/platform.h:1518
inline CSceneLightObjectInternal** CopyConstruct<CSceneLightObjectInternal*>(CSceneLightObjectInternal** pMemory, CSceneLightObjectInternal* const& src)
{
} /* size: 0 */

// <0305E1FC> ../public/tier0/platform.h:1518
inline ISceneEnvironmentMapListener** CopyConstruct<ISceneEnvironmentMapListener*>(ISceneEnvironmentMapListener** pMemory, ISceneEnvironmentMapListener* const& src)
{
} /* size: 0 */

// <0305E0B0> ../public/tier0/platform.h:1518
inline ISceneLightProbeVolumeListener** CopyConstruct<ISceneLightProbeVolumeListener*>(ISceneLightProbeVolumeListener** pMemory, ISceneLightProbeVolumeListener* const& src)
{
} /* size: 0 */

// <0305DF8A> ../public/tier0/platform.h:1518
inline CEnvMapSceneObject** CopyConstruct<CEnvMapSceneObject*>(CEnvMapSceneObject** pMemory, CEnvMapSceneObject* const& src)
{
} /* size: 0 */

// <0305DE27> ../public/tier0/platform.h:1518
inline CSceneLightProbeVolumeObject** CopyConstruct<CSceneLightProbeVolumeObject*>(CSceneLightProbeVolumeObject** pMemory, CSceneLightProbeVolumeObject* const& src)
{
} /* size: 0 */

// <02E9BBB2> ../public/tier0/platform.h:1518
inline ISceneView** CopyConstruct<ISceneView*>(ISceneView** pMemory, ISceneView* const& src)
{
} /* size: 0 */

// <02E98732> ../public/tier0/platform.h:1518
inline SceneObjectCullingBox_t* CopyConstruct<SceneObjectCullingBox_t>(SceneObjectCullingBox_t* pMemory, const SceneObjectCullingBox_t& src)
{
} /* size: 0 */

// <02E9864A> ../public/tier0/platform.h:1518
inline SceneVolumetricFogVolume_t* CopyConstruct<SceneVolumetricFogVolume_t>(SceneVolumetricFogVolume_t* pMemory, const SceneVolumetricFogVolume_t& src)
{
} /* size: 0 */

// <02E9850C> ../public/tier0/platform.h:1518
inline CSceneWorldObjectListChunk** CopyConstruct<CSceneWorldObjectListChunk*>(CSceneWorldObjectListChunk** pMemory, CSceneWorldObjectListChunk* const& src)
{
} /* size: 0 */

// <02E974AE> ../public/tier0/platform.h:1518
inline ISceneSystemListener** CopyConstruct<ISceneSystemListener*>(ISceneSystemListener** pMemory, ISceneSystemListener* const& src)
{
} /* size: 0 */

// <02E96730> ../public/tier0/platform.h:1518
inline CSceneDrawList** CopyConstruct<CSceneDrawList*>(CSceneDrawList** pMemory, CSceneDrawList* const& src)
{
} /* size: 0 */

// <02E9657A> ../public/tier0/platform.h:1518
inline CRenderBatchList** CopyConstruct<CRenderBatchList*>(CRenderBatchList** pMemory, CRenderBatchList* const& src)
{
} /* size: 0 */

// <02E95FDD> ../public/tier0/platform.h:1518
inline RenderAttributesSetup_t* CopyConstruct<CSceneSystem::RenderAttributesSetup_t>(RenderAttributesSetup_t* pMemory, const RenderAttributesSetup_t& src)
{
} /* size: 0 */

// <02E95DFF> ../public/tier0/platform.h:1518
inline CSceneLayer** CopyConstruct<CSceneLayer*>(CSceneLayer** pMemory, CSceneLayer* const& src)
{
} /* size: 0 */

// <02E24898> ../public/tier0/platform.h:1518
inline SkippedLayerInRenderPass_t* CopyConstruct<SkippedLayerInRenderPass_t>(SkippedLayerInRenderPass_t* pMemory, const SkippedLayerInRenderPass_t& src)
{
} /* size: 0 */

// <02E1CC7F> ../public/tier0/platform.h:1518
inline Node_t* CopyConstruct<CUtlMap<char const*, int, int, bool (*)(char const* const&, char const* const&)>::Node_t>(Node_t* pMemory, const Node_t& src)
{
} /* size: 0 */

// <02C2CF65> ../public/tier0/platform.h:1518
inline const CDecalSceneObject ** CopyConstruct<const CDecalSceneObject*>(const CDecalSceneObject ** pMemory, const CDecalSceneObject* const& src)
{
} /* size: 0 */

// <02C2CE96> ../public/tier0/platform.h:1518
inline const CSceneLightObjectInternal ** CopyConstruct<const CSceneLightObjectInternal*>(const CSceneLightObjectInternal ** pMemory, const CSceneLightObjectInternal* const& src)
{
} /* size: 0 */

// <02C2A7C6> ../public/tier0/platform.h:1518
inline GPULight* CopyConstruct<GPULight>(GPULight* pMemory, const GPULight& src)
{
} /* size: 0 */

// <02C2A6AA> ../public/tier0/platform.h:1518
inline CLightBinnerStandard** CopyConstruct<CLightBinnerStandard*>(CLightBinnerStandard** pMemory, CLightBinnerStandard* const& src)
{
} /* size: 0 */

// <02C2A561> ../public/tier0/platform.h:1518
inline EnvironmentMapConstants* CopyConstruct<EnvironmentMapConstants>(EnvironmentMapConstants* pMemory, const EnvironmentMapConstants& src)
{
} /* size: 0 */

// <02C28D42> ../public/tier0/platform.h:1518
inline GPUDecalExtraData* CopyConstruct<GPUDecalExtraData>(GPUDecalExtraData* pMemory, const GPUDecalExtraData& src)
{
} /* size: 0 */

// <02B7A23A> ../public/tier0/platform.h:1518
inline LightProbeVolumeData_t* CopyConstruct<CLightBinner2::LightProbeVolumeData_t>(LightProbeVolumeData_t* pMemory, const LightProbeVolumeData_t& src)
{
} /* size: 0 */

// <0287683F> ../public/tier0/platform.h:1518
inline IRenderingPipeline** CopyConstruct<IRenderingPipeline*>(IRenderingPipeline** pMemory, IRenderingPipeline* const& src)
{
} /* size: 0 */

// <02667FC7> ../public/tier0/platform.h:1518
inline CSfxTable** CopyConstruct<CSfxTable*>(CSfxTable** pMemory, CSfxTable* const& src)
{
} /* size: 0 */

// <02667E39> ../public/tier0/platform.h:1518
inline CVSndAsyncLoadRequest** CopyConstruct<CVSndAsyncLoadRequest*>(CVSndAsyncLoadRequest** pMemory, CVSndAsyncLoadRequest* const& src)
{
} /* size: 0 */

// <026120A8> ../public/tier0/platform.h:1518
inline audio_device_description_t* CopyConstruct<audio_device_description_t>(audio_device_description_t* pMemory, const audio_device_description_t& src)
{
} /* size: 0 */

// <024DC1F8> ../public/tier0/platform.h:1518
inline memhandle_t__** CopyConstruct<memhandle_t__*>(memhandle_t__** pMemory, memhandle_t__* const& src)
{
} /* size: 0 */

// <024DC0D3> ../public/tier0/platform.h:1518
inline CAsyncWaveData** CopyConstruct<CAsyncWaveData*>(CAsyncWaveData** pMemory, CAsyncWaveData* const& src)
{
} /* size: 0 */

// <0240A93A> ../public/tier0/platform.h:1518
inline CAudioOutputStream** CopyConstruct<CAudioOutputStream*>(CAudioOutputStream** pMemory, CAudioOutputStream* const& src)
{
} /* size: 0 */

// <023E987A> ../public/tier0/platform.h:1518
inline CResourceManifestFromDiskInternal** CopyConstruct<CResourceManifestFromDiskInternal*>(CResourceManifestFromDiskInternal** pMemory, CResourceManifestFromDiskInternal* const& src)
{
} /* size: 0 */

// <023E6BF8> ../public/tier0/platform.h:1518
inline LoadingResourceReference_t* CopyConstruct<CResourceManifest::LoadingResourceReference_t>(LoadingResourceReference_t* pMemory, const LoadingResourceReference_t& src)
{
} /* size: 0 */

// <023A7125> ../public/tier0/platform.h:1518
inline CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResour CopyConstruct<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData::CResourceReferenceTracking_Options, true> >(CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResour pMemory, const CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long long unsigned int, 0, C src)
{
} /* size: 0 */

// <023534C0> ../public/tier0/platform.h:1518
inline const ResourceBindingBase_t ** CopyConstruct<const ResourceBindingBase_t*>(const ResourceBindingBase_t ** pMemory, const ResourceBindingBase_t* const& src)
{
} /* size: 0 */

// <02352E84> ../public/tier0/platform.h:1518
inline QueuedReloadDeallocate_t* CopyConstruct<CResourceSystem::FinalizeOrAdvanceLoadingManifests(int, CResourceManifest**)::QueuedReloadDeallocate_t>(QueuedReloadDeallocate_t* pMemory, const QueuedReloadDeallocate_t& src)
{
} /* size: 0 */

// <0235261E> ../public/tier0/platform.h:1518
inline CResourceManifest** CopyConstruct<CResourceManifest*>(CResourceManifest** pMemory, CResourceManifest* const& src)
{
} /* size: 0 */

// <02351A4B> ../public/tier0/platform.h:1518
inline unsigned int** CopyConstruct<unsigned int*>(unsigned int** pMemory, unsigned int* const& src)
{
} /* size: 0 */

// <0235190E> ../public/tier0/platform.h:1518
inline IToolsResourceListener** CopyConstruct<IToolsResourceListener*>(IToolsResourceListener** pMemory, IToolsResourceListener* const& src)
{
} /* size: 0 */

// <0234F0C1> ../public/tier0/platform.h:1518
inline ExtRefList_t** CopyConstruct<ExtRefList_t*>(ExtRefList_t** pMemory, ExtRefList_t* const& src)
{
} /* size: 0 */

// <022DA54D> ../public/tier0/platform.h:1518
inline CStreamingResourceData** CopyConstruct<CStreamingResourceData*>(CStreamingResourceData** pMemory, CStreamingResourceData* const& src)
{
} /* size: 0 */

// <022A0ABA> ../public/tier0/platform.h:1518
inline CLoadingResource** CopyConstruct<CLoadingResource*>(CLoadingResource** pMemory, CLoadingResource* const& src)
{
} /* size: 0 */

// <021CD87B> ../public/tier0/platform.h:1518
inline IGenericDataResourceListener** CopyConstruct<IGenericDataResourceListener*>(IGenericDataResourceListener** pMemory, IGenericDataResourceListener* const& src)
{
} /* size: 0 */

// <0218D88E> ../public/tier0/platform.h:1518
inline CodeResourceManifest_t** CopyConstruct<CodeResourceManifest_t*>(CodeResourceManifest_t** pMemory, CodeResourceManifest_t* const& src)
{
} /* size: 0 */

// <0215D29D> ../public/tier0/platform.h:1518
inline CAsyncResourceDataRequest** CopyConstruct<CAsyncResourceDataRequest*>(CAsyncResourceDataRequest** pMemory, CAsyncResourceDataRequest* const& src)
{
} /* size: 0 */

// <01FD37A1> ../public/tier0/platform.h:1518
inline VideoFrameData** CopyConstruct<CVideoRecorder::VideoFrameData*>(VideoFrameData** pMemory, VideoFrameData* const& src)
{
} /* size: 0 */

// <01FD354B> ../public/tier0/platform.h:1518
inline AudioSampleData** CopyConstruct<CVideoRecorder::AudioSampleData*>(AudioSampleData** pMemory, AudioSampleData* const& src)
{
} /* size: 0 */

// <01FA8D2D> ../public/tier0/platform.h:1518
inline PacketEntry* CopyConstruct<PacketEntry>(PacketEntry* pMemory, const PacketEntry& src)
{
} /* size: 0 */

// <01D975FE> ../public/tier0/platform.h:1518
inline ViewHistory* CopyConstruct<ViewHistory>(ViewHistory* pMemory, const ViewHistory& src)
{
} /* size: 0 */

// <01B57BD4> ../public/tier0/platform.h:1518
inline SboxVertex_t* CopyConstruct<SboxVertex_t>(SboxVertex_t* pMemory, const SboxVertex_t& src)
{
} /* size: 0 */

// <0193252C> ../public/tier0/platform.h:1518
inline RayTraceGeneralShader_t* CopyConstruct<RayTraceGeneralShader_t>(RayTraceGeneralShader_t* pMemory, const RayTraceGeneralShader_t& src)
{
} /* size: 0 */

// <019323A2> ../public/tier0/platform.h:1518
inline RayTraceHitShaderGroup_t* CopyConstruct<RayTraceHitShaderGroup_t>(RayTraceHitShaderGroup_t* pMemory, const RayTraceHitShaderGroup_t& src)
{
} /* size: 0 */

// <0185814D> ../public/tier0/platform.h:1518
inline Vector* CopyConstruct<Vector>(Vector* pMemory, const Vector& src)
{
} /* size: 0 */

// <0126D093> ../public/tier0/platform.h:1518
inline short unsigned int* CopyConstruct<short unsigned int>(short unsigned int* pMemory, const short unsigned int& src)
{
} /* size: 0 */

// <0126CFF6> ../public/tier0/platform.h:1518
inline CTransform* CopyConstruct<CTransform>(CTransform* pMemory, const CTransform& src)
{
} /* size: 0 */

// <010F53CF> ../public/tier0/platform.h:1518
inline VertexBufferHandle_t__** CopyConstruct<VertexBufferHandle_t__*>(VertexBufferHandle_t__** pMemory, VertexBufferHandle_t__* const& src)
{
} /* size: 0 */

// <010F44B3> ../public/tier0/platform.h:1518
inline signed char* CopyConstruct<signed char>(signed char* pMemory, const signed char& src)
{
} /* size: 0 */

// <010066D0> ../public/tier0/platform.h:1518
inline CUtlStringToken* CopyConstruct<CUtlStringToken>(CUtlStringToken* pMemory, const CUtlStringToken& src)
{
} /* size: 0 */

// <01005921> ../public/tier0/platform.h:1518
inline CWeakHandle<InfoForResourceTypeCTextureBase>* CopyConstruct<CWeakHandle<InfoForResourceTypeCTextureBase> >(CWeakHandle<InfoForResourceTypeCTextureBase>* pMemory, const CWeakHandle<InfoForResourceTypeCTextureBase>& src)
{
} /* size: 0 */

// <0100580B> ../public/tier0/platform.h:1518
inline CWeakHandle<InfoForResourceTypeCEntityLump>* CopyConstruct<CWeakHandle<InfoForResourceTypeCEntityLump> >(CWeakHandle<InfoForResourceTypeCEntityLump>* pMemory, const CWeakHandle<InfoForResourceTypeCEntityLump>& src)
{
} /* size: 0 */

// <010052FE> ../public/tier0/platform.h:1518
inline CSceneObject** CopyConstruct<CSceneObject*>(CSceneObject** pMemory, CSceneObject* const& src)
{
} /* size: 0 */

// <0100507E> ../public/tier0/platform.h:1518
inline const CEntityKeyValues ** CopyConstruct<const CEntityKeyValues*>(const CEntityKeyValues ** pMemory, const CEntityKeyValues* const& src)
{
} /* size: 0 */

// <010003CF> ../public/tier0/platform.h:1518
inline Node_t* CopyConstruct<CUtlMap<long long unsigned int, WorldTraversal_t*>::Node_t>(Node_t* pMemory, const Node_t& src)
{
} /* size: 0 */

// <00FFFFEB> ../public/tier0/platform.h:1518
inline CWorldSceneObjectRef** CopyConstruct<CWorldSceneObjectRef*>(CWorldSceneObjectRef** pMemory, CWorldSceneObjectRef* const& src)
{
} /* size: 0 */

// <00F287D1> ../public/tier0/platform.h:1518
inline CSingleWorldRep** CopyConstruct<CSingleWorldRep*>(CSingleWorldRep** pMemory, CSingleWorldRep* const& src)
{
} /* size: 0 */

// <00F286EC> ../public/tier0/platform.h:1518
inline ISceneWorld** CopyConstruct<ISceneWorld*>(ISceneWorld** pMemory, ISceneWorld* const& src)
{
} /* size: 0 */

// <00D9D456> ../public/tier0/platform.h:1518
inline long long unsigned int* CopyConstruct<long long unsigned int>(long long unsigned int* pMemory, const long long unsigned int& src)
{
} /* size: 0 */

// <00D9BBB5> ../public/tier0/platform.h:1518
inline Rule* CopyConstruct<CPhysicsFilter::Rule>(Rule* pMemory, const Rule& src)
{
} /* size: 0 */

// <00D99F07> ../public/tier0/platform.h:1518
inline unsigned int* CopyConstruct<unsigned int>(unsigned int* pMemory, const unsigned int& src)
{
} /* size: 0 */

// <00D6F19B> ../public/tier0/platform.h:1518
inline CPhysSurfaceProperties** CopyConstruct<CPhysSurfaceProperties*>(CPhysSurfaceProperties** pMemory, CPhysSurfaceProperties* const& src)
{
} /* size: 0 */

// <00D0F875> ../public/tier0/platform.h:1518
inline IPhysicsJoint** CopyConstruct<IPhysicsJoint*>(IPhysicsJoint** pMemory, IPhysicsJoint* const& src)
{
} /* size: 0 */

// <00B9B626> ../public/tier0/platform.h:1518
inline CPhysicsShape** CopyConstruct<CPhysicsShape*>(CPhysicsShape** pMemory, CPhysicsShape* const& src)
{
} /* size: 0 */

// <00B12A47> ../public/tier0/platform.h:1518
inline CPhysicsBody** CopyConstruct<CPhysicsBody*>(CPhysicsBody** pMemory, CPhysicsBody* const& src)
{
} /* size: 0 */

// <00B128F1> ../public/tier0/platform.h:1518
inline CPhysicsDebugShape** CopyConstruct<CPhysicsDebugShape*>(CPhysicsDebugShape** pMemory, CPhysicsDebugShape* const& src)
{
} /* size: 0 */

// <00B1206E> ../public/tier0/platform.h:1518
inline PhysicsTrace_t* CopyConstruct<PhysicsTrace_t>(PhysicsTrace_t* pMemory, const PhysicsTrace_t& src)
{
} /* size: 0 */

// <00B0FBAD> ../public/tier0/platform.h:1518
inline CPhysAggregateInstance** CopyConstruct<CPhysAggregateInstance*>(CPhysAggregateInstance** pMemory, CPhysAggregateInstance* const& src)
{
} /* size: 0 */

// <009F0742> ../public/tier0/platform.h:1518
inline CPhysicsWorld** CopyConstruct<CPhysicsWorld*>(CPhysicsWorld** pMemory, CPhysicsWorld* const& src)
{
} /* size: 0 */

// <009F033C> ../public/tier0/platform.h:1518
inline const qhVertex ** CopyConstruct<const qhVertex*>(const qhVertex ** pMemory, const qhVertex* const& src)
{
} /* size: 0 */

// <009F0166> ../public/tier0/platform.h:1518
inline const qhFace ** CopyConstruct<const qhFace*>(const qhFace ** pMemory, const qhFace* const& src)
{
} /* size: 0 */

// <009F00CA> ../public/tier0/platform.h:1518
inline const qhHalfEdge ** CopyConstruct<const qhHalfEdge*>(const qhHalfEdge ** pMemory, const qhHalfEdge* const& src)
{
} /* size: 0 */

// <008E037E> ../public/tier0/platform.h:1518
inline Node_t* CopyConstruct<CUtlMap<unsigned int, ButtonCode_t>::Node_t>(Node_t* pMemory, const Node_t& src)
{
} /* size: 0 */

// <00674590> ../public/tier0/platform.h:1518
inline CUtlString* CopyConstruct<CUtlString>(CUtlString* pMemory, const CUtlString& src)
{
} /* size: 0 */

// <004B30E4> ../public/tier0/platform.h:1518
inline ConVar** CopyConstruct<ConVar*>(ConVar** pMemory, ConVar* const& src)
{
} /* size: 0 */

// <004ADF1C> ../public/tier0/platform.h:1518
inline Node_t* CopyConstruct<CUtlMap<const CSchemaClassInfo*, CUtlVector<CEventDispatcher_Base::EventListenerInfo_t>, unsigned int, bool (*)(const CSchemaClassInfo* const&, const CSchemaClassInfo* const&)>::Node_t>(Node_t* pMemory, const Node_t& src)
{
} /* size: 0 */

// <003C7C24> ../public/tier0/platform.h:1518
inline AABB_t* CopyConstruct<AABB_t>(AABB_t* pMemory, const AABB_t& src)
{
} /* size: 0 */

// <003C7AEB> ../public/tier0/platform.h:1518
inline CPVS** CopyConstruct<CPVS*>(CPVS** pMemory, CPVS* const& src)
{
} /* size: 0 */

// <0029E92D> ../public/tier0/platform.h:1518
inline int* CopyConstruct<int>(int* pMemory, const int& src)
{
} /* size: 0 */

// <00231EDC> ../public/tier0/platform.h:1518
inline IPrerequisite** CopyConstruct<IPrerequisite*>(IPrerequisite** pMemory, IPrerequisite* const& src)
{
} /* size: 0 */

// <00230091> ../public/tier0/platform.h:1518
inline IEngineService** CopyConstruct<IEngineService*>(IEngineService** pMemory, IEngineService* const& src)
{
} /* size: 0 */

// <0022FF78> ../public/tier0/platform.h:1518
inline ISwitchLoopModeStatusNotify** CopyConstruct<ISwitchLoopModeStatusNotify*>(ISwitchLoopModeStatusNotify** pMemory, ISwitchLoopModeStatusNotify* const& src)
{
} /* size: 0 */

// <00132734> ../public/tier0/platform.h:1518
inline HResourceManifest__** CopyConstruct<HResourceManifest__*>(HResourceManifest__** pMemory, HResourceManifest__* const& src)
{
} /* size: 0 */

// <031F7A9B> ../public/tier0/platform.h:1518
inline bool ()(const char *, KeyValues3 *)** CopyConstruct<bool (*)(char const*, KeyValues3*)>(bool ()(const char *, KeyValues3 *)** pMemory, bool ()(const char *, KeyValues3 *)* const& src)
{
} /* size: 0 */

// <025B7302> ../public/tier0/platform.h:1518
inline CAnimationDecodeCacheEntry_t* CopyConstruct<CAnimationDecodeCacheEntry_t>(CAnimationDecodeCacheEntry_t* pMemory, const CAnimationDecodeCacheEntry_t& src)
{
} /* size: 0 */

// <01AD9085> ../public/tier0/platform.h:1518
inline VertexColor_t* CopyConstruct<VertexColor_t>(VertexColor_t* pMemory, const VertexColor_t& src)
{
} /* size: 0 */

// <01A67EB6> ../public/tier0/platform.h:1518
inline CSmartPtr<Reflection::CTypeFactory<CAnimStateConditionBase>::CFactoryMaker, CRefCountAccessor>* CopyConstruct<CSmartPtr<Reflection::CTypeFactory<CAnimStateConditionBase>::CFactoryMaker, CRefCountAccessor> >(CSmartPtr<Reflection::CTypeFactory<CAnimStateConditionBase>::CFactoryMaker, CRefCountAccessor>* pMemory, const CSmartPtr<Reflection::CTypeFactory<CAnimStateConditionBase>::CFactoryMaker, CRefCountAccessor>& src)
{
} /* size: 0 */

// <019F0016> ../public/tier0/platform.h:1518
inline CSmartPtr<CAnimStateTransition, CRefCountAccessor>* CopyConstruct<CSmartPtr<CAnimStateTransition> >(CSmartPtr<CAnimStateTransition, CRefCountAccessor>* pMemory, const CSmartPtr<CAnimStateTransition, CRefCountAccessor>& src)
{
} /* size: 0 */

// <019EF4D3> ../public/tier0/platform.h:1518
inline CSmartPtr<CAnimStateConditionBase, CRefCountAccessor>* CopyConstruct<CSmartPtr<CAnimStateConditionBase> >(CSmartPtr<CAnimStateConditionBase, CRefCountAccessor>* pMemory, const CSmartPtr<CAnimStateConditionBase, CRefCountAccessor>& src)
{
} /* size: 0 */

// <0191AD1F> ../public/tier0/platform.h:1518
inline CSolveIKChainData* CopyConstruct<CSolveIKChainData>(CSolveIKChainData* pMemory, const CSolveIKChainData& src)
{
} /* size: 0 */

// <0171ABEF> ../public/tier0/platform.h:1518
inline PoseOpDesc* CopyConstruct<CPoseRecipe::PoseOpDesc>(PoseOpDesc* pMemory, const PoseOpDesc& src)
{
} /* size: 0 */

// <0157FC8D> ../public/tier0/platform.h:1518
inline IAnimReplayListener** CopyConstruct<IAnimReplayListener*>(IAnimReplayListener** pMemory, IAnimReplayListener* const& src)
{
} /* size: 0 */

// <0157EEEE> ../public/tier0/platform.h:1518
inline CSmartPtr<const CAnimNodeBase, CRefCountAccessor>* CopyConstruct<CSmartPtr<const CAnimNodeBase> >(CSmartPtr<const CAnimNodeBase, CRefCountAccessor>* pMemory, const CSmartPtr<const CAnimNodeBase, CRefCountAccessor>& src)
{
} /* size: 0 */

// <0157EE15> ../public/tier0/platform.h:1518
inline CPackedHandle<CAnimUpdateNodeBase>* CopyConstruct<CPackedHandle<CAnimUpdateNodeBase> >(CPackedHandle<CAnimUpdateNodeBase>* pMemory, const CPackedHandle<CAnimUpdateNodeBase>& src)
{
} /* size: 0 */

// <0157ED79> ../public/tier0/platform.h:1518
inline CUtlVector<AnimNodeLocation_t, CUtlMemory<AnimNodeLocation_t, int> >* CopyConstruct<CUtlVector<AnimNodeLocation_t> >(CUtlVector<AnimNodeLocation_t, CUtlMemory<AnimNodeLocation_t, int> >* pMemory, const CUtlVector<AnimNodeLocation_t, CUtlMemory<AnimNodeLocation_t, int> >& src)
{
} /* size: 0 */

// <0157C798> ../public/tier0/platform.h:1518
inline NodeUpdateDesc_t* CopyConstruct<CAnimGraphUpdateContext::NodeUpdateDesc_t>(NodeUpdateDesc_t* pMemory, const NodeUpdateDesc_t& src)
{
} /* size: 0 */

// <0157C6FC> ../public/tier0/platform.h:1518
inline animevent_t* CopyConstruct<animevent_t>(animevent_t* pMemory, const animevent_t& src)
{
} /* size: 0 */

// <0157C647> ../public/tier0/platform.h:1518
inline AnimGraphOperation_t* CopyConstruct<AnimGraphOperation_t>(AnimGraphOperation_t* pMemory, const AnimGraphOperation_t& src)
{
} /* size: 0 */

// <01579501> ../public/tier0/platform.h:1518
inline OpResult* CopyConstruct<OpResult>(OpResult* pMemory, const OpResult& src)
{
} /* size: 0 */

// <014B8722> ../public/tier0/platform.h:1518
inline CSmartPtr<Reflection::CTypeFactory<CAnimParameterBase>::CFactoryMaker, CRefCountAccessor>* CopyConstruct<CSmartPtr<Reflection::CTypeFactory<CAnimParameterBase>::CFactoryMaker, CRefCountAccessor> >(CSmartPtr<Reflection::CTypeFactory<CAnimParameterBase>::CFactoryMaker, CRefCountAccessor>* pMemory, const CSmartPtr<Reflection::CTypeFactory<CAnimParameterBase>::CFactoryMaker, CRefCountAccessor>& src)
{
} /* size: 0 */

// <01462BA3> ../public/tier0/platform.h:1518
inline CSmartPtr<Reflection::CTypeFactory<CAnimMotorBase>::CFactoryMaker, CRefCountAccessor>* CopyConstruct<CSmartPtr<Reflection::CTypeFactory<CAnimMotorBase>::CFactoryMaker, CRefCountAccessor> >(CSmartPtr<Reflection::CTypeFactory<CAnimMotorBase>::CFactoryMaker, CRefCountAccessor>* pMemory, const CSmartPtr<Reflection::CTypeFactory<CAnimMotorBase>::CFactoryMaker, CRefCountAccessor>& src)
{
} /* size: 0 */

// <013F1199> ../public/tier0/platform.h:1518
inline PoseCache_t** CopyConstruct<CMotionMetricInitContext::PoseCache_t*>(PoseCache_t** pMemory, PoseCache_t* const& src)
{
} /* size: 0 */

// <013EBF6C> ../public/tier0/platform.h:1518
inline CSmartPtr<Reflection::CTypeFactory<CMotionMetricBase>::CFactoryMaker, CRefCountAccessor>* CopyConstruct<CSmartPtr<Reflection::CTypeFactory<CMotionMetricBase>::CFactoryMaker, CRefCountAccessor> >(CSmartPtr<Reflection::CTypeFactory<CMotionMetricBase>::CFactoryMaker, CRefCountAccessor>* pMemory, const CSmartPtr<Reflection::CTypeFactory<CMotionMetricBase>::CFactoryMaker, CRefCountAccessor>& src)
{
} /* size: 0 */

// <0130B452> ../public/tier0/platform.h:1518
inline CSmartPtr<CAnimTagBase, CRefCountAccessor>* CopyConstruct<CSmartPtr<CAnimTagBase> >(CSmartPtr<CAnimTagBase, CRefCountAccessor>* pMemory, const CSmartPtr<CAnimTagBase, CRefCountAccessor>& src)
{
} /* size: 0 */

// <0130AA18> ../public/tier0/platform.h:1518
inline IAnimTagListener** CopyConstruct<IAnimTagListener*>(IAnimTagListener** pMemory, IAnimTagListener* const& src)
{
} /* size: 0 */

// <01306877> ../public/tier0/platform.h:1518
inline CSmartPtr<Reflection::CTypeFactory<CAnimTagBase>::CFactoryMaker, CRefCountAccessor>* CopyConstruct<CSmartPtr<Reflection::CTypeFactory<CAnimTagBase>::CFactoryMaker, CRefCountAccessor> >(CSmartPtr<Reflection::CTypeFactory<CAnimTagBase>::CFactoryMaker, CRefCountAccessor>* pMemory, const CSmartPtr<Reflection::CTypeFactory<CAnimTagBase>::CFactoryMaker, CRefCountAccessor>& src)
{
} /* size: 0 */

// <0126AB17> ../public/tier0/platform.h:1518
inline CSmartPtr<CAnimState, CRefCountAccessor>* CopyConstruct<CSmartPtr<CAnimState> >(CSmartPtr<CAnimState, CRefCountAccessor>* pMemory, const CSmartPtr<CAnimState, CRefCountAccessor>& src)
{
} /* size: 0 */

// <01155E27> ../public/tier0/platform.h:1518
inline CMotionMetricEvaluator** CopyConstruct<CMotionMetricEvaluator*>(CMotionMetricEvaluator** pMemory, CMotionMetricEvaluator* const& src)
{
} /* size: 0 */

// <011554D1> ../public/tier0/platform.h:1518
inline CSmartPtr<CMotionMetricBase, CRefCountAccessor>* CopyConstruct<CSmartPtr<CMotionMetricBase> >(CSmartPtr<CMotionMetricBase, CRefCountAccessor>* pMemory, const CSmartPtr<CMotionMetricBase, CRefCountAccessor>& src)
{
} /* size: 0 */

// <0105E804> ../public/tier0/platform.h:1518
inline CSmartPtr<CAnimTagSpan, CRefCountAccessor>* CopyConstruct<CSmartPtr<CAnimTagSpan> >(CSmartPtr<CAnimTagSpan, CRefCountAccessor>* pMemory, const CSmartPtr<CAnimTagSpan, CRefCountAccessor>& src)
{
} /* size: 0 */

// <0105D48D> ../public/tier0/platform.h:1518
inline CBlendNodeChild* CopyConstruct<CBlendNodeChild>(CBlendNodeChild* pMemory, const CBlendNodeChild& src)
{
} /* size: 0 */

// <0105D0F0> ../public/tier0/platform.h:1518
inline CChoiceNodeChild* CopyConstruct<CChoiceNodeChild>(CChoiceNodeChild* pMemory, const CChoiceNodeChild& src)
{
} /* size: 0 */

// <01056C52> ../public/tier0/platform.h:1518
inline CSmartPtr<Reflection::CTypeFactory<CAnimNodeBase>::CFactoryMaker, CRefCountAccessor>* CopyConstruct<CSmartPtr<Reflection::CTypeFactory<CAnimNodeBase>::CFactoryMaker, CRefCountAccessor> >(CSmartPtr<Reflection::CTypeFactory<CAnimNodeBase>::CFactoryMaker, CRefCountAccessor>* pMemory, const CSmartPtr<Reflection::CTypeFactory<CAnimNodeBase>::CFactoryMaker, CRefCountAccessor>& src)
{
} /* size: 0 */

// <00F5103D> ../public/tier0/platform.h:1518
inline CSmartPtr<CAnimParameterBase, CRefCountAccessor>* CopyConstruct<CSmartPtr<CAnimParameterBase> >(CSmartPtr<CAnimParameterBase, CRefCountAccessor>* pMemory, const CSmartPtr<CAnimParameterBase, CRefCountAccessor>& src)
{
} /* size: 0 */

// <00F5093C> ../public/tier0/platform.h:1518
inline CSmartPtr<CAnimParameterInstance, CRefCountAccessor>* CopyConstruct<CSmartPtr<CAnimParameterInstance> >(CSmartPtr<CAnimParameterInstance, CRefCountAccessor>* pMemory, const CSmartPtr<CAnimParameterInstance, CRefCountAccessor>& src)
{
} /* size: 0 */

// <00F50450> ../public/tier0/platform.h:1518
inline CAnimParamHandle* CopyConstruct<CAnimParamHandle>(CAnimParamHandle* pMemory, const CAnimParamHandle& src)
{
} /* size: 0 */

// <00F4FADB> ../public/tier0/platform.h:1518
inline CSmartPtr<CClipProperties, CRefCountAccessor>* CopyConstruct<CSmartPtr<CClipProperties> >(CSmartPtr<CClipProperties, CRefCountAccessor>* pMemory, const CSmartPtr<CClipProperties, CRefCountAccessor>& src)
{
} /* size: 0 */

// <00E1409C> ../public/tier0/platform.h:1518
inline CSmartPtr<CParameterValue, CRefCountAccessor>* CopyConstruct<CSmartPtr<CParameterValue> >(CSmartPtr<CParameterValue, CRefCountAccessor>* pMemory, const CSmartPtr<CParameterValue, CRefCountAccessor>& src)
{
} /* size: 0 */

// <00E13E6B> ../public/tier0/platform.h:1518
inline CSmartPtr<CActivityValues, CRefCountAccessor>* CopyConstruct<CSmartPtr<CActivityValues> >(CSmartPtr<CActivityValues, CRefCountAccessor>* pMemory, const CSmartPtr<CActivityValues, CRefCountAccessor>& src)
{
} /* size: 0 */

// <00E13BA9> ../public/tier0/platform.h:1518
inline IAnimationGraphVisualizerInfo** CopyConstruct<IAnimationGraphVisualizerInfo*>(IAnimationGraphVisualizerInfo** pMemory, IAnimationGraphVisualizerInfo* const& src)
{
} /* size: 0 */

// <00E12A2A> ../public/tier0/platform.h:1518
inline AnimNodeID* CopyConstruct<AnimNodeID>(AnimNodeID* pMemory, const AnimNodeID& src)
{
} /* size: 0 */

// <00E10303> ../public/tier0/platform.h:1518
inline IAnimGraphSequenceFinishedListener** CopyConstruct<IAnimGraphSequenceFinishedListener*>(IAnimGraphSequenceFinishedListener** pMemory, IAnimGraphSequenceFinishedListener* const& src)
{
} /* size: 0 */

// <00E0DBF2> ../public/tier0/platform.h:1518
inline IAnimGraphLogListener** CopyConstruct<IAnimGraphLogListener*>(IAnimGraphLogListener** pMemory, IAnimGraphLogListener* const& src)
{
} /* size: 0 */

// <00E0D765> ../public/tier0/platform.h:1518
inline AnimNodeLocation_t* CopyConstruct<AnimNodeLocation_t>(AnimNodeLocation_t* pMemory, const AnimNodeLocation_t& src)
{
} /* size: 0 */

// <00E0AE08> ../public/tier0/platform.h:1518
inline BaseClassInfo_t* CopyConstruct<Reflection::CClassInfo::BaseClassInfo_t>(BaseClassInfo_t* pMemory, const BaseClassInfo_t& src)
{
} /* size: 0 */

// <00E0A78E> ../public/tier0/platform.h:1518
inline IAnimNode** CopyConstruct<IAnimNode*>(IAnimNode** pMemory, IAnimNode* const& src)
{
} /* size: 0 */

// <00C638F2> ../public/tier0/platform.h:1518
inline fieldtype_t* CopyConstruct<fieldtype_t>(fieldtype_t* pMemory, const fieldtype_t& src)
{
} /* size: 0 */

// <00C5F0CA> ../public/tier0/platform.h:1518
inline IAnimationHelperSequenceFinishedCallback** CopyConstruct<IAnimationHelperSequenceFinishedCallback*>(IAnimationHelperSequenceFinishedCallback** pMemory, IAnimationHelperSequenceFinishedCallback* const& src)
{
} /* size: 0 */

// <00C5C14F> ../public/tier0/platform.h:1518
inline HSequence* CopyConstruct<HSequence>(HSequence* pMemory, const HSequence& src)
{
} /* size: 0 */

// <00C52493> ../public/tier0/platform.h:1518
inline CUtlBinaryBlock** CopyConstruct<CUtlBinaryBlock*>(CUtlBinaryBlock** pMemory, CUtlBinaryBlock* const& src)
{
} /* size: 0 */

// <00C41320> ../public/tier0/platform.h:1518
inline Node_t* CopyConstruct<CUtlMap<unsigned int, int, int, CDefLess<unsigned int> >::Node_t>(Node_t* pMemory, const Node_t& src)
{
} /* size: 0 */

// <00C3F984> ../public/tier0/platform.h:1518
inline Node_t* CopyConstruct<CUtlMap<char const*, CActivityRemapCache, int, bool (*)(char const* const&, char const* const&)>::Node_t>(Node_t* pMemory, const Node_t& src)
{
} /* size: 0 */

// <00C37ABC> ../public/tier0/platform.h:1518
inline Entry_t* CopyConstruct<CUtlHashDict<short int, true, false>::Entry_t>(Entry_t* pMemory, const Entry_t& src)
{
} /* size: 0 */

// <00C37735> ../public/tier0/platform.h:1518
inline Entry_t* CopyConstruct<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t>(Entry_t* pMemory, const Entry_t& src)
{
} /* size: 0 */

// <00C37539> ../public/tier0/platform.h:1518
inline Entry_t* CopyConstruct<CUtlHashDict<UserDataElement_t, true, false>::Entry_t>(Entry_t* pMemory, const Entry_t& src)
{
} /* size: 0 */

// <00C362EB> ../public/tier0/platform.h:1518
inline Entry_t* CopyConstruct<CUtlHashDict<short int, true, true>::Entry_t>(Entry_t* pMemory, const Entry_t& src)
{
} /* size: 0 */

// <00C33281> ../public/tier0/platform.h:1518
inline CAnimPose** CopyConstruct<CAnimPose*>(CAnimPose** pMemory, CAnimPose* const& src)
{
} /* size: 0 */

// <000F02D6> ../public/tier0/platform.h:1518
inline JointTreeNode** CopyConstruct<JointTreeNode*>(JointTreeNode** pMemory, JointTreeNode* const& src)
{
} /* size: 0 */

// <000ED608> ../public/tier0/platform.h:1518
inline Node_t* CopyConstruct<CUtlMap<int, JointTreeNode*>::Node_t>(Node_t* pMemory, const Node_t& src)
{
} /* size: 0 */

// <01777D00> ../public/tier0/platform.h:1518
inline VfxDescriptor_t* CopyConstruct<VfxDescriptor_t>(VfxDescriptor_t* pMemory, const VfxDescriptor_t& src)
{
} /* size: 0 */

// <01777523> ../public/tier0/platform.h:1518
inline HiddenUAVCounter_t* CopyConstruct<HiddenUAVCounter_t>(HiddenUAVCounter_t* pMemory, const HiddenUAVCounter_t& src)
{
} /* size: 0 */

// <00F4518C> ../public/tier0/platform.h:1518
inline SheetInfo_t* CopyConstruct<CSheet::SheetInfo_t>(SheetInfo_t* pMemory, const SheetInfo_t& src)
{
} /* size: 0 */

// <00C2C9BD> ../public/tier0/platform.h:1518
inline Node_t* CopyConstruct<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlHashtable<CDescriptorSetVulkan*>*, int, CDefLess<CWeakHandle<InfoForResourceTypeCTextureBase> > >::Node_t>(Node_t* pMemory, const Node_t& src)
{
} /* size: 0 */

// <00B6FF57> ../public/tier0/platform.h:1518
inline VkSemaphore_T** CopyConstruct<VkSemaphore_T*>(VkSemaphore_T** pMemory, VkSemaphore_T* const& src)
{
} /* size: 0 */

// <00B6D26A> ../public/tier0/platform.h:1518
inline AsyncReadbackVulkan_t* CopyConstruct<AsyncReadbackVulkan_t>(AsyncReadbackVulkan_t* pMemory, const AsyncReadbackVulkan_t& src)
{
} /* size: 0 */

// <00B6BE3C> ../public/tier0/platform.h:1518
inline VulkanCommandBuffer_t** CopyConstruct<VulkanCommandBuffer_t*>(VulkanCommandBuffer_t** pMemory, VulkanCommandBuffer_t* const& src)
{
} /* size: 0 */

// <00B685BF> ../public/tier0/platform.h:1518
inline PresentFenceVulkan_t* CopyConstruct<CRenderThreadVulkan::PresentFenceVulkan_t>(PresentFenceVulkan_t* pMemory, const PresentFenceVulkan_t& src)
{
} /* size: 0 */

// <00B67750> ../public/tier0/platform.h:1518
inline SemaphoreFenceVulkan_t* CopyConstruct<CRenderThreadVulkan::SemaphoreFenceVulkan_t>(SemaphoreFenceVulkan_t* pMemory, const SemaphoreFenceVulkan_t& src)
{
} /* size: 0 */

// <00B063F0> ../public/tier0/platform.h:1518
inline CUtlVector<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >** CopyConstruct<CUtlVector<RenderPipelineSample_t>*>(CUtlVector<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >** pMemory, CUtlVector<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >* const& src)
{
} /* size: 0 */

// <00B062A7> ../public/tier0/platform.h:1518
inline CUtlVector<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::SampleQueries_t, int> >* CopyConstruct<CUtlVector<CRenderPipelineStatsVulkan::SampleQueries_t>*>(CUtlVector<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::SampleQueries_t, int> >* pMemory, CUtlVector<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::SampleQueries_t, int> >* src)
{
} /* size: 0 */

// <00B05F43> ../public/tier0/platform.h:1518
inline VulkanQuery_t** CopyConstruct<VulkanQuery_t*>(VulkanQuery_t** pMemory, VulkanQuery_t* const& src)
{
} /* size: 0 */

// <00B0392B> ../public/tier0/platform.h:1518
inline VulkanQueryPool_t** CopyConstruct<VulkanQueryPool_t*>(VulkanQueryPool_t** pMemory, VulkanQueryPool_t* const& src)
{
} /* size: 0 */

// <00AC3D3B> ../public/tier0/platform.h:1518
inline VulkanSubpassInfo_t* CopyConstruct<CRenderPassVulkan::VulkanSubpassInfo_t>(VulkanSubpassInfo_t* pMemory, const VulkanSubpassInfo_t& src)
{
} /* size: 0 */

// <00AC3944> ../public/tier0/platform.h:1518
inline VkFramebuffer_T** CopyConstruct<VkFramebuffer_T*>(VkFramebuffer_T** pMemory, VkFramebuffer_T* const& src)
{
} /* size: 0 */

// <00ABD299> ../public/tier0/platform.h:1518
inline Node_t* CopyConstruct<CUtlMap<CRenderPassDesc, CRenderPassVulkan*>::Node_t>(Node_t* pMemory, const Node_t& src)
{
} /* size: 0 */

// <009DECB1> ../public/tier0/platform.h:1518
inline CRenderResource** CopyConstruct<CRenderResource*>(CRenderResource** pMemory, CRenderResource* const& src)
{
} /* size: 0 */

// <009D6A11> ../public/tier0/platform.h:1518
inline QueryPool_t* CopyConstruct<CRenderDeviceVulkan::QueryPool_t>(QueryPool_t* pMemory, const QueryPool_t& src)
{
} /* size: 0 */

// <009D61ED> ../public/tier0/platform.h:1518
inline CVertexBufferVulkan** CopyConstruct<CVertexBufferVulkan*>(CVertexBufferVulkan** pMemory, CVertexBufferVulkan* const& src)
{
} /* size: 0 */

// <009D5F41> ../public/tier0/platform.h:1518
inline CIndexBufferVulkan** CopyConstruct<CIndexBufferVulkan*>(CIndexBufferVulkan** pMemory, CIndexBufferVulkan* const& src)
{
} /* size: 0 */

// <009D4B5B> ../public/tier0/platform.h:1518
inline VulkanTextureReleaseResources_t* CopyConstruct<CRenderDeviceVulkan::VulkanTextureReleaseResources_t>(VulkanTextureReleaseResources_t* pMemory, const VulkanTextureReleaseResources_t& src)
{
} /* size: 0 */

// <009D3D05> ../public/tier0/platform.h:1518
inline long long int* CopyConstruct<long long int>(long long int* pMemory, const long long int& src)
{
} /* size: 0 */

// <009D3479> ../public/tier0/platform.h:1518
inline VulkanDynamicDescriptorSet_t** CopyConstruct<VulkanDynamicDescriptorSet_t*>(VulkanDynamicDescriptorSet_t** pMemory, VulkanDynamicDescriptorSet_t* const& src)
{
} /* size: 0 */

// <009D29C8> ../public/tier0/platform.h:1518
inline TextureBinding_t* CopyConstruct<CShaderVulkanBase::DescriptorSetBindings_t::TextureBinding_t>(TextureBinding_t* pMemory, const TextureBinding_t& src)
{
} /* size: 0 */

// <009D2908> ../public/tier0/platform.h:1518
inline ShaderStorageBufferBinding_t* CopyConstruct<ShaderStorageBufferBinding_t>(ShaderStorageBufferBinding_t* pMemory, const ShaderStorageBufferBinding_t& src)
{
} /* size: 0 */

// <009D282E> ../public/tier0/platform.h:1518
inline DescriptorSetBindings_t* CopyConstruct<CShaderVulkanBase::DescriptorSetBindings_t>(DescriptorSetBindings_t* pMemory, const DescriptorSetBindings_t& src)
{
} /* size: 0 */

// <009D252B> ../public/tier0/platform.h:1518
inline RenderDescriptorSetHandle_t__** CopyConstruct<RenderDescriptorSetHandle_t__*>(RenderDescriptorSetHandle_t__** pMemory, RenderDescriptorSetHandle_t__* const& src)
{
} /* size: 0 */

// <009CB2FB> ../public/tier0/platform.h:1518
inline Node_t* CopyConstruct<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, VulkanDeviceSpecificTexture_t, unsigned int, CDefLess<CWeakHandle<InfoForResourceTypeCTextureBase> > >::Node_t>(Node_t* pMemory, const Node_t& src)
{
} /* size: 0 */

// <009CAFB2> ../public/tier0/platform.h:1518
inline Node_t* CopyConstruct<CUtlMap<RenderResourceHandle_t__*, VulkanDeviceSpecificBuffer_t, unsigned int, CDefLess<RenderResourceHandle_t__*> >::Node_t>(Node_t* pMemory, const Node_t& src)
{
} /* size: 0 */

// <009CAC69> ../public/tier0/platform.h:1518
inline Node_t* CopyConstruct<CUtlMap<RenderDescriptorSetHandle_t__*, VulkanDeviceSpecificDescriptorSet_t, unsigned int, CDefLess<RenderDescriptorSetHandle_t__*> >::Node_t>(Node_t* pMemory, const Node_t& src)
{
} /* size: 0 */

// <009CA920> ../public/tier0/platform.h:1518
inline Node_t* CopyConstruct<CUtlMap<RenderRayTracePipelineHandle_t__*, VulkanDeviceSpecificRayTracePipeline_t, unsigned int, CDefLess<RenderRayTracePipelineHandle_t__*> >::Node_t>(Node_t* pMemory, const Node_t& src)
{
} /* size: 0 */

// <009C7FBE> ../public/tier0/platform.h:1518
inline ConcatLayoutResult_t* CopyConstruct<ConcatLayoutResult_t>(ConcatLayoutResult_t* pMemory, const ConcatLayoutResult_t& src)
{
} /* size: 0 */

// <009C559F> ../public/tier0/platform.h:1518
inline VulkanDescriptorSetPool_t* CopyConstruct<VulkanDescriptorSetPool_t>(VulkanDescriptorSetPool_t* pMemory, const VulkanDescriptorSetPool_t& src)
{
} /* size: 0 */

// <009C428D> ../public/tier0/platform.h:1518
inline CDescriptorSetVulkan** CopyConstruct<CDescriptorSetVulkan*>(CDescriptorSetVulkan** pMemory, CDescriptorSetVulkan* const& src)
{
} /* size: 0 */

// <009C1050> ../public/tier0/platform.h:1518
inline Node_t* CopyConstruct<CUtlMap<unsigned int, unsigned int, short unsigned int, CDefLess<unsigned int> >::Node_t>(Node_t* pMemory, const Node_t& src)
{
} /* size: 0 */

// <009BFB3F> ../public/tier0/platform.h:1518
inline CShaderVulkanBase** CopyConstruct<CShaderVulkanBase*>(CShaderVulkanBase** pMemory, CShaderVulkanBase* const& src)
{
} /* size: 0 */

// <009BE3A4> ../public/tier0/platform.h:1518
inline VulkanSemaphore_t** CopyConstruct<VulkanSemaphore_t*>(VulkanSemaphore_t** pMemory, VulkanSemaphore_t* const& src)
{
} /* size: 0 */

// <009BE14B> ../public/tier0/platform.h:1518
inline RenderDescriptorDesc_t* CopyConstruct<RenderDescriptorDesc_t>(RenderDescriptorDesc_t* pMemory, const RenderDescriptorDesc_t& src)
{
} /* size: 0 */

// <008C122D> ../public/tier0/platform.h:1518
inline VkValidationFeatureDisableEXT* CopyConstruct<VkValidationFeatureDisableEXT>(VkValidationFeatureDisableEXT* pMemory, const VkValidationFeatureDisableEXT& src)
{
} /* size: 0 */

// <0083ABA7> ../public/tier0/platform.h:1518
inline DynamicVertexBufferHandle_t__** CopyConstruct<DynamicVertexBufferHandle_t__*>(DynamicVertexBufferHandle_t__** pMemory, DynamicVertexBufferHandle_t__* const& src)
{
} /* size: 0 */

// <0083AAF1> ../public/tier0/platform.h:1518
inline DynamicIndexBufferHandle_t__** CopyConstruct<DynamicIndexBufferHandle_t__*>(DynamicIndexBufferHandle_t__** pMemory, DynamicIndexBufferHandle_t__* const& src)
{
} /* size: 0 */

// <00838C33> ../public/tier0/platform.h:1518
inline VulkanCommandBufferAndPool_t* CopyConstruct<VulkanCommandBufferAndPool_t>(VulkanCommandBufferAndPool_t* pMemory, const VulkanCommandBufferAndPool_t& src)
{
} /* size: 0 */

// <00837C99> ../public/tier0/platform.h:1518
inline QueryObjectInternalVulkan_t** CopyConstruct<QueryObjectInternalVulkan_t*>(QueryObjectInternalVulkan_t** pMemory, QueryObjectInternalVulkan_t* const& src)
{
} /* size: 0 */

// <007AB0DD> ../public/tier0/platform.h:1518
inline RenderBLASHandle_t__** CopyConstruct<RenderBLASHandle_t__*>(RenderBLASHandle_t__** pMemory, RenderBLASHandle_t__* const& src)
{
} /* size: 0 */

// <00709744> ../public/tier0/platform.h:1518
inline VkShaderModule_T** CopyConstruct<VkShaderModule_T*>(VkShaderModule_T** pMemory, VkShaderModule_T* const& src)
{
} /* size: 0 */

// <0070964F> ../public/tier0/platform.h:1518
inline PipelineObjectVulkan_t** CopyConstruct<PipelineObjectVulkan_t*>(PipelineObjectVulkan_t** pMemory, PipelineObjectVulkan_t* const& src)
{
} /* size: 0 */

// <0070651D> ../public/tier0/platform.h:1518
inline VkPipeline_T** CopyConstruct<VkPipeline_T*>(VkPipeline_T** pMemory, VkPipeline_T* const& src)
{
} /* size: 0 */

// <007063E4> ../public/tier0/platform.h:1518
inline const CDescriptorSetVulkan ** CopyConstruct<const CDescriptorSetVulkan*>(const CDescriptorSetVulkan ** pMemory, const CDescriptorSetVulkan* const& src)
{
} /* size: 0 */

// <0070513C> ../public/tier0/platform.h:1518
inline LinkTimeOptimizedPipeline_t* CopyConstruct<CPipelineManagerVulkan::LinkTimeOptimizedPipeline_t>(LinkTimeOptimizedPipeline_t* pMemory, const LinkTimeOptimizedPipeline_t& src)
{
} /* size: 0 */

// <00704B48> ../public/tier0/platform.h:1518
inline VkPipelineCache_T** CopyConstruct<VkPipelineCache_T*>(VkPipelineCache_T** pMemory, VkPipelineCache_T* const& src)
{
} /* size: 0 */

// <00704AF6> ../public/tier0/platform.h:1518
inline PreWarmPipeline_t* CopyConstruct<CPipelineManagerVulkan::PreWarmPipeline_t>(PreWarmPipeline_t* pMemory, const PreWarmPipeline_t& src)
{
} /* size: 0 */

// <00701C23> ../public/tier0/platform.h:1518
inline PipelineCreateInfo_t* CopyConstruct<PipelineCreateInfo_t>(PipelineCreateInfo_t* pMemory, const PipelineCreateInfo_t& src)
{
} /* size: 0 */

// <006FF951> ../public/tier0/platform.h:1518
inline VkSampler_T** CopyConstruct<VkSampler_T*>(VkSampler_T** pMemory, VkSampler_T* const& src)
{
} /* size: 0 */

// <00661A8F> ../public/tier0/platform.h:1518
inline RegisteredShader_t* CopyConstruct<CFossilizeStateCreator::RegisteredShader_t>(RegisteredShader_t* pMemory, const RegisteredShader_t& src)
{
} /* size: 0 */

// <0065A85A> ../public/tier0/platform.h:1518
inline Node_t* CopyConstruct<CUtlMap<long unsigned int, CSamplerStateDesc*, short unsigned int, CDefLess<long unsigned int> >::Node_t>(Node_t* pMemory, const Node_t& src)
{
} /* size: 0 */

// <0065A4FC> ../public/tier0/platform.h:1518
inline Node_t* CopyConstruct<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeDescriptorSetLayout_t*, short unsigned int, CDefLess<long unsigned int> >::Node_t>(Node_t* pMemory, const Node_t& src)
{
} /* size: 0 */

// <00659A9E> ../public/tier0/platform.h:1518
inline Node_t* CopyConstruct<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizePipelineLayout_t*, short unsigned int, CDefLess<long unsigned int> >::Node_t>(Node_t* pMemory, const Node_t& src)
{
} /* size: 0 */

// <00659764> ../public/tier0/platform.h:1518
inline Node_t* CopyConstruct<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeRenderPass_t*, short unsigned int, CDefLess<long unsigned int> >::Node_t>(Node_t* pMemory, const Node_t& src)
{
} /* size: 0 */

// <00658C11> ../public/tier0/platform.h:1518
inline const FossilizeComputePipeline_t ** CopyConstruct<const CFossilizeStateCreator::FossilizeComputePipeline_t*>(const FossilizeComputePipeline_t ** pMemory, const FossilizeComputePipeline_t* const& src)
{
} /* size: 0 */

// <00658933> ../public/tier0/platform.h:1518
inline Node_t* CopyConstruct<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeComputePipeline_t*, unsigned int, CDefLess<long unsigned int> >::Node_t>(Node_t* pMemory, const Node_t& src)
{
} /* size: 0 */

// <00657DBC> ../public/tier0/platform.h:1518
inline const FossilizeGraphicsPipeline_t ** CopyConstruct<const CFossilizeStateCreator::FossilizeGraphicsPipeline_t*>(const FossilizeGraphicsPipeline_t ** pMemory, const FossilizeGraphicsPipeline_t* const& src)
{
} /* size: 0 */

// <00657ADE> ../public/tier0/platform.h:1518
inline Node_t* CopyConstruct<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeGraphicsPipeline_t*, unsigned int, CDefLess<long unsigned int> >::Node_t>(Node_t* pMemory, const Node_t& src)
{
} /* size: 0 */

// <00657372> ../public/tier0/platform.h:1518
inline Node_t* CopyConstruct<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeShaderModule_t*, unsigned int, CDefLess<long unsigned int> >::Node_t>(Node_t* pMemory, const Node_t& src)
{
} /* size: 0 */

// <00656AF6> ../public/tier0/platform.h:1518
inline Node_t* CopyConstruct<CUtlMap<const CShaderVulkanBase*, CUtlLinkedList<CFossilizeStateCreator::FossilizeShaderModule_t*>*, short unsigned int, CDefLess<const CShaderVulkanBase*> >::Node_t>(Node_t* pMemory, const Node_t& src)
{
} /* size: 0 */

// <00655AB8> ../public/tier0/platform.h:1518
inline FossilizeShaderModule_t** CopyConstruct<CFossilizeStateCreator::FossilizeShaderModule_t*>(FossilizeShaderModule_t** pMemory, FossilizeShaderModule_t* const& src)
{
} /* size: 0 */

// <005D89E1> ../public/tier0/platform.h:1518
inline PerThreadDataVulkan_t** CopyConstruct<PerThreadDataVulkan_t*>(PerThreadDataVulkan_t** pMemory, PerThreadDataVulkan_t* const& src)
{
} /* size: 0 */

// <0058C046> ../public/tier0/platform.h:1518
inline VmaPool_T** CopyConstruct<VmaPool_T*>(VmaPool_T** pMemory, VmaPool_T* const& src)
{
} /* size: 0 */

// <0058ACA7> ../public/tier0/platform.h:1518
inline VulkanMemoryPool_t** CopyConstruct<VulkanMemoryPool_t*>(VulkanMemoryPool_t** pMemory, VulkanMemoryPool_t* const& src)
{
} /* size: 0 */

// <0058AB05> ../public/tier0/platform.h:1518
inline FencedResourceList_t* CopyConstruct<CMemoryManagerVulkan::FencedResourceList_t>(FencedResourceList_t* pMemory, const FencedResourceList_t& src)
{
} /* size: 0 */

// <0058A28E> ../public/tier0/platform.h:1518
inline VkCommandBuffer_T** CopyConstruct<VkCommandBuffer_T*>(VkCommandBuffer_T** pMemory, VkCommandBuffer_T* const& src)
{
} /* size: 0 */

// <005886A3> ../public/tier0/platform.h:1518
inline VmaQueuedDeletion_t* CopyConstruct<CMemoryManagerVulkan::VmaQueuedDeletion_t>(VmaQueuedDeletion_t* pMemory, const VmaQueuedDeletion_t& src)
{
} /* size: 0 */

// <00543D59> ../public/tier0/platform.h:1518
inline VkVertexInputAttributeDescription* CopyConstruct<VkVertexInputAttributeDescription>(VkVertexInputAttributeDescription* pMemory, const VkVertexInputAttributeDescription& src)
{
} /* size: 0 */

// <004A81FA> ../public/tier0/platform.h:1518
inline PipelineLayoutImmutableSampler_t* CopyConstruct<PipelineLayoutImmutableSampler_t>(PipelineLayoutImmutableSampler_t* pMemory, const PipelineLayoutImmutableSampler_t& src)
{
} /* size: 0 */

// <0045B757> ../public/tier0/platform.h:1518
inline VkFormat* CopyConstruct<VkFormat>(VkFormat* pMemory, const VkFormat& src)
{
} /* size: 0 */

// <0044933F> ../public/tier0/platform.h:1518
inline RenderDescriptorBinding_t* CopyConstruct<RenderDescriptorBinding_t>(RenderDescriptorBinding_t* pMemory, const RenderDescriptorBinding_t& src)
{
} /* size: 0 */

// <004269DD> ../public/tier0/platform.h:1518
inline RenderImageLayout_t* CopyConstruct<RenderImageLayout_t>(RenderImageLayout_t* pMemory, const RenderImageLayout_t& src)
{
} /* size: 0 */

// <003969BC> ../public/tier0/platform.h:1518
inline TextureStreamingPriorityInfo_t* CopyConstruct<TextureStreamingPriorityInfo_t>(TextureStreamingPriorityInfo_t* pMemory, const TextureStreamingPriorityInfo_t& src)
{
} /* size: 0 */

// <00303D1B> ../public/tier0/platform.h:1518
inline CTextureInfoId* CopyConstruct<CTextureInfoId>(CTextureInfoId* pMemory, const CTextureInfoId& src)
{
} /* size: 0 */

// <00303C2B> ../public/tier0/platform.h:1518
inline CacheRequest_t* CopyConstruct<CTextureManagerBase::CacheRequest_t>(CacheRequest_t* pMemory, const CacheRequest_t& src)
{
} /* size: 0 */

// <00302049> ../public/tier0/platform.h:1518
inline ResourceLoadCompletedMessage_t* CopyConstruct<ResourceLoadCompletedMessage_t>(ResourceLoadCompletedMessage_t* pMemory, const ResourceLoadCompletedMessage_t& src)
{
} /* size: 0 */

// <00301FD1> ../public/tier0/platform.h:1518
inline ResourceLoadFailedMessage_t* CopyConstruct<ResourceLoadFailedMessage_t>(ResourceLoadFailedMessage_t* pMemory, const ResourceLoadFailedMessage_t& src)
{
} /* size: 0 */

// <00301E2F> ../public/tier0/platform.h:1518
inline ToCacheHandle_t* CopyConstruct<CTextureManagerBase::ToCacheHandle_t>(ToCacheHandle_t* pMemory, const ToCacheHandle_t& src)
{
} /* size: 0 */

// <001E4774> ../public/tier0/platform.h:1518
inline void ()(void)** CopyConstruct<void (*)()>(void ()(void)** pMemory, void ()(void)* const& src)
{
} /* size: 0 */

// <001E45C3> ../public/tier0/platform.h:1518
inline IRenderDeviceEventListener** CopyConstruct<IRenderDeviceEventListener*>(IRenderDeviceEventListener** pMemory, IRenderDeviceEventListener* const& src)
{
} /* size: 0 */

// <001746EC> ../public/tier0/platform.h:1518
inline PerFrameMemoryStack_t** CopyConstruct<CRenderDeviceBase::PerFrameMemoryStack_t*>(PerFrameMemoryStack_t** pMemory, PerFrameMemoryStack_t* const& src)
{
} /* size: 0 */

// <00173C6F> ../public/tier0/platform.h:1518
inline IMaxSwapChainDimensionsChangedListener** CopyConstruct<IMaxSwapChainDimensionsChangedListener*>(IMaxSwapChainDimensionsChangedListener** pMemory, IMaxSwapChainDimensionsChangedListener* const& src)
{
} /* size: 0 */

// <001704D5> ../public/tier0/platform.h:1518
inline CSwapChainBase** CopyConstruct<CSwapChainBase*>(CSwapChainBase** pMemory, CSwapChainBase* const& src)
{
} /* size: 0 */

// <000F8347> ../public/tier0/platform.h:1518
inline CDependencyDescriptor** CopyConstruct<CDependencyDescriptor*>(CDependencyDescriptor** pMemory, CDependencyDescriptor* const& src)
{
} /* size: 0 */

// <000F80C7> ../public/tier0/platform.h:1518
inline IRenderContext** CopyConstruct<IRenderContext*>(IRenderContext** pMemory, IRenderContext* const& src)
{
} /* size: 0 */

// <00086C0A> ../public/tier0/platform.h:1518
inline RBNode_t** CopyConstruct<RBNode_t*>(RBNode_t** pMemory, RBNode_t* const& src)
{
} /* size: 0 */

// <002D86B6> ../../public/tier0/platform.h:1518
inline VariableValue_t* CopyConstruct<VariableValue_t>(VariableValue_t* pMemory, const VariableValue_t& src)
{
} /* size: 0 */

// <00294BB0> ../../public/tier0/platform.h:1518
inline CVfxParsedConstantBuffer** CopyConstruct<CVfxParsedConstantBuffer*>(CVfxParsedConstantBuffer** pMemory, CVfxParsedConstantBuffer* const& src)
{
} /* size: 0 */

// <00294AC0> ../../public/tier0/platform.h:1518
inline CVfxStructDecl** CopyConstruct<CVfxStructDecl*>(CVfxStructDecl** pMemory, CVfxStructDecl* const& src)
{
} /* size: 0 */

// <0029496F> ../../public/tier0/platform.h:1518
inline VfxParsedInputSignatureElement_t** CopyConstruct<VfxParsedInputSignatureElement_t*>(VfxParsedInputSignatureElement_t** pMemory, VfxParsedInputSignatureElement_t* const& src)
{
} /* size: 0 */

// <002940DF> ../../public/tier0/platform.h:1518
inline RewriteCmd_t* CopyConstruct<CStreamRewriter::RewriteCmd_t>(RewriteCmd_t* pMemory, const RewriteCmd_t& src)
{
} /* size: 0 */

// <00292249> ../../public/tier0/platform.h:1518
inline Node_t* CopyConstruct<CUtlMap<CUtlString, CVfxParsedShaderParam*>::Node_t>(Node_t* pMemory, const Node_t& src)
{
} /* size: 0 */

// <00291F5B> ../../public/tier0/platform.h:1518
inline Node_t* CopyConstruct<CUtlMap<CUtlString, CVfxAnnotation>::Node_t>(Node_t* pMemory, const Node_t& src)
{
} /* size: 0 */

// <00230D6C> ../../public/tier0/platform.h:1518
inline CVfxParsedShaderParam** CopyConstruct<CVfxParsedShaderParam*>(CVfxParsedShaderParam** pMemory, CVfxParsedShaderParam* const& src)
{
} /* size: 0 */

// <0018C701> ../../public/tier0/platform.h:1518
inline Node_t* CopyConstruct<CUtlMap<char const*, CUtlBuffer*, int, bool (*)(char const* const&, char const* const&)>::Node_t>(Node_t* pMemory, const Node_t& src)
{
} /* size: 0 */

// <00177614> ../../public/tier0/platform.h:1518
inline VfxUniformInfo_t* CopyConstruct<VfxUniformInfo_t>(VfxUniformInfo_t* pMemory, const VfxUniformInfo_t& src)
{
} /* size: 0 */

// <00177452> ../../public/tier0/platform.h:1518
inline HiddenUAVCounterMapping_t* CopyConstruct<CVfxSpirVReflect::GetActiveUniformBlocks(CUtlVector<VfxUniformBlockInfo_t>&) const::HiddenUAVCounterMapping_t>(HiddenUAVCounterMapping_t* pMemory, const HiddenUAVCounterMapping_t& src)
{
} /* size: 0 */

// <00174EA1> ../../public/tier0/platform.h:1518
inline HiddenUAVCounterMappingDXC_t* CopyConstruct<CVfxSpirVReflect::GetActiveUniformBlocks(CUtlVector<VfxUniformBlockInfo_t>&) const::HiddenUAVCounterMappingDXC_t>(HiddenUAVCounterMappingDXC_t* pMemory, const HiddenUAVCounterMappingDXC_t& src)
{
} /* size: 0 */

// <00174DC7> ../../public/tier0/platform.h:1518
inline VfxUniformBlockInfo_t* CopyConstruct<VfxUniformBlockInfo_t>(VfxUniformBlockInfo_t* pMemory, const VfxUniformBlockInfo_t& src)
{
} /* size: 0 */

// <0012D1E4> ../../public/tier0/platform.h:1518
inline BindingNumberChange_t* CopyConstruct<CVfxSpirVReflect::BindingNumberChange_t>(BindingNumberChange_t* pMemory, const BindingNumberChange_t& src)
{
} /* size: 0 */

// <000BD7F8> ../../public/tier0/platform.h:1518
inline CVfxStructMember** CopyConstruct<CVfxStructMember*>(CVfxStructMember** pMemory, CVfxStructMember* const& src)
{
} /* size: 0 */

// <00564D8B> ../public/tier0/platform.h:1518
inline Entry_t* CopyConstruct<CUtlHashDict<void*>::Entry_t>(Entry_t* pMemory, const Entry_t& src)
{
} /* size: 0 */

// <004B4D2F> ../public/tier0/platform.h:1518
inline Node_t* CopyConstruct<CUtlMap<char const*, int, short unsigned int, bool (*)(char const* const&, char const* const&)>::Node_t>(Node_t* pMemory, const Node_t& src)
{
} /* size: 0 */

// <003FF9F6> ../public/tier0/platform.h:1518
inline NonZeroValueDescriptor_t* CopyConstruct<CSparseMatrix::NonZeroValueDescriptor_t>(NonZeroValueDescriptor_t* pMemory, const NonZeroValueDescriptor_t& src)
{
} /* size: 0 */

// <003FF87E> ../public/tier0/platform.h:1518
inline MatrixElementToCopy_t* CopyConstruct<MatrixMath::MatrixElementToCopy_t>(MatrixElementToCopy_t* pMemory, const MatrixElementToCopy_t& src)
{
} /* size: 0 */

// <003D8A37> ../public/tier0/platform.h:1518
inline CProcess** CopyConstruct<CProcess*>(CProcess** pMemory, CProcess* const& src)
{
} /* size: 0 */

// <002A93EE> ../public/tier0/platform.h:1518
inline void** CopyConstruct<void*>(void** pMemory, void* const& src)
{
} /* size: 0 */

// <0025B583> ../public/tier0/platform.h:1518
inline Node_t* CopyConstruct<CUtlMap<HKeySymbol, bool>::Node_t>(Node_t* pMemory, const Node_t& src)
{
} /* size: 0 */

// <0020241C> ../public/tier0/platform.h:1518
inline KeyValues** CopyConstruct<KeyValues*>(KeyValues** pMemory, KeyValues* const& src)
{
} /* size: 0 */

// <001CB521> ../public/tier0/platform.h:1518
inline CThreadedJob** CopyConstruct<CThreadedJob*>(CThreadedJob** pMemory, CThreadedJob* const& src)
{
} /* size: 0 */

// <001CB3B6> ../public/tier0/platform.h:1518
inline CExecMultiWorkerJob** CopyConstruct<CExecMultiWorkerJob*>(CExecMultiWorkerJob** pMemory, CExecMultiWorkerJob* const& src)
{
} /* size: 0 */

// <0012A37F> ../public/tier0/platform.h:1518
inline QueuedEvent_t* CopyConstruct<CEventQueue::QueuedEvent_t>(QueuedEvent_t* pMemory, const QueuedEvent_t& src)
{
} /* size: 0 */

// <00128516> ../public/tier0/platform.h:1518
inline SubscribedQueue_t* CopyConstruct<CEventId::SubscribedQueue_t>(SubscribedQueue_t* pMemory, const SubscribedQueue_t& src)
{
} /* size: 0 */

// <000CB8CE> ../public/tier0/platform.h:1518
inline IConVarListener** CopyConstruct<IConVarListener*>(IConVarListener** pMemory, IConVarListener* const& src)
{
} /* size: 0 */

// <000CFB30> ../public/tier0/platform.h:1518
inline CSchemaClassInfo** CopyConstruct<CSchemaClassInfo*>(CSchemaClassInfo** pMemory, CSchemaClassInfo* const& src)
{
} /* size: 0 */

// <000CFA68> ../public/tier0/platform.h:1518
inline CSchemaEnumInfo** CopyConstruct<CSchemaEnumInfo*>(CSchemaEnumInfo** pMemory, CSchemaEnumInfo* const& src)
{
} /* size: 0 */

// <000CF9A8> ../public/tier0/platform.h:1518
inline _PlatModule_t** CopyConstruct<_PlatModule_t*>(_PlatModule_t** pMemory, _PlatModule_t* const& src)
{
} /* size: 0 */

// <000C07F7> ../public/tier0/platform.h:1518
inline Node_t* CopyConstruct<CUtlMap<CSchemaType*, CSchemaType_Ptr*, short unsigned int, bool (*)(CSchemaType* const&, CSchemaType* const&)>::Node_t>(Node_t* pMemory, const Node_t& src)
{
} /* size: 0 */

// <000C02C7> ../public/tier0/platform.h:1518
inline Node_t* CopyConstruct<CUtlMap<TypeAndCountInfo_t, CSchemaType_FixedArray*, short unsigned int, bool (*)(const TypeAndCountInfo_t&, const TypeAndCountInfo_t&)>::Node_t>(Node_t* pMemory, const Node_t& src)
{
} /* size: 0 */

// <000BFD97> ../public/tier0/platform.h:1518
inline Node_t* CopyConstruct<CUtlMap<int, CSchemaType_Bitfield*, short unsigned int, bool (*)(int const&, int const&)>::Node_t>(Node_t* pMemory, const Node_t& src)
{
} /* size: 0 */

// <000BF337> ../public/tier0/platform.h:1518
inline Node_t* CopyConstruct<CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_T*, short unsigned int, bool (*)(const AtomicTypeInfo_T_t&, const AtomicTypeInfo_T_t&)>::Node_t>(Node_t* pMemory, const Node_t& src)
{
} /* size: 0 */

// <000BEE07> ../public/tier0/platform.h:1518
inline Node_t* CopyConstruct<CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT*, short unsigned int, bool (*)(const AtomicTypeInfo_T_t&, const AtomicTypeInfo_T_t&)>::Node_t>(Node_t* pMemory, const Node_t& src)
{
} /* size: 0 */

// <000BE8D7> ../public/tier0/platform.h:1518
inline Node_t* CopyConstruct<CUtlMap<AtomicTypeInfo_TT_t, CSchemaType_Atomic_TT*, short unsigned int, bool (*)(const AtomicTypeInfo_TT_t&, const AtomicTypeInfo_TT_t&)>::Node_t>(Node_t* pMemory, const Node_t& src)
{
} /* size: 0 */

// <000BE3A7> ../public/tier0/platform.h:1518
inline Node_t* CopyConstruct<CUtlMap<AtomicTypeInfo_I_t, CSchemaType_Atomic_I*, short unsigned int, bool (*)(const AtomicTypeInfo_I_t&, const AtomicTypeInfo_I_t&)>::Node_t>(Node_t* pMemory, const Node_t& src)
{
} /* size: 0 */

// <000BDE77> ../public/tier0/platform.h:1518
inline Node_t* CopyConstruct<CUtlMap<unsigned int, CSchemaType_DeclaredClass*, short unsigned int, bool (*)(unsigned int const&, unsigned int const&)>::Node_t>(Node_t* pMemory, const Node_t& src)
{
} /* size: 0 */

// <000BD9A6> ../public/tier0/platform.h:1518
inline CSchemaType** CopyConstruct<CSchemaType*>(CSchemaType** pMemory, CSchemaType* const& src)
{
} /* size: 0 */

// <000BD90A> ../public/tier0/platform.h:1518
inline CSchemaType_Ptr** CopyConstruct<CSchemaType_Ptr*>(CSchemaType_Ptr** pMemory, CSchemaType_Ptr* const& src)
{
} /* size: 0 */

// <000BD1D2> ../public/tier0/platform.h:1518
inline CSchemaType_Atomic** CopyConstruct<CSchemaType_Atomic*>(CSchemaType_Atomic** pMemory, CSchemaType_Atomic* const& src)
{
} /* size: 0 */

// <000BCB36> ../public/tier0/platform.h:1518
inline AtomicTypeInfo_T_t* CopyConstruct<AtomicTypeInfo_T_t>(AtomicTypeInfo_T_t* pMemory, const AtomicTypeInfo_T_t& src)
{
} /* size: 0 */

// <000BCA9A> ../public/tier0/platform.h:1518
inline CSchemaType_Atomic_T** CopyConstruct<CSchemaType_Atomic_T*>(CSchemaType_Atomic_T** pMemory, CSchemaType_Atomic_T* const& src)
{
} /* size: 0 */

// <000BC4C5> ../public/tier0/platform.h:1518
inline CSchemaType_Atomic_CollectionOfT** CopyConstruct<CSchemaType_Atomic_CollectionOfT*>(CSchemaType_Atomic_CollectionOfT** pMemory, CSchemaType_Atomic_CollectionOfT* const& src)
{
} /* size: 0 */

// <000BBE29> ../public/tier0/platform.h:1518
inline AtomicTypeInfo_TT_t* CopyConstruct<AtomicTypeInfo_TT_t>(AtomicTypeInfo_TT_t* pMemory, const AtomicTypeInfo_TT_t& src)
{
} /* size: 0 */

// <000BBD8D> ../public/tier0/platform.h:1518
inline CSchemaType_Atomic_TT** CopyConstruct<CSchemaType_Atomic_TT*>(CSchemaType_Atomic_TT** pMemory, CSchemaType_Atomic_TT* const& src)
{
} /* size: 0 */

// <000BB6F1> ../public/tier0/platform.h:1518
inline AtomicTypeInfo_I_t* CopyConstruct<AtomicTypeInfo_I_t>(AtomicTypeInfo_I_t* pMemory, const AtomicTypeInfo_I_t& src)
{
} /* size: 0 */

// <000BB655> ../public/tier0/platform.h:1518
inline CSchemaType_Atomic_I** CopyConstruct<CSchemaType_Atomic_I*>(CSchemaType_Atomic_I** pMemory, CSchemaType_Atomic_I* const& src)
{
} /* size: 0 */

// <000BAF4E> ../public/tier0/platform.h:1518
inline CSchemaType_DeclaredClass** CopyConstruct<CSchemaType_DeclaredClass*>(CSchemaType_DeclaredClass** pMemory, CSchemaType_DeclaredClass* const& src)
{
} /* size: 0 */

// <000BAD6B> ../public/tier0/platform.h:1518
inline CSchemaType_DeclaredEnum** CopyConstruct<CSchemaType_DeclaredEnum*>(CSchemaType_DeclaredEnum** pMemory, CSchemaType_DeclaredEnum* const& src)
{
} /* size: 0 */

// <000BA6CF> ../public/tier0/platform.h:1518
inline TypeAndCountInfo_t* CopyConstruct<TypeAndCountInfo_t>(TypeAndCountInfo_t* pMemory, const TypeAndCountInfo_t& src)
{
} /* size: 0 */

// <000BA633> ../public/tier0/platform.h:1518
inline CSchemaType_FixedArray** CopyConstruct<CSchemaType_FixedArray*>(CSchemaType_FixedArray** pMemory, CSchemaType_FixedArray* const& src)
{
} /* size: 0 */

// <000BA05E> ../public/tier0/platform.h:1518
inline CSchemaType_Bitfield** CopyConstruct<CSchemaType_Bitfield*>(CSchemaType_Bitfield** pMemory, CSchemaType_Bitfield* const& src)
{
} /* size: 0 */

// <000B95DD> ../public/tier0/platform.h:1518
inline Node_t* CopyConstruct<CUtlMap<unsigned int, CSchemaType_DeclaredEnum*, short unsigned int, bool (*)(unsigned int const&, unsigned int const&)>::Node_t>(Node_t* pMemory, const Node_t& src)
{
} /* size: 0 */

// <000B90D1> ../public/tier0/platform.h:1518
inline Node_t* CopyConstruct<CUtlMap<int, const SchemaAtomicTypeInfo_t*, short unsigned int, bool (*)(int const&, int const&)>::Node_t>(Node_t* pMemory, const Node_t& src)
{
} /* size: 0 */

// <004D2364> ../public/tier0/platform.h:1518
inline CMeshInstance** CopyConstruct<CMeshInstance*>(CMeshInstance** pMemory, CMeshInstance* const& src)
{
} /* size: 0 */

// <00405130> ../public/tier0/platform.h:1518
inline Node_t* CopyConstruct<CUtlMap<const CRenderMesh*, CMeshRayTrace*>::Node_t>(Node_t* pMemory, const Node_t& src)
{
} /* size: 0 */

// <003516B2> ../public/tier0/platform.h:1518
inline CAnimationGroupResource** CopyConstruct<CAnimationGroupResource*>(CAnimationGroupResource** pMemory, CAnimationGroupResource* const& src)
{
} /* size: 0 */

// <00350BF9> ../public/tier0/platform.h:1518
inline const CAnimationGroupResource ** CopyConstruct<const CAnimationGroupResource*>(const CAnimationGroupResource ** pMemory, const CAnimationGroupResource* const& src)
{
} /* size: 0 */

// <0034FACE> ../public/tier0/platform.h:1518
inline CBoneConstraintBase** CopyConstruct<CBoneConstraintBase*>(CBoneConstraintBase** pMemory, CBoneConstraintBase* const& src)
{
} /* size: 0 */

// <0034FA95> ../public/tier0/platform.h:1518
inline const CBoneConstraintBase ** CopyConstruct<const CBoneConstraintBase*>(const CBoneConstraintBase ** pMemory, const CBoneConstraintBase* const& src)
{
} /* size: 0 */

// <002191E4> ../public/tier0/platform.h:1518
inline SkeletonMeshVertex_t* CopyConstruct<SkeletonMeshVertex_t>(SkeletonMeshVertex_t* pMemory, const SkeletonMeshVertex_t& src)
{
} /* size: 0 */

// <0016AD3B> ../public/tier0/platform.h:1518
inline MeshData** CopyConstruct<CModelTypeManager::AsyncProcessDataResults::MeshData*>(MeshData** pMemory, MeshData* const& src)
{
} /* size: 0 */

// <00166EB3> ../public/tier0/platform.h:1518
inline CMeshInstance_Imp** CopyConstruct<CMeshInstance_Imp*>(CMeshInstance_Imp** pMemory, CMeshInstance_Imp* const& src)
{
} /* size: 0 */

// <00533D51> ../public/tier0/platform.h:1518
inline CacheEntry_t* CopyConstruct<CFontTextureCache::CacheEntry_t>(CacheEntry_t* pMemory, const CacheEntry_t& src)
{
} /* size: 0 */

// <004F8738> ../public/tier0/platform.h:1518
inline FontAliasList_t** CopyConstruct<FontAliasList_t*>(FontAliasList_t** pMemory, FontAliasList_t* const& src)
{
} /* size: 0 */

// <004F8683> ../public/tier0/platform.h:1518
inline CustomFontInfo_t* CopyConstruct<CFontManager::CustomFontInfo_t>(CustomFontInfo_t* pMemory, const CustomFontInfo_t& src)
{
} /* size: 0 */

// <004F6E2D> ../public/tier0/platform.h:1518
inline SFontDescription* CopyConstruct<SFontDescription>(SFontDescription* pMemory, const SFontDescription& src)
{
} /* size: 0 */

// <004F5AFB> ../public/tier0/platform.h:1518
inline Node_t* CopyConstruct<CUtlMap<CFontManager::CFontAttributes, CFontManager::CFontInfo, int>::Node_t>(Node_t* pMemory, const Node_t& src)
{
} /* size: 0 */

// <004F57AA> ../public/tier0/platform.h:1518
inline Node_t* CopyConstruct<CUtlMap<short unsigned int, CFontManager::CFontDataFile, int>::Node_t>(Node_t* pMemory, const Node_t& src)
{
} /* size: 0 */

// <004B1B5E> ../public/tier0/platform.h:1518
inline SFontSpan* CopyConstruct<SFontSpan>(SFontSpan* pMemory, const SFontSpan& src)
{
} /* size: 0 */

// <004321DA> ../public/tier0/platform.h:1518
inline Node_t* CopyConstruct<CUtlMap<CUtlStringToken, int>::Node_t>(Node_t* pMemory, const Node_t& src)
{
} /* size: 0 */

// <00160227> ../public/tier0/platform.h:1518
inline CMaterialParam* CopyConstruct<CMaterialParam>(CMaterialParam* pMemory, const CMaterialParam& src)
{
} /* size: 0 */

// <0015E27F> ../public/tier0/platform.h:1518
inline CommandBufferInfo_t* CopyConstruct<CMaterialLayer::CommandBufferInfo_t>(CommandBufferInfo_t* pMemory, const CommandBufferInfo_t& src)
{
} /* size: 0 */

// <00090AA6> ../public/tier0/platform.h:1518
inline ModeInfo_t* CopyConstruct<CMaterialSystem2::ModeInfo_t>(ModeInfo_t* pMemory, const ModeInfo_t& src)
{
} /* size: 0 */

// <0009044A> ../public/tier0/platform.h:1518
inline CMaterial2** CopyConstruct<CMaterial2*>(CMaterial2** pMemory, CMaterial2* const& src)
{
} /* size: 0 */

// <0008FD50> ../public/tier0/platform.h:1518
inline CWeakHandle<InfoForResourceTypeCVfx>* CopyConstruct<CWeakHandle<InfoForResourceTypeCVfx> >(CWeakHandle<InfoForResourceTypeCVfx>* pMemory, const CWeakHandle<InfoForResourceTypeCVfx>& src)
{
} /* size: 0 */

// <00049444> ../public/tier0/platform.h:1518
inline LocalizationFileInfo_t* CopyConstruct<CLocalize::LocalizationFileInfo_t>(LocalizationFileInfo_t* pMemory, const LocalizationFileInfo_t& src)
{
} /* size: 0 */

// <00047001> ../public/tier0/platform.h:1518
inline LocalizedString_t* CopyConstruct<CLocalize::LocalizedString_t>(LocalizedString_t* pMemory, const LocalizedString_t& src)
{
} /* size: 0 */

// <00046A07> ../public/tier0/platform.h:1518
inline FileChangeDir_t** CopyConstruct<CLocalize::FileChangeDir_t*>(FileChangeDir_t** pMemory, FileChangeDir_t* const& src)
{
} /* size: 0 */

// <00212405> ../public/tier0/platform.h:1518
inline FileSort_t* CopyConstruct<CPackedStore::ChangeMultipleDirectoryEntries(const CUtlVector<VPKContentFileInfo_t>&, const CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >&)::FileSort_t>(FileSort_t* pMemory, const FileSort_t& src)
{
} /* size: 0 */

// <0015E94F> ../public/tier0/platform.h:1518
inline CZipEntry* CopyConstruct<CZipFile::CZipEntry>(CZipEntry* pMemory, const CZipEntry& src)
{
} /* size: 0 */

// <0015BF80> ../public/tier0/platform.h:1518
inline CZip** CopyConstruct<CZip*>(CZip** pMemory, CZip* const& src)
{
} /* size: 0 */

// <000C92C2> ../public/tier0/platform.h:1518
inline COpenedFile* CopyConstruct<CBaseFileSystem::COpenedFile>(COpenedFile* pMemory, const COpenedFile& src)
{
} /* size: 0 */

// <000C70C0> ../public/tier0/platform.h:1518
inline sort_search_paths_t* CopyConstruct<CBaseFileSystem::PrintSearchPaths()::sort_search_paths_t>(sort_search_paths_t* pMemory, const sort_search_paths_t& src)
{
} /* size: 0 */

// <000C6BE6> ../public/tier0/platform.h:1518
inline CUtlSymbol* CopyConstruct<CUtlSymbol>(CUtlSymbol* pMemory, const CUtlSymbol& src)
{
} /* size: 0 */

// <000C5E77> ../public/tier0/platform.h:1518
inline void ()(const char *, const char *)** CopyConstruct<void (*)(char const*, char const*)>(void ()(const char *, const char *)** pMemory, void ()(const char *, const char *)* const& src)
{
} /* size: 0 */

// <000C5C3D> ../public/tier0/platform.h:1518
inline CPathIDInfo** CopyConstruct<CBaseFileSystem::CPathIDInfo*>(CPathIDInfo** pMemory, CPathIDInfo* const& src)
{
} /* size: 0 */

// <000C0CD6> ../public/tier0/platform.h:1518
inline Node_t* CopyConstruct<CUtlMap<CUtlString, CBaseFileSystem::SymLink_t>::Node_t>(Node_t* pMemory, const Node_t& src)
{
} /* size: 0 */

// <000BD298> ../public/tier0/platform.h:1518
inline Node_t* CopyConstruct<CUtlMap<char const*, FixupSearchCacheEntry, int, bool (*)(char const* const&, char const* const&)>::Node_t>(Node_t* pMemory, const Node_t& src)
{
} /* size: 0 */

// <00049D70> ../public/tier0/platform.h:1518
inline CIOServiceThread** CopyConstruct<CAsyncFileSystem2::CIOServiceThread*>(CIOServiceThread** pMemory, CIOServiceThread* const& src)
{
} /* size: 0 */

// <06F1F0F5> ../../public/tier0/platform.h:1524
inline void Destruct<CFeAgglomerator::CCluster*>(CCluster** pMemory)
{
} /* size: 0 */

// <06F1EFBE> ../../public/tier0/platform.h:1524
inline void Destruct<CFeAgglomerator::CLink>(CLink* pMemory)
{
} /* size: 0 */

// <06D4B01D> ../../public/tier0/platform.h:1524
inline void Destruct<filterstate_t>(filterstate_t* pMemory)
{
} /* size: 0 */

// <06AADCA2> ../public/tier0/platform.h:1524
inline void Destruct<CVfxByteCodeManager::DynamicComboInfo_t>(DynamicComboInfo_t* pMemory)
{
} /* size: 0 */

// <06AAD9FD> ../public/tier0/platform.h:1524
inline void Destruct<CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t*, int>::Node_t>(Node_t* pMemory)
{
} /* size: 0 */

// <06AAD2F6> ../public/tier0/platform.h:1524
inline void Destruct<CUtlMap<CVfxHashValue, int, int>::Node_t>(Node_t* pMemory)
{
} /* size: 0 */

// <06AAD026> ../public/tier0/platform.h:1524
inline void Destruct<CVfxByteCodeManager::ByteCodeInfo_t>(ByteCodeInfo_t* pMemory)
{
} /* size: 0 */

// <06A5D21A> ../public/tier0/platform.h:1524
inline void Destruct<CVfxStackMachineBuilder::Constant_t>(Constant_t* pMemory)
{
} /* size: 0 */

// <06A5D0AC> ../public/tier0/platform.h:1524
inline void Destruct<CUtlMap<CUtlString, bool>::Node_t>(Node_t* pMemory)
{
} /* size: 0 */

// <069E363C> ../public/tier0/platform.h:1524
inline void Destruct<CUtlMap<unsigned int, int, int>::Node_t>(Node_t* pMemory)
{
} /* size: 0 */

// <068ED709> ../public/tier0/platform.h:1524
inline void Destruct<CVfxMode>(CVfxMode* pMemory)
{
} /* size: 0 */

// <068EBF15> ../public/tier0/platform.h:1524
inline void Destruct<CVfxVariableIndexArray>(CVfxVariableIndexArray* pMemory)
{
} /* size: 0 */

// <068EBE97> ../public/tier0/platform.h:1524
inline void Destruct<CVfxVariableIndexRefArray>(CVfxVariableIndexRefArray* pMemory)
{
} /* size: 0 */

// <068EBE3D> ../public/tier0/platform.h:1524
inline void Destruct<ConstantBufferBindInfo_t>(ConstantBufferBindInfo_t* pMemory)
{
} /* size: 0 */

// <068EBDFC> ../public/tier0/platform.h:1524
inline void Destruct<RsRasterizerStateHandle_t__*>(RsRasterizerStateHandle_t__** pMemory)
{
} /* size: 0 */

// <068EBDA2> ../public/tier0/platform.h:1524
inline void Destruct<RsDepthStencilStateHandle_t__*>(RsDepthStencilStateHandle_t__** pMemory)
{
} /* size: 0 */

// <068EBD48> ../public/tier0/platform.h:1524
inline void Destruct<RsBlendStateHandle_t__*>(RsBlendStateHandle_t__** pMemory)
{
} /* size: 0 */

// <068EBCD5> ../public/tier0/platform.h:1524
inline void Destruct<RenderShaderHandle_t__*>(RenderShaderHandle_t__** pMemory)
{
} /* size: 0 */

// <068EB913> ../public/tier0/platform.h:1524
inline void Destruct<CUtlMap<unsigned int, CVfxStaticComboData::ComputeVariablesUsedInStaticCombo(const CVfxProgramData*)::BindInfo_t, int>::Node_t>(Node_t* pMemory)
{
} /* size: 0 */

// <068EAB58> ../public/tier0/platform.h:1524
inline void Destruct<CVfxCombo>(CVfxCombo* pMemory)
{
} /* size: 0 */

// <068EA9B2> ../public/tier0/platform.h:1524
inline void Destruct<CUtlVector<VsInputSignatureElement_t> >(CUtlVector<VsInputSignatureElement_t, CUtlMemory<VsInputSignatureElement_t, int> >* pMemory)
{
} /* size: 0 */

// <068EA958> ../public/tier0/platform.h:1524
inline void Destruct<CVfxStaticComboData>(CVfxStaticComboData* pMemory)
{
} /* size: 0 */

// <068EA899> ../public/tier0/platform.h:1524
inline void Destruct<CVfxStaticComboVcsEntry>(CVfxStaticComboVcsEntry* pMemory)
{
} /* size: 0 */

// <068E83AB> ../public/tier0/platform.h:1524
inline void Destruct<CUtlKeyValuePair<CUtlString, empty_t> >(CUtlKeyValuePair<CUtlString, empty_t>* pMemory)
{
} /* size: 0 */

// <068E7D59> ../public/tier0/platform.h:1524
inline void Destruct<CUtlMap<unsigned int, unsigned int, int>::Node_t>(Node_t* pMemory)
{
} /* size: 0 */

// <068E7CB8> ../public/tier0/platform.h:1524
inline void Destruct<CVfxModeSettings>(CVfxModeSettings* pMemory)
{
} /* size: 0 */

// <068E561B> ../public/tier0/platform.h:1524
inline void Destruct<SerializeStaticCombosWorkUnit_t>(SerializeStaticCombosWorkUnit_t* pMemory)
{
} /* size: 0 */

// <068E4DEF> ../public/tier0/platform.h:1524
inline void Destruct<CUtlMap<long long unsigned int, bool, unsigned int>::Node_t>(Node_t* pMemory)
{
} /* size: 0 */

// <068E1605> ../public/tier0/platform.h:1524
inline void Destruct<VfxStaticComboLoadRequest_t>(VfxStaticComboLoadRequest_t* pMemory)
{
} /* size: 0 */

// <0665505F> ../public/tier0/platform.h:1524
inline void Destruct<VectorAligned>(VectorAligned* pMemory)
{
} /* size: 0 */

// <064C35D3> ../public/tier0/platform.h:1524
inline void Destruct<CJointIndexData>(CJointIndexData* pMemory)
{
} /* size: 0 */

// <0645047A> ../public/tier0/platform.h:1524
inline void Destruct<const VPhysXBodyPart_t*>(const VPhysXBodyPart_t ** pMemory)
{
} /* size: 0 */

// <06310E7D> ../public/tier0/platform.h:1524
inline void Destruct<RayTracingResult_t>(RayTracingResult_t* pMemory)
{
} /* size: 0 */

// <06310C0A> ../public/tier0/platform.h:1524
inline void Destruct<RayTracingEnvironment*>(RayTracingEnvironment** pMemory)
{
} /* size: 0 */

// <06310AB2> ../public/tier0/platform.h:1524
inline void Destruct<InstancedRayTracingEnvironmentReference_t*>(InstancedRayTracingEnvironmentReference_t** pMemory)
{
} /* size: 0 */

// <0630FB5E> ../public/tier0/platform.h:1524
inline void Destruct<CacheOptimizedTriangle_t>(CacheOptimizedTriangle_t* pMemory)
{
} /* size: 0 */

// <0630FA94> ../public/tier0/platform.h:1524
inline void Destruct<CacheOptimizedKDNode_t>(CacheOptimizedKDNode_t* pMemory)
{
} /* size: 0 */

// <062E93F2> ../public/tier0/platform.h:1524
inline void Destruct<TriangleBounds_t>(TriangleBounds_t* pMemory)
{
} /* size: 0 */

// <06190C4D> ../public/tier0/platform.h:1524
inline void Destruct<RayTracingSingleResult_t>(RayTracingSingleResult_t* pMemory)
{
} /* size: 0 */

// <06190ABA> ../public/tier0/platform.h:1524
inline void Destruct<BentNormalComputationJob_t>(BentNormalComputationJob_t* pMemory)
{
} /* size: 0 */

// <0614D1B9> ../public/tier0/platform.h:1524
inline void Destruct<vertex_triangle_t>(vertex_triangle_t* pMemory)
{
} /* size: 0 */

// <0614BF9A> ../public/tier0/platform.h:1524
inline void Destruct<CVertVisit>(CVertVisit* pMemory)
{
} /* size: 0 */

// <0614BE51> ../public/tier0/platform.h:1524
inline void Destruct<edge_queue_entry_t>(edge_queue_entry_t* pMemory)
{
} /* size: 0 */

// <0614BDC5> ../public/tier0/platform.h:1524
inline void Destruct<CQuadricError>(CQuadricError* pMemory)
{
} /* size: 0 */

// <0614B20B> ../public/tier0/platform.h:1524
inline void Destruct<CQEMEdge>(CQEMEdge* pMemory)
{
} /* size: 0 */

// <06085B79> ../public/tier0/platform.h:1524
inline void Destruct<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t>(ComponentHandleWithListPointer_t* pMemory)
{
} /* size: 0 */

// <06082103> ../public/tier0/platform.h:1524
inline void Destruct<CModelMesh::VertexStreamIndex_t>(VertexStreamIndex_t* pMemory)
{
} /* size: 0 */

// <0607F98E> ../public/tier0/platform.h:1524
inline void Destruct<CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int> >(CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>* pMemory)
{
} /* size: 0 */

// <0607F579> ../public/tier0/platform.h:1524
inline void Destruct<CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int> >(CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>* pMemory)
{
} /* size: 0 */

// <0607B096> ../public/tier0/platform.h:1524
inline void Destruct<CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int> >(CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>* pMemory)
{
} /* size: 0 */

// <0607A872> ../public/tier0/platform.h:1524
inline void Destruct<CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int> >(CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>* pMemory)
{
} /* size: 0 */

// <0607A23C> ../public/tier0/platform.h:1524
inline void Destruct<CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, empty_t> >(CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, empty_t>* pMemory)
{
} /* size: 0 */

// <06079BEB> ../public/tier0/platform.h:1524
inline void Destruct<CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, empty_t> >(CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, empty_t>* pMemory)
{
} /* size: 0 */

// <06079AC9> ../public/tier0/platform.h:1524
inline void Destruct<CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, empty_t> >(CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, empty_t>* pMemory)
{
} /* size: 0 */

// <06078DD8> ../public/tier0/platform.h:1524
inline void Destruct<CUtlKeyValuePair<int, empty_t> >(CUtlKeyValuePair<int, empty_t>* pMemory)
{
} /* size: 0 */

// <06078585> ../public/tier0/platform.h:1524
inline void Destruct<TransferVertex_t>(TransferVertex_t* pMemory)
{
} /* size: 0 */

// <06077258> ../public/tier0/platform.h:1524
inline void Destruct<CModelStreamAccessor>(CModelStreamAccessor* pMemory)
{
} /* size: 0 */

// <06070F35> ../public/tier0/platform.h:1524
inline void Destruct<ModelMeshIntFloat_t>(ModelMeshIntFloat_t* pMemory)
{
} /* size: 0 */

// <05FD2B0D> ../public/tier0/platform.h:1524
inline void Destruct<CModelStream*>(CModelStream** pMemory)
{
} /* size: 0 */

// <05F749A8> ../public/tier0/platform.h:1524
inline void Destruct<CModelMesh::FaceGroup_t>(FaceGroup_t* pMemory)
{
} /* size: 0 */

// <05F7068A> ../public/tier0/platform.h:1524
inline void Destruct<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t>(ComponentHandleWithListPointer_t* pMemory)
{
} /* size: 0 */

// <05F69FC0> ../public/tier0/platform.h:1524
inline void Destruct<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t>(ComponentHandleWithListPointer_t* pMemory)
{
} /* size: 0 */

// <05F679DF> ../public/tier0/platform.h:1524
inline void Destruct<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t>(ComponentHandleWithListPointer_t* pMemory)
{
} /* size: 0 */

// <05F64EB6> ../public/tier0/platform.h:1524
inline void Destruct<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t>(ComponentEntry_t* pMemory)
{
} /* size: 0 */

// <05F64E38> ../public/tier0/platform.h:1524
inline void Destruct<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t>(ComponentReference_t* pMemory)
{
} /* size: 0 */

// <05F64BE2> ../public/tier0/platform.h:1524
inline void Destruct<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t>(ComponentEntry_t* pMemory)
{
} /* size: 0 */

// <05F64B64> ../public/tier0/platform.h:1524
inline void Destruct<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t>(ComponentReference_t* pMemory)
{
} /* size: 0 */

// <05F6496E> ../public/tier0/platform.h:1524
inline void Destruct<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t>(ComponentEntry_t* pMemory)
{
} /* size: 0 */

// <05F648F0> ../public/tier0/platform.h:1524
inline void Destruct<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t>(ComponentReference_t* pMemory)
{
} /* size: 0 */

// <05F646FA> ../public/tier0/platform.h:1524
inline void Destruct<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t>(ComponentEntry_t* pMemory)
{
} /* size: 0 */

// <05F6467C> ../public/tier0/platform.h:1524
inline void Destruct<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t>(ComponentReference_t* pMemory)
{
} /* size: 0 */

// <05F63961> ../public/tier0/platform.h:1524
inline void Destruct<CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, empty_t> >(CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, empty_t>* pMemory)
{
} /* size: 0 */

// <05F61FF1> ../public/tier0/platform.h:1524
inline void Destruct<CModelMeshDelta<CModelMesh::Vertex_t>*>(CModelMeshDelta<CModelMesh::Vertex_t>** pMemory)
{
} /* size: 0 */

// <05F61C59> ../public/tier0/platform.h:1524
inline void Destruct<CModelMeshDelta<CModelMesh::FaceVertex_t>*>(CModelMeshDelta<CModelMesh::FaceVertex_t>** pMemory)
{
} /* size: 0 */

// <05F61AD1> ../public/tier0/platform.h:1524
inline void Destruct<CModelMeshDelta<CModelMesh::Edge_t>*>(CModelMeshDelta<CModelMesh::Edge_t>** pMemory)
{
} /* size: 0 */

// <05F61949> ../public/tier0/platform.h:1524
inline void Destruct<CModelMeshDelta<CModelMesh::Face_t>*>(CModelMeshDelta<CModelMesh::Face_t>** pMemory)
{
} /* size: 0 */

// <05EE7D5B> ../public/tier0/platform.h:1524
inline void Destruct<HullIfrSourceTriangle_t>(HullIfrSourceTriangle_t* pMemory)
{
} /* size: 0 */

// <05EE3F58> ../public/tier0/platform.h:1524
inline void Destruct<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge_t>::ComponentHandleWithListPointer_t>(ComponentHandleWithListPointer_t* pMemory)
{
} /* size: 0 */

// <05EE3991> ../public/tier0/platform.h:1524
inline void Destruct<CUtlKeyValuePair<const qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t> >(CUtlKeyValuePair<const qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIF pMemory)
{
} /* size: 0 */

// <05EDE480> ../public/tier0/platform.h:1524
inline void Destruct<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Vertex_t>::ComponentEntry_t>(ComponentEntry_t* pMemory)
{
} /* size: 0 */

// <05EDE362> ../public/tier0/platform.h:1524
inline void Destruct<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge_t>::ComponentEntry_t>(ComponentEntry_t* pMemory)
{
} /* size: 0 */

// <05EDE1DC> ../public/tier0/platform.h:1524
inline void Destruct<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Face_t>::ComponentEntry_t>(ComponentEntry_t* pMemory)
{
} /* size: 0 */

// <05E5DDAA> ../public/tier0/platform.h:1524
inline void Destruct<HullIVRHole_t::Tri_t*>(Tri_t** pMemory)
{
} /* size: 0 */

// <05E5C500> ../public/tier0/platform.h:1524
inline void Destruct<CUtlKeyValuePair<qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t> >(CUtlKeyValuePair<qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex pMemory)
{
} /* size: 0 */

// <05E5C220> ../public/tier0/platform.h:1524
inline void Destruct<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t>(ComponentHandleWithListPointer_t* pMemory)
{
} /* size: 0 */

// <05E561E4> ../public/tier0/platform.h:1524
inline void Destruct<CUtlKeyValuePair<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t, Vector> >(CUtlKeyValuePair<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon pMemory)
{
} /* size: 0 */

// <05E55F81> ../public/tier0/platform.h:1524
inline void Destruct<CUtlKeyValuePair<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t, empty_t> >(CUtlKeyValuePair<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon pMemory)
{
} /* size: 0 */

// <05E55F35> ../public/tier0/platform.h:1524
inline void Destruct<CHullIVR::VertexSet_t*>(VertexSet_t** pMemory)
{
} /* size: 0 */

// <05E54F3D> ../public/tier0/platform.h:1524
inline void Destruct<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentEntry_t>(ComponentEntry_t* pMemory)
{
} /* size: 0 */

// <05E54E1F> ../public/tier0/platform.h:1524
inline void Destruct<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>::ComponentEntry_t>(ComponentEntry_t* pMemory)
{
} /* size: 0 */

// <05E54D01> ../public/tier0/platform.h:1524
inline void Destruct<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::ComponentEntry_t>(ComponentEntry_t* pMemory)
{
} /* size: 0 */

// <05E511BA> ../public/tier0/platform.h:1524
inline void Destruct<CHullIVR::StraightenAllFaces()::Face_t>(Face_t* pMemory)
{
} /* size: 0 */

// <05DE01AD> ../public/tier0/platform.h:1524
inline void Destruct<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPointer_t>(ComponentHandleWithListPointer_t* pMemory)
{
} /* size: 0 */

// <05DDD266> ../public/tier0/platform.h:1524
inline void Destruct<CUtlVectorFixedGrowable<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPointer_t, 8>*>(CUtlVectorFixedGrowable<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithLis pMemory)
{
} /* size: 0 */

// <05DD949D> ../public/tier0/platform.h:1524
inline void Destruct<qhPlane>(qhPlane* pMemory)
{
} /* size: 0 */

// <05DD85C3> ../public/tier0/platform.h:1524
inline void Destruct<CUtlKeyValuePair<const qhFace*, int> >(CUtlKeyValuePair<const qhFace*, int>* pMemory)
{
} /* size: 0 */

// <05DD7E73> ../public/tier0/platform.h:1524
inline void Destruct<const qhFace*>(const qhFace ** pMemory)
{
} /* size: 0 */

// <05DD7E0B> ../public/tier0/platform.h:1524
inline void Destruct<CDualHullAgglomerator::CClusterInfo>(CClusterInfo* pMemory)
{
} /* size: 0 */

// <05DD7058> ../public/tier0/platform.h:1524
inline void Destruct<CUtlKeyValuePair<const qhVertex*, int> >(CUtlKeyValuePair<const qhVertex*, int>* pMemory)
{
} /* size: 0 */

// <05DC7BFD> ../public/tier0/platform.h:1524
inline void Destruct<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentEntry_t>(ComponentEntry_t* pMemory)
{
} /* size: 0 */

// <05DC7ADF> ../public/tier0/platform.h:1524
inline void Destruct<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::ComponentEntry_t>(ComponentEntry_t* pMemory)
{
} /* size: 0 */

// <05DC79C1> ../public/tier0/platform.h:1524
inline void Destruct<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>::ComponentEntry_t>(ComponentEntry_t* pMemory)
{
} /* size: 0 */

// <05DBD435> ../public/tier0/platform.h:1524
inline void Destruct<CQuickHullSimplifier::Cluster_t>(Cluster_t* pMemory)
{
} /* size: 0 */

// <05CDE05F> ../public/tier0/platform.h:1524
inline void Destruct<CUtlVector<BoundaryLoopVertex_t> >(CUtlVector<BoundaryLoopVertex_t, CUtlMemory<BoundaryLoopVertex_t, int> >* pMemory)
{
} /* size: 0 */

// <05CDC682> ../public/tier0/platform.h:1524
inline void Destruct<VertexLockFlags_t>(VertexLockFlags_t* pMemory)
{
} /* size: 0 */

// <05CDC61A> ../public/tier0/platform.h:1524
inline void Destruct<VertexMatrixPosition_t>(VertexMatrixPosition_t* pMemory)
{
} /* size: 0 */

// <05CDC054> ../public/tier0/platform.h:1524
inline void Destruct<CUtlKeyValuePair<UndirectedEdge_t, int> >(CUtlKeyValuePair<UndirectedEdge_t, int>* pMemory)
{
} /* size: 0 */

// <05CDAB0D> ../public/tier0/platform.h:1524
inline void Destruct<PossibleCorner_t>(PossibleCorner_t* pMemory)
{
} /* size: 0 */

// <05CDA976> ../public/tier0/platform.h:1524
inline void Destruct<CUtlVector<unsigned int> >(CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >* pMemory)
{
} /* size: 0 */

// <05CDA32F> ../public/tier0/platform.h:1524
inline void Destruct<CUtlKeyValuePair<UndirectedEdge_t, EdgeFaceIdEntry_t> >(CUtlKeyValuePair<UndirectedEdge_t, EdgeFaceIdEntry_t>* pMemory)
{
} /* size: 0 */

// <05CD844E> ../public/tier0/platform.h:1524
inline void Destruct<BoundaryLoopVertex_t>(BoundaryLoopVertex_t* pMemory)
{
} /* size: 0 */

// <05C97958> ../public/tier0/platform.h:1524
inline void Destruct<TriangleVertexBarycentric_t>(TriangleVertexBarycentric_t* pMemory)
{
} /* size: 0 */

// <05C97874> ../public/tier0/platform.h:1524
inline void Destruct<ClippedLineSegment_t>(ClippedLineSegment_t* pMemory)
{
} /* size: 0 */

// <05C975B5> ../public/tier0/platform.h:1524
inline void Destruct<CUtlVector<Vector2D> >(CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >* pMemory)
{
} /* size: 0 */

// <05C78007> ../public/tier0/platform.h:1524
inline void Destruct<qhConvex*>(qhConvex** pMemory)
{
} /* size: 0 */

// <05C76C09> ../public/tier0/platform.h:1524
inline void Destruct<CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int> > >(CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentLis pMemory)
{
} /* size: 0 */

// <05C76A94> ../public/tier0/platform.h:1524
inline void Destruct<CUtlVector<Vector> >(CUtlVector<Vector, CUtlMemory<Vector, int> >* pMemory)
{
} /* size: 0 */

// <05C1F6A1> ../public/tier0/platform.h:1524
inline void Destruct<CMeshEdgeSplitter::HalfEdgeWithLength_t>(HalfEdgeWithLength_t* pMemory)
{
} /* size: 0 */

// <05BB0E76> ../public/tier0/platform.h:1524
inline void Destruct<CDisjointSetForest::Node_t>(Node_t* pMemory)
{
} /* size: 0 */

// <05BAE5F9> ../public/tier0/platform.h:1524
inline void Destruct<CMesh>(CMesh* pMemory)
{
} /* size: 0 */

// <05BACA85> ../public/tier0/platform.h:1524
inline void Destruct<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t>(Node_t* pMemory)
{
} /* size: 0 */

// <05BAC02D> ../public/tier0/platform.h:1524
inline void Destruct<MaterialParamInt_t>(MaterialParamInt_t* pMemory)
{
} /* size: 0 */

// <05BABF3E> ../public/tier0/platform.h:1524
inline void Destruct<MaterialParamFloat_t>(MaterialParamFloat_t* pMemory)
{
} /* size: 0 */

// <05BABE4F> ../public/tier0/platform.h:1524
inline void Destruct<MaterialParamVector_t>(MaterialParamVector_t* pMemory)
{
} /* size: 0 */

// <05BABD60> ../public/tier0/platform.h:1524
inline void Destruct<MaterialParamTexture_t>(MaterialParamTexture_t* pMemory)
{
} /* size: 0 */

// <05BABC71> ../public/tier0/platform.h:1524
inline void Destruct<MaterialParamString_t>(MaterialParamString_t* pMemory)
{
} /* size: 0 */

// <05B2A3BB> ../public/tier0/platform.h:1524
inline void Destruct<GLViewLine_t>(GLViewLine_t* pMemory)
{
} /* size: 0 */

// <05B299C5> ../public/tier0/platform.h:1524
inline void Destruct<CGeoViewVertex>(CGeoViewVertex* pMemory)
{
} /* size: 0 */

// <05A9E021> ../public/tier0/platform.h:1524
inline void Destruct<CPackNode>(CPackNode* pMemory)
{
} /* size: 0 */

// <057164FF> ../public/tier0/platform.h:1524
inline void Destruct<const KeyValues3*>(const KeyValues3 ** pMemory)
{
} /* size: 0 */

// <056BDAA3> ../public/tier0/platform.h:1524
inline void Destruct<CKV3MemberName>(CKV3MemberName* pMemory)
{
} /* size: 0 */

// <0568C4F3> ../public/tier0/platform.h:1524
inline void Destruct<std::pair<void const*, unsigned int> >(pair<void const*, unsigned int>* pMemory)
{
} /* size: 0 */

// <056670BB> ../public/tier0/platform.h:1524
inline void Destruct<std::pair<unsigned char*, unsigned int> >(pair<unsigned char*, unsigned int>* pMemory)
{
} /* size: 0 */

// <055BDCEC> ../public/tier0/platform.h:1524
inline void Destruct<CUtlTokenReference>(CUtlTokenReference* pMemory)
{
} /* size: 0 */

// <055BDBC0> ../public/tier0/platform.h:1524
inline void Destruct<TokenWarning_t>(TokenWarning_t* pMemory)
{
} /* size: 0 */

// <055BDAF5> ../public/tier0/platform.h:1524
inline void Destruct<CLoadKV3FromDynData::LoadedObject_t>(LoadedObject_t* pMemory)
{
} /* size: 0 */

// <055BDA2A> ../public/tier0/platform.h:1524
inline void Destruct<CLoadKV3FromDynData::UnresolvedElementReference_t>(UnresolvedElementReference_t* pMemory)
{
} /* size: 0 */

// <0554D194> ../public/tier0/platform.h:1524
inline void Destruct<CKeyValues3ContextImpl>(CKeyValues3ContextImpl* pMemory)
{
} /* size: 0 */

// <0554C372> ../public/tier0/platform.h:1524
inline void Destruct<CKeyValues3Iterator::StackEntry_t>(StackEntry_t* pMemory)
{
} /* size: 0 */

// <0554B9CE> ../public/tier0/platform.h:1524
inline void Destruct<CUtlKeyValuePair<CUtlStringToken, int> >(CUtlKeyValuePair<CUtlStringToken, int>* pMemory)
{
} /* size: 0 */

// <055491F8> ../public/tier0/platform.h:1524
inline void Destruct<KeyValues3>(KeyValues3* pMemory)
{
} /* size: 0 */

// <05549168> ../public/tier0/platform.h:1524
inline void Destruct<CKeyValues3Array>(CKeyValues3Array* pMemory)
{
} /* size: 0 */

// <055490D8> ../public/tier0/platform.h:1524
inline void Destruct<CKeyValues3Table>(CKeyValues3Table* pMemory)
{
} /* size: 0 */

// <05548D81> ../public/tier0/platform.h:1524
inline void Destruct<CKeyValues3Cluster*>(CKeyValues3Cluster** pMemory)
{
} /* size: 0 */

// <05548BF0> ../public/tier0/platform.h:1524
inline void Destruct<CKeyValues3ArrayCluster*>(CKeyValues3ArrayCluster** pMemory)
{
} /* size: 0 */

// <05548A5F> ../public/tier0/platform.h:1524
inline void Destruct<CKeyValues3TableCluster*>(CKeyValues3TableCluster** pMemory)
{
} /* size: 0 */

// <053EA295> ../public/tier0/platform.h:1524
inline void Destruct<QuaternionAligned>(QuaternionAligned* pMemory)
{
} /* size: 0 */

// <05011393> ../public/tier0/platform.h:1524
inline void Destruct<CBaseConstraint*>(CBaseConstraint** pMemory)
{
} /* size: 0 */

// <0500F9E1> ../public/tier0/platform.h:1524
inline void Destruct<VPhysXBodyPart_t>(VPhysXBodyPart_t* pMemory)
{
} /* size: 0 */

// <0500F963> ../public/tier0/platform.h:1524
inline void Destruct<VPhysXConstraint2_t>(VPhysXConstraint2_t* pMemory)
{
} /* size: 0 */

// <0500F867> ../public/tier0/platform.h:1524
inline void Destruct<VPhysXCollisionAttributes_t>(VPhysXCollisionAttributes_t* pMemory)
{
} /* size: 0 */

// <0500EC9B> ../public/tier0/platform.h:1524
inline void Destruct<CFootTrajectory>(CFootTrajectory* pMemory)
{
} /* size: 0 */

// <0500BD31> ../public/tier0/platform.h:1524
inline void Destruct<RnSphereDesc_t>(RnSphereDesc_t* pMemory)
{
} /* size: 0 */

// <0500BC5A> ../public/tier0/platform.h:1524
inline void Destruct<RnCapsuleDesc_t>(RnCapsuleDesc_t* pMemory)
{
} /* size: 0 */

// <0500B0CD> ../public/tier0/platform.h:1524
inline void Destruct<RnHullDesc_t>(RnHullDesc_t* pMemory)
{
} /* size: 0 */

// <0500A574> ../public/tier0/platform.h:1524
inline void Destruct<RnMeshDesc_t>(RnMeshDesc_t* pMemory)
{
} /* size: 0 */

// <04FAF75B> ../public/tier0/platform.h:1524
inline void Destruct<CFingerChain>(CFingerChain* pMemory)
{
} /* size: 0 */

// <04FAF5D7> ../public/tier0/platform.h:1524
inline void Destruct<CWristBone>(CWristBone* pMemory)
{
} /* size: 0 */

// <04FAF453> ../public/tier0/platform.h:1524
inline void Destruct<CFingerBone>(CFingerBone* pMemory)
{
} /* size: 0 */

// <04FAF2CF> ../public/tier0/platform.h:1524
inline void Destruct<CFingerSource>(CFingerSource* pMemory)
{
} /* size: 0 */

// <04FAEDA6> ../public/tier0/platform.h:1524
inline void Destruct<CFlexRule>(CFlexRule* pMemory)
{
} /* size: 0 */

// <04FAEC22> ../public/tier0/platform.h:1524
inline void Destruct<CFlexController>(CFlexController* pMemory)
{
} /* size: 0 */

// <04FAEA9E> ../public/tier0/platform.h:1524
inline void Destruct<CFlexDesc>(CFlexDesc* pMemory)
{
} /* size: 0 */

// <04FAE857> ../public/tier0/platform.h:1524
inline void Destruct<CMorphData>(CMorphData* pMemory)
{
} /* size: 0 */

// <04FAE6FF> ../public/tier0/platform.h:1524
inline void Destruct<MorphBundleType_t>(MorphBundleType_t* pMemory)
{
} /* size: 0 */

// <04FAE4B8> ../public/tier0/platform.h:1524
inline void Destruct<CMorphRectData>(CMorphRectData* pMemory)
{
} /* size: 0 */

// <04FAE30E> ../public/tier0/platform.h:1524
inline void Destruct<CMorphBundleData>(CMorphBundleData* pMemory)
{
} /* size: 0 */

// <04FAE1B6> ../public/tier0/platform.h:1524
inline void Destruct<CFlexOp>(CFlexOp* pMemory)
{
} /* size: 0 */

// <04FADF6F> ../public/tier0/platform.h:1524
inline void Destruct<CBoneConstraintPoseSpaceBone::Input_t>(Input_t* pMemory)
{
} /* size: 0 */

// <04FADDEB> ../public/tier0/platform.h:1524
inline void Destruct<CBoneConstraintPoseSpaceMorph::Input_t>(Input_t* pMemory)
{
} /* size: 0 */

// <04FADC67> ../public/tier0/platform.h:1524
inline void Destruct<CConstraintTarget>(CConstraintTarget* pMemory)
{
} /* size: 0 */

// <04FADAE3> ../public/tier0/platform.h:1524
inline void Destruct<CConstraintSlave>(CConstraintSlave* pMemory)
{
} /* size: 0 */

// <04FAD6A9> ../public/tier0/platform.h:1524
inline void Destruct<CHitBoxSet>(CHitBoxSet* pMemory)
{
} /* size: 0 */

// <04FAB1C8> ../public/tier0/platform.h:1524
inline void Destruct<RnSoftbodyCapsule_t>(RnSoftbodyCapsule_t* pMemory)
{
} /* size: 0 */

// <04FAB070> ../public/tier0/platform.h:1524
inline void Destruct<RnSoftbodySpring_t>(RnSoftbodySpring_t* pMemory)
{
} /* size: 0 */

// <04FAAF18> ../public/tier0/platform.h:1524
inline void Destruct<RnSoftbodyParticle_t>(RnSoftbodyParticle_t* pMemory)
{
} /* size: 0 */

// <04E81B8F> ../public/tier0/platform.h:1524
inline void Destruct<const CFlexRule*>(const CFlexRule ** pMemory)
{
} /* size: 0 */

// <04E80C01> ../public/tier0/platform.h:1524
inline void Destruct<FlexControllerMapping_t>(FlexControllerMapping_t* pMemory)
{
} /* size: 0 */

// <04E80B9B> ../public/tier0/platform.h:1524
inline void Destruct<FlexDescMapping_t>(FlexDescMapping_t* pMemory)
{
} /* size: 0 */

// <04E803A0> ../public/tier0/platform.h:1524
inline void Destruct<CUtlVector<CUtlHashDict<const CMorphData*, false, false>::Entry_t, CUtlMemory<CUtlHashDict<const CMorphData*, false, false>::Entry_t, int> > >(CUtlVector<CUtlHashDict<const CMorphData*, false, false>::Entry_t, CUtlMemory<CUtlHashDict<const CMorphData*, false, fals pMemory)
{
} /* size: 0 */

// <04E80338> ../public/tier0/platform.h:1524
inline void Destruct<CUtlHashDict<const CMorphData*, false, false>::Entry_t>(Entry_t* pMemory)
{
} /* size: 0 */

// <04E37BD7> ../public/tier0/platform.h:1524
inline void Destruct<CAnimationGroupResource*>(CAnimationGroupResource** pMemory)
{
} /* size: 0 */

// <04DBA06D> ../public/tier0/platform.h:1524
inline void Destruct<CMoveSpeed>(CMoveSpeed* pMemory)
{
} /* size: 0 */

// <04D6CAD4> ../public/tier0/platform.h:1524
inline void Destruct<CActivityModifierWeight>(CActivityModifierWeight* pMemory)
{
} /* size: 0 */

// <04CB909B> ../public/tier0/platform.h:1524
inline void Destruct<TraceDataForDraw_t>(TraceDataForDraw_t* pMemory)
{
} /* size: 0 */

// <04CB6FCD> ../public/tier0/platform.h:1524
inline void Destruct<RenderSkeletonBone_t>(RenderSkeletonBone_t* pMemory)
{
} /* size: 0 */

// <04CB69D2> ../public/tier0/platform.h:1524
inline void Destruct<BLASTriangleDesc_t>(BLASTriangleDesc_t* pMemory)
{
} /* size: 0 */

// <04CB687F> ../public/tier0/platform.h:1524
inline void Destruct<BLASTriangleData_t>(BLASTriangleData_t* pMemory)
{
} /* size: 0 */

// <04CB4B18> ../public/tier0/platform.h:1524
inline void Destruct<CUtlKeyValuePair<long long unsigned int, empty_t> >(CUtlKeyValuePair<long long unsigned int, empty_t>* pMemory)
{
} /* size: 0 */

// <04CB4769> ../public/tier0/platform.h:1524
inline void Destruct<TraceVertex_t>(TraceVertex_t* pMemory)
{
} /* size: 0 */

// <04CB459C> ../public/tier0/platform.h:1524
inline void Destruct<RuntimeBuffersInfo_t::BufferInfo_t>(BufferInfo_t* pMemory)
{
} /* size: 0 */

// <04CB4359> ../public/tier0/platform.h:1524
inline void Destruct<CSceneObjectData>(CSceneObjectData* pMemory)
{
} /* size: 0 */

// <04CB1FC5> ../public/tier0/platform.h:1524
inline void Destruct<CMaterialDrawDescriptor>(CMaterialDrawDescriptor* pMemory)
{
} /* size: 0 */

// <04CB1F2D> ../public/tier0/platform.h:1524
inline void Destruct<CDrawCullingData>(CDrawCullingData* pMemory)
{
} /* size: 0 */

// <04CB19D4> ../public/tier0/platform.h:1524
inline void Destruct<CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::Node_t>(Node_t* pMemory)
{
} /* size: 0 */

// <04CB1633> ../public/tier0/platform.h:1524
inline void Destruct<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t>(Node_t* pMemory)
{
} /* size: 0 */

// <04C39844> ../public/tier0/platform.h:1524
inline void Destruct<AttachmentHandle_t>(AttachmentHandle_t* pMemory)
{
} /* size: 0 */

// <04BAD554> ../public/tier0/platform.h:1524
inline void Destruct<CModelSkeleton::BoneFlags_t>(BoneFlags_t* pMemory)
{
} /* size: 0 */

// <04BA6D89> ../public/tier0/platform.h:1524
inline void Destruct<CUtlMap<RetargetKey_t, int>::Node_t>(Node_t* pMemory)
{
} /* size: 0 */

// <04AACEBE> ../public/tier0/platform.h:1524
inline void Destruct<CUtlKeyValuePair<short unsigned int, unsigned int> >(CUtlKeyValuePair<short unsigned int, unsigned int>* pMemory)
{
} /* size: 0 */

// <04AAA6F5> ../public/tier0/platform.h:1524
inline void Destruct<CUtlKeyValuePair<ResourceId_t, int> >(CUtlKeyValuePair<ResourceId_t, int>* pMemory)
{
} /* size: 0 */

// <04AAA0AF> ../public/tier0/platform.h:1524
inline void Destruct<CUtlKeyValuePair<CUtlString, int> >(CUtlKeyValuePair<CUtlString, int>* pMemory)
{
} /* size: 0 */

// <04AA96AE> ../public/tier0/platform.h:1524
inline void Destruct<const CAttachment*>(const CAttachment ** pMemory)
{
} /* size: 0 */

// <04AA9015> ../public/tier0/platform.h:1524
inline void Destruct<CFootDefinition>(CFootDefinition* pMemory)
{
} /* size: 0 */

// <04AA8E7B> ../public/tier0/platform.h:1524
inline void Destruct<CLookAtChain>(CLookAtChain* pMemory)
{
} /* size: 0 */

// <04AA7694> ../public/tier0/platform.h:1524
inline void Destruct<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueType, int> > >(CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueType, int> >* pMemory)
{
} /* size: 0 */

// <04AA7648> ../public/tier0/platform.h:1524
inline void Destruct<CActivityToSequenceMapping::HashValueType>(HashValueType* pMemory)
{
} /* size: 0 */

// <04AA6EFA> ../public/tier0/platform.h:1524
inline void Destruct<CModelMaterialGroup>(CModelMaterialGroup* pMemory)
{
} /* size: 0 */

// <04AA6DBD> ../public/tier0/platform.h:1524
inline void Destruct<CBoneFlexDriver>(CBoneFlexDriver* pMemory)
{
} /* size: 0 */

// <04AA6CB4> ../public/tier0/platform.h:1524
inline void Destruct<CModel::BodyPart_t>(BodyPart_t* pMemory)
{
} /* size: 0 */

// <04AA6960> ../public/tier0/platform.h:1524
inline void Destruct<StateDrivenMorph_t>(StateDrivenMorph_t* pMemory)
{
} /* size: 0 */

// <04AA6866> ../public/tier0/platform.h:1524
inline void Destruct<CUtlHashtable<int, float> >(CUtlHashtable<int, float, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<i pMemory)
{
} /* size: 0 */

// <04AA4400> ../public/tier0/platform.h:1524
inline void Destruct<CUtlKeyValuePair<int, float> >(CUtlKeyValuePair<int, float>* pMemory)
{
} /* size: 0 */

// <04AA42C6> ../public/tier0/platform.h:1524
inline void Destruct<CLookAtChainItem>(CLookAtChainItem* pMemory)
{
} /* size: 0 */

// <04AA4065> ../public/tier0/platform.h:1524
inline void Destruct<CBoneFlexDriverControl>(CBoneFlexDriverControl* pMemory)
{
} /* size: 0 */

// <04638BCB> ../public/tier0/platform.h:1524
inline void Destruct<CAppSystemDict::AppSystem_t>(AppSystem_t* pMemory)
{
} /* size: 0 */

// <04638038> ../public/tier0/platform.h:1524
inline void Destruct<CAppSystemDict::ModuleInfo_t>(ModuleInfo_t* pMemory)
{
} /* size: 0 */

// <04637853> ../public/tier0/platform.h:1524
inline void Destruct<void* (*)(char const*, int*)>(void* ()(const char *, int *)** pMemory)
{
} /* size: 0 */

// <0463712B> ../public/tier0/platform.h:1524
inline void Destruct<CAppSystemDict::InterfaceInfo_t>(InterfaceInfo_t* pMemory)
{
} /* size: 0 */

// <044AA3E3> ../public/tier0/platform.h:1524
inline void Destruct<FourVectors>(FourVectors* pMemory)
{
} /* size: 0 */

// <04498EC1> ../public/tier0/platform.h:1524
inline void Destruct<HeightmapSampleLocation_t>(HeightmapSampleLocation_t* pMemory)
{
} /* size: 0 */

// <04457270> ../public/tier0/platform.h:1524
inline void Destruct<CStackAnnotation_SimpleString>(CStackAnnotation_SimpleString* pMemory)
{
} /* size: 0 */

// <044380A4> ../public/tier0/platform.h:1524
inline void Destruct<void (*)(IConVar*, char const*, float)>(void ()(IConVar *, const char *, float)** pMemory)
{
} /* size: 0 */

// <04437F6F> ../public/tier0/platform.h:1524
inline void Destruct<ConCommand::CallbackInfo_t>(CallbackInfo_t* pMemory)
{
} /* size: 0 */

// <04380738> ../public/tier0/platform.h:1524
inline void Destruct<AnimationDecodeDebugDumpElement_t>(AnimationDecodeDebugDumpElement_t* pMemory)
{
} /* size: 0 */

// <0423609F> ../public/tier0/platform.h:1524
inline void Destruct<RenderInputLayoutField_t>(RenderInputLayoutField_t* pMemory)
{
} /* size: 0 */

// <04142621> ../public/tier0/platform.h:1524
inline void Destruct<CInterpolationTimeContext>(CInterpolationTimeContext* pMemory)
{
} /* size: 0 */

// <04141540> ../public/tier0/platform.h:1524
inline void Destruct<IWrappedInterpolatedVar::CWrappedIVHashElement_t>(CWrappedIVHashElement_t* pMemory)
{
} /* size: 0 */

// <041406B0> ../public/tier0/platform.h:1524
inline void Destruct<CUtlVector<IWrappedInterpolatedVar::CWrappedIVHashElement_t, CUtlMemory<IWrappedInterpolatedVar::CWrappedIVHashElement_t, int> > >(CUtlVector<IWrappedInterpolatedVar::CWrappedIVHashElement_t, CUtlMemory<IWrappedInterpolatedVar::CWrappedIVHashElement_t, pMemory)
{
} /* size: 0 */

// <03E79E4C> ../public/tier0/platform.h:1524
inline void Destruct<CachedSlotAndExtraData_t>(CachedSlotAndExtraData_t* pMemory)
{
} /* size: 0 */

// <03E777F6> ../public/tier0/platform.h:1524
inline void Destruct<std::unique_ptr<CAnimationResource> >(unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >* pMemory)
{
} /* size: 0 */

// <03E7772E> ../public/tier0/platform.h:1524
inline void Destruct<CStrongHandle<InfoForResourceTypeCAnimData> >(CStrongHandle<InfoForResourceTypeCAnimData>* pMemory)
{
} /* size: 0 */

// <03E775B5> ../public/tier0/platform.h:1524
inline void Destruct<CAnimBone>(CAnimBone* pMemory)
{
} /* size: 0 */

// <03E7743C> ../public/tier0/platform.h:1524
inline void Destruct<CBufferString>(CBufferString* pMemory)
{
} /* size: 0 */

// <03E77366> ../public/tier0/platform.h:1524
inline void Destruct<CAnimDataChannelDesc>(CAnimDataChannelDesc* pMemory)
{
} /* size: 0 */

// <03E77290> ../public/tier0/platform.h:1524
inline void Destruct<CAnimRetargetElementData>(CAnimRetargetElementData* pMemory)
{
} /* size: 0 */

// <03E771BA> ../public/tier0/platform.h:1524
inline void Destruct<CAnimRetargetChainData>(CAnimRetargetChainData* pMemory)
{
} /* size: 0 */

// <03D92506> ../public/tier0/platform.h:1524
inline void Destruct<CAggregateSceneObject::MeshFragment_t>(MeshFragment_t* pMemory)
{
} /* size: 0 */

// <03D91FDF> ../public/tier0/platform.h:1524
inline void Destruct<CAggregateSceneObject*>(CAggregateSceneObject** pMemory)
{
} /* size: 0 */

// <03D90772> ../public/tier0/platform.h:1524
inline void Destruct<PerFragmentData_t>(PerFragmentData_t* pMemory)
{
} /* size: 0 */

// <03B88F5F> ../public/tier0/platform.h:1524
inline void Destruct<CMDLAttachmentData>(CMDLAttachmentData* pMemory)
{
} /* size: 0 */

// <03AE23F3> ../public/tier0/platform.h:1524
inline void Destruct<CSceneUtils::RenderingPipelineInfo_t>(RenderingPipelineInfo_t* pMemory)
{
} /* size: 0 */

// <039D4355> ../public/tier0/platform.h:1524
inline void Destruct<CVolumetricFog::FogVolume_t>(FogVolume_t* pMemory)
{
} /* size: 0 */

// <039282BE> ../public/tier0/platform.h:1524
inline void Destruct<VertexUVPosColorNormalAndTangent_t>(VertexUVPosColorNormalAndTangent_t* pMemory)
{
} /* size: 0 */

// <038988E7> ../public/tier0/platform.h:1524
inline void Destruct<CViewIdInternal>(CViewIdInternal* pMemory)
{
} /* size: 0 */

// <0389607A> ../public/tier0/platform.h:1524
inline void Destruct<CUtlHashFast<CViewIdInternal>::HashFastData_t_<CViewIdInternal> >(HashFastData_t_<CViewIdInternal>* pMemory)
{
} /* size: 0 */

// <03879C99> ../public/tier0/platform.h:1524
inline void Destruct<CTimestampManager::TimestampSceneViewData_t>(TimestampSceneViewData_t* pMemory)
{
} /* size: 0 */

// <036A70DE> ../public/tier0/platform.h:1524
inline void Destruct<TLASInstance_t>(TLASInstance_t* pMemory)
{
} /* size: 0 */

// <03532AF4> ../public/tier0/platform.h:1524
inline void Destruct<CSceneObject*>(CSceneObject** pMemory)
{
} /* size: 0 */

// <03532559> ../public/tier0/platform.h:1524
inline void Destruct<CSceneWorldObjectListChunk*>(CSceneWorldObjectListChunk** pMemory)
{
} /* size: 0 */

// <0352F1BD> ../public/tier0/platform.h:1524
inline void Destruct<ChildSceneObjectReference_t>(ChildSceneObjectReference_t* pMemory)
{
} /* size: 0 */

// <0352BAA7> ../public/tier0/platform.h:1524
inline void Destruct<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >(CStrongHandleCopyable<InfoForResourceTypeIMaterial2>* pMemory)
{
} /* size: 0 */

// <03464953> ../public/tier0/platform.h:1524
inline void Destruct<RenderSubPassAttachment_t>(RenderSubPassAttachment_t* pMemory)
{
} /* size: 0 */

// <03462571> ../public/tier0/platform.h:1524
inline void Destruct<RenderPassAttachmentDesc_t>(RenderPassAttachmentDesc_t* pMemory)
{
} /* size: 0 */

// <03462516> ../public/tier0/platform.h:1524
inline void Destruct<RenderPassSubPass_t>(RenderPassSubPass_t* pMemory)
{
} /* size: 0 */

// <034609B9> ../public/tier0/platform.h:1524
inline void Destruct<ISceneLayer::InputTexture_t>(InputTexture_t* pMemory)
{
} /* size: 0 */

// <034608E4> ../public/tier0/platform.h:1524
inline void Destruct<ISceneLayer::InputSceneViewRenderTarget_t>(InputSceneViewRenderTarget_t* pMemory)
{
} /* size: 0 */

// <0345E665> ../public/tier0/platform.h:1524
inline void Destruct<ISceneLayer::RenderTargetAttribute_t>(RenderTargetAttribute_t* pMemory)
{
} /* size: 0 */

// <033AADCA> ../public/tier0/platform.h:1524
inline void Destruct<short unsigned int>(short unsigned int* pMemory)
{
} /* size: 0 */

// <03220A86> ../public/tier0/platform.h:1524
inline void Destruct<CSceneLayer*>(CSceneLayer** pMemory)
{
} /* size: 0 */

// <0321E415> ../public/tier0/platform.h:1524
inline void Destruct<CScratchRenderTargetSystem::RenderTargetInfo_t>(RenderTargetInfo_t* pMemory)
{
} /* size: 0 */

// <0321E1AE> ../public/tier0/platform.h:1524
inline void Destruct<CPVSBits>(CPVSBits* pMemory)
{
} /* size: 0 */

// <031228C6> ../public/tier0/platform.h:1524
inline void Destruct<DebugSceneObject_t>(DebugSceneObject_t* pMemory)
{
} /* size: 0 */

// <03120E94> ../public/tier0/platform.h:1524
inline void Destruct<DebugTextBase_t>(DebugTextBase_t* pMemory)
{
} /* size: 0 */

// <0311EC89> ../public/tier0/platform.h:1524
inline void Destruct<DebugLineSegment3D_t>(DebugLineSegment3D_t* pMemory)
{
} /* size: 0 */

// <0311EC3D> ../public/tier0/platform.h:1524
inline void Destruct<DebugLineSegment2D_t>(DebugLineSegment2D_t* pMemory)
{
} /* size: 0 */

// <0311EC15> ../public/tier0/platform.h:1524
inline void Destruct<DebugTriangle3D_t>(DebugTriangle3D_t* pMemory)
{
} /* size: 0 */

// <0311EB26> ../public/tier0/platform.h:1524
inline void Destruct<DebugTextureDisplay_t>(DebugTextureDisplay_t* pMemory)
{
} /* size: 0 */

// <0311EA48> ../public/tier0/platform.h:1524
inline void Destruct<Debug3DText_t>(Debug3DText_t* pMemory)
{
} /* size: 0 */

// <0311EA20> ../public/tier0/platform.h:1524
inline void Destruct<DebugCircle3D_t>(DebugCircle3D_t* pMemory)
{
} /* size: 0 */

// <0311E9F8> ../public/tier0/platform.h:1524
inline void Destruct<DebugCross3D_t>(DebugCross3D_t* pMemory)
{
} /* size: 0 */

// <0311E9D0> ../public/tier0/platform.h:1524
inline void Destruct<DebugTickMarkedLine3D_t>(DebugTickMarkedLine3D_t* pMemory)
{
} /* size: 0 */

// <0311E984> ../public/tier0/platform.h:1524
inline void Destruct<DebugSphere_t>(DebugSphere_t* pMemory)
{
} /* size: 0 */

// <0305CDFC> ../public/tier0/platform.h:1524
inline void Destruct<ISceneLightListener*>(ISceneLightListener** pMemory)
{
} /* size: 0 */

// <0305CD33> ../public/tier0/platform.h:1524
inline void Destruct<CSceneLightObjectInternal*>(CSceneLightObjectInternal** pMemory)
{
} /* size: 0 */

// <0305CC75> ../public/tier0/platform.h:1524
inline void Destruct<ISceneEnvironmentMapListener*>(ISceneEnvironmentMapListener** pMemory)
{
} /* size: 0 */

// <0305CB77> ../public/tier0/platform.h:1524
inline void Destruct<ISceneLightProbeVolumeListener*>(ISceneLightProbeVolumeListener** pMemory)
{
} /* size: 0 */

// <0305CA6E> ../public/tier0/platform.h:1524
inline void Destruct<CEnvMapSceneObject*>(CEnvMapSceneObject** pMemory)
{
} /* size: 0 */

// <0305C870> ../public/tier0/platform.h:1524
inline void Destruct<CSceneLightProbeVolumeObject*>(CSceneLightProbeVolumeObject** pMemory)
{
} /* size: 0 */

// <02E98DBB> ../public/tier0/platform.h:1524
inline void Destruct<CSceneSystem::ScratchRenderTarget_t>(ScratchRenderTarget_t* pMemory)
{
} /* size: 0 */

// <02E98CA3> ../public/tier0/platform.h:1524
inline void Destruct<CUtlKeyValuePair<unsigned int, CSceneSystem::FrameBufferScratchTexInfo_t> >(CUtlKeyValuePair<unsigned int, CSceneSystem::FrameBufferScratchTexInfo_t>* pMemory)
{
} /* size: 0 */

// <02E986E6> ../public/tier0/platform.h:1524
inline void Destruct<SceneObjectCullingBox_t>(SceneObjectCullingBox_t* pMemory)
{
} /* size: 0 */

// <02E985C1> ../public/tier0/platform.h:1524
inline void Destruct<SceneVolumetricFogVolume_t>(SceneVolumetricFogVolume_t* pMemory)
{
} /* size: 0 */

// <02E9650D> ../public/tier0/platform.h:1524
inline void Destruct<CRenderBatchList>(CRenderBatchList* pMemory)
{
} /* size: 0 */

// <02E9647B> ../public/tier0/platform.h:1524
inline void Destruct<CSceneLayer>(CSceneLayer* pMemory)
{
} /* size: 0 */

// <02E94F2F> ../public/tier0/platform.h:1524
inline void Destruct<SkippedLayerInRenderPass_t>(SkippedLayerInRenderPass_t* pMemory)
{
} /* size: 0 */

// <02E8D3F4> ../public/tier0/platform.h:1524
inline void Destruct<CUtlKeyValuePair<const IMaterial2*, empty_t> >(CUtlKeyValuePair<const IMaterial2*, empty_t>* pMemory)
{
} /* size: 0 */

// <02E8B08C> ../public/tier0/platform.h:1524
inline void Destruct<ISceneWorld*>(ISceneWorld** pMemory)
{
} /* size: 0 */

// <02E8AFDC> ../public/tier0/platform.h:1524
inline void Destruct<ISceneSystemListener*>(ISceneSystemListener** pMemory)
{
} /* size: 0 */

// <02E25460> ../public/tier0/platform.h:1524
inline void Destruct<CRenderBatchList*>(CRenderBatchList** pMemory)
{
} /* size: 0 */

// <02E246D5> ../public/tier0/platform.h:1524
inline void Destruct<ISceneLayer*>(ISceneLayer** pMemory)
{
} /* size: 0 */

// <02E2446F> ../public/tier0/platform.h:1524
inline void Destruct<DisplayListToSubmit_t>(DisplayListToSubmit_t* pMemory)
{
} /* size: 0 */

// <02E22C11> ../public/tier0/platform.h:1524
inline void Destruct<LightDesc_t>(LightDesc_t* pMemory)
{
} /* size: 0 */

// <02E22A02> ../public/tier0/platform.h:1524
inline void Destruct<InstancedRayTracingEnvironmentBVHNode_t>(InstancedRayTracingEnvironmentBVHNode_t* pMemory)
{
} /* size: 0 */

// <02E20DC6> ../public/tier0/platform.h:1524
inline void Destruct<CSceneView*>(CSceneView** pMemory)
{
} /* size: 0 */

// <02E20877> ../public/tier0/platform.h:1524
inline void Destruct<CUtlVector<NameToLightCookieSequence_t, CUtlMemory<NameToLightCookieSequence_t, int> > >(CUtlVector<NameToLightCookieSequence_t, CUtlMemory<NameToLightCookieSequence_t, int> >* pMemory)
{
} /* size: 0 */

// <02E207EB> ../public/tier0/platform.h:1524
inline void Destruct<NameToLightCookieSequence_t>(NameToLightCookieSequence_t* pMemory)
{
} /* size: 0 */

// <02E2069C> ../public/tier0/platform.h:1524
inline void Destruct<CUtlDelegate<void(ISceneView*, const CRenderAttributes*)> >(CUtlDelegate<void(ISceneView*, const CRenderAttributes*)>* pMemory)
{
} /* size: 0 */

// <02E1F875> ../public/tier0/platform.h:1524
inline void Destruct<RenderDescriptorBinding_t>(RenderDescriptorBinding_t* pMemory)
{
} /* size: 0 */

// <02E1E6C0> ../public/tier0/platform.h:1524
inline void Destruct<CMeshDrawPrimitive_t>(CMeshDrawPrimitive_t* pMemory)
{
} /* size: 0 */

// <02E1D504> ../public/tier0/platform.h:1524
inline void Destruct<AtlasChart_t>(AtlasChart_t* pMemory)
{
} /* size: 0 */

// <02E1CCB8> ../public/tier0/platform.h:1524
inline void Destruct<CUtlMap<char const*, int, int, bool (*)(char const* const&, char const* const&)>::Node_t>(Node_t* pMemory)
{
} /* size: 0 */

// <02E1C334> ../public/tier0/platform.h:1524
inline void Destruct<RenderDescriptorDesc_t>(RenderDescriptorDesc_t* pMemory)
{
} /* size: 0 */

// <02E1B8B3> ../public/tier0/platform.h:1524
inline void Destruct<CUtlVector<CUtlHashDict<ISceneObjectDesc*>::Entry_t, CUtlMemory<CUtlHashDict<ISceneObjectDesc*>::Entry_t, int> > >(CUtlVector<CUtlHashDict<ISceneObjectDesc*>::Entry_t, CUtlMemory<CUtlHashDict<ISceneObjectDesc*>::Entry_t, int> >* pMemory)
{
} /* size: 0 */

// <02E1B84B> ../public/tier0/platform.h:1524
inline void Destruct<CUtlHashDict<ISceneObjectDesc*>::Entry_t>(Entry_t* pMemory)
{
} /* size: 0 */

// <02E1B0D1> ../public/tier0/platform.h:1524
inline void Destruct<CUtlVector<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned char, true, true>::Entry_t, int> > >(CUtlVector<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned char, true, true>::Entry_t, pMemory)
{
} /* size: 0 */

// <02E1B069> ../public/tier0/platform.h:1524
inline void Destruct<CUtlHashDict<unsigned char, true, true>::Entry_t>(Entry_t* pMemory)
{
} /* size: 0 */

// <02E15B34> ../public/tier0/platform.h:1524
inline void Destruct<CUtlVectorFixedGrowableCompat<CSceneDrawList*, 32> >(CUtlVectorFixedGrowableCompat<CSceneDrawList*, 32>* pMemory)
{
} /* size: 0 */

// <02E15929> ../public/tier0/platform.h:1524
inline void Destruct<PendingVisitList_t>(PendingVisitList_t* pMemory)
{
} /* size: 0 */

// <02C2CDFE> ../public/tier0/platform.h:1524
inline void Destruct<GPUDecalExtraData>(GPUDecalExtraData* pMemory)
{
} /* size: 0 */

// <02C2A79E> ../public/tier0/platform.h:1524
inline void Destruct<GPULight>(GPULight* pMemory)
{
} /* size: 0 */

// <02C2A616> ../public/tier0/platform.h:1524
inline void Destruct<EnvironmentMapConstants>(EnvironmentMapConstants* pMemory)
{
} /* size: 0 */

// <02B7A49F> ../public/tier0/platform.h:1524
inline void Destruct<CLightBinner2::LightProbeVolumeData_t>(LightProbeVolumeData_t* pMemory)
{
} /* size: 0 */

// <02B7A3A2> ../public/tier0/platform.h:1524
inline void Destruct<CUtlKeyValuePair<int, int> >(CUtlKeyValuePair<int, int>* pMemory)
{
} /* size: 0 */

// <02B7A2F1> ../public/tier0/platform.h:1524
inline void Destruct<CUtlKeyValuePair<CSceneLightProbeVolumeObject*, int> >(CUtlKeyValuePair<CSceneLightProbeVolumeObject*, int>* pMemory)
{
} /* size: 0 */

// <02B77FC4> ../public/tier0/platform.h:1524
inline void Destruct<CFrustum>(CFrustum* pMemory)
{
} /* size: 0 */

// <02B779DE> ../public/tier0/platform.h:1524
inline void Destruct<CUtlKeyValuePair<const CEnvMapSceneObject*, int> >(CUtlKeyValuePair<const CEnvMapSceneObject*, int>* pMemory)
{
} /* size: 0 */

// <02B76EAC> ../public/tier0/platform.h:1524
inline void Destruct<CStrongHandleCopyable<InfoForResourceTypeCTextureBase> >(CStrongHandleCopyable<InfoForResourceTypeCTextureBase>* pMemory)
{
} /* size: 0 */

// <0279267C> ../public/tier0/platform.h:1524
inline void Destruct<CWeakHandle<InfoForResourceTypeIMaterial2> >(CWeakHandle<InfoForResourceTypeIMaterial2>* pMemory)
{
} /* size: 0 */

// <0269DC1A> ../public/tier0/platform.h:1524
inline void Destruct<CUtlKeyValuePair<unsigned int, CVSoundTypeManager::SfxDictEntry> >(CUtlKeyValuePair<unsigned int, CVSoundTypeManager::SfxDictEntry>* pMemory)
{
} /* size: 0 */

// <0269D786> ../public/tier0/platform.h:1524
inline void Destruct<CSfxTable>(CSfxTable* pMemory)
{
} /* size: 0 */

// <02667EDA> ../public/tier0/platform.h:1524
inline void Destruct<CVSndAsyncLoadRequest*>(CVSndAsyncLoadRequest** pMemory)
{
} /* size: 0 */

// <02667EB2> ../public/tier0/platform.h:1524
inline void Destruct<CSfxTable*>(CSfxTable** pMemory)
{
} /* size: 0 */

// <02612139> ../public/tier0/platform.h:1524
inline void Destruct<audio_device_description_t>(audio_device_description_t* pMemory)
{
} /* size: 0 */

// <024FCFC4> ../public/tier0/platform.h:1524
inline void Destruct<audio_buffer_input_t>(audio_buffer_input_t* pMemory)
{
} /* size: 0 */

// <0244929D> ../public/tier0/platform.h:1524
inline void Destruct<CPitchShiftFFT*>(CPitchShiftFFT** pMemory)
{
} /* size: 0 */

// <0240A891> ../public/tier0/platform.h:1524
inline void Destruct<CAudioOutputStream*>(CAudioOutputStream** pMemory)
{
} /* size: 0 */

// <0240A6DC> ../public/tier0/platform.h:1524
inline void Destruct<short int>(short int* pMemory)
{
} /* size: 0 */

// <0240A527> ../public/tier0/platform.h:1524
inline void Destruct<CAudioMixBuffer>(CAudioMixBuffer* pMemory)
{
} /* size: 0 */

// <023E7E54> ../public/tier0/platform.h:1524
inline void Destruct<CUtlKeyValuePair<char const*, int> >(CUtlKeyValuePair<char const*, int>* pMemory)
{
} /* size: 0 */

// <023E7A3A> ../public/tier0/platform.h:1524
inline void Destruct<char const*>(const char ** pMemory)
{
} /* size: 0 */

// <023E79AE> ../public/tier0/platform.h:1524
inline void Destruct<CResourceManifestFromDiskInternal*>(CResourceManifestFromDiskInternal** pMemory)
{
} /* size: 0 */

// <023E71EE> ../public/tier0/platform.h:1524
inline void Destruct<CUtlKeyValuePair<const ResourceBindingBase_t*, empty_t> >(CUtlKeyValuePair<const ResourceBindingBase_t*, empty_t>* pMemory)
{
} /* size: 0 */

// <02358038> ../public/tier0/platform.h:1524
inline void Destruct<CResourceBindingReferenceTrackingData>(CResourceBindingReferenceTrackingData* pMemory)
{
} /* size: 0 */

// <02353DD9> ../public/tier0/platform.h:1524
inline void Destruct<ResourceBindingBase_t>(ResourceBindingBase_t* pMemory)
{
} /* size: 0 */

// <02351743> ../public/tier0/platform.h:1524
inline void Destruct<CResourceSystem::ForcedSynchronizationCallbackInfo_t>(ForcedSynchronizationCallbackInfo_t* pMemory)
{
} /* size: 0 */

// <02351190> ../public/tier0/platform.h:1524
inline void Destruct<CResourceManifest*>(CResourceManifest** pMemory)
{
} /* size: 0 */

// <02350B5F> ../public/tier0/platform.h:1524
inline void Destruct<ExtRefList_t*>(ExtRefList_t** pMemory)
{
} /* size: 0 */

// <02350258> ../public/tier0/platform.h:1524
inline void Destruct<long long int>(long long int* pMemory)
{
} /* size: 0 */

// <0234E56D> ../public/tier0/platform.h:1524
inline void Destruct<const ResourceBindingBase_t*>(const ResourceBindingBase_t ** pMemory)
{
} /* size: 0 */

// <0234DEF3> ../public/tier0/platform.h:1524
inline void Destruct<CUtlKeyValuePair<CLoadingResource*, empty_t> >(CUtlKeyValuePair<CLoadingResource*, empty_t>* pMemory)
{
} /* size: 0 */

// <0234D607> ../public/tier0/platform.h:1524
inline void Destruct<unsigned int*>(unsigned int** pMemory)
{
} /* size: 0 */

// <0234D517> ../public/tier0/platform.h:1524
inline void Destruct<IToolsResourceListener*>(IToolsResourceListener** pMemory)
{
} /* size: 0 */

// <0234CDA2> ../public/tier0/platform.h:1524
inline void Destruct<ResourceTypeRegistration_t>(ResourceTypeRegistration_t* pMemory)
{
} /* size: 0 */

// <0234B2A7> ../public/tier0/platform.h:1524
inline void Destruct<ResourceStatusChange_t>(ResourceStatusChange_t* pMemory)
{
} /* size: 0 */

// <0234AAE9> ../public/tier0/platform.h:1524
inline void Destruct<NullTypeManager_t>(NullTypeManager_t* pMemory)
{
} /* size: 0 */

// <0234A71B> ../public/tier0/platform.h:1524
inline void Destruct<CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResourceBindingReferenceTrackingData::CResourceReferenceTracking_Options, true> >(CUtlReferenceTracker_ReferenceRecord_CaptureAnnotations_t<ResourceLeakTrackingGroup_t, long long unsigned int, 0, CResour pMemory)
{
} /* size: 0 */

// <022D9EC1> ../public/tier0/platform.h:1524
inline void Destruct<CStreamingResourceData*>(CStreamingResourceData** pMemory)
{
} /* size: 0 */

// <022A1AC7> ../public/tier0/platform.h:1524
inline void Destruct<CUtlKeyValuePair<ResourceId_t, const ResourceBindingBase_t*> >(CUtlKeyValuePair<ResourceId_t, const ResourceBindingBase_t*>* pMemory)
{
} /* size: 0 */

// <022A0459> ../public/tier0/platform.h:1524
inline void Destruct<CLoadingResource*>(CLoadingResource** pMemory)
{
} /* size: 0 */

// <021CD27D> ../public/tier0/platform.h:1524
inline void Destruct<CUtlKeyValuePair<ResourceId_t, CUtlVector<IGenericDataResourceListener*>*> >(CUtlKeyValuePair<ResourceId_t, CUtlVector<IGenericDataResourceListener*, CUtlMemory<IGenericDataResourceListener*, int> > pMemory)
{
} /* size: 0 */

// <021CCDF0> ../public/tier0/platform.h:1524
inline void Destruct<IGenericDataResourceListener*>(IGenericDataResourceListener** pMemory)
{
} /* size: 0 */

// <0215D8B9> ../public/tier0/platform.h:1524
inline void Destruct<CAsyncResourceDataRequest*>(CAsyncResourceDataRequest** pMemory)
{
} /* size: 0 */

// <01FD39AB> ../public/tier0/platform.h:1524
inline void Destruct<CVideoRecorder::VideoFrameData*>(VideoFrameData** pMemory)
{
} /* size: 0 */

// <01FD3755> ../public/tier0/platform.h:1524
inline void Destruct<CVideoRecorder::AudioSampleData*>(AudioSampleData** pMemory)
{
} /* size: 0 */

// <01FA8C7A> ../public/tier0/platform.h:1524
inline void Destruct<PacketEntry>(PacketEntry* pMemory)
{
} /* size: 0 */

// <01D9EC17> ../public/tier0/platform.h:1524
inline void Destruct<ViewHistory>(ViewHistory* pMemory)
{
} /* size: 0 */

// <01D9E89D> ../public/tier0/platform.h:1524
inline void Destruct<CUtlKeyValuePair<unsigned int, empty_t> >(CUtlKeyValuePair<unsigned int, empty_t>* pMemory)
{
} /* size: 0 */

// <01B57C8A> ../public/tier0/platform.h:1524
inline void Destruct<SboxVertex_t>(SboxVertex_t* pMemory)
{
} /* size: 0 */

// <0185670C> ../public/tier0/platform.h:1524
inline void Destruct<CRenderBufferBinding>(CRenderBufferBinding* pMemory)
{
} /* size: 0 */

// <01853D5D> ../public/tier0/platform.h:1524
inline void Destruct<VertexBufferLayout_t>(VertexBufferLayout_t* pMemory)
{
} /* size: 0 */

// <01853243> ../public/tier0/platform.h:1524
inline void Destruct<PermModelExtPart_t>(PermModelExtPart_t* pMemory)
{
} /* size: 0 */

// <018531AB> ../public/tier0/platform.h:1524
inline void Destruct<CStrongHandle<InfoForResourceTypeCRenderMesh> >(CStrongHandle<InfoForResourceTypeCRenderMesh>* pMemory)
{
} /* size: 0 */

// <0185304C> ../public/tier0/platform.h:1524
inline void Destruct<CStrongHandle<InfoForResourceTypeCPhysAggregateData> >(CStrongHandle<InfoForResourceTypeCPhysAggregateData>* pMemory)
{
} /* size: 0 */

// <01852ED4> ../public/tier0/platform.h:1524
inline void Destruct<CStrongHandle<InfoForResourceTypeCSequenceGroupData> >(CStrongHandle<InfoForResourceTypeCSequenceGroupData>* pMemory)
{
} /* size: 0 */

// <01852DE5> ../public/tier0/platform.h:1524
inline void Destruct<MaterialGroup_t>(MaterialGroup_t* pMemory)
{
} /* size: 0 */

// <01852AE8> ../public/tier0/platform.h:1524
inline void Destruct<ModelBoneFlexDriver_t>(ModelBoneFlexDriver_t* pMemory)
{
} /* size: 0 */

// <018511B7> ../public/tier0/platform.h:1524
inline void Destruct<ModelBoneFlexDriverControl_t>(ModelBoneFlexDriverControl_t* pMemory)
{
} /* size: 0 */

// <0177C8FE> ../public/tier0/platform.h:1524
inline void Destruct<RenderDisplayMode_t>(RenderDisplayMode_t* pMemory)
{
} /* size: 0 */

// <0175CF33> ../public/tier0/platform.h:1524
inline void Destruct<PhysicsTrace_t>(PhysicsTrace_t* pMemory)
{
} /* size: 0 */

// <0126E944> ../public/tier0/platform.h:1524
inline void Destruct<Vector2D>(Vector2D* pMemory)
{
} /* size: 0 */

// <0126626A> ../public/tier0/platform.h:1524
inline void Destruct<CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> > >(CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >* pMemory)
{
} /* size: 0 */

// <012622B1> ../public/tier0/platform.h:1524
inline void Destruct<ConstantBufferVariable_t>(ConstantBufferVariable_t* pMemory)
{
} /* size: 0 */

// <01260A4D> ../public/tier0/platform.h:1524
inline void Destruct<VPhysXJoint_t>(VPhysXJoint_t* pMemory)
{
} /* size: 0 */

// <01260802> ../public/tier0/platform.h:1524
inline void Destruct<SteamItemDetails_t>(SteamItemDetails_t* pMemory)
{
} /* size: 0 */

// <0125FEC8> ../public/tier0/platform.h:1524
inline void Destruct<CVfxShaderAttribute>(CVfxShaderAttribute* pMemory)
{
} /* size: 0 */

// <0125FE0C> ../public/tier0/platform.h:1524
inline void Destruct<CVfxRule>(CVfxRule* pMemory)
{
} /* size: 0 */

// <0125FD37> ../public/tier0/platform.h:1524
inline void Destruct<CVfxVariableDescription>(CVfxVariableDescription* pMemory)
{
} /* size: 0 */

// <0125FC7B> ../public/tier0/platform.h:1524
inline void Destruct<CVfxTextureChannelProcessor>(CVfxTextureChannelProcessor* pMemory)
{
} /* size: 0 */

// <0125FB8C> ../public/tier0/platform.h:1524
inline void Destruct<ConstantBufferDescription_t>(ConstantBufferDescription_t* pMemory)
{
} /* size: 0 */

// <0125FAD0> ../public/tier0/platform.h:1524
inline void Destruct<VsInputSignatureElement_t>(VsInputSignatureElement_t* pMemory)
{
} /* size: 0 */

// <0125F995> ../public/tier0/platform.h:1524
inline void Destruct<CAnimationGroupBuilder::Animation_t>(Animation_t* pMemory)
{
} /* size: 0 */

// <0125F4E1> ../public/tier0/platform.h:1524
inline void Destruct<MeshTraceOutput>(MeshTraceOutput* pMemory)
{
} /* size: 0 */

// <0125F449> ../public/tier0/platform.h:1524
inline void Destruct<PhysicsTrace::Result>(Result* pMemory)
{
} /* size: 0 */

// <0125F310> ../public/tier0/platform.h:1524
inline void Destruct<TextureResidencyInfo_t>(TextureResidencyInfo_t* pMemory)
{
} /* size: 0 */

// <0125D753> ../public/tier0/platform.h:1524
inline void Destruct<CUtlVector<CTransform> >(CUtlVector<CTransform, CUtlMemory<CTransform, int> >* pMemory)
{
} /* size: 0 */

// <0125D28A> ../public/tier0/platform.h:1524
inline void Destruct<CPhysBodyDesc::SphereAndAttr_t>(SphereAndAttr_t* pMemory)
{
} /* size: 0 */

// <0125D0FC> ../public/tier0/platform.h:1524
inline void Destruct<CPhysBodyDesc::CapsuleAndAttr_t>(CapsuleAndAttr_t* pMemory)
{
} /* size: 0 */

// <0125CF8F> ../public/tier0/platform.h:1524
inline void Destruct<CPhysBodyDesc::HullAndAttr_t>(HullAndAttr_t* pMemory)
{
} /* size: 0 */

// <010F55C2> ../public/tier0/platform.h:1524
inline void Destruct<ExtraSceneObjectStreamDesc_t>(ExtraSceneObjectStreamDesc_t* pMemory)
{
} /* size: 0 */

// <010F4C20> ../public/tier0/platform.h:1524
inline void Destruct<MaterialOverrideDesc_t>(MaterialOverrideDesc_t* pMemory)
{
} /* size: 0 */

// <010F2A35> ../public/tier0/platform.h:1524
inline void Destruct<CBuilderMaterialGroup>(CBuilderMaterialGroup* pMemory)
{
} /* size: 0 */

// <010F0FCF> ../public/tier0/platform.h:1524
inline void Destruct<CUtlVector<int> >(CUtlVector<int, CUtlMemory<int, int> >* pMemory)
{
} /* size: 0 */

// <010EF9CF> ../public/tier0/platform.h:1524
inline void Destruct<SceneObject_t>(SceneObject_t* pMemory)
{
} /* size: 0 */

// <010EF8F9> ../public/tier0/platform.h:1524
inline void Destruct<InfoOverlayData_t>(InfoOverlayData_t* pMemory)
{
} /* size: 0 */

// <010EF741> ../public/tier0/platform.h:1524
inline void Destruct<AggregateSceneObject_t>(AggregateSceneObject_t* pMemory)
{
} /* size: 0 */

// <010EF6B7> ../public/tier0/platform.h:1524
inline void Destruct<ExtraVertexStreamOverride_t>(ExtraVertexStreamOverride_t* pMemory)
{
} /* size: 0 */

// <010EF524> ../public/tier0/platform.h:1524
inline void Destruct<WorldNodeOnDiskBufferData_t>(WorldNodeOnDiskBufferData_t* pMemory)
{
} /* size: 0 */

// <010EF355> ../public/tier0/platform.h:1524
inline void Destruct<CSmartPtr<CRenderMesh> >(CSmartPtr<CRenderMesh, CRefCountAccessor>* pMemory)
{
} /* size: 0 */

// <010EF27E> ../public/tier0/platform.h:1524
inline void Destruct<CModelBuilder::CompileTimeMesh_t>(CompileTimeMesh_t* pMemory)
{
} /* size: 0 */

// <010EEFDC> ../public/tier0/platform.h:1524
inline void Destruct<CUtlVector<short int> >(CUtlVector<short int, CUtlMemory<short int, int> >* pMemory)
{
} /* size: 0 */

// <010EEED2> ../public/tier0/platform.h:1524
inline void Destruct<BuilderModelBoneFlexDriver_t>(BuilderModelBoneFlexDriver_t* pMemory)
{
} /* size: 0 */

// <010EEE2F> ../public/tier0/platform.h:1524
inline void Destruct<CStrongHandle<InfoForResourceTypeCAnimationGroup> >(CStrongHandle<InfoForResourceTypeCAnimationGroup>* pMemory)
{
} /* size: 0 */

// <010ED730> ../public/tier0/platform.h:1524
inline void Destruct<CStrongHandle<InfoForResourceTypeIMaterial2> >(CStrongHandle<InfoForResourceTypeIMaterial2>* pMemory)
{
} /* size: 0 */

// <010ED4AE> ../public/tier0/platform.h:1524
inline void Destruct<AggregateMeshInfo_t>(AggregateMeshInfo_t* pMemory)
{
} /* size: 0 */

// <010055CF> ../public/tier0/platform.h:1524
inline void Destruct<HResourceManifest__*>(HResourceManifest__** pMemory)
{
} /* size: 0 */

// <010038B0> ../public/tier0/platform.h:1524
inline void Destruct<int>(int* pMemory)
{
} /* size: 0 */

// <01002ACA> ../public/tier0/platform.h:1524
inline void Destruct<CWeakHandle<InfoForResourceTypeCTextureBase> >(CWeakHandle<InfoForResourceTypeCTextureBase>* pMemory)
{
} /* size: 0 */

// <01001BF2> ../public/tier0/platform.h:1524
inline void Destruct<WorldNodeSortElement_t>(WorldNodeSortElement_t* pMemory)
{
} /* size: 0 */

// <010016A0> ../public/tier0/platform.h:1524
inline void Destruct<CWorldNode*>(CWorldNode** pMemory)
{
} /* size: 0 */

// <010008BF> ../public/tier0/platform.h:1524
inline void Destruct<CUtlKeyValuePair<CUtlStringToken, CWeakHandle<InfoForResourceTypeCEntityLump> > >(CUtlKeyValuePair<CUtlStringToken, CWeakHandle<InfoForResourceTypeCEntityLump> >* pMemory)
{
} /* size: 0 */

// <01000408> ../public/tier0/platform.h:1524
inline void Destruct<CUtlMap<long long unsigned int, WorldTraversal_t*>::Node_t>(Node_t* pMemory)
{
} /* size: 0 */

// <00FFFFAA> ../public/tier0/platform.h:1524
inline void Destruct<CWorldSceneObjectRef*>(CWorldSceneObjectRef** pMemory)
{
} /* size: 0 */

// <00FFF6A1> ../public/tier0/platform.h:1524
inline void Destruct<char>(char* pMemory)
{
} /* size: 0 */

// <00FFDED6> ../public/tier0/platform.h:1524
inline void Destruct<CUtlVector<CWorldSceneObjectRef*> >(CUtlVector<CWorldSceneObjectRef*, CUtlMemory<CWorldSceneObjectRef*, int> >* pMemory)
{
} /* size: 0 */

// <00FFDDC0> ../public/tier0/platform.h:1524
inline void Destruct<CWeakHandle<InfoForResourceTypeCEntityLump> >(CWeakHandle<InfoForResourceTypeCEntityLump>* pMemory)
{
} /* size: 0 */

// <00FFB13E> ../public/tier0/platform.h:1524
inline void Destruct<CEntityKeyValues::KeyValueInfo_t>(KeyValueInfo_t* pMemory)
{
} /* size: 0 */

// <00F286C4> ../public/tier0/platform.h:1524
inline void Destruct<CSingleWorldRep*>(CSingleWorldRep** pMemory)
{
} /* size: 0 */

// <00F2845E> ../public/tier0/platform.h:1524
inline void Destruct<CWorldRendererMgr::WindEntry_t>(WindEntry_t* pMemory)
{
} /* size: 0 */

// <00F259E4> ../public/tier0/platform.h:1524
inline void Destruct<SingleWorldEntityLump_t>(SingleWorldEntityLump_t* pMemory)
{
} /* size: 0 */

// <00F24C02> ../public/tier0/platform.h:1524
inline void Destruct<NodeData_t>(NodeData_t* pMemory)
{
} /* size: 0 */

// <00F24B5F> ../public/tier0/platform.h:1524
inline void Destruct<CStrongHandle<InfoForResourceTypeCTextureBase> >(CStrongHandle<InfoForResourceTypeCTextureBase>* pMemory)
{
} /* size: 0 */

// <00E6E859> ../public/tier0/platform.h:1524
inline void Destruct<CStrongHandleCopyable<InfoForResourceTypeCEntityLump> >(CStrongHandleCopyable<InfoForResourceTypeCEntityLump>* pMemory)
{
} /* size: 0 */

// <00E6E616> ../public/tier0/platform.h:1524
inline void Destruct<EntityKeyValueData_t>(EntityKeyValueData_t* pMemory)
{
} /* size: 0 */

// <00E6DC85> ../public/tier0/platform.h:1524
inline void Destruct<EntityIOConnectionData_t>(EntityIOConnectionData_t* pMemory)
{
} /* size: 0 */

// <00D6E7BD> ../public/tier0/platform.h:1524
inline void Destruct<CUtlStringToken>(CUtlStringToken* pMemory)
{
} /* size: 0 */

// <00D0FBED> ../public/tier0/platform.h:1524
inline void Destruct<IPhysicsBody*>(IPhysicsBody** pMemory)
{
} /* size: 0 */

// <00B9BB93> ../public/tier0/platform.h:1524
inline void Destruct<CPhysicsShape*>(CPhysicsShape** pMemory)
{
} /* size: 0 */

// <00B9B0C8> ../public/tier0/platform.h:1524
inline void Destruct<b3ContactData>(b3ContactData* pMemory)
{
} /* size: 0 */

// <00B9ACFC> ../public/tier0/platform.h:1524
inline void Destruct<float>(float* pMemory)
{
} /* size: 0 */

// <00B12B27> ../public/tier0/platform.h:1524
inline void Destruct<CPhysicsBody*>(CPhysicsBody** pMemory)
{
} /* size: 0 */

// <00B1062A> ../public/tier0/platform.h:1524
inline void Destruct<b3Vec3>(b3Vec3* pMemory)
{
} /* size: 0 */

// <00B104D7> ../public/tier0/platform.h:1524
inline void Destruct<IndexPair>(IndexPair* pMemory)
{
} /* size: 0 */

// <00B0FFB4> ../public/tier0/platform.h:1524
inline void Destruct<CUtlKeyValuePair<b3ContactId, empty_t> >(CUtlKeyValuePair<b3ContactId, empty_t>* pMemory)
{
} /* size: 0 */

// <00B0FE61> ../public/tier0/platform.h:1524
inline void Destruct<b3JointId>(b3JointId* pMemory)
{
} /* size: 0 */

// <00B0FD0E> ../public/tier0/platform.h:1524
inline void Destruct<b3ShapeId>(b3ShapeId* pMemory)
{
} /* size: 0 */

// <00B0F9A5> ../public/tier0/platform.h:1524
inline void Destruct<CPhysicsDebugShape*>(CPhysicsDebugShape** pMemory)
{
} /* size: 0 */

// <00B0E4D3> ../public/tier0/platform.h:1524
inline void Destruct<CPhysAggregateInstance*>(CPhysAggregateInstance** pMemory)
{
} /* size: 0 */

// <009F1134> ../public/tier0/platform.h:1524
inline void Destruct<bool>(bool* pMemory)
{
} /* size: 0 */

// <009F1048> ../public/tier0/platform.h:1524
inline void Destruct<unsigned char>(unsigned char* pMemory)
{
} /* size: 0 */

// <009EE5E7> ../public/tier0/platform.h:1524
inline void Destruct<RnNode_t>(RnNode_t* pMemory)
{
} /* size: 0 */

// <009EE4B7> ../public/tier0/platform.h:1524
inline void Destruct<RnTriangle_t>(RnTriangle_t* pMemory)
{
} /* size: 0 */

// <009ED8AA> ../public/tier0/platform.h:1524
inline void Destruct<CPhysicsWorld*>(CPhysicsWorld** pMemory)
{
} /* size: 0 */

// <009ED7CF> ../public/tier0/platform.h:1524
inline void Destruct<CStrongHandleVoid>(CStrongHandleVoid* pMemory)
{
} /* size: 0 */

// <009ECF9E> ../public/tier0/platform.h:1524
inline void Destruct<RnPlane_t>(RnPlane_t* pMemory)
{
} /* size: 0 */

// <009ECF12> ../public/tier0/platform.h:1524
inline void Destruct<RnHalfEdge_t>(RnHalfEdge_t* pMemory)
{
} /* size: 0 */

// <009ECE86> ../public/tier0/platform.h:1524
inline void Destruct<RnFace_t>(RnFace_t* pMemory)
{
} /* size: 0 */

// <009EB057> ../public/tier0/platform.h:1524
inline void Destruct<CPhysicsSystem::CreateDebugSceneObject(const DebugSceneObjectParams_t&, SceneObjectBuffers_t*)::Part_t>(Part_t* pMemory)
{
} /* size: 0 */

// <009EADE1> ../public/tier0/platform.h:1524
inline void Destruct<CPhysicsFilter::Rule>(Rule* pMemory)
{
} /* size: 0 */

// <009EA6A8> ../public/tier0/platform.h:1524
inline void Destruct<RnVertex_t>(RnVertex_t* pMemory)
{
} /* size: 0 */

// <009E8836> ../public/tier0/platform.h:1524
inline void Destruct<DebugMeshInfo_t>(DebugMeshInfo_t* pMemory)
{
} /* size: 0 */

// <009E3974> ../public/tier0/platform.h:1524
inline void Destruct<PhysicsDebugVertex_t>(PhysicsDebugVertex_t* pMemory)
{
} /* size: 0 */

// <008E04F2> ../public/tier0/platform.h:1524
inline void Destruct<CUtlMap<unsigned int, ButtonCode_t>::Node_t>(Node_t* pMemory)
{
} /* size: 0 */

// <008AA2A2> ../public/tier0/platform.h:1524
inline void Destruct<CInputSystem::InputWindow_t>(InputWindow_t* pMemory)
{
} /* size: 0 */

// <00594183> ../public/tier0/platform.h:1524
inline void Destruct<SceneScratchRenderTargetInfo_t>(SceneScratchRenderTargetInfo_t* pMemory)
{
} /* size: 0 */

// <004B311E> ../public/tier0/platform.h:1524
inline void Destruct<ConVar*>(ConVar** pMemory)
{
} /* size: 0 */

// <004AFB95> ../public/tier0/platform.h:1524
inline void Destruct<CInputService::AsyncConfigFile_t>(AsyncConfigFile_t* pMemory)
{
} /* size: 0 */

// <003C7E8E> ../public/tier0/platform.h:1524
inline void Destruct<AABB_t>(AABB_t* pMemory)
{
} /* size: 0 */

// <003C7D19> ../public/tier0/platform.h:1524
inline void Destruct<CVisCluster>(CVisCluster* pMemory)
{
} /* size: 0 */

// <003C7A9F> ../public/tier0/platform.h:1524
inline void Destruct<CPVS*>(CPVS** pMemory)
{
} /* size: 0 */

// <003C747C> ../public/tier0/platform.h:1524
inline void Destruct<unsigned int>(unsigned int* pMemory)
{
} /* size: 0 */

// <0029DFF4> ../public/tier0/platform.h:1524
inline void Destruct<CLoopTypeBase::ServiceDependency_t>(ServiceDependency_t* pMemory)
{
} /* size: 0 */

// <00231EB4> ../public/tier0/platform.h:1524
inline void Destruct<IPrerequisite*>(IPrerequisite** pMemory)
{
} /* size: 0 */

// <0022D953> ../public/tier0/platform.h:1524
inline void Destruct<ISwitchLoopModeStatusNotify*>(ISwitchLoopModeStatusNotify** pMemory)
{
} /* size: 0 */

// <0022C7F6> ../public/tier0/platform.h:1524
inline void Destruct<CUtlMap<const CSchemaClassInfo*, CUtlVector<CEventDispatcher_Base::EventListenerInfo_t>, unsigned int, bool (*)(const CSchemaClassInfo* const&, const CSchemaClassInfo* const&)>::Node_t>(Node_t* pMemory)
{
} /* size: 0 */

// <0022BBEA> ../public/tier0/platform.h:1524
inline void Destruct<CEventDispatcher_Base::EventListenerInfo_t>(EventListenerInfo_t* pMemory)
{
} /* size: 0 */

// <00134FE9> ../public/tier0/platform.h:1524
inline void Destruct<CBufferStringN<200> >(CBufferStringN<200>* pMemory)
{
} /* size: 0 */

// <001326E8> ../public/tier0/platform.h:1524
inline void Destruct<Vector>(Vector* pMemory)
{
} /* size: 0 */

// <001326C0> ../public/tier0/platform.h:1524
inline void Destruct<Vector4D>(Vector4D* pMemory)
{
} /* size: 0 */

// <00132698> ../public/tier0/platform.h:1524
inline void Destruct<VMatrix>(VMatrix* pMemory)
{
} /* size: 0 */

// <001322B6> ../public/tier0/platform.h:1524
inline void Destruct<CUtlVector<CCharRenderGeometry> >(CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >* pMemory)
{
} /* size: 0 */

// <0013036C> ../public/tier0/platform.h:1524
inline void Destruct<void*>(void** pMemory)
{
} /* size: 0 */

// <00130344> ../public/tier0/platform.h:1524
inline void Destruct<IntVector4D>(IntVector4D* pMemory)
{
} /* size: 0 */

// <0013031C> ../public/tier0/platform.h:1524
inline void Destruct<CRenderAttributes::ConstantBufferAttr_t>(ConstantBufferAttr_t* pMemory)
{
} /* size: 0 */

// <001302F4> ../public/tier0/platform.h:1524
inline void Destruct<CRenderAttributes::DescriptorSetAttr_t>(DescriptorSetAttr_t* pMemory)
{
} /* size: 0 */

// <001301EC> ../public/tier0/platform.h:1524
inline void Destruct<CUtlString>(CUtlString* pMemory)
{
} /* size: 0 */

// <0012FEB4> ../public/tier0/platform.h:1524
inline void Destruct<CTransform>(CTransform* pMemory)
{
} /* size: 0 */

// <0012FCAF> ../public/tier0/platform.h:1524
inline void Destruct<bone_merge_list_t>(bone_merge_list_t* pMemory)
{
} /* size: 0 */

// <0012FC63> ../public/tier0/platform.h:1524
inline void Destruct<matrix3x4a_t>(matrix3x4a_t* pMemory)
{
} /* size: 0 */

// <0012FBE5> ../public/tier0/platform.h:1524
inline void Destruct<CSceneAnimatableObject::FlexWeight_t>(FlexWeight_t* pMemory)
{
} /* size: 0 */

// <0012DA2D> ../public/tier0/platform.h:1524
inline void Destruct<CAnimFoot>(CAnimFoot* pMemory)
{
} /* size: 0 */

// <0012D5B8> ../public/tier0/platform.h:1524
inline void Destruct<AppSystemInfo_t>(AppSystemInfo_t* pMemory)
{
} /* size: 0 */

// <0012CC44> ../public/tier0/platform.h:1524
inline void Destruct<CCharRenderGeometry>(CCharRenderGeometry* pMemory)
{
} /* size: 0 */

// <0012CA45> ../public/tier0/platform.h:1524
inline void Destruct<CRenderAttributes::SamplerAttrForStorage_t>(SamplerAttrForStorage_t* pMemory)
{
} /* size: 0 */

// <00060FDF> ../public/tier0/platform.h:1524
inline void Destruct<CDebugVisualizerMgr::DebugVisElement_t>(DebugVisElement_t* pMemory)
{
} /* size: 0 */

// <0336A868> ../public/tier0/platform.h:1524
inline void Destruct<IIKRuleData*>(IIKRuleData** pMemory)
{
} /* size: 0 */

// <0336A7C5> ../public/tier0/platform.h:1524
inline void Destruct<IKJointConstraintPair_t>(IKJointConstraintPair_t* pMemory)
{
} /* size: 0 */

// <03343B6C> ../public/tier0/platform.h:1524
inline void Destruct<IIKJointConstraintData*>(IIKJointConstraintData** pMemory)
{
} /* size: 0 */

// <03285DC2> ../public/tier0/platform.h:1524
inline void Destruct<CIKChainInterpolationState>(CIKChainInterpolationState* pMemory)
{
} /* size: 0 */

// <027EEBF7> ../public/tier0/platform.h:1524
inline void Destruct<CAnimationChannelResult>(CAnimationChannelResult* pMemory)
{
} /* size: 0 */

// <027EEB44> ../public/tier0/platform.h:1524
inline void Destruct<IKLocked_t>(IKLocked_t* pMemory)
{
} /* size: 0 */

// <0272C150> ../public/tier0/platform.h:1524
inline void Destruct<CInternalOperation>(CInternalOperation* pMemory)
{
} /* size: 0 */

// <0272C128> ../public/tier0/platform.h:1524
inline void Destruct<CAnimationResult>(CAnimationResult* pMemory)
{
} /* size: 0 */

// <026980CE> ../public/tier0/platform.h:1524
inline void Destruct<CRetargetingChain>(CRetargetingChain* pMemory)
{
} /* size: 0 */

// <025B3B73> ../public/tier0/platform.h:1524
inline void Destruct<CUtlKeyValuePair<unsigned int, CAnimationDecodeCacheEntry_t> >(CUtlKeyValuePair<unsigned int, CAnimationDecodeCacheEntry_t>* pMemory)
{
} /* size: 0 */

// <01AE0C4C> ../public/tier0/platform.h:1524
inline void Destruct<VertexColor_t>(VertexColor_t* pMemory)
{
} /* size: 0 */

// <019ED801> ../public/tier0/platform.h:1524
inline void Destruct<CSmartPtr<Reflection::CTypeFactory<CAnimStateConditionBase>::CFactoryMaker, CRefCountAccessor> >(CSmartPtr<Reflection::CTypeFactory<CAnimStateConditionBase>::CFactoryMaker, CRefCountAccessor>* pMemory)
{
} /* size: 0 */

// <0157C081> ../public/tier0/platform.h:1524
inline void Destruct<AnimGraphOperation_t>(AnimGraphOperation_t* pMemory)
{
} /* size: 0 */

// <0157C002> ../public/tier0/platform.h:1524
inline void Destruct<CUtlKeyValuePair<const CAnimUpdateNodeBase*, CRootMotion> >(CUtlKeyValuePair<const CAnimUpdateNodeBase*, CRootMotion>* pMemory)
{
} /* size: 0 */

// <0157BF83> ../public/tier0/platform.h:1524
inline void Destruct<CUtlKeyValuePair<const CAnimUpdateNodeBase*, CStrideStatus> >(CUtlKeyValuePair<const CAnimUpdateNodeBase*, CStrideStatus>* pMemory)
{
} /* size: 0 */

// <0157BED5> ../public/tier0/platform.h:1524
inline void Destruct<CAnimGraphUpdateContext::NodeUpdateDesc_t>(NodeUpdateDesc_t* pMemory)
{
} /* size: 0 */

// <0157BE2C> ../public/tier0/platform.h:1524
inline void Destruct<CAnimGraphUpdateContext::AnimTagWithStatus>(AnimTagWithStatus* pMemory)
{
} /* size: 0 */

// <0157BD7A> ../public/tier0/platform.h:1524
inline void Destruct<animevent_t>(animevent_t* pMemory)
{
} /* size: 0 */

// <015794D9> ../public/tier0/platform.h:1524
inline void Destruct<OpResult>(OpResult* pMemory)
{
} /* size: 0 */

// <015770CB> ../public/tier0/platform.h:1524
inline void Destruct<CUtlKeyValuePair<AnimNodeID, CSmartPtr<CUpdateNodeManager> > >(CUtlKeyValuePair<AnimNodeID, CSmartPtr<CUpdateNodeManager, CRefCountAccessor> >* pMemory)
{
} /* size: 0 */

// <01576FFF> ../public/tier0/platform.h:1524
inline void Destruct<CUtlKeyValuePair<AnimNodeID, CPackedHandle<CAnimUpdateNodeBase> > >(CUtlKeyValuePair<AnimNodeID, CPackedHandle<CAnimUpdateNodeBase> >* pMemory)
{
} /* size: 0 */

// <01576EDC> ../public/tier0/platform.h:1524
inline void Destruct<CUtlKeyValuePair<AnimNodeID, CSmartPtr<const CAnimNodeBase> > >(CUtlKeyValuePair<AnimNodeID, CSmartPtr<const CAnimNodeBase, CRefCountAccessor> >* pMemory)
{
} /* size: 0 */

// <01576DEC> ../public/tier0/platform.h:1524
inline void Destruct<CUtlKeyValuePair<AnimNodeID, int> >(CUtlKeyValuePair<AnimNodeID, int>* pMemory)
{
} /* size: 0 */

// <01572CC2> ../public/tier0/platform.h:1524
inline void Destruct<CSmartPtr<const CAnimNodeBase> >(CSmartPtr<const CAnimNodeBase, CRefCountAccessor>* pMemory)
{
} /* size: 0 */

// <01572C5C> ../public/tier0/platform.h:1524
inline void Destruct<CPackedHandle<CAnimUpdateNodeBase> >(CPackedHandle<CAnimUpdateNodeBase>* pMemory)
{
} /* size: 0 */

// <01572BC2> ../public/tier0/platform.h:1524
inline void Destruct<CUtlVector<AnimNodeLocation_t> >(CUtlVector<AnimNodeLocation_t, CUtlMemory<AnimNodeLocation_t, int> >* pMemory)
{
} /* size: 0 */

// <0156F6A6> ../public/tier0/platform.h:1524
inline void Destruct<std::unique_ptr<CEnduringClassMemoryPool<CAnimPose>::Block, std::default_delete<CEnduringClassMemoryPool<CAnimPose>::Block> > >(unique_ptr<CEnduringClassMemoryPool<CAnimPose>::Block, std::default_delete<CEnduringClassMemoryPool<CAnimPose>::Block> > pMemory)
{
} /* size: 0 */

// <0146312F> ../public/tier0/platform.h:1524
inline void Destruct<CSmartPtr<Reflection::CTypeFactory<CAnimMotorBase>::CFactoryMaker, CRefCountAccessor> >(CSmartPtr<Reflection::CTypeFactory<CAnimMotorBase>::CFactoryMaker, CRefCountAccessor>* pMemory)
{
} /* size: 0 */

// <013F1416> ../public/tier0/platform.h:1524
inline void Destruct<CMotionMetricInitContext::PoseCache_t*>(PoseCache_t** pMemory)
{
} /* size: 0 */

// <013EEEB4> ../public/tier0/platform.h:1524
inline void Destruct<CUtlKeyValuePair<HSequence, CSmartPtr<CSequenceDistanceHelper> > >(CUtlKeyValuePair<HSequence, CSmartPtr<CSequenceDistanceHelper, CRefCountAccessor> >* pMemory)
{
} /* size: 0 */

// <01309196> ../public/tier0/platform.h:1524
inline void Destruct<CUtlKeyValuePair<Reflection::ClassID, CUtlVector<IAnimTagListener*> > >(CUtlKeyValuePair<Reflection::ClassID, CUtlVector<IAnimTagListener*, CUtlMemory<IAnimTagListener*, int> > >* pMemory)
{
} /* size: 0 */

// <01308D1B> ../public/tier0/platform.h:1524
inline void Destruct<IAnimTagListener*>(IAnimTagListener** pMemory)
{
} /* size: 0 */

// <01307107> ../public/tier0/platform.h:1524
inline void Destruct<CSmartPtr<Reflection::CTypeFactory<CAnimTagBase>::CFactoryMaker, CRefCountAccessor> >(CSmartPtr<Reflection::CTypeFactory<CAnimTagBase>::CFactoryMaker, CRefCountAccessor>* pMemory)
{
} /* size: 0 */

// <01264C63> ../public/tier0/platform.h:1524
inline void Destruct<CUtlKeyValuePair<CUtlString, CSmartPtr<CSubGraph> > >(CUtlKeyValuePair<CUtlString, CSmartPtr<CSubGraph, CRefCountAccessor> >* pMemory)
{
} /* size: 0 */

// <0115129F> ../public/tier0/platform.h:1524
inline void Destruct<CSmartPtr<CMotionMetricInstance> >(CSmartPtr<CMotionMetricInstance, CRefCountAccessor>* pMemory)
{
} /* size: 0 */

// <0114F7B6> ../public/tier0/platform.h:1524
inline void Destruct<AnimOutputID>(AnimOutputID* pMemory)
{
} /* size: 0 */

// <0114DDD1> ../public/tier0/platform.h:1524
inline void Destruct<CUtlKeyValuePair<Reflection::ClassID, CSmartPtr<Reflection::CInstanceFactory<CMotionMetricInstance, CMotionMetricBase, const CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>&, CPackedHandle<const CMotionMetricEvaluator> >::CFactoryMaker, CRefCountAccessor> > >(CUtlKeyValuePair<Reflection::ClassID, CSmartPtr<Reflection::CInstanceFactory<CMotionMetricInstance, CMotionMetricBase, co pMemory)
{
} /* size: 0 */

// <0114B832> ../public/tier0/platform.h:1524
inline void Destruct<CSmartPtr<Reflection::CTypeFactory<CMotionMetricBase>::CFactoryMaker, CRefCountAccessor> >(CSmartPtr<Reflection::CTypeFactory<CMotionMetricBase>::CFactoryMaker, CRefCountAccessor>* pMemory)
{
} /* size: 0 */

// <0105AE96> ../public/tier0/platform.h:1524
inline void Destruct<CBlendAnimNode::CreateUpdateNode(CAnimGraphInitContext&) const::OrderValuePair>(OrderValuePair* pMemory)
{
} /* size: 0 */

// <00F4E5E0> ../public/tier0/platform.h:1524
inline void Destruct<CSmartPtr<CAnimMotorInstance> >(CSmartPtr<CAnimMotorInstance, CRefCountAccessor>* pMemory)
{
} /* size: 0 */

// <00F4A71F> ../public/tier0/platform.h:1524
inline void Destruct<CUtlKeyValuePair<AnimParamID, int> >(CUtlKeyValuePair<AnimParamID, int>* pMemory)
{
} /* size: 0 */

// <00F498E2> ../public/tier0/platform.h:1524
inline void Destruct<CCachedPose>(CCachedPose* pMemory)
{
} /* size: 0 */

// <00F491D0> ../public/tier0/platform.h:1524
inline void Destruct<CUtlKeyValuePair<Reflection::ClassID, CSmartPtr<Reflection::CInstanceFactory<CAnimMotorInstance, CAnimMotorBase, const CAnimMotorUpdaterBase*, const CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>&>::CFactoryMaker, CRefCountAccessor> > >(CUtlKeyValuePair<Reflection::ClassID, CSmartPtr<Reflection::CInstanceFactory<CAnimMotorInstance, CAnimMotorBase, const CA pMemory)
{
} /* size: 0 */

// <00F45C2B> ../public/tier0/platform.h:1524
inline void Destruct<CSmartPtr<CAnimParameterInstance> >(CSmartPtr<CAnimParameterInstance, CRefCountAccessor>* pMemory)
{
} /* size: 0 */

// <00F45AE0> ../public/tier0/platform.h:1524
inline void Destruct<CAnimParamHandle>(CAnimParamHandle* pMemory)
{
} /* size: 0 */

// <00F42496> ../public/tier0/platform.h:1524
inline void Destruct<CSmartPtr<Reflection::CTypeFactory<CAnimNodeBase>::CFactoryMaker, CRefCountAccessor> >(CSmartPtr<Reflection::CTypeFactory<CAnimNodeBase>::CFactoryMaker, CRefCountAccessor>* pMemory)
{
} /* size: 0 */

// <00F42128> ../public/tier0/platform.h:1524
inline void Destruct<CSmartPtr<Reflection::CTypeFactory<CAnimParameterBase>::CFactoryMaker, CRefCountAccessor> >(CSmartPtr<Reflection::CTypeFactory<CAnimParameterBase>::CFactoryMaker, CRefCountAccessor>* pMemory)
{
} /* size: 0 */

// <00E0CC38> ../public/tier0/platform.h:1524
inline void Destruct<CUtlKeyValuePair<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> > >(CUtlKeyValuePair<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >* pMemory)
{
} /* size: 0 */

// <00E0A52C> ../public/tier0/platform.h:1524
inline void Destruct<CUtlKeyValuePair<int, CSmartPtr<CAnimNodeInstanceBase> > >(CUtlKeyValuePair<int, CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor> >* pMemory)
{
} /* size: 0 */

// <00E0A42D> ../public/tier0/platform.h:1524
inline void Destruct<CUtlKeyValuePair<int, CSmartPtr<const CActivityValues> > >(CUtlKeyValuePair<int, CSmartPtr<const CActivityValues, CRefCountAccessor> >* pMemory)
{
} /* size: 0 */

// <00E0A24E> ../public/tier0/platform.h:1524
inline void Destruct<CUtlKeyValuePair<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker> > >(CUtlKeyValuePair<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor> >* pMemory)
{
} /* size: 0 */

// <00E09708> ../public/tier0/platform.h:1524
inline void Destruct<IAnimGraphSequenceFinishedListener*>(IAnimGraphSequenceFinishedListener** pMemory)
{
} /* size: 0 */

// <00E08A59> ../public/tier0/platform.h:1524
inline void Destruct<CUtlKeyValuePair<AnimParamID, const CAnimParameterBase*> >(CUtlKeyValuePair<AnimParamID, const CAnimParameterBase*>* pMemory)
{
} /* size: 0 */

// <00E089A6> ../public/tier0/platform.h:1524
inline void Destruct<CUtlKeyValuePair<AnimTagID, const CAnimTagBase*> >(CUtlKeyValuePair<AnimTagID, const CAnimTagBase*>* pMemory)
{
} /* size: 0 */

// <00E0871D> ../public/tier0/platform.h:1524
inline void Destruct<IAnimGraphLogListener*>(IAnimGraphLogListener** pMemory)
{
} /* size: 0 */

// <00E075E3> ../public/tier0/platform.h:1524
inline void Destruct<IAnimationGraphVisualizerInfo*>(IAnimationGraphVisualizerInfo** pMemory)
{
} /* size: 0 */

// <00E06B3F> ../public/tier0/platform.h:1524
inline void Destruct<AnimNodeID>(AnimNodeID* pMemory)
{
} /* size: 0 */

// <00E03263> ../public/tier0/platform.h:1524
inline void Destruct<AnimNodeLocation_t>(AnimNodeLocation_t* pMemory)
{
} /* size: 0 */

// <00C5EA3C> ../public/tier0/platform.h:1524
inline void Destruct<CAnimationDecodeOp>(CAnimationDecodeOp* pMemory)
{
} /* size: 0 */

// <00C5D09D> ../public/tier0/platform.h:1524
inline void Destruct<UserDataElementMap_t>(UserDataElementMap_t* pMemory)
{
} /* size: 0 */

// <00C5C1C7> ../public/tier0/platform.h:1524
inline void Destruct<HSequence>(HSequence* pMemory)
{
} /* size: 0 */

// <00C51AA2> ../public/tier0/platform.h:1524
inline void Destruct<CUtlVector<Quaternion> >(CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >* pMemory)
{
} /* size: 0 */

// <00C4ED84> ../public/tier0/platform.h:1524
inline void Destruct<IAnimationHelperSequenceFinishedCallback*>(IAnimationHelperSequenceFinishedCallback** pMemory)
{
} /* size: 0 */

// <00C4BC48> ../public/tier0/platform.h:1524
inline void Destruct<CAnimRetarget>(CAnimRetarget* pMemory)
{
} /* size: 0 */

// <00C4A4BC> ../public/tier0/platform.h:1524
inline void Destruct<CUtlKeyValuePair<char const*, empty_t> >(CUtlKeyValuePair<char const*, empty_t>* pMemory)
{
} /* size: 0 */

// <00C4A215> ../public/tier0/platform.h:1524
inline void Destruct<ChannelWeightlist_t::IndexWeightPair_t>(IndexWeightPair_t* pMemory)
{
} /* size: 0 */

// <00C4A02B> ../public/tier0/platform.h:1524
inline void Destruct<RequestElementWeights_t>(RequestElementWeights_t* pMemory)
{
} /* size: 0 */

// <00C49432> ../public/tier0/platform.h:1524
inline void Destruct<AnimBounds_t>(AnimBounds_t* pMemory)
{
} /* size: 0 */

// <00C4451D> ../public/tier0/platform.h:1524
inline void Destruct<BoneTableChannel>(BoneTableChannel* pMemory)
{
} /* size: 0 */

// <00C41798> ../public/tier0/platform.h:1524
inline void Destruct<CUtlMap<unsigned int, int, int, CDefLess<unsigned int> >::Node_t>(Node_t* pMemory)
{
} /* size: 0 */

// <00C4114E> ../public/tier0/platform.h:1524
inline void Destruct<AnimEvent_t>(AnimEvent_t* pMemory)
{
} /* size: 0 */

// <00C40ED5> ../public/tier0/platform.h:1524
inline void Destruct<CAnimationBucket>(CAnimationBucket* pMemory)
{
} /* size: 0 */

// <00C40BFD> ../public/tier0/platform.h:1524
inline void Destruct<CAnimPose*>(CAnimPose** pMemory)
{
} /* size: 0 */

// <00C40634> ../public/tier0/platform.h:1524
inline void Destruct<CActivityRemap>(CActivityRemap* pMemory)
{
} /* size: 0 */

// <00C3F9FB> ../public/tier0/platform.h:1524
inline void Destruct<CUtlMap<char const*, CActivityRemapCache, int, bool (*)(char const* const&, char const* const&)>::Node_t>(Node_t* pMemory)
{
} /* size: 0 */

// <00C3C905> ../public/tier0/platform.h:1524
inline void Destruct<CUtlVector<float> >(CUtlVector<float, CUtlMemory<float, int> >* pMemory)
{
} /* size: 0 */

// <00C3C78D> ../public/tier0/platform.h:1524
inline void Destruct<CUtlVector<bool> >(CUtlVector<bool, CUtlMemory<bool, int> >* pMemory)
{
} /* size: 0 */

// <00C3C69E> ../public/tier0/platform.h:1524
inline void Destruct<CUtlVector<Color> >(CUtlVector<Color, CUtlMemory<Color, int> >* pMemory)
{
} /* size: 0 */

// <00C3C606> ../public/tier0/platform.h:1524
inline void Destruct<Color>(Color* pMemory)
{
} /* size: 0 */

// <00C3C466> ../public/tier0/platform.h:1524
inline void Destruct<CUtlVector<Vector4D> >(CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >* pMemory)
{
} /* size: 0 */

// <00C38C04> ../public/tier0/platform.h:1524
inline void Destruct<BoneTableEntry>(BoneTableEntry* pMemory)
{
} /* size: 0 */

// <00C38B39> ../public/tier0/platform.h:1524
inline void Destruct<CAnimDataBuilder::CSegmentTmp>(CSegmentTmp* pMemory)
{
} /* size: 0 */

// <00C385E2> ../public/tier0/platform.h:1524
inline void Destruct<AnimEventDetectDesc_t>(AnimEventDetectDesc_t* pMemory)
{
} /* size: 0 */

// <00C38584> ../public/tier0/platform.h:1524
inline void Destruct<CAnimationHelper::FrameAdvance(matrix3x4a_t&, float, AnimationEventOccurrences_t*)::notify_t>(notify_t* pMemory)
{
} /* size: 0 */

// <00C37E4B> ../public/tier0/platform.h:1524
inline void Destruct<CAnimContainer_Imp::AnimationGroupImp_t>(AnimationGroupImp_t* pMemory)
{
} /* size: 0 */

// <00C359EA> ../public/tier0/platform.h:1524
inline void Destruct<CAnimDecodeSwizzle>(CAnimDecodeSwizzle* pMemory)
{
} /* size: 0 */

// <00C357E8> ../public/tier0/platform.h:1524
inline void Destruct<CSeqGroupInstance>(CSeqGroupInstance* pMemory)
{
} /* size: 0 */

// <00C3546F> ../public/tier0/platform.h:1524
inline void Destruct<CIKChainData_t>(CIKChainData_t* pMemory)
{
} /* size: 0 */

// <00C35409> ../public/tier0/platform.h:1524
inline void Destruct<CAnimDataChannel>(CAnimDataChannel* pMemory)
{
} /* size: 0 */

// <00C34F74> ../public/tier0/platform.h:1524
inline void Destruct<ChannelWeightlist_t>(ChannelWeightlist_t* pMemory)
{
} /* size: 0 */

// <00C34EA9> ../public/tier0/platform.h:1524
inline void Destruct<ElementRequestPattern_t>(ElementRequestPattern_t* pMemory)
{
} /* size: 0 */

// <00C2FC1F> ../public/tier0/platform.h:1524
inline void Destruct<CAnimationDecodeCacheEntry_t>(CAnimationDecodeCacheEntry_t* pMemory)
{
} /* size: 0 */

// <00C2F93C> ../public/tier0/platform.h:1524
inline void Destruct<CUtlVector<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, false>::Entry_t, int> > >(CUtlVector<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, false>::Entry_t, int> pMemory)
{
} /* size: 0 */

// <00C2F8D4> ../public/tier0/platform.h:1524
inline void Destruct<CUtlHashDict<short int, true, false>::Entry_t>(Entry_t* pMemory)
{
} /* size: 0 */

// <00C2E174> ../public/tier0/platform.h:1524
inline void Destruct<CUtlVector<CUtlHashDict<short int, true, true>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, true>::Entry_t, int> > >(CUtlVector<CUtlHashDict<short int, true, true>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, true>::Entry_t, int> > pMemory)
{
} /* size: 0 */

// <00C2E10C> ../public/tier0/platform.h:1524
inline void Destruct<CUtlHashDict<short int, true, true>::Entry_t>(Entry_t* pMemory)
{
} /* size: 0 */

// <00C2DEC0> ../public/tier0/platform.h:1524
inline void Destruct<CUtlVector<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, int> > >(CUtlVector<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<ChannelElementMap_t, true, tru pMemory)
{
} /* size: 0 */

// <00C2DE58> ../public/tier0/platform.h:1524
inline void Destruct<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t>(Entry_t* pMemory)
{
} /* size: 0 */

// <00C2DC60> ../public/tier0/platform.h:1524
inline void Destruct<CUtlVector<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlMemory<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, int> > >(CUtlVector<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlMemory<CUtlHashDict<UserDataElement_t, true, false> pMemory)
{
} /* size: 0 */

// <00C2DBF8> ../public/tier0/platform.h:1524
inline void Destruct<CUtlHashDict<UserDataElement_t, true, false>::Entry_t>(Entry_t* pMemory)
{
} /* size: 0 */

// <00C2DAB2> ../public/tier0/platform.h:1524
inline void Destruct<EventList_t>(EventList_t* pMemory)
{
} /* size: 0 */

// <00C28EA0> ../public/tier0/platform.h:1524
inline void Destruct<std::pair<LocalFlexController_t, float> >(pair<LocalFlexController_t, float>* pMemory)
{
} /* size: 0 */

// <00C28E07> ../public/tier0/platform.h:1524
inline void Destruct<ChannelElementWeights_t>(ChannelElementWeights_t* pMemory)
{
} /* size: 0 */

// <00C2420F> ../public/tier0/platform.h:1524
inline void Destruct<CIKChainJointData_t>(CIKChainJointData_t* pMemory)
{
} /* size: 0 */

// <0097D328> ../public/tier0/platform.h:1524
inline void Destruct<CCompressor<float>*>(CCompressor<float>** pMemory)
{
} /* size: 0 */

// <004BC4B2> ../public/tier0/platform.h:1524
inline void Destruct<CUtlKeyValuePair<AnimOutputID, CNodeConnection> >(CUtlKeyValuePair<AnimOutputID, CNodeConnection>* pMemory)
{
} /* size: 0 */

// <00416DDF> ../public/tier0/platform.h:1524
inline void Destruct<CUtlKeyValuePair<AnimNodeID, CSmartPtr<CAnimNodeBase> > >(CUtlKeyValuePair<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> >* pMemory)
{
} /* size: 0 */

// <004162AC> ../public/tier0/platform.h:1524
inline void Destruct<CUtlKeyValuePair<AnimNodeID, CAnimNodeBase*> >(CUtlKeyValuePair<AnimNodeID, CAnimNodeBase*>* pMemory)
{
} /* size: 0 */

// <00399AE1> ../public/tier0/platform.h:1524
inline void Destruct<IAnimReplayListener*>(IAnimReplayListener** pMemory)
{
} /* size: 0 */

// <0032ACD2> ../public/tier0/platform.h:1524
inline void Destruct<char*>(char** pMemory)
{
} /* size: 0 */

// <0032AC78> ../public/tier0/platform.h:1524
inline void Destruct<fieldtype_t>(fieldtype_t* pMemory)
{
} /* size: 0 */

// <0032ABC6> ../public/tier0/platform.h:1524
inline void Destruct<CUtlVector<char const*, CUtlMemory<char const*, int> > >(CUtlVector<char const*, CUtlMemory<char const*, int> >* pMemory)
{
} /* size: 0 */

// <0032AB6C> ../public/tier0/platform.h:1524
inline void Destruct<CCompressor<Vector>*>(CCompressor<Vector>** pMemory)
{
} /* size: 0 */

// <0032AB12> ../public/tier0/platform.h:1524
inline void Destruct<CCompressor<Quaternion>*>(CCompressor<Quaternion>** pMemory)
{
} /* size: 0 */

// <0032AAB8> ../public/tier0/platform.h:1524
inline void Destruct<CCompressor<int>*>(CCompressor<int>** pMemory)
{
} /* size: 0 */

// <0032AA5E> ../public/tier0/platform.h:1524
inline void Destruct<CCompressor<bool>*>(CCompressor<bool>** pMemory)
{
} /* size: 0 */

// <0032AA04> ../public/tier0/platform.h:1524
inline void Destruct<CCompressor<Color>*>(CCompressor<Color>** pMemory)
{
} /* size: 0 */

// <0032A9AA> ../public/tier0/platform.h:1524
inline void Destruct<CCompressor<Vector2D>*>(CCompressor<Vector2D>** pMemory)
{
} /* size: 0 */

// <0032A3C1> ../public/tier0/platform.h:1524
inline void Destruct<AnimTagID>(AnimTagID* pMemory)
{
} /* size: 0 */

// <002AEFA5> ../public/tier0/platform.h:1524
inline void Destruct<CSmartPtr<CAnimReplayFrame> >(CSmartPtr<CAnimReplayFrame, CRefCountAccessor>* pMemory)
{
} /* size: 0 */

// <002AEDDD> ../public/tier0/platform.h:1524
inline void Destruct<CSmartPtr<CMotionClip> >(CSmartPtr<CMotionClip, CRefCountAccessor>* pMemory)
{
} /* size: 0 */

// <002AEC15> ../public/tier0/platform.h:1524
inline void Destruct<CSmartPtr<CAnimTagBase> >(CSmartPtr<CAnimTagBase, CRefCountAccessor>* pMemory)
{
} /* size: 0 */

// <002AEA4D> ../public/tier0/platform.h:1524
inline void Destruct<CSmartPtr<CAnimStateConditionBase> >(CSmartPtr<CAnimStateConditionBase, CRefCountAccessor>* pMemory)
{
} /* size: 0 */

// <002AE885> ../public/tier0/platform.h:1524
inline void Destruct<CSmartPtr<CAnimStateTransition> >(CSmartPtr<CAnimStateTransition, CRefCountAccessor>* pMemory)
{
} /* size: 0 */

// <002AE701> ../public/tier0/platform.h:1524
inline void Destruct<CConnectionProxyItem>(CConnectionProxyItem* pMemory)
{
} /* size: 0 */

// <002AE557> ../public/tier0/platform.h:1524
inline void Destruct<CFootStepTriggerItem>(CFootStepTriggerItem* pMemory)
{
} /* size: 0 */

// <002AE3D3> ../public/tier0/platform.h:1524
inline void Destruct<CJiggleBoneItem>(CJiggleBoneItem* pMemory)
{
} /* size: 0 */

// <002AE20B> ../public/tier0/platform.h:1524
inline void Destruct<CSmartPtr<CMotionMetricBase> >(CSmartPtr<CMotionMetricBase, CRefCountAccessor>* pMemory)
{
} /* size: 0 */

// <002AE043> ../public/tier0/platform.h:1524
inline void Destruct<CSmartPtr<CMotionClipGroup> >(CSmartPtr<CMotionClipGroup, CRefCountAccessor>* pMemory)
{
} /* size: 0 */

// <002ADEBF> ../public/tier0/platform.h:1524
inline void Destruct<CFootLockItem>(CFootLockItem* pMemory)
{
} /* size: 0 */

// <002ADCEF> ../public/tier0/platform.h:1524
inline void Destruct<CBlend2DItem>(CBlend2DItem* pMemory)
{
} /* size: 0 */

// <002ADA33> ../public/tier0/platform.h:1524
inline void Destruct<CNodeConnection>(CNodeConnection* pMemory)
{
} /* size: 0 */

// <002AD8AF> ../public/tier0/platform.h:1524
inline void Destruct<CSolveIKChainAnimNodeChainData>(CSolveIKChainAnimNodeChainData* pMemory)
{
} /* size: 0 */

// <002AD72B> ../public/tier0/platform.h:1524
inline void Destruct<CChoiceNodeChild>(CChoiceNodeChild* pMemory)
{
} /* size: 0 */

// <002AD563> ../public/tier0/platform.h:1524
inline void Destruct<CSmartPtr<CAnimState> >(CSmartPtr<CAnimState, CRefCountAccessor>* pMemory)
{
} /* size: 0 */

// <002AD3DF> ../public/tier0/platform.h:1524
inline void Destruct<CBlendNodeChild>(CBlendNodeChild* pMemory)
{
} /* size: 0 */

// <002AD0B9> ../public/tier0/platform.h:1524
inline void Destruct<CSmartPtr<CAnimMotorBase> >(CSmartPtr<CAnimMotorBase, CRefCountAccessor>* pMemory)
{
} /* size: 0 */

// <002ACEF1> ../public/tier0/platform.h:1524
inline void Destruct<CSmartPtr<CClipProperties> >(CSmartPtr<CClipProperties, CRefCountAccessor>* pMemory)
{
} /* size: 0 */

// <002ACD29> ../public/tier0/platform.h:1524
inline void Destruct<CSmartPtr<CAnimGraphSettingsGroup> >(CSmartPtr<CAnimGraphSettingsGroup, CRefCountAccessor>* pMemory)
{
} /* size: 0 */

// <002ACBD1> ../public/tier0/platform.h:1524
inline void Destruct<CAnimState*>(CAnimState** pMemory)
{
} /* size: 0 */

// <002ACA79> ../public/tier0/platform.h:1524
inline void Destruct<CAnimNodeBase*>(CAnimNodeBase** pMemory)
{
} /* size: 0 */

// <002AC8B1> ../public/tier0/platform.h:1524
inline void Destruct<CSmartPtr<CActivityValues> >(CSmartPtr<CActivityValues, CRefCountAccessor>* pMemory)
{
} /* size: 0 */

// <002AC6E9> ../public/tier0/platform.h:1524
inline void Destruct<CSmartPtr<CParameterValue> >(CSmartPtr<CParameterValue, CRefCountAccessor>* pMemory)
{
} /* size: 0 */

// <002AC521> ../public/tier0/platform.h:1524
inline void Destruct<CSmartPtr<CAnimParameterBase> >(CSmartPtr<CAnimParameterBase, CRefCountAccessor>* pMemory)
{
} /* size: 0 */

// <002AB497> ../public/tier0/platform.h:1524
inline void Destruct<CSeqBoneMaskList>(CSeqBoneMaskList* pMemory)
{
} /* size: 0 */

// <002AAE83> ../public/tier0/platform.h:1524
inline void Destruct<CSeqSynthAnimDesc>(CSeqSynthAnimDesc* pMemory)
{
} /* size: 0 */

// <002AAAB6> ../public/tier0/platform.h:1524
inline void Destruct<CSeqS1SeqDesc>(CSeqS1SeqDesc* pMemory)
{
} /* size: 0 */

// <002AA932> ../public/tier0/platform.h:1524
inline void Destruct<CSeqPoseSetting>(CSeqPoseSetting* pMemory)
{
} /* size: 0 */

// <002AA7AE> ../public/tier0/platform.h:1524
inline void Destruct<CSeqCmdLayer>(CSeqCmdLayer* pMemory)
{
} /* size: 0 */

// <002AA5BB> ../public/tier0/platform.h:1524
inline void Destruct<CFootMotion>(CFootMotion* pMemory)
{
} /* size: 0 */

// <002AA2B3> ../public/tier0/platform.h:1524
inline void Destruct<CSeqAutoLayer>(CSeqAutoLayer* pMemory)
{
} /* size: 0 */

// <002AA12F> ../public/tier0/platform.h:1524
inline void Destruct<std::pair<CBufferString, float> >(pair<CBufferString, float>* pMemory)
{
} /* size: 0 */

// <002A90B3> ../public/tier0/platform.h:1524
inline void Destruct<CAnimDecoder>(CAnimDecoder* pMemory)
{
} /* size: 0 */

// <002A8A0A> ../public/tier0/platform.h:1524
inline void Destruct<CAnimDesc>(CAnimDesc* pMemory)
{
} /* size: 0 */

// <002A8846> ../public/tier0/platform.h:1524
inline void Destruct<CAnimLocalHierarchy>(CAnimLocalHierarchy* pMemory)
{
} /* size: 0 */

// <002A86C2> ../public/tier0/platform.h:1524
inline void Destruct<CAnimActivity>(CAnimActivity* pMemory)
{
} /* size: 0 */

// <002A853E> ../public/tier0/platform.h:1524
inline void Destruct<CAnimAnimEvent>(CAnimAnimEvent* pMemory)
{
} /* size: 0 */

// <002A83BA> ../public/tier0/platform.h:1524
inline void Destruct<CAnimMovement>(CAnimMovement* pMemory)
{
} /* size: 0 */

// <002A8236> ../public/tier0/platform.h:1524
inline void Destruct<CAnimFrameBlockAnim>(CAnimFrameBlockAnim* pMemory)
{
} /* size: 0 */

// <002A7EAE> ../public/tier0/platform.h:1524
inline void Destruct<CAnimMorphDifference>(CAnimMorphDifference* pMemory)
{
} /* size: 0 */

// <002A7D2A> ../public/tier0/platform.h:1524
inline void Destruct<CAnimBoneDifference>(CAnimBoneDifference* pMemory)
{
} /* size: 0 */

// <0014291B> ../public/tier0/platform.h:1524
inline void Destruct<CIKChainContext>(CIKChainContext* pMemory)
{
} /* size: 0 */

// <001428B3> ../public/tier0/platform.h:1524
inline void Destruct<CTraceRequest*>(CTraceRequest** pMemory)
{
} /* size: 0 */

// <000F0401> ../public/tier0/platform.h:1524
inline void Destruct<JointTreeNode*>(JointTreeNode** pMemory)
{
} /* size: 0 */

// <000ED642> ../public/tier0/platform.h:1524
inline void Destruct<CUtlMap<int, JointTreeNode*>::Node_t>(Node_t* pMemory)
{
} /* size: 0 */

// <000EBCC2> ../public/tier0/platform.h:1524
inline void Destruct<CIKChainOldData_t>(CIKChainOldData_t* pMemory)
{
} /* size: 0 */

// <00089F40> ../public/tier0/platform.h:1524
inline void Destruct<IIKRuleContext*>(IIKRuleContext** pMemory)
{
} /* size: 0 */

// <00089EB3> ../public/tier0/platform.h:1524
inline void Destruct<CIKChainRuleInterpolationState>(CIKChainRuleInterpolationState* pMemory)
{
} /* size: 0 */

// <00C2CA34> ../public/tier0/platform.h:1524
inline void Destruct<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlHashtable<CDescriptorSetVulkan*>*, int, CDefLess<CWeakHandle<InfoForResourceTypeCTextureBase> > >::Node_t>(Node_t* pMemory)
{
} /* size: 0 */

// <00C2C4D1> ../public/tier0/platform.h:1524
inline void Destruct<CUtlKeyValuePair<CDescriptorSetVulkan*, empty_t> >(CUtlKeyValuePair<CDescriptorSetVulkan*, empty_t>* pMemory)
{
} /* size: 0 */

// <00BBBA36> ../public/tier0/platform.h:1524
inline void Destruct<CUtlKeyValuePair<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t>::IndirectIndex, empty_t> >(CUtlKeyValuePair<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t>::IndirectIndex, pMemory)
{
} /* size: 0 */

// <00BBB890> ../public/tier0/platform.h:1524
inline void Destruct<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t> >(CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t>* pMemory)
{
} /* size: 0 */

// <00BBB76E> ../public/tier0/platform.h:1524
inline void Destruct<CUtlKeyValuePair<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t>::IndirectIndex, empty_t> >(CUtlKeyValuePair<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t>::IndirectIndex pMemory)
{
} /* size: 0 */

// <00BBB5C8> ../public/tier0/platform.h:1524
inline void Destruct<CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t> >(CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t>* pMemory)
{
} /* size: 0 */

// <00B6E962> ../public/tier0/platform.h:1524
inline void Destruct<AsyncReadbackVulkan_t>(AsyncReadbackVulkan_t* pMemory)
{
} /* size: 0 */

// <00B6E7C8> ../public/tier0/platform.h:1524
inline void Destruct<VulkanCommandBuffer_t*>(VulkanCommandBuffer_t** pMemory)
{
} /* size: 0 */

// <00B6E58D> ../public/tier0/platform.h:1524
inline void Destruct<CRenderThreadVulkan::SemaphoreFenceVulkan_t>(SemaphoreFenceVulkan_t* pMemory)
{
} /* size: 0 */

// <00B6E40C> ../public/tier0/platform.h:1524
inline void Destruct<CRenderThreadVulkan::PresentFenceVulkan_t>(PresentFenceVulkan_t* pMemory)
{
} /* size: 0 */

// <00B6E2A5> ../public/tier0/platform.h:1524
inline void Destruct<VkSemaphore_T*>(VkSemaphore_T** pMemory)
{
} /* size: 0 */

// <00B655B7> ../public/tier0/platform.h:1524
inline void Destruct<VkDeviceFaultAddressInfoEXT>(VkDeviceFaultAddressInfoEXT* pMemory)
{
} /* size: 0 */

// <00B654D4> ../public/tier0/platform.h:1524
inline void Destruct<VkDeviceFaultVendorInfoEXT>(VkDeviceFaultVendorInfoEXT* pMemory)
{
} /* size: 0 */

// <00B06F25> ../public/tier0/platform.h:1524
inline void Destruct<CRenderPipelineFrameStats>(CRenderPipelineFrameStats* pMemory)
{
} /* size: 0 */

// <00B06E1F> ../public/tier0/platform.h:1524
inline void Destruct<CRenderPipelineStatsVulkan::OutstandingFrame_t>(OutstandingFrame_t* pMemory)
{
} /* size: 0 */

// <00B0621B> ../public/tier0/platform.h:1524
inline void Destruct<CUtlVector<CRenderPipelineStatsVulkan::SampleQueries_t>*>(CUtlVector<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::SampleQueries_t, int> >* pMemory)
{
} /* size: 0 */

// <00B060D7> ../public/tier0/platform.h:1524
inline void Destruct<CUtlVector<RenderPipelineSample_t>*>(CUtlVector<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >** pMemory)
{
} /* size: 0 */

// <00B05F1B> ../public/tier0/platform.h:1524
inline void Destruct<VulkanQuery_t*>(VulkanQuery_t** pMemory)
{
} /* size: 0 */

// <00B036C9> ../public/tier0/platform.h:1524
inline void Destruct<CRenderPipelineStatsVulkan::SampleQueries_t>(SampleQueries_t* pMemory)
{
} /* size: 0 */

// <00B035F4> ../public/tier0/platform.h:1524
inline void Destruct<RenderPipelineSample_t>(RenderPipelineSample_t* pMemory)
{
} /* size: 0 */

// <00ABD6F0> ../public/tier0/platform.h:1524
inline void Destruct<CUtlKeyValuePair<short unsigned int, empty_t> >(CUtlKeyValuePair<short unsigned int, empty_t>* pMemory)
{
} /* size: 0 */

// <00ABD310> ../public/tier0/platform.h:1524
inline void Destruct<CUtlMap<CRenderPassDesc, CRenderPassVulkan*>::Node_t>(Node_t* pMemory)
{
} /* size: 0 */

// <00ABBBFB> ../public/tier0/platform.h:1524
inline void Destruct<VkFramebuffer_T*>(VkFramebuffer_T** pMemory)
{
} /* size: 0 */

// <00ABBB7C> ../public/tier0/platform.h:1524
inline void Destruct<VulkanRenderPassImageLayout_t>(VulkanRenderPassImageLayout_t* pMemory)
{
} /* size: 0 */

// <00ABBAE4> ../public/tier0/platform.h:1524
inline void Destruct<CRenderPassVulkan::VulkanSubpassInfo_t>(VulkanSubpassInfo_t* pMemory)
{
} /* size: 0 */

// <00ABB96C> ../public/tier0/platform.h:1524
inline void Destruct<VkFormat>(VkFormat* pMemory)
{
} /* size: 0 */

// <009DEC65> ../public/tier0/platform.h:1524
inline void Destruct<CRenderResource*>(CRenderResource** pMemory)
{
} /* size: 0 */

// <009D68D3> ../public/tier0/platform.h:1524
inline void Destruct<CRenderDeviceVulkan::FencedVulkanTextureRelease_t>(FencedVulkanTextureRelease_t* pMemory)
{
} /* size: 0 */

// <009D65E7> ../public/tier0/platform.h:1524
inline void Destruct<CRenderDeviceVulkan::FencedVertexBufferRelease_t>(FencedVertexBufferRelease_t* pMemory)
{
} /* size: 0 */

// <009D6533> ../public/tier0/platform.h:1524
inline void Destruct<CRenderDeviceVulkan::FencedIndexBufferRelease_t>(FencedIndexBufferRelease_t* pMemory)
{
} /* size: 0 */

// <009D6429> ../public/tier0/platform.h:1524
inline void Destruct<CVertexBufferVulkan*>(CVertexBufferVulkan** pMemory)
{
} /* size: 0 */

// <009D617D> ../public/tier0/platform.h:1524
inline void Destruct<CIndexBufferVulkan*>(CIndexBufferVulkan** pMemory)
{
} /* size: 0 */

// <009CFA9D> ../public/tier0/platform.h:1524
inline void Destruct<DepthStencilStateVulkan_t>(DepthStencilStateVulkan_t* pMemory)
{
} /* size: 0 */

// <009CF8BD> ../public/tier0/platform.h:1524
inline void Destruct<BlendStateVulkan_t>(BlendStateVulkan_t* pMemory)
{
} /* size: 0 */

// <009CF0CC> ../public/tier0/platform.h:1524
inline void Destruct<CVertexShaderVulkan>(CVertexShaderVulkan* pMemory)
{
} /* size: 0 */

// <009CE15C> ../public/tier0/platform.h:1524
inline void Destruct<CDescriptorSetVulkan*>(CDescriptorSetVulkan** pMemory)
{
} /* size: 0 */

// <009CDFDB> ../public/tier0/platform.h:1524
inline void Destruct<RenderDescriptorSetHandle_t__*>(RenderDescriptorSetHandle_t__** pMemory)
{
} /* size: 0 */

// <009CDEDD> ../public/tier0/platform.h:1524
inline void Destruct<CUtlKeyValuePair<CUtlStringToken, RenderDescriptorSetHandle_t__*> >(CUtlKeyValuePair<CUtlStringToken, RenderDescriptorSetHandle_t__*>* pMemory)
{
} /* size: 0 */

// <009CDD43> ../public/tier0/platform.h:1524
inline void Destruct<CShaderVulkanBase*>(CShaderVulkanBase** pMemory)
{
} /* size: 0 */

// <009CDBC2> ../public/tier0/platform.h:1524
inline void Destruct<VulkanSemaphore_t*>(VulkanSemaphore_t** pMemory)
{
} /* size: 0 */

// <009CB372> ../public/tier0/platform.h:1524
inline void Destruct<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, VulkanDeviceSpecificTexture_t, unsigned int, CDefLess<CWeakHandle<InfoForResourceTypeCTextureBase> > >::Node_t>(Node_t* pMemory)
{
} /* size: 0 */

// <009CAFEB> ../public/tier0/platform.h:1524
inline void Destruct<CUtlMap<RenderResourceHandle_t__*, VulkanDeviceSpecificBuffer_t, unsigned int, CDefLess<RenderResourceHandle_t__*> >::Node_t>(Node_t* pMemory)
{
} /* size: 0 */

// <009CACA2> ../public/tier0/platform.h:1524
inline void Destruct<CUtlMap<RenderDescriptorSetHandle_t__*, VulkanDeviceSpecificDescriptorSet_t, unsigned int, CDefLess<RenderDescriptorSetHandle_t__*> >::Node_t>(Node_t* pMemory)
{
} /* size: 0 */

// <009CA959> ../public/tier0/platform.h:1524
inline void Destruct<CUtlMap<RenderRayTracePipelineHandle_t__*, VulkanDeviceSpecificRayTracePipeline_t, unsigned int, CDefLess<RenderRayTracePipelineHandle_t__*> >::Node_t>(Node_t* pMemory)
{
} /* size: 0 */

// <009C1089> ../public/tier0/platform.h:1524
inline void Destruct<CUtlMap<unsigned int, unsigned int, short unsigned int, CDefLess<unsigned int> >::Node_t>(Node_t* pMemory)
{
} /* size: 0 */

// <009BCEE2> ../public/tier0/platform.h:1524
inline void Destruct<CUtlKeyValuePair<CInputLayoutDict<CInputLayoutVulkan>::RenderInputLayoutDesc_t, CInputLayoutVulkan*> >(CUtlKeyValuePair<CInputLayoutDict<CInputLayoutVulkan>::RenderInputLayoutDesc_t, CInputLayoutVulkan*>* pMemory)
{
} /* size: 0 */

// <009BBF6A> ../public/tier0/platform.h:1524
inline void Destruct<ConcatLayoutResult_t>(ConcatLayoutResult_t* pMemory)
{
} /* size: 0 */

// <009B6A3E> ../public/tier0/platform.h:1524
inline void Destruct<CShaderVulkanBase::DescriptorSetBindings_t>(DescriptorSetBindings_t* pMemory)
{
} /* size: 0 */

// <009B670C> ../public/tier0/platform.h:1524
inline void Destruct<VfxDescriptor_t>(VfxDescriptor_t* pMemory)
{
} /* size: 0 */

// <009B668D> ../public/tier0/platform.h:1524
inline void Destruct<ShaderStorageBufferBinding_t>(ShaderStorageBufferBinding_t* pMemory)
{
} /* size: 0 */

// <009B660E> ../public/tier0/platform.h:1524
inline void Destruct<CShaderVulkanBase::DescriptorSetBindings_t::TextureBinding_t>(TextureBinding_t* pMemory)
{
} /* size: 0 */

// <009AAB18> ../public/tier0/platform.h:1524
inline void Destruct<CRenderDeviceVulkan::VulkanTextureReleaseResources_t>(VulkanTextureReleaseResources_t* pMemory)
{
} /* size: 0 */

// <0083958D> ../public/tier0/platform.h:1524
inline void Destruct<QueryObjectInternalVulkan_t*>(QueryObjectInternalVulkan_t** pMemory)
{
} /* size: 0 */

// <007AA4F3> ../public/tier0/platform.h:1524
inline void Destruct<VkAccelerationStructureGeometryKHR>(VkAccelerationStructureGeometryKHR* pMemory)
{
} /* size: 0 */

// <007AA3A0> ../public/tier0/platform.h:1524
inline void Destruct<VkAccelerationStructureBuildRangeInfoKHR>(VkAccelerationStructureBuildRangeInfoKHR* pMemory)
{
} /* size: 0 */

// <007AA24D> ../public/tier0/platform.h:1524
inline void Destruct<const VkAccelerationStructureBuildRangeInfoKHR*>(const VkAccelerationStructureBuildRangeInfoKHR ** pMemory)
{
} /* size: 0 */

// <007AA035> ../public/tier0/platform.h:1524
inline void Destruct<VkAccelerationStructureInstanceKHR>(VkAccelerationStructureInstanceKHR* pMemory)
{
} /* size: 0 */

// <007A984F> ../public/tier0/platform.h:1524
inline void Destruct<VkDescriptorSetLayout_T*>(VkDescriptorSetLayout_T** pMemory)
{
} /* size: 0 */

// <0070452B> ../public/tier0/platform.h:1524
inline void Destruct<CUtlKeyValuePair<PipelineCreateInfo_t, PipelineObjectVulkan_t*> >(CUtlKeyValuePair<PipelineCreateInfo_t, PipelineObjectVulkan_t*>* pMemory)
{
} /* size: 0 */

// <007041EF> ../public/tier0/platform.h:1524
inline void Destruct<CUtlKeyValuePair<VkRenderPass_T*, empty_t> >(CUtlKeyValuePair<VkRenderPass_T*, empty_t>* pMemory)
{
} /* size: 0 */

// <00704108> ../public/tier0/platform.h:1524
inline void Destruct<CUtlKeyValuePair<PipelineLayoutCreateInfo_t, PipelineLayoutVulkan_t> >(CUtlKeyValuePair<PipelineLayoutCreateInfo_t, PipelineLayoutVulkan_t>* pMemory)
{
} /* size: 0 */

// <007009E5> ../public/tier0/platform.h:1524
inline void Destruct<VkSampler_T*>(VkSampler_T** pMemory)
{
} /* size: 0 */

// <006FF56D> ../public/tier0/platform.h:1524
inline void Destruct<VkPipelineColorBlendAttachmentState>(VkPipelineColorBlendAttachmentState* pMemory)
{
} /* size: 0 */

// <006F8E5A> ../public/tier0/platform.h:1524
inline void Destruct<VkPipeline_T*>(VkPipeline_T** pMemory)
{
} /* size: 0 */

// <0065A893> ../public/tier0/platform.h:1524
inline void Destruct<CUtlMap<long unsigned int, CSamplerStateDesc*, short unsigned int, CDefLess<long unsigned int> >::Node_t>(Node_t* pMemory)
{
} /* size: 0 */

// <0065A535> ../public/tier0/platform.h:1524
inline void Destruct<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeDescriptorSetLayout_t*, short unsigned int, CDefLess<long unsigned int> >::Node_t>(Node_t* pMemory)
{
} /* size: 0 */

// <00659AD7> ../public/tier0/platform.h:1524
inline void Destruct<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizePipelineLayout_t*, short unsigned int, CDefLess<long unsigned int> >::Node_t>(Node_t* pMemory)
{
} /* size: 0 */

// <0065979D> ../public/tier0/platform.h:1524
inline void Destruct<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeRenderPass_t*, short unsigned int, CDefLess<long unsigned int> >::Node_t>(Node_t* pMemory)
{
} /* size: 0 */

// <0065896C> ../public/tier0/platform.h:1524
inline void Destruct<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeComputePipeline_t*, unsigned int, CDefLess<long unsigned int> >::Node_t>(Node_t* pMemory)
{
} /* size: 0 */

// <00657B17> ../public/tier0/platform.h:1524
inline void Destruct<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeGraphicsPipeline_t*, unsigned int, CDefLess<long unsigned int> >::Node_t>(Node_t* pMemory)
{
} /* size: 0 */

// <006578BC> ../public/tier0/platform.h:1524
inline void Destruct<const CFossilizeStateCreator::FossilizeGraphicsPipeline_t*>(const FossilizeGraphicsPipeline_t ** pMemory)
{
} /* size: 0 */

// <0065771C> ../public/tier0/platform.h:1524
inline void Destruct<const CFossilizeStateCreator::FossilizeComputePipeline_t*>(const FossilizeComputePipeline_t ** pMemory)
{
} /* size: 0 */

// <00657669> ../public/tier0/platform.h:1524
inline void Destruct<CUtlKeyValuePair<long unsigned int, const CShaderVulkanBase*> >(CUtlKeyValuePair<long unsigned int, const CShaderVulkanBase*>* pMemory)
{
} /* size: 0 */

// <006573AB> ../public/tier0/platform.h:1524
inline void Destruct<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeShaderModule_t*, unsigned int, CDefLess<long unsigned int> >::Node_t>(Node_t* pMemory)
{
} /* size: 0 */

// <00656B2F> ../public/tier0/platform.h:1524
inline void Destruct<CUtlMap<const CShaderVulkanBase*, CUtlLinkedList<CFossilizeStateCreator::FossilizeShaderModule_t*>*, short unsigned int, CDefLess<const CShaderVulkanBase*> >::Node_t>(Node_t* pMemory)
{
} /* size: 0 */

// <00655931> ../public/tier0/platform.h:1524
inline void Destruct<CFossilizeStateCreator::FossilizeShaderModule_t*>(FossilizeShaderModule_t** pMemory)
{
} /* size: 0 */

// <005D8666> ../public/tier0/platform.h:1524
inline void Destruct<VulkanDescriptorSetPool_t>(VulkanDescriptorSetPool_t* pMemory)
{
} /* size: 0 */

// <0058C01E> ../public/tier0/platform.h:1524
inline void Destruct<VmaPool_T*>(VmaPool_T** pMemory)
{
} /* size: 0 */

// <00589C80> ../public/tier0/platform.h:1524
inline void Destruct<CMemoryManagerVulkan::FencedResourceList_t>(FencedResourceList_t* pMemory)
{
} /* size: 0 */

// <00589994> ../public/tier0/platform.h:1524
inline void Destruct<VulkanMemoryPool_t*>(VulkanMemoryPool_t** pMemory)
{
} /* size: 0 */

// <0058978B> ../public/tier0/platform.h:1524
inline void Destruct<CMemoryManagerVulkan::VmaQueuedDeletion_t>(VmaQueuedDeletion_t* pMemory)
{
} /* size: 0 */

// <004FEB14> ../public/tier0/platform.h:1524
inline void Destruct<CUtlKeyValuePair<CVulkanImage*, CImageLayoutTracker::ImageTransition_t> >(CUtlKeyValuePair<CVulkanImage*, CImageLayoutTracker::ImageTransition_t>* pMemory)
{
} /* size: 0 */

// <004D6CAA> ../public/tier0/platform.h:1524
inline void Destruct<CUtlKeyValuePair<VulkanFramebufferState_t, VkFramebuffer_T*> >(CUtlKeyValuePair<VulkanFramebufferState_t, VkFramebuffer_T*>* pMemory)
{
} /* size: 0 */

// <004D6BF7> ../public/tier0/platform.h:1524
inline void Destruct<CUtlKeyValuePair<VulkanFramebufferState_t, VkRenderPass_T*> >(CUtlKeyValuePair<VulkanFramebufferState_t, VkRenderPass_T*>* pMemory)
{
} /* size: 0 */

// <004D4DFE> ../public/tier0/platform.h:1524
inline void Destruct<VulkanFramebufferState_t>(VulkanFramebufferState_t* pMemory)
{
} /* size: 0 */

// <004A73C9> ../public/tier0/platform.h:1524
inline void Destruct<CUtlVector<VkDescriptorSetLayoutBinding> >(CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >* pMemory)
{
} /* size: 0 */

// <004A733D> ../public/tier0/platform.h:1524
inline void Destruct<VkDescriptorSetLayoutBinding>(VkDescriptorSetLayoutBinding* pMemory)
{
} /* size: 0 */

// <004A72B1> ../public/tier0/platform.h:1524
inline void Destruct<VkPushConstantRange>(VkPushConstantRange* pMemory)
{
} /* size: 0 */

// <004A7249> ../public/tier0/platform.h:1524
inline void Destruct<PipelineLayoutImmutableSampler_t>(PipelineLayoutImmutableSampler_t* pMemory)
{
} /* size: 0 */

// <004A6D08> ../public/tier0/platform.h:1524
inline void Destruct<VkWriteDescriptorSet>(VkWriteDescriptorSet* pMemory)
{
} /* size: 0 */

// <004A699E> ../public/tier0/platform.h:1524
inline void Destruct<VkDescriptorBufferInfo>(VkDescriptorBufferInfo* pMemory)
{
} /* size: 0 */

// <004A6784> ../public/tier0/platform.h:1524
inline void Destruct<VkAccelerationStructureKHR_T*>(VkAccelerationStructureKHR_T** pMemory)
{
} /* size: 0 */

// <004A66F8> ../public/tier0/platform.h:1524
inline void Destruct<VkWriteDescriptorSetAccelerationStructureKHR>(VkWriteDescriptorSetAccelerationStructureKHR* pMemory)
{
} /* size: 0 */

// <00448F50> ../public/tier0/platform.h:1524
inline void Destruct<CUtlKeyValuePair<RenderResourceHandle_t__*, RenderDescriptorBinding_t> >(CUtlKeyValuePair<RenderResourceHandle_t__*, RenderDescriptorBinding_t>* pMemory)
{
} /* size: 0 */

// <00448F00> ../public/tier0/platform.h:1524
inline void Destruct<CTextureInfoId>(CTextureInfoId* pMemory)
{
} /* size: 0 */

// <00447F26> ../public/tier0/platform.h:1524
inline void Destruct<CBufferedDescriptorSetVulkan::Set>(Set* pMemory)
{
} /* size: 0 */

// <0042684D> ../public/tier0/platform.h:1524
inline void Destruct<RenderBufferBarrier_t>(RenderBufferBarrier_t* pMemory)
{
} /* size: 0 */

// <0042610D> ../public/tier0/platform.h:1524
inline void Destruct<CBarrierHelperVulkan::BufferState_t>(BufferState_t* pMemory)
{
} /* size: 0 */

// <00426038> ../public/tier0/platform.h:1524
inline void Destruct<CBarrierHelperVulkan::UAVState_t>(UAVState_t* pMemory)
{
} /* size: 0 */

// <004098B1> ../public/tier0/platform.h:1524
inline void Destruct<CAsyncCompileHelperVulkan::ShaderWaitEntry_t>(ShaderWaitEntry_t* pMemory)
{
} /* size: 0 */

// <00396A34> ../public/tier0/platform.h:1524
inline void Destruct<TextureStreamingPriorityInfo_t>(TextureStreamingPriorityInfo_t* pMemory)
{
} /* size: 0 */

// <0030416F> ../public/tier0/platform.h:1524
inline void Destruct<CTextureManagerBase::CacheRequest_t>(CacheRequest_t* pMemory)
{
} /* size: 0 */

// <00303E95> ../public/tier0/platform.h:1524
inline void Destruct<ResourceLoadCompletedMessage_t>(ResourceLoadCompletedMessage_t* pMemory)
{
} /* size: 0 */

// <00303E25> ../public/tier0/platform.h:1524
inline void Destruct<ResourceLoadFailedMessage_t>(ResourceLoadFailedMessage_t* pMemory)
{
} /* size: 0 */

// <00300345> ../public/tier0/platform.h:1524
inline void Destruct<TextureCreationExtraData_t>(TextureCreationExtraData_t* pMemory)
{
} /* size: 0 */

// <002FBE2D> ../public/tier0/platform.h:1524
inline void Destruct<std::pair<ResourceId_t, long unsigned int> >(pair<ResourceId_t, long unsigned int>* pMemory)
{
} /* size: 0 */

// <002FB5DD> ../public/tier0/platform.h:1524
inline void Destruct<ITextureResidencyListener*>(ITextureResidencyListener** pMemory)
{
} /* size: 0 */

// <002FACFA> ../public/tier0/platform.h:1524
inline void Destruct<CTextureManagerBase::ExternalTextureInfo_t>(ExternalTextureInfo_t* pMemory)
{
} /* size: 0 */

// <002FA7AA> ../public/tier0/platform.h:1524
inline void Destruct<CTextureManagerBase::ToCacheHandle_t>(ToCacheHandle_t* pMemory)
{
} /* size: 0 */

// <002A22E8> ../public/tier0/platform.h:1524
inline void Destruct<CTextureSequenceRecord_t>(CTextureSequenceRecord_t* pMemory)
{
} /* size: 0 */

// <001E415B> ../public/tier0/platform.h:1524
inline void Destruct<void (*)()>(void ()(void)** pMemory)
{
} /* size: 0 */

// <001E4003> ../public/tier0/platform.h:1524
inline void Destruct<IRenderDeviceEventListener*>(IRenderDeviceEventListener** pMemory)
{
} /* size: 0 */

// <001E3E75> ../public/tier0/platform.h:1524
inline void Destruct<CRenderDeviceMgrBase::AdapterInfo_t>(AdapterInfo_t* pMemory)
{
} /* size: 0 */

// <00173940> ../public/tier0/platform.h:1524
inline void Destruct<CSwapChainBase*>(CSwapChainBase** pMemory)
{
} /* size: 0 */

// <0017135A> ../public/tier0/platform.h:1524
inline void Destruct<CRenderDeviceBase::MultiViewCBPool_t>(MultiViewCBPool_t* pMemory)
{
} /* size: 0 */

// <00170E5F> ../public/tier0/platform.h:1524
inline void Destruct<IMaxSwapChainDimensionsChangedListener*>(IMaxSwapChainDimensionsChangedListener** pMemory)
{
} /* size: 0 */

// <00086D7D> ../public/tier0/platform.h:1524
inline void Destruct<RBNode_t*>(RBNode_t** pMemory)
{
} /* size: 0 */

// <00079744> ../public/tier0/platform.h:1524
inline void Destruct<COcclusionQueryMgr::OcclusionQueryObject_t>(OcclusionQueryObject_t* pMemory)
{
} /* size: 0 */

// <00294304> ../../public/tier0/platform.h:1524
inline void Destruct<CVfxFunctionAttribute>(CVfxFunctionAttribute* pMemory)
{
} /* size: 0 */

// <0029388A> ../../public/tier0/platform.h:1524
inline void Destruct<CUtlKeyValuePair<CUtlString, CBufferString> >(CUtlKeyValuePair<CUtlString, CBufferString>* pMemory)
{
} /* size: 0 */

// <0018C73B> ../../public/tier0/platform.h:1524
inline void Destruct<CUtlMap<char const*, CUtlBuffer*, int, bool (*)(char const* const&, char const* const&)>::Node_t>(Node_t* pMemory)
{
} /* size: 0 */

// <00174451> ../../public/tier0/platform.h:1524
inline void Destruct<CVfxSpirVReflect::GetActiveUniformBlocks(CUtlVector<VfxUniformBlockInfo_t>&) const::HiddenUAVCounterMapping_t>(HiddenUAVCounterMapping_t* pMemory)
{
} /* size: 0 */

// <001743DC> ../../public/tier0/platform.h:1524
inline void Destruct<CVfxSpirVReflect::GetActiveUniformBlocks(CUtlVector<VfxUniformBlockInfo_t>&) const::HiddenUAVCounterMappingDXC_t>(HiddenUAVCounterMappingDXC_t* pMemory)
{
} /* size: 0 */

// <000B987B> ../../public/tier0/platform.h:1524
inline void Destruct<CUtlMap<CUtlString, CVfxAnnotation>::Node_t>(Node_t* pMemory)
{
} /* size: 0 */

// <000B94A8> ../../public/tier0/platform.h:1524
inline void Destruct<VfxUniformInfo_t>(VfxUniformInfo_t* pMemory)
{
} /* size: 0 */

// <000B93B9> ../../public/tier0/platform.h:1524
inline void Destruct<VfxUniformBlockInfo_t>(VfxUniformBlockInfo_t* pMemory)
{
} /* size: 0 */

// <000B9083> ../../public/tier0/platform.h:1524
inline void Destruct<CUtlMap<CUtlString, CVfxParsedShaderParam*>::Node_t>(Node_t* pMemory)
{
} /* size: 0 */

// <005A3F81> ../public/tier0/platform.h:1524
inline void Destruct<CUtlStringTokenSystem::CTokenStringAndSource>(CTokenStringAndSource* pMemory)
{
} /* size: 0 */

// <00564B6D> ../public/tier0/platform.h:1524
inline void Destruct<CUtlVector<CUtlHashDict<void*>::Entry_t, CUtlMemory<CUtlHashDict<void*>::Entry_t, int> > >(CUtlVector<CUtlHashDict<void*>::Entry_t, CUtlMemory<CUtlHashDict<void*>::Entry_t, int> >* pMemory)
{
} /* size: 0 */

// <00564B05> ../public/tier0/platform.h:1524
inline void Destruct<CUtlHashDict<void*>::Entry_t>(Entry_t* pMemory)
{
} /* size: 0 */

// <00531FB1> ../public/tier0/platform.h:1524
inline void Destruct<CUtl3DAllocator2::Node3D_t>(Node3D_t* pMemory)
{
} /* size: 0 */

// <00510F46> ../public/tier0/platform.h:1524
inline void Destruct<float const*>(const float ** pMemory)
{
} /* size: 0 */

// <004B4D68> ../public/tier0/platform.h:1524
inline void Destruct<CUtlMap<char const*, int, short unsigned int, bool (*)(char const* const&, char const* const&)>::Node_t>(Node_t* pMemory)
{
} /* size: 0 */

// <00476A11> ../public/tier0/platform.h:1524
inline void Destruct<CCallStackStatsGatherer_Base*>(CCallStackStatsGatherer_Base** pMemory)
{
} /* size: 0 */

// <003FFAE2> ../public/tier0/platform.h:1524
inline void Destruct<CSparseMatrix::NonZeroValueDescriptor_t>(NonZeroValueDescriptor_t* pMemory)
{
} /* size: 0 */

// <003FF731> ../public/tier0/platform.h:1524
inline void Destruct<CSparseMatrix::RowDescriptor_t>(RowDescriptor_t* pMemory)
{
} /* size: 0 */

// <0025D069> ../public/tier0/platform.h:1524
inline void Destruct<CUtlKeyValuePair<unsigned int, CKeyValuesSystem::SharedStringData_t*> >(CUtlKeyValuePair<unsigned int, CKeyValuesSystem::SharedStringData_t*>* pMemory)
{
} /* size: 0 */

// <0025CF6B> ../public/tier0/platform.h:1524
inline void Destruct<CUtlKeyValuePair<CKeyValuesSystem::SharedStringData_t*, CInterlockedIntT<int> > >(CUtlKeyValuePair<CKeyValuesSystem::SharedStringData_t*, CInterlockedIntT<int, 4> >* pMemory)
{
} /* size: 0 */

// <0025B8F2> ../public/tier0/platform.h:1524
inline void Destruct<CKeyValuesSystem::IndexedString_t>(IndexedString_t* pMemory)
{
} /* size: 0 */

// <0025B74E> ../public/tier0/platform.h:1524
inline void Destruct<CUtlMap<HKeySymbol, bool>::Node_t>(Node_t* pMemory)
{
} /* size: 0 */

// <00238144> ../public/tier0/platform.h:1524
inline void Destruct<KVJSONParserStackEntry_t>(KVJSONParserStackEntry_t* pMemory)
{
} /* size: 0 */

// <001CAC1F> ../public/tier0/platform.h:1524
inline void Destruct<CThreadPool::MainThreadjob>(MainThreadjob* pMemory)
{
} /* size: 0 */

// <001C9947> ../public/tier0/platform.h:1524
inline void Destruct<CAsyncScheduledFunctionManager::scheduled_call_t>(scheduled_call_t* pMemory)
{
} /* size: 0 */

// <001C95ED> ../public/tier0/platform.h:1524
inline void Destruct<ThreadPoolTest::CCountJob>(CCountJob* pMemory)
{
} /* size: 0 */

// <001971FB> ../public/tier0/platform.h:1524
inline void Destruct<CFilterString::OrGroup_t>(OrGroup_t* pMemory)
{
} /* size: 0 */

// <00196B41> ../public/tier0/platform.h:1524
inline void Destruct<CFilterString::MatchString_t>(MatchString_t* pMemory)
{
} /* size: 0 */

// <00127DE5> ../public/tier0/platform.h:1524
inline void Destruct<CEventId::SubscribedQueue_t>(SubscribedQueue_t* pMemory)
{
} /* size: 0 */

// <00127897> ../public/tier0/platform.h:1524
inline void Destruct<CEventId>(CEventId* pMemory)
{
} /* size: 0 */

// <00118755> ../public/tier0/platform.h:1524
inline void Destruct<CUtlHandleTable<void, 16>::EntryType_t>(EntryType_t* pMemory)
{
} /* size: 0 */

// <000CAAC5> ../public/tier0/platform.h:1524
inline void Destruct<CConCommandHash::HashEntry_t>(HashEntry_t* pMemory)
{
} /* size: 0 */

// <000CA196> ../public/tier0/platform.h:1524
inline void Destruct<CCvar::QueuedConVarSet_t>(QueuedConVarSet_t* pMemory)
{
} /* size: 0 */

// <00162BEF> ../public/tier0/platform.h:1524
inline void Destruct<CUtlKeyValuePair<unsigned int, const CResourceDiskStruct*> >(CUtlKeyValuePair<unsigned int, const CResourceDiskStruct*>* pMemory)
{
} /* size: 0 */

// <00162AF1> ../public/tier0/platform.h:1524
inline void Destruct<CUtlKeyValuePair<unsigned int, const CResourceDiskEnum*> >(CUtlKeyValuePair<unsigned int, const CResourceDiskEnum*>* pMemory)
{
} /* size: 0 */

// <001629F3> ../public/tier0/platform.h:1524
inline void Destruct<CUtlKeyValuePair<long long unsigned int, char const*> >(CUtlKeyValuePair<long long unsigned int, char const*>* pMemory)
{
} /* size: 0 */

// <001628D1> ../public/tier0/platform.h:1524
inline void Destruct<CUtlKeyValuePair<const CResourceDiskStructField*, const KV3ConvertSpecialFieldBehavior_t*> >(CUtlKeyValuePair<const CResourceDiskStructField*, const KV3ConvertSpecialFieldBehavior_t*>* pMemory)
{
} /* size: 0 */

// <001627AF> ../public/tier0/platform.h:1524
inline void Destruct<CUtlKeyValuePair<const CResourceDiskStructField*, empty_t> >(CUtlKeyValuePair<const CResourceDiskStructField*, empty_t>* pMemory)
{
} /* size: 0 */

// <0013117B> ../public/tier0/platform.h:1524
inline void Destruct<CSchemaSystem::DumpMetaStats(char const*)::MetaCountRef_t>(MetaCountRef_t* pMemory)
{
} /* size: 0 */

// <000C521F> ../public/tier0/platform.h:1524
inline void Destruct<CSchemaClassInfo*>(CSchemaClassInfo** pMemory)
{
} /* size: 0 */

// <000C51D2> ../public/tier0/platform.h:1524
inline void Destruct<CSchemaEnumInfo*>(CSchemaEnumInfo** pMemory)
{
} /* size: 0 */

// <000C2F8E> ../public/tier0/platform.h:1524
inline void Destruct<CSchemaClassInfoSynth*>(CSchemaClassInfoSynth** pMemory)
{
} /* size: 0 */

// <000C2F4B> ../public/tier0/platform.h:1524
inline void Destruct<CSchemaEnumInfoSynth*>(CSchemaEnumInfoSynth** pMemory)
{
} /* size: 0 */

// <000C2DC2> ../public/tier0/platform.h:1524
inline void Destruct<CSchemaSystem::BindingRange_t>(BindingRange_t* pMemory)
{
} /* size: 0 */

// <000C2A00> ../public/tier0/platform.h:1524
inline void Destruct<CUtlMap<CSchemaType*, CSchemaType_Ptr*, short unsigned int, bool (*)(CSchemaType* const&, CSchemaType* const&)>::Node_t>(Node_t* pMemory)
{
} /* size: 0 */

// <000C27A0> ../public/tier0/platform.h:1524
inline void Destruct<CUtlMap<int, CSchemaType_Atomic*, short unsigned int, bool (*)(int const&, int const&)>::Node_t>(Node_t* pMemory)
{
} /* size: 0 */

// <000C2540> ../public/tier0/platform.h:1524
inline void Destruct<CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_T*, short unsigned int, bool (*)(const AtomicTypeInfo_T_t&, const AtomicTypeInfo_T_t&)>::Node_t>(Node_t* pMemory)
{
} /* size: 0 */

// <000C22E0> ../public/tier0/platform.h:1524
inline void Destruct<CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT*, short unsigned int, bool (*)(const AtomicTypeInfo_T_t&, const AtomicTypeInfo_T_t&)>::Node_t>(Node_t* pMemory)
{
} /* size: 0 */

// <000C2080> ../public/tier0/platform.h:1524
inline void Destruct<CUtlMap<AtomicTypeInfo_TT_t, CSchemaType_Atomic_TT*, short unsigned int, bool (*)(const AtomicTypeInfo_TT_t&, const AtomicTypeInfo_TT_t&)>::Node_t>(Node_t* pMemory)
{
} /* size: 0 */

// <000C1E20> ../public/tier0/platform.h:1524
inline void Destruct<CUtlMap<AtomicTypeInfo_I_t, CSchemaType_Atomic_I*, short unsigned int, bool (*)(const AtomicTypeInfo_I_t&, const AtomicTypeInfo_I_t&)>::Node_t>(Node_t* pMemory)
{
} /* size: 0 */

// <000C1BC0> ../public/tier0/platform.h:1524
inline void Destruct<CUtlMap<unsigned int, CSchemaType_DeclaredClass*, short unsigned int, bool (*)(unsigned int const&, unsigned int const&)>::Node_t>(Node_t* pMemory)
{
} /* size: 0 */

// <000C14A0> ../public/tier0/platform.h:1524
inline void Destruct<CUtlMap<TypeAndCountInfo_t, CSchemaType_FixedArray*, short unsigned int, bool (*)(const TypeAndCountInfo_t&, const TypeAndCountInfo_t&)>::Node_t>(Node_t* pMemory)
{
} /* size: 0 */

// <000C1240> ../public/tier0/platform.h:1524
inline void Destruct<CUtlMap<int, CSchemaType_Bitfield*, short unsigned int, bool (*)(int const&, int const&)>::Node_t>(Node_t* pMemory)
{
} /* size: 0 */

// <000AF773> ../public/tier0/platform.h:1524
inline void Destruct<AtomicTypeInfo_T_t>(AtomicTypeInfo_T_t* pMemory)
{
} /* size: 0 */

// <000AD663> ../public/tier0/platform.h:1524
inline void Destruct<AtomicTypeInfo_TT_t>(AtomicTypeInfo_TT_t* pMemory)
{
} /* size: 0 */

// <000AC5F5> ../public/tier0/platform.h:1524
inline void Destruct<AtomicTypeInfo_I_t>(AtomicTypeInfo_I_t* pMemory)
{
} /* size: 0 */

// <000105A1> ../public/tier0/platform.h:1524
inline void Destruct<CSchemaSystem::DetectedSchemaMismatch_t>(DetectedSchemaMismatch_t* pMemory)
{
} /* size: 0 */

// <0040516A> ../public/tier0/platform.h:1524
inline void Destruct<CUtlMap<const CRenderMesh*, CMeshRayTrace*>::Node_t>(Node_t* pMemory)
{
} /* size: 0 */

// <00351573> ../public/tier0/platform.h:1524
inline void Destruct<EmbeddedMeshData_t>(EmbeddedMeshData_t* pMemory)
{
} /* size: 0 */

// <00217EFF> ../public/tier0/platform.h:1524
inline void Destruct<SkeletonMeshVertex_t>(SkeletonMeshVertex_t* pMemory)
{
} /* size: 0 */

// <0016A425> ../public/tier0/platform.h:1524
inline void Destruct<CStrongHandleCopyable<InfoForResourceTypeCModel> >(CStrongHandleCopyable<InfoForResourceTypeCModel>* pMemory)
{
} /* size: 0 */

// <0016A3FD> ../public/tier0/platform.h:1524
inline void Destruct<CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph> >(CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>* pMemory)
{
} /* size: 0 */

// <00CA2DDD> ../public/tier0/platform.h:1524
inline void Destruct<CTexturePacker::TreeEntry_t>(TreeEntry_t* pMemory)
{
} /* size: 0 */

// <005B0F8A> ../public/tier0/platform.h:1524
inline void Destruct<CPlatformFont::kerned_abc_cache_t>(kerned_abc_cache_t* pMemory)
{
} /* size: 0 */

// <0057B36E> ../public/tier0/platform.h:1524
inline void Destruct<CTextureDictionary::PendingManifest_t>(PendingManifest_t* pMemory)
{
} /* size: 0 */

// <0057B2FE> ../public/tier0/platform.h:1524
inline void Destruct<CTextureDictionary::DeferredResourceLoads_t>(DeferredResourceLoads_t* pMemory)
{
} /* size: 0 */

// <005346CB> ../public/tier0/platform.h:1524
inline void Destruct<CFontTextureCache::CacheEntry_t>(CacheEntry_t* pMemory)
{
} /* size: 0 */

// <005345AC> ../public/tier0/platform.h:1524
inline void Destruct<CFontTextureCache::Page_t>(Page_t* pMemory)
{
} /* size: 0 */

// <005336B9> ../public/tier0/platform.h:1524
inline void Destruct<CUtlMap<unsigned int, CFontTextureCache::Page_t>::Node_t>(Node_t* pMemory)
{
} /* size: 0 */

// <004F8637> ../public/tier0/platform.h:1524
inline void Destruct<FontAliasList_t*>(FontAliasList_t** pMemory)
{
} /* size: 0 */

// <004F74E3> ../public/tier0/platform.h:1524
inline void Destruct<CFontAmalgam>(CFontAmalgam* pMemory)
{
} /* size: 0 */

// <004F7362> ../public/tier0/platform.h:1524
inline void Destruct<FontAlias_t>(FontAlias_t* pMemory)
{
} /* size: 0 */

// <004F7273> ../public/tier0/platform.h:1524
inline void Destruct<SFontDescription>(SFontDescription* pMemory)
{
} /* size: 0 */

// <004F6154> ../public/tier0/platform.h:1524
inline void Destruct<CUtlMap<CFontManager::CFontAttributes, CFontManager::CFontInfo, int>::Node_t>(Node_t* pMemory)
{
} /* size: 0 */

// <004F5F4A> ../public/tier0/platform.h:1524
inline void Destruct<CUtlMap<short unsigned int, CFontManager::CFontDataFile, int>::Node_t>(Node_t* pMemory)
{
} /* size: 0 */

// <004B1BFA> ../public/tier0/platform.h:1524
inline void Destruct<CFontAmalgam::SFontRange>(SFontRange* pMemory)
{
} /* size: 0 */

// <0043A507> ../public/tier0/platform.h:1524
inline void Destruct<IQueuedRenderable*>(IQueuedRenderable** pMemory)
{
} /* size: 0 */

// <004396EE> ../public/tier0/platform.h:1524
inline void Destruct<CUtlVector<IQueuedRenderable*> >(CUtlVector<IQueuedRenderable*, CUtlMemory<IQueuedRenderable*, int> >* pMemory)
{
} /* size: 0 */

// <00432213> ../public/tier0/platform.h:1524
inline void Destruct<CUtlMap<CUtlStringToken, int>::Node_t>(Node_t* pMemory)
{
} /* size: 0 */

// <002EDB65> ../public/tier0/platform.h:1524
inline void Destruct<CUtlKeyValuePair<SpamKey_t, empty_t> >(CUtlKeyValuePair<SpamKey_t, empty_t>* pMemory)
{
} /* size: 0 */

// <00268223> ../public/tier0/platform.h:1524
inline void Destruct<texture_use_info_t>(texture_use_info_t* pMemory)
{
} /* size: 0 */

// <00156B49> ../public/tier0/platform.h:1524
inline void Destruct<CMaterialMode>(CMaterialMode* pMemory)
{
} /* size: 0 */

// <00153BFF> ../public/tier0/platform.h:1524
inline void Destruct<MaterialStaticComboLoadRequest_t>(MaterialStaticComboLoadRequest_t* pMemory)
{
} /* size: 0 */

// <0008F24D> ../public/tier0/platform.h:1524
inline void Destruct<CMaterialParam>(CMaterialParam* pMemory)
{
} /* size: 0 */

// <0008D929> ../public/tier0/platform.h:1524
inline void Destruct<CMaterialSystem2::ModeInfo_t>(ModeInfo_t* pMemory)
{
} /* size: 0 */

// <0008C884> ../public/tier0/platform.h:1524
inline void Destruct<CWeakHandle<InfoForResourceTypeCVfx> >(CWeakHandle<InfoForResourceTypeCVfx>* pMemory)
{
} /* size: 0 */

// <0004986D> ../public/tier0/platform.h:1524
inline void Destruct<CLocalize::ChangeCallback_t>(ChangeCallback_t* pMemory)
{
} /* size: 0 */

// <0004953A> ../public/tier0/platform.h:1524
inline void Destruct<CLocalize::LocalizationFileInfo_t>(LocalizationFileInfo_t* pMemory)
{
} /* size: 0 */

// <000448E2> ../public/tier0/platform.h:1524
inline void Destruct<LocalizationFileInfoRaw_t>(LocalizationFileInfoRaw_t* pMemory)
{
} /* size: 0 */

// <00217243> ../public/tier0/platform.h:1524
inline void Destruct<CPackedStore::ChangeMultipleDirectoryEntries(const CUtlVector<VPKContentFileInfo_t>&, const CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >&)::FileSort_t>(FileSort_t* pMemory)
{
} /* size: 0 */

// <00211285> ../public/tier0/platform.h:1524
inline void Destruct<FileHandleTracker_t>(FileHandleTracker_t* pMemory)
{
} /* size: 0 */

// <0015EB37> ../public/tier0/platform.h:1524
inline void Destruct<CZipFile::CZipEntry>(CZipEntry* pMemory)
{
} /* size: 0 */

// <00159454> ../public/tier0/platform.h:1524
inline void Destruct<CZip*>(CZip** pMemory)
{
} /* size: 0 */

// <00143A47> ../public/tier0/platform.h:1524
inline void Destruct<CUtlMap<int, long long unsigned int>::Node_t>(Node_t* pMemory)
{
} /* size: 0 */

// <000C9252> ../public/tier0/platform.h:1524
inline void Destruct<CBaseFileSystem::COpenedFile>(COpenedFile* pMemory)
{
} /* size: 0 */

// <000C8FBA> ../public/tier0/platform.h:1524
inline void Destruct<CBaseFileSystem::PrintSearchPaths()::sort_search_paths_t>(sort_search_paths_t* pMemory)
{
} /* size: 0 */

// <000C6972> ../public/tier0/platform.h:1524
inline void Destruct<CUtlSymbol>(CUtlSymbol* pMemory)
{
} /* size: 0 */

// <000C655A> ../public/tier0/platform.h:1524
inline void Destruct<CFileHandleTimer*>(CFileHandleTimer** pMemory)
{
} /* size: 0 */

// <000C46E2> ../public/tier0/platform.h:1524
inline void Destruct<CBaseFileSystem::FindData_t>(FindData_t* pMemory)
{
} /* size: 0 */

// <000C160A> ../public/tier0/platform.h:1524
inline void Destruct<void (*)(char const*, char const*)>(void ()(const char *, const char *)** pMemory)
{
} /* size: 0 */

// <000C0D91> ../public/tier0/platform.h:1524
inline void Destruct<CUtlMap<CUtlString, CBaseFileSystem::SymLink_t>::Node_t>(Node_t* pMemory)
{
} /* size: 0 */

// <000BFB89> ../public/tier0/platform.h:1524
inline void Destruct<CBaseFileSystem::SearchPathStateEntry_t>(SearchPathStateEntry_t* pMemory)
{
} /* size: 0 */

// <000BD30F> ../public/tier0/platform.h:1524
inline void Destruct<CUtlMap<char const*, FixupSearchCacheEntry, int, bool (*)(char const* const&, char const* const&)>::Node_t>(Node_t* pMemory)
{
} /* size: 0 */

// <055FB846> ../public/tier0/platform.h:1557
void Plat_UUIDToString(const V_uuid_t *, char *, size_t)
{
} /* size: 0 */

// <055BD22D> ../public/tier0/platform.h:1558
bool Plat_UUIDFromString(V_uuid_t *, const char *)
{
} /* size: 0 */

// <0557F53A> ../public/tier0/platform.h:1561
inline int Plat_CompareUUIDs(const V_uuid_t* pLhs, const V_uuid_t* pRhs)
{
} /* size: 0 */

// <0125C134> ../public/tier0/platform.h:1586
inline bool operator==(const V_uuid_t& lhs, const V_uuid_t& rhs)
{
} /* size: 0 */

// <055C4E32> ../public/tier0/platform.h:1591
inline bool operator!=(const V_uuid_t& lhs, const V_uuid_t& rhs)
{
} /* size: 0 */

// <055EAD08> ../public/tier0/platform.h:1597
// member functions: 24
// member variable: 1
// class size: 37
class CUUIDString {
	/* ../public/tier0/platform.h:1600 */
	void CUUIDString(CUUIDString* );
	/* ../public/tier0/platform.h:1601 */
	void CUUIDString(CUUIDString* , const V_uuid_t& );
	/* ../public/tier0/platform.h:1602 */
	void CUUIDString(CUUIDString* , const V_uuid_t* );
	/* ../public/tier0/platform.h:1603 */
	void CUUIDString(CUUIDString* , const CUUIDString& );
	/* ../public/tier0/platform.h:1605 */
	void CUUIDString(CUUIDString* , const char* , bool);
	/* ../public/tier0/platform.h:1607 */
	CUUIDString& operator=(CUUIDString* , const CUUIDString& );
	/* ../public/tier0/platform.h:1608 */
	CUUIDString& operator=(CUUIDString* , const V_uuid_t& );
	/* ../public/tier0/platform.h:1610 */
	const char* Get(const CUUIDString* );
	/* ../public/tier0/platform.h:1611 */
	const char* operator char const*(const CUUIDString* );
	/* ../public/tier0/platform.h:1613 */
	void FromUuid(CUUIDString* , const V_uuid_t& );
	/* ../public/tier0/platform.h:1614 */
	bool ToUuid(const CUUIDString* , V_uuid_t* );
	/* ../public/tier0/platform.h:1616 */
	bool FromString(CUUIDString* , const char* , bool);
private:
	char szString[37]; /* 0 37 */
	void CUUIDString(class CUUIDString *); /* linkage=_ZN11CUUIDStringC4Ev */
	void CUUIDString(class CUUIDString *, const class V_uuid_t  &); /* linkage=_ZN11CUUIDStringC4ERK8V_uuid_t */
	void CUUIDString(class CUUIDString *, const class V_uuid_t  *); /* linkage=_ZN11CUUIDStringC4EPK8V_uuid_t */
	void CUUIDString(class CUUIDString *, const class CUUIDString  &); /* linkage=_ZN11CUUIDStringC4ERKS_ */
	void CUUIDString(class CUUIDString *, const char  *, bool); /* linkage=_ZN11CUUIDStringC4EPKcb */
	class CUUIDString & operator=(class CUUIDString *, const class CUUIDString  &); /* linkage=_ZN11CUUIDStringaSERKS_ */
	class CUUIDString & operator=(class CUUIDString *, const class V_uuid_t  &); /* linkage=_ZN11CUUIDStringaSERK8V_uuid_t */
	const char  * Get(const class CUUIDString  *); /* linkage=_ZNK11CUUIDString3GetEv */
	const char  * operator char const*(const class CUUIDString  *); /* linkage=_ZNK11CUUIDStringcvPKcEv */
	void FromUuid(class CUUIDString *, const class V_uuid_t  &); /* linkage=_ZN11CUUIDString8FromUuidERK8V_uuid_t */
	bool ToUuid(const class CUUIDString  *, class V_uuid_t *); /* linkage=_ZNK11CUUIDString6ToUuidEP8V_uuid_t */
	bool FromString(class CUUIDString *, const char  *, bool); /* linkage=_ZN11CUUIDString10FromStringEPKcb */
};

// <057323CD> ../public/tier0/platform.h:1601
void CUUIDString::CUUIDString(const V_uuid_t& id)
{
} /* size: 0 */

// <057323A8> ../public/tier0/platform.h:1601
inline void CUUIDString::CUUIDString(const V_uuid_t& id)
{
} /* size: 0 */

// <0573238F> ../public/tier0/platform.h:1610
inline void CUUIDString::Get()
{
} /* size: 0 */

// <05732376> ../public/tier0/platform.h:1611
inline void operator char CUUIDString::const*()
{
} /* size: 0 */

