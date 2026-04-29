
//
// sbox/media/av1_decode.cpp
//
//	referenced by: libengine2.so
//
//	functions: 5
//	struct: 1
//

// <0207A3E2> sbox/media/av1_decode.cpp:5
// member variables: 3
// struct size: 112
struct Av1Decoder {
	Dav1dContext * ctx; /* 0 8 */
	VideoFrame pending_frame; /* 8 96 */
	bool has_pending; /* 104 1 */
};

// <0207B800> sbox/media/av1_decode.cpp:15
// variables: 9
int dav1d_alloc_picture_cb(Dav1dPicture* pic, void *)
{
	const int  hbd; // 17
	const int  aligned_w; // 18
	const int  aligned_h; // 19
	const bool  has_chroma; // 20
	const int  cw_shift; // 22
	const int  ch_shift; // 23
	const size_t  y_sz; // 28
	const size_t  uv_sz; // 29
	uint8_t* buf; // 33
} /* size: 241, variables: 9 */

// <0207B7B6> sbox/media/av1_decode.cpp:44
void dav1d_release_picture_cb(Dav1dPicture* pic, void *)
{
} /* size: 16 */

// <0207B559> sbox/media/av1_decode.cpp:91
void dav1d_data_free_cb(const uint8_t* buf, void *)
{
} /* size: 9 */

// <0207B4DF> sbox/media/av1_decode.cpp:96
// variable: 1
void dav1d_pic_release(void* free_ctx)
{
	Dav1dPicture* pic; // 98
} /* size: 31, variables: 1 */

// <0207B42C> sbox/media/av1_decode.cpp:103
// variable: 1
bool fill_video_frame(const Dav1dPicture* pic, VideoFrame* vf)
{
	Dav1dPicture* owned; // 105
} /* size: 196, variables: 1 */

