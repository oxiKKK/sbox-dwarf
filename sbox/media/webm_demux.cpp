
//
// sbox/media/webm_demux.cpp
//
//	referenced by: libengine2.so
//
//	functions: 18
//	classes: 2
//	struct: 1
//

// <0205AA4F> sbox/media/webm_demux.cpp:14
// function call: 1
void FileReader::~FileReader()
{
	IMkvReader::~IMkvReader(); // 14
} /* size: 5, inline expansions: 1 (0 bytes) */

// <0205A99D> sbox/media/webm_demux.cpp:14
// function calls: 2
void FileReader::~FileReader()
{
	IMkvReader::~IMkvReader(); // 14
	FileReader::~FileReader(); // 14
} /* size: 14, inline expansions: 2 (0 bytes) */

// <0205A981> sbox/media/webm_demux.cpp:14
inline void FileReader::~FileReader()
{
} /* size: 0 */

// <02057D31> sbox/media/webm_demux.cpp:14
// member functions: 12
// member variables: 3
// vtable entries: 2
// class size: 24
class FileReader : public IMkvReader {
public:
	/* class IMkvReader <ancestor>; */ /* 0 8 */
	void FileReader(FileReader* , FileReader& );
	void FileReader(FileReader* , const FileReader& );
	/* sbox/media/webm_demux.cpp:17 */
	void FileReader(FileReader* , FILE* );
	/* sbox/media/webm_demux.cpp:24 */
	virtual int Read(FileReader* , long long int, long int, unsigned char* );
	/* sbox/media/webm_demux.cpp:32 */
	virtual int Length(FileReader* , long long int* , long long int* );
private:
	FILE * m_fp; /* 8 8 */
	long long int m_size; /* 16 8 */
	virtual void ~FileReader(FileReader* );
	void FileReader(class FileReader *, class FileReader &); /* linkage=_ZN10FileReaderC4EOS_ */
	void FileReader(class FileReader *, const class FileReader  &); /* linkage=_ZN10FileReaderC4ERKS_ */
	void FileReader(class FileReader *, FILE *); /* linkage=_ZN10FileReaderC4EP8_IO_FILE */
	virtual int Read(class FileReader *, long long int, long int, unsigned char *); /* linkage=_ZN10FileReader4ReadExlPh */
	virtual int Length(class FileReader *, long long int *, long long int *); /* linkage=_ZN10FileReader6LengthEPxS0_ */
	virtual void ~FileReader(class FileReader *); /* linkage=_ZN10FileReaderD4Ev */
};

// <0205AD6D> sbox/media/webm_demux.cpp:17
void FileReader::FileReader(FILE* f)
{
} /* size: 0 */

// <0205AD4A> sbox/media/webm_demux.cpp:17
inline void FileReader::FileReader(FILE* f)
{
} /* size: 0 */

// <0205AC8A> sbox/media/webm_demux.cpp:24
// variable: 1
void FileReader::Read(long long int pos, long int len, unsigned char* buf)
{
	const size_t  n; // 28
} /* size: 95, variables: 1 */

// <0205AC3C> sbox/media/webm_demux.cpp:32
void FileReader::Length(long long int* total, long long int* available)
{
} /* size: 31 */

// <0205A924> sbox/media/webm_demux.cpp:44
// function call: 1
void HttpReader::~HttpReader()
{
	IMkvReader::~IMkvReader(); // 44
} /* size: 5, inline expansions: 1 (0 bytes) */

// <0205A872> sbox/media/webm_demux.cpp:44
// function calls: 2
void HttpReader::~HttpReader()
{
	IMkvReader::~IMkvReader(); // 44
	HttpReader::~HttpReader(); // 44
} /* size: 14, inline expansions: 2 (0 bytes) */

// <0205A856> sbox/media/webm_demux.cpp:44
inline void HttpReader::~HttpReader()
{
} /* size: 0 */

// <02057E66> sbox/media/webm_demux.cpp:44
// member functions: 12
// member variables: 2
// vtable entries: 2
// class size: 16
class HttpReader : public IMkvReader {
public:
	/* class IMkvReader <ancestor>; */ /* 0 8 */
	void HttpReader(HttpReader* , HttpReader& );
	void HttpReader(HttpReader* , const HttpReader& );
	/* sbox/media/webm_demux.cpp:47 */
	void HttpReader(HttpReader* , HttpStreamSource* );
	/* sbox/media/webm_demux.cpp:49 */
	virtual int Read(HttpReader* , long long int, long int, unsigned char* );
	/* sbox/media/webm_demux.cpp:56 */
	virtual int Length(HttpReader* , long long int* , long long int* );
private:
	HttpStreamSource * m_src; /* 8 8 */
	virtual void ~HttpReader(HttpReader* );
	void HttpReader(class HttpReader *, class HttpReader &); /* linkage=_ZN10HttpReaderC4EOS_ */
	void HttpReader(class HttpReader *, const class HttpReader  &); /* linkage=_ZN10HttpReaderC4ERKS_ */
	void HttpReader(class HttpReader *, class HttpStreamSource *); /* linkage=_ZN10HttpReaderC4EP16HttpStreamSource */
	virtual int Read(class HttpReader *, long long int, long int, unsigned char *); /* linkage=_ZN10HttpReader4ReadExlPh */
	virtual int Length(class HttpReader *, long long int *, long long int *); /* linkage=_ZN10HttpReader6LengthEPxS0_ */
	virtual void ~HttpReader(class HttpReader *); /* linkage=_ZN10HttpReaderD4Ev */
};

// <0205AC20> sbox/media/webm_demux.cpp:47
void HttpReader::HttpReader(HttpStreamSource* src)
{
} /* size: 0 */

// <0205ABFB> sbox/media/webm_demux.cpp:47
inline void HttpReader::HttpReader(HttpStreamSource* src)
{
} /* size: 0 */

// <0205AB4E> sbox/media/webm_demux.cpp:49
// variable: 1
void HttpReader::Read(long long int pos, long int len, unsigned char* buf)
{
	int got; // 51
} /* size: 47, variables: 1 */

// <0205AAD1> sbox/media/webm_demux.cpp:56
// variable: 1
void HttpReader::Length(long long int* total, long long int* available)
{
	const int64_t  sz; // 58
} /* size: 62, variables: 1 */

// <02057C4A> sbox/media/webm_demux.cpp:75
// member variables: 14
// struct size: 208
struct WebmDemux {
	FILE * fp; /* 0 8 */
	HttpStreamSource * httpSrc; /* 8 8 */
	FileReader * fileReader; /* 16 8 */
	HttpReader * httpReader; /* 24 8 */
	Segment * segment; /* 32 8 */
	const class Track * videoTrack; /* 40 8 */
	const class Track * audioTrack; /* 48 8 */
	const class Cluster * cluster; /* 56 8 */
	const class BlockEntry * blockEntry; /* 64 8 */
	int frameIndex; /* 72 4 */
	MediaStreamInfo streams[2]; /* 80 112 */
	int nStreams; /* 192 4 */
	int videoStreamIdx; /* 196 4 */
	int audioStreamIdx; /* 200 4 */
};

// <0205AAAC> sbox/media/webm_demux.cpp:98
IMkvReader* WebmDemux_GetReader(const WebmDemux* ctx)
{
} /* size: 0 */

// <02059E7C> sbox/media/webm_demux.cpp:108
// variables: 20
// function calls: 12
WebmDemux* webm_open_impl(FileReader* fileReader, HttpReader* httpReader, FILE* fp, HttpStreamSource* httpSrc)
{
	IMkvReader* reader; // 111
	 cleanup; // 115
	EBMLHeader ebml; // 122
	long long int pos; // 123
	Segment* segment; // 131
	const long long int  result; // 142
	WebmDemux* ctx; // 152
	const Tracks* tracks; // 159
	const long unsigned int  trackCount; // 169
	{
		long unsigned int t; // 171
		{
			const Track* track; // 173
			const char* codecId; // 177
			{
				MediaVideoCodec vc; // 181
				const VideoTrack* vt; // 189
				MediaStreamInfo& si; // 192
				const long long int  defDurNs; // 199
				V_strcmp(const char* s1,
					const char* s2);  // 182
				V_strcmp(const char* s1,
					const char* s2);  // 184
			}
			{
				const AudioTrack* at; // 208
				MediaStreamInfo& si; // 211
				V_strcmp(const char* s1,
					const char* s2);  // 205
			}
		}
	}
	{
		long long int clusterPos; // 225
		long int clusterSize; // 226
	}
	operator()(const class* __closure); // 165
	IMkvReader::~IMkvReader(); // 14
	FileReader::~FileReader(); // 14
	FileReader::~FileReader(); // 117
	IMkvReader::~IMkvReader(); // 44
	HttpReader::~HttpReader(); // 44
	HttpReader::~HttpReader(); // 118
	operator()(const class* __closure); // 127
	operator()(const class* __closure); // 135
} /* size: 1327, variables: 9, inline expansions: 9 (75 bytes) */

// <02059D1C> sbox/media/webm_demux.cpp:248
// variables: 7
bool ebml_read_element(IMkvReader* reader, long long int pos, uint32_t& id, long long int& elem_size, long long int& data_pos)
{
	unsigned char buf; // 251
	int id_len; // 256
	const int  so; // 264
	unsigned char b; // 265
	int sz_len; // 266
	long long int sz; // 267
	const long long int  all_ones; // 276
} /* size: 596, variables: 7 */

// <02059BCF> sbox/media/webm_demux.cpp:289
// variables: 19
void webm_read_block_additional(IMkvReader* reader, long long int block_end, uint8_t** out_data, int* out_size)
{
	uint32_t id; // 297
	long long int elem_size; // 297
	long long int data_pos; // 297
	const long long int  ba_end; // 304
	long long int pos; // 305
	{
		uint32_t bm_id; // 308
		long long int bm_size; // 308
		long long int bm_data; // 308
		const long long int  bm_end; // 319
		long long int bm_pos; // 320
		uint64_t add_id; // 321
		long long int alpha_pos; // 322
		long long int alpha_size; // 322
		{
			uint32_t ch_id; // 326
			long long int ch_size; // 326
			long long int ch_data; // 326
			{
				unsigned char tmp; // 334
				{
					int i; // 338
				}
			}
		}
		{
			uint8_t* buf; // 352
		}
	}
} /* size: 0, variables: 5 */

