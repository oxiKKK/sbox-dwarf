
//
// sbox/media/vp9_encode.cpp
//
//	referenced by: libengine2.so
//
//	functions: 2
//	struct: 1
//

// <02109A8E> sbox/media/vp9_encode.cpp:9
// member variables: 11
// struct size: 424
struct Vp9Encoder {
	vpx_codec_ctx_t codec; /* 0 56 */
	vpx_image_t img; /* 56 136 */
	int width; /* 192 4 */
	int height; /* 196 4 */
	int fps; /* 200 4 */
	long unsigned int deadline; /* 208 8 */
	bool flushing; /* 216 1 */
	bool has_alpha; /* 217 1 */
	vpx_codec_ctx_t alpha_codec; /* 224 56 */
	vpx_image_t alpha_img; /* 280 136 */
	uint8_t * alpha_uv; /* 416 8 */
};

// <0210B908> sbox/media/vp9_encode.cpp:26
// variables: 2
void fill_packet(const vpx_codec_cx_pkt_t* pkt, int fps, MediaPacket* out)
{
	const size_t  sz; // 28
	uint8_t* buf; // 29
} /* size: 0, variables: 2 */

// <0210B753> sbox/media/vp9_encode.cpp:42
// variables: 2
// function calls: 3
int drain_one_packet(vpx_codec_ctx_t* ctx, int fps, MediaPacket* out)
{
	vpx_codec_iter_t iter; // 44
	const vpx_codec_cx_pkt_t* pkt; // 45
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 30
	fill_packet(const vpx_codec_cx_pkt_t* pkt,
			int fps,
			MediaPacket* out);  // 50
} /* size: 248, variables: 2, inline expansions: 3 (146 bytes) */

