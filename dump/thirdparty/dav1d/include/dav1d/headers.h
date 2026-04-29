
//
// thirdparty/dav1d/include/dav1d/headers.h
//
//	referenced by: libengine2.so
//
//	structs: 10
//

// <02078BEA> ../thirdparty/dav1d/include/dav1d/headers.h:97
// member variables: 3
// struct size: 36
struct Dav1dWarpedMotionParams {
	/* ../thirdparty/dav1d/include/dav1d/headers.h:100 */
	union {
		struct {
			int16_t alpha; /* 0 2 */
			int16_t beta; /* 2 2 */
			int16_t gamma; /* 4 2 */
			int16_t delta; /* 6 2 */
		} p; /* 0 8 */
		int16_t abcd[4]; /* 0 8 */
	};
	Dav1dWarpedMotionType type; /* 0 4 */
	int32_t matrix[6]; /* 4 24 */
	union {
		struct {
			int16_t alpha; /* 28 2 */
			int16_t beta; /* 30 2 */
			int16_t gamma; /* 32 2 */
			int16_t delta; /* 34 2 */
		} p; /* 28 8 */
		int16_t abcd[4]; /* 28 8 */
	} u; /* 28 8 */
};

// <02078E7F> ../thirdparty/dav1d/include/dav1d/headers.h:184
// member variables: 2
// struct size: 4
struct Dav1dContentLightLevel {
	uint16_t max_content_light_level; /* 0 2 */
	uint16_t max_frame_average_light_level; /* 2 2 */
};

// <02078EB7> ../thirdparty/dav1d/include/dav1d/headers.h:189
// member variables: 4
// struct size: 24
struct Dav1dMasteringDisplay {
	uint16_t primaries[3][2]; /* 0 12 */
	uint16_t white_point[2]; /* 12 4 */
	uint32_t max_luminance; /* 16 4 */
	uint32_t min_luminance; /* 20 4 */
};

// <02078F33> ../thirdparty/dav1d/include/dav1d/headers.h:196
// member variables: 4
// struct size: 24
struct Dav1dITUTT35 {
	uint8_t country_code; /* 0 1 */
	uint8_t country_code_extension_byte; /* 1 1 */
	size_t payload_size; /* 8 8 */
	uint8_t * payload; /* 16 8 */
};

// <02078F8F> ../thirdparty/dav1d/include/dav1d/headers.h:203
// member variables: 53
// struct size: 808
struct Dav1dSequenceHeader {
	/* ../thirdparty/dav1d/include/dav1d/headers.h:236 */
	struct Dav1dSequenceHeaderOperatingPoint {
		uint8_t major_level; /* 0 1 */
		uint8_t minor_level; /* 1 1 */
		uint8_t initial_display_delay; /* 2 1 */
		uint16_t idc; /* 4 2 */
		uint8_t tier; /* 6 1 */
		uint8_t decoder_model_param_present; /* 7 1 */
		uint8_t display_model_param_present; /* 8 1 */
	};
	/* ../thirdparty/dav1d/include/dav1d/headers.h:289 */
	struct Dav1dSequenceHeaderOperatingParameterInfo {
		uint32_t decoder_buffer_delay; /* 0 4 */
		uint32_t encoder_buffer_delay; /* 4 4 */
		uint8_t low_delay_mode; /* 8 1 */
	};
	uint8_t profile; /* 0 1 */
	int max_width; /* 4 4 */
	int max_height; /* 8 4 */
	Dav1dPixelLayout layout; /* 12 4 */
	Dav1dColorPrimaries pri; /* 16 4 */
	Dav1dTransferCharacteristics trc; /* 20 4 */
	Dav1dMatrixCoefficients mtrx; /* 24 4 */
	Dav1dChromaSamplePosition chr; /* 28 4 */
	uint8_t hbd; /* 32 1 */
	uint8_t color_range; /* 33 1 */
	uint8_t num_operating_points; /* 34 1 */
	Dav1dSequenceHeaderOperatingPoint operating_points[32]; /* 36 320 */
	uint8_t still_picture; /* 356 1 */
	uint8_t reduced_still_picture_header; /* 357 1 */
	uint8_t timing_info_present; /* 358 1 */
	uint32_t num_units_in_tick; /* 360 4 */
	uint32_t time_scale; /* 364 4 */
	uint8_t equal_picture_interval; /* 368 1 */
	uint32_t num_ticks_per_picture; /* 372 4 */
	uint8_t decoder_model_info_present; /* 376 1 */
	uint8_t encoder_decoder_buffer_delay_length; /* 377 1 */
	uint32_t num_units_in_decoding_tick; /* 380 4 */
	uint8_t buffer_removal_delay_length; /* 384 1 */
	uint8_t frame_presentation_delay_length; /* 385 1 */
	uint8_t display_model_info_present; /* 386 1 */
	uint8_t width_n_bits; /* 387 1 */
	uint8_t height_n_bits; /* 388 1 */
	uint8_t frame_id_numbers_present; /* 389 1 */
	uint8_t delta_frame_id_n_bits; /* 390 1 */
	uint8_t frame_id_n_bits; /* 391 1 */
	uint8_t sb128; /* 392 1 */
	uint8_t filter_intra; /* 393 1 */
	uint8_t intra_edge_filter; /* 394 1 */
	uint8_t inter_intra; /* 395 1 */
	uint8_t masked_compound; /* 396 1 */
	uint8_t warped_motion; /* 397 1 */
	uint8_t dual_filter; /* 398 1 */
	uint8_t order_hint; /* 399 1 */
	uint8_t jnt_comp; /* 400 1 */
	uint8_t ref_frame_mvs; /* 401 1 */
	Dav1dAdaptiveBoolean screen_content_tools; /* 404 4 */
	Dav1dAdaptiveBoolean force_integer_mv; /* 408 4 */
	uint8_t order_hint_n_bits; /* 412 1 */
	uint8_t super_res; /* 413 1 */
	uint8_t cdef; /* 414 1 */
	uint8_t restoration; /* 415 1 */
	uint8_t ss_hor; /* 416 1 */
	uint8_t ss_ver; /* 417 1 */
	uint8_t monochrome; /* 418 1 */
	uint8_t color_description_present; /* 419 1 */
	uint8_t separate_uv_delta_q; /* 420 1 */
	uint8_t film_grain_present; /* 421 1 */
	Dav1dSequenceHeaderOperatingParameterInfo operating_parameter_info[32]; /* 424 384 */
};

// <020793E3> ../thirdparty/dav1d/include/dav1d/headers.h:296
// member variables: 8
// struct size: 10
struct Dav1dSegmentationData {
	int16_t delta_q; /* 0 2 */
	int8_t delta_lf_y_v; /* 2 1 */
	int8_t delta_lf_y_h; /* 3 1 */
	int8_t delta_lf_u; /* 4 1 */
	int8_t delta_lf_v; /* 5 1 */
	int8_t ref; /* 6 1 */
	uint8_t skip; /* 7 1 */
	uint8_t globalmv; /* 8 1 */
};

// <0207947F> ../thirdparty/dav1d/include/dav1d/headers.h:304
// member variables: 3
// struct size: 82
struct Dav1dSegmentationDataSet {
	Dav1dSegmentationData d[8]; /* 0 80 */
	uint8_t preskip; /* 80 1 */
	int8_t last_active_segid; /* 81 1 */
};

// <020794D9> ../thirdparty/dav1d/include/dav1d/headers.h:310
// member variables: 2
// struct size: 10
struct Dav1dLoopfilterModeRefDeltas {
	int8_t mode_delta[2]; /* 0 2 */
	int8_t ref_delta[8]; /* 2 8 */
};

// <02079535> ../thirdparty/dav1d/include/dav1d/headers.h:315
// member variables: 17
// struct size: 224
struct Dav1dFilmGrainData {
	unsigned int seed; /* 0 4 */
	int num_y_points; /* 4 4 */
	uint8_t y_points[14][2]; /* 8 28 */
	int chroma_scaling_from_luma; /* 36 4 */
	int num_uv_points[2]; /* 40 8 */
	uint8_t uv_points[2][10][2]; /* 48 40 */
	int scaling_shift; /* 88 4 */
	int ar_coeff_lag; /* 92 4 */
	int8_t ar_coeffs_y[24]; /* 96 24 */
	int8_t ar_coeffs_uv[2][28]; /* 120 56 */
	uint64_t ar_coeff_shift; /* 176 8 */
	int grain_scale_shift; /* 184 4 */
	int uv_mult[2]; /* 188 8 */
	int uv_luma_mult[2]; /* 196 8 */
	int uv_offset[2]; /* 204 8 */
	int overlap_flag; /* 212 4 */
	int clip_to_restricted_range; /* 216 4 */
};

// <020796C0> ../thirdparty/dav1d/include/dav1d/headers.h:335
// member variables: 50
// struct size: 1,152
struct Dav1dFrameHeader {
	/* ../thirdparty/dav1d/include/dav1d/headers.h:336 */
	struct {
		Dav1dFilmGrainData data; /* 0 224 */
		uint8_t present; /* 224 1 */
		uint8_t update; /* 225 1 */
	};
	/* ../thirdparty/dav1d/include/dav1d/headers.h:359 */
	struct Dav1dFrameHeaderOperatingPoint {
		uint32_t buffer_removal_time; /* 0 4 */
	};
	/* ../thirdparty/dav1d/include/dav1d/headers.h:364 */
	struct {
		uint8_t width_scale_denominator; /* 0 1 */
		uint8_t enabled; /* 1 1 */
	};
	/* ../thirdparty/dav1d/include/dav1d/headers.h:377 */
	struct {
		uint8_t uniform; /* 0 1 */
		uint8_t n_bytes; /* 1 1 */
		uint8_t min_log2_cols; /* 2 1 */
		uint8_t max_log2_cols; /* 3 1 */
		uint8_t log2_cols; /* 4 1 */
		uint8_t cols; /* 5 1 */
		uint8_t min_log2_rows; /* 6 1 */
		uint8_t max_log2_rows; /* 7 1 */
		uint8_t log2_rows; /* 8 1 */
		uint8_t rows; /* 9 1 */
		uint16_t col_start_sb[65]; /* 10 130 */
		uint16_t row_start_sb[65]; /* 140 130 */
		uint16_t update; /* 270 2 */
	};
	/* ../thirdparty/dav1d/include/dav1d/headers.h:386 */
	struct {
		uint8_t yac; /* 0 1 */
		int8_t ydc_delta; /* 1 1 */
		int8_t udc_delta; /* 2 1 */
		int8_t uac_delta; /* 3 1 */
		int8_t vdc_delta; /* 4 1 */
		int8_t vac_delta; /* 5 1 */
		uint8_t qm; /* 6 1 */
		uint8_t qm_y; /* 7 1 */
		uint8_t qm_u; /* 8 1 */
		uint8_t qm_v; /* 9 1 */
	};
	/* ../thirdparty/dav1d/include/dav1d/headers.h:392 */
	struct {
		uint8_t enabled; /* 0 1 */
		uint8_t update_map; /* 1 1 */
		uint8_t temporal; /* 2 1 */
		uint8_t update_data; /* 3 1 */
		Dav1dSegmentationDataSet seg_data; /* 4 82 */
		uint8_t lossless[8]; /* 86 8 */
		uint8_t qidx[8]; /* 94 8 */
	};
	/* ../thirdparty/dav1d/include/dav1d/headers.h:397 */
	struct {
		/* ../thirdparty/dav1d/include/dav1d/headers.h:398 */
		struct {
			uint8_t present; /* 0 1 */
			uint8_t res_log2; /* 1 1 */
		};
		/* ../thirdparty/dav1d/include/dav1d/headers.h:402 */
		struct {
			uint8_t present; /* 0 1 */
			uint8_t res_log2; /* 1 1 */
			uint8_t multi; /* 2 1 */
		};
		struct {
			uint8_t present; /* 0 1 */
			uint8_t res_log2; /* 1 1 */
		} q; /* 0 2 */
		struct {
			uint8_t present; /* 2 1 */
			uint8_t res_log2; /* 3 1 */
			uint8_t multi; /* 4 1 */
		} lf; /* 2 3 */
	};
	/* ../thirdparty/dav1d/include/dav1d/headers.h:409 */
	struct {
		uint8_t level_y[2]; /* 0 2 */
		uint8_t level_u; /* 2 1 */
		uint8_t level_v; /* 3 1 */
		uint8_t mode_ref_delta_enabled; /* 4 1 */
		uint8_t mode_ref_delta_update; /* 5 1 */
		Dav1dLoopfilterModeRefDeltas mode_ref_deltas; /* 6 10 */
		uint8_t sharpness; /* 16 1 */
	};
	/* ../thirdparty/dav1d/include/dav1d/headers.h:417 */
	struct {
		uint8_t damping; /* 0 1 */
		uint8_t n_bits; /* 1 1 */
		uint8_t y_strength[8]; /* 2 8 */
		uint8_t uv_strength[8]; /* 10 8 */
	};
	/* ../thirdparty/dav1d/include/dav1d/headers.h:423 */
	struct {
		Dav1dRestorationType type[3]; /* 0 12 */
		uint8_t unit_size[2]; /* 12 2 */
	};
	struct {
		Dav1dFilmGrainData data; /* 0 224 */
		uint8_t present; /* 224 1 */
		uint8_t update; /* 225 1 */
	} film_grain; /* 0 232 */
	Dav1dFrameType frame_type; /* 232 4 */
	int width[2]; /* 236 8 */
	int height; /* 244 4 */
	uint8_t frame_offset; /* 248 1 */
	uint8_t temporal_id; /* 249 1 */
	uint8_t spatial_id; /* 250 1 */
	uint8_t show_existing_frame; /* 251 1 */
	uint8_t existing_frame_idx; /* 252 1 */
	uint32_t frame_id; /* 256 4 */
	uint32_t frame_presentation_delay; /* 260 4 */
	uint8_t show_frame; /* 264 1 */
	uint8_t showable_frame; /* 265 1 */
	uint8_t error_resilient_mode; /* 266 1 */
	uint8_t disable_cdf_update; /* 267 1 */
	uint8_t allow_screen_content_tools; /* 268 1 */
	uint8_t force_integer_mv; /* 269 1 */
	uint8_t frame_size_override; /* 270 1 */
	uint8_t primary_ref_frame; /* 271 1 */
	uint8_t buffer_removal_time_present; /* 272 1 */
	Dav1dFrameHeaderOperatingPoint operating_points[32]; /* 276 128 */
	uint8_t refresh_frame_flags; /* 404 1 */
	int render_width; /* 408 4 */
	int render_height; /* 412 4 */
	struct {
		uint8_t width_scale_denominator; /* 416 1 */
		uint8_t enabled; /* 417 1 */
	} super_res; /* 416 2 */
	uint8_t have_render_size; /* 418 1 */
	uint8_t allow_intrabc; /* 419 1 */
	uint8_t frame_ref_short_signaling; /* 420 1 */
	int8_t refidx[7]; /* 421 7 */
	uint8_t hp; /* 428 1 */
	Dav1dFilterMode subpel_filter_mode; /* 432 4 */
	uint8_t switchable_motion_mode; /* 436 1 */
	uint8_t use_ref_frame_mvs; /* 437 1 */
	uint8_t refresh_context; /* 438 1 */
	struct {
		uint8_t uniform; /* 440 1 */
		uint8_t n_bytes; /* 441 1 */
		uint8_t min_log2_cols; /* 442 1 */
		uint8_t max_log2_cols; /* 443 1 */
		uint8_t log2_cols; /* 444 1 */
		uint8_t cols; /* 445 1 */
		uint8_t min_log2_rows; /* 446 1 */
		uint8_t max_log2_rows; /* 447 1 */
		uint8_t log2_rows; /* 448 1 */
		uint8_t rows; /* 449 1 */
		uint16_t col_start_sb[65]; /* 450 130 */
		uint16_t row_start_sb[65]; /* 580 130 */
		uint16_t update; /* 710 2 */
	} tiling; /* 440 272 */
	struct {
		uint8_t yac; /* 712 1 */
		int8_t ydc_delta; /* 713 1 */
		int8_t udc_delta; /* 714 1 */
		int8_t uac_delta; /* 715 1 */
		int8_t vdc_delta; /* 716 1 */
		int8_t vac_delta; /* 717 1 */
		uint8_t qm; /* 718 1 */
		uint8_t qm_y; /* 719 1 */
		uint8_t qm_u; /* 720 1 */
		uint8_t qm_v; /* 721 1 */
	} quant; /* 712 10 */
	struct {
		uint8_t enabled; /* 722 1 */
		uint8_t update_map; /* 723 1 */
		uint8_t temporal; /* 724 1 */
		uint8_t update_data; /* 725 1 */
		Dav1dSegmentationDataSet seg_data; /* 726 82 */
		uint8_t lossless[8]; /* 808 8 */
		uint8_t qidx[8]; /* 816 8 */
	} segmentation; /* 722 102 */
	struct {
		/* ../thirdparty/dav1d/include/dav1d/headers.h:398 */
		struct {
			uint8_t present; /* 824 1 */
			uint8_t res_log2; /* 825 1 */
		};
		/* ../thirdparty/dav1d/include/dav1d/headers.h:402 */
		struct {
			uint8_t present; /* 824 1 */
			uint8_t res_log2; /* 825 1 */
			uint8_t multi; /* 826 1 */
		};
		struct {
			uint8_t present; /* 824 1 */
			uint8_t res_log2; /* 825 1 */
		} q; /* 824 2 */
		struct {
			uint8_t present; /* 826 1 */
			uint8_t res_log2; /* 827 1 */
			uint8_t multi; /* 828 1 */
		} lf; /* 826 3 */
	} delta; /* 824 5 */
	uint8_t all_lossless; /* 829 1 */
	struct {
		uint8_t level_y[2]; /* 830 2 */
		uint8_t level_u; /* 832 1 */
		uint8_t level_v; /* 833 1 */
		uint8_t mode_ref_delta_enabled; /* 834 1 */
		uint8_t mode_ref_delta_update; /* 835 1 */
		Dav1dLoopfilterModeRefDeltas mode_ref_deltas; /* 836 10 */
		uint8_t sharpness; /* 846 1 */
	} loopfilter; /* 830 17 */
	struct {
		uint8_t damping; /* 847 1 */
		uint8_t n_bits; /* 848 1 */
		uint8_t y_strength[8]; /* 849 8 */
		uint8_t uv_strength[8]; /* 857 8 */
	} cdef; /* 847 18 */
	struct {
		Dav1dRestorationType type[3]; /* 868 12 */
		uint8_t unit_size[2]; /* 880 2 */
	} restoration; /* 868 16 */
	Dav1dTxfmMode txfm_mode; /* 884 4 */
	uint8_t switchable_comp_refs; /* 888 1 */
	uint8_t skip_mode_allowed; /* 889 1 */
	uint8_t skip_mode_enabled; /* 890 1 */
	int8_t skip_mode_refs[2]; /* 891 2 */
	uint8_t warp_motion; /* 893 1 */
	uint8_t reduced_txtp_set; /* 894 1 */
	Dav1dWarpedMotionParams gmv[7]; /* 896 252 */
};

