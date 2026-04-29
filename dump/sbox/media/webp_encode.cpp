
//
// sbox/media/webp_encode.cpp
//
//	referenced by: libengine2.so
//
//	struct: 1
//

// <02133A6B> sbox/media/webp_encode.cpp:7
// member variables: 6
// struct size: 144
struct WebpEncoder {
	WebPAnimEncoder * anim_enc; /* 0 8 */
	WebPConfig config; /* 8 116 */
	int width; /* 124 4 */
	int height; /* 128 4 */
	int fps; /* 132 4 */
	int last_timestamp_ms; /* 136 4 */
};

