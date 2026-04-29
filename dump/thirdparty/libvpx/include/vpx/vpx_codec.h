
//
// thirdparty/libvpx/include/vpx/./vpx_codec.h
//
//	referenced by: libengine2.so
//
//	functions: 3
//	struct: 1
//

// <02070335> ../thirdparty/libvpx/include/vpx/./vpx_codec.h:200
// member variables: 7
// struct size: 56
struct vpx_codec_ctx {
	/* ../thirdparty/libvpx/include/vpx/./vpx_codec.h:206 */
	union {
		const class vpx_codec_dec_cfg * dec; /* 0 8 */
		const class vpx_codec_enc_cfg * enc; /* 0 8 */
		const void * raw; /* 0 8 */
	};
	const char * name; /* 0 8 */
	vpx_codec_iface_t * iface; /* 8 8 */
	vpx_codec_err_t err; /* 16 4 */
	const char * err_detail; /* 24 8 */
	vpx_codec_flags_t init_flags; /* 32 8 */
	union {
		const class vpx_codec_dec_cfg * dec; /* 40 8 */
		const class vpx_codec_enc_cfg * enc; /* 40 8 */
		const void * raw; /* 40 8 */
	} config; /* 40 8 */
	vpx_codec_priv_t * priv; /* 48 8 */
};

// <0210A245> ../thirdparty/libvpx/include/vpx/./vpx_codec.h:321
const char* vpx_codec_error(const vpx_codec_ctx_t *)
{
} /* size: 0 */

// <02070DC0> ../thirdparty/libvpx/include/vpx/./vpx_codec.h:356
vpx_codec_err_t vpx_codec_destroy(vpx_codec_ctx_t *)
{
} /* size: 0 */

// <0210A2DB> ../thirdparty/libvpx/include/vpx/./vpx_codec.h:391
vpx_codec_err_t vpx_codec_control_(vpx_codec_ctx_t *, int, ...)
{
} /* size: 0 */

