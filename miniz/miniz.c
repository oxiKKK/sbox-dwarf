
//
// miniz/miniz.c
//
//	referenced by: librendersystemvulkan.so
//
//	functions: 178
//

// <01ABDF3E> miniz/miniz.c:39
// variables: 4
void mz_adler32(mz_ulong adler, const unsigned char* ptr, size_t buf_len)
{
	mz_uint32 i; // 41
	mz_uint32 s1; // 41
	mz_uint32 s2; // 41
	size_t block_len; // 42
} /* size: 427, variables: 4 */

// <01ABDE91> miniz/miniz.c:88
// variables: 3
void mz_crc32(mz_ulong crc, const mz_uint8* ptr, size_t buf_len)
{
	const mz_uint32   s_crc_table; // 90
	mz_uint32 mz_crc32; // 131
	const mz_uint8* pByte_buf; // 132
} /* size: 179, variables: 3 */

// <01ABE12A> miniz/miniz.c:155
void mz_free(void* p)
{
} /* size: 0 */

// <01ABDE03> miniz/miniz.c:160
void* miniz_def_alloc_func(void* opaque, size_t items, size_t size)
{
} /* size: 16 */

// <01ABDDA7> miniz/miniz.c:165
void miniz_def_free_func(void* opaque, void* address)
{
} /* size: 12 */

// <01ABDD14> miniz/miniz.c:170
void* miniz_def_realloc_func(void* opaque, void* address, size_t items, size_t size)
{
} /* size: 0 */

// <01ABDCFA> miniz/miniz.c:176
void mz_version(void)
{
} /* size: 0 */

// <01ABE345> miniz/miniz.c:183
// function calls: 2
void mz_deflateInit(mz_streamp pStream, int level)
{
	tdefl_create_comp_flags_from_zip_params(int level,
						int window_bits,
						int strategy);  // 191
	mz_deflateInit2(mz_streamp pStream,
			int level,
			int method,
			int window_bits,
			int mem_level,
			int strategy);  // 185
} /* size: 0, inline expansions: 2 (0 bytes) */

// <01ABDCD7> miniz/miniz.c:183
void mz_deflateInit(mz_streamp pStream, int level)
{
} /* size: 0 */

// <01ABE4EA> miniz/miniz.c:188
// variables: 2
void mz_deflateInit2(mz_streamp pStream, int level, int method, int window_bits, int mem_level, int strategy)
{
	tdefl_compressor* pComp; // 190
	mz_uint comp_flags; // 191
} /* size: 0, variables: 2 */

// <01ABDC21> miniz/miniz.c:224
void mz_deflateReset(mz_streamp pStream)
{
} /* size: 0 */

// <01ABDAFC> miniz/miniz.c:233
// variables: 6
// function call: 1
void mz_deflate(mz_streamp pStream, int flush)
{
	size_t in_bytes; // 235
	size_t out_bytes; // 235
	mz_ulong orig_total_in; // 236
	mz_ulong orig_total_out; // 236
	int mz_status; // 237
	{
		tdefl_status defl_status; // 254
		tdefl_get_adler32(tdefl_compressor* d); // 262
	}
} /* size: 444, variables: 5 */

// <01ABE16F> miniz/miniz.c:291
void mz_deflateEnd(mz_streamp pStream)
{
} /* size: 0 */

// <01ABE1A0> miniz/miniz.c:303
void mz_deflateBound(mz_streamp pStream, mz_ulong source_len)
{
} /* size: 0 */

// <01ABD800> miniz/miniz.c:310
// variables: 2
// function calls: 6
void mz_compress2(unsigned char* pDest, mz_ulong* pDest_len, const unsigned char* pSource, mz_ulong source_len, int level)
{
	int status; // 312
	mz_stream stream; // 313
	memset(void* __dest,
		int __ch,
		size_t __len);  // 314
	tdefl_create_comp_flags_from_zip_params(int level,
						int window_bits,
						int strategy);  // 191
	mz_deflateInit2(mz_streamp pStream,
			int level,
			int method,
			int window_bits,
			int mem_level,
			int strategy);  // 185
	mz_deflateInit(mz_streamp pStream,
			int level);  // 325
	mz_deflateEnd(mz_streamp pStream); // 337
	mz_deflateEnd(mz_streamp pStream); // 332
} /* size: 403, variables: 2, inline expansions: 6 (363 bytes) */

// <01ABD75D> miniz/miniz.c:340
void mz_compress(unsigned char* pDest, mz_ulong* pDest_len, const unsigned char* pSource, mz_ulong source_len)
{
} /* size: 0 */

// <01ABD6EC> miniz/miniz.c:345
// function call: 1
void mz_compressBound(mz_ulong source_len)
{
	mz_deflateBound(mz_streamp pStream,
			mz_ulong source_len);  // 347
} /* size: 77, inline expansions: 1 (72 bytes) */

// <01ABE1D6> miniz/miniz.c:359
// variable: 1
void mz_inflateInit2(mz_streamp pStream, int window_bits)
{
	inflate_state* pDecomp; // 361
} /* size: 0, variables: 1 */

// <01ABE236> miniz/miniz.c:395
// function call: 1
void mz_inflateInit(mz_streamp pStream)
{
	mz_inflateInit2(mz_streamp pStream,
			int window_bits);  // 397
} /* size: 0, inline expansions: 1 (0 bytes) */

// <01ABD6A2> miniz/miniz.c:395
void mz_inflateInit(mz_streamp pStream)
{
} /* size: 0 */

// <01ABD4A4> miniz/miniz.c:400
// variables: 8
// function calls: 2
void mz_inflate(mz_streamp pStream, int flush)
{
	inflate_state* pState; // 402
	mz_uint n; // 403
	mz_uint first_call; // 403
	mz_uint decomp_flags; // 403
	size_t in_bytes; // 404
	size_t out_bytes; // 404
	size_t orig_avail_in; // 404
	tinfl_status status; // 405
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 485
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 460
} /* size: 1017, variables: 8, inline expansions: 2 (27 bytes) */

// <01ABD48C> miniz/miniz.c:512
void mz_inflateEnd(mz_streamp pStream)
{
} /* size: 0 */

// <01ABD2A2> miniz/miniz.c:524
// variables: 2
// function calls: 5
void mz_uncompress(unsigned char* pDest, mz_ulong* pDest_len, const unsigned char* pSource, mz_ulong source_len)
{
	mz_stream stream; // 526
	int status; // 527
	memset(void* __dest,
		int __ch,
		size_t __len);  // 528
	mz_inflateInit2(mz_streamp pStream,
			int window_bits);  // 397
	mz_inflateInit(mz_streamp pStream); // 539
	mz_inflateEnd(mz_streamp pStream); // 551
	mz_deflateEnd(mz_streamp pStream); // 546
} /* size: 355, variables: 2, inline expansions: 5 (197 bytes) */

// <01ABD190> miniz/miniz.c:554
// variables: 2
void mz_error(int err)
{
	 s_error_descs; // 560
	mz_uint i; // 564
} /* size: 0, variables: 2 */

// <01ABD09B> miniz/miniz.c:706
// variables: 12
void tdefl_radix_sort_syms(mz_uint num_syms, tdefl_sym_freq* pSyms0, tdefl_sym_freq* pSyms1)
{
	mz_uint32 total_passes; // 708
	mz_uint32 pass_shift; // 708
	mz_uint32 pass; // 708
	mz_uint32 i; // 708
	mz_uint32 hist; // 708
	tdefl_sym_freq* pCur_syms; // 709
	tdefl_sym_freq* pNew_syms; // 709
	{
		mz_uint freq; // 713
	}
	{
		const mz_uint32* pHist; // 721
		mz_uint offsets; // 722
		mz_uint cur_ofs; // 722
		{
			tdefl_sym_freq* t; // 731
		}
	}
} /* size: 0, variables: 7 */

// <01ABD02C> miniz/miniz.c:740
// variables: 6
void tdefl_calculate_minimum_redundancy(tdefl_sym_freq* A, int n)
{
	int root; // 742
	int leaf; // 742
	int next; // 742
	int avbl; // 742
	int used; // 742
	int dpth; // 742
} /* size: 0, variables: 6 */

// <01ABCFE2> miniz/miniz.c:800
// variables: 2
void tdefl_huffman_enforce_max_code_size(int* pNum_codes, int code_list_len, int max_code_size)
{
	int i; // 802
	mz_uint32 total; // 803
} /* size: 0, variables: 2 */

// <01ABCADF> miniz/miniz.c:824
// variables: 17
// function calls: 7
void tdefl_optimize_huffman_table(tdefl_compressor* d, int table_num, int table_len, int code_size_limit, int static_table)
{
	int i; // 826
	int j; // 826
	int l; // 826
	int num_codes; // 826
	mz_uint next_code; // 827
	{
		 syms0; // 836
		 syms1; // 836
		tdefl_sym_freq* pSyms; // 836
		int num_used_syms; // 837
		const mz_uint16* pSym_count; // 838
		memset(void* __dest,
			int __ch,
			size_t __len);  // 710
		{
			mz_uint freq; // 713
		}
		{
			const mz_uint32* pHist; // 721
			mz_uint offsets; // 722
			mz_uint cur_ofs; // 722
		}
		tdefl_radix_sort_syms(mz_uint num_syms,
					tdefl_sym_freq* pSyms0,
					tdefl_sym_freq* pSyms1);  // 846
		tdefl_calculate_minimum_redundancy(tdefl_sym_freq* A,
							int n);  // 847
		tdefl_huffman_enforce_max_code_size(int* pNum_codes,
							int code_list_len,
							int max_code_size);  // 852
		memset(void* __dest,
			int __ch,
			size_t __len);  // 854
		memset(void* __dest,
			int __ch,
			size_t __len);  // 855
	}
	{
		mz_uint rev_code; // 867
		mz_uint code; // 867
		mz_uint code_size; // 867
	}
	memset(void* __dest,
		int __ch,
		size_t __len);  // 828
} /* size: 2071, variables: 5, inline expansions: 1 (24 bytes) */

// <01ABC694> miniz/miniz.c:943
// variables: 28
// function calls: 3
void tdefl_start_dynamic_block(tdefl_compressor* d)
{
	int num_lit_codes; // 945
	int num_dist_codes; // 945
	int num_bit_lengths; // 945
	mz_uint i; // 946
	mz_uint total_code_sizes_to_pack; // 946
	mz_uint num_packed_code_sizes; // 946
	mz_uint rle_z_count; // 946
	mz_uint rle_repeat_count; // 946
	mz_uint packed_code_sizes_index; // 946
	mz_uint8 code_sizes_to_pack; // 947
	mz_uint8 packed_code_sizes; // 947
	mz_uint8 prev_code_size; // 947
	{
		mz_uint8 code_size; // 971
	}
	{
		mz_uint bits; // 1007
		mz_uint len; // 1007
	}
	{
		mz_uint bits; // 1009
		mz_uint len; // 1009
	}
	{
		mz_uint bits; // 1010
		mz_uint len; // 1010
	}
	{
		mz_uint bits; // 1016
		mz_uint len; // 1016
	}
	{
		mz_uint bits; // 1018
		mz_uint len; // 1018
	}
	{
		mz_uint code; // 1022
		{
			mz_uint bits; // 1024
			mz_uint len; // 1024
		}
		{
			mz_uint bits; // 1026
			mz_uint len; // 1026
		}
	}
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 961
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 962
	memset(void* __dest,
		int __ch,
		size_t __len);  // 968
} /* size: 2604, variables: 12, inline expansions: 3 (248 bytes) */

// <01ABC64C> miniz/miniz.c:1030
// variables: 4
void tdefl_start_static_block(tdefl_compressor* d)
{
	mz_uint i; // 1032
	mz_uint8* p; // 1033
	{
		mz_uint bits; // 1049
		mz_uint len; // 1049
	}
} /* size: 0, variables: 2 */

// <01ABC522> miniz/miniz.c:1055
// variables: 20
void tdefl_compress_lz_codes(tdefl_compressor* d)
{
	mz_uint flags; // 1057
	mz_uint8* pLZ_codes; // 1058
	mz_uint8* pOutput_buf; // 1059
	mz_uint8* pLZ_code_buf_end; // 1060
	mz_uint64 bit_buffer; // 1061
	mz_uint bits_in; // 1062
	{
		mz_uint s0; // 1078
		mz_uint s1; // 1078
		mz_uint n0; // 1078
		mz_uint n1; // 1078
		mz_uint sym; // 1078
		mz_uint num_extra_bits; // 1078
		mz_uint match_len; // 1079
		mz_uint match_dist; // 1079
	}
	{
		mz_uint lit; // 1100
	}
	{
		mz_uint32 n; // 1138
		{
			mz_uint bits; // 1139
			mz_uint len; // 1139
		}
	}
	{
		mz_uint bits; // 1144
		mz_uint len; // 1144
	}
} /* size: 0, variables: 6 */

// <01ABC242> miniz/miniz.c:1197
// variables: 16
// function calls: 3
void tdefl_compress_block(tdefl_compressor* d, mz_bool static_block)
{
	memset(void* __dest,
		int __ch,
		size_t __len);  // 1044
	{
		mz_uint bits; // 1049
		mz_uint len; // 1049
	}
	tdefl_start_static_block(tdefl_compressor* d); // 1200
	{
		mz_uint s0; // 1078
		mz_uint s1; // 1078
		mz_uint n0; // 1078
		mz_uint n1; // 1078
		mz_uint sym; // 1078
		mz_uint num_extra_bits; // 1078
		mz_uint match_len; // 1079
		mz_uint match_dist; // 1079
	}
	{
		mz_uint lit; // 1100
	}
	{
		mz_uint32 n; // 1138
		{
			mz_uint bits; // 1139
			mz_uint len; // 1139
		}
	}
	{
		mz_uint bits; // 1144
		mz_uint len; // 1144
	}
	tdefl_compress_lz_codes(tdefl_compressor* d); // 1203
} /* size: 1297, inline expansions: 3 (1283 bytes) */

// <01ABBCDF> miniz/miniz.c:1206
// variables: 37
// function calls: 3
void tdefl_flush_block(tdefl_compressor* d, int flush)
{
	mz_uint saved_bit_buf; // 1208
	mz_uint saved_bits_in; // 1208
	mz_uint8* pSaved_output_buf; // 1209
	mz_bool comp_block_succeeded; // 1210
	int n; // 1211
	int use_raw_block; // 1211
	mz_uint8* pOutput_buf_start; // 1212
	{
		mz_uint bits; // 1226
		mz_uint len; // 1226
	}
	{
		mz_uint bits; // 1227
		mz_uint len; // 1227
	}
	{
		mz_uint bits; // 1230
		mz_uint len; // 1230
	}
	{
		mz_uint i; // 1243
		{
			mz_uint bits; // 1246
			mz_uint len; // 1246
		}
		{
			mz_uint bits; // 1249
			mz_uint len; // 1249
		}
		{
			mz_uint bits; // 1253
			mz_uint len; // 1253
		}
		{
			mz_uint bits; // 1257
			mz_uint len; // 1257
		}
	}
	{
		mz_uint bits; // 1274
		mz_uint len; // 1274
	}
	{
		mz_uint i; // 1278
		mz_uint a; // 1278
		{
			mz_uint bits; // 1281
			mz_uint len; // 1281
		}
	}
	{
		mz_uint i; // 1288
		mz_uint z; // 1288
		{
			mz_uint bits; // 1289
			mz_uint len; // 1289
		}
		{
			mz_uint bits; // 1292
			mz_uint len; // 1292
		}
		{
			mz_uint bits; // 1296
			mz_uint len; // 1296
		}
	}
	{
		int bytes_to_copy; // 1323
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 1324
	}
	memset(void* __dest,
		int __ch,
		size_t __len);  // 1303
	memset(void* __dest,
		int __ch,
		size_t __len);  // 1304
} /* size: 2416, variables: 7, inline expansions: 2 (36 bytes) */

// <01ABBBF2> miniz/miniz.c:1359
// variables: 12
inline void tdefl_find_match(tdefl_compressor* d, mz_uint lookahead_pos, mz_uint max_dist, mz_uint max_match_len, mz_uint* pMatch_dist, mz_uint* pMatch_len)
{
	mz_uint dist; // 1361
	mz_uint pos; // 1361
	mz_uint match_len; // 1361
	mz_uint probe_pos; // 1361
	mz_uint next_probe_pos; // 1361
	mz_uint probe_len; // 1361
	mz_uint num_probes_left; // 1362
	const mz_uint16* s; // 1363
	const mz_uint16* p; // 1363
	const mz_uint16* q; // 1363
	mz_uint16 c01; // 1364
	mz_uint16 s01; // 1364
} /* size: 0, variables: 12 */

// <01ABBA6E> miniz/miniz.c:1458
// variables: 26
void tdefl_compress_fast(tdefl_compressor* d)
{
	mz_uint lookahead_pos; // 1461
	mz_uint lookahead_size; // 1461
	mz_uint dict_size; // 1461
	mz_uint total_lz_bytes; // 1461
	mz_uint num_flags_left; // 1461
	mz_uint8* pLZ_code_buf; // 1462
	mz_uint8* pLZ_flags; // 1462
	mz_uint cur_pos; // 1463
	{
		const mz_uint  TDEFL_COMP_FAST_LOOKAHEAD_SIZE; // 1467
		mz_uint dst_pos; // 1468
		mz_uint num_bytes_to_process; // 1469
		{
			mz_uint32 n; // 1475
		}
		{
			mz_uint cur_match_dist; // 1490
			mz_uint cur_match_len; // 1490
			mz_uint8* pCur_dict; // 1491
			mz_uint first_trigram; // 1492
			mz_uint hash; // 1493
			mz_uint probe_pos; // 1494
			{
				const mz_uint16* p; // 1499
				const mz_uint16* q; // 1500
				mz_uint32 probe_len; // 1501
				{
					mz_uint32 s0; // 1519
					mz_uint32 s1; // 1519
				}
			}
			{
				int n; // 1560
			}
		}
		{
			mz_uint8 lit; // 1579
			{
				int n; // 1599
			}
		}
	}
} /* size: 0, variables: 8 */

// <01ABBA4B> miniz/miniz.c:1628
inline void tdefl_record_literal(tdefl_compressor* d, mz_uint8 lit)
{
} /* size: 0 */

// <01ABBA03> miniz/miniz.c:1641
// variables: 2
inline void tdefl_record_match(tdefl_compressor* d, mz_uint match_len, mz_uint match_dist)
{
	mz_uint32 s0; // 1643
	mz_uint32 s1; // 1643
} /* size: 0, variables: 2 */

// <01ABB8E4> miniz/miniz.c:1671
// variables: 19
void tdefl_compress_normal(tdefl_compressor* d)
{
	const mz_uint8* pSrc; // 1673
	size_t src_buf_left; // 1674
	tdefl_flush flush; // 1675
	{
		mz_uint len_to_move; // 1679
		mz_uint cur_match_dist; // 1679
		mz_uint cur_match_len; // 1679
		mz_uint cur_pos; // 1679
		{
			mz_uint dst_pos; // 1683
			mz_uint ins_pos; // 1683
			mz_uint hash; // 1684
			mz_uint num_bytes_to_process; // 1685
			const mz_uint8* pSrc_end; // 1686
			{
				mz_uint8 c; // 1691
			}
		}
		{
			mz_uint8 c; // 1706
			mz_uint dst_pos; // 1707
			{
				mz_uint ins_pos; // 1714
				mz_uint hash; // 1715
			}
		}
		{
			mz_uint8 c; // 1734
		}
		{
			int n; // 1803
		}
	}
} /* size: 0, variables: 3 */

// <01ABB83A> miniz/miniz.c:1816
// variable: 1
// function call: 1
void tdefl_flush_output_buffer(tdefl_compressor* d)
{
	{
		size_t n; // 1825
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 1826
	}
} /* size: 184 */

// <01ABAF63> miniz/miniz.c:1837
// variables: 34
// function calls: 12
void tdefl_compress(tdefl_compressor* d, const void* pIn_buf, size_t* pIn_buf_size, void* pOut_buf, size_t* pOut_buf_size, tdefl_flush flush)
{
	{
		mz_uint len_to_move; // 1679
		mz_uint cur_match_dist; // 1679
		mz_uint cur_match_len; // 1679
		mz_uint cur_pos; // 1679
		{
			mz_uint dst_pos; // 1683
			mz_uint ins_pos; // 1683
			mz_uint hash; // 1684
			mz_uint num_bytes_to_process; // 1685
			const mz_uint8* pSrc_end; // 1686
			{
				mz_uint8 c; // 1691
			}
		}
		{
			mz_uint8 c; // 1706
			mz_uint dst_pos; // 1707
			{
				mz_uint ins_pos; // 1714
				mz_uint hash; // 1715
			}
		}
		{
			mz_uint8 c; // 1734
		}
		tdefl_find_match(tdefl_compressor* d,
				mz_uint lookahead_pos,
				mz_uint max_dist,
				mz_uint max_match_len,
				mz_uint* pMatch_dist,
				mz_uint* pMatch_len);  // 1750
		tdefl_record_literal(tdefl_compressor* d,
					mz_uint8 lit);  // 1760
		tdefl_record_match(tdefl_compressor* d,
					mz_uint match_len,
					mz_uint match_dist);  // 1785
		{
			int n; // 1803
		}
		tdefl_record_match(tdefl_compressor* d,
					mz_uint match_len,
					mz_uint match_dist);  // 1776
		tdefl_record_literal(tdefl_compressor* d,
					mz_uint8 lit);  // 1782
		tdefl_record_match(tdefl_compressor* d,
					mz_uint match_len,
					mz_uint match_dist);  // 1763
	}
	tdefl_compress_normal(tdefl_compressor* d); // 1882
	{
		const mz_uint  TDEFL_COMP_FAST_LOOKAHEAD_SIZE; // 1467
		mz_uint dst_pos; // 1468
		mz_uint num_bytes_to_process; // 1469
		{
			mz_uint cur_match_dist; // 1490
			mz_uint cur_match_len; // 1490
			mz_uint8* pCur_dict; // 1491
			mz_uint first_trigram; // 1492
			mz_uint hash; // 1493
			mz_uint probe_pos; // 1494
			{
				const mz_uint16* p; // 1499
				const mz_uint16* q; // 1500
				mz_uint32 probe_len; // 1501
				{
					mz_uint32 s0; // 1519
					mz_uint32 s1; // 1519
				}
			}
			{
				int n; // 1560
			}
		}
		{
			mz_uint8 lit; // 1579
			{
				int n; // 1599
			}
		}
		{
			mz_uint32 n; // 1475
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 1476
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 1478
		}
	}
	tdefl_compress_fast(tdefl_compressor* d); // 1876
	memset(void* __dest,
		int __ch,
		size_t __len);  // 1896
	memset(void* __dest,
		int __ch,
		size_t __len);  // 1897
} /* size: 5035, inline expansions: 4 (4353 bytes) */

// <01ABE2BB> miniz/miniz.c:1905
void tdefl_compress_buffer(tdefl_compressor* d, const void* pIn_buf, size_t in_buf_size, tdefl_flush flush)
{
} /* size: 0 */

// <01ABAD2C> miniz/miniz.c:1911
// function calls: 4
void tdefl_init(tdefl_compressor* d, tdefl_put_buf_func_ptr pPut_buf_func, void* pPut_buf_user, int flags)
{
	memset(void* __dest,
		int __ch,
		size_t __len);  // 1941
	memset(void* __dest,
		int __ch,
		size_t __len);  // 1942
	memset(void* __dest,
		int __ch,
		size_t __len);  // 1920
	memset(void* __dest,
		int __ch,
		size_t __len);  // 1940
} /* size: 373, inline expansions: 4 (97 bytes) */

// <01ABAD01> miniz/miniz.c:1946
void tdefl_get_prev_return_status(tdefl_compressor* d)
{
} /* size: 0 */

// <01ABE47D> miniz/miniz.c:1951
void tdefl_get_adler32(tdefl_compressor* d)
{
} /* size: 0 */

// <01ABAB48> miniz/miniz.c:1956
// variables: 2
// function call: 1
void tdefl_compress_mem_to_output(const void* pBuf, size_t buf_len, tdefl_put_buf_func_ptr pPut_buf_func, void* pPut_buf_user, int flags)
{
	tdefl_compressor* pComp; // 1958
	mz_bool succeeded; // 1959
	tdefl_compress_buffer(tdefl_compressor* d,
				const void* pIn_buf,
				size_t in_buf_size,
				tdefl_flush flush);  // 1966
} /* size: 0, variables: 2, inline expansions: 1 (0 bytes) */

// <01ABAA27> miniz/miniz.c:1978
// variables: 4
// function call: 1
void tdefl_output_buffer_putter(const void* pBuf, int len, void* pUser)
{
	tdefl_output_buffer* p; // 1980
	size_t new_size; // 1981
	{
		size_t new_capacity; // 1984
		mz_uint8* pNew_buf; // 1985
	}
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 1998
} /* size: 0, variables: 2, inline expansions: 1 (0 bytes) */

// <01ABA914> miniz/miniz.c:2003
// variable: 1
// function call: 1
void* tdefl_compress_mem_to_heap(const void* pSrc_buf, size_t src_buf_len, size_t* pOut_len, int flags)
{
	tdefl_output_buffer out_buf; // 2005
	memset(void* __dest,
		int __ch,
		size_t __len);  // 2006
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <01ABA7E6> miniz/miniz.c:2018
// variable: 1
// function call: 1
void tdefl_compress_mem_to_mem(void* pOut_buf, size_t out_buf_len, const void* pSrc_buf, size_t src_buf_len, int flags)
{
	tdefl_output_buffer out_buf; // 2020
	memset(void* __dest,
		int __ch,
		size_t __len);  // 2021
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <01ABE4A6> miniz/miniz.c:2034
// variable: 1
void tdefl_create_comp_flags_from_zip_params(int level, int window_bits, int strategy)
{
	mz_uint comp_flags; // 2036
} /* size: 0, variables: 1 */

// <01ABA22A> miniz/miniz.c:2062
// variables: 10
// function calls: 5
void* tdefl_write_image_to_png_file_in_memory_ex(const void* pImage, int w, int h, int num_chans, size_t* pLen_out, mz_uint level, mz_bool flip)
{
	const mz_uint   s_tdefl_png_num_probes; // 2065
	tdefl_compressor* pComp; // 2066
	tdefl_output_buffer out_buf; // 2067
	int i; // 2068
	int bpl; // 2068
	int y; // 2068
	int z; // 2068
	mz_uint32 c; // 2069
	{
		const mz_uint8   chans; // 2100
		mz_uint8 pnghdr; // 2101
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 2122
	}
	memset(void* __dest,
		int __ch,
		size_t __len);  // 2073
	tdefl_compress_buffer(tdefl_compressor* d,
				const void* pIn_buf,
				size_t in_buf_size,
				tdefl_flush flush);  // 2088
	tdefl_compress_buffer(tdefl_compressor* d,
				const void* pIn_buf,
				size_t in_buf_size,
				tdefl_flush flush);  // 2089
	tdefl_compress_buffer(tdefl_compressor* d,
				const void* pIn_buf,
				size_t in_buf_size,
				tdefl_flush flush);  // 2091
} /* size: 0, variables: 8, inline expansions: 4 (0 bytes) */

// <01ABA16C> miniz/miniz.c:2140
void* tdefl_write_image_to_png_file_in_memory(const void* pImage, int w, int h, int num_chans, size_t* pLen_out)
{
} /* size: 0 */

// <01ABA136> miniz/miniz.c:2149
void tdefl_compressor_alloc(void)
{
} /* size: 0 */

// <01ABA11F> miniz/miniz.c:2154
void tdefl_compressor_free(tdefl_compressor* pComp)
{
} /* size: 0 */

// <01AB961E> miniz/miniz.c:2339
// variables: 71
// function calls: 9
void tinfl_decompress(tinfl_decompressor* r, const mz_uint8* pIn_buf_next, size_t* pIn_buf_size, mz_uint8* pOut_buf_start, mz_uint8* pOut_buf_next, size_t* pOut_buf_size, const mz_uint32 decomp_flags)
{

common_exit: // 2755
	const int   s_length_base; // 2341
	const int   s_length_extra; // 2342
	const int   s_dist_base; // 2343
	const int   s_dist_extra; // 2344
	const mz_uint8   s_length_dezigzag; // 2345
	const int   s_min_table_sizes; // 2346
	tinfl_status status; // 2348
	mz_uint32 num_bits; // 2349
	mz_uint32 dist; // 2349
	mz_uint32 counter; // 2349
	mz_uint32 num_extra; // 2349
	tinfl_bit_buf_t bit_buf; // 2350
	const mz_uint8* pIn_buf_cur; // 2351
	const mz_uint8* pIn_buf_end; // 2351
	mz_uint8* pOut_buf_cur; // 2352
	const mz_uint8* pOut_buf_end; // 2352
	size_t out_buf_size_mask; // 2353
	size_t dist_from_out_buf_start; // 2353
	{
		mz_uint c; // 2387
	}
	{
		mz_uint c; // 2391
	}
	{
		mz_uint c; // 2395
	}
	{
		mz_uint c; // 2405
	}
	{
		size_t n; // 2415
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 2425
	}
	{
		mz_uint8* p; // 2439
		mz_uint i; // 2440
		memset(void* __dest,
			int __ch,
			size_t __len);  // 2443
	}
	{
		mz_uint c; // 2457
	}
	{
		mz_uint s; // 2463
		{
			mz_uint c; // 2464
		}
	}
	{
		int tree_next; // 2471
		int tree_cur; // 2471
		tinfl_huff_table* pTable; // 2472
		mz_uint i; // 2473
		mz_uint j; // 2473
		mz_uint used_syms; // 2473
		mz_uint total; // 2473
		mz_uint sym_index; // 2473
		mz_uint next_code; // 2473
		mz_uint total_syms; // 2473
		{
			mz_uint rev_code; // 2493
			mz_uint l; // 2493
			mz_uint cur_code; // 2493
			mz_uint code_size; // 2493
			{
				mz_int16 k; // 2501
			}
		}
		{
			mz_uint s; // 2535
			{
				int temp; // 2536
				mz_uint code_len; // 2536
				mz_uint c; // 2536
			}
			{
				mz_uint c; // 2547
			}
			memset(void* __dest,
				int __ch,
				size_t __len);  // 2549
		}
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 2556
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 2557
		memset(void* __dest,
			int __ch,
			size_t __len);  // 2475
		memset(void* __dest,
			int __ch,
			size_t __len);  // 2476
		memset(void* __dest,
			int __ch,
			size_t __len);  // 2477
	}
	{
		mz_uint8* pSrc; // 2562
		{
			int temp; // 2567
			mz_uint code_len; // 2567
			mz_uint c; // 2567
		}
		{
			int sym2; // 2578
			mz_uint code_len; // 2579
		}
		{
			mz_uint extra_bits; // 2650
			{
				mz_uint c; // 2651
			}
		}
		{
			int temp; // 2655
			mz_uint code_len; // 2655
			mz_uint c; // 2655
		}
		{
			mz_uint extra_bits; // 2660
			{
				mz_uint c; // 2661
			}
		}
		{
			const mz_uint8* pSrc_end; // 2688
		}
	}
	{
		mz_uint c; // 2730
	}
	{
		mz_uint s; // 2743
		{
			mz_uint c; // 2745
		}
	}
	{
		const mz_uint8* ptr; // 2777
		size_t buf_len; // 2778
		mz_uint32 i; // 2779
		mz_uint32 s1; // 2779
		mz_uint32 s2; // 2779
		size_t block_len; // 2780
	}
	memset(void* __dest,
		int __ch,
		size_t __len);  // 2460
} /* size: 9330, variables: 18, goto labels: 1, inline expansions: 1 (17 bytes) */

// <01AB9472> miniz/miniz.c:2808
// variables: 9
void* tinfl_decompress_mem_to_heap(const void* pSrc_buf, size_t src_buf_len, size_t* pOut_len, int flags)
{
	tinfl_decompressor decomp; // 2810
	void* pBuf; // 2811
	void* pNew_buf; // 2811
	size_t src_buf_ofs; // 2812
	size_t out_buf_capacity; // 2812
	{
		size_t src_buf_size; // 2817
		size_t dst_buf_size; // 2817
		size_t new_out_buf_capacity; // 2817
		tinfl_status status; // 2818
	}
} /* size: 0, variables: 5 */

// <01AB9377> miniz/miniz.c:2846
// variables: 2
void tinfl_decompress_mem_to_mem(void* pOut_buf, size_t out_buf_len, const void* pSrc_buf, size_t src_buf_len, int flags)
{
	tinfl_decompressor decomp; // 2848
	tinfl_status status; // 2849
} /* size: 0, variables: 2 */

// <01AB919D> miniz/miniz.c:2855
// variables: 8
void tinfl_decompress_mem_to_callback(const void* pIn_buf, size_t* pIn_buf_size, tinfl_put_buf_func_ptr pPut_buf_func, void* pPut_buf_user, int flags)
{
	int result; // 2857
	tinfl_decompressor decomp; // 2858
	mz_uint8* pDict; // 2859
	size_t in_buf_ofs; // 2860
	size_t dict_ofs; // 2860
	{
		size_t in_buf_size; // 2866
		size_t dst_buf_size; // 2866
		tinfl_status status; // 2867
	}
} /* size: 0, variables: 5 */

// <01AB9135> miniz/miniz.c:2884
// variable: 1
void tinfl_decompressor_alloc(void)
{
	tinfl_decompressor* pDecomp; // 2886
} /* size: 0, variables: 1 */

// <01AB911E> miniz/miniz.c:2892
void tinfl_decompressor_free(tinfl_decompressor* pDecomp)
{
} /* size: 0 */

// <01AB90F3> miniz/miniz.c:3180
inline void mz_zip_array_range_check(const mz_zip_array* pArray, mz_uint index)
{
} /* size: 0 */

// <01AB90CE> miniz/miniz.c:3190
inline void mz_zip_array_init(mz_zip_array* pArray, mz_uint32 element_size)
{
} /* size: 0 */

// <01AB90A9> miniz/miniz.c:3196
inline void mz_zip_array_clear(mz_zip_archive* pZip, mz_zip_array* pArray)
{
} /* size: 0 */

// <01ABE0AC> miniz/miniz.c:3202
// variables: 2
void mz_zip_array_ensure_capacity(mz_zip_archive* pZip, mz_zip_array* pArray, size_t min_new_capacity, mz_uint growing)
{
	void* pNew_p; // 3204
	size_t new_capacity; // 3205
} /* size: 0, variables: 2 */

// <01AB9011> miniz/miniz.c:3222
inline void mz_zip_array_reserve(mz_zip_archive* pZip, mz_zip_array* pArray, size_t new_capacity, mz_uint growing)
{
} /* size: 0 */

// <01AB8FD2> miniz/miniz.c:3232
inline void mz_zip_array_resize(mz_zip_archive* pZip, mz_zip_array* pArray, size_t new_size, mz_uint growing)
{
} /* size: 0 */

// <01AB8FA2> miniz/miniz.c:3243
inline void mz_zip_array_ensure_room(mz_zip_archive* pZip, mz_zip_array* pArray, size_t n)
{
} /* size: 0 */

// <01AB8F58> miniz/miniz.c:3248
// variable: 1
inline void mz_zip_array_push_back(mz_zip_archive* pZip, mz_zip_array* pArray, const void* pElements, size_t n)
{
	size_t orig_size; // 3250
} /* size: 0, variables: 1 */

// <01AB8F27> miniz/miniz.c:3258
// variable: 1
void mz_zip_dos_to_time_t(int dos_time, int dos_date)
{
	tm tm; // 3260
} /* size: 0, variables: 1 */

// <01AB8EA1> miniz/miniz.c:3273
// variable: 1
void mz_zip_time_t_to_dos_time(time_t time, mz_uint16* pDOS_time, mz_uint16* pDOS_date)
{
	tm* tm; // 3286
} /* size: 0, variables: 1 */

// <01AB8E69> miniz/miniz.c:3296
// variable: 1
void mz_zip_get_file_modified_time(const char* pFilename, time_t* pTime)
{
	stat64 file_stat; // 3298
} /* size: 0, variables: 1 */

// <01AB8E2C> miniz/miniz.c:3310
// variable: 1
void mz_zip_set_file_times(const char* pFilename, time_t access_time, time_t modified_time)
{
	utimbuf t; // 3312
} /* size: 0, variables: 1 */

// <01AB8E07> miniz/miniz.c:3323
inline void mz_zip_set_error(mz_zip_archive* pZip, mz_zip_error err_num)
{
} /* size: 0 */

// <01AB8CF0> miniz/miniz.c:3330
// function calls: 3
void mz_zip_reader_init_internal(mz_zip_archive* pZip, mz_uint flags)
{
	mz_zip_set_error(mz_zip_archive* pZip,
			mz_zip_error err_num);  // 3334
	memset(void* __dest,
		int __ch,
		size_t __len);  // 3351
	mz_zip_set_error(mz_zip_archive* pZip,
			mz_zip_error err_num);  // 3349
} /* size: 0, inline expansions: 3 (0 bytes) */

// <01AB8C5D> miniz/miniz.c:3364
// variables: 7
inline void mz_zip_reader_filename_less(const mz_zip_array* pCentral_dir_array, const mz_zip_array* pCentral_dir_offsets, mz_uint l_index, mz_uint r_index)
{
	const mz_uint8* pL; // 3366
	const mz_uint8* pE; // 3366
	const mz_uint8* pR; // 3367
	mz_uint l_len; // 3368
	mz_uint r_len; // 3368
	mz_uint8 l; // 3369
	mz_uint8 r; // 3369
} /* size: 0, variables: 7 */

// <01AB8B83> miniz/miniz.c:3393
// variables: 14
void mz_zip_reader_sort_central_dir_offsets_by_filename(mz_zip_archive* pZip)
{
	mz_zip_internal_state* pState; // 3395
	const mz_zip_array* pCentral_dir_offsets; // 3396
	const mz_zip_array* pCentral_dir; // 3397
	mz_uint32* pIndices; // 3398
	mz_uint32 start; // 3399
	mz_uint32 end; // 3399
	const mz_uint32  size; // 3400
	{
		mz_uint64 child; // 3410
		mz_uint64 root; // 3410
		{
			mz_uint32 t; // 3418
		}
	}
	{
		mz_uint64 child; // 3429
		mz_uint64 root; // 3429
		{
			mz_uint32 t; // 3430
		}
		{
			mz_uint32 t; // 3438
		}
	}
} /* size: 0, variables: 7 */

// <01AB8AF8> miniz/miniz.c:3445
// variables: 6
void mz_zip_reader_locate_header_sig(mz_zip_archive* pZip, mz_uint32 record_sig, mz_uint32 record_size, mz_int64* pOfs)
{
	mz_int64 cur_file_ofs; // 3447
	mz_uint32 buf_u32; // 3448
	mz_uint8* pBuf; // 3449
	{
		int i; // 3459
		int n; // 3459
		{
			mz_uint s; // 3466
		}
	}
} /* size: 0, variables: 3 */

// <01AB8145> miniz/miniz.c:3491
// variables: 44
// function calls: 10
void mz_zip_reader_read_central_dir(mz_zip_archive* pZip, mz_uint flags)
{
	mz_uint cdir_size; // 3493
	mz_uint cdir_entries_on_this_disk; // 3493
	mz_uint num_this_disk; // 3493
	mz_uint cdir_disk_index; // 3493
	mz_uint64 cdir_ofs; // 3494
	mz_int64 cur_file_ofs; // 3495
	const mz_uint8* p; // 3496
	mz_uint32 buf_u32; // 3498
	mz_uint8* pBuf; // 3499
	mz_bool sort_central_dir; // 3500
	mz_uint32 zip64_end_of_central_dir_locator_u32; // 3501
	mz_uint8* pZip64_locator; // 3502
	mz_uint32 zip64_end_of_central_dir_header_u32; // 3504
	mz_uint8* pZip64_end_of_central_dir; // 3505
	mz_uint64 zip64_end_of_central_dir_ofs; // 3507
	{
		mz_uint32 zip64_total_num_of_disks; // 3553
		mz_uint64 zip64_cdir_total_entries; // 3554
		mz_uint64 zip64_cdir_total_entries_on_this_disk; // 3555
		mz_uint64 zip64_size_of_end_of_central_dir_record; // 3556
		mz_uint64 zip64_size_of_central_directory; // 3557
	}
	{
		mz_uint i; // 3605
		mz_uint n; // 3605
		{
			mz_uint total_header_size; // 3624
			mz_uint disk_index; // 3624
			mz_uint bit_flags; // 3624
			mz_uint filename_size; // 3624
			mz_uint ext_data_size; // 3624
			mz_uint64 comp_size; // 3625
			mz_uint64 decomp_size; // 3625
			mz_uint64 local_header_ofs; // 3625
			{
				mz_uint32 extra_size_remaining; // 3646
				{
					const mz_uint8* pExtra_data; // 3650
					{
						mz_uint32 field_id; // 3654
						mz_uint32 field_data_size; // 3655
					}
				}
			}
		}
		mz_zip_array_resize(mz_zip_archive* pZip,
					mz_zip_array* pArray,
					size_t new_size,
					mz_uint growing);  // 3607
		mz_zip_array_resize(mz_zip_archive* pZip,
					mz_zip_array* pArray,
					size_t new_size,
					mz_uint growing);  // 3608
		mz_zip_array_resize(mz_zip_archive* pZip,
					mz_zip_array* pArray,
					size_t new_size,
					mz_uint growing);  // 3613
	}
	mz_zip_set_error(mz_zip_archive* pZip,
			mz_zip_error err_num);  // 3514
	{
		int i; // 3459
		int n; // 3459
		{
			mz_uint s; // 3466
		}
	}
	mz_zip_reader_locate_header_sig(mz_zip_archive* pZip,
					mz_uint32 record_sig,
					mz_uint32 record_size,
					mz_int64* pOfs);  // 3513
	{
		mz_uint64 child; // 3410
		mz_uint64 root; // 3410
		mz_zip_reader_filename_less(const mz_zip_array* pCentral_dir_array,
						const mz_zip_array* pCentral_dir_offsets,
						mz_uint l_index,
						mz_uint r_index);  // 3415
		mz_zip_reader_filename_less(const mz_zip_array* pCentral_dir_array,
						const mz_zip_array* pCentral_dir_offsets,
						mz_uint l_index,
						mz_uint r_index);  // 3416
		{
			mz_uint32 t; // 3418
		}
	}
	{
		mz_uint64 child; // 3429
		mz_uint64 root; // 3429
		{
			mz_uint32 t; // 3430
		}
		mz_zip_reader_filename_less(const mz_zip_array* pCentral_dir_array,
						const mz_zip_array* pCentral_dir_offsets,
						mz_uint l_index,
						mz_uint r_index);  // 3435
		mz_zip_reader_filename_less(const mz_zip_array* pCentral_dir_array,
						const mz_zip_array* pCentral_dir_offsets,
						mz_uint l_index,
						mz_uint r_index);  // 3436
		{
			mz_uint32 t; // 3438
		}
	}
	mz_zip_reader_sort_central_dir_offsets_by_filename(mz_zip_archive* pZip); // 3710
} /* size: 0, variables: 15, inline expansions: 3 (0 bytes) */

// <01ABE5C6> miniz/miniz.c:3715
// function calls: 2
void mz_zip_zero_struct(mz_zip_archive* pZip)
{
	memset(void* __dest,
		int __ch,
		size_t __len);  // 3718
	mz_zip_zero_struct(mz_zip_archive* pZip); // 3715
} /* size: 0, inline expansions: 2 (0 bytes) */

// <01AB812D> miniz/miniz.c:3715
void mz_zip_zero_struct(mz_zip_archive* pZip)
{
} /* size: 0 */

// <01AB7F34> miniz/miniz.c:3721
// variables: 2
// function calls: 6
void mz_zip_reader_end_internal(mz_zip_archive* pZip, mz_bool set_last_error)
{
	mz_bool status; // 3723
	{
		mz_zip_internal_state* pState; // 3738
		memset(void* __dest,
			int __ch,
			size_t __len);  // 3199
		mz_zip_array_clear(mz_zip_archive* pZip,
					mz_zip_array* pArray);  // 3741
		memset(void* __dest,
			int __ch,
			size_t __len);  // 3199
		mz_zip_array_clear(mz_zip_archive* pZip,
					mz_zip_array* pArray);  // 3742
		memset(void* __dest,
			int __ch,
			size_t __len);  // 3199
		mz_zip_array_clear(mz_zip_archive* pZip,
					mz_zip_array* pArray);  // 3743
	}
} /* size: 0, variables: 1 */

// <01ABE671> miniz/miniz.c:3768
void mz_zip_reader_end(mz_zip_archive* pZip)
{
} /* size: 0 */

// <01AB7E27> miniz/miniz.c:3772
// function call: 1
void mz_zip_reader_init(mz_zip_archive* pZip, mz_uint64 size, mz_uint flags)
{
	mz_zip_set_error(mz_zip_archive* pZip,
			mz_zip_error err_num);  // 3775
} /* size: 0, inline expansions: 1 (0 bytes) */

// <01AB7D34> miniz/miniz.c:3792
// variables: 2
// function call: 1
void mz_zip_mem_read_func(void* pOpaque, mz_uint64 file_ofs, void* pBuf, size_t n)
{
	mz_zip_archive* pZip; // 3794
	size_t s; // 3795
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 3796
} /* size: 0, variables: 2, inline expansions: 1 (0 bytes) */

// <01AB7BE5> miniz/miniz.c:3800
// function calls: 2
void mz_zip_reader_init_mem(mz_zip_archive* pZip, const void* pMem, size_t size, mz_uint flags)
{
	mz_zip_set_error(mz_zip_archive* pZip,
			mz_zip_error err_num);  // 3806
	mz_zip_set_error(mz_zip_archive* pZip,
			mz_zip_error err_num);  // 3803
} /* size: 0, inline expansions: 2 (0 bytes) */

// <01AB7AA5> miniz/miniz.c:3835
// variables: 2
// function call: 1
void mz_zip_file_read_func(void* pOpaque, mz_uint64 file_ofs, void* pBuf, size_t n)
{
	mz_zip_archive* pZip; // 3837
	mz_int64 cur_ofs; // 3838
	fread(void* __ptr,
		size_t __size,
		size_t __n,
		FILE* __stream);  // 3845
} /* size: 0, variables: 2, inline expansions: 1 (0 bytes) */

// <01AB7A1A> miniz/miniz.c:3848
void mz_zip_reader_init_file(mz_zip_archive* pZip, const char* pFilename, mz_uint32 flags)
{
} /* size: 0 */

// <01AB7776> miniz/miniz.c:3853
// variables: 2
// function calls: 4
void mz_zip_reader_init_file_v2(mz_zip_archive* pZip, const char* pFilename, mz_uint flags, mz_uint64 file_start_ofs, mz_uint64 archive_size)
{
	mz_uint64 file_size; // 3855
	FILE* pFile; // 3856
	mz_zip_set_error(mz_zip_archive* pZip,
			mz_zip_error err_num);  // 3859
	mz_zip_set_error(mz_zip_archive* pZip,
			mz_zip_error err_num);  // 3882
	mz_zip_set_error(mz_zip_archive* pZip,
			mz_zip_error err_num);  // 3871
	mz_zip_set_error(mz_zip_archive* pZip,
			mz_zip_error err_num);  // 3863
} /* size: 0, variables: 2, inline expansions: 4 (0 bytes) */

// <01AB7581> miniz/miniz.c:3907
// variable: 1
// function calls: 3
void mz_zip_reader_init_cfile(mz_zip_archive* pZip, FILE* pFile, mz_uint64 archive_size, mz_uint flags)
{
	mz_uint64 cur_file_ofs; // 3909
	mz_zip_set_error(mz_zip_archive* pZip,
			mz_zip_error err_num);  // 3912
	mz_zip_set_error(mz_zip_archive* pZip,
			mz_zip_error err_num);  // 3919
	mz_zip_set_error(mz_zip_archive* pZip,
			mz_zip_error err_num);  // 3924
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <01AB755C> miniz/miniz.c:3949
inline void mz_zip_get_cdh(mz_zip_archive* pZip, mz_uint file_index)
{
} /* size: 0 */

// <01AB748C> miniz/miniz.c:3956
// variables: 2
// function calls: 2
void mz_zip_reader_is_file_encrypted(mz_zip_archive* pZip, mz_uint file_index)
{
	mz_uint m_bit_flag; // 3958
	const mz_uint8* p; // 3959
	mz_zip_get_cdh(mz_zip_archive* pZip,
			mz_uint file_index);  // 3959
	mz_zip_set_error(mz_zip_archive* pZip,
			mz_zip_error err_num);  // 3962
} /* size: 0, variables: 2, inline expansions: 2 (0 bytes) */

// <01AB72E1> miniz/miniz.c:3970
// variables: 3
// function calls: 5
void mz_zip_reader_is_file_supported(mz_zip_archive* pZip, mz_uint file_index)
{
	mz_uint bit_flag; // 3972
	mz_uint method; // 3973
	const mz_uint8* p; // 3975
	mz_zip_get_cdh(mz_zip_archive* pZip,
			mz_uint file_index);  // 3975
	mz_zip_set_error(mz_zip_archive* pZip,
			mz_zip_error err_num);  // 3978
	mz_zip_set_error(mz_zip_archive* pZip,
			mz_zip_error err_num);  // 3987
	mz_zip_set_error(mz_zip_archive* pZip,
			mz_zip_error err_num);  // 3999
	mz_zip_set_error(mz_zip_archive* pZip,
			mz_zip_error err_num);  // 3993
} /* size: 0, variables: 3, inline expansions: 5 (0 bytes) */

// <01AB71E7> miniz/miniz.c:4006
// variables: 4
// function calls: 2
void mz_zip_reader_is_file_a_directory(mz_zip_archive* pZip, mz_uint file_index)
{
	mz_uint filename_len; // 4008
	mz_uint attribute_mapping_id; // 4008
	mz_uint external_attr; // 4008
	const mz_uint8* p; // 4009
	mz_zip_get_cdh(mz_zip_archive* pZip,
			mz_uint file_index);  // 4009
	mz_zip_set_error(mz_zip_archive* pZip,
			mz_zip_error err_num);  // 4012
} /* size: 0, variables: 4, inline expansions: 2 (0 bytes) */

// <01AB6E3B> miniz/miniz.c:4038
// variables: 8
// function calls: 6
void mz_zip_file_stat_internal(mz_zip_archive* pZip, mz_uint file_index, const mz_uint8* pCentral_dir_header, mz_zip_archive_file_stat* pStat, mz_bool* pFound_zip64_extra_data)
{
	mz_uint n; // 4040
	const mz_uint8* p; // 4041
	{
		mz_uint32 extra_size_remaining; // 4088
		{
			const mz_uint8* pExtra_data; // 4092
			{
				mz_uint32 field_id; // 4096
				mz_uint32 field_data_size; // 4097
				{
					const mz_uint8* pField_data; // 4110
					mz_uint32 field_data_remaining; // 4111
				}
				mz_zip_set_error(mz_zip_archive* pZip,
						mz_zip_error err_num);  // 4100
			}
		}
	}
	mz_zip_set_error(mz_zip_archive* pZip,
			mz_zip_error err_num);  // 4047
	memset(void* __dest,
		int __ch,
		size_t __len);  // 3261
	mz_zip_dos_to_time_t(int dos_time,
				int dos_date);  // 4057
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 4069
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 4075
} /* size: 0, variables: 2, inline expansions: 5 (0 bytes) */

// <01AB6DED> miniz/miniz.c:4158
// variable: 1
inline void mz_zip_string_equal(const char* pA, const char* pB, mz_uint len, mz_uint flags)
{
	mz_uint i; // 4160
} /* size: 0, variables: 1 */

// <01AB6D67> miniz/miniz.c:4169
// variables: 5
inline void mz_zip_filename_compare(const mz_zip_array* pCentral_dir_array, const mz_zip_array* pCentral_dir_offsets, mz_uint l_index, const char* pR, mz_uint r_len)
{
	const mz_uint8* pL; // 4171
	const mz_uint8* pE; // 4171
	mz_uint l_len; // 4172
	mz_uint8 l; // 4173
	mz_uint8 r; // 4173
} /* size: 0, variables: 5 */

// <01AB6CA2> miniz/miniz.c:4186
// variables: 11
void mz_zip_locate_file_binary_search(mz_zip_archive* pZip, const char* pFilename, mz_uint32* pIndex)
{
	mz_zip_internal_state* pState; // 4188
	const mz_zip_array* pCentral_dir_offsets; // 4189
	const mz_zip_array* pCentral_dir; // 4190
	mz_uint32* pIndices; // 4191
	const uint32_t  size; // 4192
	const mz_uint  filename_len; // 4193
	{
		mz_int64 l; // 4202
		mz_int64 h; // 4202
		{
			mz_int64 m; // 4206
			uint32_t file_index; // 4207
			int comp; // 4209
		}
	}
} /* size: 0, variables: 6 */

// <01AB6BDE> miniz/miniz.c:4226
// variable: 1
void mz_zip_reader_locate_file(mz_zip_archive* pZip, const char* pName, const char* pComment, mz_uint flags)
{
	mz_uint32 index; // 4228
} /* size: 0, variables: 1 */

// <01AB6788> miniz/miniz.c:4235
// variables: 15
// function calls: 6
void mz_zip_reader_locate_file_v2(mz_zip_archive* pZip, const char* pName, const char* pComment, mz_uint flags, mz_uint32* pIndex)
{
	mz_uint file_index; // 4237
	size_t name_len; // 4238
	size_t comment_len; // 4238
	{
		const mz_uint8* pHeader; // 4265
		mz_uint filename_len; // 4266
		const char* pFilename; // 4267
		{
			mz_uint file_extra_len; // 4272
			mz_uint file_comment_len; // 4272
			const char* pFile_comment; // 4273
			mz_zip_string_equal(const char* pA,
						const char* pB,
						mz_uint len,
						mz_uint flags);  // 4274
		}
		{
			int ofs; // 4279
		}
		mz_zip_string_equal(const char* pA,
					const char* pB,
					mz_uint len,
					mz_uint flags);  // 4289
	}
	mz_zip_set_error(mz_zip_archive* pZip,
			mz_zip_error err_num);  // 4223
	{
		mz_int64 l; // 4202
		mz_int64 h; // 4202
		{
			mz_int64 m; // 4206
			uint32_t file_index; // 4207
			int comp; // 4209
			mz_zip_filename_compare(const mz_zip_array* pCentral_dir_array,
						const mz_zip_array* pCentral_dir_offsets,
						mz_uint l_index,
						const char* pR,
						mz_uint r_len);  // 4209
		}
	}
	mz_zip_locate_file_binary_search(mz_zip_archive* pZip,
					const char* pFilename,
					mz_uint32* pIndex);  // 4251
	mz_zip_set_error(mz_zip_archive* pZip,
			mz_zip_error err_num);  // 4244
} /* size: 0, variables: 3, inline expansions: 3 (0 bytes) */

// <01AB619B> miniz/miniz.c:4300
// variables: 15
// function calls: 11
void mz_zip_reader_extract_to_mem_no_alloc(mz_zip_archive* pZip, mz_uint file_index, void* pBuf, size_t buf_size, mz_uint flags, void* pUser_read_buf, size_t user_read_buf_size)
{
	int status; // 4302
	mz_uint64 needed_size; // 4303
	mz_uint64 cur_file_ofs; // 4303
	mz_uint64 comp_remaining; // 4303
	mz_uint64 out_buf_ofs; // 4303
	mz_uint64 read_buf_size; // 4303
	mz_uint64 read_buf_ofs; // 4303
	mz_uint64 read_buf_avail; // 4303
	mz_zip_archive_file_stat file_stat; // 4304
	void* pRead_buf; // 4305
	mz_uint32 local_header_u32; // 4306
	mz_uint8* pLocal_header; // 4307
	tinfl_decompressor inflator; // 4308
	{
		size_t in_buf_size; // 4399
		size_t out_buf_size; // 4399
		mz_zip_set_error(mz_zip_archive* pZip,
				mz_zip_error err_num);  // 4406
	}
	mz_zip_set_error(mz_zip_archive* pZip,
			mz_zip_error err_num);  // 4311
	mz_zip_set_error(mz_zip_archive* pZip,
			mz_zip_error err_num);  // 4322
	mz_zip_set_error(mz_zip_archive* pZip,
			mz_zip_error err_num);  // 4331
	mz_zip_set_error(mz_zip_archive* pZip,
			mz_zip_error err_num);  // 4336
	mz_zip_set_error(mz_zip_archive* pZip,
			mz_zip_error err_num);  // 4326
	mz_zip_set_error(mz_zip_archive* pZip,
			mz_zip_error err_num);  // 4339
	mz_zip_set_error(mz_zip_archive* pZip,
			mz_zip_error err_num);  // 4355
	mz_zip_set_error(mz_zip_archive* pZip,
			mz_zip_error err_num);  // 4425
	mz_zip_set_error(mz_zip_archive* pZip,
			mz_zip_error err_num);  // 4431
	mz_zip_set_error(mz_zip_archive* pZip,
			mz_zip_error err_num);  // 4390
} /* size: 0, variables: 13, inline expansions: 10 (0 bytes) */

// <01ABEA1E> miniz/miniz.c:4443
// variable: 1
void mz_zip_reader_extract_file_to_mem_no_alloc(mz_zip_archive* pZip, const char* pFilename, void* pBuf, size_t buf_size, mz_uint flags, void* pUser_read_buf, size_t user_read_buf_size)
{
	mz_uint32 file_index; // 4445
} /* size: 0, variables: 1 */

// <01ABEB1A> miniz/miniz.c:4451
void mz_zip_reader_extract_to_mem(mz_zip_archive* pZip, mz_uint file_index, void* pBuf, size_t buf_size, mz_uint flags)
{
} /* size: 0 */

// <01AB5F6D> miniz/miniz.c:4456
// function call: 1
void mz_zip_reader_extract_file_to_mem(mz_zip_archive* pZip, const char* pFilename, void* pBuf, size_t buf_size, mz_uint flags)
{
	mz_zip_reader_extract_file_to_mem_no_alloc(mz_zip_archive* pZip,
							const char* pFilename,
							void* pBuf,
							size_t buf_size,
							mz_uint flags,
							void* pUser_read_buf,
							size_t user_read_buf_size);  // 4458
} /* size: 0, inline expansions: 1 (0 bytes) */

// <01AB5D29> miniz/miniz.c:4461
// variables: 5
// function calls: 4
void* mz_zip_reader_extract_to_heap(mz_zip_archive* pZip, mz_uint file_index, size_t* pSize, mz_uint flags)
{
	mz_uint64 comp_size; // 4463
	mz_uint64 uncomp_size; // 4463
	mz_uint64 alloc_size; // 4463
	const mz_uint8* p; // 4464
	void* pBuf; // 4465
	mz_zip_get_cdh(mz_zip_archive* pZip,
			mz_uint file_index);  // 4464
	mz_zip_reader_extract_to_mem(mz_zip_archive* pZip,
					mz_uint file_index,
					void* pBuf,
					size_t buf_size,
					mz_uint flags);  // 4492
	mz_zip_set_error(mz_zip_archive* pZip,
			mz_zip_error err_num);  // 4472
	mz_zip_set_error(mz_zip_archive* pZip,
			mz_zip_error err_num);  // 4488
} /* size: 0, variables: 5, inline expansions: 4 (0 bytes) */

// <01AB5C39> miniz/miniz.c:4503
// variable: 1
void* mz_zip_reader_extract_file_to_heap(mz_zip_archive* pZip, const char* pFilename, size_t* pSize, mz_uint flags)
{
	mz_uint32 file_index; // 4505
} /* size: 0, variables: 1 */

// <01AB5582> miniz/miniz.c:4515
// variables: 17
// function calls: 12
void mz_zip_reader_extract_to_callback(mz_zip_archive* pZip, mz_uint file_index, mz_file_write_func pCallback, void* pOpaque, mz_uint flags)
{
	int status; // 4517
	mz_uint file_crc32; // 4518
	mz_uint64 read_buf_size; // 4519
	mz_uint64 read_buf_ofs; // 4519
	mz_uint64 read_buf_avail; // 4519
	mz_uint64 comp_remaining; // 4519
	mz_uint64 out_buf_ofs; // 4519
	mz_uint64 cur_file_ofs; // 4519
	mz_zip_archive_file_stat file_stat; // 4520
	void* pRead_buf; // 4521
	void* pWrite_buf; // 4522
	mz_uint32 local_header_u32; // 4523
	mz_uint8* pLocal_header; // 4524
	{
		tinfl_decompressor inflator; // 4631
		{
			mz_uint8* pWrite_buf_cur; // 4643
			size_t in_buf_size; // 4644
			size_t out_buf_size; // 4644
			mz_zip_set_error(mz_zip_archive* pZip,
					mz_zip_error err_num);  // 4650
		}
		mz_zip_set_error(mz_zip_archive* pZip,
				mz_zip_error err_num);  // 4636
	}
	mz_zip_set_error(mz_zip_archive* pZip,
			mz_zip_error err_num);  // 4547
	mz_zip_set_error(mz_zip_archive* pZip,
			mz_zip_error err_num);  // 4527
	mz_zip_set_error(mz_zip_archive* pZip,
			mz_zip_error err_num);  // 4538
	mz_zip_set_error(mz_zip_archive* pZip,
			mz_zip_error err_num);  // 4550
	mz_zip_set_error(mz_zip_archive* pZip,
			mz_zip_error err_num);  // 4542
	mz_zip_set_error(mz_zip_archive* pZip,
			mz_zip_error err_num);  // 4583
	mz_zip_set_error(mz_zip_archive* pZip,
			mz_zip_error err_num);  // 4604
	mz_zip_set_error(mz_zip_archive* pZip,
			mz_zip_error err_num);  // 4618
	mz_zip_set_error(mz_zip_archive* pZip,
			mz_zip_error err_num);  // 4692
	mz_zip_set_error(mz_zip_archive* pZip,
			mz_zip_error err_num);  // 4567
} /* size: 0, variables: 13, inline expansions: 10 (0 bytes) */

// <01AB547E> miniz/miniz.c:4713
// variable: 1
void mz_zip_reader_extract_file_to_callback(mz_zip_archive* pZip, const char* pFilename, mz_file_write_func pCallback, void* pOpaque, mz_uint flags)
{
	mz_uint32 file_index; // 4715
} /* size: 0, variables: 1 */

// <01AB515C> miniz/miniz.c:4722
// variables: 3
// function calls: 7
void mz_zip_reader_extract_iter_new(mz_zip_archive* pZip, mz_uint file_index, mz_uint flags)
{
	class* pState; // 4724
	mz_uint32 local_header_u32; // 4725
	mz_uint8* pLocal_header; // 4726
	mz_zip_set_error(mz_zip_archive* pZip,
			mz_zip_error err_num);  // 4839
	mz_zip_set_error(mz_zip_archive* pZip,
			mz_zip_error err_num);  // 4817
	mz_zip_set_error(mz_zip_archive* pZip,
			mz_zip_error err_num);  // 4750
	mz_zip_set_error(mz_zip_archive* pZip,
			mz_zip_error err_num);  // 4797
	mz_zip_set_error(mz_zip_archive* pZip,
			mz_zip_error err_num);  // 4782
	mz_zip_set_error(mz_zip_archive* pZip,
			mz_zip_error err_num);  // 4736
	mz_zip_set_error(mz_zip_archive* pZip,
			mz_zip_error err_num);  // 4758
} /* size: 0, variables: 3, inline expansions: 7 (0 bytes) */

// <01AB508F> miniz/miniz.c:4850
// variable: 1
void mz_zip_reader_extract_file_iter_new(mz_zip_archive* pZip, const char* pFilename, mz_uint flags)
{
	mz_uint32 file_index; // 4852
} /* size: 0, variables: 1 */

// <01AB4DA3> miniz/miniz.c:4862
// variables: 5
// function calls: 5
void mz_zip_reader_extract_iter_read(class* pState, void* pvBuf, size_t buf_size)
{
	size_t copied_to_caller; // 4864
	{
		mz_uint8* pWrite_buf_cur; // 4910
		size_t in_buf_size; // 4913
		size_t out_buf_size; // 4913
		{
			size_t to_copy; // 4948
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 4951
			mz_zip_set_error(mz_zip_archive* pZip,
					mz_zip_error err_num);  // 4964
		}
		mz_zip_set_error(mz_zip_archive* pZip,
				mz_zip_error err_num);  // 4924
	}
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 4879
	mz_zip_set_error(mz_zip_archive* pZip,
			mz_zip_error err_num);  // 4888
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <01AB4CC6> miniz/miniz.c:4979
// variable: 1
// function calls: 2
void mz_zip_reader_extract_iter_free(class* pState)
{
	int status; // 4981
	mz_zip_set_error(mz_zip_archive* pZip,
			mz_zip_error err_num);  // 4993
	mz_zip_set_error(mz_zip_archive* pZip,
			mz_zip_error err_num);  // 4999
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <01AB4C27> miniz/miniz.c:5021
void mz_zip_file_write_callback(void* pOpaque, mz_uint64 ofs, const void* pBuf, size_t n)
{
} /* size: 0 */

// <01AB499D> miniz/miniz.c:5028
// variables: 3
// function calls: 4
void mz_zip_reader_extract_to_file(mz_zip_archive* pZip, mz_uint file_index, const char* pDst_filename, mz_uint flags)
{
	mz_bool status; // 5030
	mz_zip_archive_file_stat file_stat; // 5031
	FILE* pFile; // 5032
	mz_zip_set_error(mz_zip_archive* pZip,
			mz_zip_error err_num);  // 5038
	mz_zip_set_file_times(const char* pFilename,
				time_t access_time,
				time_t modified_time);  // 5056
	mz_zip_set_error(mz_zip_archive* pZip,
			mz_zip_error err_num);  // 5049
	mz_zip_set_error(mz_zip_archive* pZip,
			mz_zip_error err_num);  // 5042
} /* size: 0, variables: 3, inline expansions: 4 (0 bytes) */

// <01AB48B5> miniz/miniz.c:5062
// variable: 1
void mz_zip_reader_extract_file_to_file(mz_zip_archive* pZip, const char* pArchive_filename, const char* pDst_filename, mz_uint flags)
{
	mz_uint32 file_index; // 5064
} /* size: 0, variables: 1 */

// <01ABEBB4> miniz/miniz.c:5071
// variable: 1
// function calls: 4
void mz_zip_reader_extract_to_cfile(mz_zip_archive* pZip, mz_uint file_index, FILE* pFile, mz_uint flags)
{
	mz_zip_archive_file_stat file_stat; // 5073
	mz_zip_get_cdh(mz_zip_archive* pZip,
			mz_uint file_index);  // 7542
	mz_zip_reader_file_stat(mz_zip_archive* pZip,
				mz_uint file_index,
				mz_zip_archive_file_stat* pStat);  // 5075
	mz_zip_set_error(mz_zip_archive* pZip,
			mz_zip_error err_num);  // 5079
	mz_zip_reader_extract_to_cfile(mz_zip_archive* pZip,
					mz_uint file_index,
					FILE* pFile,
					mz_uint flags);  // 5071
} /* size: 0, variables: 1, inline expansions: 4 (0 bytes) */

// <01AB4869> miniz/miniz.c:5071
// variable: 1
void mz_zip_reader_extract_to_cfile(mz_zip_archive* pZip, mz_uint file_index, FILE* pFile, mz_uint flags)
{
	mz_zip_archive_file_stat file_stat; // 5073
} /* size: 0, variables: 1 */

// <01AB4781> miniz/miniz.c:5084
// variable: 1
void mz_zip_reader_extract_file_to_cfile(mz_zip_archive* pZip, const char* pArchive_filename, FILE* pFile, mz_uint flags)
{
	mz_uint32 file_index; // 5086
} /* size: 0, variables: 1 */

// <01AB46E2> miniz/miniz.c:5094
// variable: 1
void mz_zip_compute_crc32_callback(void* pOpaque, mz_uint64 file_ofs, const void* pBuf, size_t n)
{
	mz_uint32* p; // 5096
} /* size: 0, variables: 1 */

// <01AB3DF5> miniz/miniz.c:5102
// variables: 30
// function calls: 18
void mz_zip_validate_file(mz_zip_archive* pZip, mz_uint file_index, mz_uint flags)
{

handle_failure: // 5303
	mz_zip_archive_file_stat file_stat; // 5104
	mz_zip_internal_state* pState; // 5105
	const mz_uint8* pCentral_dir_header; // 5106
	mz_bool found_zip64_ext_data_in_cdir; // 5107
	mz_bool found_zip64_ext_data_in_ldir; // 5108
	mz_uint32 local_header_u32; // 5109
	mz_uint8* pLocal_header; // 5110
	mz_uint64 local_header_ofs; // 5111
	mz_uint32 local_header_filename_len; // 5112
	mz_uint32 local_header_extra_len; // 5112
	mz_uint32 local_header_crc32; // 5112
	mz_uint64 local_header_comp_size; // 5113
	mz_uint64 local_header_uncomp_size; // 5113
	mz_uint32 uncomp_crc32; // 5114
	mz_bool has_data_descriptor; // 5115
	mz_uint32 local_header_bit_flags; // 5116
	mz_zip_array file_data_array; // 5118
	{
		mz_uint32 extra_size_remaining; // 5192
		const mz_uint8* pExtra_data; // 5193
		{
			mz_uint32 field_id; // 5203
			mz_uint32 field_data_size; // 5203
			mz_uint32 field_total_size; // 5203
			{
				const mz_uint8* pSrc_field_data; // 5217
				mz_zip_set_error(mz_zip_archive* pZip,
						mz_zip_error err_num);  // 5221
			}
		}
		mz_zip_set_error(mz_zip_archive* pZip,
				mz_zip_error err_num);  // 5197
	}
	{
		mz_uint8 descriptor_buf; // 5241
		mz_bool has_id; // 5242
		const mz_uint8* pSrc; // 5243
		mz_uint32 file_crc32; // 5244
		mz_uint64 comp_size; // 5245
		mz_uint64 uncomp_size; // 5245
		mz_uint32 num_descriptor_uint32s; // 5247
	}
	memset(void* __dest,
		int __ch,
		size_t __len);  // 3192
	mz_zip_array_init(mz_zip_array* pArray,
				mz_uint32 element_size);  // 5119
	mz_zip_get_cdh(mz_zip_archive* pZip,
			mz_uint file_index);  // 5129
	mz_zip_set_error(mz_zip_archive* pZip,
			mz_zip_error err_num);  // 5140
	mz_zip_set_error(mz_zip_archive* pZip,
			mz_zip_error err_num);  // 5122
	mz_zip_set_error(mz_zip_archive* pZip,
			mz_zip_error err_num);  // 5144
	mz_zip_set_error(mz_zip_archive* pZip,
			mz_zip_error err_num);  // 5147
	mz_zip_set_error(mz_zip_archive* pZip,
			mz_zip_error err_num);  // 5152
	mz_zip_set_error(mz_zip_archive* pZip,
			mz_zip_error err_num);  // 5155
	mz_zip_array_resize(mz_zip_archive* pZip,
				mz_zip_array* pArray,
				size_t new_size,
				mz_uint growing);  // 5171
	mz_zip_set_error(mz_zip_archive* pZip,
			mz_zip_error err_num);  // 5281
	mz_zip_array_clear(mz_zip_archive* pZip,
				mz_zip_array* pArray);  // 5304
	mz_zip_array_clear(mz_zip_archive* pZip,
				mz_zip_array* pArray);  // 5286
	mz_zip_set_error(mz_zip_archive* pZip,
			mz_zip_error err_num);  // 5296
	mz_zip_set_error(mz_zip_archive* pZip,
			mz_zip_error err_num);  // 5172
	mz_zip_set_error(mz_zip_archive* pZip,
			mz_zip_error err_num);  // 5178
} /* size: 0, variables: 17, goto labels: 1, inline expansions: 16 (0 bytes) */

// <01AB3C2A> miniz/miniz.c:5308
// variables: 4
// function calls: 3
void mz_zip_validate_archive(mz_zip_archive* pZip, mz_uint flags)
{
	mz_zip_internal_state* pState; // 5310
	uint32_t i; // 5311
	{
		mz_uint32 found_index; // 5340
		mz_zip_archive_file_stat stat; // 5341
		mz_zip_set_error(mz_zip_archive* pZip,
				mz_zip_error err_num);  // 5351
	}
	mz_zip_set_error(mz_zip_archive* pZip,
			mz_zip_error err_num);  // 5314
	mz_zip_set_error(mz_zip_archive* pZip,
			mz_zip_error err_num);  // 5322
} /* size: 0, variables: 2, inline expansions: 2 (0 bytes) */

// <01AB3A54> miniz/miniz.c:5361
// variables: 3
// function calls: 3
void mz_zip_validate_mem_archive(const void* pMem, size_t size, mz_uint flags, mz_zip_error* pErr)
{
	mz_bool success; // 5363
	mz_zip_archive zip; // 5364
	mz_zip_error actual_err; // 5365
	memset(void* __dest,
		int __ch,
		size_t __len);  // 3718
	mz_zip_zero_struct(mz_zip_archive* pZip); // 3715
	mz_zip_zero_struct(mz_zip_archive* pZip); // 5374
} /* size: 0, variables: 3, inline expansions: 3 (0 bytes) */

// <01AB3896> miniz/miniz.c:5403
// variables: 3
// function calls: 3
void mz_zip_validate_file_archive(const char* pFilename, mz_uint flags, mz_zip_error* pErr)
{
	mz_bool success; // 5405
	mz_zip_archive zip; // 5406
	mz_zip_error actual_err; // 5407
	memset(void* __dest,
		int __ch,
		size_t __len);  // 3718
	mz_zip_zero_struct(mz_zip_archive* pZip); // 3715
	mz_zip_zero_struct(mz_zip_archive* pZip); // 5416
} /* size: 0, variables: 3, inline expansions: 3 (0 bytes) */

// <01AB3875> miniz/miniz.c:5449
inline void mz_write_le16(mz_uint8* p, mz_uint16 v)
{
} /* size: 0 */

// <01AB3854> miniz/miniz.c:5454
inline void mz_write_le32(mz_uint8* p, mz_uint32 v)
{
} /* size: 0 */

// <01AB3833> miniz/miniz.c:5461
inline void mz_write_le64(mz_uint8* p, mz_uint64 v)
{
} /* size: 0 */

// <01AB36A4> miniz/miniz.c:5471
// variables: 5
// function calls: 2
void mz_zip_heap_write_func(void* pOpaque, mz_uint64 file_ofs, const void* pBuf, size_t n)
{
	mz_zip_archive* pZip; // 5473
	mz_zip_internal_state* pState; // 5474
	mz_uint64 new_size; // 5475
	{
		void* pNew_block; // 5489
		size_t new_capacity; // 5490
		mz_zip_set_error(mz_zip_archive* pZip,
				mz_zip_error err_num);  // 5497
	}
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 5504
} /* size: 0, variables: 3, inline expansions: 1 (0 bytes) */

// <01AB3447> miniz/miniz.c:5509
// variables: 2
// function calls: 8
void mz_zip_writer_end_internal(mz_zip_archive* pZip, mz_bool set_last_error)
{
	mz_zip_internal_state* pState; // 5511
	mz_bool status; // 5512
	memset(void* __dest,
		int __ch,
		size_t __len);  // 3199
	mz_zip_array_clear(mz_zip_archive* pZip,
				mz_zip_array* pArray);  // 5523
	memset(void* __dest,
		int __ch,
		size_t __len);  // 3199
	mz_zip_array_clear(mz_zip_archive* pZip,
				mz_zip_array* pArray);  // 5524
	memset(void* __dest,
		int __ch,
		size_t __len);  // 3199
	mz_zip_array_clear(mz_zip_archive* pZip,
				mz_zip_array* pArray);  // 5525
	mz_zip_set_error(mz_zip_archive* pZip,
			mz_zip_error err_num);  // 5517
	mz_zip_set_error(mz_zip_archive* pZip,
			mz_zip_error err_num);  // 5535
} /* size: 0, variables: 2, inline expansions: 8 (0 bytes) */

// <01AB331A> miniz/miniz.c:5555
// variable: 1
// function calls: 3
void mz_zip_writer_init_v2(mz_zip_archive* pZip, mz_uint64 existing_size, mz_uint flags)
{
	mz_bool zip64; // 5557
	mz_zip_set_error(mz_zip_archive* pZip,
			mz_zip_error err_num);  // 5560
	memset(void* __dest,
		int __ch,
		size_t __len);  // 5589
	mz_zip_set_error(mz_zip_archive* pZip,
			mz_zip_error err_num);  // 5587
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <01AB32B0> miniz/miniz.c:5604
void mz_zip_writer_init(mz_zip_archive* pZip, mz_uint64 existing_size)
{
} /* size: 0 */

// <01ABE6BB> miniz/miniz.c:5609
// function call: 1
void mz_zip_writer_init_heap_v2(mz_zip_archive* pZip, size_t size_to_reserve_at_beginning, size_t initial_allocation_size, mz_uint flags)
{
	mz_zip_set_error(mz_zip_archive* pZip,
			mz_zip_error err_num);  // 5629
} /* size: 0, inline expansions: 1 (0 bytes) */

// <01AB3271> miniz/miniz.c:5609
void mz_zip_writer_init_heap_v2(mz_zip_archive* pZip, size_t size_to_reserve_at_beginning, size_t initial_allocation_size, mz_uint flags)
{
} /* size: 0 */

// <01AB3130> miniz/miniz.c:5637
// function calls: 2
void mz_zip_writer_init_heap(mz_zip_archive* pZip, size_t size_to_reserve_at_beginning, size_t initial_allocation_size)
{
	mz_zip_set_error(mz_zip_archive* pZip,
			mz_zip_error err_num);  // 5629
	mz_zip_writer_init_heap_v2(mz_zip_archive* pZip,
					size_t size_to_reserve_at_beginning,
					size_t initial_allocation_size,
					mz_uint flags);  // 5639
} /* size: 0, inline expansions: 2 (0 bytes) */

// <01AB3007> miniz/miniz.c:5643
// variables: 2
// function call: 1
void mz_zip_file_write_func(void* pOpaque, mz_uint64 file_ofs, const void* pBuf, size_t n)
{
	mz_zip_archive* pZip; // 5645
	mz_int64 cur_ofs; // 5646
	mz_zip_set_error(mz_zip_archive* pZip,
			mz_zip_error err_num);  // 5652
} /* size: 0, variables: 2, inline expansions: 1 (0 bytes) */

// <01AB2F81> miniz/miniz.c:5659
void mz_zip_writer_init_file(mz_zip_archive* pZip, const char* pFilename, mz_uint64 size_to_reserve_at_beginning)
{
} /* size: 0 */

// <01AB2C93> miniz/miniz.c:5664
// variables: 4
// function calls: 5
void mz_zip_writer_init_file_v2(mz_zip_archive* pZip, const char* pFilename, mz_uint64 size_to_reserve_at_beginning, mz_uint flags)
{
	FILE* pFile; // 5666
	{
		mz_uint64 cur_ofs; // 5690
		char buf; // 5691
		{
			size_t n; // 5697
			mz_zip_writer_end(mz_zip_archive* pZip); // 5700
			mz_zip_set_error(mz_zip_archive* pZip,
					mz_zip_error err_num);  // 5701
		}
		memset(void* __dest,
			int __ch,
			size_t __len);  // 5693
	}
	mz_zip_writer_end(mz_zip_archive* pZip); // 5681
	mz_zip_set_error(mz_zip_archive* pZip,
			mz_zip_error err_num);  // 5682
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <01AB2C0B> miniz/miniz.c:5711
void mz_zip_writer_init_cfile(mz_zip_archive* pZip, FILE* pFile, mz_uint flags)
{
} /* size: 0 */

// <01AB2A14> miniz/miniz.c:5732
// variable: 1
// function calls: 6
void mz_zip_writer_init_from_reader_v2(mz_zip_archive* pZip, const char* pFilename, mz_uint flags)
{
	mz_zip_internal_state* pState; // 5734
	mz_zip_set_error(mz_zip_archive* pZip,
			mz_zip_error err_num);  // 5737
	mz_zip_set_error(mz_zip_archive* pZip,
			mz_zip_error err_num);  // 5758
	mz_zip_set_error(mz_zip_archive* pZip,
			mz_zip_error err_num);  // 5750
	memset(void* __dest,
		int __ch,
		size_t __len);  // 3199
	mz_zip_array_clear(mz_zip_archive* pZip,
				mz_zip_array* pArray);  // 5812
	mz_zip_set_error(mz_zip_archive* pZip,
			mz_zip_error err_num);  // 5782
} /* size: 0, variables: 1, inline expansions: 6 (0 bytes) */

// <01AB29AA> miniz/miniz.c:5819
void mz_zip_writer_init_from_reader(mz_zip_archive* pZip, const char* pFilename)
{
} /* size: 0 */

// <01AB2861> miniz/miniz.c:5825
// function call: 1
void mz_zip_writer_add_mem(mz_zip_archive* pZip, const char* pArchive_name, const void* pBuf, size_t buf_size, mz_uint level_and_flags)
{
	mz_zip_writer_add_mem_ex(mz_zip_archive* pZip,
				const char* pArchive_name,
				const void* pBuf,
				size_t buf_size,
				const void* pComment,
				mz_uint16 comment_size,
				mz_uint level_and_flags,
				mz_uint64 uncomp_size,
				mz_uint32 uncomp_crc32);  // 5827
} /* size: 0, inline expansions: 1 (0 bytes) */

// <01AB27D1> miniz/miniz.c:5837
// variable: 1
void mz_zip_writer_add_put_buf_callback(const void* pBuf, int len, void* pUser)
{
	mz_zip_writer_add_state* pState; // 5839
} /* size: 0, variables: 1 */

// <01AB259B> miniz/miniz.c:5850
// variables: 2
// function calls: 8
void mz_zip_writer_create_zip64_extra_data(mz_uint8* pBuf, mz_uint64* pUncomp_size, mz_uint64* pComp_size, mz_uint64* pLocal_header_ofs)
{
	mz_uint8* pDst; // 5852
	mz_uint32 field_size; // 5853
	mz_write_le16(mz_uint8* p,
			mz_uint16 v);  // 5855
	mz_write_le32(mz_uint8* p,
			mz_uint32 v);  // 5463
	mz_write_le64(mz_uint8* p,
			mz_uint64 v);  // 5861
	mz_write_le32(mz_uint8* p,
			mz_uint32 v);  // 5463
	mz_write_le64(mz_uint8* p,
			mz_uint64 v);  // 5868
	mz_write_le32(mz_uint8* p,
			mz_uint32 v);  // 5463
	mz_write_le64(mz_uint8* p,
			mz_uint64 v);  // 5875
	mz_write_le16(mz_uint8* p,
			mz_uint16 v);  // 5880
} /* size: 0, variables: 2, inline expansions: 8 (0 bytes) */

// <01AB24FF> miniz/miniz.c:5885
void mz_zip_writer_create_local_dir_header(mz_zip_archive* pZip, mz_uint8* pDst, mz_uint16 filename_size, mz_uint16 extra_size, mz_uint64 uncomp_size, mz_uint64 comp_size, mz_uint32 uncomp_crc32, mz_uint16 method, mz_uint16 bit_flags, mz_uint16 dos_time, mz_uint16 dos_date)
{
} /* size: 0 */

// <01AB243E> miniz/miniz.c:5903
void mz_zip_writer_create_central_dir_header(mz_zip_archive* pZip, mz_uint8* pDst, mz_uint16 filename_size, mz_uint16 extra_size, mz_uint16 comment_size, mz_uint64 uncomp_size, mz_uint64 comp_size, mz_uint32 uncomp_crc32, mz_uint16 method, mz_uint16 bit_flags, mz_uint16 dos_time, mz_uint16 dos_date, mz_uint64 local_header_ofs, mz_uint32 ext_attributes)
{
} /* size: 0 */

// <01AB1496> miniz/miniz.c:5928
// variables: 4
// function calls: 43
void mz_zip_writer_add_to_central_dir(mz_zip_archive* pZip, const char* pFilename, mz_uint16 filename_size, const void* pExtra, mz_uint16 extra_size, const void* pComment, mz_uint16 comment_size, mz_uint64 uncomp_size, mz_uint64 comp_size, mz_uint32 uncomp_crc32, mz_uint16 method, mz_uint16 bit_flags, mz_uint16 dos_time, mz_uint16 dos_date, mz_uint64 local_header_ofs, mz_uint32 ext_attributes, const char* user_extra_data, mz_uint user_extra_data_len)
{
	mz_zip_internal_state* pState; // 5935
	mz_uint32 central_dir_ofs; // 5936
	size_t orig_central_dir_size; // 5937
	mz_uint8 central_dir_header; // 5938
	mz_zip_set_error(mz_zip_archive* pZip,
			mz_zip_error err_num);  // 5948
	memset(void* __dest,
		int __ch,
		size_t __len);  // 5910
	mz_write_le16(mz_uint8* p,
			mz_uint16 v);  // 5913
	mz_write_le32(mz_uint8* p,
			mz_uint32 v);  // 5917
	mz_write_le16(mz_uint8* p,
			mz_uint16 v);  // 5914
	mz_write_le32(mz_uint8* p,
			mz_uint32 v);  // 5911
	mz_write_le16(mz_uint8* p,
			mz_uint16 v);  // 5922
	mz_write_le16(mz_uint8* p,
			mz_uint16 v);  // 5912
	mz_write_le16(mz_uint8* p,
			mz_uint16 v);  // 5915
	mz_write_le16(mz_uint8* p,
			mz_uint16 v);  // 5916
	mz_write_le32(mz_uint8* p,
			mz_uint32 v);  // 5918
	mz_write_le32(mz_uint8* p,
			mz_uint32 v);  // 5919
	mz_write_le16(mz_uint8* p,
			mz_uint16 v);  // 5920
	mz_write_le16(mz_uint8* p,
			mz_uint16 v);  // 5921
	mz_write_le32(mz_uint8* p,
			mz_uint32 v);  // 5923
	mz_write_le32(mz_uint8* p,
			mz_uint32 v);  // 5924
	mz_zip_writer_create_central_dir_header(mz_zip_archive* pZip,
						mz_uint8* pDst,
						mz_uint16 filename_size,
						mz_uint16 extra_size,
						mz_uint16 comment_size,
						mz_uint64 uncomp_size,
						mz_uint64 comp_size,
						mz_uint32 uncomp_crc32,
						mz_uint16 method,
						mz_uint16 bit_flags,
						mz_uint16 dos_time,
						mz_uint16 dos_date,
						mz_uint64 local_header_ofs,
						mz_uint32 ext_attributes);  // 5950
	mz_zip_array_ensure_capacity(mz_zip_archive* pZip,
					mz_zip_array* pArray,
					size_t min_new_capacity,
					mz_uint growing);  // 3236
	mz_zip_array_resize(mz_zip_archive* pZip,
				mz_zip_array* pArray,
				size_t new_size,
				mz_uint growing);  // 3251
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 3253
	mz_zip_array_push_back(mz_zip_archive* pZip,
				mz_zip_array* pArray,
				const void* pElements,
				size_t n);  // 5953
	mz_zip_array_ensure_capacity(mz_zip_archive* pZip,
					mz_zip_array* pArray,
					size_t min_new_capacity,
					mz_uint growing);  // 3236
	mz_zip_array_resize(mz_zip_archive* pZip,
				mz_zip_array* pArray,
				size_t new_size,
				mz_uint growing);  // 3251
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 3253
	mz_zip_array_push_back(mz_zip_archive* pZip,
				mz_zip_array* pArray,
				const void* pElements,
				size_t n);  // 5954
	mz_zip_array_ensure_capacity(mz_zip_archive* pZip,
					mz_zip_array* pArray,
					size_t min_new_capacity,
					mz_uint growing);  // 3236
	mz_zip_array_resize(mz_zip_archive* pZip,
				mz_zip_array* pArray,
				size_t new_size,
				mz_uint growing);  // 3251
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 3253
	mz_zip_array_push_back(mz_zip_archive* pZip,
				mz_zip_array* pArray,
				const void* pElements,
				size_t n);  // 5955
	mz_zip_array_ensure_capacity(mz_zip_archive* pZip,
					mz_zip_array* pArray,
					size_t min_new_capacity,
					mz_uint growing);  // 3236
	mz_zip_array_resize(mz_zip_archive* pZip,
				mz_zip_array* pArray,
				size_t new_size,
				mz_uint growing);  // 3251
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 3253
	mz_zip_array_push_back(mz_zip_archive* pZip,
				mz_zip_array* pArray,
				const void* pElements,
				size_t n);  // 5956
	mz_zip_array_ensure_capacity(mz_zip_archive* pZip,
					mz_zip_array* pArray,
					size_t min_new_capacity,
					mz_uint growing);  // 3236
	mz_zip_array_resize(mz_zip_archive* pZip,
				mz_zip_array* pArray,
				size_t new_size,
				mz_uint growing);  // 3251
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 3253
	mz_zip_array_push_back(mz_zip_archive* pZip,
				mz_zip_array* pArray,
				const void* pElements,
				size_t n);  // 5957
	mz_zip_array_ensure_capacity(mz_zip_archive* pZip,
					mz_zip_array* pArray,
					size_t min_new_capacity,
					mz_uint growing);  // 3236
	mz_zip_array_resize(mz_zip_archive* pZip,
				mz_zip_array* pArray,
				size_t new_size,
				mz_uint growing);  // 3251
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 3253
	mz_zip_array_push_back(mz_zip_archive* pZip,
				mz_zip_array* pArray,
				const void* pElements,
				size_t n);  // 5958
	mz_zip_array_ensure_capacity(mz_zip_archive* pZip,
					mz_zip_array* pArray,
					size_t min_new_capacity,
					mz_uint growing);  // 3236
	mz_zip_array_resize(mz_zip_archive* pZip,
				mz_zip_array* pArray,
				size_t new_size,
				mz_uint growing);  // 5961
} /* size: 0, variables: 4, inline expansions: 43 (0 bytes) */

// <01AB147E> miniz/miniz.c:5968
void mz_zip_writer_validate_archive_name(const char* pArchive_name)
{
} /* size: 0 */

// <01AB145B> miniz/miniz.c:5985
// variable: 1
void mz_zip_writer_compute_padding_needed_for_file_alignment(mz_zip_archive* pZip)
{
	mz_uint32 n; // 5987
} /* size: 0, variables: 1 */

// <01AB12D5> miniz/miniz.c:5994
// variables: 2
// function calls: 2
void mz_zip_writer_write_zeros(mz_zip_archive* pZip, mz_uint64 cur_file_ofs, mz_uint32 n)
{
	char buf; // 5996
	{
		mz_uint32 s; // 6000
		mz_zip_set_error(mz_zip_archive* pZip,
				mz_zip_error err_num);  // 6002
	}
	memset(void* __dest,
		int __ch,
		size_t __len);  // 5997
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <01ABE7A4> miniz/miniz.c:6010
void mz_zip_writer_add_mem_ex(mz_zip_archive* pZip, const char* pArchive_name, const void* pBuf, size_t buf_size, const void* pComment, mz_uint16 comment_size, mz_uint level_and_flags, mz_uint64 uncomp_size, mz_uint32 uncomp_crc32)
{
} /* size: 0 */

// <01AAFFB6> miniz/miniz.c:6016
// variables: 22
// function calls: 48
void mz_zip_writer_add_mem_ex_v2(mz_zip_archive* pZip, const char* pArchive_name, const void* pBuf, size_t buf_size, const void* pComment, mz_uint16 comment_size, mz_uint level_and_flags, mz_uint64 uncomp_size, mz_uint32 uncomp_crc32, time_t* last_modified, const char* user_extra_data, mz_uint user_extra_data_len, const char* user_extra_data_central, mz_uint user_extra_data_central_len)
{
	mz_uint16 method; // 6020
	mz_uint16 dos_time; // 6020
	mz_uint16 dos_date; // 6020
	mz_uint level; // 6021
	mz_uint ext_attributes; // 6021
	mz_uint num_alignment_padding_bytes; // 6021
	mz_uint64 local_dir_header_ofs; // 6022
	mz_uint64 cur_archive_file_ofs; // 6022
	mz_uint64 comp_size; // 6022
	size_t archive_name_size; // 6023
	mz_uint8 local_dir_header; // 6024
	tdefl_compressor* pComp; // 6025
	mz_bool store_data_uncompressed; // 6026
	mz_zip_internal_state* pState; // 6027
	mz_uint8* pExtra_data; // 6028
	mz_uint32 extra_size; // 6029
	mz_uint8 extra_data; // 6030
	mz_uint16 bit_flags; // 6031
	{
		time_t cur_time; // 6082
	}
	{
		mz_zip_writer_add_state state; // 6235
		tdefl_create_comp_flags_from_zip_params(int level,
							int window_bits,
							int strategy);  // 6241
		tdefl_compress_buffer(tdefl_compressor* d,
					const void* pIn_buf,
					size_t in_buf_size,
					tdefl_flush flush);  // 6242
		mz_zip_set_error(mz_zip_archive* pZip,
				mz_zip_error err_num);  // 6245
	}
	{
		mz_uint8 local_dir_footer; // 6257
		mz_uint32 local_dir_footer_size; // 6258
		mz_zip_set_error(mz_zip_archive* pZip,
				mz_zip_error err_num);  // 6267
		mz_write_le32(mz_uint8* p,
				mz_uint32 v);  // 6262
		mz_write_le32(mz_uint8* p,
				mz_uint32 v);  // 6263
		mz_write_le32(mz_uint8* p,
				mz_uint32 v);  // 5463
		mz_write_le32(mz_uint8* p,
				mz_uint32 v);  // 5464
		mz_write_le64(mz_uint8* p,
				mz_uint64 v);  // 6274
		mz_write_le32(mz_uint8* p,
				mz_uint32 v);  // 5463
		mz_write_le32(mz_uint8* p,
				mz_uint32 v);  // 5464
		mz_write_le64(mz_uint8* p,
				mz_uint64 v);  // 6275
		mz_write_le32(mz_uint8* p,
				mz_uint32 v);  // 6269
		mz_write_le32(mz_uint8* p,
				mz_uint32 v);  // 6270
	}
	mz_zip_set_error(mz_zip_archive* pZip,
			mz_zip_error err_num);  // 6046
	mz_zip_writer_validate_archive_name(const char* pArchive_name); // 5968
	mz_zip_writer_validate_archive_name(const char* pArchive_name); // 6072
	mz_zip_writer_compute_padding_needed_for_file_alignment(mz_zip_archive* pZip); // 6103
	mz_zip_set_error(mz_zip_archive* pZip,
			mz_zip_error err_num);  // 6107
	mz_zip_set_error(mz_zip_archive* pZip,
			mz_zip_error err_num);  // 6073
	mz_zip_set_error(mz_zip_archive* pZip,
			mz_zip_error err_num);  // 6053
	mz_zip_array_reserve(mz_zip_archive* pZip,
				mz_zip_array* pArray,
				size_t new_capacity,
				mz_uint growing);  // 3245
	mz_zip_array_ensure_room(mz_zip_archive* pZip,
				mz_zip_array* pArray,
				size_t n);  // 6133
	mz_zip_array_reserve(mz_zip_archive* pZip,
				mz_zip_array* pArray,
				size_t new_capacity,
				mz_uint growing);  // 3245
	mz_zip_array_ensure_room(mz_zip_archive* pZip,
				mz_zip_array* pArray,
				size_t n);  // 6133
	mz_zip_set_error(mz_zip_archive* pZip,
			mz_zip_error err_num);  // 6134
	memset(void* __dest,
		int __ch,
		size_t __len);  // 6155
	memset(void* __dest,
		int __ch,
		size_t __len);  // 5888
	mz_write_le32(mz_uint8* p,
			mz_uint32 v);  // 5889
	mz_write_le16(mz_uint8* p,
			mz_uint16 v);  // 5893
	mz_write_le16(mz_uint8* p,
			mz_uint16 v);  // 5891
	mz_write_le16(mz_uint8* p,
			mz_uint16 v);  // 5890
	mz_write_le16(mz_uint8* p,
			mz_uint16 v);  // 5892
	mz_write_le16(mz_uint8* p,
			mz_uint16 v);  // 5894
	mz_write_le16(mz_uint8* p,
			mz_uint16 v);  // 5898
	mz_write_le16(mz_uint8* p,
			mz_uint16 v);  // 5899
	mz_zip_writer_create_local_dir_header(mz_zip_archive* pZip,
						mz_uint8* pDst,
						mz_uint16 filename_size,
						mz_uint16 extra_size,
						mz_uint64 uncomp_size,
						mz_uint64 comp_size,
						mz_uint32 uncomp_crc32,
						mz_uint16 method,
						mz_uint16 bit_flags,
						mz_uint16 dos_time,
						mz_uint16 dos_date);  // 6171
	mz_zip_set_error(mz_zip_archive* pZip,
			mz_zip_error err_num);  // 6227
	mz_zip_set_error(mz_zip_archive* pZip,
			mz_zip_error err_num);  // 6209
	mz_write_le16(mz_uint8* p,
			mz_uint16 v);  // 5891
	mz_write_le16(mz_uint8* p,
			mz_uint16 v);  // 5898
	mz_write_le16(mz_uint8* p,
			mz_uint16 v);  // 5890
	mz_write_le16(mz_uint8* p,
			mz_uint16 v);  // 5892
	mz_write_le32(mz_uint8* p,
			mz_uint32 v);  // 5889
	mz_write_le16(mz_uint8* p,
			mz_uint16 v);  // 5893
	mz_write_le16(mz_uint8* p,
			mz_uint16 v);  // 5894
	mz_write_le16(mz_uint8* p,
			mz_uint16 v);  // 5899
	mz_zip_writer_create_local_dir_header(mz_zip_archive* pZip,
						mz_uint8* pDst,
						mz_uint16 filename_size,
						mz_uint16 extra_size,
						mz_uint64 uncomp_size,
						mz_uint64 comp_size,
						mz_uint32 uncomp_crc32,
						mz_uint16 method,
						mz_uint16 bit_flags,
						mz_uint16 dos_time,
						mz_uint16 dos_date);  // 6198
} /* size: 0, variables: 18, inline expansions: 34 (0 bytes) */

// <01AAECD5> miniz/miniz.c:6303
// variables: 29
// function calls: 46
void mz_zip_writer_add_cfile(mz_zip_archive* pZip, const char* pArchive_name, FILE* pSrc_file, mz_uint64 size_to_add, const time_t* pFile_time, const void* pComment, mz_uint16 comment_size, mz_uint level_and_flags, const char* user_extra_data, mz_uint user_extra_data_len, const char* user_extra_data_central, mz_uint user_extra_data_central_len)
{
	mz_uint16 gen_flags; // 6306
	mz_uint uncomp_crc32; // 6307
	mz_uint level; // 6307
	mz_uint num_alignment_padding_bytes; // 6307
	mz_uint16 method; // 6308
	mz_uint16 dos_time; // 6308
	mz_uint16 dos_date; // 6308
	mz_uint16 ext_attributes; // 6308
	mz_uint64 local_dir_header_ofs; // 6309
	mz_uint64 cur_archive_file_ofs; // 6309
	mz_uint64 uncomp_size; // 6309
	mz_uint64 comp_size; // 6309
	size_t archive_name_size; // 6310
	mz_uint8 local_dir_header; // 6311
	mz_uint8* pExtra_data; // 6312
	mz_uint32 extra_size; // 6313
	mz_uint8 extra_data; // 6314
	mz_zip_internal_state* pState; // 6315
	{
		mz_uint64 uncomp_remaining; // 6468
		void* pRead_buf; // 6469
		{
			mz_uint n; // 6479
			fread(void* __ptr,
				size_t __size,
				size_t __n,
				FILE* __stream);  // 6480
			mz_zip_set_error(mz_zip_archive* pZip,
					mz_zip_error err_num);  // 6483
		}
		{
			mz_bool result; // 6493
			mz_zip_writer_add_state state; // 6494
			tdefl_compressor* pComp; // 6495
			{
				size_t in_buf_size; // 6515
				tdefl_status status; // 6516
				tdefl_flush flush; // 6517
				tdefl_compress_buffer(tdefl_compressor* d,
							const void* pIn_buf,
							size_t in_buf_size,
							tdefl_flush flush);  // 6531
				fread(void* __ptr,
					size_t __size,
					size_t __n,
					FILE* __stream);  // 6519
				mz_zip_set_error(mz_zip_archive* pZip,
						mz_zip_error err_num);  // 6539
			}
			mz_zip_set_error(mz_zip_archive* pZip,
					mz_zip_error err_num);  // 6499
			tdefl_create_comp_flags_from_zip_params(int level,
								int window_bits,
								int strategy);  // 6506
		}
	}
	{
		mz_uint8 local_dir_footer; // 6560
		mz_uint32 local_dir_footer_size; // 6561
		mz_zip_set_error(mz_zip_archive* pZip,
				mz_zip_error err_num);  // 6568
		mz_write_le32(mz_uint8* p,
				mz_uint32 v);  // 6563
		mz_write_le32(mz_uint8* p,
				mz_uint32 v);  // 6564
		mz_write_le32(mz_uint8* p,
				mz_uint32 v);  // 6571
		mz_write_le32(mz_uint8* p,
				mz_uint32 v);  // 6570
		mz_write_le32(mz_uint8* p,
				mz_uint32 v);  // 5463
		mz_write_le32(mz_uint8* p,
				mz_uint32 v);  // 5464
		mz_write_le64(mz_uint8* p,
				mz_uint64 v);  // 6575
		mz_write_le32(mz_uint8* p,
				mz_uint32 v);  // 5464
		mz_write_le32(mz_uint8* p,
				mz_uint32 v);  // 5463
		mz_write_le64(mz_uint8* p,
				mz_uint64 v);  // 6576
	}
	mz_zip_set_error(mz_zip_archive* pZip,
			mz_zip_error err_num);  // 6326
	mz_zip_writer_validate_archive_name(const char* pArchive_name); // 5968
	mz_zip_writer_validate_archive_name(const char* pArchive_name); // 6341
	mz_zip_writer_compute_padding_needed_for_file_alignment(mz_zip_archive* pZip); // 6362
	mz_zip_set_error(mz_zip_archive* pZip,
			mz_zip_error err_num);  // 6366
	mz_zip_set_error(mz_zip_archive* pZip,
			mz_zip_error err_num);  // 6342
	memset(void* __dest,
		int __ch,
		size_t __len);  // 6408
	memset(void* __dest,
		int __ch,
		size_t __len);  // 5888
	mz_write_le16(mz_uint8* p,
			mz_uint16 v);  // 5891
	mz_write_le32(mz_uint8* p,
			mz_uint32 v);  // 5889
	mz_write_le16(mz_uint8* p,
			mz_uint16 v);  // 5893
	mz_write_le16(mz_uint8* p,
			mz_uint16 v);  // 5890
	mz_write_le16(mz_uint8* p,
			mz_uint16 v);  // 5892
	mz_write_le16(mz_uint8* p,
			mz_uint16 v);  // 5894
	mz_write_le16(mz_uint8* p,
			mz_uint16 v);  // 5898
	mz_write_le16(mz_uint8* p,
			mz_uint16 v);  // 5899
	mz_zip_writer_create_local_dir_header(mz_zip_archive* pZip,
						mz_uint8* pDst,
						mz_uint16 filename_size,
						mz_uint16 extra_size,
						mz_uint64 uncomp_size,
						mz_uint64 comp_size,
						mz_uint32 uncomp_crc32,
						mz_uint16 method,
						mz_uint16 bit_flags,
						mz_uint16 dos_time,
						mz_uint16 dos_date);  // 6418
	mz_zip_set_error(mz_zip_archive* pZip,
			mz_zip_error err_num);  // 6392
	mz_zip_set_error(mz_zip_archive* pZip,
			mz_zip_error err_num);  // 6347
	mz_write_le16(mz_uint8* p,
			mz_uint16 v);  // 5891
	mz_write_le32(mz_uint8* p,
			mz_uint32 v);  // 5889
	mz_write_le16(mz_uint8* p,
			mz_uint16 v);  // 5898
	mz_write_le16(mz_uint8* p,
			mz_uint16 v);  // 5890
	mz_write_le16(mz_uint8* p,
			mz_uint16 v);  // 5892
	mz_write_le16(mz_uint8* p,
			mz_uint16 v);  // 5893
	mz_write_le16(mz_uint8* p,
			mz_uint16 v);  // 5894
	mz_write_le16(mz_uint8* p,
			mz_uint16 v);  // 5899
	mz_zip_writer_create_local_dir_header(mz_zip_archive* pZip,
						mz_uint8* pDst,
						mz_uint16 filename_size,
						mz_uint16 extra_size,
						mz_uint64 uncomp_size,
						mz_uint64 comp_size,
						mz_uint32 uncomp_crc32,
						mz_uint16 method,
						mz_uint16 bit_flags,
						mz_uint16 dos_time,
						mz_uint16 dos_date);  // 6442
} /* size: 0, variables: 18, inline expansions: 28 (0 bytes) */

// <01AAEA1D> miniz/miniz.c:6603
// variables: 5
// function calls: 3
void mz_zip_writer_add_file(mz_zip_archive* pZip, const char* pArchive_name, const char* pSrc_filename, const void* pComment, mz_uint16 comment_size, mz_uint level_and_flags)
{
	FILE* pSrc_file; // 6605
	mz_uint64 uncomp_size; // 6606
	time_t file_modified_time; // 6607
	time_t* pFile_time; // 6608
	mz_bool status; // 6609
	mz_zip_get_file_modified_time(const char* pFilename,
					time_t* pTime);  // 6615
	mz_zip_set_error(mz_zip_archive* pZip,
			mz_zip_error err_num);  // 6616
	mz_zip_set_error(mz_zip_archive* pZip,
			mz_zip_error err_num);  // 6621
} /* size: 0, variables: 5, inline expansions: 3 (0 bytes) */

// <01AAE935> miniz/miniz.c:6635
// variables: 7
void mz_zip_writer_update_zip64_extension_block(mz_zip_array* pNew_ext, mz_zip_archive* pZip, const mz_uint8* pExt, uint32_t ext_len, mz_uint64* pComp_size, mz_uint64* pUncomp_size, mz_uint64* pLocal_header_ofs, mz_uint32* pDisk_start)
{
	{
		mz_uint8 new_ext_block; // 6645
		mz_uint8* pDst; // 6646
	}
	{
		mz_uint32 extra_size_remaining; // 6683
		const mz_uint8* pExtra_data; // 6684
		{
			mz_uint32 field_id; // 6688
			mz_uint32 field_data_size; // 6688
			mz_uint32 field_total_size; // 6688
		}
	}
} /* size: 0 */

// <01AACA29> miniz/miniz.c:6715
// variables: 46
// function calls: 83
void mz_zip_writer_add_from_zip_reader(mz_zip_archive* pZip, mz_zip_archive* pSource_zip, mz_uint src_file_index)
{
	mz_uint n; // 6717
	mz_uint bit_flags; // 6717
	mz_uint num_alignment_padding_bytes; // 6717
	mz_uint src_central_dir_following_data_size; // 6717
	mz_uint64 src_archive_bytes_remaining; // 6718
	mz_uint64 local_dir_header_ofs; // 6718
	mz_uint64 cur_src_file_ofs; // 6719
	mz_uint64 cur_dst_file_ofs; // 6719
	mz_uint32 local_header_u32; // 6720
	mz_uint8* pLocal_header; // 6721
	mz_uint8 new_central_header; // 6722
	size_t orig_central_dir_size; // 6723
	mz_zip_internal_state* pState; // 6724
	void* pBuf; // 6725
	const mz_uint8* pSrc_central_header; // 6726
	mz_zip_archive_file_stat src_file_stat; // 6727
	mz_uint32 src_filename_len; // 6728
	mz_uint32 src_comment_len; // 6728
	mz_uint32 src_ext_len; // 6728
	mz_uint32 local_header_filename_size; // 6729
	mz_uint32 local_header_extra_len; // 6729
	mz_uint64 local_header_comp_size; // 6730
	mz_uint64 local_header_uncomp_size; // 6730
	mz_bool found_zip64_ext_data_in_ldir; // 6731
	{
		mz_zip_array file_data_array; // 6798
		const mz_uint8* pExtra_data; // 6799
		mz_uint32 extra_size_remaining; // 6800
		{
			mz_uint32 field_id; // 6818
			mz_uint32 field_data_size; // 6818
			mz_uint32 field_total_size; // 6818
			{
				const mz_uint8* pSrc_field_data; // 6838
				mz_zip_array_clear(mz_zip_archive* pZip,
							mz_zip_array* pArray);  // 6842
			}
		}
		memset(void* __dest,
			int __ch,
			size_t __len);  // 3192
		mz_zip_array_init(mz_zip_array* pArray,
					mz_uint32 element_size);  // 6802
		mz_zip_array_resize(mz_zip_archive* pZip,
					mz_zip_array* pArray,
					size_t new_size,
					mz_uint growing);  // 6803
		mz_zip_array_clear(mz_zip_archive* pZip,
					mz_zip_array* pArray);  // 6810
		mz_zip_set_error(mz_zip_archive* pZip,
				mz_zip_error err_num);  // 6805
		mz_zip_array_clear(mz_zip_archive* pZip,
					mz_zip_array* pArray);  // 6857
	}
	{
		mz_uint64 approx_new_archive_size; // 6864
		mz_zip_set_error(mz_zip_archive* pZip,
				mz_zip_error err_num);  // 6868
	}
	{
		mz_bool has_id; // 6938
		{
			const mz_uint32* pSrc_descriptor; // 6951
			const mz_uint32  src_crc32; // 6952
			const mz_uint64  src_comp_size; // 6953
			const mz_uint64  src_uncomp_size; // 6954
			mz_write_le32(mz_uint8* p,
					mz_uint32 v);  // 5464
			mz_write_le32(mz_uint8* p,
					mz_uint32 v);  // 5463
			mz_write_le64(mz_uint8* p,
					mz_uint64 v);  // 6959
			mz_write_le32(mz_uint8* p,
					mz_uint32 v);  // 6956
			mz_write_le32(mz_uint8* p,
					mz_uint32 v);  // 6957
			mz_write_le32(mz_uint8* p,
					mz_uint32 v);  // 5464
			mz_write_le64(mz_uint8* p,
					mz_uint64 v);  // 6958
		}
		mz_zip_set_error(mz_zip_archive* pZip,
				mz_zip_error err_num);  // 6943
	}
	{
		const mz_uint8* pSrc_ext; // 6989
		mz_zip_array new_ext_block; // 6990
		mz_zip_array_resize(mz_zip_archive* pZip,
					mz_zip_array* pArray,
					size_t new_size,
					mz_uint growing);  // 7015
		mz_zip_set_error(mz_zip_archive* pZip,
				mz_zip_error err_num);  // 7016
		mz_zip_array_ensure_capacity(mz_zip_archive* pZip,
						mz_zip_array* pArray,
						size_t min_new_capacity,
						mz_uint growing);  // 3226
		mz_zip_array_reserve(mz_zip_archive* pZip,
					mz_zip_array* pArray,
					size_t new_capacity,
					mz_uint growing);  // 6638
		{
			mz_uint8 new_ext_block; // 6645
			mz_uint8* pDst; // 6646
			mz_write_le32(mz_uint8* p,
					mz_uint32 v);  // 5463
			mz_write_le64(mz_uint8* p,
					mz_uint64 v);  // 6653
			mz_write_le16(mz_uint8* p,
					mz_uint16 v);  // 6647
			mz_write_le32(mz_uint8* p,
					mz_uint32 v);  // 5463
			mz_write_le32(mz_uint8* p,
					mz_uint32 v);  // 5464
			mz_write_le64(mz_uint8* p,
					mz_uint64 v);  // 6665
			mz_write_le32(mz_uint8* p,
					mz_uint32 v);  // 5463
			mz_write_le32(mz_uint8* p,
					mz_uint32 v);  // 5464
			mz_write_le64(mz_uint8* p,
					mz_uint64 v);  // 6659
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 3253
			mz_zip_array_resize(mz_zip_archive* pZip,
						mz_zip_array* pArray,
						size_t new_size,
						mz_uint growing);  // 3251
			mz_zip_array_push_back(mz_zip_archive* pZip,
						mz_zip_array* pArray,
						const void* pElements,
						size_t n);  // 6677
		}
		{
			mz_uint32 extra_size_remaining; // 6683
			const mz_uint8* pExtra_data; // 6684
			{
				mz_uint32 field_id; // 6688
				mz_uint32 field_data_size; // 6688
				mz_uint32 field_total_size; // 6688
				memcpy(void* __dest,
					const void* __src,
					size_t __len);  // 3253
				mz_zip_array_ensure_capacity(mz_zip_archive* pZip,
								mz_zip_array* pArray,
								size_t min_new_capacity,
								mz_uint growing);  // 3236
				mz_zip_array_resize(mz_zip_archive* pZip,
							mz_zip_array* pArray,
							size_t new_size,
							mz_uint growing);  // 3251
				mz_zip_array_push_back(mz_zip_archive* pZip,
							mz_zip_array* pArray,
							const void* pElements,
							size_t n);  // 6702
			}
		}
		mz_zip_set_error(mz_zip_archive* pZip,
				mz_zip_error err_num);  // 6639
		mz_zip_writer_update_zip64_extension_block(mz_zip_array* pNew_ext,
								mz_zip_archive* pZip,
								const mz_uint8* pExt,
								uint32_t ext_len,
								mz_uint64* pComp_size,
								mz_uint64* pUncomp_size,
								mz_uint64* pLocal_header_ofs,
								mz_uint32* pDisk_start);  // 6998
		memset(void* __dest,
			int __ch,
			size_t __len);  // 3192
		mz_zip_array_init(mz_zip_array* pArray,
					mz_uint32 element_size);  // 6992
		mz_write_le32(mz_uint8* p,
				mz_uint32 v);  // 6994
		mz_write_le32(mz_uint8* p,
				mz_uint32 v);  // 6996
		mz_zip_array_clear(mz_zip_archive* pZip,
					mz_zip_array* pArray);  // 7000
		mz_write_le16(mz_uint8* p,
				mz_uint16 v);  // 7004
		mz_zip_array_resize(mz_zip_archive* pZip,
					mz_zip_array* pArray,
					size_t new_size,
					mz_uint growing);  // 3251
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 3253
		mz_zip_array_push_back(mz_zip_archive* pZip,
					mz_zip_array* pArray,
					const void* pElements,
					size_t n);  // 7006
		mz_zip_array_resize(mz_zip_archive* pZip,
					mz_zip_array* pArray,
					size_t new_size,
					mz_uint growing);  // 3251
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 3253
		mz_zip_array_push_back(mz_zip_archive* pZip,
					mz_zip_array* pArray,
					const void* pElements,
					size_t n);  // 7012
		mz_zip_array_resize(mz_zip_archive* pZip,
					mz_zip_array* pArray,
					size_t new_size,
					mz_uint growing);  // 3251
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 3253
		mz_zip_array_push_back(mz_zip_archive* pZip,
					mz_zip_array* pArray,
					const void* pElements,
					size_t n);  // 7019
		mz_zip_array_resize(mz_zip_archive* pZip,
					mz_zip_array* pArray,
					size_t new_size,
					mz_uint growing);  // 3251
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 3253
		mz_zip_array_push_back(mz_zip_archive* pZip,
					mz_zip_array* pArray,
					const void* pElements,
					size_t n);  // 7026
		mz_zip_array_clear(mz_zip_archive* pZip,
					mz_zip_array* pArray);  // 7033
		mz_zip_array_clear(mz_zip_archive* pZip,
					mz_zip_array* pArray);  // 7028
		mz_zip_array_resize(mz_zip_archive* pZip,
					mz_zip_array* pArray,
					size_t new_size,
					mz_uint growing);  // 7029
		mz_zip_array_clear(mz_zip_archive* pZip,
					mz_zip_array* pArray);  // 7008
		mz_zip_set_error(mz_zip_archive* pZip,
				mz_zip_error err_num);  // 7009
	}
	mz_zip_set_error(mz_zip_archive* pZip,
			mz_zip_error err_num);  // 6735
	mz_zip_get_cdh(mz_zip_archive* pZip,
			mz_uint file_index);  // 6744
	mz_zip_set_error(mz_zip_archive* pZip,
			mz_zip_error err_num);  // 6748
	mz_zip_writer_compute_padding_needed_for_file_alignment(mz_zip_archive* pZip); // 6759
	mz_zip_set_error(mz_zip_archive* pZip,
			mz_zip_error err_num);  // 6973
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 6984
	mz_write_le32(mz_uint8* p,
			mz_uint32 v);  // 7044
	mz_zip_array_resize(mz_zip_archive* pZip,
				mz_zip_array* pArray,
				size_t new_size,
				mz_uint growing);  // 3251
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 3253
	mz_zip_array_push_back(mz_zip_archive* pZip,
				mz_zip_array* pArray,
				const void* pElements,
				size_t n);  // 7046
	mz_zip_array_resize(mz_zip_archive* pZip,
				mz_zip_array* pArray,
				size_t new_size,
				mz_uint growing);  // 3251
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 3253
	mz_zip_array_push_back(mz_zip_archive* pZip,
				mz_zip_array* pArray,
				const void* pElements,
				size_t n);  // 7049
	mz_zip_array_resize(mz_zip_archive* pZip,
				mz_zip_array* pArray,
				size_t new_size,
				mz_uint growing);  // 7060
	mz_zip_set_error(mz_zip_archive* pZip,
			mz_zip_error err_num);  // 7061
	mz_zip_set_error(mz_zip_archive* pZip,
			mz_zip_error err_num);  // 6764
	mz_zip_set_error(mz_zip_archive* pZip,
			mz_zip_error err_num);  // 6906
	mz_zip_set_error(mz_zip_archive* pZip,
			mz_zip_error err_num);  // 6899
	mz_zip_array_resize(mz_zip_archive* pZip,
				mz_zip_array* pArray,
				size_t new_size,
				mz_uint growing);  // 7067
	mz_zip_array_resize(mz_zip_archive* pZip,
				mz_zip_array* pArray,
				size_t new_size,
				mz_uint growing);  // 3251
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 3253
	mz_zip_array_push_back(mz_zip_archive* pZip,
				mz_zip_array* pArray,
				const void* pElements,
				size_t n);  // 7065
} /* size: 0, variables: 24, inline expansions: 22 (0 bytes) */

// <01AAC271> miniz/miniz.c:7077
// variables: 5
// function calls: 30
void mz_zip_writer_finalize_archive(mz_zip_archive* pZip)
{
	mz_zip_internal_state* pState; // 7079
	mz_uint64 central_dir_ofs; // 7080
	mz_uint64 central_dir_size; // 7080
	mz_uint8 hdr; // 7081
	{
		mz_uint64 rel_ofs_to_zip64_ecdr; // 7116
		memset(void* __dest,
			int __ch,
			size_t __len);  // 7118
		mz_write_le16(mz_uint8* p,
				mz_uint16 v);  // 7121
		mz_write_le32(mz_uint8* p,
				mz_uint32 v);  // 5463
		mz_write_le64(mz_uint8* p,
				mz_uint64 v);  // 7120
		mz_write_le32(mz_uint8* p,
				mz_uint32 v);  // 7119
		mz_write_le16(mz_uint8* p,
				mz_uint16 v);  // 7122
		mz_write_le32(mz_uint8* p,
				mz_uint32 v);  // 5463
		mz_write_le64(mz_uint8* p,
				mz_uint64 v);  // 7123
		mz_write_le32(mz_uint8* p,
				mz_uint32 v);  // 5463
		mz_write_le64(mz_uint8* p,
				mz_uint64 v);  // 7124
		mz_write_le32(mz_uint8* p,
				mz_uint32 v);  // 5463
		mz_write_le32(mz_uint8* p,
				mz_uint32 v);  // 5464
		mz_write_le64(mz_uint8* p,
				mz_uint64 v);  // 7125
		mz_write_le32(mz_uint8* p,
				mz_uint32 v);  // 5463
		mz_write_le32(mz_uint8* p,
				mz_uint32 v);  // 5464
		mz_write_le64(mz_uint8* p,
				mz_uint64 v);  // 7126
		memset(void* __dest,
			int __ch,
			size_t __len);  // 7133
		mz_write_le32(mz_uint8* p,
				mz_uint32 v);  // 7134
		mz_write_le32(mz_uint8* p,
				mz_uint32 v);  // 5463
		mz_write_le64(mz_uint8* p,
				mz_uint64 v);  // 7135
		mz_write_le32(mz_uint8* p,
				mz_uint32 v);  // 7136
	}
	mz_zip_set_error(mz_zip_archive* pZip,
			mz_zip_error err_num);  // 7084
	mz_write_le32(mz_uint8* p,
			mz_uint32 v);  // 7148
	mz_write_le32(mz_uint8* p,
			mz_uint32 v);  // 7149
	mz_zip_set_error(mz_zip_archive* pZip,
			mz_zip_error err_num);  // 7091
	memset(void* __dest,
		int __ch,
		size_t __len);  // 7144
	mz_write_le16(mz_uint8* p,
			mz_uint16 v);  // 7146
	mz_write_le32(mz_uint8* p,
			mz_uint32 v);  // 7145
	mz_zip_set_error(mz_zip_archive* pZip,
			mz_zip_error err_num);  // 7108
	mz_zip_set_error(mz_zip_archive* pZip,
			mz_zip_error err_num);  // 7156
} /* size: 0, variables: 4, inline expansions: 9 (0 bytes) */

// <01AAC1C8> miniz/miniz.c:7165
// function call: 1
void mz_zip_writer_finalize_heap_archive(mz_zip_archive* pZip, void** ppBuf, size_t* pSize)
{
	mz_zip_set_error(mz_zip_archive* pZip,
			mz_zip_error err_num);  // 7168
} /* size: 0, inline expansions: 1 (0 bytes) */

// <01ABE873> miniz/miniz.c:7190
void mz_zip_writer_end(mz_zip_archive* pZip)
{
} /* size: 0 */

// <01AAC0C1> miniz/miniz.c:7196
void mz_zip_add_mem_to_archive_file_in_place(const char* pZip_filename, const char* pArchive_name, const void* pBuf, size_t buf_size, const void* pComment, mz_uint16 comment_size, mz_uint level_and_flags)
{
} /* size: 0 */

// <01AABC9D> miniz/miniz.c:7201
// variables: 6
// function calls: 6
void mz_zip_add_mem_to_archive_file_in_place_v2(const char* pZip_filename, const char* pArchive_name, const void* pBuf, size_t buf_size, const void* pComment, mz_uint16 comment_size, mz_uint level_and_flags, mz_zip_error* pErr)
{
	mz_bool status; // 7203
	mz_bool created_new_archive; // 7203
	mz_zip_archive zip_archive; // 7204
	stat64 file_stat; // 7205
	mz_zip_error actual_err; // 7206
	{
		int ignoredStatus; // 7284
	}
	memset(void* __dest,
		int __ch,
		size_t __len);  // 3718
	mz_zip_zero_struct(mz_zip_archive* pZip); // 3715
	mz_zip_zero_struct(mz_zip_archive* pZip); // 7208
	mz_zip_writer_validate_archive_name(const char* pArchive_name); // 5968
	mz_zip_writer_validate_archive_name(const char* pArchive_name); // 7219
	mz_zip_writer_add_mem_ex(mz_zip_archive* pZip,
				const char* pArchive_name,
				const void* pBuf,
				size_t buf_size,
				const void* pComment,
				mz_uint16 comment_size,
				mz_uint level_and_flags,
				mz_uint64 uncomp_size,
				mz_uint32 uncomp_crc32);  // 7261
} /* size: 0, variables: 5, inline expansions: 6 (0 bytes) */

// <01AABA90> miniz/miniz.c:7294
// variables: 3
// function calls: 3
void* mz_zip_extract_archive_file_to_heap_v2(const char* pZip_filename, const char* pArchive_name, const char* pComment, size_t* pSize, mz_uint flags, mz_zip_error* pErr)
{
	mz_uint32 file_index; // 7296
	mz_zip_archive zip_archive; // 7297
	void* p; // 7298
	memset(void* __dest,
		int __ch,
		size_t __len);  // 3718
	mz_zip_zero_struct(mz_zip_archive* pZip); // 3715
	mz_zip_zero_struct(mz_zip_archive* pZip); // 7311
} /* size: 0, variables: 3, inline expansions: 3 (0 bytes) */

// <01AAB9DF> miniz/miniz.c:7333
void* mz_zip_extract_archive_file_to_heap(const char* pZip_filename, const char* pArchive_name, size_t* pSize, mz_uint flags)
{
} /* size: 0 */

// <01AAB9B2> miniz/miniz.c:7344
void mz_zip_get_mode(mz_zip_archive* pZip)
{
} /* size: 0 */

// <01AAB985> miniz/miniz.c:7349
void mz_zip_get_type(mz_zip_archive* pZip)
{
} /* size: 0 */

// <01ABE8BD> miniz/miniz.c:7354
// variable: 1
void mz_zip_set_last_error(mz_zip_archive* pZip, mz_zip_error err_num)
{
	mz_zip_error prev_err; // 7356
} /* size: 0, variables: 1 */

// <01AAB926> miniz/miniz.c:7367
void mz_zip_peek_last_error(mz_zip_archive* pZip)
{
} /* size: 0 */

// <01ABE8FA> miniz/miniz.c:7375
// function call: 1
void mz_zip_clear_last_error(mz_zip_archive* pZip)
{
	mz_zip_set_last_error(mz_zip_archive* pZip,
				mz_zip_error err_num);  // 7377
} /* size: 0, inline expansions: 1 (0 bytes) */

// <01AAB90E> miniz/miniz.c:7375
void mz_zip_clear_last_error(mz_zip_archive* pZip)
{
} /* size: 0 */

// <01AAB8EA> miniz/miniz.c:7380
// variable: 1
void mz_zip_get_last_error(mz_zip_archive* pZip)
{
	mz_zip_error prev_err; // 7382
} /* size: 0, variables: 1 */

// <01AAB8BD> miniz/miniz.c:7393
void mz_zip_get_error_string(mz_zip_error mz_err)
{
} /* size: 0 */

// <01AAB890> miniz/miniz.c:7469
void mz_zip_is_zip64(mz_zip_archive* pZip)
{
} /* size: 0 */

// <01AAB863> miniz/miniz.c:7477
void mz_zip_get_central_dir_size(mz_zip_archive* pZip)
{
} /* size: 0 */

// <01AAB836> miniz/miniz.c:7485
void mz_zip_reader_get_num_files(mz_zip_archive* pZip)
{
} /* size: 0 */

// <01AAB809> miniz/miniz.c:7490
void mz_zip_get_archive_size(mz_zip_archive* pZip)
{
} /* size: 0 */

// <01AAB7DC> miniz/miniz.c:7497
void mz_zip_get_archive_file_start_offset(mz_zip_archive* pZip)
{
} /* size: 0 */

// <01AAB7AF> miniz/miniz.c:7504
void mz_zip_get_cfile(mz_zip_archive* pZip)
{
} /* size: 0 */

// <01AAB6F6> miniz/miniz.c:7511
// function call: 1
void mz_zip_read_archive_data(mz_zip_archive* pZip, mz_uint64 file_ofs, void* pBuf, size_t n)
{
	mz_zip_set_error(mz_zip_archive* pZip,
			mz_zip_error err_num);  // 7514
} /* size: 0, inline expansions: 1 (0 bytes) */

// <01AAB586> miniz/miniz.c:7519
// variables: 2
// function calls: 3
void mz_zip_reader_get_filename(mz_zip_archive* pZip, mz_uint file_index, char* pFilename, mz_uint filename_buf_size)
{
	mz_uint n; // 7521
	const mz_uint8* p; // 7522
	mz_zip_get_cdh(mz_zip_archive* pZip,
			mz_uint file_index);  // 7522
	mz_zip_set_error(mz_zip_archive* pZip,
			mz_zip_error err_num);  // 7527
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 7534
} /* size: 0, variables: 2, inline expansions: 3 (0 bytes) */

// <01ABE96E> miniz/miniz.c:7540
// function call: 1
void mz_zip_reader_file_stat(mz_zip_archive* pZip, mz_uint file_index, mz_zip_archive_file_stat* pStat)
{
	mz_zip_get_cdh(mz_zip_archive* pZip,
			mz_uint file_index);  // 7542
} /* size: 0, inline expansions: 1 (0 bytes) */

// <01AAB554> miniz/miniz.c:7540
void mz_zip_reader_file_stat(mz_zip_archive* pZip, mz_uint file_index, mz_zip_archive_file_stat* pStat)
{
} /* size: 0 */

// <01AAB47F> miniz/miniz.c:7545
// function calls: 2
void mz_zip_end(mz_zip_archive* pZip)
{
	mz_zip_writer_end(mz_zip_archive* pZip); // 7554
	mz_zip_reader_end(mz_zip_archive* pZip); // 7551
} /* size: 0, inline expansions: 2 (0 bytes) */

