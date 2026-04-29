
//
// sbox/media/http_stream.h
//
//	referenced by: libengine2.so
//
//	functions: 2
//	class: 1
//

// <01FA1E86> sbox/media/http_stream.h:15
// member functions: 48
// member variables: 19
// static member variables: 2
// class size: 1,344
class HttpStreamSource {
	/* sbox/media/http_stream.h:18 */
	void HttpStreamSource(HttpStreamSource* );
	/* sbox/media/http_stream.h:19 */
	void ~HttpStreamSource(HttpStreamSource* );
	/* sbox/media/http_stream.h:21 */
	bool Start(HttpStreamSource* , const char* );
	/* sbox/media/http_stream.h:22 */
	void Abort(HttpStreamSource* );
	/* sbox/media/http_stream.h:23 */
	void WaitForBuffer(HttpStreamSource* , int64_t);
	/* sbox/media/http_stream.h:25 */
	void WaitForHeaders(HttpStreamSource* );
	/* sbox/media/http_stream.h:27 */
	bool IsError(const HttpStreamSource* );
	/* sbox/media/http_stream.h:28 */
	bool IsDone(const HttpStreamSource* );
	/* sbox/media/http_stream.h:29 */
	int64_t TotalSize(const HttpStreamSource* );
	/* sbox/media/http_stream.h:30 */
	int64_t DownloadedBytes(const HttpStreamSource* );
	/* sbox/media/http_stream.h:34 */
	int Read(HttpStreamSource* , int64_t, void* , size_t);
	static const int64_t kWindowSize = 8388608; /* 0 0 */
	static const int64_t kTailFetchBytes = 262144; /* 0 0 */
private:
	/* sbox/media/http_stream.h:42 */
	void FetchTail(HttpStreamSource* , int64_t);
	/* sbox/media/http_stream.h:43 */
	void RunMainThread(HttpStreamSource* );
	/* sbox/media/http_stream.h:44 */
	void RunTailThread(HttpStreamSource* );
	/* sbox/media/http_stream.h:46 */
	void RestartFrom(HttpStreamSource* , int64_t);
	/* sbox/media/http_stream.h:47 */
	CURL* SetupCurlHandle(HttpStreamSource* , int64_t);
	/* sbox/media/http_stream.h:50 */
	void RingRead(const HttpStreamSource* , int64_t, void* , size_t);
	/* sbox/media/http_stream.h:51 */
	void RingWrite(HttpStreamSource* , const void* , size_t);
	/* sbox/media/http_stream.h:53 */
	uintp RunMainThreadStatic(void* );
	/* sbox/media/http_stream.h:54 */
	uintp RunTailThreadStatic(void* );
	/* sbox/media/http_stream.h:55 */
	size_t CurlWriteCallback(char* , size_t, size_t, void* );
	/* sbox/media/http_stream.h:56 */
	size_t CurlHeaderCallback(char* , size_t, size_t, void* );
	/* sbox/media/http_stream.h:57 */
	size_t CurlTailWriteCallback(char* , size_t, size_t, void* );
	/* sbox/media/http_stream.h:58 */
	int CurlProgressCallback(void* , curl_off_t, curl_off_t, curl_off_t, curl_off_t);
	CURL * m_curl; /* 0 8 */
	CURL * m_tailCurl; /* 8 8 */
	char m_url[1024]; /* 16 1024 */
	ThreadHandle_t m_thread; /* 1040 8 */
	ThreadHandle_t m_tailThread; /* 1048 8 */
	CInterlockedInt m_bAbort __attribute__((__aligned__(4))); /* 1056 4 */
	uint8_t * m_ring; /* 1064 8 */
	int64_t m_ringHead; /* 1072 8 */
	int64_t m_ringTail; /* 1080 8 */
	size_t m_ringHeadIdx; /* 1088 8 */
	uint8_t * m_tailBuf; /* 1096 8 */
	int64_t m_tailStart; /* 1104 8 */
	int64_t m_tailFilled; /* 1112 8 */
	int64_t m_readerHead; /* 1120 8 */
	int64_t m_totalSize; /* 1128 8 */
	bool m_bDone; /* 1136 1 */
	bool m_bError; /* 1137 1 */
	CThreadMutex m_mutex; /* 1144 72 */
	CThreadEvent m_newData; /* 1216 128 */
	void HttpStreamSource(class HttpStreamSource *); /* linkage=_ZN16HttpStreamSourceC4Ev */
	void ~HttpStreamSource(class HttpStreamSource *); /* linkage=_ZN16HttpStreamSourceD4Ev */
	bool Start(class HttpStreamSource *, const char  *); /* linkage=_ZN16HttpStreamSource5StartEPKc */
	void Abort(class HttpStreamSource *); /* linkage=_ZN16HttpStreamSource5AbortEv */
	void WaitForBuffer(class HttpStreamSource *, int64_t); /* linkage=_ZN16HttpStreamSource13WaitForBufferEl */
	void WaitForHeaders(class HttpStreamSource *); /* linkage=_ZN16HttpStreamSource14WaitForHeadersEv */
	bool IsError(const class HttpStreamSource  *); /* linkage=_ZNK16HttpStreamSource7IsErrorEv */
	bool IsDone(const class HttpStreamSource  *); /* linkage=_ZNK16HttpStreamSource6IsDoneEv */
	int64_t TotalSize(const class HttpStreamSource  *); /* linkage=_ZNK16HttpStreamSource9TotalSizeEv */
	int64_t DownloadedBytes(const class HttpStreamSource  *); /* linkage=_ZNK16HttpStreamSource15DownloadedBytesEv */
	int Read(class HttpStreamSource *, int64_t, void *, size_t); /* linkage=_ZN16HttpStreamSource4ReadElPvm */
	void FetchTail(class HttpStreamSource *, int64_t); /* linkage=_ZN16HttpStreamSource9FetchTailEl */
	void RunMainThread(class HttpStreamSource *); /* linkage=_ZN16HttpStreamSource13RunMainThreadEv */
	void RunTailThread(class HttpStreamSource *); /* linkage=_ZN16HttpStreamSource13RunTailThreadEv */
	void RestartFrom(class HttpStreamSource *, int64_t); /* linkage=_ZN16HttpStreamSource11RestartFromEl */
	CURL * SetupCurlHandle(class HttpStreamSource *, int64_t); /* linkage=_ZN16HttpStreamSource15SetupCurlHandleEl */
	void RingRead(const class HttpStreamSource  *, int64_t, void *, size_t); /* linkage=_ZNK16HttpStreamSource8RingReadElPvm */
	void RingWrite(class HttpStreamSource *, const void  *, size_t); /* linkage=_ZN16HttpStreamSource9RingWriteEPKvm */
	uintp RunMainThreadStatic(void *); /* linkage=_ZN16HttpStreamSource19RunMainThreadStaticEPv */
	uintp RunTailThreadStatic(void *); /* linkage=_ZN16HttpStreamSource19RunTailThreadStaticEPv */
	size_t CurlWriteCallback(char *, size_t, size_t, void *); /* linkage=_ZN16HttpStreamSource17CurlWriteCallbackEPcmmPv */
	/* <206910e> sbox/media/http_stream.cpp:399 */
	size_t CurlHeaderCallback(char *, size_t, size_t, void *); /* linkage=_ZN16HttpStreamSource18CurlHeaderCallbackEPcmmPv */
	size_t CurlTailWriteCallback(char *, size_t, size_t, void *); /* linkage=_ZN16HttpStreamSource21CurlTailWriteCallbackEPcmmPv */
	int CurlProgressCallback(void *, curl_off_t, curl_off_t, curl_off_t, curl_off_t); /* linkage=_ZN16HttpStreamSource20CurlProgressCallbackEPvllll */
} __attribute__((__aligned__(8)));

// <01FA7608> sbox/media/http_stream.h:18
void HttpStreamSource::HttpStreamSource()
{
} /* size: 0 */

// <01FA75EC> sbox/media/http_stream.h:19
void HttpStreamSource::~HttpStreamSource()
{
} /* size: 0 */

