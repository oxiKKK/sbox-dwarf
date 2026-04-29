
//
// sbox/media/ogg_demux.cpp
//
//	referenced by: libengine2.so
//
//	functions: 10
//	structs: 3
//

// <020C0D73> sbox/media/ogg_demux.cpp:16
// member variable: 1
// struct size: 8
struct OggFileIo {
	FILE * fp; /* 0 8 */
};

// <020C0D8F> sbox/media/ogg_demux.cpp:21
// member variables: 3
// struct size: 24
struct OggHttpIo {
	HttpStreamSource * src; /* 0 8 */
	int64_t pos; /* 8 8 */
	int64_t size; /* 16 8 */
};

// <020C263D> sbox/media/ogg_demux.cpp:30
// variable: 1
size_t ogg_file_read(void* ptr, size_t size, size_t nmemb, void* datasource)
{
	OggFileIo* io; // 32
} /* size: 12, variables: 1 */

// <020C25AC> sbox/media/ogg_demux.cpp:36
// variable: 1
int ogg_file_seek(void* datasource, ogg_int64_t offset, int whence)
{
	OggFileIo* io; // 38
} /* size: 12, variables: 1 */

// <020C254B> sbox/media/ogg_demux.cpp:42
// variable: 1
long int ogg_file_tell(void* datasource)
{
	OggFileIo* io; // 44
} /* size: 12, variables: 1 */

// <020C2891> sbox/media/ogg_demux.cpp:48
int ogg_file_close(void *)
{
} /* size: 7 */

// <020C2464> sbox/media/ogg_demux.cpp:55
// variables: 3
size_t ogg_http_read(void* ptr, size_t size, size_t nmemb, void* datasource)
{
	OggHttpIo* io; // 57
	int total; // 58
	int got; // 59
} /* size: 63, variables: 3 */

// <020C2402> sbox/media/ogg_demux.cpp:65
// variable: 1
int ogg_http_seek(void* datasource, ogg_int64_t offset, int whence)
{
	OggHttpIo* io; // 67
} /* size: 61, variables: 1 */

// <020C23B6> sbox/media/ogg_demux.cpp:80
// variable: 1
long int ogg_http_tell(void* datasource)
{
	OggHttpIo* io; // 82
} /* size: 9, variables: 1 */

// <020C239F> sbox/media/ogg_demux.cpp:86
int ogg_http_close(void *)
{
} /* size: 0 */

// <020C0DCA> sbox/media/ogg_demux.cpp:93
// member variables: 5
// struct size: 1,040
struct OggDemux {
	/* sbox/media/ogg_demux.cpp:98 */
	union {
		OggFileIo file; /* 0 8 */
		OggHttpIo http; /* 0 24 */
	};
	OggVorbis_File vf; /* 0 944 */
	bool bHttp; /* 944 1 */
	union {
		OggFileIo file; /* 952 8 */
		OggHttpIo http; /* 952 24 */
	}; /* 952 24 */
	MediaStreamInfo streamInfo; /* 976 56 */
	int64_t totalPcmFrames; /* 1032 8 */
};

// <020C2305> sbox/media/ogg_demux.cpp:108
// variables: 2
bool ogg_finish_open(OggDemux* ctx)
{
	vorbis_info* info; // 110
	ogg_int64_t total; // 120
} /* size: 125, variables: 2 */

// <020C1F2D> sbox/media/ogg_demux.cpp:197
int ogg_stream_count(OggDemux *)
{
} /* size: 0 */

