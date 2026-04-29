
//
// sbox/media/http_stream.cpp
//
//	referenced by: libengine2.so
//
//	functions: 29
//

// <02068CDF> sbox/media/http_stream.cpp:9
// variable: 1
void EnsureCurlGlobalInit(void)
{
	bool s_initialized; // 13
} /* size: 0, variables: 1 */

// <02068C93> sbox/media/http_stream.cpp:23
void RunMainThreadStatic(void* pArg)
{
} /* size: 17 */

// <02068C47> sbox/media/http_stream.cpp:29
void RunTailThreadStatic(void* pArg)
{
} /* size: 17 */

// <02068C26> sbox/media/http_stream.cpp:35
void JoinThread(ThreadHandle_t& hThread)
{
} /* size: 0 */

// <02068AEC> sbox/media/http_stream.cpp:43
// function calls: 2
void HttpStreamSource::HttpStreamSource()
{
	CThreadMutex::CThreadMutex(
			const char* pName);  // 43
	CInterlockedIntT<int, 4>::CInterlockedIntT(); // 43
} /* size: 265, inline expansions: 2 (89 bytes) */

// <02068ACF> sbox/media/http_stream.cpp:43
void HttpStreamSource::HttpStreamSource()
{
} /* size: 0 */

// <02068916> sbox/media/http_stream.cpp:48
// function calls: 4
void HttpStreamSource::~HttpStreamSource()
{
	JoinThread(ThreadHandle_t& hThread); // 51
	JoinThread(ThreadHandle_t& hThread); // 52
	CThreadEvent::~CThreadEvent(); // 65
	CThreadMutex::~CThreadMutex(); // 65
} /* size: 220, inline expansions: 4 (128 bytes) */

// <020688F9> sbox/media/http_stream.cpp:48
void HttpStreamSource::~HttpStreamSource()
{
} /* size: 0 */

// <020686C3> sbox/media/http_stream.cpp:67
// function calls: 4
void HttpStreamSource::Start(const char* url)
{
	operator()(const class* __closure); // 19
	EnsureCurlGlobalInit(void); // 69
	V_strncpy<long unsigned int>(char* pDest,
					const char* pSrc,
					long unsigned int maxLenInChars);  // 71
	CreateSimpleThread(ThreadFunc_t pfnThread,
				void* pParam,
				unsigned int stackSize,
				const char* szName,
				size_t nDuplicateParamSize);  // 80
} /* size: 285, inline expansions: 4 (200 bytes) */

// <020683C0> sbox/media/http_stream.cpp:84
// variables: 2
void HttpStreamSource::SetupCurlHandle(int64_t fromOffset)
{
	CURL* curl; // 86
	{
		char rangeHdr; // 109
	}
} /* size: 420, variables: 1 */

// <02067DFE> sbox/media/http_stream.cpp:117
// variables: 2
// function calls: 18
void HttpStreamSource::RestartFrom(int64_t fromOffset)
{
	{
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_129; // 129
		CThreadMutex::Lock(
			const char* pFileName,
			int nLineNumber);  // 943
		Lock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
				const CThreadMutex& lock,
				const char* pFilename,
				int nLineNumber);  // 129
		ThreadInterlockedExchange(volatile int32* p,
						int32 value);  // 641
		CInterlockedIntT<int, 4>::operator=(
				int newValue);  // 130
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 137
	}
	{
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_142; // 142
		CThreadMutex::Lock(
			const char* pFileName,
			int nLineNumber);  // 943
		Lock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
				const CThreadMutex& lock,
				const char* pFilename,
				int nLineNumber);  // 142
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 146
	}
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 641
	CInterlockedIntT<int, 4>::operator=(
			int newValue);  // 120
	JoinThread(ThreadHandle_t& hThread); // 122
	CreateSimpleThread(ThreadFunc_t pfnThread,
				void* pParam,
				unsigned int stackSize,
				const char* szName,
				size_t nDuplicateParamSize);  // 148
} /* size: 493, inline expansions: 4 (109 bytes) */

// <02067B53> sbox/media/http_stream.cpp:151
// variables: 3
// function calls: 6
void HttpStreamSource::RunMainThread()
{
	CURLcode res; // 153
	long int httpCode; // 155
	{
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_159; // 159
		CThreadMutex::Lock(
			const char* pFileName,
			int nLineNumber);  // 943
		Lock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
				const CThreadMutex& lock,
				const char* pFilename,
				int nLineNumber);  // 159
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 167
	}
} /* size: 349, variables: 2 */

// <0206789B> sbox/media/http_stream.cpp:171
// variables: 3
// function calls: 6
void HttpStreamSource::RunTailThread()
{
	CURLcode res; // 173
	long int httpCode; // 175
	{
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_179; // 179
		CThreadMutex::Lock(
			const char* pFileName,
			int nLineNumber);  // 943
		Lock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
				const CThreadMutex& lock,
				const char* pFilename,
				int nLineNumber);  // 179
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 188
	}
} /* size: 381, variables: 2 */

// <02067646> sbox/media/http_stream.cpp:192
// variable: 1
// function calls: 8
void HttpStreamSource::Abort()
{
	{
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_196; // 196
		CThreadMutex::Lock(
			const char* pFileName,
			int nLineNumber);  // 943
		Lock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
				const CThreadMutex& lock,
				const char* pFilename,
				int nLineNumber);  // 196
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 199
	}
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 641
	CInterlockedIntT<int, 4>::operator=(
			int newValue);  // 194
} /* size: 136, inline expansions: 2 (27 bytes) */

// <02067396> sbox/media/http_stream.cpp:203
// variable: 1
// function calls: 9
void HttpStreamSource::WaitForBuffer(int64_t minBytes)
{
	{
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_208; // 208
		CThreadMutex::Lock(
			const char* pFileName,
			int nLineNumber);  // 943
		Lock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
				const CThreadMutex& lock,
				const char* pFilename,
				int nLineNumber);  // 208
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 211
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 211
	}
} /* size: 211 */

// <020670FA> sbox/media/http_stream.cpp:216
// variable: 1
// function calls: 9
void HttpStreamSource::WaitForHeaders()
{
	{
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_221; // 221
		CThreadMutex::Lock(
			const char* pFileName,
			int nLineNumber);  // 943
		Lock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
				const CThreadMutex& lock,
				const char* pFilename,
				int nLineNumber);  // 221
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 224
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 224
	}
} /* size: 237 */

// <02066F32> sbox/media/http_stream.cpp:229
// variable: 1
// function calls: 6
void HttpStreamSource::IsError()
{
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_231; // 231
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 943
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
			const CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 231
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 233
} /* size: 123, variables: 1, inline expansions: 6 (207 bytes) */

// <02066D6A> sbox/media/http_stream.cpp:235
// variable: 1
// function calls: 6
void HttpStreamSource::IsDone()
{
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_237; // 237
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 943
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
			const CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 237
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 239
} /* size: 0, variables: 1, inline expansions: 6 (0 bytes) */

// <02066BA2> sbox/media/http_stream.cpp:241
// variable: 1
// function calls: 6
void HttpStreamSource::TotalSize()
{
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_243; // 243
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 943
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
			const CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 243
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 245
} /* size: 122, variables: 1, inline expansions: 6 (207 bytes) */

// <020669DA> sbox/media/http_stream.cpp:247
// variable: 1
// function calls: 6
void HttpStreamSource::DownloadedBytes()
{
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_249; // 249
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 943
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
			const CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 249
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 251
} /* size: 0, variables: 1, inline expansions: 6 (0 bytes) */

// <0206673F> sbox/media/http_stream.cpp:255
// variables: 3
// function calls: 6
void HttpStreamSource::RingRead(int64_t fileOff, void* out, size_t len)
{
	size_t relOff; // 257
	size_t idx; // 258
	size_t first; // 259
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 262
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 266
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 267
} /* size: 142, variables: 3, inline expansions: 6 (68 bytes) */

// <02066496> sbox/media/http_stream.cpp:273
// variables: 3
// function calls: 6
void HttpStreamSource::RingWrite(const void* data, size_t len)
{
	int64_t excess; // 276
	size_t writeIdx; // 284
	size_t first; // 285
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 288
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 292
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 293
} /* size: 217, variables: 3, inline expansions: 6 (82 bytes) */

// <02065FDF> sbox/media/http_stream.cpp:299
// variables: 5
// function calls: 11
void HttpStreamSource::Read(int64_t offset, void* out, size_t len)
{
	{
		bool resolved; // 306
		bool needsRestart; // 307
		int result; // 308
		{
			CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_311; // 311
			{
				size_t avail; // 343
			}
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 91
			V_memcpy(void* dest,
				const void* src,
				size_t count);  // 327
			CThreadMutex::Lock(
				const char* pFileName,
				int nLineNumber);  // 943
			Lock(CThreadMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 978
			CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
					const CThreadMutex& lock,
					const char* pFilename,
					int nLineNumber);  // 311
			CThreadMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 944
			Unlock(CThreadMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 983
			CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 349
			CThreadMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 944
			Unlock(CThreadMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 983
			CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 349
		}
	}
} /* size: 687 */

// <02065A8B> sbox/media/http_stream.cpp:368
// variables: 4
// function calls: 17
void CurlWriteCallback(char* ptr, size_t size, size_t nmemb, void* userdata)
{
	HttpStreamSource* src; // 370
	size_t total; // 371
	{
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_384; // 384
		CThreadMutex::Lock(
			const char* pFileName,
			int nLineNumber);  // 943
		Lock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
				const CThreadMutex& lock,
				const char* pFilename,
				int nLineNumber);  // 384
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 387
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 387
	}
	{
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_392; // 392
		CThreadMutex::Lock(
			const char* pFileName,
			int nLineNumber);  // 943
		Lock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
				const CThreadMutex& lock,
				const char* pFilename,
				int nLineNumber);  // 392
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 394
	}
	CInterlockedIntT<int, 4>::operator int(); // 373
	CInterlockedIntT<int, 4>::operator int(); // 381
} /* size: 405, variables: 2, inline expansions: 2 (21 bytes) */

// <0206910E> sbox/media/http_stream.cpp:399
// variables: 4
// function calls: 9
void CurlHeaderCallback(char* buffer, size_t size, size_t nitems, void* userdata)
{
	HttpStreamSource* src; // 401
	size_t total; // 402
	V_strnicmp_fast<int>(const char* s1,
				const char* s2,
				int n);  // 406
	{
		int64_t sz; // 408
		{
			CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_412; // 412
			CThreadMutex::Lock(
				const char* pFileName,
				int nLineNumber);  // 943
			Lock(CThreadMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 978
			CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
					const CThreadMutex& lock,
					const char* pFilename,
					int nLineNumber);  // 412
			CThreadMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 944
			Unlock(CThreadMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 983
			CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 415
		}
		CInterlockedIntT<int, 4>::operator!(); // 419
	}
	CurlHeaderCallback(char* buffer,
				size_t size,
				size_t nitems,
				void* userdata);  // 399
} /* size: 309, variables: 2, inline expansions: 2 (244 bytes) */

// <020659E4> sbox/media/http_stream.cpp:399
// variables: 6
void CurlHeaderCallback(char* buffer, size_t size, size_t nitems, void* userdata)
{
	HttpStreamSource* src; // 401
	size_t total; // 402
	const char   kContentLengthPrefix; // 404
	const size_t  kContentLengthPrefixLen; // 405
	{
		int64_t sz; // 408
		{
			CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_412; // 412
		}
	}
} /* size: 0, variables: 4 */

// <0206569E> sbox/media/http_stream.cpp:426
// variables: 5
// function calls: 9
void CurlTailWriteCallback(char* ptr, size_t size, size_t nmemb, void* userdata)
{
	HttpStreamSource* src; // 428
	size_t total; // 429
	{
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_435; // 435
		{
			size_t canWrite; // 438
			size_t write; // 439
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 91
			V_memcpy(void* dest,
				const void* src,
				size_t count);  // 440
		}
		CThreadMutex::Lock(
			const char* pFileName,
			int nLineNumber);  // 943
		Lock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
				const CThreadMutex& lock,
				const char* pFilename,
				int nLineNumber);  // 435
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 443
	}
	CInterlockedIntT<int, 4>::operator int(); // 431
} /* size: 306, variables: 2, inline expansions: 1 (6 bytes) */

// <0206560A> sbox/media/http_stream.cpp:448
// variable: 1
// function call: 1
void CurlProgressCallback(void* clientp, curl_off_t, curl_off_t, curl_off_t, curl_off_t)
{
	HttpStreamSource* src; // 451
	CInterlockedIntT<int, 4>::operator int(); // 454
} /* size: 19, variables: 1, inline expansions: 1 (6 bytes) */

// <0206518C> sbox/media/http_stream.cpp:457
// variables: 3
// function calls: 7
void HttpStreamSource::FetchTail(int64_t totalSize)
{
	int64_t tailStart; // 461
	char rangeHdr; // 467
	{
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_484; // 484
		CThreadMutex::Lock(
			const char* pFileName,
			int nLineNumber);  // 943
		Lock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
				const CThreadMutex& lock,
				const char* pFilename,
				int nLineNumber);  // 484
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 488
	}
	CreateSimpleThread(ThreadFunc_t pfnThread,
				void* pParam,
				unsigned int stackSize,
				const char* szName,
				size_t nDuplicateParamSize);  // 490
} /* size: 573, variables: 2, inline expansions: 1 (35 bytes) */

