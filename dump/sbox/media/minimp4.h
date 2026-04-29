
//
// sbox/media/minimp4.h
//
//	referenced by: libengine2.so
//
//	functions: 68
//	structs: 12
//

// <02042354> sbox/media/minimp4.h:142
// member variables: 6
// struct size: 28
typedef struct {
	/* sbox/media/minimp4.h:157 */
	typedef union {
		struct {
			unsigned int channelcount; /* 0 4 */
		} a; /* 0 4 */
		struct {
			int width; /* 0 4 */
			int height; /* 4 4 */
		} v; /* 0 8 */
	} MP4E_track_t;
	unsigned int object_type_indication; /* 0 4 */
	unsigned char language[4]; /* 4 4 */
	track_media_kind_t track_media_kind; /* 8 4 */
	unsigned int time_scale; /* 12 4 */
	unsigned int default_duration; /* 16 4 */
	union {
		struct {
			unsigned int channelcount; /* 20 4 */
		} a; /* 20 4 */
		struct {
			int width; /* 20 4 */
			int height; /* 24 4 */
		} v; /* 20 8 */
	} u; /* 20 8 */
} MP4E_track_t;

// <02042469> sbox/media/minimp4.h:176
// member variables: 23
// struct size: 144
typedef struct {
	/* sbox/media/minimp4.h:249 */
	typedef union {
		struct {
			unsigned int channelcount; /* 0 4 */
			unsigned int samplerate_hz; /* 4 4 */
		} audio; /* 0 8 */
		struct {
			unsigned int width; /* 0 4 */
			unsigned int height; /* 4 4 */
		} video; /* 0 8 */
	} MP4D_track_t;
	unsigned int sample_count; /* 0 4 */
	unsigned char * dsi; /* 8 8 */
	unsigned int dsi_bytes; /* 16 4 */
	unsigned int object_type_indication; /* 20 4 */
	unsigned int handler_type; /* 24 4 */
	unsigned int duration_hi; /* 28 4 */
	unsigned int duration_lo; /* 32 4 */
	unsigned int timescale; /* 36 4 */
	unsigned int avg_bitrate_bps; /* 40 4 */
	unsigned char language[4]; /* 44 4 */
	unsigned int stream_type; /* 48 4 */
	union {
		struct {
			unsigned int channelcount; /* 52 4 */
			unsigned int samplerate_hz; /* 56 4 */
		} audio; /* 52 8 */
		struct {
			unsigned int width; /* 52 4 */
			unsigned int height; /* 56 4 */
		} video; /* 52 8 */
	} SampleDescription; /* 52 8 */
	unsigned int * entry_size; /* 64 8 */
	unsigned int sample_to_chunk_count; /* 72 4 */
	MP4D_sample_to_chunk_t_tag * sample_to_chunk; /* 80 8 */
	unsigned int chunk_count; /* 88 4 */
	MP4D_file_offset_t * chunk_offset; /* 96 8 */
	unsigned int * timestamp; /* 104 8 */
	unsigned int * duration; /* 112 8 */
	unsigned int timestamp_count; /* 120 4 */
	unsigned int ctts_count; /* 124 4 */
	unsigned int * ctts_sample_count; /* 128 8 */
	int * ctts_offset; /* 136 8 */
} MP4D_track_t;

// <02042674> sbox/media/minimp4.h:290
// member function: 1
// member variables: 10
// struct size: 104
struct MP4D_demux_tag {
	/* sbox/media/minimp4.h:317 */
	struct {
		unsigned char * title; /* 0 8 */
		unsigned char * artist; /* 8 8 */
		unsigned char * album; /* 16 8 */
		unsigned char * year; /* 24 8 */
		unsigned char * comment; /* 32 8 */
		unsigned char * genre; /* 40 8 */
	};
	int64_t read_pos; /* 0 8 */
	int64_t read_size; /* 8 8 */
	MP4D_track_t * track; /* 16 8 */
	int (*read_callback)(int64_t, void* , size_t, void* ); /* 24 8* /
	void * token; /* 32 8 */
	unsigned int track_count; /* 40 4 */
	unsigned int duration_hi; /* 44 4 */
	unsigned int duration_lo; /* 48 4 */
	unsigned int timescale; /* 52 4 */
	struct {
		unsigned char * title; /* 56 8 */
		unsigned char * artist; /* 64 8 */
		unsigned char * album; /* 72 8 */
		unsigned char * year; /* 80 8 */
		unsigned char * comment; /* 88 8 */
		unsigned char * genre; /* 96 8 */
	} tag; /* 56 48 */
};

// <0204243A> sbox/media/minimp4.h:329
// member variables: 2
// struct size: 8
struct MP4D_sample_to_chunk_t_tag {
	unsigned int first_chunk; /* 0 4 */
	unsigned int samples_per_chunk; /* 4 4 */
};

// <020427CA> sbox/media/minimp4.h:336
// member variables: 6
// struct size: 4,608
typedef struct {
	void * sps_cache[32]; /* 0 256 */
	void * pps_cache[256]; /* 256 2048 */
	int sps_bytes[32]; /* 2304 128 */
	int pps_bytes[256]; /* 2432 1024 */
	int map_sps[32]; /* 3456 128 */
	int map_pps[256]; /* 3584 1024 */
} h264_sps_id_patcher_t;

// <0204287D> sbox/media/minimp4.h:347
// member variables: 8
// struct size: 4,640
struct mp4_h26x_writer_tag {
	h264_sps_id_patcher_t sps_patcher; /* 0 4608 */
	MP4E_mux_t * mux; /* 4608 8 */
	int mux_track_id; /* 4616 4 */
	int is_hevc; /* 4620 4 */
	int need_vps; /* 4624 4 */
	int need_sps; /* 4628 4 */
	int need_pps; /* 4632 4 */
	int need_idr; /* 4636 4 */
};

// <02042E01> sbox/media/minimp4.h:686
// member variables: 4
// struct size: 24
typedef struct {
	boxsize_t size; /* 0 8 */
	boxsize_t offset; /* 8 8 */
	unsigned int duration; /* 16 4 */
	unsigned int flag_random_access; /* 20 4 */
} sample_t;

// <02042E62> sbox/media/minimp4.h:693
// member variables: 3
// struct size: 16
typedef struct {
	unsigned char * data; /* 0 8 */
	int bytes; /* 8 4 */
	int capacity; /* 12 4 */
} minimp4_vector_t;

// <02042EAE> sbox/media/minimp4.h:700
// member variables: 6
// struct size: 112
typedef struct {
	MP4E_track_t info; /* 0 28 */
	minimp4_vector_t smpl; /* 32 16 */
	minimp4_vector_t pending_sample; /* 48 16 */
	minimp4_vector_t vsps; /* 64 16 */
	minimp4_vector_t vpps; /* 80 16 */
	minimp4_vector_t vvps; /* 96 16 */
} track_t;

// <02042293> sbox/media/minimp4.h:711
// member function: 1
// member variables: 8
// struct size: 64
struct MP4E_mux_tag {
	minimp4_vector_t tracks; /* 0 16 */
	int64_t write_pos; /* 16 8 */
	int (*write_callback)(int64_t, const void* , size_t, void* ); /* 24 8* /
	void * token; /* 32 8 */
	char * text_comment; /* 40 8 */
	int sequential_mode_flag; /* 48 4 */
	int enable_fragmentation; /* 52 4 */
	int fragments_count; /* 56 4 */
};

// <0204BFA4> sbox/media/minimp4.h:764
int minimp4_vector_init(minimp4_vector_t* h, int capacity)
{
} /* size: 0 */

// <0204BF8A> sbox/media/minimp4.h:775
void minimp4_vector_reset(minimp4_vector_t* h)
{
} /* size: 0 */

// <0204BF47> sbox/media/minimp4.h:785
// variables: 2
int minimp4_vector_grow(minimp4_vector_t* h, int bytes)
{
	void* p; // 787
	int new_size; // 788
} /* size: 0, variables: 2 */

// <0204BE1A> sbox/media/minimp4.h:804
// variable: 1
// function calls: 2
unsigned char* minimp4_vector_alloc_tail(minimp4_vector_t* h, int bytes)
{
	unsigned char* p; // 806
	minimp4_vector_grow(minimp4_vector_t* h,
				int bytes);  // 809
	minimp4_vector_init(minimp4_vector_t* h,
				int capacity);  // 807
} /* size: 185, variables: 1, inline expansions: 2 (114 bytes) */

// <0204BDD5> sbox/media/minimp4.h:821
// variable: 1
unsigned char* minimp4_vector_put(minimp4_vector_t* h, const void* buf, int bytes)
{
	unsigned char* tail; // 823
} /* size: 0, variables: 1 */

// <0204BC64> sbox/media/minimp4.h:833
// variable: 1
// function call: 1
MP4E_mux_t* MP4E_open(int sequential_mode_flag, int enable_fragmentation, void* token, int (*write_callback)(int64_t, const void *, size_t, void *))
{
	MP4E_mux_t* mux; // 838
	minimp4_vector_init(minimp4_vector_t* h,
				int capacity);  // 858
} /* size: 228, variables: 1, inline expansions: 1 (24 bytes) */

// <0204BA31> sbox/media/minimp4.h:865
// variables: 2
// function calls: 6
int MP4E_add_track(MP4E_mux_t* mux, const MP4E_track_t* track_data)
{
	track_t* tr; // 867
	int ntr; // 868
	memset(void* __dest,
		int __ch,
		size_t __len);  // 876
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 877
	minimp4_vector_init(minimp4_vector_t* h,
				int capacity);  // 878
	minimp4_vector_init(minimp4_vector_t* h,
				int capacity);  // 880
	minimp4_vector_init(minimp4_vector_t* h,
				int capacity);  // 881
	minimp4_vector_init(minimp4_vector_t* h,
				int capacity);  // 882
} /* size: 238, variables: 2, inline expansions: 6 (120 bytes) */

// <0204B7C2> sbox/media/minimp4.h:886
// variables: 4
// function calls: 4
int append_mem(minimp4_vector_t* v, const void* mem, int bytes)
{
	int i; // 888
	unsigned char size; // 889
	const unsigned char* p; // 890
	{
		int cb; // 893
	}
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 825
	minimp4_vector_put(minimp4_vector_t* h,
				const void* buf,
				int bytes);  // 900
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 825
	minimp4_vector_put(minimp4_vector_t* h,
				const void* buf,
				int bytes);  // 900
} /* size: 249, variables: 3, inline expansions: 4 (79 bytes) */

// <0204B76D> sbox/media/minimp4.h:903
// variables: 4
int items_count(minimp4_vector_t* v)
{
	int i; // 905
	int count; // 905
	const unsigned char* p; // 906
	{
		int cb; // 909
	}
} /* size: 0, variables: 3 */

// <0204B6C1> sbox/media/minimp4.h:916
// variable: 1
int MP4E_set_dsi(MP4E_mux_t* mux, int track_id, const void* dsi, int bytes)
{
	track_t* tr; // 920
} /* size: 135, variables: 1 */

// <0204B66C> sbox/media/minimp4.h:928
// variable: 1
int MP4E_set_vps(MP4E_mux_t* mux, int track_id, const void* vps, int bytes)
{
	track_t* tr; // 932
} /* size: 0, variables: 1 */

// <0204B617> sbox/media/minimp4.h:937
// variable: 1
int MP4E_set_sps(MP4E_mux_t* mux, int track_id, const void* sps, int bytes)
{
	track_t* tr; // 941
} /* size: 0, variables: 1 */

// <0204B5C2> sbox/media/minimp4.h:946
// variable: 1
int MP4E_set_pps(MP4E_mux_t* mux, int track_id, const void* pps, int bytes)
{
	track_t* tr; // 950
} /* size: 0, variables: 1 */

// <0204B57A> sbox/media/minimp4.h:955
// variables: 3
unsigned int get_duration(const track_t* tr)
{
	unsigned int i; // 957
	unsigned int sum_duration; // 957
	const sample_t* s; // 958
} /* size: 0, variables: 3 */

// <0204B456> sbox/media/minimp4.h:966
// variables: 5
int write_pending_data(MP4E_mux_t* mux, track_t* tr)
{
	{
		sample_t* smpl_desc; // 972
		unsigned char base; // 973
		unsigned char* p; // 973
		{
			int err; // 981
		}
		{
			int err; // 990
		}
	}
} /* size: 244 */

// <0204B3F6> sbox/media/minimp4.h:999
// variable: 1
int add_sample_descriptor(MP4E_mux_t* mux, track_t* tr, int data_bytes, int duration, int kind)
{
	sample_t smp; // 1001
} /* size: 0, variables: 1 */

// <0204B263> sbox/media/minimp4.h:1014
// variables: 9
int mp4e_write_fragment_header(MP4E_mux_t* mux, int track_num, int data_bytes, int duration, int kind)
{
	unsigned char base; // 1020
	unsigned char* p; // 1020
	unsigned char* stack_base; // 1021
	unsigned char** stack; // 1022
	unsigned char* pdata_offset; // 1023
	unsigned int flags; // 1024
	 e; // 1029
	track_t* tr; // 1031
	{
		int err; // 1102
	}
} /* size: 753, variables: 8 */

// <0204B20F> sbox/media/minimp4.h:1107
// variables: 3
int mp4e_write_mdat_box(MP4E_mux_t* mux, uint32_t size)
{
	unsigned char base; // 1109
	unsigned char* p; // 1109
	{
		int err; // 1112
	}
} /* size: 0, variables: 2 */

// <0204AD67> sbox/media/minimp4.h:1120
// variables: 9
// function calls: 6
int MP4E_put_sample(MP4E_mux_t* mux, int track_num, const void* data, int data_bytes, int duration, int kind)
{
	track_t* tr; // 1122
	{
		int err; // 1134
	}
	{
		int err; // 1139
	}
	{
		int err; // 1142
		{
			int err; // 1112
		}
		mp4e_write_mdat_box(MP4E_mux_t* mux,
					uint32_t size);  // 1142
	}
	{
		int err; // 1143
	}
	{
		int err; // 1151
	}
	{
		sample_t* smpl_desc; // 1158
	}
	{
		int err; // 1173
	}
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 825
	minimp4_vector_put(minimp4_vector_t* h,
				const void* buf,
				int bytes);  // 1006
	add_sample_descriptor(MP4E_mux_t* mux,
				track_t* tr,
				int data_bytes,
				int duration,
				int kind);  // 1152
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 825
	minimp4_vector_put(minimp4_vector_t* h,
				const void* buf,
				int bytes);  // 1169
} /* size: 655, variables: 1, inline expansions: 5 (234 bytes) */

// <0204AD2F> sbox/media/minimp4.h:1182
// variables: 2
int od_size_of_size(int size)
{
	int i; // 1184
	int size_of_size; // 1184
} /* size: 0, variables: 2 */

// <0204ACC3> sbox/media/minimp4.h:1196
int MP4E_set_text_comment(MP4E_mux_t* mux, const char* comment)
{
} /* size: 0 */

// <0204A510> sbox/media/minimp4.h:1211
// variables: 44
// function calls: 8
int mp4e_flush_index(MP4E_mux_t* mux)
{
	unsigned char* stack_base; // 1213
	unsigned char** stack; // 1214
	unsigned char* base; // 1215
	unsigned char* p; // 1215
	unsigned int ntr; // 1216
	unsigned int index_bytes; // 1216
	unsigned int ntracks; // 1216
	int i; // 1217
	int err; // 1217
	{
		track_t* tr; // 1232
		{
			int err; // 1239
		}
	}
	{
		int64_t size; // 1254
		const int64_t  size_limit; // 1255
		{
			int cberr; // 1270
		}
	}
	{
		track_t* tr; // 1285
		unsigned int duration; // 1286
		get_duration(const track_t* tr); // 1286
	}
	{
		track_t* tr; // 1315
		unsigned int duration; // 1316
		int samples_count; // 1317
		const sample_t* sample; // 1318
		unsigned int handler_type; // 1319
		const char* handler_ascii; // 1320
		int is_64_bit; // 1742
		{
			int lang_code; // 1380
		}
		{
			int dsi_bytes; // 1469
			int dsi_size_size; // 1470
			int dcd_bytes; // 1471
			int dcd_size_size; // 1472
			int esd_bytes; // 1473
			od_size_of_size(int size); // 1470
			od_size_of_size(int size); // 1472
		}
		{
			int dsi_bytes; // 1530
		}
		{
			int dsi_bytes; // 1560
		}
		{
			int dsi_bytes; // 1584
		}
		{
			int numOfSequenceParameterSets; // 1594
			int numOfPictureParameterSets; // 1595
			{
				int numOfVPS; // 1649
				{
					int cb; // 909
				}
				items_count(minimp4_vector_t* v); // 1649
			}
			{
				int cb; // 909
			}
			items_count(minimp4_vector_t* v); // 1594
			{
				int cb; // 909
			}
			items_count(minimp4_vector_t* v); // 1595
		}
		{
			unsigned char* pentry_count; // 1699
			int cnt; // 1700
			int entry_count; // 1700
		}
		{
			int ra_count; // 1767
		}
		get_duration(const track_t* tr); // 1316
	}
	{
		track_t* tr; // 1822
		uint32_t movie_duration; // 1823
		get_duration(const track_t* tr); // 1823
	}
} /* size: 6908, variables: 9 */

// <0204A16C> sbox/media/minimp4.h:1851
// variables: 4
// function calls: 12
int MP4E_close(MP4E_mux_t* mux)
{
	int err; // 1853
	unsigned int ntr; // 1854
	unsigned int ntracks; // 1854
	{
		track_t* tr; // 1864
		memset(void* __dest,
			int __ch,
			size_t __len);  // 779
		minimp4_vector_reset(minimp4_vector_t* h); // 1865
		memset(void* __dest,
			int __ch,
			size_t __len);  // 779
		minimp4_vector_reset(minimp4_vector_t* h); // 1866
		memset(void* __dest,
			int __ch,
			size_t __len);  // 779
		minimp4_vector_reset(minimp4_vector_t* h); // 1867
		memset(void* __dest,
			int __ch,
			size_t __len);  // 779
		minimp4_vector_reset(minimp4_vector_t* h); // 1868
		memset(void* __dest,
			int __ch,
			size_t __len);  // 779
		minimp4_vector_reset(minimp4_vector_t* h); // 1869
	}
	memset(void* __dest,
		int __ch,
		size_t __len);  // 779
	minimp4_vector_reset(minimp4_vector_t* h); // 1871
} /* size: 357, variables: 3, inline expansions: 2 (46 bytes) */

// <02042F8C> sbox/media/minimp4.h:1880
// member variables: 5
// struct size: 32
typedef struct {
	unsigned int cache; /* 0 4 */
	int cache_free_bits; /* 4 4 */
	const uint16_t * buf; /* 8 8 */
	const uint16_t * origin; /* 16 8 */
	unsigned int origin_bytes; /* 24 4 */
} bit_reader_t;

// <0204A135> sbox/media/minimp4.h:1901
// variable: 1
unsigned int show_bits(bit_reader_t* bs, int n)
{
	unsigned int retval; // 1903
} /* size: 0, variables: 1 */

// <0204A10F> sbox/media/minimp4.h:1909
void flush_bits(bit_reader_t* bs, int n)
{
} /* size: 0 */

// <0204A0D8> sbox/media/minimp4.h:1922
// variable: 1
unsigned int get_bits(bit_reader_t* bs, int n)
{
	unsigned int retval; // 1924
} /* size: 0, variables: 1 */

// <0204A0B0> sbox/media/minimp4.h:1929
void set_pos_bits(bit_reader_t* bs, unsigned int pos_bits)
{
} /* size: 0 */

// <0204A084> sbox/media/minimp4.h:1940
// variable: 1
unsigned int get_pos_bits(const bit_reader_t* bs)
{
	unsigned int pos_bits; // 1945
} /* size: 0, variables: 1 */

// <0204A05F> sbox/media/minimp4.h:1951
int remaining_bits(const bit_reader_t* bs)
{
} /* size: 0 */

// <0204A02A> sbox/media/minimp4.h:1956
void init_bits(bit_reader_t* bs, const void* data, unsigned int data_bytes)
{
} /* size: 0 */

// <02049E52> sbox/media/minimp4.h:1968
// variables: 2
// function calls: 6
int ue_bits(bit_reader_t* bs)
{
	int clz; // 1970
	int val; // 1971
	show_bits(bit_reader_t* bs,
			int n);  // 1924
	flush_bits(bit_reader_t* bs,
			int n);  // 1925
	get_bits(bit_reader_t* bs,
		int n);  // 1972
	show_bits(bit_reader_t* bs,
			int n);  // 1924
	flush_bits(bit_reader_t* bs,
			int n);  // 1925
	get_bits(bit_reader_t* bs,
		int n);  // 1974
} /* size: 0, variables: 2, inline expansions: 6 (0 bytes) */

// <02043003> sbox/media/minimp4.h:1984
// member variables: 4
// struct size: 24
typedef struct {
	int shift; /* 0 4 */
	uint32_t cache; /* 4 4 */
	bs_item_t * buf; /* 8 8 */
	bs_item_t * origin; /* 16 8 */
} bs_t;

// <0204C25C> sbox/media/minimp4.h:1993
void h264e_bs_put_bits(bs_t* bs, unsigned int n, unsigned int val)
{
} /* size: 0 */

// <02049E04> sbox/media/minimp4.h:2009
void h264e_bs_flush(bs_t* bs)
{
} /* size: 0 */

// <02049DD2> sbox/media/minimp4.h:2014
// variable: 1
unsigned int h264e_bs_get_pos_bits(const bs_t* bs)
{
	unsigned int pos_bits; // 2016
} /* size: 0, variables: 1 */

// <02049DA6> sbox/media/minimp4.h:2022
// variable: 1
unsigned int h264e_bs_byte_align(bs_t* bs)
{
	int pos; // 2024
} /* size: 0, variables: 1 */

// <02049D66> sbox/media/minimp4.h:2043
// variables: 2
void h264e_bs_put_golomb(bs_t* bs, unsigned int val)
{
	int size; // 2045
	unsigned int t; // 2046
} /* size: 0, variables: 2 */

// <02049D3E> sbox/media/minimp4.h:2055
void h264e_bs_init_bits(bs_t* bs, void* data)
{
} /* size: 0 */

// <0204C29D> sbox/media/minimp4.h:2063
// variable: 1
// function call: 1
int find_mem_cache(void** cache, int* cache_bytes, int cache_size, void* mem, int bytes)
{
	int i; // 2065
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 2080
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <02049CDF> sbox/media/minimp4.h:2063
// variable: 1
int find_mem_cache(void** cache, int* cache_bytes, int cache_size, void* mem, int bytes)
{
	int i; // 2065
} /* size: 0, variables: 1 */

// <02049C82> sbox/media/minimp4.h:2092
// variables: 3
int remove_nal_escapes(unsigned char* dst, const unsigned char* src, int h264_data_bytes)
{
	int i; // 2094
	int j; // 2094
	int zero_cnt; // 2094
} /* size: 0, variables: 3 */

// <02049C1C> sbox/media/minimp4.h:2129
// variables: 4
int nal_put_esc(uint8_t* d, const uint8_t* s, int n)
{
	int i; // 2131
	int j; // 2131
	int cntz; // 2131
	{
		uint8_t byte; // 2135
	}
} /* size: 0, variables: 3 */

// <0204997B> sbox/media/minimp4.h:2150
// variables: 3
// function calls: 9
void copy_bits(bit_reader_t* bs, bs_t* bd)
{
	unsigned int cb; // 2152
	unsigned int bits; // 2152
	int bit_count; // 2153
	get_pos_bits(const bit_reader_t* bs); // 1953
	remaining_bits(const bit_reader_t* bs); // 2153
	show_bits(bit_reader_t* bs,
			int n);  // 1924
	flush_bits(bit_reader_t* bs,
			int n);  // 1925
	get_bits(bit_reader_t* bs,
		int n);  // 2157
	h264e_bs_put_bits(bs_t* bs,
				unsigned int n,
				unsigned int val);  // 2158
	flush_bits(bit_reader_t* bs,
			int n);  // 1925
	show_bits(bit_reader_t* bs,
			int n);  // 1924
	get_bits(bit_reader_t* bs,
		int n);  // 2163
} /* size: 0, variables: 3, inline expansions: 9 (0 bytes) */

// <0204C966> sbox/media/minimp4.h:2174
// variables: 4
// function calls: 7
int change_sps_id(bit_reader_t* bs, bs_t* bd, int new_id, int* old_id)
{
	unsigned int bits; // 2176
	unsigned int sps_id; // 2176
	unsigned int i; // 2176
	unsigned int bytes; // 2176
	show_bits(bit_reader_t* bs,
			int n);  // 1924
	flush_bits(bit_reader_t* bs,
			int n);  // 1925
	get_bits(bit_reader_t* bs,
		int n);  // 2179
	h264e_bs_put_golomb(bs_t* bs,
				unsigned int val);  // 2188
	h264e_bs_get_pos_bits(const bs_t* bs); // 2024
	h264e_bs_byte_align(bs_t* bs); // 2191
	h264e_bs_flush(bs_t* bs); // 2192
} /* size: 0, variables: 4, inline expansions: 7 (0 bytes) */

// <02049904> sbox/media/minimp4.h:2174
// variables: 4
int change_sps_id(bit_reader_t* bs, bs_t* bd, int new_id, int* old_id)
{
	unsigned int bits; // 2176
	unsigned int sps_id; // 2176
	unsigned int i; // 2176
	unsigned int bytes; // 2176
} /* size: 0, variables: 4 */

// <0204C692> sbox/media/minimp4.h:2196
// variables: 3
// function calls: 5
int patch_pps(h264_sps_id_patcher_t* h, bit_reader_t* bs, bs_t* bd, int new_pps_id, int* old_id)
{
	int bytes; // 2198
	unsigned int pps_id; // 2199
	unsigned int sps_id; // 2200
	h264e_bs_put_golomb(bs_t* bs,
				unsigned int val);  // 2209
	h264e_bs_put_golomb(bs_t* bs,
				unsigned int val);  // 2210
	h264e_bs_get_pos_bits(const bs_t* bs); // 2024
	h264e_bs_byte_align(bs_t* bs); // 2213
	h264e_bs_flush(bs_t* bs); // 2214
} /* size: 0, variables: 3, inline expansions: 5 (0 bytes) */

// <0204988D> sbox/media/minimp4.h:2196
// variables: 3
int patch_pps(h264_sps_id_patcher_t* h, bit_reader_t* bs, bs_t* bd, int new_pps_id, int* old_id)
{
	int bytes; // 2198
	unsigned int pps_id; // 2199
	unsigned int sps_id; // 2200
} /* size: 0, variables: 3 */

// <02049828> sbox/media/minimp4.h:2218
// variables: 3
void patch_slice_header(h264_sps_id_patcher_t* h, bit_reader_t* bs, bs_t* bd)
{
	unsigned int first_mb_in_slice; // 2220
	unsigned int slice_type; // 2221
	unsigned int pps_id; // 2222
} /* size: 0, variables: 3 */

// <0204974E> sbox/media/minimp4.h:2234
// variables: 10
int transcode_nalu(h264_sps_id_patcher_t* h, const unsigned char* src, int nalu_bytes, unsigned char* dst)
{
	int old_id; // 2236
	bit_reader_t bst; // 2238
	bs_t bdt; // 2239
	bit_reader_t bs; // 2241
	bs_t bd; // 2242
	int payload_type; // 2243
	{
		int cb; // 2255
		int id; // 2256
	}
	{
		int cb; // 2265
		int id; // 2266
	}
} /* size: 0, variables: 6 */

// <0204963E> sbox/media/minimp4.h:2299
// variables: 4
// function call: 1
const uint8_t* find_start_code(const uint8_t* h264_data, int h264_data_bytes, int* zcount)
{
	const uint8_t* eof; // 2301
	const uint8_t* p; // 2302
	{
		int zero_cnt; // 2305
		const uint8_t* found; // 2306
		memchr(const void* __s,
			int __c,
			size_t __n);  // 2306
	}
} /* size: 0, variables: 2 */

// <020495D0> sbox/media/minimp4.h:2323
// variables: 4
const uint8_t* find_nal_unit(const uint8_t* h264_data, int h264_data_bytes, int* pnal_unit_bytes)
{
	const uint8_t* eof; // 2325
	int zcount; // 2326
	const uint8_t* start; // 2327
	const uint8_t* stop; // 2328
} /* size: 0, variables: 4 */

// <020494A1> sbox/media/minimp4.h:2342
// variable: 1
// function call: 1
int mp4_h26x_write_init(mp4_h26x_writer_t* h, MP4E_mux_t* mux, int width, int height, int is_hevc)
{
	MP4E_track_t tr; // 2344
	memset(void* __dest,
		int __ch,
		size_t __len);  // 2364
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <020493C9> sbox/media/minimp4.h:2369
// variables: 2
// function call: 1
void mp4_h26x_write_close(mp4_h26x_writer_t* h)
{
	h264_sps_id_patcher_t* p; // 2372
	int i; // 2373
	memset(void* __dest,
		int __ch,
		size_t __len);  // 2385
} /* size: 0, variables: 2, inline expansions: 1 (0 bytes) */

// <02049341> sbox/media/minimp4.h:2388
// variables: 5
int mp4_h265_write_nal(mp4_h26x_writer_t* h, const unsigned char* nal, int sizeof_nal, unsigned int timeStamp90kHz_next)
{
	int payload_type; // 2390
	int is_intra; // 2391
	int err; // 2392
	{
		unsigned char* tmp; // 2415
		int sample_kind; // 2418
	}
} /* size: 0, variables: 3 */

// <020482C6> sbox/media/minimp4.h:2434
// variables: 17
// function calls: 31
int mp4_h26x_write_nal(mp4_h26x_writer_t* h, const unsigned char* nal, int length, unsigned int timeStamp90kHz_next)
{

exit_with_free: // 2471
	const unsigned char* eof; // 2436
	int payload_type; // 2437
	int sizeof_nal; // 2437
	int err; // 2437
	{
		unsigned char* nal1; // 2441
		unsigned char* nal2; // 2441
		{
			int err; // 2448
			{
				unsigned char* tmp; // 2415
				int sample_kind; // 2418
				memcpy(void* __dest,
					const void* __src,
					size_t __len);  // 2423
			}
			MP4E_set_vps(MP4E_mux_t* mux,
					int track_id,
					const void* vps,
					int bytes);  // 2400
			MP4E_set_sps(MP4E_mux_t* mux,
					int track_id,
					const void* sps,
					int bytes);  // 2404
			MP4E_set_pps(MP4E_mux_t* mux,
					int track_id,
					const void* pps,
					int bytes);  // 2408
			mp4_h265_write_nal(mp4_h26x_writer_t* h,
						const unsigned char* nal,
						int sizeof_nal,
						unsigned int timeStamp90kHz_next);  // 2448
		}
		{
			bit_reader_t bs; // 2501
			unsigned int first_mb_in_slice; // 2503
			int sample_kind; // 2505
			flush_bits(bit_reader_t* bs,
					int n);  // 1937
			set_pos_bits(bit_reader_t* bs,
					unsigned int pos_bits);  // 1960
			init_bits(bit_reader_t* bs,
					const void* data,
					unsigned int data_bytes);  // 2502
		}
		{
			uint8_t byte; // 2135
		}
		nal_put_esc(uint8_t* d,
				const uint8_t* s,
				int n);  // 2478
		find_nal_unit(const uint8_t* h264_data,
				int h264_data_bytes,
				int* pnal_unit_bytes);  // 2443
		remove_nal_escapes(unsigned char* dst,
					const unsigned char* src,
					int h264_data_bytes);  // 2468
		flush_bits(bit_reader_t* bs,
				int n);  // 1937
		set_pos_bits(bit_reader_t* bs,
				unsigned int pos_bits);  // 1960
		init_bits(bit_reader_t* bs,
				const void* data,
				unsigned int data_bytes);  // 2247
		h264e_bs_init_bits(bs_t* bs,
					void* data);  // 2248
		flush_bits(bit_reader_t* bs,
				int n);  // 1937
		set_pos_bits(bit_reader_t* bs,
				unsigned int pos_bits);  // 1960
		init_bits(bit_reader_t* bs,
				const void* data,
				unsigned int data_bytes);  // 2249
		h264e_bs_put_golomb(bs_t* bs,
					unsigned int val);  // 2228
		h264e_bs_put_golomb(bs_t* bs,
					unsigned int val);  // 2229
		h264e_bs_put_golomb(bs_t* bs,
					unsigned int val);  // 2230
		patch_slice_header(h264_sps_id_patcher_t* h,
					bit_reader_t* bs,
					bs_t* bd);  // 2276
		{
			int cb; // 2265
			int id; // 2266
			find_mem_cache(void** cache,
					int* cache_bytes,
					int cache_size,
					void* mem,
					int bytes);  // 2266
		}
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 2279
		{
			int cb; // 2255
			int id; // 2256
			find_mem_cache(void** cache,
					int* cache_bytes,
					int cache_size,
					void* mem,
					int bytes);  // 2256
		}
		h264e_bs_get_pos_bits(const bs_t* bs); // 2024
		h264e_bs_byte_align(bs_t* bs); // 2283
		h264e_bs_flush(bs_t* bs); // 2284
		transcode_nalu(h264_sps_id_patcher_t* h,
				const unsigned char* src,
				int nalu_bytes,
				unsigned char* dst);  // 2477
		MP4E_set_pps(MP4E_mux_t* mux,
				int track_id,
				const void* pps,
				int bytes);  // 2488
		MP4E_set_sps(MP4E_mux_t* mux,
				int track_id,
				const void* sps,
				int bytes);  // 2482
	}
} /* size: 0, variables: 4, goto labels: 1 */

// <0204829B> sbox/media/minimp4.h:2578
// variable: 1
int minimp4_fgets(MP4D_demux_t* mp4)
{
	uint8_t c; // 2580
} /* size: 0, variables: 1 */

// <0204C50D> sbox/media/minimp4.h:2591
// variables: 2
// function calls: 4
unsigned int minimp4_read(MP4D_demux_t* mp4, int nb, int* eof_flag)
{
	uint32_t v; // 2593
	int last_byte; // 2593
	minimp4_fgets(MP4D_demux_t* mp4); // 2596
	minimp4_fgets(MP4D_demux_t* mp4); // 2598
	minimp4_fgets(MP4D_demux_t* mp4); // 2600
	minimp4_fgets(MP4D_demux_t* mp4); // 2597
} /* size: 340, variables: 2, inline expansions: 4 (169 bytes) */

// <0204824A> sbox/media/minimp4.h:2591
// variables: 2
unsigned int minimp4_read(MP4D_demux_t* mp4, int nb, int* eof_flag)
{
	uint32_t v; // 2593
	int last_byte; // 2593
} /* size: 0, variables: 2 */

// <020481FE> sbox/media/minimp4.h:2613
uint32_t read_payload(MP4D_demux_t* mp4, unsigned int nb, boxsize_t* payload_bytes, int* eof_flag)
{
} /* size: 0 */

// <020481C8> sbox/media/minimp4.h:2629
void my_fseek(MP4D_demux_t* mp4, boxsize_t pos, int* eof_flag)
{
} /* size: 0 */

// <02045C2A> sbox/media/minimp4.h:2660
// variables: 58
// function calls: 75
int MP4D_open(MP4D_demux_t* mp4, int (*read_callback)(int64_t, void *, size_t, void *), void* token, int64_t file_size)
{

broken_android_meta_hack: // 2785
	int depth; // 2663
	 stack; // 2673
	int eof_flag; // 2680
	unsigned int i; // 2681
	MP4D_track_t* tr; // 2682
	{
		const    g_fullbox; // 2708
		const    g_envelope_box; // 2737
		uint32_t FullAtomVersionAndFlags; // 2771
		boxsize_t payload_bytes; // 2772
		boxsize_t box_bytes; // 2773
		uint32_t box_name; // 2774
		unsigned char** ptag; // 2776
		int read_bytes; // 2778
		{
			int val; // 2872
			minimp4_fgets(MP4D_demux_t* mp4); // 2600
			minimp4_read(MP4D_demux_t* mp4,
					int nb,
					int* eof_flag);  // 2873
			minimp4_fgets(MP4D_demux_t* mp4); // 2600
			minimp4_read(MP4D_demux_t* mp4,
					int nb,
					int* eof_flag);  // 2882
		}
		{
			int size; // 2920
			uint32_t sample_size; // 2921
			read_payload(MP4D_demux_t* mp4,
					unsigned int nb,
					boxsize_t* payload_bytes,
					int* eof_flag);  // 2921
			read_payload(MP4D_demux_t* mp4,
					unsigned int nb,
					boxsize_t* payload_bytes,
					int* eof_flag);  // 2922
			read_payload(MP4D_demux_t* mp4,
					unsigned int nb,
					boxsize_t* payload_bytes,
					int* eof_flag);  // 2937
			read_payload(MP4D_demux_t* mp4,
					unsigned int nb,
					boxsize_t* payload_bytes,
					int* eof_flag);  // 2928
			read_payload(MP4D_demux_t* mp4,
					unsigned int nb,
					boxsize_t* payload_bytes,
					int* eof_flag);  // 2934
			read_payload(MP4D_demux_t* mp4,
					unsigned int nb,
					boxsize_t* payload_bytes,
					int* eof_flag);  // 2945
		}
		{
			boxsize_t t; // 2962
			my_fseek(MP4D_demux_t* mp4,
				boxsize_t pos,
				int* eof_flag);  // 2962
		}
		{
			unsigned int count; // 2968
			unsigned int j; // 2969
			unsigned int k; // 2969
			unsigned int ts; // 2969
			unsigned int ts_count; // 2969
			{
				unsigned int sc; // 2977
				int d; // 2978
				{
					void* new_ts; // 2984
					void* new_dur; // 2985
				}
				read_payload(MP4D_demux_t* mp4,
						unsigned int nb,
						boxsize_t* payload_bytes,
						int* eof_flag);  // 2977
				read_payload(MP4D_demux_t* mp4,
						unsigned int nb,
						boxsize_t* payload_bytes,
						int* eof_flag);  // 2978
			}
			read_payload(MP4D_demux_t* mp4,
					unsigned int nb,
					boxsize_t* payload_bytes,
					int* eof_flag);  // 2968
		}
		{
			unsigned int count; // 3009
			read_payload(MP4D_demux_t* mp4,
					unsigned int nb,
					boxsize_t* payload_bytes,
					int* eof_flag);  // 3009
			read_payload(MP4D_demux_t* mp4,
					unsigned int nb,
					boxsize_t* payload_bytes,
					int* eof_flag);  // 3016
			read_payload(MP4D_demux_t* mp4,
					unsigned int nb,
					boxsize_t* payload_bytes,
					int* eof_flag);  // 3017
		}
		{
			boxsize_t t; // 3056
			my_fseek(MP4D_demux_t* mp4,
				boxsize_t pos,
				int* eof_flag);  // 3056
		}
		{
			boxsize_t t; // 3060
			my_fseek(MP4D_demux_t* mp4,
				boxsize_t pos,
				int* eof_flag);  // 3060
		}
		{
			boxsize_t t; // 3064
			my_fseek(MP4D_demux_t* mp4,
				boxsize_t pos,
				int* eof_flag);  // 3064
		}
		{
			int ISO_639_2_T; // 3070
			read_payload(MP4D_demux_t* mp4,
					unsigned int nb,
					boxsize_t* payload_bytes,
					int* eof_flag);  // 3070
		}
		{
			boxsize_t t; // 3081
			my_fseek(MP4D_demux_t* mp4,
				boxsize_t pos,
				int* eof_flag);  // 3081
		}
		{
			boxsize_t t; // 3094
			my_fseek(MP4D_demux_t* mp4,
				boxsize_t pos,
				int* eof_flag);  // 3094
		}
		{
			boxsize_t t; // 3109
			my_fseek(MP4D_demux_t* mp4,
				boxsize_t pos,
				int* eof_flag);  // 3109
		}
		{
			boxsize_t t; // 3117
			my_fseek(MP4D_demux_t* mp4,
				boxsize_t pos,
				int* eof_flag);  // 3117
		}
		{
			boxsize_t t; // 3126
			my_fseek(MP4D_demux_t* mp4,
				boxsize_t pos,
				int* eof_flag);  // 3126
		}
		{
			boxsize_t t; // 3128
			my_fseek(MP4D_demux_t* mp4,
				boxsize_t pos,
				int* eof_flag);  // 3128
		}
		{
			boxsize_t t; // 3143
			my_fseek(MP4D_demux_t* mp4,
				boxsize_t pos,
				int* eof_flag);  // 3143
		}
		{
			boxsize_t t; // 3147
		}
		{
			boxsize_t t; // 3160
			my_fseek(MP4D_demux_t* mp4,
				boxsize_t pos,
				int* eof_flag);  // 3160
		}
		{
			boxsize_t t; // 3162
			my_fseek(MP4D_demux_t* mp4,
				boxsize_t pos,
				int* eof_flag);  // 3162
		}
		{
			boxsize_t t; // 3179
			my_fseek(MP4D_demux_t* mp4,
				boxsize_t pos,
				int* eof_flag);  // 3179
		}
		{
			boxsize_t t; // 3184
			my_fseek(MP4D_demux_t* mp4,
				boxsize_t pos,
				int* eof_flag);  // 3184
		}
		{
			unsigned int flags; // 3229
			{
				boxsize_t t; // 3233
				my_fseek(MP4D_demux_t* mp4,
					boxsize_t pos,
					int* eof_flag);  // 3233
			}
			{
				unsigned int bytecount; // 3237
				{
					boxsize_t t; // 3238
					my_fseek(MP4D_demux_t* mp4,
						boxsize_t pos,
						int* eof_flag);  // 3238
				}
				read_payload(MP4D_demux_t* mp4,
						unsigned int nb,
						boxsize_t* payload_bytes,
						int* eof_flag);  // 3237
			}
			{
				boxsize_t t; // 3242
				my_fseek(MP4D_demux_t* mp4,
					boxsize_t pos,
					int* eof_flag);  // 3242
			}
			read_payload(MP4D_demux_t* mp4,
					unsigned int nb,
					boxsize_t* payload_bytes,
					int* eof_flag);  // 3229
		}
		{
			boxsize_t t; // 3252
			my_fseek(MP4D_demux_t* mp4,
				boxsize_t pos,
				int* eof_flag);  // 3252
		}
		{
			boxsize_t t; // 3288
			my_fseek(MP4D_demux_t* mp4,
				boxsize_t pos,
				int* eof_flag);  // 3288
		}
		{
			void* mem; // 3306
			memset(void* __dest,
				int __ch,
				size_t __len);  // 3314
		}
		{
			boxsize_t t; // 3343
			my_fseek(MP4D_demux_t* mp4,
				boxsize_t pos,
				int* eof_flag);  // 3343
		}
		read_payload(MP4D_demux_t* mp4,
				unsigned int nb,
				boxsize_t* payload_bytes,
				int* eof_flag);  // 2835
		read_payload(MP4D_demux_t* mp4,
				unsigned int nb,
				boxsize_t* payload_bytes,
				int* eof_flag);  // 3057
		read_payload(MP4D_demux_t* mp4,
				unsigned int nb,
				boxsize_t* payload_bytes,
				int* eof_flag);  // 3059
		read_payload(MP4D_demux_t* mp4,
				unsigned int nb,
				boxsize_t* payload_bytes,
				int* eof_flag);  // 3144
		read_payload(MP4D_demux_t* mp4,
				unsigned int nb,
				boxsize_t* payload_bytes,
				int* eof_flag);  // 3145
		read_payload(MP4D_demux_t* mp4,
				unsigned int nb,
				boxsize_t* payload_bytes,
				int* eof_flag);  // 3161
		read_payload(MP4D_demux_t* mp4,
				unsigned int nb,
				boxsize_t* payload_bytes,
				int* eof_flag);  // 3163
		read_payload(MP4D_demux_t* mp4,
				unsigned int nb,
				boxsize_t* payload_bytes,
				int* eof_flag);  // 3249
		read_payload(MP4D_demux_t* mp4,
				unsigned int nb,
				boxsize_t* payload_bytes,
				int* eof_flag);  // 3251
		read_payload(MP4D_demux_t* mp4,
				unsigned int nb,
				boxsize_t* payload_bytes,
				int* eof_flag);  // 3253
		read_payload(MP4D_demux_t* mp4,
				unsigned int nb,
				boxsize_t* payload_bytes,
				int* eof_flag);  // 3035
		read_payload(MP4D_demux_t* mp4,
				unsigned int nb,
				boxsize_t* payload_bytes,
				int* eof_flag);  // 3127
		read_payload(MP4D_demux_t* mp4,
				unsigned int nb,
				boxsize_t* payload_bytes,
				int* eof_flag);  // 3129
		read_payload(MP4D_demux_t* mp4,
				unsigned int nb,
				boxsize_t* payload_bytes,
				int* eof_flag);  // 3082
		read_payload(MP4D_demux_t* mp4,
				unsigned int nb,
				boxsize_t* payload_bytes,
				int* eof_flag);  // 3180
		read_payload(MP4D_demux_t* mp4,
				unsigned int nb,
				boxsize_t* payload_bytes,
				int* eof_flag);  // 3181
		minimp4_fgets(MP4D_demux_t* mp4); // 2600
		minimp4_read(MP4D_demux_t* mp4,
				int nb,
				int* eof_flag);  // 3266
		read_payload(MP4D_demux_t* mp4,
				unsigned int nb,
				boxsize_t* payload_bytes,
				int* eof_flag);  // 3065
		read_payload(MP4D_demux_t* mp4,
				unsigned int nb,
				boxsize_t* payload_bytes,
				int* eof_flag);  // 3067
		read_payload(MP4D_demux_t* mp4,
				unsigned int nb,
				boxsize_t* payload_bytes,
				int* eof_flag);  // 3095
		read_payload(MP4D_demux_t* mp4,
				unsigned int nb,
				boxsize_t* payload_bytes,
				int* eof_flag);  // 2956
		read_payload(MP4D_demux_t* mp4,
				unsigned int nb,
				boxsize_t* payload_bytes,
				int* eof_flag);  // 2960
		read_payload(MP4D_demux_t* mp4,
				unsigned int nb,
				boxsize_t* payload_bytes,
				int* eof_flag);  // 2961
		read_payload(MP4D_demux_t* mp4,
				unsigned int nb,
				boxsize_t* payload_bytes,
				int* eof_flag);  // 3039
		read_payload(MP4D_demux_t* mp4,
				unsigned int nb,
				boxsize_t* payload_bytes,
				int* eof_flag);  // 3049
		minimp4_fgets(MP4D_demux_t* mp4); // 2600
		minimp4_read(MP4D_demux_t* mp4,
				int nb,
				int* eof_flag);  // 3220
		read_payload(MP4D_demux_t* mp4,
				unsigned int nb,
				boxsize_t* payload_bytes,
				int* eof_flag);  // 3058
		read_payload(MP4D_demux_t* mp4,
				unsigned int nb,
				boxsize_t* payload_bytes,
				int* eof_flag);  // 3066
		minimp4_fgets(MP4D_demux_t* mp4); // 2600
		minimp4_read(MP4D_demux_t* mp4,
				int nb,
				int* eof_flag);  // 3204
		read_payload(MP4D_demux_t* mp4,
				unsigned int nb,
				boxsize_t* payload_bytes,
				int* eof_flag);  // 3293
	}
	{
		MP4D_track_t* ctr; // 3366
		unsigned int k; // 3369
		{
			unsigned int ci; // 3370
			{
				unsigned int sc; // 3372
				int d; // 3373
				{
					unsigned int cj; // 3374
				}
			}
		}
	}
	memset(void* __dest,
		int __ch,
		size_t __len);  // 2690
} /* size: 10745, variables: 5, goto labels: 1, inline expansions: 1 (11 bytes) */

// <02045BCB> sbox/media/minimp4.h:3392
// variables: 3
int sample_to_chunk(MP4D_track_t* tr, unsigned int nsample, unsigned int* nfirst_sample_in_chunk)
{
	unsigned int chunk_group; // 3394
	unsigned int nc; // 3394
	unsigned int sum; // 3395
} /* size: 0, variables: 3 */

// <02045A77> sbox/media/minimp4.h:3421
// variables: 4
// function call: 1
MP4D_file_offset_t MP4D_frame_offset(const MP4D_demux_t* mp4, unsigned int ntrack, unsigned int nsample, unsigned int* frame_bytes, unsigned int* timestamp, unsigned int* duration)
{
	MP4D_track_t* tr; // 3423
	unsigned int ns; // 3424
	int nchunk; // 3425
	MP4D_file_offset_t offset; // 3426
	sample_to_chunk(MP4D_track_t* tr,
			unsigned int nsample,
			unsigned int* nfirst_sample_in_chunk);  // 3425
} /* size: 0, variables: 4, inline expansions: 1 (0 bytes) */

// <0204594B> sbox/media/minimp4.h:3465
// variable: 1
void MP4D_close(MP4D_demux_t* mp4)
{
	{
		MP4D_track_t* tr; // 3469
	}
} /* size: 434 */

// <020458EE> sbox/media/minimp4.h:3492
// variables: 3
int skip_spspps(const unsigned char* p, int nbytes, int nskip)
{
	int i; // 3494
	int k; // 3494
	{
		unsigned int segmbytes; // 3497
	}
} /* size: 0, variables: 2 */

// <0204C3B7> sbox/media/minimp4.h:3506
// variables: 6
// function calls: 2
const void* MP4D_read_spspps(unsigned int ntrack, int pps_flag, int nsps, int* sps_bytes, const MP4D_demux_t* mp4)
{
	int sps_count; // 3508
	int skip_bytes; // 3508
	int bytepos; // 3509
	unsigned char* p; // 3510
	{
		unsigned int segmbytes; // 3497
	}
	skip_spspps(const unsigned char* p,
			int nbytes,
			int nskip);  // 3530
	{
		unsigned int segmbytes; // 3497
	}
	skip_spspps(const unsigned char* p,
			int nbytes,
			int nskip);  // 3520
} /* size: 0, variables: 4, inline expansions: 2 (0 bytes) */

// <02045868> sbox/media/minimp4.h:3506
// variables: 4
const void* MP4D_read_spspps(const MP4D_demux_t* mp4, unsigned int ntrack, int pps_flag, int nsps, int* sps_bytes)
{
	int sps_count; // 3508
	int skip_bytes; // 3508
	int bytepos; // 3509
	unsigned char* p; // 3510
} /* size: 0, variables: 4 */

// <020457BB> sbox/media/minimp4.h:3539
const void* MP4D_read_sps(const MP4D_demux_t* mp4, unsigned int ntrack, int nsps, int* sps_bytes)
{
} /* size: 0 */

// <02045708> sbox/media/minimp4.h:3544
const void* MP4D_read_pps(const MP4D_demux_t* mp4, unsigned int ntrack, int npps, int* pps_bytes)
{
} /* size: 0 */

