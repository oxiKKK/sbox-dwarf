
//
// thirdparty/libwebp/include/webp/demux.h
//
//	referenced by: libengine2.so
//
//	functions: 11
//	structs: 3
//

// <020F709B> ../thirdparty/libwebp/include/webp/demux.h:89
WebPDemuxer* WebPDemuxInternal(const WebPData *, int, WebPDemuxState *, int)
{
} /* size: 0 */

// <020F813F> ../thirdparty/libwebp/include/webp/demux.h:95
inline WebPDemuxer* WebPDemux(const WebPData* data)
{
} /* size: 0 */

// <020F70FD> ../thirdparty/libwebp/include/webp/demux.h:113
void WebPDemuxDelete(WebPDemuxer *)
{
} /* size: 0 */

// <020F66E2> ../thirdparty/libwebp/include/webp/demux.h:144
// member variables: 14
// struct size: 80
struct WebPIterator {
	int frame_num; /* 0 4 */
	int num_frames; /* 4 4 */
	int x_offset; /* 8 4 */
	int y_offset; /* 12 4 */
	int width; /* 16 4 */
	int height; /* 20 4 */
	int duration; /* 24 4 */
	WebPMuxAnimDispose dispose_method; /* 28 4 */
	int complete; /* 32 4 */
	WebPData fragment; /* 40 16 */
	int has_alpha; /* 56 4 */
	WebPMuxAnimBlend blend_method; /* 60 4 */
	uint32_t pad[2]; /* 64 8 */
	void * private_; /* 72 8 */
};

// <020F7143> ../thirdparty/libwebp/include/webp/demux.h:168
int WebPDemuxGetFrame(const WebPDemuxer *, int, WebPIterator *)
{
} /* size: 0 */

// <020F712B> ../thirdparty/libwebp/include/webp/demux.h:174
int WebPDemuxNextFrame(WebPIterator *)
{
} /* size: 0 */

// <020F7111> ../thirdparty/libwebp/include/webp/demux.h:181
void WebPDemuxReleaseIterator(WebPIterator *)
{
} /* size: 0 */

// <020F684F> ../thirdparty/libwebp/include/webp/demux.h:253
// member variables: 3
// struct size: 36
struct WebPAnimDecoderOptions {
	WEBP_CSP_MODE color_mode; /* 0 4 */
	int use_threads; /* 4 4 */
	uint32_t padding[7]; /* 8 28 */
};

// <020F70D4> ../thirdparty/libwebp/include/webp/demux.h:276
WebPAnimDecoder* WebPAnimDecoderNewInternal(const WebPData *, const WebPAnimDecoderOptions *, int)
{
} /* size: 0 */

// <020F8111> ../thirdparty/libwebp/include/webp/demux.h:289
inline WebPAnimDecoder* WebPAnimDecoderNew(const WebPData* webp_data, const WebPAnimDecoderOptions* dec_options)
{
} /* size: 0 */

// <020F67CE> ../thirdparty/libwebp/include/webp/demux.h:296
// member variables: 6
// struct size: 36
struct WebPAnimInfo {
	uint32_t canvas_width; /* 0 4 */
	uint32_t canvas_height; /* 4 4 */
	uint32_t loop_count; /* 8 4 */
	uint32_t bgcolor; /* 12 4 */
	uint32_t frame_count; /* 16 4 */
	uint32_t pad[4]; /* 20 16 */
};

// <020F719D> ../thirdparty/libwebp/include/webp/demux.h:311
int WebPAnimDecoderGetInfo(const WebPAnimDecoder *, WebPAnimInfo *)
{
} /* size: 0 */

// <020F7058> ../thirdparty/libwebp/include/webp/demux.h:326
int WebPAnimDecoderGetNext(WebPAnimDecoder *, uint8_t* *, int *)
{
} /* size: 0 */

// <020F7188> ../thirdparty/libwebp/include/webp/demux.h:361
void WebPAnimDecoderDelete(WebPAnimDecoder *)
{
} /* size: 0 */

