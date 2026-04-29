
//
// thirdparty/dr_libs/dr_mp3.h
//
//	referenced by: libengine2.so
//
//	functions: 103
//	structs: 14
//

// <0208B20A> ../thirdparty/dr_libs/dr_mp3.h:247
// member functions: 3
// member variables: 4
// struct size: 32
typedef struct {
	void * pUserData; /* 0 8 */
	void* (*onMalloc)(size_t, void* ); /* 8 8* /
	void* (*onRealloc)(void* , size_t, void* ); /* 16 8* /
	void (*onFree)(void* , void* ); /* 24 8* /
} drmp3_allocation_callbacks;

// <020945F5> ../thirdparty/dr_libs/dr_mp3.h:265
// member variables: 5
// struct size: 20
typedef struct {
	int frame_bytes; /* 0 4 */
	int channels; /* 4 4 */
	int sample_rate; /* 8 4 */
	int layer; /* 12 4 */
	int bitrate_kbps; /* 16 4 */
} drmp3dec_frame_info;

// <0208B2B4> ../thirdparty/dr_libs/dr_mp3.h:270
// member variables: 3
// struct size: 16
typedef struct {
	const drmp3_uint8 * buf; /* 0 8 */
	int pos; /* 8 4 */
	int limit; /* 12 4 */
} drmp3_bs;

// <0208B306> ../thirdparty/dr_libs/dr_mp3.h:276
// member variables: 16
// struct size: 32
typedef struct {
	const drmp3_uint8 * sfbtab; /* 0 8 */
	drmp3_uint16 part_23_length; /* 8 2 */
	drmp3_uint16 big_values; /* 10 2 */
	drmp3_uint16 scalefac_compress; /* 12 2 */
	drmp3_uint8 global_gain; /* 14 1 */
	drmp3_uint8 block_type; /* 15 1 */
	drmp3_uint8 mixed_block_flag; /* 16 1 */
	drmp3_uint8 n_long_sfb; /* 17 1 */
	drmp3_uint8 n_short_sfb; /* 18 1 */
	drmp3_uint8 table_select[3]; /* 19 3 */
	drmp3_uint8 region_count[3]; /* 22 3 */
	drmp3_uint8 subblock_gain[3]; /* 25 3 */
	drmp3_uint8 preflag; /* 28 1 */
	drmp3_uint8 scalefac_scale; /* 29 1 */
	drmp3_uint8 count1_table; /* 30 1 */
	drmp3_uint8 scfsi; /* 31 1 */
} drmp3_L3_gr_info;

// <0208B432> ../thirdparty/dr_libs/dr_mp3.h:285
// member variables: 7
// struct size: 16,256
typedef struct {
	drmp3_bs bs; /* 0 16 */
	drmp3_uint8 maindata[2815]; /* 16 2815 */
	drmp3_L3_gr_info gr_info[4]; /* 2832 128 */
	float grbuf[2][576]; /* 2960 4608 */
	float scf[40]; /* 7568 160 */
	float syn[33][64]; /* 7728 8448 */
	drmp3_uint8 ist_pos[2][39]; /* 16176 78 */
} drmp3dec_scratch;

// <0208B537> ../thirdparty/dr_libs/dr_mp3.h:294
// member variables: 7
// struct size: 22,928
typedef struct {
	float mdct_overlap[2][288]; /* 0 2304 */
	float qmf_state[960]; /* 2304 3840 */
	int reserv; /* 6144 4 */
	int free_format_bytes; /* 6148 4 */
	drmp3_uint8 header[4]; /* 6152 4 */
	drmp3_uint8 reserv_buf[511]; /* 6156 511 */
	drmp3dec_scratch scratch; /* 6672 16256 */
} drmp3dec;

// <02095181> ../thirdparty/dr_libs/dr_mp3.h:302
void drmp3dec_init(drmp3dec *)
{
} /* size: 0 */

// <02095133> ../thirdparty/dr_libs/dr_mp3.h:305
int drmp3dec_decode_frame(drmp3dec *, const drmp3_uint8 *, int, void *, drmp3dec_frame_info *)
{
} /* size: 0 */

// <020950F6> ../thirdparty/dr_libs/dr_mp3.h:308
void drmp3dec_f32_to_s16(const float *, drmp3_int16 *, size_t)
{
} /* size: 0 */

// <0208B646> ../thirdparty/dr_libs/dr_mp3.h:324
// member variables: 4
// struct size: 24
typedef struct {
	drmp3_uint64 seekPosInBytes; /* 0 8 */
	drmp3_uint64 pcmFrameIndex; /* 8 8 */
	drmp3_uint16 mp3FramesToDiscard; /* 16 2 */
	drmp3_uint16 pcmFramesToDiscard; /* 18 2 */
} drmp3_seek_point;

// <0208B6E1> ../thirdparty/dr_libs/dr_mp3.h:341
// member variables: 3
// struct size: 24
typedef struct {
	drmp3_metadata_type type; /* 0 4 */
	const void * pRawData; /* 8 8 */
	size_t rawDataSize; /* 16 8 */
} drmp3_metadata;

// <06D87405> ../../thirdparty/dr_libs/dr_mp3.h:393
// member variables: 2
// struct size: 8
typedef struct {
	drmp3_uint32 channels; /* 0 4 */
	drmp3_uint32 sampleRate; /* 4 4 */
} drmp3_config;

// <0208B7E0> ../thirdparty/dr_libs/dr_mp3.h:399
// member variables: 31
// struct size: 32,376
typedef struct {
	/* ../thirdparty/dr_libs/dr_mp3.h:431 */
	typedef struct {
		const drmp3_uint8 * pData; /* 0 8 */
		size_t dataSize; /* 8 8 */
		size_t currentReadPos; /* 16 8 */
	} drmp3;
	drmp3dec decoder; /* 0 22928 */
	drmp3_uint32 channels; /* 22928 4 */
	drmp3_uint32 sampleRate; /* 22932 4 */
	drmp3_read_proc onRead; /* 22936 8 */
	drmp3_seek_proc onSeek; /* 22944 8 */
	drmp3_meta_proc onMeta; /* 22952 8 */
	void * pUserData; /* 22960 8 */
	void * pUserDataMeta; /* 22968 8 */
	drmp3_allocation_callbacks allocationCallbacks; /* 22976 32 */
	drmp3_uint32 mp3FrameChannels; /* 23008 4 */
	drmp3_uint32 mp3FrameSampleRate; /* 23012 4 */
	drmp3_uint32 pcmFramesConsumedInMP3Frame; /* 23016 4 */
	drmp3_uint32 pcmFramesRemainingInMP3Frame; /* 23020 4 */
	drmp3_uint8 pcmFrames[9216]; /* 23024 9216 */
	drmp3_uint64 currentPCMFrame; /* 32240 8 */
	drmp3_uint64 streamCursor; /* 32248 8 */
	drmp3_uint64 streamLength; /* 32256 8 */
	drmp3_uint64 streamStartOffset; /* 32264 8 */
	drmp3_seek_point * pSeekPoints; /* 32272 8 */
	drmp3_uint32 seekPointCount; /* 32280 4 */
	drmp3_uint32 delayInPCMFrames; /* 32284 4 */
	drmp3_uint32 paddingInPCMFrames; /* 32288 4 */
	drmp3_uint64 totalPCMFrameCount; /* 32296 8 */
	drmp3_bool32 isVBR; /* 32304 4 */
	drmp3_bool32 isCBR; /* 32308 4 */
	size_t dataSize; /* 32312 8 */
	size_t dataCapacity; /* 32320 8 */
	size_t dataConsumed; /* 32328 8 */
	drmp3_uint8 * pData; /* 32336 8 */
	drmp3_bool32 atEnd; /* 32344 4 */
	struct {
		const drmp3_uint8 * pData; /* 32352 8 */
		size_t dataSize; /* 32360 8 */
		size_t currentReadPos; /* 32368 8 */
	} memory; /* 32352 24 */
} drmp3;

// <06D87441> ../../thirdparty/dr_libs/dr_mp3.h:399
// member variables: 31
// struct size: 32,376
typedef struct {
	/* ../../thirdparty/dr_libs/dr_mp3.h:431 */
	typedef struct {
		const drmp3_uint8 * pData; /* 0 8 */
		size_t dataSize; /* 8 8 */
		size_t currentReadPos; /* 16 8 */
	} drmp3;
	drmp3dec decoder; /* 0 22928 */
	drmp3_uint32 channels; /* 22928 4 */
	drmp3_uint32 sampleRate; /* 22932 4 */
	drmp3_read_proc onRead; /* 22936 8 */
	drmp3_seek_proc onSeek; /* 22944 8 */
	drmp3_meta_proc onMeta; /* 22952 8 */
	void * pUserData; /* 22960 8 */
	void * pUserDataMeta; /* 22968 8 */
	drmp3_allocation_callbacks allocationCallbacks; /* 22976 32 */
	drmp3_uint32 mp3FrameChannels; /* 23008 4 */
	drmp3_uint32 mp3FrameSampleRate; /* 23012 4 */
	drmp3_uint32 pcmFramesConsumedInMP3Frame; /* 23016 4 */
	drmp3_uint32 pcmFramesRemainingInMP3Frame; /* 23020 4 */
	drmp3_uint8 pcmFrames[9216]; /* 23024 9216 */
	drmp3_uint64 currentPCMFrame; /* 32240 8 */
	drmp3_uint64 streamCursor; /* 32248 8 */
	drmp3_uint64 streamLength; /* 32256 8 */
	drmp3_uint64 streamStartOffset; /* 32264 8 */
	drmp3_seek_point * pSeekPoints; /* 32272 8 */
	drmp3_uint32 seekPointCount; /* 32280 4 */
	drmp3_uint32 delayInPCMFrames; /* 32284 4 */
	drmp3_uint32 paddingInPCMFrames; /* 32288 4 */
	drmp3_uint64 totalPCMFrameCount; /* 32296 8 */
	drmp3_bool32 isVBR; /* 32304 4 */
	drmp3_bool32 isCBR; /* 32308 4 */
	size_t dataSize; /* 32312 8 */
	size_t dataCapacity; /* 32320 8 */
	size_t dataConsumed; /* 32328 8 */
	drmp3_uint8 * pData; /* 32336 8 */
	drmp3_bool32 atEnd; /* 32344 4 */
	struct {
		const drmp3_uint8 * pData; /* 32352 8 */
		size_t dataSize; /* 32360 8 */
		size_t currentReadPos; /* 32368 8 */
	} memory; /* 32352 24 */
} drmp3;

// <0208CA64> ../thirdparty/dr_libs/dr_mp3.h:452
drmp3_bool32 drmp3_init(drmp3 *, drmp3_read_proc, drmp3_seek_proc, drmp3_tell_proc, drmp3_meta_proc, void *, const drmp3_allocation_callbacks *)
{
} /* size: 0 */

// <02523A41> ../thirdparty/dr_libs/dr_mp3.h:463
drmp3_bool32 drmp3_init_memory(drmp3 *, const void *, size_t, const drmp3_allocation_callbacks *)
{
} /* size: 0 */

// <0208C9C1> ../thirdparty/dr_libs/dr_mp3.h:483
void drmp3_uninit(drmp3 *)
{
} /* size: 0 */

// <0208C980> ../thirdparty/dr_libs/dr_mp3.h:497
drmp3_uint64 drmp3_read_pcm_frames_s16(drmp3 *, drmp3_uint64, drmp3_int16 *)
{
} /* size: 0 */

// <0208C95C> ../thirdparty/dr_libs/dr_mp3.h:504
drmp3_bool32 drmp3_seek_to_pcm_frame(drmp3 *, drmp3_uint64)
{
} /* size: 0 */

// <06D92FD7> ../../thirdparty/dr_libs/dr_mp3.h:597
void drmp3_version(drmp3_uint32* pMajor, drmp3_uint32* pMinor, drmp3_uint32* pRevision)
{
} /* size: 0 */

// <06D92FB4> ../../thirdparty/dr_libs/dr_mp3.h:612
const char* drmp3_version_string(void)
{
} /* size: 0 */

// <06D92FA5> ../../thirdparty/dr_libs/dr_mp3.h:712
int drmp3_have_simd(void)
{
} /* size: 0 */

// <06D876F5> ../../thirdparty/dr_libs/dr_mp3.h:812
// member variables: 5
// struct size: 900
typedef struct {
	float scf[192]; /* 0 768 */
	drmp3_uint8 total_bands; /* 768 1 */
	drmp3_uint8 stereo_bands; /* 769 1 */
	drmp3_uint8 bitalloc[64]; /* 770 64 */
	drmp3_uint8 scfcod[64]; /* 834 64 */
} drmp3_L12_scale_info;

// <06D87786> ../../thirdparty/dr_libs/dr_mp3.h:818
// member variables: 3
// struct size: 3
typedef struct {
	drmp3_uint8 tab_offset; /* 0 1 */
	drmp3_uint8 code_tab_width; /* 1 1 */
	drmp3_uint8 band_count; /* 2 1 */
} drmp3_L12_subband_alloc;

// <06D92F70> ../../thirdparty/dr_libs/dr_mp3.h:822
void drmp3_bs_init(drmp3_bs* bs, const drmp3_uint8* data, int bytes)
{
} /* size: 0 */

// <06D934A2> ../../thirdparty/dr_libs/dr_mp3.h:829
// variables: 5
drmp3_uint32 drmp3_bs_get_bits(drmp3_bs* bs, int n)
{
	drmp3_uint32 next; // 831
	drmp3_uint32 cache; // 831
	drmp3_uint32 s; // 831
	int shl; // 832
	const drmp3_uint8* p; // 833
} /* size: 148, variables: 5 */

// <06D92EEB> ../../thirdparty/dr_libs/dr_mp3.h:845
int drmp3_hdr_valid(const drmp3_uint8* h)
{
} /* size: 0 */

// <06D92E7E> ../../thirdparty/dr_libs/dr_mp3.h:854
// function call: 1
int drmp3_hdr_compare(const drmp3_uint8* h1, const drmp3_uint8* h2)
{
	drmp3_hdr_valid(const drmp3_uint8* h); // 856
} /* size: 118, inline expansions: 1 (66 bytes) */

// <06D92E28> ../../thirdparty/dr_libs/dr_mp3.h:862
// variable: 1
unsigned int drmp3_hdr_bitrate_kbps(const drmp3_uint8* h)
{
	const drmp3_uint8   halfrate; // 864
} /* size: 0, variables: 1 */

// <06D92DDE> ../../thirdparty/dr_libs/dr_mp3.h:871
// variable: 1
unsigned int drmp3_hdr_sample_rate_hz(const drmp3_uint8* h)
{
	const unsigned int   g_hz; // 873
} /* size: 0, variables: 1 */

// <06D92DC0> ../../thirdparty/dr_libs/dr_mp3.h:877
unsigned int drmp3_hdr_frame_samples(const drmp3_uint8* h)
{
} /* size: 0 */

// <06D92CE5> ../../thirdparty/dr_libs/dr_mp3.h:882
// variable: 1
// function calls: 3
int drmp3_hdr_frame_bytes(const drmp3_uint8* h, int free_format_size)
{
	int frame_bytes; // 884
	drmp3_hdr_frame_samples(const drmp3_uint8* h); // 884
	drmp3_hdr_bitrate_kbps(const drmp3_uint8* h); // 884
	drmp3_hdr_sample_rate_hz(const drmp3_uint8* h); // 884
} /* size: 202, variables: 1, inline expansions: 3 (152 bytes) */

// <06D92CC7> ../../thirdparty/dr_libs/dr_mp3.h:892
int drmp3_hdr_padding(const drmp3_uint8* h)
{
} /* size: 0 */

// <06D92B8C> ../../thirdparty/dr_libs/dr_mp3.h:898
// variables: 10
const drmp3_L12_subband_alloc* drmp3_L12_subband_alloc_table(const drmp3_uint8* hdr, drmp3_L12_scale_info* sci)
{
	const drmp3_L12_subband_alloc* alloc; // 900
	int mode; // 901
	int nbands; // 902
	int stereo_bands; // 902
	{
		const drmp3_L12_subband_alloc   g_alloc_L1; // 906
	}
	{
		const drmp3_L12_subband_alloc   g_alloc_L2M2; // 911
	}
	{
		const drmp3_L12_subband_alloc   g_alloc_L2M1; // 916
		int sample_rate_idx; // 917
		unsigned int kbps; // 918
		{
			const drmp3_L12_subband_alloc   g_alloc_L2M1_lowrate; // 928
		}
	}
} /* size: 0, variables: 4 */

// <06D92AC8> ../../thirdparty/dr_libs/dr_mp3.h:943
// variables: 7
void drmp3_L12_read_scalefactors(drmp3_bs* bs, drmp3_uint8* pba, drmp3_uint8* scfcod, int bands, float* scf)
{
	const float   g_deq_L12; // 945
	int i; // 949
	int m; // 949
	{
		float s; // 952
		int ba; // 953
		int mask; // 954
		{
			int b; // 959
		}
	}
} /* size: 0, variables: 3 */

// <06D92A16> ../../thirdparty/dr_libs/dr_mp3.h:967
// variables: 7
void drmp3_L12_read_scale_info(const drmp3_uint8* hdr, drmp3_bs* bs, drmp3_L12_scale_info* sci)
{
	const drmp3_uint8   g_bitalloc_code_tab; // 969
	const drmp3_L12_subband_alloc* subband_alloc; // 978
	int i; // 980
	int k; // 980
	int ba_bits; // 980
	const drmp3_uint8* ba_code_tab; // 981
	{
		drmp3_uint8 ba; // 985
	}
} /* size: 0, variables: 6 */

// <06D92956> ../../thirdparty/dr_libs/dr_mp3.h:1015
// variables: 9
int drmp3_L12_dequantize_granule(float* grbuf, drmp3_bs* bs, drmp3_L12_scale_info* sci, int group_size)
{
	int i; // 1017
	int j; // 1017
	int k; // 1017
	int choff; // 1017
	{
		float* dst; // 1020
		{
			int ba; // 1023
			{
				int half; // 1028
			}
			{
				unsigned int mod; // 1035
				unsigned int code; // 1036
			}
		}
	}
} /* size: 0, variables: 4 */

// <06D92904> ../../thirdparty/dr_libs/dr_mp3.h:1050
// variables: 2
void drmp3_L12_apply_scf_384(drmp3_L12_scale_info* sci, const float* scf, float* dst)
{
	int i; // 1052
	int k; // 1052
} /* size: 0, variables: 2 */

// <06D92566> ../../thirdparty/dr_libs/dr_mp3.h:1065
// variables: 9
int drmp3_L3_read_side_info(drmp3_bs* bs, drmp3_L3_gr_info* gr, const drmp3_uint8* hdr)
{
	const drmp3_uint8   g_scf_long; // 1067
	const drmp3_uint8   g_scf_short; // 1077
	const drmp3_uint8   g_scf_mixed; // 1087
	unsigned int tables; // 1098
	unsigned int scfsi; // 1098
	int main_data_begin; // 1099
	int part_23_sum; // 1099
	int gr_count; // 1100
	int sr_idx; // 1101
} /* size: 913, variables: 9 */

// <06D924B9> ../../thirdparty/dr_libs/dr_mp3.h:1190
// variables: 6
void drmp3_L3_read_scalefactors(drmp3_uint8* scf, drmp3_uint8* ist_pos, const drmp3_uint8* scf_size, const drmp3_uint8* scf_count, drmp3_bs* bitbuf, int scfsi)
{
	int i; // 1192
	int k; // 1192
	{
		int cnt; // 1195
		{
			int bits; // 1201
			{
				int max_scf; // 1208
				{
					int s; // 1211
				}
			}
		}
	}
} /* size: 0, variables: 2 */

// <06D92457> ../../thirdparty/dr_libs/dr_mp3.h:1223
// variables: 2
float drmp3_L3_ldexp_q2(float y, int exp_q2)
{
	const float   g_expfrac; // 1225
	int e; // 1226
} /* size: 0, variables: 2 */

// <06D92291> ../../thirdparty/dr_libs/dr_mp3.h:1243
// variables: 18
void drmp3_L3_decode_scalefactors(const drmp3_uint8* hdr, drmp3_uint8* ist_pos, drmp3_bs* bs, const drmp3_L3_gr_info* gr, float* scf, int ch)
{
	const drmp3_uint8   g_scf_partitions; // 1245
	const drmp3_uint8* scf_partition; // 1250
	drmp3_uint8 scf_size; // 1251
	drmp3_uint8 iscf; // 1251
	int i; // 1252
	int scf_shift; // 1252
	int gain_exp; // 1252
	int scfsi; // 1252
	float gain; // 1253
	{
		const drmp3_uint8   g_scfc_decode; // 1257
		int part; // 1258
	}
	{
		const drmp3_uint8   g_mod; // 1263
		int k; // 1264
		int modprod; // 1264
		int sfc; // 1264
		int ist; // 1264
	}
	{
		int sh; // 1281
	}
	{
		const drmp3_uint8   g_preamp; // 1290
	}
} /* size: 0, variables: 9 */

// <06D9224C> ../../thirdparty/dr_libs/dr_mp3.h:1313
// variables: 3
float drmp3_L3_pow_43(int x)
{
	float frac; // 1315
	int sign; // 1316
	int mult; // 1316
} /* size: 0, variables: 3 */

// <06D91FEA> ../../thirdparty/dr_libs/dr_mp3.h:1334
// variables: 28
void drmp3_L3_huffman(float* dst, drmp3_bs* bs, const drmp3_L3_gr_info* gr_info, const float* scf, int layer3gr_limit)
{
	const drmp3_int16   tabs; // 1336
	const drmp3_uint8   tab32; // 1352
	const drmp3_uint8   tab33; // 1353
	const drmp3_int16   tabindex; // 1354
	const drmp3_uint8   g_linbits; // 1355
	float one; // 1362
	int ireg; // 1363
	int big_val_cnt; // 1363
	const drmp3_uint8* sfb; // 1364
	const drmp3_uint8* bs_next_ptr; // 1365
	drmp3_uint32 bs_cache; // 1366
	int pairs_to_decode; // 1367
	int np; // 1367
	int bs_sh; // 1367
	{
		int tab_num; // 1372
		int sfb_cnt; // 1373
		const drmp3_int16* codebook; // 1374
		int linbits; // 1375
		{
			int j; // 1385
			int w; // 1385
			int leaf; // 1386
			{
				int lsb; // 1397
			}
		}
		{
			int j; // 1422
			int w; // 1422
			int leaf; // 1423
			{
				int lsb; // 1434
			}
		}
	}
	{
		const drmp3_uint8* codebook_count1; // 1446
		int leaf; // 1447
	}
} /* size: 0, variables: 14 */

// <06D91F75> ../../thirdparty/dr_libs/dr_mp3.h:1471
// variables: 6
void drmp3_L3_midside_stereo(float* left, int n)
{
	int i; // 1473
	float* right; // 1474
	{
		drmp3_f4 vl; // 1480
		drmp3_f4 vr; // 1481
	}
	{
		float a; // 1496
		float b; // 1497
	}
} /* size: 0, variables: 2 */

// <06D91F2B> ../../thirdparty/dr_libs/dr_mp3.h:1503
// variable: 1
void drmp3_L3_intensity_stereo_band(float* left, int n, float kl, float kr)
{
	int i; // 1505
} /* size: 0, variables: 1 */

// <06D91ED2> ../../thirdparty/dr_libs/dr_mp3.h:1513
// variables: 2
void drmp3_L3_stereo_top_band(const float* right, const drmp3_uint8* sfb, int nbands, int* max_band)
{
	int i; // 1515
	int k; // 1515
} /* size: 0, variables: 2 */

// <06D91DFD> ../../thirdparty/dr_libs/dr_mp3.h:1533
// variables: 7
void drmp3_L3_stereo_process(float* left, const drmp3_uint8* ist_pos, const drmp3_uint8* sfb, const drmp3_uint8* hdr, int* max_band, int mpeg2_sh)
{
	const float   g_pan; // 1535
	unsigned int i; // 1536
	unsigned int max_pos; // 1536
	{
		unsigned int ipos; // 1540
		{
			float kl; // 1543
			float kr; // 1543
			float s; // 1543
		}
	}
} /* size: 0, variables: 3 */

// <06D91D4A> ../../thirdparty/dr_libs/dr_mp3.h:1567
// variables: 7
void drmp3_L3_intensity_stereo(float* left, drmp3_uint8* ist_pos, const drmp3_L3_gr_info* gr, const drmp3_uint8* hdr)
{
	int max_band; // 1569
	int n_sfb; // 1569
	int i; // 1570
	int max_blocks; // 1570
	{
		int default_pos; // 1579
		int itop; // 1580
		int prev; // 1581
	}
} /* size: 0, variables: 4 */

// <06D91CE2> ../../thirdparty/dr_libs/dr_mp3.h:1587
// variables: 4
void drmp3_L3_reorder(float* grbuf, float* scratch, const drmp3_uint8* sfb)
{
	int i; // 1589
	int len; // 1589
	float* src; // 1590
	float* dst; // 1590
} /* size: 0, variables: 4 */

// <06D91C50> ../../thirdparty/dr_libs/dr_mp3.h:1604
// variables: 6
void drmp3_L3_antialias(float* grbuf, int nbands)
{
	const float   g_aa; // 1606
	{
		int i; // 1613
		{
			drmp3_f4 vu; // 1617
			drmp3_f4 vd; // 1618
			drmp3_f4 vc0; // 1619
			drmp3_f4 vc1; // 1620
		}
	}
} /* size: 0, variables: 1 */

// <06D91B30> ../../thirdparty/dr_libs/dr_mp3.h:1639
// variables: 12
void drmp3_L3_dct3_9(float* y)
{
	float s0; // 1641
	float s1; // 1641
	float s2; // 1641
	float s3; // 1641
	float s4; // 1641
	float s5; // 1641
	float s6; // 1641
	float s7; // 1641
	float s8; // 1641
	float t0; // 1641
	float t2; // 1641
	float t4; // 1641
} /* size: 414, variables: 12 */

// <06D9150C> ../../thirdparty/dr_libs/dr_mp3.h:1679
// variables: 15
// function calls: 23
void drmp3_L3_imdct36(float* grbuf, float* overlap, const float* window, int nbands)
{
	int i; // 1681
	int j; // 1681
	const float   g_twid9; // 1682
	{
		float co; // 1688
		float si; // 1688
		{
			drmp3_f4 vovl; // 1711
			drmp3_f4 vc; // 1712
			drmp3_f4 vs; // 1713
			drmp3_f4 vr0; // 1714
			drmp3_f4 vr1; // 1715
			drmp3_f4 vw0; // 1716
			drmp3_f4 vw1; // 1717
			drmp3_f4 vsum; // 1718
			_mm_loadu_ps(const float* __P); // 1711
			_mm_loadu_ps(const float* __P); // 1712
			_mm_storeu_ps(float* __P,
					__m128 __A);  // 1722
			_mm_loadu_ps(const float* __P); // 1713
			_mm_loadu_ps(const float* __P); // 1714
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1718
			_mm_loadu_ps(const float* __P); // 1715
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1718
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1719
			_mm_loadu_ps(const float* __P); // 1716
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1719
			_mm_loadu_ps(const float* __P); // 1717
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1718
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1719
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1720
			_mm_storeu_ps(float* __P,
					__m128 __A);  // 1719
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1720
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1720
			_mm_storeu_ps(float* __P,
					__m128 __A);  // 1720
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1721
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1721
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1721
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 1722
		}
		{
			float ovl; // 1727
			float sum; // 1728
		}
	}
} /* size: 707, variables: 3 */

// <06D914B4> ../../thirdparty/dr_libs/dr_mp3.h:1736
// variables: 2
void drmp3_L3_idct3(float x0, float x1, float x2, float* dst)
{
	float m1; // 1738
	float a1; // 1739
} /* size: 0, variables: 2 */

// <06D912DA> ../../thirdparty/dr_libs/dr_mp3.h:1745
// variables: 6
// function calls: 2
void drmp3_L3_imdct12(float* x, float* dst, float* overlap)
{
	const float   g_twid3; // 1747
	float co; // 1748
	float si; // 1748
	int i; // 1749
	{
		float ovl; // 1757
		float sum; // 1758
	}
	drmp3_L3_idct3(float x0,
			float x1,
			float x2,
			float* dst);  // 1751
	drmp3_L3_idct3(float x0,
			float x1,
			float x2,
			float* dst);  // 1752
} /* size: 378, variables: 4, inline expansions: 2 (115 bytes) */

// <06D91285> ../../thirdparty/dr_libs/dr_mp3.h:1765
// variable: 1
void drmp3_L3_imdct_short(float* grbuf, float* overlap, int nbands)
{
	{
		float tmp; // 1769
	}
} /* size: 0 */

// <06D91253> ../../thirdparty/dr_libs/dr_mp3.h:1778
// variables: 2
void drmp3_L3_change_sign(float* grbuf)
{
	int b; // 1780
	int i; // 1780
} /* size: 0, variables: 2 */

// <06D911DE> ../../thirdparty/dr_libs/dr_mp3.h:1786
// variable: 1
void drmp3_L3_imdct_gr(float* grbuf, float* overlap, unsigned int block_type, unsigned int n_long_bands)
{
	const float   g_mdct_window; // 1788
} /* size: 0, variables: 1 */

// <06D9119F> ../../thirdparty/dr_libs/dr_mp3.h:1804
// variables: 2
void drmp3_L3_save_reservoir(drmp3dec* h, drmp3dec_scratch* s)
{
	int pos; // 1806
	int remains; // 1807
} /* size: 0, variables: 2 */

// <06D9113D> ../../thirdparty/dr_libs/dr_mp3.h:1820
// variables: 2
int drmp3_L3_restore_reservoir(drmp3dec* h, drmp3_bs* bs, drmp3dec_scratch* s, int main_data_begin)
{
	int frame_bytes; // 1822
	int bytes_have; // 1823
} /* size: 0, variables: 2 */

// <06D910B7> ../../thirdparty/dr_libs/dr_mp3.h:1830
// variables: 4
void drmp3_L3_decode(drmp3dec* h, drmp3dec_scratch* s, drmp3_L3_gr_info* gr_info, int nch)
{
	int ch; // 1832
	{
		int layer3gr_limit; // 1836
	}
	{
		int aa_bands; // 1851
		int n_long_bands; // 1852
	}
} /* size: 0, variables: 1 */

// <06D8FDA3> ../../thirdparty/dr_libs/dr_mp3.h:1866
// variables: 25
// function calls: 86
void drmp3d_DCT_II(float* grbuf, int n)
{
	const float   g_sec; // 1868
	int i; // 1871
	int k; // 1871
	{
		drmp3_f4 t; // 1875
		drmp3_f4* x; // 1875
		float* y; // 1876
		{
			drmp3_f4 x0; // 1880
			drmp3_f4 x1; // 1881
			drmp3_f4 x2; // 1882
			drmp3_f4 x3; // 1883
			drmp3_f4 t0; // 1884
			drmp3_f4 t1; // 1885
			drmp3_f4 t2; // 1886
			drmp3_f4 t3; // 1887
			_mm_loadu_ps(const float* __P); // 1880
			_mm_loadu_ps(const float* __P); // 1881
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1884
			_mm_loadu_ps(const float* __P); // 1882
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1885
			_mm_loadu_ps(const float* __P); // 1883
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1887
			_mm_set1_ps(float __F); // 1886
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1886
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1886
			_mm_set1_ps(float __F); // 1887
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1887
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1888
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1889
			_mm_set1_ps(float __F); // 1889
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1889
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1890
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1891
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1891
		}
		{
			drmp3_f4 x0; // 1895
			drmp3_f4 x1; // 1895
			drmp3_f4 x2; // 1895
			drmp3_f4 x3; // 1895
			drmp3_f4 x4; // 1895
			drmp3_f4 x5; // 1895
			drmp3_f4 x6; // 1895
			drmp3_f4 x7; // 1895
			drmp3_f4 xt; // 1895
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1896
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1896
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1899
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1897
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1897
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1898
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1898
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1899
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1900
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1900
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1901
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1901
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1902
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1903
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1904
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1907
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1903
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1907
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1905
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1905
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1906
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1908
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1908
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1909
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1909
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1910
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1910
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1911
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1911
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1912
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1912
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1917
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1917
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1913
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1913
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1916
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1916
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1914
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1914
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1915
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1915
		}
		{
			drmp3_f4 s; // 1929
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1929
			_mm_storel_pi(__m64* __P,
					__m128 __A);  // 1930
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1931
			_mm_storel_pi(__m64* __P,
					__m128 __A);  // 1931
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1932
			_mm_storel_pi(__m64* __P,
					__m128 __A);  // 1932
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1933
			_mm_storel_pi(__m64* __P,
					__m128 __A);  // 1933
		}
		{
			drmp3_f4 s; // 1944
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1944
			_mm_storeu_ps(float* __P,
					__m128 __A);  // 1945
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1946
			_mm_storeu_ps(float* __P,
					__m128 __A);  // 1946
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1947
			_mm_storeu_ps(float* __P,
					__m128 __A);  // 1947
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1948
			_mm_storeu_ps(float* __P,
					__m128 __A);  // 1948
		}
		_mm_storeu_ps(float* __P,
				__m128 __A);  // 1950
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1951
		_mm_storeu_ps(float* __P,
				__m128 __A);  // 1951
		_mm_storeu_ps(float* __P,
				__m128 __A);  // 1952
		_mm_storeu_ps(float* __P,
				__m128 __A);  // 1953
		_mm_storel_pi(__m64* __P,
				__m128 __A);  // 1935
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1936
		_mm_storel_pi(__m64* __P,
				__m128 __A);  // 1936
		_mm_storel_pi(__m64* __P,
				__m128 __A);  // 1937
		_mm_storel_pi(__m64* __P,
				__m128 __A);  // 1938
	}
} /* size: 1080, variables: 3 */

// <06D8FD78> ../../thirdparty/dr_libs/dr_mp3.h:2024
// variable: 1
drmp3_int16 drmp3d_scale_pcm(float sample)
{
	drmp3_int16 s; // 2026
} /* size: 0, variables: 1 */

// <06D8FCA3> ../../thirdparty/dr_libs/dr_mp3.h:2048
// variable: 1
// function calls: 2
void drmp3d_synth_pair(drmp3d_sample_t* pcm, int nch, const float* z)
{
	float a; // 2050
	drmp3d_scale_pcm(float sample); // 2059
	drmp3d_scale_pcm(float sample); // 2070
} /* size: 493, variables: 1, inline expansions: 2 (115 bytes) */

// <06D8FA08> ../../thirdparty/dr_libs/dr_mp3.h:2073
// variables: 43
void drmp3d_synth(float* xl, drmp3d_sample_t* dstl, int nch, float* lins)
{
	int i; // 2075
	float* xr; // 2076
	drmp3d_sample_t* dstr; // 2077
	const float   g_win; // 2079
	float* zlin; // 2096
	const float* w; // 2097
	{
		drmp3_f4 a; // 2121
		drmp3_f4 b; // 2121
		{
			drmp3_f4 w0; // 2131
			drmp3_f4 w1; // 2131
			drmp3_f4 vz; // 2131
			drmp3_f4 vy; // 2131
		}
		{
			drmp3_f4 w0; // 2131
			drmp3_f4 w1; // 2131
			drmp3_f4 vz; // 2131
			drmp3_f4 vy; // 2131
		}
		{
			drmp3_f4 w0; // 2131
			drmp3_f4 w1; // 2131
			drmp3_f4 vz; // 2131
			drmp3_f4 vy; // 2131
		}
		{
			drmp3_f4 w0; // 2131
			drmp3_f4 w1; // 2131
			drmp3_f4 vz; // 2131
			drmp3_f4 vy; // 2131
		}
		{
			drmp3_f4 w0; // 2131
			drmp3_f4 w1; // 2131
			drmp3_f4 vz; // 2131
			drmp3_f4 vy; // 2131
		}
		{
			drmp3_f4 w0; // 2131
			drmp3_f4 w1; // 2131
			drmp3_f4 vz; // 2131
			drmp3_f4 vy; // 2131
		}
		{
			drmp3_f4 w0; // 2131
			drmp3_f4 w1; // 2131
			drmp3_f4 vz; // 2131
			drmp3_f4 vy; // 2131
		}
		{
			drmp3_f4 w0; // 2131
			drmp3_f4 w1; // 2131
			drmp3_f4 vz; // 2131
			drmp3_f4 vy; // 2131
		}
		{
			const drmp3_f4  g_max; // 2136
			const drmp3_f4  g_min; // 2137
			__m128i pcm8; // 2138
		}
	}
} /* size: 0, variables: 6 */

// <06D8E229> ../../thirdparty/dr_libs/dr_mp3.h:2228
// variables: 36
// function calls: 112
void drmp3d_synth_granule(float* qmf_state, float* grbuf, int nbands, int nch, drmp3d_sample_t* pcm, float* lins)
{
	int i; // 2230
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 2236
	{
		drmp3_f4 a; // 2121
		drmp3_f4 b; // 2121
		{
			drmp3_f4 w0; // 2131
			drmp3_f4 w1; // 2131
			drmp3_f4 vz; // 2131
			drmp3_f4 vy; // 2131
			_mm_set1_ps(float __F); // 2131
			_mm_set1_ps(float __F); // 2131
			_mm_loadu_ps(const float* __P); // 2131
			_mm_loadu_ps(const float* __P); // 2131
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 2131
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 2131
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 2131
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 2131
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 2131
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 2131
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 2131
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 2131
		}
		{
			drmp3_f4 w0; // 2131
			drmp3_f4 w1; // 2131
			drmp3_f4 vz; // 2131
			drmp3_f4 vy; // 2131
			_mm_loadu_ps(const float* __P); // 2131
			_mm_set1_ps(float __F); // 2131
			_mm_set1_ps(float __F); // 2131
			_mm_loadu_ps(const float* __P); // 2131
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 2131
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 2131
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 2131
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 2131
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 2131
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 2131
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 2131
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 2131
		}
		{
			drmp3_f4 w0; // 2131
			drmp3_f4 w1; // 2131
			drmp3_f4 vz; // 2131
			drmp3_f4 vy; // 2131
			_mm_loadu_ps(const float* __P); // 2131
			_mm_set1_ps(float __F); // 2131
			_mm_set1_ps(float __F); // 2131
			_mm_loadu_ps(const float* __P); // 2131
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 2131
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 2131
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 2131
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 2131
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 2131
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 2131
		}
		{
			drmp3_f4 w0; // 2131
			drmp3_f4 w1; // 2131
			drmp3_f4 vz; // 2131
			drmp3_f4 vy; // 2131
			_mm_set1_ps(float __F); // 2131
			_mm_set1_ps(float __F); // 2131
			_mm_loadu_ps(const float* __P); // 2131
			_mm_loadu_ps(const float* __P); // 2131
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 2131
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 2131
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 2131
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 2131
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 2131
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 2131
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 2131
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 2131
		}
		{
			drmp3_f4 w0; // 2131
			drmp3_f4 w1; // 2131
			drmp3_f4 vz; // 2131
			drmp3_f4 vy; // 2131
			_mm_loadu_ps(const float* __P); // 2131
			_mm_set1_ps(float __F); // 2131
			_mm_set1_ps(float __F); // 2131
			_mm_loadu_ps(const float* __P); // 2131
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 2131
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 2131
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 2131
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 2131
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 2131
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 2131
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 2131
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 2131
		}
		{
			drmp3_f4 w0; // 2131
			drmp3_f4 w1; // 2131
			drmp3_f4 vz; // 2131
			drmp3_f4 vy; // 2131
			_mm_set1_ps(float __F); // 2131
			_mm_loadu_ps(const float* __P); // 2131
			_mm_set1_ps(float __F); // 2131
			_mm_loadu_ps(const float* __P); // 2131
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 2131
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 2131
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 2131
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 2131
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 2131
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 2131
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 2131
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 2131
		}
		{
			drmp3_f4 w0; // 2131
			drmp3_f4 w1; // 2131
			drmp3_f4 vz; // 2131
			drmp3_f4 vy; // 2131
			_mm_set1_ps(float __F); // 2131
			_mm_set1_ps(float __F); // 2131
			_mm_loadu_ps(const float* __P); // 2131
			_mm_loadu_ps(const float* __P); // 2131
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 2131
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 2131
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 2131
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 2131
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 2131
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 2131
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 2131
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 2131
		}
		{
			drmp3_f4 w0; // 2131
			drmp3_f4 w1; // 2131
			drmp3_f4 vz; // 2131
			drmp3_f4 vy; // 2131
			_mm_set1_ps(float __F); // 2131
			_mm_set1_ps(float __F); // 2131
			_mm_loadu_ps(const float* __P); // 2131
			_mm_loadu_ps(const float* __P); // 2131
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 2131
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 2131
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 2131
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 2131
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 2131
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 2131
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 2131
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 2131
		}
		{
			__m128i pcm8; // 2138
			_mm_min_ps(__m128 __A,
					__m128 __B);  // 2138
			_mm_max_ps(__m128 __A,
					__m128 __B);  // 2138
			_mm_cvtps_epi32(__m128 __A); // 2138
			_mm_min_ps(__m128 __A,
					__m128 __B);  // 2138
			_mm_max_ps(__m128 __A,
					__m128 __B);  // 2138
			_mm_cvtps_epi32(__m128 __A); // 2138
			_mm_packs_epi32(__m128i __A,
					__m128i __B);  // 2138
			_mm_extract_epi16(const __m128i  __A,
						const int  __N);  // 2140
			_mm_extract_epi16(const __m128i  __A,
						const int  __N);  // 2141
			_mm_extract_epi16(const __m128i  __A,
						const int  __N);  // 2142
			_mm_extract_epi16(const __m128i  __A,
						const int  __N);  // 2143
			_mm_extract_epi16(const __m128i  __A,
						const int  __N);  // 2144
			_mm_extract_epi16(const __m128i  __A,
						const int  __N);  // 2145
			_mm_extract_epi16(const __m128i  __A,
						const int  __N);  // 2146
			_mm_extract_epi16(const __m128i  __A,
						const int  __N);  // 2147
		}
	}
	drmp3d_synth(float* xl,
			drmp3d_sample_t* dstl,
			int nch,
			float* lins);  // 2240
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 2252
} /* size: 2014, variables: 1, inline expansions: 3 (1688 bytes) */

// <06D8E1D7> ../../thirdparty/dr_libs/dr_mp3.h:2256
// variables: 2
int drmp3d_match_frame(const drmp3_uint8* hdr, int mp3_bytes, int frame_bytes)
{
	int i; // 2258
	int nmatch; // 2258
} /* size: 0, variables: 2 */

// <06D8E143> ../../thirdparty/dr_libs/dr_mp3.h:2270
// variables: 6
int drmp3d_find_frame(const drmp3_uint8* mp3, int mp3_bytes, int* free_format_bytes, int* ptr_frame_bytes)
{
	int i; // 2272
	int k; // 2272
	{
		int frame_bytes; // 2277
		int frame_and_padding; // 2278
		{
			int fb; // 2284
			int nextfb; // 2285
		}
	}
} /* size: 0, variables: 2 */

// <06D93569> ../../thirdparty/dr_libs/dr_mp3.h:2536
void* drmp3__malloc_default(size_t sz, void* pUserData)
{
} /* size: 9 */

// <06D8B92C> ../../thirdparty/dr_libs/dr_mp3.h:2542
void* drmp3__realloc_default(void* p, size_t sz, void* pUserData)
{
} /* size: 9 */

// <06D9351B> ../../thirdparty/dr_libs/dr_mp3.h:2548
void drmp3__free_default(void* p, void* pUserData)
{
} /* size: 9 */

// <06D8B8D9> ../../thirdparty/dr_libs/dr_mp3.h:2555
void* drmp3__malloc_from_callbacks(size_t sz, const drmp3_allocation_callbacks* pAllocationCallbacks)
{
} /* size: 0 */

// <06D8B794> ../../thirdparty/dr_libs/dr_mp3.h:2573
// variable: 1
// function call: 1
void* drmp3__realloc_from_callbacks(void* p, size_t szNew, size_t szOld, const drmp3_allocation_callbacks* pAllocationCallbacks)
{
	{
		void* p2; // 2585
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 2593
	}
} /* size: 139 */

// <06D8B76D> ../../thirdparty/dr_libs/dr_mp3.h:2603
void drmp3__free_from_callbacks(void* p, const drmp3_allocation_callbacks* pAllocationCallbacks)
{
} /* size: 0 */

// <06D8B73E> ../../thirdparty/dr_libs/dr_mp3.h:2615
// variable: 1
drmp3_allocation_callbacks drmp3_copy_allocation_callbacks_or_defaults(const drmp3_allocation_callbacks* pAllocationCallbacks)
{
	{
		drmp3_allocation_callbacks allocationCallbacks; // 2622
	}
} /* size: 0 */

// <06D8B6F7> ../../thirdparty/dr_libs/dr_mp3.h:2633
// variable: 1
size_t drmp3__on_read(drmp3* pMP3, void* pBufferOut, size_t bytesToRead)
{
	size_t bytesRead; // 2635
} /* size: 0, variables: 1 */

// <06D93678> ../../thirdparty/dr_libs/dr_mp3.h:2654
// variables: 2
// function calls: 6
size_t drmp3__on_read_clamped(drmp3* pMP3, void* pBufferOut, size_t bytesToRead)
{
	{
		drmp3_uint64 bytesRemaining; // 2662
		drmp3__on_read(drmp3* pMP3,
				void* pBufferOut,
				size_t bytesToRead);  // 2633
		drmp3__on_read(drmp3* pMP3,
				void* pBufferOut,
				size_t bytesToRead);  // 2669
	}
	drmp3__on_read(drmp3* pMP3,
			void* pBufferOut,
			size_t bytesToRead);  // 2633
	drmp3__on_read(drmp3* pMP3,
			void* pBufferOut,
			size_t bytesToRead);  // 2660
	{
		drmp3_uint64 bytesRemaining; // 2662
		drmp3__on_read(drmp3* pMP3,
				void* pBufferOut,
				size_t bytesToRead);  // 2669
	}
	drmp3__on_read_clamped(drmp3* pMP3,
				void* pBufferOut,
				size_t bytesToRead);  // 2654
} /* size: 113, inline expansions: 3 (72 bytes) */

// <06D8B6AE> ../../thirdparty/dr_libs/dr_mp3.h:2654
// variable: 1
size_t drmp3__on_read_clamped(drmp3* pMP3, void* pBufferOut, size_t bytesToRead)
{
	{
		drmp3_uint64 bytesRemaining; // 2662
	}
} /* size: 0 */

// <06D8B674> ../../thirdparty/dr_libs/dr_mp3.h:2673
drmp3_bool32 drmp3__on_seek(drmp3* pMP3, int offset, drmp3_seek_origin origin)
{
} /* size: 0 */

// <06D938EB> ../../thirdparty/dr_libs/dr_mp3.h:2691
// function calls: 6
drmp3_bool32 drmp3__on_seek_64(drmp3* pMP3, drmp3_uint64 offset, drmp3_seek_origin origin)
{
	drmp3__on_seek(drmp3* pMP3,
			int offset,
			drmp3_seek_origin origin);  // 2673
	drmp3__on_seek(drmp3* pMP3,
			int offset,
			drmp3_seek_origin origin);  // 2698
	drmp3__on_seek(drmp3* pMP3,
			int offset,
			drmp3_seek_origin origin);  // 2673
	drmp3__on_seek(drmp3* pMP3,
			int offset,
			drmp3_seek_origin origin);  // 2710
	drmp3__on_seek(drmp3* pMP3,
			int offset,
			drmp3_seek_origin origin);  // 2673
	drmp3__on_seek(drmp3* pMP3,
			int offset,
			drmp3_seek_origin origin);  // 2705
} /* size: 178, inline expansions: 6 (134 bytes) */

// <06D8B63A> ../../thirdparty/dr_libs/dr_mp3.h:2691
drmp3_bool32 drmp3__on_seek_64(drmp3* pMP3, drmp3_uint64 offset, drmp3_seek_origin origin)
{
} /* size: 0 */

// <06D935B7> ../../thirdparty/dr_libs/dr_mp3.h:2720
// variable: 1
// function call: 1
void drmp3__on_meta(drmp3* pMP3, drmp3_metadata_type type, const void* pRawData, size_t rawDataSize)
{
	{
		drmp3_metadata metadata; // 2723
		memset(void* __dest,
			int __ch,
			size_t __len);  // 2725
	}
} /* size: 86 */

// <06D8B5D8> ../../thirdparty/dr_libs/dr_mp3.h:2720
// variable: 1
void drmp3__on_meta(drmp3* pMP3, drmp3_metadata_type type, const void* pRawData, size_t rawDataSize)
{
	{
		drmp3_metadata metadata; // 2723
	}
} /* size: 0 */

// <06D8B51B> ../../thirdparty/dr_libs/dr_mp3.h:2735
// variables: 8
drmp3_uint32 drmp3_decode_next_frame_ex__callbacks(drmp3* pMP3, drmp3d_sample_t* pPCMFrames, drmp3dec_frame_info* pMP3FrameInfo, const drmp3_uint8 ** ppMP3FrameData)
{
	drmp3_uint32 pcmFramesRead; // 2737
	{
		drmp3dec_frame_info info; // 2747
		{
			size_t bytesRead; // 2751
			{
				drmp3_uint8* pNewData; // 2761
				size_t newDataCap; // 2762
			}
		}
		{
			size_t bytesRead; // 2824
			{
				drmp3_uint8* pNewData; // 2832
				size_t newDataCap; // 2833
			}
		}
	}
} /* size: 0, variables: 1 */

// <06D8B4BA> ../../thirdparty/dr_libs/dr_mp3.h:2860
// variables: 2
drmp3_uint32 drmp3_decode_next_frame_ex__memory(drmp3* pMP3, drmp3d_sample_t* pPCMFrames, drmp3dec_frame_info* pMP3FrameInfo, const drmp3_uint8 ** ppMP3FrameData)
{
	drmp3_uint32 pcmFramesRead; // 2862
	drmp3dec_frame_info info; // 2863
} /* size: 0, variables: 2 */

// <06D8B115> ../../thirdparty/dr_libs/dr_mp3.h:2907
// variables: 7
// function calls: 6
drmp3_uint32 drmp3_decode_next_frame_ex(drmp3* pMP3, drmp3d_sample_t* pPCMFrames, drmp3dec_frame_info* pMP3FrameInfo, const drmp3_uint8 ** ppMP3FrameData)
{
	drmp3_hdr_frame_samples(const drmp3_uint8* h); // 2875
	drmp3_decode_next_frame_ex__memory(drmp3* pMP3,
						drmp3d_sample_t* pPCMFrames,
						drmp3dec_frame_info* pMP3FrameInfo,
						const drmp3_uint8 ** ppMP3FrameData);  // 2910
	{
		drmp3dec_frame_info info; // 2747
		{
			size_t bytesRead; // 2751
			{
				drmp3_uint8* pNewData; // 2761
				size_t newDataCap; // 2762
			}
			memmove(void* __dest,
				const void* __src,
				size_t __len);  // 2755
		}
		{
			size_t bytesRead; // 2824
			memmove(void* __dest,
				const void* __src,
				size_t __len);  // 2827
			{
				drmp3_uint8* pNewData; // 2832
				size_t newDataCap; // 2833
			}
		}
		drmp3_hdr_frame_samples(const drmp3_uint8* h); // 2807
	}
	drmp3_decode_next_frame_ex__callbacks(drmp3* pMP3,
						drmp3d_sample_t* pPCMFrames,
						drmp3dec_frame_info* pMP3FrameInfo,
						const drmp3_uint8 ** ppMP3FrameData);  // 2912
} /* size: 1003, inline expansions: 3 (928 bytes) */

// <06D8B0F5> ../../thirdparty/dr_libs/dr_mp3.h:2916
drmp3_uint32 drmp3_decode_next_frame(drmp3* pMP3)
{
} /* size: 0 */

// <06D8A6AA> ../../thirdparty/dr_libs/dr_mp3.h:2943
// variables: 31
// function calls: 13
drmp3_bool32 drmp3_init_internal(drmp3* pMP3, drmp3_read_proc onRead, drmp3_seek_proc onSeek, drmp3_tell_proc onTell, drmp3_meta_proc onMeta, void* pUserData, void* pUserDataMeta, const drmp3_allocation_callbacks* pAllocationCallbacks)
{
	drmp3dec_frame_info firstFrameInfo; // 2945
	const drmp3_uint8* pFirstFrameData; // 2946
	drmp3_uint32 firstFramePCMFrameCount; // 2947
	drmp3_uint32 detectedMP3FrameCount; // 2948
	{
		drmp3_int64 streamLen; // 2978
		int streamEndOffset; // 2979
		{
			char id3; // 2985
			{
				drmp3_uint8 tag; // 2994
			}
		}
		{
			char ape; // 3013
			{
				drmp3_uint32 tagSize; // 3017
				{
					size_t apeTagSize; // 3031
					drmp3_uint8* pTagData; // 3032
				}
			}
		}
	}
	{
		char header; // 3079
		{
			drmp3_uint32 tagSize; // 3082
			{
				size_t tagSizeWithHeader; // 3095
				drmp3_uint8* pTagData; // 3096
				memcpy(void* __dest,
					const void* __src,
					size_t __len);  // 3098
				drmp3__free_from_callbacks(void* p,
								const drmp3_allocation_callbacks* pAllocationCallbacks);  // 2603
				drmp3__free_from_callbacks(void* p,
								const drmp3_allocation_callbacks* pAllocationCallbacks);  // 4985
				drmp3__free_default(void* p,
							void* pUserData);  // 4987
				drmp3_free(void* p,
						const drmp3_allocation_callbacks* pAllocationCallbacks);  // 3104
			}
			{
				char discard; // 3114
				{
					size_t bytesToRead; // 3117
				}
			}
		}
	}
	{
		drmp3_bs bs; // 3173
		drmp3_L3_gr_info grInfo; // 3174
		{
			drmp3_bool32 isXing; // 3183
			drmp3_bool32 isInfo; // 3184
			const drmp3_uint8* pTagData; // 3185
			const drmp3_uint8* pTagDataBeg; // 3186
			{
				drmp3_uint32 bytes; // 3196
				drmp3_uint32 flags; // 3197
				{
					int delayInPCMFrames; // 3226
					int paddingInPCMFrames; // 3227
				}
				{
					drmp3_metadata_type metadataType; // 3253
					size_t tagDataSize; // 3254
					{
						drmp3_metadata metadata; // 2723
						memset(void* __dest,
							int __ch,
							size_t __len);  // 2725
					}
					drmp3__on_meta(drmp3* pMP3,
							drmp3_metadata_type type,
							const void* pRawData,
							size_t rawDataSize);  // 3259
				}
				drmp3dec_init(drmp3dec* dec); // 3274
			}
		}
		drmp3_bs_init(drmp3_bs* bs,
				const drmp3_uint8* data,
				int bytes);  // 3176
	}
	drmp3dec_init(drmp3dec* dec); // 2954
	drmp3_copy_allocation_callbacks_or_defaults(const drmp3_allocation_callbacks* pAllocationCallbacks); // 2961
	drmp3__free_from_callbacks(void* p,
					const drmp3_allocation_callbacks* pAllocationCallbacks);  // 2603
	drmp3__free_from_callbacks(void* p,
					const drmp3_allocation_callbacks* pAllocationCallbacks);  // 3283
} /* size: 2535, variables: 4, inline expansions: 4 (92 bytes) */

// <06D8A550> ../../thirdparty/dr_libs/dr_mp3.h:3308
// variables: 2
// function call: 1
size_t drmp3__on_read_memory(void* pUserData, void* pBufferOut, size_t bytesToRead)
{
	drmp3* pMP3; // 3310
	size_t bytesRemaining; // 3311
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 3322
} /* size: 99, variables: 2, inline expansions: 1 (12 bytes) */

// <06D8A4C7> ../../thirdparty/dr_libs/dr_mp3.h:3329
// variables: 2
drmp3_bool32 drmp3__on_seek_memory(void* pUserData, int byteOffset, drmp3_seek_origin origin)
{
	drmp3* pMP3; // 3331
	drmp3_int64 newCursor; // 3332
} /* size: 97, variables: 2 */

// <06D8A46E> ../../thirdparty/dr_libs/dr_mp3.h:3361
// variable: 1
drmp3_bool32 drmp3__on_tell_memory(void* pUserData, drmp3_int64* pCursor)
{
	drmp3* pMP3; // 3363
} /* size: 20, variables: 1 */

// <06D8A3FF> ../../thirdparty/dr_libs/dr_mp3.h:3372
// variable: 1
drmp3_bool32 drmp3_init_memory_with_metadata(drmp3* pMP3, const void* pData, size_t dataSize, drmp3_meta_proc onMeta, void* pUserDataMeta, const drmp3_allocation_callbacks* pAllocationCallbacks)
{
	drmp3_bool32 result; // 3374
} /* size: 0, variables: 1 */

// <06D8A346> ../../thirdparty/dr_libs/dr_mp3.h:4147
// variables: 2
void drmp3_s16_to_f32(float* dst, const drmp3_int16* src, drmp3_uint64 sampleCount)
{
	drmp3_uint64 i; // 4149
	{
		float x; // 4151
	}
} /* size: 0, variables: 1 */

// <06D8A1AB> ../../thirdparty/dr_libs/dr_mp3.h:4159
// variables: 6
// function calls: 2
drmp3_uint64 drmp3_read_pcm_frames_raw(drmp3* pMP3, drmp3_uint64 framesToRead, void* pBufferOut)
{
	drmp3_uint64 totalFramesRead; // 4161
	{
		drmp3_uint32 framesToConsume; // 4167
		{
			drmp3_uint32 framesToSkip; // 4171
		}
		{
			drmp3_uint64 framesRemainigToPadding; // 4183
		}
		{
			drmp3_int16* pFramesOutS16; // 4204
			drmp3_int16* pFramesInS16; // 4205
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 4206
		}
		drmp3_decode_next_frame(drmp3* pMP3); // 4229
	}
} /* size: 383, variables: 1 */

// <06D8A11A> ../../thirdparty/dr_libs/dr_mp3.h:4238
// variables: 5
drmp3_uint64 drmp3_read_pcm_frames_f32(drmp3* pMP3, drmp3_uint64 framesToRead, float* pBufferOut)
{
	{
		drmp3_int16 pTempS16; // 4250
		drmp3_uint64 totalPCMFramesRead; // 4251
		{
			drmp3_uint64 framesJustRead; // 4254
			drmp3_uint64 framesRemaining; // 4255
			drmp3_uint64 framesToReadNow; // 4256
		}
	}
} /* size: 0 */

// <06D8A0C3> ../../thirdparty/dr_libs/dr_mp3.h:4312
void drmp3_reset(drmp3* pMP3)
{
} /* size: 0 */

// <06D93B1C> ../../thirdparty/dr_libs/dr_mp3.h:4324
// function calls: 6
drmp3_bool32 drmp3_seek_to_start_of_stream(drmp3* pMP3)
{
	drmp3__on_seek(drmp3* pMP3,
			int offset,
			drmp3_seek_origin origin);  // 2673
	drmp3__on_seek(drmp3* pMP3,
			int offset,
			drmp3_seek_origin origin);  // 2694
	drmp3__on_seek_64(drmp3* pMP3,
				drmp3_uint64 offset,
				drmp3_seek_origin origin);  // 4330
	drmp3dec_init(drmp3dec* dec); // 4321
	drmp3_reset(drmp3* pMP3); // 4335
	drmp3_seek_to_start_of_stream(drmp3* pMP3); // 4324
} /* size: 148, inline expansions: 6 (218 bytes) */

// <06D8A0A3> ../../thirdparty/dr_libs/dr_mp3.h:4324
drmp3_bool32 drmp3_seek_to_start_of_stream(drmp3* pMP3)
{
} /* size: 0 */

// <06D8A069> ../../thirdparty/dr_libs/dr_mp3.h:4340
// variable: 1
drmp3_bool32 drmp3_seek_forward_by_pcm_frames__brute_force(drmp3* pMP3, drmp3_uint64 frameOffset)
{
	drmp3_uint64 framesRead; // 4342
} /* size: 0, variables: 1 */

// <06D8A03C> ../../thirdparty/dr_libs/dr_mp3.h:4361
drmp3_bool32 drmp3_seek_to_pcm_frame__brute_force(drmp3* pMP3, drmp3_uint64 frameIndex)
{
} /* size: 0 */

// <06D89FF5> ../../thirdparty/dr_libs/dr_mp3.h:4384
// variable: 1
drmp3_bool32 drmp3_find_closest_seek_point(drmp3* pMP3, drmp3_uint64 frameIndex, drmp3_uint32* pSeekPointIndex)
{
	drmp3_uint32 iSeekPoint; // 4386
} /* size: 0, variables: 1 */

// <06D89F72> ../../thirdparty/dr_libs/dr_mp3.h:4408
// variables: 6
drmp3_bool32 drmp3_seek_to_pcm_frame__seek_table(drmp3* pMP3, drmp3_uint64 frameIndex)
{
	drmp3_seek_point seekPoint; // 4410
	drmp3_uint32 priorSeekPointIndex; // 4411
	drmp3_uint16 iMP3Frame; // 4412
	drmp3_uint64 leftoverFrames; // 4413
	{
		drmp3_uint32 pcmFramesRead; // 4439
		drmp3d_sample_t* pPCMFrames; // 4440
	}
} /* size: 0, variables: 4 */

// <06D89E12> ../../thirdparty/dr_libs/dr_mp3.h:4484
// variables: 4
drmp3_bool32 drmp3_get_mp3_and_pcm_frame_count(drmp3* pMP3, drmp3_uint64* pMP3FrameCount, drmp3_uint64* pPCMFrameCount)
{
	drmp3_uint64 currentPCMFrame; // 4486
	drmp3_uint64 totalPCMFrameCount; // 4487
	drmp3_uint64 totalMP3FrameCount; // 4488
	{
		drmp3_uint32 pcmFramesInCurrentMP3Frame; // 4515
	}
} /* size: 189, variables: 3 */

// <06D89D9B> ../../thirdparty/dr_libs/dr_mp3.h:4545
// variable: 1
drmp3_uint64 drmp3_get_pcm_frame_count(drmp3* pMP3)
{
	drmp3_uint64 totalPCMFrameCount; // 4547
} /* size: 139, variables: 1 */

// <06D89D1C> ../../thirdparty/dr_libs/dr_mp3.h:4579
// variable: 1
drmp3_uint64 drmp3_get_mp3_frame_count(drmp3* pMP3)
{
	drmp3_uint64 totalMP3FrameCount; // 4581
} /* size: 0, variables: 1 */

// <06D89CB2> ../../thirdparty/dr_libs/dr_mp3.h:4589
// variables: 3
void drmp3__accumulate_running_pcm_frame_count(drmp3* pMP3, drmp3_uint32 pcmFrameCountIn, drmp3_uint64* pRunningPCMFrameCount, float* pRunningPCMFrameCountFractionalPart)
{
	float srcRatio; // 4591
	float pcmFrameCountOutF; // 4592
	drmp3_uint32 pcmFrameCountOut; // 4593
} /* size: 0, variables: 3 */

// <06D87810> ../../thirdparty/dr_libs/dr_mp3.h:4605
// member variables: 2
// struct size: 16
typedef struct {
	drmp3_uint64 bytePos; /* 0 8 */
	drmp3_uint64 pcmFrameIndex; /* 8 8 */
} drmp3__seeking_mp3_frame_info;

// <06D89940> ../../thirdparty/dr_libs/dr_mp3.h:4610
// variables: 14
// function calls: 2
drmp3_bool32 drmp3_calculate_seek_points(drmp3* pMP3, drmp3_uint32* pSeekPointCount, drmp3_seek_point* pSeekPoints)
{
	drmp3_uint32 seekPointCount; // 4612
	drmp3_uint64 currentPCMFrame; // 4613
	drmp3_uint64 totalMP3FrameCount; // 4614
	drmp3_uint64 totalPCMFrameCount; // 4615
	{
		drmp3_uint64 pcmFramesBetweenSeekPoints; // 4642
		drmp3__seeking_mp3_frame_info mp3FrameInfo; // 4643
		drmp3_uint64 runningPCMFrameCount; // 4644
		float runningPCMFrameCountFractionalPart; // 4645
		drmp3_uint64 nextTargetPCMFrame; // 4646
		drmp3_uint32 iMP3Frame; // 4647
		drmp3_uint32 iSeekPoint; // 4648
		{
			drmp3_uint32 pcmFramesInCurrentMP3FrameIn; // 4671
			drmp3__accumulate_running_pcm_frame_count(drmp3* pMP3,
									drmp3_uint32 pcmFrameCountIn,
									drmp3_uint64* pRunningPCMFrameCount,
									float* pRunningPCMFrameCountFractionalPart);  // 4684
		}
		{
			size_t i; // 4704
			drmp3_uint32 pcmFramesInCurrentMP3FrameIn; // 4705
			drmp3__accumulate_running_pcm_frame_count(drmp3* pMP3,
									drmp3_uint32 pcmFrameCountIn,
									drmp3_uint64* pRunningPCMFrameCount,
									float* pRunningPCMFrameCountFractionalPart);  // 4732
		}
	}
} /* size: 0, variables: 4 */

// <06D898EB> ../../thirdparty/dr_libs/dr_mp3.h:4750
drmp3_bool32 drmp3_bind_seek_table(drmp3* pMP3, drmp3_uint32 seekPointCount, drmp3_seek_point* pSeekPoints)
{
} /* size: 0 */

// <06D8954D> ../../thirdparty/dr_libs/dr_mp3.h:4770
// variables: 10
// function calls: 8
float* drmp3__full_read_and_close_f32(drmp3* pMP3, drmp3_config* pConfig, drmp3_uint64* pTotalFrameCount)
{
	drmp3_uint64 totalFramesRead; // 4772
	drmp3_uint64 framesCapacity; // 4773
	float* pFrames; // 4774
	float temp; // 4775
	{
		drmp3_uint64 framesToReadRightNow; // 4780
		drmp3_uint64 framesJustRead; // 4781
		{
			drmp3_uint64 oldFramesBufferSize; // 4788
			drmp3_uint64 newFramesBufferSize; // 4789
			drmp3_uint64 newFramesCap; // 4790
			float* pNewFrames; // 4791
			drmp3__free_from_callbacks(void* p,
							const drmp3_allocation_callbacks* pAllocationCallbacks);  // 2603
			drmp3__free_from_callbacks(void* p,
							const drmp3_allocation_callbacks* pAllocationCallbacks);  // 4806
		}
		drmp3_read_pcm_frames_f32(drmp3* pMP3,
						drmp3_uint64 framesToRead,
						float* pBufferOut);  // 4781
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 4816
	}
	drmp3__free_from_callbacks(void* p,
					const drmp3_allocation_callbacks* pAllocationCallbacks);  // 2603
	drmp3__free_from_callbacks(void* p,
					const drmp3_allocation_callbacks* pAllocationCallbacks);  // 4098
	drmp3_uninit(drmp3* pMP3); // 4082
	drmp3_uninit(drmp3* pMP3); // 4830
} /* size: 0, variables: 4, inline expansions: 4 (0 bytes) */

// <06D891A3> ../../thirdparty/dr_libs/dr_mp3.h:4839
// variables: 10
// function calls: 8
drmp3_int16* drmp3__full_read_and_close_s16(drmp3* pMP3, drmp3_config* pConfig, drmp3_uint64* pTotalFrameCount)
{
	drmp3_uint64 totalFramesRead; // 4841
	drmp3_uint64 framesCapacity; // 4842
	drmp3_int16* pFrames; // 4843
	drmp3_int16 temp; // 4844
	{
		drmp3_uint64 framesToReadRightNow; // 4849
		drmp3_uint64 framesJustRead; // 4850
		{
			drmp3_uint64 newFramesBufferSize; // 4857
			drmp3_uint64 oldFramesBufferSize; // 4858
			drmp3_uint64 newFramesCap; // 4859
			drmp3_int16* pNewFrames; // 4860
			drmp3__free_from_callbacks(void* p,
							const drmp3_allocation_callbacks* pAllocationCallbacks);  // 2603
			drmp3__free_from_callbacks(void* p,
							const drmp3_allocation_callbacks* pAllocationCallbacks);  // 4875
		}
		drmp3_read_pcm_frames_s16(drmp3* pMP3,
						drmp3_uint64 framesToRead,
						drmp3_int16* pBufferOut);  // 4850
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 4885
	}
	drmp3__free_from_callbacks(void* p,
					const drmp3_allocation_callbacks* pAllocationCallbacks);  // 2603
	drmp3__free_from_callbacks(void* p,
					const drmp3_allocation_callbacks* pAllocationCallbacks);  // 4098
	drmp3_uninit(drmp3* pMP3); // 4082
	drmp3_uninit(drmp3* pMP3); // 4899
} /* size: 0, variables: 4, inline expansions: 4 (0 bytes) */

// <06D88F11> ../../thirdparty/dr_libs/dr_mp3.h:4909
// variable: 1
// function calls: 3
float* drmp3_open_and_read_pcm_frames_f32(drmp3_read_proc onRead, drmp3_seek_proc onSeek, drmp3_tell_proc onTell, void* pUserData, drmp3_config* pConfig, drmp3_uint64* pTotalFrameCount, const drmp3_allocation_callbacks* pAllocationCallbacks)
{
	drmp3 mp3; // 4911
	memset(void* __dest,
		int __ch,
		size_t __len);  // 3303
	drmp3_init(drmp3* pMP3,
			drmp3_read_proc onRead,
			drmp3_seek_proc onSeek,
			drmp3_tell_proc onTell,
			drmp3_meta_proc onMeta,
			void* pUserData,
			const drmp3_allocation_callbacks* pAllocationCallbacks);  // 3297
	drmp3_init(drmp3* pMP3,
			drmp3_read_proc onRead,
			drmp3_seek_proc onSeek,
			drmp3_tell_proc onTell,
			drmp3_meta_proc onMeta,
			void* pUserData,
			const drmp3_allocation_callbacks* pAllocationCallbacks);  // 4912
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <06D88C7F> ../../thirdparty/dr_libs/dr_mp3.h:4919
// variable: 1
// function calls: 3
drmp3_int16* drmp3_open_and_read_pcm_frames_s16(drmp3_read_proc onRead, drmp3_seek_proc onSeek, drmp3_tell_proc onTell, void* pUserData, drmp3_config* pConfig, drmp3_uint64* pTotalFrameCount, const drmp3_allocation_callbacks* pAllocationCallbacks)
{
	drmp3 mp3; // 4921
	memset(void* __dest,
		int __ch,
		size_t __len);  // 3303
	drmp3_init(drmp3* pMP3,
			drmp3_read_proc onRead,
			drmp3_seek_proc onSeek,
			drmp3_tell_proc onTell,
			drmp3_meta_proc onMeta,
			void* pUserData,
			const drmp3_allocation_callbacks* pAllocationCallbacks);  // 3297
	drmp3_init(drmp3* pMP3,
			drmp3_read_proc onRead,
			drmp3_seek_proc onSeek,
			drmp3_tell_proc onTell,
			drmp3_meta_proc onMeta,
			void* pUserData,
			const drmp3_allocation_callbacks* pAllocationCallbacks);  // 4922
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <06D88A34> ../../thirdparty/dr_libs/dr_mp3.h:4930
// variable: 1
// function calls: 3
float* drmp3_open_memory_and_read_pcm_frames_f32(const void* pData, size_t dataSize, drmp3_config* pConfig, drmp3_uint64* pTotalFrameCount, const drmp3_allocation_callbacks* pAllocationCallbacks)
{
	drmp3 mp3; // 4932
	memset(void* __dest,
		int __ch,
		size_t __len);  // 3380
	drmp3_init_memory_with_metadata(drmp3* pMP3,
					const void* pData,
					size_t dataSize,
					drmp3_meta_proc onMeta,
					void* pUserDataMeta,
					const drmp3_allocation_callbacks* pAllocationCallbacks);  // 3409
	drmp3_init_memory(drmp3* pMP3,
				const void* pData,
				size_t dataSize,
				const drmp3_allocation_callbacks* pAllocationCallbacks);  // 4933
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <06D887D7> ../../thirdparty/dr_libs/dr_mp3.h:4940
// variable: 1
// function calls: 3
drmp3_int16* drmp3_open_memory_and_read_pcm_frames_s16(const void* pData, size_t dataSize, drmp3_config* pConfig, drmp3_uint64* pTotalFrameCount, const drmp3_allocation_callbacks* pAllocationCallbacks)
{
	drmp3 mp3; // 4942
	memset(void* __dest,
		int __ch,
		size_t __len);  // 3380
	drmp3_init_memory_with_metadata(drmp3* pMP3,
					const void* pData,
					size_t dataSize,
					drmp3_meta_proc onMeta,
					void* pUserDataMeta,
					const drmp3_allocation_callbacks* pAllocationCallbacks);  // 3409
	drmp3_init_memory(drmp3* pMP3,
				const void* pData,
				size_t dataSize,
				const drmp3_allocation_callbacks* pAllocationCallbacks);  // 4943
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <06D886CE> ../../thirdparty/dr_libs/dr_mp3.h:4973
// function calls: 2
void* drmp3_malloc(size_t sz, const drmp3_allocation_callbacks* pAllocationCallbacks)
{
	drmp3__malloc_from_callbacks(size_t sz,
					const drmp3_allocation_callbacks* pAllocationCallbacks);  // 4976
	drmp3__malloc_default(size_t sz,
				void* pUserData);  // 4978
} /* size: 67, inline expansions: 2 (55 bytes) */

// <06D886A0> ../../thirdparty/dr_libs/dr_mp3.h:4982
void drmp3_free(void* p, const drmp3_allocation_callbacks* pAllocationCallbacks)
{
} /* size: 0 */

