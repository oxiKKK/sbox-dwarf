
//
// sbox/media/mp4_mux.cpp
//
//	referenced by: libengine2.so
//
//	functions: 2
//	struct: 1
//

// <0211AB25> sbox/media/mp4_mux.cpp:9
// member variables: 6
// struct size: 32
struct Mp4Mux {
	MP4E_mux_t * mux; /* 0 8 */
	FILE * fp; /* 8 8 */
	int video_track; /* 16 4 */
	int audio_track; /* 20 4 */
	int video_timescale; /* 24 4 */
	int audio_timescale; /* 28 4 */
};

// <0211C128> sbox/media/mp4_mux.cpp:19
// variable: 1
int mp4_write_callback(int64_t offset, const void* buffer, size_t size, void* token)
{
	FILE* fp; // 21
} /* size: 95, variables: 1 */

// <0211BF6A> sbox/media/mp4_mux.cpp:53
// variable: 1
uint8_t av1_level_from_resolution(int width, int height, int fps)
{
	int pixels; // 55
} /* size: 0, variables: 1 */

