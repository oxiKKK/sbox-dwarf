
//
// thirdparty/libopus/include/opus/opus.h
//
//	referenced by: libengine2.so
//
//	functions: 8
//

// <021131E7> ../thirdparty/libopus/include/opus/opus.h:208
OpusEncoder* opus_encoder_create(opus_int32, int, int, int *)
{
} /* size: 0 */

// <021130F1> ../thirdparty/libopus/include/opus/opus.h:304
opus_int32 opus_encode_float(OpusEncoder *, const float *, int, unsigned char *, opus_int32)
{
} /* size: 0 */

// <02113155> ../thirdparty/libopus/include/opus/opus.h:315
void opus_encoder_destroy(OpusEncoder *)
{
} /* size: 0 */

// <02113187> ../thirdparty/libopus/include/opus/opus.h:328
int opus_encoder_ctl(OpusEncoder *, int, ...)
{
} /* size: 0 */

// <02082E87> ../thirdparty/libopus/include/opus/opus.h:438
OpusDecoder* opus_decoder_create(opus_int32, int, int *)
{
} /* size: 0 */

// <02082DC7> ../thirdparty/libopus/include/opus/opus.h:477
int opus_decode(OpusDecoder *, const unsigned char *, opus_int32, opus_int16 *, int, int)
{
} /* size: 0 */

// <02082E21> ../thirdparty/libopus/include/opus/opus.h:522
int opus_decoder_ctl(OpusDecoder *, int, ...)
{
} /* size: 0 */

// <02082E55> ../thirdparty/libopus/include/opus/opus.h:527
void opus_decoder_destroy(OpusDecoder *)
{
} /* size: 0 */

