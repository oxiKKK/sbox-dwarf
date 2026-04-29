
//
// thirdparty/libvpx/include/vpx/vpx_encoder.h
//
//	referenced by: libengine2.so
//
//	functions: 4
//	structs: 4
//

// <021094AA> ../thirdparty/libvpx/include/vpx/vpx_encoder.h:103
// member variables: 2
// struct size: 16
struct vpx_fixed_buf {
	void * buf; /* 0 8 */
	size_t sz; /* 8 8 */
};

// <02109537> ../thirdparty/libvpx/include/vpx/vpx_encoder.h:167
// member variables: 2
// struct size: 136
struct vpx_codec_cx_pkt {
	/* ../thirdparty/libvpx/include/vpx/vpx_encoder.h:169 */
	union {
		struct {
			void * buf; /* 0 8 */
			size_t sz; /* 8 8 */
			vpx_codec_pts_t pts; /* 16 8 */
			long unsigned int duration; /* 24 8 */
			vpx_codec_frame_flags_t flags; /* 32 4 */
			int partition_id; /* 36 4 */
			unsigned int width[5]; /* 40 20 */
			unsigned int height[5]; /* 60 20 */
			uint8_t spatial_layer_encoded[5]; /* 80 5 */
		} frame; /* 0 88 */
		vpx_fixed_buf_t twopass_stats; /* 0 16 */
		vpx_fixed_buf_t firstpass_mb_stats; /* 0 16 */
		vpx_psnr_pkt psnr; /* 0 88 */
		vpx_fixed_buf_t raw; /* 0 16 */
		char pad[124]; /* 0 124 */
	};
	vpx_codec_cx_pkt_kind kind; /* 0 4 */
	union {
		struct {
			void * buf; /* 8 8 */
			size_t sz; /* 16 8 */
			vpx_codec_pts_t pts; /* 24 8 */
			long unsigned int duration; /* 32 8 */
			vpx_codec_frame_flags_t flags; /* 40 4 */
			int partition_id; /* 44 4 */
			unsigned int width[5]; /* 48 20 */
			unsigned int height[5]; /* 68 20 */
			uint8_t spatial_layer_encoded[5]; /* 88 5 */
		} frame; /* 8 88 */
		vpx_fixed_buf_t twopass_stats; /* 8 16 */
		vpx_fixed_buf_t firstpass_mb_stats; /* 8 16 */
		vpx_psnr_pkt psnr; /* 8 88 */
		vpx_fixed_buf_t raw; /* 8 16 */
		char pad[124]; /* 8 124 */
	} data; /* 8 128 */
};

// <021096F1> ../thirdparty/libvpx/include/vpx/vpx_encoder.h:227
// member variables: 2
// struct size: 8
struct vpx_rational {
	int num; /* 0 4 */
	int den; /* 4 4 */
};

// <0210904B> ../thirdparty/libvpx/include/vpx/vpx_encoder.h:279
// member variables: 61
// struct size: 504
struct vpx_codec_enc_cfg {
	unsigned int g_usage; /* 0 4 */
	unsigned int g_threads; /* 4 4 */
	unsigned int g_profile; /* 8 4 */
	unsigned int g_w; /* 12 4 */
	unsigned int g_h; /* 16 4 */
	vpx_bit_depth_t g_bit_depth; /* 20 4 */
	unsigned int g_input_bit_depth; /* 24 4 */
	vpx_rational g_timebase; /* 28 8 */
	vpx_codec_er_flags_t g_error_resilient; /* 36 4 */
	vpx_enc_pass g_pass; /* 40 4 */
	unsigned int g_lag_in_frames; /* 44 4 */
	unsigned int rc_dropframe_thresh; /* 48 4 */
	unsigned int rc_resize_allowed; /* 52 4 */
	unsigned int rc_scaled_width; /* 56 4 */
	unsigned int rc_scaled_height; /* 60 4 */
	unsigned int rc_resize_up_thresh; /* 64 4 */
	unsigned int rc_resize_down_thresh; /* 68 4 */
	vpx_rc_mode rc_end_usage; /* 72 4 */
	vpx_fixed_buf_t rc_twopass_stats_in; /* 80 16 */
	vpx_fixed_buf_t rc_firstpass_mb_stats_in; /* 96 16 */
	unsigned int rc_target_bitrate; /* 112 4 */
	unsigned int rc_min_quantizer; /* 116 4 */
	unsigned int rc_max_quantizer; /* 120 4 */
	unsigned int rc_undershoot_pct; /* 124 4 */
	unsigned int rc_overshoot_pct; /* 128 4 */
	unsigned int rc_buf_sz; /* 132 4 */
	unsigned int rc_buf_initial_sz; /* 136 4 */
	unsigned int rc_buf_optimal_sz; /* 140 4 */
	unsigned int rc_2pass_vbr_bias_pct; /* 144 4 */
	unsigned int rc_2pass_vbr_minsection_pct; /* 148 4 */
	unsigned int rc_2pass_vbr_maxsection_pct; /* 152 4 */
	unsigned int rc_2pass_vbr_corpus_complexity; /* 156 4 */
	vpx_kf_mode kf_mode; /* 160 4 */
	unsigned int kf_min_dist; /* 164 4 */
	unsigned int kf_max_dist; /* 168 4 */
	unsigned int ss_number_layers; /* 172 4 */
	int ss_enable_auto_alt_ref[5]; /* 176 20 */
	unsigned int ss_target_bitrate[5]; /* 196 20 */
	unsigned int ts_number_layers; /* 216 4 */
	unsigned int ts_target_bitrate[5]; /* 220 20 */
	unsigned int ts_rate_decimator[5]; /* 240 20 */
	unsigned int ts_periodicity; /* 260 4 */
	unsigned int ts_layer_id[16]; /* 264 64 */
	unsigned int layer_target_bitrate[12]; /* 328 48 */
	int temporal_layering_mode; /* 376 4 */
	int use_vizier_rc_params; /* 380 4 */
	vpx_rational_t active_wq_factor; /* 384 8 */
	vpx_rational_t err_per_mb_factor; /* 392 8 */
	vpx_rational_t sr_default_decay_limit; /* 400 8 */
	vpx_rational_t sr_diff_factor; /* 408 8 */
	vpx_rational_t kf_err_per_mb_factor; /* 416 8 */
	vpx_rational_t kf_frame_min_boost_factor; /* 424 8 */
	vpx_rational_t kf_frame_max_boost_first_factor; /* 432 8 */
	vpx_rational_t kf_frame_max_boost_subs_factor; /* 440 8 */
	vpx_rational_t kf_max_total_boost_factor; /* 448 8 */
	vpx_rational_t gf_max_total_boost_factor; /* 456 8 */
	vpx_rational_t gf_frame_max_boost_factor; /* 464 8 */
	vpx_rational_t zm_factor; /* 472 8 */
	vpx_rational_t rd_mult_inter_qp_fac; /* 480 8 */
	vpx_rational_t rd_mult_arf_qp_fac; /* 488 8 */
	vpx_rational_t rd_mult_key_qp_fac; /* 496 8 */
};

// <0210A377> ../thirdparty/libvpx/include/vpx/vpx_encoder.h:894
vpx_codec_err_t vpx_codec_enc_init_ver(vpx_codec_ctx_t *, vpx_codec_iface_t *, const vpx_codec_enc_cfg_t *, vpx_codec_flags_t, int)
{
} /* size: 0 */

// <0210A3DC> ../thirdparty/libvpx/include/vpx/vpx_encoder.h:962
vpx_codec_err_t vpx_codec_enc_config_default(vpx_codec_iface_t *, vpx_codec_enc_cfg_t *, unsigned int)
{
} /* size: 0 */

// <0210A281> ../thirdparty/libvpx/include/vpx/vpx_encoder.h:1055
vpx_codec_err_t vpx_codec_encode(vpx_codec_ctx_t *, const vpx_image_t *, vpx_codec_pts_t, long unsigned int, vpx_enc_frame_flags_t, vpx_enc_deadline_t)
{
} /* size: 0 */

// <0210A1F1> ../thirdparty/libvpx/include/vpx/vpx_encoder.h:1137
const vpx_codec_cx_pkt_t* vpx_codec_get_cx_data(vpx_codec_ctx_t *, vpx_codec_iter_t *)
{
} /* size: 0 */

