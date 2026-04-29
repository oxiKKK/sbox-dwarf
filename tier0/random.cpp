
//
// tier0/random.cpp
//
//	referenced by: libtier0.so
//
//	functions: 19
//

// <003F1944> tier0/random.cpp:49
void InstallUniformRandomStream(IUniformRandomStream* pStream)
{
} /* size: 26 */

// <003F191C> tier0/random.cpp:55
IUniformRandomStream& GetDefaultUniformRandomStream(void)
{
} /* size: 12 */

// <003F18D4> tier0/random.cpp:63
void RandomSeed(int iSeed)
{
} /* size: 18 */

// <003F182F> tier0/random.cpp:68
// function call: 1
float RandomFloat(float flMinVal, float flMaxVal)
{
	CUniformRandomStream::RandomFloat(
			float flLow,
			float flHigh);  // 70
} /* size: 130, inline expansions: 1 (68 bytes) */

// <003F1752> tier0/random.cpp:73
// function call: 1
float RandomFloatExp(float flMinVal, float flMaxVal, float flExponent)
{
	CUniformRandomStream::RandomFloatExp(
			float flMinVal,
			float flMaxVal,
			float flExponent);  // 75
} /* size: 178, inline expansions: 1 (110 bytes) */

// <003F15E4> tier0/random.cpp:83
float RandomGaussianFloat(float flMean, float flStdDev)
{
} /* size: 16 */

// <003F1468> tier0/random.cpp:93
// variables: 6
// function calls: 3
void CUniformRandomStream::CUniformRandomStream()
{
	{
		uint64 seed; // 96
		float64 flAppTime; // 97
		ThreadId_t threadId; // 98
	}
	IUniformRandomStream::IUniformRandomStream(); // 93
	CThreadFastMutex::CThreadFastMutex(
			const char* pLockName);  // 2398
	CCopyableLock<CThreadFastMutex, (CopiedLockState_t)1>::CCopyableLock()1>* this); // 93
	{
		uint64 seed; // 96
		float64 flAppTime; // 97
		ThreadId_t threadId; // 98
	}
} /* size: 124, inline expansions: 3 (74 bytes) */

// <003F1428> tier0/random.cpp:93
// variables: 3
void CUniformRandomStream::CUniformRandomStream()
{
	{
		uint64 seed; // 96
		float64 flAppTime; // 97
		ThreadId_t threadId; // 98
	}
} /* size: 0 */

// <003F110E> tier0/random.cpp:107
// variables: 3
// function calls: 12
void CUniformRandomStream::SetSeed(int iSeed)
{
	CAutoLockT<CCopyableLock<CThreadFastMutex, (CopiedLockState_t)1>, CAutoLockMutexTrait<CCopyableLock<CThreadFastMutex, (CopiedLockState_t)1> > > generated_id_109; // 109
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
	Lock(CCopyableLock<CThreadFastMutex, (CopiedLockState_t)1>& lock,
		const char* pFileName,
		int nLineNumber); // 978
	CAutoLockT(const CAutoLockT<CCopyableLock<CThreadFastMutex, (CopiedLockState_t)1>, CAutoLockMutexTrait<CCopyableLock<CThreadFastMute this,
			const CCopyableLock<CThreadFastMutex, (CopiedLockState_t)1>& lock,
			const char* pFilename,
			int nLineNumber); // 109
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CCopyableLock<CThreadFastMutex, (CopiedLockState_t)1>& lock,
		const char* pFileName,
		int nLineNumber); // 983
	~CAutoLockT(const CAutoLockT<CCopyableLock<CThreadFastMutex, (CopiedLockState_t)1>, CAutoLockMutexTrait<CCopyableLock<CThreadFastMute this); // 112
} /* size: 183, variables: 1, inline expansions: 10 (421 bytes) */

// <003F0D86> tier0/random.cpp:114
// variables: 5
// function calls: 13
void CUniformRandomStream::GenerateRandomNumber()
{
	CAutoLockT<CCopyableLock<CThreadFastMutex, (CopiedLockState_t)1>, CAutoLockMutexTrait<CCopyableLock<CThreadFastMutex, (CopiedLockState_t)1> > > generated_id_116; // 116
	int j; // 117
	int k; // 118
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
	Lock(CCopyableLock<CThreadFastMutex, (CopiedLockState_t)1>& lock,
		const char* pFileName,
		int nLineNumber); // 978
	CAutoLockT(const CAutoLockT<CCopyableLock<CThreadFastMutex, (CopiedLockState_t)1>, CAutoLockMutexTrait<CCopyableLock<CThreadFastMute this,
			const CCopyableLock<CThreadFastMutex, (CopiedLockState_t)1>& lock,
			const char* pFilename,
			int nLineNumber); // 116
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CCopyableLock<CThreadFastMutex, (CopiedLockState_t)1>& lock,
		const char* pFileName,
		int nLineNumber); // 983
	~CAutoLockT(const CAutoLockT<CCopyableLock<CThreadFastMutex, (CopiedLockState_t)1>, CAutoLockMutexTrait<CCopyableLock<CThreadFastMute this); // 161
	Plat_IsInDebugSession(void); // 149
} /* size: 488, variables: 3, inline expansions: 11 (434 bytes) */

// <003F0D4A> tier0/random.cpp:163
// variable: 1
void CUniformRandomStream::RandomFloat(float flLow, float flHigh)
{
	float fl; // 166
} /* size: 0, variables: 1 */

// <003F0D02> tier0/random.cpp:174
// variable: 1
void CUniformRandomStream::RandomFloatExp(float flMinVal, float flMaxVal, float flExponent)
{
	float fl; // 177
} /* size: 0, variables: 1 */

// <003F0C13> tier0/random.cpp:225
// function call: 1
void CGaussianRandomStream::CGaussianRandomStream(IUniformRandomStream* pUniformStream)
{
	CThreadFastMutex::CThreadFastMutex(
			const char* pLockName);  // 225
} /* size: 32, inline expansions: 1 (23 bytes) */

// <003F0BEB> tier0/random.cpp:225
void CGaussianRandomStream::CGaussianRandomStream(IUniformRandomStream* pUniformStream)
{
} /* size: 0 */

// <003F08F2> tier0/random.cpp:234
// variable: 1
// function calls: 10
void CGaussianRandomStream::AttachToStream(IUniformRandomStream* pUniformStream)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_236; // 236
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
			int nLineNumber);  // 236
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 239
} /* size: 137, variables: 1, inline expansions: 10 (325 bytes) */

// <003F0405> tier0/random.cpp:245
// variables: 6
// function calls: 12
void CGaussianRandomStream::RandomFloat(float flMean, float flStdDev)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_247; // 247
	IUniformRandomStream* pUniformStream; // 248
	float fac; // 249
	float rsq; // 249
	float v1; // 249
	float v2; // 249
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
			int nLineNumber);  // 247
	CUniformRandomStream::RandomFloat(
			float flLow,
			float flHigh);  // 257
	CUniformRandomStream::RandomFloat(
			float flLow,
			float flHigh);  // 258
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 276
} /* size: 654, variables: 6, inline expansions: 12 (506 bytes) */

// <003F01B9> tier0/random.cpp:278
// variables: 6
// function calls: 2
void SecureRandomBytes(void* pDest, size_t cbSize)
{
	int s_dev_urandom_fd; // 302
	const char   __FUNCTION__; // 17012
	size_t remaining; // 304
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 303
	}
	{
		ssize_t urandom_result; // 307
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 308
		}
		read(int __fd,
			void* __buf,
			size_t __nbytes);  // 307
	}
	open(const char* __path,
		int __oflag, ...);  // 302
} /* size: 0, variables: 3, inline expansions: 1 (19 bytes) */

// <003F00FE> tier0/random.cpp:333
// variables: 4
double SecureRandomDouble(double flMinVal, double flMaxVal)
{
	const uint64_t  kMax; // 337
	const double  kMult; // 338
	uint64_t x_i; // 340
	double x_f; // 343
} /* size: 124, variables: 4 */

// <003F003A> tier0/random.cpp:347
// variables: 4
int SecureRandomInt(int iLow, int iHigh)
{
	unsigned int x; // 349
	const unsigned int  kMaxRandomRange; // 351
	unsigned int maxAcceptable; // 365
	unsigned int n; // 366
} /* size: 143, variables: 4 */

