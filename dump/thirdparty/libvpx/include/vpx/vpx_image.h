
//
// thirdparty/libvpx/include/vpx/././vpx_image.h
//
//	referenced by: libengine2.so
//
//	function: 1
//	struct: 1
//

// <02070131> ../thirdparty/libvpx/include/vpx/././vpx_image.h:76
// member variables: 20
// struct size: 136
struct vpx_image {
	vpx_img_fmt_t fmt; /* 0 4 */
	vpx_color_space_t cs; /* 4 4 */
	vpx_color_range_t range; /* 8 4 */
	unsigned int w; /* 12 4 */
	unsigned int h; /* 16 4 */
	unsigned int bit_depth; /* 20 4 */
	unsigned int d_w; /* 24 4 */
	unsigned int d_h; /* 28 4 */
	unsigned int r_w; /* 32 4 */
	unsigned int r_h; /* 36 4 */
	unsigned int x_chroma_shift; /* 40 4 */
	unsigned int y_chroma_shift; /* 44 4 */
	unsigned char * planes[4]; /* 48 32 */
	int stride[4]; /* 80 16 */
	int bps; /* 96 4 */
	void * user_priv; /* 104 8 */
	unsigned char * img_data; /* 112 8 */
	int img_data_owner; /* 120 4 */
	int self_allocd; /* 124 4 */
	void * fb_priv; /* 128 8 */
};

// <0210A32B> ../thirdparty/libvpx/include/vpx/././vpx_image.h:208
vpx_image_t* vpx_img_wrap(vpx_image_t *, vpx_img_fmt_t, unsigned int, unsigned int, unsigned int, unsigned char *)
{
} /* size: 0 */

