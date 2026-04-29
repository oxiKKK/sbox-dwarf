
//
// sbox/media/media_types.h
//
//	referenced by: libengine2.so
//
//	functions: 8
//	structs: 4
//

// <01FB2E6C> sbox/media/media_types.h:21
inline MediaContainerFormat media_detect_format(const uint8_t* buf, size_t len)
{
} /* size: 0 */

// <01FAF6E0> sbox/media/media_types.h:85
void MediaStreamInfo::MediaStreamInfo()
{
} /* size: 0 */

// <01FAF6C4> sbox/media/media_types.h:85
inline void MediaStreamInfo::MediaStreamInfo()
{
} /* size: 0 */

// <01FA1B80> sbox/media/media_types.h:85
// member function: 1
// member variables: 11
// struct size: 56
struct MediaStreamInfo {
	MediaStreamType type; /* 0 4 */
	int index; /* 4 4 */
	MediaVideoCodec videoCodec; /* 8 4 */
	MediaAudioCodec audioCodec; /* 12 4 */
	int width; /* 16 4 */
	int height; /* 20 4 */
	double fps; /* 24 8 */
	int sampleRate; /* 32 4 */
	int channels; /* 36 4 */
	uint8_t * codecPrivate; /* 40 8 */
	int codecPrivateSize; /* 48 4 */
	void MediaStreamInfo(MediaStreamInfo* );
};

// <01FB2D20> sbox/media/media_types.h:104
void MediaPacket::MediaPacket()
{
} /* size: 0 */

// <01FB2D04> sbox/media/media_types.h:104
inline void MediaPacket::MediaPacket()
{
} /* size: 0 */

// <01FA1C50> sbox/media/media_types.h:104
// member functions: 3
// member variables: 14
// struct size: 96
struct MediaPacket {
	uint8_t * data; /* 0 8 */
	int size; /* 8 4 */
	int64_t pts_us; /* 16 8 */
	int64_t dts_us; /* 24 8 */
	int64_t duration_us; /* 32 8 */
	int stream_index; /* 40 4 */
	bool keyframe; /* 44 1 */
	bool bFlush; /* 45 1 */
	void * free_ctx; /* 48 8 */
	void (*free_fn)(void* ); /* 56 8* /
	uint8_t * alpha_data; /* 64 8 */
	int alpha_size; /* 72 4 */
	void * alpha_free_ctx; /* 80 8 */
	void (*alpha_free_fn)(void* ); /* 88 8* /
	void MediaPacket(MediaPacket* );
};

// <01FA1D47> sbox/media/media_types.h:128
// member function: 1
// member variables: 12
// struct size: 96
struct VideoFrame {
	uint8_t * planes[3]; /* 0 24 */
	int strides[3]; /* 24 12 */
	int width; /* 36 4 */
	int height; /* 40 4 */
	bool bFullRange; /* 44 1 */
	bool bBt709; /* 45 1 */
	int64_t pts_us; /* 48 8 */
	int64_t duration_us; /* 56 8 */
	void * free_ctx; /* 64 8 */
	void (*free_fn)(void* ); /* 72 8* /
	uint8_t * alpha_plane; /* 80 8 */
	int alpha_stride; /* 88 4 */
};

// <01FA1E29> sbox/media/media_types.h:147
// member variables: 3
// struct size: 24
struct AudioFrame {
	int16_t * data; /* 0 8 */
	int nb_samples; /* 8 4 */
	int64_t pts_us; /* 16 8 */
};

// <01FB2E4F> sbox/media/media_types.h:154
inline void media_packet_free(MediaPacket* p)
{
} /* size: 0 */

// <01FB2E32> sbox/media/media_types.h:175
inline void video_frame_free(VideoFrame* f)
{
} /* size: 0 */

// <01FB2E15> sbox/media/media_types.h:190
inline void audio_frame_free(AudioFrame* f)
{
} /* size: 0 */

