
//
// sbox/media/opus_encode.cpp
//
//	referenced by: libengine2.so
//
//	struct: 1
//

// <021129B1> sbox/media/opus_encode.cpp:7
// member variables: 5
// struct size: 4,040
struct OpusEnc {
	OpusEncoder * encoder; /* 0 8 */
	int sampleRate; /* 8 4 */
	int channels; /* 12 4 */
	uint8_t opus_header[19]; /* 16 19 */
	uint8_t scratch[4000]; /* 35 4000 */
};

