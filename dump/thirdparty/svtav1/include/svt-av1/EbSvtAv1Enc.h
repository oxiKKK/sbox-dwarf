
//
// thirdparty/svtav1/include/svt-av1/EbSvtAv1Enc.h
//
//	referenced by: libengine2.so
//
//	functions: 10
//	structs: 7
//

// <020FF73B> ../thirdparty/svtav1/include/svt-av1/EbSvtAv1Enc.h:77
// member variables: 2
// struct size: 4
struct EbContentLightLevel {
	uint16_t max_cll; /* 0 2 */
	uint16_t max_fall; /* 2 2 */
};

// <020FF767> ../thirdparty/svtav1/include/svt-av1/EbSvtAv1Enc.h:85
// member variables: 2
// struct size: 4
struct EbSvtAv1ChromaPoints {
	uint16_t x; /* 0 2 */
	uint16_t y; /* 2 2 */
};

// <020FF78F> ../thirdparty/svtav1/include/svt-av1/EbSvtAv1Enc.h:95
// member variables: 6
// struct size: 24
struct EbSvtAv1MasteringDisplayInfo {
	EbSvtAv1ChromaPoints r; /* 0 4 */
	EbSvtAv1ChromaPoints g; /* 4 4 */
	EbSvtAv1ChromaPoints b; /* 8 4 */
	EbSvtAv1ChromaPoints white_point; /* 12 4 */
	uint32_t max_luma; /* 16 4 */
	uint32_t min_luma; /* 20 4 */
};

// <020FF859> ../thirdparty/svtav1/include/svt-av1/EbSvtAv1Enc.h:154
// member variables: 2
// struct size: 16
struct SvtAv1FixedBuf {
	void * buf; /* 0 8 */
	uint64_t sz; /* 8 8 */
};

// <020FF8C7> ../thirdparty/svtav1/include/svt-av1/EbSvtAv1Enc.h:192
// member variables: 4
// struct size: 32
struct SvtAv1FrameScaleEvts {
	uint32_t evt_num; /* 0 4 */
	uint64_t * start_frame_nums; /* 8 8 */
	uint32_t * resize_kf_denoms; /* 16 8 */
	uint32_t * resize_denoms; /* 24 8 */
};

// <020FF929> ../thirdparty/svtav1/include/svt-av1/EbSvtAv1Enc.h:199
// member variables: 5
// struct size: 40
struct SvtAv1SFramePositions {
	uint32_t sframe_num; /* 0 4 */
	uint64_t * sframe_posis; /* 8 8 */
	uint32_t sframe_qp_num; /* 16 4 */
	uint8_t * sframe_qps; /* 24 8 */
	int8_t * sframe_qp_offsets; /* 32 8 */
};

// <020FF994> ../thirdparty/svtav1/include/svt-av1/EbSvtAv1Enc.h:209
// member variables: 116
// struct size: 664
struct EbSvtAv1EncConfiguration {
	int8_t enc_mode; /* 0 1 */
	int32_t intra_period_length; /* 4 4 */
	SvtAv1IntraRefreshType intra_refresh_type; /* 8 4 */
	uint32_t hierarchical_levels; /* 12 4 */
	PredStructure pred_structure; /* 16 4 */
	uint32_t source_width; /* 20 4 */
	uint32_t source_height; /* 24 4 */
	uint32_t forced_max_frame_width; /* 28 4 */
	uint32_t forced_max_frame_height; /* 32 4 */
	uint32_t frame_rate_numerator; /* 36 4 */
	uint32_t frame_rate_denominator; /* 40 4 */
	uint32_t encoder_bit_depth; /* 44 4 */
	EbColorFormat encoder_color_format; /* 48 4 */
	EbAv1SeqProfile profile; /* 52 4 */
	uint32_t tier; /* 56 4 */
	uint32_t level; /* 60 4 */
	EbColorPrimaries color_primaries; /* 64 4 */
	EbTransferCharacteristics transfer_characteristics; /* 68 4 */
	EbMatrixCoefficients matrix_coefficients; /* 72 4 */
	EbColorRange color_range; /* 76 4 */
	EbSvtAv1MasteringDisplayInfo mastering_display; /* 80 24 */
	EbContentLightLevel content_light_level; /* 104 4 */
	EbChromaSamplePosition chroma_sample_position; /* 108 4 */
	uint8_t rate_control_mode; /* 112 1 */
	uint32_t qp; /* 116 4 */
	bool use_qp_file; /* 120 1 */
	uint32_t target_bit_rate; /* 124 4 */
	uint32_t max_bit_rate; /* 128 4 */
	uint32_t max_qp_allowed; /* 132 4 */
	uint32_t min_qp_allowed; /* 136 4 */
	uint32_t vbr_min_section_pct; /* 140 4 */
	uint32_t vbr_max_section_pct; /* 144 4 */
	uint32_t under_shoot_pct; /* 148 4 */
	uint32_t over_shoot_pct; /* 152 4 */
	uint32_t mbr_over_shoot_pct; /* 156 4 */
	int64_t starting_buffer_level_ms; /* 160 8 */
	int64_t optimal_buffer_level_ms; /* 168 8 */
	int64_t maximum_buffer_size_ms; /* 176 8 */
	SvtAv1FixedBuf rc_stats_buffer; /* 184 16 */
	int pass; /* 200 4 */
	uint8_t use_fixed_qindex_offsets; /* 204 1 */
	int32_t qindex_offsets[6]; /* 208 24 */
	int32_t key_frame_chroma_qindex_offset; /* 232 4 */
	int32_t key_frame_qindex_offset; /* 236 4 */
	int32_t chroma_qindex_offsets[6]; /* 240 24 */
	int32_t luma_y_dc_qindex_offset; /* 264 4 */
	int32_t chroma_u_dc_qindex_offset; /* 268 4 */
	int32_t chroma_u_ac_qindex_offset; /* 272 4 */
	int32_t chroma_v_dc_qindex_offset; /* 276 4 */
	int32_t chroma_v_ac_qindex_offset; /* 280 4 */
	uint8_t enable_dlf_flag; /* 284 1 */
	uint32_t film_grain_denoise_strength; /* 288 4 */
	uint8_t film_grain_denoise_apply; /* 292 1 */
	int cdef_level; /* 296 4 */
	int enable_restoration_filtering; /* 300 4 */
	int enable_mfmv; /* 304 4 */
	uint32_t scene_change_detection; /* 308 4 */
	int32_t tile_columns; /* 312 4 */
	int32_t tile_rows; /* 316 4 */
	uint32_t look_ahead_distance; /* 320 4 */
	uint32_t recode_loop; /* 324 4 */
	uint32_t screen_content_mode; /* 328 4 */
	uint8_t aq_mode; /* 332 1 */
	uint8_t enable_tf; /* 333 1 */
	bool enable_overlays; /* 334 1 */
	uint8_t tune; /* 335 1 */
	uint8_t superres_mode; /* 336 1 */
	uint8_t superres_denom; /* 337 1 */
	uint8_t superres_kf_denom; /* 338 1 */
	uint8_t superres_qthres; /* 339 1 */
	uint8_t superres_kf_qthres; /* 340 1 */
	uint8_t superres_auto_search_type; /* 341 1 */
	uint8_t fast_decode; /* 342 1 */
	int32_t sframe_dist; /* 344 4 */
	EbSFrameMode sframe_mode; /* 348 4 */
	uint32_t level_of_parallelism; /* 352 4 */
	EbCpuFlags use_cpu_flags; /* 360 8 */
	uint32_t stat_report; /* 368 4 */
	bool recon_enabled; /* 372 1 */
	bool force_key_frames; /* 373 1 */
	bool multiply_keyint; /* 374 1 */
	uint8_t resize_mode; /* 375 1 */
	uint8_t resize_denom; /* 376 1 */
	uint8_t resize_kf_denom; /* 377 1 */
	bool enable_qm; /* 378 1 */
	uint8_t min_qm_level; /* 379 1 */
	uint8_t max_qm_level; /* 380 1 */
	bool gop_constraint_rc; /* 381 1 */
	int32_t lambda_scale_factors[7]; /* 384 28 */
	bool enable_dg; /* 412 1 */
	uint8_t startup_mg_size; /* 413 1 */
	int8_t startup_qp_offset; /* 414 1 */
	SvtAv1FrameScaleEvts frame_scale_evts; /* 416 32 */
	bool enable_roi_map; /* 448 1 */
	uint8_t tf_strength; /* 449 1 */
	AomFilmGrain * fgs_table; /* 456 8 */
	bool enable_variance_boost; /* 464 1 */
	uint8_t variance_boost_strength; /* 465 1 */
	uint8_t variance_octile; /* 466 1 */
	int8_t sharpness; /* 467 1 */
	uint8_t variance_boost_curve; /* 468 1 */
	uint8_t luminance_qp_bias; /* 469 1 */
	bool lossless; /* 470 1 */
	bool avif; /* 471 1 */
	uint8_t min_chroma_qm_level; /* 472 1 */
	uint8_t max_chroma_qm_level; /* 473 1 */
	bool rtc; /* 474 1 */
	uint8_t qp_scale_compress_strength; /* 475 1 */
	SvtAv1SFramePositions sframe_posi; /* 480 40 */
	uint8_t sframe_qp; /* 520 1 */
	int8_t sframe_qp_offset; /* 521 1 */
	bool adaptive_film_grain; /* 522 1 */
	uint8_t max_tx_size; /* 523 1 */
	uint8_t extended_crf_qindex_offset; /* 524 1 */
	double ac_bias; /* 528 8 */
	uint8_t padding[125]; /* 536 125 */
};

// <02100B56> ../thirdparty/svtav1/include/svt-av1/EbSvtAv1Enc.h:1037
EbErrorType svt_av1_enc_init_handle(EbComponentType* *, EbSvtAv1EncConfiguration *)
{
} /* size: 0 */

// <02100AF1> ../thirdparty/svtav1/include/svt-av1/EbSvtAv1Enc.h:1046
EbErrorType svt_av1_enc_set_parameter(EbComponentType *, EbSvtAv1EncConfiguration *)
{
} /* size: 0 */

// <02100ABF> ../thirdparty/svtav1/include/svt-av1/EbSvtAv1Enc.h:1064
EbErrorType svt_av1_enc_init(EbComponentType *)
{
} /* size: 0 */

// <02100A56> ../thirdparty/svtav1/include/svt-av1/EbSvtAv1Enc.h:1071
EbErrorType svt_av1_enc_stream_header(EbComponentType *, EbBufferHeaderType* *)
{
} /* size: 0 */

// <02100A25> ../thirdparty/svtav1/include/svt-av1/EbSvtAv1Enc.h:1078
EbErrorType svt_av1_enc_stream_header_release(EbBufferHeaderType *)
{
} /* size: 0 */

// <021009E5> ../thirdparty/svtav1/include/svt-av1/EbSvtAv1Enc.h:1085
EbErrorType svt_av1_enc_send_picture(EbComponentType *, EbBufferHeaderType *)
{
} /* size: 0 */

// <021009C2> ../thirdparty/svtav1/include/svt-av1/EbSvtAv1Enc.h:1097
EbErrorType svt_av1_enc_get_packet(EbComponentType *, EbBufferHeaderType* *, uint8_t)
{
} /* size: 0 */

// <021009A7> ../thirdparty/svtav1/include/svt-av1/EbSvtAv1Enc.h:1104
void svt_av1_enc_release_out_buffer(EbBufferHeaderType* *)
{
} /* size: 0 */

// <02100A89> ../thirdparty/svtav1/include/svt-av1/EbSvtAv1Enc.h:1125
EbErrorType svt_av1_enc_deinit(EbComponentType *)
{
} /* size: 0 */

// <02100AD8> ../thirdparty/svtav1/include/svt-av1/EbSvtAv1Enc.h:1131
EbErrorType svt_av1_enc_deinit_handle(EbComponentType *)
{
} /* size: 0 */

