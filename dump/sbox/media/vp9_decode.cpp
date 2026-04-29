
//
// sbox/media/vp9_decode.cpp
//
//	referenced by: libengine2.so
//
//	functions: 3
//	structs: 2
//

// <020705F0> sbox/media/vp9_decode.cpp:12
// member variables: 3
// struct size: 24
struct Vp9FrameSlot {
	uint8_t * data; /* 0 8 */
	size_t size; /* 8 8 */
	volatile int32 refcount; /* 16 4 */
};

// <0207062B> sbox/media/vp9_decode.cpp:19
// member variables: 5
// struct size: 704
struct Vp9Decoder {
	vpx_codec_ctx_t ctx; /* 0 56 */
	bool initialized; /* 56 1 */
	Vp9FrameSlot pool[24]; /* 64 576 */
	vpx_codec_ctx_t alpha_ctx; /* 640 56 */
	bool alpha_initialized; /* 696 1 */
};

// <02071A6F> sbox/media/vp9_decode.cpp:29
// variables: 3
// function calls: 2
int vp9_get_frame_buffer(void* priv, size_t min_size, vpx_codec_frame_buffer_t* fb)
{
	Vp9Decoder* dec; // 31
	{
		int i; // 32
		{
			Vp9FrameSlot& slot; // 34
			ThreadInterlockedCompareExchange(volatile int32* p,
							int32 value,
							int32 comparand);  // 36
			ThreadInterlockedExchange(volatile int32* p,
							int32 value);  // 43
		}
	}
} /* size: 247, variables: 1 */

// <02071A04> sbox/media/vp9_decode.cpp:55
// function call: 1
int vp9_release_frame_buffer(void *, vpx_codec_frame_buffer_t* fb)
{
	ThreadInterlockedDecrement(volatile int32* p); // 57
} /* size: 21, inline expansions: 1 (5 bytes) */

// <020719A5> sbox/media/vp9_decode.cpp:61
// function call: 1
void vp9_consumer_release(void* free_ctx)
{
	ThreadInterlockedDecrement(volatile int32* p); // 63
} /* size: 10, inline expansions: 1 (5 bytes) */

