
//
// sbox/media/webm_mux.h
//
//	referenced by: libengine2.so
//
//	functions: 6
//

// <01FD2822> sbox/media/webm_mux.h:7
WebmMux* webm_mux_open(const char *)
{
} /* size: 0 */

// <01FD27E8> sbox/media/webm_mux.h:12
int webm_mux_add_video_track(WebmMux *, MediaVideoCodec, int, int, const uint8_t *, int, bool)
{
} /* size: 0 */

// <01FD27B3> sbox/media/webm_mux.h:18
int webm_mux_add_audio_track(WebmMux *, MediaAudioCodec, int, int, const uint8_t *, int)
{
} /* size: 0 */

// <01FD24CA> sbox/media/webm_mux.h:25
int webm_mux_write_sample(WebmMux *, int, const uint8_t *, int, int64_t, int64_t, bool)
{
} /* size: 0 */

// <01FD248B> sbox/media/webm_mux.h:31
int webm_mux_write_sample_with_alpha(WebmMux *, int, const uint8_t *, int, const uint8_t *, int, int64_t, bool)
{
} /* size: 0 */

// <01FD23AA> sbox/media/webm_mux.h:37
void webm_mux_close(WebmMux *)
{
} /* size: 0 */

