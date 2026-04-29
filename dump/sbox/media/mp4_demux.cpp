
//
// sbox/media/mp4_demux.cpp
//
//	referenced by: libengine2.so
//
//	functions: 5
//	structs: 2
//

// <020456C9> sbox/media/mp4_demux.cpp:35
void copy_codec_private(MediaStreamInfo* info, const uint8_t* dsi, unsigned int dsi_bytes)
{
} /* size: 0 */

// <020437FA> sbox/media/mp4_demux.cpp:47
// member variables: 6
// struct size: 80
struct TrackCursor {
	int track; /* 0 4 */
	int sample; /* 4 4 */
	int count; /* 8 4 */
	uint32_t timescale; /* 12 4 */
	int64_t * sampleOffsets; /* 16 8 */
	MediaStreamInfo info; /* 24 56 */
};

// <0204386D> sbox/media/mp4_demux.cpp:57
// member variables: 5
// struct size: 136
struct Mp4Demux {
	FILE * fp; /* 0 8 */
	HttpStreamSource * httpSrc; /* 8 8 */
	MP4D_demux_t mp4; /* 16 104 */
	TrackCursor * tracks; /* 120 8 */
	int nTracks; /* 128 4 */
};

// <020455F5> sbox/media/mp4_demux.cpp:66
// variable: 1
int mp4_read_cb(int64_t offset, void* buffer, size_t size, void* token)
{
	FILE* f; // 68
} /* size: 95, variables: 1 */

// <020454E7> sbox/media/mp4_demux.cpp:74
// variables: 2
int mp4_read_cb_http(int64_t offset, void* buffer, size_t size, void* token)
{
	HttpStreamSource* src; // 76
	int got; // 77
} /* size: 148, variables: 2 */

// <0204546D> sbox/media/mp4_demux.cpp:86
// variables: 7
int64_t* build_sample_offsets(const MP4D_track_t* tr)
{
	int64_t* offsets; // 90
	unsigned int chunk_group; // 93
	int ns; // 94
	{
		unsigned int nc; // 95
		{
			MP4D_file_offset_t offset; // 101
			unsigned int spc; // 102
			{
				unsigned int s; // 103
			}
		}
	}
} /* size: 0, variables: 3 */

// <0204507B> sbox/media/mp4_demux.cpp:114
// variables: 13
// function calls: 7
void finish_open(Mp4Demux* ctx)
{
	int total; // 116
	{
		int t; // 120
		{
			const MP4D_track_t& tr; // 122
			TrackCursor& c; // 123
			{
				uint8_t oti; // 132
				MediaVideoCodec codec; // 136
				{
					double trackDurSec; // 152
				}
				copy_codec_private(MediaStreamInfo* info,
							const uint8_t* dsi,
							unsigned int dsi_bytes);  // 35
				copy_codec_private(MediaStreamInfo* info,
							const uint8_t* dsi,
							unsigned int dsi_bytes);  // 157
			}
			{
				uint8_t oti; // 161
				MediaAudioCodec codec; // 163
				memcpy(void* __dest,
					const void* __src,
					size_t __len);  // 79
				V_memcpy(void* dest,
					const void* src,
					uint count);  // 42
				copy_codec_private(MediaStreamInfo* info,
							const uint8_t* dsi,
							unsigned int dsi_bytes);  // 35
				copy_codec_private(MediaStreamInfo* info,
							const uint8_t* dsi,
							unsigned int dsi_bytes);  // 181
			}
			{
				unsigned int nc; // 95
				{
					MP4D_file_offset_t offset; // 101
					unsigned int spc; // 102
					{
						unsigned int s; // 103
					}
				}
			}
			build_sample_offsets(const MP4D_track_t* tr); // 188
		}
	}
} /* size: 953, variables: 1 */

