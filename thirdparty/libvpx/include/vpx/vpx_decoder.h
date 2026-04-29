
//
// thirdparty/libvpx/include/vpx/vpx_decoder.h
//
//	referenced by: libengine2.so
//
//	functions: 4
//	struct: 1
//

// <020703DA> ../thirdparty/libvpx/include/vpx/vpx_decoder.h:106
// member variables: 3
// struct size: 12
struct vpx_codec_dec_cfg {
	unsigned int threads; /* 0 4 */
	unsigned int w; /* 4 4 */
	unsigned int h; /* 8 4 */
};

// <02070E2E> ../thirdparty/libvpx/include/vpx/vpx_decoder.h:134
vpx_codec_err_t vpx_codec_dec_init_ver(vpx_codec_ctx_t *, vpx_codec_iface_t *, const vpx_codec_dec_cfg_t *, vpx_codec_flags_t, int)
{
} /* size: 0 */

// <02070D6C> ../thirdparty/libvpx/include/vpx/vpx_decoder.h:216
vpx_codec_err_t vpx_codec_decode(vpx_codec_ctx_t *, const uint8_t *, unsigned int, void *, long int)
{
} /* size: 0 */

// <02070D3D> ../thirdparty/libvpx/include/vpx/vpx_decoder.h:236
vpx_image_t* vpx_codec_get_frame(vpx_codec_ctx_t *, vpx_codec_iter_t *)
{
} /* size: 0 */

// <02070DF1> ../thirdparty/libvpx/include/vpx/vpx_decoder.h:357
vpx_codec_err_t vpx_codec_set_frame_buffer_functions(vpx_codec_ctx_t *, vpx_get_frame_buffer_cb_fn_t, vpx_release_frame_buffer_cb_fn_t, void *)
{
} /* size: 0 */

