
//
// thirdparty/libwebp/include/webp/mux.h
//
//	referenced by: libengine2.so
//
//	functions: 7
//	structs: 2
//

// <02133999> ../thirdparty/libwebp/include/webp/mux.h:291
// member variables: 2
// struct size: 8
struct WebPMuxAnimParams {
	uint32_t bgcolor; /* 0 4 */
	int loop_count; /* 4 4 */
};

// <021339D9> ../thirdparty/libwebp/include/webp/mux.h:434
// member variables: 7
// struct size: 44
struct WebPAnimEncoderOptions {
	WebPMuxAnimParams anim_params; /* 0 8 */
	int minimize_size; /* 8 4 */
	int kmin; /* 12 4 */
	int kmax; /* 16 4 */
	int allow_mixed; /* 20 4 */
	int verbose; /* 24 4 */
	uint32_t padding[4]; /* 28 16 */
};

// <021342FC> ../thirdparty/libwebp/include/webp/mux.h:455
int WebPAnimEncoderOptionsInitInternal(WebPAnimEncoderOptions *, int)
{
} /* size: 0 */

// <02134FA9> ../thirdparty/libwebp/include/webp/mux.h:462
inline int WebPAnimEncoderOptionsInit(WebPAnimEncoderOptions* enc_options)
{
} /* size: 0 */

// <021342CE> ../thirdparty/libwebp/include/webp/mux.h:468
WebPAnimEncoder* WebPAnimEncoderNewInternal(int, int, const WebPAnimEncoderOptions *, int)
{
} /* size: 0 */

// <02134F6F> ../thirdparty/libwebp/include/webp/mux.h:479
inline WebPAnimEncoder* WebPAnimEncoderNew(int width, int height, const WebPAnimEncoderOptions* enc_options)
{
} /* size: 0 */

// <02134262> ../thirdparty/libwebp/include/webp/mux.h:503
int WebPAnimEncoderAdd(WebPAnimEncoder *, WebPPicture *, int, const WebPConfig *)
{
} /* size: 0 */

// <0213421A> ../thirdparty/libwebp/include/webp/mux.h:516
int WebPAnimEncoderAssemble(WebPAnimEncoder *, WebPData *)
{
} /* size: 0 */

// <02134195> ../thirdparty/libwebp/include/webp/mux.h:532
void WebPAnimEncoderDelete(WebPAnimEncoder *)
{
} /* size: 0 */

