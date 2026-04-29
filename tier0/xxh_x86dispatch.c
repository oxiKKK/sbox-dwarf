
//
// tier0/xxh_x86dispatch.c
//
//	referenced by: libtier0.so
//
//	functions: 39
//	structs: 2
//

// <0008C22B> tier0/xxh_x86dispatch.c:254
// variables: 2
void XXH_cpuid(xxh_u32 eax, xxh_u32 ecx, xxh_u32* abcd)
{
	xxh_u32 ebx; // 259
	xxh_u32 edx; // 259
} /* size: 0, variables: 2 */

// <0008C1FE> tier0/xxh_x86dispatch.c:306
// variables: 2
xxh_u64 XXH_xgetbv(void)
{
	xxh_u32 xcr0_lo; // 311
	xxh_u32 xcr0_hi; // 311
} /* size: 0, variables: 2 */

// <0008C1A6> tier0/xxh_x86dispatch.c:343
// variables: 4
int XXH_featureTest(void)
{
	xxh_u32 abcd; // 345
	xxh_u32 max_leaves; // 346
	int best; // 347
	xxh_u64 xgetbv_val; // 349
} /* size: 0, variables: 4 */

// <0008B52E> tier0/xxh_x86dispatch.c:568
// variables: 49
// function calls: 42
XXH64_hash_t XXHL64_default_sse2(const void* input, size_t len)
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
					XXH3_f_scrambleAcc f_scramble);  // 568
} /* size: 671, inline expansions: 5 (1354 bytes) */

// <00089AC5> tier0/xxh_x86dispatch.c:568
// variables: 104
// function calls: 89
XXH64_hash_t XXHL64_seed_sse2(const void* input, size_t len, XXH64_hash_t seed)
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
					XXH3_f_scrambleAcc f_scramble);  // 6400
	{
		xxh_u8 secret; // 6404
		{
			const int  nbRounds; // 5301
			const __m128i  seed; // 5316
			int i; // 5318
			const void* src16; // 5320
			__m128i* dst16; // 5321
			_mm_set_epi64x(long long int __q1,
					long long int __q0);  // 5316
			_mm_add_epi64(__m128i __A,
					__m128i __B);  // 5334
			_mm_load_si128(const __m128i* __P); // 5334
		}
		XXH3_initCustomSecret_sse2(void* customSecret,
						xxh_u64 seed64);  // 6405
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
						XXH3_f_scrambleAcc f_scramble);  // 6406
	}
	XXH3_hashLong_64b_withSeed_internal(const void* input,
						size_t len,
						XXH64_hash_t seed,
						XXH3_f_accumulate f_acc,
						XXH3_f_scrambleAcc f_scramble,
						XXH3_f_initCustomSecret f_initSec);  // 568
} /* size: 1350, inline expansions: 6 (2612 bytes) */

// <00088E55> tier0/xxh_x86dispatch.c:568
// variables: 49
// function calls: 42
XXH64_hash_t XXHL64_secret_sse2(const void* input, size_t len, const void* secret, size_t secretLen)
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
					XXH3_f_scrambleAcc f_scramble);  // 568
} /* size: 707, inline expansions: 5 (1394 bytes) */

// <00087944> tier0/xxh_x86dispatch.c:568
// variables: 79
// function calls: 69
XXH_NAMESPACEXXH_errorcode XXH3_update_sse2(XXH_NAMESPACEXXH3_state_t* state, const void* input, size_t len)
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
			XXH3_f_scrambleAcc f_scramble);  // 568
} /* size: 1626, inline expansions: 2 (1544 bytes) */

// <00086C45> tier0/xxh_x86dispatch.c:568
// variables: 49
// function calls: 43
XXH_NAMESPACEXXH128_hash_t XXHL128_default_sse2(const void* input, size_t len)
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
					XXH3_f_scrambleAcc f_scramble);  // 7178
	XXH3_finalizeLong_64b(const xxh_u64* acc,
				const xxh_u8* secret,
				xxh_u64 len);  // 7163
	XXH3_finalizeLong_128b(const xxh_u64* acc,
				const xxh_u8* secret,
				size_t secretSize,
				xxh_u64 len);  // 7183
	XXH3_hashLong_128b_internal(const void* input,
					size_t len,
					const xxh_u8* secret,
					size_t secretSize,
					XXH3_f_accumulate f_acc,
					XXH3_f_scrambleAcc f_scramble);  // 568
} /* size: 711, inline expansions: 6 (1449 bytes) */

// <00085F47> tier0/xxh_x86dispatch.c:568
// variables: 49
// function calls: 43
XXH_NAMESPACEXXH128_hash_t XXHL128_secret_sse2(const void* input, size_t len, const void* secret, size_t secretLen)
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
					XXH3_f_scrambleAcc f_scramble);  // 7178
	XXH3_finalizeLong_64b(const xxh_u64* acc,
				const xxh_u8* secret,
				xxh_u64 len);  // 7163
	XXH3_finalizeLong_128b(const xxh_u64* acc,
				const xxh_u8* secret,
				size_t secretSize,
				xxh_u64 len);  // 7183
	XXH3_hashLong_128b_internal(const void* input,
					size_t len,
					const xxh_u8* secret,
					size_t secretSize,
					XXH3_f_accumulate f_acc,
					XXH3_f_scrambleAcc f_scramble);  // 568
} /* size: 762, inline expansions: 6 (1558 bytes) */

// <000843CF> tier0/xxh_x86dispatch.c:568
// variables: 104
// function calls: 91
XXH_NAMESPACEXXH128_hash_t XXHL128_seed_sse2(const void* input, size_t len, XXH64_hash_t seed)
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
					XXH3_f_scrambleAcc f_scramble);  // 7178
	XXH3_finalizeLong_64b(const xxh_u64* acc,
				const xxh_u8* secret,
				xxh_u64 len);  // 7163
	XXH3_finalizeLong_128b(const xxh_u64* acc,
				const xxh_u8* secret,
				size_t secretSize,
				xxh_u64 len);  // 7183
	XXH3_hashLong_128b_internal(const void* input,
					size_t len,
					const xxh_u8* secret,
					size_t secretSize,
					XXH3_f_accumulate f_acc,
					XXH3_f_scrambleAcc f_scramble);  // 7224
	{
		xxh_u8 secret; // 7227
		{
			const int  nbRounds; // 5301
			const __m128i  seed; // 5316
			int i; // 5318
			const void* src16; // 5320
			__m128i* dst16; // 5321
			_mm_set_epi64x(long long int __q1,
					long long int __q0);  // 5316
			_mm_add_epi64(__m128i __A,
					__m128i __B);  // 5334
			_mm_load_si128(const __m128i* __P); // 5334
		}
		XXH3_initCustomSecret_sse2(void* customSecret,
						xxh_u64 seed64);  // 7228
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
						XXH3_f_scrambleAcc f_scramble);  // 7178
		XXH3_finalizeLong_64b(const xxh_u64* acc,
					const xxh_u8* secret,
					xxh_u64 len);  // 7163
		XXH3_finalizeLong_128b(const xxh_u64* acc,
					const xxh_u8* secret,
					size_t secretSize,
					xxh_u64 len);  // 7183
		XXH3_hashLong_128b_internal(const void* input,
						size_t len,
						const xxh_u8* secret,
						size_t secretSize,
						XXH3_f_accumulate f_acc,
						XXH3_f_scrambleAcc f_scramble);  // 7229
	}
	XXH3_hashLong_128b_withSeed_internal(const void* input,
						size_t len,
						XXH64_hash_t seed64,
						XXH3_f_accumulate f_acc,
						XXH3_f_scrambleAcc f_scramble,
						XXH3_f_initCustomSecret f_initSec);  // 568
} /* size: 1420, inline expansions: 7 (2791 bytes) */

// <000837EF> tier0/xxh_x86dispatch.c:570
// variables: 49
// function calls: 41
XXH64_hash_t XXHL64_default_avx2(const void* input, size_t len)
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
			_mm256_mul_epu32(__m256i __A,
					__m256i __B);  // 5183
			_mm256_srli_epi64(__m256i __A,
						int __B);  // 5175
			_mm256_xor_si256(__m256i __A,
					__m256i __B);  // 5176
			_mm256_xor_si256(__m256i __A,
					__m256i __B);  // 5179
			_mm256_srli_epi64(__m256i __A,
						int __B);  // 5182
			_mm256_mul_epu32(__m256i __A,
					__m256i __B);  // 5184
			_mm256_slli_epi64(__m256i __A,
						int __B);  // 5185
			_mm256_add_epi64(__m256i __A,
					__m256i __B);  // 5185
		}
	}
	XXH3_scrambleAcc_avx2(void* acc,
				const void* secret);  // 6272
	{
		const xxh_u8* in; // 5159
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
				_mm256_loadu_si256(const __m256i_u* __P); // 5143
				_mm256_xor_si256(__m256i __A,
						__m256i __B);  // 5147
				_mm256_srli_epi64(__m256i __A,
							int __B);  // 5149
				_mm256_mul_epu32(__m256i __A,
						__m256i __B);  // 5151
				_mm256_loadu_si256(const __m256i_u* __P); // 5145
				_mm256_shuffle_epi32(__m256i __A,
							const int  __mask);  // 5153
				_mm256_add_epi64(__m256i __A,
						__m256i __B);  // 5154
				_mm256_add_epi64(__m256i __A,
						__m256i __B);  // 5156
			}
		}
		XXH3_accumulate_512_avx2(void* acc,
					const void* input,
					const void* secret);  // 5159
	}
	XXH3_accumulate_avx2(xxh_u64* acc,
				const xxh_u8* input,
				const xxh_u8* secret,
				size_t nbStripes);  // 6271
	{
		const size_t  nbStripes; // 6277
		{
			const xxh_u8* in; // 5159
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
					_mm256_loadu_si256(const __m256i_u* __P); // 5143
					_mm256_xor_si256(__m256i __A,
							__m256i __B);  // 5147
					_mm256_loadu_si256(const __m256i_u* __P); // 5145
					_mm256_srli_epi64(__m256i __A,
								int __B);  // 5149
					_mm256_mul_epu32(__m256i __A,
							__m256i __B);  // 5151
					_mm256_shuffle_epi32(__m256i __A,
								const int  __mask);  // 5153
					_mm256_add_epi64(__m256i __A,
							__m256i __B);  // 5154
					_mm256_add_epi64(__m256i __A,
							__m256i __B);  // 5156
				}
			}
			XXH3_accumulate_512_avx2(void* acc,
						const void* input,
						const void* secret);  // 5159
		}
		XXH3_accumulate_avx2(xxh_u64* acc,
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
					XXH3_f_scrambleAcc f_scramble);  // 570
} /* size: 631, inline expansions: 5 (1335 bytes) */

// <00081DF5> tier0/xxh_x86dispatch.c:570
// variables: 102
// function calls: 92
XXH64_hash_t XXHL64_seed_avx2(const void* input, size_t len, XXH64_hash_t seed)
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
			_mm256_mul_epu32(__m256i __A,
					__m256i __B);  // 5183
			_mm256_srli_epi64(__m256i __A,
						int __B);  // 5175
			_mm256_xor_si256(__m256i __A,
					__m256i __B);  // 5176
			_mm256_xor_si256(__m256i __A,
					__m256i __B);  // 5179
			_mm256_srli_epi64(__m256i __A,
						int __B);  // 5182
			_mm256_mul_epu32(__m256i __A,
					__m256i __B);  // 5184
			_mm256_slli_epi64(__m256i __A,
						int __B);  // 5185
			_mm256_add_epi64(__m256i __A,
					__m256i __B);  // 5185
		}
	}
	XXH3_scrambleAcc_avx2(void* acc,
				const void* secret);  // 6272
	{
		const xxh_u8* in; // 5159
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
				_mm256_loadu_si256(const __m256i_u* __P); // 5143
				_mm256_xor_si256(__m256i __A,
						__m256i __B);  // 5147
				_mm256_srli_epi64(__m256i __A,
							int __B);  // 5149
				_mm256_mul_epu32(__m256i __A,
						__m256i __B);  // 5151
				_mm256_loadu_si256(const __m256i_u* __P); // 5145
				_mm256_shuffle_epi32(__m256i __A,
							const int  __mask);  // 5153
				_mm256_add_epi64(__m256i __A,
						__m256i __B);  // 5154
				_mm256_add_epi64(__m256i __A,
						__m256i __B);  // 5156
			}
		}
		XXH3_accumulate_512_avx2(void* acc,
					const void* input,
					const void* secret);  // 5159
	}
	XXH3_accumulate_avx2(xxh_u64* acc,
				const xxh_u8* input,
				const xxh_u8* secret,
				size_t nbStripes);  // 6271
	{
		const size_t  nbStripes; // 6277
		{
			const xxh_u8* in; // 5159
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
					_mm256_loadu_si256(const __m256i_u* __P); // 5143
					_mm256_xor_si256(__m256i __A,
							__m256i __B);  // 5147
					_mm256_loadu_si256(const __m256i_u* __P); // 5145
					_mm256_srli_epi64(__m256i __A,
								int __B);  // 5149
					_mm256_mul_epu32(__m256i __A,
							__m256i __B);  // 5151
					_mm256_shuffle_epi32(__m256i __A,
								const int  __mask);  // 5153
					_mm256_add_epi64(__m256i __A,
							__m256i __B);  // 5154
					_mm256_add_epi64(__m256i __A,
							__m256i __B);  // 5156
				}
			}
			XXH3_accumulate_512_avx2(void* acc,
						const void* input,
						const void* secret);  // 5159
		}
		XXH3_accumulate_avx2(xxh_u64* acc,
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
					XXH3_f_scrambleAcc f_scramble);  // 6400
	{
		xxh_u8 secret; // 6404
		{
			const __m256i  seed; // 5197
			const __m256i* src; // 5199
			__m256i* dest; // 5200
			_mm256_set_epi64x(long long int __A,
						long long int __B,
						long long int __C,
						long long int __D);  // 5197
			_mm256_add_epi64(__m256i __A,
					__m256i __B);  // 5214
			_mm256_add_epi64(__m256i __A,
					__m256i __B);  // 5215
			_mm256_add_epi64(__m256i __A,
					__m256i __B);  // 5216
			_mm256_add_epi64(__m256i __A,
					__m256i __B);  // 5217
			_mm256_add_epi64(__m256i __A,
					__m256i __B);  // 5218
			_mm256_add_epi64(__m256i __A,
					__m256i __B);  // 5219
		}
		XXH3_initCustomSecret_avx2(void* customSecret,
						xxh_u64 seed64);  // 6405
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
				_mm256_mul_epu32(__m256i __A,
						__m256i __B);  // 5183
				_mm256_xor_si256(__m256i __A,
						__m256i __B);  // 5179
				_mm256_srli_epi64(__m256i __A,
							int __B);  // 5175
				_mm256_xor_si256(__m256i __A,
						__m256i __B);  // 5176
				_mm256_loadu_si256(const __m256i_u* __P); // 5178
				_mm256_srli_epi64(__m256i __A,
							int __B);  // 5182
				_mm256_mul_epu32(__m256i __A,
						__m256i __B);  // 5184
				_mm256_slli_epi64(__m256i __A,
							int __B);  // 5185
				_mm256_add_epi64(__m256i __A,
						__m256i __B);  // 5185
			}
		}
		XXH3_scrambleAcc_avx2(void* acc,
					const void* secret);  // 6272
		{
			const xxh_u8* in; // 5159
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
					_mm256_loadu_si256(const __m256i_u* __P); // 5143
					_mm256_xor_si256(__m256i __A,
							__m256i __B);  // 5147
					_mm256_srli_epi64(__m256i __A,
								int __B);  // 5149
					_mm256_mul_epu32(__m256i __A,
							__m256i __B);  // 5151
					_mm256_loadu_si256(const __m256i_u* __P); // 5145
					_mm256_shuffle_epi32(__m256i __A,
								const int  __mask);  // 5153
					_mm256_add_epi64(__m256i __A,
							__m256i __B);  // 5154
					_mm256_add_epi64(__m256i __A,
							__m256i __B);  // 5156
				}
			}
			XXH3_accumulate_512_avx2(void* acc,
						const void* input,
						const void* secret);  // 5159
		}
		XXH3_accumulate_avx2(xxh_u64* acc,
					const xxh_u8* input,
					const xxh_u8* secret,
					size_t nbStripes);  // 6271
		{
			const size_t  nbStripes; // 6277
			{
				const xxh_u8* in; // 5159
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
						_mm256_loadu_si256(const __m256i_u* __P); // 5143
						_mm256_xor_si256(__m256i __A,
								__m256i __B);  // 5147
						_mm256_loadu_si256(const __m256i_u* __P); // 5145
						_mm256_srli_epi64(__m256i __A,
									int __B);  // 5149
						_mm256_mul_epu32(__m256i __A,
								__m256i __B);  // 5151
						_mm256_shuffle_epi32(__m256i __A,
									const int  __mask);  // 5153
						_mm256_add_epi64(__m256i __A,
								__m256i __B);  // 5154
						_mm256_add_epi64(__m256i __A,
								__m256i __B);  // 5156
					}
				}
				XXH3_accumulate_512_avx2(void* acc,
							const void* input,
							const void* secret);  // 5159
			}
			XXH3_accumulate_avx2(xxh_u64* acc,
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
						XXH3_f_scrambleAcc f_scramble);  // 6406
	}
	XXH3_hashLong_64b_withSeed_internal(const void* input,
						size_t len,
						XXH64_hash_t seed,
						XXH3_f_accumulate f_acc,
						XXH3_f_scrambleAcc f_scramble,
						XXH3_f_initCustomSecret f_initSec);  // 570
} /* size: 1343, inline expansions: 6 (2576 bytes) */

// <000811FD> tier0/xxh_x86dispatch.c:570
// variables: 49
// function calls: 42
XXH64_hash_t XXHL64_secret_avx2(const void* input, size_t len, const void* secret, size_t secretLen)
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
			_mm256_mul_epu32(__m256i __A,
					__m256i __B);  // 5183
			_mm256_srli_epi64(__m256i __A,
						int __B);  // 5175
			_mm256_xor_si256(__m256i __A,
					__m256i __B);  // 5176
			_mm256_loadu_si256(const __m256i_u* __P); // 5178
			_mm256_xor_si256(__m256i __A,
					__m256i __B);  // 5179
			_mm256_srli_epi64(__m256i __A,
						int __B);  // 5182
			_mm256_mul_epu32(__m256i __A,
					__m256i __B);  // 5184
			_mm256_slli_epi64(__m256i __A,
						int __B);  // 5185
			_mm256_add_epi64(__m256i __A,
					__m256i __B);  // 5185
		}
	}
	XXH3_scrambleAcc_avx2(void* acc,
				const void* secret);  // 6272
	{
		const xxh_u8* in; // 5159
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
				_mm256_loadu_si256(const __m256i_u* __P); // 5143
				_mm256_xor_si256(__m256i __A,
						__m256i __B);  // 5147
				_mm256_loadu_si256(const __m256i_u* __P); // 5145
				_mm256_srli_epi64(__m256i __A,
							int __B);  // 5149
				_mm256_mul_epu32(__m256i __A,
						__m256i __B);  // 5151
				_mm256_shuffle_epi32(__m256i __A,
							const int  __mask);  // 5153
				_mm256_add_epi64(__m256i __A,
						__m256i __B);  // 5154
				_mm256_add_epi64(__m256i __A,
						__m256i __B);  // 5156
			}
		}
		XXH3_accumulate_512_avx2(void* acc,
					const void* input,
					const void* secret);  // 5159
	}
	XXH3_accumulate_avx2(xxh_u64* acc,
				const xxh_u8* input,
				const xxh_u8* secret,
				size_t nbStripes);  // 6271
	{
		const size_t  nbStripes; // 6277
		{
			const xxh_u8* in; // 5159
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
					_mm256_loadu_si256(const __m256i_u* __P); // 5143
					_mm256_xor_si256(__m256i __A,
							__m256i __B);  // 5147
					_mm256_srli_epi64(__m256i __A,
								int __B);  // 5149
					_mm256_mul_epu32(__m256i __A,
							__m256i __B);  // 5151
					_mm256_loadu_si256(const __m256i_u* __P); // 5145
					_mm256_shuffle_epi32(__m256i __A,
								const int  __mask);  // 5153
					_mm256_add_epi64(__m256i __A,
							__m256i __B);  // 5154
					_mm256_add_epi64(__m256i __A,
							__m256i __B);  // 5156
				}
			}
			XXH3_accumulate_512_avx2(void* acc,
						const void* input,
						const void* secret);  // 5159
		}
		XXH3_accumulate_avx2(xxh_u64* acc,
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
					XXH3_f_scrambleAcc f_scramble);  // 570
} /* size: 623, inline expansions: 5 (1222 bytes) */

// <0007FE08> tier0/xxh_x86dispatch.c:570
// variables: 79
// function calls: 69
XXH_NAMESPACEXXH_errorcode XXH3_update_avx2(XXH_NAMESPACEXXH3_state_t* state, const void* input, size_t len)
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
						_mm256_mul_epu32(__m256i __A,
								__m256i __B);  // 5183
						_mm256_srli_epi64(__m256i __A,
									int __B);  // 5175
						_mm256_xor_si256(__m256i __A,
								__m256i __B);  // 5176
						_mm256_loadu_si256(const __m256i_u* __P); // 5178
						_mm256_xor_si256(__m256i __A,
								__m256i __B);  // 5179
						_mm256_srli_epi64(__m256i __A,
									int __B);  // 5182
						_mm256_mul_epu32(__m256i __A,
								__m256i __B);  // 5184
						_mm256_slli_epi64(__m256i __A,
									int __B);  // 5185
						_mm256_add_epi64(__m256i __A,
								__m256i __B);  // 5185
					}
				}
				XXH3_scrambleAcc_avx2(void* acc,
							const void* secret);  // 6697
				{
					const xxh_u8* in; // 5159
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
							_mm256_loadu_si256(const __m256i_u* __P); // 5143
							_mm256_xor_si256(__m256i __A,
									__m256i __B);  // 5147
							_mm256_loadu_si256(const __m256i_u* __P); // 5145
							_mm256_srli_epi64(__m256i __A,
										int __B);  // 5149
							_mm256_mul_epu32(__m256i __A,
									__m256i __B);  // 5151
							_mm256_shuffle_epi32(__m256i __A,
										const int  __mask);  // 5153
							_mm256_add_epi64(__m256i __A,
									__m256i __B);  // 5154
							_mm256_add_epi64(__m256i __A,
									__m256i __B);  // 5156
						}
					}
					XXH3_accumulate_512_avx2(void* acc,
								const void* input,
								const void* secret);  // 5159
				}
				XXH3_accumulate_avx2(xxh_u64* acc,
							const xxh_u8* input,
							const xxh_u8* secret,
							size_t nbStripes);  // 6696
			}
			{
				const xxh_u8* in; // 5159
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
						_mm256_loadu_si256(const __m256i_u* __P); // 5143
						_mm256_xor_si256(__m256i __A,
								__m256i __B);  // 5147
						_mm256_loadu_si256(const __m256i_u* __P); // 5145
						_mm256_srli_epi64(__m256i __A,
									int __B);  // 5149
						_mm256_mul_epu32(__m256i __A,
								__m256i __B);  // 5151
						_mm256_shuffle_epi32(__m256i __A,
									const int  __mask);  // 5153
						_mm256_add_epi64(__m256i __A,
								__m256i __B);  // 5154
						_mm256_add_epi64(__m256i __A,
								__m256i __B);  // 5156
					}
				}
				XXH3_accumulate_512_avx2(void* acc,
							const void* input,
							const void* secret);  // 5159
			}
			XXH3_accumulate_avx2(xxh_u64* acc,
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
						_mm256_mul_epu32(__m256i __A,
								__m256i __B);  // 5183
						_mm256_srli_epi64(__m256i __A,
									int __B);  // 5175
						_mm256_xor_si256(__m256i __A,
								__m256i __B);  // 5176
						_mm256_loadu_si256(const __m256i_u* __P); // 5178
						_mm256_xor_si256(__m256i __A,
								__m256i __B);  // 5179
						_mm256_srli_epi64(__m256i __A,
									int __B);  // 5182
						_mm256_mul_epu32(__m256i __A,
								__m256i __B);  // 5184
						_mm256_slli_epi64(__m256i __A,
									int __B);  // 5185
						_mm256_add_epi64(__m256i __A,
								__m256i __B);  // 5185
					}
				}
				XXH3_scrambleAcc_avx2(void* acc,
							const void* secret);  // 6697
				{
					const xxh_u8* in; // 5159
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
							_mm256_loadu_si256(const __m256i_u* __P); // 5143
							_mm256_xor_si256(__m256i __A,
									__m256i __B);  // 5147
							_mm256_loadu_si256(const __m256i_u* __P); // 5145
							_mm256_srli_epi64(__m256i __A,
										int __B);  // 5149
							_mm256_mul_epu32(__m256i __A,
									__m256i __B);  // 5151
							_mm256_shuffle_epi32(__m256i __A,
										const int  __mask);  // 5153
							_mm256_add_epi64(__m256i __A,
									__m256i __B);  // 5154
							_mm256_add_epi64(__m256i __A,
									__m256i __B);  // 5156
						}
					}
					XXH3_accumulate_512_avx2(void* acc,
								const void* input,
								const void* secret);  // 5159
				}
				XXH3_accumulate_avx2(xxh_u64* acc,
							const xxh_u8* input,
							const xxh_u8* secret,
							size_t nbStripes);  // 6696
			}
			{
				const xxh_u8* in; // 5159
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
						_mm256_loadu_si256(const __m256i_u* __P); // 5143
						_mm256_xor_si256(__m256i __A,
								__m256i __B);  // 5147
						_mm256_loadu_si256(const __m256i_u* __P); // 5145
						_mm256_srli_epi64(__m256i __A,
									int __B);  // 5149
						_mm256_mul_epu32(__m256i __A,
								__m256i __B);  // 5151
						_mm256_shuffle_epi32(__m256i __A,
									const int  __mask);  // 5153
						_mm256_add_epi64(__m256i __A,
								__m256i __B);  // 5154
						_mm256_add_epi64(__m256i __A,
								__m256i __B);  // 5156
					}
				}
				XXH3_accumulate_512_avx2(void* acc,
							const void* input,
							const void* secret);  // 5159
			}
			XXH3_accumulate_avx2(xxh_u64* acc,
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
			XXH3_f_scrambleAcc f_scramble);  // 570
} /* size: 1362, inline expansions: 2 (1291 bytes) */

// <0007F1AD> tier0/xxh_x86dispatch.c:570
// variables: 49
// function calls: 42
XXH_NAMESPACEXXH128_hash_t XXHL128_default_avx2(const void* input, size_t len)
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
			_mm256_mul_epu32(__m256i __A,
					__m256i __B);  // 5183
			_mm256_srli_epi64(__m256i __A,
						int __B);  // 5175
			_mm256_xor_si256(__m256i __A,
					__m256i __B);  // 5176
			_mm256_xor_si256(__m256i __A,
					__m256i __B);  // 5179
			_mm256_srli_epi64(__m256i __A,
						int __B);  // 5182
			_mm256_mul_epu32(__m256i __A,
					__m256i __B);  // 5184
			_mm256_slli_epi64(__m256i __A,
						int __B);  // 5185
			_mm256_add_epi64(__m256i __A,
					__m256i __B);  // 5185
		}
	}
	XXH3_scrambleAcc_avx2(void* acc,
				const void* secret);  // 6272
	{
		const xxh_u8* in; // 5159
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
				_mm256_loadu_si256(const __m256i_u* __P); // 5143
				_mm256_xor_si256(__m256i __A,
						__m256i __B);  // 5147
				_mm256_srli_epi64(__m256i __A,
							int __B);  // 5149
				_mm256_mul_epu32(__m256i __A,
						__m256i __B);  // 5151
				_mm256_loadu_si256(const __m256i_u* __P); // 5145
				_mm256_shuffle_epi32(__m256i __A,
							const int  __mask);  // 5153
				_mm256_add_epi64(__m256i __A,
						__m256i __B);  // 5154
				_mm256_add_epi64(__m256i __A,
						__m256i __B);  // 5156
			}
		}
		XXH3_accumulate_512_avx2(void* acc,
					const void* input,
					const void* secret);  // 5159
	}
	XXH3_accumulate_avx2(xxh_u64* acc,
				const xxh_u8* input,
				const xxh_u8* secret,
				size_t nbStripes);  // 6271
	{
		const size_t  nbStripes; // 6277
		{
			const xxh_u8* in; // 5159
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
					_mm256_loadu_si256(const __m256i_u* __P); // 5143
					_mm256_xor_si256(__m256i __A,
							__m256i __B);  // 5147
					_mm256_loadu_si256(const __m256i_u* __P); // 5145
					_mm256_srli_epi64(__m256i __A,
								int __B);  // 5149
					_mm256_mul_epu32(__m256i __A,
							__m256i __B);  // 5151
					_mm256_shuffle_epi32(__m256i __A,
								const int  __mask);  // 5153
					_mm256_add_epi64(__m256i __A,
							__m256i __B);  // 5154
					_mm256_add_epi64(__m256i __A,
							__m256i __B);  // 5156
				}
			}
			XXH3_accumulate_512_avx2(void* acc,
						const void* input,
						const void* secret);  // 5159
		}
		XXH3_accumulate_avx2(xxh_u64* acc,
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
					XXH3_f_scrambleAcc f_scramble);  // 7178
	XXH3_finalizeLong_64b(const xxh_u64* acc,
				const xxh_u8* secret,
				xxh_u64 len);  // 7163
	XXH3_finalizeLong_128b(const xxh_u64* acc,
				const xxh_u8* secret,
				size_t secretSize,
				xxh_u64 len);  // 7183
	XXH3_hashLong_128b_internal(const void* input,
					size_t len,
					const xxh_u8* secret,
					size_t secretSize,
					XXH3_f_accumulate f_acc,
					XXH3_f_scrambleAcc f_scramble);  // 570
} /* size: 664, inline expansions: 6 (1411 bytes) */

// <0007E531> tier0/xxh_x86dispatch.c:570
// variables: 49
// function calls: 43
XXH_NAMESPACEXXH128_hash_t XXHL128_secret_avx2(const void* input, size_t len, const void* secret, size_t secretLen)
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
			_mm256_mul_epu32(__m256i __A,
					__m256i __B);  // 5183
			_mm256_srli_epi64(__m256i __A,
						int __B);  // 5175
			_mm256_xor_si256(__m256i __A,
					__m256i __B);  // 5176
			_mm256_loadu_si256(const __m256i_u* __P); // 5178
			_mm256_xor_si256(__m256i __A,
					__m256i __B);  // 5179
			_mm256_srli_epi64(__m256i __A,
						int __B);  // 5182
			_mm256_mul_epu32(__m256i __A,
					__m256i __B);  // 5184
			_mm256_slli_epi64(__m256i __A,
						int __B);  // 5185
			_mm256_add_epi64(__m256i __A,
					__m256i __B);  // 5185
		}
	}
	XXH3_scrambleAcc_avx2(void* acc,
				const void* secret);  // 6272
	{
		const xxh_u8* in; // 5159
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
				_mm256_loadu_si256(const __m256i_u* __P); // 5143
				_mm256_xor_si256(__m256i __A,
						__m256i __B);  // 5147
				_mm256_srli_epi64(__m256i __A,
							int __B);  // 5149
				_mm256_loadu_si256(const __m256i_u* __P); // 5145
				_mm256_mul_epu32(__m256i __A,
						__m256i __B);  // 5151
				_mm256_shuffle_epi32(__m256i __A,
							const int  __mask);  // 5153
				_mm256_add_epi64(__m256i __A,
						__m256i __B);  // 5154
				_mm256_add_epi64(__m256i __A,
						__m256i __B);  // 5156
			}
		}
		XXH3_accumulate_512_avx2(void* acc,
					const void* input,
					const void* secret);  // 5159
	}
	XXH3_accumulate_avx2(xxh_u64* acc,
				const xxh_u8* input,
				const xxh_u8* secret,
				size_t nbStripes);  // 6271
	{
		const size_t  nbStripes; // 6277
		{
			const xxh_u8* in; // 5159
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
					_mm256_loadu_si256(const __m256i_u* __P); // 5143
					_mm256_xor_si256(__m256i __A,
							__m256i __B);  // 5147
					_mm256_srli_epi64(__m256i __A,
								int __B);  // 5149
					_mm256_mul_epu32(__m256i __A,
							__m256i __B);  // 5151
					_mm256_loadu_si256(const __m256i_u* __P); // 5145
					_mm256_shuffle_epi32(__m256i __A,
								const int  __mask);  // 5153
					_mm256_add_epi64(__m256i __A,
							__m256i __B);  // 5154
					_mm256_add_epi64(__m256i __A,
							__m256i __B);  // 5156
				}
			}
			XXH3_accumulate_512_avx2(void* acc,
						const void* input,
						const void* secret);  // 5159
		}
		XXH3_accumulate_avx2(xxh_u64* acc,
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
					XXH3_f_scrambleAcc f_scramble);  // 7178
	XXH3_finalizeLong_64b(const xxh_u64* acc,
				const xxh_u8* secret,
				xxh_u64 len);  // 7163
	XXH3_finalizeLong_128b(const xxh_u64* acc,
				const xxh_u8* secret,
				size_t secretSize,
				xxh_u64 len);  // 7183
	XXH3_hashLong_128b_internal(const void* input,
					size_t len,
					const xxh_u8* secret,
					size_t secretSize,
					XXH3_f_accumulate f_acc,
					XXH3_f_scrambleAcc f_scramble);  // 570
} /* size: 667, inline expansions: 6 (1335 bytes) */

// <0007CA39> tier0/xxh_x86dispatch.c:570
// variables: 102
// function calls: 94
XXH_NAMESPACEXXH128_hash_t XXHL128_seed_avx2(const void* input, size_t len, XXH64_hash_t seed)
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
			_mm256_mul_epu32(__m256i __A,
					__m256i __B);  // 5183
			_mm256_srli_epi64(__m256i __A,
						int __B);  // 5175
			_mm256_xor_si256(__m256i __A,
					__m256i __B);  // 5176
			_mm256_xor_si256(__m256i __A,
					__m256i __B);  // 5179
			_mm256_srli_epi64(__m256i __A,
						int __B);  // 5182
			_mm256_mul_epu32(__m256i __A,
					__m256i __B);  // 5184
			_mm256_slli_epi64(__m256i __A,
						int __B);  // 5185
			_mm256_add_epi64(__m256i __A,
					__m256i __B);  // 5185
		}
	}
	XXH3_scrambleAcc_avx2(void* acc,
				const void* secret);  // 6272
	{
		const xxh_u8* in; // 5159
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
				_mm256_loadu_si256(const __m256i_u* __P); // 5143
				_mm256_xor_si256(__m256i __A,
						__m256i __B);  // 5147
				_mm256_srli_epi64(__m256i __A,
							int __B);  // 5149
				_mm256_mul_epu32(__m256i __A,
						__m256i __B);  // 5151
				_mm256_loadu_si256(const __m256i_u* __P); // 5145
				_mm256_shuffle_epi32(__m256i __A,
							const int  __mask);  // 5153
				_mm256_add_epi64(__m256i __A,
						__m256i __B);  // 5154
				_mm256_add_epi64(__m256i __A,
						__m256i __B);  // 5156
			}
		}
		XXH3_accumulate_512_avx2(void* acc,
					const void* input,
					const void* secret);  // 5159
	}
	XXH3_accumulate_avx2(xxh_u64* acc,
				const xxh_u8* input,
				const xxh_u8* secret,
				size_t nbStripes);  // 6271
	{
		const size_t  nbStripes; // 6277
		{
			const xxh_u8* in; // 5159
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
					_mm256_loadu_si256(const __m256i_u* __P); // 5143
					_mm256_xor_si256(__m256i __A,
							__m256i __B);  // 5147
					_mm256_loadu_si256(const __m256i_u* __P); // 5145
					_mm256_srli_epi64(__m256i __A,
								int __B);  // 5149
					_mm256_mul_epu32(__m256i __A,
							__m256i __B);  // 5151
					_mm256_shuffle_epi32(__m256i __A,
								const int  __mask);  // 5153
					_mm256_add_epi64(__m256i __A,
							__m256i __B);  // 5154
					_mm256_add_epi64(__m256i __A,
							__m256i __B);  // 5156
				}
			}
			XXH3_accumulate_512_avx2(void* acc,
						const void* input,
						const void* secret);  // 5159
		}
		XXH3_accumulate_avx2(xxh_u64* acc,
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
					XXH3_f_scrambleAcc f_scramble);  // 7178
	XXH3_finalizeLong_64b(const xxh_u64* acc,
				const xxh_u8* secret,
				xxh_u64 len);  // 7163
	XXH3_finalizeLong_128b(const xxh_u64* acc,
				const xxh_u8* secret,
				size_t secretSize,
				xxh_u64 len);  // 7183
	XXH3_hashLong_128b_internal(const void* input,
					size_t len,
					const xxh_u8* secret,
					size_t secretSize,
					XXH3_f_accumulate f_acc,
					XXH3_f_scrambleAcc f_scramble);  // 7224
	{
		xxh_u8 secret; // 7227
		{
			const __m256i  seed; // 5197
			const __m256i* src; // 5199
			__m256i* dest; // 5200
			_mm256_set_epi64x(long long int __A,
						long long int __B,
						long long int __C,
						long long int __D);  // 5197
			_mm256_add_epi64(__m256i __A,
					__m256i __B);  // 5214
			_mm256_add_epi64(__m256i __A,
					__m256i __B);  // 5215
			_mm256_add_epi64(__m256i __A,
					__m256i __B);  // 5216
			_mm256_add_epi64(__m256i __A,
					__m256i __B);  // 5217
			_mm256_add_epi64(__m256i __A,
					__m256i __B);  // 5218
			_mm256_add_epi64(__m256i __A,
					__m256i __B);  // 5219
		}
		XXH3_initCustomSecret_avx2(void* customSecret,
						xxh_u64 seed64);  // 7228
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
				_mm256_mul_epu32(__m256i __A,
						__m256i __B);  // 5183
				_mm256_xor_si256(__m256i __A,
						__m256i __B);  // 5179
				_mm256_srli_epi64(__m256i __A,
							int __B);  // 5175
				_mm256_xor_si256(__m256i __A,
						__m256i __B);  // 5176
				_mm256_loadu_si256(const __m256i_u* __P); // 5178
				_mm256_srli_epi64(__m256i __A,
							int __B);  // 5182
				_mm256_mul_epu32(__m256i __A,
						__m256i __B);  // 5184
				_mm256_slli_epi64(__m256i __A,
							int __B);  // 5185
				_mm256_add_epi64(__m256i __A,
						__m256i __B);  // 5185
			}
		}
		XXH3_scrambleAcc_avx2(void* acc,
					const void* secret);  // 6272
		{
			const xxh_u8* in; // 5159
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
					_mm256_loadu_si256(const __m256i_u* __P); // 5143
					_mm256_xor_si256(__m256i __A,
							__m256i __B);  // 5147
					_mm256_srli_epi64(__m256i __A,
								int __B);  // 5149
					_mm256_mul_epu32(__m256i __A,
							__m256i __B);  // 5151
					_mm256_loadu_si256(const __m256i_u* __P); // 5145
					_mm256_shuffle_epi32(__m256i __A,
								const int  __mask);  // 5153
					_mm256_add_epi64(__m256i __A,
							__m256i __B);  // 5154
					_mm256_add_epi64(__m256i __A,
							__m256i __B);  // 5156
				}
			}
			XXH3_accumulate_512_avx2(void* acc,
						const void* input,
						const void* secret);  // 5159
		}
		XXH3_accumulate_avx2(xxh_u64* acc,
					const xxh_u8* input,
					const xxh_u8* secret,
					size_t nbStripes);  // 6271
		{
			const size_t  nbStripes; // 6277
			{
				const xxh_u8* in; // 5159
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
						_mm256_loadu_si256(const __m256i_u* __P); // 5143
						_mm256_xor_si256(__m256i __A,
								__m256i __B);  // 5147
						_mm256_loadu_si256(const __m256i_u* __P); // 5145
						_mm256_srli_epi64(__m256i __A,
									int __B);  // 5149
						_mm256_mul_epu32(__m256i __A,
								__m256i __B);  // 5151
						_mm256_shuffle_epi32(__m256i __A,
									const int  __mask);  // 5153
						_mm256_add_epi64(__m256i __A,
								__m256i __B);  // 5154
						_mm256_add_epi64(__m256i __A,
								__m256i __B);  // 5156
					}
				}
				XXH3_accumulate_512_avx2(void* acc,
							const void* input,
							const void* secret);  // 5159
			}
			XXH3_accumulate_avx2(xxh_u64* acc,
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
						XXH3_f_scrambleAcc f_scramble);  // 7178
		XXH3_finalizeLong_64b(const xxh_u64* acc,
					const xxh_u8* secret,
					xxh_u64 len);  // 7163
		XXH3_finalizeLong_128b(const xxh_u64* acc,
					const xxh_u8* secret,
					size_t secretSize,
					xxh_u64 len);  // 7183
		XXH3_hashLong_128b_internal(const void* input,
						size_t len,
						const xxh_u8* secret,
						size_t secretSize,
						XXH3_f_accumulate f_acc,
						XXH3_f_scrambleAcc f_scramble);  // 7229
	}
	XXH3_hashLong_128b_withSeed_internal(const void* input,
						size_t len,
						XXH64_hash_t seed64,
						XXH3_f_accumulate f_acc,
						XXH3_f_scrambleAcc f_scramble,
						XXH3_f_initCustomSecret f_initSec);  // 570
} /* size: 1414, inline expansions: 7 (2739 bytes) */

// <0007BC3F> tier0/xxh_x86dispatch.c:573
// variables: 38
// function calls: 51
XXH64_hash_t XXHL64_default_avx512(const void* input, size_t len)
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
		_mm512_undefined_epi32(void); // 4758
		_mm512_mul_epu32(__m512i __X,
				__m512i __Y);  // 5090
		_mm512_undefined_epi32(void); // 4872
		_mm512_srli_epi64(__m512i __A,
					unsigned int __B);  // 5083
		_mm512_ternarylogic_epi32(__m512i __A,
						__m512i __B,
						__m512i __C,
						const int  __imm);  // 5086
		_mm512_undefined_epi32(void); // 4872
		_mm512_srli_epi64(__m512i __A,
					unsigned int __B);  // 5089
		_mm512_undefined_epi32(void); // 4758
		_mm512_mul_epu32(__m512i __X,
				__m512i __Y);  // 5091
		_mm512_undefined_epi32(void); // 4790
		_mm512_slli_epi64(__m512i __A,
					unsigned int __B);  // 5092
		_mm512_add_epi64(__m512i __A,
				__m512i __B);  // 5092
	}
	XXH3_scrambleAcc_avx512(void* acc,
				const void* secret);  // 6272
	{
		const xxh_u8* in; // 5050
		{
			const __m512i  data_vec; // 5034
			const __m512i  key_vec; // 5036
			const __m512i  data_key; // 5038
			const __m512i  data_key_lo; // 5040
			const __m512i  product; // 5042
			const __m512i  data_swap; // 5044
			const __m512i  sum; // 5045
			_mm512_loadu_si512(const void* __P); // 5034
			_mm512_xor_si512(__m512i __A,
					__m512i __B);  // 5038
			_mm512_loadu_si512(const void* __P); // 5036
			_mm512_undefined_epi32(void); // 4872
			_mm512_srli_epi64(__m512i __A,
						unsigned int __B);  // 5040
			_mm512_undefined_epi32(void); // 4758
			_mm512_mul_epu32(__m512i __X,
					__m512i __Y);  // 5042
			_mm512_undefined_epi32(void); // 7614
			_mm512_shuffle_epi32(__m512i __A,
						_MM_PERM_ENUM __mask);  // 5044
			_mm512_add_epi64(__m512i __A,
					__m512i __B);  // 5045
			_mm512_add_epi64(__m512i __A,
					__m512i __B);  // 5047
		}
		XXH3_accumulate_512_avx512(void* acc,
						const void* input,
						const void* secret);  // 5050
	}
	XXH3_accumulate_avx512(xxh_u64* acc,
				const xxh_u8* input,
				const xxh_u8* secret,
				size_t nbStripes);  // 6271
	{
		const size_t  nbStripes; // 6277
		{
			const xxh_u8* in; // 5050
			{
				const __m512i  data_vec; // 5034
				const __m512i  key_vec; // 5036
				const __m512i  data_key; // 5038
				const __m512i  data_key_lo; // 5040
				const __m512i  product; // 5042
				const __m512i  data_swap; // 5044
				const __m512i  sum; // 5045
				_mm512_loadu_si512(const void* __P); // 5034
				_mm512_xor_si512(__m512i __A,
						__m512i __B);  // 5038
				_mm512_loadu_si512(const void* __P); // 5036
				_mm512_undefined_epi32(void); // 4872
				_mm512_srli_epi64(__m512i __A,
							unsigned int __B);  // 5040
				_mm512_undefined_epi32(void); // 4758
				_mm512_mul_epu32(__m512i __X,
						__m512i __Y);  // 5042
				_mm512_undefined_epi32(void); // 7614
				_mm512_shuffle_epi32(__m512i __A,
							_MM_PERM_ENUM __mask);  // 5044
				_mm512_add_epi64(__m512i __A,
						__m512i __B);  // 5045
				_mm512_add_epi64(__m512i __A,
						__m512i __B);  // 5047
			}
			XXH3_accumulate_512_avx512(void* acc,
							const void* input,
							const void* secret);  // 5050
		}
		XXH3_accumulate_avx512(xxh_u64* acc,
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
					XXH3_f_scrambleAcc f_scramble);  // 573
} /* size: 595, inline expansions: 5 (1255 bytes) */

// <00079EF4> tier0/xxh_x86dispatch.c:573
// variables: 83
// function calls: 107
XXH64_hash_t XXHL64_seed_avx512(const void* input, size_t len, XXH64_hash_t seed)
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
		_mm512_undefined_epi32(void); // 4758
		_mm512_mul_epu32(__m512i __X,
				__m512i __Y);  // 5090
		_mm512_undefined_epi32(void); // 4872
		_mm512_srli_epi64(__m512i __A,
					unsigned int __B);  // 5083
		_mm512_ternarylogic_epi32(__m512i __A,
						__m512i __B,
						__m512i __C,
						const int  __imm);  // 5086
		_mm512_undefined_epi32(void); // 4872
		_mm512_srli_epi64(__m512i __A,
					unsigned int __B);  // 5089
		_mm512_undefined_epi32(void); // 4758
		_mm512_mul_epu32(__m512i __X,
				__m512i __Y);  // 5091
		_mm512_undefined_epi32(void); // 4790
		_mm512_slli_epi64(__m512i __A,
					unsigned int __B);  // 5092
		_mm512_add_epi64(__m512i __A,
				__m512i __B);  // 5092
	}
	XXH3_scrambleAcc_avx512(void* acc,
				const void* secret);  // 6272
	{
		const xxh_u8* in; // 5050
		{
			const __m512i  data_vec; // 5034
			const __m512i  key_vec; // 5036
			const __m512i  data_key; // 5038
			const __m512i  data_key_lo; // 5040
			const __m512i  product; // 5042
			const __m512i  data_swap; // 5044
			const __m512i  sum; // 5045
			_mm512_loadu_si512(const void* __P); // 5034
			_mm512_xor_si512(__m512i __A,
					__m512i __B);  // 5038
			_mm512_loadu_si512(const void* __P); // 5036
			_mm512_undefined_epi32(void); // 4872
			_mm512_srli_epi64(__m512i __A,
						unsigned int __B);  // 5040
			_mm512_undefined_epi32(void); // 4758
			_mm512_mul_epu32(__m512i __X,
					__m512i __Y);  // 5042
			_mm512_undefined_epi32(void); // 7614
			_mm512_shuffle_epi32(__m512i __A,
						_MM_PERM_ENUM __mask);  // 5044
			_mm512_add_epi64(__m512i __A,
					__m512i __B);  // 5045
			_mm512_add_epi64(__m512i __A,
					__m512i __B);  // 5047
		}
		XXH3_accumulate_512_avx512(void* acc,
						const void* input,
						const void* secret);  // 5050
	}
	XXH3_accumulate_avx512(xxh_u64* acc,
				const xxh_u8* input,
				const xxh_u8* secret,
				size_t nbStripes);  // 6271
	{
		const size_t  nbStripes; // 6277
		{
			const xxh_u8* in; // 5050
			{
				const __m512i  data_vec; // 5034
				const __m512i  key_vec; // 5036
				const __m512i  data_key; // 5038
				const __m512i  data_key_lo; // 5040
				const __m512i  product; // 5042
				const __m512i  data_swap; // 5044
				const __m512i  sum; // 5045
				_mm512_loadu_si512(const void* __P); // 5034
				_mm512_xor_si512(__m512i __A,
						__m512i __B);  // 5038
				_mm512_loadu_si512(const void* __P); // 5036
				_mm512_undefined_epi32(void); // 4872
				_mm512_srli_epi64(__m512i __A,
							unsigned int __B);  // 5040
				_mm512_undefined_epi32(void); // 4758
				_mm512_mul_epu32(__m512i __X,
						__m512i __Y);  // 5042
				_mm512_undefined_epi32(void); // 7614
				_mm512_shuffle_epi32(__m512i __A,
							_MM_PERM_ENUM __mask);  // 5044
				_mm512_add_epi64(__m512i __A,
						__m512i __B);  // 5045
				_mm512_add_epi64(__m512i __A,
						__m512i __B);  // 5047
			}
			XXH3_accumulate_512_avx512(void* acc,
							const void* input,
							const void* secret);  // 5050
		}
		XXH3_accumulate_avx512(xxh_u64* acc,
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
					XXH3_f_scrambleAcc f_scramble);  // 6400
	{
		xxh_u8 secret; // 6404
		{
			const int  nbRounds; // 5103
			const __m512i  seed_pos; // 5104
			const __m512i  seed; // 5105
			const __m512i* src; // 5107
			const __m512i* dest; // 5108
			int i; // 5109
			_mm512_set1_epi64(long long int __A); // 5104
			_mm512_mask_sub_epi64(__m512i __W,
						__mmask8 __U,
						__m512i __A,
						__m512i __B);  // 5105
			_mm512_add_epi64(__m512i __A,
					__m512i __B);  // 5113
		}
		XXH3_initCustomSecret_avx512(void* customSecret,
						xxh_u64 seed64);  // 6405
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
			_mm512_undefined_epi32(void); // 4758
			_mm512_mul_epu32(__m512i __X,
					__m512i __Y);  // 5090
			_mm512_undefined_epi32(void); // 4872
			_mm512_srli_epi64(__m512i __A,
						unsigned int __B);  // 5083
			_mm512_ternarylogic_epi32(__m512i __A,
							__m512i __B,
							__m512i __C,
							const int  __imm);  // 5086
			_mm512_undefined_epi32(void); // 4872
			_mm512_srli_epi64(__m512i __A,
						unsigned int __B);  // 5089
			_mm512_undefined_epi32(void); // 4758
			_mm512_mul_epu32(__m512i __X,
					__m512i __Y);  // 5091
			_mm512_undefined_epi32(void); // 4790
			_mm512_slli_epi64(__m512i __A,
						unsigned int __B);  // 5092
			_mm512_add_epi64(__m512i __A,
					__m512i __B);  // 5092
		}
		XXH3_scrambleAcc_avx512(void* acc,
					const void* secret);  // 6272
		{
			const xxh_u8* in; // 5050
			{
				const __m512i  data_vec; // 5034
				const __m512i  key_vec; // 5036
				const __m512i  data_key; // 5038
				const __m512i  data_key_lo; // 5040
				const __m512i  product; // 5042
				const __m512i  data_swap; // 5044
				const __m512i  sum; // 5045
				_mm512_loadu_si512(const void* __P); // 5034
				_mm512_xor_si512(__m512i __A,
						__m512i __B);  // 5038
				_mm512_loadu_si512(const void* __P); // 5036
				_mm512_undefined_epi32(void); // 4872
				_mm512_srli_epi64(__m512i __A,
							unsigned int __B);  // 5040
				_mm512_undefined_epi32(void); // 4758
				_mm512_mul_epu32(__m512i __X,
						__m512i __Y);  // 5042
				_mm512_undefined_epi32(void); // 7614
				_mm512_shuffle_epi32(__m512i __A,
							_MM_PERM_ENUM __mask);  // 5044
				_mm512_add_epi64(__m512i __A,
						__m512i __B);  // 5045
				_mm512_add_epi64(__m512i __A,
						__m512i __B);  // 5047
			}
			XXH3_accumulate_512_avx512(void* acc,
							const void* input,
							const void* secret);  // 5050
		}
		XXH3_accumulate_avx512(xxh_u64* acc,
					const xxh_u8* input,
					const xxh_u8* secret,
					size_t nbStripes);  // 6271
		{
			const size_t  nbStripes; // 6277
			{
				const xxh_u8* in; // 5050
				{
					const __m512i  data_vec; // 5034
					const __m512i  key_vec; // 5036
					const __m512i  data_key; // 5038
					const __m512i  data_key_lo; // 5040
					const __m512i  product; // 5042
					const __m512i  data_swap; // 5044
					const __m512i  sum; // 5045
					_mm512_loadu_si512(const void* __P); // 5034
					_mm512_xor_si512(__m512i __A,
							__m512i __B);  // 5038
					_mm512_loadu_si512(const void* __P); // 5036
					_mm512_undefined_epi32(void); // 4872
					_mm512_srli_epi64(__m512i __A,
								unsigned int __B);  // 5040
					_mm512_undefined_epi32(void); // 4758
					_mm512_mul_epu32(__m512i __X,
							__m512i __Y);  // 5042
					_mm512_undefined_epi32(void); // 7614
					_mm512_shuffle_epi32(__m512i __A,
								_MM_PERM_ENUM __mask);  // 5044
					_mm512_add_epi64(__m512i __A,
							__m512i __B);  // 5045
					_mm512_add_epi64(__m512i __A,
							__m512i __B);  // 5047
				}
				XXH3_accumulate_512_avx512(void* acc,
								const void* input,
								const void* secret);  // 5050
			}
			XXH3_accumulate_avx512(xxh_u64* acc,
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
						XXH3_f_scrambleAcc f_scramble);  // 6406
	}
	XXH3_hashLong_64b_withSeed_internal(const void* input,
						size_t len,
						XXH64_hash_t seed,
						XXH3_f_accumulate f_acc,
						XXH3_f_scrambleAcc f_scramble,
						XXH3_f_initCustomSecret f_initSec);  // 573
} /* size: 1200, inline expansions: 6 (2251 bytes) */

// <000790D8> tier0/xxh_x86dispatch.c:573
// variables: 38
// function calls: 52
XXH64_hash_t XXHL64_secret_avx512(const void* input, size_t len, const void* secret, size_t secretLen)
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
		_mm512_undefined_epi32(void); // 4758
		_mm512_mul_epu32(__m512i __X,
				__m512i __Y);  // 5090
		_mm512_undefined_epi32(void); // 4872
		_mm512_srli_epi64(__m512i __A,
					unsigned int __B);  // 5083
		_mm512_loadu_si512(const void* __P); // 5085
		_mm512_ternarylogic_epi32(__m512i __A,
						__m512i __B,
						__m512i __C,
						const int  __imm);  // 5086
		_mm512_undefined_epi32(void); // 4872
		_mm512_srli_epi64(__m512i __A,
					unsigned int __B);  // 5089
		_mm512_undefined_epi32(void); // 4758
		_mm512_mul_epu32(__m512i __X,
				__m512i __Y);  // 5091
		_mm512_undefined_epi32(void); // 4790
		_mm512_slli_epi64(__m512i __A,
					unsigned int __B);  // 5092
		_mm512_add_epi64(__m512i __A,
				__m512i __B);  // 5092
	}
	XXH3_scrambleAcc_avx512(void* acc,
				const void* secret);  // 6272
	{
		const xxh_u8* in; // 5050
		{
			const __m512i  data_vec; // 5034
			const __m512i  key_vec; // 5036
			const __m512i  data_key; // 5038
			const __m512i  data_key_lo; // 5040
			const __m512i  product; // 5042
			const __m512i  data_swap; // 5044
			const __m512i  sum; // 5045
			_mm512_loadu_si512(const void* __P); // 5034
			_mm512_loadu_si512(const void* __P); // 5036
			_mm512_xor_si512(__m512i __A,
					__m512i __B);  // 5038
			_mm512_undefined_epi32(void); // 4872
			_mm512_srli_epi64(__m512i __A,
						unsigned int __B);  // 5040
			_mm512_undefined_epi32(void); // 4758
			_mm512_mul_epu32(__m512i __X,
					__m512i __Y);  // 5042
			_mm512_undefined_epi32(void); // 7614
			_mm512_shuffle_epi32(__m512i __A,
						_MM_PERM_ENUM __mask);  // 5044
			_mm512_add_epi64(__m512i __A,
					__m512i __B);  // 5045
			_mm512_add_epi64(__m512i __A,
					__m512i __B);  // 5047
		}
		XXH3_accumulate_512_avx512(void* acc,
						const void* input,
						const void* secret);  // 5050
	}
	XXH3_accumulate_avx512(xxh_u64* acc,
				const xxh_u8* input,
				const xxh_u8* secret,
				size_t nbStripes);  // 6271
	{
		const size_t  nbStripes; // 6277
		{
			const xxh_u8* in; // 5050
			{
				const __m512i  data_vec; // 5034
				const __m512i  key_vec; // 5036
				const __m512i  data_key; // 5038
				const __m512i  data_key_lo; // 5040
				const __m512i  product; // 5042
				const __m512i  data_swap; // 5044
				const __m512i  sum; // 5045
				_mm512_loadu_si512(const void* __P); // 5034
				_mm512_xor_si512(__m512i __A,
						__m512i __B);  // 5038
				_mm512_loadu_si512(const void* __P); // 5036
				_mm512_undefined_epi32(void); // 4872
				_mm512_srli_epi64(__m512i __A,
							unsigned int __B);  // 5040
				_mm512_undefined_epi32(void); // 4758
				_mm512_mul_epu32(__m512i __X,
						__m512i __Y);  // 5042
				_mm512_undefined_epi32(void); // 7614
				_mm512_shuffle_epi32(__m512i __A,
							_MM_PERM_ENUM __mask);  // 5044
				_mm512_add_epi64(__m512i __A,
						__m512i __B);  // 5045
				_mm512_add_epi64(__m512i __A,
						__m512i __B);  // 5047
			}
			XXH3_accumulate_512_avx512(void* acc,
							const void* input,
							const void* secret);  // 5050
		}
		XXH3_accumulate_avx512(xxh_u64* acc,
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
					XXH3_f_scrambleAcc f_scramble);  // 573
} /* size: 522, inline expansions: 5 (1008 bytes) */

// <000778A0> tier0/xxh_x86dispatch.c:573
// variables: 57
// function calls: 89
XXH_NAMESPACEXXH_errorcode XXH3_update_avx512(XXH_NAMESPACEXXH3_state_t* state, const void* input, size_t len)
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
					const __m512i* xacc; // 5078
					const __m512i  prime32; // 5079
					const __m512i  acc_vec; // 5082
					const __m512i  shifted; // 5083
					const __m512i  key_vec; // 5085
					const __m512i  data_key; // 5086
					const __m512i  data_key_hi; // 5089
					const __m512i  prod_lo; // 5090
					const __m512i  prod_hi; // 5091
					_mm512_undefined_epi32(void); // 4758
					_mm512_mul_epu32(__m512i __X,
							__m512i __Y);  // 5090
					_mm512_undefined_epi32(void); // 4872
					_mm512_srli_epi64(__m512i __A,
								unsigned int __B);  // 5083
					_mm512_loadu_si512(const void* __P); // 5085
					_mm512_ternarylogic_epi32(__m512i __A,
									__m512i __B,
									__m512i __C,
									const int  __imm);  // 5086
					_mm512_undefined_epi32(void); // 4872
					_mm512_srli_epi64(__m512i __A,
								unsigned int __B);  // 5089
					_mm512_undefined_epi32(void); // 4758
					_mm512_mul_epu32(__m512i __X,
							__m512i __Y);  // 5091
					_mm512_undefined_epi32(void); // 4790
					_mm512_slli_epi64(__m512i __A,
								unsigned int __B);  // 5092
					_mm512_add_epi64(__m512i __A,
							__m512i __B);  // 5092
				}
				XXH3_scrambleAcc_avx512(void* acc,
							const void* secret);  // 6697
				{
					const xxh_u8* in; // 5050
					{
						const __m512i  data_vec; // 5034
						const __m512i  key_vec; // 5036
						const __m512i  data_key; // 5038
						const __m512i  data_key_lo; // 5040
						const __m512i  product; // 5042
						const __m512i  data_swap; // 5044
						const __m512i  sum; // 5045
						_mm512_loadu_si512(const void* __P); // 5034
						_mm512_loadu_si512(const void* __P); // 5036
						_mm512_xor_si512(__m512i __A,
								__m512i __B);  // 5038
						_mm512_undefined_epi32(void); // 4872
						_mm512_srli_epi64(__m512i __A,
									unsigned int __B);  // 5040
						_mm512_undefined_epi32(void); // 4758
						_mm512_mul_epu32(__m512i __X,
								__m512i __Y);  // 5042
						_mm512_undefined_epi32(void); // 7614
						_mm512_shuffle_epi32(__m512i __A,
									_MM_PERM_ENUM __mask);  // 5044
						_mm512_add_epi64(__m512i __A,
								__m512i __B);  // 5045
						_mm512_add_epi64(__m512i __A,
								__m512i __B);  // 5047
					}
					XXH3_accumulate_512_avx512(void* acc,
									const void* input,
									const void* secret);  // 5050
				}
				XXH3_accumulate_avx512(xxh_u64* acc,
							const xxh_u8* input,
							const xxh_u8* secret,
							size_t nbStripes);  // 6696
			}
			{
				const xxh_u8* in; // 5050
				{
					const __m512i  data_vec; // 5034
					const __m512i  key_vec; // 5036
					const __m512i  data_key; // 5038
					const __m512i  data_key_lo; // 5040
					const __m512i  product; // 5042
					const __m512i  data_swap; // 5044
					const __m512i  sum; // 5045
					_mm512_loadu_si512(const void* __P); // 5034
					_mm512_loadu_si512(const void* __P); // 5036
					_mm512_xor_si512(__m512i __A,
							__m512i __B);  // 5038
					_mm512_undefined_epi32(void); // 4872
					_mm512_srli_epi64(__m512i __A,
								unsigned int __B);  // 5040
					_mm512_undefined_epi32(void); // 4758
					_mm512_mul_epu32(__m512i __X,
							__m512i __Y);  // 5042
					_mm512_undefined_epi32(void); // 7614
					_mm512_shuffle_epi32(__m512i __A,
								_MM_PERM_ENUM __mask);  // 5044
					_mm512_add_epi64(__m512i __A,
							__m512i __B);  // 5045
					_mm512_add_epi64(__m512i __A,
							__m512i __B);  // 5047
				}
				XXH3_accumulate_512_avx512(void* acc,
								const void* input,
								const void* secret);  // 5050
			}
			XXH3_accumulate_avx512(xxh_u64* acc,
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
					const __m512i* xacc; // 5078
					const __m512i  prime32; // 5079
					const __m512i  acc_vec; // 5082
					const __m512i  shifted; // 5083
					const __m512i  key_vec; // 5085
					const __m512i  data_key; // 5086
					const __m512i  data_key_hi; // 5089
					const __m512i  prod_lo; // 5090
					const __m512i  prod_hi; // 5091
					_mm512_undefined_epi32(void); // 4758
					_mm512_mul_epu32(__m512i __X,
							__m512i __Y);  // 5090
					_mm512_undefined_epi32(void); // 4872
					_mm512_srli_epi64(__m512i __A,
								unsigned int __B);  // 5083
					_mm512_loadu_si512(const void* __P); // 5085
					_mm512_ternarylogic_epi32(__m512i __A,
									__m512i __B,
									__m512i __C,
									const int  __imm);  // 5086
					_mm512_undefined_epi32(void); // 4872
					_mm512_srli_epi64(__m512i __A,
								unsigned int __B);  // 5089
					_mm512_undefined_epi32(void); // 4758
					_mm512_mul_epu32(__m512i __X,
							__m512i __Y);  // 5091
					_mm512_undefined_epi32(void); // 4790
					_mm512_slli_epi64(__m512i __A,
								unsigned int __B);  // 5092
					_mm512_add_epi64(__m512i __A,
							__m512i __B);  // 5092
				}
				XXH3_scrambleAcc_avx512(void* acc,
							const void* secret);  // 6697
				{
					const xxh_u8* in; // 5050
					{
						const __m512i  data_vec; // 5034
						const __m512i  key_vec; // 5036
						const __m512i  data_key; // 5038
						const __m512i  data_key_lo; // 5040
						const __m512i  product; // 5042
						const __m512i  data_swap; // 5044
						const __m512i  sum; // 5045
						_mm512_loadu_si512(const void* __P); // 5034
						_mm512_loadu_si512(const void* __P); // 5036
						_mm512_xor_si512(__m512i __A,
								__m512i __B);  // 5038
						_mm512_undefined_epi32(void); // 4872
						_mm512_srli_epi64(__m512i __A,
									unsigned int __B);  // 5040
						_mm512_undefined_epi32(void); // 4758
						_mm512_mul_epu32(__m512i __X,
								__m512i __Y);  // 5042
						_mm512_undefined_epi32(void); // 7614
						_mm512_shuffle_epi32(__m512i __A,
									_MM_PERM_ENUM __mask);  // 5044
						_mm512_add_epi64(__m512i __A,
								__m512i __B);  // 5045
						_mm512_add_epi64(__m512i __A,
								__m512i __B);  // 5047
					}
					XXH3_accumulate_512_avx512(void* acc,
									const void* input,
									const void* secret);  // 5050
				}
				XXH3_accumulate_avx512(xxh_u64* acc,
							const xxh_u8* input,
							const xxh_u8* secret,
							size_t nbStripes);  // 6696
			}
			{
				const xxh_u8* in; // 5050
				{
					const __m512i  data_vec; // 5034
					const __m512i  key_vec; // 5036
					const __m512i  data_key; // 5038
					const __m512i  data_key_lo; // 5040
					const __m512i  product; // 5042
					const __m512i  data_swap; // 5044
					const __m512i  sum; // 5045
					_mm512_loadu_si512(const void* __P); // 5034
					_mm512_loadu_si512(const void* __P); // 5036
					_mm512_xor_si512(__m512i __A,
							__m512i __B);  // 5038
					_mm512_undefined_epi32(void); // 4872
					_mm512_srli_epi64(__m512i __A,
								unsigned int __B);  // 5040
					_mm512_undefined_epi32(void); // 4758
					_mm512_mul_epu32(__m512i __X,
							__m512i __Y);  // 5042
					_mm512_undefined_epi32(void); // 7614
					_mm512_shuffle_epi32(__m512i __A,
								_MM_PERM_ENUM __mask);  // 5044
					_mm512_add_epi64(__m512i __A,
							__m512i __B);  // 5045
					_mm512_add_epi64(__m512i __A,
							__m512i __B);  // 5047
				}
				XXH3_accumulate_512_avx512(void* acc,
								const void* input,
								const void* secret);  // 5050
			}
			XXH3_accumulate_avx512(xxh_u64* acc,
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
			XXH3_f_scrambleAcc f_scramble);  // 573
} /* size: 1128, inline expansions: 2 (1052 bytes) */

// <00076A2B> tier0/xxh_x86dispatch.c:573
// variables: 38
// function calls: 52
XXH_NAMESPACEXXH128_hash_t XXHL128_default_avx512(const void* input, size_t len)
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
		_mm512_undefined_epi32(void); // 4758
		_mm512_mul_epu32(__m512i __X,
				__m512i __Y);  // 5090
		_mm512_undefined_epi32(void); // 4872
		_mm512_srli_epi64(__m512i __A,
					unsigned int __B);  // 5083
		_mm512_ternarylogic_epi32(__m512i __A,
						__m512i __B,
						__m512i __C,
						const int  __imm);  // 5086
		_mm512_undefined_epi32(void); // 4872
		_mm512_srli_epi64(__m512i __A,
					unsigned int __B);  // 5089
		_mm512_undefined_epi32(void); // 4758
		_mm512_mul_epu32(__m512i __X,
				__m512i __Y);  // 5091
		_mm512_undefined_epi32(void); // 4790
		_mm512_slli_epi64(__m512i __A,
					unsigned int __B);  // 5092
		_mm512_add_epi64(__m512i __A,
				__m512i __B);  // 5092
	}
	XXH3_scrambleAcc_avx512(void* acc,
				const void* secret);  // 6272
	{
		const xxh_u8* in; // 5050
		{
			const __m512i  data_vec; // 5034
			const __m512i  key_vec; // 5036
			const __m512i  data_key; // 5038
			const __m512i  data_key_lo; // 5040
			const __m512i  product; // 5042
			const __m512i  data_swap; // 5044
			const __m512i  sum; // 5045
			_mm512_loadu_si512(const void* __P); // 5034
			_mm512_xor_si512(__m512i __A,
					__m512i __B);  // 5038
			_mm512_loadu_si512(const void* __P); // 5036
			_mm512_undefined_epi32(void); // 4872
			_mm512_srli_epi64(__m512i __A,
						unsigned int __B);  // 5040
			_mm512_undefined_epi32(void); // 4758
			_mm512_mul_epu32(__m512i __X,
					__m512i __Y);  // 5042
			_mm512_undefined_epi32(void); // 7614
			_mm512_shuffle_epi32(__m512i __A,
						_MM_PERM_ENUM __mask);  // 5044
			_mm512_add_epi64(__m512i __A,
					__m512i __B);  // 5045
			_mm512_add_epi64(__m512i __A,
					__m512i __B);  // 5047
		}
		XXH3_accumulate_512_avx512(void* acc,
						const void* input,
						const void* secret);  // 5050
	}
	XXH3_accumulate_avx512(xxh_u64* acc,
				const xxh_u8* input,
				const xxh_u8* secret,
				size_t nbStripes);  // 6271
	{
		const size_t  nbStripes; // 6277
		{
			const xxh_u8* in; // 5050
			{
				const __m512i  data_vec; // 5034
				const __m512i  key_vec; // 5036
				const __m512i  data_key; // 5038
				const __m512i  data_key_lo; // 5040
				const __m512i  product; // 5042
				const __m512i  data_swap; // 5044
				const __m512i  sum; // 5045
				_mm512_loadu_si512(const void* __P); // 5034
				_mm512_xor_si512(__m512i __A,
						__m512i __B);  // 5038
				_mm512_loadu_si512(const void* __P); // 5036
				_mm512_undefined_epi32(void); // 4872
				_mm512_srli_epi64(__m512i __A,
							unsigned int __B);  // 5040
				_mm512_undefined_epi32(void); // 4758
				_mm512_mul_epu32(__m512i __X,
						__m512i __Y);  // 5042
				_mm512_undefined_epi32(void); // 7614
				_mm512_shuffle_epi32(__m512i __A,
							_MM_PERM_ENUM __mask);  // 5044
				_mm512_add_epi64(__m512i __A,
						__m512i __B);  // 5045
				_mm512_add_epi64(__m512i __A,
						__m512i __B);  // 5047
			}
			XXH3_accumulate_512_avx512(void* acc,
							const void* input,
							const void* secret);  // 5050
		}
		XXH3_accumulate_avx512(xxh_u64* acc,
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
					XXH3_f_scrambleAcc f_scramble);  // 7178
	XXH3_finalizeLong_64b(const xxh_u64* acc,
				const xxh_u8* secret,
				xxh_u64 len);  // 7163
	XXH3_finalizeLong_128b(const xxh_u64* acc,
				const xxh_u8* secret,
				size_t secretSize,
				xxh_u64 len);  // 7183
	XXH3_hashLong_128b_internal(const void* input,
					size_t len,
					const xxh_u8* secret,
					size_t secretSize,
					XXH3_f_accumulate f_acc,
					XXH3_f_scrambleAcc f_scramble);  // 573
} /* size: 636, inline expansions: 6 (1355 bytes) */

// <00075B8B> tier0/xxh_x86dispatch.c:573
// variables: 38
// function calls: 53
XXH_NAMESPACEXXH128_hash_t XXHL128_secret_avx512(const void* input, size_t len, const void* secret, size_t secretLen)
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
		_mm512_undefined_epi32(void); // 4758
		_mm512_mul_epu32(__m512i __X,
				__m512i __Y);  // 5090
		_mm512_undefined_epi32(void); // 4872
		_mm512_srli_epi64(__m512i __A,
					unsigned int __B);  // 5083
		_mm512_loadu_si512(const void* __P); // 5085
		_mm512_ternarylogic_epi32(__m512i __A,
						__m512i __B,
						__m512i __C,
						const int  __imm);  // 5086
		_mm512_undefined_epi32(void); // 4872
		_mm512_srli_epi64(__m512i __A,
					unsigned int __B);  // 5089
		_mm512_undefined_epi32(void); // 4758
		_mm512_mul_epu32(__m512i __X,
				__m512i __Y);  // 5091
		_mm512_undefined_epi32(void); // 4790
		_mm512_slli_epi64(__m512i __A,
					unsigned int __B);  // 5092
		_mm512_add_epi64(__m512i __A,
				__m512i __B);  // 5092
	}
	XXH3_scrambleAcc_avx512(void* acc,
				const void* secret);  // 6272
	{
		const xxh_u8* in; // 5050
		{
			const __m512i  data_vec; // 5034
			const __m512i  key_vec; // 5036
			const __m512i  data_key; // 5038
			const __m512i  data_key_lo; // 5040
			const __m512i  product; // 5042
			const __m512i  data_swap; // 5044
			const __m512i  sum; // 5045
			_mm512_loadu_si512(const void* __P); // 5034
			_mm512_loadu_si512(const void* __P); // 5036
			_mm512_xor_si512(__m512i __A,
					__m512i __B);  // 5038
			_mm512_undefined_epi32(void); // 4872
			_mm512_srli_epi64(__m512i __A,
						unsigned int __B);  // 5040
			_mm512_undefined_epi32(void); // 4758
			_mm512_mul_epu32(__m512i __X,
					__m512i __Y);  // 5042
			_mm512_undefined_epi32(void); // 7614
			_mm512_shuffle_epi32(__m512i __A,
						_MM_PERM_ENUM __mask);  // 5044
			_mm512_add_epi64(__m512i __A,
					__m512i __B);  // 5045
			_mm512_add_epi64(__m512i __A,
					__m512i __B);  // 5047
		}
		XXH3_accumulate_512_avx512(void* acc,
						const void* input,
						const void* secret);  // 5050
	}
	XXH3_accumulate_avx512(xxh_u64* acc,
				const xxh_u8* input,
				const xxh_u8* secret,
				size_t nbStripes);  // 6271
	{
		const size_t  nbStripes; // 6277
		{
			const xxh_u8* in; // 5050
			{
				const __m512i  data_vec; // 5034
				const __m512i  key_vec; // 5036
				const __m512i  data_key; // 5038
				const __m512i  data_key_lo; // 5040
				const __m512i  product; // 5042
				const __m512i  data_swap; // 5044
				const __m512i  sum; // 5045
				_mm512_loadu_si512(const void* __P); // 5034
				_mm512_xor_si512(__m512i __A,
						__m512i __B);  // 5038
				_mm512_loadu_si512(const void* __P); // 5036
				_mm512_undefined_epi32(void); // 4872
				_mm512_srli_epi64(__m512i __A,
							unsigned int __B);  // 5040
				_mm512_undefined_epi32(void); // 4758
				_mm512_mul_epu32(__m512i __X,
						__m512i __Y);  // 5042
				_mm512_undefined_epi32(void); // 7614
				_mm512_shuffle_epi32(__m512i __A,
							_MM_PERM_ENUM __mask);  // 5044
				_mm512_add_epi64(__m512i __A,
						__m512i __B);  // 5045
				_mm512_add_epi64(__m512i __A,
						__m512i __B);  // 5047
			}
			XXH3_accumulate_512_avx512(void* acc,
							const void* input,
							const void* secret);  // 5050
		}
		XXH3_accumulate_avx512(xxh_u64* acc,
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
					XXH3_f_scrambleAcc f_scramble);  // 7178
	XXH3_finalizeLong_64b(const xxh_u64* acc,
				const xxh_u8* secret,
				xxh_u64 len);  // 7163
	XXH3_finalizeLong_128b(const xxh_u64* acc,
				const xxh_u8* secret,
				size_t secretSize,
				xxh_u64 len);  // 7183
	XXH3_hashLong_128b_internal(const void* input,
					size_t len,
					const xxh_u8* secret,
					size_t secretSize,
					XXH3_f_accumulate f_acc,
					XXH3_f_scrambleAcc f_scramble);  // 573
} /* size: 558, inline expansions: 6 (1091 bytes) */

// <00073D42> tier0/xxh_x86dispatch.c:573
// variables: 83
// function calls: 109
XXH_NAMESPACEXXH128_hash_t XXHL128_seed_avx512(const void* input, size_t len, XXH64_hash_t seed)
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
		_mm512_undefined_epi32(void); // 4758
		_mm512_mul_epu32(__m512i __X,
				__m512i __Y);  // 5090
		_mm512_undefined_epi32(void); // 4872
		_mm512_srli_epi64(__m512i __A,
					unsigned int __B);  // 5083
		_mm512_ternarylogic_epi32(__m512i __A,
						__m512i __B,
						__m512i __C,
						const int  __imm);  // 5086
		_mm512_undefined_epi32(void); // 4872
		_mm512_srli_epi64(__m512i __A,
					unsigned int __B);  // 5089
		_mm512_undefined_epi32(void); // 4758
		_mm512_mul_epu32(__m512i __X,
				__m512i __Y);  // 5091
		_mm512_undefined_epi32(void); // 4790
		_mm512_slli_epi64(__m512i __A,
					unsigned int __B);  // 5092
		_mm512_add_epi64(__m512i __A,
				__m512i __B);  // 5092
	}
	XXH3_scrambleAcc_avx512(void* acc,
				const void* secret);  // 6272
	{
		const xxh_u8* in; // 5050
		{
			const __m512i  data_vec; // 5034
			const __m512i  key_vec; // 5036
			const __m512i  data_key; // 5038
			const __m512i  data_key_lo; // 5040
			const __m512i  product; // 5042
			const __m512i  data_swap; // 5044
			const __m512i  sum; // 5045
			_mm512_loadu_si512(const void* __P); // 5034
			_mm512_xor_si512(__m512i __A,
					__m512i __B);  // 5038
			_mm512_loadu_si512(const void* __P); // 5036
			_mm512_undefined_epi32(void); // 4872
			_mm512_srli_epi64(__m512i __A,
						unsigned int __B);  // 5040
			_mm512_undefined_epi32(void); // 4758
			_mm512_mul_epu32(__m512i __X,
					__m512i __Y);  // 5042
			_mm512_undefined_epi32(void); // 7614
			_mm512_shuffle_epi32(__m512i __A,
						_MM_PERM_ENUM __mask);  // 5044
			_mm512_add_epi64(__m512i __A,
					__m512i __B);  // 5045
			_mm512_add_epi64(__m512i __A,
					__m512i __B);  // 5047
		}
		XXH3_accumulate_512_avx512(void* acc,
						const void* input,
						const void* secret);  // 5050
	}
	XXH3_accumulate_avx512(xxh_u64* acc,
				const xxh_u8* input,
				const xxh_u8* secret,
				size_t nbStripes);  // 6271
	{
		const size_t  nbStripes; // 6277
		{
			const xxh_u8* in; // 5050
			{
				const __m512i  data_vec; // 5034
				const __m512i  key_vec; // 5036
				const __m512i  data_key; // 5038
				const __m512i  data_key_lo; // 5040
				const __m512i  product; // 5042
				const __m512i  data_swap; // 5044
				const __m512i  sum; // 5045
				_mm512_loadu_si512(const void* __P); // 5034
				_mm512_xor_si512(__m512i __A,
						__m512i __B);  // 5038
				_mm512_loadu_si512(const void* __P); // 5036
				_mm512_undefined_epi32(void); // 4872
				_mm512_srli_epi64(__m512i __A,
							unsigned int __B);  // 5040
				_mm512_undefined_epi32(void); // 4758
				_mm512_mul_epu32(__m512i __X,
						__m512i __Y);  // 5042
				_mm512_undefined_epi32(void); // 7614
				_mm512_shuffle_epi32(__m512i __A,
							_MM_PERM_ENUM __mask);  // 5044
				_mm512_add_epi64(__m512i __A,
						__m512i __B);  // 5045
				_mm512_add_epi64(__m512i __A,
						__m512i __B);  // 5047
			}
			XXH3_accumulate_512_avx512(void* acc,
							const void* input,
							const void* secret);  // 5050
		}
		XXH3_accumulate_avx512(xxh_u64* acc,
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
					XXH3_f_scrambleAcc f_scramble);  // 7178
	XXH3_finalizeLong_64b(const xxh_u64* acc,
				const xxh_u8* secret,
				xxh_u64 len);  // 7163
	XXH3_finalizeLong_128b(const xxh_u64* acc,
				const xxh_u8* secret,
				size_t secretSize,
				xxh_u64 len);  // 7183
	XXH3_hashLong_128b_internal(const void* input,
					size_t len,
					const xxh_u8* secret,
					size_t secretSize,
					XXH3_f_accumulate f_acc,
					XXH3_f_scrambleAcc f_scramble);  // 7224
	{
		xxh_u8 secret; // 7227
		{
			const int  nbRounds; // 5103
			const __m512i  seed_pos; // 5104
			const __m512i  seed; // 5105
			const __m512i* src; // 5107
			const __m512i* dest; // 5108
			int i; // 5109
			_mm512_set1_epi64(long long int __A); // 5104
			_mm512_mask_sub_epi64(__m512i __W,
						__mmask8 __U,
						__m512i __A,
						__m512i __B);  // 5105
			_mm512_add_epi64(__m512i __A,
					__m512i __B);  // 5113
		}
		XXH3_initCustomSecret_avx512(void* customSecret,
						xxh_u64 seed64);  // 7228
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
			_mm512_undefined_epi32(void); // 4758
			_mm512_mul_epu32(__m512i __X,
					__m512i __Y);  // 5090
			_mm512_undefined_epi32(void); // 4872
			_mm512_srli_epi64(__m512i __A,
						unsigned int __B);  // 5083
			_mm512_ternarylogic_epi32(__m512i __A,
							__m512i __B,
							__m512i __C,
							const int  __imm);  // 5086
			_mm512_undefined_epi32(void); // 4872
			_mm512_srli_epi64(__m512i __A,
						unsigned int __B);  // 5089
			_mm512_undefined_epi32(void); // 4758
			_mm512_mul_epu32(__m512i __X,
					__m512i __Y);  // 5091
			_mm512_undefined_epi32(void); // 4790
			_mm512_slli_epi64(__m512i __A,
						unsigned int __B);  // 5092
			_mm512_add_epi64(__m512i __A,
					__m512i __B);  // 5092
		}
		XXH3_scrambleAcc_avx512(void* acc,
					const void* secret);  // 6272
		{
			const xxh_u8* in; // 5050
			{
				const __m512i  data_vec; // 5034
				const __m512i  key_vec; // 5036
				const __m512i  data_key; // 5038
				const __m512i  data_key_lo; // 5040
				const __m512i  product; // 5042
				const __m512i  data_swap; // 5044
				const __m512i  sum; // 5045
				_mm512_loadu_si512(const void* __P); // 5034
				_mm512_xor_si512(__m512i __A,
						__m512i __B);  // 5038
				_mm512_loadu_si512(const void* __P); // 5036
				_mm512_undefined_epi32(void); // 4872
				_mm512_srli_epi64(__m512i __A,
							unsigned int __B);  // 5040
				_mm512_undefined_epi32(void); // 4758
				_mm512_mul_epu32(__m512i __X,
						__m512i __Y);  // 5042
				_mm512_undefined_epi32(void); // 7614
				_mm512_shuffle_epi32(__m512i __A,
							_MM_PERM_ENUM __mask);  // 5044
				_mm512_add_epi64(__m512i __A,
						__m512i __B);  // 5045
				_mm512_add_epi64(__m512i __A,
						__m512i __B);  // 5047
			}
			XXH3_accumulate_512_avx512(void* acc,
							const void* input,
							const void* secret);  // 5050
		}
		XXH3_accumulate_avx512(xxh_u64* acc,
					const xxh_u8* input,
					const xxh_u8* secret,
					size_t nbStripes);  // 6271
		{
			const size_t  nbStripes; // 6277
			{
				const xxh_u8* in; // 5050
				{
					const __m512i  data_vec; // 5034
					const __m512i  key_vec; // 5036
					const __m512i  data_key; // 5038
					const __m512i  data_key_lo; // 5040
					const __m512i  product; // 5042
					const __m512i  data_swap; // 5044
					const __m512i  sum; // 5045
					_mm512_loadu_si512(const void* __P); // 5034
					_mm512_xor_si512(__m512i __A,
							__m512i __B);  // 5038
					_mm512_loadu_si512(const void* __P); // 5036
					_mm512_undefined_epi32(void); // 4872
					_mm512_srli_epi64(__m512i __A,
								unsigned int __B);  // 5040
					_mm512_undefined_epi32(void); // 4758
					_mm512_mul_epu32(__m512i __X,
							__m512i __Y);  // 5042
					_mm512_undefined_epi32(void); // 7614
					_mm512_shuffle_epi32(__m512i __A,
								_MM_PERM_ENUM __mask);  // 5044
					_mm512_add_epi64(__m512i __A,
							__m512i __B);  // 5045
					_mm512_add_epi64(__m512i __A,
							__m512i __B);  // 5047
				}
				XXH3_accumulate_512_avx512(void* acc,
								const void* input,
								const void* secret);  // 5050
			}
			XXH3_accumulate_avx512(xxh_u64* acc,
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
						XXH3_f_scrambleAcc f_scramble);  // 7178
		XXH3_finalizeLong_64b(const xxh_u64* acc,
					const xxh_u8* secret,
					xxh_u64 len);  // 7163
		XXH3_finalizeLong_128b(const xxh_u64* acc,
					const xxh_u8* secret,
					size_t secretSize,
					xxh_u64 len);  // 7183
		XXH3_hashLong_128b_internal(const void* input,
						size_t len,
						const xxh_u8* secret,
						size_t secretSize,
						XXH3_f_accumulate f_acc,
						XXH3_f_scrambleAcc f_scramble);  // 7229
	}
	XXH3_hashLong_128b_withSeed_internal(const void* input,
						size_t len,
						XXH64_hash_t seed64,
						XXH3_f_accumulate f_acc,
						XXH3_f_scrambleAcc f_scramble,
						XXH3_f_initCustomSecret f_initSec);  // 573
} /* size: 1239, inline expansions: 7 (2389 bytes) */

// <00069A08> tier0/xxh_x86dispatch.c:589
// member variables: 4
// struct size: 32
typedef struct {
	XXH3_dispatchx86_hashLong64_default hashLong64_default; /* 0 8 */
	XXH3_dispatchx86_hashLong64_withSeed hashLong64_seed; /* 8 8 */
	XXH3_dispatchx86_hashLong64_withSecret hashLong64_secret; /* 16 8 */
	XXH3_dispatchx86_update update; /* 24 8 */
} XXH_dispatchFunctions_s;

// <00069B30> tier0/xxh_x86dispatch.c:637
// member variables: 4
// struct size: 32
typedef struct {
	XXH3_dispatchx86_hashLong128_default hashLong128_default; /* 0 8 */
	XXH3_dispatchx86_hashLong128_withSeed hashLong128_seed; /* 8 8 */
	XXH3_dispatchx86_hashLong128_withSecret hashLong128_secret; /* 16 8 */
	XXH3_dispatchx86_update update; /* 24 8 */
} XXH_dispatch128Functions_s;

// <00073CFD> tier0/xxh_x86dispatch.c:681
// variable: 1
void XXH_setDispatch(void)
{
	int vecID; // 683
} /* size: 128, variables: 1 */

// <00073CA9> tier0/xxh_x86dispatch.c:704
XXH64_hash_t XXH3_hashLong_64b_defaultSecret_selection(const void* input, size_t len, XXH64_hash_t seed64, const xxh_u8* secret, size_t secretLen)
{
} /* size: 0 */

// <00072725> tier0/xxh_x86dispatch.c:713
// variables: 33
// function calls: 82
XXH64_hash_t XXH3_64bits_dispatch(const void* input, size_t len)
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
	XXH3_hashLong_64b_defaultSecret_selection(const void* input,
							size_t len,
							XXH64_hash_t seed64,
							const xxh_u8* secret,
							size_t secretLen);  // 6446
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
				XXH3_hashLong64_f f_hashLong);  // 715
} /* size: 0, inline expansions: 7 (0 bytes) */

// <000726D1> tier0/xxh_x86dispatch.c:719
XXH64_hash_t XXH3_hashLong_64b_withSeed_selection(const void* input, size_t len, XXH64_hash_t seed64, const xxh_u8* secret, size_t secretLen)
{
} /* size: 0 */

// <00071212> tier0/xxh_x86dispatch.c:728
// variables: 33
// function calls: 83
XXH64_hash_t XXH3_64bits_withSeed_dispatch(const void* input, size_t len, XXH64_hash_t seed)
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
	XXH64_avalanche(xxh_u64 hash); // 4761
	XXH3_len_0to16_64b(const xxh_u8* input,
				size_t len,
				const xxh_u8* secret,
				XXH64_hash_t seed);  // 6441
	XXH3_hashLong_64b_withSeed_selection(const void* input,
						size_t len,
						XXH64_hash_t seed64,
						const xxh_u8* secret,
						size_t secretLen);  // 6446
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
				XXH3_hashLong64_f f_hashLong);  // 730
} /* size: 0, inline expansions: 8 (0 bytes) */

// <000711BE> tier0/xxh_x86dispatch.c:734
XXH64_hash_t XXH3_hashLong_64b_withSecret_selection(const void* input, size_t len, XXH64_hash_t seed64, const xxh_u8* secret, size_t secretLen)
{
} /* size: 0 */

// <0006F17C> tier0/xxh_x86dispatch.c:743
// variables: 33
// function calls: 135
XXH64_hash_t XXH3_64bits_withSecret_dispatch(const void* input, size_t len, const void* secret, size_t secretLen)
{
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
	XXH3_hashLong_64b_withSecret_selection(const void* input,
						size_t len,
						XXH64_hash_t seed64,
						const xxh_u8* secret,
						size_t secretLen);  // 6446
	{
		xxh_u64 acc; // 4832
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
				XXH3_hashLong64_f f_hashLong);  // 745
} /* size: 0, inline expansions: 12 (0 bytes) */

// <0006F0F6> tier0/xxh_x86dispatch.c:749
XXH_NAMESPACEXXH_errorcode XXH3_64bits_update_dispatch(XXH_NAMESPACEXXH3_state_t* state, const void* input, size_t len)
{
} /* size: 0 */

// <0006F0A2> tier0/xxh_x86dispatch.c:764
XXH_NAMESPACEXXH128_hash_t XXH3_hashLong_128b_defaultSecret_selection(const void* input, size_t len, XXH64_hash_t seed64, const void* secret, size_t secretLen)
{
} /* size: 0 */

// <0006D943> tier0/xxh_x86dispatch.c:773
// variables: 43
// function calls: 97
XXH_NAMESPACEXXH128_hash_t XXH3_128bits_dispatch(const void* input, size_t len)
{
	{
		const xxh_u64  bitflipl; // 6957
		const xxh_u64  bitfliph; // 6958
		const xxh_u64  input_lo; // 6959
		xxh_u64 input_hi; // 6960
		XXH_NAMESPACEXXH128_hash_t m128; // 6961
		XXH_read64(const void* ptr); // 3466
		XXH_readLE64(const void* ptr); // 6959
		XXH_read64(const void* ptr); // 3466
		XXH_readLE64(const void* ptr); // 6960
		XXH_mult64to128(xxh_u64 lhs,
				xxh_u64 rhs);  // 6961
		{
			XXH_NAMESPACEXXH128_hash_t h128; // 7014
			XXH_mult64to128(xxh_u64 lhs,
					xxh_u64 rhs);  // 7014
			XXH_xorshift64(xxh_u64 v64,
					int shift);  // 4644
			XXH_xorshift64(xxh_u64 v64,
					int shift);  // 4646
			XXH3_avalanche(xxh_u64 h64); // 7017
			XXH_xorshift64(xxh_u64 v64,
					int shift);  // 4644
			XXH_xorshift64(xxh_u64 v64,
					int shift);  // 4646
			XXH3_avalanche(xxh_u64 h64); // 7018
		}
	}
	XXH3_len_9to16_128b(const xxh_u8* input,
				size_t len,
				const xxh_u8* secret,
				XXH64_hash_t seed);  // 7030
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
		XXH64_avalanche(xxh_u64 hash); // 6918
		XXH64_avalanche(xxh_u64 hash); // 6919
	}
	XXH3_len_1to3_128b(const xxh_u8* input,
				size_t len,
				const xxh_u8* secret,
				XXH64_hash_t seed);  // 7032
	{
		const xxh_u32  input_lo; // 6931
		const xxh_u32  input_hi; // 6932
		const xxh_u64  input_64; // 6933
		const xxh_u64  bitflip; // 6934
		const xxh_u64  keyed; // 6935
		XXH_NAMESPACEXXH128_hash_t m128; // 6938
		XXH_read32(const void* ptr); // 2905
		XXH_readLE32(const void* ptr); // 6931
		XXH_read32(const void* ptr); // 2905
		XXH_readLE32(const void* ptr); // 6932
		XXH_mult64to128(xxh_u64 lhs,
				xxh_u64 rhs);  // 6938
		XXH_xorshift64(xxh_u64 v64,
				int shift);  // 4644
		XXH_xorshift64(xxh_u64 v64,
				int shift);  // 4646
		XXH3_avalanche(xxh_u64 h64); // 6946
		XXH_xorshift64(xxh_u64 v64,
				int shift);  // 6943
		XXH_xorshift64(xxh_u64 v64,
				int shift);  // 6945
	}
	XXH3_len_4to8_128b(const xxh_u8* input,
				size_t len,
				const xxh_u8* secret,
				XXH64_hash_t seed);  // 7031
	{
		XXH_NAMESPACEXXH128_hash_t h128; // 7033
		const xxh_u64  bitflipl; // 7034
		const xxh_u64  bitfliph; // 7035
	}
	XXH3_len_0to16_128b(const xxh_u8* input,
				size_t len,
				const xxh_u8* secret,
				XXH64_hash_t seed);  // 7262
	{
		XXH_NAMESPACEXXH128_hash_t acc; // 7065
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
				xxh_u64 seed64);  // 7049
		XXH_read64(const void* ptr); // 3466
		XXH_readLE64(const void* ptr); // 7050
		XXH_read64(const void* ptr); // 3466
		XXH_readLE64(const void* ptr); // 7050
		{
			const xxh_u64  input_lo; // 4814
			const xxh_u64  input_hi; // 4815
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
				XXH64_hash_t seed);  // 7083
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
				xxh_u64 seed64);  // 7049
		XXH_read64(const void* ptr); // 3466
		XXH_readLE64(const void* ptr); // 7050
		XXH_read64(const void* ptr); // 3466
		XXH_readLE64(const void* ptr); // 7050
		{
			const xxh_u64  input_lo; // 4814
			const xxh_u64  input_hi; // 4815
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
				XXH64_hash_t seed);  // 7085
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
				xxh_u64 seed64);  // 7049
		XXH_read64(const void* ptr); // 3466
		XXH_readLE64(const void* ptr); // 7050
		XXH_read64(const void* ptr); // 3466
		XXH_readLE64(const void* ptr); // 7050
		{
			const xxh_u64  input_lo; // 4814
			const xxh_u64  input_hi; // 4815
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
				XXH64_hash_t seed);  // 7087
		{
			XXH_NAMESPACEXXH128_hash_t h128; // 7089
			XXH_xorshift64(xxh_u64 v64,
					int shift);  // 4644
			XXH_xorshift64(xxh_u64 v64,
					int shift);  // 4646
			XXH3_avalanche(xxh_u64 h64); // 7094
			XXH_xorshift64(xxh_u64 v64,
					int shift);  // 4644
			XXH_xorshift64(xxh_u64 v64,
					int shift);  // 4646
			XXH3_avalanche(xxh_u64 h64); // 7095
		}
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
				xxh_u64 seed64);  // 7049
		XXH_read64(const void* ptr); // 3466
		XXH_readLE64(const void* ptr); // 7050
		XXH_read64(const void* ptr); // 3466
		XXH_readLE64(const void* ptr); // 7050
		{
			const xxh_u64  input_lo; // 4814
			const xxh_u64  input_hi; // 4815
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
				XXH64_hash_t seed);  // 7081
	}
	XXH3_len_17to128_128b(const xxh_u8* input,
				size_t len,
				const xxh_u8* secret,
				size_t secretSize,
				XXH64_hash_t seed);  // 7264
	XXH3_hashLong_128b_defaultSecret_selection(const void* input,
							size_t len,
							XXH64_hash_t seed64,
							const void* secret,
							size_t secretLen);  // 7267
	XXH3_128bits_internal(const void* input,
				size_t len,
				XXH64_hash_t seed64,
				const void* secret,
				size_t secretLen,
				XXH3_hashLong128_f f_hl128);  // 775
} /* size: 0, inline expansions: 7 (0 bytes) */

// <0006D8EF> tier0/xxh_x86dispatch.c:779
XXH_NAMESPACEXXH128_hash_t XXH3_hashLong_128b_withSeed_selection(const void* input, size_t len, XXH64_hash_t seed64, const void* secret, size_t secretLen)
{
} /* size: 0 */

// <0006C0E8> tier0/xxh_x86dispatch.c:788
// variables: 43
// function calls: 99
XXH_NAMESPACEXXH128_hash_t XXH3_128bits_withSeed_dispatch(const void* input, size_t len, XXH64_hash_t seed)
{
	{
		const xxh_u64  bitflipl; // 6957
		const xxh_u64  bitfliph; // 6958
		const xxh_u64  input_lo; // 6959
		xxh_u64 input_hi; // 6960
		XXH_NAMESPACEXXH128_hash_t m128; // 6961
		XXH_read64(const void* ptr); // 3466
		XXH_readLE64(const void* ptr); // 6959
		XXH_read64(const void* ptr); // 3466
		XXH_readLE64(const void* ptr); // 6960
		XXH_mult64to128(xxh_u64 lhs,
				xxh_u64 rhs);  // 6961
		{
			XXH_NAMESPACEXXH128_hash_t h128; // 7014
			XXH_mult64to128(xxh_u64 lhs,
					xxh_u64 rhs);  // 7014
			XXH_xorshift64(xxh_u64 v64,
					int shift);  // 4644
			XXH_xorshift64(xxh_u64 v64,
					int shift);  // 4646
			XXH3_avalanche(xxh_u64 h64); // 7017
			XXH_xorshift64(xxh_u64 v64,
					int shift);  // 4644
			XXH_xorshift64(xxh_u64 v64,
					int shift);  // 4646
			XXH3_avalanche(xxh_u64 h64); // 7018
		}
	}
	XXH3_len_9to16_128b(const xxh_u8* input,
				size_t len,
				const xxh_u8* secret,
				XXH64_hash_t seed);  // 7030
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
		XXH64_avalanche(xxh_u64 hash); // 6918
		XXH64_avalanche(xxh_u64 hash); // 6919
	}
	XXH3_len_1to3_128b(const xxh_u8* input,
				size_t len,
				const xxh_u8* secret,
				XXH64_hash_t seed);  // 7032
	{
		XXH_NAMESPACEXXH128_hash_t h128; // 7033
		const xxh_u64  bitflipl; // 7034
		const xxh_u64  bitfliph; // 7035
		XXH64_avalanche(xxh_u64 hash); // 7037
		XXH64_avalanche(xxh_u64 hash); // 7036
	}
	{
		const xxh_u32  input_lo; // 6931
		const xxh_u32  input_hi; // 6932
		const xxh_u64  input_64; // 6933
		const xxh_u64  bitflip; // 6934
		const xxh_u64  keyed; // 6935
		XXH_NAMESPACEXXH128_hash_t m128; // 6938
		XXH_read32(const void* ptr); // 2905
		XXH_readLE32(const void* ptr); // 6931
		XXH_read32(const void* ptr); // 2905
		XXH_readLE32(const void* ptr); // 6932
		XXH_mult64to128(xxh_u64 lhs,
				xxh_u64 rhs);  // 6938
		XXH_xorshift64(xxh_u64 v64,
				int shift);  // 6943
		XXH_xorshift64(xxh_u64 v64,
				int shift);  // 6945
		XXH_xorshift64(xxh_u64 v64,
				int shift);  // 4644
		XXH_xorshift64(xxh_u64 v64,
				int shift);  // 4646
		XXH3_avalanche(xxh_u64 h64); // 6946
	}
	XXH3_len_4to8_128b(const xxh_u8* input,
				size_t len,
				const xxh_u8* secret,
				XXH64_hash_t seed);  // 7031
	XXH3_len_0to16_128b(const xxh_u8* input,
				size_t len,
				const xxh_u8* secret,
				XXH64_hash_t seed);  // 7262
	{
		XXH_NAMESPACEXXH128_hash_t acc; // 7065
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
				xxh_u64 seed64);  // 7049
		XXH_read64(const void* ptr); // 3466
		XXH_readLE64(const void* ptr); // 7050
		XXH_read64(const void* ptr); // 3466
		XXH_readLE64(const void* ptr); // 7050
		{
			const xxh_u64  input_lo; // 4814
			const xxh_u64  input_hi; // 4815
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
				XXH64_hash_t seed);  // 7083
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
				xxh_u64 seed64);  // 7049
		XXH_read64(const void* ptr); // 3466
		XXH_readLE64(const void* ptr); // 7050
		XXH_read64(const void* ptr); // 3466
		XXH_readLE64(const void* ptr); // 7050
		{
			const xxh_u64  input_lo; // 4814
			const xxh_u64  input_hi; // 4815
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
				XXH64_hash_t seed);  // 7085
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
				xxh_u64 seed64);  // 7049
		XXH_read64(const void* ptr); // 3466
		XXH_readLE64(const void* ptr); // 7050
		XXH_read64(const void* ptr); // 3466
		XXH_readLE64(const void* ptr); // 7050
		{
			const xxh_u64  input_lo; // 4814
			const xxh_u64  input_hi; // 4815
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
				XXH64_hash_t seed);  // 7087
		{
			XXH_NAMESPACEXXH128_hash_t h128; // 7089
			XXH_xorshift64(xxh_u64 v64,
					int shift);  // 4644
			XXH_xorshift64(xxh_u64 v64,
					int shift);  // 4646
			XXH3_avalanche(xxh_u64 h64); // 7094
			XXH_xorshift64(xxh_u64 v64,
					int shift);  // 4644
			XXH_xorshift64(xxh_u64 v64,
					int shift);  // 4646
			XXH3_avalanche(xxh_u64 h64); // 7095
		}
		{
			const xxh_u64  input_lo; // 4814
			const xxh_u64  input_hi; // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4814
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
				XXH64_hash_t seed);  // 7081
	}
	XXH3_len_17to128_128b(const xxh_u8* input,
				size_t len,
				const xxh_u8* secret,
				size_t secretSize,
				XXH64_hash_t seed);  // 7264
	XXH3_hashLong_128b_withSeed_selection(const void* input,
						size_t len,
						XXH64_hash_t seed64,
						const void* secret,
						size_t secretLen);  // 7267
	XXH3_128bits_internal(const void* input,
				size_t len,
				XXH64_hash_t seed64,
				const void* secret,
				size_t secretLen,
				XXH3_hashLong128_f f_hl128);  // 790
} /* size: 0, inline expansions: 7 (0 bytes) */

// <0006C094> tier0/xxh_x86dispatch.c:794
XXH_NAMESPACEXXH128_hash_t XXH3_hashLong_128b_withSecret_selection(const void* input, size_t len, XXH64_hash_t seed64, const void* secret, size_t secretLen)
{
} /* size: 0 */

// <00069C5A> tier0/xxh_x86dispatch.c:803
// variables: 43
// function calls: 159
XXH_NAMESPACEXXH128_hash_t XXH3_128bits_withSecret_dispatch(const void* input, size_t len, const void* secret, size_t secretLen)
{
	{
		const xxh_u64  bitflipl; // 6957
		const xxh_u64  bitfliph; // 6958
		const xxh_u64  input_lo; // 6959
		xxh_u64 input_hi; // 6960
		XXH_NAMESPACEXXH128_hash_t m128; // 6961
		XXH_read64(const void* ptr); // 3466
		XXH_readLE64(const void* ptr); // 6957
		XXH_read64(const void* ptr); // 3466
		XXH_readLE64(const void* ptr); // 6957
		XXH_read64(const void* ptr); // 3466
		XXH_readLE64(const void* ptr); // 6958
		XXH_read64(const void* ptr); // 3466
		XXH_readLE64(const void* ptr); // 6958
		XXH_read64(const void* ptr); // 3466
		XXH_readLE64(const void* ptr); // 6959
		XXH_read64(const void* ptr); // 3466
		XXH_readLE64(const void* ptr); // 6960
		XXH_mult64to128(xxh_u64 lhs,
				xxh_u64 rhs);  // 6961
		{
			XXH_NAMESPACEXXH128_hash_t h128; // 7014
			XXH_mult64to128(xxh_u64 lhs,
					xxh_u64 rhs);  // 7014
			XXH_xorshift64(xxh_u64 v64,
					int shift);  // 4644
			XXH_xorshift64(xxh_u64 v64,
					int shift);  // 4646
			XXH3_avalanche(xxh_u64 h64); // 7017
			XXH_xorshift64(xxh_u64 v64,
					int shift);  // 4644
			XXH_xorshift64(xxh_u64 v64,
					int shift);  // 4646
			XXH3_avalanche(xxh_u64 h64); // 7018
		}
	}
	XXH3_len_9to16_128b(const xxh_u8* input,
				size_t len,
				const xxh_u8* secret,
				XXH64_hash_t seed);  // 7030
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
		XXH64_avalanche(xxh_u64 hash); // 6918
		XXH_read32(const void* ptr); // 2905
		XXH_readLE32(const void* ptr); // 6913
		XXH_read32(const void* ptr); // 2905
		XXH_readLE32(const void* ptr); // 6913
		XXH_read32(const void* ptr); // 2905
		XXH_readLE32(const void* ptr); // 6914
		XXH_read32(const void* ptr); // 2905
		XXH_readLE32(const void* ptr); // 6914
		XXH64_avalanche(xxh_u64 hash); // 6919
	}
	XXH3_len_1to3_128b(const xxh_u8* input,
				size_t len,
				const xxh_u8* secret,
				XXH64_hash_t seed);  // 7032
	{
		XXH_NAMESPACEXXH128_hash_t h128; // 7033
		const xxh_u64  bitflipl; // 7034
		const xxh_u64  bitfliph; // 7035
		XXH64_avalanche(xxh_u64 hash); // 7037
		XXH_read64(const void* ptr); // 3466
		XXH_readLE64(const void* ptr); // 7034
		XXH_read64(const void* ptr); // 3466
		XXH_readLE64(const void* ptr); // 7034
		XXH64_avalanche(xxh_u64 hash); // 7036
		XXH_read64(const void* ptr); // 3466
		XXH_readLE64(const void* ptr); // 7035
		XXH_read64(const void* ptr); // 3466
		XXH_readLE64(const void* ptr); // 7035
	}
	{
		const xxh_u32  input_lo; // 6931
		const xxh_u32  input_hi; // 6932
		const xxh_u64  input_64; // 6933
		const xxh_u64  bitflip; // 6934
		const xxh_u64  keyed; // 6935
		XXH_NAMESPACEXXH128_hash_t m128; // 6938
		XXH_read32(const void* ptr); // 2905
		XXH_readLE32(const void* ptr); // 6931
		XXH_read32(const void* ptr); // 2905
		XXH_readLE32(const void* ptr); // 6932
		XXH_read64(const void* ptr); // 3466
		XXH_readLE64(const void* ptr); // 6934
		XXH_read64(const void* ptr); // 3466
		XXH_readLE64(const void* ptr); // 6934
		XXH_mult64to128(xxh_u64 lhs,
				xxh_u64 rhs);  // 6938
		XXH_xorshift64(xxh_u64 v64,
				int shift);  // 6943
		XXH_xorshift64(xxh_u64 v64,
				int shift);  // 6945
		XXH_xorshift64(xxh_u64 v64,
				int shift);  // 4644
		XXH_xorshift64(xxh_u64 v64,
				int shift);  // 4646
		XXH3_avalanche(xxh_u64 h64); // 6946
	}
	XXH3_len_4to8_128b(const xxh_u8* input,
				size_t len,
				const xxh_u8* secret,
				XXH64_hash_t seed);  // 7031
	XXH3_len_0to16_128b(const xxh_u8* input,
				size_t len,
				const xxh_u8* secret,
				XXH64_hash_t seed);  // 7262
	{
		XXH_NAMESPACEXXH128_hash_t acc; // 7065
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
				XXH64_hash_t seed);  // 7083
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
				XXH64_hash_t seed);  // 7085
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
				XXH64_hash_t seed);  // 7087
		{
			XXH_NAMESPACEXXH128_hash_t h128; // 7089
			XXH_xorshift64(xxh_u64 v64,
					int shift);  // 4644
			XXH_xorshift64(xxh_u64 v64,
					int shift);  // 4646
			XXH3_avalanche(xxh_u64 h64); // 7094
			XXH_xorshift64(xxh_u64 v64,
					int shift);  // 4644
			XXH_xorshift64(xxh_u64 v64,
					int shift);  // 4646
			XXH3_avalanche(xxh_u64 h64); // 7095
		}
		{
			const xxh_u64  input_lo; // 4814
			const xxh_u64  input_hi; // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4814
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
				XXH64_hash_t seed);  // 7081
	}
	XXH3_len_17to128_128b(const xxh_u8* input,
				size_t len,
				const xxh_u8* secret,
				size_t secretSize,
				XXH64_hash_t seed);  // 7264
	XXH3_hashLong_128b_withSecret_selection(const void* input,
						size_t len,
						XXH64_hash_t seed64,
						const void* secret,
						size_t secretLen);  // 7267
	XXH3_128bits_internal(const void* input,
				size_t len,
				XXH64_hash_t seed64,
				const void* secret,
				size_t secretLen,
				XXH3_hashLong128_f f_hl128);  // 805
} /* size: 0, inline expansions: 7 (0 bytes) */

// <00069BD4> tier0/xxh_x86dispatch.c:809
XXH_NAMESPACEXXH_errorcode XXH3_128bits_update_dispatch(XXH_NAMESPACEXXH3_state_t* state, const void* input, size_t len)
{
} /* size: 0 */

