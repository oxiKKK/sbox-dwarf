
//
// sbox/media/webm_mux.cpp
//
//	referenced by: libengine2.so
//
//	functions: 10
//	class: 1
//	struct: 1
//

// <0212C28F> sbox/media/webm_mux.cpp:13
void WebmFileWriter::~WebmFileWriter()
{
} /* size: 19 */

// <0212C203> sbox/media/webm_mux.cpp:13
// function call: 1
void WebmFileWriter::~WebmFileWriter()
{
	WebmFileWriter::~WebmFileWriter(); // 13
} /* size: 46, inline expansions: 1 (19 bytes) */

// <0212C1E6> sbox/media/webm_mux.cpp:13
inline void WebmFileWriter::~WebmFileWriter()
{
} /* size: 0 */

// <0212A7FB> sbox/media/webm_mux.cpp:13
// member functions: 18
// member variables: 2
// vtable entries: 5
// class size: 16
class WebmFileWriter : public IMkvWriter {
public:
	/* class IMkvWriter <ancestor>; */ /* 0 0 */
	void WebmFileWriter(WebmFileWriter* , WebmFileWriter& );
	void WebmFileWriter(WebmFileWriter* , const WebmFileWriter& );
	/* sbox/media/webm_mux.cpp:16 */
	void WebmFileWriter(WebmFileWriter* , FILE* );
	/* sbox/media/webm_mux.cpp:18 */
	virtual int32 Write(WebmFileWriter* , const void* , uint32);
	/* sbox/media/webm_mux.cpp:23 */
	virtual int64 Position(const WebmFileWriter* );
	/* sbox/media/webm_mux.cpp:28 */
	virtual int32 Position(WebmFileWriter* , int64);
	/* sbox/media/webm_mux.cpp:33 */
	virtual bool Seekable(const WebmFileWriter* );
	/* sbox/media/webm_mux.cpp:35 */
	virtual void ElementStartNotify(WebmFileWriter* , uint64, int64);
private:
	FILE * m_fp; /* 8 8 */
	virtual void ~WebmFileWriter(WebmFileWriter* );
	void WebmFileWriter(class WebmFileWriter *, class WebmFileWriter &); /* linkage=_ZN14WebmFileWriterC4EOS_ */
	void WebmFileWriter(class WebmFileWriter *, const class WebmFileWriter  &); /* linkage=_ZN14WebmFileWriterC4ERKS_ */
	void WebmFileWriter(class WebmFileWriter *, FILE *); /* linkage=_ZN14WebmFileWriterC4EP8_IO_FILE */
	virtual int32 Write(class WebmFileWriter *, const void  *, uint32); /* linkage=_ZN14WebmFileWriter5WriteEPKvj */
	virtual int64 Position(const class WebmFileWriter  *); /* linkage=_ZNK14WebmFileWriter8PositionEv */
	virtual int32 Position(class WebmFileWriter *, int64); /* linkage=_ZN14WebmFileWriter8PositionEx */
	virtual bool Seekable(const class WebmFileWriter  *); /* linkage=_ZNK14WebmFileWriter8SeekableEv */
	virtual void ElementStartNotify(class WebmFileWriter *, uint64, int64); /* linkage=_ZN14WebmFileWriter18ElementStartNotifyEyx */
	virtual void ~WebmFileWriter(class WebmFileWriter *); /* linkage=_ZN14WebmFileWriterD4Ev */
};

// <0212C48F> sbox/media/webm_mux.cpp:16
void WebmFileWriter::WebmFileWriter(FILE* fp)
{
} /* size: 0 */

// <0212C46B> sbox/media/webm_mux.cpp:16
inline void WebmFileWriter::WebmFileWriter(FILE* fp)
{
} /* size: 0 */

// <0212C3ED> sbox/media/webm_mux.cpp:18
void WebmFileWriter::Write(const void* buf, uint32 len)
{
} /* size: 52 */

// <0212C3AA> sbox/media/webm_mux.cpp:23
void WebmFileWriter::Position()
{
} /* size: 13 */

// <0212C347> sbox/media/webm_mux.cpp:28
void WebmFileWriter::Position(int64 position)
{
} /* size: 15 */

// <0212C318> sbox/media/webm_mux.cpp:33
void WebmFileWriter::Seekable()
{
} /* size: 10 */

// <0212C2D9> sbox/media/webm_mux.cpp:35
void WebmFileWriter::ElementStartNotify(uint64, int64)
{
} /* size: 5 */

// <0212A7A3> sbox/media/webm_mux.cpp:45
// member variables: 5
// struct size: 40
struct WebmMux {
	WebmFileWriter * writer; /* 0 8 */
	Segment * segment; /* 8 8 */
	FILE * fp; /* 16 8 */
	uint64_t video_track; /* 24 8 */
	uint64_t audio_track; /* 32 8 */
};

