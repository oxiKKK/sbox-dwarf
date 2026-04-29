
//
// sbox/media/av1_encode.cpp
//
//	referenced by: libengine2.so
//
//	function: 1
//	struct: 1
//

// <02100269> sbox/media/av1_encode.cpp:8
// member variables: 8
// struct size: 704
struct Av1Encoder {
	EbComponentType * handle; /* 0 8 */
	EbSvtAv1EncConfiguration config; /* 8 664 */
	EbBufferHeaderType * input_buf; /* 672 8 */
	uint8_t * codec_private; /* 680 8 */
	int codec_private_size; /* 688 4 */
	int width; /* 692 4 */
	int height; /* 696 4 */
	bool flushing; /* 700 1 */
};

// <02101976> sbox/media/av1_encode.cpp:19
// variable: 1
// function calls: 2
bool fill_output_packet(EbBufferHeaderType* output_buf, int fps, MediaPacket* out)
{
	uint8_t* copy; // 21
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 79
	V_memcpy(void* dest,
		const void* src,
		uint count);  // 25
} /* size: 134, variables: 1, inline expansions: 2 (27 bytes) */

