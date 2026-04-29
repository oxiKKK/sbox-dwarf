
//
// sbox/media/webp_demux.cpp
//
//	referenced by: libengine2.so
//
//	function: 1
//	struct: 1
//

// <020F68FB> sbox/media/webp_demux.cpp:8
// member variables: 9
// struct size: 104
struct WebpDemux {
	uint8_t * fileData; /* 0 8 */
	size_t fileSize; /* 8 8 */
	WebPData webpData; /* 16 16 */
	WebPAnimDecoder * dec; /* 32 8 */
	WebPAnimInfo info; /* 40 36 */
	int prevTimestampMs; /* 76 4 */
	bool eof; /* 80 1 */
	int64_t pts_us; /* 88 8 */
	int64_t duration_us; /* 96 8 */
};

// <020F7EA6> sbox/media/webp_demux.cpp:30
// variables: 7
// function calls: 2
WebpDemux* webp_open_from_memory(uint8_t* fileData, size_t fileSize)
{
	WebPData webpData; // 32
	WebPAnimDecoder* dec; // 36
	WebPAnimInfo info; // 43
	WebpDemux* ctx; // 51
	WebPDemuxer* dmux; // 59
	{
		WebPIterator iter; // 62
		int64_t total_ms; // 63
	}
	WebPAnimDecoderNew(const WebPData* webp_data,
				const WebPAnimDecoderOptions* dec_options);  // 36
	WebPDemux(const WebPData* data); // 59
} /* size: 459, variables: 5, inline expansions: 2 (43 bytes) */

