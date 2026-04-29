
//
// thirdparty/libwebp/include/webp/encode.h
//
//	referenced by: libengine2.so
//
//	functions: 6
//	structs: 3
//

// <02133226> ../thirdparty/libwebp/include/webp/encode.h:95
// member variables: 29
// struct size: 116
struct WebPConfig {
	int lossless; /* 0 4 */
	float quality; /* 4 4 */
	int method; /* 8 4 */
	WebPImageHint image_hint; /* 12 4 */
	int target_size; /* 16 4 */
	float target_PSNR; /* 20 4 */
	int segments; /* 24 4 */
	int sns_strength; /* 28 4 */
	int filter_strength; /* 32 4 */
	int filter_sharpness; /* 36 4 */
	int filter_type; /* 40 4 */
	int autofilter; /* 44 4 */
	int alpha_compression; /* 48 4 */
	int alpha_filtering; /* 52 4 */
	int alpha_quality; /* 56 4 */
	int pass; /* 60 4 */
	int show_compressed; /* 64 4 */
	int preprocessing; /* 68 4 */
	int partitions; /* 72 4 */
	int partition_limit; /* 76 4 */
	int emulate_jpeg_size; /* 80 4 */
	int thread_level; /* 84 4 */
	int low_memory; /* 88 4 */
	int near_lossless; /* 92 4 */
	int exact; /* 96 4 */
	int use_delta_palette; /* 100 4 */
	int use_sharp_yuv; /* 104 4 */
	int qmin; /* 108 4 */
	int qmax; /* 112 4 */
};

// <02134320> ../thirdparty/libwebp/include/webp/encode.h:167
int WebPConfigInitInternal(WebPConfig *, WebPPreset, float, int)
{
} /* size: 0 */

// <0213501D> ../thirdparty/libwebp/include/webp/encode.h:183
inline int WebPConfigPreset(WebPConfig* config, WebPPreset preset, float quality)
{
} /* size: 0 */

// <021335FD> ../thirdparty/libwebp/include/webp/encode.h:207
// member variables: 20
// struct size: 188
struct WebPAuxStats {
	int coded_size; /* 0 4 */
	float PSNR[5]; /* 4 20 */
	int block_count[3]; /* 24 12 */
	int header_bytes[2]; /* 36 8 */
	int residual_bytes[3][4]; /* 44 48 */
	int segment_size[4]; /* 92 16 */
	int segment_quant[4]; /* 108 16 */
	int segment_level[4]; /* 124 16 */
	int alpha_data_size; /* 140 4 */
	int layer_data_size; /* 144 4 */
	uint32_t lossless_features; /* 148 4 */
	int histogram_bits; /* 152 4 */
	int transform_bits; /* 156 4 */
	int cache_bits; /* 160 4 */
	int palette_size; /* 164 4 */
	int lossless_size; /* 168 4 */
	int lossless_hdr_size; /* 172 4 */
	int lossless_data_size; /* 176 4 */
	int cross_color_transform_bits; /* 180 4 */
	uint32_t pad[1]; /* 184 4 */
};

// <021333FD> ../thirdparty/libwebp/include/webp/encode.h:304
// member variables: 30
// struct size: 256
struct WebPPicture {
	int use_argb; /* 0 4 */
	WebPEncCSP colorspace; /* 4 4 */
	int width; /* 8 4 */
	int height; /* 12 4 */
	uint8_t * y; /* 16 8 */
	uint8_t * u; /* 24 8 */
	uint8_t * v; /* 32 8 */
	int y_stride; /* 40 4 */
	int uv_stride; /* 44 4 */
	uint8_t * a; /* 48 8 */
	int a_stride; /* 56 4 */
	uint32_t pad1[2]; /* 60 8 */
	uint32_t * argb; /* 72 8 */
	int argb_stride; /* 80 4 */
	uint32_t pad2[3]; /* 84 12 */
	WebPWriterFunction writer; /* 96 8 */
	void * custom_ptr; /* 104 8 */
	int extra_info_type; /* 112 4 */
	uint8_t * extra_info; /* 120 8 */
	WebPAuxStats * stats; /* 128 8 */
	WebPEncodingError error_code; /* 136 4 */
	WebPProgressHook progress_hook; /* 144 8 */
	void * user_data; /* 152 8 */
	uint32_t pad3[3]; /* 160 12 */
	uint8_t * pad4; /* 176 8 */
	uint8_t * pad5; /* 184 8 */
	uint32_t pad6[8]; /* 192 32 */
	void * memory_; /* 224 8 */
	void * memory_argb_; /* 232 8 */
	void * pad7[2]; /* 240 16 */
};

// <0213423E> ../thirdparty/libwebp/include/webp/encode.h:371
int WebPPictureInitInternal(WebPPicture *, int)
{
} /* size: 0 */

// <02134FFD> ../thirdparty/libwebp/include/webp/encode.h:377
inline int WebPPictureInit(WebPPicture* picture)
{
} /* size: 0 */

// <02134296> ../thirdparty/libwebp/include/webp/encode.h:395
void WebPPictureFree(WebPPicture *)
{
} /* size: 0 */

// <021342AB> ../thirdparty/libwebp/include/webp/encode.h:472
int WebPPictureImportRGBA(WebPPicture *, const uint8_t *, int)
{
} /* size: 0 */

