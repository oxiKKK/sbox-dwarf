
//
// thirdparty/tinyexr/tinyexr.h
//
//	referenced by: libengine2.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//
//	functions: 162
//	structs: 7
//

// <0465D231> ../thirdparty/tinyexr/tinyexr.h:150
// member variables: 5
// struct size: 20
struct _EXRVersion {
	int version; /* 0 4 */
	int tiled; /* 4 4 */
	int long_name; /* 8 4 */
	int non_image; /* 12 4 */
	int multipart; /* 16 4 */
};

// <0465D29B> ../thirdparty/tinyexr/tinyexr.h:158
// member variables: 5
// struct size: 528
struct _EXRAttribute {
	char name[256]; /* 0 256 */
	char type[256]; /* 256 256 */
	unsigned char * value; /* 512 8 */
	int size; /* 520 4 */
	int pad0; /* 524 4 */
};

// <0465D305> ../thirdparty/tinyexr/tinyexr.h:166
// member variables: 6
// struct size: 272
struct _EXRChannelInfo {
	char name[256]; /* 0 256 */
	int pixel_type; /* 256 4 */
	int x_sampling; /* 260 4 */
	int y_sampling; /* 264 4 */
	unsigned char p_linear; /* 268 1 */
	unsigned char pad[3]; /* 269 3 */
};

// <0465D38F> ../thirdparty/tinyexr/tinyexr.h:175
// member variables: 7
// struct size: 32
struct _EXRTile {
	int offset_x; /* 0 4 */
	int offset_y; /* 4 4 */
	int level_x; /* 8 4 */
	int level_y; /* 12 4 */
	int width; /* 16 4 */
	int height; /* 20 4 */
	unsigned char * * images; /* 24 8 */
};

// <0465D418> ../thirdparty/tinyexr/tinyexr.h:187
// member variables: 23
// struct size: 136
struct _EXRHeader {
	float pixel_aspect_ratio; /* 0 4 */
	int line_order; /* 4 4 */
	int data_window[4]; /* 8 16 */
	int display_window[4]; /* 24 16 */
	float screen_window_center[2]; /* 40 8 */
	float screen_window_width; /* 48 4 */
	int chunk_count; /* 52 4 */
	int tiled; /* 56 4 */
	int tile_size_x; /* 60 4 */
	int tile_size_y; /* 64 4 */
	int tile_level_mode; /* 68 4 */
	int tile_rounding_mode; /* 72 4 */
	int long_name; /* 76 4 */
	int non_image; /* 80 4 */
	int multipart; /* 84 4 */
	unsigned int header_len; /* 88 4 */
	int num_custom_attributes; /* 92 4 */
	EXRAttribute * custom_attributes; /* 96 8 */
	EXRChannelInfo * channels; /* 104 8 */
	int * pixel_types; /* 112 8 */
	int num_channels; /* 120 4 */
	int compression_type; /* 124 4 */
	int * requested_pixel_types; /* 128 8 */
};

// <0465D5C3> ../thirdparty/tinyexr/tinyexr.h:236
// member variables: 6
// struct size: 32
struct _EXRImage {
	EXRTile * tiles; /* 0 8 */
	unsigned char * * images; /* 8 8 */
	int width; /* 16 4 */
	int height; /* 20 4 */
	int num_channels; /* 24 4 */
	int num_tiles; /* 28 4 */
};

// <04766D86> ../thirdparty/tinyexr/tinyexr.h:256
// member variables: 7
// struct size: 40
struct _DeepImage {
	const char * * channel_names; /* 0 8 */
	float * * * image; /* 8 8 */
	int * * offset_table; /* 16 8 */
	int num_channels; /* 24 4 */
	int width; /* 28 4 */
	int height; /* 32 4 */
	int pad0; /* 36 4 */
};

// <0465D8A2> ../thirdparty/tinyexr/tinyexr.h:299
void InitEXRHeader(EXRHeader *)
{
} /* size: 0 */

// <0465D82C> ../thirdparty/tinyexr/tinyexr.h:302
void InitEXRImage(EXRImage *)
{
} /* size: 0 */

// <0465D856> ../thirdparty/tinyexr/tinyexr.h:305
int FreeEXRHeader(EXRHeader *)
{
} /* size: 0 */

// <0465D7E0> ../thirdparty/tinyexr/tinyexr.h:308
int FreeEXRImage(EXRImage *)
{
} /* size: 0 */

// <0465D8B7> ../thirdparty/tinyexr/tinyexr.h:317
int ParseEXRVersionFromMemory(EXRVersion *, const unsigned char *, size_t)
{
} /* size: 0 */

// <0465D86F> ../thirdparty/tinyexr/tinyexr.h:329
int ParseEXRHeaderFromMemory(EXRHeader *, const EXRVersion *, const unsigned char *, size_t, const char* *)
{
} /* size: 0 */

// <0465D7F9> ../thirdparty/tinyexr/tinyexr.h:372
int LoadEXRImageFromMemory(EXRImage *, const EXRHeader *, const unsigned char *, size_t, const char* *)
{
} /* size: 0 */

// <046C2417> ../thirdparty/tinyexr/tinyexr.h:420
size_t SaveEXRImageToMemory(const EXRImage *, const EXRHeader *, unsigned char* *, const char* *)
{
} /* size: 0 */

// <0480D310> ../thirdparty/tinyexr/tinyexr.h:1932
// variables: 4
void mz_adler32(mz_ulong adler, const unsigned char* ptr, size_t buf_len)
{
	mz_uint32 i; // 1933
	mz_uint32 s1; // 1933
	mz_uint32 s2; // 1933
	size_t block_len; // 1934
} /* size: 427, variables: 4 */

// <0481187B> ../thirdparty/tinyexr/tinyexr.h:1958
// variables: 2
void mz_crc32(mz_ulong crc, const mz_uint8* ptr, size_t buf_len)
{
	mz_uint32 crcu32; // 1963
	{
		mz_uint8 b; // 1967
	}
} /* size: 0, variables: 1 */

// <0480D298> ../thirdparty/tinyexr/tinyexr.h:1958
// variables: 3
void mz_crc32(mz_ulong crc, const mz_uint8* ptr, size_t buf_len)
{
	const mz_uint32   s_crc32; // 1959
	mz_uint32 crcu32; // 1963
	{
		mz_uint8 b; // 1967
	}
} /* size: 0, variables: 2 */

// <0480D24F> ../thirdparty/tinyexr/tinyexr.h:1974
void mz_free(void* p)
{
} /* size: 0 */

// <0480D1D2> ../thirdparty/tinyexr/tinyexr.h:1978
void* def_alloc_func(void* opaque, size_t items, size_t size)
{
} /* size: 16 */

// <0480D172> ../thirdparty/tinyexr/tinyexr.h:1982
void def_free_func(void* opaque, void* address)
{
} /* size: 12 */

// <0480D158> ../thirdparty/tinyexr/tinyexr.h:1992
void mz_version(void)
{
} /* size: 0 */

// <0481A008> ../thirdparty/tinyexr/tinyexr.h:1994
// function calls: 2
void mz_deflateInit(mz_streamp pStream, int level)
{
	tdefl_create_comp_flags_from_zip_params(int level,
						int window_bits,
						int strategy);  // 2004
	mz_deflateInit2(mz_streamp pStream,
			int level,
			int method,
			int window_bits,
			int mem_level,
			int strategy);  // 1995
} /* size: 0, inline expansions: 2 (0 bytes) */

// <0480D133> ../thirdparty/tinyexr/tinyexr.h:1994
void mz_deflateInit(mz_streamp pStream, int level)
{
} /* size: 0 */

// <0481A1AC> ../thirdparty/tinyexr/tinyexr.h:1999
// variables: 2
void mz_deflateInit2(mz_streamp pStream, int level, int method, int window_bits, int mem_level, int strategy)
{
	tdefl_compressor* pComp; // 2001
	mz_uint comp_flags; // 2002
} /* size: 0, variables: 2 */

// <0480D072> ../thirdparty/tinyexr/tinyexr.h:2035
void mz_deflateReset(mz_streamp pStream)
{
} /* size: 0 */

// <0480CF45> ../thirdparty/tinyexr/tinyexr.h:2045
// variables: 6
// function call: 1
void mz_deflate(mz_streamp pStream, int flush)
{
	size_t in_bytes; // 2046
	size_t out_bytes; // 2046
	mz_ulong orig_total_in; // 2047
	mz_ulong orig_total_out; // 2047
	int mz_status; // 2048
	{
		tdefl_status defl_status; // 2064
		tdefl_get_adler32(tdefl_compressor* d); // 2074
	}
} /* size: 444, variables: 5 */

// <048118F1> ../thirdparty/tinyexr/tinyexr.h:2098
void mz_deflateEnd(mz_streamp pStream)
{
} /* size: 0 */

// <0481191E> ../thirdparty/tinyexr/tinyexr.h:2107
void mz_deflateBound(mz_streamp pStream, mz_ulong source_len)
{
} /* size: 0 */

// <0480CC46> ../thirdparty/tinyexr/tinyexr.h:2115
// variables: 2
// function calls: 6
void mz_compress2(unsigned char* pDest, mz_ulong* pDest_len, const unsigned char* pSource, mz_ulong source_len, int level)
{
	int status; // 2117
	mz_stream stream; // 2118
	memset(void* __dest,
		int __ch,
		size_t __len);  // 2119
	tdefl_create_comp_flags_from_zip_params(int level,
						int window_bits,
						int strategy);  // 2004
	mz_deflateInit2(mz_streamp pStream,
			int level,
			int method,
			int window_bits,
			int mem_level,
			int strategy);  // 1995
	mz_deflateInit(mz_streamp pStream,
			int level);  // 2129
	mz_deflateEnd(mz_streamp pStream); // 2139
	mz_deflateEnd(mz_streamp pStream); // 2134
} /* size: 403, variables: 2, inline expansions: 6 (363 bytes) */

// <04819F83> ../thirdparty/tinyexr/tinyexr.h:2142
void mz_compress(unsigned char* pDest, mz_ulong* pDest_len, const unsigned char* pSource, mz_ulong source_len)
{
} /* size: 0 */

// <04811952> ../thirdparty/tinyexr/tinyexr.h:2148
// function call: 1
void mz_compressBound(mz_ulong source_len)
{
	mz_deflateBound(mz_streamp pStream,
			mz_ulong source_len);  // 2149
} /* size: 0, inline expansions: 1 (0 bytes) */

// <0480CBEF> ../thirdparty/tinyexr/tinyexr.h:2148
void mz_compressBound(mz_ulong source_len)
{
} /* size: 0 */

// <048119BC> ../thirdparty/tinyexr/tinyexr.h:2160
// variable: 1
void mz_inflateInit2(mz_streamp pStream, int window_bits)
{
	inflate_state* pDecomp; // 2161
} /* size: 0, variables: 1 */

// <04811A19> ../thirdparty/tinyexr/tinyexr.h:2193
// function call: 1
void mz_inflateInit(mz_streamp pStream)
{
	mz_inflateInit2(mz_streamp pStream,
			int window_bits);  // 2194
} /* size: 0, inline expansions: 1 (0 bytes) */

// <0480CBA5> ../thirdparty/tinyexr/tinyexr.h:2193
void mz_inflateInit(mz_streamp pStream)
{
} /* size: 0 */

// <0480C9A7> ../thirdparty/tinyexr/tinyexr.h:2197
// variables: 8
// function calls: 2
void mz_inflate(mz_streamp pStream, int flush)
{
	inflate_state* pState; // 2198
	mz_uint n; // 2199
	mz_uint first_call; // 2199
	mz_uint decomp_flags; // 2199
	size_t in_bytes; // 2200
	size_t out_bytes; // 2200
	size_t orig_avail_in; // 2200
	tinfl_status status; // 2201
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 2279
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 2250
} /* size: 1017, variables: 8, inline expansions: 2 (27 bytes) */

// <0480C98F> ../thirdparty/tinyexr/tinyexr.h:2314
void mz_inflateEnd(mz_streamp pStream)
{
} /* size: 0 */

// <0480C7A4> ../thirdparty/tinyexr/tinyexr.h:2323
// variables: 2
// function calls: 5
void mz_uncompress(unsigned char* pDest, mz_ulong* pDest_len, const unsigned char* pSource, mz_ulong source_len)
{
	mz_stream stream; // 2325
	int status; // 2326
	memset(void* __dest,
		int __ch,
		size_t __len);  // 2327
	mz_inflateInit2(mz_streamp pStream,
			int window_bits);  // 2194
	mz_inflateInit(mz_streamp pStream); // 2337
	mz_inflateEnd(mz_streamp pStream); // 2348
	mz_deflateEnd(mz_streamp pStream); // 2342
} /* size: 355, variables: 2, inline expansions: 5 (197 bytes) */

// <0480C68C> ../thirdparty/tinyexr/tinyexr.h:2351
// variables: 2
void mz_error(int err)
{
	 s_error_descs; // 2355
	mz_uint i; // 2365
} /* size: 0, variables: 2 */

// <0480BB78> ../thirdparty/tinyexr/tinyexr.h:2517
// variables: 70
// function calls: 9
void tinfl_decompress(tinfl_decompressor* r, const mz_uint8* pIn_buf_next, size_t* pIn_buf_size, mz_uint8* pOut_buf_start, mz_uint8* pOut_buf_next, size_t* pOut_buf_size, const mz_uint32 decomp_flags)
{

common_exit: // 2906
	const int   s_length_base; // 2522
	const int   s_length_extra; // 2525
	const int   s_dist_base; // 2528
	const int   s_dist_extra; // 2532
	const mz_uint8   s_length_dezigzag; // 2535
	const int   s_min_table_sizes; // 2537
	tinfl_status status; // 2539
	mz_uint32 num_bits; // 2540
	mz_uint32 dist; // 2540
	mz_uint32 counter; // 2540
	mz_uint32 num_extra; // 2540
	tinfl_bit_buf_t bit_buf; // 2541
	const mz_uint8* pIn_buf_cur; // 2542
	const mz_uint8* pIn_buf_end; // 2542
	mz_uint8* pOut_buf_cur; // 2544
	const mz_uint8* pOut_buf_end; // 2544
	size_t out_buf_size_mask; // 2546
	size_t dist_from_out_buf_start; // 2550
	{
		mz_uint c; // 2586
	}
	{
		mz_uint c; // 2589
	}
	{
		mz_uint c; // 2592
	}
	{
		mz_uint c; // 2602
	}
	{
		size_t n; // 2610
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 2624
	}
	{
		mz_uint8* p; // 2633
		mz_uint i; // 2634
		memset(void* __dest,
			int __ch,
			size_t __len);  // 2637
	}
	{
		mz_uint c; // 2644
	}
	{
		mz_uint s; // 2649
		{
			mz_uint c; // 2650
		}
	}
	{
		int tree_next; // 2656
		int tree_cur; // 2656
		tinfl_huff_table* pTable; // 2657
		mz_uint i; // 2658
		mz_uint j; // 2658
		mz_uint used_syms; // 2658
		mz_uint total; // 2658
		mz_uint sym_index; // 2658
		mz_uint next_code; // 2658
		mz_uint total_syms; // 2659
		{
			mz_uint rev_code; // 2677
			mz_uint l; // 2677
			mz_uint cur_code; // 2677
			mz_uint code_size; // 2678
			{
				mz_int16 k; // 2684
			}
		}
		{
			mz_uint s; // 2715
			{
				int temp; // 2716
				mz_uint code_len; // 2716
				mz_uint c; // 2716
			}
			{
				mz_uint c; // 2725
			}
			memset(void* __dest,
				int __ch,
				size_t __len);  // 2727
		}
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 2734
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 2736
		memset(void* __dest,
			int __ch,
			size_t __len);  // 2661
		memset(void* __dest,
			int __ch,
			size_t __len);  // 2662
		memset(void* __dest,
			int __ch,
			size_t __len);  // 2663
	}
	{
		mz_uint8* pSrc; // 2742
		{
			int temp; // 2746
			mz_uint code_len; // 2746
			mz_uint c; // 2746
		}
		{
			int sym2; // 2753
			mz_uint code_len; // 2754
		}
		{
			mz_uint extra_bits; // 2825
			{
				mz_uint c; // 2826
			}
		}
		{
			int temp; // 2830
			mz_uint code_len; // 2830
			mz_uint c; // 2830
		}
		{
			mz_uint extra_bits; // 2834
			{
				mz_uint c; // 2835
			}
		}
	}
	{
		mz_uint c; // 2893
	}
	{
		mz_uint s; // 2895
		{
			mz_uint c; // 2897
		}
	}
	{
		const mz_uint8* ptr; // 2918
		size_t buf_len; // 2919
		mz_uint32 i; // 2920
		mz_uint32 s1; // 2920
		mz_uint32 s2; // 2921
		size_t block_len; // 2922
	}
	memset(void* __dest,
		int __ch,
		size_t __len);  // 2647
} /* size: 9287, variables: 18, goto labels: 1, inline expansions: 1 (24 bytes) */

// <0480B9C5> ../thirdparty/tinyexr/tinyexr.h:2949
// variables: 9
void* tinfl_decompress_mem_to_heap(const void* pSrc_buf, size_t src_buf_len, size_t* pOut_len, int flags)
{
	tinfl_decompressor decomp; // 2951
	void* pBuf; // 2952
	void* pNew_buf; // 2952
	size_t src_buf_ofs; // 2953
	size_t out_buf_capacity; // 2953
	{
		size_t src_buf_size; // 2957
		size_t dst_buf_size; // 2958
		size_t new_out_buf_capacity; // 2958
		tinfl_status status; // 2959
	}
} /* size: 0, variables: 5 */

// <0480B8CA> ../thirdparty/tinyexr/tinyexr.h:2987
// variables: 2
void tinfl_decompress_mem_to_mem(void* pOut_buf, size_t out_buf_len, const void* pSrc_buf, size_t src_buf_len, int flags)
{
	tinfl_decompressor decomp; // 2990
	tinfl_status status; // 2991
} /* size: 0, variables: 2 */

// <0480B6F0> ../thirdparty/tinyexr/tinyexr.h:3002
// variables: 8
void tinfl_decompress_mem_to_callback(const void* pIn_buf, size_t* pIn_buf_size, tinfl_put_buf_func_ptr pPut_buf_func, void* pPut_buf_user, int flags)
{
	int result; // 3005
	tinfl_decompressor decomp; // 3006
	mz_uint8* pDict; // 3007
	size_t in_buf_ofs; // 3008
	size_t dict_ofs; // 3008
	{
		size_t in_buf_size; // 3012
		size_t dst_buf_size; // 3013
		tinfl_status status; // 3014
	}
} /* size: 0, variables: 5 */

// <0480B5D5> ../thirdparty/tinyexr/tinyexr.h:3146
// variables: 12
void tdefl_radix_sort_syms(mz_uint num_syms, tdefl_sym_freq* pSyms0, tdefl_sym_freq* pSyms1)
{
	mz_uint32 total_passes; // 3149
	mz_uint32 pass_shift; // 3149
	mz_uint32 pass; // 3149
	mz_uint32 i; // 3149
	mz_uint32 hist; // 3149
	tdefl_sym_freq* pCur_syms; // 3150
	tdefl_sym_freq* pNew_syms; // 3150
	{
		mz_uint freq; // 3153
	}
	{
		const mz_uint32* pHist; // 3160
		mz_uint offsets; // 3161
		mz_uint cur_ofs; // 3161
		{
			tdefl_sym_freq* t; // 3170
		}
	}
} /* size: 0, variables: 7 */

// <0480B566> ../thirdparty/tinyexr/tinyexr.h:3180
// variables: 6
void tdefl_calculate_minimum_redundancy(tdefl_sym_freq* A, int n)
{
	int root; // 3181
	int leaf; // 3181
	int next; // 3181
	int avbl; // 3181
	int used; // 3181
	int dpth; // 3181
} /* size: 0, variables: 6 */

// <0480B51C> ../thirdparty/tinyexr/tinyexr.h:3227
// variables: 2
void tdefl_huffman_enforce_max_code_size(int* pNum_codes, int code_list_len, int max_code_size)
{
	int i; // 3230
	mz_uint32 total; // 3231
} /* size: 0, variables: 2 */

// <0480B019> ../thirdparty/tinyexr/tinyexr.h:3249
// variables: 17
// function calls: 7
void tdefl_optimize_huffman_table(tdefl_compressor* d, int table_num, int table_len, int code_size_limit, int static_table)
{
	int i; // 3252
	int j; // 3252
	int l; // 3252
	int num_codes; // 3252
	mz_uint next_code; // 3253
	{
		 syms0; // 3259
		 syms1; // 3259
		tdefl_sym_freq* pSyms; // 3260
		int num_used_syms; // 3261
		const mz_uint16* pSym_count; // 3262
		memset(void* __dest,
			int __ch,
			size_t __len);  // 3151
		{
			mz_uint freq; // 3153
		}
		{
			const mz_uint32* pHist; // 3160
			mz_uint offsets; // 3161
			mz_uint cur_ofs; // 3161
		}
		tdefl_radix_sort_syms(mz_uint num_syms,
					tdefl_sym_freq* pSyms0,
					tdefl_sym_freq* pSyms1);  // 3269
		tdefl_calculate_minimum_redundancy(tdefl_sym_freq* A,
							int n);  // 3270
		tdefl_huffman_enforce_max_code_size(int* pNum_codes,
							int code_list_len,
							int max_code_size);  // 3274
		memset(void* __dest,
			int __ch,
			size_t __len);  // 3277
		memset(void* __dest,
			int __ch,
			size_t __len);  // 3278
	}
	{
		mz_uint rev_code; // 3289
		mz_uint code; // 3289
		mz_uint code_size; // 3289
	}
	memset(void* __dest,
		int __ch,
		size_t __len);  // 3254
} /* size: 2071, variables: 5, inline expansions: 1 (24 bytes) */

// <0480ABCE> ../thirdparty/tinyexr/tinyexr.h:3357
// variables: 28
// function calls: 3
void tdefl_start_dynamic_block(tdefl_compressor* d)
{
	int num_lit_codes; // 3358
	int num_dist_codes; // 3358
	int num_bit_lengths; // 3358
	mz_uint i; // 3359
	mz_uint total_code_sizes_to_pack; // 3359
	mz_uint num_packed_code_sizes; // 3359
	mz_uint rle_z_count; // 3359
	mz_uint rle_repeat_count; // 3360
	mz_uint packed_code_sizes_index; // 3360
	mz_uint8 code_sizes_to_pack; // 3362
	mz_uint8 packed_code_sizes; // 3363
	mz_uint8 prev_code_size; // 3364
	{
		mz_uint8 code_size; // 3387
	}
	{
		mz_uint bits; // 3414
		mz_uint len; // 3414
	}
	{
		mz_uint bits; // 3416
		mz_uint len; // 3416
	}
	{
		mz_uint bits; // 3417
		mz_uint len; // 3417
	}
	{
		mz_uint bits; // 3424
		mz_uint len; // 3424
	}
	{
		mz_uint bits; // 3426
		mz_uint len; // 3426
	}
	{
		mz_uint code; // 3431
		{
			mz_uint bits; // 3433
			mz_uint len; // 3433
		}
		{
			mz_uint bits; // 3435
			mz_uint len; // 3435
		}
	}
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 3376
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 3377
	memset(void* __dest,
		int __ch,
		size_t __len);  // 3384
} /* size: 2604, variables: 12, inline expansions: 3 (248 bytes) */

// <0480AB86> ../thirdparty/tinyexr/tinyexr.h:3440
// variables: 4
void tdefl_start_static_block(tdefl_compressor* d)
{
	mz_uint i; // 3441
	mz_uint8* p; // 3442
	{
		mz_uint bits; // 3454
		mz_uint len; // 3454
	}
} /* size: 0, variables: 2 */

// <0480AA55> ../thirdparty/tinyexr/tinyexr.h:3556
// variables: 19
void tdefl_compress_lz_codes(tdefl_compressor* d)
{
	mz_uint flags; // 3557
	mz_uint8* pLZ_codes; // 3558
	{
		mz_uint sym; // 3565
		mz_uint num_extra_bits; // 3565
		mz_uint match_len; // 3566
		mz_uint match_dist; // 3567
		{
			mz_uint bits; // 3571
			mz_uint len; // 3571
		}
		{
			mz_uint bits; // 3573
			mz_uint len; // 3573
		}
		{
			mz_uint bits; // 3584
			mz_uint len; // 3584
		}
		{
			mz_uint bits; // 3585
			mz_uint len; // 3585
		}
	}
	{
		mz_uint lit; // 3587
		{
			mz_uint bits; // 3589
			mz_uint len; // 3589
		}
	}
	{
		mz_uint bits; // 3593
		mz_uint len; // 3593
	}
} /* size: 0, variables: 2 */

// <0480A748> ../thirdparty/tinyexr/tinyexr.h:3600
// variables: 19
// function calls: 3
void tdefl_compress_block(tdefl_compressor* d, mz_bool static_block)
{
	memset(void* __dest,
		int __ch,
		size_t __len);  // 3449
	{
		mz_uint bits; // 3454
		mz_uint len; // 3454
	}
	tdefl_start_static_block(tdefl_compressor* d); // 3602
	{
		mz_uint sym; // 3565
		mz_uint num_extra_bits; // 3565
		mz_uint match_len; // 3566
		mz_uint match_dist; // 3567
		{
			mz_uint bits; // 3571
			mz_uint len; // 3571
		}
		{
			mz_uint bits; // 3573
			mz_uint len; // 3573
		}
		{
			mz_uint bits; // 3584
			mz_uint len; // 3584
		}
		{
			mz_uint bits; // 3585
			mz_uint len; // 3585
		}
	}
	{
		mz_uint lit; // 3587
		{
			mz_uint bits; // 3589
			mz_uint len; // 3589
		}
	}
	{
		mz_uint bits; // 3593
		mz_uint len; // 3593
	}
	tdefl_compress_lz_codes(tdefl_compressor* d); // 3605
} /* size: 1539, inline expansions: 3 (1529 bytes) */

// <0480A1E5> ../thirdparty/tinyexr/tinyexr.h:3608
// variables: 37
// function calls: 3
void tdefl_flush_block(tdefl_compressor* d, int flush)
{
	mz_uint saved_bit_buf; // 3609
	mz_uint saved_bits_in; // 3609
	mz_uint8* pSaved_output_buf; // 3610
	mz_bool comp_block_succeeded; // 3611
	int n; // 3612
	int use_raw_block; // 3612
	mz_uint8* pOutput_buf_start; // 3615
	{
		mz_uint bits; // 3632
		mz_uint len; // 3632
	}
	{
		mz_uint bits; // 3633
		mz_uint len; // 3633
	}
	{
		mz_uint bits; // 3636
		mz_uint len; // 3636
	}
	{
		mz_uint i; // 3653
		{
			mz_uint bits; // 3656
			mz_uint len; // 3656
		}
		{
			mz_uint bits; // 3658
			mz_uint len; // 3658
		}
		{
			mz_uint bits; // 3661
			mz_uint len; // 3661
		}
		{
			mz_uint bits; // 3664
			mz_uint len; // 3664
		}
	}
	{
		mz_uint bits; // 3680
		mz_uint len; // 3680
	}
	{
		mz_uint i; // 3683
		mz_uint a; // 3683
		{
			mz_uint bits; // 3685
			mz_uint len; // 3685
		}
	}
	{
		mz_uint i; // 3690
		mz_uint z; // 3690
		{
			mz_uint bits; // 3691
			mz_uint len; // 3691
		}
		{
			mz_uint bits; // 3693
			mz_uint len; // 3693
		}
		{
			mz_uint bits; // 3696
			mz_uint len; // 3696
		}
	}
	{
		int bytes_to_copy; // 3721
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 3723
	}
	memset(void* __dest,
		int __ch,
		size_t __len);  // 3703
	memset(void* __dest,
		int __ch,
		size_t __len);  // 3705
} /* size: 2416, variables: 7, inline expansions: 2 (36 bytes) */

// <0480A0FA> ../thirdparty/tinyexr/tinyexr.h:3795
// variables: 12
inline void tdefl_find_match(tdefl_compressor* d, mz_uint lookahead_pos, mz_uint max_dist, mz_uint max_match_len, mz_uint* pMatch_dist, mz_uint* pMatch_len)
{
	mz_uint dist; // 3798
	mz_uint pos; // 3798
	mz_uint match_len; // 3799
	mz_uint probe_pos; // 3799
	mz_uint next_probe_pos; // 3799
	mz_uint probe_len; // 3800
	mz_uint num_probes_left; // 3801
	const mz_uint8* s; // 3802
	const mz_uint8* p; // 3802
	const mz_uint8* q; // 3802
	mz_uint8 c0; // 3803
	mz_uint8 c1; // 3803
} /* size: 0, variables: 12 */

// <0480A0D1> ../thirdparty/tinyexr/tinyexr.h:4019
inline void tdefl_record_literal(tdefl_compressor* d, mz_uint8 lit)
{
} /* size: 0 */

// <0480A089> ../thirdparty/tinyexr/tinyexr.h:4031
// variables: 2
inline void tdefl_record_match(tdefl_compressor* d, mz_uint match_len, mz_uint match_dist)
{
	mz_uint32 s0; // 4034
	mz_uint32 s1; // 4034
} /* size: 0, variables: 2 */

// <04809F6A> ../thirdparty/tinyexr/tinyexr.h:4062
// variables: 19
void tdefl_compress_normal(tdefl_compressor* d)
{
	const mz_uint8* pSrc; // 4063
	size_t src_buf_left; // 4064
	tdefl_flush flush; // 4065
	{
		mz_uint len_to_move; // 4068
		mz_uint cur_match_dist; // 4068
		mz_uint cur_match_len; // 4068
		mz_uint cur_pos; // 4068
		{
			mz_uint dst_pos; // 4072
			mz_uint ins_pos; // 4074
			mz_uint hash; // 4075
			mz_uint num_bytes_to_process; // 4078
			const mz_uint8* pSrc_end; // 4080
			{
				mz_uint8 c; // 4084
			}
		}
		{
			mz_uint8 c; // 4096
			mz_uint dst_pos; // 4097
			{
				mz_uint ins_pos; // 4104
				mz_uint hash; // 4105
			}
		}
		{
			mz_uint8 c; // 4128
		}
		{
			int n; // 4191
		}
	}
} /* size: 0, variables: 3 */

// <04809EC0> ../thirdparty/tinyexr/tinyexr.h:4204
// variable: 1
// function call: 1
void tdefl_flush_output_buffer(tdefl_compressor* d)
{
	{
		size_t n; // 4210
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 4212
	}
} /* size: 184 */

// <048098EA> ../thirdparty/tinyexr/tinyexr.h:4225
// variables: 16
// function calls: 9
void tdefl_compress(tdefl_compressor* d, const void* pIn_buf, size_t* pIn_buf_size, void* pOut_buf, size_t* pOut_buf_size, tdefl_flush flush)
{
	{
		mz_uint len_to_move; // 4068
		mz_uint cur_match_dist; // 4068
		mz_uint cur_match_len; // 4068
		mz_uint cur_pos; // 4068
		{
			mz_uint dst_pos; // 4072
			mz_uint ins_pos; // 4074
			mz_uint hash; // 4075
			mz_uint num_bytes_to_process; // 4078
			const mz_uint8* pSrc_end; // 4080
			{
				mz_uint8 c; // 4084
			}
		}
		{
			mz_uint8 c; // 4096
			mz_uint dst_pos; // 4097
			{
				mz_uint ins_pos; // 4104
				mz_uint hash; // 4105
			}
		}
		{
			mz_uint8 c; // 4128
		}
		tdefl_find_match(tdefl_compressor* d,
				mz_uint lookahead_pos,
				mz_uint max_dist,
				mz_uint max_match_len,
				mz_uint* pMatch_dist,
				mz_uint* pMatch_len);  // 4140
		tdefl_record_literal(tdefl_compressor* d,
					mz_uint8 lit);  // 4151
		tdefl_record_match(tdefl_compressor* d,
					mz_uint match_len,
					mz_uint match_dist);  // 4171
		{
			int n; // 4191
		}
		tdefl_record_literal(tdefl_compressor* d,
					mz_uint8 lit);  // 4167
		tdefl_record_match(tdefl_compressor* d,
					mz_uint match_len,
					mz_uint match_dist);  // 4162
		tdefl_record_match(tdefl_compressor* d,
					mz_uint match_len,
					mz_uint match_dist);  // 4153
	}
	tdefl_compress_normal(tdefl_compressor* d); // 4267
	memset(void* __dest,
		int __ch,
		size_t __len);  // 4281
	memset(void* __dest,
		int __ch,
		size_t __len);  // 4282
} /* size: 3663, inline expansions: 3 (3010 bytes) */

// <04819EFC> ../thirdparty/tinyexr/tinyexr.h:4290
void tdefl_compress_buffer(tdefl_compressor* d, const void* pIn_buf, size_t in_buf_size, tdefl_flush flush)
{
} /* size: 0 */

// <0480971B> ../thirdparty/tinyexr/tinyexr.h:4296
// function calls: 3
void tdefl_init(tdefl_compressor* d, tdefl_put_buf_func_ptr pPut_buf_func, void* pPut_buf_user, int flags)
{
	memset(void* __dest,
		int __ch,
		size_t __len);  // 4326
	memset(void* __dest,
		int __ch,
		size_t __len);  // 4328
	memset(void* __dest,
		int __ch,
		size_t __len);  // 4305
} /* size: 328, inline expansions: 3 (60 bytes) */

// <048096EE> ../thirdparty/tinyexr/tinyexr.h:4333
void tdefl_get_prev_return_status(tdefl_compressor* d)
{
} /* size: 0 */

// <0481A141> ../thirdparty/tinyexr/tinyexr.h:4337
void tdefl_get_adler32(tdefl_compressor* d)
{
} /* size: 0 */

// <04809535> ../thirdparty/tinyexr/tinyexr.h:4339
// variables: 2
// function call: 1
void tdefl_compress_mem_to_output(const void* pBuf, size_t buf_len, tdefl_put_buf_func_ptr pPut_buf_func, void* pPut_buf_user, int flags)
{
	tdefl_compressor* pComp; // 4342
	mz_bool succeeded; // 4343
	tdefl_compress_buffer(tdefl_compressor* d,
				const void* pIn_buf,
				size_t in_buf_size,
				tdefl_flush flush);  // 4350
} /* size: 0, variables: 2, inline expansions: 1 (0 bytes) */

// <04809414> ../thirdparty/tinyexr/tinyexr.h:4362
// variables: 4
// function call: 1
void tdefl_output_buffer_putter(const void* pBuf, int len, void* pUser)
{
	tdefl_output_buffer* p; // 4364
	size_t new_size; // 4365
	{
		size_t new_capacity; // 4367
		mz_uint8* pNew_buf; // 4368
	}
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 4378
} /* size: 0, variables: 2, inline expansions: 1 (0 bytes) */

// <04809300> ../thirdparty/tinyexr/tinyexr.h:4383
// variable: 1
// function call: 1
void* tdefl_compress_mem_to_heap(const void* pSrc_buf, size_t src_buf_len, size_t* pOut_len, int flags)
{
	tdefl_output_buffer out_buf; // 4385
	memset(void* __dest,
		int __ch,
		size_t __len);  // 4386
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <048091D2> ../thirdparty/tinyexr/tinyexr.h:4399
// variable: 1
// function call: 1
void tdefl_compress_mem_to_mem(void* pOut_buf, size_t out_buf_len, const void* pSrc_buf, size_t src_buf_len, int flags)
{
	tdefl_output_buffer out_buf; // 4402
	memset(void* __dest,
		int __ch,
		size_t __len);  // 4403
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <0481A168> ../thirdparty/tinyexr/tinyexr.h:4420
// variable: 1
void tdefl_create_comp_flags_from_zip_params(int level, int window_bits, int strategy)
{
	mz_uint comp_flags; // 4422
} /* size: 0, variables: 1 */

// <04808BC9> ../thirdparty/tinyexr/tinyexr.h:4461
// variables: 11
// function calls: 6
void* tdefl_write_image_to_png_file_in_memory_ex(const void* pImage, int w, int h, int num_chans, size_t* pLen_out, mz_uint level, mz_bool flip)
{
	const mz_uint   s_tdefl_png_num_probes; // 4467
	tdefl_compressor* pComp; // 4469
	tdefl_output_buffer out_buf; // 4471
	int i; // 4472
	int bpl; // 4472
	int y; // 4472
	int z; // 4472
	mz_uint32 c; // 4473
	{
		const mz_uint8   chans; // 4504
		mz_uint8 pnghdr; // 4505
		{
			mz_uint8 b; // 1967
		}
		mz_crc32(mz_ulong crc,
			const mz_uint8* ptr,
			size_t buf_len);  // 4546
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 4549
	}
	memset(void* __dest,
		int __ch,
		size_t __len);  // 4476
	tdefl_compress_buffer(tdefl_compressor* d,
				const void* pIn_buf,
				size_t in_buf_size,
				tdefl_flush flush);  // 4490
	tdefl_compress_buffer(tdefl_compressor* d,
				const void* pIn_buf,
				size_t in_buf_size,
				tdefl_flush flush);  // 4491
	tdefl_compress_buffer(tdefl_compressor* d,
				const void* pIn_buf,
				size_t in_buf_size,
				tdefl_flush flush);  // 4495
} /* size: 0, variables: 8, inline expansions: 4 (0 bytes) */

// <04808B0A> ../thirdparty/tinyexr/tinyexr.h:4568
void* tdefl_write_image_to_png_file_in_memory(const void* pImage, int w, int h, int num_chans, size_t* pLen_out)
{
} /* size: 0 */

// <0480DEB9> ../thirdparty/tinyexr/tinyexr.h:6979
void SetErrorMessage(const char ** err, const string& msg)
{
} /* size: 0 */

// <04808AA6> ../thirdparty/tinyexr/tinyexr.h:6991
// variables: 2
void cpy2(short unsigned int* dst_val, const short unsigned int* src_val)
{
	unsigned char* dst; // 6992
	const unsigned char* src; // 6993
} /* size: 0, variables: 2 */

// <04808A8E> ../thirdparty/tinyexr/tinyexr.h:6999
void swap2(short unsigned int* val)
{
} /* size: 0 */

// <04808A4F> ../thirdparty/tinyexr/tinyexr.h:7021
// variables: 2
void cpy4(int* dst_val, const int* src_val)
{
	unsigned char* dst; // 7022
	const unsigned char* src; // 7023
} /* size: 0, variables: 2 */

// <04808A10> ../thirdparty/tinyexr/tinyexr.h:7031
// variables: 2
void cpy4(unsigned int* dst_val, const unsigned int* src_val)
{
	unsigned char* dst; // 7032
	const unsigned char* src; // 7033
} /* size: 0, variables: 2 */

// <048089D1> ../thirdparty/tinyexr/tinyexr.h:7041
// variables: 2
void cpy4(float* dst_val, const float* src_val)
{
	unsigned char* dst; // 7042
	const unsigned char* src; // 7043
} /* size: 0, variables: 2 */

// <048089B9> ../thirdparty/tinyexr/tinyexr.h:7058
void swap4(unsigned int* val)
{
} /* size: 0 */

// <048089A1> ../thirdparty/tinyexr/tinyexr.h:7089
void swap8(tinyexr_uint64* val)
{
} /* size: 0 */

// <04808953> ../thirdparty/tinyexr/tinyexr.h:7150
// variables: 4
void half_to_float(union FP16 h)
{
	const union FP32  magic; // 7151
	const unsigned int  shifted_exp; // 7152
	union FP32 o; // 7154
	unsigned int exp_; // 7157
} /* size: 0, variables: 4 */

// <048088CC> ../thirdparty/tinyexr/tinyexr.h:7173
// variables: 3
void float_to_half_full(union FP32 f)
{
	union FP16 o; // 7174
	{
		int newexp; // 7186
		{
			unsigned int mant; // 7193
		}
	}
} /* size: 220, variables: 1 */

// <04808886> ../thirdparty/tinyexr/tinyexr.h:7233
// variables: 2
void ReadString(string* s, const char* ptr, size_t len)
{
	const char* p; // 7235
	const char* q; // 7236
} /* size: 0, variables: 2 */

// <0481A452> ../thirdparty/tinyexr/tinyexr.h:7251
// variables: 7
// function calls: 137
void ReadAttribute(string* name, string* type, vector<unsigned char, std::allocator<unsigned char> >* data, size_t* marker_size, const char* marker, size_t size)
{
	size_t name_len; // 7254
	size_t type_len; // 7264
	uint32_t data_len; // 7277
	__new_allocator<char>::__new_allocator(
			const __new_allocator<char>  &);  // 173
	allocator<char>::allocator(
			const allocator<char>& __a);  // 205
	_Alloc_hider::_Alloc_hider(
			pointer __dat,
			const allocator<char>& __a);  // 686
	_Guard::_Guard(
		basic_string<char, std::char_traits<char>, std::allocator<char> >* __s);  // 251
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 253
	copy(char_type* __s1,
		const char_type* __s2,
		size_t __n);  // 453
	_S_copy(char* __d,
		const char* __s,
		size_type __n);  // 448
	assign(char_type& __c1,
		const char_type& __c2);  // 451
	_S_copy(char* __d,
		const char* __s,
		size_type __n);  // 489
	_S_copy_chars<char const*>(char* __p,
					const char* __k1,
					const char* __k2);  // 253
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
			size_type __length);  // 272
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 273
	assign(char_type& __c1,
		const char_type& __c2);  // 273
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
			size_type __n);  // 257
	_Guard::~_Guard(); // 258
	__new_allocator<char>::allocate(
		size_type __n,
		const void  *);  // 203
	allocator<char>::allocate(
		size_t __n);  // 614
	allocate(allocator_type& __a,
		size_type __n);  // 142
	_S_allocate(_Char_alloc_type& __a,
			size_type __n);  // 164
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_create(
			size_type& __capacity,
			size_type __old_capacity);  // 235
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_capacity(
			size_type __capacity);  // 236
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
		pointer __p);  // 235
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_construct<char const*>(
					const char* __beg,
					const char* __end,
					forward_iterator_tag);  // 692
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 686
	basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(
			const char* __s,
			size_type __n,
			const allocator<char>& __a);  // 7259
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 280
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 950
	{
		pointer __data; // 976
		size_type __capacity; // 977
		basic_string<char, std::char_traits<char>, std::allocator<char> >::size(); // 1176
		basic_string<char, std::char_traits<char>, std::allocator<char> >::length(); // 991
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
			pointer __p);  // 990
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
				size_type __length);  // 991
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
			pointer __p);  // 995
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_capacity(
				size_type __capacity);  // 996
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
			pointer __p);  // 999
	}
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 280
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 961
	copy(char_type* __s1,
		const char_type* __s2,
		size_t __n);  // 453
	_S_copy(char* __d,
		const char* __s,
		size_type __n);  // 448
	assign(char_type& __c1,
		const char_type& __c2);  // 451
	_S_copy(char* __d,
		const char* __s,
		size_type __n);  // 969
	basic_string<char, std::char_traits<char>, std::allocator<char> >::size(); // 970
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 273
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
			size_type __length);  // 272
	assign(char_type& __c1,
		const char_type& __c2);  // 273
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
			size_type __n);  // 970
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 273
	assign(char_type& __c1,
		const char_type& __c2);  // 273
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
			size_type __n);  // 1323
	basic_string<char, std::char_traits<char>, std::allocator<char> >::clear(); // 1003
	basic_string<char, std::char_traits<char>, std::allocator<char> >::operator=(
			basic_string<char, std::char_traits<char>, std::allocator<char> >& __str);  // 7259
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 280
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 298
	__new_allocator<char>::deallocate(
			char* __p,
			size_type __n);  // 215
	allocator<char>::deallocate(
			char* __p,
			size_t __n);  // 649
	deallocate(allocator_type& __a,
			pointer __p,
			size_type __n);  // 305
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_destroy(
			size_type __size);  // 299
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_dispose(); // 896
	allocator<char>::~allocator(); // 197
	_Alloc_hider::~_Alloc_hider(); // 896
	basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 7259
	allocator<char>::~allocator(); // 7259
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 686
	__new_allocator<char>::__new_allocator(
			const __new_allocator<char>  &);  // 173
	allocator<char>::allocator(
			const allocator<char>& __a);  // 205
	_Alloc_hider::_Alloc_hider(
			pointer __dat,
			const allocator<char>& __a);  // 686
	_Guard::_Guard(
		basic_string<char, std::char_traits<char>, std::allocator<char> >* __s);  // 251
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 253
	copy(char_type* __s1,
		const char_type* __s2,
		size_t __n);  // 453
	_S_copy(char* __d,
		const char* __s,
		size_type __n);  // 448
	assign(char_type& __c1,
		const char_type& __c2);  // 451
	_S_copy(char* __d,
		const char* __s,
		size_type __n);  // 489
	_S_copy_chars<char const*>(char* __p,
					const char* __k1,
					const char* __k2);  // 253
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
			size_type __length);  // 272
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 273
	assign(char_type& __c1,
		const char_type& __c2);  // 273
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
			size_type __n);  // 257
	_Guard::~_Guard(); // 258
	__new_allocator<char>::allocate(
		size_type __n,
		const void  *);  // 203
	allocator<char>::allocate(
		size_t __n);  // 614
	allocate(allocator_type& __a,
		size_type __n);  // 142
	_S_allocate(_Char_alloc_type& __a,
			size_type __n);  // 164
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_create(
			size_type& __capacity,
			size_type __old_capacity);  // 235
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_capacity(
			size_type __capacity);  // 236
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
		pointer __p);  // 235
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_construct<char const*>(
					const char* __beg,
					const char* __end,
					forward_iterator_tag);  // 692
	basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(
			const char* __s,
			size_type __n,
			const allocator<char>& __a);  // 7268
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 280
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 950
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 280
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 961
	{
		pointer __data; // 976
		size_type __capacity; // 977
		basic_string<char, std::char_traits<char>, std::allocator<char> >::size(); // 1176
		basic_string<char, std::char_traits<char>, std::allocator<char> >::length(); // 991
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
				size_type __length);  // 991
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
			pointer __p);  // 990
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
			pointer __p);  // 995
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_capacity(
				size_type __capacity);  // 996
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
			pointer __p);  // 999
	}
	copy(char_type* __s1,
		const char_type* __s2,
		size_t __n);  // 453
	_S_copy(char* __d,
		const char* __s,
		size_type __n);  // 448
	assign(char_type& __c1,
		const char_type& __c2);  // 451
	_S_copy(char* __d,
		const char* __s,
		size_type __n);  // 969
	basic_string<char, std::char_traits<char>, std::allocator<char> >::size(); // 970
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 273
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
			size_type __length);  // 272
	assign(char_type& __c1,
		const char_type& __c2);  // 273
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
			size_type __n);  // 970
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 273
	assign(char_type& __c1,
		const char_type& __c2);  // 273
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
			size_type __n);  // 1323
	basic_string<char, std::char_traits<char>, std::allocator<char> >::clear(); // 1003
	basic_string<char, std::char_traits<char>, std::allocator<char> >::operator=(
			basic_string<char, std::char_traits<char>, std::allocator<char> >& __str);  // 7268
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 280
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 298
	__new_allocator<char>::deallocate(
			char* __p,
			size_type __n);  // 215
	allocator<char>::deallocate(
			char* __p,
			size_t __n);  // 649
	deallocate(allocator_type& __a,
			pointer __p,
			size_type __n);  // 305
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_destroy(
			size_type __size);  // 299
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_dispose(); // 896
	allocator<char>::~allocator(); // 197
	_Alloc_hider::~_Alloc_hider(); // 896
	basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 7268
	allocator<char>::~allocator(); // 7268
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 7278
	min<long unsigned int>(const long unsigned int& __a,
				const long unsigned int& __b);  // 3631
	compare(const char_type* __s1,
		const char_type* __s2,
		size_t __n);  // 3632
	_S_compare(size_type __n1,
			size_type __n2);  // 3634
	basic_string<char, std::char_traits<char>, std::allocator<char> >::compare(
		const char* __s);  // 7282
	vector<unsigned char, std::allocator<unsigned char> >::operator[](
			size_type __n);  // 7291
	vector<unsigned char, std::allocator<unsigned char> >::_M_range_check(
			size_type __n);  // 1315
	vector<unsigned char, std::allocator<unsigned char> >::at(
		size_type __n);  // 7307
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 7307
} /* size: 0, variables: 3, inline expansions: 123 (2304 bytes) */

// <04808806> ../thirdparty/tinyexr/tinyexr.h:7251
// variables: 3
void ReadAttribute(string* name, string* type, vector<unsigned char, std::allocator<unsigned char> >* data, size_t* marker_size, const char* marker, size_t size)
{
	size_t name_len; // 7254
	size_t type_len; // 7264
	uint32_t data_len; // 7277
} /* size: 0, variables: 3 */

// <048062EC> ../thirdparty/tinyexr/tinyexr.h:7313
// variables: 23
// function calls: 158
void WriteAttributeToMemory(vector<unsigned char, std::allocator<unsigned char> >* out, const char* name, const char* type, const unsigned char* data, int len)
{
	int outLen; // 7319
	__normal_iterator<unsigned char::__normal_iterator(
				unsigned char* const& __i);  // 1019
	vector<unsigned char, std::allocator<unsigned char> >::end(); // 7316
	__normal_iterator<unsigned char::base(); // 1082
	__normal_iterator<unsigned char const::__normal_iterator<unsigned char*>(
						const __normal_iterator<unsigned char*, std::vector<unsigned char, std::allocator<unsigned char> > >& __i);  // 7316
	__normal_iterator<unsigned char const::__normal_iterator(
				const unsigned char* const& __i);  // 1080
	vector<unsigned char, std::allocator<unsigned char> >::cbegin(); // 1620
	__normal_iterator<unsigned char::__normal_iterator(
				unsigned char* const& __i);  // 999
	vector<unsigned char, std::allocator<unsigned char> >::begin(); // 1621
	__normal_iterator<unsigned char::__normal_iterator(
				unsigned char* const& __i);  // 1148
	__normal_iterator<unsigned char::operator+(
			difference_type __n);  // 1621
	__normal_iterator<unsigned char::__normal_iterator(
				unsigned char* const& __i);  // 999
	vector<unsigned char, std::allocator<unsigned char> >::begin(); // 1623
	__normal_iterator<unsigned char::__normal_iterator(
				unsigned char* const& __i);  // 1148
	__normal_iterator<unsigned char::operator+(
			difference_type __n);  // 1623
	vector<unsigned char, std::allocator<unsigned char> >::insert<char const*>(
				const_iterator __position,
				const char* __first,
				const char* __last);  // 7316
	__normal_iterator<unsigned char::__normal_iterator(
				unsigned char* const& __i);  // 1019
	vector<unsigned char, std::allocator<unsigned char> >::end(); // 7317
	__normal_iterator<unsigned char::base(); // 1082
	__normal_iterator<unsigned char const::__normal_iterator<unsigned char*>(
						const __normal_iterator<unsigned char*, std::vector<unsigned char, std::allocator<unsigned char> > >& __i);  // 7317
	__normal_iterator<unsigned char const::__normal_iterator(
				const unsigned char* const& __i);  // 1080
	vector<unsigned char, std::allocator<unsigned char> >::cbegin(); // 1620
	__normal_iterator<unsigned char::__normal_iterator(
				unsigned char* const& __i);  // 999
	vector<unsigned char, std::allocator<unsigned char> >::begin(); // 1621
	__normal_iterator<unsigned char::__normal_iterator(
				unsigned char* const& __i);  // 1148
	__normal_iterator<unsigned char::operator+(
			difference_type __n);  // 1621
	__normal_iterator<unsigned char::__normal_iterator(
				unsigned char* const& __i);  // 999
	vector<unsigned char, std::allocator<unsigned char> >::begin(); // 1623
	__normal_iterator<unsigned char::__normal_iterator(
				unsigned char* const& __i);  // 1148
	__normal_iterator<unsigned char::operator+(
			difference_type __n);  // 1623
	vector<unsigned char, std::allocator<unsigned char> >::insert<char const*>(
				const_iterator __position,
				const char* __first,
				const char* __last);  // 7317
	__normal_iterator<unsigned char::__normal_iterator(
				unsigned char* const& __i);  // 1019
	vector<unsigned char, std::allocator<unsigned char> >::end(); // 7321
	{
		const size_type  __n; // 891
		{
			const size_type  __elems_after; // 895
			pointer __old_finish; // 896
			__normal_iterator<unsigned char::__normal_iterator(
						unsigned char* const& __i);  // 1019
			vector<unsigned char, std::allocator<unsigned char> >::end(); // 895
			{
				unsigned char* __mid; // 912
				{
					ptrdiff_t __n; // 269
					{
					}
				}
				uninitialized_copy<unsigned char*, unsigned char*>(unsigned char* __first,
											unsigned char* __last,
											unsigned char* __result);  // 635
				__uninitialized_copy_a<unsigned char*, unsigned char*, unsigned char*, unsigned char>(unsigned char* __first,
															unsigned char* __last,
															unsigned char* __result,
															allocator<unsigned char> &);  // 915
				move_iterator<unsigned char::move_iterator(
						iterator_type __i);  // 1804
				make_move_iterator<unsigned char*>(unsigned char* __i); // 649
				move_iterator<unsigned char::move_iterator(
						iterator_type __i);  // 1804
				make_move_iterator<unsigned char*>(unsigned char* __i); // 649
				_UninitDestroyGuard<unsigned char::_UninitDestroyGuard(
							unsigned char *& __first);  // 143
				_UninitDestroyGuard<unsigned char::~_UninitDestroyGuard(); // 148
				__do_uninit_copy<std::move_iterator<unsigned char*>, std::move_iterator<unsigned char*>, unsigned char*>(move_iterator<unsigned char*> __first,
																move_iterator<unsigned char*> __last,
																unsigned char* __result);  // 303
				uninitialized_copy<std::move_iterator<unsigned char*>, unsigned char*>(move_iterator<unsigned char*> __first,
													move_iterator<unsigned char*> __last,
													unsigned char* __result);  // 635
				__uninitialized_copy_a<std::move_iterator<unsigned char*>, std::move_iterator<unsigned char*>, unsigned char*, unsigned char>(move_iterator<unsigned char*> __first,
																move_iterator<unsigned char*> __last,
																unsigned char* __result,
																allocator<unsigned char> &);  // 649
				__uninitialized_move_a<unsigned char*, unsigned char*, std::allocator<unsigned char> >(unsigned char* __first,
															unsigned char* __last,
															unsigned char* __result,
															allocator<unsigned char>& __alloc);  // 920
				__normal_iterator<unsigned char::__normal_iterator(
							unsigned char* const& __i);  // 1148
				__normal_iterator<unsigned char::operator+(
						difference_type __n);  // 3074
				__niter_wrap<__gnu_cxx::__normal_iterator<unsigned char*, std::vector<unsigned char> >, unsigned char*>(__normal_iterator<unsigned char*, std::vector<unsigned char, std::allocator<unsigned char> > > __from,
																unsigned char* __res);  // 500
				__copy_move_a<false, unsigned char*, __gnu_cxx::__normal_iterator<unsigned char*, std::vector<unsigned char> > >(unsigned char* __first,
																unsigned char* __last,
																__normal_iterator<unsigned char*, std::vector<unsigned char, std::allocator<unsigned char> > > __result);  // 642
				copy<unsigned char*, __gnu_cxx::__normal_iterator<unsigned char*, std::vector<unsigned char> > >(unsigned char* __first,
																unsigned char* __last,
																__normal_iterator<unsigned char*, std::vector<unsigned char, std::allocator<unsigned char> > > __result);  // 926
			}
		}
		{
			pointer __old_start; // 934
			pointer __old_finish; // 935
			const size_type  __len; // 937
			pointer __new_start; // 944
			pointer __new_finish; // 945
			max<long unsigned int>(const long unsigned int& __a,
						const long unsigned int& __b);  // 2202
			vector<unsigned char, std::allocator<unsigned char> >::_M_check_len(
					size_type __n,
					const char* __s);  // 938
			__new_allocator<unsigned char>::allocate(
				size_type __n,
				const void  *);  // 203
			allocator<unsigned char>::allocate(
				size_t __n);  // 614
			allocate(allocator_type& __a,
				size_type __n);  // 387
			_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_allocate(
					size_t __n);  // 944
			_UninitDestroyGuard<unsigned char::_UninitDestroyGuard(
						unsigned char *& __first);  // 143
			_Construct<unsigned char, unsigned char>(unsigned char* __p); // 145
			_UninitDestroyGuard<unsigned char::~_UninitDestroyGuard(); // 148
			__do_uninit_copy<std::move_iterator<unsigned char*>, std::move_iterator<unsigned char*>, unsigned char*>(move_iterator<unsigned char*> __first,
																move_iterator<unsigned char*> __last,
																unsigned char* __result);  // 303
			uninitialized_copy<std::move_iterator<unsigned char*>, unsigned char*>(move_iterator<unsigned char*> __first,
												move_iterator<unsigned char*> __last,
												unsigned char* __result);  // 635
			__uninitialized_copy_a<std::move_iterator<unsigned char*>, std::move_iterator<unsigned char*>, unsigned char*, unsigned char>(move_iterator<unsigned char*> __first,
																move_iterator<unsigned char*> __last,
																unsigned char* __result,
																allocator<unsigned char> &);  // 664
			move_iterator<unsigned char::move_iterator(
					iterator_type __i);  // 1823
			__make_move_if_noexcept_iterator<unsigned char>(unsigned char* __i); // 664
			move_iterator<unsigned char::move_iterator(
					iterator_type __i);  // 1823
			__make_move_if_noexcept_iterator<unsigned char>(unsigned char* __i); // 664
			__uninitialized_move_if_noexcept_a<unsigned char*, unsigned char*, std::allocator<unsigned char> >(unsigned char* __first,
																unsigned char* __last,
																unsigned char* __result,
																allocator<unsigned char>& __alloc);  // 950
			{
				ptrdiff_t __n; // 269
				{
				}
			}
			uninitialized_copy<unsigned char*, unsigned char*>(unsigned char* __first,
										unsigned char* __last,
										unsigned char* __result);  // 635
			__uninitialized_copy_a<unsigned char*, unsigned char*, unsigned char*, unsigned char>(unsigned char* __first,
														unsigned char* __last,
														unsigned char* __result,
														allocator<unsigned char> &);  // 953
			_UninitDestroyGuard<unsigned char::~_UninitDestroyGuard(); // 148
			__do_uninit_copy<std::move_iterator<unsigned char*>, std::move_iterator<unsigned char*>, unsigned char*>(move_iterator<unsigned char*> __first,
																move_iterator<unsigned char*> __last,
																unsigned char* __result);  // 303
			uninitialized_copy<std::move_iterator<unsigned char*>, unsigned char*>(move_iterator<unsigned char*> __first,
												move_iterator<unsigned char*> __last,
												unsigned char* __result);  // 635
			__uninitialized_copy_a<std::move_iterator<unsigned char*>, std::move_iterator<unsigned char*>, unsigned char*, unsigned char>(move_iterator<unsigned char*> __first,
																move_iterator<unsigned char*> __last,
																unsigned char* __result,
																allocator<unsigned char> &);  // 664
			__uninitialized_move_if_noexcept_a<unsigned char*, unsigned char*, std::allocator<unsigned char> >(unsigned char* __first,
																unsigned char* __last,
																unsigned char* __result,
																allocator<unsigned char>& __alloc);  // 958
			__new_allocator<unsigned char>::deallocate(
					unsigned char* __p,
					size_type __n);  // 215
			allocator<unsigned char>::deallocate(
					unsigned char* __p,
					size_t __n);  // 649
			deallocate(allocator_type& __a,
					pointer __p,
					size_type __n);  // 396
			_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_deallocate(
					pointer __p,
					size_t __n);  // 971
		}
	}
	vector<unsigned char, std::allocator<unsigned char> >::_M_range_insert<unsigned char*>(
					iterator __position,
					unsigned char* __first,
					unsigned char* __last,
					forward_iterator_tag);  // 1621
	__normal_iterator<unsigned char const::__normal_iterator(
				const unsigned char* const& __i);  // 1080
	vector<unsigned char, std::allocator<unsigned char> >::cbegin(); // 1620
	operator-<unsigned char const*, std::vector<unsigned char> >(const __normal_iterator<unsigned char const*, std::vector<unsigned char, std::allocator<unsigned char> > >& __lhs,
									const __normal_iterator<unsigned char const*, std::vector<unsigned char, std::allocator<unsigned char> > >& __rhs);  // 1620
	__normal_iterator<unsigned char::__normal_iterator(
				unsigned char* const& __i);  // 999
	vector<unsigned char, std::allocator<unsigned char> >::begin(); // 1621
	__normal_iterator<unsigned char::__normal_iterator(
				unsigned char* const& __i);  // 1148
	__normal_iterator<unsigned char::operator+(
			difference_type __n);  // 1621
	__normal_iterator<unsigned char::__normal_iterator(
				unsigned char* const& __i);  // 999
	vector<unsigned char, std::allocator<unsigned char> >::begin(); // 1623
	__normal_iterator<unsigned char::__normal_iterator(
				unsigned char* const& __i);  // 1148
	__normal_iterator<unsigned char::operator+(
			difference_type __n);  // 1623
	vector<unsigned char, std::allocator<unsigned char> >::insert<unsigned char*>(
				const_iterator __position,
				unsigned char* __first,
				unsigned char* __last);  // 7321
	__normal_iterator<unsigned char::base(); // 1082
	__normal_iterator<unsigned char const::__normal_iterator<unsigned char*>(
						const __normal_iterator<unsigned char*, std::vector<unsigned char, std::allocator<unsigned char> > >& __i);  // 7321
	__normal_iterator<unsigned char::__normal_iterator(
				unsigned char* const& __i);  // 1019
	vector<unsigned char, std::allocator<unsigned char> >::end(); // 7323
	__normal_iterator<unsigned char::base(); // 1082
	__normal_iterator<unsigned char const::__normal_iterator<unsigned char*>(
						const __normal_iterator<unsigned char*, std::vector<unsigned char, std::allocator<unsigned char> > >& __i);  // 7323
	__normal_iterator<unsigned char const::__normal_iterator(
				const unsigned char* const& __i);  // 1080
	vector<unsigned char, std::allocator<unsigned char> >::cbegin(); // 1620
	operator-<unsigned char const*, std::vector<unsigned char> >(const __normal_iterator<unsigned char const*, std::vector<unsigned char, std::allocator<unsigned char> > >& __lhs,
									const __normal_iterator<unsigned char const*, std::vector<unsigned char, std::allocator<unsigned char> > >& __rhs);  // 1620
	__normal_iterator<unsigned char::__normal_iterator(
				unsigned char* const& __i);  // 999
	vector<unsigned char, std::allocator<unsigned char> >::begin(); // 1621
	__normal_iterator<unsigned char::__normal_iterator(
				unsigned char* const& __i);  // 1148
	__normal_iterator<unsigned char::operator+(
			difference_type __n);  // 1621
	{
		const size_type  __n; // 891
		{
			const size_type  __elems_after; // 895
			pointer __old_finish; // 896
			__normal_iterator<unsigned char::__normal_iterator(
						unsigned char* const& __i);  // 1019
			vector<unsigned char, std::allocator<unsigned char> >::end(); // 895
			{
				const unsigned char* __mid; // 912
				{
					ptrdiff_t __n; // 269
					{
					}
				}
				uninitialized_copy<unsigned char const*, unsigned char*>(const unsigned char* __first,
											const unsigned char* __last,
											unsigned char* __result);  // 635
				__uninitialized_copy_a<unsigned char const*, unsigned char const*, unsigned char*, unsigned char>(const unsigned char* __first,
																const unsigned char* __last,
																unsigned char* __result,
																allocator<unsigned char> &);  // 915
				move_iterator<unsigned char::move_iterator(
						iterator_type __i);  // 1804
				make_move_iterator<unsigned char*>(unsigned char* __i); // 649
				move_iterator<unsigned char::move_iterator(
						iterator_type __i);  // 1804
				make_move_iterator<unsigned char*>(unsigned char* __i); // 649
				_UninitDestroyGuard<unsigned char::_UninitDestroyGuard(
							unsigned char *& __first);  // 143
				_UninitDestroyGuard<unsigned char::~_UninitDestroyGuard(); // 148
				__do_uninit_copy<std::move_iterator<unsigned char*>, std::move_iterator<unsigned char*>, unsigned char*>(move_iterator<unsigned char*> __first,
																move_iterator<unsigned char*> __last,
																unsigned char* __result);  // 303
				uninitialized_copy<std::move_iterator<unsigned char*>, unsigned char*>(move_iterator<unsigned char*> __first,
													move_iterator<unsigned char*> __last,
													unsigned char* __result);  // 635
				__uninitialized_copy_a<std::move_iterator<unsigned char*>, std::move_iterator<unsigned char*>, unsigned char*, unsigned char>(move_iterator<unsigned char*> __first,
																move_iterator<unsigned char*> __last,
																unsigned char* __result,
																allocator<unsigned char> &);  // 649
				__uninitialized_move_a<unsigned char*, unsigned char*, std::allocator<unsigned char> >(unsigned char* __first,
															unsigned char* __last,
															unsigned char* __result,
															allocator<unsigned char>& __alloc);  // 920
				__normal_iterator<unsigned char::__normal_iterator(
							unsigned char* const& __i);  // 1148
				__normal_iterator<unsigned char::operator+(
						difference_type __n);  // 3074
				__niter_wrap<__gnu_cxx::__normal_iterator<unsigned char*, std::vector<unsigned char> >, unsigned char*>(__normal_iterator<unsigned char*, std::vector<unsigned char, std::allocator<unsigned char> > > __from,
																unsigned char* __res);  // 500
				__copy_move_a<false, unsigned char const*, __gnu_cxx::__normal_iterator<unsigned char*, std::vector<unsigned char> > >(const unsigned char* __first,
																const unsigned char* __last,
																__normal_iterator<unsigned char*, std::vector<unsigned char, std::allocator<unsigned char> > > __result);  // 642
				copy<unsigned char const*, __gnu_cxx::__normal_iterator<unsigned char*, std::vector<unsigned char> > >(const unsigned char* __first,
																const unsigned char* __last,
																__normal_iterator<unsigned char*, std::vector<unsigned char, std::allocator<unsigned char> > > __result);  // 926
			}
		}
		{
			pointer __old_start; // 934
			pointer __old_finish; // 935
			const size_type  __len; // 937
			pointer __new_start; // 944
			pointer __new_finish; // 945
			max<long unsigned int>(const long unsigned int& __a,
						const long unsigned int& __b);  // 2202
			vector<unsigned char, std::allocator<unsigned char> >::_M_check_len(
					size_type __n,
					const char* __s);  // 938
			__new_allocator<unsigned char>::allocate(
				size_type __n,
				const void  *);  // 203
			allocator<unsigned char>::allocate(
				size_t __n);  // 614
			allocate(allocator_type& __a,
				size_type __n);  // 387
			_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_allocate(
					size_t __n);  // 944
			_UninitDestroyGuard<unsigned char::_UninitDestroyGuard(
						unsigned char *& __first);  // 143
			_Construct<unsigned char, unsigned char>(unsigned char* __p); // 145
			_UninitDestroyGuard<unsigned char::~_UninitDestroyGuard(); // 148
			__do_uninit_copy<std::move_iterator<unsigned char*>, std::move_iterator<unsigned char*>, unsigned char*>(move_iterator<unsigned char*> __first,
																move_iterator<unsigned char*> __last,
																unsigned char* __result);  // 303
			uninitialized_copy<std::move_iterator<unsigned char*>, unsigned char*>(move_iterator<unsigned char*> __first,
												move_iterator<unsigned char*> __last,
												unsigned char* __result);  // 635
			__uninitialized_copy_a<std::move_iterator<unsigned char*>, std::move_iterator<unsigned char*>, unsigned char*, unsigned char>(move_iterator<unsigned char*> __first,
																move_iterator<unsigned char*> __last,
																unsigned char* __result,
																allocator<unsigned char> &);  // 664
			move_iterator<unsigned char::move_iterator(
					iterator_type __i);  // 1823
			__make_move_if_noexcept_iterator<unsigned char>(unsigned char* __i); // 664
			move_iterator<unsigned char::move_iterator(
					iterator_type __i);  // 1823
			__make_move_if_noexcept_iterator<unsigned char>(unsigned char* __i); // 664
			__uninitialized_move_if_noexcept_a<unsigned char*, unsigned char*, std::allocator<unsigned char> >(unsigned char* __first,
																unsigned char* __last,
																unsigned char* __result,
																allocator<unsigned char>& __alloc);  // 950
			{
				ptrdiff_t __n; // 269
				{
				}
			}
			uninitialized_copy<unsigned char const*, unsigned char*>(const unsigned char* __first,
										const unsigned char* __last,
										unsigned char* __result);  // 635
			__uninitialized_copy_a<unsigned char const*, unsigned char const*, unsigned char*, unsigned char>(const unsigned char* __first,
																const unsigned char* __last,
																unsigned char* __result,
																allocator<unsigned char> &);  // 953
			_UninitDestroyGuard<unsigned char::~_UninitDestroyGuard(); // 148
			__do_uninit_copy<std::move_iterator<unsigned char*>, std::move_iterator<unsigned char*>, unsigned char*>(move_iterator<unsigned char*> __first,
																move_iterator<unsigned char*> __last,
																unsigned char* __result);  // 303
			uninitialized_copy<std::move_iterator<unsigned char*>, unsigned char*>(move_iterator<unsigned char*> __first,
												move_iterator<unsigned char*> __last,
												unsigned char* __result);  // 635
			__uninitialized_copy_a<std::move_iterator<unsigned char*>, std::move_iterator<unsigned char*>, unsigned char*, unsigned char>(move_iterator<unsigned char*> __first,
																move_iterator<unsigned char*> __last,
																unsigned char* __result,
																allocator<unsigned char> &);  // 664
			__uninitialized_move_if_noexcept_a<unsigned char*, unsigned char*, std::allocator<unsigned char> >(unsigned char* __first,
																unsigned char* __last,
																unsigned char* __result,
																allocator<unsigned char>& __alloc);  // 958
			__new_allocator<unsigned char>::deallocate(
					unsigned char* __p,
					size_type __n);  // 215
			allocator<unsigned char>::deallocate(
					unsigned char* __p,
					size_t __n);  // 649
			deallocate(allocator_type& __a,
					pointer __p,
					size_type __n);  // 396
			_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_deallocate(
					pointer __p,
					size_t __n);  // 971
		}
	}
	vector<unsigned char, std::allocator<unsigned char> >::_M_range_insert<unsigned char const*>(
						iterator __position,
						const unsigned char* __first,
						const unsigned char* __last,
						forward_iterator_tag);  // 1621
	__normal_iterator<unsigned char::__normal_iterator(
				unsigned char* const& __i);  // 999
	vector<unsigned char, std::allocator<unsigned char> >::begin(); // 1623
	__normal_iterator<unsigned char::__normal_iterator(
				unsigned char* const& __i);  // 1148
	__normal_iterator<unsigned char::operator+(
			difference_type __n);  // 1623
	vector<unsigned char, std::allocator<unsigned char> >::insert<unsigned char const*>(
					const_iterator __position,
					const unsigned char* __first,
					const unsigned char* __last);  // 7323
} /* size: 0, variables: 1, inline expansions: 64 (1316 bytes) */

// <048062BC> ../thirdparty/tinyexr/tinyexr.h:7333
void ChannelInfo(const ChannelInfo* this)
{
} /* size: 0 */

// <0480629F> ../thirdparty/tinyexr/tinyexr.h:7333
inline void ChannelInfo(const ChannelInfo* this)
{
} /* size: 0 */

// <04806288> ../thirdparty/tinyexr/tinyexr.h:7333
void ~ChannelInfo(const ChannelInfo* this)
{
} /* size: 0 */

// <0480626B> ../thirdparty/tinyexr/tinyexr.h:7333
inline void ~ChannelInfo(const ChannelInfo* this)
{
} /* size: 0 */

// <047AD7E7> ../thirdparty/tinyexr/tinyexr.h:7333
void ChannelInfo(const ChannelInfo* this, const ChannelInfo &)
{
} /* size: 0 */

// <047AD7C5> ../thirdparty/tinyexr/tinyexr.h:7333
inline void ChannelInfo(const ChannelInfo* this, const ChannelInfo &)
{
} /* size: 0 */

// <047A5810> ../thirdparty/tinyexr/tinyexr.h:7333
void ChannelInfo(const ChannelInfo* this, ChannelInfo &)
{
} /* size: 0 */

// <047A57EE> ../thirdparty/tinyexr/tinyexr.h:7333
inline void ChannelInfo(const ChannelInfo* this, ChannelInfo &)
{
} /* size: 0 */

// <047F8FB3> ../thirdparty/tinyexr/tinyexr.h:7335
void _HeaderInfo::_HeaderInfo()
{
} /* size: 0 */

// <047F8F96> ../thirdparty/tinyexr/tinyexr.h:7335
inline void _HeaderInfo::_HeaderInfo()
{
} /* size: 0 */

// <047F8DFF> ../thirdparty/tinyexr/tinyexr.h:7335
void _HeaderInfo::~_HeaderInfo()
{
} /* size: 0 */

// <047F8DE2> ../thirdparty/tinyexr/tinyexr.h:7335
inline void _HeaderInfo::~_HeaderInfo()
{
} /* size: 0 */

// <047AA77C> ../thirdparty/tinyexr/tinyexr.h:7335
// variable: 1
// function calls: 84
void _HeaderInfo::_HeaderInfo(const _HeaderInfo &)
{
	_Vector_base<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::_M_get_Tp_allocator(); // 633
	__new_allocator<tinyexr::ChannelInfo>::__new_allocator(
			const __new_allocator<tinyexr::ChannelInfo>  &);  // 173
	allocator<tinyexr::ChannelInfo>::allocator(
			const allocator<tinyexr::ChannelInfo>& __a);  // 726
	select_on_container_copy_construction(const allocator_type& __rhs); // 100
	_S_select_on_copy(const allocator<tinyexr::ChannelInfo>& __a); // 633
	vector<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::size(); // 633
	__new_allocator<tinyexr::ChannelInfo>::__new_allocator(
			const __new_allocator<tinyexr::ChannelInfo>  &);  // 173
	allocator<tinyexr::ChannelInfo>::allocator(
			const allocator<tinyexr::ChannelInfo>& __a);  // 153
	_Vector_impl_data::_Vector_impl_data(); // 153
	_Vector_impl::_Vector_impl(
			const _Tp_alloc_type& __a);  // 340
	__new_allocator<tinyexr::ChannelInfo>::allocate(
		size_type __n,
		const void  *);  // 203
	allocator<tinyexr::ChannelInfo>::allocate(
		size_t __n);  // 614
	allocate(allocator_type& __a,
		size_type __n);  // 387
	_Vector_base<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::_M_allocate(
			size_t __n);  // 405
	_Vector_base<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::_M_create_storage(
				size_t __n);  // 341
	_Vector_base<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::_Vector_base(
			size_t __n,
			const allocator_type& __a);  // 633
	allocator<tinyexr::ChannelInfo>::~allocator(); // 633
	_Vector_base<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::_M_get_Tp_allocator(); // 638
	__normal_iterator<const tinyexr::ChannelInfo::__normal_iterator(
				const ChannelInfo* const& __i);  // 1029
	vector<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::end(); // 636
	__normal_iterator<const tinyexr::ChannelInfo::__normal_iterator(
				const ChannelInfo* const& __i);  // 1009
	vector<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::begin(); // 636
	_UninitDestroyGuard<tinyexr::ChannelInfo::_UninitDestroyGuard(
				ChannelInfo *& __first);  // 143
	assign(char_type& __c1,
		const char_type& __c2);  // 451
	copy(char_type* __s1,
		const char_type* __s2,
		size_t __n);  // 453
	_S_copy(char* __d,
		const char* __s,
		size_type __n);  // 448
	_S_copy(char* __d,
		const char* __s,
		size_type __n);  // 298
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
			size_type __length);  // 300
	__new_allocator<char>::allocate(
		size_type __n,
		const void  *);  // 203
	allocator<char>::allocate(
		size_t __n);  // 614
	allocate(allocator_type& __a,
		size_type __n);  // 142
	_S_allocate(_Char_alloc_type& __a,
			size_type __n);  // 164
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_create(
			size_type& __capacity,
			size_type __old_capacity);  // 291
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 298
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_capacity(
			size_type __capacity);  // 292
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
		pointer __p);  // 291
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_construct<true>(
				const char* __str,
				size_type __n);  // 617
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_get_allocator(); // 615
	__new_allocator<char>::__new_allocator(
			const __new_allocator<char>  &);  // 173
	allocator<char>::allocator(
			const allocator<char>& __a);  // 726
	select_on_container_copy_construction(const allocator_type& __rhs); // 100
	_S_select_on_copy(const allocator<char>& __a); // 615
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 614
	__new_allocator<char>::__new_allocator(
			const __new_allocator<char>  &);  // 173
	allocator<char>::allocator(
			const allocator<char>& __a);  // 209
	_Alloc_hider::_Alloc_hider(
			pointer __dat,
			allocator<char>& __a);  // 614
	allocator<char>::~allocator(); // 615
	basic_string<char, std::char_traits<char>, std::allocator<char> >::size(); // 1176
	basic_string<char, std::char_traits<char>, std::allocator<char> >::length(); // 617
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 617
	basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(
			const basic_string<char, std::char_traits<char>, std::allocator<char> >& __str);  // 7333
	ChannelInfo(const ChannelInfo* this,
			const ChannelInfo  &);  // 133
	_Construct<tinyexr::ChannelInfo, const tinyexr::ChannelInfo&>(ChannelInfo* __p); // 145
	_UninitDestroyGuard<tinyexr::ChannelInfo::~_UninitDestroyGuard(); // 148
	__do_uninit_copy<__gnu_cxx::__normal_iterator<const tinyexr::ChannelInfo*, std::vector<tinyexr::ChannelInfo> >, __gnu_cxx::__normal_iterator<const tinyexr::ChannelInfo*, std::vector<tinyexr::ChannelInfo> >, tinyexr::ChannelInfo*>(__normal_iterator<const tinyexr::ChannelInfo*, std::vector<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> > > __first,
																__normal_iterator<const tinyexr::ChannelInfo*, std::vector<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> > > __last,
																ChannelInfo* __result);  // 266
	uninitialized_copy<__gnu_cxx::__normal_iterator<const tinyexr::ChannelInfo*, std::vector<tinyexr::ChannelInfo> >, tinyexr::ChannelInfo*>(__normal_iterator<const tinyexr::ChannelInfo*, std::vector<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> > > __first,
																__normal_iterator<const tinyexr::ChannelInfo*, std::vector<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> > > __last,
																ChannelInfo* __result);  // 635
	__uninitialized_copy_a<__gnu_cxx::__normal_iterator<const tinyexr::ChannelInfo*, std::vector<tinyexr::ChannelInfo> >, __gnu_cxx::__normal_iterator<const tinyexr::ChannelInfo*, std::vector<tinyexr::ChannelInfo> >, tinyexr::ChannelInfo*, tinyexr::ChannelInfo>(__normal_iterator<const tinyexr::ChannelInfo*, std::vector<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> > > __first,
																__normal_iterator<const tinyexr::ChannelInfo*, std::vector<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> > > __last,
																ChannelInfo* __result,
																allocator<tinyexr::ChannelInfo> &);  // 636
	vector<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::vector(
		const vector<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >& __x);  // 7335
	_Vector_base<_EXRAttribute, std::allocator<_EXRAttribute> >::_M_get_Tp_allocator(); // 633
	__new_allocator<_EXRAttribute>::__new_allocator(
			const __new_allocator<_EXRAttribute>  &);  // 173
	allocator<_EXRAttribute>::allocator(
			const allocator<_EXRAttribute>& __a);  // 726
	select_on_container_copy_construction(const allocator_type& __rhs); // 100
	_S_select_on_copy(const allocator<_EXRAttribute>& __a); // 633
	vector<_EXRAttribute, std::allocator<_EXRAttribute> >::size(); // 633
	__new_allocator<_EXRAttribute>::allocate(
		size_type __n,
		const void  *);  // 203
	allocator<_EXRAttribute>::allocate(
		size_t __n);  // 614
	allocate(allocator_type& __a,
		size_type __n);  // 387
	_Vector_base<_EXRAttribute, std::allocator<_EXRAttribute> >::_M_allocate(
			size_t __n);  // 405
	_Vector_base<_EXRAttribute, std::allocator<_EXRAttribute> >::_M_create_storage(
				size_t __n);  // 341
	__new_allocator<_EXRAttribute>::__new_allocator(
			const __new_allocator<_EXRAttribute>  &);  // 173
	allocator<_EXRAttribute>::allocator(
			const allocator<_EXRAttribute>& __a);  // 153
	_Vector_impl_data::_Vector_impl_data(); // 153
	_Vector_impl::_Vector_impl(
			const _Tp_alloc_type& __a);  // 340
	_Vector_base<_EXRAttribute, std::allocator<_EXRAttribute> >::_Vector_base(
			size_t __n,
			const allocator_type& __a);  // 633
	allocator<_EXRAttribute>::~allocator(); // 633
	_Vector_base<_EXRAttribute, std::allocator<_EXRAttribute> >::_M_get_Tp_allocator(); // 638
	__normal_iterator<const _EXRAttribute::__normal_iterator(
				const _EXRAttribute* const& __i);  // 1029
	vector<_EXRAttribute, std::allocator<_EXRAttribute> >::end(); // 636
	__normal_iterator<const _EXRAttribute::__normal_iterator(
				const _EXRAttribute* const& __i);  // 1009
	vector<_EXRAttribute, std::allocator<_EXRAttribute> >::begin(); // 636
	{
		ptrdiff_t __n; // 269
		operator-<const _EXRAttribute*, std::vector<_EXRAttribute> >(const __normal_iterator<const _EXRAttribute*, std::vector<_EXRAttribute, std::allocator<_EXRAttribute> > >& __lhs,
										const __normal_iterator<const _EXRAttribute*, std::vector<_EXRAttribute, std::allocator<_EXRAttribute> > >& __rhs);  // 269
		{
		}
	}
	uninitialized_copy<__gnu_cxx::__normal_iterator<const _EXRAttribute*, std::vector<_EXRAttribute> >, _EXRAttribute*>(__normal_iterator<const _EXRAttribute*, std::vector<_EXRAttribute, std::allocator<_EXRAttribute> > > __first,
																__normal_iterator<const _EXRAttribute*, std::vector<_EXRAttribute, std::allocator<_EXRAttribute> > > __last,
																_EXRAttribute* __result);  // 635
	__uninitialized_copy_a<__gnu_cxx::__normal_iterator<const _EXRAttribute*, std::vector<_EXRAttribute> >, __gnu_cxx::__normal_iterator<const _EXRAttribute*, std::vector<_EXRAttribute> >, _EXRAttribute*, _EXRAttribute>(__normal_iterator<const _EXRAttribute*, std::vector<_EXRAttribute, std::allocator<_EXRAttribute> > > __first,
																__normal_iterator<const _EXRAttribute*, std::vector<_EXRAttribute, std::allocator<_EXRAttribute> > > __last,
																_EXRAttribute* __result,
																allocator<_EXRAttribute> &);  // 636
	vector<_EXRAttribute, std::allocator<_EXRAttribute> >::vector(
		const vector<_EXRAttribute, std::allocator<_EXRAttribute> >& __x);  // 7335
} /* size: 0, inline expansions: 83 (0 bytes) */

// <047AA75A> ../thirdparty/tinyexr/tinyexr.h:7335
inline void _HeaderInfo::_HeaderInfo(const _HeaderInfo &)
{
} /* size: 0 */

// <047A52B2> ../thirdparty/tinyexr/tinyexr.h:7335
void _HeaderInfo::_HeaderInfo(_HeaderInfo &)
{
} /* size: 0 */

// <047A5290> ../thirdparty/tinyexr/tinyexr.h:7335
inline void _HeaderInfo::_HeaderInfo(_HeaderInfo &)
{
} /* size: 0 */

// <048062D3> ../thirdparty/tinyexr/tinyexr.h:7358
inline void _HeaderInfo::clear()
{
} /* size: 0 */

// <04802F20> ../thirdparty/tinyexr/tinyexr.h:7389
// variables: 7
// function calls: 231
void ReadChannelInfo(vector<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >& channels, const vector<unsigned char, std::allocator<unsigned char> >& data)
{
	const char* p; // 7391
	{
		ChannelInfo info; // 7397
		tinyexr_int64 data_len; // 7399
		const unsigned char* data_end; // 7411
		__new_allocator<char>::__new_allocator(
				const __new_allocator<char>  &);  // 173
		allocator<char>::allocator(
				const allocator<char>& __a);  // 205
		_Alloc_hider::_Alloc_hider(
				pointer __dat,
				const allocator<char>& __a);  // 854
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 854
		_Guard::_Guard(
			basic_string<char, std::char_traits<char>, std::allocator<char> >* __s);  // 251
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 253
		copy(char_type* __s1,
			const char_type* __s2,
			size_t __n);  // 453
		_S_copy(char* __d,
			const char* __s,
			size_type __n);  // 448
		assign(char_type& __c1,
			const char_type& __c2);  // 451
		_S_copy(char* __d,
			const char* __s,
			size_type __n);  // 489
		_S_copy_chars<char const*>(char* __p,
						const char* __k1,
						const char* __k2);  // 253
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
				size_type __length);  // 272
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 273
		assign(char_type& __c1,
			const char_type& __c2);  // 273
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
				size_type __n);  // 257
		_Guard::~_Guard(); // 258
		__new_allocator<char>::allocate(
			size_type __n,
			const void  *);  // 203
		allocator<char>::allocate(
			size_t __n);  // 614
		allocate(allocator_type& __a,
			size_type __n);  // 142
		_S_allocate(_Char_alloc_type& __a,
				size_type __n);  // 164
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_create(
				size_type& __capacity,
				size_type __old_capacity);  // 235
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_capacity(
				size_type __capacity);  // 236
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
			pointer __p);  // 235
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_construct<char const*>(
						const char* __beg,
						const char* __end,
						forward_iterator_tag);  // 857
		basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<char const*>(
						const char* __beg,
						const char* __end,
						const allocator<char>& __a);  // 7246
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 280
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 950
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 280
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 961
		{
			pointer __data; // 976
			size_type __capacity; // 977
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
				pointer __p);  // 990
			basic_string<char, std::char_traits<char>, std::allocator<char> >::size(); // 1176
			basic_string<char, std::char_traits<char>, std::allocator<char> >::length(); // 991
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
					size_type __length);  // 991
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
				pointer __p);  // 995
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_capacity(
					size_type __capacity);  // 996
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
				pointer __p);  // 999
		}
		copy(char_type* __s1,
			const char_type* __s2,
			size_t __n);  // 453
		_S_copy(char* __d,
			const char* __s,
			size_type __n);  // 448
		assign(char_type& __c1,
			const char_type& __c2);  // 451
		_S_copy(char* __d,
			const char* __s,
			size_type __n);  // 969
		basic_string<char, std::char_traits<char>, std::allocator<char> >::size(); // 970
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
				size_type __length);  // 272
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 273
		assign(char_type& __c1,
			const char_type& __c2);  // 273
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
				size_type __n);  // 970
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 273
		assign(char_type& __c1,
			const char_type& __c2);  // 273
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
				size_type __n);  // 1323
		basic_string<char, std::char_traits<char>, std::allocator<char> >::clear(); // 1003
		basic_string<char, std::char_traits<char>, std::allocator<char> >::operator=(
				basic_string<char, std::char_traits<char>, std::allocator<char> >& __str);  // 7246
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 280
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 298
		__new_allocator<char>::deallocate(
				char* __p,
				size_type __n);  // 215
		allocator<char>::deallocate(
				char* __p,
				size_t __n);  // 649
		deallocate(allocator_type& __a,
				pointer __p,
				size_type __n);  // 305
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_destroy(
				size_type __size);  // 299
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_dispose(); // 896
		allocator<char>::~allocator(); // 197
		_Alloc_hider::~_Alloc_hider(); // 896
		basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 7246
		allocator<char>::~allocator(); // 7246
		ReadString(string* s,
				const char* ptr,
				size_t len);  // 7405
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 590
		__new_allocator<char>::__new_allocator(
				const __new_allocator<char>  &);  // 173
		allocator<char>::allocator(
				const allocator<char>& __a);  // 209
		_Alloc_hider::_Alloc_hider(
				pointer __dat,
				allocator<char>& __a);  // 590
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
				size_type __length);  // 272
		assign(char_type& __c1,
			const char_type& __c2);  // 273
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
				size_type __n);  // 593
		allocator<char>::~allocator(); // 590
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_init_local_buf(); // 592
		basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(); // 7333
		ChannelInfo(const ChannelInfo* this); // 7397
		vector<unsigned char, std::allocator<unsigned char> >::size(); // 7399
		vector<unsigned char, std::allocator<unsigned char> >::size(); // 7413
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 7417
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_get_allocator(); // 615
		__new_allocator<char>::__new_allocator(
				const __new_allocator<char>  &);  // 173
		allocator<char>::allocator(
				const allocator<char>& __a);  // 726
		select_on_container_copy_construction(const allocator_type& __rhs); // 100
		_S_select_on_copy(const allocator<char>& __a); // 615
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 614
		__new_allocator<char>::__new_allocator(
				const __new_allocator<char>  &);  // 173
		allocator<char>::allocator(
				const allocator<char>& __a);  // 209
		_Alloc_hider::_Alloc_hider(
				pointer __dat,
				allocator<char>& __a);  // 614
		allocator<char>::~allocator(); // 615
		basic_string<char, std::char_traits<char>, std::allocator<char> >::size(); // 1176
		basic_string<char, std::char_traits<char>, std::allocator<char> >::length(); // 617
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 617
		__new_allocator<char>::allocate(
			size_type __n,
			const void  *);  // 203
		allocator<char>::allocate(
			size_t __n);  // 614
		allocate(allocator_type& __a,
			size_type __n);  // 142
		_S_allocate(_Char_alloc_type& __a,
				size_type __n);  // 164
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_create(
				size_type& __capacity,
				size_type __old_capacity);  // 291
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 298
		assign(char_type& __c1,
			const char_type& __c2);  // 451
		copy(char_type* __s1,
			const char_type* __s2,
			size_t __n);  // 453
		_S_copy(char* __d,
			const char* __s,
			size_type __n);  // 448
		_S_copy(char* __d,
			const char* __s,
			size_type __n);  // 298
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
				size_type __length);  // 300
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_capacity(
				size_type __capacity);  // 292
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
			pointer __p);  // 291
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_construct<true>(
					const char* __str,
					size_type __n);  // 617
		basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(
				const basic_string<char, std::char_traits<char>, std::allocator<char> >& __str);  // 7333
		ChannelInfo(const ChannelInfo* this,
				const ChannelInfo  &);  // 110
		construct_at<tinyexr::ChannelInfo, const tinyexr::ChannelInfo&>(ChannelInfo* __location); // 676
		construct<tinyexr::ChannelInfo, const tinyexr::ChannelInfo&>(allocator_type& __a,
										ChannelInfo* __p);  // 1421
		vector<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::size(); // 2199
		max<long unsigned int>(const long unsigned int& __a,
					const long unsigned int& __b);  // 2202
		vector<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::_M_check_len(
				size_type __n,
				const char* __s);  // 566
		__normal_iterator<tinyexr::ChannelInfo::__normal_iterator(
					ChannelInfo* const& __i);  // 999
		vector<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::begin(); // 571
		__normal_iterator<tinyexr::ChannelInfo::__normal_iterator(
					ChannelInfo* const& __i);  // 1019
		vector<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::end(); // 571
		__new_allocator<tinyexr::ChannelInfo>::allocate(
			size_type __n,
			const void  *);  // 203
		allocator<tinyexr::ChannelInfo>::allocate(
			size_t __n);  // 614
		allocate(allocator_type& __a,
			size_type __n);  // 387
		_Vector_base<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::_M_allocate(
				size_t __n);  // 572
		{
			_Guard_alloc __guard; // 576
			basic_string<char, std::char_traits<char>, std::allocator<char> >::size(); // 1176
			basic_string<char, std::char_traits<char>, std::allocator<char> >::length(); // 617
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 617
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_get_allocator(); // 615
			__new_allocator<char>::__new_allocator(
					const __new_allocator<char>  &);  // 173
			allocator<char>::allocator(
					const allocator<char>& __a);  // 726
			select_on_container_copy_construction(const allocator_type& __rhs); // 100
			_S_select_on_copy(const allocator<char>& __a); // 615
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 614
			__new_allocator<char>::__new_allocator(
					const __new_allocator<char>  &);  // 173
			allocator<char>::allocator(
					const allocator<char>& __a);  // 209
			_Alloc_hider::_Alloc_hider(
					pointer __dat,
					allocator<char>& __a);  // 614
			__new_allocator<char>::allocate(
				size_type __n,
				const void  *);  // 203
			allocator<char>::allocate(
				size_t __n);  // 614
			allocate(allocator_type& __a,
				size_type __n);  // 142
			_S_allocate(_Char_alloc_type& __a,
					size_type __n);  // 164
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_create(
					size_type& __capacity,
					size_type __old_capacity);  // 291
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 298
			assign(char_type& __c1,
				const char_type& __c2);  // 451
			copy(char_type* __s1,
				const char_type* __s2,
				size_t __n);  // 453
			_S_copy(char* __d,
				const char* __s,
				size_type __n);  // 448
			_S_copy(char* __d,
				const char* __s,
				size_type __n);  // 298
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
					size_type __length);  // 300
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_capacity(
					size_type __capacity);  // 292
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
				pointer __p);  // 291
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_construct<true>(
						const char* __str,
						size_type __n);  // 617
			allocator<char>::~allocator(); // 615
			basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(
					const basic_string<char, std::char_traits<char>, std::allocator<char> >& __str);  // 7333
			ChannelInfo(const ChannelInfo* this,
					const ChannelInfo  &);  // 110
			construct_at<tinyexr::ChannelInfo, const tinyexr::ChannelInfo&>(ChannelInfo* __location); // 676
			construct<tinyexr::ChannelInfo, const tinyexr::ChannelInfo&>(allocator_type& __a,
											ChannelInfo* __p);  // 586
			_Guard_alloc::_Guard_alloc(
					pointer __s,
					size_type __l,
					_Base& __vect);  // 576
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 753
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
				pointer __p);  // 753
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_capacity(
					size_type __capacity);  // 754
			basic_string<char, std::char_traits<char>, std::allocator<char> >::size(); // 1176
			basic_string<char, std::char_traits<char>, std::allocator<char> >::length(); // 760
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
					size_type __length);  // 760
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_use_local_data(); // 761
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
				pointer __p);  // 761
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
					size_type __length);  // 272
			assign(char_type& __c1,
				const char_type& __c2);  // 273
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
					size_type __n);  // 762
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_get_allocator(); // 743
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 743
			__new_allocator<char>::__new_allocator(
					const __new_allocator<char>  &);  // 173
			allocator<char>::allocator(
					const allocator<char>& __a);  // 209
			_Alloc_hider::_Alloc_hider(
					pointer __dat,
					allocator<char>& __a);  // 743
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 745
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_init_local_buf(); // 747
			basic_string<char, std::char_traits<char>, std::allocator<char> >::length(); // 749
			copy(char_type* __s1,
				const char_type* __s2,
				size_t __n);  // 748
			basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(
					basic_string<char, std::char_traits<char>, std::allocator<char> >& __str);  // 7333
			ChannelInfo(const ChannelInfo* this,
					ChannelInfo &);  // 110
			construct_at<tinyexr::ChannelInfo, tinyexr::ChannelInfo>(ChannelInfo* __location); // 676
			construct<tinyexr::ChannelInfo, tinyexr::ChannelInfo>(allocator_type& __a,
										ChannelInfo* __p);  // 1288
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 298
			__new_allocator<char>::deallocate(
					char* __p,
					size_type __n);  // 215
			allocator<char>::deallocate(
					char* __p,
					size_t __n);  // 649
			deallocate(allocator_type& __a,
					pointer __p,
					size_type __n);  // 305
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_destroy(
					size_type __size);  // 299
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_dispose(); // 896
			allocator<char>::~allocator(); // 197
			_Alloc_hider::~_Alloc_hider(); // 896
			basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 7333
			~ChannelInfo(const ChannelInfo* this); // 88
			destroy_at<tinyexr::ChannelInfo>(ChannelInfo* __location); // 698
			destroy<tinyexr::ChannelInfo>(allocator_type& __a,
							ChannelInfo* __p);  // 1289
			__relocate_object_a<tinyexr::ChannelInfo, tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >(ChannelInfo* __dest,
																ChannelInfo* __orig,
																allocator<tinyexr::ChannelInfo>& __alloc);  // 1317
			__relocate_a_1<tinyexr::ChannelInfo*, tinyexr::ChannelInfo*, std::allocator<tinyexr::ChannelInfo> >(ChannelInfo* __first,
																ChannelInfo* __last,
																ChannelInfo* __result,
																allocator<tinyexr::ChannelInfo>& __alloc);  // 1359
			__relocate_a<tinyexr::ChannelInfo*, tinyexr::ChannelInfo*, std::allocator<tinyexr::ChannelInfo> >(ChannelInfo* __first,
																ChannelInfo* __last,
																ChannelInfo* __result,
																allocator<tinyexr::ChannelInfo>& __alloc);  // 539
			_S_relocate(pointer __first,
					pointer __last,
					pointer __result,
					_Tp_alloc_type& __alloc);  // 599
			__new_allocator<tinyexr::ChannelInfo>::deallocate(
					ChannelInfo* __p,
					size_type __n);  // 215
			allocator<tinyexr::ChannelInfo>::deallocate(
					ChannelInfo* __p,
					size_t __n);  // 649
			deallocate(allocator_type& __a,
					pointer __p,
					size_type __n);  // 396
			_Vector_base<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::_M_deallocate(
					pointer __p,
					size_t __n);  // 392
			_Vector_base<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::_M_deallocate(
					pointer __p,
					size_t __n);  // 1883
			_Guard_alloc::~_Guard_alloc(); // 640
		}
		vector<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::_M_realloc_append<const tinyexr::ChannelInfo&>(); // 1427
		vector<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::push_back(
				const value_type& __x);  // 7430
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 7421
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 7423
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 280
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 298
		__new_allocator<char>::deallocate(
				char* __p,
				size_type __n);  // 215
		allocator<char>::deallocate(
				char* __p,
				size_t __n);  // 649
		deallocate(allocator_type& __a,
				pointer __p,
				size_type __n);  // 305
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_destroy(
				size_type __size);  // 299
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_dispose(); // 896
		allocator<char>::~allocator(); // 197
		_Alloc_hider::~_Alloc_hider(); // 896
		basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 7333
		~ChannelInfo(const ChannelInfo* this); // 7431
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 280
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 298
		__new_allocator<char>::deallocate(
				char* __p,
				size_type __n);  // 215
		allocator<char>::deallocate(
				char* __p,
				size_t __n);  // 649
		deallocate(allocator_type& __a,
				pointer __p,
				size_type __n);  // 305
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_destroy(
				size_type __size);  // 299
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_dispose(); // 896
		allocator<char>::~allocator(); // 197
		_Alloc_hider::~_Alloc_hider(); // 896
		basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 7333
		~ChannelInfo(const ChannelInfo* this); // 7431
	}
	vector<unsigned char, std::allocator<unsigned char> >::_M_range_check(
			size_type __n);  // 1334
	vector<unsigned char, std::allocator<unsigned char> >::at(
		size_type __n);  // 7391
} /* size: 0, variables: 1, inline expansions: 2 (54 bytes) */

// <048029FE> ../thirdparty/tinyexr/tinyexr.h:7436
// variables: 7
// function calls: 17
void WriteChannelInfo(vector<unsigned char, std::allocator<unsigned char> >& data, const vector<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >& channels)
{
	size_t sz; // 7438
	unsigned char* p; // 7447
	{
		size_t c; // 7441
		vector<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::size(); // 7441
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 2874
		basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str(); // 7442
	}
	{
		size_t c; // 7449
		{
			int pixel_type; // 7455
			int x_sampling; // 7456
			int y_sampling; // 7457
			vector<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::operator[](
					size_type __n);  // 7450
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 2874
			basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str(); // 7450
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 7450
			vector<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::operator[](
					size_type __n);  // 7451
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 2874
			basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str(); // 7451
			vector<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::operator[](
					size_type __n);  // 7455
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 7462
			vector<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::operator[](
					size_type __n);  // 7465
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 7468
		}
		vector<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::size(); // 7449
	}
	vector<unsigned char, std::allocator<unsigned char> >::_M_range_check(
			size_type __n);  // 1315
	vector<unsigned char, std::allocator<unsigned char> >::at(
		size_type __n);  // 7447
} /* size: 0, variables: 2, inline expansions: 2 (62 bytes) */

// <04801E4B> ../thirdparty/tinyexr/tinyexr.h:7478
// variables: 13
// function calls: 40
void CompressZip(unsigned char* dst, tinyexr_uint64& compressedSize, const unsigned char* src, long unsigned int src_size)
{
	vector<unsigned char, std::allocator<unsigned char> > tmpBuf; // 7481
	const char* srcPtr; // 7492
	mz_ulong outSize; // 7534
	int ret; // 7535
	{
		char* t1; // 7495
		char* t2; // 7496
		const char* stop; // 7497
		vector<unsigned char, std::allocator<unsigned char> >::_M_range_check(
				size_type __n);  // 1315
		vector<unsigned char, std::allocator<unsigned char> >::at(
			size_type __n);  // 7495
	}
	{
		unsigned char* t; // 7517
		unsigned char* stop; // 7518
		int p; // 7519
		{
			int d; // 7522
		}
	}
	__new_allocator<unsigned char>::__new_allocator(
			const __new_allocator<unsigned char>  &);  // 173
	allocator<unsigned char>::allocator(
			const allocator<unsigned char>& __a);  // 2210
	allocator<unsigned char>::~allocator(); // 2210
	_S_check_init_len(size_type __n,
				const allocator_type& __a);  // 587
	__new_allocator<unsigned char>::__new_allocator(
			const __new_allocator<unsigned char>  &);  // 173
	allocator<unsigned char>::allocator(
			const allocator<unsigned char>& __a);  // 153
	_Vector_impl_data::_Vector_impl_data(); // 153
	_Vector_impl::_Vector_impl(
			const _Tp_alloc_type& __a);  // 340
	__new_allocator<unsigned char>::allocate(
		size_type __n,
		const void  *);  // 203
	allocator<unsigned char>::allocate(
		size_t __n);  // 614
	allocate(allocator_type& __a,
		size_type __n);  // 387
	_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_allocate(
			size_t __n);  // 405
	_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_create_storage(
				size_t __n);  // 341
	_Vector_base<unsigned char, std::allocator<unsigned char> >::_Vector_base(
			size_t __n,
			const allocator_type& __a);  // 587
	{
		value_type* __val; // 892
		{
			const size_t  __len; // 950
		}
		__fill_a1<unsigned char, unsigned char>(unsigned char* __first,
							unsigned char* __last,
							const unsigned char& __x);  // 979
		__fill_a<unsigned char*, unsigned char>(unsigned char* __first,
							unsigned char* __last,
							const unsigned char& __value);  // 1148
		__fill_n_a<unsigned char*, long unsigned int, unsigned char>(unsigned char* __first,
										long unsigned int __n,
										const unsigned char& __value,
										random_access_iterator_tag);  // 1178
		fill_n<unsigned char*, long unsigned int, unsigned char>(unsigned char* __first,
									long unsigned int __n,
									const unsigned char& __value);  // 896
		_Construct<unsigned char>(unsigned char* __p); // 894
	}
	__uninit_default_n<unsigned char*, long unsigned int>(unsigned char* __first,
								long unsigned int __n);  // 888
	__uninit_default_n<unsigned char*, long unsigned int>(unsigned char* __first,
								long unsigned int __n);  // 947
	__uninitialized_default_n<unsigned char*, long unsigned int>(unsigned char* __first,
									long unsigned int __n);  // 1002
	__uninitialized_default_n_a<unsigned char*, long unsigned int, unsigned char>(unsigned char* __first,
											long unsigned int __n,
											allocator<unsigned char> &);  // 2011
	vector<unsigned char, std::allocator<unsigned char> >::_M_default_initialize(
				size_type __n);  // 588
	vector<unsigned char, std::allocator<unsigned char> >::vector(
		size_type __n,
		const allocator_type& __a);  // 7481
	mz_deflateBound(mz_streamp pStream,
			mz_ulong source_len);  // 2149
	mz_compressBound(mz_ulong source_len); // 7534
	mz_compress(unsigned char* pDest,
			mz_ulong* pDest_len,
			const unsigned char* pSource,
			mz_ulong source_len);  // 7535
	__new_allocator<unsigned char>::deallocate(
			unsigned char* __p,
			size_type __n);  // 215
	allocator<unsigned char>::deallocate(
			unsigned char* __p,
			size_t __n);  // 649
	deallocate(allocator_type& __a,
			pointer __p,
			size_type __n);  // 396
	_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_deallocate(
			pointer __p,
			size_t __n);  // 375
	_Vector_base<unsigned char, std::allocator<unsigned char> >::~_Vector_base(); // 805
	_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_get_Tp_allocator(); // 803
	_Destroy<unsigned char*, unsigned char>(unsigned char* __first,
						unsigned char* __last,
						allocator<unsigned char> &);  // 802
	vector<unsigned char, std::allocator<unsigned char> >::~vector(); // 7557
	allocator<unsigned char>::~allocator(); // 7481
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 7555
} /* size: 0, variables: 4, inline expansions: 33 (772 bytes) */

// <048013AB> ../thirdparty/tinyexr/tinyexr.h:7559
// variables: 11
// function calls: 38
void DecompressZip(unsigned char* dst, long unsigned int* uncompressed_size, const unsigned char* src, long unsigned int src_size)
{
	vector<unsigned char, std::allocator<unsigned char> > tmpBuf; // 7567
	int ret; // 7570
	{
		unsigned char* t; // 7589
		unsigned char* stop; // 7590
		{
			int d; // 7593
		}
	}
	{
		const char* t1; // 7601
		const char* t2; // 7602
		char* s; // 7604
		char* stop; // 7605
	}
	__new_allocator<unsigned char>::__new_allocator(
			const __new_allocator<unsigned char>  &);  // 173
	allocator<unsigned char>::allocator(
			const allocator<unsigned char>& __a);  // 2210
	allocator<unsigned char>::~allocator(); // 2210
	_S_check_init_len(size_type __n,
				const allocator_type& __a);  // 587
	__new_allocator<unsigned char>::__new_allocator(
			const __new_allocator<unsigned char>  &);  // 173
	allocator<unsigned char>::allocator(
			const allocator<unsigned char>& __a);  // 153
	_Vector_impl_data::_Vector_impl_data(); // 153
	_Vector_impl::_Vector_impl(
			const _Tp_alloc_type& __a);  // 340
	__new_allocator<unsigned char>::allocate(
		size_type __n,
		const void  *);  // 203
	allocator<unsigned char>::allocate(
		size_t __n);  // 614
	allocate(allocator_type& __a,
		size_type __n);  // 387
	_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_allocate(
			size_t __n);  // 405
	_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_create_storage(
				size_t __n);  // 341
	_Vector_base<unsigned char, std::allocator<unsigned char> >::_Vector_base(
			size_t __n,
			const allocator_type& __a);  // 587
	{
		value_type* __val; // 892
		{
			const size_t  __len; // 950
		}
		__fill_a1<unsigned char, unsigned char>(unsigned char* __first,
							unsigned char* __last,
							const unsigned char& __x);  // 979
		__fill_a<unsigned char*, unsigned char>(unsigned char* __first,
							unsigned char* __last,
							const unsigned char& __value);  // 1148
		__fill_n_a<unsigned char*, long unsigned int, unsigned char>(unsigned char* __first,
										long unsigned int __n,
										const unsigned char& __value,
										random_access_iterator_tag);  // 1178
		fill_n<unsigned char*, long unsigned int, unsigned char>(unsigned char* __first,
									long unsigned int __n,
									const unsigned char& __value);  // 896
		_Construct<unsigned char>(unsigned char* __p); // 894
	}
	__uninit_default_n<unsigned char*, long unsigned int>(unsigned char* __first,
								long unsigned int __n);  // 888
	__uninit_default_n<unsigned char*, long unsigned int>(unsigned char* __first,
								long unsigned int __n);  // 947
	__uninitialized_default_n<unsigned char*, long unsigned int>(unsigned char* __first,
									long unsigned int __n);  // 1002
	__uninitialized_default_n_a<unsigned char*, long unsigned int, unsigned char>(unsigned char* __first,
											long unsigned int __n,
											allocator<unsigned char> &);  // 2011
	vector<unsigned char, std::allocator<unsigned char> >::_M_default_initialize(
				size_type __n);  // 588
	vector<unsigned char, std::allocator<unsigned char> >::vector(
		size_type __n,
		const allocator_type& __a);  // 7567
	_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_get_Tp_allocator(); // 803
	_Destroy<unsigned char*, unsigned char>(unsigned char* __first,
						unsigned char* __last,
						allocator<unsigned char> &);  // 802
	__new_allocator<unsigned char>::deallocate(
			unsigned char* __p,
			size_type __n);  // 215
	allocator<unsigned char>::deallocate(
			unsigned char* __p,
			size_t __n);  // 649
	deallocate(allocator_type& __a,
			pointer __p,
			size_type __n);  // 396
	_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_deallocate(
			pointer __p,
			size_t __n);  // 375
	_Vector_base<unsigned char, std::allocator<unsigned char> >::~_Vector_base(); // 805
	vector<unsigned char, std::allocator<unsigned char> >::~vector(); // 7621
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 7564
	allocator<unsigned char>::~allocator(); // 7567
	vector<unsigned char, std::allocator<unsigned char> >::size(); // 1292
	vector<unsigned char, std::allocator<unsigned char> >::_M_range_check(
			size_type __n);  // 1315
	vector<unsigned char, std::allocator<unsigned char> >::at(
		size_type __n);  // 7571
} /* size: 0, variables: 2, inline expansions: 33 (533 bytes) */

// <04801346> ../thirdparty/tinyexr/tinyexr.h:7652
// variables: 4
void rleCompress(int inLength, const char* in, signed char* out)
{
	const char* inEnd; // 7653
	const char* runStart; // 7654
	const char* runEnd; // 7655
	signed char* outWrite; // 7656
} /* size: 0, variables: 4 */

// <048012D3> ../thirdparty/tinyexr/tinyexr.h:7703
// variables: 3
void rleUncompress(int inLength, int maxLength, const signed char* in, char* out)
{
	char* outStart; // 7705
	{
		int count; // 7709
	}
	{
		int count; // 7719
	}
} /* size: 0, variables: 1 */

// <0480120A> ../thirdparty/tinyexr/tinyexr.h:7740
// variables: 10
void CompressRle(unsigned char* dst, tinyexr_uint64& compressedSize, const unsigned char* src, long unsigned int src_size)
{
	vector<unsigned char, std::allocator<unsigned char> > tmpBuf; // 7743
	const char* srcPtr; // 7754
	int outSize; // 7792
	{
		char* t1; // 7757
		char* t2; // 7758
		const char* stop; // 7759
	}
	{
		unsigned char* t; // 7779
		unsigned char* stop; // 7780
		int p; // 7781
		{
			int d; // 7784
		}
	}
} /* size: 0, variables: 3 */

// <0480114E> ../thirdparty/tinyexr/tinyexr.h:7807
// variables: 9
void DecompressRle(unsigned char* dst, const long unsigned int uncompressed_size, const unsigned char* src, long unsigned int src_size)
{
	vector<unsigned char, std::allocator<unsigned char> > tmpBuf; // 7822
	int ret; // 7824
	{
		unsigned char* t; // 7839
		unsigned char* stop; // 7840
		{
			int d; // 7843
		}
	}
	{
		const char* t1; // 7851
		const char* t2; // 7852
		char* s; // 7854
		char* stop; // 7855
	}
} /* size: 0, variables: 2 */

// <048010E7> ../thirdparty/tinyexr/tinyexr.h:7926
// variables: 4
inline void wenc14(short unsigned int a, short unsigned int b, short unsigned int& l, short unsigned int& h)
{
	short int as; // 7928
	short int bs; // 7929
	short int ms; // 7931
	short int ds; // 7932
} /* size: 0, variables: 4 */

// <04801068> ../thirdparty/tinyexr/tinyexr.h:7938
// variables: 6
inline void wdec14(short unsigned int l, short unsigned int h, short unsigned int& a, short unsigned int& b)
{
	short int ls; // 7940
	short int hs; // 7941
	int hi; // 7943
	int ai; // 7944
	short int as; // 7946
	short int bs; // 7947
} /* size: 0, variables: 6 */

// <0480100F> ../thirdparty/tinyexr/tinyexr.h:7964
// variables: 3
inline void wenc16(short unsigned int a, short unsigned int b, short unsigned int& l, short unsigned int& h)
{
	int ao; // 7966
	int m; // 7967
	int d; // 7968
} /* size: 0, variables: 3 */

// <04800FAA> ../thirdparty/tinyexr/tinyexr.h:7978
// variables: 4
inline void wdec16(short unsigned int l, short unsigned int h, short unsigned int& a, short unsigned int& b)
{
	int m; // 7980
	int d; // 7981
	int bb; // 7982
	int aa; // 7983
} /* size: 0, variables: 4 */

// <04800E23> ../thirdparty/tinyexr/tinyexr.h:7992
// variables: 23
void wav2Encode(short unsigned int* in, int nx, int ox, int ny, int oy, short unsigned int mx)
{
	bool w14; // 8000
	int n; // 8001
	int p; // 8002
	int p2; // 8003
	{
		short unsigned int* py; // 8010
		short unsigned int* ey; // 8011
		int oy1; // 8012
		int oy2; // 8013
		int ox1; // 8014
		int ox2; // 8015
		short unsigned int i00; // 8016
		short unsigned int i01; // 8016
		short unsigned int i10; // 8016
		short unsigned int i11; // 8016
		{
			short unsigned int* px; // 8023
			short unsigned int* ex; // 8024
			{
				short unsigned int* p01; // 8031
				short unsigned int* p10; // 8032
				short unsigned int* p11; // 8033
			}
			{
				short unsigned int* p10; // 8057
			}
		}
		{
			short unsigned int* px; // 8073
			short unsigned int* ex; // 8074
			{
				short unsigned int* p01; // 8077
			}
		}
	}
} /* size: 0, variables: 4 */

// <04800C9C> ../thirdparty/tinyexr/tinyexr.h:8101
// variables: 23
void wav2Decode(short unsigned int* in, int nx, int ox, int ny, int oy, short unsigned int mx)
{
	bool w14; // 8109
	int n; // 8110
	int p; // 8111
	int p2; // 8112
	{
		short unsigned int* py; // 8129
		short unsigned int* ey; // 8130
		int oy1; // 8131
		int oy2; // 8132
		int ox1; // 8133
		int ox2; // 8134
		short unsigned int i00; // 8135
		short unsigned int i01; // 8135
		short unsigned int i10; // 8135
		short unsigned int i11; // 8135
		{
			short unsigned int* px; // 8142
			short unsigned int* ex; // 8143
			{
				short unsigned int* p01; // 8150
				short unsigned int* p10; // 8151
				short unsigned int* p11; // 8152
			}
			{
				short unsigned int* p10; // 8176
			}
		}
		{
			short unsigned int* px; // 8192
			short unsigned int* ex; // 8193
			{
				short unsigned int* p01; // 8196
			}
		}
	}
} /* size: 0, variables: 4 */

// <04800C84> ../thirdparty/tinyexr/tinyexr.h:8242
inline void hufLength(long long int code)
{
} /* size: 0 */

// <04800C6C> ../thirdparty/tinyexr/tinyexr.h:8244
inline void hufCode(long long int code)
{
} /* size: 0 */

// <04800C23> ../thirdparty/tinyexr/tinyexr.h:8246
inline void outputBits(int nBits, long long int bits, long long int& c, int& lc, char *& out)
{
} /* size: 0 */

// <04800BE8> ../thirdparty/tinyexr/tinyexr.h:8256
inline void getBits(int nBits, long long int& c, int& lc, const char *& in)
{
} /* size: 0 */

// <04800A9D> ../thirdparty/tinyexr/tinyexr.h:8286
// variables: 8
void hufCanonicalCodeTable(long long int* hcode)
{
	long long int n; // 8287
	long long int c; // 8305
	{
		int i; // 8295
	}
	{
		int i; // 8297
	}
	{
		int i; // 8307
		{
			long long int nc; // 8308
		}
	}
	{
		int i; // 8320
		{
			int l; // 8321
		}
	}
} /* size: 198, variables: 2 */

// <04800A6E> ../thirdparty/tinyexr/tinyexr.h:8337
inline void FHeapCompare::operator(long long int* a, long long int* b)
{
} /* size: 0 */

// <04800984> ../thirdparty/tinyexr/tinyexr.h:8340
// variables: 9
void hufBuildEncTable(long long int* frq, int* im, int* iM)
{
	vector<int, std::allocator<int> > hlink; // 8366
	vector<long long int*, std::allocator<long long int*> > fHeap; // 8367
	int nf; // 8373
	vector<long long int, std::allocator<long long int> > scode; // 8426
	{
		int i; // 8375
	}
	{
		int mm; // 8436
		int m; // 8440
		{
			int j; // 8465
		}
		{
			int j; // 8484
		}
	}
} /* size: 0, variables: 4 */

// <04800909> ../thirdparty/tinyexr/tinyexr.h:8523
// variables: 5
void hufPackEncTable(const long long int* hcode, int im, int iM, char** pcode)
{
	char* p; // 8529
	long long int c; // 8530
	int lc; // 8531
	{
		int l; // 8534
		{
			int zerun; // 8537
		}
	}
} /* size: 0, variables: 3 */

// <0480086F> ../thirdparty/tinyexr/tinyexr.h:8568
// variables: 6
void hufUnpackEncTable(const char ** pcode, int ni, int im, int iM, long long int* hcode)
{
	const char* p; // 8577
	long long int c; // 8578
	int lc; // 8579
	{
		long long int l; // 8586
		{
			int zerun; // 8593
		}
		{
			int zerun; // 8603
		}
	}
} /* size: 0, variables: 3 */

// <0480084A> ../thirdparty/tinyexr/tinyexr.h:8630
// variable: 1
void hufClearDecTable(HufDec* hdecod)
{
	{
		int i; // 8633
	}
} /* size: 0 */

// <048007AE> ../thirdparty/tinyexr/tinyexr.h:8649
// variables: 7
void hufBuildDecTable(const long long int* hcode, int im, int iM, HufDec* hdecod)
{
	{
		long long int c; // 8661
		int l; // 8662
		{
			HufDec* pl; // 8680
			{
				int* p; // 8695
				{
					int i; // 8698
				}
			}
		}
		{
			HufDec* pl; // 8711
			{
				long long int i; // 8713
			}
		}
	}
} /* size: 0 */

// <04800789> ../thirdparty/tinyexr/tinyexr.h:8737
// variable: 1
void hufFreeDecTable(HufDec* hdecod)
{
	{
		int i; // 8739
	}
} /* size: 0 */

// <0480074D> ../thirdparty/tinyexr/tinyexr.h:8751
inline void outputCode(long long int code, long long int& c, int& lc, char *& out)
{
} /* size: 0 */

// <048006F7> ../thirdparty/tinyexr/tinyexr.h:8755
inline void sendCode(long long int sCode, int runCount, long long int runCode, long long int& c, int& lc, char *& out)
{
} /* size: 0 */

// <04800665> ../thirdparty/tinyexr/tinyexr.h:8777
// variables: 6
void hufEncode(const long long int* hcode, const short unsigned int* in, const int ni, int rlc, char* out)
{
	char* outStart; // 8784
	long long int c; // 8785
	int lc; // 8786
	int s; // 8787
	int cs; // 8788
	{
		int i; // 8794
	}
} /* size: 0, variables: 5 */

// <0480056D> ../thirdparty/tinyexr/tinyexr.h:8859
// variables: 2
void getCode(int po, int rlc, long long int& c, int& lc, const char *& in, const char* in_end, short unsigned int *& out, const short unsigned int* ob, const short unsigned int* oe)
{
	{
		unsigned char cs; // 8875
		short unsigned int s; // 8882
	}
} /* size: 187 */

// <04800489> ../thirdparty/tinyexr/tinyexr.h:8898
// variables: 10
void hufDecode(const long long int* hcode, const HufDec* hdecod, const char* in, int ni, int rlc, int no, short unsigned int* out)
{
	long long int c; // 8906
	int lc; // 8907
	short unsigned int* outb; // 8908
	short unsigned int* oe; // 8909
	const char* ie; // 8910
	int i; // 8988
	{
		const HufDec  pl; // 8924
		{
			int j; // 8952
			{
				int l; // 8955
			}
		}
	}
	{
		const HufDec  pl; // 8993
	}
} /* size: 0, variables: 6 */

// <0480043B> ../thirdparty/tinyexr/tinyexr.h:9014
// variables: 2
void countFrequencies(vector<long long int, std::allocator<long long int> >& freq, const short unsigned int* data, int n)
{
	{
		int i; // 9016
	}
	{
		int i; // 9018
	}
} /* size: 0 */

// <0480040D> ../thirdparty/tinyexr/tinyexr.h:9021
// variable: 1
void writeUInt(char* buf, unsigned int i)
{
	unsigned char* b; // 9022
} /* size: 0, variables: 1 */

// <048003EA> ../thirdparty/tinyexr/tinyexr.h:9030
// variable: 1
void readUInt(const char* buf)
{
	const unsigned char* b; // 9031
} /* size: 0, variables: 1 */

// <047FCFF2> ../thirdparty/tinyexr/tinyexr.h:9041
// variables: 25
// function calls: 212
void hufCompress(const short unsigned int* raw, int nRaw, char* compressed)
{
	vector<long long int, std::allocator<long long int> > freq; // 9045
	int im; // 9049
	int iM; // 9050
	char* tableStart; // 9053
	char* tableEnd; // 9054
	int tableLength; // 9056
	char* dataStart; // 9058
	int nBits; // 9059
	int data_length; // 9060
	__new_allocator<long long int>::__new_allocator(
			const __new_allocator<long long int>  &);  // 173
	allocator<long long int>::allocator(
			const allocator<long long int>& __a);  // 2210
	allocator<long long int>::~allocator(); // 2210
	_S_check_init_len(size_type __n,
				const allocator_type& __a);  // 587
	__new_allocator<long long int>::__new_allocator(
			const __new_allocator<long long int>  &);  // 173
	allocator<long long int>::allocator(
			const allocator<long long int>& __a);  // 153
	_Vector_impl_data::_Vector_impl_data(); // 153
	_Vector_impl::_Vector_impl(
			const _Tp_alloc_type& __a);  // 340
	__new_allocator<long long int>::allocate(
		size_type __n,
		const void  *);  // 203
	allocator<long long int>::allocate(
		size_t __n);  // 614
	allocate(allocator_type& __a,
		size_type __n);  // 387
	_Vector_base<long long int, std::allocator<long long int> >::_M_allocate(
			size_t __n);  // 405
	_Vector_base<long long int, std::allocator<long long int> >::_M_create_storage(
				size_t __n);  // 341
	_Vector_base<long long int, std::allocator<long long int> >::_Vector_base(
			size_t __n,
			const allocator_type& __a);  // 587
	{
		value_type* __val; // 892
	}
	__uninit_default_n<long long int*, long unsigned int>(long long int* __first,
								long unsigned int __n);  // 888
	__uninit_default_n<long long int*, long unsigned int>(long long int* __first,
								long unsigned int __n);  // 947
	__uninitialized_default_n<long long int*, long unsigned int>(long long int* __first,
									long unsigned int __n);  // 1002
	__uninitialized_default_n_a<long long int*, long unsigned int, long long int>(long long int* __first,
											long unsigned int __n,
											allocator<long long int> &);  // 2011
	vector<long long int, std::allocator<long long int> >::_M_default_initialize(
				size_type __n);  // 588
	vector<long long int, std::allocator<long long int> >::vector(
		size_type __n,
		const allocator_type& __a);  // 9045
	{
		int i; // 9016
	}
	{
		int i; // 9018
		vector<long long int, std::allocator<long long int> >::operator[](
				size_type __n);  // 9018
	}
	countFrequencies(vector<long long int, std::allocator<long long int> >& freq,
			const short unsigned int* data,
			int n);  // 9047
	__new_allocator<int>::__new_allocator(
			const __new_allocator<int>  &);  // 173
	allocator<int>::allocator(
			const allocator<int>& __a);  // 2210
	allocator<int>::~allocator(); // 2210
	_S_check_init_len(size_type __n,
				const allocator_type& __a);  // 587
	__new_allocator<int>::__new_allocator(
			const __new_allocator<int>  &);  // 173
	allocator<int>::allocator(
			const allocator<int>& __a);  // 153
	_Vector_impl_data::_Vector_impl_data(); // 153
	_Vector_impl::_Vector_impl(
			const _Tp_alloc_type& __a);  // 340
	__new_allocator<int>::allocate(
		size_type __n,
		const void  *);  // 203
	allocator<int>::allocate(
		size_t __n);  // 614
	allocate(allocator_type& __a,
		size_type __n);  // 387
	_Vector_base<int, std::allocator<int> >::_M_allocate(
			size_t __n);  // 405
	_Vector_base<int, std::allocator<int> >::_M_create_storage(
				size_t __n);  // 341
	_Vector_base<int, std::allocator<int> >::_Vector_base(
			size_t __n,
			const allocator_type& __a);  // 587
	{
		value_type* __val; // 892
		__fill_a1<int*, int>(int* __first,
					int* __last,
					const int& __value);  // 979
		__fill_a<int*, int>(int* __first,
					int* __last,
					const int& __value);  // 1148
		__fill_n_a<int*, long unsigned int, int>(int* __first,
							long unsigned int __n,
							const int& __value,
							random_access_iterator_tag);  // 1178
		fill_n<int*, long unsigned int, int>(int* __first,
							long unsigned int __n,
							const int& __value);  // 896
		_Construct<int>(int* __p); // 894
	}
	__uninit_default_n<int*, long unsigned int>(int* __first,
							long unsigned int __n);  // 888
	__uninit_default_n<int*, long unsigned int>(int* __first,
							long unsigned int __n);  // 947
	__uninitialized_default_n<int*, long unsigned int>(int* __first,
								long unsigned int __n);  // 1002
	__uninitialized_default_n_a<int*, long unsigned int, int>(int* __first,
									long unsigned int __n,
									allocator<int> &);  // 2011
	vector<int, std::allocator<int> >::_M_default_initialize(
				size_type __n);  // 588
	vector<int, std::allocator<int> >::vector(
		size_type __n,
		const allocator_type& __a);  // 8366
	allocator<int>::~allocator(); // 8366
	__new_allocator<long long int::__new_allocator(
			const __new_allocator<long long int*>  &);  // 173
	allocator<long long int::allocator(
			const allocator<long long int*>& __a);  // 2210
	allocator<long long int::~allocator(); // 2210
	_S_check_init_len(size_type __n,
				const allocator_type& __a);  // 587
	__new_allocator<long long int::__new_allocator(
			const __new_allocator<long long int*>  &);  // 173
	allocator<long long int::allocator(
			const allocator<long long int*>& __a);  // 153
	_Vector_impl_data::_Vector_impl_data(); // 153
	_Vector_impl::_Vector_impl(
			const _Tp_alloc_type& __a);  // 340
	__new_allocator<long long int::allocate(
		size_type __n,
		const void  *);  // 203
	allocator<long long int::allocate(
		size_t __n);  // 614
	allocate(allocator_type& __a,
		size_type __n);  // 387
	_Vector_base<long long int::_M_allocate(
			size_t __n);  // 405
	_Vector_base<long long int::_M_create_storage(
				size_t __n);  // 341
	_Vector_base<long long int::_Vector_base(
			size_t __n,
			const allocator_type& __a);  // 587
	{
		value_type* __val; // 892
		__fill_a1<long long int**, long long int*>(long long int** __first,
								long long int** __last,
								long long int* const& __value);  // 979
		__fill_a<long long int**, long long int*>(long long int** __first,
								long long int** __last,
								long long int* const& __value);  // 1148
		__fill_n_a<long long int**, long unsigned int, long long int*>(long long int** __first,
										long unsigned int __n,
										long long int* const& __value,
										random_access_iterator_tag);  // 1178
		fill_n<long long int**, long unsigned int, long long int*>(long long int** __first,
										long unsigned int __n,
										long long int* const& __value);  // 896
		_Construct<long long int*>(long long int** __p); // 894
	}
	__uninit_default_n<long long int**, long unsigned int>(long long int** __first,
								long unsigned int __n);  // 888
	__uninit_default_n<long long int**, long unsigned int>(long long int** __first,
								long unsigned int __n);  // 947
	__uninitialized_default_n<long long int**, long unsigned int>(long long int** __first,
									long unsigned int __n);  // 1002
	__uninitialized_default_n_a<long long int**, long unsigned int, long long int*>(long long int** __first,
											long unsigned int __n,
											allocator<long long int*> &);  // 2011
	vector<long long int::_M_default_initialize(
				size_type __n);  // 588
	vector<long long int::vector(
		size_type __n,
		const allocator_type& __a);  // 8367
	{
		int i; // 8375
		vector<long long int::operator[](
				size_type __n);  // 8379
	}
	vector<long long int::operator[](
			size_type __n);  // 8424
	vector<long long int::operator[](
			size_type __n);  // 8393
	{
		_ValueType __value; // 355
		FHeapCompare::operator(
				long long int* a,
				long long int* b);  // 196
		_Iter_comp_val<tinyexr::FHeapCompare>::operator(
								long long int** __it,
								long long int *& __val);  // 140
		__push_heap<long long int**, long int, long long int*, __gnu_cxx::__ops::_Iter_comp_val<tinyexr::FHeapCompare> >(long long int** __first,
																long int __holeIndex,
																long int __topIndex,
																long long int* __value,
																_Iter_comp_val<tinyexr::FHeapCompare>& __comp);  // 247
		FHeapCompare::operator(
				long long int* a,
				long long int* b);  // 158
		_Iter_comp_iter<tinyexr::FHeapCompare>::operator(
								long long int** __it1,
								long long int** __it2);  // 232
		__adjust_heap<long long int**, long int, long long int*, __gnu_cxx::__ops::_Iter_comp_iter<tinyexr::FHeapCompare> >(long long int** __first,
																long int __holeIndex,
																long int __len,
																long long int* __value,
																_Iter_comp_iter<tinyexr::FHeapCompare> __comp);  // 356
	}
	__make_heap<long long int**, __gnu_cxx::__ops::_Iter_comp_iter<tinyexr::FHeapCompare> >(long long int** __first,
												long long int** __last,
												_Iter_comp_iter<tinyexr::FHeapCompare>& __comp);  // 413
	make_heap<long long int**, tinyexr::FHeapCompare>(long long int** __first,
								long long int** __last,
								FHeapCompare __comp);  // 8424
	__new_allocator<long long int>::allocate(
		size_type __n,
		const void  *);  // 203
	allocator<long long int>::allocate(
		size_t __n);  // 614
	allocate(allocator_type& __a,
		size_type __n);  // 387
	_Vector_base<long long int, std::allocator<long long int> >::_M_allocate(
			size_t __n);  // 405
	_Vector_base<long long int, std::allocator<long long int> >::_M_create_storage(
				size_t __n);  // 341
	__new_allocator<long long int>::__new_allocator(
			const __new_allocator<long long int>  &);  // 173
	allocator<long long int>::allocator(
			const allocator<long long int>& __a);  // 153
	_Vector_impl_data::_Vector_impl_data(); // 153
	_Vector_impl::_Vector_impl(
			const _Tp_alloc_type& __a);  // 340
	_Vector_base<long long int, std::allocator<long long int> >::_Vector_base(
			size_t __n,
			const allocator_type& __a);  // 587
	__new_allocator<long long int>::__new_allocator(
			const __new_allocator<long long int>  &);  // 173
	allocator<long long int>::allocator(
			const allocator<long long int>& __a);  // 2210
	allocator<long long int>::~allocator(); // 2210
	_S_check_init_len(size_type __n,
				const allocator_type& __a);  // 587
	vector<long long int, std::allocator<long long int> >::_M_default_initialize(
				size_type __n);  // 588
	vector<long long int, std::allocator<long long int> >::vector(
		size_type __n,
		const allocator_type& __a);  // 8426
	memset(void* __dest,
		int __ch,
		size_t __len);  // 8427
	allocator<long long int>::~allocator(); // 8426
	{
		int mm; // 8436
		int m; // 8440
		{
			_Iter_comp_iter<tinyexr::FHeapCompare> __cmp; // 331
			FHeapCompare::operator(
					long long int* a,
					long long int* b);  // 158
			_Iter_comp_iter<tinyexr::FHeapCompare>::operator(
									long long int** __it1,
									long long int** __it2);  // 232
			FHeapCompare::operator(
					long long int* a,
					long long int* b);  // 196
			_Iter_comp_val<tinyexr::FHeapCompare>::operator(
									long long int** __it,
									long long int *& __val);  // 140
			__push_heap<long long int**, long int, long long int*, __gnu_cxx::__ops::_Iter_comp_val<tinyexr::FHeapCompare> >(long long int** __first,
																long int __holeIndex,
																long int __topIndex,
																long long int* __value,
																_Iter_comp_val<tinyexr::FHeapCompare>& __comp);  // 247
			__adjust_heap<long long int**, long int, long long int*, __gnu_cxx::__ops::_Iter_comp_iter<tinyexr::FHeapCompare> >(long long int** __first,
																long int __holeIndex,
																long int __len,
																long long int* __value,
																_Iter_comp_iter<tinyexr::FHeapCompare> __comp);  // 264
			__pop_heap<long long int**, __gnu_cxx::__ops::_Iter_comp_iter<tinyexr::FHeapCompare> >(long long int** __first,
														long long int** __last,
														long long int** __result,
														_Iter_comp_iter<tinyexr::FHeapCompare>& __comp);  // 333
		}
		pop_heap<long long int**, tinyexr::FHeapCompare>(long long int** __first,
								long long int** __last,
								FHeapCompare __comp);  // 317
		pop_heap<long long int**, tinyexr::FHeapCompare>(long long int** __first,
								long long int** __last,
								FHeapCompare __comp);  // 8437
		{
			_Iter_comp_iter<tinyexr::FHeapCompare> __cmp; // 331
			FHeapCompare::operator(
					long long int* a,
					long long int* b);  // 158
			_Iter_comp_iter<tinyexr::FHeapCompare>::operator(
									long long int** __it1,
									long long int** __it2);  // 232
			FHeapCompare::operator(
					long long int* a,
					long long int* b);  // 196
			_Iter_comp_val<tinyexr::FHeapCompare>::operator(
									long long int** __it,
									long long int *& __val);  // 140
			__push_heap<long long int**, long int, long long int*, __gnu_cxx::__ops::_Iter_comp_val<tinyexr::FHeapCompare> >(long long int** __first,
																long int __holeIndex,
																long int __topIndex,
																long long int* __value,
																_Iter_comp_val<tinyexr::FHeapCompare>& __comp);  // 247
			__adjust_heap<long long int**, long int, long long int*, __gnu_cxx::__ops::_Iter_comp_iter<tinyexr::FHeapCompare> >(long long int** __first,
																long int __holeIndex,
																long int __len,
																long long int* __value,
																_Iter_comp_iter<tinyexr::FHeapCompare> __comp);  // 264
			__pop_heap<long long int**, __gnu_cxx::__ops::_Iter_comp_iter<tinyexr::FHeapCompare> >(long long int** __first,
														long long int** __last,
														long long int** __result,
														_Iter_comp_iter<tinyexr::FHeapCompare>& __comp);  // 333
		}
		pop_heap<long long int**, tinyexr::FHeapCompare>(long long int** __first,
								long long int** __last,
								FHeapCompare __comp);  // 317
		pop_heap<long long int**, tinyexr::FHeapCompare>(long long int** __first,
								long long int** __last,
								FHeapCompare __comp);  // 8441
		FHeapCompare::operator(
				long long int* a,
				long long int* b);  // 196
		_Iter_comp_val<tinyexr::FHeapCompare>::operator(
								long long int** __it,
								long long int *& __val);  // 140
		__push_heap<long long int**, long int, long long int*, __gnu_cxx::__ops::_Iter_comp_val<tinyexr::FHeapCompare> >(long long int** __first,
																long int __holeIndex,
																long int __topIndex,
																long long int* __value,
																_Iter_comp_val<tinyexr::FHeapCompare>& __comp);  // 216
		push_heap<long long int**, tinyexr::FHeapCompare>(long long int** __first,
									long long int** __last,
									FHeapCompare __comp);  // 8444
		{
			int j; // 8465
			vector<long long int, std::allocator<long long int> >::operator[](
					size_type __n);  // 8466
			vector<int, std::allocator<int> >::operator[](
					size_type __n);  // 8470
		}
		{
			int j; // 8484
			vector<long long int, std::allocator<long long int> >::operator[](
					size_type __n);  // 8485
			vector<int, std::allocator<int> >::operator[](
					size_type __n);  // 8489
		}
	}
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 8500
	_Vector_base<long long int, std::allocator<long long int> >::_M_get_Tp_allocator(); // 803
	_Destroy<long long int*, long long int>(long long int* __first,
						long long int* __last,
						allocator<long long int> &);  // 802
	__new_allocator<long unsigned int>::deallocate(
			long unsigned int* __p,
			size_type __n);  // 215
	allocator<long unsigned int>::deallocate(
			long unsigned int* __p,
			size_t __n);  // 649
	deallocate(allocator_type& __a,
			pointer __p,
			size_type __n);  // 396
	_Vector_base<long unsigned int, std::allocator<long unsigned int> >::_M_deallocate(
			pointer __p,
			size_t __n);  // 392
	_Vector_base<long long int, std::allocator<long long int> >::_M_deallocate(
			pointer __p,
			size_t __n);  // 375
	allocator<long long int>::~allocator(); // 139
	_Vector_impl::~_Vector_impl(); // 377
	_Vector_base<long long int, std::allocator<long long int> >::~_Vector_base(); // 805
	vector<long long int, std::allocator<long long int> >::~vector(); // 8501
	_Vector_base<long long int::_M_get_Tp_allocator(); // 803
	_Destroy<long long int**, long long int*>(long long int** __first,
							long long int** __last,
							allocator<long long int*> &);  // 802
	__new_allocator<long unsigned int>::deallocate(
			long unsigned int* __p,
			size_type __n);  // 215
	allocator<long unsigned int>::deallocate(
			long unsigned int* __p,
			size_t __n);  // 649
	deallocate(allocator_type& __a,
			pointer __p,
			size_type __n);  // 396
	_Vector_base<long unsigned int, std::allocator<long unsigned int> >::_M_deallocate(
			pointer __p,
			size_t __n);  // 392
	_Vector_base<long long int::_M_deallocate(
			pointer __p,
			size_t __n);  // 375
	allocator<long long int::~allocator(); // 139
	_Vector_impl::~_Vector_impl(); // 377
	_Vector_base<long long int::~_Vector_base(); // 805
	vector<long long int::~vector(); // 8501
	_Vector_base<int, std::allocator<int> >::_M_get_Tp_allocator(); // 803
	_Destroy<int*, int>(int* __first,
				int* __last,
				allocator<int> &);  // 802
	__new_allocator<float>::deallocate(
			float* __p,
			size_type __n);  // 215
	allocator<float>::deallocate(
			float* __p,
			size_t __n);  // 649
	deallocate(allocator_type& __a,
			pointer __p,
			size_type __n);  // 396
	_Vector_base<float, std::allocator<float> >::_M_deallocate(
			pointer __p,
			size_t __n);  // 392
	_Vector_base<int, std::allocator<int> >::_M_deallocate(
			pointer __p,
			size_t __n);  // 375
	allocator<int>::~allocator(); // 139
	_Vector_impl::~_Vector_impl(); // 377
	_Vector_base<int, std::allocator<int> >::~_Vector_base(); // 805
	vector<int, std::allocator<int> >::~vector(); // 8501
	hufBuildEncTable(long long int* frq,
			int* im,
			int* iM);  // 9051
	writeUInt(char* buf,
			unsigned int i);  // 9062
	writeUInt(char* buf,
			unsigned int i);  // 9063
	{
		int l; // 8534
		outputBits(int nBits,
				long long int bits,
				long long int& c,
				int& lc,
				char *& out);  // 8556
		hufLength(long long int code); // 8534
		{
			int zerun; // 8537
			hufLength(long long int code); // 8540
			outputBits(int nBits,
					long long int bits,
					long long int& c,
					int& lc,
					char *& out);  // 8547
			outputBits(int nBits,
					long long int bits,
					long long int& c,
					int& lc,
					char *& out);  // 8548
			outputBits(int nBits,
					long long int bits,
					long long int& c,
					int& lc,
					char *& out);  // 8550
		}
	}
	hufPackEncTable(const long long int* hcode,
			int im,
			int iM,
			char** pcode);  // 9055
	writeUInt(char* buf,
			unsigned int i);  // 9064
	{
		int i; // 8794
		hufCode(long long int code); // 8752
		outputBits(int nBits,
				long long int bits,
				long long int& c,
				int& lc,
				char *& out);  // 8752
		outputCode(long long int code,
				long long int& c,
				int& lc,
				char *& out);  // 8766
		hufLength(long long int code); // 8764
		hufLength(long long int code); // 8764
		hufCode(long long int code); // 8752
		outputBits(int nBits,
				long long int bits,
				long long int& c,
				int& lc,
				char *& out);  // 8752
		outputCode(long long int code,
				long long int& c,
				int& lc,
				char *& out);  // 8769
		outputBits(int nBits,
				long long int bits,
				long long int& c,
				int& lc,
				char *& out);  // 8752
		outputCode(long long int code,
				long long int& c,
				int& lc,
				char *& out);  // 8765
		outputBits(int nBits,
				long long int bits,
				long long int& c,
				int& lc,
				char *& out);  // 8767
		sendCode(long long int sCode,
			int runCount,
			long long int runCode,
			long long int& c,
			int& lc,
			char *& out);  // 8802
	}
	hufLength(long long int code); // 8764
	hufLength(long long int code); // 8764
	hufCode(long long int code); // 8752
	outputBits(int nBits,
			long long int bits,
			long long int& c,
			int& lc,
			char *& out);  // 8752
	outputCode(long long int code,
			long long int& c,
			int& lc,
			char *& out);  // 8765
	hufCode(long long int code); // 8752
	outputBits(int nBits,
			long long int bits,
			long long int& c,
			int& lc,
			char *& out);  // 8752
	outputCode(long long int code,
			long long int& c,
			int& lc,
			char *& out);  // 8769
	hufCode(long long int code); // 8752
	outputBits(int nBits,
			long long int bits,
			long long int& c,
			int& lc,
			char *& out);  // 8752
	outputCode(long long int code,
			long long int& c,
			int& lc,
			char *& out);  // 8766
	outputBits(int nBits,
			long long int bits,
			long long int& c,
			int& lc,
			char *& out);  // 8767
	sendCode(long long int sCode,
		int runCount,
		long long int runCode,
		long long int& c,
		int& lc,
		char *& out);  // 8813
	hufEncode(const long long int* hcode,
			const short unsigned int* in,
			const int  ni,
			int rlc,
			char* out);  // 9059
	writeUInt(char* buf,
			unsigned int i);  // 9065
	__new_allocator<long unsigned int>::deallocate(
			long unsigned int* __p,
			size_type __n);  // 215
	allocator<long unsigned int>::deallocate(
			long unsigned int* __p,
			size_t __n);  // 649
	deallocate(allocator_type& __a,
			pointer __p,
			size_type __n);  // 396
	_Vector_base<long unsigned int, std::allocator<long unsigned int> >::_M_deallocate(
			pointer __p,
			size_t __n);  // 392
	_Vector_base<long long int, std::allocator<long long int> >::_M_deallocate(
			pointer __p,
			size_t __n);  // 375
	allocator<long long int>::~allocator(); // 139
	_Vector_impl::~_Vector_impl(); // 377
	_Vector_base<long long int, std::allocator<long long int> >::~_Vector_base(); // 805
	_Vector_base<long long int, std::allocator<long long int> >::_M_get_Tp_allocator(); // 803
	_Destroy<long long int*, long long int>(long long int* __first,
						long long int* __last,
						allocator<long long int> &);  // 802
	vector<long long int, std::allocator<long long int> >::~vector(); // 9069
	writeUInt(char* buf,
			unsigned int i);  // 9066
} /* size: 3946, variables: 9, inline expansions: 150 (7114 bytes) */

// <047FCE8E> ../thirdparty/tinyexr/tinyexr.h:9071
// variables: 6
void hufUncompress(const char* compressed, int nCompressed, vector<short unsigned int, std::allocator<short unsigned int> >* raw)
{
	int im; // 9079
	int iM; // 9080
	int nBits; // 9082
	const char* ptr; // 9086
	{
		vector<long long int, std::allocator<long long int> > freq; // 9101
		vector<tinyexr::HufDec, std::allocator<tinyexr::HufDec> > hdec; // 9102
	}
} /* size: 0, variables: 4 */

// <047FCE13> ../thirdparty/tinyexr/tinyexr.h:9137
// variables: 3
void bitmapFromData(const short unsigned int* data, int nData, unsigned char* bitmap, short unsigned int& minNonZero, short unsigned int& maxNonZero)
{
	{
		int i; // 9141
	}
	{
		int i; // 9143
	}
	{
		int i; // 9151
	}
} /* size: 0 */

// <047FCDD6> ../thirdparty/tinyexr/tinyexr.h:9159
// variables: 2
void forwardLutFromBitmap(const unsigned char* bitmap, short unsigned int* lut)
{
	int k; // 9161
	{
		int i; // 9163
	}
} /* size: 0, variables: 1 */

// <047FCD8E> ../thirdparty/tinyexr/tinyexr.h:9173
// variables: 3
void reverseLutFromBitmap(const unsigned char* bitmap, short unsigned int* lut)
{
	int k; // 9175
	int n; // 9181
	{
		int i; // 9177
	}
} /* size: 0, variables: 2 */

// <047FCD4F> ../thirdparty/tinyexr/tinyexr.h:9188
// variable: 1
void applyLut(const short unsigned int* lut, short unsigned int* data, int nData)
{
	{
		int i; // 9190
	}
} /* size: 0 */

// <047FCAC5> ../thirdparty/tinyexr/tinyexr.h:9201
// variables: 23
void CompressPiz(unsigned char* outPtr, unsigned int* outSize, const unsigned char* inPtr, size_t inSize, const vector<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >& channelInfo, int data_width, int num_lines)
{
	vector<unsigned char, std::allocator<unsigned char> > bitmap; // 9205
	short unsigned int minNonZero; // 9206
	short unsigned int maxNonZero; // 9207
	vector<short unsigned int, std::allocator<short unsigned int> > tmpBuffer; // 9216
	vector<tinyexr::PIZChannelData, std::allocator<tinyexr::PIZChannelData> > channelData; // 9218
	short unsigned int* tmpBufferEnd; // 9219
	const unsigned char* ptr; // 9241
	vector<short unsigned int, std::allocator<short unsigned int> > lut; // 9259
	short unsigned int maxValue; // 9260
	char* buf; // 9267
	char* lengthPtr; // 9299
	int zero; // 9300
	int length; // 9304
	{
		size_t c; // 9221
		{
			PIZChannelData& cd; // 9222
			size_t pixelSize; // 9231
		}
	}
	{
		int y; // 9242
		{
			size_t i; // 9243
			{
				PIZChannelData& cd; // 9244
				size_t n; // 9249
			}
		}
	}
	{
		size_t i; // 9284
		{
			PIZChannelData& cd; // 9285
			{
				int j; // 9287
			}
		}
	}
} /* size: 0, variables: 13 */

// <047FC93E> ../thirdparty/tinyexr/tinyexr.h:9321
// variables: 20
void DecompressPiz(unsigned char* outPtr, const unsigned char* inPtr, size_t tmpBufSize, size_t inLen, int num_channels, const EXRChannelInfo* channels, int data_width, int num_lines)
{
	vector<unsigned char, std::allocator<unsigned char> > bitmap; // 9331
	short unsigned int minNonZero; // 9332
	short unsigned int maxNonZero; // 9333
	const unsigned char* ptr; // 9343
	vector<short unsigned int, std::allocator<short unsigned int> > lut; // 9360
	short unsigned int maxValue; // 9362
	int length; // 9368
	vector<short unsigned int, std::allocator<short unsigned int> > tmpBuffer; // 9378
	vector<tinyexr::PIZChannelData, std::allocator<tinyexr::PIZChannelData> > channelData; // 9385
	short unsigned int* tmpBufferEnd; // 9387
	{
		size_t i; // 9389
		{
			const EXRChannelInfo& chan; // 9390
			size_t pixelSize; // 9392
		}
	}
	{
		size_t i; // 9407
		{
			PIZChannelData& cd; // 9408
			{
				int j; // 9410
			}
		}
	}
	{
		int y; // 9422
		{
			size_t i; // 9423
			{
				PIZChannelData& cd; // 9424
				size_t n; // 9429
			}
		}
	}
} /* size: 0, variables: 10 */

// <04811A9B> ../thirdparty/tinyexr/tinyexr.h:9646
// variables: 151
// function calls: 480
void DecodePixelData(unsigned char** out_images, const int* requested_pixel_types, const unsigned char* data_ptr, size_t data_len, int compression_type, int line_order, int width, int height, int x_stride, int y, int line_no, int num_lines, size_t pixel_data_size, size_t num_channels, const EXRChannelInfo* channels, const vector<long unsigned int, std::allocator<long unsigned int> >& channel_offset_list, const EXRAttribute* attributes, size_t num_attributes)
{
	{
		size_t c; // 10141
		{
			size_t v; // 10142
			{
				const float* line_ptr; // 10202
				float* outLine; // 10206
				vector<long unsigned int, std::allocator<long unsigned int> >::operator[](
						size_type __n);  // 10204
				{
					int u; // 10220
					{
						float val; // 10221
						cpy4(float* dst_val,
							const float* src_val);  // 10222
					}
				}
			}
			{
				const unsigned int* line_ptr; // 10229
				unsigned int* outLine; // 10233
				vector<long unsigned int, std::allocator<long unsigned int> >::operator[](
						size_type __n);  // 10231
				{
					int u; // 10242
					{
						unsigned int val; // 10249
						cpy4(unsigned int* dst_val,
							const unsigned int* src_val);  // 10250
					}
				}
			}
			{
				const short unsigned int* line_ptr; // 10144
				{
					float* outLine; // 10170
					{
						int u; // 10184
						{
							union FP16 hf; // 10185
							union FP32 f32; // 10193
							half_to_float(union FP16 h); // 10193
							cpy2(short unsigned int* dst_val,
								const short unsigned int* src_val);  // 10189
						}
					}
				}
				{
					short unsigned int* outLine; // 10150
					{
						int u; // 10159
						{
							union FP16 hf; // 10160
							cpy2(short unsigned int* dst_val,
								const short unsigned int* src_val);  // 10163
						}
					}
				}
				vector<long unsigned int, std::allocator<long unsigned int> >::operator[](
						size_type __n);  // 10147
			}
		}
	}
	{
		vector<unsigned char, std::allocator<unsigned char> > outBuf; // 9937
		long unsigned int dstLen; // 9941
		__new_allocator<unsigned char>::__new_allocator(
				const __new_allocator<unsigned char>  &);  // 173
		allocator<unsigned char>::allocator(
				const allocator<unsigned char>& __a);  // 2210
		allocator<unsigned char>::~allocator(); // 2210
		_S_check_init_len(size_type __n,
					const allocator_type& __a);  // 587
		__new_allocator<unsigned char>::__new_allocator(
				const __new_allocator<unsigned char>  &);  // 173
		allocator<unsigned char>::allocator(
				const allocator<unsigned char>& __a);  // 153
		_Vector_impl_data::_Vector_impl_data(); // 153
		_Vector_impl::_Vector_impl(
				const _Tp_alloc_type& __a);  // 340
		__new_allocator<unsigned char>::allocate(
			size_type __n,
			const void  *);  // 203
		allocator<unsigned char>::allocate(
			size_t __n);  // 614
		allocate(allocator_type& __a,
			size_type __n);  // 387
		_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_allocate(
				size_t __n);  // 405
		_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_create_storage(
					size_t __n);  // 341
		_Vector_base<unsigned char, std::allocator<unsigned char> >::_Vector_base(
				size_t __n,
				const allocator_type& __a);  // 587
		{
			value_type* __val; // 892
			{
				const size_t  __len; // 950
			}
			__fill_a1<unsigned char, unsigned char>(unsigned char* __first,
								unsigned char* __last,
								const unsigned char& __x);  // 979
			__fill_a<unsigned char*, unsigned char>(unsigned char* __first,
								unsigned char* __last,
								const unsigned char& __value);  // 1148
			__fill_n_a<unsigned char*, long unsigned int, unsigned char>(unsigned char* __first,
											long unsigned int __n,
											const unsigned char& __value,
											random_access_iterator_tag);  // 1178
			fill_n<unsigned char*, long unsigned int, unsigned char>(unsigned char* __first,
										long unsigned int __n,
										const unsigned char& __value);  // 896
			_Construct<unsigned char>(unsigned char* __p); // 894
		}
		__uninit_default_n<unsigned char*, long unsigned int>(unsigned char* __first,
									long unsigned int __n);  // 888
		__uninit_default_n<unsigned char*, long unsigned int>(unsigned char* __first,
									long unsigned int __n);  // 947
		__uninitialized_default_n<unsigned char*, long unsigned int>(unsigned char* __first,
										long unsigned int __n);  // 1002
		__uninitialized_default_n_a<unsigned char*, long unsigned int, unsigned char>(unsigned char* __first,
												long unsigned int __n,
												allocator<unsigned char> &);  // 2011
		vector<unsigned char, std::allocator<unsigned char> >::_M_default_initialize(
					size_type __n);  // 588
		vector<unsigned char, std::allocator<unsigned char> >::vector(
			size_type __n,
			const allocator_type& __a);  // 9939
		__new_allocator<unsigned char>::__new_allocator(
				const __new_allocator<unsigned char>  &);  // 173
		allocator<unsigned char>::allocator(
				const allocator<unsigned char>& __a);  // 2210
		allocator<unsigned char>::~allocator(); // 2210
		_S_check_init_len(size_type __n,
					const allocator_type& __a);  // 587
		__new_allocator<unsigned char>::__new_allocator(
				const __new_allocator<unsigned char>  &);  // 173
		allocator<unsigned char>::allocator(
				const allocator<unsigned char>& __a);  // 153
		_Vector_impl_data::_Vector_impl_data(); // 153
		_Vector_impl::_Vector_impl(
				const _Tp_alloc_type& __a);  // 340
		__new_allocator<unsigned char>::allocate(
			size_type __n,
			const void  *);  // 203
		allocator<unsigned char>::allocate(
			size_t __n);  // 614
		allocate(allocator_type& __a,
			size_type __n);  // 387
		_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_allocate(
				size_t __n);  // 405
		_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_create_storage(
					size_t __n);  // 341
		_Vector_base<unsigned char, std::allocator<unsigned char> >::_Vector_base(
				size_t __n,
				const allocator_type& __a);  // 587
		{
			value_type* __val; // 892
			{
				const size_t  __len; // 950
			}
			__fill_a1<unsigned char, unsigned char>(unsigned char* __first,
								unsigned char* __last,
								const unsigned char& __x);  // 979
			__fill_a<unsigned char*, unsigned char>(unsigned char* __first,
								unsigned char* __last,
								const unsigned char& __value);  // 1148
			__fill_n_a<unsigned char*, long unsigned int, unsigned char>(unsigned char* __first,
											long unsigned int __n,
											const unsigned char& __value,
											random_access_iterator_tag);  // 1178
			fill_n<unsigned char*, long unsigned int, unsigned char>(unsigned char* __first,
										long unsigned int __n,
										const unsigned char& __value);  // 896
			_Construct<unsigned char>(unsigned char* __p); // 894
		}
		__uninit_default_n<unsigned char*, long unsigned int>(unsigned char* __first,
									long unsigned int __n);  // 888
		__uninit_default_n<unsigned char*, long unsigned int>(unsigned char* __first,
									long unsigned int __n);  // 947
		__uninitialized_default_n<unsigned char*, long unsigned int>(unsigned char* __first,
										long unsigned int __n);  // 1002
		__uninitialized_default_n_a<unsigned char*, long unsigned int, unsigned char>(unsigned char* __first,
												long unsigned int __n,
												allocator<unsigned char> &);  // 2011
		vector<unsigned char, std::allocator<unsigned char> >::_M_default_initialize(
					size_type __n);  // 588
		vector<unsigned char, std::allocator<unsigned char> >::vector(
			size_type __n,
			const allocator_type& __a);  // 7822
		allocator<unsigned char>::~allocator(); // 7822
		vector<unsigned char, std::allocator<unsigned char> >::_M_range_check(
				size_type __n);  // 1315
		vector<unsigned char, std::allocator<unsigned char> >::at(
			size_type __n);  // 7827
		{
			int count; // 7719
			memset(void* __dest,
				int __ch,
				size_t __len);  // 7724
		}
		{
			int count; // 7709
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 7715
		}
		rleUncompress(int inLength,
				int maxLength,
				const signed char* in,
				char* out);  // 7824
		_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_get_Tp_allocator(); // 803
		_Destroy<unsigned char*, unsigned char>(unsigned char* __first,
							unsigned char* __last,
							allocator<unsigned char> &);  // 802
		__new_allocator<unsigned char>::deallocate(
				unsigned char* __p,
				size_type __n);  // 215
		allocator<unsigned char>::deallocate(
				unsigned char* __p,
				size_t __n);  // 649
		deallocate(allocator_type& __a,
				pointer __p,
				size_type __n);  // 396
		_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_deallocate(
				pointer __p,
				size_t __n);  // 375
		allocator<unsigned char>::~allocator(); // 139
		_Vector_impl::~_Vector_impl(); // 377
		_Vector_base<unsigned char, std::allocator<unsigned char> >::~_Vector_base(); // 805
		vector<unsigned char, std::allocator<unsigned char> >::~vector(); // 7871
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 7812
		{
			unsigned char* t; // 7839
			unsigned char* stop; // 7840
			{
				int d; // 7843
			}
		}
		{
			const char* t1; // 7851
			const char* t2; // 7852
			char* s; // 7854
			char* stop; // 7855
		}
		DecompressRle(unsigned char* dst,
				const long unsigned int  uncompressed_size,
				const unsigned char* src,
				long unsigned int src_size);  // 9946
		_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_get_Tp_allocator(); // 803
		_Destroy<unsigned char*, unsigned char>(unsigned char* __first,
							unsigned char* __last,
							allocator<unsigned char> &);  // 802
		__new_allocator<unsigned char>::deallocate(
				unsigned char* __p,
				size_type __n);  // 215
		allocator<unsigned char>::deallocate(
				unsigned char* __p,
				size_t __n);  // 649
		deallocate(allocator_type& __a,
				pointer __p,
				size_type __n);  // 396
		_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_deallocate(
				pointer __p,
				size_t __n);  // 375
		_Vector_base<unsigned char, std::allocator<unsigned char> >::~_Vector_base(); // 805
		vector<unsigned char, std::allocator<unsigned char> >::~vector(); // 10069
		allocator<unsigned char>::~allocator(); // 9939
		vector<unsigned char, std::allocator<unsigned char> >::size(); // 9941
		{
			size_t c; // 9962
			{
				size_t v; // 9964
				{
					const short unsigned int* line_ptr; // 9965
					{
						size_t u; // 9969
						{
							union FP16 hf; // 9970
							{
								union FP32 f32; // 9992
								float* image; // 9993
								half_to_float(union FP16 h); // 9992
							}
							{
								short unsigned int* image; // 9978
							}
							cpy2(short unsigned int* dst_val,
								const short unsigned int* src_val);  // 9973
						}
					}
					vector<long unsigned int, std::allocator<long unsigned int> >::operator[](
							size_type __n);  // 9968
					vector<unsigned char, std::allocator<unsigned char> >::_M_range_check(
							size_type __n);  // 1315
					vector<unsigned char, std::allocator<unsigned char> >::at(
						size_type __n);  // 9966
				}
			}
			{
				size_t v; // 10011
				{
					const unsigned int* line_ptr; // 10012
					vector<long unsigned int, std::allocator<long unsigned int> >::operator[](
							size_type __n);  // 10014
					vector<unsigned char, std::allocator<unsigned char> >::_M_range_check(
							size_type __n);  // 1315
					vector<unsigned char, std::allocator<unsigned char> >::at(
						size_type __n);  // 10013
					{
						size_t u; // 10015
						{
							unsigned int val; // 10016
							unsigned int* image; // 10022
							cpy4(unsigned int* dst_val,
								const unsigned int* src_val);  // 10018
						}
					}
				}
			}
			{
				size_t v; // 10039
				{
					const float* line_ptr; // 10040
					vector<long unsigned int, std::allocator<long unsigned int> >::operator[](
							size_type __n);  // 10042
					vector<unsigned char, std::allocator<unsigned char> >::_M_range_check(
							size_type __n);  // 1315
					vector<unsigned char, std::allocator<unsigned char> >::at(
						size_type __n);  // 10041
					{
						size_t u; // 10043
						{
							float val; // 10044
							float* image; // 10050
							cpy4(float* dst_val,
								const float* src_val);  // 10046
						}
					}
				}
			}
		}
		_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_get_Tp_allocator(); // 803
		_Destroy<unsigned char*, unsigned char>(unsigned char* __first,
							unsigned char* __last,
							allocator<unsigned char> &);  // 802
		__new_allocator<unsigned char>::deallocate(
				unsigned char* __p,
				size_type __n);  // 215
		allocator<unsigned char>::deallocate(
				unsigned char* __p,
				size_t __n);  // 649
		deallocate(allocator_type& __a,
				pointer __p,
				size_type __n);  // 396
		_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_deallocate(
				pointer __p,
				size_t __n);  // 375
		allocator<unsigned char>::~allocator(); // 139
		_Vector_impl::~_Vector_impl(); // 377
		_Vector_base<unsigned char, std::allocator<unsigned char> >::~_Vector_base(); // 805
		vector<unsigned char, std::allocator<unsigned char> >::~vector(); // 10069
	}
	{
		vector<unsigned char, std::allocator<unsigned char> > outBuf; // 9803
		long unsigned int dstLen; // 9807
		__new_allocator<unsigned char>::__new_allocator(
				const __new_allocator<unsigned char>  &);  // 173
		allocator<unsigned char>::allocator(
				const allocator<unsigned char>& __a);  // 2210
		allocator<unsigned char>::~allocator(); // 2210
		_S_check_init_len(size_type __n,
					const allocator_type& __a);  // 587
		__new_allocator<unsigned char>::__new_allocator(
				const __new_allocator<unsigned char>  &);  // 173
		allocator<unsigned char>::allocator(
				const allocator<unsigned char>& __a);  // 153
		_Vector_impl_data::_Vector_impl_data(); // 153
		_Vector_impl::_Vector_impl(
				const _Tp_alloc_type& __a);  // 340
		__new_allocator<unsigned char>::allocate(
			size_type __n,
			const void  *);  // 203
		allocator<unsigned char>::allocate(
			size_t __n);  // 614
		allocate(allocator_type& __a,
			size_type __n);  // 387
		_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_allocate(
				size_t __n);  // 405
		_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_create_storage(
					size_t __n);  // 341
		_Vector_base<unsigned char, std::allocator<unsigned char> >::_Vector_base(
				size_t __n,
				const allocator_type& __a);  // 587
		{
			value_type* __val; // 892
			{
				const size_t  __len; // 950
			}
			__fill_a1<unsigned char, unsigned char>(unsigned char* __first,
								unsigned char* __last,
								const unsigned char& __x);  // 979
			__fill_a<unsigned char*, unsigned char>(unsigned char* __first,
								unsigned char* __last,
								const unsigned char& __value);  // 1148
			__fill_n_a<unsigned char*, long unsigned int, unsigned char>(unsigned char* __first,
											long unsigned int __n,
											const unsigned char& __value,
											random_access_iterator_tag);  // 1178
			fill_n<unsigned char*, long unsigned int, unsigned char>(unsigned char* __first,
										long unsigned int __n,
										const unsigned char& __value);  // 896
			_Construct<unsigned char>(unsigned char* __p); // 894
		}
		__uninit_default_n<unsigned char*, long unsigned int>(unsigned char* __first,
									long unsigned int __n);  // 888
		__uninit_default_n<unsigned char*, long unsigned int>(unsigned char* __first,
									long unsigned int __n);  // 947
		__uninitialized_default_n<unsigned char*, long unsigned int>(unsigned char* __first,
										long unsigned int __n);  // 1002
		__uninitialized_default_n_a<unsigned char*, long unsigned int, unsigned char>(unsigned char* __first,
												long unsigned int __n,
												allocator<unsigned char> &);  // 2011
		vector<unsigned char, std::allocator<unsigned char> >::_M_default_initialize(
					size_type __n);  // 588
		vector<unsigned char, std::allocator<unsigned char> >::vector(
			size_type __n,
			const allocator_type& __a);  // 9805
		allocator<unsigned char>::~allocator(); // 9805
		vector<unsigned char, std::allocator<unsigned char> >::_M_range_check(
				size_type __n);  // 1315
		vector<unsigned char, std::allocator<unsigned char> >::at(
			size_type __n);  // 9810
		{
			size_t c; // 9825
			{
				size_t v; // 9827
				{
					const short unsigned int* line_ptr; // 9828
					{
						size_t u; // 9832
						{
							union FP16 hf; // 9833
							{
								union FP32 f32; // 9855
								float* image; // 9856
								size_t offset; // 9857
								half_to_float(union FP16 h); // 9855
							}
							{
								short unsigned int* image; // 9841
							}
							cpy2(short unsigned int* dst_val,
								const short unsigned int* src_val);  // 9836
						}
					}
					vector<long unsigned int, std::allocator<long unsigned int> >::operator[](
							size_type __n);  // 9831
					vector<unsigned char, std::allocator<unsigned char> >::_M_range_check(
							size_type __n);  // 1315
					vector<unsigned char, std::allocator<unsigned char> >::at(
						size_type __n);  // 9829
				}
			}
			{
				size_t v; // 9877
				{
					const unsigned int* line_ptr; // 9878
					vector<long unsigned int, std::allocator<long unsigned int> >::operator[](
							size_type __n);  // 9880
					vector<unsigned char, std::allocator<unsigned char> >::_M_range_check(
							size_type __n);  // 1315
					vector<unsigned char, std::allocator<unsigned char> >::at(
						size_type __n);  // 9879
					{
						size_t u; // 9881
						{
							unsigned int val; // 9882
							unsigned int* image; // 9888
							cpy4(unsigned int* dst_val,
								const unsigned int* src_val);  // 9884
						}
					}
				}
			}
			{
				size_t v; // 9905
				{
					const float* line_ptr; // 9906
					vector<long unsigned int, std::allocator<long unsigned int> >::operator[](
							size_type __n);  // 9908
					vector<unsigned char, std::allocator<unsigned char> >::_M_range_check(
							size_type __n);  // 1315
					vector<unsigned char, std::allocator<unsigned char> >::at(
						size_type __n);  // 9907
					{
						size_t u; // 9909
						{
							float val; // 9910
							float* image; // 9916
							cpy4(float* dst_val,
								const float* src_val);  // 9912
						}
					}
				}
			}
		}
		_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_get_Tp_allocator(); // 803
		_Destroy<unsigned char*, unsigned char>(unsigned char* __first,
							unsigned char* __last,
							allocator<unsigned char> &);  // 802
		__new_allocator<unsigned char>::deallocate(
				unsigned char* __p,
				size_type __n);  // 215
		allocator<unsigned char>::deallocate(
				unsigned char* __p,
				size_t __n);  // 649
		deallocate(allocator_type& __a,
				pointer __p,
				size_type __n);  // 396
		_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_deallocate(
				pointer __p,
				size_t __n);  // 375
		allocator<unsigned char>::~allocator(); // 139
		_Vector_impl::~_Vector_impl(); // 377
		_Vector_base<unsigned char, std::allocator<unsigned char> >::~_Vector_base(); // 805
		vector<unsigned char, std::allocator<unsigned char> >::~vector(); // 9935
		_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_get_Tp_allocator(); // 803
		_Destroy<unsigned char*, unsigned char>(unsigned char* __first,
							unsigned char* __last,
							allocator<unsigned char> &);  // 802
		__new_allocator<unsigned char>::deallocate(
				unsigned char* __p,
				size_type __n);  // 215
		allocator<unsigned char>::deallocate(
				unsigned char* __p,
				size_t __n);  // 649
		deallocate(allocator_type& __a,
				pointer __p,
				size_type __n);  // 396
		_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_deallocate(
				pointer __p,
				size_t __n);  // 375
		allocator<unsigned char>::~allocator(); // 139
		_Vector_impl::~_Vector_impl(); // 377
		_Vector_base<unsigned char, std::allocator<unsigned char> >::~_Vector_base(); // 805
		vector<unsigned char, std::allocator<unsigned char> >::~vector(); // 9935
	}
	{
		vector<unsigned char, std::allocator<unsigned char> > outBuf; // 9664
		size_t tmpBufLen; // 9666
		bool ret; // 9668
		{
			size_t c; // 9686
			{
				size_t v; // 9688
				{
					const short unsigned int* line_ptr; // 9689
					{
						size_t u; // 9692
						{
							union FP16 hf; // 9693
							{
								union FP32 f32; // 9717
								float* image; // 9718
								size_t offset; // 9719
								half_to_float(union FP16 h); // 9717
							}
							{
								short unsigned int* image; // 9703
							}
							cpy2(short unsigned int* dst_val,
								const short unsigned int* src_val);  // 9698
						}
					}
					vector<long unsigned int, std::allocator<long unsigned int> >::operator[](
							size_type __n);  // 9691
					vector<unsigned char, std::allocator<unsigned char> >::_M_range_check(
							size_type __n);  // 1315
					vector<unsigned char, std::allocator<unsigned char> >::at(
						size_type __n);  // 9690
				}
			}
			{
				size_t v; // 9738
				{
					const unsigned int* line_ptr; // 9739
					{
						size_t u; // 9742
						{
							unsigned int val; // 9743
							unsigned int* image; // 9749
							cpy4(unsigned int* dst_val,
								const unsigned int* src_val);  // 9745
						}
					}
					vector<long unsigned int, std::allocator<long unsigned int> >::operator[](
							size_type __n);  // 9741
					vector<unsigned char, std::allocator<unsigned char> >::_M_range_check(
							size_type __n);  // 1315
					vector<unsigned char, std::allocator<unsigned char> >::at(
						size_type __n);  // 9740
				}
			}
			{
				size_t v; // 9766
				{
					const float* line_ptr; // 9767
					{
						size_t u; // 9770
						{
							float val; // 9771
							float* image; // 9777
							cpy4(float* dst_val,
								const float* src_val);  // 9773
						}
					}
					vector<long unsigned int, std::allocator<long unsigned int> >::operator[](
							size_type __n);  // 9769
					vector<unsigned char, std::allocator<unsigned char> >::_M_range_check(
							size_type __n);  // 1315
					vector<unsigned char, std::allocator<unsigned char> >::at(
						size_type __n);  // 9767
				}
			}
		}
		_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_get_Tp_allocator(); // 803
		_Destroy<unsigned char*, unsigned char>(unsigned char* __first,
							unsigned char* __last,
							allocator<unsigned char> &);  // 802
		__new_allocator<unsigned char>::deallocate(
				unsigned char* __p,
				size_type __n);  // 215
		allocator<unsigned char>::deallocate(
				unsigned char* __p,
				size_t __n);  // 649
		deallocate(allocator_type& __a,
				pointer __p,
				size_type __n);  // 396
		_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_deallocate(
				pointer __p,
				size_t __n);  // 375
		allocator<unsigned char>::~allocator(); // 139
		_Vector_impl::~_Vector_impl(); // 377
		_Vector_base<unsigned char, std::allocator<unsigned char> >::~_Vector_base(); // 805
		vector<unsigned char, std::allocator<unsigned char> >::~vector(); // 9800
		__new_allocator<unsigned char>::__new_allocator(
				const __new_allocator<unsigned char>  &);  // 173
		allocator<unsigned char>::allocator(
				const allocator<unsigned char>& __a);  // 2210
		allocator<unsigned char>::~allocator(); // 2210
		_S_check_init_len(size_type __n,
					const allocator_type& __a);  // 587
		__new_allocator<unsigned char>::__new_allocator(
				const __new_allocator<unsigned char>  &);  // 173
		allocator<unsigned char>::allocator(
				const allocator<unsigned char>& __a);  // 153
		_Vector_impl_data::_Vector_impl_data(); // 153
		_Vector_impl::_Vector_impl(
				const _Tp_alloc_type& __a);  // 340
		__new_allocator<unsigned char>::allocate(
			size_type __n,
			const void  *);  // 203
		allocator<unsigned char>::allocate(
			size_t __n);  // 614
		allocate(allocator_type& __a,
			size_type __n);  // 387
		_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_allocate(
				size_t __n);  // 405
		_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_create_storage(
					size_t __n);  // 341
		_Vector_base<unsigned char, std::allocator<unsigned char> >::_Vector_base(
				size_t __n,
				const allocator_type& __a);  // 587
		{
			value_type* __val; // 892
			{
				const size_t  __len; // 950
			}
			__fill_a1<unsigned char, unsigned char>(unsigned char* __first,
								unsigned char* __last,
								const unsigned char& __x);  // 979
			__fill_a<unsigned char*, unsigned char>(unsigned char* __first,
								unsigned char* __last,
								const unsigned char& __value);  // 1148
			__fill_n_a<unsigned char*, long unsigned int, unsigned char>(unsigned char* __first,
											long unsigned int __n,
											const unsigned char& __value,
											random_access_iterator_tag);  // 1178
			fill_n<unsigned char*, long unsigned int, unsigned char>(unsigned char* __first,
										long unsigned int __n,
										const unsigned char& __value);  // 896
			_Construct<unsigned char>(unsigned char* __p); // 894
		}
		__uninit_default_n<unsigned char*, long unsigned int>(unsigned char* __first,
									long unsigned int __n);  // 888
		__uninit_default_n<unsigned char*, long unsigned int>(unsigned char* __first,
									long unsigned int __n);  // 947
		__uninitialized_default_n<unsigned char*, long unsigned int>(unsigned char* __first,
										long unsigned int __n);  // 1002
		__uninitialized_default_n_a<unsigned char*, long unsigned int, unsigned char>(unsigned char* __first,
												long unsigned int __n,
												allocator<unsigned char> &);  // 2011
		vector<unsigned char, std::allocator<unsigned char> >::_M_default_initialize(
					size_type __n);  // 588
		vector<unsigned char, std::allocator<unsigned char> >::vector(
			size_type __n,
			const allocator_type& __a);  // 9665
		allocator<unsigned char>::~allocator(); // 9665
		vector<unsigned char, std::allocator<unsigned char> >::_M_range_check(
				size_type __n);  // 1315
		vector<unsigned char, std::allocator<unsigned char> >::at(
			size_type __n);  // 9669
		__new_allocator<unsigned char>::__new_allocator(
				const __new_allocator<unsigned char>  &);  // 173
		allocator<unsigned char>::allocator(
				const allocator<unsigned char>& __a);  // 2210
		allocator<unsigned char>::~allocator(); // 2210
		_S_check_init_len(size_type __n,
					const allocator_type& __a);  // 587
		__new_allocator<unsigned char>::__new_allocator(
				const __new_allocator<unsigned char>  &);  // 173
		allocator<unsigned char>::allocator(
				const allocator<unsigned char>& __a);  // 153
		_Vector_impl_data::_Vector_impl_data(); // 153
		_Vector_impl::_Vector_impl(
				const _Tp_alloc_type& __a);  // 340
		__new_allocator<unsigned char>::allocate(
			size_type __n,
			const void  *);  // 203
		allocator<unsigned char>::allocate(
			size_t __n);  // 614
		allocate(allocator_type& __a,
			size_type __n);  // 387
		_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_allocate(
				size_t __n);  // 405
		_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_create_storage(
					size_t __n);  // 341
		_Vector_base<unsigned char, std::allocator<unsigned char> >::_Vector_base(
				size_t __n,
				const allocator_type& __a);  // 587
		vector<unsigned char, std::allocator<unsigned char> >::_M_default_initialize(
					size_type __n);  // 588
		vector<unsigned char, std::allocator<unsigned char> >::vector(
			size_type __n,
			const allocator_type& __a);  // 9331
		memset(void* __dest,
			int __ch,
			size_t __len);  // 9341
		allocator<unsigned char>::~allocator(); // 9331
		cpy2(short unsigned int* dst_val,
			const short unsigned int* src_val);  // 9345
		cpy2(short unsigned int* dst_val,
			const short unsigned int* src_val);  // 9347
		__new_allocator<short unsigned int>::__new_allocator(
				const __new_allocator<short unsigned int>  &);  // 173
		allocator<short unsigned int>::allocator(
				const allocator<short unsigned int>& __a);  // 2210
		allocator<short unsigned int>::~allocator(); // 2210
		_S_check_init_len(size_type __n,
					const allocator_type& __a);  // 587
		__new_allocator<short unsigned int>::__new_allocator(
				const __new_allocator<short unsigned int>  &);  // 173
		allocator<short unsigned int>::allocator(
				const allocator<short unsigned int>& __a);  // 153
		_Vector_impl_data::_Vector_impl_data(); // 153
		_Vector_impl::_Vector_impl(
				const _Tp_alloc_type& __a);  // 340
		__new_allocator<short unsigned int>::allocate(
			size_type __n,
			const void  *);  // 203
		allocator<short unsigned int>::allocate(
			size_t __n);  // 614
		allocate(allocator_type& __a,
			size_type __n);  // 387
		_Vector_base<short unsigned int, std::allocator<short unsigned int> >::_M_allocate(
				size_t __n);  // 405
		_Vector_base<short unsigned int, std::allocator<short unsigned int> >::_M_create_storage(
					size_t __n);  // 341
		_Vector_base<short unsigned int, std::allocator<short unsigned int> >::_Vector_base(
				size_t __n,
				const allocator_type& __a);  // 587
		vector<short unsigned int, std::allocator<short unsigned int> >::_M_default_initialize(
					size_type __n);  // 588
		vector<short unsigned int, std::allocator<short unsigned int> >::vector(
			size_type __n,
			const allocator_type& __a);  // 9360
		memset(void* __dest,
			int __ch,
			size_t __len);  // 9361
		allocator<short unsigned int>::~allocator(); // 9360
		{
			int i; // 9177
		}
		reverseLutFromBitmap(const unsigned char* bitmap,
					short unsigned int* lut);  // 9362
		cpy4(int* dst_val,
			const int* src_val);  // 9371
		__new_allocator<short unsigned int>::deallocate(
				short unsigned int* __p,
				size_type __n);  // 215
		allocator<short unsigned int>::deallocate(
				short unsigned int* __p,
				size_t __n);  // 649
		deallocate(allocator_type& __a,
				pointer __p,
				size_type __n);  // 396
		_Vector_base<short unsigned int, std::allocator<short unsigned int> >::_M_deallocate(
				pointer __p,
				size_t __n);  // 392
		_Vector_base<short unsigned int, std::allocator<short unsigned int> >::_M_deallocate(
				pointer __p,
				size_t __n);  // 375
		allocator<short unsigned int>::~allocator(); // 139
		_Vector_impl::~_Vector_impl(); // 377
		_Vector_base<short unsigned int, std::allocator<short unsigned int> >::~_Vector_base(); // 805
		_Vector_base<short unsigned int, std::allocator<short unsigned int> >::_M_get_Tp_allocator(); // 803
		_Destroy<short unsigned int*, short unsigned int>(short unsigned int* __first,
									short unsigned int* __last,
									allocator<short unsigned int> &);  // 802
		vector<short unsigned int, std::allocator<short unsigned int> >::~vector(); // 9437
		_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_get_Tp_allocator(); // 803
		_Destroy<unsigned char*, unsigned char>(unsigned char* __first,
							unsigned char* __last,
							allocator<unsigned char> &);  // 802
		__new_allocator<unsigned char>::deallocate(
				unsigned char* __p,
				size_type __n);  // 215
		allocator<unsigned char>::deallocate(
				unsigned char* __p,
				size_t __n);  // 649
		deallocate(allocator_type& __a,
				pointer __p,
				size_type __n);  // 396
		_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_deallocate(
				pointer __p,
				size_t __n);  // 375
		allocator<unsigned char>::~allocator(); // 139
		_Vector_impl::~_Vector_impl(); // 377
		_Vector_base<unsigned char, std::allocator<unsigned char> >::~_Vector_base(); // 805
		vector<unsigned char, std::allocator<unsigned char> >::~vector(); // 9437
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 9327
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 9355
		__new_allocator<short unsigned int>::__new_allocator(
				const __new_allocator<short unsigned int>  &);  // 173
		allocator<short unsigned int>::allocator(
				const allocator<short unsigned int>& __a);  // 2210
		allocator<short unsigned int>::~allocator(); // 2210
		_S_check_init_len(size_type __n,
					const allocator_type& __a);  // 587
		__new_allocator<short unsigned int>::__new_allocator(
				const __new_allocator<short unsigned int>  &);  // 173
		allocator<short unsigned int>::allocator(
				const allocator<short unsigned int>& __a);  // 153
		_Vector_impl_data::_Vector_impl_data(); // 153
		_Vector_impl::_Vector_impl(
				const _Tp_alloc_type& __a);  // 340
		__new_allocator<short unsigned int>::allocate(
			size_type __n,
			const void  *);  // 203
		allocator<short unsigned int>::allocate(
			size_t __n);  // 614
		allocate(allocator_type& __a,
			size_type __n);  // 387
		_Vector_base<short unsigned int, std::allocator<short unsigned int> >::_M_allocate(
				size_t __n);  // 405
		_Vector_base<short unsigned int, std::allocator<short unsigned int> >::_M_create_storage(
					size_t __n);  // 341
		_Vector_base<short unsigned int, std::allocator<short unsigned int> >::_Vector_base(
				size_t __n,
				const allocator_type& __a);  // 587
		{
			value_type* __val; // 892
			_Construct<short unsigned int>(short unsigned int* __p); // 894
			__fill_a1<short unsigned int*, short unsigned int>(short unsigned int* __first,
										short unsigned int* __last,
										const short unsigned int& __value);  // 979
			__fill_a<short unsigned int*, short unsigned int>(short unsigned int* __first,
										short unsigned int* __last,
										const short unsigned int& __value);  // 1148
			__fill_n_a<short unsigned int*, long unsigned int, short unsigned int>(short unsigned int* __first,
												long unsigned int __n,
												const short unsigned int& __value,
												random_access_iterator_tag);  // 1178
			fill_n<short unsigned int*, long unsigned int, short unsigned int>(short unsigned int* __first,
												long unsigned int __n,
												const short unsigned int& __value);  // 896
		}
		__uninit_default_n<short unsigned int*, long unsigned int>(short unsigned int* __first,
										long unsigned int __n);  // 888
		__uninit_default_n<short unsigned int*, long unsigned int>(short unsigned int* __first,
										long unsigned int __n);  // 947
		__uninitialized_default_n<short unsigned int*, long unsigned int>(short unsigned int* __first,
											long unsigned int __n);  // 1002
		__uninitialized_default_n_a<short unsigned int*, long unsigned int, short unsigned int>(short unsigned int* __first,
													long unsigned int __n,
													allocator<short unsigned int> &);  // 2011
		vector<short unsigned int, std::allocator<short unsigned int> >::_M_default_initialize(
					size_type __n);  // 588
		vector<short unsigned int, std::allocator<short unsigned int> >::vector(
			size_type __n,
			const allocator_type& __a);  // 9378
		allocator<short unsigned int>::~allocator(); // 9378
		readUInt(const char* buf); // 9079
		{
			vector<long long int, std::allocator<long long int> > freq; // 9101
			vector<tinyexr::HufDec, std::allocator<tinyexr::HufDec> > hdec; // 9102
			__new_allocator<long long int>::allocate(
				size_type __n,
				const void  *);  // 203
			allocator<long long int>::allocate(
				size_t __n);  // 614
			allocate(allocator_type& __a,
				size_type __n);  // 387
			_Vector_base<long long int, std::allocator<long long int> >::_M_allocate(
					size_t __n);  // 405
			_Vector_base<long long int, std::allocator<long long int> >::_M_create_storage(
						size_t __n);  // 341
			__new_allocator<long long int>::__new_allocator(
					const __new_allocator<long long int>  &);  // 173
			allocator<long long int>::allocator(
					const allocator<long long int>& __a);  // 153
			_Vector_impl_data::_Vector_impl_data(); // 153
			_Vector_impl::_Vector_impl(
					const _Tp_alloc_type& __a);  // 340
			_Vector_base<long long int, std::allocator<long long int> >::_Vector_base(
					size_t __n,
					const allocator_type& __a);  // 587
			__new_allocator<long long int>::__new_allocator(
					const __new_allocator<long long int>  &);  // 173
			allocator<long long int>::allocator(
					const allocator<long long int>& __a);  // 2210
			allocator<long long int>::~allocator(); // 2210
			_S_check_init_len(size_type __n,
						const allocator_type& __a);  // 587
			{
				value_type* __val; // 892
				__fill_a1<long long int*, long long int>(long long int* __first,
									long long int* __last,
									const long long int& __value);  // 979
				__fill_a<long long int*, long long int>(long long int* __first,
									long long int* __last,
									const long long int& __value);  // 1148
				__fill_n_a<long long int*, long unsigned int, long long int>(long long int* __first,
												long unsigned int __n,
												const long long int& __value,
												random_access_iterator_tag);  // 1178
				fill_n<long long int*, long unsigned int, long long int>(long long int* __first,
											long unsigned int __n,
											const long long int& __value);  // 896
				_Construct<long long int>(long long int* __p); // 894
			}
			__uninit_default_n<long long int*, long unsigned int>(long long int* __first,
										long unsigned int __n);  // 888
			__uninit_default_n<long long int*, long unsigned int>(long long int* __first,
										long unsigned int __n);  // 947
			__uninitialized_default_n<long long int*, long unsigned int>(long long int* __first,
											long unsigned int __n);  // 1002
			__uninitialized_default_n_a<long long int*, long unsigned int, long long int>(long long int* __first,
													long unsigned int __n,
													allocator<long long int> &);  // 2011
			vector<long long int, std::allocator<long long int> >::_M_default_initialize(
						size_type __n);  // 588
			vector<long long int, std::allocator<long long int> >::vector(
				size_type __n,
				const allocator_type& __a);  // 9101
			allocator<long long int>::~allocator(); // 9101
			__new_allocator<tinyexr::HufDec>::__new_allocator(
					const __new_allocator<tinyexr::HufDec>  &);  // 173
			allocator<tinyexr::HufDec>::allocator(
					const allocator<tinyexr::HufDec>& __a);  // 2210
			allocator<tinyexr::HufDec>::~allocator(); // 2210
			_S_check_init_len(size_type __n,
						const allocator_type& __a);  // 587
			__new_allocator<tinyexr::HufDec>::__new_allocator(
					const __new_allocator<tinyexr::HufDec>  &);  // 173
			allocator<tinyexr::HufDec>::allocator(
					const allocator<tinyexr::HufDec>& __a);  // 153
			_Vector_impl_data::_Vector_impl_data(); // 153
			_Vector_impl::_Vector_impl(
					const _Tp_alloc_type& __a);  // 340
			__new_allocator<tinyexr::HufDec>::allocate(
				size_type __n,
				const void  *);  // 203
			allocator<tinyexr::HufDec>::allocate(
				size_t __n);  // 614
			allocate(allocator_type& __a,
				size_type __n);  // 387
			_Vector_base<tinyexr::HufDec, std::allocator<tinyexr::HufDec> >::_M_allocate(
					size_t __n);  // 405
			_Vector_base<tinyexr::HufDec, std::allocator<tinyexr::HufDec> >::_M_create_storage(
						size_t __n);  // 341
			_Vector_base<tinyexr::HufDec, std::allocator<tinyexr::HufDec> >::_Vector_base(
					size_t __n,
					const allocator_type& __a);  // 587
			{
				value_type* __val; // 892
				_Construct<tinyexr::HufDec>(HufDec* __p); // 894
				__fill_a1<tinyexr::HufDec*, tinyexr::HufDec>(HufDec* __first,
										HufDec* __last,
										const HufDec& __value);  // 979
				__fill_a<tinyexr::HufDec*, tinyexr::HufDec>(HufDec* __first,
										HufDec* __last,
										const HufDec& __value);  // 1148
				__fill_n_a<tinyexr::HufDec*, long unsigned int, tinyexr::HufDec>(HufDec* __first,
												long unsigned int __n,
												const HufDec& __value,
												random_access_iterator_tag);  // 1178
				fill_n<tinyexr::HufDec*, long unsigned int, tinyexr::HufDec>(HufDec* __first,
												long unsigned int __n,
												const HufDec& __value);  // 896
			}
			__uninit_default_n<tinyexr::HufDec*, long unsigned int>(HufDec* __first,
										long unsigned int __n);  // 888
			__uninit_default_n<tinyexr::HufDec*, long unsigned int>(HufDec* __first,
										long unsigned int __n);  // 947
			__uninitialized_default_n<tinyexr::HufDec*, long unsigned int>(HufDec* __first,
											long unsigned int __n);  // 1002
			__uninitialized_default_n_a<tinyexr::HufDec*, long unsigned int, tinyexr::HufDec>(HufDec* __first,
														long unsigned int __n,
														allocator<tinyexr::HufDec> &);  // 2011
			vector<tinyexr::HufDec, std::allocator<tinyexr::HufDec> >::_M_default_initialize(
						size_type __n);  // 588
			vector<tinyexr::HufDec, std::allocator<tinyexr::HufDec> >::vector(
				size_type __n,
				const allocator_type& __a);  // 9102
			{
				int i; // 8633
			}
			hufClearDecTable(HufDec* hdecod); // 9104
			memset(void* __dest,
				int __ch,
				size_t __len);  // 8575
			{
				long long int l; // 8586
				{
					int zerun; // 8603
				}
				{
					int zerun; // 8593
					getBits(int nBits,
						long long int& c,
						int& lc,
						const char  *& in);  // 8593
				}
				getBits(int nBits,
					long long int& c,
					int& lc,
					const char  *& in);  // 8586
			}
			hufUnpackEncTable(const char ** pcode,
						int ni,
						int im,
						int iM,
						long long int* hcode);  // 9106
			{
				long long int c; // 8661
				int l; // 8662
				{
					HufDec* pl; // 8680
					{
						int* p; // 8695
						{
							int i; // 8698
						}
					}
				}
				{
					HufDec* pl; // 8711
					{
						long long int i; // 8713
					}
				}
				hufCode(long long int code); // 8661
				hufLength(long long int code); // 8662
			}
			hufBuildDecTable(const long long int* hcode,
					int im,
					int iM,
					HufDec* hdecod);  // 9114
			vector<short unsigned int, std::allocator<short unsigned int> >::size(); // 9115
			{
				const HufDec  pl; // 8924
				{
					int j; // 8952
					{
						int l; // 8955
						hufLength(long long int code); // 8955
						hufCode(long long int code); // 8961
					}
				}
			}
			{
				const HufDec  pl; // 8993
			}
			hufDecode(const long long int* hcode,
					const HufDec* hdecod,
					const char* in,
					int ni,
					int rlc,
					int no,
					short unsigned int* out);  // 9115
			vector<tinyexr::HufDec, std::allocator<tinyexr::HufDec> >::_M_range_check(
					size_type __n);  // 1315
			vector<tinyexr::HufDec, std::allocator<tinyexr::HufDec> >::at(
				size_type __n);  // 9124
			{
				int i; // 8739
			}
			hufFreeDecTable(HufDec* hdecod); // 9124
			_Vector_base<tinyexr::HufDec, std::allocator<tinyexr::HufDec> >::_M_get_Tp_allocator(); // 803
			_Destroy<tinyexr::HufDec*, tinyexr::HufDec>(HufDec* __first,
									HufDec* __last,
									allocator<tinyexr::HufDec> &);  // 802
			__new_allocator<tinyexr::HufDec>::deallocate(
					HufDec* __p,
					size_type __n);  // 215
			allocator<tinyexr::HufDec>::deallocate(
					HufDec* __p,
					size_t __n);  // 649
			deallocate(allocator_type& __a,
					pointer __p,
					size_type __n);  // 396
			_Vector_base<tinyexr::HufDec, std::allocator<tinyexr::HufDec> >::_M_deallocate(
					pointer __p,
					size_t __n);  // 392
			_Vector_base<tinyexr::HufDec, std::allocator<tinyexr::HufDec> >::_M_deallocate(
					pointer __p,
					size_t __n);  // 375
			allocator<tinyexr::HufDec>::~allocator(); // 139
			_Vector_impl::~_Vector_impl(); // 377
			_Vector_base<tinyexr::HufDec, std::allocator<tinyexr::HufDec> >::~_Vector_base(); // 805
			vector<tinyexr::HufDec, std::allocator<tinyexr::HufDec> >::~vector(); // 9125
			_Vector_base<long long int, std::allocator<long long int> >::_M_get_Tp_allocator(); // 803
			_Destroy<long long int*, long long int>(long long int* __first,
								long long int* __last,
								allocator<long long int> &);  // 802
			__new_allocator<long unsigned int>::deallocate(
					long unsigned int* __p,
					size_type __n);  // 215
			allocator<long unsigned int>::deallocate(
					long unsigned int* __p,
					size_t __n);  // 649
			deallocate(allocator_type& __a,
					pointer __p,
					size_type __n);  // 396
			_Vector_base<long unsigned int, std::allocator<long unsigned int> >::_M_deallocate(
					pointer __p,
					size_t __n);  // 392
			_Vector_base<long long int, std::allocator<long long int> >::_M_deallocate(
					pointer __p,
					size_t __n);  // 375
			allocator<long long int>::~allocator(); // 139
			_Vector_impl::~_Vector_impl(); // 377
			_Vector_base<long long int, std::allocator<long long int> >::~_Vector_base(); // 805
			vector<long long int, std::allocator<long long int> >::~vector(); // 9125
		}
		vector<short unsigned int, std::allocator<short unsigned int> >::size(); // 9074
		hufUncompress(const char* compressed,
				int nCompressed,
				vector<short unsigned int, std::allocator<short unsigned int> >* raw);  // 9379
		__new_allocator<tinyexr::PIZChannelData>::__new_allocator(
				const __new_allocator<tinyexr::PIZChannelData>  &);  // 173
		allocator<tinyexr::PIZChannelData>::allocator(
				const allocator<tinyexr::PIZChannelData>& __a);  // 2210
		allocator<tinyexr::PIZChannelData>::~allocator(); // 2210
		_S_check_init_len(size_type __n,
					const allocator_type& __a);  // 587
		__new_allocator<tinyexr::PIZChannelData>::__new_allocator(
				const __new_allocator<tinyexr::PIZChannelData>  &);  // 173
		allocator<tinyexr::PIZChannelData>::allocator(
				const allocator<tinyexr::PIZChannelData>& __a);  // 153
		_Vector_impl_data::_Vector_impl_data(); // 153
		_Vector_impl::_Vector_impl(
				const _Tp_alloc_type& __a);  // 340
		__new_allocator<tinyexr::PIZChannelData>::allocate(
			size_type __n,
			const void  *);  // 203
		allocator<tinyexr::PIZChannelData>::allocate(
			size_t __n);  // 614
		allocate(allocator_type& __a,
			size_type __n);  // 387
		_Vector_base<tinyexr::PIZChannelData, std::allocator<tinyexr::PIZChannelData> >::_M_allocate(
				size_t __n);  // 405
		_Vector_base<tinyexr::PIZChannelData, std::allocator<tinyexr::PIZChannelData> >::_M_create_storage(
					size_t __n);  // 341
		_Vector_base<tinyexr::PIZChannelData, std::allocator<tinyexr::PIZChannelData> >::_Vector_base(
				size_t __n,
				const allocator_type& __a);  // 587
		{
			value_type* __val; // 892
			__fill_a1<tinyexr::PIZChannelData*, tinyexr::PIZChannelData>(PIZChannelData* __first,
											PIZChannelData* __last,
											const PIZChannelData& __value);  // 979
			__fill_a<tinyexr::PIZChannelData*, tinyexr::PIZChannelData>(PIZChannelData* __first,
											PIZChannelData* __last,
											const PIZChannelData& __value);  // 1148
			__fill_n_a<tinyexr::PIZChannelData*, long unsigned int, tinyexr::PIZChannelData>(PIZChannelData* __first,
													long unsigned int __n,
													const PIZChannelData& __value,
													random_access_iterator_tag);  // 1178
			fill_n<tinyexr::PIZChannelData*, long unsigned int, tinyexr::PIZChannelData>(PIZChannelData* __first,
													long unsigned int __n,
													const PIZChannelData& __value);  // 896
			_Construct<tinyexr::PIZChannelData>(PIZChannelData* __p); // 894
		}
		__uninit_default_n<tinyexr::PIZChannelData*, long unsigned int>(PIZChannelData* __first,
										long unsigned int __n);  // 888
		__uninit_default_n<tinyexr::PIZChannelData*, long unsigned int>(PIZChannelData* __first,
										long unsigned int __n);  // 947
		__uninitialized_default_n<tinyexr::PIZChannelData*, long unsigned int>(PIZChannelData* __first,
											long unsigned int __n);  // 1002
		__uninitialized_default_n_a<tinyexr::PIZChannelData*, long unsigned int, tinyexr::PIZChannelData>(PIZChannelData* __first,
															long unsigned int __n,
															allocator<tinyexr::PIZChannelData> &);  // 2011
		vector<tinyexr::PIZChannelData, std::allocator<tinyexr::PIZChannelData> >::_M_default_initialize(
					size_type __n);  // 588
		vector<tinyexr::PIZChannelData, std::allocator<tinyexr::PIZChannelData> >::vector(
			size_type __n,
			const allocator_type& __a);  // 9385
		allocator<tinyexr::PIZChannelData>::~allocator(); // 9385
		vector<short unsigned int, std::allocator<short unsigned int> >::_M_range_check(
				size_type __n);  // 1315
		vector<short unsigned int, std::allocator<short unsigned int> >::at(
			size_type __n);  // 9387
		{
			size_t i; // 9389
			{
				const EXRChannelInfo& chan; // 9390
				size_t pixelSize; // 9392
			}
		}
		{
			size_t i; // 9407
			vector<tinyexr::PIZChannelData, std::allocator<tinyexr::PIZChannelData> >::size(); // 9407
			{
				PIZChannelData& cd; // 9408
				{
					int j; // 9410
					{
						short unsigned int* py; // 8129
						short unsigned int* ey; // 8130
						int oy1; // 8131
						int oy2; // 8132
						int ox1; // 8133
						int ox2; // 8134
						short unsigned int i00; // 8135
						short unsigned int i01; // 8135
						short unsigned int i10; // 8135
						short unsigned int i11; // 8135
						{
							short unsigned int* px; // 8142
							short unsigned int* ex; // 8143
							{
								short unsigned int* p01; // 8150
								short unsigned int* p10; // 8151
								short unsigned int* p11; // 8152
								wdec14(short unsigned int l,
									short unsigned int h,
									short unsigned int& a,
									short unsigned int& b);  // 8159
								wdec14(short unsigned int l,
									short unsigned int h,
									short unsigned int& a,
									short unsigned int& b);  // 8160
								wdec14(short unsigned int l,
									short unsigned int h,
									short unsigned int& a,
									short unsigned int& b);  // 8161
								wdec14(short unsigned int l,
									short unsigned int h,
									short unsigned int& a,
									short unsigned int& b);  // 8162
								wdec16(short unsigned int l,
									short unsigned int h,
									short unsigned int& a,
									short unsigned int& b);  // 8164
								wdec16(short unsigned int l,
									short unsigned int h,
									short unsigned int& a,
									short unsigned int& b);  // 8165
								wdec16(short unsigned int l,
									short unsigned int h,
									short unsigned int& a,
									short unsigned int& b);  // 8166
								wdec16(short unsigned int l,
									short unsigned int h,
									short unsigned int& a,
									short unsigned int& b);  // 8167
							}
							{
								short unsigned int* p10; // 8176
								wdec14(short unsigned int l,
									short unsigned int h,
									short unsigned int& a,
									short unsigned int& b);  // 8179
								wdec16(short unsigned int l,
									short unsigned int h,
									short unsigned int& a,
									short unsigned int& b);  // 8181
							}
						}
						{
							short unsigned int* px; // 8192
							short unsigned int* ex; // 8193
							{
								short unsigned int* p01; // 8196
								wdec14(short unsigned int l,
									short unsigned int h,
									short unsigned int& a,
									short unsigned int& b);  // 8199
								wdec16(short unsigned int l,
									short unsigned int h,
									short unsigned int& a,
									short unsigned int& b);  // 8201
							}
						}
					}
					wav2Decode(short unsigned int* in,
							int nx,
							int ox,
							int ny,
							int oy,
							short unsigned int mx);  // 9411
				}
			}
		}
		vector<short unsigned int, std::allocator<short unsigned int> >::_M_range_check(
				size_type __n);  // 1315
		vector<short unsigned int, std::allocator<short unsigned int> >::at(
			size_type __n);  // 9420
		{
			int i; // 9190
		}
		applyLut(const short unsigned int* lut,
			short unsigned int* data,
			int nData);  // 9420
		{
			int y; // 9422
			{
				size_t i; // 9423
				{
					PIZChannelData& cd; // 9424
					size_t n; // 9429
					memcpy(void* __dest,
						const void* __src,
						size_t __len);  // 9430
				}
			}
		}
		_Vector_base<tinyexr::PIZChannelData, std::allocator<tinyexr::PIZChannelData> >::_M_get_Tp_allocator(); // 803
		_Destroy<tinyexr::PIZChannelData*, tinyexr::PIZChannelData>(PIZChannelData* __first,
										PIZChannelData* __last,
										allocator<tinyexr::PIZChannelData> &);  // 802
		__new_allocator<tinyexr::PIZChannelData>::deallocate(
				PIZChannelData* __p,
				size_type __n);  // 215
		allocator<tinyexr::PIZChannelData>::deallocate(
				PIZChannelData* __p,
				size_t __n);  // 649
		deallocate(allocator_type& __a,
				pointer __p,
				size_type __n);  // 396
		_Vector_base<tinyexr::PIZChannelData, std::allocator<tinyexr::PIZChannelData> >::_M_deallocate(
				pointer __p,
				size_t __n);  // 392
		_Vector_base<tinyexr::PIZChannelData, std::allocator<tinyexr::PIZChannelData> >::_M_deallocate(
				pointer __p,
				size_t __n);  // 375
		allocator<tinyexr::PIZChannelData>::~allocator(); // 139
		_Vector_impl::~_Vector_impl(); // 377
		_Vector_base<tinyexr::PIZChannelData, std::allocator<tinyexr::PIZChannelData> >::~_Vector_base(); // 805
		vector<tinyexr::PIZChannelData, std::allocator<tinyexr::PIZChannelData> >::~vector(); // 9437
		_Vector_base<short unsigned int, std::allocator<short unsigned int> >::_M_get_Tp_allocator(); // 803
		_Destroy<short unsigned int*, short unsigned int>(short unsigned int* __first,
									short unsigned int* __last,
									allocator<short unsigned int> &);  // 802
		__new_allocator<short unsigned int>::deallocate(
				short unsigned int* __p,
				size_type __n);  // 215
		allocator<short unsigned int>::deallocate(
				short unsigned int* __p,
				size_t __n);  // 649
		deallocate(allocator_type& __a,
				pointer __p,
				size_type __n);  // 396
		_Vector_base<short unsigned int, std::allocator<short unsigned int> >::_M_deallocate(
				pointer __p,
				size_t __n);  // 392
		_Vector_base<short unsigned int, std::allocator<short unsigned int> >::_M_deallocate(
				pointer __p,
				size_t __n);  // 375
		allocator<short unsigned int>::~allocator(); // 139
		_Vector_impl::~_Vector_impl(); // 377
		_Vector_base<short unsigned int, std::allocator<short unsigned int> >::~_Vector_base(); // 805
		vector<short unsigned int, std::allocator<short unsigned int> >::~vector(); // 9437
		DecompressPiz(unsigned char* outPtr,
				const unsigned char* inPtr,
				size_t tmpBufSize,
				size_t inLen,
				int num_channels,
				const EXRChannelInfo* channels,
				int data_width,
				int num_lines);  // 9668
		_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_get_Tp_allocator(); // 803
		_Destroy<unsigned char*, unsigned char>(unsigned char* __first,
							unsigned char* __last,
							allocator<unsigned char> &);  // 802
		__new_allocator<unsigned char>::deallocate(
				unsigned char* __p,
				size_type __n);  // 215
		allocator<unsigned char>::deallocate(
				unsigned char* __p,
				size_t __n);  // 649
		deallocate(allocator_type& __a,
				pointer __p,
				size_type __n);  // 396
		_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_deallocate(
				pointer __p,
				size_t __n);  // 375
		allocator<unsigned char>::~allocator(); // 139
		_Vector_impl::~_Vector_impl(); // 377
		_Vector_base<unsigned char, std::allocator<unsigned char> >::~_Vector_base(); // 805
		vector<unsigned char, std::allocator<unsigned char> >::~vector(); // 9800
	}
} /* size: 0 */

// <047FC3A9> ../thirdparty/tinyexr/tinyexr.h:9646
// variables: 81
void DecodePixelData(unsigned char** out_images, const int* requested_pixel_types, const unsigned char* data_ptr, size_t data_len, int compression_type, int line_order, int width, int height, int x_stride, int y, int line_no, int num_lines, size_t pixel_data_size, size_t num_attributes, const EXRAttribute* attributes, size_t num_channels, const EXRChannelInfo* channels, const vector<long unsigned int, std::allocator<long unsigned int> >& channel_offset_list)
{
	{
		vector<unsigned char, std::allocator<unsigned char> > outBuf; // 9664
		size_t tmpBufLen; // 9666
		bool ret; // 9668
		{
			size_t c; // 9686
			{
				size_t v; // 9688
				{
					const short unsigned int* line_ptr; // 9689
					{
						size_t u; // 9692
						{
							union FP16 hf; // 9693
							{
								short unsigned int* image; // 9703
							}
							{
								union FP32 f32; // 9717
								float* image; // 9718
								size_t offset; // 9719
							}
						}
					}
				}
			}
			{
				size_t v; // 9738
				{
					const unsigned int* line_ptr; // 9739
					{
						size_t u; // 9742
						{
							unsigned int val; // 9743
							unsigned int* image; // 9749
						}
					}
				}
			}
			{
				size_t v; // 9766
				{
					const float* line_ptr; // 9767
					{
						size_t u; // 9770
						{
							float val; // 9771
							float* image; // 9777
						}
					}
				}
			}
		}
	}
	{
		vector<unsigned char, std::allocator<unsigned char> > outBuf; // 9803
		long unsigned int dstLen; // 9807
		{
			size_t c; // 9825
			{
				size_t v; // 9827
				{
					const short unsigned int* line_ptr; // 9828
					{
						size_t u; // 9832
						{
							union FP16 hf; // 9833
							{
								short unsigned int* image; // 9841
							}
							{
								union FP32 f32; // 9855
								float* image; // 9856
								size_t offset; // 9857
							}
						}
					}
				}
			}
			{
				size_t v; // 9877
				{
					const unsigned int* line_ptr; // 9878
					{
						size_t u; // 9881
						{
							unsigned int val; // 9882
							unsigned int* image; // 9888
						}
					}
				}
			}
			{
				size_t v; // 9905
				{
					const float* line_ptr; // 9906
					{
						size_t u; // 9909
						{
							float val; // 9910
							float* image; // 9916
						}
					}
				}
			}
		}
	}
	{
		vector<unsigned char, std::allocator<unsigned char> > outBuf; // 9937
		long unsigned int dstLen; // 9941
		{
			size_t c; // 9962
			{
				size_t v; // 9964
				{
					const short unsigned int* line_ptr; // 9965
					{
						size_t u; // 9969
						{
							union FP16 hf; // 9970
							{
								short unsigned int* image; // 9978
							}
							{
								union FP32 f32; // 9992
								float* image; // 9993
							}
						}
					}
				}
			}
			{
				size_t v; // 10011
				{
					const unsigned int* line_ptr; // 10012
					{
						size_t u; // 10015
						{
							unsigned int val; // 10016
							unsigned int* image; // 10022
						}
					}
				}
			}
			{
				size_t v; // 10039
				{
					const float* line_ptr; // 10040
					{
						size_t u; // 10043
						{
							float val; // 10044
							float* image; // 10050
						}
					}
				}
			}
		}
	}
	{
		size_t c; // 10141
		{
			size_t v; // 10142
			{
				const short unsigned int* line_ptr; // 10144
				{
					short unsigned int* outLine; // 10150
					{
						int u; // 10159
						{
							union FP16 hf; // 10160
						}
					}
				}
				{
					float* outLine; // 10170
					{
						int u; // 10184
						{
							union FP16 hf; // 10185
							union FP32 f32; // 10193
						}
					}
				}
			}
			{
				const float* line_ptr; // 10202
				float* outLine; // 10206
				{
					int u; // 10220
					{
						float val; // 10221
					}
				}
			}
			{
				const unsigned int* line_ptr; // 10229
				unsigned int* outLine; // 10233
				{
					int u; // 10242
					{
						unsigned int val; // 10249
					}
				}
			}
		}
	}
} /* size: 0 */

// <047FC29A> ../thirdparty/tinyexr/tinyexr.h:10264
void DecodeTiledPixelData(unsigned char** out_images, int* width, int* height, const int* requested_pixel_types, const unsigned char* data_ptr, size_t data_len, int compression_type, int line_order, int data_width, int data_height, int tile_offset_x, int tile_offset_y, int tile_size_x, int tile_size_y, size_t pixel_data_size, size_t num_attributes, const EXRAttribute* attributes, size_t num_channels, const EXRChannelInfo* channels, const vector<long unsigned int, std::allocator<long unsigned int> >& channel_offset_list)
{
} /* size: 0 */

// <047FC23B> ../thirdparty/tinyexr/tinyexr.h:10297
// variable: 1
void ComputeChannelLayout(vector<long unsigned int, std::allocator<long unsigned int> >* channel_offset_list, int* pixel_data_size, size_t* channel_offset, int num_channels, const EXRChannelInfo* channels)
{
	{
		size_t c; // 10306
	}
} /* size: 0 */

// <047FC120> ../thirdparty/tinyexr/tinyexr.h:10325
// variables: 3
void AllocateImage(int num_channels, const EXRChannelInfo* channels, const int* requested_pixel_types, int data_width, int data_height)
{
	unsigned char** images; // 10329
	{
		size_t c; // 10333
		{
			size_t data_len; // 10334
		}
	}
} /* size: 214, variables: 1 */

// <0481F935> ../thirdparty/tinyexr/tinyexr.h:10368
// variables: 41
// function calls: 561
void ParseEXRHeader(HeaderInfo* info, bool* empty_header, const EXRVersion* version, string* err, const unsigned char* buf, size_t size)
{
	const char* marker; // 10371
	bool has_channels; // 10398
	bool has_compression; // 10399
	bool has_data_window; // 10400
	bool has_display_window; // 10401
	bool has_line_order; // 10402
	bool has_pixel_aspect_ratio; // 10403
	bool has_screen_window_center; // 10404
	bool has_screen_window_width; // 10405
	size_t orig_size; // 10429
	{
		size_type __n; // 2236
	}
	vector<_EXRAttribute, std::allocator<_EXRAttribute> >::_M_erase_at_end(
			pointer __pos);  // 1864
	vector<_EXRAttribute, std::allocator<_EXRAttribute> >::clear(); // 10426
	{
		size_t nattr; // 10430
		{
			string attr_name; // 10441
			string attr_type; // 10442
			vector<unsigned char, std::allocator<unsigned char> > data; // 10443
			size_t marker_size; // 10444
			compare(const char_type* __s1,
				const char_type* __s2,
				size_t __n);  // 3632
			min<long unsigned int>(const long unsigned int& __a,
						const long unsigned int& __b);  // 3631
			_S_compare(size_type __n1,
					size_type __n2);  // 3634
			basic_string<char, std::char_traits<char>, std::allocator<char> >::compare(
				const char* __s);  // 10455
			{
				unsigned int x_size; // 10456
				unsigned int y_size; // 10456
				unsigned char tile_mode; // 10457
				vector<unsigned char, std::allocator<unsigned char> >::size(); // 1292
				vector<unsigned char, std::allocator<unsigned char> >::_M_range_check(
						size_type __n);  // 1315
				vector<unsigned char, std::allocator<unsigned char> >::at(
					size_type __n);  // 10459
				memcpy(void* __dest,
					const void* __src,
					size_t __len);  // 10459
				vector<unsigned char, std::allocator<unsigned char> >::_M_range_check(
						size_type __n);  // 1315
				vector<unsigned char, std::allocator<unsigned char> >::at(
					size_type __n);  // 10460
				memcpy(void* __dest,
					const void* __src,
					size_t __len);  // 10460
			}
			min<long unsigned int>(const long unsigned int& __a,
						const long unsigned int& __b);  // 3631
			compare(const char_type* __s1,
				const char_type* __s2,
				size_t __n);  // 3632
			_S_compare(size_type __n1,
					size_type __n2);  // 3634
			basic_string<char, std::char_traits<char>, std::allocator<char> >::compare(
				const char* __s);  // 10472
			{
				bool ok; // 10473
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 280
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 1279
				basic_string<char, std::char_traits<char>, std::allocator<char> >::capacity(); // 551
				{
					pointer __p; // 553
					const size_type  __how_much; // 555
					less<char const::operator(
							const char* __x,
							const char* __y);  // 440
					less<char const::operator(
							const char* __x,
							const char* __y);  // 441
					basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_disjunct(
							const char* __s);  // 568
					copy(char_type* __s1,
						const char_type* __s2,
						size_t __n);  // 453
					_S_copy(char* __d,
						const char* __s,
						size_type __n);  // 448
					_S_copy(char* __d,
						const char* __s,
						size_type __n);  // 573
				}
				__new_allocator<char>::allocate(
					size_type __n,
					const void  *);  // 203
				allocator<char>::allocate(
					size_t __n);  // 614
				allocate(allocator_type& __a,
					size_type __n);  // 142
				_S_allocate(_Char_alloc_type& __a,
						size_type __n);  // 164
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_create(
						size_type& __capacity,
						size_type __old_capacity);  // 363
				copy(char_type* __s1,
					const char_type* __s2,
					size_t __n);  // 453
				_S_copy(char* __d,
					const char* __s,
					size_type __n);  // 448
				_S_copy(char* __d,
					const char* __s,
					size_type __n);  // 368
				__new_allocator<char>::deallocate(
						char* __p,
						size_type __n);  // 215
				allocator<char>::deallocate(
						char* __p,
						size_t __n);  // 649
				deallocate(allocator_type& __a,
						pointer __p,
						size_type __n);  // 305
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_destroy(
						size_type __size);  // 299
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_dispose(); // 373
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
					pointer __p);  // 374
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_capacity(
						size_type __capacity);  // 375
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_mutate(
						size_type __pos,
						size_type __len1,
						const char* __s,
						size_type __len2);  // 579
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 273
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
						size_type __length);  // 272
				assign(char_type& __c1,
					const char_type& __c2);  // 273
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
						size_type __n);  // 581
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_replace(
						size_type __pos,
						size_type __len1,
						const char* __s,
						const size_type  __len2);  // 1847
				basic_string<char, std::char_traits<char>, std::allocator<char> >::assign(
					const char* __s);  // 916
				basic_string<char, std::char_traits<char>, std::allocator<char> >::operator=(
						const char* __s);  // 10502
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 280
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 1279
				basic_string<char, std::char_traits<char>, std::allocator<char> >::capacity(); // 551
				{
					pointer __p; // 553
					const size_type  __how_much; // 555
					less<char const::operator(
							const char* __x,
							const char* __y);  // 440
					less<char const::operator(
							const char* __x,
							const char* __y);  // 441
					basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_disjunct(
							const char* __s);  // 568
					copy(char_type* __s1,
						const char_type* __s2,
						size_t __n);  // 453
					_S_copy(char* __d,
						const char* __s,
						size_type __n);  // 448
					_S_copy(char* __d,
						const char* __s,
						size_type __n);  // 573
				}
				__new_allocator<char>::allocate(
					size_type __n,
					const void  *);  // 203
				allocator<char>::allocate(
					size_t __n);  // 614
				allocate(allocator_type& __a,
					size_type __n);  // 142
				_S_allocate(_Char_alloc_type& __a,
						size_type __n);  // 164
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_create(
						size_type& __capacity,
						size_type __old_capacity);  // 363
				copy(char_type* __s1,
					const char_type* __s2,
					size_t __n);  // 453
				_S_copy(char* __d,
					const char* __s,
					size_type __n);  // 448
				_S_copy(char* __d,
					const char* __s,
					size_type __n);  // 368
				__new_allocator<char>::deallocate(
						char* __p,
						size_type __n);  // 215
				allocator<char>::deallocate(
						char* __p,
						size_t __n);  // 649
				deallocate(allocator_type& __a,
						pointer __p,
						size_type __n);  // 305
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_destroy(
						size_type __size);  // 299
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_dispose(); // 373
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
					pointer __p);  // 374
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_capacity(
						size_type __capacity);  // 375
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_mutate(
						size_type __pos,
						size_type __len1,
						const char* __s,
						size_type __len2);  // 579
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 273
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
						size_type __length);  // 272
				assign(char_type& __c1,
					const char_type& __c2);  // 273
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
						size_type __n);  // 581
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_replace(
						size_type __pos,
						size_type __len1,
						const char* __s,
						const size_type  __len2);  // 1847
				basic_string<char, std::char_traits<char>, std::allocator<char> >::assign(
					const char* __s);  // 916
				basic_string<char, std::char_traits<char>, std::allocator<char> >::operator=(
						const char* __s);  // 10494
			}
			min<long unsigned int>(const long unsigned int& __a,
						const long unsigned int& __b);  // 3631
			compare(const char_type* __s1,
				const char_type* __s2,
				size_t __n);  // 3632
			_S_compare(size_type __n1,
					size_type __n2);  // 3634
			basic_string<char, std::char_traits<char>, std::allocator<char> >::compare(
				const char* __s);  // 10510
			min<long unsigned int>(const long unsigned int& __a,
						const long unsigned int& __b);  // 3631
			compare(const char_type* __s1,
				const char_type* __s2,
				size_t __n);  // 3632
			_S_compare(size_type __n1,
					size_type __n2);  // 3634
			basic_string<char, std::char_traits<char>, std::allocator<char> >::compare(
				const char* __s);  // 10534
			vector<unsigned char, std::allocator<unsigned char> >::size(); // 10535
			min<long unsigned int>(const long unsigned int& __a,
						const long unsigned int& __b);  // 3631
			compare(const char_type* __s1,
				const char_type* __s2,
				size_t __n);  // 3632
			_S_compare(size_type __n1,
					size_type __n2);  // 3634
			basic_string<char, std::char_traits<char>, std::allocator<char> >::compare(
				const char* __s);  // 10546
			vector<unsigned char, std::allocator<unsigned char> >::size(); // 10547
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 10548
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 10549
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 10550
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 10551
			min<long unsigned int>(const long unsigned int& __a,
						const long unsigned int& __b);  // 3631
			compare(const char_type* __s1,
				const char_type* __s2,
				size_t __n);  // 3632
			_S_compare(size_type __n1,
					size_type __n2);  // 3634
			basic_string<char, std::char_traits<char>, std::allocator<char> >::compare(
				const char* __s);  // 10563
			min<long unsigned int>(const long unsigned int& __a,
						const long unsigned int& __b);  // 3631
			compare(const char_type* __s1,
				const char_type* __s2,
				size_t __n);  // 3632
			_S_compare(size_type __n1,
					size_type __n2);  // 3634
			basic_string<char, std::char_traits<char>, std::allocator<char> >::compare(
				const char* __s);  // 10568
			vector<unsigned char, std::allocator<unsigned char> >::size(); // 10569
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 10570
			min<long unsigned int>(const long unsigned int& __a,
						const long unsigned int& __b);  // 3631
			compare(const char_type* __s1,
				const char_type* __s2,
				size_t __n);  // 3632
			_S_compare(size_type __n1,
					size_type __n2);  // 3634
			basic_string<char, std::char_traits<char>, std::allocator<char> >::compare(
				const char* __s);  // 10575
			vector<unsigned char, std::allocator<unsigned char> >::size(); // 10576
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 10577
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 10578
			min<long unsigned int>(const long unsigned int& __a,
						const long unsigned int& __b);  // 3631
			compare(const char_type* __s1,
				const char_type* __s2,
				size_t __n);  // 3632
			_S_compare(size_type __n1,
					size_type __n2);  // 3634
			basic_string<char, std::char_traits<char>, std::allocator<char> >::compare(
				const char* __s);  // 10585
			compare(const char_type* __s1,
				const char_type* __s2,
				size_t __n);  // 3632
			_S_compare(size_type __n1,
					size_type __n2);  // 3634
			basic_string<char, std::char_traits<char>, std::allocator<char> >::compare(
				const char* __s);  // 10593
			vector<unsigned char, std::allocator<unsigned char> >::size(); // 10594
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 10595
			vector<_EXRAttribute, std::allocator<_EXRAttribute> >::size(); // 10600
			{
				EXRAttribute attrib; // 10601
				strncpy(char* __dest,
					const char* __src,
					size_t __len);  // 10606
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 2874
				basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str(); // 10607
				strncpy(char* __dest,
					const char* __src,
					size_t __len);  // 10607
				vector<unsigned char, std::allocator<unsigned char> >::size(); // 10611
				vector<unsigned char, std::allocator<unsigned char> >::size(); // 10612
				vector<unsigned char, std::allocator<unsigned char> >::_M_range_check(
						size_type __n);  // 1315
				vector<unsigned char, std::allocator<unsigned char> >::at(
					size_type __n);  // 10613
				memcpy(void* __dest,
					const void* __src,
					size_t __len);  // 10613
				construct_at<_EXRAttribute, const _EXRAttribute&>(_EXRAttribute* __location); // 676
				construct<_EXRAttribute, const _EXRAttribute&>(allocator_type& __a,
										_EXRAttribute* __p);  // 1421
				vector<_EXRAttribute, std::allocator<_EXRAttribute> >::size(); // 2199
				max<long unsigned int>(const long unsigned int& __a,
							const long unsigned int& __b);  // 2202
				vector<_EXRAttribute, std::allocator<_EXRAttribute> >::_M_check_len(
						size_type __n,
						const char* __s);  // 566
				__normal_iterator<_EXRAttribute::__normal_iterator(
							_EXRAttribute* const& __i);  // 999
				vector<_EXRAttribute, std::allocator<_EXRAttribute> >::begin(); // 571
				__normal_iterator<_EXRAttribute::__normal_iterator(
							_EXRAttribute* const& __i);  // 1019
				vector<_EXRAttribute, std::allocator<_EXRAttribute> >::end(); // 571
				__new_allocator<_EXRAttribute>::allocate(
					size_type __n,
					const void  *);  // 203
				allocator<_EXRAttribute>::allocate(
					size_t __n);  // 614
				allocate(allocator_type& __a,
					size_type __n);  // 387
				_Vector_base<_EXRAttribute, std::allocator<_EXRAttribute> >::_M_allocate(
						size_t __n);  // 572
				{
					_Guard_alloc __guard; // 576
					_Guard_alloc::_Guard_alloc(
							pointer __s,
							size_type __l,
							_Base& __vect);  // 576
					construct_at<_EXRAttribute, const _EXRAttribute&>(_EXRAttribute* __location); // 676
					construct<_EXRAttribute, const _EXRAttribute&>(allocator_type& __a,
											_EXRAttribute* __p);  // 586
					__relocate_a_1<_EXRAttribute, _EXRAttribute>(_EXRAttribute* __first,
											_EXRAttribute* __last,
											_EXRAttribute* __result,
											allocator<_EXRAttribute>& __alloc);  // 1359
					__relocate_a<_EXRAttribute*, _EXRAttribute*, std::allocator<_EXRAttribute> >(_EXRAttribute* __first,
															_EXRAttribute* __last,
															_EXRAttribute* __result,
															allocator<_EXRAttribute>& __alloc);  // 539
					_S_relocate(pointer __first,
							pointer __last,
							pointer __result,
							_Tp_alloc_type& __alloc);  // 599
					__new_allocator<_EXRAttribute>::deallocate(
							_EXRAttribute* __p,
							size_type __n);  // 215
					allocator<_EXRAttribute>::deallocate(
							_EXRAttribute* __p,
							size_t __n);  // 649
					deallocate(allocator_type& __a,
							pointer __p,
							size_type __n);  // 396
					_Vector_base<_EXRAttribute, std::allocator<_EXRAttribute> >::_M_deallocate(
							pointer __p,
							size_t __n);  // 392
					_Vector_base<_EXRAttribute, std::allocator<_EXRAttribute> >::_M_deallocate(
							pointer __p,
							size_t __n);  // 1883
					_Guard_alloc::~_Guard_alloc(); // 640
				}
				vector<_EXRAttribute, std::allocator<_EXRAttribute> >::_M_realloc_append<const _EXRAttribute&>(); // 1427
				vector<_EXRAttribute, std::allocator<_EXRAttribute> >::push_back(
						const value_type& __x);  // 10615
			}
			vector<unsigned char, std::allocator<unsigned char> >::size(); // 10586
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 10587
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 10536
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 10537
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 10538
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 10539
			vector<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::size(); // 10525
			basic_string<char, std::char_traits<char>, std::allocator<char> >::size(); // 422
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_check_length(
					size_type __n1,
					size_type __n2,
					const char* __s);  // 1584
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 280
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 1279
			basic_string<char, std::char_traits<char>, std::allocator<char> >::capacity(); // 449
			copy(char_type* __s1,
				const char_type* __s2,
				size_t __n);  // 453
			_S_copy(char* __d,
				const char* __s,
				size_type __n);  // 448
			_S_copy(char* __d,
				const char* __s,
				size_type __n);  // 452
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
					size_type __length);  // 272
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 273
			assign(char_type& __c1,
				const char_type& __c2);  // 273
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
					size_type __n);  // 457
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_append(
					const char* __s,
					size_type __n);  // 1585
			basic_string<char, std::char_traits<char>, std::allocator<char> >::append(
				const char* __s);  // 1488
			basic_string<char, std::char_traits<char>, std::allocator<char> >::operator+=(
					const char* __s);  // 10527
			basic_string<char, std::char_traits<char>, std::allocator<char> >::size(); // 422
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_check_length(
					size_type __n1,
					size_type __n2,
					const char* __s);  // 1584
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 280
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 1279
			basic_string<char, std::char_traits<char>, std::allocator<char> >::capacity(); // 449
			copy(char_type* __s1,
				const char_type* __s2,
				size_t __n);  // 453
			_S_copy(char* __d,
				const char* __s,
				size_type __n);  // 448
			_S_copy(char* __d,
				const char* __s,
				size_type __n);  // 452
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
					size_type __length);  // 272
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 273
			assign(char_type& __c1,
				const char_type& __c2);  // 273
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
					size_type __n);  // 457
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_append(
					const char* __s,
					size_type __n);  // 1585
			basic_string<char, std::char_traits<char>, std::allocator<char> >::append(
				const char* __s);  // 1488
			basic_string<char, std::char_traits<char>, std::allocator<char> >::operator+=(
					const char* __s);  // 10520
			_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_get_Tp_allocator(); // 803
			_Destroy<unsigned char*, unsigned char>(unsigned char* __first,
								unsigned char* __last,
								allocator<unsigned char> &);  // 802
			__new_allocator<unsigned char>::deallocate(
					unsigned char* __p,
					size_type __n);  // 215
			allocator<unsigned char>::deallocate(
					unsigned char* __p,
					size_t __n);  // 649
			deallocate(allocator_type& __a,
					pointer __p,
					size_type __n);  // 396
			_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_deallocate(
					pointer __p,
					size_t __n);  // 375
			allocator<unsigned char>::~allocator(); // 139
			_Vector_impl::~_Vector_impl(); // 377
			_Vector_base<unsigned char, std::allocator<unsigned char> >::~_Vector_base(); // 805
			vector<unsigned char, std::allocator<unsigned char> >::~vector(); // 10618
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 280
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 298
			__new_allocator<char>::deallocate(
					char* __p,
					size_type __n);  // 215
			allocator<char>::deallocate(
					char* __p,
					size_t __n);  // 649
			deallocate(allocator_type& __a,
					pointer __p,
					size_type __n);  // 305
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_destroy(
					size_type __size);  // 299
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_dispose(); // 896
			allocator<char>::~allocator(); // 197
			_Alloc_hider::~_Alloc_hider(); // 896
			basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 10618
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 280
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 298
			__new_allocator<char>::deallocate(
					char* __p,
					size_type __n);  // 215
			allocator<char>::deallocate(
					char* __p,
					size_t __n);  // 649
			deallocate(allocator_type& __a,
					pointer __p,
					size_type __n);  // 305
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_destroy(
					size_type __size);  // 299
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_dispose(); // 896
			allocator<char>::~allocator(); // 197
			_Alloc_hider::~_Alloc_hider(); // 896
			basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 10618
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 590
			__new_allocator<char>::__new_allocator(
					const __new_allocator<char>  &);  // 173
			allocator<char>::allocator(
					const allocator<char>& __a);  // 209
			_Alloc_hider::_Alloc_hider(
					pointer __dat,
					allocator<char>& __a);  // 590
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
					size_type __length);  // 272
			assign(char_type& __c1,
				const char_type& __c2);  // 273
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
					size_type __n);  // 593
			allocator<char>::~allocator(); // 590
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_init_local_buf(); // 592
			basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(); // 10441
			__new_allocator<char>::__new_allocator(
					const __new_allocator<char>  &);  // 173
			allocator<char>::allocator(
					const allocator<char>& __a);  // 209
			_Alloc_hider::_Alloc_hider(
					pointer __dat,
					allocator<char>& __a);  // 590
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 590
			allocator<char>::~allocator(); // 590
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_init_local_buf(); // 592
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
					size_type __length);  // 272
			assign(char_type& __c1,
				const char_type& __c2);  // 273
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
					size_type __n);  // 593
			basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(); // 10442
			basic_string<char, std::char_traits<char>, std::allocator<char> >::size(); // 422
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_check_length(
					size_type __n1,
					size_type __n2,
					const char* __s);  // 1584
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 280
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 1279
			basic_string<char, std::char_traits<char>, std::allocator<char> >::capacity(); // 449
			copy(char_type* __s1,
				const char_type* __s2,
				size_t __n);  // 453
			_S_copy(char* __d,
				const char* __s,
				size_type __n);  // 448
			_S_copy(char* __d,
				const char* __s,
				size_type __n);  // 452
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
					size_type __length);  // 272
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 273
			assign(char_type& __c1,
				const char_type& __c2);  // 273
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
					size_type __n);  // 457
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_append(
					const char* __s,
					size_type __n);  // 1585
			basic_string<char, std::char_traits<char>, std::allocator<char> >::append(
				const char* __s);  // 1488
			basic_string<char, std::char_traits<char>, std::allocator<char> >::operator+=(
					const char* __s);  // 10448
			_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_get_Tp_allocator(); // 803
			_Destroy<unsigned char*, unsigned char>(unsigned char* __first,
								unsigned char* __last,
								allocator<unsigned char> &);  // 802
			__new_allocator<unsigned char>::deallocate(
					unsigned char* __p,
					size_type __n);  // 215
			allocator<unsigned char>::deallocate(
					unsigned char* __p,
					size_t __n);  // 649
			deallocate(allocator_type& __a,
					pointer __p,
					size_type __n);  // 396
			_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_deallocate(
					pointer __p,
					size_t __n);  // 375
			allocator<unsigned char>::~allocator(); // 139
			_Vector_impl::~_Vector_impl(); // 377
			_Vector_base<unsigned char, std::allocator<unsigned char> >::~_Vector_base(); // 805
			vector<unsigned char, std::allocator<unsigned char> >::~vector(); // 10618
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 280
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 298
			__new_allocator<char>::deallocate(
					char* __p,
					size_type __n);  // 215
			allocator<char>::deallocate(
					char* __p,
					size_t __n);  // 649
			deallocate(allocator_type& __a,
					pointer __p,
					size_type __n);  // 305
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_destroy(
					size_type __size);  // 299
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_dispose(); // 896
			allocator<char>::~allocator(); // 197
			_Alloc_hider::~_Alloc_hider(); // 896
			basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 10618
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 280
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 298
			__new_allocator<char>::deallocate(
					char* __p,
					size_type __n);  // 215
			allocator<char>::deallocate(
					char* __p,
					size_t __n);  // 649
			deallocate(allocator_type& __a,
					pointer __p,
					size_type __n);  // 305
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_destroy(
					size_type __size);  // 299
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_dispose(); // 896
			allocator<char>::~allocator(); // 197
			_Alloc_hider::~_Alloc_hider(); // 896
			basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 10618
			basic_string<char, std::char_traits<char>, std::allocator<char> >::size(); // 422
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_check_length(
					size_type __n1,
					size_type __n2,
					const char* __s);  // 1584
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 280
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 1279
			basic_string<char, std::char_traits<char>, std::allocator<char> >::capacity(); // 449
			copy(char_type* __s1,
				const char_type* __s2,
				size_t __n);  // 453
			_S_copy(char* __d,
				const char* __s,
				size_type __n);  // 448
			_S_copy(char* __d,
				const char* __s,
				size_type __n);  // 452
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
					size_type __length);  // 272
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 273
			assign(char_type& __c1,
				const char_type& __c2);  // 273
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
					size_type __n);  // 457
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_append(
					const char* __s,
					size_type __n);  // 1585
			basic_string<char, std::char_traits<char>, std::allocator<char> >::append(
				const char* __s);  // 1488
			basic_string<char, std::char_traits<char>, std::allocator<char> >::operator+=(
					const char* __s);  // 10433
		}
	}
	{
		stringstream ss_err; // 10622
		basic_ios<char, std::char_traits<char> >::basic_ios(); // 1042
		basic_istream<char, std::char_traits<char> >::basic_istream(
				const int  __in_chrg,
				const void **  __vtt_parm);  // 1021
		basic_ostream<char, std::char_traits<char> >::basic_ostream(
				const int  __in_chrg,
				const void **  __vtt_parm);  // 1021
		basic_iostream<char, std::char_traits<char> >::basic_iostream(
				const int  __in_chrg,
				const void **  __vtt_parm);  // 1042
		basic_streambuf<char, std::char_traits<char> >::basic_streambuf(); // 136
		__new_allocator<char>::__new_allocator(
				const __new_allocator<char>  &);  // 173
		allocator<char>::allocator(
				const allocator<char>& __a);  // 209
		_Alloc_hider::_Alloc_hider(
				pointer __dat,
				allocator<char>& __a);  // 590
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 590
		allocator<char>::~allocator(); // 590
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_init_local_buf(); // 592
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
				size_type __length);  // 272
		assign(char_type& __c1,
			const char_type& __c2);  // 273
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
				size_type __n);  // 593
		basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(); // 136
		basic_stringbuf<char, std::char_traits<char>, std::allocator<char> >::basic_stringbuf(
				openmode __mode);  // 1042
		basic_stringstream<char, std::char_traits<char>, std::allocator<char> >::basic_stringstream(
					const int  __in_chrg,
					const void **  __vtt_parm);  // 10622
		__new_allocator<char>::__new_allocator(
				const __new_allocator<char>  &);  // 173
		allocator<char>::allocator(
				const allocator<char>& __a);  // 2908
		basic_string<char, std::char_traits<char>, std::allocator<char> >::get_allocator(); // 254
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 602
		__new_allocator<char>::__new_allocator(
				const __new_allocator<char>  &);  // 173
		allocator<char>::allocator(
				const allocator<char>& __a);  // 205
		_Alloc_hider::_Alloc_hider(
				pointer __dat,
				const allocator<char>& __a);  // 602
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
				size_type __length);  // 272
		assign(char_type& __c1,
			const char_type& __c2);  // 273
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
				size_type __n);  // 605
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_init_local_buf(); // 604
		basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(
				const allocator<char>& __a);  // 254
		{
			char_type* __hi; // 255
			{
				char_type* __pptr; // 447
				basic_streambuf<char, std::char_traits<char> >::pptr(); // 447
				{
					char_type* __egptr; // 449
					basic_streambuf<char, std::char_traits<char> >::egptr(); // 449
				}
			}
			basic_stringbuf<char, std::char_traits<char>, std::allocator<char> >::_M_high_mark(); // 255
			basic_streambuf<char, std::char_traits<char> >::pbase(); // 256
			{
				const size_type  __rsize; // 313
				const size_type  __capacity; // 314
				basic_string<char, std::char_traits<char>, std::allocator<char> >::size(); // 1176
				basic_string<char, std::char_traits<char>, std::allocator<char> >::length(); // 313
				{
					size_type __new_capacity; // 318
					pointer __tmp; // 319
					__new_allocator<char>::allocate(
						size_type __n,
						const void  *);  // 203
					allocator<char>::allocate(
						size_t __n);  // 614
					allocate(allocator_type& __a,
						size_type __n);  // 142
					_S_allocate(_Char_alloc_type& __a,
							size_type __n);  // 164
					basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_create(
							size_type& __capacity,
							size_type __old_capacity);  // 319
					basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_capacity(
							size_type __capacity);  // 322
					basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
						pointer __p);  // 321
				}
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 326
				assign(char_type& __c1,
					const char_type& __c2);  // 451
				copy(char_type* __s1,
					const char_type* __s2,
					size_t __n);  // 453
				_S_copy(char* __d,
					const char* __s,
					size_type __n);  // 448
				_S_copy(char* __d,
					const char* __s,
					size_type __n);  // 326
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 326
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
						size_type __length);  // 272
				assign(char_type& __c1,
					const char_type& __c2);  // 273
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 273
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
						size_type __n);  // 328
			}
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_assign(
					const basic_string<char, std::char_traits<char>, std::allocator<char> >& __str);  // 1771
			basic_string<char, std::char_traits<char>, std::allocator<char> >::assign(
				const basic_string<char, std::char_traits<char>, std::allocator<char> >& __str);  // 906
			basic_string<char, std::char_traits<char>, std::allocator<char> >::operator=(
					const basic_string<char, std::char_traits<char>, std::allocator<char> >& __str);  // 258
		}
		allocator<char>::~allocator(); // 254
		basic_stringbuf<char, std::char_traits<char>, std::allocator<char> >::str(); // 1168
		basic_stringstream<char, std::char_traits<char>, std::allocator<char> >::str(); // 10662
		basic_string<char, std::char_traits<char>, std::allocator<char> >::empty(); // 10662
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 280
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 298
		__new_allocator<char>::deallocate(
				char* __p,
				size_type __n);  // 215
		allocator<char>::deallocate(
				char* __p,
				size_t __n);  // 649
		deallocate(allocator_type& __a,
				pointer __p,
				size_type __n);  // 305
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_destroy(
				size_type __size);  // 299
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_dispose(); // 896
		allocator<char>::~allocator(); // 197
		_Alloc_hider::~_Alloc_hider(); // 896
		basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 10662
		__new_allocator<char>::__new_allocator(
				const __new_allocator<char>  &);  // 173
		allocator<char>::allocator(
				const allocator<char>& __a);  // 2908
		basic_string<char, std::char_traits<char>, std::allocator<char> >::get_allocator(); // 254
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 602
		__new_allocator<char>::__new_allocator(
				const __new_allocator<char>  &);  // 173
		allocator<char>::allocator(
				const allocator<char>& __a);  // 205
		_Alloc_hider::_Alloc_hider(
				pointer __dat,
				const allocator<char>& __a);  // 602
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_init_local_buf(); // 604
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
				size_type __length);  // 272
		assign(char_type& __c1,
			const char_type& __c2);  // 273
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
				size_type __n);  // 605
		basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(
				const allocator<char>& __a);  // 254
		{
			char_type* __hi; // 255
			{
				char_type* __pptr; // 447
				basic_streambuf<char, std::char_traits<char> >::pptr(); // 447
				{
					char_type* __egptr; // 449
					basic_streambuf<char, std::char_traits<char> >::egptr(); // 449
				}
			}
			basic_stringbuf<char, std::char_traits<char>, std::allocator<char> >::_M_high_mark(); // 255
			basic_streambuf<char, std::char_traits<char> >::pbase(); // 256
			{
				const size_type  __rsize; // 313
				const size_type  __capacity; // 314
				basic_string<char, std::char_traits<char>, std::allocator<char> >::size(); // 1176
				basic_string<char, std::char_traits<char>, std::allocator<char> >::length(); // 313
				{
					size_type __new_capacity; // 318
					pointer __tmp; // 319
					__new_allocator<char>::allocate(
						size_type __n,
						const void  *);  // 203
					allocator<char>::allocate(
						size_t __n);  // 614
					allocate(allocator_type& __a,
						size_type __n);  // 142
					_S_allocate(_Char_alloc_type& __a,
							size_type __n);  // 164
					basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_create(
							size_type& __capacity,
							size_type __old_capacity);  // 319
					basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_capacity(
							size_type __capacity);  // 322
					basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
						pointer __p);  // 321
				}
				assign(char_type& __c1,
					const char_type& __c2);  // 451
				copy(char_type* __s1,
					const char_type* __s2,
					size_t __n);  // 453
				_S_copy(char* __d,
					const char* __s,
					size_type __n);  // 448
				_S_copy(char* __d,
					const char* __s,
					size_type __n);  // 326
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
						size_type __length);  // 272
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 273
				assign(char_type& __c1,
					const char_type& __c2);  // 273
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
						size_type __n);  // 328
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 326
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 326
			}
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_assign(
					const basic_string<char, std::char_traits<char>, std::allocator<char> >& __str);  // 1771
			basic_string<char, std::char_traits<char>, std::allocator<char> >::assign(
				const basic_string<char, std::char_traits<char>, std::allocator<char> >& __str);  // 906
			basic_string<char, std::char_traits<char>, std::allocator<char> >::operator=(
					const basic_string<char, std::char_traits<char>, std::allocator<char> >& __str);  // 258
		}
		allocator<char>::~allocator(); // 254
		basic_stringbuf<char, std::char_traits<char>, std::allocator<char> >::str(); // 1168
		basic_stringstream<char, std::char_traits<char>, std::allocator<char> >::str(); // 10664
		basic_string<char, std::char_traits<char>, std::allocator<char> >::size(); // 1536
		basic_string<char, std::char_traits<char>, std::allocator<char> >::size(); // 422
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_check_length(
				size_type __n1,
				size_type __n2,
				const char* __s);  // 1569
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 280
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 1279
		basic_string<char, std::char_traits<char>, std::allocator<char> >::capacity(); // 449
		copy(char_type* __s1,
			const char_type* __s2,
			size_t __n);  // 453
		_S_copy(char* __d,
			const char* __s,
			size_type __n);  // 448
		assign(char_type& __c1,
			const char_type& __c2);  // 451
		_S_copy(char* __d,
			const char* __s,
			size_type __n);  // 452
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 273
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
				size_type __length);  // 272
		assign(char_type& __c1,
			const char_type& __c2);  // 273
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
				size_type __n);  // 457
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_append(
				const char* __s,
				size_type __n);  // 1570
		basic_string<char, std::char_traits<char>, std::allocator<char> >::append(
			const char* __s,
			size_type __n);  // 1536
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 1536
		basic_string<char, std::char_traits<char>, std::allocator<char> >::append(
			const basic_string<char, std::char_traits<char>, std::allocator<char> >& __str);  // 1478
		basic_string<char, std::char_traits<char>, std::allocator<char> >::operator+=(
				const basic_string<char, std::char_traits<char>, std::allocator<char> >& __str);  // 10664
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 280
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 298
		__new_allocator<char>::deallocate(
				char* __p,
				size_type __n);  // 215
		allocator<char>::deallocate(
				char* __p,
				size_t __n);  // 649
		deallocate(allocator_type& __a,
				pointer __p,
				size_type __n);  // 305
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_destroy(
				size_type __size);  // 299
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_dispose(); // 896
		allocator<char>::~allocator(); // 197
		_Alloc_hider::~_Alloc_hider(); // 896
		basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 10664
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 280
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 298
		__new_allocator<char>::deallocate(
				char* __p,
				size_type __n);  // 215
		allocator<char>::deallocate(
				char* __p,
				size_t __n);  // 649
		deallocate(allocator_type& __a,
				pointer __p,
				size_type __n);  // 305
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_destroy(
				size_type __size);  // 299
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_dispose(); // 896
		allocator<char>::~allocator(); // 197
		_Alloc_hider::~_Alloc_hider(); // 896
		basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 81
		basic_streambuf<char, std::char_traits<char> >::~basic_streambuf(); // 81
		basic_stringbuf<char, std::char_traits<char>, std::allocator<char> >::~basic_stringbuf(); // 1084
		basic_ostream<char, std::char_traits<char> >::~basic_ostream(
				const int  __in_chrg,
				const void **  __vtt_parm);  // 1017
		basic_istream<char, std::char_traits<char> >::~basic_istream(
				const int  __in_chrg,
				const void **  __vtt_parm);  // 1017
		basic_iostream<char, std::char_traits<char> >::~basic_iostream(
				const int  __in_chrg,
				const void **  __vtt_parm);  // 1084
		basic_ios<char, std::char_traits<char> >::~basic_ios(); // 1084
		basic_stringstream<char, std::char_traits<char>, std::allocator<char> >::~basic_stringstream(
					const int  __in_chrg,
					const void **  __vtt_parm);  // 10668
		operator<< <std::char_traits<char> >(basic_ostream<char, std::char_traits<char> >& __out,
							const char* __s);  // 10658
		__check_facet<std::ctype<char> >(const ctype<char>* __f); // 465
		ctype<char>::widen(
			char __c);  // 882
		ctype<char>::widen(
			char __c);  // 465
		basic_ios<char, std::char_traits<char> >::widen(
			char __c);  // 67
		flush<char, std::char_traits<char> >(basic_ostream<char, std::char_traits<char> >& __os); // 67
		endl<char, std::char_traits<char> >(basic_ostream<char, std::char_traits<char> >& __os); // 121
		basic_ostream<char, std::char_traits<char> >::operator<<(
				__ostream_type& (*__pf)(__ostream_type &));  // 10659
		operator<< <std::char_traits<char> >(basic_ostream<char, std::char_traits<char> >& __out,
							const char* __s);  // 10653
		__check_facet<std::ctype<char> >(const ctype<char>* __f); // 465
		ctype<char>::widen(
			char __c);  // 882
		ctype<char>::widen(
			char __c);  // 465
		basic_ios<char, std::char_traits<char> >::widen(
			char __c);  // 67
		flush<char, std::char_traits<char> >(basic_ostream<char, std::char_traits<char> >& __os); // 67
		endl<char, std::char_traits<char> >(basic_ostream<char, std::char_traits<char> >& __os); // 121
		basic_ostream<char, std::char_traits<char> >::operator<<(
				__ostream_type& (*__pf)(__ostream_type &));  // 10654
		operator<< <std::char_traits<char> >(basic_ostream<char, std::char_traits<char> >& __out,
							const char* __s);  // 10648
		__check_facet<std::ctype<char> >(const ctype<char>* __f); // 465
		ctype<char>::widen(
			char __c);  // 882
		ctype<char>::widen(
			char __c);  // 465
		basic_ios<char, std::char_traits<char> >::widen(
			char __c);  // 67
		flush<char, std::char_traits<char> >(basic_ostream<char, std::char_traits<char> >& __os); // 67
		endl<char, std::char_traits<char> >(basic_ostream<char, std::char_traits<char> >& __os); // 121
		basic_ostream<char, std::char_traits<char> >::operator<<(
				__ostream_type& (*__pf)(__ostream_type &));  // 10649
		operator<< <std::char_traits<char> >(basic_ostream<char, std::char_traits<char> >& __out,
							const char* __s);  // 10643
		__check_facet<std::ctype<char> >(const ctype<char>* __f); // 465
		ctype<char>::widen(
			char __c);  // 882
		ctype<char>::widen(
			char __c);  // 465
		basic_ios<char, std::char_traits<char> >::widen(
			char __c);  // 67
		flush<char, std::char_traits<char> >(basic_ostream<char, std::char_traits<char> >& __os); // 67
		endl<char, std::char_traits<char> >(basic_ostream<char, std::char_traits<char> >& __os); // 121
		basic_ostream<char, std::char_traits<char> >::operator<<(
				__ostream_type& (*__pf)(__ostream_type &));  // 10644
		operator<< <std::char_traits<char> >(basic_ostream<char, std::char_traits<char> >& __out,
							const char* __s);  // 10638
		__check_facet<std::ctype<char> >(const ctype<char>* __f); // 465
		ctype<char>::widen(
			char __c);  // 882
		ctype<char>::widen(
			char __c);  // 465
		basic_ios<char, std::char_traits<char> >::widen(
			char __c);  // 67
		flush<char, std::char_traits<char> >(basic_ostream<char, std::char_traits<char> >& __os); // 67
		endl<char, std::char_traits<char> >(basic_ostream<char, std::char_traits<char> >& __os); // 121
		basic_ostream<char, std::char_traits<char> >::operator<<(
				__ostream_type& (*__pf)(__ostream_type &));  // 10639
		operator<< <std::char_traits<char> >(basic_ostream<char, std::char_traits<char> >& __out,
							const char* __s);  // 10634
		__check_facet<std::ctype<char> >(const ctype<char>* __f); // 465
		ctype<char>::widen(
			char __c);  // 882
		ctype<char>::widen(
			char __c);  // 465
		basic_ios<char, std::char_traits<char> >::widen(
			char __c);  // 67
		flush<char, std::char_traits<char> >(basic_ostream<char, std::char_traits<char> >& __os); // 67
		endl<char, std::char_traits<char> >(basic_ostream<char, std::char_traits<char> >& __os); // 121
		basic_ostream<char, std::char_traits<char> >::operator<<(
				__ostream_type& (*__pf)(__ostream_type &));  // 10634
		operator<< <std::char_traits<char> >(basic_ostream<char, std::char_traits<char> >& __out,
							const char* __s);  // 10630
		__check_facet<std::ctype<char> >(const ctype<char>* __f); // 465
		ctype<char>::widen(
			char __c);  // 882
		ctype<char>::widen(
			char __c);  // 465
		basic_ios<char, std::char_traits<char> >::widen(
			char __c);  // 67
		flush<char, std::char_traits<char> >(basic_ostream<char, std::char_traits<char> >& __os); // 67
		endl<char, std::char_traits<char> >(basic_ostream<char, std::char_traits<char> >& __os); // 121
		basic_ostream<char, std::char_traits<char> >::operator<<(
				__ostream_type& (*__pf)(__ostream_type &));  // 10630
		operator<< <std::char_traits<char> >(basic_ostream<char, std::char_traits<char> >& __out,
							const char* __s);  // 10625
		__check_facet<std::ctype<char> >(const ctype<char>* __f); // 465
		ctype<char>::widen(
			char __c);  // 882
		ctype<char>::widen(
			char __c);  // 465
		basic_ios<char, std::char_traits<char> >::widen(
			char __c);  // 67
		flush<char, std::char_traits<char> >(basic_ostream<char, std::char_traits<char> >& __os); // 67
		endl<char, std::char_traits<char> >(basic_ostream<char, std::char_traits<char> >& __os); // 121
		basic_ostream<char, std::char_traits<char> >::operator<<(
				__ostream_type& (*__pf)(__ostream_type &));  // 10626
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 280
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 298
		__new_allocator<char>::deallocate(
				char* __p,
				size_type __n);  // 215
		allocator<char>::deallocate(
				char* __p,
				size_t __n);  // 649
		deallocate(allocator_type& __a,
				pointer __p,
				size_type __n);  // 305
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_destroy(
				size_type __size);  // 299
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_dispose(); // 896
		allocator<char>::~allocator(); // 197
		_Alloc_hider::~_Alloc_hider(); // 896
		basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 81
		basic_streambuf<char, std::char_traits<char> >::~basic_streambuf(); // 81
		basic_stringbuf<char, std::char_traits<char>, std::allocator<char> >::~basic_stringbuf(); // 1084
		basic_ostream<char, std::char_traits<char> >::~basic_ostream(
				const int  __in_chrg,
				const void **  __vtt_parm);  // 1017
		basic_istream<char, std::char_traits<char> >::~basic_istream(
				const int  __in_chrg,
				const void **  __vtt_parm);  // 1017
		basic_iostream<char, std::char_traits<char> >::~basic_iostream(
				const int  __in_chrg,
				const void **  __vtt_parm);  // 1084
		basic_ios<char, std::char_traits<char> >::~basic_ios(); // 1084
		basic_stringstream<char, std::char_traits<char>, std::allocator<char> >::~basic_stringstream(
					const int  __in_chrg,
					const void **  __vtt_parm);  // 10668
	}
} /* size: 0, variables: 10, inline expansions: 2 (24 bytes) */

// <047FBDE1> ../thirdparty/tinyexr/tinyexr.h:10368
// variables: 21
void ParseEXRHeader(HeaderInfo* info, bool* empty_header, const EXRVersion* version, string* err, const unsigned char* buf, size_t size)
{
	const char* marker; // 10371
	bool has_channels; // 10398
	bool has_compression; // 10399
	bool has_data_window; // 10400
	bool has_display_window; // 10401
	bool has_line_order; // 10402
	bool has_pixel_aspect_ratio; // 10403
	bool has_screen_window_center; // 10404
	bool has_screen_window_width; // 10405
	size_t orig_size; // 10429
	{
		size_t nattr; // 10430
		{
			string attr_name; // 10441
			string attr_type; // 10442
			vector<unsigned char, std::allocator<unsigned char> > data; // 10443
			size_t marker_size; // 10444
			{
				unsigned int x_size; // 10456
				unsigned int y_size; // 10456
				unsigned char tile_mode; // 10457
			}
			{
				bool ok; // 10473
			}
			{
				EXRAttribute attrib; // 10601
			}
		}
	}
	{
		stringstream ss_err; // 10622
	}
} /* size: 0, variables: 10 */

// <047FB879> ../thirdparty/tinyexr/tinyexr.h:10676
// variables: 4
// function calls: 19
void ConvertHeader(EXRHeader* exr_header, const HeaderInfo& info)
{
	{
		size_t c; // 10702
		vector<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::operator[](
				size_type __n);  // 10706
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 2874
		basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str(); // 10706
		strncpy(char* __dest,
			const char* __src,
			size_t __len);  // 10706
		vector<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::operator[](
				size_type __n);  // 10711
		vector<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::operator[](
				size_type __n);  // 10712
		vector<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::operator[](
				size_type __n);  // 10713
		vector<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::operator[](
				size_type __n);  // 10714
	}
	{
		size_t c; // 10719
		vector<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::operator[](
				size_type __n);  // 10720
	}
	{
		size_t c; // 10726
		vector<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::operator[](
				size_type __n);  // 10727
	}
	{
		size_t i; // 10742
		vector<_EXRAttribute, std::allocator<_EXRAttribute> >::size(); // 10742
		vector<_EXRAttribute, std::allocator<_EXRAttribute> >::operator[](
				size_type __n);  // 10743
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 10743
		vector<_EXRAttribute, std::allocator<_EXRAttribute> >::operator[](
				size_type __n);  // 10745
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 10745
		vector<_EXRAttribute, std::allocator<_EXRAttribute> >::operator[](
				size_type __n);  // 10747
		vector<_EXRAttribute, std::allocator<_EXRAttribute> >::operator[](
				size_type __n);  // 10749
	}
	vector<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::size(); // 10698
	vector<_EXRAttribute, std::allocator<_EXRAttribute> >::size(); // 10730
} /* size: 938, inline expansions: 2 (53 bytes) */

// <048282FB> ../thirdparty/tinyexr/tinyexr.h:10759
// variables: 78
// function calls: 705
void DecodeChunk(EXRImage* exr_image, const EXRHeader* exr_header, const vector<long unsigned int, std::allocator<long unsigned int> >& offsets, const unsigned char* head, const size_t size, string* err)
{
	int num_channels; // 10763
	int num_scanline_blocks; // 10765
	int data_width; // 10774
	int data_height; // 10775
	size_t num_blocks; // 10802
	vector<long unsigned int, std::allocator<long unsigned int> > channel_offset_list; // 10804
	int pixel_data_size; // 10805
	size_t channel_offset; // 10806
	bool invalid_data; // 10816
	{
		stringstream ss; // 10779
		basic_ios<char, std::char_traits<char> >::basic_ios(); // 1042
		basic_istream<char, std::char_traits<char> >::basic_istream(
				const int  __in_chrg,
				const void **  __vtt_parm);  // 1021
		basic_ostream<char, std::char_traits<char> >::basic_ostream(
				const int  __in_chrg,
				const void **  __vtt_parm);  // 1021
		basic_iostream<char, std::char_traits<char> >::basic_iostream(
				const int  __in_chrg,
				const void **  __vtt_parm);  // 1042
		__new_allocator<char>::__new_allocator(
				const __new_allocator<char>  &);  // 173
		allocator<char>::allocator(
				const allocator<char>& __a);  // 209
		_Alloc_hider::_Alloc_hider(
				pointer __dat,
				allocator<char>& __a);  // 590
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 590
		allocator<char>::~allocator(); // 590
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_init_local_buf(); // 592
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
				size_type __length);  // 272
		assign(char_type& __c1,
			const char_type& __c2);  // 273
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
				size_type __n);  // 593
		basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(); // 136
		basic_streambuf<char, std::char_traits<char> >::basic_streambuf(); // 136
		basic_stringbuf<char, std::char_traits<char>, std::allocator<char> >::basic_stringbuf(
				openmode __mode);  // 1042
		basic_stringstream<char, std::char_traits<char>, std::allocator<char> >::basic_stringstream(
					const int  __in_chrg,
					const void **  __vtt_parm);  // 10779
		operator<< <std::char_traits<char> >(basic_ostream<char, std::char_traits<char> >& __out,
							const char* __s);  // 10780
		operator<< <std::char_traits<char> >(basic_ostream<char, std::char_traits<char> >& __out,
							const char* __s);  // 10780
		__check_facet<std::ctype<char> >(const ctype<char>* __f); // 465
		ctype<char>::widen(
			char __c);  // 882
		ctype<char>::widen(
			char __c);  // 465
		basic_ios<char, std::char_traits<char> >::widen(
			char __c);  // 67
		flush<char, std::char_traits<char> >(basic_ostream<char, std::char_traits<char> >& __os); // 67
		endl<char, std::char_traits<char> >(basic_ostream<char, std::char_traits<char> >& __os); // 121
		basic_ostream<char, std::char_traits<char> >::operator<<(
				__ostream_type& (*__pf)(__ostream_type &));  // 10781
		__new_allocator<char>::__new_allocator(
				const __new_allocator<char>  &);  // 173
		allocator<char>::allocator(
				const allocator<char>& __a);  // 205
		_Alloc_hider::_Alloc_hider(
				pointer __dat,
				const allocator<char>& __a);  // 602
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 602
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_init_local_buf(); // 604
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
				size_type __length);  // 272
		assign(char_type& __c1,
			const char_type& __c2);  // 273
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
				size_type __n);  // 605
		basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(
				const allocator<char>& __a);  // 254
		__new_allocator<char>::__new_allocator(
				const __new_allocator<char>  &);  // 173
		allocator<char>::allocator(
				const allocator<char>& __a);  // 2908
		basic_string<char, std::char_traits<char>, std::allocator<char> >::get_allocator(); // 254
		{
			char_type* __hi; // 255
			{
				char_type* __pptr; // 447
				basic_streambuf<char, std::char_traits<char> >::pptr(); // 447
				{
					char_type* __egptr; // 449
					basic_streambuf<char, std::char_traits<char> >::egptr(); // 449
				}
			}
			basic_stringbuf<char, std::char_traits<char>, std::allocator<char> >::_M_high_mark(); // 255
			basic_streambuf<char, std::char_traits<char> >::pbase(); // 256
			{
				const size_type  __rsize; // 313
				const size_type  __capacity; // 314
				basic_string<char, std::char_traits<char>, std::allocator<char> >::size(); // 1176
				basic_string<char, std::char_traits<char>, std::allocator<char> >::length(); // 313
				{
					size_type __new_capacity; // 318
					pointer __tmp; // 319
					__new_allocator<char>::allocate(
						size_type __n,
						const void  *);  // 203
					allocator<char>::allocate(
						size_t __n);  // 614
					allocate(allocator_type& __a,
						size_type __n);  // 142
					_S_allocate(_Char_alloc_type& __a,
							size_type __n);  // 164
					basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_create(
							size_type& __capacity,
							size_type __old_capacity);  // 319
					basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
						pointer __p);  // 321
					basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_capacity(
							size_type __capacity);  // 322
				}
				copy(char_type* __s1,
					const char_type* __s2,
					size_t __n);  // 453
				_S_copy(char* __d,
					const char* __s,
					size_type __n);  // 448
				assign(char_type& __c1,
					const char_type& __c2);  // 451
				_S_copy(char* __d,
					const char* __s,
					size_type __n);  // 326
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
						size_type __length);  // 272
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 273
				assign(char_type& __c1,
					const char_type& __c2);  // 273
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
						size_type __n);  // 328
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 326
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 326
			}
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_assign(
					const basic_string<char, std::char_traits<char>, std::allocator<char> >& __str);  // 1771
			basic_string<char, std::char_traits<char>, std::allocator<char> >::assign(
				const basic_string<char, std::char_traits<char>, std::allocator<char> >& __str);  // 906
			basic_string<char, std::char_traits<char>, std::allocator<char> >::operator=(
					const basic_string<char, std::char_traits<char>, std::allocator<char> >& __str);  // 258
		}
		allocator<char>::~allocator(); // 254
		basic_stringbuf<char, std::char_traits<char>, std::allocator<char> >::str(); // 1168
		basic_stringstream<char, std::char_traits<char>, std::allocator<char> >::str(); // 10782
		basic_string<char, std::char_traits<char>, std::allocator<char> >::size(); // 1536
		basic_string<char, std::char_traits<char>, std::allocator<char> >::size(); // 422
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_check_length(
				size_type __n1,
				size_type __n2,
				const char* __s);  // 1569
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 280
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 1279
		basic_string<char, std::char_traits<char>, std::allocator<char> >::capacity(); // 449
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
				size_type __length);  // 272
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 273
		assign(char_type& __c1,
			const char_type& __c2);  // 273
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
				size_type __n);  // 457
		copy(char_type* __s1,
			const char_type* __s2,
			size_t __n);  // 453
		_S_copy(char* __d,
			const char* __s,
			size_type __n);  // 448
		assign(char_type& __c1,
			const char_type& __c2);  // 451
		_S_copy(char* __d,
			const char* __s,
			size_type __n);  // 452
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_append(
				const char* __s,
				size_type __n);  // 1570
		basic_string<char, std::char_traits<char>, std::allocator<char> >::append(
			const char* __s,
			size_type __n);  // 1536
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 1536
		basic_string<char, std::char_traits<char>, std::allocator<char> >::append(
			const basic_string<char, std::char_traits<char>, std::allocator<char> >& __str);  // 1478
		basic_string<char, std::char_traits<char>, std::allocator<char> >::operator+=(
				const basic_string<char, std::char_traits<char>, std::allocator<char> >& __str);  // 10782
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 280
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 298
		__new_allocator<char>::deallocate(
				char* __p,
				size_type __n);  // 215
		allocator<char>::deallocate(
				char* __p,
				size_t __n);  // 649
		deallocate(allocator_type& __a,
				pointer __p,
				size_type __n);  // 305
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_destroy(
				size_type __size);  // 299
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_dispose(); // 896
		allocator<char>::~allocator(); // 197
		_Alloc_hider::~_Alloc_hider(); // 896
		basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 10782
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 280
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 298
		__new_allocator<char>::deallocate(
				char* __p,
				size_type __n);  // 215
		allocator<char>::deallocate(
				char* __p,
				size_t __n);  // 649
		deallocate(allocator_type& __a,
				pointer __p,
				size_type __n);  // 305
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_destroy(
				size_type __size);  // 299
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_dispose(); // 896
		allocator<char>::~allocator(); // 197
		_Alloc_hider::~_Alloc_hider(); // 896
		basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 81
		basic_streambuf<char, std::char_traits<char> >::~basic_streambuf(); // 81
		basic_stringbuf<char, std::char_traits<char>, std::allocator<char> >::~basic_stringbuf(); // 1084
		basic_ostream<char, std::char_traits<char> >::~basic_ostream(
				const int  __in_chrg,
				const void **  __vtt_parm);  // 1017
		basic_istream<char, std::char_traits<char> >::~basic_istream(
				const int  __in_chrg,
				const void **  __vtt_parm);  // 1017
		basic_iostream<char, std::char_traits<char> >::~basic_iostream(
				const int  __in_chrg,
				const void **  __vtt_parm);  // 1084
		basic_ios<char, std::char_traits<char> >::~basic_ios(); // 1084
		basic_stringstream<char, std::char_traits<char>, std::allocator<char> >::~basic_stringstream(
					const int  __in_chrg,
					const void **  __vtt_parm);  // 10783
	}
	{
		const int  threshold; // 10789
		{
			stringstream ss; // 10792
			basic_ios<char, std::char_traits<char> >::basic_ios(); // 1042
			basic_istream<char, std::char_traits<char> >::basic_istream(
					const int  __in_chrg,
					const void **  __vtt_parm);  // 1021
			basic_ostream<char, std::char_traits<char> >::basic_ostream(
					const int  __in_chrg,
					const void **  __vtt_parm);  // 1021
			basic_iostream<char, std::char_traits<char> >::basic_iostream(
					const int  __in_chrg,
					const void **  __vtt_parm);  // 1042
			basic_streambuf<char, std::char_traits<char> >::basic_streambuf(); // 136
			__new_allocator<char>::__new_allocator(
					const __new_allocator<char>  &);  // 173
			allocator<char>::allocator(
					const allocator<char>& __a);  // 209
			_Alloc_hider::_Alloc_hider(
					pointer __dat,
					allocator<char>& __a);  // 590
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 590
			allocator<char>::~allocator(); // 590
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_init_local_buf(); // 592
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
					size_type __length);  // 272
			assign(char_type& __c1,
				const char_type& __c2);  // 273
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
					size_type __n);  // 593
			basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(); // 136
			basic_stringbuf<char, std::char_traits<char>, std::allocator<char> >::basic_stringbuf(
					openmode __mode);  // 1042
			basic_stringstream<char, std::char_traits<char>, std::allocator<char> >::basic_stringstream(
						const int  __in_chrg,
						const void **  __vtt_parm);  // 10792
			operator<< <std::char_traits<char> >(basic_ostream<char, std::char_traits<char> >& __out,
								const char* __s);  // 10793
			operator<< <std::char_traits<char> >(basic_ostream<char, std::char_traits<char> >& __out,
								const char* __s);  // 10795
			operator<< <std::char_traits<char> >(basic_ostream<char, std::char_traits<char> >& __out,
								const char* __s);  // 10795
			__check_facet<std::ctype<char> >(const ctype<char>* __f); // 465
			ctype<char>::widen(
				char __c);  // 882
			ctype<char>::widen(
				char __c);  // 465
			basic_ios<char, std::char_traits<char> >::widen(
				char __c);  // 67
			flush<char, std::char_traits<char> >(basic_ostream<char, std::char_traits<char> >& __os); // 67
			endl<char, std::char_traits<char> >(basic_ostream<char, std::char_traits<char> >& __os); // 121
			basic_ostream<char, std::char_traits<char> >::operator<<(
					__ostream_type& (*__pf)(__ostream_type &));  // 10795
			__new_allocator<char>::__new_allocator(
					const __new_allocator<char>  &);  // 173
			allocator<char>::allocator(
					const allocator<char>& __a);  // 205
			_Alloc_hider::_Alloc_hider(
					pointer __dat,
					const allocator<char>& __a);  // 602
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 602
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_init_local_buf(); // 604
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
					size_type __length);  // 272
			assign(char_type& __c1,
				const char_type& __c2);  // 273
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
					size_type __n);  // 605
			basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(
					const allocator<char>& __a);  // 254
			__new_allocator<char>::__new_allocator(
					const __new_allocator<char>  &);  // 173
			allocator<char>::allocator(
					const allocator<char>& __a);  // 2908
			basic_string<char, std::char_traits<char>, std::allocator<char> >::get_allocator(); // 254
			{
				char_type* __hi; // 255
				{
					char_type* __pptr; // 447
					basic_streambuf<char, std::char_traits<char> >::pptr(); // 447
					{
						char_type* __egptr; // 449
						basic_streambuf<char, std::char_traits<char> >::egptr(); // 449
					}
				}
				basic_stringbuf<char, std::char_traits<char>, std::allocator<char> >::_M_high_mark(); // 255
				basic_streambuf<char, std::char_traits<char> >::pbase(); // 256
				{
					const size_type  __rsize; // 313
					const size_type  __capacity; // 314
					basic_string<char, std::char_traits<char>, std::allocator<char> >::size(); // 1176
					basic_string<char, std::char_traits<char>, std::allocator<char> >::length(); // 313
					{
						size_type __new_capacity; // 318
						pointer __tmp; // 319
						__new_allocator<char>::allocate(
							size_type __n,
							const void  *);  // 203
						allocator<char>::allocate(
							size_t __n);  // 614
						allocate(allocator_type& __a,
							size_type __n);  // 142
						_S_allocate(_Char_alloc_type& __a,
								size_type __n);  // 164
						basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_create(
								size_type& __capacity,
								size_type __old_capacity);  // 319
						basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
							pointer __p);  // 321
						basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_capacity(
								size_type __capacity);  // 322
					}
					assign(char_type& __c1,
						const char_type& __c2);  // 451
					copy(char_type* __s1,
						const char_type* __s2,
						size_t __n);  // 453
					_S_copy(char* __d,
						const char* __s,
						size_type __n);  // 448
					_S_copy(char* __d,
						const char* __s,
						size_type __n);  // 326
					basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
							size_type __length);  // 272
					basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 273
					assign(char_type& __c1,
						const char_type& __c2);  // 273
					basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
							size_type __n);  // 328
					basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 326
					basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 326
				}
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_assign(
						const basic_string<char, std::char_traits<char>, std::allocator<char> >& __str);  // 1771
				basic_string<char, std::char_traits<char>, std::allocator<char> >::assign(
					const basic_string<char, std::char_traits<char>, std::allocator<char> >& __str);  // 906
				basic_string<char, std::char_traits<char>, std::allocator<char> >::operator=(
						const basic_string<char, std::char_traits<char>, std::allocator<char> >& __str);  // 258
			}
			allocator<char>::~allocator(); // 254
			basic_stringbuf<char, std::char_traits<char>, std::allocator<char> >::str(); // 1168
			basic_stringstream<char, std::char_traits<char>, std::allocator<char> >::str(); // 10796
			basic_string<char, std::char_traits<char>, std::allocator<char> >::size(); // 1536
			basic_string<char, std::char_traits<char>, std::allocator<char> >::size(); // 422
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_check_length(
					size_type __n1,
					size_type __n2,
					const char* __s);  // 1569
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 280
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 1279
			basic_string<char, std::char_traits<char>, std::allocator<char> >::capacity(); // 449
			copy(char_type* __s1,
				const char_type* __s2,
				size_t __n);  // 453
			_S_copy(char* __d,
				const char* __s,
				size_type __n);  // 448
			assign(char_type& __c1,
				const char_type& __c2);  // 451
			_S_copy(char* __d,
				const char* __s,
				size_type __n);  // 452
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 273
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
					size_type __length);  // 272
			assign(char_type& __c1,
				const char_type& __c2);  // 273
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
					size_type __n);  // 457
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_append(
					const char* __s,
					size_type __n);  // 1570
			basic_string<char, std::char_traits<char>, std::allocator<char> >::append(
				const char* __s,
				size_type __n);  // 1536
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 1536
			basic_string<char, std::char_traits<char>, std::allocator<char> >::append(
				const basic_string<char, std::char_traits<char>, std::allocator<char> >& __str);  // 1478
			basic_string<char, std::char_traits<char>, std::allocator<char> >::operator+=(
					const basic_string<char, std::char_traits<char>, std::allocator<char> >& __str);  // 10796
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 280
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 298
			__new_allocator<char>::deallocate(
					char* __p,
					size_type __n);  // 215
			allocator<char>::deallocate(
					char* __p,
					size_t __n);  // 649
			deallocate(allocator_type& __a,
					pointer __p,
					size_type __n);  // 305
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_destroy(
					size_type __size);  // 299
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_dispose(); // 896
			allocator<char>::~allocator(); // 197
			_Alloc_hider::~_Alloc_hider(); // 896
			basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 10796
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 280
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 298
			__new_allocator<char>::deallocate(
					char* __p,
					size_type __n);  // 215
			allocator<char>::deallocate(
					char* __p,
					size_t __n);  // 649
			deallocate(allocator_type& __a,
					pointer __p,
					size_type __n);  // 305
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_destroy(
					size_type __size);  // 299
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_dispose(); // 896
			allocator<char>::~allocator(); // 197
			_Alloc_hider::~_Alloc_hider(); // 896
			basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 81
			basic_streambuf<char, std::char_traits<char> >::~basic_streambuf(); // 81
			basic_stringbuf<char, std::char_traits<char>, std::allocator<char> >::~basic_stringbuf(); // 1084
			basic_ostream<char, std::char_traits<char> >::~basic_ostream(
					const int  __in_chrg,
					const void **  __vtt_parm);  // 1017
			basic_istream<char, std::char_traits<char> >::~basic_istream(
					const int  __in_chrg,
					const void **  __vtt_parm);  // 1017
			basic_iostream<char, std::char_traits<char> >::~basic_iostream(
					const int  __in_chrg,
					const void **  __vtt_parm);  // 1084
			basic_ios<char, std::char_traits<char> >::~basic_ios(); // 1084
			basic_stringstream<char, std::char_traits<char>, std::allocator<char> >::~basic_stringstream(
						const int  __in_chrg,
						const void **  __vtt_parm);  // 10797
		}
	}
	vector<long unsigned int, std::allocator<long unsigned int> >::size(); // 10802
	{
		const size_type  __size; // 762
		size_type __navail; // 763
		{
			pointer __old_start; // 784
			pointer __old_finish; // 785
			const size_type  __len; // 787
			pointer __new_start; // 789
			vector<long unsigned int, std::allocator<long unsigned int> >::_M_check_len(
					size_type __n,
					const char* __s);  // 788
			__new_allocator<long unsigned int>::allocate(
				size_type __n,
				const void  *);  // 203
			allocator<long unsigned int>::allocate(
				size_t __n);  // 614
			allocate(allocator_type& __a,
				size_type __n);  // 387
			_Vector_base<long unsigned int, std::allocator<long unsigned int> >::_M_allocate(
					size_t __n);  // 789
			{
				_Guard_alloc __guard; // 792
				{
					value_type* __val; // 892
					__fill_a1<long unsigned int*, long unsigned int>(long unsigned int* __first,
											long unsigned int* __last,
											const long unsigned int& __value);  // 979
					__fill_a<long unsigned int*, long unsigned int>(long unsigned int* __first,
											long unsigned int* __last,
											const long unsigned int& __value);  // 1148
					__fill_n_a<long unsigned int*, long unsigned int, long unsigned int>(long unsigned int* __first,
														long unsigned int __n,
														const long unsigned int& __value,
														random_access_iterator_tag);  // 1178
					fill_n<long unsigned int*, long unsigned int, long unsigned int>(long unsigned int* __first,
													long unsigned int __n,
													const long unsigned int& __value);  // 896
					_Construct<long unsigned int>(long unsigned int* __p); // 894
				}
				__uninit_default_n<long unsigned int*, long unsigned int>(long unsigned int* __first,
												long unsigned int __n);  // 888
				__uninit_default_n<long unsigned int*, long unsigned int>(long unsigned int* __first,
												long unsigned int __n);  // 947
				__uninitialized_default_n<long unsigned int*, long unsigned int>(long unsigned int* __first,
												long unsigned int __n);  // 1002
				__uninitialized_default_n_a<long unsigned int*, long unsigned int, long unsigned int>(long unsigned int* __first,
															long unsigned int __n,
															allocator<long unsigned int> &);  // 794
				_Guard_alloc::_Guard_alloc(
						pointer __s,
						size_type __l,
						_Base& __vect);  // 792
				_Guard_alloc::~_Guard_alloc(); // 835
			}
		}
	}
	vector<long unsigned int, std::allocator<long unsigned int> >::_M_default_append(
				size_type __n);  // 1146
	vector<long unsigned int, std::allocator<long unsigned int> >::resize(
		size_type __new_size);  // 10301
	{
		size_t c; // 10306
	}
	ComputeChannelLayout(vector<long unsigned int, std::allocator<long unsigned int> >* channel_offset_list,
				int* pixel_data_size,
				size_t* channel_offset,
				int num_channels,
				const EXRChannelInfo* channels);  // 10807
	{
		size_t num_tiles; // 10838
		{
			stringstream ss; // 10822
			basic_ios<char, std::char_traits<char> >::basic_ios(); // 1042
			basic_istream<char, std::char_traits<char> >::basic_istream(
					const int  __in_chrg,
					const void **  __vtt_parm);  // 1021
			basic_ostream<char, std::char_traits<char> >::basic_ostream(
					const int  __in_chrg,
					const void **  __vtt_parm);  // 1021
			basic_iostream<char, std::char_traits<char> >::basic_iostream(
					const int  __in_chrg,
					const void **  __vtt_parm);  // 1042
			basic_streambuf<char, std::char_traits<char> >::basic_streambuf(); // 136
			__new_allocator<char>::__new_allocator(
					const __new_allocator<char>  &);  // 173
			allocator<char>::allocator(
					const allocator<char>& __a);  // 209
			_Alloc_hider::_Alloc_hider(
					pointer __dat,
					allocator<char>& __a);  // 590
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 590
			allocator<char>::~allocator(); // 590
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_init_local_buf(); // 592
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
					size_type __length);  // 272
			assign(char_type& __c1,
				const char_type& __c2);  // 273
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
					size_type __n);  // 593
			basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(); // 136
			basic_stringbuf<char, std::char_traits<char>, std::allocator<char> >::basic_stringbuf(
					openmode __mode);  // 1042
			basic_stringstream<char, std::char_traits<char>, std::allocator<char> >::basic_stringstream(
						const int  __in_chrg,
						const void **  __vtt_parm);  // 10822
			operator<< <std::char_traits<char> >(basic_ostream<char, std::char_traits<char> >& __out,
								const char* __s);  // 10823
			__new_allocator<char>::__new_allocator(
					const __new_allocator<char>  &);  // 173
			allocator<char>::allocator(
					const allocator<char>& __a);  // 205
			_Alloc_hider::_Alloc_hider(
					pointer __dat,
					const allocator<char>& __a);  // 602
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 602
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_init_local_buf(); // 604
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
					size_type __length);  // 272
			assign(char_type& __c1,
				const char_type& __c2);  // 273
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
					size_type __n);  // 605
			basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(
					const allocator<char>& __a);  // 254
			__new_allocator<char>::__new_allocator(
					const __new_allocator<char>  &);  // 173
			allocator<char>::allocator(
					const allocator<char>& __a);  // 2908
			basic_string<char, std::char_traits<char>, std::allocator<char> >::get_allocator(); // 254
			{
				char_type* __hi; // 255
				{
					char_type* __pptr; // 447
					basic_streambuf<char, std::char_traits<char> >::pptr(); // 447
					{
						char_type* __egptr; // 449
						basic_streambuf<char, std::char_traits<char> >::egptr(); // 449
					}
				}
				basic_stringbuf<char, std::char_traits<char>, std::allocator<char> >::_M_high_mark(); // 255
				basic_streambuf<char, std::char_traits<char> >::pbase(); // 256
				{
					const size_type  __rsize; // 313
					const size_type  __capacity; // 314
					basic_string<char, std::char_traits<char>, std::allocator<char> >::size(); // 1176
					basic_string<char, std::char_traits<char>, std::allocator<char> >::length(); // 313
					{
						size_type __new_capacity; // 318
						pointer __tmp; // 319
						__new_allocator<char>::allocate(
							size_type __n,
							const void  *);  // 203
						allocator<char>::allocate(
							size_t __n);  // 614
						allocate(allocator_type& __a,
							size_type __n);  // 142
						_S_allocate(_Char_alloc_type& __a,
								size_type __n);  // 164
						basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_create(
								size_type& __capacity,
								size_type __old_capacity);  // 319
						basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_capacity(
								size_type __capacity);  // 322
						basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
							pointer __p);  // 321
					}
					assign(char_type& __c1,
						const char_type& __c2);  // 451
					copy(char_type* __s1,
						const char_type* __s2,
						size_t __n);  // 453
					_S_copy(char* __d,
						const char* __s,
						size_type __n);  // 448
					_S_copy(char* __d,
						const char* __s,
						size_type __n);  // 326
					basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
							size_type __length);  // 272
					basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 273
					assign(char_type& __c1,
						const char_type& __c2);  // 273
					basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
							size_type __n);  // 328
					basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 326
					basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 326
				}
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_assign(
						const basic_string<char, std::char_traits<char>, std::allocator<char> >& __str);  // 1771
				basic_string<char, std::char_traits<char>, std::allocator<char> >::assign(
					const basic_string<char, std::char_traits<char>, std::allocator<char> >& __str);  // 906
				basic_string<char, std::char_traits<char>, std::allocator<char> >::operator=(
						const basic_string<char, std::char_traits<char>, std::allocator<char> >& __str);  // 258
			}
			allocator<char>::~allocator(); // 254
			basic_stringbuf<char, std::char_traits<char>, std::allocator<char> >::str(); // 1168
			basic_stringstream<char, std::char_traits<char>, std::allocator<char> >::str(); // 10824
			operator<< <std::char_traits<char> >(basic_ostream<char, std::char_traits<char> >& __out,
								const char* __s);  // 10823
			basic_string<char, std::char_traits<char>, std::allocator<char> >::size(); // 1536
			basic_string<char, std::char_traits<char>, std::allocator<char> >::size(); // 422
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_check_length(
					size_type __n1,
					size_type __n2,
					const char* __s);  // 1569
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 280
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 1279
			basic_string<char, std::char_traits<char>, std::allocator<char> >::capacity(); // 449
			copy(char_type* __s1,
				const char_type* __s2,
				size_t __n);  // 453
			_S_copy(char* __d,
				const char* __s,
				size_type __n);  // 448
			assign(char_type& __c1,
				const char_type& __c2);  // 451
			_S_copy(char* __d,
				const char* __s,
				size_type __n);  // 452
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 273
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
					size_type __length);  // 272
			assign(char_type& __c1,
				const char_type& __c2);  // 273
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
					size_type __n);  // 457
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_append(
					const char* __s,
					size_type __n);  // 1570
			basic_string<char, std::char_traits<char>, std::allocator<char> >::append(
				const char* __s,
				size_type __n);  // 1536
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 1536
			basic_string<char, std::char_traits<char>, std::allocator<char> >::append(
				const basic_string<char, std::char_traits<char>, std::allocator<char> >& __str);  // 1478
			basic_string<char, std::char_traits<char>, std::allocator<char> >::operator+=(
					const basic_string<char, std::char_traits<char>, std::allocator<char> >& __str);  // 10824
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 280
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 298
			__new_allocator<char>::deallocate(
					char* __p,
					size_type __n);  // 215
			allocator<char>::deallocate(
					char* __p,
					size_t __n);  // 649
			deallocate(allocator_type& __a,
					pointer __p,
					size_type __n);  // 305
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_destroy(
					size_type __size);  // 299
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_dispose(); // 896
			allocator<char>::~allocator(); // 197
			_Alloc_hider::~_Alloc_hider(); // 896
			basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 10824
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 280
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 298
			__new_allocator<char>::deallocate(
					char* __p,
					size_type __n);  // 215
			allocator<char>::deallocate(
					char* __p,
					size_t __n);  // 649
			deallocate(allocator_type& __a,
					pointer __p,
					size_type __n);  // 305
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_destroy(
					size_type __size);  // 299
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_dispose(); // 896
			allocator<char>::~allocator(); // 197
			_Alloc_hider::~_Alloc_hider(); // 896
			basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 81
			basic_streambuf<char, std::char_traits<char> >::~basic_streambuf(); // 81
			basic_stringbuf<char, std::char_traits<char>, std::allocator<char> >::~basic_stringbuf(); // 1084
			basic_ostream<char, std::char_traits<char> >::~basic_ostream(
					const int  __in_chrg,
					const void **  __vtt_parm);  // 1017
			basic_istream<char, std::char_traits<char> >::~basic_istream(
					const int  __in_chrg,
					const void **  __vtt_parm);  // 1017
			basic_iostream<char, std::char_traits<char> >::~basic_iostream(
					const int  __in_chrg,
					const void **  __vtt_parm);  // 1084
			basic_ios<char, std::char_traits<char> >::~basic_ios(); // 1084
			basic_stringstream<char, std::char_traits<char>, std::allocator<char> >::~basic_stringstream(
						const int  __in_chrg,
						const void **  __vtt_parm);  // 10825
		}
		{
			stringstream ss; // 10831
			basic_ios<char, std::char_traits<char> >::basic_ios(); // 1042
			basic_istream<char, std::char_traits<char> >::basic_istream(
					const int  __in_chrg,
					const void **  __vtt_parm);  // 1021
			basic_ostream<char, std::char_traits<char> >::basic_ostream(
					const int  __in_chrg,
					const void **  __vtt_parm);  // 1021
			basic_iostream<char, std::char_traits<char> >::basic_iostream(
					const int  __in_chrg,
					const void **  __vtt_parm);  // 1042
			basic_streambuf<char, std::char_traits<char> >::basic_streambuf(); // 136
			__new_allocator<char>::__new_allocator(
					const __new_allocator<char>  &);  // 173
			allocator<char>::allocator(
					const allocator<char>& __a);  // 209
			_Alloc_hider::_Alloc_hider(
					pointer __dat,
					allocator<char>& __a);  // 590
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 590
			allocator<char>::~allocator(); // 590
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_init_local_buf(); // 592
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
					size_type __length);  // 272
			assign(char_type& __c1,
				const char_type& __c2);  // 273
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
					size_type __n);  // 593
			basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(); // 136
			basic_stringbuf<char, std::char_traits<char>, std::allocator<char> >::basic_stringbuf(
					openmode __mode);  // 1042
			basic_stringstream<char, std::char_traits<char>, std::allocator<char> >::basic_stringstream(
						const int  __in_chrg,
						const void **  __vtt_parm);  // 10831
			operator<< <std::char_traits<char> >(basic_ostream<char, std::char_traits<char> >& __out,
								const char* __s);  // 10832
			__new_allocator<char>::__new_allocator(
					const __new_allocator<char>  &);  // 173
			allocator<char>::allocator(
					const allocator<char>& __a);  // 205
			_Alloc_hider::_Alloc_hider(
					pointer __dat,
					const allocator<char>& __a);  // 602
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 602
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_init_local_buf(); // 604
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
					size_type __length);  // 272
			assign(char_type& __c1,
				const char_type& __c2);  // 273
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
					size_type __n);  // 605
			basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(
					const allocator<char>& __a);  // 254
			__new_allocator<char>::__new_allocator(
					const __new_allocator<char>  &);  // 173
			allocator<char>::allocator(
					const allocator<char>& __a);  // 2908
			basic_string<char, std::char_traits<char>, std::allocator<char> >::get_allocator(); // 254
			{
				char_type* __hi; // 255
				{
					char_type* __pptr; // 447
					basic_streambuf<char, std::char_traits<char> >::pptr(); // 447
					{
						char_type* __egptr; // 449
						basic_streambuf<char, std::char_traits<char> >::egptr(); // 449
					}
				}
				basic_stringbuf<char, std::char_traits<char>, std::allocator<char> >::_M_high_mark(); // 255
				basic_streambuf<char, std::char_traits<char> >::pbase(); // 256
				{
					const size_type  __rsize; // 313
					const size_type  __capacity; // 314
					basic_string<char, std::char_traits<char>, std::allocator<char> >::size(); // 1176
					basic_string<char, std::char_traits<char>, std::allocator<char> >::length(); // 313
					{
						size_type __new_capacity; // 318
						pointer __tmp; // 319
						__new_allocator<char>::allocate(
							size_type __n,
							const void  *);  // 203
						allocator<char>::allocate(
							size_t __n);  // 614
						allocate(allocator_type& __a,
							size_type __n);  // 142
						_S_allocate(_Char_alloc_type& __a,
								size_type __n);  // 164
						basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_create(
								size_type& __capacity,
								size_type __old_capacity);  // 319
						basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_capacity(
								size_type __capacity);  // 322
						basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
							pointer __p);  // 321
					}
					basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 326
					assign(char_type& __c1,
						const char_type& __c2);  // 451
					copy(char_type* __s1,
						const char_type* __s2,
						size_t __n);  // 453
					_S_copy(char* __d,
						const char* __s,
						size_type __n);  // 448
					_S_copy(char* __d,
						const char* __s,
						size_type __n);  // 326
					basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 326
					basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
							size_type __length);  // 272
					assign(char_type& __c1,
						const char_type& __c2);  // 273
					basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 273
					basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
							size_type __n);  // 328
				}
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_assign(
						const basic_string<char, std::char_traits<char>, std::allocator<char> >& __str);  // 1771
				basic_string<char, std::char_traits<char>, std::allocator<char> >::assign(
					const basic_string<char, std::char_traits<char>, std::allocator<char> >& __str);  // 906
				basic_string<char, std::char_traits<char>, std::allocator<char> >::operator=(
						const basic_string<char, std::char_traits<char>, std::allocator<char> >& __str);  // 258
			}
			allocator<char>::~allocator(); // 254
			basic_stringbuf<char, std::char_traits<char>, std::allocator<char> >::str(); // 1168
			basic_stringstream<char, std::char_traits<char>, std::allocator<char> >::str(); // 10833
			operator<< <std::char_traits<char> >(basic_ostream<char, std::char_traits<char> >& __out,
								const char* __s);  // 10832
			basic_string<char, std::char_traits<char>, std::allocator<char> >::size(); // 1536
			basic_string<char, std::char_traits<char>, std::allocator<char> >::size(); // 422
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_check_length(
					size_type __n1,
					size_type __n2,
					const char* __s);  // 1569
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 280
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 1279
			basic_string<char, std::char_traits<char>, std::allocator<char> >::capacity(); // 449
			copy(char_type* __s1,
				const char_type* __s2,
				size_t __n);  // 453
			_S_copy(char* __d,
				const char* __s,
				size_type __n);  // 448
			assign(char_type& __c1,
				const char_type& __c2);  // 451
			_S_copy(char* __d,
				const char* __s,
				size_type __n);  // 452
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 273
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
					size_type __length);  // 272
			assign(char_type& __c1,
				const char_type& __c2);  // 273
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
					size_type __n);  // 457
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_append(
					const char* __s,
					size_type __n);  // 1570
			basic_string<char, std::char_traits<char>, std::allocator<char> >::append(
				const char* __s,
				size_type __n);  // 1536
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 1536
			basic_string<char, std::char_traits<char>, std::allocator<char> >::append(
				const basic_string<char, std::char_traits<char>, std::allocator<char> >& __str);  // 1478
			basic_string<char, std::char_traits<char>, std::allocator<char> >::operator+=(
					const basic_string<char, std::char_traits<char>, std::allocator<char> >& __str);  // 10833
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 280
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 298
			__new_allocator<char>::deallocate(
					char* __p,
					size_type __n);  // 215
			allocator<char>::deallocate(
					char* __p,
					size_t __n);  // 649
			deallocate(allocator_type& __a,
					pointer __p,
					size_type __n);  // 305
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_destroy(
					size_type __size);  // 299
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_dispose(); // 896
			allocator<char>::~allocator(); // 197
			_Alloc_hider::~_Alloc_hider(); // 896
			basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 10833
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 280
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 298
			__new_allocator<char>::deallocate(
					char* __p,
					size_type __n);  // 215
			allocator<char>::deallocate(
					char* __p,
					size_t __n);  // 649
			deallocate(allocator_type& __a,
					pointer __p,
					size_type __n);  // 305
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_destroy(
					size_type __size);  // 299
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_dispose(); // 896
			allocator<char>::~allocator(); // 197
			_Alloc_hider::~_Alloc_hider(); // 896
			basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 81
			basic_streambuf<char, std::char_traits<char> >::~basic_streambuf(); // 81
			basic_stringbuf<char, std::char_traits<char>, std::allocator<char> >::~basic_stringbuf(); // 1084
			basic_ostream<char, std::char_traits<char> >::~basic_ostream(
					const int  __in_chrg,
					const void **  __vtt_parm);  // 1017
			basic_istream<char, std::char_traits<char> >::~basic_istream(
					const int  __in_chrg,
					const void **  __vtt_parm);  // 1017
			basic_iostream<char, std::char_traits<char> >::~basic_iostream(
					const int  __in_chrg,
					const void **  __vtt_parm);  // 1084
			basic_ios<char, std::char_traits<char> >::~basic_ios(); // 1084
			basic_stringstream<char, std::char_traits<char>, std::allocator<char> >::~basic_stringstream(
						const int  __in_chrg,
						const void **  __vtt_parm);  // 10834
		}
		vector<long unsigned int, std::allocator<long unsigned int> >::size(); // 10838
		{
			size_t tile_idx; // 10843
			{
				size_t data_size; // 10859
				const unsigned char* data_ptr; // 10860
				int tile_coordinates; // 10863
				int data_len; // 10878
				memcpy(void* __dest,
					const void* __src,
					size_t __len);  // 10864
				memcpy(void* __dest,
					const void* __src,
					size_t __len);  // 10879
				DecodeTiledPixelData(unsigned char** out_images,
							int* width,
							int* height,
							const int* requested_pixel_types,
							const unsigned char* data_ptr,
							size_t data_len,
							int compression_type,
							int line_order,
							int data_width,
							int data_height,
							int tile_offset_x,
							int tile_offset_y,
							int tile_size_x,
							int tile_size_y,
							size_t pixel_data_size,
							size_t num_attributes,
							const EXRAttribute* attributes,
							size_t num_channels,
							const EXRChannelInfo* channels,
							const vector<long unsigned int, std::allocator<long unsigned int> >& channel_offset_list);  // 10893
				vector<long unsigned int, std::allocator<long unsigned int> >::operator[](
						size_type __n);  // 10852
				basic_string<char, std::char_traits<char>, std::allocator<char> >::size(); // 422
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_check_length(
						size_type __n1,
						size_type __n2,
						const char* __s);  // 1584
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 280
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 1279
				basic_string<char, std::char_traits<char>, std::allocator<char> >::capacity(); // 449
				copy(char_type* __s1,
					const char_type* __s2,
					size_t __n);  // 453
				_S_copy(char* __d,
					const char* __s,
					size_type __n);  // 448
				_S_copy(char* __d,
					const char* __s,
					size_type __n);  // 452
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
						size_type __length);  // 272
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 273
				assign(char_type& __c1,
					const char_type& __c2);  // 273
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
						size_type __n);  // 457
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_append(
						const char* __s,
						size_type __n);  // 1585
				basic_string<char, std::char_traits<char>, std::allocator<char> >::append(
					const char* __s);  // 1488
				basic_string<char, std::char_traits<char>, std::allocator<char> >::operator+=(
						const char* __s);  // 10854
				basic_string<char, std::char_traits<char>, std::allocator<char> >::size(); // 422
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_check_length(
						size_type __n1,
						size_type __n2,
						const char* __s);  // 1584
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 280
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 1279
				basic_string<char, std::char_traits<char>, std::allocator<char> >::capacity(); // 449
				copy(char_type* __s1,
					const char_type* __s2,
					size_t __n);  // 453
				_S_copy(char* __d,
					const char* __s,
					size_type __n);  // 448
				_S_copy(char* __d,
					const char* __s,
					size_type __n);  // 452
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
						size_type __length);  // 272
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 273
				assign(char_type& __c1,
					const char_type& __c2);  // 273
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
						size_type __n);  // 457
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_append(
						const char* __s,
						size_type __n);  // 1585
				basic_string<char, std::char_traits<char>, std::allocator<char> >::append(
					const char* __s);  // 1488
				basic_string<char, std::char_traits<char>, std::allocator<char> >::operator+=(
						const char* __s);  // 10885
			}
		}
	}
	{
		size_t total_data_len; // 10918
		const bool  total_data_len_overflown; // 10920
		{
			stringstream ss; // 10923
			basic_ios<char, std::char_traits<char> >::basic_ios(); // 1042
			basic_istream<char, std::char_traits<char> >::basic_istream(
					const int  __in_chrg,
					const void **  __vtt_parm);  // 1021
			basic_ostream<char, std::char_traits<char> >::basic_ostream(
					const int  __in_chrg,
					const void **  __vtt_parm);  // 1021
			basic_iostream<char, std::char_traits<char> >::basic_iostream(
					const int  __in_chrg,
					const void **  __vtt_parm);  // 1042
			basic_streambuf<char, std::char_traits<char> >::basic_streambuf(); // 136
			__new_allocator<char>::__new_allocator(
					const __new_allocator<char>  &);  // 173
			allocator<char>::allocator(
					const allocator<char>& __a);  // 209
			_Alloc_hider::_Alloc_hider(
					pointer __dat,
					allocator<char>& __a);  // 590
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 590
			allocator<char>::~allocator(); // 590
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_init_local_buf(); // 592
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
					size_type __length);  // 272
			assign(char_type& __c1,
				const char_type& __c2);  // 273
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
					size_type __n);  // 593
			basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(); // 136
			basic_stringbuf<char, std::char_traits<char>, std::allocator<char> >::basic_stringbuf(
					openmode __mode);  // 1042
			basic_stringstream<char, std::char_traits<char>, std::allocator<char> >::basic_stringstream(
						const int  __in_chrg,
						const void **  __vtt_parm);  // 10923
			operator<< <std::char_traits<char> >(basic_ostream<char, std::char_traits<char> >& __out,
								const char* __s);  // 10924
			operator<< <std::char_traits<char> >(basic_ostream<char, std::char_traits<char> >& __out,
								const char* __s);  // 10925
			operator<< <std::char_traits<char> >(basic_ostream<char, std::char_traits<char> >& __out,
								const char* __s);  // 10925
			__check_facet<std::ctype<char> >(const ctype<char>* __f); // 465
			ctype<char>::widen(
				char __c);  // 882
			ctype<char>::widen(
				char __c);  // 465
			basic_ios<char, std::char_traits<char> >::widen(
				char __c);  // 67
			flush<char, std::char_traits<char> >(basic_ostream<char, std::char_traits<char> >& __os); // 67
			endl<char, std::char_traits<char> >(basic_ostream<char, std::char_traits<char> >& __os); // 121
			basic_ostream<char, std::char_traits<char> >::operator<<(
					__ostream_type& (*__pf)(__ostream_type &));  // 10926
			__new_allocator<char>::__new_allocator(
					const __new_allocator<char>  &);  // 173
			allocator<char>::allocator(
					const allocator<char>& __a);  // 205
			_Alloc_hider::_Alloc_hider(
					pointer __dat,
					const allocator<char>& __a);  // 602
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 602
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_init_local_buf(); // 604
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
					size_type __length);  // 272
			assign(char_type& __c1,
				const char_type& __c2);  // 273
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
					size_type __n);  // 605
			basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(
					const allocator<char>& __a);  // 254
			__new_allocator<char>::__new_allocator(
					const __new_allocator<char>  &);  // 173
			allocator<char>::allocator(
					const allocator<char>& __a);  // 2908
			basic_string<char, std::char_traits<char>, std::allocator<char> >::get_allocator(); // 254
			{
				char_type* __hi; // 255
				{
					char_type* __pptr; // 447
					basic_streambuf<char, std::char_traits<char> >::pptr(); // 447
					{
						char_type* __egptr; // 449
						basic_streambuf<char, std::char_traits<char> >::egptr(); // 449
					}
				}
				basic_stringbuf<char, std::char_traits<char>, std::allocator<char> >::_M_high_mark(); // 255
				basic_streambuf<char, std::char_traits<char> >::pbase(); // 256
				{
					const size_type  __rsize; // 313
					const size_type  __capacity; // 314
					basic_string<char, std::char_traits<char>, std::allocator<char> >::size(); // 1176
					basic_string<char, std::char_traits<char>, std::allocator<char> >::length(); // 313
					{
						size_type __new_capacity; // 318
						pointer __tmp; // 319
						__new_allocator<char>::allocate(
							size_type __n,
							const void  *);  // 203
						allocator<char>::allocate(
							size_t __n);  // 614
						allocate(allocator_type& __a,
							size_type __n);  // 142
						_S_allocate(_Char_alloc_type& __a,
								size_type __n);  // 164
						basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_create(
								size_type& __capacity,
								size_type __old_capacity);  // 319
						basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_capacity(
								size_type __capacity);  // 322
						basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
							pointer __p);  // 321
					}
					assign(char_type& __c1,
						const char_type& __c2);  // 451
					copy(char_type* __s1,
						const char_type* __s2,
						size_t __n);  // 453
					_S_copy(char* __d,
						const char* __s,
						size_type __n);  // 448
					_S_copy(char* __d,
						const char* __s,
						size_type __n);  // 326
					basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
							size_type __length);  // 272
					basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 273
					assign(char_type& __c1,
						const char_type& __c2);  // 273
					basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
							size_type __n);  // 328
					basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 326
					basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 326
				}
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_assign(
						const basic_string<char, std::char_traits<char>, std::allocator<char> >& __str);  // 1771
				basic_string<char, std::char_traits<char>, std::allocator<char> >::assign(
					const basic_string<char, std::char_traits<char>, std::allocator<char> >& __str);  // 906
				basic_string<char, std::char_traits<char>, std::allocator<char> >::operator=(
						const basic_string<char, std::char_traits<char>, std::allocator<char> >& __str);  // 258
			}
			allocator<char>::~allocator(); // 254
			basic_stringbuf<char, std::char_traits<char>, std::allocator<char> >::str(); // 1168
			basic_stringstream<char, std::char_traits<char>, std::allocator<char> >::str(); // 10927
			basic_string<char, std::char_traits<char>, std::allocator<char> >::size(); // 1536
			basic_string<char, std::char_traits<char>, std::allocator<char> >::size(); // 422
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_check_length(
					size_type __n1,
					size_type __n2,
					const char* __s);  // 1569
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 280
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 1279
			basic_string<char, std::char_traits<char>, std::allocator<char> >::capacity(); // 449
			copy(char_type* __s1,
				const char_type* __s2,
				size_t __n);  // 453
			_S_copy(char* __d,
				const char* __s,
				size_type __n);  // 448
			assign(char_type& __c1,
				const char_type& __c2);  // 451
			_S_copy(char* __d,
				const char* __s,
				size_type __n);  // 452
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 273
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
					size_type __length);  // 272
			assign(char_type& __c1,
				const char_type& __c2);  // 273
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
					size_type __n);  // 457
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_append(
					const char* __s,
					size_type __n);  // 1570
			basic_string<char, std::char_traits<char>, std::allocator<char> >::append(
				const char* __s,
				size_type __n);  // 1536
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 1536
			basic_string<char, std::char_traits<char>, std::allocator<char> >::append(
				const basic_string<char, std::char_traits<char>, std::allocator<char> >& __str);  // 1478
			basic_string<char, std::char_traits<char>, std::allocator<char> >::operator+=(
					const basic_string<char, std::char_traits<char>, std::allocator<char> >& __str);  // 10927
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 280
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 298
			__new_allocator<char>::deallocate(
					char* __p,
					size_type __n);  // 215
			allocator<char>::deallocate(
					char* __p,
					size_t __n);  // 649
			deallocate(allocator_type& __a,
					pointer __p,
					size_type __n);  // 305
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_destroy(
					size_type __size);  // 299
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_dispose(); // 896
			allocator<char>::~allocator(); // 197
			_Alloc_hider::~_Alloc_hider(); // 896
			basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 10927
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 280
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 298
			__new_allocator<char>::deallocate(
					char* __p,
					size_type __n);  // 215
			allocator<char>::deallocate(
					char* __p,
					size_t __n);  // 649
			deallocate(allocator_type& __a,
					pointer __p,
					size_type __n);  // 305
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_destroy(
					size_type __size);  // 299
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_dispose(); // 896
			allocator<char>::~allocator(); // 197
			_Alloc_hider::~_Alloc_hider(); // 896
			basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 81
			basic_streambuf<char, std::char_traits<char> >::~basic_streambuf(); // 81
			basic_stringbuf<char, std::char_traits<char>, std::allocator<char> >::~basic_stringbuf(); // 1084
			basic_ostream<char, std::char_traits<char> >::~basic_ostream(
					const int  __in_chrg,
					const void **  __vtt_parm);  // 1017
			basic_istream<char, std::char_traits<char> >::~basic_istream(
					const int  __in_chrg,
					const void **  __vtt_parm);  // 1017
			basic_iostream<char, std::char_traits<char> >::~basic_iostream(
					const int  __in_chrg,
					const void **  __vtt_parm);  // 1084
			basic_ios<char, std::char_traits<char> >::~basic_ios(); // 1084
			basic_stringstream<char, std::char_traits<char>, std::allocator<char> >::~basic_stringstream(
						const int  __in_chrg,
						const void **  __vtt_parm);  // 10928
		}
		{
			int y; // 10939
			{
				size_t y_idx; // 10940
				{
					size_t data_size; // 10948
					const unsigned char* data_ptr; // 10949
					int line_no; // 10952
					int data_len; // 10954
					memcpy(void* __dest,
						const void* __src,
						size_t __len);  // 10953
					memcpy(void* __dest,
						const void* __src,
						size_t __len);  // 10955
					{
						int end_line_no; // 10972
						int num_lines; // 10975
						min<int>(const int& __a,
							const int& __b);  // 10972
						{
							tinyexr_int64 lno; // 10986
						}
					}
				}
				vector<long unsigned int, std::allocator<long unsigned int> >::operator[](
						size_type __n);  // 10942
			}
		}
	}
	_Vector_base<long unsigned int, std::allocator<long unsigned int> >::_M_get_Tp_allocator(); // 803
	_Destroy<long unsigned int*, long unsigned int>(long unsigned int* __first,
							long unsigned int* __last,
							allocator<long unsigned int> &);  // 802
	__new_allocator<long unsigned int>::deallocate(
			long unsigned int* __p,
			size_type __n);  // 215
	allocator<long unsigned int>::deallocate(
			long unsigned int* __p,
			size_t __n);  // 649
	deallocate(allocator_type& __a,
			pointer __p,
			size_type __n);  // 396
	_Vector_base<long unsigned int, std::allocator<long unsigned int> >::_M_deallocate(
			pointer __p,
			size_t __n);  // 392
	_Vector_base<long unsigned int, std::allocator<long unsigned int> >::_M_deallocate(
			pointer __p,
			size_t __n);  // 375
	allocator<long unsigned int>::~allocator(); // 139
	_Vector_impl::~_Vector_impl(); // 377
	_Vector_base<long unsigned int, std::allocator<long unsigned int> >::~_Vector_base(); // 805
	vector<long unsigned int, std::allocator<long unsigned int> >::~vector(); // 11040
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 280
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 1279
	basic_string<char, std::char_traits<char>, std::allocator<char> >::capacity(); // 449
	copy(char_type* __s1,
		const char_type* __s2,
		size_t __n);  // 453
	_S_copy(char* __d,
		const char* __s,
		size_type __n);  // 448
	_S_copy(char* __d,
		const char* __s,
		size_type __n);  // 452
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
			size_type __length);  // 272
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 273
	assign(char_type& __c1,
		const char_type& __c2);  // 273
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
			size_type __n);  // 457
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_append(
			const char* __s,
			size_type __n);  // 1585
	basic_string<char, std::char_traits<char>, std::allocator<char> >::append(
		const char* __s);  // 1488
	basic_string<char, std::char_traits<char>, std::allocator<char> >::operator+=(
			const char* __s);  // 10811
	{
		stringstream ss; // 11019
		basic_ios<char, std::char_traits<char> >::basic_ios(); // 1042
		basic_istream<char, std::char_traits<char> >::basic_istream(
				const int  __in_chrg,
				const void **  __vtt_parm);  // 1021
		basic_ostream<char, std::char_traits<char> >::basic_ostream(
				const int  __in_chrg,
				const void **  __vtt_parm);  // 1021
		basic_iostream<char, std::char_traits<char> >::basic_iostream(
				const int  __in_chrg,
				const void **  __vtt_parm);  // 1042
		basic_streambuf<char, std::char_traits<char> >::basic_streambuf(); // 136
		__new_allocator<char>::__new_allocator(
				const __new_allocator<char>  &);  // 173
		allocator<char>::allocator(
				const allocator<char>& __a);  // 209
		_Alloc_hider::_Alloc_hider(
				pointer __dat,
				allocator<char>& __a);  // 590
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 590
		allocator<char>::~allocator(); // 590
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_init_local_buf(); // 592
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
				size_type __length);  // 272
		assign(char_type& __c1,
			const char_type& __c2);  // 273
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
				size_type __n);  // 593
		basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(); // 136
		basic_stringbuf<char, std::char_traits<char>, std::allocator<char> >::basic_stringbuf(
				openmode __mode);  // 1042
		basic_stringstream<char, std::char_traits<char>, std::allocator<char> >::basic_stringstream(
					const int  __in_chrg,
					const void **  __vtt_parm);  // 11019
		basic_string<char, std::char_traits<char>, std::allocator<char> >::size(); // 422
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_check_length(
				size_type __n1,
				size_type __n2,
				const char* __s);  // 1584
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 280
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 1279
		basic_string<char, std::char_traits<char>, std::allocator<char> >::capacity(); // 449
		copy(char_type* __s1,
			const char_type* __s2,
			size_t __n);  // 453
		_S_copy(char* __d,
			const char* __s,
			size_type __n);  // 448
		_S_copy(char* __d,
			const char* __s,
			size_type __n);  // 452
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
				size_type __length);  // 272
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 273
		assign(char_type& __c1,
			const char_type& __c2);  // 273
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
				size_type __n);  // 457
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_append(
				const char* __s,
				size_type __n);  // 1585
		basic_string<char, std::char_traits<char>, std::allocator<char> >::append(
			const char* __s);  // 1488
		basic_string<char, std::char_traits<char>, std::allocator<char> >::operator+=(
				const char* __s);  // 11020
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 280
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 298
		__new_allocator<char>::deallocate(
				char* __p,
				size_type __n);  // 215
		allocator<char>::deallocate(
				char* __p,
				size_t __n);  // 649
		deallocate(allocator_type& __a,
				pointer __p,
				size_type __n);  // 305
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_destroy(
				size_type __size);  // 299
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_dispose(); // 896
		allocator<char>::~allocator(); // 197
		_Alloc_hider::~_Alloc_hider(); // 896
		basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 81
		basic_streambuf<char, std::char_traits<char> >::~basic_streambuf(); // 81
		basic_stringbuf<char, std::char_traits<char>, std::allocator<char> >::~basic_stringbuf(); // 1084
		basic_istream<char, std::char_traits<char> >::~basic_istream(
				const int  __in_chrg,
				const void **  __vtt_parm);  // 1017
		basic_ostream<char, std::char_traits<char> >::~basic_ostream(
				const int  __in_chrg,
				const void **  __vtt_parm);  // 1017
		basic_iostream<char, std::char_traits<char> >::~basic_iostream(
				const int  __in_chrg,
				const void **  __vtt_parm);  // 1084
		basic_ios<char, std::char_traits<char> >::~basic_ios(); // 1084
		basic_stringstream<char, std::char_traits<char>, std::allocator<char> >::~basic_stringstream(
					const int  __in_chrg,
					const void **  __vtt_parm);  // 11021
	}
	{
		int c; // 11027
	}
} /* size: 0, variables: 9, inline expansions: 29 (2051 bytes) */

// <047FB5C5> ../thirdparty/tinyexr/tinyexr.h:10759
// variables: 34
void DecodeChunk(EXRImage* exr_image, const EXRHeader* exr_header, const vector<long unsigned int, std::allocator<long unsigned int> >& offsets, const unsigned char* head, const size_t size, string* err)
{
	int num_channels; // 10763
	int num_scanline_blocks; // 10765
	int data_width; // 10774
	int data_height; // 10775
	size_t num_blocks; // 10802
	vector<long unsigned int, std::allocator<long unsigned int> > channel_offset_list; // 10804
	int pixel_data_size; // 10805
	size_t channel_offset; // 10806
	bool invalid_data; // 10816
	{
		stringstream ss; // 10779
	}
	{
		const int  threshold; // 10789
		{
			stringstream ss; // 10792
		}
	}
	{
		size_t num_tiles; // 10838
		{
			stringstream ss; // 10822
		}
		{
			stringstream ss; // 10831
		}
		{
			size_t tile_idx; // 10843
			{
				size_t data_size; // 10859
				const unsigned char* data_ptr; // 10860
				int tile_coordinates; // 10863
				int data_len; // 10878
			}
		}
	}
	{
		size_t total_data_len; // 10918
		const bool  total_data_len_overflown; // 10920
		{
			stringstream ss; // 10923
		}
		{
			int y; // 10939
			{
				size_t y_idx; // 10940
				{
					size_t data_size; // 10948
					const unsigned char* data_ptr; // 10949
					int line_no; // 10952
					int data_len; // 10954
					{
						int end_line_no; // 10972
						int num_lines; // 10975
						{
							tinyexr_int64 lno; // 10986
						}
					}
				}
			}
		}
	}
	{
		stringstream ss; // 11019
	}
	{
		int c; // 11027
	}
} /* size: 0, variables: 9 */

// <047FB541> ../thirdparty/tinyexr/tinyexr.h:11042
// variables: 4
void ReconstructLineOffsets(vector<long unsigned int, std::allocator<long unsigned int> >* offsets, size_t n, const unsigned char* head, const unsigned char* marker, const size_t size)
{
	{
		size_t i; // 11048
		{
			size_t offset; // 11049
			int y; // 11055
			unsigned int data_len; // 11056
		}
	}
} /* size: 0 */

// <047FB0B1> ../thirdparty/tinyexr/tinyexr.h:11076
// variables: 15
void DecodeEXRImage(EXRImage* exr_image, const EXRHeader* exr_header, const unsigned char* head, const unsigned char* marker, const size_t size, const char ** err)
{
	int num_scanline_blocks; // 11086
	int data_width; // 11095
	int data_height; // 11103
	size_t num_blocks; // 11129
	vector<long unsigned int, std::allocator<long unsigned int> > offsets; // 11159
	{
		const int  threshold; // 11117
	}
	{
		size_t num_x_tiles; // 11136
		size_t num_y_tiles; // 11142
	}
	{
		size_t y; // 11161
		{
			tinyexr_uint64 offset; // 11162
		}
	}
	{
		size_t y; // 11181
		{
			bool ret; // 11189
		}
	}
	{
		string e; // 11203
		int ret; // 11204
		{
			size_t c; // 11213
		}
	}
} /* size: 0, variables: 5 */

// <047F917F> ../thirdparty/tinyexr/tinyexr.h:11230
// variables: 34
// function calls: 120
int LoadEXR(float** out_rgba, int* width, int* height, const char* filename, const char ** err)
{
	EXRVersion exr_version; // 11237
	EXRImage exr_image; // 11238
	EXRHeader exr_header; // 11239
	int idxR; // 11282
	int idxG; // 11283
	int idxB; // 11284
	int idxA; // 11285
	{
		int ret; // 11244
		{
			const char* __end; // 713
			__new_allocator<char>::allocate(
				size_type __n,
				const void  *);  // 203
			allocator<char>::allocate(
				size_t __n);  // 614
			allocate(allocator_type& __a,
				size_type __n);  // 142
			_S_allocate(_Char_alloc_type& __a,
					size_type __n);  // 164
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_create(
					size_type& __capacity,
					size_type __old_capacity);  // 235
			_Guard::_Guard(
				basic_string<char, std::char_traits<char>, std::allocator<char> >* __s);  // 251
			copy(char_type* __s1,
				const char_type* __s2,
				size_t __n);  // 453
			_S_copy(char* __d,
				const char* __s,
				size_type __n);  // 448
			_S_copy(char* __d,
				const char* __s,
				size_type __n);  // 489
			_S_copy_chars<char const*>(char* __p,
							const char* __k1,
							const char* __k2);  // 253
			assign(char_type& __c1,
				const char_type& __c2);  // 273
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
					size_type __n);  // 257
			_Guard::~_Guard(); // 258
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_construct<char const*>(
							const char* __beg,
							const char* __end,
							forward_iterator_tag);  // 714
			length(const char_type* __s); // 713
		}
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 707
		__new_allocator<char>::__new_allocator(
				const __new_allocator<char>  &);  // 173
		allocator<char>::allocator(
				const allocator<char>& __a);  // 205
		_Alloc_hider::_Alloc_hider(
				pointer __dat,
				const allocator<char>& __a);  // 707
		basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<>(
				const char* __s,
				const allocator<char>& __a);  // 11246
		SetErrorMessage(const string& msg,
				const char ** err);  // 6979
		SetErrorMessage(const string& msg,
				const char ** err);  // 11246
		__new_allocator<char>::deallocate(
				char* __p,
				size_type __n);  // 215
		allocator<char>::deallocate(
				char* __p,
				size_t __n);  // 649
		deallocate(allocator_type& __a,
				pointer __p,
				size_type __n);  // 305
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_destroy(
				size_type __size);  // 299
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_dispose(); // 896
		allocator<char>::~allocator(); // 197
		_Alloc_hider::~_Alloc_hider(); // 896
		basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 11246
		allocator<char>::~allocator(); // 11246
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 707
		__new_allocator<char>::__new_allocator(
				const __new_allocator<char>  &);  // 173
		allocator<char>::allocator(
				const allocator<char>& __a);  // 205
		_Alloc_hider::_Alloc_hider(
				pointer __dat,
				const allocator<char>& __a);  // 707
		{
			const char* __end; // 713
			length(const char_type* __s); // 713
			__new_allocator<char>::allocate(
				size_type __n,
				const void  *);  // 203
			allocator<char>::allocate(
				size_t __n);  // 614
			allocate(allocator_type& __a,
				size_type __n);  // 142
			_S_allocate(_Char_alloc_type& __a,
					size_type __n);  // 164
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_create(
					size_type& __capacity,
					size_type __old_capacity);  // 235
			_Guard::_Guard(
				basic_string<char, std::char_traits<char>, std::allocator<char> >* __s);  // 251
			copy(char_type* __s1,
				const char_type* __s2,
				size_t __n);  // 453
			_S_copy(char* __d,
				const char* __s,
				size_type __n);  // 448
			_S_copy(char* __d,
				const char* __s,
				size_type __n);  // 489
			_S_copy_chars<char const*>(char* __p,
							const char* __k1,
							const char* __k2);  // 253
			assign(char_type& __c1,
				const char_type& __c2);  // 273
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
					size_type __n);  // 257
			_Guard::~_Guard(); // 258
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_construct<char const*>(
							const char* __beg,
							const char* __end,
							forward_iterator_tag);  // 714
		}
		basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<>(
				const char* __s,
				const allocator<char>& __a);  // 11252
		SetErrorMessage(const string& msg,
				const char ** err);  // 6979
		SetErrorMessage(const string& msg,
				const char ** err);  // 11251
		__new_allocator<char>::deallocate(
				char* __p,
				size_type __n);  // 215
		allocator<char>::deallocate(
				char* __p,
				size_t __n);  // 649
		deallocate(allocator_type& __a,
				pointer __p,
				size_type __n);  // 305
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_destroy(
				size_type __size);  // 299
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_dispose(); // 896
		allocator<char>::~allocator(); // 197
		_Alloc_hider::~_Alloc_hider(); // 896
		basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 11252
		allocator<char>::~allocator(); // 11252
	}
	{
		int ret; // 11259
	}
	{
		int i; // 11267
	}
	{
		int ret; // 11274
	}
	{
		int c; // 11286
	}
	{
		int it; // 11306
		{
			int j; // 11307
			{
				int i; // 11308
				{
					const int  ii; // 11309
					const int  jj; // 11311
					const int  idx; // 11313
					const int  srcIdx; // 11322
					unsigned char** src; // 11323
				}
			}
		}
	}
	{
		int i; // 11336
		{
			const float  val; // 11337
		}
	}
	{
		int it; // 11373
		{
			int j; // 11374
			{
				int i; // 11375
				{
					const int  ii; // 11376
					const int  jj; // 11378
					const int  idx; // 11380
					const int  srcIdx; // 11389
					unsigned char** src; // 11390
				}
			}
		}
	}
	{
		int i; // 11407
	}
	InitEXRImage(EXRImage* exr_image); // 11241
	memset(void* __dest,
		int __ch,
		size_t __len);  // 12713
	InitEXRHeader(EXRHeader* exr_header); // 12708
	InitEXRHeader(EXRHeader* exr_header); // 11240
	SetErrorMessage(const string& msg,
			const char ** err);  // 11348
	SetErrorMessage(const string& msg,
			const char ** err);  // 11356
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 298
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_dispose(); // 896
	basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 11356
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 280
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 298
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_dispose(); // 896
	basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 11363
	__new_allocator<char>::deallocate(
			char* __p,
			size_type __n);  // 215
	allocator<char>::deallocate(
			char* __p,
			size_t __n);  // 649
	deallocate(allocator_type& __a,
			pointer __p,
			size_type __n);  // 305
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_destroy(
			size_type __size);  // 299
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_dispose(); // 896
	allocator<char>::~allocator(); // 197
	_Alloc_hider::~_Alloc_hider(); // 896
	basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 11348
	allocator<char>::~allocator(); // 11348
	SetErrorMessage(const string& msg,
			const char ** err);  // 6979
	SetErrorMessage(const string& msg,
			const char ** err);  // 11363
	FreeEXRImage(EXRImage* exr_image); // 11428
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 707
	__new_allocator<char>::__new_allocator(
			const __new_allocator<char>  &);  // 173
	allocator<char>::allocator(
			const allocator<char>& __a);  // 205
	_Alloc_hider::_Alloc_hider(
			pointer __dat,
			const allocator<char>& __a);  // 707
	{
		const char* __end; // 713
		length(const char_type* __s); // 713
		__new_allocator<char>::allocate(
			size_type __n,
			const void  *);  // 203
		allocator<char>::allocate(
			size_t __n);  // 614
		allocate(allocator_type& __a,
			size_type __n);  // 142
		_S_allocate(_Char_alloc_type& __a,
				size_type __n);  // 164
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_create(
				size_type& __capacity,
				size_type __old_capacity);  // 235
		_Guard::_Guard(
			basic_string<char, std::char_traits<char>, std::allocator<char> >* __s);  // 251
		copy(char_type* __s1,
			const char_type* __s2,
			size_t __n);  // 453
		_S_copy(char* __d,
			const char* __s,
			size_type __n);  // 448
		_S_copy(char* __d,
			const char* __s,
			size_type __n);  // 489
		_S_copy_chars<char const*>(char* __p,
						const char* __k1,
						const char* __k2);  // 253
		assign(char_type& __c1,
			const char_type& __c2);  // 273
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
				size_type __n);  // 257
		_Guard::~_Guard(); // 258
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_construct<char const*>(
						const char* __beg,
						const char* __end,
						forward_iterator_tag);  // 714
	}
	basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<>(
			const char* __s,
			const allocator<char>& __a);  // 11233
	SetErrorMessage(const string& msg,
			const char ** err);  // 6979
	SetErrorMessage(const string& msg,
			const char ** err);  // 11233
	__new_allocator<char>::deallocate(
			char* __p,
			size_type __n);  // 215
	allocator<char>::deallocate(
			char* __p,
			size_t __n);  // 649
	deallocate(allocator_type& __a,
			pointer __p,
			size_type __n);  // 305
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_destroy(
			size_type __size);  // 299
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_dispose(); // 896
	allocator<char>::~allocator(); // 197
	_Alloc_hider::~_Alloc_hider(); // 896
	basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 11233
	allocator<char>::~allocator(); // 11233
} /* size: 0, variables: 7, inline expansions: 43 (0 bytes) */

// <047F90F0> ../thirdparty/tinyexr/tinyexr.h:11433
// variables: 2
int IsEXR(const char* filename)
{
	EXRVersion exr_version; // 11434
	int ret; // 11436
} /* size: 0, variables: 2 */

// <047F571F> ../thirdparty/tinyexr/tinyexr.h:11485
// variables: 31
// function calls: 85
int LoadEXRFromMemory(float** out_rgba, int* width, int* height, const unsigned char* memory, size_t size, const char ** err)
{
	EXRVersion exr_version; // 11493
	EXRImage exr_image; // 11494
	EXRHeader exr_header; // 11495
	int ret; // 11499
	int idxR; // 11524
	int idxG; // 11525
	int idxB; // 11526
	int idxA; // 11527
	{
		int i; // 11511
	}
	{
		int c; // 11528
	}
	{
		int it; // 11549
		{
			int j; // 11550
			{
				int i; // 11551
				{
					const int  ii; // 11552
					const int  jj; // 11554
					const int  idx; // 11556
					const int  srcIdx; // 11565
					unsigned char** src; // 11566
				}
			}
		}
	}
	{
		int i; // 11579
		{
			const float  val; // 11580
		}
	}
	{
		int it; // 11615
		{
			int j; // 11616
			{
				int i; // 11617
				{
					const int  ii; // 11618
					const int  jj; // 11620
					const int  idx; // 11622
					const int  srcIdx; // 11631
					unsigned char** src; // 11632
				}
			}
		}
	}
	{
		int i; // 11648
	}
	memset(void* __dest,
		int __ch,
		size_t __len);  // 12713
	InitEXRHeader(EXRHeader* exr_header); // 12708
	InitEXRHeader(EXRHeader* exr_header); // 11497
	InitEXRImage(EXRImage* exr_image); // 11517
	SetErrorMessage(const string& msg,
			const char ** err);  // 11599
	allocator<char>::~allocator(); // 197
	_Alloc_hider::~_Alloc_hider(); // 896
	basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 11599
	allocator<char>::~allocator(); // 11599
	SetErrorMessage(const string& msg,
			const char ** err);  // 11605
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 280
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 298
	__new_allocator<char>::deallocate(
			char* __p,
			size_type __n);  // 215
	allocator<char>::deallocate(
			char* __p,
			size_t __n);  // 649
	deallocate(allocator_type& __a,
			pointer __p,
			size_type __n);  // 305
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_destroy(
			size_type __size);  // 299
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_dispose(); // 896
	allocator<char>::~allocator(); // 197
	_Alloc_hider::~_Alloc_hider(); // 896
	basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 11605
	allocator<char>::~allocator(); // 11605
	FreeEXRImage(EXRImage* exr_image); // 11669
	{
		const char* __end; // 713
		__new_allocator<char>::allocate(
			size_type __n,
			const void  *);  // 203
		allocator<char>::allocate(
			size_t __n);  // 614
		allocate(allocator_type& __a,
			size_type __n);  // 142
		_S_allocate(_Char_alloc_type& __a,
				size_type __n);  // 164
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_create(
				size_type& __capacity,
				size_type __old_capacity);  // 235
		_Guard::_Guard(
			basic_string<char, std::char_traits<char>, std::allocator<char> >* __s);  // 251
		copy(char_type* __s1,
			const char_type* __s2,
			size_t __n);  // 453
		_S_copy(char* __d,
			const char* __s,
			size_type __n);  // 448
		_S_copy(char* __d,
			const char* __s,
			size_type __n);  // 489
		_S_copy_chars<char const*>(char* __p,
						const char* __k1,
						const char* __k2);  // 253
		assign(char_type& __c1,
			const char_type& __c2);  // 273
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
				size_type __n);  // 257
		_Guard::~_Guard(); // 258
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_construct<char const*>(
						const char* __beg,
						const char* __end,
						forward_iterator_tag);  // 714
		length(const char_type* __s); // 713
	}
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 707
	__new_allocator<char>::__new_allocator(
			const __new_allocator<char>  &);  // 173
	allocator<char>::allocator(
			const allocator<char>& __a);  // 205
	_Alloc_hider::_Alloc_hider(
			pointer __dat,
			const allocator<char>& __a);  // 707
	basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<>(
			const char* __s,
			const allocator<char>& __a);  // 11501
	SetErrorMessage(const string& msg,
			const char ** err);  // 6979
	SetErrorMessage(const string& msg,
			const char ** err);  // 11501
	__new_allocator<char>::deallocate(
			char* __p,
			size_type __n);  // 215
	allocator<char>::deallocate(
			char* __p,
			size_t __n);  // 649
	deallocate(allocator_type& __a,
			pointer __p,
			size_type __n);  // 305
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_destroy(
			size_type __size);  // 299
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_dispose(); // 896
	allocator<char>::~allocator(); // 197
	_Alloc_hider::~_Alloc_hider(); // 896
	basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 11501
	allocator<char>::~allocator(); // 11501
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 707
	__new_allocator<char>::__new_allocator(
			const __new_allocator<char>  &);  // 173
	allocator<char>::allocator(
			const allocator<char>& __a);  // 205
	_Alloc_hider::_Alloc_hider(
			pointer __dat,
			const allocator<char>& __a);  // 707
	{
		const char* __end; // 713
		length(const char_type* __s); // 713
		__new_allocator<char>::allocate(
			size_type __n,
			const void  *);  // 203
		allocator<char>::allocate(
			size_t __n);  // 614
		allocate(allocator_type& __a,
			size_type __n);  // 142
		_S_allocate(_Char_alloc_type& __a,
				size_type __n);  // 164
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_create(
				size_type& __capacity,
				size_type __old_capacity);  // 235
		_Guard::_Guard(
			basic_string<char, std::char_traits<char>, std::allocator<char> >* __s);  // 251
		copy(char_type* __s1,
			const char_type* __s2,
			size_t __n);  // 453
		_S_copy(char* __d,
			const char* __s,
			size_type __n);  // 448
		_S_copy(char* __d,
			const char* __s,
			size_type __n);  // 489
		_S_copy_chars<char const*>(char* __p,
						const char* __k1,
						const char* __k2);  // 253
		assign(char_type& __c1,
			const char_type& __c2);  // 273
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
				size_type __n);  // 257
		_Guard::~_Guard(); // 258
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_construct<char const*>(
						const char* __beg,
						const char* __end,
						forward_iterator_tag);  // 714
	}
	basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<>(
			const char* __s,
			const allocator<char>& __a);  // 11489
	SetErrorMessage(const string& msg,
			const char ** err);  // 6979
	SetErrorMessage(const string& msg,
			const char ** err);  // 11489
	__new_allocator<char>::deallocate(
			char* __p,
			size_type __n);  // 215
	allocator<char>::deallocate(
			char* __p,
			size_t __n);  // 649
	deallocate(allocator_type& __a,
			pointer __p,
			size_type __n);  // 305
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_destroy(
			size_type __size);  // 299
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_dispose(); // 896
	allocator<char>::~allocator(); // 197
	_Alloc_hider::~_Alloc_hider(); // 896
	basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 11489
	allocator<char>::~allocator(); // 11489
} /* size: 0, variables: 8, inline expansions: 55 (0 bytes) */

// <047F3295> ../thirdparty/tinyexr/tinyexr.h:11674
// variables: 8
// function calls: 152
int LoadEXRImageFromFile(EXRImage* exr_image, const EXRHeader* exr_header, const char* filename, const char ** err)
{
	FILE* fp; // 11685
	size_t filesize; // 11692
	vector<unsigned char, std::allocator<unsigned char> > buf; // 11704
	{
		size_t ret; // 11706
		fread(void* __ptr,
			size_t __size,
			size_t __n,
			FILE* __stream);  // 11707
	}
	__new_allocator<unsigned char>::__new_allocator(
			const __new_allocator<unsigned char>  &);  // 173
	allocator<unsigned char>::allocator(
			const allocator<unsigned char>& __a);  // 2210
	allocator<unsigned char>::~allocator(); // 2210
	_S_check_init_len(size_type __n,
				const allocator_type& __a);  // 587
	__new_allocator<unsigned char>::__new_allocator(
			const __new_allocator<unsigned char>  &);  // 173
	allocator<unsigned char>::allocator(
			const allocator<unsigned char>& __a);  // 153
	_Vector_impl_data::_Vector_impl_data(); // 153
	_Vector_impl::_Vector_impl(
			const _Tp_alloc_type& __a);  // 340
	__new_allocator<unsigned char>::allocate(
		size_type __n,
		const void  *);  // 203
	allocator<unsigned char>::allocate(
		size_t __n);  // 614
	allocate(allocator_type& __a,
		size_type __n);  // 387
	_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_allocate(
			size_t __n);  // 405
	_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_create_storage(
				size_t __n);  // 341
	_Vector_base<unsigned char, std::allocator<unsigned char> >::_Vector_base(
			size_t __n,
			const allocator_type& __a);  // 587
	{
		value_type* __val; // 892
		{
			const size_t  __len; // 950
		}
		__fill_a1<unsigned char, unsigned char>(unsigned char* __first,
							unsigned char* __last,
							const unsigned char& __x);  // 979
		__fill_a<unsigned char*, unsigned char>(unsigned char* __first,
							unsigned char* __last,
							const unsigned char& __value);  // 1148
		__fill_n_a<unsigned char*, long unsigned int, unsigned char>(unsigned char* __first,
										long unsigned int __n,
										const unsigned char& __value,
										random_access_iterator_tag);  // 1178
		fill_n<unsigned char*, long unsigned int, unsigned char>(unsigned char* __first,
									long unsigned int __n,
									const unsigned char& __value);  // 896
		_Construct<unsigned char>(unsigned char* __p); // 894
	}
	__uninit_default_n<unsigned char*, long unsigned int>(unsigned char* __first,
								long unsigned int __n);  // 888
	__uninit_default_n<unsigned char*, long unsigned int>(unsigned char* __first,
								long unsigned int __n);  // 947
	__uninitialized_default_n<unsigned char*, long unsigned int>(unsigned char* __first,
									long unsigned int __n);  // 1002
	__uninitialized_default_n_a<unsigned char*, long unsigned int, unsigned char>(unsigned char* __first,
											long unsigned int __n,
											allocator<unsigned char> &);  // 2011
	vector<unsigned char, std::allocator<unsigned char> >::_M_default_initialize(
				size_type __n);  // 588
	vector<unsigned char, std::allocator<unsigned char> >::vector(
		size_type __n,
		const allocator_type& __a);  // 11704
	allocator<unsigned char>::~allocator(); // 11704
	__new_allocator<unsigned char>::deallocate(
			unsigned char* __p,
			size_type __n);  // 215
	allocator<unsigned char>::deallocate(
			unsigned char* __p,
			size_t __n);  // 649
	deallocate(allocator_type& __a,
			pointer __p,
			size_type __n);  // 396
	_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_deallocate(
			pointer __p,
			size_t __n);  // 375
	allocator<unsigned char>::~allocator(); // 139
	_Vector_impl::~_Vector_impl(); // 377
	_Vector_base<unsigned char, std::allocator<unsigned char> >::~_Vector_base(); // 805
	_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_get_Tp_allocator(); // 803
	_Destroy<unsigned char*, unsigned char>(unsigned char* __first,
						unsigned char* __last,
						allocator<unsigned char> &);  // 802
	vector<unsigned char, std::allocator<unsigned char> >::~vector(); // 11715
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 707
	__new_allocator<char>::__new_allocator(
			const __new_allocator<char>  &);  // 173
	allocator<char>::allocator(
			const allocator<char>& __a);  // 205
	_Alloc_hider::_Alloc_hider(
			pointer __dat,
			const allocator<char>& __a);  // 707
	{
		const char* __end; // 713
		length(const char_type* __s); // 713
		_Guard::_Guard(
			basic_string<char, std::char_traits<char>, std::allocator<char> >* __s);  // 251
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 253
		copy(char_type* __s1,
			const char_type* __s2,
			size_t __n);  // 453
		_S_copy(char* __d,
			const char* __s,
			size_type __n);  // 448
		assign(char_type& __c1,
			const char_type& __c2);  // 451
		_S_copy(char* __d,
			const char* __s,
			size_type __n);  // 489
		_S_copy_chars<char const*>(char* __p,
						const char* __k1,
						const char* __k2);  // 253
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
				size_type __length);  // 272
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 273
		assign(char_type& __c1,
			const char_type& __c2);  // 273
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
				size_type __n);  // 257
		_Guard::~_Guard(); // 258
		__new_allocator<char>::allocate(
			size_type __n,
			const void  *);  // 203
		allocator<char>::allocate(
			size_t __n);  // 614
		allocate(allocator_type& __a,
			size_type __n);  // 142
		_S_allocate(_Char_alloc_type& __a,
				size_type __n);  // 164
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_create(
				size_type& __capacity,
				size_type __old_capacity);  // 235
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_capacity(
				size_type __capacity);  // 236
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
			pointer __p);  // 235
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_construct<char const*>(
						const char* __beg,
						const char* __end,
						forward_iterator_tag);  // 714
	}
	basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<>(
			const char* __s,
			const allocator<char>& __a);  // 11699
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_get_allocator(); // 743
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 743
	__new_allocator<char>::__new_allocator(
			const __new_allocator<char>  &);  // 173
	allocator<char>::allocator(
			const allocator<char>& __a);  // 209
	_Alloc_hider::_Alloc_hider(
			pointer __dat,
			allocator<char>& __a);  // 743
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 280
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 745
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 753
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
		pointer __p);  // 753
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_capacity(
			size_type __capacity);  // 754
	basic_string<char, std::char_traits<char>, std::allocator<char> >::size(); // 1176
	basic_string<char, std::char_traits<char>, std::allocator<char> >::length(); // 760
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
			size_type __length);  // 760
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
		pointer __p);  // 761
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
			size_type __length);  // 272
	assign(char_type& __c1,
		const char_type& __c2);  // 273
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
			size_type __n);  // 762
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_use_local_data(); // 761
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_init_local_buf(); // 747
	basic_string<char, std::char_traits<char>, std::allocator<char> >::length(); // 749
	copy(char_type* __s1,
		const char_type* __s2,
		size_t __n);  // 748
	basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(
			basic_string<char, std::char_traits<char>, std::allocator<char> >& __str);  // 3963
	operator+<char, std::char_traits<char>, std::allocator<char> >(const char* __lhs,
									basic_string<char, std::char_traits<char>, std::allocator<char> >& __rhs);  // 11699
	SetErrorMessage(const string& msg,
			const char ** err);  // 6979
	SetErrorMessage(const string& msg,
			const char ** err);  // 11699
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 280
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 298
	__new_allocator<char>::deallocate(
			char* __p,
			size_type __n);  // 215
	allocator<char>::deallocate(
			char* __p,
			size_t __n);  // 649
	deallocate(allocator_type& __a,
			pointer __p,
			size_type __n);  // 305
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_destroy(
			size_type __size);  // 299
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_dispose(); // 896
	allocator<char>::~allocator(); // 197
	_Alloc_hider::~_Alloc_hider(); // 896
	basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 11699
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 280
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 298
	__new_allocator<char>::deallocate(
			char* __p,
			size_type __n);  // 215
	allocator<char>::deallocate(
			char* __p,
			size_t __n);  // 649
	deallocate(allocator_type& __a,
			pointer __p,
			size_type __n);  // 305
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_destroy(
			size_type __size);  // 299
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_dispose(); // 896
	allocator<char>::~allocator(); // 197
	_Alloc_hider::~_Alloc_hider(); // 896
	basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 11699
	allocator<char>::~allocator(); // 11699
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 707
	__new_allocator<char>::__new_allocator(
			const __new_allocator<char>  &);  // 173
	allocator<char>::allocator(
			const allocator<char>& __a);  // 205
	_Alloc_hider::_Alloc_hider(
			pointer __dat,
			const allocator<char>& __a);  // 707
	{
		const char* __end; // 713
		length(const char_type* __s); // 713
		__new_allocator<char>::allocate(
			size_type __n,
			const void  *);  // 203
		allocator<char>::allocate(
			size_t __n);  // 614
		allocate(allocator_type& __a,
			size_type __n);  // 142
		_S_allocate(_Char_alloc_type& __a,
				size_type __n);  // 164
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_create(
				size_type& __capacity,
				size_type __old_capacity);  // 235
		_Guard::_Guard(
			basic_string<char, std::char_traits<char>, std::allocator<char> >* __s);  // 251
		copy(char_type* __s1,
			const char_type* __s2,
			size_t __n);  // 453
		_S_copy(char* __d,
			const char* __s,
			size_type __n);  // 448
		_S_copy(char* __d,
			const char* __s,
			size_type __n);  // 489
		_S_copy_chars<char const*>(char* __p,
						const char* __k1,
						const char* __k2);  // 253
		assign(char_type& __c1,
			const char_type& __c2);  // 273
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
				size_type __n);  // 257
		_Guard::~_Guard(); // 258
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_construct<char const*>(
						const char* __beg,
						const char* __end,
						forward_iterator_tag);  // 714
	}
	basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<>(
			const char* __s,
			const allocator<char>& __a);  // 11677
	SetErrorMessage(const string& msg,
			const char ** err);  // 6979
	SetErrorMessage(const string& msg,
			const char ** err);  // 11677
	__new_allocator<char>::deallocate(
			char* __p,
			size_type __n);  // 215
	allocator<char>::deallocate(
			char* __p,
			size_t __n);  // 649
	deallocate(allocator_type& __a,
			pointer __p,
			size_type __n);  // 305
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_destroy(
			size_type __size);  // 299
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_dispose(); // 896
	allocator<char>::~allocator(); // 197
	_Alloc_hider::~_Alloc_hider(); // 896
	basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 11677
	allocator<char>::~allocator(); // 11677
	operator+<char, std::char_traits<char>, std::allocator<char> >(const char* __lhs,
									basic_string<char, std::char_traits<char>, std::allocator<char> >& __rhs);  // 11688
	SetErrorMessage(const string& msg,
			const char ** err);  // 11688
	allocator<char>::~allocator(); // 197
	_Alloc_hider::~_Alloc_hider(); // 896
	basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 11688
	allocator<char>::~allocator(); // 197
	_Alloc_hider::~_Alloc_hider(); // 896
	basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 11688
	allocator<char>::~allocator(); // 11688
} /* size: 0, variables: 3, inline expansions: 110 (0 bytes) */

// <047DAD71> ../thirdparty/tinyexr/tinyexr.h:12246
// variables: 7
// function calls: 98
int SaveEXRImageToFile(const EXRImage* exr_image, const EXRHeader* exr_header, const char* filename, const char ** err)
{
	FILE* fp; // 12274
	unsigned char* mem; // 12281
	size_t mem_size; // 12282
	size_t written_size; // 12287
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 707
	__new_allocator<char>::__new_allocator(
			const __new_allocator<char>  &);  // 173
	allocator<char>::allocator(
			const allocator<char>& __a);  // 205
	_Alloc_hider::_Alloc_hider(
			pointer __dat,
			const allocator<char>& __a);  // 707
	{
		const char* __end; // 713
		length(const char_type* __s); // 713
		__new_allocator<char>::allocate(
			size_type __n,
			const void  *);  // 203
		allocator<char>::allocate(
			size_t __n);  // 614
		allocate(allocator_type& __a,
			size_type __n);  // 142
		_S_allocate(_Char_alloc_type& __a,
				size_type __n);  // 164
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_create(
				size_type& __capacity,
				size_type __old_capacity);  // 235
		_Guard::_Guard(
			basic_string<char, std::char_traits<char>, std::allocator<char> >* __s);  // 251
		copy(char_type* __s1,
			const char_type* __s2,
			size_t __n);  // 453
		_S_copy(char* __d,
			const char* __s,
			size_type __n);  // 448
		_S_copy(char* __d,
			const char* __s,
			size_type __n);  // 489
		_S_copy_chars<char const*>(char* __p,
						const char* __k1,
						const char* __k2);  // 253
		assign(char_type& __c1,
			const char_type& __c2);  // 273
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
				size_type __n);  // 257
		_Guard::~_Guard(); // 258
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_construct<char const*>(
						const char* __beg,
						const char* __end,
						forward_iterator_tag);  // 714
	}
	basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<>(
			const char* __s,
			const allocator<char>& __a);  // 12296
	SetErrorMessage(const string& msg,
			const char ** err);  // 6979
	SetErrorMessage(const string& msg,
			const char ** err);  // 12296
	__new_allocator<char>::deallocate(
			char* __p,
			size_type __n);  // 215
	allocator<char>::deallocate(
			char* __p,
			size_t __n);  // 649
	deallocate(allocator_type& __a,
			pointer __p,
			size_type __n);  // 305
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_destroy(
			size_type __size);  // 299
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_dispose(); // 896
	allocator<char>::~allocator(); // 197
	_Alloc_hider::~_Alloc_hider(); // 896
	basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 12296
	allocator<char>::~allocator(); // 12296
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 707
	__new_allocator<char>::__new_allocator(
			const __new_allocator<char>  &);  // 173
	allocator<char>::allocator(
			const allocator<char>& __a);  // 205
	_Alloc_hider::_Alloc_hider(
			pointer __dat,
			const allocator<char>& __a);  // 707
	{
		const char* __end; // 713
		length(const char_type* __s); // 713
		__new_allocator<char>::allocate(
			size_type __n,
			const void  *);  // 203
		allocator<char>::allocate(
			size_t __n);  // 614
		allocate(allocator_type& __a,
			size_type __n);  // 142
		_S_allocate(_Char_alloc_type& __a,
				size_type __n);  // 164
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_create(
				size_type& __capacity,
				size_type __old_capacity);  // 235
		_Guard::_Guard(
			basic_string<char, std::char_traits<char>, std::allocator<char> >* __s);  // 251
		copy(char_type* __s1,
			const char_type* __s2,
			size_t __n);  // 453
		_S_copy(char* __d,
			const char* __s,
			size_type __n);  // 448
		_S_copy(char* __d,
			const char* __s,
			size_type __n);  // 489
		_S_copy_chars<char const*>(char* __p,
						const char* __k1,
						const char* __k2);  // 253
		assign(char_type& __c1,
			const char_type& __c2);  // 273
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
				size_type __n);  // 257
		_Guard::~_Guard(); // 258
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_construct<char const*>(
						const char* __beg,
						const char* __end,
						forward_iterator_tag);  // 714
	}
	basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<>(
			const char* __s,
			const allocator<char>& __a);  // 12250
	SetErrorMessage(const string& msg,
			const char ** err);  // 6979
	SetErrorMessage(const string& msg,
			const char ** err);  // 12250
	__new_allocator<char>::deallocate(
			char* __p,
			size_type __n);  // 215
	allocator<char>::deallocate(
			char* __p,
			size_t __n);  // 649
	deallocate(allocator_type& __a,
			pointer __p,
			size_type __n);  // 305
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_destroy(
			size_type __size);  // 299
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_dispose(); // 896
	allocator<char>::~allocator(); // 197
	_Alloc_hider::~_Alloc_hider(); // 896
	basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 12250
	allocator<char>::~allocator(); // 12250
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 707
	__new_allocator<char>::__new_allocator(
			const __new_allocator<char>  &);  // 173
	allocator<char>::allocator(
			const allocator<char>& __a);  // 205
	_Alloc_hider::_Alloc_hider(
			pointer __dat,
			const allocator<char>& __a);  // 707
	{
		const char* __end; // 713
		length(const char_type* __s); // 713
		__new_allocator<char>::allocate(
			size_type __n,
			const void  *);  // 203
		allocator<char>::allocate(
			size_t __n);  // 614
		allocate(allocator_type& __a,
			size_type __n);  // 142
		_S_allocate(_Char_alloc_type& __a,
				size_type __n);  // 164
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_create(
				size_type& __capacity,
				size_type __old_capacity);  // 235
		_Guard::_Guard(
			basic_string<char, std::char_traits<char>, std::allocator<char> >* __s);  // 251
		copy(char_type* __s1,
			const char_type* __s2,
			size_t __n);  // 453
		_S_copy(char* __d,
			const char* __s,
			size_type __n);  // 448
		_S_copy(char* __d,
			const char* __s,
			size_type __n);  // 489
		_S_copy_chars<char const*>(char* __p,
						const char* __k1,
						const char* __k2);  // 253
		assign(char_type& __c1,
			const char_type& __c2);  // 273
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
				size_type __n);  // 257
		_Guard::~_Guard(); // 258
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_construct<char const*>(
						const char* __beg,
						const char* __end,
						forward_iterator_tag);  // 714
	}
	basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<>(
			const char* __s,
			const allocator<char>& __a);  // 12264
	SetErrorMessage(const string& msg,
			const char ** err);  // 6979
	SetErrorMessage(const string& msg,
			const char ** err);  // 12264
	__new_allocator<char>::deallocate(
			char* __p,
			size_type __n);  // 215
	allocator<char>::deallocate(
			char* __p,
			size_t __n);  // 649
	deallocate(allocator_type& __a,
			pointer __p,
			size_type __n);  // 305
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_destroy(
			size_type __size);  // 299
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_dispose(); // 896
	allocator<char>::~allocator(); // 197
	_Alloc_hider::~_Alloc_hider(); // 896
	basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 12264
	allocator<char>::~allocator(); // 12264
	SetErrorMessage(const string& msg,
			const char ** err);  // 12277
	allocator<char>::~allocator(); // 197
	_Alloc_hider::~_Alloc_hider(); // 896
	basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 12277
	allocator<char>::~allocator(); // 12277
} /* size: 0, variables: 4, inline expansions: 53 (0 bytes) */

// <047CF91D> ../thirdparty/tinyexr/tinyexr.h:12303
// variables: 89
// function calls: 764
int LoadDeepEXR(DeepImage* deep_image, const char* filename, const char ** err)
{
	FILE* fp; // 12318
	size_t filesize; // 12326
	vector<char, std::allocator<char> > buf; // 12339
	const char* head; // 12348
	const char* marker; // 12349
	int dx; // 12374
	int dy; // 12375
	int dw; // 12376
	int dh; // 12377
	int num_scanline_blocks; // 12378
	int compression_type; // 12379
	int num_channels; // 12380
	vector<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> > channels; // 12381
	size_t size; // 12384
	int data_width; // 12473
	int data_height; // 12474
	vector<float, std::allocator<float> > image; // 12476
	int num_blocks; // 12480
	vector<long int, std::allocator<long int> > offsets; // 12485
	{
		size_t ret; // 12341
		fread(void* __ptr,
			size_t __size,
			size_t __n,
			FILE* __stream);  // 12342
	}
	{
		const char  header; // 12353
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 707
		__new_allocator<char>::__new_allocator(
				const __new_allocator<char>  &);  // 173
		allocator<char>::allocator(
				const allocator<char>& __a);  // 205
		_Alloc_hider::_Alloc_hider(
				pointer __dat,
				const allocator<char>& __a);  // 707
		{
			const char* __end; // 713
			length(const char_type* __s); // 713
			__new_allocator<char>::allocate(
				size_type __n,
				const void  *);  // 203
			allocator<char>::allocate(
				size_t __n);  // 614
			allocate(allocator_type& __a,
				size_type __n);  // 142
			_S_allocate(_Char_alloc_type& __a,
					size_type __n);  // 164
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_create(
					size_type& __capacity,
					size_type __old_capacity);  // 235
			_Guard::_Guard(
				basic_string<char, std::char_traits<char>, std::allocator<char> >* __s);  // 251
			copy(char_type* __s1,
				const char_type* __s2,
				size_t __n);  // 453
			_S_copy(char* __d,
				const char* __s,
				size_type __n);  // 448
			_S_copy(char* __d,
				const char* __s,
				size_type __n);  // 489
			_S_copy_chars<char const*>(char* __p,
							const char* __k1,
							const char* __k2);  // 253
			assign(char_type& __c1,
				const char_type& __c2);  // 273
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
					size_type __n);  // 257
			_Guard::~_Guard(); // 258
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_construct<char const*>(
							const char* __beg,
							const char* __end,
							forward_iterator_tag);  // 714
		}
		basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<>(
				const char* __s,
				const allocator<char>& __a);  // 12356
		SetErrorMessage(const string& msg,
				const char ** err);  // 6979
		SetErrorMessage(const string& msg,
				const char ** err);  // 12356
		__new_allocator<char>::deallocate(
				char* __p,
				size_type __n);  // 215
		allocator<char>::deallocate(
				char* __p,
				size_t __n);  // 649
		deallocate(allocator_type& __a,
				pointer __p,
				size_type __n);  // 305
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_destroy(
				size_type __size);  // 299
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_dispose(); // 896
		allocator<char>::~allocator(); // 197
		_Alloc_hider::~_Alloc_hider(); // 896
		basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 12356
		allocator<char>::~allocator(); // 12356
	}
	{
		string attr_name; // 12394
		string attr_type; // 12395
		vector<unsigned char, std::allocator<unsigned char> > data; // 12396
		size_t marker_size; // 12397
		{
			stringstream ss; // 12400
			basic_ios<char, std::char_traits<char> >::basic_ios(); // 1042
			basic_istream<char, std::char_traits<char> >::basic_istream(
					const int  __in_chrg,
					const void **  __vtt_parm);  // 1021
			basic_ostream<char, std::char_traits<char> >::basic_ostream(
					const int  __in_chrg,
					const void **  __vtt_parm);  // 1021
			basic_iostream<char, std::char_traits<char> >::basic_iostream(
					const int  __in_chrg,
					const void **  __vtt_parm);  // 1042
			basic_streambuf<char, std::char_traits<char> >::basic_streambuf(); // 136
			__new_allocator<char>::__new_allocator(
					const __new_allocator<char>  &);  // 173
			allocator<char>::allocator(
					const allocator<char>& __a);  // 209
			_Alloc_hider::_Alloc_hider(
					pointer __dat,
					allocator<char>& __a);  // 590
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 590
			allocator<char>::~allocator(); // 590
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_init_local_buf(); // 592
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
					size_type __length);  // 272
			assign(char_type& __c1,
				const char_type& __c2);  // 273
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
					size_type __n);  // 593
			basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(); // 136
			basic_stringbuf<char, std::char_traits<char>, std::allocator<char> >::basic_stringbuf(
					openmode __mode);  // 1042
			basic_stringstream<char, std::char_traits<char>, std::allocator<char> >::basic_stringstream(
						const int  __in_chrg,
						const void **  __vtt_parm);  // 12400
			operator<< <std::char_traits<char> >(basic_ostream<char, std::char_traits<char> >& __out,
								const char* __s);  // 12401
			__new_allocator<char>::__new_allocator(
					const __new_allocator<char>  &);  // 173
			allocator<char>::allocator(
					const allocator<char>& __a);  // 2908
			basic_string<char, std::char_traits<char>, std::allocator<char> >::get_allocator(); // 254
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 602
			__new_allocator<char>::__new_allocator(
					const __new_allocator<char>  &);  // 173
			allocator<char>::allocator(
					const allocator<char>& __a);  // 205
			_Alloc_hider::_Alloc_hider(
					pointer __dat,
					const allocator<char>& __a);  // 602
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
					size_type __length);  // 272
			assign(char_type& __c1,
				const char_type& __c2);  // 273
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
					size_type __n);  // 605
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_init_local_buf(); // 604
			basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(
					const allocator<char>& __a);  // 254
			{
				char_type* __hi; // 255
				{
					char_type* __pptr; // 447
					basic_streambuf<char, std::char_traits<char> >::pptr(); // 447
					{
						char_type* __egptr; // 449
						basic_streambuf<char, std::char_traits<char> >::egptr(); // 449
					}
				}
				basic_stringbuf<char, std::char_traits<char>, std::allocator<char> >::_M_high_mark(); // 255
				basic_streambuf<char, std::char_traits<char> >::pbase(); // 256
				{
					const size_type  __rsize; // 313
					const size_type  __capacity; // 314
					basic_string<char, std::char_traits<char>, std::allocator<char> >::size(); // 1176
					basic_string<char, std::char_traits<char>, std::allocator<char> >::length(); // 313
					{
						size_type __new_capacity; // 318
						pointer __tmp; // 319
						__new_allocator<char>::allocate(
							size_type __n,
							const void  *);  // 203
						allocator<char>::allocate(
							size_t __n);  // 614
						allocate(allocator_type& __a,
							size_type __n);  // 142
						_S_allocate(_Char_alloc_type& __a,
								size_type __n);  // 164
						basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_create(
								size_type& __capacity,
								size_type __old_capacity);  // 319
						basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_capacity(
								size_type __capacity);  // 322
						basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
							pointer __p);  // 321
					}
					assign(char_type& __c1,
						const char_type& __c2);  // 451
					copy(char_type* __s1,
						const char_type* __s2,
						size_t __n);  // 453
					_S_copy(char* __d,
						const char* __s,
						size_type __n);  // 448
					_S_copy(char* __d,
						const char* __s,
						size_type __n);  // 326
					basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
							size_type __length);  // 272
					basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 273
					assign(char_type& __c1,
						const char_type& __c2);  // 273
					basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
							size_type __n);  // 328
					basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 326
					basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 326
				}
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_assign(
						const basic_string<char, std::char_traits<char>, std::allocator<char> >& __str);  // 1771
				basic_string<char, std::char_traits<char>, std::allocator<char> >::assign(
					const basic_string<char, std::char_traits<char>, std::allocator<char> >& __str);  // 906
				basic_string<char, std::char_traits<char>, std::allocator<char> >::operator=(
						const basic_string<char, std::char_traits<char>, std::allocator<char> >& __str);  // 258
			}
			allocator<char>::~allocator(); // 254
			basic_stringbuf<char, std::char_traits<char>, std::allocator<char> >::str(); // 1168
			basic_stringstream<char, std::char_traits<char>, std::allocator<char> >::str(); // 12402
			SetErrorMessage(const string& msg,
					const char ** err);  // 6979
			SetErrorMessage(const string& msg,
					const char ** err);  // 12402
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 280
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 298
			__new_allocator<char>::deallocate(
					char* __p,
					size_type __n);  // 215
			allocator<char>::deallocate(
					char* __p,
					size_t __n);  // 649
			deallocate(allocator_type& __a,
					pointer __p,
					size_type __n);  // 305
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_destroy(
					size_type __size);  // 299
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_dispose(); // 896
			allocator<char>::~allocator(); // 197
			_Alloc_hider::~_Alloc_hider(); // 896
			basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 12402
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 280
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 298
			__new_allocator<char>::deallocate(
					char* __p,
					size_type __n);  // 215
			allocator<char>::deallocate(
					char* __p,
					size_t __n);  // 649
			deallocate(allocator_type& __a,
					pointer __p,
					size_type __n);  // 305
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_destroy(
					size_type __size);  // 299
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_dispose(); // 896
			allocator<char>::~allocator(); // 197
			_Alloc_hider::~_Alloc_hider(); // 896
			basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 81
			basic_streambuf<char, std::char_traits<char> >::~basic_streambuf(); // 81
			basic_stringbuf<char, std::char_traits<char>, std::allocator<char> >::~basic_stringbuf(); // 1084
			basic_ostream<char, std::char_traits<char> >::~basic_ostream(
					const int  __in_chrg,
					const void **  __vtt_parm);  // 1017
			basic_istream<char, std::char_traits<char> >::~basic_istream(
					const int  __in_chrg,
					const void **  __vtt_parm);  // 1017
			basic_iostream<char, std::char_traits<char> >::~basic_iostream(
					const int  __in_chrg,
					const void **  __vtt_parm);  // 1084
			basic_ios<char, std::char_traits<char> >::~basic_ios(); // 1084
			basic_stringstream<char, std::char_traits<char>, std::allocator<char> >::~basic_stringstream(
						const int  __in_chrg,
						const void **  __vtt_parm);  // 12404
		}
		{
			stringstream ss; // 12411
			basic_ios<char, std::char_traits<char> >::basic_ios(); // 1042
			basic_istream<char, std::char_traits<char> >::basic_istream(
					const int  __in_chrg,
					const void **  __vtt_parm);  // 1021
			basic_ostream<char, std::char_traits<char> >::basic_ostream(
					const int  __in_chrg,
					const void **  __vtt_parm);  // 1021
			basic_iostream<char, std::char_traits<char> >::basic_iostream(
					const int  __in_chrg,
					const void **  __vtt_parm);  // 1042
			basic_streambuf<char, std::char_traits<char> >::basic_streambuf(); // 136
			__new_allocator<char>::__new_allocator(
					const __new_allocator<char>  &);  // 173
			allocator<char>::allocator(
					const allocator<char>& __a);  // 209
			_Alloc_hider::_Alloc_hider(
					pointer __dat,
					allocator<char>& __a);  // 590
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 590
			allocator<char>::~allocator(); // 590
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_init_local_buf(); // 592
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
					size_type __length);  // 272
			assign(char_type& __c1,
				const char_type& __c2);  // 273
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
					size_type __n);  // 593
			basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(); // 136
			basic_stringbuf<char, std::char_traits<char>, std::allocator<char> >::basic_stringbuf(
					openmode __mode);  // 1042
			basic_stringstream<char, std::char_traits<char>, std::allocator<char> >::basic_stringstream(
						const int  __in_chrg,
						const void **  __vtt_parm);  // 12411
			operator<< <std::char_traits<char> >(basic_ostream<char, std::char_traits<char> >& __out,
								const char* __s);  // 12412
			__new_allocator<char>::__new_allocator(
					const __new_allocator<char>  &);  // 173
			allocator<char>::allocator(
					const allocator<char>& __a);  // 2908
			basic_string<char, std::char_traits<char>, std::allocator<char> >::get_allocator(); // 254
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 602
			__new_allocator<char>::__new_allocator(
					const __new_allocator<char>  &);  // 173
			allocator<char>::allocator(
					const allocator<char>& __a);  // 205
			_Alloc_hider::_Alloc_hider(
					pointer __dat,
					const allocator<char>& __a);  // 602
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
					size_type __length);  // 272
			assign(char_type& __c1,
				const char_type& __c2);  // 273
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
					size_type __n);  // 605
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_init_local_buf(); // 604
			basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(
					const allocator<char>& __a);  // 254
			{
				char_type* __hi; // 255
				{
					char_type* __pptr; // 447
					basic_streambuf<char, std::char_traits<char> >::pptr(); // 447
					{
						char_type* __egptr; // 449
						basic_streambuf<char, std::char_traits<char> >::egptr(); // 449
					}
				}
				basic_stringbuf<char, std::char_traits<char>, std::allocator<char> >::_M_high_mark(); // 255
				basic_streambuf<char, std::char_traits<char> >::pbase(); // 256
				{
					const size_type  __rsize; // 313
					const size_type  __capacity; // 314
					basic_string<char, std::char_traits<char>, std::allocator<char> >::size(); // 1176
					basic_string<char, std::char_traits<char>, std::allocator<char> >::length(); // 313
					{
						size_type __new_capacity; // 318
						pointer __tmp; // 319
						__new_allocator<char>::allocate(
							size_type __n,
							const void  *);  // 203
						allocator<char>::allocate(
							size_t __n);  // 614
						allocate(allocator_type& __a,
							size_type __n);  // 142
						_S_allocate(_Char_alloc_type& __a,
								size_type __n);  // 164
						basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_create(
								size_type& __capacity,
								size_type __old_capacity);  // 319
						basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_capacity(
								size_type __capacity);  // 322
						basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
							pointer __p);  // 321
					}
					basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 326
					assign(char_type& __c1,
						const char_type& __c2);  // 451
					copy(char_type* __s1,
						const char_type* __s2,
						size_t __n);  // 453
					_S_copy(char* __d,
						const char* __s,
						size_type __n);  // 448
					_S_copy(char* __d,
						const char* __s,
						size_type __n);  // 326
					basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 326
					basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
							size_type __length);  // 272
					assign(char_type& __c1,
						const char_type& __c2);  // 273
					basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 273
					basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
							size_type __n);  // 328
				}
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_assign(
						const basic_string<char, std::char_traits<char>, std::allocator<char> >& __str);  // 1771
				basic_string<char, std::char_traits<char>, std::allocator<char> >::assign(
					const basic_string<char, std::char_traits<char>, std::allocator<char> >& __str);  // 906
				basic_string<char, std::char_traits<char>, std::allocator<char> >::operator=(
						const basic_string<char, std::char_traits<char>, std::allocator<char> >& __str);  // 258
			}
			allocator<char>::~allocator(); // 254
			basic_stringbuf<char, std::char_traits<char>, std::allocator<char> >::str(); // 1168
			basic_stringstream<char, std::char_traits<char>, std::allocator<char> >::str(); // 12413
			SetErrorMessage(const string& msg,
					const char ** err);  // 6979
			SetErrorMessage(const string& msg,
					const char ** err);  // 12413
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 280
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 298
			__new_allocator<char>::deallocate(
					char* __p,
					size_type __n);  // 215
			allocator<char>::deallocate(
					char* __p,
					size_t __n);  // 649
			deallocate(allocator_type& __a,
					pointer __p,
					size_type __n);  // 305
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_destroy(
					size_type __size);  // 299
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_dispose(); // 896
			allocator<char>::~allocator(); // 197
			_Alloc_hider::~_Alloc_hider(); // 896
			basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 12413
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 280
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 298
			__new_allocator<char>::deallocate(
					char* __p,
					size_type __n);  // 215
			allocator<char>::deallocate(
					char* __p,
					size_t __n);  // 649
			deallocate(allocator_type& __a,
					pointer __p,
					size_type __n);  // 305
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_destroy(
					size_type __size);  // 299
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_dispose(); // 896
			allocator<char>::~allocator(); // 197
			_Alloc_hider::~_Alloc_hider(); // 896
			basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 81
			basic_streambuf<char, std::char_traits<char> >::~basic_streambuf(); // 81
			basic_stringbuf<char, std::char_traits<char>, std::allocator<char> >::~basic_stringbuf(); // 1084
			basic_ostream<char, std::char_traits<char> >::~basic_ostream(
					const int  __in_chrg,
					const void **  __vtt_parm);  // 1017
			basic_istream<char, std::char_traits<char> >::~basic_istream(
					const int  __in_chrg,
					const void **  __vtt_parm);  // 1017
			basic_iostream<char, std::char_traits<char> >::~basic_iostream(
					const int  __in_chrg,
					const void **  __vtt_parm);  // 1084
			basic_ios<char, std::char_traits<char> >::~basic_ios(); // 1084
			basic_stringstream<char, std::char_traits<char>, std::allocator<char> >::~basic_stringstream(
						const int  __in_chrg,
						const void **  __vtt_parm);  // 12415
		}
		{
			int x; // 12452
			int y; // 12453
			int w; // 12454
			int h; // 12455
			vector<unsigned char, std::allocator<unsigned char> >::size(); // 1292
			vector<unsigned char, std::allocator<unsigned char> >::_M_range_check(
					size_type __n);  // 1315
			vector<unsigned char, std::allocator<unsigned char> >::at(
				size_type __n);  // 12456
			vector<unsigned char, std::allocator<unsigned char> >::_M_range_check(
					size_type __n);  // 1315
			vector<unsigned char, std::allocator<unsigned char> >::at(
				size_type __n);  // 12457
			vector<unsigned char, std::allocator<unsigned char> >::_M_range_check(
					size_type __n);  // 1315
			vector<unsigned char, std::allocator<unsigned char> >::at(
				size_type __n);  // 12458
			vector<unsigned char, std::allocator<unsigned char> >::_M_range_check(
					size_type __n);  // 1315
			vector<unsigned char, std::allocator<unsigned char> >::at(
				size_type __n);  // 12459
		}
		min<long unsigned int>(const long unsigned int& __a,
					const long unsigned int& __b);  // 3631
		compare(const char_type* __s1,
			const char_type* __s2,
			size_t __n);  // 3632
		_S_compare(size_type __n1,
				size_type __n2);  // 3634
		basic_string<char, std::char_traits<char>, std::allocator<char> >::compare(
			const char* __s);  // 12408
		vector<unsigned char, std::allocator<unsigned char> >::operator[](
				size_type __n);  // 12409
		min<long unsigned int>(const long unsigned int& __a,
					const long unsigned int& __b);  // 3631
		compare(const char_type* __s1,
			const char_type* __s2,
			size_t __n);  // 3632
		_S_compare(size_type __n1,
				size_type __n2);  // 3634
		basic_string<char, std::char_traits<char>, std::allocator<char> >::compare(
			const char* __s);  // 12421
		min<long unsigned int>(const long unsigned int& __a,
					const long unsigned int& __b);  // 3631
		compare(const char_type* __s1,
			const char_type* __s2,
			size_t __n);  // 3632
		_S_compare(size_type __n1,
				size_type __n2);  // 3634
		basic_string<char, std::char_traits<char>, std::allocator<char> >::compare(
			const char* __s);  // 12441
		min<long unsigned int>(const long unsigned int& __a,
					const long unsigned int& __b);  // 3631
		compare(const char_type* __s1,
			const char_type* __s2,
			size_t __n);  // 3632
		_S_compare(size_type __n1,
				size_type __n2);  // 3634
		basic_string<char, std::char_traits<char>, std::allocator<char> >::compare(
			const char* __s);  // 12451
		vector<unsigned char, std::allocator<unsigned char> >::size(); // 1292
		vector<unsigned char, std::allocator<unsigned char> >::_M_range_check(
				size_type __n);  // 1315
		vector<unsigned char, std::allocator<unsigned char> >::at(
			size_type __n);  // 12442
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 12442
		vector<unsigned char, std::allocator<unsigned char> >::_M_range_check(
				size_type __n);  // 1315
		vector<unsigned char, std::allocator<unsigned char> >::at(
			size_type __n);  // 12443
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 12443
		vector<unsigned char, std::allocator<unsigned char> >::_M_range_check(
				size_type __n);  // 1315
		vector<unsigned char, std::allocator<unsigned char> >::at(
			size_type __n);  // 12444
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 12444
		vector<unsigned char, std::allocator<unsigned char> >::_M_range_check(
				size_type __n);  // 1315
		vector<unsigned char, std::allocator<unsigned char> >::at(
			size_type __n);  // 12445
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 12445
		vector<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::size(); // 12434
		SetErrorMessage(const string& msg,
				const char ** err);  // 6979
		SetErrorMessage(const string& msg,
				const char ** err);  // 12437
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 280
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 298
		__new_allocator<char>::deallocate(
				char* __p,
				size_type __n);  // 215
		allocator<char>::deallocate(
				char* __p,
				size_t __n);  // 649
		deallocate(allocator_type& __a,
				pointer __p,
				size_type __n);  // 305
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_destroy(
				size_type __size);  // 299
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_dispose(); // 896
		allocator<char>::~allocator(); // 197
		_Alloc_hider::~_Alloc_hider(); // 896
		basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 12437
		allocator<char>::~allocator(); // 12437
		SetErrorMessage(const string& msg,
				const char ** err);  // 12430
		__new_allocator<unsigned char>::deallocate(
				unsigned char* __p,
				size_type __n);  // 215
		allocator<unsigned char>::deallocate(
				unsigned char* __p,
				size_t __n);  // 649
		deallocate(allocator_type& __a,
				pointer __p,
				size_type __n);  // 396
		_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_deallocate(
				pointer __p,
				size_t __n);  // 375
		allocator<unsigned char>::~allocator(); // 139
		_Vector_impl::~_Vector_impl(); // 377
		_Vector_base<unsigned char, std::allocator<unsigned char> >::~_Vector_base(); // 805
		_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_get_Tp_allocator(); // 803
		_Destroy<unsigned char*, unsigned char>(unsigned char* __first,
							unsigned char* __last,
							allocator<unsigned char> &);  // 802
		vector<unsigned char, std::allocator<unsigned char> >::~vector(); // 12465
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 280
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 298
		__new_allocator<char>::deallocate(
				char* __p,
				size_type __n);  // 215
		allocator<char>::deallocate(
				char* __p,
				size_t __n);  // 649
		deallocate(allocator_type& __a,
				pointer __p,
				size_type __n);  // 305
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_destroy(
				size_type __size);  // 299
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_dispose(); // 896
		allocator<char>::~allocator(); // 197
		_Alloc_hider::~_Alloc_hider(); // 896
		basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 12465
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 280
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 298
		__new_allocator<char>::deallocate(
				char* __p,
				size_type __n);  // 215
		allocator<char>::deallocate(
				char* __p,
				size_t __n);  // 649
		deallocate(allocator_type& __a,
				pointer __p,
				size_type __n);  // 305
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_destroy(
				size_type __size);  // 299
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_dispose(); // 896
		allocator<char>::~allocator(); // 197
		_Alloc_hider::~_Alloc_hider(); // 896
		basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 12465
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 590
		__new_allocator<char>::__new_allocator(
				const __new_allocator<char>  &);  // 173
		allocator<char>::allocator(
				const allocator<char>& __a);  // 209
		_Alloc_hider::_Alloc_hider(
				pointer __dat,
				allocator<char>& __a);  // 590
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
				size_type __length);  // 272
		assign(char_type& __c1,
			const char_type& __c2);  // 273
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
				size_type __n);  // 593
		allocator<char>::~allocator(); // 590
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_init_local_buf(); // 592
		basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(); // 12394
		assign(char_type& __c1,
			const char_type& __c2);  // 273
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
				size_type __length);  // 272
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
				size_type __n);  // 593
		__new_allocator<char>::__new_allocator(
				const __new_allocator<char>  &);  // 173
		allocator<char>::allocator(
				const allocator<char>& __a);  // 209
		_Alloc_hider::_Alloc_hider(
				pointer __dat,
				allocator<char>& __a);  // 590
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 590
		allocator<char>::~allocator(); // 590
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_init_local_buf(); // 592
		basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(); // 12395
		_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_get_Tp_allocator(); // 803
		_Destroy<unsigned char*, unsigned char>(unsigned char* __first,
							unsigned char* __last,
							allocator<unsigned char> &);  // 802
		__new_allocator<unsigned char>::deallocate(
				unsigned char* __p,
				size_type __n);  // 215
		allocator<unsigned char>::deallocate(
				unsigned char* __p,
				size_t __n);  // 649
		deallocate(allocator_type& __a,
				pointer __p,
				size_type __n);  // 396
		_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_deallocate(
				pointer __p,
				size_t __n);  // 375
		allocator<unsigned char>::~allocator(); // 139
		_Vector_impl::~_Vector_impl(); // 377
		_Vector_base<unsigned char, std::allocator<unsigned char> >::~_Vector_base(); // 805
		vector<unsigned char, std::allocator<unsigned char> >::~vector(); // 12465
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 280
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 298
		__new_allocator<char>::deallocate(
				char* __p,
				size_type __n);  // 215
		allocator<char>::deallocate(
				char* __p,
				size_t __n);  // 649
		deallocate(allocator_type& __a,
				pointer __p,
				size_type __n);  // 305
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_destroy(
				size_type __size);  // 299
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_dispose(); // 896
		allocator<char>::~allocator(); // 197
		_Alloc_hider::~_Alloc_hider(); // 896
		basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 12465
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 280
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 298
		__new_allocator<char>::deallocate(
				char* __p,
				size_type __n);  // 215
		allocator<char>::deallocate(
				char* __p,
				size_t __n);  // 649
		deallocate(allocator_type& __a,
				pointer __p,
				size_type __n);  // 305
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_destroy(
				size_type __size);  // 299
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_dispose(); // 896
		allocator<char>::~allocator(); // 197
		_Alloc_hider::~_Alloc_hider(); // 896
		basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 12465
	}
	{
		size_t y; // 12487
		{
			tinyexr_int64 offset; // 12488
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 12489
		}
	}
	{
		int c; // 12515
		{
			int y; // 12518
		}
	}
	{
		int y; // 12524
	}
	{
		size_t y; // 12529
		{
			const unsigned char* data_ptr; // 12530
			int line_no; // 12539
			tinyexr_int64 packedOffsetTableSize; // 12540
			tinyexr_int64 packedSampleDataSize; // 12541
			tinyexr_int64 unpackedSampleDataSize; // 12542
			vector<int, std::allocator<int> > pixelOffsetTable; // 12559
			vector<unsigned char, std::allocator<unsigned char> > sample_data; // 12578
			int sampleSize; // 12596
			vector<int, std::allocator<int> > channel_offset_list; // 12597
			int samples_per_line; // 12620
			{
				long unsigned int dstLen; // 12563
				{
					size_t i; // 12573
				}
				vector<int, std::allocator<int> >::size(); // 12564
				vector<int, std::allocator<int> >::_M_range_check(
						size_type __n);  // 1315
				vector<int, std::allocator<int> >::at(
					size_type __n);  // 12566
			}
			{
				long unsigned int dstLen; // 12583
				vector<unsigned char, std::allocator<unsigned char> >::_M_range_check(
						size_type __n);  // 1315
				vector<unsigned char, std::allocator<unsigned char> >::at(
					size_type __n);  // 12586
			}
			{
				int channel_offset; // 12599
				{
					size_t i; // 12600
				}
			}
			{
				tinyexr_uint64 data_offset; // 12630
				{
					size_t c; // 12631
					{
						size_t x; // 12636
						{
							unsigned int ui; // 12637
							unsigned int* src_ptr; // 12638
							vector<unsigned char, std::allocator<unsigned char> >::size(); // 1292
							vector<unsigned char, std::allocator<unsigned char> >::_M_range_check(
									size_type __n);  // 1315
							vector<unsigned char, std::allocator<unsigned char> >::at(
								size_type __n);  // 12639
							cpy4(unsigned int* dst_val,
								const unsigned int* src_val);  // 12640
						}
					}
					{
						size_t x; // 12646
						{
							union FP16 f16; // 12647
							const short unsigned int* src_ptr; // 12648
							union FP32 f32; // 12651
							half_to_float(union FP16 h); // 12651
							vector<unsigned char, std::allocator<unsigned char> >::_M_range_check(
									size_type __n);  // 1315
							vector<unsigned char, std::allocator<unsigned char> >::at(
								size_type __n);  // 12649
							cpy2(short unsigned int* dst_val,
								const short unsigned int* src_val);  // 12650
						}
					}
					{
						size_t x; // 12656
						{
							float f; // 12657
							const float* src_ptr; // 12658
							vector<unsigned char, std::allocator<unsigned char> >::_M_range_check(
									size_type __n);  // 1315
							vector<unsigned char, std::allocator<unsigned char> >::at(
								size_type __n);  // 12659
							cpy4(float* dst_val,
								const float* src_val);  // 12660
						}
					}
				}
			}
			vector<long int, std::allocator<long int> >::operator[](
					size_type __n);  // 12531
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 12544
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 12546
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 12548
			__new_allocator<int>::__new_allocator(
					const __new_allocator<int>  &);  // 173
			allocator<int>::allocator(
					const allocator<int>& __a);  // 2210
			allocator<int>::~allocator(); // 2210
			_S_check_init_len(size_type __n,
						const allocator_type& __a);  // 587
			__new_allocator<int>::__new_allocator(
					const __new_allocator<int>  &);  // 173
			allocator<int>::allocator(
					const allocator<int>& __a);  // 153
			_Vector_impl_data::_Vector_impl_data(); // 153
			_Vector_impl::_Vector_impl(
					const _Tp_alloc_type& __a);  // 340
			__new_allocator<int>::allocate(
				size_type __n,
				const void  *);  // 203
			allocator<int>::allocate(
				size_t __n);  // 614
			allocate(allocator_type& __a,
				size_type __n);  // 387
			_Vector_base<int, std::allocator<int> >::_M_allocate(
					size_t __n);  // 405
			_Vector_base<int, std::allocator<int> >::_M_create_storage(
						size_t __n);  // 341
			_Vector_base<int, std::allocator<int> >::_Vector_base(
					size_t __n,
					const allocator_type& __a);  // 587
			{
				value_type* __val; // 892
				__fill_a1<int*, int>(int* __first,
							int* __last,
							const int& __value);  // 979
				__fill_a<int*, int>(int* __first,
							int* __last,
							const int& __value);  // 1148
				__fill_n_a<int*, long unsigned int, int>(int* __first,
									long unsigned int __n,
									const int& __value,
									random_access_iterator_tag);  // 1178
				fill_n<int*, long unsigned int, int>(int* __first,
									long unsigned int __n,
									const int& __value);  // 896
				_Construct<int>(int* __p); // 894
			}
			__uninit_default_n<int*, long unsigned int>(int* __first,
									long unsigned int __n);  // 888
			__uninit_default_n<int*, long unsigned int>(int* __first,
									long unsigned int __n);  // 947
			__uninitialized_default_n<int*, long unsigned int>(int* __first,
										long unsigned int __n);  // 1002
			__uninitialized_default_n_a<int*, long unsigned int, int>(int* __first,
											long unsigned int __n,
											allocator<int> &);  // 2011
			vector<int, std::allocator<int> >::_M_default_initialize(
						size_type __n);  // 588
			vector<int, std::allocator<int> >::vector(
				size_type __n,
				const allocator_type& __a);  // 12559
			__new_allocator<int>::allocate(
				size_type __n,
				const void  *);  // 203
			allocator<int>::allocate(
				size_t __n);  // 614
			allocate(allocator_type& __a,
				size_type __n);  // 387
			_Vector_base<int, std::allocator<int> >::_M_allocate(
					size_t __n);  // 405
			_Vector_base<int, std::allocator<int> >::_M_create_storage(
						size_t __n);  // 341
			__new_allocator<int>::__new_allocator(
					const __new_allocator<int>  &);  // 173
			allocator<int>::allocator(
					const allocator<int>& __a);  // 153
			_Vector_impl_data::_Vector_impl_data(); // 153
			_Vector_impl::_Vector_impl(
					const _Tp_alloc_type& __a);  // 340
			_Vector_base<int, std::allocator<int> >::_Vector_base(
					size_t __n,
					const allocator_type& __a);  // 587
			__new_allocator<int>::__new_allocator(
					const __new_allocator<int>  &);  // 173
			allocator<int>::allocator(
					const allocator<int>& __a);  // 2210
			allocator<int>::~allocator(); // 2210
			_S_check_init_len(size_type __n,
						const allocator_type& __a);  // 587
			{
				value_type* __val; // 892
				__fill_a1<int*, int>(int* __first,
							int* __last,
							const int& __value);  // 979
				__fill_a<int*, int>(int* __first,
							int* __last,
							const int& __value);  // 1148
				__fill_n_a<int*, long unsigned int, int>(int* __first,
									long unsigned int __n,
									const int& __value,
									random_access_iterator_tag);  // 1178
				fill_n<int*, long unsigned int, int>(int* __first,
									long unsigned int __n,
									const int& __value);  // 896
				_Construct<int>(int* __p); // 894
			}
			__uninit_default_n<int*, long unsigned int>(int* __first,
									long unsigned int __n);  // 888
			__uninit_default_n<int*, long unsigned int>(int* __first,
									long unsigned int __n);  // 947
			__uninitialized_default_n<int*, long unsigned int>(int* __first,
										long unsigned int __n);  // 1002
			__uninitialized_default_n_a<int*, long unsigned int, int>(int* __first,
											long unsigned int __n,
											allocator<int> &);  // 2011
			vector<int, std::allocator<int> >::_M_default_initialize(
						size_type __n);  // 588
			vector<int, std::allocator<int> >::vector(
				size_type __n,
				const allocator_type& __a);  // 12597
			allocator<int>::~allocator(); // 12559
			__new_allocator<unsigned char>::__new_allocator(
					const __new_allocator<unsigned char>  &);  // 173
			allocator<unsigned char>::allocator(
					const allocator<unsigned char>& __a);  // 2210
			allocator<unsigned char>::~allocator(); // 2210
			_S_check_init_len(size_type __n,
						const allocator_type& __a);  // 587
			__new_allocator<unsigned char>::__new_allocator(
					const __new_allocator<unsigned char>  &);  // 173
			allocator<unsigned char>::allocator(
					const allocator<unsigned char>& __a);  // 153
			_Vector_impl_data::_Vector_impl_data(); // 153
			_Vector_impl::_Vector_impl(
					const _Tp_alloc_type& __a);  // 340
			__new_allocator<unsigned char>::allocate(
				size_type __n,
				const void  *);  // 203
			allocator<unsigned char>::allocate(
				size_t __n);  // 614
			allocate(allocator_type& __a,
				size_type __n);  // 387
			_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_allocate(
					size_t __n);  // 405
			_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_create_storage(
						size_t __n);  // 341
			_Vector_base<unsigned char, std::allocator<unsigned char> >::_Vector_base(
					size_t __n,
					const allocator_type& __a);  // 587
			{
				value_type* __val; // 892
				{
					const size_t  __len; // 950
				}
				__fill_a1<unsigned char, unsigned char>(unsigned char* __first,
									unsigned char* __last,
									const unsigned char& __x);  // 979
				__fill_a<unsigned char*, unsigned char>(unsigned char* __first,
									unsigned char* __last,
									const unsigned char& __value);  // 1148
				__fill_n_a<unsigned char*, long unsigned int, unsigned char>(unsigned char* __first,
												long unsigned int __n,
												const unsigned char& __value,
												random_access_iterator_tag);  // 1178
				fill_n<unsigned char*, long unsigned int, unsigned char>(unsigned char* __first,
											long unsigned int __n,
											const unsigned char& __value);  // 896
				_Construct<unsigned char>(unsigned char* __p); // 894
			}
			__uninit_default_n<unsigned char*, long unsigned int>(unsigned char* __first,
										long unsigned int __n);  // 888
			__uninit_default_n<unsigned char*, long unsigned int>(unsigned char* __first,
										long unsigned int __n);  // 947
			__uninitialized_default_n<unsigned char*, long unsigned int>(unsigned char* __first,
											long unsigned int __n);  // 1002
			__uninitialized_default_n_a<unsigned char*, long unsigned int, unsigned char>(unsigned char* __first,
													long unsigned int __n,
													allocator<unsigned char> &);  // 2011
			vector<unsigned char, std::allocator<unsigned char> >::_M_default_initialize(
						size_type __n);  // 588
			vector<unsigned char, std::allocator<unsigned char> >::vector(
				size_type __n,
				const allocator_type& __a);  // 12579
			allocator<unsigned char>::~allocator(); // 12579
			vector<unsigned char, std::allocator<unsigned char> >::size(); // 12620
			__new_allocator<float>::deallocate(
					float* __p,
					size_type __n);  // 215
			allocator<float>::deallocate(
					float* __p,
					size_t __n);  // 649
			deallocate(allocator_type& __a,
					pointer __p,
					size_type __n);  // 396
			_Vector_base<float, std::allocator<float> >::_M_deallocate(
					pointer __p,
					size_t __n);  // 392
			_Vector_base<int, std::allocator<int> >::_M_deallocate(
					pointer __p,
					size_t __n);  // 375
			allocator<int>::~allocator(); // 139
			_Vector_impl::~_Vector_impl(); // 377
			_Vector_base<int, std::allocator<int> >::~_Vector_base(); // 805
			_Vector_base<int, std::allocator<int> >::_M_get_Tp_allocator(); // 803
			_Destroy<int*, int>(int* __first,
						int* __last,
						allocator<int> &);  // 802
			vector<int, std::allocator<int> >::~vector(); // 12667
			_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_get_Tp_allocator(); // 803
			_Destroy<unsigned char*, unsigned char>(unsigned char* __first,
								unsigned char* __last,
								allocator<unsigned char> &);  // 802
			__new_allocator<unsigned char>::deallocate(
					unsigned char* __p,
					size_type __n);  // 215
			allocator<unsigned char>::deallocate(
					unsigned char* __p,
					size_t __n);  // 649
			deallocate(allocator_type& __a,
					pointer __p,
					size_type __n);  // 396
			_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_deallocate(
					pointer __p,
					size_t __n);  // 375
			allocator<unsigned char>::~allocator(); // 139
			_Vector_impl::~_Vector_impl(); // 377
			_Vector_base<unsigned char, std::allocator<unsigned char> >::~_Vector_base(); // 805
			vector<unsigned char, std::allocator<unsigned char> >::~vector(); // 12667
			_Vector_base<int, std::allocator<int> >::_M_get_Tp_allocator(); // 803
			_Destroy<int*, int>(int* __first,
						int* __last,
						allocator<int> &);  // 802
			__new_allocator<float>::deallocate(
					float* __p,
					size_type __n);  // 215
			allocator<float>::deallocate(
					float* __p,
					size_t __n);  // 649
			deallocate(allocator_type& __a,
					pointer __p,
					size_type __n);  // 396
			_Vector_base<float, std::allocator<float> >::_M_deallocate(
					pointer __p,
					size_t __n);  // 392
			_Vector_base<int, std::allocator<int> >::_M_deallocate(
					pointer __p,
					size_t __n);  // 375
			allocator<int>::~allocator(); // 139
			_Vector_impl::~_Vector_impl(); // 377
			_Vector_base<int, std::allocator<int> >::~_Vector_base(); // 805
			vector<int, std::allocator<int> >::~vector(); // 12667
			allocator<int>::~allocator(); // 12597
			_Vector_base<int, std::allocator<int> >::_M_get_Tp_allocator(); // 803
			_Destroy<int*, int>(int* __first,
						int* __last,
						allocator<int> &);  // 802
			__new_allocator<float>::deallocate(
					float* __p,
					size_type __n);  // 215
			allocator<float>::deallocate(
					float* __p,
					size_t __n);  // 649
			deallocate(allocator_type& __a,
					pointer __p,
					size_type __n);  // 396
			_Vector_base<float, std::allocator<float> >::_M_deallocate(
					pointer __p,
					size_t __n);  // 392
			_Vector_base<int, std::allocator<int> >::_M_deallocate(
					pointer __p,
					size_t __n);  // 375
			allocator<int>::~allocator(); // 139
			_Vector_impl::~_Vector_impl(); // 377
			_Vector_base<int, std::allocator<int> >::~_Vector_base(); // 805
			vector<int, std::allocator<int> >::~vector(); // 12667
			__new_allocator<unsigned char>::deallocate(
					unsigned char* __p,
					size_type __n);  // 215
			allocator<unsigned char>::deallocate(
					unsigned char* __p,
					size_t __n);  // 649
			deallocate(allocator_type& __a,
					pointer __p,
					size_type __n);  // 396
			_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_deallocate(
					pointer __p,
					size_t __n);  // 375
			allocator<unsigned char>::~allocator(); // 139
			_Vector_impl::~_Vector_impl(); // 377
			_Vector_base<unsigned char, std::allocator<unsigned char> >::~_Vector_base(); // 805
			_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_get_Tp_allocator(); // 803
			_Destroy<unsigned char*, unsigned char>(unsigned char* __first,
								unsigned char* __last,
								allocator<unsigned char> &);  // 802
			vector<unsigned char, std::allocator<unsigned char> >::~vector(); // 12667
		}
	}
	{
		size_t c; // 12674
		vector<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::operator[](
				size_type __n);  // 12678
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 2874
		basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str(); // 12678
	}
	__new_allocator<char>::__new_allocator(
			const __new_allocator<char>  &);  // 173
	allocator<char>::allocator(
			const allocator<char>& __a);  // 2210
	allocator<char>::~allocator(); // 2210
	_S_check_init_len(size_type __n,
				const allocator_type& __a);  // 587
	__new_allocator<char>::__new_allocator(
			const __new_allocator<char>  &);  // 173
	allocator<char>::allocator(
			const allocator<char>& __a);  // 153
	_Vector_impl_data::_Vector_impl_data(); // 153
	_Vector_impl::_Vector_impl(
			const _Tp_alloc_type& __a);  // 340
	__new_allocator<char>::allocate(
		size_type __n,
		const void  *);  // 203
	allocator<char>::allocate(
		size_t __n);  // 614
	allocate(allocator_type& __a,
		size_type __n);  // 387
	_Vector_base<char, std::allocator<char> >::_M_allocate(
			size_t __n);  // 405
	_Vector_base<char, std::allocator<char> >::_M_create_storage(
				size_t __n);  // 341
	_Vector_base<char, std::allocator<char> >::_Vector_base(
			size_t __n,
			const allocator_type& __a);  // 587
	{
		value_type* __val; // 892
		{
			const size_t  __len; // 950
		}
		__fill_a1<char, char>(char* __first,
					char* __last,
					const char& __x);  // 979
		__fill_a<char*, char>(char* __first,
					char* __last,
					const char& __value);  // 1148
		__fill_n_a<char*, long unsigned int, char>(char* __first,
								long unsigned int __n,
								const char& __value,
								random_access_iterator_tag);  // 1178
		fill_n<char*, long unsigned int, char>(char* __first,
							long unsigned int __n,
							const char& __value);  // 896
		_Construct<char>(char* __p); // 894
	}
	__uninit_default_n<char*, long unsigned int>(char* __first,
							long unsigned int __n);  // 888
	__uninit_default_n<char*, long unsigned int>(char* __first,
							long unsigned int __n);  // 947
	__uninitialized_default_n<char*, long unsigned int>(char* __first,
								long unsigned int __n);  // 1002
	__uninitialized_default_n_a<char*, long unsigned int, char>(char* __first,
									long unsigned int __n,
									allocator<char> &);  // 2011
	vector<char, std::allocator<char> >::_M_default_initialize(
				size_type __n);  // 588
	vector<char, std::allocator<char> >::vector(
		size_type __n,
		const allocator_type& __a);  // 12339
	allocator<char>::~allocator(); // 12339
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 707
	__new_allocator<char>::__new_allocator(
			const __new_allocator<char>  &);  // 173
	allocator<char>::allocator(
			const allocator<char>& __a);  // 205
	_Alloc_hider::_Alloc_hider(
			pointer __dat,
			const allocator<char>& __a);  // 707
	{
		const char* __end; // 713
		length(const char_type* __s); // 713
		__new_allocator<char>::allocate(
			size_type __n,
			const void  *);  // 203
		allocator<char>::allocate(
			size_t __n);  // 614
		allocate(allocator_type& __a,
			size_type __n);  // 142
		_S_allocate(_Char_alloc_type& __a,
				size_type __n);  // 164
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_create(
				size_type& __capacity,
				size_type __old_capacity);  // 235
		_Guard::_Guard(
			basic_string<char, std::char_traits<char>, std::allocator<char> >* __s);  // 251
		copy(char_type* __s1,
			const char_type* __s2,
			size_t __n);  // 453
		_S_copy(char* __d,
			const char* __s,
			size_type __n);  // 448
		_S_copy(char* __d,
			const char* __s,
			size_type __n);  // 489
		_S_copy_chars<char const*>(char* __p,
						const char* __k1,
						const char* __k2);  // 253
		assign(char_type& __c1,
			const char_type& __c2);  // 273
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
				size_type __n);  // 257
		_Guard::~_Guard(); // 258
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_construct<char const*>(
						const char* __beg,
						const char* __end,
						forward_iterator_tag);  // 714
	}
	basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<>(
			const char* __s,
			const allocator<char>& __a);  // 12367
	SetErrorMessage(const string& msg,
			const char ** err);  // 6979
	SetErrorMessage(const string& msg,
			const char ** err);  // 12367
	__new_allocator<char>::deallocate(
			char* __p,
			size_type __n);  // 215
	allocator<char>::deallocate(
			char* __p,
			size_t __n);  // 649
	deallocate(allocator_type& __a,
			pointer __p,
			size_type __n);  // 305
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_destroy(
			size_type __size);  // 299
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_dispose(); // 896
	allocator<char>::~allocator(); // 197
	_Alloc_hider::~_Alloc_hider(); // 896
	basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 12367
	allocator<char>::~allocator(); // 12367
	_Vector_base<char, std::allocator<char> >::_M_get_Tp_allocator(); // 803
	_Destroy<char*, char>(char* __first,
				char* __last,
				allocator<char> &);  // 802
	__new_allocator<char>::deallocate(
			char* __p,
			size_type __n);  // 215
	allocator<char>::deallocate(
			char* __p,
			size_t __n);  // 649
	deallocate(allocator_type& __a,
			pointer __p,
			size_type __n);  // 396
	_Vector_base<char, std::allocator<char> >::_M_deallocate(
			pointer __p,
			size_t __n);  // 375
	allocator<char>::~allocator(); // 139
	_Vector_impl::~_Vector_impl(); // 377
	_Vector_base<char, std::allocator<char> >::~_Vector_base(); // 805
	vector<char, std::allocator<char> >::~vector(); // 12684
	_Vector_base<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::_M_get_Tp_allocator(); // 803
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 298
	__new_allocator<char>::deallocate(
			char* __p,
			size_type __n);  // 215
	allocator<char>::deallocate(
			char* __p,
			size_t __n);  // 649
	deallocate(allocator_type& __a,
			pointer __p,
			size_type __n);  // 305
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_destroy(
			size_type __size);  // 299
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_dispose(); // 896
	allocator<char>::~allocator(); // 197
	_Alloc_hider::~_Alloc_hider(); // 896
	basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 7333
	~ChannelInfo(const ChannelInfo* this); // 88
	destroy_at<tinyexr::ChannelInfo>(ChannelInfo* __location); // 164
	_Destroy<tinyexr::ChannelInfo>(ChannelInfo* __pointer); // 226
	_Destroy<tinyexr::ChannelInfo*>(ChannelInfo* __first,
					ChannelInfo* __last);  // 1045
	_Destroy<tinyexr::ChannelInfo*, tinyexr::ChannelInfo>(ChannelInfo* __first,
								ChannelInfo* __last,
								allocator<tinyexr::ChannelInfo> &);  // 802
	__new_allocator<tinyexr::ChannelInfo>::deallocate(
			ChannelInfo* __p,
			size_type __n);  // 215
	allocator<tinyexr::ChannelInfo>::deallocate(
			ChannelInfo* __p,
			size_t __n);  // 649
	deallocate(allocator_type& __a,
			pointer __p,
			size_type __n);  // 396
	_Vector_base<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::_M_deallocate(
			pointer __p,
			size_t __n);  // 392
	_Vector_base<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::_M_deallocate(
			pointer __p,
			size_t __n);  // 375
	_Vector_base<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::~_Vector_base(); // 805
	vector<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::~vector(); // 12684
	__new_allocator<float>::__new_allocator(
			const __new_allocator<float>  &);  // 173
	allocator<float>::allocator(
			const allocator<float>& __a);  // 2210
	allocator<float>::~allocator(); // 2210
	_S_check_init_len(size_type __n,
				const allocator_type& __a);  // 587
	__new_allocator<float>::__new_allocator(
			const __new_allocator<float>  &);  // 173
	allocator<float>::allocator(
			const allocator<float>& __a);  // 153
	_Vector_impl_data::_Vector_impl_data(); // 153
	_Vector_impl::_Vector_impl(
			const _Tp_alloc_type& __a);  // 340
	__new_allocator<float>::allocate(
		size_type __n,
		const void  *);  // 203
	allocator<float>::allocate(
		size_t __n);  // 614
	allocate(allocator_type& __a,
		size_type __n);  // 387
	_Vector_base<float, std::allocator<float> >::_M_allocate(
			size_t __n);  // 405
	_Vector_base<float, std::allocator<float> >::_M_create_storage(
				size_t __n);  // 341
	_Vector_base<float, std::allocator<float> >::_Vector_base(
			size_t __n,
			const allocator_type& __a);  // 587
	vector<float, std::allocator<float> >::_M_default_initialize(
				size_type __n);  // 588
	vector<float, std::allocator<float> >::vector(
		size_type __n,
		const allocator_type& __a);  // 12477
	allocator<float>::~allocator(); // 12477
	__new_allocator<long int>::__new_allocator(
			const __new_allocator<long int>  &);  // 173
	allocator<long int>::allocator(
			const allocator<long int>& __a);  // 2210
	allocator<long int>::~allocator(); // 2210
	_S_check_init_len(size_type __n,
				const allocator_type& __a);  // 587
	__new_allocator<long int>::__new_allocator(
			const __new_allocator<long int>  &);  // 173
	allocator<long int>::allocator(
			const allocator<long int>& __a);  // 153
	_Vector_impl_data::_Vector_impl_data(); // 153
	_Vector_impl::_Vector_impl(
			const _Tp_alloc_type& __a);  // 340
	__new_allocator<long int>::allocate(
		size_type __n,
		const void  *);  // 203
	allocator<long int>::allocate(
		size_t __n);  // 614
	allocate(allocator_type& __a,
		size_type __n);  // 387
	_Vector_base<long int, std::allocator<long int> >::_M_allocate(
			size_t __n);  // 405
	_Vector_base<long int, std::allocator<long int> >::_M_create_storage(
				size_t __n);  // 341
	_Vector_base<long int, std::allocator<long int> >::_Vector_base(
			size_t __n,
			const allocator_type& __a);  // 587
	{
		value_type* __val; // 892
		__fill_a1<long unsigned int*, long unsigned int>(long unsigned int* __first,
								long unsigned int* __last,
								const long unsigned int& __value);  // 979
		__fill_a<long unsigned int*, long unsigned int>(long unsigned int* __first,
								long unsigned int* __last,
								const long unsigned int& __value);  // 1148
		__fill_n_a<long unsigned int*, long unsigned int, long unsigned int>(long unsigned int* __first,
											long unsigned int __n,
											const long unsigned int& __value,
											random_access_iterator_tag);  // 1178
		fill_n<long unsigned int*, long unsigned int, long unsigned int>(long unsigned int* __first,
										long unsigned int __n,
										const long unsigned int& __value);  // 896
		_Construct<long unsigned int>(long unsigned int* __p); // 894
	}
	__uninit_default_n<long unsigned int*, long unsigned int>(long unsigned int* __first,
									long unsigned int __n);  // 888
	__uninit_default_n<long int*, long unsigned int>(long int* __first,
							long unsigned int __n);  // 947
	__uninitialized_default_n<long int*, long unsigned int>(long int* __first,
								long unsigned int __n);  // 1002
	__uninitialized_default_n_a<long int*, long unsigned int, long int>(long int* __first,
										long unsigned int __n,
										allocator<long int> &);  // 2011
	vector<long int, std::allocator<long int> >::_M_default_initialize(
				size_type __n);  // 588
	vector<long int, std::allocator<long int> >::vector(
		size_type __n,
		const allocator_type& __a);  // 12485
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 707
	__new_allocator<char>::__new_allocator(
			const __new_allocator<char>  &);  // 173
	allocator<char>::allocator(
			const allocator<char>& __a);  // 205
	_Alloc_hider::_Alloc_hider(
			pointer __dat,
			const allocator<char>& __a);  // 707
	{
		const char* __end; // 713
		length(const char_type* __s); // 713
		__new_allocator<char>::allocate(
			size_type __n,
			const void  *);  // 203
		allocator<char>::allocate(
			size_t __n);  // 614
		allocate(allocator_type& __a,
			size_type __n);  // 142
		_S_allocate(_Char_alloc_type& __a,
				size_type __n);  // 164
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_create(
				size_type& __capacity,
				size_type __old_capacity);  // 235
		_Guard::_Guard(
			basic_string<char, std::char_traits<char>, std::allocator<char> >* __s);  // 251
		copy(char_type* __s1,
			const char_type* __s2,
			size_t __n);  // 453
		_S_copy(char* __d,
			const char* __s,
			size_type __n);  // 448
		_S_copy(char* __d,
			const char* __s,
			size_type __n);  // 489
		_S_copy_chars<char const*>(char* __p,
						const char* __k1,
						const char* __k2);  // 253
		assign(char_type& __c1,
			const char_type& __c2);  // 273
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
				size_type __n);  // 257
		_Guard::~_Guard(); // 258
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_construct<char const*>(
						const char* __beg,
						const char* __end,
						forward_iterator_tag);  // 714
	}
	basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<>(
			const char* __s,
			const allocator<char>& __a);  // 12509
	SetErrorMessage(const string& msg,
			const char ** err);  // 6979
	SetErrorMessage(const string& msg,
			const char ** err);  // 12509
	__new_allocator<char>::deallocate(
			char* __p,
			size_type __n);  // 215
	allocator<char>::deallocate(
			char* __p,
			size_t __n);  // 649
	deallocate(allocator_type& __a,
			pointer __p,
			size_type __n);  // 305
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_destroy(
			size_type __size);  // 299
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_dispose(); // 896
	allocator<char>::~allocator(); // 197
	_Alloc_hider::~_Alloc_hider(); // 896
	basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 12509
	allocator<char>::~allocator(); // 12509
	_Vector_base<long int, std::allocator<long int> >::_M_get_Tp_allocator(); // 803
	_Destroy<long int*, long int>(long int* __first,
					long int* __last,
					allocator<long int> &);  // 802
	__new_allocator<long unsigned int>::deallocate(
			long unsigned int* __p,
			size_type __n);  // 215
	allocator<long unsigned int>::deallocate(
			long unsigned int* __p,
			size_t __n);  // 649
	deallocate(allocator_type& __a,
			pointer __p,
			size_type __n);  // 396
	_Vector_base<long unsigned int, std::allocator<long unsigned int> >::_M_deallocate(
			pointer __p,
			size_t __n);  // 392
	_Vector_base<long int, std::allocator<long int> >::_M_deallocate(
			pointer __p,
			size_t __n);  // 375
	allocator<long int>::~allocator(); // 139
	_Vector_impl::~_Vector_impl(); // 377
	_Vector_base<long int, std::allocator<long int> >::~_Vector_base(); // 805
	vector<long int, std::allocator<long int> >::~vector(); // 12684
	_Vector_base<float, std::allocator<float> >::_M_get_Tp_allocator(); // 803
	_Destroy<float*, float>(float* __first,
				float* __last,
				allocator<float> &);  // 802
	__new_allocator<float>::deallocate(
			float* __p,
			size_type __n);  // 215
	allocator<float>::deallocate(
			float* __p,
			size_t __n);  // 649
	deallocate(allocator_type& __a,
			pointer __p,
			size_type __n);  // 396
	_Vector_base<float, std::allocator<float> >::_M_deallocate(
			pointer __p,
			size_t __n);  // 392
	_Vector_base<float, std::allocator<float> >::_M_deallocate(
			pointer __p,
			size_t __n);  // 375
	allocator<float>::~allocator(); // 139
	_Vector_impl::~_Vector_impl(); // 377
	_Vector_base<float, std::allocator<float> >::~_Vector_base(); // 805
	vector<float, std::allocator<float> >::~vector(); // 12684
	__new_allocator<char>::__new_allocator(
			const __new_allocator<char>  &);  // 173
	allocator<char>::allocator(
			const allocator<char>& __a);  // 209
	_Alloc_hider::_Alloc_hider(
			pointer __dat,
			allocator<char>& __a);  // 743
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_get_allocator(); // 743
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 743
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 280
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 745
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 753
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
		pointer __p);  // 753
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_capacity(
			size_type __capacity);  // 754
	basic_string<char, std::char_traits<char>, std::allocator<char> >::size(); // 1176
	basic_string<char, std::char_traits<char>, std::allocator<char> >::length(); // 760
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
			size_type __length);  // 760
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
		pointer __p);  // 761
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
			size_type __length);  // 272
	assign(char_type& __c1,
		const char_type& __c2);  // 273
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
			size_type __n);  // 762
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_use_local_data(); // 761
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_init_local_buf(); // 747
	basic_string<char, std::char_traits<char>, std::allocator<char> >::length(); // 749
	copy(char_type* __s1,
		const char_type* __s2,
		size_t __n);  // 748
	basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(
			basic_string<char, std::char_traits<char>, std::allocator<char> >& __str);  // 3963
	operator+<char, std::char_traits<char>, std::allocator<char> >(const char* __lhs,
									basic_string<char, std::char_traits<char>, std::allocator<char> >& __rhs);  // 12334
	SetErrorMessage(const string& msg,
			const char ** err);  // 6979
	SetErrorMessage(const string& msg,
			const char ** err);  // 12334
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 280
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 298
	__new_allocator<char>::deallocate(
			char* __p,
			size_type __n);  // 215
	allocator<char>::deallocate(
			char* __p,
			size_t __n);  // 649
	deallocate(allocator_type& __a,
			pointer __p,
			size_type __n);  // 305
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_destroy(
			size_type __size);  // 299
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_dispose(); // 896
	allocator<char>::~allocator(); // 197
	_Alloc_hider::~_Alloc_hider(); // 896
	basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 12334
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 280
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 298
	__new_allocator<char>::deallocate(
			char* __p,
			size_type __n);  // 215
	allocator<char>::deallocate(
			char* __p,
			size_t __n);  // 649
	deallocate(allocator_type& __a,
			pointer __p,
			size_type __n);  // 305
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_destroy(
			size_type __size);  // 299
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_dispose(); // 896
	allocator<char>::~allocator(); // 197
	_Alloc_hider::~_Alloc_hider(); // 896
	basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 12334
	allocator<char>::~allocator(); // 12334
	SetErrorMessage(const string& msg,
			const char ** err);  // 6979
	SetErrorMessage(const string& msg,
			const char ** err);  // 12305
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 280
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 298
	__new_allocator<char>::deallocate(
			char* __p,
			size_type __n);  // 215
	allocator<char>::deallocate(
			char* __p,
			size_t __n);  // 649
	deallocate(allocator_type& __a,
			pointer __p,
			size_type __n);  // 305
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_destroy(
			size_type __size);  // 299
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_dispose(); // 896
	allocator<char>::~allocator(); // 197
	_Alloc_hider::~_Alloc_hider(); // 896
	basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 12305
	allocator<char>::~allocator(); // 12305
	operator+<char, std::char_traits<char>, std::allocator<char> >(const char* __lhs,
									basic_string<char, std::char_traits<char>, std::allocator<char> >& __rhs);  // 12320
	SetErrorMessage(const string& msg,
			const char ** err);  // 12320
	allocator<char>::~allocator(); // 197
	_Alloc_hider::~_Alloc_hider(); // 896
	basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 12320
	allocator<char>::~allocator(); // 197
	_Alloc_hider::~_Alloc_hider(); // 896
	basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 12320
	allocator<char>::~allocator(); // 12320
} /* size: 0, variables: 19, inline expansions: 217 (0 bytes) */

// <047CF8AF> ../thirdparty/tinyexr/tinyexr.h:12701
void FreeEXRErrorMessage(const char* msg)
{
} /* size: 0 */

// <047CC827> ../thirdparty/tinyexr/tinyexr.h:12778
// variables: 10
// function calls: 197
int ParseEXRHeaderFromFile(EXRHeader* exr_header, const EXRVersion* exr_version, const char* filename, const char ** err)
{
	FILE* fp; // 12790
	size_t filesize; // 12797
	vector<unsigned char, std::allocator<unsigned char> > buf; // 12803
	{
		size_t ret; // 12805
		fread(void* __ptr,
			size_t __size,
			size_t __n,
			FILE* __stream);  // 12806
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 707
		__new_allocator<char>::__new_allocator(
				const __new_allocator<char>  &);  // 173
		allocator<char>::allocator(
				const allocator<char>& __a);  // 205
		_Alloc_hider::_Alloc_hider(
				pointer __dat,
				const allocator<char>& __a);  // 707
		{
			const char* __end; // 713
			length(const char_type* __s); // 713
			_Guard::_Guard(
				basic_string<char, std::char_traits<char>, std::allocator<char> >* __s);  // 251
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 253
			copy(char_type* __s1,
				const char_type* __s2,
				size_t __n);  // 453
			_S_copy(char* __d,
				const char* __s,
				size_type __n);  // 448
			assign(char_type& __c1,
				const char_type& __c2);  // 451
			_S_copy(char* __d,
				const char* __s,
				size_type __n);  // 489
			_S_copy_chars<char const*>(char* __p,
							const char* __k1,
							const char* __k2);  // 253
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
					size_type __length);  // 272
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 273
			assign(char_type& __c1,
				const char_type& __c2);  // 273
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
					size_type __n);  // 257
			_Guard::~_Guard(); // 258
			__new_allocator<char>::allocate(
				size_type __n,
				const void  *);  // 203
			allocator<char>::allocate(
				size_t __n);  // 614
			allocate(allocator_type& __a,
				size_type __n);  // 142
			_S_allocate(_Char_alloc_type& __a,
					size_type __n);  // 164
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_create(
					size_type& __capacity,
					size_type __old_capacity);  // 235
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_capacity(
					size_type __capacity);  // 236
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
				pointer __p);  // 235
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_construct<char const*>(
							const char* __beg,
							const char* __end,
							forward_iterator_tag);  // 714
		}
		basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<>(
				const char* __s,
				const allocator<char>& __a);  // 12811
		basic_string<char, std::char_traits<char>, std::allocator<char> >::size(); // 432
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_limit(
			size_type __pos,
			size_type __off);  // 2462
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_check_length(
				size_type __n1,
				size_type __n2,
				const char* __s);  // 546
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 280
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 1279
		basic_string<char, std::char_traits<char>, std::allocator<char> >::capacity(); // 551
		{
			pointer __p; // 553
			const size_type  __how_much; // 555
			less<char const::operator(
					const char* __x,
					const char* __y);  // 440
			less<char const::operator(
					const char* __x,
					const char* __y);  // 441
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_disjunct(
					const char* __s);  // 568
			move(char_type* __s1,
				const char_type* __s2,
				size_t __n);  // 463
			_S_move(char* __d,
				const char* __s,
				size_type __n);  // 458
			assign(char_type& __c1,
				const char_type& __c2);  // 461
			_S_move(char* __d,
				const char* __s,
				size_type __n);  // 571
			copy(char_type* __s1,
				const char_type* __s2,
				size_t __n);  // 453
			_S_copy(char* __d,
				const char* __s,
				size_type __n);  // 448
			_S_copy(char* __d,
				const char* __s,
				size_type __n);  // 573
		}
		__new_allocator<char>::allocate(
			size_type __n,
			const void  *);  // 203
		allocator<char>::allocate(
			size_t __n);  // 614
		allocate(allocator_type& __a,
			size_type __n);  // 142
		_S_allocate(_Char_alloc_type& __a,
				size_type __n);  // 164
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_create(
				size_type& __capacity,
				size_type __old_capacity);  // 363
		copy(char_type* __s1,
			const char_type* __s2,
			size_t __n);  // 453
		_S_copy(char* __d,
			const char* __s,
			size_type __n);  // 448
		_S_copy(char* __d,
			const char* __s,
			size_type __n);  // 368
		assign(char_type& __c1,
			const char_type& __c2);  // 451
		copy(char_type* __s1,
			const char_type* __s2,
			size_t __n);  // 453
		_S_copy(char* __d,
			const char* __s,
			size_type __n);  // 448
		_S_copy(char* __d,
			const char* __s,
			size_type __n);  // 370
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 280
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 298
		__new_allocator<char>::deallocate(
				char* __p,
				size_type __n);  // 215
		allocator<char>::deallocate(
				char* __p,
				size_t __n);  // 649
		deallocate(allocator_type& __a,
				pointer __p,
				size_type __n);  // 305
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_destroy(
				size_type __size);  // 299
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_dispose(); // 373
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
			pointer __p);  // 374
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_capacity(
				size_type __capacity);  // 375
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_mutate(
				size_type __pos,
				size_type __len1,
				const char* __s,
				size_type __len2);  // 579
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 273
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
				size_type __length);  // 272
		assign(char_type& __c1,
			const char_type& __c2);  // 273
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
				size_type __n);  // 581
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_replace(
				size_type __pos,
				size_type __len1,
				const char* __s,
				const size_type  __len2);  // 2462
		basic_string<char, std::char_traits<char>, std::allocator<char> >::replace(
			size_type __pos,
			size_type __n1,
			const char* __s,
			size_type __n2);  // 2219
		basic_string<char, std::char_traits<char>, std::allocator<char> >::insert(
			size_type __pos,
			const char* __s);  // 3963
		__new_allocator<char>::__new_allocator(
				const __new_allocator<char>  &);  // 173
		allocator<char>::allocator(
				const allocator<char>& __a);  // 209
		_Alloc_hider::_Alloc_hider(
				pointer __dat,
				allocator<char>& __a);  // 743
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_get_allocator(); // 743
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 743
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 745
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 753
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
			pointer __p);  // 753
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_capacity(
				size_type __capacity);  // 754
		basic_string<char, std::char_traits<char>, std::allocator<char> >::size(); // 1176
		basic_string<char, std::char_traits<char>, std::allocator<char> >::length(); // 760
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
				size_type __length);  // 760
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_use_local_data(); // 761
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
			pointer __p);  // 761
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
				size_type __length);  // 272
		assign(char_type& __c1,
			const char_type& __c2);  // 273
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
				size_type __n);  // 762
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_init_local_buf(); // 747
		basic_string<char, std::char_traits<char>, std::allocator<char> >::length(); // 749
		copy(char_type* __s1,
			const char_type* __s2,
			size_t __n);  // 748
		basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(
				basic_string<char, std::char_traits<char>, std::allocator<char> >& __str);  // 3963
		operator+<char, std::char_traits<char>, std::allocator<char> >(const char* __lhs,
										basic_string<char, std::char_traits<char>, std::allocator<char> >& __rhs);  // 12811
		SetErrorMessage(const string& msg,
				const char ** err);  // 6979
		SetErrorMessage(const string& msg,
				const char ** err);  // 12811
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 280
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 298
		__new_allocator<char>::deallocate(
				char* __p,
				size_type __n);  // 215
		allocator<char>::deallocate(
				char* __p,
				size_t __n);  // 649
		deallocate(allocator_type& __a,
				pointer __p,
				size_type __n);  // 305
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_destroy(
				size_type __size);  // 299
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_dispose(); // 896
		allocator<char>::~allocator(); // 197
		_Alloc_hider::~_Alloc_hider(); // 896
		basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 12811
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 280
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 298
		__new_allocator<char>::deallocate(
				char* __p,
				size_type __n);  // 215
		allocator<char>::deallocate(
				char* __p,
				size_t __n);  // 649
		deallocate(allocator_type& __a,
				pointer __p,
				size_type __n);  // 305
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_destroy(
				size_type __size);  // 299
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_dispose(); // 896
		allocator<char>::~allocator(); // 197
		_Alloc_hider::~_Alloc_hider(); // 896
		basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 12811
		allocator<char>::~allocator(); // 12811
	}
	__new_allocator<unsigned char>::__new_allocator(
			const __new_allocator<unsigned char>  &);  // 173
	allocator<unsigned char>::allocator(
			const allocator<unsigned char>& __a);  // 2210
	allocator<unsigned char>::~allocator(); // 2210
	_S_check_init_len(size_type __n,
				const allocator_type& __a);  // 587
	__new_allocator<unsigned char>::__new_allocator(
			const __new_allocator<unsigned char>  &);  // 173
	allocator<unsigned char>::allocator(
			const allocator<unsigned char>& __a);  // 153
	_Vector_impl_data::_Vector_impl_data(); // 153
	_Vector_impl::_Vector_impl(
			const _Tp_alloc_type& __a);  // 340
	__new_allocator<unsigned char>::allocate(
		size_type __n,
		const void  *);  // 203
	allocator<unsigned char>::allocate(
		size_t __n);  // 614
	allocate(allocator_type& __a,
		size_type __n);  // 387
	_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_allocate(
			size_t __n);  // 405
	_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_create_storage(
				size_t __n);  // 341
	_Vector_base<unsigned char, std::allocator<unsigned char> >::_Vector_base(
			size_t __n,
			const allocator_type& __a);  // 587
	{
		value_type* __val; // 892
		{
			const size_t  __len; // 950
		}
		__fill_a1<unsigned char, unsigned char>(unsigned char* __first,
							unsigned char* __last,
							const unsigned char& __x);  // 979
		__fill_a<unsigned char*, unsigned char>(unsigned char* __first,
							unsigned char* __last,
							const unsigned char& __value);  // 1148
		__fill_n_a<unsigned char*, long unsigned int, unsigned char>(unsigned char* __first,
										long unsigned int __n,
										const unsigned char& __value,
										random_access_iterator_tag);  // 1178
		fill_n<unsigned char*, long unsigned int, unsigned char>(unsigned char* __first,
									long unsigned int __n,
									const unsigned char& __value);  // 896
		_Construct<unsigned char>(unsigned char* __p); // 894
	}
	__uninit_default_n<unsigned char*, long unsigned int>(unsigned char* __first,
								long unsigned int __n);  // 888
	__uninit_default_n<unsigned char*, long unsigned int>(unsigned char* __first,
								long unsigned int __n);  // 947
	__uninitialized_default_n<unsigned char*, long unsigned int>(unsigned char* __first,
									long unsigned int __n);  // 1002
	__uninitialized_default_n_a<unsigned char*, long unsigned int, unsigned char>(unsigned char* __first,
											long unsigned int __n,
											allocator<unsigned char> &);  // 2011
	vector<unsigned char, std::allocator<unsigned char> >::_M_default_initialize(
				size_type __n);  // 588
	vector<unsigned char, std::allocator<unsigned char> >::vector(
		size_type __n,
		const allocator_type& __a);  // 12803
	allocator<unsigned char>::~allocator(); // 12803
	vector<unsigned char, std::allocator<unsigned char> >::_M_range_check(
			size_type __n);  // 1315
	vector<unsigned char, std::allocator<unsigned char> >::at(
		size_type __n);  // 12817
	_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_get_Tp_allocator(); // 803
	_Destroy<unsigned char*, unsigned char>(unsigned char* __first,
						unsigned char* __last,
						allocator<unsigned char> &);  // 802
	__new_allocator<unsigned char>::deallocate(
			unsigned char* __p,
			size_type __n);  // 215
	allocator<unsigned char>::deallocate(
			unsigned char* __p,
			size_t __n);  // 649
	deallocate(allocator_type& __a,
			pointer __p,
			size_type __n);  // 396
	_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_deallocate(
			pointer __p,
			size_t __n);  // 375
	_Vector_base<unsigned char, std::allocator<unsigned char> >::~_Vector_base(); // 805
	vector<unsigned char, std::allocator<unsigned char> >::~vector(); // 12819
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 707
	__new_allocator<char>::__new_allocator(
			const __new_allocator<char>  &);  // 173
	allocator<char>::allocator(
			const allocator<char>& __a);  // 205
	_Alloc_hider::_Alloc_hider(
			pointer __dat,
			const allocator<char>& __a);  // 707
	{
		const char* __end; // 713
		length(const char_type* __s); // 713
		__new_allocator<char>::allocate(
			size_type __n,
			const void  *);  // 203
		allocator<char>::allocate(
			size_t __n);  // 614
		allocate(allocator_type& __a,
			size_type __n);  // 142
		_S_allocate(_Char_alloc_type& __a,
				size_type __n);  // 164
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_create(
				size_type& __capacity,
				size_type __old_capacity);  // 235
		_Guard::_Guard(
			basic_string<char, std::char_traits<char>, std::allocator<char> >* __s);  // 251
		copy(char_type* __s1,
			const char_type* __s2,
			size_t __n);  // 453
		_S_copy(char* __d,
			const char* __s,
			size_type __n);  // 448
		_S_copy(char* __d,
			const char* __s,
			size_type __n);  // 489
		_S_copy_chars<char const*>(char* __p,
						const char* __k1,
						const char* __k2);  // 253
		assign(char_type& __c1,
			const char_type& __c2);  // 273
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
				size_type __n);  // 257
		_Guard::~_Guard(); // 258
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_construct<char const*>(
						const char* __beg,
						const char* __end,
						forward_iterator_tag);  // 714
	}
	basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<>(
			const char* __s,
			const allocator<char>& __a);  // 12781
	SetErrorMessage(const string& msg,
			const char ** err);  // 6979
	SetErrorMessage(const string& msg,
			const char ** err);  // 12781
	__new_allocator<char>::deallocate(
			char* __p,
			size_type __n);  // 215
	allocator<char>::deallocate(
			char* __p,
			size_t __n);  // 649
	deallocate(allocator_type& __a,
			pointer __p,
			size_type __n);  // 305
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_destroy(
			size_type __size);  // 299
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_dispose(); // 896
	allocator<char>::~allocator(); // 197
	_Alloc_hider::~_Alloc_hider(); // 896
	basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 12781
	allocator<char>::~allocator(); // 12781
	operator+<char, std::char_traits<char>, std::allocator<char> >(const char* __lhs,
									basic_string<char, std::char_traits<char>, std::allocator<char> >& __rhs);  // 12793
	SetErrorMessage(const string& msg,
			const char ** err);  // 12793
	allocator<char>::~allocator(); // 197
	_Alloc_hider::~_Alloc_hider(); // 896
	basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 12793
	allocator<char>::~allocator(); // 197
	_Alloc_hider::~_Alloc_hider(); // 896
	basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 12793
	allocator<char>::~allocator(); // 12793
} /* size: 0, variables: 3, inline expansions: 56 (0 bytes) */

// <047C6CF4> ../thirdparty/tinyexr/tinyexr.h:12821
// variables: 13
// function calls: 399
int ParseEXRMultipartHeaderFromMemory(EXRHeader*** exr_headers, int* num_headers, const EXRVersion* exr_version, const unsigned char* memory, size_t size, const char ** err)
{
	const unsigned char* marker; // 12839
	size_t marker_size; // 12840
	vector<tinyexr::_HeaderInfo, std::allocator<tinyexr::_HeaderInfo> > infos; // 12842
	{
		HeaderInfo info; // 12845
		string err_str; // 12848
		bool empty_header; // 12849
		int ret; // 12850
		vector<tinyexr::_HeaderInfo, std::allocator<tinyexr::_HeaderInfo> >::size(); // 2199
		max<long unsigned int>(const long unsigned int& __a,
					const long unsigned int& __b);  // 2202
		vector<tinyexr::_HeaderInfo, std::allocator<tinyexr::_HeaderInfo> >::_M_check_len(
				size_type __n,
				const char* __s);  // 566
		__normal_iterator<tinyexr::_HeaderInfo::__normal_iterator(
					_HeaderInfo* const& __i);  // 999
		vector<tinyexr::_HeaderInfo, std::allocator<tinyexr::_HeaderInfo> >::begin(); // 571
		__normal_iterator<tinyexr::_HeaderInfo::__normal_iterator(
					_HeaderInfo* const& __i);  // 1019
		vector<tinyexr::_HeaderInfo, std::allocator<tinyexr::_HeaderInfo> >::end(); // 571
		__new_allocator<tinyexr::_HeaderInfo>::allocate(
			size_type __n,
			const void  *);  // 203
		allocator<tinyexr::_HeaderInfo>::allocate(
			size_t __n);  // 614
		allocate(allocator_type& __a,
			size_type __n);  // 387
		_Vector_base<tinyexr::_HeaderInfo, std::allocator<tinyexr::_HeaderInfo> >::_M_allocate(
				size_t __n);  // 572
		{
			_Guard_alloc __guard; // 576
			_Guard_alloc::_Guard_alloc(
					pointer __s,
					size_type __l,
					_Base& __vect);  // 576
			construct_at<tinyexr::_HeaderInfo, const tinyexr::_HeaderInfo&>(_HeaderInfo* __location); // 676
			construct<tinyexr::_HeaderInfo, const tinyexr::_HeaderInfo&>(allocator_type& __a,
											_HeaderInfo* __p);  // 586
			__new_allocator<tinyexr::ChannelInfo>::__new_allocator(
					const __new_allocator<tinyexr::ChannelInfo>  &);  // 173
			allocator<tinyexr::ChannelInfo>::allocator(
					const allocator<tinyexr::ChannelInfo>& __a);  // 161
			_Vector_impl_data::_Vector_impl_data(
						_Vector_impl_data& __x);  // 161
			_Vector_impl::_Vector_impl(
					_Vector_impl& __x);  // 344
			_Vector_base<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::_Vector_base(
					_Vector_base<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> > &);  // 650
			vector<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::vector(
				vector<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> > &);  // 7335
			__new_allocator<_EXRAttribute>::__new_allocator(
					const __new_allocator<_EXRAttribute>  &);  // 173
			allocator<_EXRAttribute>::allocator(
					const allocator<_EXRAttribute>& __a);  // 161
			_Vector_impl_data::_Vector_impl_data(
						_Vector_impl_data& __x);  // 161
			_Vector_impl::_Vector_impl(
					_Vector_impl& __x);  // 344
			_Vector_base<_EXRAttribute, std::allocator<_EXRAttribute> >::_Vector_base(
					_Vector_base<_EXRAttribute, std::allocator<_EXRAttribute> > &);  // 650
			vector<_EXRAttribute, std::allocator<_EXRAttribute> >::vector(
				vector<_EXRAttribute, std::allocator<_EXRAttribute> > &);  // 7335
			_HeaderInfo::_HeaderInfo(
					_HeaderInfo &);  // 110
			construct_at<tinyexr::_HeaderInfo, tinyexr::_HeaderInfo>(_HeaderInfo* __location); // 676
			construct<tinyexr::_HeaderInfo, tinyexr::_HeaderInfo>(allocator_type& __a,
										_HeaderInfo* __p);  // 1288
			_Vector_base<_EXRAttribute, std::allocator<_EXRAttribute> >::_M_get_Tp_allocator(); // 803
			_Destroy<_EXRAttribute*, _EXRAttribute>(_EXRAttribute* __first,
								_EXRAttribute* __last,
								allocator<_EXRAttribute> &);  // 802
			__new_allocator<_EXRAttribute>::deallocate(
					_EXRAttribute* __p,
					size_type __n);  // 215
			allocator<_EXRAttribute>::deallocate(
					_EXRAttribute* __p,
					size_t __n);  // 649
			deallocate(allocator_type& __a,
					pointer __p,
					size_type __n);  // 396
			_Vector_base<_EXRAttribute, std::allocator<_EXRAttribute> >::_M_deallocate(
					pointer __p,
					size_t __n);  // 392
			_Vector_base<_EXRAttribute, std::allocator<_EXRAttribute> >::_M_deallocate(
					pointer __p,
					size_t __n);  // 375
			allocator<_EXRAttribute>::~allocator(); // 139
			_Vector_impl::~_Vector_impl(); // 377
			_Vector_base<_EXRAttribute, std::allocator<_EXRAttribute> >::~_Vector_base(); // 805
			vector<_EXRAttribute, std::allocator<_EXRAttribute> >::~vector(); // 7335
			_Vector_base<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::_M_get_Tp_allocator(); // 803
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 298
			__new_allocator<char>::deallocate(
					char* __p,
					size_type __n);  // 215
			allocator<char>::deallocate(
					char* __p,
					size_t __n);  // 649
			deallocate(allocator_type& __a,
					pointer __p,
					size_type __n);  // 305
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_destroy(
					size_type __size);  // 299
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_dispose(); // 896
			allocator<char>::~allocator(); // 197
			_Alloc_hider::~_Alloc_hider(); // 896
			basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 7333
			~ChannelInfo(const ChannelInfo* this); // 88
			destroy_at<tinyexr::ChannelInfo>(ChannelInfo* __location); // 164
			_Destroy<tinyexr::ChannelInfo>(ChannelInfo* __pointer); // 226
			_Destroy<tinyexr::ChannelInfo*>(ChannelInfo* __first,
							ChannelInfo* __last);  // 1045
			_Destroy<tinyexr::ChannelInfo*, tinyexr::ChannelInfo>(ChannelInfo* __first,
										ChannelInfo* __last,
										allocator<tinyexr::ChannelInfo> &);  // 802
			__new_allocator<tinyexr::ChannelInfo>::deallocate(
					ChannelInfo* __p,
					size_type __n);  // 215
			allocator<tinyexr::ChannelInfo>::deallocate(
					ChannelInfo* __p,
					size_t __n);  // 649
			deallocate(allocator_type& __a,
					pointer __p,
					size_type __n);  // 396
			_Vector_base<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::_M_deallocate(
					pointer __p,
					size_t __n);  // 392
			_Vector_base<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::_M_deallocate(
					pointer __p,
					size_t __n);  // 375
			allocator<tinyexr::ChannelInfo>::~allocator(); // 139
			_Vector_impl::~_Vector_impl(); // 377
			_Vector_base<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::~_Vector_base(); // 805
			vector<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::~vector(); // 7335
			_HeaderInfo::~_HeaderInfo(); // 88
			destroy_at<tinyexr::_HeaderInfo>(_HeaderInfo* __location); // 698
			destroy<tinyexr::_HeaderInfo>(allocator_type& __a,
							_HeaderInfo* __p);  // 1289
			__relocate_object_a<tinyexr::_HeaderInfo, tinyexr::_HeaderInfo, std::allocator<tinyexr::_HeaderInfo> >(_HeaderInfo* __dest,
																_HeaderInfo* __orig,
																allocator<tinyexr::_HeaderInfo>& __alloc);  // 1317
			__relocate_a_1<tinyexr::_HeaderInfo*, tinyexr::_HeaderInfo*, std::allocator<tinyexr::_HeaderInfo> >(_HeaderInfo* __first,
																_HeaderInfo* __last,
																_HeaderInfo* __result,
																allocator<tinyexr::_HeaderInfo>& __alloc);  // 1359
			__relocate_a<tinyexr::_HeaderInfo*, tinyexr::_HeaderInfo*, std::allocator<tinyexr::_HeaderInfo> >(_HeaderInfo* __first,
																_HeaderInfo* __last,
																_HeaderInfo* __result,
																allocator<tinyexr::_HeaderInfo>& __alloc);  // 539
			_S_relocate(pointer __first,
					pointer __last,
					pointer __result,
					_Tp_alloc_type& __alloc);  // 599
			__new_allocator<tinyexr::_HeaderInfo>::deallocate(
					_HeaderInfo* __p,
					size_type __n);  // 215
			allocator<tinyexr::_HeaderInfo>::deallocate(
					_HeaderInfo* __p,
					size_t __n);  // 649
			deallocate(allocator_type& __a,
					pointer __p,
					size_type __n);  // 396
			_Vector_base<tinyexr::_HeaderInfo, std::allocator<tinyexr::_HeaderInfo> >::_M_deallocate(
					pointer __p,
					size_t __n);  // 392
			_Vector_base<tinyexr::_HeaderInfo, std::allocator<tinyexr::_HeaderInfo> >::_M_deallocate(
					pointer __p,
					size_t __n);  // 1883
			_Guard_alloc::~_Guard_alloc(); // 640
		}
		vector<tinyexr::_HeaderInfo, std::allocator<tinyexr::_HeaderInfo> >::_M_realloc_append<const tinyexr::_HeaderInfo&>(); // 1427
		construct_at<tinyexr::_HeaderInfo, const tinyexr::_HeaderInfo&>(_HeaderInfo* __location); // 676
		construct<tinyexr::_HeaderInfo, const tinyexr::_HeaderInfo&>(allocator_type& __a,
										_HeaderInfo* __p);  // 1421
		vector<tinyexr::_HeaderInfo, std::allocator<tinyexr::_HeaderInfo> >::push_back(
				const value_type& __x);  // 12870
		__new_allocator<tinyexr::ChannelInfo>::__new_allocator(); // 168
		allocator<tinyexr::ChannelInfo>::allocator(); // 148
		_Vector_impl_data::_Vector_impl_data(); // 148
		_Vector_impl::_Vector_impl(); // 321
		_Vector_base<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::_Vector_base(); // 561
		vector<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::vector(); // 7335
		__new_allocator<_EXRAttribute>::__new_allocator(); // 168
		allocator<_EXRAttribute>::allocator(); // 148
		_Vector_impl_data::_Vector_impl_data(); // 148
		_Vector_impl::_Vector_impl(); // 321
		_Vector_base<_EXRAttribute, std::allocator<_EXRAttribute> >::_Vector_base(); // 561
		vector<_EXRAttribute, std::allocator<_EXRAttribute> >::vector(); // 7335
		_HeaderInfo::_HeaderInfo(); // 12845
		vector<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::_M_erase_at_end(
				pointer __pos);  // 1864
		vector<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::clear(); // 7359
		_HeaderInfo::clear(); // 12846
		__new_allocator<char>::__new_allocator(
				const __new_allocator<char>  &);  // 173
		allocator<char>::allocator(
				const allocator<char>& __a);  // 209
		_Alloc_hider::_Alloc_hider(
				pointer __dat,
				allocator<char>& __a);  // 590
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 590
		allocator<char>::~allocator(); // 590
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_init_local_buf(); // 592
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
				size_type __length);  // 272
		assign(char_type& __c1,
			const char_type& __c2);  // 273
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
				size_type __n);  // 593
		basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(); // 12848
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 280
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 298
		__new_allocator<char>::deallocate(
				char* __p,
				size_type __n);  // 215
		allocator<char>::deallocate(
				char* __p,
				size_t __n);  // 649
		deallocate(allocator_type& __a,
				pointer __p,
				size_type __n);  // 305
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_destroy(
				size_type __size);  // 299
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_dispose(); // 896
		allocator<char>::~allocator(); // 197
		_Alloc_hider::~_Alloc_hider(); // 896
		basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 12875
		_Vector_base<_EXRAttribute, std::allocator<_EXRAttribute> >::_M_get_Tp_allocator(); // 803
		_Destroy<_EXRAttribute*, _EXRAttribute>(_EXRAttribute* __first,
							_EXRAttribute* __last,
							allocator<_EXRAttribute> &);  // 802
		__new_allocator<_EXRAttribute>::deallocate(
				_EXRAttribute* __p,
				size_type __n);  // 215
		allocator<_EXRAttribute>::deallocate(
				_EXRAttribute* __p,
				size_t __n);  // 649
		deallocate(allocator_type& __a,
				pointer __p,
				size_type __n);  // 396
		_Vector_base<_EXRAttribute, std::allocator<_EXRAttribute> >::_M_deallocate(
				pointer __p,
				size_t __n);  // 392
		_Vector_base<_EXRAttribute, std::allocator<_EXRAttribute> >::_M_deallocate(
				pointer __p,
				size_t __n);  // 375
		allocator<_EXRAttribute>::~allocator(); // 139
		_Vector_impl::~_Vector_impl(); // 377
		_Vector_base<_EXRAttribute, std::allocator<_EXRAttribute> >::~_Vector_base(); // 805
		vector<_EXRAttribute, std::allocator<_EXRAttribute> >::~vector(); // 7335
		_Vector_base<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::_M_get_Tp_allocator(); // 803
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 298
		__new_allocator<char>::deallocate(
				char* __p,
				size_type __n);  // 215
		allocator<char>::deallocate(
				char* __p,
				size_t __n);  // 649
		deallocate(allocator_type& __a,
				pointer __p,
				size_type __n);  // 305
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_destroy(
				size_type __size);  // 299
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_dispose(); // 896
		allocator<char>::~allocator(); // 197
		_Alloc_hider::~_Alloc_hider(); // 896
		basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 7333
		~ChannelInfo(const ChannelInfo* this); // 88
		destroy_at<tinyexr::ChannelInfo>(ChannelInfo* __location); // 164
		_Destroy<tinyexr::ChannelInfo>(ChannelInfo* __pointer); // 226
		_Destroy<tinyexr::ChannelInfo*>(ChannelInfo* __first,
						ChannelInfo* __last);  // 1045
		_Destroy<tinyexr::ChannelInfo*, tinyexr::ChannelInfo>(ChannelInfo* __first,
									ChannelInfo* __last,
									allocator<tinyexr::ChannelInfo> &);  // 802
		__new_allocator<tinyexr::ChannelInfo>::deallocate(
				ChannelInfo* __p,
				size_type __n);  // 215
		allocator<tinyexr::ChannelInfo>::deallocate(
				ChannelInfo* __p,
				size_t __n);  // 649
		deallocate(allocator_type& __a,
				pointer __p,
				size_type __n);  // 396
		_Vector_base<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::_M_deallocate(
				pointer __p,
				size_t __n);  // 392
		_Vector_base<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::_M_deallocate(
				pointer __p,
				size_t __n);  // 375
		allocator<tinyexr::ChannelInfo>::~allocator(); // 139
		_Vector_impl::~_Vector_impl(); // 377
		_Vector_base<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::~_Vector_base(); // 805
		vector<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::~vector(); // 7335
		_HeaderInfo::~_HeaderInfo(); // 12875
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 280
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 298
		__new_allocator<char>::deallocate(
				char* __p,
				size_type __n);  // 215
		allocator<char>::deallocate(
				char* __p,
				size_t __n);  // 649
		deallocate(allocator_type& __a,
				pointer __p,
				size_type __n);  // 305
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_destroy(
				size_type __size);  // 299
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_dispose(); // 896
		allocator<char>::~allocator(); // 197
		_Alloc_hider::~_Alloc_hider(); // 896
		basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 12875
		SetErrorMessage(const string& msg,
				const char ** err);  // 6979
		SetErrorMessage(const string& msg,
				const char ** err);  // 12854
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 280
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 298
		__new_allocator<char>::deallocate(
				char* __p,
				size_type __n);  // 215
		allocator<char>::deallocate(
				char* __p,
				size_t __n);  // 649
		deallocate(allocator_type& __a,
				pointer __p,
				size_type __n);  // 305
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_destroy(
				size_type __size);  // 299
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_dispose(); // 896
		allocator<char>::~allocator(); // 197
		_Alloc_hider::~_Alloc_hider(); // 896
		basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 12875
		_Vector_base<_EXRAttribute, std::allocator<_EXRAttribute> >::_M_get_Tp_allocator(); // 803
		_Destroy<_EXRAttribute*, _EXRAttribute>(_EXRAttribute* __first,
							_EXRAttribute* __last,
							allocator<_EXRAttribute> &);  // 802
		__new_allocator<_EXRAttribute>::deallocate(
				_EXRAttribute* __p,
				size_type __n);  // 215
		allocator<_EXRAttribute>::deallocate(
				_EXRAttribute* __p,
				size_t __n);  // 649
		deallocate(allocator_type& __a,
				pointer __p,
				size_type __n);  // 396
		_Vector_base<_EXRAttribute, std::allocator<_EXRAttribute> >::_M_deallocate(
				pointer __p,
				size_t __n);  // 392
		_Vector_base<_EXRAttribute, std::allocator<_EXRAttribute> >::_M_deallocate(
				pointer __p,
				size_t __n);  // 375
		allocator<_EXRAttribute>::~allocator(); // 139
		_Vector_impl::~_Vector_impl(); // 377
		_Vector_base<_EXRAttribute, std::allocator<_EXRAttribute> >::~_Vector_base(); // 805
		vector<_EXRAttribute, std::allocator<_EXRAttribute> >::~vector(); // 7335
		_Vector_base<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::_M_get_Tp_allocator(); // 803
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 298
		__new_allocator<char>::deallocate(
				char* __p,
				size_type __n);  // 215
		allocator<char>::deallocate(
				char* __p,
				size_t __n);  // 649
		deallocate(allocator_type& __a,
				pointer __p,
				size_type __n);  // 305
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_destroy(
				size_type __size);  // 299
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_dispose(); // 896
		allocator<char>::~allocator(); // 197
		_Alloc_hider::~_Alloc_hider(); // 896
		basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 7333
		~ChannelInfo(const ChannelInfo* this); // 88
		destroy_at<tinyexr::ChannelInfo>(ChannelInfo* __location); // 164
		_Destroy<tinyexr::ChannelInfo>(ChannelInfo* __pointer); // 226
		_Destroy<tinyexr::ChannelInfo*>(ChannelInfo* __first,
						ChannelInfo* __last);  // 1045
		_Destroy<tinyexr::ChannelInfo*, tinyexr::ChannelInfo>(ChannelInfo* __first,
									ChannelInfo* __last,
									allocator<tinyexr::ChannelInfo> &);  // 802
		__new_allocator<tinyexr::ChannelInfo>::deallocate(
				ChannelInfo* __p,
				size_type __n);  // 215
		allocator<tinyexr::ChannelInfo>::deallocate(
				ChannelInfo* __p,
				size_t __n);  // 649
		deallocate(allocator_type& __a,
				pointer __p,
				size_type __n);  // 396
		_Vector_base<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::_M_deallocate(
				pointer __p,
				size_t __n);  // 392
		_Vector_base<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::_M_deallocate(
				pointer __p,
				size_t __n);  // 375
		allocator<tinyexr::ChannelInfo>::~allocator(); // 139
		_Vector_impl::~_Vector_impl(); // 377
		_Vector_base<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::~_Vector_base(); // 805
		vector<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::~vector(); // 7335
		_HeaderInfo::~_HeaderInfo(); // 12875
		_Vector_base<_EXRAttribute, std::allocator<_EXRAttribute> >::_M_get_Tp_allocator(); // 803
		_Destroy<_EXRAttribute*, _EXRAttribute>(_EXRAttribute* __first,
							_EXRAttribute* __last,
							allocator<_EXRAttribute> &);  // 802
		__new_allocator<_EXRAttribute>::deallocate(
				_EXRAttribute* __p,
				size_type __n);  // 215
		allocator<_EXRAttribute>::deallocate(
				_EXRAttribute* __p,
				size_t __n);  // 649
		deallocate(allocator_type& __a,
				pointer __p,
				size_type __n);  // 396
		_Vector_base<_EXRAttribute, std::allocator<_EXRAttribute> >::_M_deallocate(
				pointer __p,
				size_t __n);  // 392
		_Vector_base<_EXRAttribute, std::allocator<_EXRAttribute> >::_M_deallocate(
				pointer __p,
				size_t __n);  // 375
		allocator<_EXRAttribute>::~allocator(); // 139
		_Vector_impl::~_Vector_impl(); // 377
		_Vector_base<_EXRAttribute, std::allocator<_EXRAttribute> >::~_Vector_base(); // 805
		vector<_EXRAttribute, std::allocator<_EXRAttribute> >::~vector(); // 7335
		_Vector_base<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::_M_get_Tp_allocator(); // 803
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 298
		__new_allocator<char>::deallocate(
				char* __p,
				size_type __n);  // 215
		allocator<char>::deallocate(
				char* __p,
				size_t __n);  // 649
		deallocate(allocator_type& __a,
				pointer __p,
				size_type __n);  // 305
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_destroy(
				size_type __size);  // 299
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_dispose(); // 896
		allocator<char>::~allocator(); // 197
		_Alloc_hider::~_Alloc_hider(); // 896
		basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 7333
		~ChannelInfo(const ChannelInfo* this); // 88
		destroy_at<tinyexr::ChannelInfo>(ChannelInfo* __location); // 164
		_Destroy<tinyexr::ChannelInfo>(ChannelInfo* __pointer); // 226
		_Destroy<tinyexr::ChannelInfo*>(ChannelInfo* __first,
						ChannelInfo* __last);  // 1045
		_Destroy<tinyexr::ChannelInfo*, tinyexr::ChannelInfo>(ChannelInfo* __first,
									ChannelInfo* __last,
									allocator<tinyexr::ChannelInfo> &);  // 802
		__new_allocator<tinyexr::ChannelInfo>::deallocate(
				ChannelInfo* __p,
				size_type __n);  // 215
		allocator<tinyexr::ChannelInfo>::deallocate(
				ChannelInfo* __p,
				size_t __n);  // 649
		deallocate(allocator_type& __a,
				pointer __p,
				size_type __n);  // 396
		_Vector_base<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::_M_deallocate(
				pointer __p,
				size_t __n);  // 392
		_Vector_base<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::_M_deallocate(
				pointer __p,
				size_t __n);  // 375
		allocator<tinyexr::ChannelInfo>::~allocator(); // 139
		_Vector_impl::~_Vector_impl(); // 377
		_Vector_base<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::~_Vector_base(); // 805
		vector<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::~vector(); // 7335
		_HeaderInfo::~_HeaderInfo(); // 12875
		{
			const char* __end; // 713
			__new_allocator<char>::allocate(
				size_type __n,
				const void  *);  // 203
			allocator<char>::allocate(
				size_t __n);  // 614
			allocate(allocator_type& __a,
				size_type __n);  // 142
			_S_allocate(_Char_alloc_type& __a,
					size_type __n);  // 164
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_create(
					size_type& __capacity,
					size_type __old_capacity);  // 235
			_Guard::_Guard(
				basic_string<char, std::char_traits<char>, std::allocator<char> >* __s);  // 251
			copy(char_type* __s1,
				const char_type* __s2,
				size_t __n);  // 453
			_S_copy(char* __d,
				const char* __s,
				size_type __n);  // 448
			_S_copy(char* __d,
				const char* __s,
				size_type __n);  // 489
			_S_copy_chars<char const*>(char* __p,
							const char* __k1,
							const char* __k2);  // 253
			assign(char_type& __c1,
				const char_type& __c2);  // 273
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
					size_type __n);  // 257
			_Guard::~_Guard(); // 258
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_construct<char const*>(
							const char* __beg,
							const char* __end,
							forward_iterator_tag);  // 714
			length(const char_type* __s); // 713
		}
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 707
		__new_allocator<char>::__new_allocator(
				const __new_allocator<char>  &);  // 173
		allocator<char>::allocator(
				const allocator<char>& __a);  // 205
		_Alloc_hider::_Alloc_hider(
				pointer __dat,
				const allocator<char>& __a);  // 707
		basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<>(
				const char* __s,
				const allocator<char>& __a);  // 12866
		SetErrorMessage(const string& msg,
				const char ** err);  // 6979
		SetErrorMessage(const string& msg,
				const char ** err);  // 12865
		__new_allocator<char>::deallocate(
				char* __p,
				size_type __n);  // 215
		allocator<char>::deallocate(
				char* __p,
				size_t __n);  // 649
		deallocate(allocator_type& __a,
				pointer __p,
				size_type __n);  // 305
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_destroy(
				size_type __size);  // 299
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_dispose(); // 896
		allocator<char>::~allocator(); // 197
		_Alloc_hider::~_Alloc_hider(); // 896
		basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 12866
		allocator<char>::~allocator(); // 12866
	}
	{
		size_t i; // 12880
		{
			EXRHeader* exr_header; // 12881
			vector<tinyexr::_HeaderInfo, std::allocator<tinyexr::_HeaderInfo> >::operator[](
					size_type __n);  // 12883
		}
	}
	_Vector_base<tinyexr::_HeaderInfo, std::allocator<tinyexr::_HeaderInfo> >::_M_get_Tp_allocator(); // 803
	_Vector_base<_EXRAttribute, std::allocator<_EXRAttribute> >::_M_get_Tp_allocator(); // 803
	_Destroy<_EXRAttribute*, _EXRAttribute>(_EXRAttribute* __first,
						_EXRAttribute* __last,
						allocator<_EXRAttribute> &);  // 802
	__new_allocator<_EXRAttribute>::deallocate(
			_EXRAttribute* __p,
			size_type __n);  // 215
	allocator<_EXRAttribute>::deallocate(
			_EXRAttribute* __p,
			size_t __n);  // 649
	deallocate(allocator_type& __a,
			pointer __p,
			size_type __n);  // 396
	_Vector_base<_EXRAttribute, std::allocator<_EXRAttribute> >::_M_deallocate(
			pointer __p,
			size_t __n);  // 392
	_Vector_base<_EXRAttribute, std::allocator<_EXRAttribute> >::_M_deallocate(
			pointer __p,
			size_t __n);  // 375
	allocator<_EXRAttribute>::~allocator(); // 139
	_Vector_impl::~_Vector_impl(); // 377
	_Vector_base<_EXRAttribute, std::allocator<_EXRAttribute> >::~_Vector_base(); // 805
	vector<_EXRAttribute, std::allocator<_EXRAttribute> >::~vector(); // 7335
	_Vector_base<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::_M_get_Tp_allocator(); // 803
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 298
	__new_allocator<char>::deallocate(
			char* __p,
			size_type __n);  // 215
	allocator<char>::deallocate(
			char* __p,
			size_t __n);  // 649
	deallocate(allocator_type& __a,
			pointer __p,
			size_type __n);  // 305
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_destroy(
			size_type __size);  // 299
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_dispose(); // 896
	allocator<char>::~allocator(); // 197
	_Alloc_hider::~_Alloc_hider(); // 896
	basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 7333
	~ChannelInfo(const ChannelInfo* this); // 88
	destroy_at<tinyexr::ChannelInfo>(ChannelInfo* __location); // 164
	_Destroy<tinyexr::ChannelInfo>(ChannelInfo* __pointer); // 226
	_Destroy<tinyexr::ChannelInfo*>(ChannelInfo* __first,
					ChannelInfo* __last);  // 1045
	_Destroy<tinyexr::ChannelInfo*, tinyexr::ChannelInfo>(ChannelInfo* __first,
								ChannelInfo* __last,
								allocator<tinyexr::ChannelInfo> &);  // 802
	__new_allocator<tinyexr::ChannelInfo>::deallocate(
			ChannelInfo* __p,
			size_type __n);  // 215
	allocator<tinyexr::ChannelInfo>::deallocate(
			ChannelInfo* __p,
			size_t __n);  // 649
	deallocate(allocator_type& __a,
			pointer __p,
			size_type __n);  // 396
	_Vector_base<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::_M_deallocate(
			pointer __p,
			size_t __n);  // 392
	_Vector_base<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::_M_deallocate(
			pointer __p,
			size_t __n);  // 375
	allocator<tinyexr::ChannelInfo>::~allocator(); // 139
	_Vector_impl::~_Vector_impl(); // 377
	_Vector_base<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::~_Vector_base(); // 805
	vector<tinyexr::ChannelInfo, std::allocator<tinyexr::ChannelInfo> >::~vector(); // 7335
	_HeaderInfo::~_HeaderInfo(); // 88
	destroy_at<tinyexr::_HeaderInfo>(_HeaderInfo* __location); // 164
	_Destroy<tinyexr::_HeaderInfo>(_HeaderInfo* __pointer); // 226
	_Destroy<tinyexr::_HeaderInfo*>(_HeaderInfo* __first,
					_HeaderInfo* __last);  // 1045
	_Destroy<tinyexr::_HeaderInfo*, tinyexr::_HeaderInfo>(_HeaderInfo* __first,
								_HeaderInfo* __last,
								allocator<tinyexr::_HeaderInfo> &);  // 802
	__new_allocator<tinyexr::_HeaderInfo>::deallocate(
			_HeaderInfo* __p,
			size_type __n);  // 215
	allocator<tinyexr::_HeaderInfo>::deallocate(
			_HeaderInfo* __p,
			size_t __n);  // 649
	deallocate(allocator_type& __a,
			pointer __p,
			size_type __n);  // 396
	_Vector_base<tinyexr::_HeaderInfo, std::allocator<tinyexr::_HeaderInfo> >::_M_deallocate(
			pointer __p,
			size_t __n);  // 392
	_Vector_base<tinyexr::_HeaderInfo, std::allocator<tinyexr::_HeaderInfo> >::_M_deallocate(
			pointer __p,
			size_t __n);  // 375
	allocator<tinyexr::_HeaderInfo>::~allocator(); // 139
	_Vector_impl::~_Vector_impl(); // 377
	_Vector_base<tinyexr::_HeaderInfo, std::allocator<tinyexr::_HeaderInfo> >::~_Vector_base(); // 805
	vector<tinyexr::_HeaderInfo, std::allocator<tinyexr::_HeaderInfo> >::~vector(); // 12894
	vector<tinyexr::_HeaderInfo, std::allocator<tinyexr::_HeaderInfo> >::size(); // 12879
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 707
	__new_allocator<char>::__new_allocator(
			const __new_allocator<char>  &);  // 173
	allocator<char>::allocator(
			const allocator<char>& __a);  // 205
	_Alloc_hider::_Alloc_hider(
			pointer __dat,
			const allocator<char>& __a);  // 707
	{
		const char* __end; // 713
		length(const char_type* __s); // 713
		__new_allocator<char>::allocate(
			size_type __n,
			const void  *);  // 203
		allocator<char>::allocate(
			size_t __n);  // 614
		allocate(allocator_type& __a,
			size_type __n);  // 142
		_S_allocate(_Char_alloc_type& __a,
				size_type __n);  // 164
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_create(
				size_type& __capacity,
				size_type __old_capacity);  // 235
		_Guard::_Guard(
			basic_string<char, std::char_traits<char>, std::allocator<char> >* __s);  // 251
		copy(char_type* __s1,
			const char_type* __s2,
			size_t __n);  // 453
		_S_copy(char* __d,
			const char* __s,
			size_type __n);  // 448
		_S_copy(char* __d,
			const char* __s,
			size_type __n);  // 489
		_S_copy_chars<char const*>(char* __p,
						const char* __k1,
						const char* __k2);  // 253
		assign(char_type& __c1,
			const char_type& __c2);  // 273
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
				size_type __n);  // 257
		_Guard::~_Guard(); // 258
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_construct<char const*>(
						const char* __beg,
						const char* __end,
						forward_iterator_tag);  // 714
	}
	basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<>(
			const char* __s,
			const allocator<char>& __a);  // 12830
	SetErrorMessage(const string& msg,
			const char ** err);  // 6979
	SetErrorMessage(const string& msg,
			const char ** err);  // 12829
	__new_allocator<char>::deallocate(
			char* __p,
			size_type __n);  // 215
	allocator<char>::deallocate(
			char* __p,
			size_t __n);  // 649
	deallocate(allocator_type& __a,
			pointer __p,
			size_type __n);  // 305
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_destroy(
			size_type __size);  // 299
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_dispose(); // 896
	allocator<char>::~allocator(); // 197
	_Alloc_hider::~_Alloc_hider(); // 896
	basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 12830
	allocator<char>::~allocator(); // 12830
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 707
	__new_allocator<char>::__new_allocator(
			const __new_allocator<char>  &);  // 173
	allocator<char>::allocator(
			const allocator<char>& __a);  // 205
	_Alloc_hider::_Alloc_hider(
			pointer __dat,
			const allocator<char>& __a);  // 707
	{
		const char* __end; // 713
		length(const char_type* __s); // 713
		__new_allocator<char>::allocate(
			size_type __n,
			const void  *);  // 203
		allocator<char>::allocate(
			size_t __n);  // 614
		allocate(allocator_type& __a,
			size_type __n);  // 142
		_S_allocate(_Char_alloc_type& __a,
				size_type __n);  // 164
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_create(
				size_type& __capacity,
				size_type __old_capacity);  // 235
		_Guard::_Guard(
			basic_string<char, std::char_traits<char>, std::allocator<char> >* __s);  // 251
		copy(char_type* __s1,
			const char_type* __s2,
			size_t __n);  // 453
		_S_copy(char* __d,
			const char* __s,
			size_type __n);  // 448
		_S_copy(char* __d,
			const char* __s,
			size_type __n);  // 489
		_S_copy_chars<char const*>(char* __p,
						const char* __k1,
						const char* __k2);  // 253
		assign(char_type& __c1,
			const char_type& __c2);  // 273
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
				size_type __n);  // 257
		_Guard::~_Guard(); // 258
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_construct<char const*>(
						const char* __beg,
						const char* __end,
						forward_iterator_tag);  // 714
	}
	basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<>(
			const char* __s,
			const allocator<char>& __a);  // 12835
	SetErrorMessage(const string& msg,
			const char ** err);  // 6979
	SetErrorMessage(const string& msg,
			const char ** err);  // 12835
	__new_allocator<char>::deallocate(
			char* __p,
			size_type __n);  // 215
	allocator<char>::deallocate(
			char* __p,
			size_t __n);  // 649
	deallocate(allocator_type& __a,
			pointer __p,
			size_type __n);  // 305
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_destroy(
			size_type __size);  // 299
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_dispose(); // 896
	allocator<char>::~allocator(); // 197
	_Alloc_hider::~_Alloc_hider(); // 896
	basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 12835
	allocator<char>::~allocator(); // 12835
} /* size: 0, variables: 3, inline expansions: 84 (0 bytes) */

// <047C52C2> ../thirdparty/tinyexr/tinyexr.h:12896
// variables: 8
// function calls: 108
int ParseEXRMultipartHeaderFromFile(EXRHeader*** exr_headers, int* num_headers, const EXRVersion* exr_version, const char* filename, const char ** err)
{
	FILE* fp; // 12910
	size_t filesize; // 12917
	vector<unsigned char, std::allocator<unsigned char> > buf; // 12923
	{
		size_t ret; // 12925
		fread(void* __ptr,
			size_t __size,
			size_t __n,
			FILE* __stream);  // 12926
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 707
		__new_allocator<char>::__new_allocator(
				const __new_allocator<char>  &);  // 173
		allocator<char>::allocator(
				const allocator<char>& __a);  // 205
		_Alloc_hider::_Alloc_hider(
				pointer __dat,
				const allocator<char>& __a);  // 707
		{
			const char* __end; // 713
			length(const char_type* __s); // 713
			__new_allocator<char>::allocate(
				size_type __n,
				const void  *);  // 203
			allocator<char>::allocate(
				size_t __n);  // 614
			allocate(allocator_type& __a,
				size_type __n);  // 142
			_S_allocate(_Char_alloc_type& __a,
					size_type __n);  // 164
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_create(
					size_type& __capacity,
					size_type __old_capacity);  // 235
			_Guard::_Guard(
				basic_string<char, std::char_traits<char>, std::allocator<char> >* __s);  // 251
			copy(char_type* __s1,
				const char_type* __s2,
				size_t __n);  // 453
			_S_copy(char* __d,
				const char* __s,
				size_type __n);  // 448
			_S_copy(char* __d,
				const char* __s,
				size_type __n);  // 489
			_S_copy_chars<char const*>(char* __p,
							const char* __k1,
							const char* __k2);  // 253
			assign(char_type& __c1,
				const char_type& __c2);  // 273
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
					size_type __n);  // 257
			_Guard::~_Guard(); // 258
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_construct<char const*>(
							const char* __beg,
							const char* __end,
							forward_iterator_tag);  // 714
		}
		basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<>(
				const char* __s,
				const allocator<char>& __a);  // 12931
		SetErrorMessage(const string& msg,
				const char ** err);  // 6979
		SetErrorMessage(const string& msg,
				const char ** err);  // 12931
		__new_allocator<char>::deallocate(
				char* __p,
				size_type __n);  // 215
		allocator<char>::deallocate(
				char* __p,
				size_t __n);  // 649
		deallocate(allocator_type& __a,
				pointer __p,
				size_type __n);  // 305
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_destroy(
				size_type __size);  // 299
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_dispose(); // 896
		allocator<char>::~allocator(); // 197
		_Alloc_hider::~_Alloc_hider(); // 896
		basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 12931
		allocator<char>::~allocator(); // 12931
	}
	__new_allocator<unsigned char>::__new_allocator(
			const __new_allocator<unsigned char>  &);  // 173
	allocator<unsigned char>::allocator(
			const allocator<unsigned char>& __a);  // 2210
	allocator<unsigned char>::~allocator(); // 2210
	_S_check_init_len(size_type __n,
				const allocator_type& __a);  // 587
	__new_allocator<unsigned char>::__new_allocator(
			const __new_allocator<unsigned char>  &);  // 173
	allocator<unsigned char>::allocator(
			const allocator<unsigned char>& __a);  // 153
	_Vector_impl_data::_Vector_impl_data(); // 153
	_Vector_impl::_Vector_impl(
			const _Tp_alloc_type& __a);  // 340
	__new_allocator<unsigned char>::allocate(
		size_type __n,
		const void  *);  // 203
	allocator<unsigned char>::allocate(
		size_t __n);  // 614
	allocate(allocator_type& __a,
		size_type __n);  // 387
	_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_allocate(
			size_t __n);  // 405
	_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_create_storage(
				size_t __n);  // 341
	_Vector_base<unsigned char, std::allocator<unsigned char> >::_Vector_base(
			size_t __n,
			const allocator_type& __a);  // 587
	{
		value_type* __val; // 892
		{
			const size_t  __len; // 950
		}
		__fill_a1<unsigned char, unsigned char>(unsigned char* __first,
							unsigned char* __last,
							const unsigned char& __x);  // 979
		__fill_a<unsigned char*, unsigned char>(unsigned char* __first,
							unsigned char* __last,
							const unsigned char& __value);  // 1148
		__fill_n_a<unsigned char*, long unsigned int, unsigned char>(unsigned char* __first,
										long unsigned int __n,
										const unsigned char& __value,
										random_access_iterator_tag);  // 1178
		fill_n<unsigned char*, long unsigned int, unsigned char>(unsigned char* __first,
									long unsigned int __n,
									const unsigned char& __value);  // 896
		_Construct<unsigned char>(unsigned char* __p); // 894
	}
	__uninit_default_n<unsigned char*, long unsigned int>(unsigned char* __first,
								long unsigned int __n);  // 888
	__uninit_default_n<unsigned char*, long unsigned int>(unsigned char* __first,
								long unsigned int __n);  // 947
	__uninitialized_default_n<unsigned char*, long unsigned int>(unsigned char* __first,
									long unsigned int __n);  // 1002
	__uninitialized_default_n_a<unsigned char*, long unsigned int, unsigned char>(unsigned char* __first,
											long unsigned int __n,
											allocator<unsigned char> &);  // 2011
	vector<unsigned char, std::allocator<unsigned char> >::_M_default_initialize(
				size_type __n);  // 588
	vector<unsigned char, std::allocator<unsigned char> >::vector(
		size_type __n,
		const allocator_type& __a);  // 12923
	allocator<unsigned char>::~allocator(); // 12923
	vector<unsigned char, std::allocator<unsigned char> >::_M_range_check(
			size_type __n);  // 1315
	vector<unsigned char, std::allocator<unsigned char> >::at(
		size_type __n);  // 12937
	_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_get_Tp_allocator(); // 803
	_Destroy<unsigned char*, unsigned char>(unsigned char* __first,
						unsigned char* __last,
						allocator<unsigned char> &);  // 802
	__new_allocator<unsigned char>::deallocate(
			unsigned char* __p,
			size_type __n);  // 215
	allocator<unsigned char>::deallocate(
			unsigned char* __p,
			size_t __n);  // 649
	deallocate(allocator_type& __a,
			pointer __p,
			size_type __n);  // 396
	_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_deallocate(
			pointer __p,
			size_t __n);  // 375
	_Vector_base<unsigned char, std::allocator<unsigned char> >::~_Vector_base(); // 805
	vector<unsigned char, std::allocator<unsigned char> >::~vector(); // 12938
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 707
	__new_allocator<char>::__new_allocator(
			const __new_allocator<char>  &);  // 173
	allocator<char>::allocator(
			const allocator<char>& __a);  // 205
	_Alloc_hider::_Alloc_hider(
			pointer __dat,
			const allocator<char>& __a);  // 707
	{
		const char* __end; // 713
		length(const char_type* __s); // 713
		__new_allocator<char>::allocate(
			size_type __n,
			const void  *);  // 203
		allocator<char>::allocate(
			size_t __n);  // 614
		allocate(allocator_type& __a,
			size_type __n);  // 142
		_S_allocate(_Char_alloc_type& __a,
				size_type __n);  // 164
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_create(
				size_type& __capacity,
				size_type __old_capacity);  // 235
		_Guard::_Guard(
			basic_string<char, std::char_traits<char>, std::allocator<char> >* __s);  // 251
		copy(char_type* __s1,
			const char_type* __s2,
			size_t __n);  // 453
		_S_copy(char* __d,
			const char* __s,
			size_type __n);  // 448
		_S_copy(char* __d,
			const char* __s,
			size_type __n);  // 489
		_S_copy_chars<char const*>(char* __p,
						const char* __k1,
						const char* __k2);  // 253
		assign(char_type& __c1,
			const char_type& __c2);  // 273
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
				size_type __n);  // 257
		_Guard::~_Guard(); // 258
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_construct<char const*>(
						const char* __beg,
						const char* __end,
						forward_iterator_tag);  // 714
	}
	basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<>(
			const char* __s,
			const allocator<char>& __a);  // 12902
	SetErrorMessage(const string& msg,
			const char ** err);  // 6979
	SetErrorMessage(const string& msg,
			const char ** err);  // 12901
	__new_allocator<char>::deallocate(
			char* __p,
			size_type __n);  // 215
	allocator<char>::deallocate(
			char* __p,
			size_t __n);  // 649
	deallocate(allocator_type& __a,
			pointer __p,
			size_type __n);  // 305
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_destroy(
			size_type __size);  // 299
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_dispose(); // 896
	allocator<char>::~allocator(); // 197
	_Alloc_hider::~_Alloc_hider(); // 896
	basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 12902
	allocator<char>::~allocator(); // 12902
	operator+<char, std::char_traits<char>, std::allocator<char> >(const char* __lhs,
									basic_string<char, std::char_traits<char>, std::allocator<char> >& __rhs);  // 12913
	SetErrorMessage(const string& msg,
			const char ** err);  // 12913
	allocator<char>::~allocator(); // 197
	_Alloc_hider::~_Alloc_hider(); // 896
	basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 12913
	allocator<char>::~allocator(); // 197
	_Alloc_hider::~_Alloc_hider(); // 896
	basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 12913
	allocator<char>::~allocator(); // 12913
} /* size: 0, variables: 3, inline expansions: 56 (0 bytes) */

// <047C504E> ../thirdparty/tinyexr/tinyexr.h:12997
// variables: 4
// function call: 1
int ParseEXRVersionFromFile(EXRVersion* version, const char* filename)
{
	FILE* fp; // 13006
	size_t file_size; // 13012
	unsigned char buf; // 13022
	size_t ret; // 13023
	fread(void* __ptr,
		size_t __size,
		size_t __n,
		FILE* __stream);  // 13023
} /* size: 0, variables: 4, inline expansions: 1 (0 bytes) */

// <047C088B> ../thirdparty/tinyexr/tinyexr.h:13033
// variables: 23
// function calls: 328
int LoadEXRMultipartImageFromMemory(EXRImage* exr_images, const EXRHeader ** exr_headers, unsigned int num_parts, const unsigned char* memory, const size_t size, const char ** err)
{
	size_t total_header_size; // 13046
	const char* marker; // 13056
	vector<std::vector<long unsigned int, std::allocator<long unsigned int> >, std::allocator<std::vector<long unsigned int, std::allocator<long unsigned int> > > > chunk_offset_table_list; // 13073
	{
		unsigned int i; // 13047
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 707
		__new_allocator<char>::__new_allocator(
				const __new_allocator<char>  &);  // 173
		allocator<char>::allocator(
				const allocator<char>& __a);  // 205
		_Alloc_hider::_Alloc_hider(
				pointer __dat,
				const allocator<char>& __a);  // 707
		{
			const char* __end; // 713
			length(const char_type* __s); // 713
			__new_allocator<char>::allocate(
				size_type __n,
				const void  *);  // 203
			allocator<char>::allocate(
				size_t __n);  // 614
			allocate(allocator_type& __a,
				size_type __n);  // 142
			_S_allocate(_Char_alloc_type& __a,
					size_type __n);  // 164
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_create(
					size_type& __capacity,
					size_type __old_capacity);  // 235
			_Guard::_Guard(
				basic_string<char, std::char_traits<char>, std::allocator<char> >* __s);  // 251
			copy(char_type* __s1,
				const char_type* __s2,
				size_t __n);  // 453
			_S_copy(char* __d,
				const char* __s,
				size_type __n);  // 448
			_S_copy(char* __d,
				const char* __s,
				size_type __n);  // 489
			_S_copy_chars<char const*>(char* __p,
							const char* __k1,
							const char* __k2);  // 253
			assign(char_type& __c1,
				const char_type& __c2);  // 273
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
					size_type __n);  // 257
			_Guard::~_Guard(); // 258
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_construct<char const*>(
							const char* __beg,
							const char* __end,
							forward_iterator_tag);  // 714
		}
		basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<>(
				const char* __s,
				const allocator<char>& __a);  // 13049
		SetErrorMessage(const string& msg,
				const char ** err);  // 6979
		SetErrorMessage(const string& msg,
				const char ** err);  // 13049
		__new_allocator<char>::deallocate(
				char* __p,
				size_type __n);  // 215
		allocator<char>::deallocate(
				char* __p,
				size_t __n);  // 649
		deallocate(allocator_type& __a,
				pointer __p,
				size_type __n);  // 305
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_destroy(
				size_type __size);  // 299
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_dispose(); // 896
		allocator<char>::~allocator(); // 197
		_Alloc_hider::~_Alloc_hider(); // 896
		basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 13049
		allocator<char>::~allocator(); // 13049
	}
	{
		size_t i; // 13074
		{
			vector<long unsigned int, std::allocator<long unsigned int> > offset_table; // 13075
			{
				size_t c; // 13078
				{
					tinyexr_uint64 offset; // 13079
					memcpy(void* __dest,
						const void* __src,
						size_t __len);  // 13080
					{
						const char* __end; // 713
						__new_allocator<char>::allocate(
							size_type __n,
							const void  *);  // 203
						allocator<char>::allocate(
							size_t __n);  // 614
						allocate(allocator_type& __a,
							size_type __n);  // 142
						_S_allocate(_Char_alloc_type& __a,
								size_type __n);  // 164
						basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_create(
								size_type& __capacity,
								size_type __old_capacity);  // 235
						_Guard::_Guard(
							basic_string<char, std::char_traits<char>, std::allocator<char> >* __s);  // 251
						copy(char_type* __s1,
							const char_type* __s2,
							size_t __n);  // 453
						_S_copy(char* __d,
							const char* __s,
							size_type __n);  // 448
						_S_copy(char* __d,
							const char* __s,
							size_type __n);  // 489
						_S_copy_chars<char const*>(char* __p,
										const char* __k1,
										const char* __k2);  // 253
						assign(char_type& __c1,
							const char_type& __c2);  // 273
						basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
								size_type __n);  // 257
						_Guard::~_Guard(); // 258
						basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_construct<char const*>(
										const char* __beg,
										const char* __end,
										forward_iterator_tag);  // 714
						length(const char_type* __s); // 713
					}
					basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 707
					__new_allocator<char>::__new_allocator(
							const __new_allocator<char>  &);  // 173
					allocator<char>::allocator(
							const allocator<char>& __a);  // 205
					_Alloc_hider::_Alloc_hider(
							pointer __dat,
							const allocator<char>& __a);  // 707
					basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<>(
							const char* __s,
							const allocator<char>& __a);  // 13084
					SetErrorMessage(const string& msg,
							const char ** err);  // 6979
					SetErrorMessage(const string& msg,
							const char ** err);  // 13084
					__new_allocator<char>::deallocate(
							char* __p,
							size_type __n);  // 215
					allocator<char>::deallocate(
							char* __p,
							size_t __n);  // 649
					deallocate(allocator_type& __a,
							pointer __p,
							size_type __n);  // 305
					basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_destroy(
							size_type __size);  // 299
					basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_dispose(); // 896
					allocator<char>::~allocator(); // 197
					_Alloc_hider::~_Alloc_hider(); // 896
					basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 13084
					allocator<char>::~allocator(); // 13084
				}
				vector<long unsigned int, std::allocator<long unsigned int> >::size(); // 13078
			}
			__new_allocator<long unsigned int>::__new_allocator(
					const __new_allocator<long unsigned int>  &);  // 173
			allocator<long unsigned int>::allocator(
					const allocator<long unsigned int>& __a);  // 2210
			allocator<long unsigned int>::~allocator(); // 2210
			_S_check_init_len(size_type __n,
						const allocator_type& __a);  // 587
			__new_allocator<long unsigned int>::__new_allocator(
					const __new_allocator<long unsigned int>  &);  // 173
			allocator<long unsigned int>::allocator(
					const allocator<long unsigned int>& __a);  // 153
			_Vector_impl_data::_Vector_impl_data(); // 153
			_Vector_impl::_Vector_impl(
					const _Tp_alloc_type& __a);  // 340
			__new_allocator<long unsigned int>::allocate(
				size_type __n,
				const void  *);  // 203
			allocator<long unsigned int>::allocate(
				size_t __n);  // 614
			allocate(allocator_type& __a,
				size_type __n);  // 387
			_Vector_base<long unsigned int, std::allocator<long unsigned int> >::_M_allocate(
					size_t __n);  // 405
			_Vector_base<long unsigned int, std::allocator<long unsigned int> >::_M_create_storage(
						size_t __n);  // 341
			_Vector_base<long unsigned int, std::allocator<long unsigned int> >::_Vector_base(
					size_t __n,
					const allocator_type& __a);  // 587
			{
				value_type* __val; // 892
				__fill_a1<long unsigned int*, long unsigned int>(long unsigned int* __first,
										long unsigned int* __last,
										const long unsigned int& __value);  // 979
				__fill_a<long unsigned int*, long unsigned int>(long unsigned int* __first,
										long unsigned int* __last,
										const long unsigned int& __value);  // 1148
				__fill_n_a<long unsigned int*, long unsigned int, long unsigned int>(long unsigned int* __first,
													long unsigned int __n,
													const long unsigned int& __value,
													random_access_iterator_tag);  // 1178
				fill_n<long unsigned int*, long unsigned int, long unsigned int>(long unsigned int* __first,
												long unsigned int __n,
												const long unsigned int& __value);  // 896
				_Construct<long unsigned int>(long unsigned int* __p); // 894
			}
			__uninit_default_n<long unsigned int*, long unsigned int>(long unsigned int* __first,
											long unsigned int __n);  // 888
			__uninit_default_n<long unsigned int*, long unsigned int>(long unsigned int* __first,
											long unsigned int __n);  // 947
			__uninitialized_default_n<long unsigned int*, long unsigned int>(long unsigned int* __first,
											long unsigned int __n);  // 1002
			__uninitialized_default_n_a<long unsigned int*, long unsigned int, long unsigned int>(long unsigned int* __first,
														long unsigned int __n,
														allocator<long unsigned int> &);  // 2011
			vector<long unsigned int, std::allocator<long unsigned int> >::_M_default_initialize(
						size_type __n);  // 588
			vector<long unsigned int, std::allocator<long unsigned int> >::vector(
				size_type __n,
				const allocator_type& __a);  // 13076
			allocator<long unsigned int>::~allocator(); // 13076
			_Vector_base<long unsigned int, std::allocator<long unsigned int> >::_M_get_Tp_allocator(); // 803
			_Destroy<long unsigned int*, long unsigned int>(long unsigned int* __first,
									long unsigned int* __last,
									allocator<long unsigned int> &);  // 802
			__new_allocator<long unsigned int>::deallocate(
					long unsigned int* __p,
					size_type __n);  // 215
			allocator<long unsigned int>::deallocate(
					long unsigned int* __p,
					size_t __n);  // 649
			deallocate(allocator_type& __a,
					pointer __p,
					size_type __n);  // 396
			_Vector_base<long unsigned int, std::allocator<long unsigned int> >::_M_deallocate(
					pointer __p,
					size_t __n);  // 392
			_Vector_base<long unsigned int, std::allocator<long unsigned int> >::_M_deallocate(
					pointer __p,
					size_t __n);  // 375
			_Vector_base<long unsigned int, std::allocator<long unsigned int> >::~_Vector_base(); // 805
			vector<long unsigned int, std::allocator<long unsigned int> >::~vector(); // 13094
			_Vector_base<long unsigned int, std::allocator<long unsigned int> >::_M_get_Tp_allocator(); // 633
			__new_allocator<long unsigned int>::__new_allocator(
					const __new_allocator<long unsigned int>  &);  // 173
			allocator<long unsigned int>::allocator(
					const allocator<long unsigned int>& __a);  // 726
			select_on_container_copy_construction(const allocator_type& __rhs); // 100
			_S_select_on_copy(const allocator<long unsigned int>& __a); // 633
			vector<long unsigned int, std::allocator<long unsigned int> >::size(); // 633
			__new_allocator<long unsigned int>::__new_allocator(
					const __new_allocator<long unsigned int>  &);  // 173
			allocator<long unsigned int>::allocator(
					const allocator<long unsigned int>& __a);  // 153
			_Vector_impl_data::_Vector_impl_data(); // 153
			_Vector_impl::_Vector_impl(
					const _Tp_alloc_type& __a);  // 340
			__new_allocator<long unsigned int>::allocate(
				size_type __n,
				const void  *);  // 203
			allocator<long unsigned int>::allocate(
				size_t __n);  // 614
			allocate(allocator_type& __a,
				size_type __n);  // 387
			_Vector_base<long unsigned int, std::allocator<long unsigned int> >::_M_allocate(
					size_t __n);  // 405
			_Vector_base<long unsigned int, std::allocator<long unsigned int> >::_M_create_storage(
						size_t __n);  // 341
			_Vector_base<long unsigned int, std::allocator<long unsigned int> >::_Vector_base(
					size_t __n,
					const allocator_type& __a);  // 633
			{
				ptrdiff_t __n; // 269
				{
				}
			}
			uninitialized_copy<__gnu_cxx::__normal_iterator<long unsigned int const*, std::vector<long unsigned int> >, long unsigned int*>(__normal_iterator<long unsigned int const*, std::vector<long unsigned int, std::allocator<long unsigned int> > > __first,
																__normal_iterator<long unsigned int const*, std::vector<long unsigned int, std::allocator<long unsigned int> > > __last,
																long unsigned int* __result);  // 635
			__uninitialized_copy_a<__gnu_cxx::__normal_iterator<long unsigned int const*, std::vector<long unsigned int> >, __gnu_cxx::__normal_iterator<long unsigned int const*, std::vector<long unsigned int> >, long unsigned int*, long unsigned int>(__normal_iterator<long unsigned int const*, std::vector<long unsigned int, std::allocator<long unsigned int> > > __first,
																__normal_iterator<long unsigned int const*, std::vector<long unsigned int, std::allocator<long unsigned int> > > __last,
																long unsigned int* __result,
																allocator<long unsigned int> &);  // 636
			allocator<long unsigned int>::~allocator(); // 633
			_Vector_base<long unsigned int, std::allocator<long unsigned int> >::_M_get_Tp_allocator(); // 638
			__normal_iterator<long unsigned int const::__normal_iterator(
						const long unsigned int* const& __i);  // 1029
			vector<long unsigned int, std::allocator<long unsigned int> >::end(); // 636
			__normal_iterator<long unsigned int const::__normal_iterator(
						const long unsigned int* const& __i);  // 1009
			vector<long unsigned int, std::allocator<long unsigned int> >::begin(); // 636
			vector<long unsigned int, std::allocator<long unsigned int> >::vector(
				const vector<long unsigned int, std::allocator<long unsigned int> >& __x);  // 110
			construct_at<std::vector<long unsigned int>, const std::vector<long unsigned int, std::allocator<long unsigned int> >&>(vector<long unsigned int, std::allocator<long unsigned int> >* __location); // 676
			construct<std::vector<long unsigned int>, const std::vector<long unsigned int, std::allocator<long unsigned int> >&>(allocator_type& __a,
																vector<long unsigned int, std::allocator<long unsigned int> >* __p);  // 1421
			size(const vector<std::vector<long unsigned int, std::allocator<long unsigned int> >, std::allocator<std::vector<long un this); // 2199
			max<long unsigned int>(const long unsigned int& __a,
						const long unsigned int& __b);  // 2202
			_M_check_len(const vector<std::vector<long unsigned int, std::allocator<long unsigned int> >, std::allocator<std::vector<long un this,
					size_type __n,
					const char* __s);  // 566
			__normal_iterator<std::vector<long unsigned int, std::allocator<long unsigned int> >::__normal_iterator(
						vector<long unsigned int, std::allocator<long unsigned int> >* const& __i);  // 999
			begin(const vector<std::vector<long unsigned int, std::allocator<long unsigned int> >, std::allocator<std::vector<long unsigned this); // 571
			__normal_iterator<std::vector<long unsigned int, std::allocator<long unsigned int> >::__normal_iterator(
						vector<long unsigned int, std::allocator<long unsigned int> >* const& __i);  // 1019
			end(const vector<std::vector<long unsigned int, std::allocator<long unsigned int> >, std::allocator<std::vector<long unsigned this); // 571
			__new_allocator<std::vector<long unsigned int, std::allocator<long unsigned int> > >::allocate(
				size_type __n,
				const void  *);  // 203
			allocator<std::vector<long unsigned int, std::allocator<long unsigned int> > >::allocate(
				size_t __n);  // 614
			allocate(allocator_type& __a,
				size_type __n);  // 387
			_M_allocate(const _Vector_base<std::vector<long unsigned int, std::allocator<long unsigned int> >, std::allocator<std::vector<long un this,
					size_t __n);  // 572
			{
				_Guard_alloc __guard; // 576
				__new_allocator<long unsigned int>::allocate(
					size_type __n,
					const void  *);  // 203
				allocator<long unsigned int>::allocate(
					size_t __n);  // 614
				allocate(allocator_type& __a,
					size_type __n);  // 387
				_Vector_base<long unsigned int, std::allocator<long unsigned int> >::_M_allocate(
						size_t __n);  // 405
				_Vector_base<long unsigned int, std::allocator<long unsigned int> >::_M_create_storage(
							size_t __n);  // 341
				__new_allocator<long unsigned int>::__new_allocator(
						const __new_allocator<long unsigned int>  &);  // 173
				allocator<long unsigned int>::allocator(
						const allocator<long unsigned int>& __a);  // 153
				_Vector_impl_data::_Vector_impl_data(); // 153
				_Vector_impl::_Vector_impl(
						const _Tp_alloc_type& __a);  // 340
				_Vector_base<long unsigned int, std::allocator<long unsigned int> >::_Vector_base(
						size_t __n,
						const allocator_type& __a);  // 633
				_Vector_base<long unsigned int, std::allocator<long unsigned int> >::_M_get_Tp_allocator(); // 633
				__new_allocator<long unsigned int>::__new_allocator(
						const __new_allocator<long unsigned int>  &);  // 173
				allocator<long unsigned int>::allocator(
						const allocator<long unsigned int>& __a);  // 726
				select_on_container_copy_construction(const allocator_type& __rhs); // 100
				_S_select_on_copy(const allocator<long unsigned int>& __a); // 633
				vector<long unsigned int, std::allocator<long unsigned int> >::size(); // 633
				{
					ptrdiff_t __n; // 269
					{
					}
				}
				uninitialized_copy<__gnu_cxx::__normal_iterator<long unsigned int const*, std::vector<long unsigned int> >, long unsigned int*>(__normal_iterator<long unsigned int const*, std::vector<long unsigned int, std::allocator<long unsigned int> > > __first,
																__normal_iterator<long unsigned int const*, std::vector<long unsigned int, std::allocator<long unsigned int> > > __last,
																long unsigned int* __result);  // 635
				__uninitialized_copy_a<__gnu_cxx::__normal_iterator<long unsigned int const*, std::vector<long unsigned int> >, __gnu_cxx::__normal_iterator<long unsigned int const*, std::vector<long unsigned int> >, long unsigned int*, long unsigned int>(__normal_iterator<long unsigned int const*, std::vector<long unsigned int, std::allocator<long unsigned int> > > __first,
																__normal_iterator<long unsigned int const*, std::vector<long unsigned int, std::allocator<long unsigned int> > > __last,
																long unsigned int* __result,
																allocator<long unsigned int> &);  // 636
				allocator<long unsigned int>::~allocator(); // 633
				_Vector_base<long unsigned int, std::allocator<long unsigned int> >::_M_get_Tp_allocator(); // 638
				__normal_iterator<long unsigned int const::__normal_iterator(
							const long unsigned int* const& __i);  // 1029
				vector<long unsigned int, std::allocator<long unsigned int> >::end(); // 636
				__normal_iterator<long unsigned int const::__normal_iterator(
							const long unsigned int* const& __i);  // 1009
				vector<long unsigned int, std::allocator<long unsigned int> >::begin(); // 636
				vector<long unsigned int, std::allocator<long unsigned int> >::vector(
					const vector<long unsigned int, std::allocator<long unsigned int> >& __x);  // 110
				construct_at<std::vector<long unsigned int>, const std::vector<long unsigned int, std::allocator<long unsigned int> >&>(vector<long unsigned int, std::allocator<long unsigned int> >* __location); // 676
				construct<std::vector<long unsigned int>, const std::vector<long unsigned int, std::allocator<long unsigned int> >&>(allocator_type& __a,
																vector<long unsigned int, std::allocator<long unsigned int> >* __p);  // 586
				_Guard_alloc::_Guard_alloc(
						pointer __s,
						size_type __l,
						_Base& __vect);  // 576
				__new_allocator<long unsigned int>::__new_allocator(
						const __new_allocator<long unsigned int>  &);  // 173
				allocator<long unsigned int>::allocator(
						const allocator<long unsigned int>& __a);  // 161
				_Vector_impl_data::_Vector_impl_data(
							_Vector_impl_data& __x);  // 161
				_Vector_impl::_Vector_impl(
						_Vector_impl& __x);  // 344
				_Vector_base<long unsigned int, std::allocator<long unsigned int> >::_Vector_base(
						_Vector_base<long unsigned int, std::allocator<long unsigned int> > &);  // 650
				vector<long unsigned int, std::allocator<long unsigned int> >::vector(
					vector<long unsigned int, std::allocator<long unsigned int> > &);  // 110
				construct_at<std::vector<long unsigned int>, std::vector<long unsigned int, std::allocator<long unsigned int> > >(vector<long unsigned int, std::allocator<long unsigned int> >* __location); // 676
				construct<std::vector<long unsigned int>, std::vector<long unsigned int, std::allocator<long unsigned int> > >(allocator_type& __a,
																vector<long unsigned int, std::allocator<long unsigned int> >* __p);  // 1288
				_Vector_base<long unsigned int, std::allocator<long unsigned int> >::_M_get_Tp_allocator(); // 803
				_Destroy<long unsigned int*, long unsigned int>(long unsigned int* __first,
										long unsigned int* __last,
										allocator<long unsigned int> &);  // 802
				_Vector_base<long unsigned int, std::allocator<long unsigned int> >::_M_deallocate(
						pointer __p,
						size_t __n);  // 375
				allocator<long unsigned int>::~allocator(); // 139
				_Vector_impl::~_Vector_impl(); // 377
				_Vector_base<long unsigned int, std::allocator<long unsigned int> >::~_Vector_base(); // 805
				vector<long unsigned int, std::allocator<long unsigned int> >::~vector(); // 88
				destroy_at<std::vector<long unsigned int> >(vector<long unsigned int, std::allocator<long unsigned int> >* __location); // 698
				destroy<std::vector<long unsigned int> >(allocator_type& __a,
									vector<long unsigned int, std::allocator<long unsigned int> >* __p);  // 1289
				__relocate_object_a<std::vector<long unsigned int>, std::vector<long unsigned int>, std::allocator<std::vector<long unsigned int> > >(vector<long unsigned int, std::allocator<long unsigned int> >* __dest,
																vector<long unsigned int, std::allocator<long unsigned int> >* __orig,
																allocator<std::vector<long unsigned int, std::allocator<long unsigned int> > >& __alloc);  // 1317
				__relocate_a_1<std::vector<long unsigned int>*, std::vector<long unsigned int>*, std::allocator<std::vector<long unsigned int> > >(vector<long unsigned int, std::allocator<long unsigned int> >* __first,
																vector<long unsigned int, std::allocator<long unsigned int> >* __last,
																vector<long unsigned int, std::allocator<long unsigned int> >* __result,
																allocator<std::vector<long unsigned int, std::allocator<long unsigned int> > >& __alloc);  // 1359
				__relocate_a<std::vector<long unsigned int>*, std::vector<long unsigned int>*, std::allocator<std::vector<long unsigned int> > >(vector<long unsigned int, std::allocator<long unsigned int> >* __first,
																vector<long unsigned int, std::allocator<long unsigned int> >* __last,
																vector<long unsigned int, std::allocator<long unsigned int> >* __result,
																allocator<std::vector<long unsigned int, std::allocator<long unsigned int> > >& __alloc);  // 539
				_S_relocate(pointer __first,
						pointer __last,
						pointer __result,
						_Tp_alloc_type& __alloc);  // 599
				__new_allocator<std::vector<long unsigned int, std::allocator<long unsigned int> > >::deallocate(
						vector<long unsigned int, std::allocator<long unsigned int> >* __p,
						size_type __n);  // 215
				allocator<std::vector<long unsigned int, std::allocator<long unsigned int> > >::deallocate(
						vector<long unsigned int, std::allocator<long unsigned int> >* __p,
						size_t __n);  // 649
				deallocate(allocator_type& __a,
						pointer __p,
						size_type __n);  // 396
				_M_deallocate(const _Vector_base<std::vector<long unsigned int, std::allocator<long unsigned int> >, std::allocator<std::vector<long un this,
						pointer __p,
						size_t __n);  // 392
				_M_deallocate(const _Vector_base<std::vector<long unsigned int, std::allocator<long unsigned int> >, std::allocator<std::vector<long un this,
						pointer __p,
						size_t __n);  // 1883
				_Guard_alloc::~_Guard_alloc(); // 640
			}
			_M_realloc_append<const std::vector<long unsigned int, std::allocator<long unsigned int> >&>(const vector<std::vector<long unsigned int, std::allocator<long unsigned int> >, std::allocator<std::vector<long unsigned this); // 1427
			push_back(const vector<std::vector<long unsigned int, std::allocator<long unsigned int> >, std::allocator<std::vector<long unsigned this,
					const value_type& __x);  // 13093
			_Vector_base<long unsigned int, std::allocator<long unsigned int> >::_M_get_Tp_allocator(); // 803
			_Destroy<long unsigned int*, long unsigned int>(long unsigned int* __first,
									long unsigned int* __last,
									allocator<long unsigned int> &);  // 802
			__new_allocator<long unsigned int>::deallocate(
					long unsigned int* __p,
					size_type __n);  // 215
			allocator<long unsigned int>::deallocate(
					long unsigned int* __p,
					size_t __n);  // 649
			deallocate(allocator_type& __a,
					pointer __p,
					size_type __n);  // 396
			_Vector_base<long unsigned int, std::allocator<long unsigned int> >::_M_deallocate(
					pointer __p,
					size_t __n);  // 392
			_Vector_base<long unsigned int, std::allocator<long unsigned int> >::_M_deallocate(
					pointer __p,
					size_t __n);  // 375
			allocator<long unsigned int>::~allocator(); // 139
			_Vector_impl::~_Vector_impl(); // 377
			_Vector_base<long unsigned int, std::allocator<long unsigned int> >::~_Vector_base(); // 805
			vector<long unsigned int, std::allocator<long unsigned int> >::~vector(); // 13094
		}
	}
	{
		size_t i; // 13097
		{
			vector<long unsigned int, std::allocator<long unsigned int> >& offset_table; // 13098
			string e; // 13116
			int ret; // 13117
			{
				size_t c; // 13102
				{
					const unsigned char* part_number_addr; // 13103
					unsigned int part_no; // 13105
					memcpy(void* __dest,
						const void* __src,
						size_t __len);  // 13106
					basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 707
					__new_allocator<char>::__new_allocator(
							const __new_allocator<char>  &);  // 173
					allocator<char>::allocator(
							const allocator<char>& __a);  // 205
					_Alloc_hider::_Alloc_hider(
							pointer __dat,
							const allocator<char>& __a);  // 707
					{
						const char* __end; // 713
						length(const char_type* __s); // 713
						__new_allocator<char>::allocate(
							size_type __n,
							const void  *);  // 203
						allocator<char>::allocate(
							size_t __n);  // 614
						allocate(allocator_type& __a,
							size_type __n);  // 142
						_S_allocate(_Char_alloc_type& __a,
								size_type __n);  // 164
						basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_create(
								size_type& __capacity,
								size_type __old_capacity);  // 235
						_Guard::_Guard(
							basic_string<char, std::char_traits<char>, std::allocator<char> >* __s);  // 251
						copy(char_type* __s1,
							const char_type* __s2,
							size_t __n);  // 453
						_S_copy(char* __d,
							const char* __s,
							size_type __n);  // 448
						_S_copy(char* __d,
							const char* __s,
							size_type __n);  // 489
						_S_copy_chars<char const*>(char* __p,
										const char* __k1,
										const char* __k2);  // 253
						assign(char_type& __c1,
							const char_type& __c2);  // 273
						basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
								size_type __n);  // 257
						_Guard::~_Guard(); // 258
						basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_construct<char const*>(
										const char* __beg,
										const char* __end,
										forward_iterator_tag);  // 714
					}
					basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<>(
							const char* __s,
							const allocator<char>& __a);  // 13110
					SetErrorMessage(const string& msg,
							const char ** err);  // 6979
					SetErrorMessage(const string& msg,
							const char ** err);  // 13110
					__new_allocator<char>::deallocate(
							char* __p,
							size_type __n);  // 215
					allocator<char>::deallocate(
							char* __p,
							size_t __n);  // 649
					deallocate(allocator_type& __a,
							pointer __p,
							size_type __n);  // 305
					basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_destroy(
							size_type __size);  // 299
					basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_dispose(); // 896
					allocator<char>::~allocator(); // 197
					_Alloc_hider::~_Alloc_hider(); // 896
					basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 13110
					allocator<char>::~allocator(); // 13110
				}
				vector<long unsigned int, std::allocator<long unsigned int> >::size(); // 13102
			}
			operator[](const vector<std::vector<long unsigned int, std::allocator<long unsigned int> >, std::allocator<std::vector<long unsigned this,
					size_type __n);  // 13099
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 590
			__new_allocator<char>::__new_allocator(
					const __new_allocator<char>  &);  // 173
			allocator<char>::allocator(
					const allocator<char>& __a);  // 209
			_Alloc_hider::_Alloc_hider(
					pointer __dat,
					allocator<char>& __a);  // 590
			allocator<char>::~allocator(); // 590
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_init_local_buf(); // 592
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
					size_type __length);  // 272
			assign(char_type& __c1,
				const char_type& __c2);  // 273
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
					size_type __n);  // 593
			basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(); // 13116
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 280
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 298
			__new_allocator<char>::deallocate(
					char* __p,
					size_type __n);  // 215
			allocator<char>::deallocate(
					char* __p,
					size_t __n);  // 649
			deallocate(allocator_type& __a,
					pointer __p,
					size_type __n);  // 305
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_destroy(
					size_type __size);  // 299
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_dispose(); // 896
			allocator<char>::~allocator(); // 197
			_Alloc_hider::~_Alloc_hider(); // 896
			basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 13125
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 280
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 298
			__new_allocator<char>::deallocate(
					char* __p,
					size_type __n);  // 215
			allocator<char>::deallocate(
					char* __p,
					size_t __n);  // 649
			deallocate(allocator_type& __a,
					pointer __p,
					size_type __n);  // 305
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_destroy(
					size_type __size);  // 299
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_dispose(); // 896
			allocator<char>::~allocator(); // 197
			_Alloc_hider::~_Alloc_hider(); // 896
			basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 13125
			basic_string<char, std::char_traits<char>, std::allocator<char> >::empty(); // 13120
			SetErrorMessage(const string& msg,
					const char ** err);  // 13121
		}
	}
	_M_get_Tp_allocator(const _Vector_base<std::vector<long unsigned int, std::allocator<long unsigned int> >, std::allocator<std::vector<long un this); // 803
	_Vector_base<long unsigned int, std::allocator<long unsigned int> >::_M_get_Tp_allocator(); // 803
	_Destroy<long unsigned int*, long unsigned int>(long unsigned int* __first,
							long unsigned int* __last,
							allocator<long unsigned int> &);  // 802
	__new_allocator<long unsigned int>::deallocate(
			long unsigned int* __p,
			size_type __n);  // 215
	allocator<long unsigned int>::deallocate(
			long unsigned int* __p,
			size_t __n);  // 649
	deallocate(allocator_type& __a,
			pointer __p,
			size_type __n);  // 396
	_Vector_base<long unsigned int, std::allocator<long unsigned int> >::_M_deallocate(
			pointer __p,
			size_t __n);  // 392
	_Vector_base<long unsigned int, std::allocator<long unsigned int> >::_M_deallocate(
			pointer __p,
			size_t __n);  // 375
	allocator<long unsigned int>::~allocator(); // 139
	_Vector_impl::~_Vector_impl(); // 377
	_Vector_base<long unsigned int, std::allocator<long unsigned int> >::~_Vector_base(); // 805
	vector<long unsigned int, std::allocator<long unsigned int> >::~vector(); // 88
	destroy_at<std::vector<long unsigned int> >(vector<long unsigned int, std::allocator<long unsigned int> >* __location); // 164
	_Destroy<std::vector<long unsigned int> >(vector<long unsigned int, std::allocator<long unsigned int> >* __pointer); // 226
	_Destroy<std::vector<long unsigned int>*>(vector<long unsigned int, std::allocator<long unsigned int> >* __first,
							vector<long unsigned int, std::allocator<long unsigned int> >* __last);  // 1045
	_Destroy<std::vector<long unsigned int>*, std::vector<long unsigned int> >(vector<long unsigned int, std::allocator<long unsigned int> >* __first,
											vector<long unsigned int, std::allocator<long unsigned int> >* __last,
											allocator<std::vector<long unsigned int, std::allocator<long unsigned int> > > &);  // 802
	__new_allocator<std::vector<long unsigned int, std::allocator<long unsigned int> > >::deallocate(
			vector<long unsigned int, std::allocator<long unsigned int> >* __p,
			size_type __n);  // 215
	allocator<std::vector<long unsigned int, std::allocator<long unsigned int> > >::deallocate(
			vector<long unsigned int, std::allocator<long unsigned int> >* __p,
			size_t __n);  // 649
	deallocate(allocator_type& __a,
			pointer __p,
			size_type __n);  // 396
	_M_deallocate(const _Vector_base<std::vector<long unsigned int, std::allocator<long unsigned int> >, std::allocator<std::vector<long un this,
			pointer __p,
			size_t __n);  // 392
	_M_deallocate(const _Vector_base<std::vector<long unsigned int, std::allocator<long unsigned int> >, std::allocator<std::vector<long un this,
			pointer __p,
			size_t __n);  // 375
	allocator<std::vector<long unsigned int, std::allocator<long unsigned int> > >::~allocator(); // 139
	_Vector_impl::~_Vector_impl(); // 377
	~_Vector_base(const _Vector_base<std::vector<long unsigned int, std::allocator<long unsigned int> >, std::allocator<std::vector<long un this); // 805
	~vector(const vector<std::vector<long unsigned int, std::allocator<long unsigned int> >, std::allocator<std::vector<long unsigned this); // 13128
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 707
	__new_allocator<char>::__new_allocator(
			const __new_allocator<char>  &);  // 173
	allocator<char>::allocator(
			const allocator<char>& __a);  // 205
	_Alloc_hider::_Alloc_hider(
			pointer __dat,
			const allocator<char>& __a);  // 707
	{
		const char* __end; // 713
		length(const char_type* __s); // 713
		__new_allocator<char>::allocate(
			size_type __n,
			const void  *);  // 203
		allocator<char>::allocate(
			size_t __n);  // 614
		allocate(allocator_type& __a,
			size_type __n);  // 142
		_S_allocate(_Char_alloc_type& __a,
				size_type __n);  // 164
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_create(
				size_type& __capacity,
				size_type __old_capacity);  // 235
		_Guard::_Guard(
			basic_string<char, std::char_traits<char>, std::allocator<char> >* __s);  // 251
		copy(char_type* __s1,
			const char_type* __s2,
			size_t __n);  // 453
		_S_copy(char* __d,
			const char* __s,
			size_type __n);  // 448
		_S_copy(char* __d,
			const char* __s,
			size_type __n);  // 489
		_S_copy_chars<char const*>(char* __p,
						const char* __k1,
						const char* __k2);  // 253
		assign(char_type& __c1,
			const char_type& __c2);  // 273
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
				size_type __n);  // 257
		_Guard::~_Guard(); // 258
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_construct<char const*>(
						const char* __beg,
						const char* __end,
						forward_iterator_tag);  // 714
	}
	basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<>(
			const char* __s,
			const allocator<char>& __a);  // 13041
	SetErrorMessage(const string& msg,
			const char ** err);  // 6979
	SetErrorMessage(const string& msg,
			const char ** err);  // 13040
	__new_allocator<char>::deallocate(
			char* __p,
			size_type __n);  // 215
	allocator<char>::deallocate(
			char* __p,
			size_t __n);  // 649
	deallocate(allocator_type& __a,
			pointer __p,
			size_type __n);  // 305
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_destroy(
			size_type __size);  // 299
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_dispose(); // 896
	allocator<char>::~allocator(); // 197
	_Alloc_hider::~_Alloc_hider(); // 896
	basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 13041
	allocator<char>::~allocator(); // 13041
} /* size: 0, variables: 3, inline expansions: 41 (0 bytes) */

// <047BF4A8> ../thirdparty/tinyexr/tinyexr.h:13130
// variables: 7
// function calls: 77
int LoadEXRMultipartImageFromFile(EXRImage* exr_images, const EXRHeader ** exr_headers, unsigned int num_parts, const char* filename, const char ** err)
{
	FILE* fp; // 13144
	size_t filesize; // 13151
	vector<unsigned char, std::allocator<unsigned char> > buf; // 13157
	{
		size_t ret; // 13159
		fread(void* __ptr,
			size_t __size,
			size_t __n,
			FILE* __stream);  // 13160
	}
	__new_allocator<unsigned char>::__new_allocator(
			const __new_allocator<unsigned char>  &);  // 173
	allocator<unsigned char>::allocator(
			const allocator<unsigned char>& __a);  // 2210
	allocator<unsigned char>::~allocator(); // 2210
	_S_check_init_len(size_type __n,
				const allocator_type& __a);  // 587
	__new_allocator<unsigned char>::__new_allocator(
			const __new_allocator<unsigned char>  &);  // 173
	allocator<unsigned char>::allocator(
			const allocator<unsigned char>& __a);  // 153
	_Vector_impl_data::_Vector_impl_data(); // 153
	_Vector_impl::_Vector_impl(
			const _Tp_alloc_type& __a);  // 340
	__new_allocator<unsigned char>::allocate(
		size_type __n,
		const void  *);  // 203
	allocator<unsigned char>::allocate(
		size_t __n);  // 614
	allocate(allocator_type& __a,
		size_type __n);  // 387
	_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_allocate(
			size_t __n);  // 405
	_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_create_storage(
				size_t __n);  // 341
	_Vector_base<unsigned char, std::allocator<unsigned char> >::_Vector_base(
			size_t __n,
			const allocator_type& __a);  // 587
	{
		value_type* __val; // 892
		{
			const size_t  __len; // 950
		}
		__fill_a1<unsigned char, unsigned char>(unsigned char* __first,
							unsigned char* __last,
							const unsigned char& __x);  // 979
		__fill_a<unsigned char*, unsigned char>(unsigned char* __first,
							unsigned char* __last,
							const unsigned char& __value);  // 1148
		__fill_n_a<unsigned char*, long unsigned int, unsigned char>(unsigned char* __first,
										long unsigned int __n,
										const unsigned char& __value,
										random_access_iterator_tag);  // 1178
		fill_n<unsigned char*, long unsigned int, unsigned char>(unsigned char* __first,
									long unsigned int __n,
									const unsigned char& __value);  // 896
		_Construct<unsigned char>(unsigned char* __p); // 894
	}
	__uninit_default_n<unsigned char*, long unsigned int>(unsigned char* __first,
								long unsigned int __n);  // 888
	__uninit_default_n<unsigned char*, long unsigned int>(unsigned char* __first,
								long unsigned int __n);  // 947
	__uninitialized_default_n<unsigned char*, long unsigned int>(unsigned char* __first,
									long unsigned int __n);  // 1002
	__uninitialized_default_n_a<unsigned char*, long unsigned int, unsigned char>(unsigned char* __first,
											long unsigned int __n,
											allocator<unsigned char> &);  // 2011
	vector<unsigned char, std::allocator<unsigned char> >::_M_default_initialize(
				size_type __n);  // 588
	vector<unsigned char, std::allocator<unsigned char> >::vector(
		size_type __n,
		const allocator_type& __a);  // 13157
	allocator<unsigned char>::~allocator(); // 13157
	vector<unsigned char, std::allocator<unsigned char> >::_M_range_check(
			size_type __n);  // 1315
	vector<unsigned char, std::allocator<unsigned char> >::at(
		size_type __n);  // 13167
	__new_allocator<unsigned char>::deallocate(
			unsigned char* __p,
			size_type __n);  // 215
	allocator<unsigned char>::deallocate(
			unsigned char* __p,
			size_t __n);  // 649
	deallocate(allocator_type& __a,
			pointer __p,
			size_type __n);  // 396
	_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_deallocate(
			pointer __p,
			size_t __n);  // 375
	_Vector_base<unsigned char, std::allocator<unsigned char> >::~_Vector_base(); // 805
	_Vector_base<unsigned char, std::allocator<unsigned char> >::_M_get_Tp_allocator(); // 803
	_Destroy<unsigned char*, unsigned char>(unsigned char* __first,
						unsigned char* __last,
						allocator<unsigned char> &);  // 802
	vector<unsigned char, std::allocator<unsigned char> >::~vector(); // 13168
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 707
	__new_allocator<char>::__new_allocator(
			const __new_allocator<char>  &);  // 173
	allocator<char>::allocator(
			const allocator<char>& __a);  // 205
	_Alloc_hider::_Alloc_hider(
			pointer __dat,
			const allocator<char>& __a);  // 707
	{
		const char* __end; // 713
		length(const char_type* __s); // 713
		__new_allocator<char>::allocate(
			size_type __n,
			const void  *);  // 203
		allocator<char>::allocate(
			size_t __n);  // 614
		allocate(allocator_type& __a,
			size_type __n);  // 142
		_S_allocate(_Char_alloc_type& __a,
				size_type __n);  // 164
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_create(
				size_type& __capacity,
				size_type __old_capacity);  // 235
		_Guard::_Guard(
			basic_string<char, std::char_traits<char>, std::allocator<char> >* __s);  // 251
		copy(char_type* __s1,
			const char_type* __s2,
			size_t __n);  // 453
		_S_copy(char* __d,
			const char* __s,
			size_type __n);  // 448
		_S_copy(char* __d,
			const char* __s,
			size_type __n);  // 489
		_S_copy_chars<char const*>(char* __p,
						const char* __k1,
						const char* __k2);  // 253
		assign(char_type& __c1,
			const char_type& __c2);  // 273
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
				size_type __n);  // 257
		_Guard::~_Guard(); // 258
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_construct<char const*>(
						const char* __beg,
						const char* __end,
						forward_iterator_tag);  // 714
	}
	basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<>(
			const char* __s,
			const allocator<char>& __a);  // 13136
	SetErrorMessage(const string& msg,
			const char ** err);  // 6979
	SetErrorMessage(const string& msg,
			const char ** err);  // 13135
	__new_allocator<char>::deallocate(
			char* __p,
			size_type __n);  // 215
	allocator<char>::deallocate(
			char* __p,
			size_t __n);  // 649
	deallocate(allocator_type& __a,
			pointer __p,
			size_type __n);  // 305
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_destroy(
			size_type __size);  // 299
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_dispose(); // 896
	allocator<char>::~allocator(); // 197
	_Alloc_hider::~_Alloc_hider(); // 896
	basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 13136
	allocator<char>::~allocator(); // 13136
	operator+<char, std::char_traits<char>, std::allocator<char> >(const char* __lhs,
									basic_string<char, std::char_traits<char>, std::allocator<char> >& __rhs);  // 13147
	SetErrorMessage(const string& msg,
			const char ** err);  // 13147
	allocator<char>::~allocator(); // 197
	_Alloc_hider::~_Alloc_hider(); // 896
	basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 13147
	allocator<char>::~allocator(); // 197
	_Alloc_hider::~_Alloc_hider(); // 896
	basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 13147
	allocator<char>::~allocator(); // 13147
} /* size: 0, variables: 3, inline expansions: 56 (0 bytes) */

// <047BD377> ../thirdparty/tinyexr/tinyexr.h:13170
// variables: 11
// function calls: 122
int SaveEXR(const float* data, int width, int height, int components, const int save_as_fp16, const char* outfilename, const char ** err)
{
	EXRHeader header; // 13182
	EXRImage image; // 13192
	vector<float, std::allocator<float> > images; // 13197
	float* image_ptr; // 13219
	int ret; // 13297
	{
		stringstream ss; // 13175
		basic_ios<char, std::char_traits<char> >::basic_ios(); // 1042
		basic_istream<char, std::char_traits<char> >::basic_istream(
				const int  __in_chrg,
				const void **  __vtt_parm);  // 1021
		basic_ostream<char, std::char_traits<char> >::basic_ostream(
				const int  __in_chrg,
				const void **  __vtt_parm);  // 1021
		basic_iostream<char, std::char_traits<char> >::basic_iostream(
				const int  __in_chrg,
				const void **  __vtt_parm);  // 1042
		basic_streambuf<char, std::char_traits<char> >::basic_streambuf(); // 136
		__new_allocator<char>::__new_allocator(
				const __new_allocator<char>  &);  // 173
		allocator<char>::allocator(
				const allocator<char>& __a);  // 209
		_Alloc_hider::_Alloc_hider(
				pointer __dat,
				allocator<char>& __a);  // 590
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 590
		allocator<char>::~allocator(); // 590
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_init_local_buf(); // 592
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
				size_type __length);  // 272
		assign(char_type& __c1,
			const char_type& __c2);  // 273
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
				size_type __n);  // 593
		basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(); // 136
		basic_stringbuf<char, std::char_traits<char>, std::allocator<char> >::basic_stringbuf(
				openmode __mode);  // 1042
		basic_stringstream<char, std::char_traits<char>, std::allocator<char> >::basic_stringstream(
					const int  __in_chrg,
					const void **  __vtt_parm);  // 13175
		operator<< <std::char_traits<char> >(basic_ostream<char, std::char_traits<char> >& __out,
							const char* __s);  // 13176
		__check_facet<std::ctype<char> >(const ctype<char>* __f); // 465
		ctype<char>::widen(
			char __c);  // 882
		ctype<char>::widen(
			char __c);  // 465
		basic_ios<char, std::char_traits<char> >::widen(
			char __c);  // 67
		flush<char, std::char_traits<char> >(basic_ostream<char, std::char_traits<char> >& __os); // 67
		endl<char, std::char_traits<char> >(basic_ostream<char, std::char_traits<char> >& __os); // 121
		basic_ostream<char, std::char_traits<char> >::operator<<(
				__ostream_type& (*__pf)(__ostream_type &));  // 13176
		__new_allocator<char>::__new_allocator(
				const __new_allocator<char>  &);  // 173
		allocator<char>::allocator(
				const allocator<char>& __a);  // 205
		_Alloc_hider::_Alloc_hider(
				pointer __dat,
				const allocator<char>& __a);  // 602
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 602
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_init_local_buf(); // 604
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
				size_type __length);  // 272
		assign(char_type& __c1,
			const char_type& __c2);  // 273
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
				size_type __n);  // 605
		basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(
				const allocator<char>& __a);  // 254
		__new_allocator<char>::__new_allocator(
				const __new_allocator<char>  &);  // 173
		allocator<char>::allocator(
				const allocator<char>& __a);  // 2908
		basic_string<char, std::char_traits<char>, std::allocator<char> >::get_allocator(); // 254
		{
			char_type* __hi; // 255
			{
				char_type* __pptr; // 447
				basic_streambuf<char, std::char_traits<char> >::pptr(); // 447
				{
					char_type* __egptr; // 449
					basic_streambuf<char, std::char_traits<char> >::egptr(); // 449
				}
			}
			basic_stringbuf<char, std::char_traits<char>, std::allocator<char> >::_M_high_mark(); // 255
			basic_streambuf<char, std::char_traits<char> >::pbase(); // 256
			basic_string<char, std::char_traits<char>, std::allocator<char> >::assign(
				const basic_string<char, std::char_traits<char>, std::allocator<char> >& __str);  // 906
			basic_string<char, std::char_traits<char>, std::allocator<char> >::operator=(
					const basic_string<char, std::char_traits<char>, std::allocator<char> >& __str);  // 258
		}
		allocator<char>::~allocator(); // 254
		basic_stringbuf<char, std::char_traits<char>, std::allocator<char> >::str(); // 1168
		basic_stringstream<char, std::char_traits<char>, std::allocator<char> >::str(); // 13178
		SetErrorMessage(const string& msg,
				const char ** err);  // 6979
		SetErrorMessage(const string& msg,
				const char ** err);  // 13178
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 280
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 298
		__new_allocator<char>::deallocate(
				char* __p,
				size_type __n);  // 215
		allocator<char>::deallocate(
				char* __p,
				size_t __n);  // 649
		deallocate(allocator_type& __a,
				pointer __p,
				size_type __n);  // 305
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_destroy(
				size_type __size);  // 299
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_dispose(); // 896
		allocator<char>::~allocator(); // 197
		_Alloc_hider::~_Alloc_hider(); // 896
		basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 13178
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 280
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 298
		__new_allocator<char>::deallocate(
				char* __p,
				size_type __n);  // 215
		allocator<char>::deallocate(
				char* __p,
				size_t __n);  // 649
		deallocate(allocator_type& __a,
				pointer __p,
				size_type __n);  // 305
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_destroy(
				size_type __size);  // 299
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_dispose(); // 896
		allocator<char>::~allocator(); // 197
		_Alloc_hider::~_Alloc_hider(); // 896
		basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 81
		basic_streambuf<char, std::char_traits<char> >::~basic_streambuf(); // 81
		basic_stringbuf<char, std::char_traits<char>, std::allocator<char> >::~basic_stringbuf(); // 1084
		basic_ostream<char, std::char_traits<char> >::~basic_ostream(
				const int  __in_chrg,
				const void **  __vtt_parm);  // 1017
		basic_istream<char, std::char_traits<char> >::~basic_istream(
				const int  __in_chrg,
				const void **  __vtt_parm);  // 1017
		basic_iostream<char, std::char_traits<char> >::~basic_iostream(
				const int  __in_chrg,
				const void **  __vtt_parm);  // 1084
		basic_ios<char, std::char_traits<char> >::~basic_ios(); // 1084
		basic_stringstream<char, std::char_traits<char>, std::allocator<char> >::~basic_stringstream(
					const int  __in_chrg,
					const void **  __vtt_parm);  // 13180
	}
	{
		size_t i; // 13209
		vector<float, std::allocator<float> >::operator[](
				size_type __n);  // 13210
		vector<float, std::allocator<float> >::operator[](
				size_type __n);  // 13211
		vector<float, std::allocator<float> >::operator[](
				size_type __n);  // 13212
		vector<float, std::allocator<float> >::operator[](
				size_type __n);  // 13214
	}
	{
		int i; // 13283
	}
	memset(void* __dest,
		int __ch,
		size_t __len);  // 12713
	InitEXRHeader(EXRHeader* exr_header); // 12708
	InitEXRHeader(EXRHeader* exr_header); // 13183
	InitEXRImage(EXRImage* exr_image); // 13193
	vector<float, std::allocator<float> >::data(); // 13201
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 13201
	vector<float, std::allocator<float> >::_M_range_check(
			size_type __n);  // 1315
	vector<float, std::allocator<float> >::at(
		size_type __n);  // 13226
	vector<float, std::allocator<float> >::_M_range_check(
			size_type __n);  // 1315
	vector<float, std::allocator<float> >::at(
		size_type __n);  // 13227
	vector<float, std::allocator<float> >::_M_range_check(
			size_type __n);  // 1315
	vector<float, std::allocator<float> >::at(
		size_type __n);  // 13228
	strncpy(char* __dest,
		const char* __src,
		size_t __len);  // 13263
	strncpy(char* __dest,
		const char* __src,
		size_t __len);  // 13264
	strncpy(char* __dest,
		const char* __src,
		size_t __len);  // 13265
	vector<float, std::allocator<float> >::_M_range_check(
			size_type __n);  // 1315
	vector<float, std::allocator<float> >::at(
		size_type __n);  // 13230
	strncpy(char* __dest,
		const char* __src,
		size_t __len);  // 13274
	__new_allocator<float>::deallocate(
			float* __p,
			size_type __n);  // 215
	allocator<float>::deallocate(
			float* __p,
			size_t __n);  // 649
	deallocate(allocator_type& __a,
			pointer __p,
			size_type __n);  // 396
	_Vector_base<float, std::allocator<float> >::_M_deallocate(
			pointer __p,
			size_t __n);  // 392
	_Vector_base<float, std::allocator<float> >::_M_deallocate(
			pointer __p,
			size_t __n);  // 375
	allocator<float>::~allocator(); // 139
	_Vector_impl::~_Vector_impl(); // 377
	_Vector_base<float, std::allocator<float> >::~_Vector_base(); // 805
	_Vector_base<float, std::allocator<float> >::_M_get_Tp_allocator(); // 803
	_Destroy<float*, float>(float* __first,
				float* __last,
				allocator<float> &);  // 802
	vector<float, std::allocator<float> >::~vector(); // 13197
	vector<float, std::allocator<float> >::_M_range_check(
			size_type __n);  // 1315
	vector<float, std::allocator<float> >::at(
		size_type __n);  // 13221
	vector<float, std::allocator<float> >::_M_range_check(
			size_type __n);  // 1315
	vector<float, std::allocator<float> >::at(
		size_type __n);  // 13222
	vector<float, std::allocator<float> >::_M_range_check(
			size_type __n);  // 1315
	vector<float, std::allocator<float> >::at(
		size_type __n);  // 13223
	vector<float, std::allocator<float> >::_M_range_check(
			size_type __n);  // 1315
	vector<float, std::allocator<float> >::at(
		size_type __n);  // 13224
	strncpy(char* __dest,
		const char* __src,
		size_t __len);  // 13248
	strncpy(char* __dest,
		const char* __src,
		size_t __len);  // 13249
	strncpy(char* __dest,
		const char* __src,
		size_t __len);  // 13250
	strncpy(char* __dest,
		const char* __src,
		size_t __len);  // 13251
} /* size: 0, variables: 5, inline expansions: 41 (0 bytes) */

