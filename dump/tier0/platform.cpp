
//
// tier0/platform.cpp
//
//	referenced by: libtier0.so
//
//	functions: 147
//	classes: 3
//	struct: 1
//

// <0038FA6C> tier0/platform.cpp:99
void ReconnectInterface(CreateInterfaceFn factory, const char* pInterfaceName)
{
} /* size: 0 */

// <0038F9AC> tier0/platform.cpp:125
// variable: 1
// function call: 1
void Plat_NonFatalErrorFunc(const char* pFormat, ...)
{
	va_list args; // 127
	Plat_IsInDebugSession(void); // 132
} /* size: 247, variables: 1, inline expansions: 1 (7 bytes) */

// <0038F7F8> tier0/platform.cpp:161
uint64 Plat_GetCurrentFrame(void)
{
} /* size: 12 */

// <0038F7C6> tier0/platform.cpp:166
void Plat_SetCurrentFrame(uint64 nFrame)
{
} /* size: 12 */

// <0038F794> tier0/platform.cpp:171
void Plat_ChangeCurrentFrame(int64 nDelta)
{
} /* size: 12 */

// <0038F64D> tier0/platform.cpp:178
// variables: 3
// function call: 1
bool Plat_SetCpuTimeIsReliable(void)
{
	bool s_bIsSet; // 180
	{
		FILE* fp; // 186
		{
			char line; // 189
			fgets(char* __s,
				int __n,
				FILE* __stream);  // 191
		}
	}
} /* size: 223, variables: 1 */

// <0038F5F1> tier0/platform.cpp:216
// variable: 1
void FullInitRelativeTicks(void)
{
	timespec timeSpec; // 233
} /* size: 160, variables: 1 */

// <0038F5E2> tier0/platform.cpp:244
inline void InitRelativeTicks(void)
{
} /* size: 0 */

// <0038F5B1> tier0/platform.cpp:252
// variables: 2
inline uint64 GetRelativeTicks(void)
{
	uint64 nTicks; // 254
	timespec timeSpec; // 263
} /* size: 0, variables: 2 */

// <0038F4B0> tier0/platform.cpp:289
// function call: 1
uint64 Plat_RelativeTickFrequency(void)
{
	InitRelativeTicks(void); // 291
} /* size: 42, inline expansions: 1 (17 bytes) */

// <0038F3E9> tier0/platform.cpp:295
// function calls: 2
uint64 Plat_TickDiffSec(uint64 nStartTicks, uint64 nEndTicks)
{
	InitRelativeTicks(void); // 297
	Plat_TickDiffSec(uint64 nStartTicks,
			uint64 nEndTicks,
			uint64 nFreq);  // 298
} /* size: 81, inline expansions: 2 (39 bytes) */

// <0038F322> tier0/platform.cpp:301
// function calls: 2
double Plat_TickDiffSecF(uint64 nStartTicks, uint64 nEndTicks)
{
	InitRelativeTicks(void); // 303
	Plat_TickDiffSecF(uint64 nStartTicks,
				uint64 nEndTicks,
				uint64 nFreq);  // 304
} /* size: 161, inline expansions: 2 (113 bytes) */

// <0038F08F> tier0/platform.cpp:319
// function calls: 2
uint64 Plat_TickDiffMicroSec(uint64 nStartTicks, uint64 nEndTicks)
{
	InitRelativeTicks(void); // 321
	Plat_TickDiffMicroSec(uint64 nStartTicks,
				uint64 nEndTicks,
				uint64 nFreq);  // 322
} /* size: 94, inline expansions: 2 (52 bytes) */

// <0038EFAE> tier0/platform.cpp:325
// function calls: 2
double Plat_TickDiffMicroSecF(uint64 nStartTicks, uint64 nEndTicks)
{
	InitRelativeTicks(void); // 327
	Plat_TickDiffMicroSecF(uint64 nStartTicks,
				uint64 nEndTicks,
				uint64 nFreq);  // 328
} /* size: 257, inline expansions: 2 (216 bytes) */

// <0038EF16> tier0/platform.cpp:331
// function calls: 2
uint64 Plat_SecTickDiff(uint64 nSecs)
{
	InitRelativeTicks(void); // 333
	Plat_SecTickDiff(uint64 nSecs,
			uint64 nFreq);  // 334
} /* size: 58, inline expansions: 2 (25 bytes) */

// <0038EE7E> tier0/platform.cpp:337
// function calls: 2
uint64 Plat_SecTickDiffF(double fSecs)
{
	InitRelativeTicks(void); // 339
	Plat_SecTickDiffF(double fSecs,
				uint64 nFreq);  // 340
} /* size: 152, inline expansions: 2 (115 bytes) */

// <0038EDCC> tier0/platform.cpp:343
// function calls: 2
uint64 Plat_MilliSecTickDiff(uint64 nMillis)
{
	InitRelativeTicks(void); // 345
	Plat_MilliSecTickDiff(uint64 nMillis,
				uint64 nFreq);  // 346
} /* size: 118, inline expansions: 2 (85 bytes) */

// <0038ED1A> tier0/platform.cpp:349
// function calls: 2
uint64 Plat_MilliSecTickDiffF(double fMillis)
{
	InitRelativeTicks(void); // 351
	Plat_MilliSecTickDiffF(double fMillis,
				uint64 nFreq);  // 352
} /* size: 299, inline expansions: 2 (248 bytes) */

// <0038EC68> tier0/platform.cpp:355
// function calls: 2
uint64 Plat_MicroSecTickDiff(uint64 nMicros)
{
	InitRelativeTicks(void); // 357
	Plat_MicroSecTickDiff(uint64 nMicros,
				uint64 nFreq);  // 358
} /* size: 110, inline expansions: 2 (74 bytes) */

// <0038EBB6> tier0/platform.cpp:361
// function calls: 2
uint64 Plat_MicroSecTickDiffF(double fMicros)
{
	InitRelativeTicks(void); // 363
	Plat_MicroSecTickDiffF(double fMicros,
				uint64 nFreq);  // 364
} /* size: 299, inline expansions: 2 (248 bytes) */

// <0038EAC3> tier0/platform.cpp:367
// function calls: 3
uint64 Plat_TicksAfterSecs(uint64 nSecs)
{
	InitRelativeTicks(void); // 369
	Plat_SecTickDiff(uint64 nSecs,
			uint64 nFreq);  // 370
	GetRelativeTicks(void); // 370
} /* size: 147, inline expansions: 3 (71 bytes) */

// <0038E9CE> tier0/platform.cpp:373
// function calls: 3
uint64 Plat_TicksAfterSecsF(double fSecs)
{
	InitRelativeTicks(void); // 375
	Plat_SecTickDiffF(double fSecs,
				uint64 nFreq);  // 376
	GetRelativeTicks(void); // 376
} /* size: 256, inline expansions: 3 (189 bytes) */

// <0038E8CB> tier0/platform.cpp:379
// function calls: 3
uint64 Plat_TicksAfterMilliSecs(uint64 nMillis)
{
	InitRelativeTicks(void); // 381
	Plat_MilliSecTickDiff(uint64 nMillis,
				uint64 nFreq);  // 382
	GetRelativeTicks(void); // 382
} /* size: 214, inline expansions: 3 (153 bytes) */

// <0038E7C8> tier0/platform.cpp:385
// function calls: 3
uint64 Plat_TicksAfterMilliSecsF(double fMillis)
{
	InitRelativeTicks(void); // 387
	Plat_MilliSecTickDiffF(double fMillis,
				uint64 nFreq);  // 388
	GetRelativeTicks(void); // 388
} /* size: 392, inline expansions: 3 (330 bytes) */

// <0038E6C5> tier0/platform.cpp:391
// function calls: 3
uint64 Plat_TicksAfterMicroSecs(uint64 nMicros)
{
	InitRelativeTicks(void); // 393
	Plat_MicroSecTickDiff(uint64 nMicros,
				uint64 nFreq);  // 394
	GetRelativeTicks(void); // 394
} /* size: 206, inline expansions: 3 (142 bytes) */

// <0038E5C2> tier0/platform.cpp:397
// function calls: 3
uint64 Plat_TicksAfterMicroSecsF(double fMicros)
{
	InitRelativeTicks(void); // 399
	Plat_MicroSecTickDiffF(double fMicros,
				uint64 nFreq);  // 400
	GetRelativeTicks(void); // 400
} /* size: 392, inline expansions: 3 (330 bytes) */

// <0038E575> tier0/platform.cpp:403
// function call: 1
uint64 Plat_GetClockStart(void)
{
	InitRelativeTicks(void); // 405
} /* size: 50, inline expansions: 1 (15 bytes) */

// <0038E394> tier0/platform.cpp:419
// function calls: 3
uint32 Plat_MSTime(void)
{
	InitRelativeTicks(void); // 421
	GetRelativeTicks(void); // 425
	Plat_TickDiffMilliSec(uint64 nStartTicks,
				uint64 nEndTicks,
				uint64 nFreq);  // 425
} /* size: 163, inline expansions: 3 (111 bytes) */

// <0038E27C> tier0/platform.cpp:428
// function calls: 3
uint64 Plat_MSTime64(void)
{
	InitRelativeTicks(void); // 430
	GetRelativeTicks(void); // 434
	Plat_TickDiffMilliSec(uint64 nStartTicks,
				uint64 nEndTicks,
				uint64 nFreq);  // 434
} /* size: 163, inline expansions: 3 (114 bytes) */

// <0038E081> tier0/platform.cpp:454
// variable: 1
void Plat_GetLocalTime(tm* pNow)
{
	time_t ltime; // 457
} /* size: 76, variables: 1 */

// <0038DDA7> tier0/platform.cpp:464
// variables: 2
// function calls: 7
void Plat_ConvertToLocalTime(uint64 nTime, tm* pNow)
{
	time_t ltime; // 469
	tm* pTime; // 470
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
		unsigned int nSpinSleepTime);  // 467
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 476
	memset(void* __dest,
		int __ch,
		size_t __len);  // 474
} /* size: 298, variables: 2, inline expansions: 7 (227 bytes) */

// <0038DACB> tier0/platform.cpp:479
// variable: 1
// function calls: 7
void Plat_GetTimeString(tm* pTime, char* pOut, int nMaxBytes)
{
	char* pStr; // 483
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
		unsigned int nSpinSleepTime);  // 481
	V_strncpy<int>(char* pDest,
			const char* pSrc,
			int maxLenInChars);  // 484
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 486
} /* size: 190, variables: 1, inline expansions: 7 (222 bytes) */

// <0038DA8A> tier0/platform.cpp:521
// variable: 1
void Plat_SetupFPUControlWord(void)
{
	volatile short unsigned int  __cw; // 524
} /* size: 79, variables: 1 */

// <0038DA29> tier0/platform.cpp:545
// function calls: 2
void Plat_SetDenormalsAreZero(void)
{
	_mm_getcsr(void); // 549
	_mm_setcsr(unsigned int __I); // 549
} /* size: 29, inline expansions: 2 (11 bytes) */

// <0038D9A4> tier0/platform.cpp:558
// function call: 1
void Plat_AttachDebuggerToProcess(bool bBreakImmediately, bool bAutomaticallyChooseDebugger)
{
	Plat_IsInDebugSession(void); // 560
} /* size: 11, inline expansions: 1 (7 bytes) */

// <0038D998> tier0/platform.cpp:701
void Plat_InstallControlCHandler(void)
{
} /* size: 0 */

// <0038D85A> tier0/platform.cpp:873
// function calls: 4
void Plat_TranslateSymbolicLinks(const char* pInDir, CBufferString* pOut)
{
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 875
} /* size: 60, inline expansions: 4 (100 bytes) */

// <0038D83D> tier0/platform.cpp:908
void _PlatformSpecific_ExitProcess_Pre(int nCode)
{
} /* size: 0 */

// <0038D81F> tier0/platform.cpp:924
void _PlatformSpecific_ExitProcess_Post(int nCode)
{
} /* size: 0 */

// <0038D7ED> tier0/platform.cpp:945
void SetExitProcessCallback(ExitProcessCallbackType pCallback)
{
} /* size: 12 */

// <0038D3F2> tier0/platform.cpp:1046
// variable: 1
void Plat_GetCurrentDate(int* pDay, int* pMonth, int* pYear)
{
	tm long_time; // 1048
} /* size: 106, variables: 1 */

// <0038D36B> tier0/platform.cpp:1057
char* Plat_asctime(const tm* tm, char* buf, size_t bufsize)
{
} /* size: 0 */

// <0038D2E8> tier0/platform.cpp:1069
char* Plat_ctime(const time_t* timep, char* buf, size_t bufsize)
{
} /* size: 9 */

// <0038D27A> tier0/platform.cpp:1081
tm* Plat_gmtime(const time_t* timep, tm* result)
{
} /* size: 9 */

// <0038D228> tier0/platform.cpp:1092
time_t Plat_timegm(tm* timeptr)
{
} /* size: 9 */

// <0038D1BA> tier0/platform.cpp:1107
tm* Plat_localtime(const time_t* timep, tm* result)
{
} /* size: 9 */

// <0038D116> tier0/platform.cpp:1125
int Plat_PutEnv(const char* pEnvValue)
{
} /* size: 9 */

// <0038CF1C> tier0/platform.cpp:1132
// variables: 2
// function calls: 6
void Plat_SetGameDirectories(const char* const* szGameDirectories, int nDirectoryCount)
{
	const char   __FUNCTION__; // 44338
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1134
	}
	COrderedConstructor_Create<CBufferStringN<200>, COrderedResolve_NoResolve, false>::ConstructIfNotConstructed(); // 1135
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 671
	CBufferStringN<200>::operator=(
			const char* pSrc);  // 1136
} /* size: 0, variables: 1, inline expansions: 6 (248 bytes) */

// <0038BC9B> tier0/platform.cpp:1250
// variables: 2
// function calls: 3
bool Plat_GetComputerName(char* pBuffer, int nBufferSize)
{
	bool bInit; // 1252
	char computerName; // 1253
	V_strncpy<int>(char* pDest,
			const char* pSrc,
			int maxLenInChars);  // 1270
	gethostname(char* __buf,
			size_t __buflen);  // 1260
	V_strncpy<long unsigned int>(char* pDest,
					const char* pSrc,
					long unsigned int maxLenInChars);  // 1263
} /* size: 153, variables: 2, inline expansions: 3 (63 bytes) */

// <0038BB54> tier0/platform.cpp:1274
// variables: 3
// function call: 1
bool Plat_GetUserName(char* pBuffer, int nBufferSize)
{
	const char   __FUNCTION__; // 64266
	passwd* pass; // 1288
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1276
	}
	V_strncpy<int>(char* pDest,
			const char* pSrc,
			int maxLenInChars);  // 1291
} /* size: 0, variables: 2, inline expansions: 1 (14 bytes) */

// <0038BB1E> tier0/platform.cpp:1299
bool vtune(bool resume)
{
} /* size: 7 */

// <0038B9D4> tier0/platform.cpp:1378
// function call: 1
void Plat_DebugPrintV(const char* pFormat, typedef __va_list_tag __va_list_tag* args)
{
	vprintf(const char* __fmt,
		typedef __va_list_tag __va_list_tag* __ap);  // 1387
} /* size: 52, inline expansions: 1 (20 bytes) */

// <0037EA13> tier0/platform.cpp:1467
// member functions: 10
// member variables: 3
// class size: 520
class CWindowedGameInstanceMutex {
	/* tier0/platform.cpp:1470 */
	void CWindowedGameInstanceMutex(CWindowedGameInstanceMutex* , const char* );
	/* tier0/platform.cpp:1474 */
	void ~CWindowedGameInstanceMutex(CWindowedGameInstanceMutex* );
	/* tier0/platform.cpp:1479 */
	bool GrabMutex(CWindowedGameInstanceMutex* , const char* );
	/* tier0/platform.cpp:1480 */
	void ReleaseMutex(CWindowedGameInstanceMutex* );
	/* tier0/platform.cpp:1481 */
	bool IsValid(CWindowedGameInstanceMutex* );
	bool m_bIsValid; /* 0 1 */
	int m_nLockfd; /* 4 4 */
	char m_lockFilename[512]; /* 8 512 */
	void CWindowedGameInstanceMutex(class CWindowedGameInstanceMutex *, const char  *); /* linkage=_ZN26CWindowedGameInstanceMutexC4EPKc */
	void ~CWindowedGameInstanceMutex(class CWindowedGameInstanceMutex *); /* linkage=_ZN26CWindowedGameInstanceMutexD4Ev */
	bool GrabMutex(class CWindowedGameInstanceMutex *, const char  *); /* linkage=_ZN26CWindowedGameInstanceMutex9GrabMutexEPKc */
	/* <390e02> tier0/platform.cpp:1595 */
	void ReleaseMutex(class CWindowedGameInstanceMutex *); /* linkage=_ZN26CWindowedGameInstanceMutex12ReleaseMutexEv */
	bool IsValid(class CWindowedGameInstanceMutex *); /* linkage=_ZN26CWindowedGameInstanceMutex7IsValidEv */
};

// <0038B7AA> tier0/platform.cpp:1470
void CWindowedGameInstanceMutex::CWindowedGameInstanceMutex(const char* pGameName)
{
} /* size: 0 */

// <0038B784> tier0/platform.cpp:1470
inline void CWindowedGameInstanceMutex::CWindowedGameInstanceMutex(const char* pGameName)
{
} /* size: 0 */

// <0038B76D> tier0/platform.cpp:1474
void CWindowedGameInstanceMutex::~CWindowedGameInstanceMutex()
{
} /* size: 0 */

// <0038B754> tier0/platform.cpp:1474
inline void CWindowedGameInstanceMutex::~CWindowedGameInstanceMutex()
{
} /* size: 0 */

// <0038B73B> tier0/platform.cpp:1481
inline void CWindowedGameInstanceMutex::IsValid()
{
} /* size: 0 */

// <0038B450> tier0/platform.cpp:1492
// variables: 4
// function calls: 3
void CWindowedGameInstanceMutex::GrabMutex(const char* pGameName)
{
	uint32 gameCRC; // 1523
	const char* tmpdir; // 1531
	stat buf; // 1534
	flock fl; // 1552
	open(const char* __path,
		int __oflag, ...);  // 1540
	printf(const char* __fmt, ...); // 1543
	printf(const char* __fmt, ...); // 1560
} /* size: 419, variables: 4, inline expansions: 3 (70 bytes) */

// <00390E02> tier0/platform.cpp:1595
void CWindowedGameInstanceMutex::ReleaseMutex()
{
} /* size: 0 */

// <0038B2FE> tier0/platform.cpp:1616
// variable: 1
// function calls: 3
CWindowedGameInstanceMutex* Plat_CreateGameInstanceMutex(const char* pGameName)
{
	CWindowedGameInstanceMutex* pMutex; // 1618
	CWindowedGameInstanceMutex::CWindowedGameInstanceMutex(
					const char* pGameName);  // 1618
	CWindowedGameInstanceMutex::ReleaseMutex(); // 1476
	CWindowedGameInstanceMutex::~CWindowedGameInstanceMutex(); // 1621
} /* size: 89, variables: 1, inline expansions: 3 (20 bytes) */

// <0038B239> tier0/platform.cpp:1629
// function calls: 2
void Plat_DestroyGameInstanceMutex(CWindowedGameInstanceMutex* pMutex)
{
	CWindowedGameInstanceMutex::ReleaseMutex(); // 1476
	CWindowedGameInstanceMutex::~CWindowedGameInstanceMutex(); // 1638
} /* size: 57, inline expansions: 2 (0 bytes) */

// <0038B217> tier0/platform.cpp:1642
CWindowedGameInstanceMutex* Plat_GetLastGameInstanceMutex(void)
{
} /* size: 12 */

// <0038B1D3> tier0/platform.cpp:1647
void Plat_RestartCurrentProcess(void)
{
} /* size: 27 */

// <0038AC54> tier0/platform.cpp:1868
// variables: 7
// function calls: 3
const char* GetOSDetailString(char* pchOutBuf, int cchOutBuf)
{
	const char* pszIssueFile; // 1881
	FILE* fpUname; // 1919
	size_t cchRead; // 1922
	{
		int i; // 1896
		{
			FILE* fdInfo; // 1898
			int cchIssueFile; // 1904
			ssize_t cubRead; // 1905
			snprintf(char* __s,
				size_t __n,
				const char* __fmt, ...);  // 1903
			fread(void* __ptr,
				size_t __size,
				size_t __n,
				FILE* __stream);  // 1905
		}
	}
	fread(void* __ptr,
		size_t __size,
		size_t __n,
		FILE* __stream);  // 1922
} /* size: 464, variables: 3, inline expansions: 1 (22 bytes) */

// <0038AC22> tier0/platform.cpp:1934
const char* GetNameFromOSType(EOSType eOSType)
{
} /* size: 0 */

// <0038ABF3> tier0/platform.cpp:2073
bool OSTypesAreCompatible(EOSType eOSTypeDetected, EOSType eOSTypeRequired)
{
} /* size: 0 */

// <0038AB31> tier0/platform.cpp:2096
// variable: 1
const char* GetPlatformName(bool* pbIs64Bit)
{
	EOSType eType; // 2101
} /* size: 125, variables: 1 */

// <0038A8CD> tier0/platform.cpp:2135
// variables: 2
// function calls: 3
bool Plat_GetOSDescriptionString(char* pOutput, size_t nOutputMaxLength)
{
	FILE* fpVersionInfo; // 2318
	char* pEnd; // 2328
	fgets(char* __s,
		int __n,
		FILE* __stream);  // 2325
	V_strncat<int>(char* pDest,
			const char* pSrc,
			int maxLenInChars,
			int nMaxCharsToCopy);  // 2337
	V_strncat<int>(char* pDest,
			const char* pSrc,
			int maxLenInChars,
			int nMaxCharsToCopy);  // 2321
} /* size: 204, variables: 2, inline expansions: 3 (61 bytes) */

// <0038A7A8> tier0/platform.cpp:2448
// function calls: 4
void Plat_SetModuleFilename(const char* pExeName)
{
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 2450
} /* size: 71, inline expansions: 4 (134 bytes) */

// <0038A3FB> tier0/platform.cpp:2580
bool Plat_RunningWithDebugModules(void)
{
} /* size: 12 */

// <0038A3D1> tier0/platform.cpp:2599
void UpdateRunningWithDebugModules(PlatModule_t hModule, const char* pModuleName)
{
} /* size: 0 */

// <0038A2F5> tier0/platform.cpp:2628
// variable: 1
void* Plat_GetProcAddress(const char* pszModule, const char* pszName)
{
	PlatModule_t hModule; // 2631
} /* size: 109, variables: 1 */

// <0037EB5E> tier0/platform.cpp:2641
// member variables: 2
// struct size: 1,024
struct FixedModuleNameWithPath_t {
	char szPathOnly[512]; /* 0 512 */
	char szFixedFileName[512]; /* 512 512 */
};

// <0038A081> tier0/platform.cpp:2647
// variables: 2
// function calls: 4
void FixModuleName(const char* pModuleRawName, FixedModuleNameWithPath_t* pOut)
{
	const char* pFileName; // 2649
	const char* pModFileName; // 2650
	V_strncpy<long unsigned int>(char* pDest,
					const char* pSrc,
					long unsigned int maxLenInChars);  // 2656
	V_strncpy<long unsigned int>(char* pDest,
					const char* pSrc,
					long unsigned int maxLenInChars);  // 2666
	V_strncat<long unsigned int>(char* pDest,
					const char* pSrc,
					long unsigned int maxLenInChars,
					int nMaxCharsToCopy);  // 2667
	V_SetExtension<long unsigned int>(char* path,
						const char* extension,
						long unsigned int pathStringLength);  // 2670
} /* size: 160, variables: 2, inline expansions: 4 (100 bytes) */

// <00389B2A> tier0/platform.cpp:2673
// variables: 5
// function calls: 16
PlatModule_t Plat_LoadModule(const char* pModule, int* pLoadError)
{
	FixedModuleNameWithPath_t fixedName; // 2675
	CPathBufferString fullPathFixed; // 2678
	PlatModule_t hModule; // 2680
	int nErr; // 2715
	{
		int nErr; // 2695
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 2695
	}
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 2678
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 2711
	CBufferString::Append(
		const char* pString,
		int nChars,
		bool bExact);  // 2712
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 2715
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 2721
} /* size: 531, variables: 4, inline expansions: 13 (385 bytes) */

// <00389ABC> tier0/platform.cpp:2965
void* Plat_GetModuleProcAddress(PlatModule_t hModule, const char* pszName)
{
} /* size: 19 */

// <00389A2A> tier0/platform.cpp:2973
// variable: 1
int IsModuleAlreadyLoaded(const char* szUnqualifiedModuleName, PlatModule_t* pModuleIfAlreadyLoaded)
{
	PlatModule_t hDummyOutput; // 2975
} /* size: 0, variables: 1 */

// <0038979E> tier0/platform.cpp:3129
void Plat_UnloadModule(PlatModule_t hModule)
{
} /* size: 0 */

// <00389527> tier0/platform.cpp:3170
// variables: 4
// function calls: 8
bool Plat_IsModuleLoaded(const char* pModule)
{
	FixedModuleNameWithPath_t fixedName; // 3172
	CPathBufferString fullPath; // 3174
	const char* szTestPath; // 3176
	PlatModule_t hModule; // 3181
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 3174
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 3176
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 3184
} /* size: 230, variables: 4, inline expansions: 8 (181 bytes) */

// <003894AC> tier0/platform.cpp:3186
// variable: 1
PlatModule_t Plat_FindModuleByAddress(const void* pAddress)
{
	Dl_info modInfo; // 3188
} /* size: 73, variables: 1 */

// <00389412> tier0/platform.cpp:3200
// variable: 1
CreateInterfaceFn Plat_GetModuleInterfaceFactory(PlatModule_t hModule, int* pError)
{
	CreateInterfaceFn pFn; // 3215
} /* size: 94, variables: 1 */

// <003892FF> tier0/platform.cpp:3223
// variables: 2
bool Plat_LoadInterface(const char* pModuleName, const char* pInterfaceVersionName, PlatModule_t* pOutModule, void** pOutInterface)
{
	PlatModule_t pMod; // 3225
	CreateInterfaceFn fn; // 3229
} /* size: 115, variables: 2 */

// <00388C10> tier0/platform.cpp:3249
// variables: 12
// function calls: 7
PlatModule_t Plat_GetProcAddresses(const char* pModuleName, int nNames, const char ** pNames, size_t nTotalPointerBytes, void* pPointers, size_t nTotalFlagsBytes, uint32* pFlags, bool bFailFatal)
{
	const char   __FUNCTION__; // 53614
	PlatModule_t hModule; // 3278
	int nErr; // 3279
	void** pFunc; // 3291
	{
		int* _pCrash; // 3260
	}
	{
		int* _pCrash; // 3264
	}
	{
		int* _pCrash; // 3268
	}
	{
		int* _pCrash; // 3274
	}
	{
		int* _pCrash; // 3284
	}
	{
		int i; // 3292
		{
			uint32 nFlags; // 3294
			{
				int* _pCrash; // 3301
			}
			LeafCodeInfo_t::LeafCodeInfo_t(
					const char* szFile,
					int nLine,
					const char* szFunction);  // 3301
			memset(void* __dest,
				int __ch,
				size_t __len);  // 3305
		}
	}
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 3260
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 3264
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 3268
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 3274
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 3284
} /* size: 976, variables: 4, inline expansions: 5 (145 bytes) */

// <00388BC5> tier0/platform.cpp:3323
// variable: 1
size_t Plat_SetVirtualReserveWarnLimit(size_t nBytes)
{
	size_t nOld; // 3325
} /* size: 19, variables: 1 */

// <00388B7A> tier0/platform.cpp:3330
// variable: 1
size_t Plat_SetVirtualReserveFailLimit(size_t nBytes)
{
	size_t nOld; // 3332
} /* size: 19, variables: 1 */

// <00388B2F> tier0/platform.cpp:3337
// variable: 1
uint Plat_VirtualAccessFlags(uint nAccess)
{
	uint nProt; // 3369
} /* size: 10, variables: 1 */

// <003886F2> tier0/platform.cpp:3685
// variables: 3
// function calls: 3
const char* GetLocalHostname(void)
{
	char rgchHostname; // 3687
	{
		int ret; // 3690
		{
			char* pchDot; // 3694
			strchr(char* __s,
				int __c);  // 3694
		}
		gethostname(char* __buf,
				size_t __buflen);  // 3690
		strcpy(char* __dest,
			const char* __src);  // 3692
	}
} /* size: 107, variables: 1 */

// <00388657> tier0/platform.cpp:3710
bool Plat_VirtualProtect(void* pAlloc, size_t nBytes, uint nAccess)
{
} /* size: 52 */

// <00388576> tier0/platform.cpp:3814
void Plat_SetIsConsoleApplication(bool bIsConsoleApplication)
{
} /* size: 12 */

// <003884AE> tier0/platform.cpp:3846
void Plat_SetNoAssert(void)
{
} /* size: 12 */

// <0038847C> tier0/platform.cpp:3852
void Plat_SetIsInTestMode(bool bIsTestMode)
{
} /* size: 12 */

// <00388304> tier0/platform.cpp:3878
void Plat_EnableHeadlessMode(void)
{
} /* size: 12 */

// <003882E5> tier0/platform.cpp:3885
void Plat_EnableCustomerMachineMode(void)
{
} /* size: 12 */

// <003881B9> tier0/platform.cpp:3921
bool Plat_NeedsLowFragmentation(void)
{
} /* size: 12 */

// <003881A9> tier0/platform.cpp:3972
bool Plat_IsWindowsGameModeEnabled(void)
{
} /* size: 0 */

// <0038819A> tier0/platform.cpp:3998
bool Plat_InitializeCOM(void)
{
} /* size: 0 */

// <0038818F> tier0/platform.cpp:4026
void Plat_ShutdownCOM(void)
{
} /* size: 0 */

// <00387FBC> tier0/platform.cpp:4095
// variables: 2
// function calls: 5
bool Plat_SetCurrentDirectory(const char* pDir)
{
	CPathBufferString tst; // 4097
	int nErr; // 4104
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 4097
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 4107
} /* size: 135, variables: 2, inline expansions: 5 (74 bytes) */

// <00387F00> tier0/platform.cpp:4109
// variables: 2
bool Plat_SetFileReadOnly(const char* pFileName, bool bReadOnly)
{
	stat stbuf; // 4130
	int nPerms; // 4135
} /* size: 137, variables: 2 */

// <00387E0A> tier0/platform.cpp:4160
// variable: 1
uint64 Plat_FileSize(const char* pFileName)
{
	stat fileInfo; // 4175
} /* size: 77, variables: 1 */

// <00387D8F> tier0/platform.cpp:4183
// variable: 1
bool Plat_IsDirectory(const char* pFileName)
{
	stat fileInfo; // 4192
} /* size: 89, variables: 1 */

// <00387D14> tier0/platform.cpp:4200
// variable: 1
bool Plat_IsFile(const char* pFileName)
{
	stat fileInfo; // 4209
} /* size: 97, variables: 1 */

// <00387C99> tier0/platform.cpp:4217
// variable: 1
bool Plat_FileIsReadOnly(const char* pFileName)
{
	stat fileInfo; // 4226
} /* size: 89, variables: 1 */

// <00387C2B> tier0/platform.cpp:4234
bool Plat_RenameFile(const char* pFrom, const char* pTo)
{
} /* size: 20 */

// <00387B95> tier0/platform.cpp:4246
// variable: 1
bool Plat_CreateDirectory(const char* pFileName, bool bWriteEveryone)
{
	int nAccess; // 4254
} /* size: 35, variables: 1 */

// <00387B43> tier0/platform.cpp:4264
bool Plat_RemoveDirectory(const char* pFileName)
{
} /* size: 20 */

// <00387A92> tier0/platform.cpp:4286
bool Plat_SafeRemoveFile(const char* pFileName, bool bRequireSafe)
{
} /* size: 21 */

// <00387872> tier0/platform.cpp:4326
// function calls: 6
bool Plat_GetFileType(const char* pPath, CBufferString* pOut)
{
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 4328
	CBufferString::Append(
		const char* pString,
		int nChars,
		bool bExact);  // 4363
	CBufferString::IsCurBufferFull(); // 833
	CBufferString::IsFixedFull(); // 4364
} /* size: 153, inline expansions: 6 (129 bytes) */

// <00387850> tier0/platform.cpp:4375
bool Plat_Is64BitOS(void)
{
} /* size: 10 */

// <0038781B> tier0/platform.cpp:4439
bool Plat_HasClipboardText(void)
{
} /* size: 9 */

// <00387790> tier0/platform.cpp:4444
// variables: 2
char* Plat_GetClipboardText(void)
{
	char* pText; // 4446
	char* pCopy; // 4449
} /* size: 51, variables: 2 */

// <00387721> tier0/platform.cpp:4456
void Plat_SetClipboardText(const char* pszText)
{
} /* size: 55 */

// <003876B5> tier0/platform.cpp:4469
void Plat_ClearClipboardText(void)
{
} /* size: 55 */

// <00387582> tier0/platform.cpp:4492
void Plat_DisableIOBuffering(void)
{
} /* size: 81 */

// <003873FE> tier0/platform.cpp:4531
// variables: 2
void Plat_CreateUUIDImpl(V_uuid_t* uuid, int (*pfnRand)(int, int))
{
	const int  MAX_RANDOM_RANGE; // 4533
	uint32* pIdRaw; // 4534
} /* size: 185, variables: 2 */

// <00387327> tier0/platform.cpp:4547
// variable: 1
// function call: 1
void Plat_UUIDToString(const V_uuid_t* pUuidIn, char* pBuf, size_t nBufSize)
{
	const V_uuid_t* pUuid; // 4549
	sprintf(char* __s,
		const char* __fmt, ...);  // 4552
} /* size: 128, variables: 1, inline expansions: 1 (54 bytes) */

// <003871CF> tier0/platform.cpp:4561
// variables: 3
// function call: 1
bool Plat_UUIDFromString(V_uuid_t* pIdIn, const char* pBuf)
{
	V_uuid_t* pId; // 4563
	{
		uint32 scanned; // 4566
		int nScanned; // 4567
	}
	memset(void* __dest,
		int __ch,
		size_t __len);  // 4599
} /* size: 312, variables: 1, inline expansions: 1 (15 bytes) */

// <00387014> tier0/platform.cpp:4638
// variables: 9
size_t Plat_ApproximateProcessMemoryUsage(void)
{
	size_t nRet; // 4674
	FILE* pFile; // 4675
	{
		size_t nSize; // 4678
		size_t nResident; // 4678
		size_t nShare; // 4678
		size_t nText; // 4678
		size_t nLib_Unused; // 4678
		size_t nDataPlusStack; // 4678
		size_t nDt_Unused; // 4678
	}
} /* size: 172, variables: 2 */

// <00386F27> tier0/platform.cpp:4720
// variables: 2
size_t Plat_GetCurrentRSS(void)
{
	long int rss; // 4746
	FILE* fp; // 4747
} /* size: 150, variables: 2 */

// <00386EC3> tier0/platform.cpp:4764
// variable: 1
size_t Plat_GetPeakRSS(void)
{
	rusage rusage; // 4795
} /* size: 72, variables: 1 */

// <00386D9D> tier0/platform.cpp:4809
// variables: 3
// function call: 1
bool Plat_GlobalMemoryStatus(OsMemoryStatus_t* pMemoryStatus)
{
	const char   __FUNCTION__; // 44338
	sysinfo sinfo; // 4835
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4811
	}
	memset(void* __dest,
		int __ch,
		size_t __len);  // 4838
} /* size: 0, variables: 2, inline expansions: 1 (14 bytes) */

// <00386D8E> tier0/platform.cpp:4899
bool Plat_IsRunningUnderProton(void)
{
} /* size: 0 */

// <00386D58> tier0/platform.cpp:4915
bool Plat_InstallUrlHandler(const char* pURLName)
{
} /* size: 10 */

// <00386D2D> tier0/platform.cpp:4991
// variable: 1
void Plat_GetDocumentDirectory(CBufferString* pOut)
{
	const char* pszHome; // 5015
} /* size: 0, variables: 1 */

// <00386BF3> tier0/platform.cpp:5022
// function calls: 4
void Plat_QueueSteamLoginWithAccessCode(uint32 nAuthority, const char* pAccessCode)
{
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 5025
} /* size: 77, inline expansions: 4 (134 bytes) */

// <003869FB> tier0/platform.cpp:5028
// function calls: 7
bool Plat_GetSteamLoginWithAccessCode(uint32* pAuthorityOut, CBufferString* pAccessCodeOut)
{
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 1108
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 1108
	CBufferString::operator=(
			const CBufferString& src);  // 5036
} /* size: 131, inline expansions: 7 (263 bytes) */

// <003869C9> tier0/platform.cpp:5042
void Plat_IAPSetHandler(IInAppPurchaseHandler* pHandler)
{
} /* size: 12 */

// <003869A7> tier0/platform.cpp:5047
bool Plat_IAPGetPricingAsync(const char* pSku)
{
} /* size: 0 */

// <00386998> tier0/platform.cpp:5064
bool Plat_IAPQueryExistingPurchases(void)
{
} /* size: 0 */

// <00386962> tier0/platform.cpp:5077
EPlatIAPStartPurchaseStatus_t Plat_IAPPurchaseSku(const char* pSku)
{
} /* size: 10 */

// <00386941> tier0/platform.cpp:5100
bool Plat_IAPConsumePurchase(const char* pPurchaseToken)
{
} /* size: 0 */

// <003868BE> tier0/platform.cpp:5134
void Plat_IAPUpdatePricing(const char* pSku, const char* pOriginalPrice, const char* pPrice)
{
} /* size: 41 */

// <0038681C> tier0/platform.cpp:5142
void Plat_IAPUpdatePurchaseStatus(const char* pSku, const char* pPurchaseToken, EPlatIAPPurchaseStatus_t nStatus, bool bAcknowledged)
{
} /* size: 49 */

// <003867B5> tier0/platform.cpp:5150
void Plat_IAPUpdateConsumedStatus(const char* pPurchaseToken, EPlatIAPConsumeStatus_t nStatus)
{
} /* size: 41 */

// <0037EFAE> tier0/platform.cpp:5161
// member functions: 4
// member variables: 3
// class size: 456
class CGlobalListRegistryItem : public CGlobalList<CGlobalListRegistryItem*, 2822503234662103753, false, GlobalRegistrySortCallback> {
public:
	/* class CGlobalList<CGlobalListRegistryItem*, 2822503234662103753, false, GlobalRegistrySortCallback> <ancestor>; */ /* 0 24 */
	/* tier0/platform.cpp:5164 */
	void CGlobalListRegistryItem(CGlobalListRegistryItem* , uint64);
	/* tier0/platform.cpp:5170 */
	CGlobalListRegistryItem& FindOrInsert(uint64);
	uint64 m_nUNIQUE_HASH; /* 24 8 */
	GlobalListTypelessRegistry_t m_Registry __attribute__((__aligned__(8))); /* 32 424 */
	void CGlobalListRegistryItem(class CGlobalListRegistryItem *, uint64); /* linkage=_ZN23CGlobalListRegistryItemC4Ey */
	class CGlobalListRegistryItem & FindOrInsert(uint64); /* linkage=_ZN23CGlobalListRegistryItem12FindOrInsertEy */
} __attribute__((__aligned__(8)));

// <003865B7> tier0/platform.cpp:5164
void CGlobalListRegistryItem::CGlobalListRegistryItem(uint64 nHash)
{
} /* size: 0 */

// <00386591> tier0/platform.cpp:5164
inline void CGlobalListRegistryItem::CGlobalListRegistryItem(uint64 nHash)
{
} /* size: 0 */

// <00386460> tier0/platform.cpp:5170
// variables: 3
inline void FindOrInsert(uint64 UNIQUE_HASH)
{
	CGlobalListRegistryItem* pFound; // 5172
	 FN_FindRegistryItem; // 5173
	{
		GlobalListTypelessRegistry_t& registry; // 5187
	}
} /* size: 0, variables: 2 */

// <00386785> tier0/platform.cpp:5208
int GlobalRegistrySortCallback(CGlobalListRegistryItem* pA, CGlobalListRegistryItem* pB)
{
} /* size: 0 */

// <00385ADE> tier0/platform.cpp:5218
// variables: 5
// function calls: 36
GlobalListTypelessRegistry_t* Plat_GetGlobalListRegistry(uint64 UNIQUE_HASH)
{
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<unsigned int, 4>::operator++(); // 3093
	CThreadRWLock_FastRead::LockForRead(
			const char* pFileName,
			int nLineNumber);  // 345
	operator()(const class* __closure,
			CGlobalListRegistryItem* pIter); // 294
	SearchList_R<CGlobalListRegistryItem::FindOrInsert(uint64)::<lambda(CGlobalListRegistryItem*)>&>(class& functor,
													GlobalListEntryTree_t* pIter); // 355
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<unsigned int, 4>::operator--(); // 3106
	CThreadRWLock_FastRead::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 359
	SearchList<CGlobalListRegistryItem::FindOrInsert(uint64)::<lambda(CGlobalListRegistryItem*)>&>(class& functor,
													GlobalListTypelessRegistry_t& registry,
													bool bIterateFromBeginning); // 459
	SearchList<CGlobalListRegistryItem::FindOrInsert(uint64)::<lambda(CGlobalListRegistryItem*)>&>(class& functor); // 5184
	{
		GlobalListTypelessRegistry_t& registry; // 5187
		CInterlockedIntT<int, 4>::GetRaw(); // 3180
		ThreadInterlockedExchangeAdd(volatile int32* p,
						int32 value);  // 660
		CInterlockedIntT<unsigned int, 4>::AtomicAdd(
				unsigned int add);  // 3189
		CThreadRWLock_FastRead::LockForWrite(
				const char* pFileName,
				int nLineNumber);  // 5189
		GetRegistry(void); // 459
		SearchList<CGlobalListRegistryItem::FindOrInsert(uint64)::<lambda(CGlobalListRegistryItem*)>&>(class& functor); // 5191
		GlobalListEntryBase_t::GlobalListEntryBase_t(); // 26
		GlobalListEntryTree_t::GlobalListEntryTree_t(); // 263
		CGlobalListBase<CGlobalListRegistryItem::CGlobalListBase(); // 426
		CGlobalList<CGlobalListRegistryItem::CGlobalList(); // 5165
		GlobalListTypelessRegistry_t::GlobalListTypelessRegistry_t(); // 5165
		CInterlockedIntT<int, 4>::GetRaw(); // 3180
		ThreadInterlockedExchangeAdd(volatile int32* p,
						int32 value);  // 660
		CInterlockedIntT<unsigned int, 4>::AtomicAdd(
				unsigned int add);  // 3189
		CThreadRWLock_FastRead::LockForWrite(
				const char* pFileName,
				int nLineNumber);  // 191
		{
			_DebuggerBreakInlineExpressionWrapper(void); // 193
		}
		GlobalRegistrySortCallback(CGlobalListRegistryItem* pA,
						CGlobalListRegistryItem* pB);  // 288
		SortWrapper<GlobalRegistrySortCallback>(GlobalListEntryTree_t* pA,
							GlobalListEntryTree_t* pB);  // 161
		AddToSortedRegistry_R(GlobalListEntryTree_t* pInsert,
					int (*pFNSort)(GlobalListEntryTree_t *, GlobalListEntryTree_t *),
					GlobalListEntryTree_t* pIter);  // 201
		AddToSortedRegistry(GlobalListEntryTree_t* pInsert,
					int (*pFNSort)(GlobalListEntryTree_t *, GlobalListEntryTree_t *),
					GlobalListTypelessRegistry_t& registry);  // 273
		CGlobalListBase<CGlobalListRegistryItem::AddToRegistry<GlobalRegistrySortCallback>(
								GlobalListTypelessRegistry_t& registry);  // 436
		CGlobalList<CGlobalListRegistryItem::RegisterInList(); // 5167
		CGlobalListRegistryItem::CGlobalListRegistryItem(
					uint64 nHash);  // 5194
		GlobalListTypelessRegistry_t::InitRegistry(); // 5195
	}
	{
		GlobalListTypelessRegistry_t& registry; // 5187
	}
	FindOrInsert(uint64 UNIQUE_HASH); // 5170
	FindOrInsert(uint64 UNIQUE_HASH); // 5220
} /* size: 0, inline expansions: 12 (1688 bytes) */

// <003804B4> tier0/platform.cpp:5224
void OnThreadDetached(void)
{
} /* size: 0 */

// <0037F042> tier0/platform.cpp:5310
// member functions: 8
// member variables: 2
// class size: 8
class CThreadKeyHolder {
	/* tier0/platform.cpp:5313 */
	void CThreadKeyHolder(CThreadKeyHolder* );
	/* tier0/platform.cpp:5317 */
	void ~CThreadKeyHolder(CThreadKeyHolder* );
	/* tier0/platform.cpp:5322 */
	void ValueDestructor(void* );
	/* tier0/platform.cpp:5328 */
	void HookCurrentThread(CThreadKeyHolder* );
	bool m_bError; /* 0 1 */
	pthread_key_t m_ThreadKey; /* 4 4 */
	void CThreadKeyHolder(class CThreadKeyHolder *); /* linkage=_ZN16CThreadKeyHolderC4Ev */
	void ~CThreadKeyHolder(class CThreadKeyHolder *); /* linkage=_ZN16CThreadKeyHolderD4Ev */
	void ValueDestructor(void *); /* linkage=_ZN16CThreadKeyHolder15ValueDestructorEPv */
	void HookCurrentThread(class CThreadKeyHolder *); /* linkage=_ZN16CThreadKeyHolder17HookCurrentThreadEv */
};

// <00385AC7> tier0/platform.cpp:5313
void CThreadKeyHolder::CThreadKeyHolder()
{
} /* size: 0 */

// <00385AAE> tier0/platform.cpp:5313
inline void CThreadKeyHolder::CThreadKeyHolder()
{
} /* size: 0 */

// <00385A97> tier0/platform.cpp:5317
void CThreadKeyHolder::~CThreadKeyHolder()
{
} /* size: 0 */

// <00385A7E> tier0/platform.cpp:5317
inline void CThreadKeyHolder::~CThreadKeyHolder()
{
} /* size: 0 */

// <00385A49> tier0/platform.cpp:5322
void ValueDestructor(void *)
{
} /* size: 9 */

// <00385A30> tier0/platform.cpp:5328
inline void CThreadKeyHolder::HookCurrentThread()
{
} /* size: 0 */

// <003857AD> tier0/platform.cpp:5342
// variable: 1
// function calls: 10
void HookThreadDetachForCurrentThread(void)
{
	COrderedReferenceScope generated_id_5344; // 5344
	COrderedConstructor_DependencyManagement<CThreadKeyHolder>::ToGenericDependencyManagement(); // 988
	COrderedReferenceScope::COrderedReferenceScope<CThreadKeyHolder, COrderedResolve_NoResolve, false>(
											COrderedConstructor_Create<CThreadKeyHolder, COrderedResolve_NoResolve, false>& orderedType);  // 5344
	{
	}
	COrderedConstructor_DependencyManagement<CThreadKeyHolder>::GetRaw(); // 501
	COrderedConstructor_Create<CThreadKeyHolder, COrderedResolve_NoResolve, false>::GetRaw<>(); // 527
	COrderedConstructor_Create<CThreadKeyHolder, COrderedResolve_NoResolve, false>::operator->(); // 5345
	CThreadKeyHolder::HookCurrentThread(); // 5328
	CThreadKeyHolder::HookCurrentThread(); // 5345
	FromGenericDependencyManagement(COrderedSystem_DependencyManagement* pFrom); // 1187
	StaticRelease(COrderedSystem_DependencyManagement* pThis); // 994
	COrderedReferenceScope::~COrderedReferenceScope(); // 5346
} /* size: 0, variables: 1, inline expansions: 10 (0 bytes) */

// <00380472> tier0/platform.cpp:5364
void OrderedInit_Platform_Posix(bool, COrderedSystem_DependencyManagement &)
{
} /* size: 0 */

