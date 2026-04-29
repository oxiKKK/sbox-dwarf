
//
// sbox/media/wav_demux.cpp
//
//	referenced by: libengine2.so
//
//	functions: 8
//	structs: 3
//

// <0209ED9F> sbox/media/wav_demux.cpp:23
// member variable: 1
// struct size: 8
struct FileIoWav {
	FILE * fp; /* 0 8 */
};

// <0209EDBB> sbox/media/wav_demux.cpp:28
// member variables: 2
// struct size: 16
struct HttpIoWav {
	HttpStreamSource * src; /* 0 8 */
	int64_t pos; /* 8 8 */
};

// <0209EDE7> sbox/media/wav_demux.cpp:36
// member variables: 4
// struct size: 488
struct WavDemux {
	/* sbox/media/wav_demux.cpp:41 */
	union {
		FileIoWav file; /* 0 8 */
		HttpIoWav http; /* 0 16 */
	};
	drwav wav; /* 0 408 */
	bool bHttp; /* 408 1 */
	union {
		FileIoWav file; /* 416 8 */
		HttpIoWav http; /* 416 16 */
	}; /* 416 16 */
	MediaStreamInfo streamInfo; /* 432 56 */
};

// <020A0757> sbox/media/wav_demux.cpp:50
// variable: 1
size_t wav_file_read_cb(void* pUserData, void* pBufferOut, size_t bytesToRead)
{
	FileIoWav* io; // 52
} /* size: 20, variables: 1 */

// <020A06A2> sbox/media/wav_demux.cpp:56
// variables: 2
drwav_bool32 wav_file_seek_cb(void* pUserData, int offset, drwav_seek_origin origin)
{
	FileIoWav* io; // 58
	int whence; // 59
} /* size: 37, variables: 2 */

// <020A0619> sbox/media/wav_demux.cpp:63
// variables: 2
drwav_bool32 wav_file_tell_cb(void* pUserData, drwav_int64* pCursor)
{
	FileIoWav* io; // 65
	long int pos; // 66
} /* size: 48, variables: 2 */

// <020A056D> sbox/media/wav_demux.cpp:74
// variables: 2
size_t wav_http_read_cb(void* pUserData, void* pBufferOut, size_t bytesToRead)
{
	HttpIoWav* io; // 76
	int got; // 77
} /* size: 60, variables: 2 */

// <020A0502> sbox/media/wav_demux.cpp:83
// variable: 1
drwav_bool32 wav_http_seek_cb(void* pUserData, int offset, drwav_seek_origin origin)
{
	HttpIoWav* io; // 85
} /* size: 25, variables: 1 */

// <020A04A5> sbox/media/wav_demux.cpp:93
// variable: 1
drwav_bool32 wav_http_tell_cb(void* pUserData, drwav_int64* pCursor)
{
	HttpIoWav* io; // 95
} /* size: 17, variables: 1 */

// <020A048A> sbox/media/wav_demux.cpp:102
void wav_finish_open(WavDemux* ctx)
{
} /* size: 0 */

// <0209FD56> sbox/media/wav_demux.cpp:167
int wav_stream_count(WavDemux *)
{
} /* size: 0 */

