
//
// public/tier0/xxhash.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libfilesystem_stdio.so
//				   liblocalize.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//				   libschemasystem.so
//				   libtier0.so
//				   libvfx_vulkan.so
//
//	functions: 73
//	structs: 2
//

// <05520FBC> ../public/tier0/xxhash.h:1402
// member variables: 2
// struct size: 16
typedef struct {
	XXH64_hash_t low64; /* 0 8 */
	XXH64_hash_t high64; /* 8 8 */
} XXH_NAMESPACEXXH128_hash_t;

// <00039226> ../public/tier0/xxhash.h:1792
// member variables: 12
// struct size: 576
struct XXH_NAMESPACEXXH3_state_s {
	XXH64_hash_t acc[8] __attribute__((__aligned__(64))); /* 0 64 */
	unsigned char customSecret[192] __attribute__((__aligned__(64))); /* 64 192 */
	unsigned char buffer[256] __attribute__((__aligned__(64))); /* 256 256 */
	XXH32_hash_t bufferedSize; /* 512 4 */
	XXH32_hash_t useSeed; /* 516 4 */
	size_t nbStripesSoFar; /* 520 8 */
	XXH64_hash_t totalLen; /* 528 8 */
	size_t nbStripesPerBlock; /* 536 8 */
	size_t secretLimit; /* 544 8 */
	XXH64_hash_t seed; /* 552 8 */
	XXH64_hash_t reserved64; /* 560 8 */
	const unsigned char * extSecret; /* 568 8 */
} __attribute__((__aligned__(64)));

// <064E682C> ../public/tier0/xxhash.h:2681
xxh_u32 XXH_read32(const void* ptr)
{
} /* size: 0 */

// <064E680C> ../public/tier0/xxhash.h:2903
inline xxh_u32 XXH_readLE32(const void* ptr)
{
} /* size: 0 */

// <064E67DD> ../public/tier0/xxhash.h:3394
xxh_u64 XXH_read64(const void* ptr)
{
} /* size: 0 */

// <064E67BD> ../public/tier0/xxhash.h:3464
inline xxh_u64 XXH_readLE64(const void* ptr)
{
} /* size: 0 */

// <064E679D> ../public/tier0/xxhash.h:3544
xxh_u64 XXH64_avalanche(xxh_u64 hash)
{
} /* size: 0 */

// <064E6756> ../public/tier0/xxhash.h:4491
// variables: 2
XXH_NAMESPACEXXH128_hash_t XXH_mult64to128(xxh_u64 lhs, xxh_u64 rhs)
{
	const __int128 unsigned  product; // 4512
	XXH_NAMESPACEXXH128_hash_t r128; // 4513
} /* size: 0, variables: 2 */

// <064E671C> ../public/tier0/xxhash.h:4625
// variable: 1
xxh_u64 XXH3_mul128_fold64(xxh_u64 lhs, xxh_u64 rhs)
{
	XXH_NAMESPACEXXH128_hash_t product; // 4627
} /* size: 0, variables: 1 */

// <064E66EF> ../public/tier0/xxhash.h:4632
inline xxh_u64 XXH_xorshift64(xxh_u64 v64, int shift)
{
} /* size: 0 */

// <064E66CF> ../public/tier0/xxhash.h:4642
XXH64_hash_t XXH3_avalanche(xxh_u64 h64)
{
} /* size: 0 */

// <064E66A2> ../public/tier0/xxhash.h:4655
XXH64_hash_t XXH3_rrmxmx(xxh_u64 h64, xxh_u64 len)
{
} /* size: 0 */

// <064E660E> ../public/tier0/xxhash.h:4700
// variables: 6
inline XXH64_hash_t XXH3_len_1to3_64b(const xxh_u8* input, size_t len, const xxh_u8* secret, XXH64_hash_t seed)
{
	{
		const xxh_u8  c1; // 4710
		const xxh_u8  c2; // 4711
		const xxh_u8  c3; // 4712
		const xxh_u32  combined; // 4713
		const xxh_u64  bitflip; // 4715
		const xxh_u64  keyed; // 4716
	}
} /* size: 0 */

// <064E6584> ../public/tier0/xxhash.h:4722
// variables: 5
inline XXH64_hash_t XXH3_len_4to8_64b(const xxh_u8* input, size_t len, const xxh_u8* secret, XXH64_hash_t seed)
{
	{
		const xxh_u32  input1; // 4728
		const xxh_u32  input2; // 4729
		const xxh_u64  bitflip; // 4730
		const xxh_u64  input64; // 4731
		const xxh_u64  keyed; // 4732
	}
} /* size: 0 */

// <064E64FA> ../public/tier0/xxhash.h:4738
// variables: 5
inline XXH64_hash_t XXH3_len_9to16_64b(const xxh_u8* input, size_t len, const xxh_u8* secret, XXH64_hash_t seed)
{
	{
		const xxh_u64  bitflip1; // 4743
		const xxh_u64  bitflip2; // 4744
		const xxh_u64  input_lo; // 4745
		const xxh_u64  input_hi; // 4746
		const xxh_u64  acc; // 4747
	}
} /* size: 0 */

// <064E64B3> ../public/tier0/xxhash.h:4755
inline XXH64_hash_t XXH3_len_0to16_64b(const xxh_u8* input, size_t len, const xxh_u8* secret, XXH64_hash_t seed)
{
} /* size: 0 */

// <064E645D> ../public/tier0/xxhash.h:4791
// variables: 2
inline xxh_u64 XXH3_mix16B(const xxh_u8* input, const xxh_u8* secret, xxh_u64 seed64)
{
	{
		const xxh_u64  input_lo; // 4814
		const xxh_u64  input_hi; // 4815
	}
} /* size: 0 */

// <064E63FA> ../public/tier0/xxhash.h:4825
// variable: 1
inline XXH64_hash_t XXH3_len_17to128_64b(const xxh_u8* input, size_t len, const xxh_u8* secret, size_t secretSize, XXH64_hash_t seed)
{
	{
		xxh_u64 acc; // 4832
	}
} /* size: 0 */

// <064E5A83> ../public/tier0/xxhash.h:4861
// variables: 10
// function calls: 39
XXH64_hash_t XXH3_len_129to240_64b(const xxh_u8* input, size_t len, const xxh_u8* secret, size_t secretSize, XXH64_hash_t seed)
{
	{
		xxh_u64 acc; // 4871
		xxh_u64 acc_end; // 4872
		const unsigned int  nbRounds; // 4873
		unsigned int i; // 4874
		{
			const xxh_u64  input_lo; // 4814
			const xxh_u64  input_hi; // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4814
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4818
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4817
			XXH_mult64to128(xxh_u64 lhs,
					xxh_u64 rhs);  // 4627
			XXH3_mul128_fold64(xxh_u64 lhs,
						xxh_u64 rhs);  // 4816
		}
		XXH3_mix16B(const xxh_u8* input,
				const xxh_u8* secret,
				xxh_u64 seed64);  // 4877
		{
			const xxh_u64  input_lo; // 4814
			const xxh_u64  input_hi; // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4814
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4818
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4817
			XXH_mult64to128(xxh_u64 lhs,
					xxh_u64 rhs);  // 4627
			XXH3_mul128_fold64(xxh_u64 lhs,
						xxh_u64 rhs);  // 4816
		}
		XXH3_mix16B(const xxh_u8* input,
				const xxh_u8* secret,
				xxh_u64 seed64);  // 4880
		XXH_xorshift64(xxh_u64 v64,
				int shift);  // 4644
		XXH_xorshift64(xxh_u64 v64,
				int shift);  // 4646
		XXH3_avalanche(xxh_u64 h64); // 4882
		{
			const xxh_u64  input_lo; // 4814
			const xxh_u64  input_hi; // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4814
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4818
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4817
			XXH_mult64to128(xxh_u64 lhs,
					xxh_u64 rhs);  // 4627
			XXH3_mul128_fold64(xxh_u64 lhs,
						xxh_u64 rhs);  // 4816
		}
		XXH3_mix16B(const xxh_u8* input,
				const xxh_u8* secret,
				xxh_u64 seed64);  // 4913
		XXH_xorshift64(xxh_u64 v64,
				int shift);  // 4644
		XXH_xorshift64(xxh_u64 v64,
				int shift);  // 4646
		XXH3_avalanche(xxh_u64 h64); // 4915
	}
} /* size: 294 */

// <05F0C17A> ../public/tier0/xxhash.h:4861
// variables: 10
// function calls: 35
XXH64_hash_t XXH3_len_129to240_64b(const xxh_u8* input, size_t len, XXH64_hash_t seed, size_t secretSize, const xxh_u8* secret)
{
	{
		xxh_u64 acc; // 4871
		xxh_u64 acc_end; // 4872
		const unsigned int  nbRounds; // 4873
		unsigned int i; // 4874
		{
			const xxh_u64  input_lo; // 4814
			const xxh_u64  input_hi; // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4814
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4818
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4817
			XXH_mult64to128(xxh_u64 lhs,
					xxh_u64 rhs);  // 4627
			XXH3_mul128_fold64(xxh_u64 lhs,
						xxh_u64 rhs);  // 4816
		}
		XXH3_mix16B(const xxh_u8* input,
				const xxh_u8* secret,
				xxh_u64 seed64);  // 4877
		{
			const xxh_u64  input_lo; // 4814
			const xxh_u64  input_hi; // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4814
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4815
			XXH_mult64to128(xxh_u64 lhs,
					xxh_u64 rhs);  // 4627
			XXH3_mul128_fold64(xxh_u64 lhs,
						xxh_u64 rhs);  // 4816
		}
		XXH3_mix16B(const xxh_u8* input,
				const xxh_u8* secret,
				xxh_u64 seed64);  // 4880
		XXH_xorshift64(xxh_u64 v64,
				int shift);  // 4644
		XXH_xorshift64(xxh_u64 v64,
				int shift);  // 4646
		XXH3_avalanche(xxh_u64 h64); // 4882
		{
			const xxh_u64  input_lo; // 4814
			const xxh_u64  input_hi; // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4814
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4818
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4817
			XXH_mult64to128(xxh_u64 lhs,
					xxh_u64 rhs);  // 4627
			XXH3_mul128_fold64(xxh_u64 lhs,
						xxh_u64 rhs);  // 4816
		}
		XXH3_mix16B(const xxh_u8* input,
				const xxh_u8* secret,
				xxh_u64 seed64);  // 4913
		XXH_xorshift64(xxh_u64 v64,
				int shift);  // 4644
		XXH_xorshift64(xxh_u64 v64,
				int shift);  // 4646
		XXH3_avalanche(xxh_u64 h64); // 4915
	}
} /* size: 293 */

// <05F0B13B> ../public/tier0/xxhash.h:4861
// variables: 4
XXH64_hash_t XXH3_len_129to240_64b(const xxh_u8* input, size_t len, const xxh_u8* secret, size_t secretSize, XXH64_hash_t seed)
{
	{
		xxh_u64 acc; // 4871
		xxh_u64 acc_end; // 4872
		const unsigned int  nbRounds; // 4873
		unsigned int i; // 4874
	}
} /* size: 0 */

// <0008E5A4> ../public/tier0/xxhash.h:5024
// variables: 8
inline void XXH3_accumulate_512_avx512(void* acc, const void* input, const void* secret)
{
	const __m512i* xacc; // 5028
	{
		const __m512i  data_vec; // 5034
		const __m512i  key_vec; // 5036
		const __m512i  data_key; // 5038
		const __m512i  data_key_lo; // 5040
		const __m512i  product; // 5042
		const __m512i  data_swap; // 5044
		const __m512i  sum; // 5045
	}
} /* size: 0, variables: 1 */

// <0008E548> ../public/tier0/xxhash.h:5050
// variables: 2
inline void XXH3_accumulate_avx512(xxh_u64* acc, const xxh_u8* input, const xxh_u8* secret, size_t nbStripes)
{
	size_t n; // 5050
	{
		const xxh_u8* in; // 5050
	}
} /* size: 0, variables: 1 */

// <0008E4A8> ../public/tier0/xxhash.h:5074
// variables: 9
inline void XXH3_scrambleAcc_avx512(void* acc, const void* secret)
{
	{
		const __m512i* xacc; // 5078
		const __m512i  prime32; // 5079
		const __m512i  acc_vec; // 5082
		const __m512i  shifted; // 5083
		const __m512i  key_vec; // 5085
		const __m512i  data_key; // 5086
		const __m512i  data_key_hi; // 5089
		const __m512i  prod_lo; // 5090
		const __m512i  prod_hi; // 5091
	}
} /* size: 0 */

// <0008E41B> ../public/tier0/xxhash.h:5097
// variables: 6
inline void XXH3_initCustomSecret_avx512(void* customSecret, xxh_u64 seed64)
{
	{
		const int  nbRounds; // 5103
		const __m512i  seed_pos; // 5104
		const __m512i  seed; // 5105
		const __m512i* src; // 5107
		const __m512i* dest; // 5108
		int i; // 5109
	}
} /* size: 0 */

// <0008E354> ../public/tier0/xxhash.h:5127
// variables: 11
inline void XXH3_accumulate_512_avx2(void* acc, const void* input, const void* secret)
{
	{
		const __m256i* xacc; // 5132
		const __m256i* xinput; // 5135
		const __m256i* xsecret; // 5138
		size_t i; // 5140
		{
			const __m256i  data_vec; // 5143
			const __m256i  key_vec; // 5145
			const __m256i  data_key; // 5147
			const __m256i  data_key_lo; // 5149
			const __m256i  product; // 5151
			const __m256i  data_swap; // 5153
			const __m256i  sum; // 5154
		}
	}
} /* size: 0 */

// <0008E2F8> ../public/tier0/xxhash.h:5159
// variables: 2
inline void XXH3_accumulate_avx2(xxh_u64* acc, const xxh_u8* input, const xxh_u8* secret, size_t nbStripes)
{
	size_t n; // 5159
	{
		const xxh_u8* in; // 5159
	}
} /* size: 0, variables: 1 */

// <0008E231> ../public/tier0/xxhash.h:5162
// variables: 12
inline void XXH3_scrambleAcc_avx2(void* acc, const void* secret)
{
	{
		const __m256i* xacc; // 5165
		const __m256i* xsecret; // 5168
		const __m256i  prime32; // 5169
		size_t i; // 5171
		{
			const __m256i  acc_vec; // 5174
			const __m256i  shifted; // 5175
			const __m256i  data_vec; // 5176
			const __m256i  key_vec; // 5178
			const __m256i  data_key; // 5179
			const __m256i  data_key_hi; // 5182
			const __m256i  prod_lo; // 5183
			const __m256i  prod_hi; // 5184
		}
	}
} /* size: 0 */

// <0008E1C9> ../public/tier0/xxhash.h:5190
// variables: 3
inline void XXH3_initCustomSecret_avx2(void* customSecret, xxh_u64 seed64)
{
	{
		const __m256i  seed; // 5197
		const __m256i* src; // 5199
		__m256i* dest; // 5200
	}
} /* size: 0 */

// <064E59BB> ../public/tier0/xxhash.h:5233
// variables: 11
inline void XXH3_accumulate_512_sse2(void* acc, const void* input, const void* secret)
{
	{
		const __m128i* xacc; // 5239
		const __m128i* xinput; // 5242
		const __m128i* xsecret; // 5245
		size_t i; // 5247
		{
			const __m128i  data_vec; // 5250
			const __m128i  key_vec; // 5252
			const __m128i  data_key; // 5254
			const __m128i  data_key_lo; // 5256
			const __m128i  product; // 5258
			const __m128i  data_swap; // 5260
			const __m128i  sum; // 5261
		}
	}
} /* size: 0 */

// <064E595E> ../public/tier0/xxhash.h:5266
// variables: 2
inline void XXH3_accumulate_sse2(xxh_u64* acc, const xxh_u8* input, const xxh_u8* secret, size_t nbStripes)
{
	size_t n; // 5266
	{
		const xxh_u8* in; // 5266
	}
} /* size: 0, variables: 1 */

// <064E588B> ../public/tier0/xxhash.h:5269
// variables: 12
inline void XXH3_scrambleAcc_sse2(void* acc, const void* secret)
{
	{
		const __m128i* xacc; // 5272
		const __m128i* xsecret; // 5275
		const __m128i  prime32; // 5276
		size_t i; // 5278
		{
			const __m128i  acc_vec; // 5281
			const __m128i  shifted; // 5282
			const __m128i  data_vec; // 5283
			const __m128i  key_vec; // 5285
			const __m128i  data_key; // 5286
			const __m128i  data_key_hi; // 5289
			const __m128i  prod_lo; // 5290
			const __m128i  prod_hi; // 5291
		}
	}
} /* size: 0 */

// <064E5815> ../public/tier0/xxhash.h:5297
// variables: 5
inline void XXH3_initCustomSecret_sse2(void* customSecret, xxh_u64 seed64)
{
	{
		const int  nbRounds; // 5301
		const __m128i  seed; // 5316
		int i; // 5318
		const void* src16; // 5320
		__m128i* dst16; // 5321
	}
} /* size: 0 */

// <064E575C> ../public/tier0/xxhash.h:6256
// variables: 6
inline void XXH3_hashLong_internal_loop(xxh_u64* acc, const xxh_u8* input, size_t len, const xxh_u8* secret, size_t secretSize, XXH3_f_accumulate f_acc, XXH3_f_scrambleAcc f_scramble)
{
	const size_t  nbStripesPerBlock; // 6262
	const size_t  block_len; // 6263
	const size_t  nb_blocks; // 6264
	size_t n; // 6266
	{
		const size_t  nbStripes; // 6277
		{
			const xxh_u8* p; // 6282
		}
	}
} /* size: 0, variables: 4 */

// <064E572F> ../public/tier0/xxhash.h:6289
inline xxh_u64 XXH3_mix2Accs(const xxh_u64* acc, const xxh_u8* secret)
{
} /* size: 0 */

// <064E5491> ../public/tier0/xxhash.h:6297
// variables: 2
// function calls: 10
XXH64_hash_t XXH3_mergeAccs(const xxh_u64* acc, const xxh_u8* secret, xxh_u64 start)
{
	xxh_u64 result64; // 6299
	size_t i; // 6300
	XXH_read64(const void* ptr); // 3466
	XXH_readLE64(const void* ptr); // 6293
	XXH_read64(const void* ptr); // 3466
	XXH_readLE64(const void* ptr); // 6292
	XXH_mult64to128(xxh_u64 lhs,
			xxh_u64 rhs);  // 4627
	XXH3_mul128_fold64(xxh_u64 lhs,
				xxh_u64 rhs);  // 6291
	XXH3_mix2Accs(const xxh_u64* acc,
			const xxh_u8* secret);  // 6303
	XXH_xorshift64(xxh_u64 v64,
			int shift);  // 4644
	XXH_xorshift64(xxh_u64 v64,
			int shift);  // 4646
	XXH3_avalanche(xxh_u64 h64); // 6320
} /* size: 80, variables: 2, inline expansions: 10 (87 bytes) */

// <05F0AE00> ../public/tier0/xxhash.h:6297
// variables: 2
XXH64_hash_t XXH3_mergeAccs(const xxh_u64* acc, const xxh_u8* secret, xxh_u64 start)
{
	xxh_u64 result64; // 6299
	size_t i; // 6300
} /* size: 0, variables: 2 */

// <064E5451> ../public/tier0/xxhash.h:6327
XXH64_hash_t XXH3_finalizeLong_64b(const xxh_u64* acc, const xxh_u8* secret, xxh_u64 len)
{
} /* size: 0 */

// <064E53E1> ../public/tier0/xxhash.h:6336
// variable: 1
inline XXH64_hash_t XXH3_hashLong_64b_internal(const void* input, size_t len, const void* secret, size_t secretSize, XXH3_f_accumulate f_acc, XXH3_f_scrambleAcc f_scramble)
{
	xxh_u64 acc; // 6341
} /* size: 0, variables: 1 */

// <064E538D> ../public/tier0/xxhash.h:6359
XXH64_hash_t XXH3_hashLong_64b_withSecret(const void* input, size_t len, XXH64_hash_t seed64, const xxh_u8* secret, size_t secretLen)
{
} /* size: 0 */

// <05F0C9D1> ../public/tier0/xxhash.h:6373
// variables: 49
// function calls: 53
XXH64_hash_t XXH3_hashLong_64b_default(const void* input, size_t len, size_t secretLen, const xxh_u8* secret, XXH64_hash_t seed64)
{
	{
		const __m128i* xacc; // 5272
		const __m128i* xsecret; // 5275
		const __m128i  prime32; // 5276
		size_t i; // 5278
		{
			const __m128i  acc_vec; // 5281
			const __m128i  shifted; // 5282
			const __m128i  data_vec; // 5283
			const __m128i  key_vec; // 5285
			const __m128i  data_key; // 5286
			const __m128i  data_key_hi; // 5289
			const __m128i  prod_lo; // 5290
			const __m128i  prod_hi; // 5291
			_mm_mul_epu32(__m128i __A,
					__m128i __B);  // 5290
			_mm_srli_epi64(__m128i __A,
					int __B);  // 5282
			_mm_xor_si128(__m128i __A,
					__m128i __B);  // 5286
			_mm_xor_si128(__m128i __A,
					__m128i __B);  // 5283
			_mm_loadu_si128(const __m128i_u* __P); // 5285
			_mm_shuffle_epi32(__m128i __A,
						const int  __mask);  // 5289
			_mm_mul_epu32(__m128i __A,
					__m128i __B);  // 5291
			_mm_slli_epi64(__m128i __A,
					int __B);  // 5292
			_mm_add_epi64(__m128i __A,
					__m128i __B);  // 5292
		}
	}
	XXH3_scrambleAcc_sse2(void* acc,
				const void* secret);  // 6272
	{
		const xxh_u8* in; // 5266
		{
			const __m128i* xacc; // 5239
			const __m128i* xinput; // 5242
			const __m128i* xsecret; // 5245
			size_t i; // 5247
			{
				const __m128i  data_vec; // 5250
				const __m128i  key_vec; // 5252
				const __m128i  data_key; // 5254
				const __m128i  data_key_lo; // 5256
				const __m128i  product; // 5258
				const __m128i  data_swap; // 5260
				const __m128i  sum; // 5261
				_mm_loadu_si128(const __m128i_u* __P); // 5250
				_mm_loadu_si128(const __m128i_u* __P); // 5252
				_mm_xor_si128(__m128i __A,
						__m128i __B);  // 5254
				_mm_shuffle_epi32(__m128i __A,
							const int  __mask);  // 5256
				_mm_mul_epu32(__m128i __A,
						__m128i __B);  // 5258
				_mm_shuffle_epi32(__m128i __A,
							const int  __mask);  // 5260
				_mm_add_epi64(__m128i __A,
						__m128i __B);  // 5261
				_mm_add_epi64(__m128i __A,
						__m128i __B);  // 5263
			}
		}
		XXH3_accumulate_512_sse2(void* acc,
					const void* input,
					const void* secret);  // 5266
	}
	XXH3_accumulate_sse2(xxh_u64* acc,
				const xxh_u8* input,
				const xxh_u8* secret,
				size_t nbStripes);  // 6271
	{
		const size_t  nbStripes; // 6277
		{
			const xxh_u8* in; // 5266
			{
				const __m128i* xacc; // 5239
				const __m128i* xinput; // 5242
				const __m128i* xsecret; // 5245
				size_t i; // 5247
				{
					const __m128i  data_vec; // 5250
					const __m128i  key_vec; // 5252
					const __m128i  data_key; // 5254
					const __m128i  data_key_lo; // 5256
					const __m128i  product; // 5258
					const __m128i  data_swap; // 5260
					const __m128i  sum; // 5261
					_mm_loadu_si128(const __m128i_u* __P); // 5250
					_mm_loadu_si128(const __m128i_u* __P); // 5252
					_mm_xor_si128(__m128i __A,
							__m128i __B);  // 5254
					_mm_shuffle_epi32(__m128i __A,
								const int  __mask);  // 5256
					_mm_mul_epu32(__m128i __A,
							__m128i __B);  // 5258
					_mm_shuffle_epi32(__m128i __A,
								const int  __mask);  // 5260
					_mm_add_epi64(__m128i __A,
							__m128i __B);  // 5261
					_mm_add_epi64(__m128i __A,
							__m128i __B);  // 5263
				}
			}
			XXH3_accumulate_512_sse2(void* acc,
						const void* input,
						const void* secret);  // 5266
		}
		XXH3_accumulate_sse2(xxh_u64* acc,
					const xxh_u8* input,
					const xxh_u8* secret,
					size_t nbStripes);  // 6279
		{
			const xxh_u8* p; // 6282
			{
				const __m128i* xacc; // 5239
				const __m128i* xinput; // 5242
				const __m128i* xsecret; // 5245
				size_t i; // 5247
				{
					const __m128i  data_vec; // 5250
					const __m128i  key_vec; // 5252
					const __m128i  data_key; // 5254
					const __m128i  data_key_lo; // 5256
					const __m128i  product; // 5258
					const __m128i  data_swap; // 5260
					const __m128i  sum; // 5261
					_mm_loadu_si128(const __m128i_u* __P); // 5250
					_mm_loadu_si128(const __m128i_u* __P); // 5252
					_mm_xor_si128(__m128i __A,
							__m128i __B);  // 5254
					_mm_shuffle_epi32(__m128i __A,
								const int  __mask);  // 5256
					_mm_mul_epu32(__m128i __A,
							__m128i __B);  // 5258
					_mm_shuffle_epi32(__m128i __A,
								const int  __mask);  // 5260
					_mm_add_epi64(__m128i __A,
							__m128i __B);  // 5261
					_mm_add_epi64(__m128i __A,
							__m128i __B);  // 5263
				}
			}
			XXH3_accumulate_512_sse2(void* acc,
						const void* input,
						const void* secret);  // 6284
		}
	}
	XXH3_hashLong_internal_loop(xxh_u64* acc,
					const xxh_u8* input,
					size_t len,
					const xxh_u8* secret,
					size_t secretSize,
					XXH3_f_accumulate f_acc,
					XXH3_f_scrambleAcc f_scramble);  // 6343
	XXH_read64(const void* ptr); // 3466
	XXH_readLE64(const void* ptr); // 6293
	XXH_read64(const void* ptr); // 3466
	XXH_readLE64(const void* ptr); // 6292
	XXH_mult64to128(xxh_u64 lhs,
			xxh_u64 rhs);  // 4627
	XXH3_mul128_fold64(xxh_u64 lhs,
				xxh_u64 rhs);  // 6291
	XXH3_mix2Accs(const xxh_u64* acc,
			const xxh_u8* secret);  // 6303
	XXH_xorshift64(xxh_u64 v64,
			int shift);  // 4644
	XXH_xorshift64(xxh_u64 v64,
			int shift);  // 4646
	XXH3_avalanche(xxh_u64 h64); // 6320
	XXH3_mergeAccs(const xxh_u64* acc,
			const xxh_u8* secret,
			xxh_u64 start);  // 6329
	XXH3_finalizeLong_64b(const xxh_u64* acc,
				const xxh_u8* secret,
				xxh_u64 len);  // 6348
	XXH3_hashLong_64b_internal(const void* input,
					size_t len,
					const void* secret,
					size_t secretSize,
					XXH3_f_accumulate f_acc,
					XXH3_f_scrambleAcc f_scramble);  // 6377
} /* size: 724, inline expansions: 16 (1662 bytes) */

// <05F0ACEC> ../public/tier0/xxhash.h:6373
XXH64_hash_t XXH3_hashLong_64b_default(const void* input, size_t len, XXH64_hash_t seed64, const xxh_u8* secret, size_t secretLen)
{
} /* size: 0 */

// <00749452> ../public/tier0/xxhash.h:6373
// variables: 49
// function calls: 42
XXH64_hash_t XXH3_hashLong_64b_default(const void* input, size_t len, size_t secretLen, const xxh_u8* secret, XXH64_hash_t seed64)
{
	{
		const __m128i* xacc; // 5272
		const __m128i* xsecret; // 5275
		const __m128i  prime32; // 5276
		size_t i; // 5278
		{
			const __m128i  acc_vec; // 5281
			const __m128i  shifted; // 5282
			const __m128i  data_vec; // 5283
			const __m128i  key_vec; // 5285
			const __m128i  data_key; // 5286
			const __m128i  data_key_hi; // 5289
			const __m128i  prod_lo; // 5290
			const __m128i  prod_hi; // 5291
			_mm_mul_epu32(__m128i __A,
					__m128i __B);  // 5290
			_mm_srli_epi64(__m128i __A,
					int __B);  // 5282
			_mm_xor_si128(__m128i __A,
					__m128i __B);  // 5286
			_mm_xor_si128(__m128i __A,
					__m128i __B);  // 5283
			_mm_loadu_si128(const __m128i_u* __P); // 5285
			_mm_shuffle_epi32(__m128i __A,
						const int  __mask);  // 5289
			_mm_mul_epu32(__m128i __A,
					__m128i __B);  // 5291
			_mm_slli_epi64(__m128i __A,
					int __B);  // 5292
			_mm_add_epi64(__m128i __A,
					__m128i __B);  // 5292
		}
	}
	XXH3_scrambleAcc_sse2(void* acc,
				const void* secret);  // 6272
	{
		const xxh_u8* in; // 5266
		{
			const __m128i* xacc; // 5239
			const __m128i* xinput; // 5242
			const __m128i* xsecret; // 5245
			size_t i; // 5247
			{
				const __m128i  data_vec; // 5250
				const __m128i  key_vec; // 5252
				const __m128i  data_key; // 5254
				const __m128i  data_key_lo; // 5256
				const __m128i  product; // 5258
				const __m128i  data_swap; // 5260
				const __m128i  sum; // 5261
				_mm_loadu_si128(const __m128i_u* __P); // 5250
				_mm_loadu_si128(const __m128i_u* __P); // 5252
				_mm_xor_si128(__m128i __A,
						__m128i __B);  // 5254
				_mm_shuffle_epi32(__m128i __A,
							const int  __mask);  // 5256
				_mm_mul_epu32(__m128i __A,
						__m128i __B);  // 5258
				_mm_shuffle_epi32(__m128i __A,
							const int  __mask);  // 5260
				_mm_add_epi64(__m128i __A,
						__m128i __B);  // 5261
				_mm_add_epi64(__m128i __A,
						__m128i __B);  // 5263
			}
		}
		XXH3_accumulate_512_sse2(void* acc,
					const void* input,
					const void* secret);  // 5266
	}
	XXH3_accumulate_sse2(xxh_u64* acc,
				const xxh_u8* input,
				const xxh_u8* secret,
				size_t nbStripes);  // 6271
	{
		const size_t  nbStripes; // 6277
		{
			const xxh_u8* in; // 5266
			{
				const __m128i* xacc; // 5239
				const __m128i* xinput; // 5242
				const __m128i* xsecret; // 5245
				size_t i; // 5247
				{
					const __m128i  data_vec; // 5250
					const __m128i  key_vec; // 5252
					const __m128i  data_key; // 5254
					const __m128i  data_key_lo; // 5256
					const __m128i  product; // 5258
					const __m128i  data_swap; // 5260
					const __m128i  sum; // 5261
					_mm_loadu_si128(const __m128i_u* __P); // 5250
					_mm_loadu_si128(const __m128i_u* __P); // 5252
					_mm_xor_si128(__m128i __A,
							__m128i __B);  // 5254
					_mm_shuffle_epi32(__m128i __A,
								const int  __mask);  // 5256
					_mm_mul_epu32(__m128i __A,
							__m128i __B);  // 5258
					_mm_shuffle_epi32(__m128i __A,
								const int  __mask);  // 5260
					_mm_add_epi64(__m128i __A,
							__m128i __B);  // 5261
					_mm_add_epi64(__m128i __A,
							__m128i __B);  // 5263
				}
			}
			XXH3_accumulate_512_sse2(void* acc,
						const void* input,
						const void* secret);  // 5266
		}
		XXH3_accumulate_sse2(xxh_u64* acc,
					const xxh_u8* input,
					const xxh_u8* secret,
					size_t nbStripes);  // 6279
		{
			const xxh_u8* p; // 6282
			{
				const __m128i* xacc; // 5239
				const __m128i* xinput; // 5242
				const __m128i* xsecret; // 5245
				size_t i; // 5247
				{
					const __m128i  data_vec; // 5250
					const __m128i  key_vec; // 5252
					const __m128i  data_key; // 5254
					const __m128i  data_key_lo; // 5256
					const __m128i  product; // 5258
					const __m128i  data_swap; // 5260
					const __m128i  sum; // 5261
					_mm_loadu_si128(const __m128i_u* __P); // 5250
					_mm_loadu_si128(const __m128i_u* __P); // 5252
					_mm_xor_si128(__m128i __A,
							__m128i __B);  // 5254
					_mm_shuffle_epi32(__m128i __A,
								const int  __mask);  // 5256
					_mm_mul_epu32(__m128i __A,
							__m128i __B);  // 5258
					_mm_shuffle_epi32(__m128i __A,
								const int  __mask);  // 5260
					_mm_add_epi64(__m128i __A,
							__m128i __B);  // 5261
					_mm_add_epi64(__m128i __A,
							__m128i __B);  // 5263
				}
			}
			XXH3_accumulate_512_sse2(void* acc,
						const void* input,
						const void* secret);  // 6284
		}
	}
	XXH3_hashLong_internal_loop(xxh_u64* acc,
					const xxh_u8* input,
					size_t len,
					const xxh_u8* secret,
					size_t secretSize,
					XXH3_f_accumulate f_acc,
					XXH3_f_scrambleAcc f_scramble);  // 6343
	XXH3_finalizeLong_64b(const xxh_u64* acc,
				const xxh_u8* secret,
				xxh_u64 len);  // 6348
	XXH3_hashLong_64b_internal(const void* input,
					size_t len,
					const void* secret,
					size_t secretSize,
					XXH3_f_accumulate f_acc,
					XXH3_f_scrambleAcc f_scramble);  // 6377
} /* size: 650, inline expansions: 5 (1349 bytes) */

// <064E530B> ../public/tier0/xxhash.h:6392
// variable: 1
inline XXH64_hash_t XXH3_hashLong_64b_withSeed_internal(const void* input, size_t len, XXH64_hash_t seed, XXH3_f_accumulate f_acc, XXH3_f_scrambleAcc f_scramble, XXH3_f_initCustomSecret f_initSec)
{
	{
		xxh_u8 secret; // 6404
	}
} /* size: 0 */

// <064E52B7> ../public/tier0/xxhash.h:6415
XXH64_hash_t XXH3_hashLong_64b_withSeed(const void* input, size_t len, XXH64_hash_t seed, const xxh_u8* secret, size_t secretLen)
{
} /* size: 0 */

// <064E5256> ../public/tier0/xxhash.h:6428
inline XXH64_hash_t XXH3_64bits_internal(const void* input, size_t len, XXH64_hash_t seed64, const void* secret, size_t secretLen, XXH3_hashLong64_f f_hashLong)
{
} /* size: 0 */

// <05F0981E> ../public/tier0/xxhash.h:6453
// variables: 27
// function calls: 79
XXH64_hash_t XXH_INLINE_XXH3_64bits(const void* input, size_t length)
{
	{
		const xxh_u64  bitflip1; // 4743
		const xxh_u64  bitflip2; // 4744
		const xxh_u64  input_lo; // 4745
		const xxh_u64  input_hi; // 4746
		const xxh_u64  acc; // 4747
		XXH_read64(const void* ptr); // 3466
		XXH_readLE64(const void* ptr); // 4745
		XXH_read64(const void* ptr); // 3466
		XXH_readLE64(const void* ptr); // 4746
		XXH_mult64to128(xxh_u64 lhs,
				xxh_u64 rhs);  // 4627
		XXH3_mul128_fold64(xxh_u64 lhs,
					xxh_u64 rhs);  // 4749
		XXH_xorshift64(xxh_u64 v64,
				int shift);  // 4644
		XXH_xorshift64(xxh_u64 v64,
				int shift);  // 4646
		XXH3_avalanche(xxh_u64 h64); // 4750
	}
	XXH3_len_9to16_64b(const xxh_u8* input,
				size_t len,
				const xxh_u8* secret,
				XXH64_hash_t seed);  // 4758
	{
		const xxh_u32  input1; // 4728
		const xxh_u32  input2; // 4729
		const xxh_u64  bitflip; // 4730
		const xxh_u64  input64; // 4731
		const xxh_u64  keyed; // 4732
		XXH_read32(const void* ptr); // 2905
		XXH_readLE32(const void* ptr); // 4728
		XXH_read32(const void* ptr); // 2905
		XXH_readLE32(const void* ptr); // 4729
		XXH_xorshift64(xxh_u64 v64,
				int shift);  // 4662
		XXH3_rrmxmx(xxh_u64 h64,
				xxh_u64 len);  // 4733
	}
	XXH3_len_4to8_64b(const xxh_u8* input,
				size_t len,
				const xxh_u8* secret,
				XXH64_hash_t seed);  // 4759
	XXH3_len_0to16_64b(const xxh_u8* input,
				size_t len,
				const xxh_u8* secret,
				XXH64_hash_t seed);  // 6441
	{
		xxh_u64 acc; // 4832
		{
			const xxh_u64  input_lo; // 4814
			const xxh_u64  input_hi; // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4814
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4815
			XXH_mult64to128(xxh_u64 lhs,
					xxh_u64 rhs);  // 4627
			XXH3_mul128_fold64(xxh_u64 lhs,
						xxh_u64 rhs);  // 4816
		}
		XXH3_mix16B(const xxh_u8* input,
				const xxh_u8* secret,
				xxh_u64 seed64);  // 4844
		{
			const xxh_u64  input_lo; // 4814
			const xxh_u64  input_hi; // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4814
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4815
			XXH_mult64to128(xxh_u64 lhs,
					xxh_u64 rhs);  // 4627
			XXH3_mul128_fold64(xxh_u64 lhs,
						xxh_u64 rhs);  // 4816
		}
		XXH3_mix16B(const xxh_u8* input,
				const xxh_u8* secret,
				xxh_u64 seed64);  // 4845
		{
			const xxh_u64  input_lo; // 4814
			const xxh_u64  input_hi; // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4814
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4815
			XXH_mult64to128(xxh_u64 lhs,
					xxh_u64 rhs);  // 4627
			XXH3_mul128_fold64(xxh_u64 lhs,
						xxh_u64 rhs);  // 4816
		}
		XXH3_mix16B(const xxh_u8* input,
				const xxh_u8* secret,
				xxh_u64 seed64);  // 4847
		{
			const xxh_u64  input_lo; // 4814
			const xxh_u64  input_hi; // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4814
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4815
			XXH_mult64to128(xxh_u64 lhs,
					xxh_u64 rhs);  // 4627
			XXH3_mul128_fold64(xxh_u64 lhs,
						xxh_u64 rhs);  // 4816
		}
		XXH3_mix16B(const xxh_u8* input,
				const xxh_u8* secret,
				xxh_u64 seed64);  // 4848
		{
			const xxh_u64  input_lo; // 4814
			const xxh_u64  input_hi; // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4814
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4815
			XXH_mult64to128(xxh_u64 lhs,
					xxh_u64 rhs);  // 4627
			XXH3_mul128_fold64(xxh_u64 lhs,
						xxh_u64 rhs);  // 4816
		}
		XXH3_mix16B(const xxh_u8* input,
				const xxh_u8* secret,
				xxh_u64 seed64);  // 4850
		{
			const xxh_u64  input_lo; // 4814
			const xxh_u64  input_hi; // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4814
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4815
			XXH_mult64to128(xxh_u64 lhs,
					xxh_u64 rhs);  // 4627
			XXH3_mul128_fold64(xxh_u64 lhs,
						xxh_u64 rhs);  // 4816
		}
		XXH3_mix16B(const xxh_u8* input,
				const xxh_u8* secret,
				xxh_u64 seed64);  // 4851
		{
			const xxh_u64  input_lo; // 4814
			const xxh_u64  input_hi; // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4814
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4815
			XXH_mult64to128(xxh_u64 lhs,
					xxh_u64 rhs);  // 4627
			XXH3_mul128_fold64(xxh_u64 lhs,
						xxh_u64 rhs);  // 4816
		}
		XXH3_mix16B(const xxh_u8* input,
				const xxh_u8* secret,
				xxh_u64 seed64);  // 4853
		{
			const xxh_u64  input_lo; // 4814
			const xxh_u64  input_hi; // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4814
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4815
			XXH_mult64to128(xxh_u64 lhs,
					xxh_u64 rhs);  // 4627
			XXH3_mul128_fold64(xxh_u64 lhs,
						xxh_u64 rhs);  // 4816
		}
		XXH3_mix16B(const xxh_u8* input,
				const xxh_u8* secret,
				xxh_u64 seed64);  // 4854
		XXH_xorshift64(xxh_u64 v64,
				int shift);  // 4644
		XXH_xorshift64(xxh_u64 v64,
				int shift);  // 4646
		XXH3_avalanche(xxh_u64 h64); // 4856
	}
	XXH3_len_17to128_64b(const xxh_u8* input,
				size_t len,
				const xxh_u8* secret,
				size_t secretSize,
				XXH64_hash_t seed);  // 6443
	XXH3_64bits_internal(const void* input,
				size_t len,
				XXH64_hash_t seed64,
				const void* secret,
				size_t secretLen,
				XXH3_hashLong64_f f_hashLong);  // 6455
} /* size: 720, inline expansions: 5 (1516 bytes) */

// <00D22CF1> ../public/tier0/xxhash.h:6453
inline XXH64_hash_t XXH_INLINE_XXH3_64bits(const void* input, size_t length)
{
} /* size: 0 */

// <007418E6> ../public/tier0/xxhash.h:6453
// variables: 33
// function calls: 81
XXH64_hash_t XXH_INLINE_XXH3_64bits(const void* input, size_t length)
{
	{
		const xxh_u64  bitflip1; // 4743
		const xxh_u64  bitflip2; // 4744
		const xxh_u64  input_lo; // 4745
		const xxh_u64  input_hi; // 4746
		const xxh_u64  acc; // 4747
		XXH_read64(const void* ptr); // 3466
		XXH_readLE64(const void* ptr); // 4745
		XXH_read64(const void* ptr); // 3466
		XXH_readLE64(const void* ptr); // 4746
		XXH_mult64to128(xxh_u64 lhs,
				xxh_u64 rhs);  // 4627
		XXH3_mul128_fold64(xxh_u64 lhs,
					xxh_u64 rhs);  // 4749
		XXH_xorshift64(xxh_u64 v64,
				int shift);  // 4644
		XXH_xorshift64(xxh_u64 v64,
				int shift);  // 4646
		XXH3_avalanche(xxh_u64 h64); // 4750
	}
	XXH3_len_9to16_64b(const xxh_u8* input,
				size_t len,
				const xxh_u8* secret,
				XXH64_hash_t seed);  // 4758
	{
		const xxh_u32  input1; // 4728
		const xxh_u32  input2; // 4729
		const xxh_u64  bitflip; // 4730
		const xxh_u64  input64; // 4731
		const xxh_u64  keyed; // 4732
		XXH_read32(const void* ptr); // 2905
		XXH_readLE32(const void* ptr); // 4728
		XXH_read32(const void* ptr); // 2905
		XXH_readLE32(const void* ptr); // 4729
		XXH_xorshift64(xxh_u64 v64,
				int shift);  // 4662
		XXH3_rrmxmx(xxh_u64 h64,
				xxh_u64 len);  // 4733
	}
	XXH3_len_4to8_64b(const xxh_u8* input,
				size_t len,
				const xxh_u8* secret,
				XXH64_hash_t seed);  // 4759
	{
		const xxh_u8  c1; // 4710
		const xxh_u8  c2; // 4711
		const xxh_u8  c3; // 4712
		const xxh_u32  combined; // 4713
		const xxh_u64  bitflip; // 4715
		const xxh_u64  keyed; // 4716
		XXH64_avalanche(xxh_u64 hash); // 4717
	}
	XXH3_len_1to3_64b(const xxh_u8* input,
				size_t len,
				const xxh_u8* secret,
				XXH64_hash_t seed);  // 4760
	XXH3_len_0to16_64b(const xxh_u8* input,
				size_t len,
				const xxh_u8* secret,
				XXH64_hash_t seed);  // 6441
	{
		xxh_u64 acc; // 4832
		{
			const xxh_u64  input_lo; // 4814
			const xxh_u64  input_hi; // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4814
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4815
			XXH_mult64to128(xxh_u64 lhs,
					xxh_u64 rhs);  // 4627
			XXH3_mul128_fold64(xxh_u64 lhs,
						xxh_u64 rhs);  // 4816
		}
		XXH3_mix16B(const xxh_u8* input,
				const xxh_u8* secret,
				xxh_u64 seed64);  // 4844
		{
			const xxh_u64  input_lo; // 4814
			const xxh_u64  input_hi; // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4814
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4815
			XXH_mult64to128(xxh_u64 lhs,
					xxh_u64 rhs);  // 4627
			XXH3_mul128_fold64(xxh_u64 lhs,
						xxh_u64 rhs);  // 4816
		}
		XXH3_mix16B(const xxh_u8* input,
				const xxh_u8* secret,
				xxh_u64 seed64);  // 4845
		{
			const xxh_u64  input_lo; // 4814
			const xxh_u64  input_hi; // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4814
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4815
			XXH_mult64to128(xxh_u64 lhs,
					xxh_u64 rhs);  // 4627
			XXH3_mul128_fold64(xxh_u64 lhs,
						xxh_u64 rhs);  // 4816
		}
		XXH3_mix16B(const xxh_u8* input,
				const xxh_u8* secret,
				xxh_u64 seed64);  // 4847
		{
			const xxh_u64  input_lo; // 4814
			const xxh_u64  input_hi; // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4814
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4815
			XXH_mult64to128(xxh_u64 lhs,
					xxh_u64 rhs);  // 4627
			XXH3_mul128_fold64(xxh_u64 lhs,
						xxh_u64 rhs);  // 4816
		}
		XXH3_mix16B(const xxh_u8* input,
				const xxh_u8* secret,
				xxh_u64 seed64);  // 4848
		{
			const xxh_u64  input_lo; // 4814
			const xxh_u64  input_hi; // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4814
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4815
			XXH_mult64to128(xxh_u64 lhs,
					xxh_u64 rhs);  // 4627
			XXH3_mul128_fold64(xxh_u64 lhs,
						xxh_u64 rhs);  // 4816
		}
		XXH3_mix16B(const xxh_u8* input,
				const xxh_u8* secret,
				xxh_u64 seed64);  // 4850
		{
			const xxh_u64  input_lo; // 4814
			const xxh_u64  input_hi; // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4814
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4815
			XXH_mult64to128(xxh_u64 lhs,
					xxh_u64 rhs);  // 4627
			XXH3_mul128_fold64(xxh_u64 lhs,
						xxh_u64 rhs);  // 4816
		}
		XXH3_mix16B(const xxh_u8* input,
				const xxh_u8* secret,
				xxh_u64 seed64);  // 4851
		{
			const xxh_u64  input_lo; // 4814
			const xxh_u64  input_hi; // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4814
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4815
			XXH_mult64to128(xxh_u64 lhs,
					xxh_u64 rhs);  // 4627
			XXH3_mul128_fold64(xxh_u64 lhs,
						xxh_u64 rhs);  // 4816
		}
		XXH3_mix16B(const xxh_u8* input,
				const xxh_u8* secret,
				xxh_u64 seed64);  // 4853
		{
			const xxh_u64  input_lo; // 4814
			const xxh_u64  input_hi; // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4814
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4815
			XXH_mult64to128(xxh_u64 lhs,
					xxh_u64 rhs);  // 4627
			XXH3_mul128_fold64(xxh_u64 lhs,
						xxh_u64 rhs);  // 4816
		}
		XXH3_mix16B(const xxh_u8* input,
				const xxh_u8* secret,
				xxh_u64 seed64);  // 4854
		XXH_xorshift64(xxh_u64 v64,
				int shift);  // 4644
		XXH_xorshift64(xxh_u64 v64,
				int shift);  // 4646
		XXH3_avalanche(xxh_u64 h64); // 4856
	}
	XXH3_len_17to128_64b(const xxh_u8* input,
				size_t len,
				const xxh_u8* secret,
				size_t secretSize,
				XXH64_hash_t seed);  // 6443
	XXH3_64bits_internal(const void* input,
				size_t len,
				XXH64_hash_t seed64,
				const void* secret,
				size_t secretLen,
				XXH3_hashLong64_f f_hashLong);  // 6455
} /* size: 826, inline expansions: 6 (1798 bytes) */

// <00222C5A> ../public/tier0/xxhash.h:6453
// variables: 17
// function calls: 61
XXH64_hash_t XXH_INLINE_XXH3_64bits(const void* input, size_t length)
{
	{
		xxh_u64 acc; // 4832
		{
			const xxh_u64  input_lo; // 4814
			const xxh_u64  input_hi; // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4814
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4815
			XXH_mult64to128(xxh_u64 lhs,
					xxh_u64 rhs);  // 4627
			XXH3_mul128_fold64(xxh_u64 lhs,
						xxh_u64 rhs);  // 4816
		}
		XXH3_mix16B(const xxh_u8* input,
				const xxh_u8* secret,
				xxh_u64 seed64);  // 4847
		{
			const xxh_u64  input_lo; // 4814
			const xxh_u64  input_hi; // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4814
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4815
			XXH_mult64to128(xxh_u64 lhs,
					xxh_u64 rhs);  // 4627
			XXH3_mul128_fold64(xxh_u64 lhs,
						xxh_u64 rhs);  // 4816
		}
		XXH3_mix16B(const xxh_u8* input,
				const xxh_u8* secret,
				xxh_u64 seed64);  // 4848
		{
			const xxh_u64  input_lo; // 4814
			const xxh_u64  input_hi; // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4814
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4815
			XXH_mult64to128(xxh_u64 lhs,
					xxh_u64 rhs);  // 4627
			XXH3_mul128_fold64(xxh_u64 lhs,
						xxh_u64 rhs);  // 4816
		}
		XXH3_mix16B(const xxh_u8* input,
				const xxh_u8* secret,
				xxh_u64 seed64);  // 4850
		{
			const xxh_u64  input_lo; // 4814
			const xxh_u64  input_hi; // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4814
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4815
			XXH_mult64to128(xxh_u64 lhs,
					xxh_u64 rhs);  // 4627
			XXH3_mul128_fold64(xxh_u64 lhs,
						xxh_u64 rhs);  // 4816
		}
		XXH3_mix16B(const xxh_u8* input,
				const xxh_u8* secret,
				xxh_u64 seed64);  // 4851
		{
			const xxh_u64  input_lo; // 4814
			const xxh_u64  input_hi; // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4814
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4815
			XXH_mult64to128(xxh_u64 lhs,
					xxh_u64 rhs);  // 4627
			XXH3_mul128_fold64(xxh_u64 lhs,
						xxh_u64 rhs);  // 4816
		}
		XXH3_mix16B(const xxh_u8* input,
				const xxh_u8* secret,
				xxh_u64 seed64);  // 4853
		{
			const xxh_u64  input_lo; // 4814
			const xxh_u64  input_hi; // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4814
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4815
			XXH_mult64to128(xxh_u64 lhs,
					xxh_u64 rhs);  // 4627
			XXH3_mul128_fold64(xxh_u64 lhs,
						xxh_u64 rhs);  // 4816
		}
		XXH3_mix16B(const xxh_u8* input,
				const xxh_u8* secret,
				xxh_u64 seed64);  // 4854
		XXH_xorshift64(xxh_u64 v64,
				int shift);  // 4644
		XXH_xorshift64(xxh_u64 v64,
				int shift);  // 4646
		XXH3_avalanche(xxh_u64 h64); // 4856
		{
			const xxh_u64  input_lo; // 4814
			const xxh_u64  input_hi; // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4814
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4815
			XXH_mult64to128(xxh_u64 lhs,
					xxh_u64 rhs);  // 4627
			XXH3_mul128_fold64(xxh_u64 lhs,
						xxh_u64 rhs);  // 4816
		}
		XXH3_mix16B(const xxh_u8* input,
				const xxh_u8* secret,
				xxh_u64 seed64);  // 4844
		{
			const xxh_u64  input_lo; // 4814
			const xxh_u64  input_hi; // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4814
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4815
			XXH_mult64to128(xxh_u64 lhs,
					xxh_u64 rhs);  // 4627
			XXH3_mul128_fold64(xxh_u64 lhs,
						xxh_u64 rhs);  // 4816
		}
		XXH3_mix16B(const xxh_u8* input,
				const xxh_u8* secret,
				xxh_u64 seed64);  // 4845
	}
	XXH3_len_17to128_64b(const xxh_u8* input,
				size_t len,
				const xxh_u8* secret,
				size_t secretSize,
				XXH64_hash_t seed);  // 6443
	XXH3_64bits_internal(const void* input,
				size_t len,
				XXH64_hash_t seed64,
				const void* secret,
				size_t secretLen,
				XXH3_hashLong64_f f_hashLong);  // 6455
} /* size: 505, inline expansions: 2 (928 bytes) */

// <064E520F> ../public/tier0/xxhash.h:6460
inline XXH64_hash_t XXH_INLINE_XXH3_64bits_withSecret(const void* input, size_t length, const void* secret, size_t secretSize)
{
} /* size: 0 */

// <064E51D5> ../public/tier0/xxhash.h:6467
inline XXH64_hash_t XXH_INLINE_XXH3_64bits_withSeed(const void* input, size_t length, XXH64_hash_t seed)
{
} /* size: 0 */

// <064E5177> ../public/tier0/xxhash.h:6593
// variables: 2
void XXH3_reset_internal(XXH_NAMESPACEXXH3_state_t* statePtr, XXH64_hash_t seed, const void* secret, size_t secretSize)
{
	const size_t  initStart; // 6597
	const size_t  initLength; // 6598
} /* size: 0, variables: 2 */

// <064E5157> ../public/tier0/xxhash.h:6621
inline XXH_NAMESPACEXXH_errorcode XXH_INLINE_XXH3_64bits_reset(XXH_NAMESPACEXXH3_state_t* statePtr)
{
} /* size: 0 */

// <007417E7> ../public/tier0/xxhash.h:6621
XXH_NAMESPACEXXH_errorcode XXH_INLINE_XXH3_64bits_reset(XXH_NAMESPACEXXH3_state_t* statePtr)
{
} /* size: 0 */

// <007417BA> ../public/tier0/xxhash.h:6641
inline XXH_NAMESPACEXXH_errorcode XXH_INLINE_XXH3_64bits_reset_withSeed(XXH_NAMESPACEXXH3_state_t* statePtr, XXH64_hash_t seed)
{
} /* size: 0 */

// <064E50AD> ../public/tier0/xxhash.h:6681
// variables: 2
inline const xxh_u8* XXH3_consumeStripes(xxh_u64* acc, size_t* nbStripesSoFarPtr, size_t nbStripesPerBlock, const xxh_u8* input, size_t nbStripes, const xxh_u8* secret, size_t secretLimit, XXH3_f_accumulate f_acc, XXH3_f_scrambleAcc f_scramble)
{
	const xxh_u8* initialSecret; // 6688
	{
		size_t nbStripesThisIter; // 6692
	}
} /* size: 0, variables: 1 */

// <064E4FFC> ../public/tier0/xxhash.h:6726
// variables: 5
inline XXH_NAMESPACEXXH_errorcode XXH3_update(const XXH_NAMESPACEXXH3_state_t* state, const xxh_u8* input, size_t len, XXH3_f_accumulate f_acc, XXH3_f_scrambleAcc f_scramble)
{
	{
		const xxh_u8* bEnd; // 6747
		const unsigned char* secret; // 6748
		xxh_u64 acc; // 6754
		{
			const size_t  loadSize; // 6769
		}
		{
			size_t nbStripes; // 6781
		}
	}
} /* size: 0 */

// <064E71A5> ../public/tier0/xxhash.h:6809
// variables: 79
// function calls: 69
XXH_NAMESPACEXXH_errorcode XXH3_update_regular(XXH_NAMESPACEXXH3_state_t* state, const void* input, size_t len)
{
	{
		const xxh_u8* bEnd; // 6747
		const unsigned char* secret; // 6748
		xxh_u64 acc; // 6754
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 6755
		{
			const size_t  loadSize; // 6769
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 6770
			{
				size_t nbStripesThisIter; // 6692
				{
					const __m128i* xacc; // 5272
					const __m128i* xsecret; // 5275
					const __m128i  prime32; // 5276
					size_t i; // 5278
					{
						const __m128i  acc_vec; // 5281
						const __m128i  shifted; // 5282
						const __m128i  data_vec; // 5283
						const __m128i  key_vec; // 5285
						const __m128i  data_key; // 5286
						const __m128i  data_key_hi; // 5289
						const __m128i  prod_lo; // 5290
						const __m128i  prod_hi; // 5291
						_mm_mul_epu32(__m128i __A,
								__m128i __B);  // 5290
						_mm_srli_epi64(__m128i __A,
								int __B);  // 5282
						_mm_xor_si128(__m128i __A,
								__m128i __B);  // 5286
						_mm_xor_si128(__m128i __A,
								__m128i __B);  // 5283
						_mm_loadu_si128(const __m128i_u* __P); // 5285
						_mm_shuffle_epi32(__m128i __A,
									const int  __mask);  // 5289
						_mm_mul_epu32(__m128i __A,
								__m128i __B);  // 5291
						_mm_slli_epi64(__m128i __A,
								int __B);  // 5292
						_mm_add_epi64(__m128i __A,
								__m128i __B);  // 5292
					}
				}
				XXH3_scrambleAcc_sse2(void* acc,
							const void* secret);  // 6697
				{
					const xxh_u8* in; // 5266
					{
						const __m128i* xacc; // 5239
						const __m128i* xinput; // 5242
						const __m128i* xsecret; // 5245
						size_t i; // 5247
						{
							const __m128i  data_vec; // 5250
							const __m128i  key_vec; // 5252
							const __m128i  data_key; // 5254
							const __m128i  data_key_lo; // 5256
							const __m128i  product; // 5258
							const __m128i  data_swap; // 5260
							const __m128i  sum; // 5261
							_mm_loadu_si128(const __m128i_u* __P); // 5250
							_mm_loadu_si128(const __m128i_u* __P); // 5252
							_mm_xor_si128(__m128i __A,
									__m128i __B);  // 5254
							_mm_shuffle_epi32(__m128i __A,
										const int  __mask);  // 5256
							_mm_mul_epu32(__m128i __A,
									__m128i __B);  // 5258
							_mm_shuffle_epi32(__m128i __A,
										const int  __mask);  // 5260
							_mm_add_epi64(__m128i __A,
									__m128i __B);  // 5261
							_mm_add_epi64(__m128i __A,
									__m128i __B);  // 5263
						}
					}
					XXH3_accumulate_512_sse2(void* acc,
								const void* input,
								const void* secret);  // 5266
				}
				XXH3_accumulate_sse2(xxh_u64* acc,
							const xxh_u8* input,
							const xxh_u8* secret,
							size_t nbStripes);  // 6696
			}
			{
				const xxh_u8* in; // 5266
				{
					const __m128i* xacc; // 5239
					const __m128i* xinput; // 5242
					const __m128i* xsecret; // 5245
					size_t i; // 5247
					{
						const __m128i  data_vec; // 5250
						const __m128i  key_vec; // 5252
						const __m128i  data_key; // 5254
						const __m128i  data_key_lo; // 5256
						const __m128i  product; // 5258
						const __m128i  data_swap; // 5260
						const __m128i  sum; // 5261
						_mm_loadu_si128(const __m128i_u* __P); // 5250
						_mm_loadu_si128(const __m128i_u* __P); // 5252
						_mm_xor_si128(__m128i __A,
								__m128i __B);  // 5254
						_mm_shuffle_epi32(__m128i __A,
									const int  __mask);  // 5256
						_mm_mul_epu32(__m128i __A,
								__m128i __B);  // 5258
						_mm_shuffle_epi32(__m128i __A,
									const int  __mask);  // 5260
						_mm_add_epi64(__m128i __A,
								__m128i __B);  // 5261
						_mm_add_epi64(__m128i __A,
								__m128i __B);  // 5263
					}
				}
				XXH3_accumulate_512_sse2(void* acc,
							const void* input,
							const void* secret);  // 5266
			}
			XXH3_accumulate_sse2(xxh_u64* acc,
						const xxh_u8* input,
						const xxh_u8* secret,
						size_t nbStripes);  // 6708
			XXH3_consumeStripes(xxh_u64* acc,
						size_t* nbStripesSoFarPtr,
						size_t nbStripesPerBlock,
						const xxh_u8* input,
						size_t nbStripes,
						const xxh_u8* secret,
						size_t secretLimit,
						XXH3_f_accumulate f_acc,
						XXH3_f_scrambleAcc f_scramble);  // 6772
		}
		{
			size_t nbStripes; // 6781
			{
				size_t nbStripesThisIter; // 6692
				{
					const __m128i* xacc; // 5272
					const __m128i* xsecret; // 5275
					const __m128i  prime32; // 5276
					size_t i; // 5278
					{
						const __m128i  acc_vec; // 5281
						const __m128i  shifted; // 5282
						const __m128i  data_vec; // 5283
						const __m128i  key_vec; // 5285
						const __m128i  data_key; // 5286
						const __m128i  data_key_hi; // 5289
						const __m128i  prod_lo; // 5290
						const __m128i  prod_hi; // 5291
						_mm_mul_epu32(__m128i __A,
								__m128i __B);  // 5290
						_mm_srli_epi64(__m128i __A,
								int __B);  // 5282
						_mm_xor_si128(__m128i __A,
								__m128i __B);  // 5286
						_mm_xor_si128(__m128i __A,
								__m128i __B);  // 5283
						_mm_loadu_si128(const __m128i_u* __P); // 5285
						_mm_shuffle_epi32(__m128i __A,
									const int  __mask);  // 5289
						_mm_mul_epu32(__m128i __A,
								__m128i __B);  // 5291
						_mm_slli_epi64(__m128i __A,
								int __B);  // 5292
						_mm_add_epi64(__m128i __A,
								__m128i __B);  // 5292
					}
				}
				XXH3_scrambleAcc_sse2(void* acc,
							const void* secret);  // 6697
				{
					const xxh_u8* in; // 5266
					{
						const __m128i* xacc; // 5239
						const __m128i* xinput; // 5242
						const __m128i* xsecret; // 5245
						size_t i; // 5247
						{
							const __m128i  data_vec; // 5250
							const __m128i  key_vec; // 5252
							const __m128i  data_key; // 5254
							const __m128i  data_key_lo; // 5256
							const __m128i  product; // 5258
							const __m128i  data_swap; // 5260
							const __m128i  sum; // 5261
							_mm_loadu_si128(const __m128i_u* __P); // 5250
							_mm_loadu_si128(const __m128i_u* __P); // 5252
							_mm_xor_si128(__m128i __A,
									__m128i __B);  // 5254
							_mm_shuffle_epi32(__m128i __A,
										const int  __mask);  // 5256
							_mm_mul_epu32(__m128i __A,
									__m128i __B);  // 5258
							_mm_shuffle_epi32(__m128i __A,
										const int  __mask);  // 5260
							_mm_add_epi64(__m128i __A,
									__m128i __B);  // 5261
							_mm_add_epi64(__m128i __A,
									__m128i __B);  // 5263
						}
					}
					XXH3_accumulate_512_sse2(void* acc,
								const void* input,
								const void* secret);  // 5266
				}
				XXH3_accumulate_sse2(xxh_u64* acc,
							const xxh_u8* input,
							const xxh_u8* secret,
							size_t nbStripes);  // 6696
			}
			{
				const xxh_u8* in; // 5266
				{
					const __m128i* xacc; // 5239
					const __m128i* xinput; // 5242
					const __m128i* xsecret; // 5245
					size_t i; // 5247
					{
						const __m128i  data_vec; // 5250
						const __m128i  key_vec; // 5252
						const __m128i  data_key; // 5254
						const __m128i  data_key_lo; // 5256
						const __m128i  product; // 5258
						const __m128i  data_swap; // 5260
						const __m128i  sum; // 5261
						_mm_loadu_si128(const __m128i_u* __P); // 5250
						_mm_loadu_si128(const __m128i_u* __P); // 5252
						_mm_xor_si128(__m128i __A,
								__m128i __B);  // 5254
						_mm_shuffle_epi32(__m128i __A,
									const int  __mask);  // 5256
						_mm_mul_epu32(__m128i __A,
								__m128i __B);  // 5258
						_mm_shuffle_epi32(__m128i __A,
									const int  __mask);  // 5260
						_mm_add_epi64(__m128i __A,
								__m128i __B);  // 5261
						_mm_add_epi64(__m128i __A,
								__m128i __B);  // 5263
					}
				}
				XXH3_accumulate_512_sse2(void* acc,
							const void* input,
							const void* secret);  // 5266
			}
			XXH3_accumulate_sse2(xxh_u64* acc,
						const xxh_u8* input,
						const xxh_u8* secret,
						size_t nbStripes);  // 6708
			XXH3_consumeStripes(xxh_u64* acc,
						size_t* nbStripesSoFarPtr,
						size_t nbStripesPerBlock,
						const xxh_u8* input,
						size_t nbStripes,
						const xxh_u8* secret,
						size_t secretLimit,
						XXH3_f_accumulate f_acc,
						XXH3_f_scrambleAcc f_scramble);  // 6782
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 6787
		}
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 6794
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 6798
	}
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 6742
	XXH3_update(const XXH_NAMESPACEXXH3_state_t* state,
			const xxh_u8* input,
			size_t len,
			XXH3_f_accumulate f_acc,
			XXH3_f_scrambleAcc f_scramble);  // 6811
} /* size: 1602, inline expansions: 2 (1543 bytes) */

// <064E4FC2> ../public/tier0/xxhash.h:6809
XXH_NAMESPACEXXH_errorcode XXH3_update_regular(XXH_NAMESPACEXXH3_state_t* state, const void* input, size_t len)
{
} /* size: 0 */

// <064E4F88> ../public/tier0/xxhash.h:6817
inline XXH_NAMESPACEXXH_errorcode XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state, const void* input, size_t len)
{
} /* size: 0 */

// <064E4EF2> ../public/tier0/xxhash.h:6824
// variables: 5
inline void XXH3_digest_long(XXH64_hash_t* acc, const XXH_NAMESPACEXXH3_state_t* state, const unsigned char* secret)
{
	xxh_u8 lastStripe; // 6828
	const xxh_u8* lastStripePtr; // 6829
	{
		const size_t  nbStripes; // 6838
		size_t nbStripesSoFar; // 6839
	}
	{
		const size_t  catchupSize; // 6848
	}
} /* size: 0, variables: 2 */

// <064E1025> ../public/tier0/xxhash.h:6861
// variables: 119
// function calls: 252
XXH64_hash_t XXH_INLINE_XXH3_64bits_digest(const XXH_NAMESPACEXXH3_state_t* state)
{
	const unsigned char* secret; // 6863
	{
		XXH64_hash_t acc; // 6865
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 6835
		{
			const size_t  catchupSize; // 6848
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 6850
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 6851
		}
		{
			const size_t  nbStripes; // 6838
			size_t nbStripesSoFar; // 6839
			{
				size_t nbStripesThisIter; // 6692
				{
					const __m128i* xacc; // 5272
					const __m128i* xsecret; // 5275
					const __m128i  prime32; // 5276
					size_t i; // 5278
					{
						const __m128i  acc_vec; // 5281
						const __m128i  shifted; // 5282
						const __m128i  data_vec; // 5283
						const __m128i  key_vec; // 5285
						const __m128i  data_key; // 5286
						const __m128i  data_key_hi; // 5289
						const __m128i  prod_lo; // 5290
						const __m128i  prod_hi; // 5291
						_mm_mul_epu32(__m128i __A,
								__m128i __B);  // 5290
						_mm_srli_epi64(__m128i __A,
								int __B);  // 5282
						_mm_xor_si128(__m128i __A,
								__m128i __B);  // 5286
						_mm_xor_si128(__m128i __A,
								__m128i __B);  // 5283
						_mm_loadu_si128(const __m128i_u* __P); // 5285
						_mm_shuffle_epi32(__m128i __A,
									const int  __mask);  // 5289
						_mm_mul_epu32(__m128i __A,
								__m128i __B);  // 5291
						_mm_slli_epi64(__m128i __A,
								int __B);  // 5292
						_mm_add_epi64(__m128i __A,
								__m128i __B);  // 5292
					}
				}
				XXH3_scrambleAcc_sse2(void* acc,
							const void* secret);  // 6697
				{
					const xxh_u8* in; // 5266
					{
						const __m128i* xacc; // 5239
						const __m128i* xinput; // 5242
						const __m128i* xsecret; // 5245
						size_t i; // 5247
						{
							const __m128i  data_vec; // 5250
							const __m128i  key_vec; // 5252
							const __m128i  data_key; // 5254
							const __m128i  data_key_lo; // 5256
							const __m128i  product; // 5258
							const __m128i  data_swap; // 5260
							const __m128i  sum; // 5261
							_mm_loadu_si128(const __m128i_u* __P); // 5250
							_mm_loadu_si128(const __m128i_u* __P); // 5252
							_mm_xor_si128(__m128i __A,
									__m128i __B);  // 5254
							_mm_shuffle_epi32(__m128i __A,
										const int  __mask);  // 5256
							_mm_mul_epu32(__m128i __A,
									__m128i __B);  // 5258
							_mm_shuffle_epi32(__m128i __A,
										const int  __mask);  // 5260
							_mm_add_epi64(__m128i __A,
									__m128i __B);  // 5261
							_mm_add_epi64(__m128i __A,
									__m128i __B);  // 5263
						}
					}
					XXH3_accumulate_512_sse2(void* acc,
								const void* input,
								const void* secret);  // 5266
				}
				XXH3_accumulate_sse2(xxh_u64* acc,
							const xxh_u8* input,
							const xxh_u8* secret,
							size_t nbStripes);  // 6696
			}
			{
				const xxh_u8* in; // 5266
				{
					const __m128i* xacc; // 5239
					const __m128i* xinput; // 5242
					const __m128i* xsecret; // 5245
					size_t i; // 5247
					{
						const __m128i  data_vec; // 5250
						const __m128i  key_vec; // 5252
						const __m128i  data_key; // 5254
						const __m128i  data_key_lo; // 5256
						const __m128i  product; // 5258
						const __m128i  data_swap; // 5260
						const __m128i  sum; // 5261
						_mm_loadu_si128(const __m128i_u* __P); // 5250
						_mm_loadu_si128(const __m128i_u* __P); // 5252
						_mm_xor_si128(__m128i __A,
								__m128i __B);  // 5254
						_mm_shuffle_epi32(__m128i __A,
									const int  __mask);  // 5256
						_mm_mul_epu32(__m128i __A,
								__m128i __B);  // 5258
						_mm_shuffle_epi32(__m128i __A,
									const int  __mask);  // 5260
						_mm_add_epi64(__m128i __A,
								__m128i __B);  // 5261
						_mm_add_epi64(__m128i __A,
								__m128i __B);  // 5263
					}
				}
				XXH3_accumulate_512_sse2(void* acc,
							const void* input,
							const void* secret);  // 5266
			}
			XXH3_accumulate_sse2(xxh_u64* acc,
						const xxh_u8* input,
						const xxh_u8* secret,
						size_t nbStripes);  // 6708
			XXH3_consumeStripes(xxh_u64* acc,
						size_t* nbStripesSoFarPtr,
						size_t nbStripesPerBlock,
						const xxh_u8* input,
						size_t nbStripes,
						const xxh_u8* secret,
						size_t secretLimit,
						XXH3_f_accumulate f_acc,
						XXH3_f_scrambleAcc f_scramble);  // 6840
		}
		{
			const __m128i* xacc; // 5239
			const __m128i* xinput; // 5242
			const __m128i* xsecret; // 5245
			size_t i; // 5247
			{
				const __m128i  data_vec; // 5250
				const __m128i  key_vec; // 5252
				const __m128i  data_key; // 5254
				const __m128i  data_key_lo; // 5256
				const __m128i  product; // 5258
				const __m128i  data_swap; // 5260
				const __m128i  sum; // 5261
				_mm_loadu_si128(const __m128i_u* __P); // 5250
				_mm_loadu_si128(const __m128i_u* __P); // 5252
				_mm_xor_si128(__m128i __A,
						__m128i __B);  // 5254
				_mm_shuffle_epi32(__m128i __A,
							const int  __mask);  // 5256
				_mm_mul_epu32(__m128i __A,
						__m128i __B);  // 5258
				_mm_shuffle_epi32(__m128i __A,
							const int  __mask);  // 5260
				_mm_add_epi64(__m128i __A,
						__m128i __B);  // 5261
				_mm_add_epi64(__m128i __A,
						__m128i __B);  // 5263
			}
		}
		XXH3_accumulate_512_sse2(void* acc,
					const void* input,
					const void* secret);  // 6855
		XXH3_digest_long(XXH64_hash_t* acc,
				const XXH_NAMESPACEXXH3_state_t* state,
				const unsigned char* secret);  // 6866
		XXH3_finalizeLong_64b(const xxh_u64* acc,
					const xxh_u8* secret,
					xxh_u64 len);  // 6867
	}
	{
		const xxh_u64  bitflip1; // 4743
		const xxh_u64  bitflip2; // 4744
		const xxh_u64  input_lo; // 4745
		const xxh_u64  input_hi; // 4746
		const xxh_u64  acc; // 4747
		XXH_read64(const void* ptr); // 3466
		XXH_readLE64(const void* ptr); // 4743
		XXH_read64(const void* ptr); // 3466
		XXH_readLE64(const void* ptr); // 4743
		XXH_read64(const void* ptr); // 3466
		XXH_readLE64(const void* ptr); // 4744
		XXH_read64(const void* ptr); // 3466
		XXH_readLE64(const void* ptr); // 4744
		XXH_read64(const void* ptr); // 3466
		XXH_readLE64(const void* ptr); // 4745
		XXH_read64(const void* ptr); // 3466
		XXH_readLE64(const void* ptr); // 4746
		XXH_mult64to128(xxh_u64 lhs,
				xxh_u64 rhs);  // 4627
		XXH3_mul128_fold64(xxh_u64 lhs,
					xxh_u64 rhs);  // 4749
		XXH_xorshift64(xxh_u64 v64,
				int shift);  // 4644
		XXH3_avalanche(xxh_u64 h64); // 4750
	}
	XXH3_len_9to16_64b(const xxh_u8* input,
				size_t len,
				const xxh_u8* secret,
				XXH64_hash_t seed);  // 4758
	{
		const xxh_u32  input1; // 4728
		const xxh_u32  input2; // 4729
		const xxh_u64  bitflip; // 4730
		const xxh_u64  input64; // 4731
		const xxh_u64  keyed; // 4732
		XXH_read32(const void* ptr); // 2905
		XXH_readLE32(const void* ptr); // 4728
		XXH_read32(const void* ptr); // 2905
		XXH_readLE32(const void* ptr); // 4729
		XXH_read64(const void* ptr); // 3466
		XXH_readLE64(const void* ptr); // 4730
		XXH_read64(const void* ptr); // 3466
		XXH_readLE64(const void* ptr); // 4730
		XXH_xorshift64(xxh_u64 v64,
				int shift);  // 4662
		XXH3_rrmxmx(xxh_u64 h64,
				xxh_u64 len);  // 4733
	}
	XXH3_len_4to8_64b(const xxh_u8* input,
				size_t len,
				const xxh_u8* secret,
				XXH64_hash_t seed);  // 4759
	XXH_read64(const void* ptr); // 3466
	XXH_readLE64(const void* ptr); // 4761
	XXH_read64(const void* ptr); // 3466
	XXH_readLE64(const void* ptr); // 4761
	XXH64_avalanche(xxh_u64 hash); // 4761
	{
		const xxh_u8  c1; // 4710
		const xxh_u8  c2; // 4711
		const xxh_u8  c3; // 4712
		const xxh_u32  combined; // 4713
		const xxh_u64  bitflip; // 4715
		const xxh_u64  keyed; // 4716
		XXH_read32(const void* ptr); // 2905
		XXH_readLE32(const void* ptr); // 4715
		XXH_read32(const void* ptr); // 2905
		XXH_readLE32(const void* ptr); // 4715
		XXH64_avalanche(xxh_u64 hash); // 4717
	}
	XXH3_len_1to3_64b(const xxh_u8* input,
				size_t len,
				const xxh_u8* secret,
				XXH64_hash_t seed);  // 4760
	XXH3_len_0to16_64b(const xxh_u8* input,
				size_t len,
				const xxh_u8* secret,
				XXH64_hash_t seed);  // 6441
	{
		xxh_u64 acc; // 4832
		XXH_xorshift64(xxh_u64 v64,
				int shift);  // 4644
		XXH_xorshift64(xxh_u64 v64,
				int shift);  // 4646
		XXH3_avalanche(xxh_u64 h64); // 4856
		{
			const xxh_u64  input_lo; // 4814
			const xxh_u64  input_hi; // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4814
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4818
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4817
			XXH_mult64to128(xxh_u64 lhs,
					xxh_u64 rhs);  // 4627
			XXH3_mul128_fold64(xxh_u64 lhs,
						xxh_u64 rhs);  // 4816
		}
		XXH3_mix16B(const xxh_u8* input,
				const xxh_u8* secret,
				xxh_u64 seed64);  // 4844
		{
			const xxh_u64  input_lo; // 4814
			const xxh_u64  input_hi; // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4814
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4818
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4817
			XXH_mult64to128(xxh_u64 lhs,
					xxh_u64 rhs);  // 4627
			XXH3_mul128_fold64(xxh_u64 lhs,
						xxh_u64 rhs);  // 4816
		}
		XXH3_mix16B(const xxh_u8* input,
				const xxh_u8* secret,
				xxh_u64 seed64);  // 4845
		{
			const xxh_u64  input_lo; // 4814
			const xxh_u64  input_hi; // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4814
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4818
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4817
			XXH_mult64to128(xxh_u64 lhs,
					xxh_u64 rhs);  // 4627
			XXH3_mul128_fold64(xxh_u64 lhs,
						xxh_u64 rhs);  // 4816
		}
		XXH3_mix16B(const xxh_u8* input,
				const xxh_u8* secret,
				xxh_u64 seed64);  // 4847
		{
			const xxh_u64  input_lo; // 4814
			const xxh_u64  input_hi; // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4814
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4818
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4817
			XXH_mult64to128(xxh_u64 lhs,
					xxh_u64 rhs);  // 4627
			XXH3_mul128_fold64(xxh_u64 lhs,
						xxh_u64 rhs);  // 4816
		}
		XXH3_mix16B(const xxh_u8* input,
				const xxh_u8* secret,
				xxh_u64 seed64);  // 4848
		{
			const xxh_u64  input_lo; // 4814
			const xxh_u64  input_hi; // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4814
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4818
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4817
			XXH_mult64to128(xxh_u64 lhs,
					xxh_u64 rhs);  // 4627
			XXH3_mul128_fold64(xxh_u64 lhs,
						xxh_u64 rhs);  // 4816
		}
		XXH3_mix16B(const xxh_u8* input,
				const xxh_u8* secret,
				xxh_u64 seed64);  // 4850
		{
			const xxh_u64  input_lo; // 4814
			const xxh_u64  input_hi; // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4814
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4818
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4817
			XXH_mult64to128(xxh_u64 lhs,
					xxh_u64 rhs);  // 4627
			XXH3_mul128_fold64(xxh_u64 lhs,
						xxh_u64 rhs);  // 4816
		}
		XXH3_mix16B(const xxh_u8* input,
				const xxh_u8* secret,
				xxh_u64 seed64);  // 4851
		{
			const xxh_u64  input_lo; // 4814
			const xxh_u64  input_hi; // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4814
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4818
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4817
			XXH_mult64to128(xxh_u64 lhs,
					xxh_u64 rhs);  // 4627
			XXH3_mul128_fold64(xxh_u64 lhs,
						xxh_u64 rhs);  // 4816
		}
		XXH3_mix16B(const xxh_u8* input,
				const xxh_u8* secret,
				xxh_u64 seed64);  // 4853
		{
			const xxh_u64  input_lo; // 4814
			const xxh_u64  input_hi; // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4814
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4818
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4817
			XXH_mult64to128(xxh_u64 lhs,
					xxh_u64 rhs);  // 4627
			XXH3_mul128_fold64(xxh_u64 lhs,
						xxh_u64 rhs);  // 4816
		}
		XXH3_mix16B(const xxh_u8* input,
				const xxh_u8* secret,
				xxh_u64 seed64);  // 4854
	}
	XXH3_len_17to128_64b(const xxh_u8* input,
				size_t len,
				const xxh_u8* secret,
				size_t secretSize,
				XXH64_hash_t seed);  // 6443
	XXH3_64bits_internal(const void* input,
				size_t len,
				XXH64_hash_t seed64,
				const void* secret,
				size_t secretLen,
				XXH3_hashLong64_f f_hashLong);  // 6462
	XXH_INLINE_XXH3_64bits_withSecret(const void* input,
						size_t length,
						const void* secret,
						size_t secretSize);  // 6872
	{
		const xxh_u64  bitflip1; // 4743
		const xxh_u64  bitflip2; // 4744
		const xxh_u64  input_lo; // 4745
		const xxh_u64  input_hi; // 4746
		const xxh_u64  acc; // 4747
		XXH_read64(const void* ptr); // 3466
		XXH_readLE64(const void* ptr); // 4745
		XXH_read64(const void* ptr); // 3466
		XXH_readLE64(const void* ptr); // 4746
	}
	XXH3_len_9to16_64b(const xxh_u8* input,
				size_t len,
				const xxh_u8* secret,
				XXH64_hash_t seed);  // 4758
	{
		const xxh_u32  input1; // 4728
		const xxh_u32  input2; // 4729
		const xxh_u64  bitflip; // 4730
		const xxh_u64  input64; // 4731
		const xxh_u64  keyed; // 4732
		XXH_read32(const void* ptr); // 2905
		XXH_readLE32(const void* ptr); // 4728
		XXH_read32(const void* ptr); // 2905
		XXH_readLE32(const void* ptr); // 4729
		XXH3_rrmxmx(xxh_u64 h64,
				xxh_u64 len);  // 4733
	}
	XXH3_len_4to8_64b(const xxh_u8* input,
				size_t len,
				const xxh_u8* secret,
				XXH64_hash_t seed);  // 4759
	{
		const xxh_u8  c1; // 4710
		const xxh_u8  c2; // 4711
		const xxh_u8  c3; // 4712
		const xxh_u32  combined; // 4713
		const xxh_u64  bitflip; // 4715
		const xxh_u64  keyed; // 4716
		XXH64_avalanche(xxh_u64 hash); // 4717
	}
	XXH3_len_1to3_64b(const xxh_u8* input,
				size_t len,
				const xxh_u8* secret,
				XXH64_hash_t seed);  // 4760
	XXH3_len_0to16_64b(const xxh_u8* input,
				size_t len,
				const xxh_u8* secret,
				XXH64_hash_t seed);  // 6441
	{
		xxh_u64 acc; // 4832
		{
			const xxh_u64  input_lo; // 4814
			const xxh_u64  input_hi; // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4814
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4815
			XXH_mult64to128(xxh_u64 lhs,
					xxh_u64 rhs);  // 4627
			XXH3_mul128_fold64(xxh_u64 lhs,
						xxh_u64 rhs);  // 4816
		}
		XXH3_mix16B(const xxh_u8* input,
				const xxh_u8* secret,
				xxh_u64 seed64);  // 4844
		{
			const xxh_u64  input_lo; // 4814
			const xxh_u64  input_hi; // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4814
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4815
			XXH_mult64to128(xxh_u64 lhs,
					xxh_u64 rhs);  // 4627
			XXH3_mul128_fold64(xxh_u64 lhs,
						xxh_u64 rhs);  // 4816
		}
		XXH3_mix16B(const xxh_u8* input,
				const xxh_u8* secret,
				xxh_u64 seed64);  // 4845
		{
			const xxh_u64  input_lo; // 4814
			const xxh_u64  input_hi; // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4814
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4815
			XXH_mult64to128(xxh_u64 lhs,
					xxh_u64 rhs);  // 4627
			XXH3_mul128_fold64(xxh_u64 lhs,
						xxh_u64 rhs);  // 4816
		}
		XXH3_mix16B(const xxh_u8* input,
				const xxh_u8* secret,
				xxh_u64 seed64);  // 4847
		{
			const xxh_u64  input_lo; // 4814
			const xxh_u64  input_hi; // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4814
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4815
			XXH_mult64to128(xxh_u64 lhs,
					xxh_u64 rhs);  // 4627
			XXH3_mul128_fold64(xxh_u64 lhs,
						xxh_u64 rhs);  // 4816
		}
		XXH3_mix16B(const xxh_u8* input,
				const xxh_u8* secret,
				xxh_u64 seed64);  // 4848
		{
			const xxh_u64  input_lo; // 4814
			const xxh_u64  input_hi; // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4814
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4815
			XXH_mult64to128(xxh_u64 lhs,
					xxh_u64 rhs);  // 4627
			XXH3_mul128_fold64(xxh_u64 lhs,
						xxh_u64 rhs);  // 4816
		}
		XXH3_mix16B(const xxh_u8* input,
				const xxh_u8* secret,
				xxh_u64 seed64);  // 4850
		{
			const xxh_u64  input_lo; // 4814
			const xxh_u64  input_hi; // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4814
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4815
			XXH_mult64to128(xxh_u64 lhs,
					xxh_u64 rhs);  // 4627
			XXH3_mul128_fold64(xxh_u64 lhs,
						xxh_u64 rhs);  // 4816
		}
		XXH3_mix16B(const xxh_u8* input,
				const xxh_u8* secret,
				xxh_u64 seed64);  // 4851
		{
			const xxh_u64  input_lo; // 4814
			const xxh_u64  input_hi; // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4814
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4815
			XXH_mult64to128(xxh_u64 lhs,
					xxh_u64 rhs);  // 4627
			XXH3_mul128_fold64(xxh_u64 lhs,
						xxh_u64 rhs);  // 4816
		}
		XXH3_mix16B(const xxh_u8* input,
				const xxh_u8* secret,
				xxh_u64 seed64);  // 4853
		{
			const xxh_u64  input_lo; // 4814
			const xxh_u64  input_hi; // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4814
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4815
			XXH_mult64to128(xxh_u64 lhs,
					xxh_u64 rhs);  // 4627
			XXH3_mul128_fold64(xxh_u64 lhs,
						xxh_u64 rhs);  // 4816
		}
		XXH3_mix16B(const xxh_u8* input,
				const xxh_u8* secret,
				xxh_u64 seed64);  // 4854
	}
	XXH3_len_17to128_64b(const xxh_u8* input,
				size_t len,
				const xxh_u8* secret,
				size_t secretSize,
				XXH64_hash_t seed);  // 6443
	XXH3_64bits_internal(const void* input,
				size_t len,
				XXH64_hash_t seed64,
				const void* secret,
				size_t secretLen,
				XXH3_hashLong64_f f_hashLong);  // 6469
	XXH_INLINE_XXH3_64bits_withSeed(const void* input,
					size_t length,
					XXH64_hash_t seed);  // 6871
} /* size: 2506, variables: 1, inline expansions: 19 (4623 bytes) */

// <0557D608> ../public/tier0/xxhash.h:6861
// variables: 2
inline XXH64_hash_t XXH_INLINE_XXH3_64bits_digest(const XXH_NAMESPACEXXH3_state_t* state)
{
	const unsigned char* secret; // 6863
	{
		XXH64_hash_t acc; // 6865
	}
} /* size: 0, variables: 1 */

// <0008D851> ../public/tier0/xxhash.h:6896
// variables: 10
inline XXH_NAMESPACEXXH128_hash_t XXH3_len_1to3_128b(const xxh_u8* input, size_t len, const xxh_u8* secret, XXH64_hash_t seed)
{
	{
		const xxh_u8  c1; // 6907
		const xxh_u8  c2; // 6908
		const xxh_u8  c3; // 6909
		const xxh_u32  combinedl; // 6910
		const xxh_u32  combinedh; // 6912
		const xxh_u64  bitflipl; // 6913
		const xxh_u64  bitfliph; // 6914
		const xxh_u64  keyed_lo; // 6915
		const xxh_u64  keyed_hi; // 6916
		XXH_NAMESPACEXXH128_hash_t h128; // 6917
	}
} /* size: 0 */

// <0008D7BA> ../public/tier0/xxhash.h:6925
// variables: 6
inline XXH_NAMESPACEXXH128_hash_t XXH3_len_4to8_128b(const xxh_u8* input, size_t len, const xxh_u8* secret, XXH64_hash_t seed)
{
	{
		const xxh_u32  input_lo; // 6931
		const xxh_u32  input_hi; // 6932
		const xxh_u64  input_64; // 6933
		const xxh_u64  bitflip; // 6934
		const xxh_u64  keyed; // 6935
		XXH_NAMESPACEXXH128_hash_t m128; // 6938
	}
} /* size: 0 */

// <0008D721> ../public/tier0/xxhash.h:6952
// variables: 6
inline XXH_NAMESPACEXXH128_hash_t XXH3_len_9to16_128b(const xxh_u8* input, size_t len, const xxh_u8* secret, XXH64_hash_t seed)
{
	{
		const xxh_u64  bitflipl; // 6957
		const xxh_u64  bitfliph; // 6958
		const xxh_u64  input_lo; // 6959
		xxh_u64 input_hi; // 6960
		XXH_NAMESPACEXXH128_hash_t m128; // 6961
		{
			XXH_NAMESPACEXXH128_hash_t h128; // 7014
		}
	}
} /* size: 0 */

// <0008D6B1> ../public/tier0/xxhash.h:7027
// variables: 3
inline XXH_NAMESPACEXXH128_hash_t XXH3_len_0to16_128b(const xxh_u8* input, size_t len, const xxh_u8* secret, XXH64_hash_t seed)
{
	{
		XXH_NAMESPACEXXH128_hash_t h128; // 7033
		const xxh_u64  bitflipl; // 7034
		const xxh_u64  bitfliph; // 7035
	}
} /* size: 0 */

// <0008D65D> ../public/tier0/xxhash.h:7046
inline XXH_NAMESPACEXXH128_hash_t XXH128_mix32B(XXH_NAMESPACEXXH128_hash_t acc, const xxh_u8* input_1, const xxh_u8* input_2, const xxh_u8* secret, XXH64_hash_t seed)
{
} /* size: 0 */

// <0008D5EB> ../public/tier0/xxhash.h:7058
// variables: 2
inline XXH_NAMESPACEXXH128_hash_t XXH3_len_17to128_128b(const xxh_u8* input, size_t len, const xxh_u8* secret, size_t secretSize, XXH64_hash_t seed)
{
	{
		XXH_NAMESPACEXXH128_hash_t acc; // 7065
		{
			XXH_NAMESPACEXXH128_hash_t h128; // 7089
		}
	}
} /* size: 0 */

// <0008C438> ../public/tier0/xxhash.h:7102
// variables: 15
// function calls: 81
XXH_NAMESPACEXXH128_hash_t XXH3_len_129to240_128b(const xxh_u8* input, size_t len, const xxh_u8* secret, size_t secretSize, XXH64_hash_t seed)
{
	{
		XXH_NAMESPACEXXH128_hash_t acc; // 7109
		unsigned int i; // 7110
		{
			XXH_NAMESPACEXXH128_hash_t h128; // 7147
			XXH_xorshift64(xxh_u64 v64,
					int shift);  // 4644
			XXH_xorshift64(xxh_u64 v64,
					int shift);  // 4646
			XXH3_avalanche(xxh_u64 h64); // 7152
			XXH_xorshift64(xxh_u64 v64,
					int shift);  // 4644
			XXH_xorshift64(xxh_u64 v64,
					int shift);  // 4646
			XXH3_avalanche(xxh_u64 h64); // 7153
		}
		{
			const xxh_u64  input_lo; // 4814
			const xxh_u64  input_hi; // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4814
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4818
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4817
			XXH_mult64to128(xxh_u64 lhs,
					xxh_u64 rhs);  // 4627
			XXH3_mul128_fold64(xxh_u64 lhs,
						xxh_u64 rhs);  // 4816
		}
		XXH3_mix16B(const xxh_u8* input,
				const xxh_u8* secret,
				xxh_u64 seed64);  // 7049
		XXH_read64(const void* ptr); // 3466
		XXH_readLE64(const void* ptr); // 7050
		XXH_read64(const void* ptr); // 3466
		XXH_readLE64(const void* ptr); // 7050
		{
			const xxh_u64  input_lo; // 4814
			const xxh_u64  input_hi; // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4818
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4817
			XXH_mult64to128(xxh_u64 lhs,
					xxh_u64 rhs);  // 4627
			XXH3_mul128_fold64(xxh_u64 lhs,
						xxh_u64 rhs);  // 4816
		}
		XXH3_mix16B(const xxh_u8* input,
				const xxh_u8* secret,
				xxh_u64 seed64);  // 7051
		XXH128_mix32B(XXH_NAMESPACEXXH128_hash_t acc,
				const xxh_u8* input_1,
				const xxh_u8* input_2,
				const xxh_u8* secret,
				XXH64_hash_t seed);  // 7120
		XXH_xorshift64(xxh_u64 v64,
				int shift);  // 4644
		XXH_xorshift64(xxh_u64 v64,
				int shift);  // 4646
		XXH3_avalanche(xxh_u64 h64); // 7126
		XXH_xorshift64(xxh_u64 v64,
				int shift);  // 4644
		XXH_xorshift64(xxh_u64 v64,
				int shift);  // 4646
		XXH3_avalanche(xxh_u64 h64); // 7127
		{
			const xxh_u64  input_lo; // 4814
			const xxh_u64  input_hi; // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4814
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4818
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4817
			XXH_mult64to128(xxh_u64 lhs,
					xxh_u64 rhs);  // 4627
			XXH3_mul128_fold64(xxh_u64 lhs,
						xxh_u64 rhs);  // 4816
		}
		XXH3_mix16B(const xxh_u8* input,
				const xxh_u8* secret,
				xxh_u64 seed64);  // 7049
		XXH_read64(const void* ptr); // 3466
		XXH_readLE64(const void* ptr); // 7050
		XXH_read64(const void* ptr); // 3466
		XXH_readLE64(const void* ptr); // 7050
		{
			const xxh_u64  input_lo; // 4814
			const xxh_u64  input_hi; // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4818
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4817
			XXH_mult64to128(xxh_u64 lhs,
					xxh_u64 rhs);  // 4627
			XXH3_mul128_fold64(xxh_u64 lhs,
						xxh_u64 rhs);  // 4816
		}
		XXH3_mix16B(const xxh_u8* input,
				const xxh_u8* secret,
				xxh_u64 seed64);  // 7051
		XXH128_mix32B(XXH_NAMESPACEXXH128_hash_t acc,
				const xxh_u8* input_1,
				const xxh_u8* input_2,
				const xxh_u8* secret,
				XXH64_hash_t seed);  // 7134
		{
			const xxh_u64  input_lo; // 4814
			const xxh_u64  input_hi; // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4814
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4818
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4817
			XXH_mult64to128(xxh_u64 lhs,
					xxh_u64 rhs);  // 4627
			XXH3_mul128_fold64(xxh_u64 lhs,
						xxh_u64 rhs);  // 4816
		}
		XXH3_mix16B(const xxh_u8* input,
				const xxh_u8* secret,
				xxh_u64 seed64);  // 7049
		XXH_read64(const void* ptr); // 3466
		XXH_readLE64(const void* ptr); // 7050
		XXH_read64(const void* ptr); // 3466
		XXH_readLE64(const void* ptr); // 7050
		{
			const xxh_u64  input_lo; // 4814
			const xxh_u64  input_hi; // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4818
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4817
			XXH_mult64to128(xxh_u64 lhs,
					xxh_u64 rhs);  // 4627
			XXH3_mul128_fold64(xxh_u64 lhs,
						xxh_u64 rhs);  // 4816
		}
		XXH3_mix16B(const xxh_u8* input,
				const xxh_u8* secret,
				xxh_u64 seed64);  // 7051
		XXH128_mix32B(XXH_NAMESPACEXXH128_hash_t acc,
				const xxh_u8* input_1,
				const xxh_u8* input_2,
				const xxh_u8* secret,
				XXH64_hash_t seed);  // 7141
	}
} /* size: 0 */

// <0008C3DE> ../public/tier0/xxhash.h:7160
// variable: 1
XXH_NAMESPACEXXH128_hash_t XXH3_finalizeLong_128b(const xxh_u64* acc, const xxh_u8* secret, size_t secretSize, xxh_u64 len)
{
	XXH_NAMESPACEXXH128_hash_t h128; // 7162
} /* size: 0, variables: 1 */

// <0008C35F> ../public/tier0/xxhash.h:7171
// variable: 1
inline XXH_NAMESPACEXXH128_hash_t XXH3_hashLong_128b_internal(const void* input, size_t len, const xxh_u8* secret, size_t secretSize, XXH3_f_accumulate f_acc, XXH3_f_scrambleAcc f_scramble)
{
	xxh_u64 acc; // 7176
} /* size: 0, variables: 1 */

// <0008C2DE> ../public/tier0/xxhash.h:7217
// variable: 1
inline XXH_NAMESPACEXXH128_hash_t XXH3_hashLong_128b_withSeed_internal(const void* input, size_t len, XXH64_hash_t seed64, XXH3_f_accumulate f_acc, XXH3_f_scrambleAcc f_scramble, XXH3_f_initCustomSecret f_initSec)
{
	{
		xxh_u8 secret; // 7227
	}
} /* size: 0 */

// <0008C27D> ../public/tier0/xxhash.h:7250
inline XXH_NAMESPACEXXH128_hash_t XXH3_128bits_internal(const void* input, size_t len, XXH64_hash_t seed64, const void* secret, size_t secretLen, XXH3_hashLong128_f f_hl128)
{
} /* size: 0 */

