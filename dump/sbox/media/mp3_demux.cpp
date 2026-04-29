
//
// sbox/media/mp3_demux.cpp
//
//	referenced by: libengine2.so
//
//	functions: 8
//	structs: 3
//

// <0208C1E7> sbox/media/mp3_demux.cpp:17
// member variable: 1
// struct size: 8
struct FileIo {
	FILE * fp; /* 0 8 */
};

// <0208C203> sbox/media/mp3_demux.cpp:22
// member variables: 2
// struct size: 16
struct HttpIo {
	HttpStreamSource * src; /* 0 8 */
	int64_t pos; /* 8 8 */
};

// <0208C22F> sbox/media/mp3_demux.cpp:30
// member variables: 4
// struct size: 32,456
struct Mp3Demux {
	/* sbox/media/mp3_demux.cpp:35 */
	union {
		FileIo file; /* 0 8 */
		HttpIo http; /* 0 16 */
	};
	drmp3 mp3; /* 0 32376 */
	bool bHttp; /* 32376 1 */
	union {
		FileIo file; /* 32384 8 */
		HttpIo http; /* 32384 16 */
	}; /* 32384 16 */
	MediaStreamInfo streamInfo; /* 32400 56 */
};

// <0208D8C2> sbox/media/mp3_demux.cpp:44
// variable: 1
size_t file_read_cb(void* pUserData, void* pBufferOut, size_t bytesToRead)
{
	FileIo* io; // 46
} /* size: 20, variables: 1 */

// <0208D81E> sbox/media/mp3_demux.cpp:50
// variables: 2
drmp3_bool32 file_seek_cb(void* pUserData, int offset, drmp3_seek_origin origin)
{
	FileIo* io; // 52
	int whence; // 53
} /* size: 48, variables: 2 */

// <0208D796> sbox/media/mp3_demux.cpp:57
// variables: 2
drmp3_bool32 file_tell_cb(void* pUserData, drmp3_int64* pCursor)
{
	FileIo* io; // 59
	long int pos; // 60
} /* size: 48, variables: 2 */

// <0208D6EB> sbox/media/mp3_demux.cpp:68
// variables: 2
size_t http_read_cb(void* pUserData, void* pBufferOut, size_t bytesToRead)
{
	HttpIo* io; // 70
	int got; // 71
} /* size: 60, variables: 2 */

// <0208D64E> sbox/media/mp3_demux.cpp:77
// variables: 2
drmp3_bool32 http_seek_cb(void* pUserData, int offset, drmp3_seek_origin origin)
{
	HttpIo* io; // 79
	{
		int64_t total; // 86
	}
} /* size: 109, variables: 1 */

// <0208D5F4> sbox/media/mp3_demux.cpp:94
// variable: 1
drmp3_bool32 http_tell_cb(void* pUserData, drmp3_int64* pCursor)
{
	HttpIo* io; // 96
} /* size: 17, variables: 1 */

// <0208D5D9> sbox/media/mp3_demux.cpp:103
void finish_open(Mp3Demux* ctx)
{
} /* size: 0 */

// <0208D20F> sbox/media/mp3_demux.cpp:168
int mp3_stream_count(Mp3Demux *)
{
} /* size: 0 */

