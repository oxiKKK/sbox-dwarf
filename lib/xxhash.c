
//
// lib/xxhash.c
//
//	referenced by: libengine2.so
//
//	functions: 42
//

// <057E66EF> lib/xxhash.c:108
void* XXH_malloc(size_t s)
{
} /* size: 0 */

// <057E66D7> lib/xxhash.c:109
void XXH_free(void* p)
{
} /* size: 0 */

// <057E6631> lib/xxhash.c:112
void* XXH_memcpy(void* dest, const void* src, size_t size)
{
} /* size: 0 */

// <057E6607> lib/xxhash.c:174
// variable: 1
U32 XXH_read32(const void* memPtr)
{
	U32 val; // 176
} /* size: 0, variables: 1 */

// <057E6542> lib/xxhash.c:220
// variable: 1
int XXH_isLittleEndian(void)
{
	const union   one; // 222
} /* size: 0, variables: 1 */

// <057E650C> lib/xxhash.c:234
inline U32 XXH_readLE32_align(const void* ptr, XXH_endianness endian, XXH_alignment align)
{
} /* size: 0 */

// <057E64E2> lib/xxhash.c:242
inline U32 XXH_readLE32(const void* ptr, XXH_endianness endian)
{
} /* size: 0 */

// <057E64C4> lib/xxhash.c:247
U32 XXH_readBE32(const void* ptr)
{
} /* size: 0 */

// <057E64A2> lib/xxhash.c:257
unsigned int XXH_versionNumber(void)
{
} /* size: 0 */

// <057E6475> lib/xxhash.c:269
U32 XXH32_round(U32 seed, U32 input)
{
} /* size: 0 */

// <057E6455> lib/xxhash.c:278
U32 XXH32_avalanche(U32 h32)
{
} /* size: 0 */

// <057E7604> lib/xxhash.c:291
// variable: 1
// function calls: 15
U32 XXH32_finalize(U32 h32, const void* ptr, size_t len, XXH_alignment align, XXH_endianness endian)
{
	const BYTE* p; // 295
	XXH_readLE32_align(const void* ptr,
				XXH_endianness endian,
				XXH_alignment align);  // 332
	XXH_readLE32_align(const void* ptr,
				XXH_endianness endian,
				XXH_alignment align);  // 334
	XXH_readLE32_align(const void* ptr,
				XXH_endianness endian,
				XXH_alignment align);  // 336
	XXH32_avalanche(U32 h32); // 344
	XXH_readLE32_align(const void* ptr,
				XXH_endianness endian,
				XXH_alignment align);  // 315
	XXH_readLE32_align(const void* ptr,
				XXH_endianness endian,
				XXH_alignment align);  // 317
	XXH_readLE32_align(const void* ptr,
				XXH_endianness endian,
				XXH_alignment align);  // 319
	XXH32_avalanche(U32 h32); // 330
	XXH_readLE32_align(const void* ptr,
				XXH_endianness endian,
				XXH_alignment align);  // 323
	XXH_readLE32_align(const void* ptr,
				XXH_endianness endian,
				XXH_alignment align);  // 325
	XXH_readLE32_align(const void* ptr,
				XXH_endianness endian,
				XXH_alignment align);  // 327
	XXH_readLE32_align(const void* ptr,
				XXH_endianness endian,
				XXH_alignment align);  // 308
	XXH_readLE32_align(const void* ptr,
				XXH_endianness endian,
				XXH_alignment align);  // 310
	XXH_readLE32_align(const void* ptr,
				XXH_endianness endian,
				XXH_alignment align);  // 312
	XXH32_avalanche(U32 h32); // 313
} /* size: 488, variables: 1, inline expansions: 15 (74 bytes) */

// <057E63F6> lib/xxhash.c:291
// variable: 1
U32 XXH32_finalize(U32 h32, const void* ptr, size_t len, XXH_endianness endian, XXH_alignment align)
{
	const BYTE* p; // 295
} /* size: 0, variables: 1 */

// <057E633E> lib/xxhash.c:352
// variables: 8
inline U32 XXH32_endian_align(const void* input, size_t len, U32 seed, XXH_endianness endian, XXH_alignment align)
{
	const BYTE* p; // 355
	const BYTE* bEnd; // 356
	U32 h32; // 357
	{
		const BYTE* limit; // 367
		U32 v1; // 368
		U32 v2; // 369
		U32 v3; // 370
		U32 v4; // 371
	}
} /* size: 0, variables: 3 */

// <057E5D7D> lib/xxhash.c:422
// function call: 1
XXH32_state_t* XXH32_createState(void)
{
	XXH_malloc(size_t s); // 424
} /* size: 0, inline expansions: 1 (0 bytes) */

// <057E5D5C> lib/xxhash.c:426
XXH_errorcode XXH32_freeState(XXH32_state_t* statePtr)
{
} /* size: 0 */

// <057E5CD0> lib/xxhash.c:432
// function call: 1
void XXH32_copyState(XXH32_state_t* dstState, const XXH32_state_t* srcState)
{
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 434
} /* size: 0, inline expansions: 1 (0 bytes) */

// <057E5B21> lib/xxhash.c:452
// variables: 8
inline XXH_errorcode XXH32_update_endian(XXH32_state_t* state, const void* input, size_t len, XXH_endianness endian)
{
	{
		const BYTE* p; // 461
		const BYTE* bEnd; // 462
		{
			const U32* p32; // 475
		}
		{
			const BYTE* limit; // 486
			U32 v1; // 487
			U32 v2; // 488
			U32 v3; // 489
			U32 v4; // 490
		}
	}
} /* size: 0 */

// <057E5554> lib/xxhash.c:527
// variable: 1
inline U32 XXH32_digest_endian(const XXH32_state_t* state, XXH_endianness endian)
{
	U32 h32; // 529
} /* size: 0, variables: 1 */

// <057E53A8> lib/xxhash.c:565
// function calls: 2
void XXH32_canonicalFromHash(XXH32_canonical_t* dst, XXH32_hash_t hash)
{
	{
	}
	XXH_isLittleEndian(void); // 568
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 569
} /* size: 0, inline expansions: 2 (0 bytes) */

// <057E5290> lib/xxhash.c:572
// function calls: 4
XXH32_hash_t XXH32_hashFromCanonical(const XXH32_canonical_t* src)
{
	XXH_isLittleEndian(void); // 249
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 177
	XXH_read32(const void* memPtr); // 249
	XXH_readBE32(const void* ptr); // 574
} /* size: 0, inline expansions: 4 (0 bytes) */

// <057E5263> lib/xxhash.c:618
// variable: 1
U64 XXH_read64(const void* memPtr)
{
	U64 val; // 620
} /* size: 0, variables: 1 */

// <057E5229> lib/xxhash.c:645
inline U64 XXH_readLE64_align(const void* ptr, XXH_endianness endian, XXH_alignment align)
{
} /* size: 0 */

// <057E51FC> lib/xxhash.c:653
inline U64 XXH_readLE64(const void* ptr, XXH_endianness endian)
{
} /* size: 0 */

// <057E51DC> lib/xxhash.c:658
U64 XXH_readBE64(const void* ptr)
{
} /* size: 0 */

// <057E51AF> lib/xxhash.c:672
U64 XXH64_round(U64 acc, U64 input)
{
} /* size: 0 */

// <057E5182> lib/xxhash.c:680
U64 XXH64_mergeRound(U64 acc, U64 val)
{
} /* size: 0 */

// <057E5162> lib/xxhash.c:688
U64 XXH64_avalanche(U64 h64)
{
} /* size: 0 */

// <057E670B> lib/xxhash.c:702
// variables: 25
// function calls: 50
U64 XXH64_finalize(U64 h64, const void* ptr, size_t len, XXH_alignment align, XXH_endianness endian)
{
	const BYTE* p; // 705
	{
		const U64  k1; // 788
		XXH64_round(U64 acc,
				U64 input);  // 788
	}
	{
		const U64  k1; // 790
		XXH_readLE64_align(const void* ptr,
					XXH_endianness endian,
					XXH_alignment align);  // 790
		XXH64_round(U64 acc,
				U64 input);  // 790
	}
	{
		const U64  k1; // 792
		XXH_readLE64_align(const void* ptr,
					XXH_endianness endian,
					XXH_alignment align);  // 792
		XXH64_round(U64 acc,
				U64 input);  // 792
	}
	XXH_readLE32_align(const void* ptr,
				XXH_endianness endian,
				XXH_alignment align);  // 794
	XXH64_avalanche(U64 h64); // 802
	{
		const U64  k1; // 767
		XXH64_round(U64 acc,
				U64 input);  // 767
	}
	{
		const U64  k1; // 769
		XXH_readLE64_align(const void* ptr,
					XXH_endianness endian,
					XXH_alignment align);  // 769
		XXH64_round(U64 acc,
				U64 input);  // 769
	}
	{
		const U64  k1; // 771
		XXH_readLE64_align(const void* ptr,
					XXH_endianness endian,
					XXH_alignment align);  // 771
		XXH64_round(U64 acc,
				U64 input);  // 771
	}
	XXH_readLE32_align(const void* ptr,
				XXH_endianness endian,
				XXH_alignment align);  // 773
	XXH64_avalanche(U64 h64); // 776
	{
		const U64  k1; // 731
		XXH64_round(U64 acc,
				U64 input);  // 731
	}
	{
		const U64  k1; // 733
		XXH_readLE64_align(const void* ptr,
					XXH_endianness endian,
					XXH_alignment align);  // 733
		XXH64_round(U64 acc,
				U64 input);  // 733
	}
	{
		const U64  k1; // 735
		XXH_readLE64_align(const void* ptr,
					XXH_endianness endian,
					XXH_alignment align);  // 735
		XXH64_round(U64 acc,
				U64 input);  // 735
	}
	XXH_readLE32_align(const void* ptr,
				XXH_endianness endian,
				XXH_alignment align);  // 737
	XXH64_avalanche(U64 h64); // 738
	{
		const U64  k1; // 748
		XXH64_round(U64 acc,
				U64 input);  // 748
	}
	{
		const U64  k1; // 750
		XXH_readLE64_align(const void* ptr,
					XXH_endianness endian,
					XXH_alignment align);  // 750
		XXH64_round(U64 acc,
				U64 input);  // 750
	}
	{
		const U64  k1; // 752
		XXH_readLE64_align(const void* ptr,
					XXH_endianness endian,
					XXH_alignment align);  // 752
		XXH64_round(U64 acc,
				U64 input);  // 752
	}
	XXH_readLE32_align(const void* ptr,
				XXH_endianness endian,
				XXH_alignment align);  // 754
	{
		const U64  k1; // 724
		XXH_readLE64_align(const void* ptr,
					XXH_endianness endian,
					XXH_alignment align);  // 724
		XXH64_round(U64 acc,
				U64 input);  // 724
	}
	{
		const U64  k1; // 726
		XXH_readLE64_align(const void* ptr,
					XXH_endianness endian,
					XXH_alignment align);  // 726
		XXH64_round(U64 acc,
				U64 input);  // 726
	}
	{
		const U64  k1; // 728
		XXH_readLE64_align(const void* ptr,
					XXH_endianness endian,
					XXH_alignment align);  // 728
		XXH64_round(U64 acc,
				U64 input);  // 728
	}
	XXH64_avalanche(U64 h64); // 729
	{
		const U64  k1; // 740
		XXH64_round(U64 acc,
				U64 input);  // 740
	}
	{
		const U64  k1; // 742
		XXH_readLE64_align(const void* ptr,
					XXH_endianness endian,
					XXH_alignment align);  // 742
		XXH64_round(U64 acc,
				U64 input);  // 742
	}
	{
		const U64  k1; // 744
		XXH_readLE64_align(const void* ptr,
					XXH_endianness endian,
					XXH_alignment align);  // 744
		XXH64_round(U64 acc,
				U64 input);  // 744
	}
	XXH64_avalanche(U64 h64); // 786
	{
		const U64  k1; // 758
		XXH64_round(U64 acc,
				U64 input);  // 758
	}
	{
		const U64  k1; // 760
		XXH_readLE64_align(const void* ptr,
					XXH_endianness endian,
					XXH_alignment align);  // 760
		XXH64_round(U64 acc,
				U64 input);  // 760
	}
	{
		const U64  k1; // 762
		XXH_readLE64_align(const void* ptr,
					XXH_endianness endian,
					XXH_alignment align);  // 762
		XXH64_round(U64 acc,
				U64 input);  // 762
	}
	{
		const U64  k1; // 778
		XXH64_round(U64 acc,
				U64 input);  // 778
	}
	{
		const U64  k1; // 780
		XXH_readLE64_align(const void* ptr,
					XXH_endianness endian,
					XXH_alignment align);  // 780
		XXH64_round(U64 acc,
				U64 input);  // 780
	}
	{
		const U64  k1; // 782
		XXH_readLE64_align(const void* ptr,
					XXH_endianness endian,
					XXH_alignment align);  // 782
		XXH64_round(U64 acc,
				U64 input);  // 782
	}
} /* size: 0, variables: 1, inline expansions: 9 (0 bytes) */

// <057E4F57> lib/xxhash.c:702
// variables: 25
U64 XXH64_finalize(U64 h64, const void* ptr, size_t len, XXH_endianness endian, XXH_alignment align)
{
	const BYTE* p; // 705
	{
		const U64  k1; // 724
	}
	{
		const U64  k1; // 726
	}
	{
		const U64  k1; // 728
	}
	{
		const U64  k1; // 731
	}
	{
		const U64  k1; // 733
	}
	{
		const U64  k1; // 735
	}
	{
		const U64  k1; // 740
	}
	{
		const U64  k1; // 742
	}
	{
		const U64  k1; // 744
	}
	{
		const U64  k1; // 748
	}
	{
		const U64  k1; // 750
	}
	{
		const U64  k1; // 752
	}
	{
		const U64  k1; // 758
	}
	{
		const U64  k1; // 760
	}
	{
		const U64  k1; // 762
	}
	{
		const U64  k1; // 767
	}
	{
		const U64  k1; // 769
	}
	{
		const U64  k1; // 771
	}
	{
		const U64  k1; // 778
	}
	{
		const U64  k1; // 780
	}
	{
		const U64  k1; // 782
	}
	{
		const U64  k1; // 788
	}
	{
		const U64  k1; // 790
	}
	{
		const U64  k1; // 792
	}
} /* size: 0, variables: 1 */

// <057E4E9F> lib/xxhash.c:811
// variables: 8
inline U64 XXH64_endian_align(const void* input, size_t len, U64 seed, XXH_endianness endian, XXH_alignment align)
{
	const BYTE* p; // 814
	const BYTE* bEnd; // 815
	U64 h64; // 816
	{
		const BYTE* limit; // 826
		U64 v1; // 827
		U64 v2; // 828
		U64 v3; // 829
		U64 v4; // 830
	}
} /* size: 0, variables: 3 */

// <057E4806> lib/xxhash.c:855
// variables: 6
// function calls: 26
long long unsigned int XXH64(const void* input, size_t len, long long unsigned int seed)
{
	XXH_endianness endian_detected; // 864
	{
		const BYTE* limit; // 826
		U64 v1; // 827
		U64 v2; // 828
		U64 v3; // 829
		U64 v4; // 830
		XXH64_round(U64 acc,
				U64 input);  // 833
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 621
		XXH_read64(const void* memPtr); // 648
		XXH_readLE64_align(const void* ptr,
					XXH_endianness endian,
					XXH_alignment align);  // 833
		XXH64_round(U64 acc,
				U64 input);  // 834
		XXH64_round(U64 acc,
				U64 input);  // 835
		XXH64_round(U64 acc,
				U64 input);  // 836
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 621
		XXH_read64(const void* memPtr); // 648
		XXH_readLE64_align(const void* ptr,
					XXH_endianness endian,
					XXH_alignment align);  // 834
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 621
		XXH_read64(const void* memPtr); // 648
		XXH_readLE64_align(const void* ptr,
					XXH_endianness endian,
					XXH_alignment align);  // 835
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 621
		XXH_read64(const void* memPtr); // 648
		XXH_readLE64_align(const void* ptr,
					XXH_endianness endian,
					XXH_alignment align);  // 836
		XXH64_round(U64 acc,
				U64 input);  // 682
		XXH64_mergeRound(U64 acc,
				U64 val);  // 840
		XXH64_round(U64 acc,
				U64 input);  // 682
		XXH64_mergeRound(U64 acc,
				U64 val);  // 841
		XXH64_round(U64 acc,
				U64 input);  // 682
		XXH64_mergeRound(U64 acc,
				U64 val);  // 842
		XXH64_round(U64 acc,
				U64 input);  // 682
		XXH64_mergeRound(U64 acc,
				U64 val);  // 843
	}
	XXH64_endian_align(const void* input,
				size_t len,
				U64 seed,
				XXH_endianness endian,
				XXH_alignment align);  // 875
	XXH_isLittleEndian(void); // 864
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <057E47A0> lib/xxhash.c:883
// function call: 1
XXH64_state_t* XXH64_createState(void)
{
	XXH_malloc(size_t s); // 885
} /* size: 0, inline expansions: 1 (0 bytes) */

// <057E4780> lib/xxhash.c:887
XXH_errorcode XXH64_freeState(XXH64_state_t* statePtr)
{
} /* size: 0 */

// <057E46F4> lib/xxhash.c:893
// function call: 1
void XXH64_copyState(XXH64_state_t* dstState, const XXH64_state_t* srcState)
{
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 895
} /* size: 0, inline expansions: 1 (0 bytes) */

// <057E45FE> lib/xxhash.c:898
// variable: 1
// function calls: 2
XXH_errorcode XXH64_reset(XXH64_state_t* statePtr, long long unsigned int seed)
{
	XXH64_state_t state; // 900
	memset(void* __dest,
		int __ch,
		size_t __len);  // 901
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 907
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <057E4553> lib/xxhash.c:912
// variables: 7
inline XXH_errorcode XXH64_update_endian(XXH64_state_t* state, const void* input, size_t len, XXH_endianness endian)
{
	{
		const BYTE* p; // 921
		const BYTE* bEnd; // 922
		{
			const BYTE* limit; // 943
			U64 v1; // 944
			U64 v2; // 945
			U64 v3; // 946
			U64 v4; // 947
		}
	}
} /* size: 0 */

// <057E388E> lib/xxhash.c:971
// variables: 8
// function calls: 48
XXH_errorcode XXH64_update(XXH64_state_t* state_in, const void* input, size_t len)
{
	XXH_endianness endian_detected; // 973
	XXH_isLittleEndian(void); // 973
	{
		const BYTE* p; // 921
		const BYTE* bEnd; // 922
		{
			const BYTE* limit; // 943
			U64 v1; // 944
			U64 v2; // 945
			U64 v3; // 946
			U64 v4; // 947
			XXH64_round(U64 acc,
					U64 input);  // 950
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 621
			XXH_read64(const void* memPtr); // 648
			XXH_readLE64_align(const void* ptr,
						XXH_endianness endian,
						XXH_alignment align);  // 655
			XXH_readLE64(const void* ptr,
					XXH_endianness endian);  // 950
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 621
			XXH_read64(const void* memPtr); // 648
			XXH_readLE64_align(const void* ptr,
						XXH_endianness endian,
						XXH_alignment align);  // 655
			XXH_readLE64(const void* ptr,
					XXH_endianness endian);  // 951
			XXH64_round(U64 acc,
					U64 input);  // 951
			XXH64_round(U64 acc,
					U64 input);  // 952
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 621
			XXH_read64(const void* memPtr); // 648
			XXH_readLE64_align(const void* ptr,
						XXH_endianness endian,
						XXH_alignment align);  // 655
			XXH_readLE64(const void* ptr,
					XXH_endianness endian);  // 952
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 621
			XXH_read64(const void* memPtr); // 648
			XXH_readLE64_align(const void* ptr,
						XXH_endianness endian,
						XXH_alignment align);  // 655
			XXH_readLE64(const void* ptr,
					XXH_endianness endian);  // 953
			XXH64_round(U64 acc,
					U64 input);  // 953
		}
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 112
		XXH_memcpy(void* dest,
				const void* src,
				size_t size);  // 933
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 621
		XXH_read64(const void* memPtr); // 648
		XXH_readLE64_align(const void* ptr,
					XXH_endianness endian,
					XXH_alignment align);  // 655
		XXH_readLE64(const void* ptr,
				XXH_endianness endian);  // 934
		XXH64_round(U64 acc,
				U64 input);  // 934
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 621
		XXH_read64(const void* memPtr); // 648
		XXH_readLE64_align(const void* ptr,
					XXH_endianness endian,
					XXH_alignment align);  // 655
		XXH_readLE64(const void* ptr,
				XXH_endianness endian);  // 935
		XXH64_round(U64 acc,
				U64 input);  // 935
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 621
		XXH_read64(const void* memPtr); // 648
		XXH_readLE64_align(const void* ptr,
					XXH_endianness endian,
					XXH_alignment align);  // 655
		XXH_readLE64(const void* ptr,
				XXH_endianness endian);  // 936
		XXH64_round(U64 acc,
				U64 input);  // 936
		XXH64_round(U64 acc,
				U64 input);  // 937
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 621
		XXH_read64(const void* memPtr); // 648
		XXH_readLE64_align(const void* ptr,
					XXH_endianness endian,
					XXH_alignment align);  // 655
		XXH_readLE64(const void* ptr,
				XXH_endianness endian);  // 937
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 112
		XXH_memcpy(void* dest,
				const void* src,
				size_t size);  // 963
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 112
		XXH_memcpy(void* dest,
				const void* src,
				size_t size);  // 927
	}
	XXH64_update_endian(XXH64_state_t* state,
				const void* input,
				size_t len,
				XXH_endianness endian);  // 976
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <057E3822> lib/xxhash.c:981
// variables: 5
inline U64 XXH64_digest_endian(const XXH64_state_t* state, XXH_endianness endian)
{
	U64 h64; // 983
	{
		const U64  v1; // 986
		const U64  v2; // 987
		const U64  v3; // 988
		const U64  v4; // 989
	}
} /* size: 0, variables: 1 */

// <057E354F> lib/xxhash.c:1005
// variables: 5
// function calls: 10
long long unsigned int XXH64_digest(const XXH64_state_t* state_in)
{
	XXH_endianness endian_detected; // 1007
	XXH_isLittleEndian(void); // 1007
	{
		const U64  v1; // 986
		const U64  v2; // 987
		const U64  v3; // 988
		const U64  v4; // 989
		XXH64_round(U64 acc,
				U64 input);  // 682
		XXH64_mergeRound(U64 acc,
				U64 val);  // 992
		XXH64_round(U64 acc,
				U64 input);  // 682
		XXH64_mergeRound(U64 acc,
				U64 val);  // 993
		XXH64_round(U64 acc,
				U64 input);  // 682
		XXH64_mergeRound(U64 acc,
				U64 val);  // 994
		XXH64_round(U64 acc,
				U64 input);  // 682
		XXH64_mergeRound(U64 acc,
				U64 val);  // 995
	}
	XXH64_digest_endian(const XXH64_state_t* state,
				XXH_endianness endian);  // 1010
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <057E3479> lib/xxhash.c:1018
// function calls: 2
void XXH64_canonicalFromHash(XXH64_canonical_t* dst, XXH64_hash_t hash)
{
	{
	}
	XXH_isLittleEndian(void); // 1021
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 1022
} /* size: 0, inline expansions: 2 (0 bytes) */

// <057E335E> lib/xxhash.c:1025
// function calls: 4
XXH64_hash_t XXH64_hashFromCanonical(const XXH64_canonical_t* src)
{
	XXH_isLittleEndian(void); // 660
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 621
	XXH_read64(const void* memPtr); // 660
	XXH_readBE64(const void* ptr); // 1027
} /* size: 0, inline expansions: 4 (0 bytes) */

