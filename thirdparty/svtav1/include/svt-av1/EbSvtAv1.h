
//
// thirdparty/svtav1/include/svt-av1/EbSvtAv1.h
//
//	referenced by: libengine2.so
//
//	structs: 4
//

// <020FF1E2> ../thirdparty/svtav1/include/svt-av1/EbSvtAv1.h:80
// member variables: 21
// struct size: 144
struct EbBufferHeaderType {
	uint32_t size; /* 0 4 */
	uint8_t * p_buffer; /* 8 8 */
	uint32_t n_filled_len; /* 16 4 */
	uint32_t n_alloc_len; /* 20 4 */
	void * p_app_private; /* 24 8 */
	void * wrapper_ptr; /* 32 8 */
	uint32_t n_tick_count; /* 40 4 */
	int64_t dts; /* 48 8 */
	int64_t pts; /* 56 8 */
	uint8_t temporal_layer_index; /* 64 1 */
	uint32_t qp; /* 68 4 */
	uint32_t avg_qp; /* 72 4 */
	EbAv1PictureType pic_type; /* 76 4 */
	uint64_t luma_sse; /* 80 8 */
	uint64_t cr_sse; /* 88 8 */
	uint64_t cb_sse; /* 96 8 */
	uint32_t flags; /* 104 4 */
	double luma_ssim; /* 112 8 */
	double cr_ssim; /* 120 8 */
	double cb_ssim; /* 128 8 */
	SvtMetadataArray * metadata; /* 136 8 */
};

// <020FF34A> ../thirdparty/svtav1/include/svt-av1/EbSvtAv1.h:116
// member variables: 3
// struct size: 24
struct EbComponentType {
	uint32_t size; /* 0 4 */
	void * p_component_private; /* 8 8 */
	void * p_application_private; /* 16 8 */
};

// <020FF48C> ../thirdparty/svtav1/include/svt-av1/EbSvtAv1.h:150
// member variables: 6
// struct size: 40
struct EbSvtIOFormat {
	uint8_t * luma; /* 0 8 */
	uint8_t * cb; /* 8 8 */
	uint8_t * cr; /* 16 8 */
	uint32_t y_stride; /* 24 4 */
	uint32_t cr_stride; /* 28 4 */
	uint32_t cb_stride; /* 32 4 */
};

// <020FF4FE> ../thirdparty/svtav1/include/svt-av1/EbSvtAv1.h:307
// member variables: 27
// struct size: 652
typedef struct {
	int32_t apply_grain; /* 0 4 */
	int32_t update_parameters; /* 4 4 */
	int32_t scaling_points_y[14][2]; /* 8 112 */
	int32_t num_y_points; /* 120 4 */
	int32_t scaling_points_cb[10][2]; /* 124 80 */
	int32_t num_cb_points; /* 204 4 */
	int32_t scaling_points_cr[10][2]; /* 208 80 */
	int32_t num_cr_points; /* 288 4 */
	int32_t scaling_shift; /* 292 4 */
	int32_t ar_coeff_lag; /* 296 4 */
	int32_t ar_coeffs_y[24]; /* 300 96 */
	int32_t ar_coeffs_cb[25]; /* 396 100 */
	int32_t ar_coeffs_cr[25]; /* 496 100 */
	int32_t ar_coeff_shift; /* 596 4 */
	int32_t cb_mult; /* 600 4 */
	int32_t cb_luma_mult; /* 604 4 */
	int32_t cb_offset; /* 608 4 */
	int32_t cr_mult; /* 612 4 */
	int32_t cr_luma_mult; /* 616 4 */
	int32_t cr_offset; /* 620 4 */
	int32_t overlap_flag; /* 624 4 */
	int32_t clip_to_restricted_range; /* 628 4 */
	int32_t bit_depth; /* 632 4 */
	int32_t chroma_scaling_from_luma; /* 636 4 */
	int32_t grain_scale_shift; /* 640 4 */
	uint16_t random_seed; /* 644 2 */
	int32_t ignore_ref; /* 648 4 */
} AomFilmGrain;

