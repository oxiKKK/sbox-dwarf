
//
// src/vertexcodec.cpp
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmeshsystem.so
//
//	functions: 45
//

// <063A4D8F> src/vertexcodec.cpp:140
// variable: 1
void getVertexBlockSize(size_t vertex_size)
{
	size_t result; // 144
} /* size: 0, variables: 1 */

// <063A4D70> src/vertexcodec.cpp:149
inline void rotate(unsigned int v, int r)
{
} /* size: 0 */

// <0639C738> src/vertexcodec.cpp:155
inline void zigzag<unsigned char>(unsigned char v)
{
} /* size: 0 */

// <0639C71C> src/vertexcodec.cpp:155
inline void zigzag<short unsigned int>(short unsigned int v)
{
} /* size: 0 */

// <0639C700> src/vertexcodec.cpp:161
inline void unzigzag<unsigned char>(unsigned char v)
{
} /* size: 0 */

// <0639C6E4> src/vertexcodec.cpp:161
inline void unzigzag<short unsigned int>(short unsigned int v)
{
} /* size: 0 */

// <063A4D3F> src/vertexcodec.cpp:180
// variable: 1
void encodeBytesGroupZero(const unsigned char* buffer)
{
	long long unsigned int v; // 184
} /* size: 0, variables: 1 */

// <063A555C> src/vertexcodec.cpp:190
// variables: 3
// function calls: 3
void encodeBytesGroupMeasure(const unsigned char* buffer, int bits)
{
	size_t result; // 200
	unsigned char sentinel; // 202
	{
		size_t i; // 204
	}
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 185
	encodeBytesGroupZero(const unsigned char* buffer); // 195
	encodeBytesGroupMeasure(const unsigned char* buffer,
				int bits);  // 190
} /* size: 0, variables: 2, inline expansions: 3 (0 bytes) */

// <063A4CF8> src/vertexcodec.cpp:190
// variables: 3
void encodeBytesGroupMeasure(const unsigned char* buffer, int bits)
{
	size_t result; // 200
	unsigned char sentinel; // 202
	{
		size_t i; // 204
	}
} /* size: 0, variables: 2 */

// <063A4C61> src/vertexcodec.cpp:210
// variables: 8
void encodeBytesGroup(unsigned char* data, const unsigned char* buffer, int bits)
{
	size_t byte_size; // 224
	unsigned char sentinel; // 229
	{
		size_t i; // 231
		{
			unsigned char byte; // 233
			{
				size_t k; // 235
				{
					unsigned char enc; // 237
				}
			}
		}
	}
	{
		size_t i; // 251
		{
			unsigned char v; // 253
		}
	}
} /* size: 0, variables: 2 */

// <063A4B80> src/vertexcodec.cpp:263
// variables: 11
void encodeBytes(unsigned char* data, unsigned char* data_end, const unsigned char* buffer, size_t buffer_size, const int* bits)
{
	unsigned char* header; // 267
	size_t header_size; // 270
	int last_bits; // 279
	{
		size_t i; // 281
		{
			int best_bitk; // 286
			size_t best_size; // 287
			size_t header_offset; // 301
			int best_bits; // 304
			unsigned char* next; // 305
			{
				int bitk; // 289
				{
					size_t size; // 291
				}
			}
		}
	}
} /* size: 0, variables: 3 */

// <0639CEA6> src/vertexcodec.cpp:324
// variables: 9
void encodeDeltas1<unsigned char, false>(unsigned char* buffer, const unsigned char* vertex_data, size_t vertex_count, size_t vertex_size, const unsigned char* last_vertex, size_t k, int rot)
{
	size_t k0; // 326
	int ks; // 327
	unsigned char p; // 329
	const unsigned char* vertex; // 333
	{
		size_t j; // 330
	}
	{
		size_t i; // 335
		{
			unsigned char v; // 337
			unsigned char d; // 341
			{
				size_t j; // 338
			}
		}
	}
} /* size: 0, variables: 4 */

// <0639CDBE> src/vertexcodec.cpp:324
// variables: 9
void encodeDeltas1<short unsigned int, false>(unsigned char* buffer, const unsigned char* vertex_data, size_t vertex_count, size_t vertex_size, const unsigned char* last_vertex, size_t k, int rot)
{
	size_t k0; // 326
	int ks; // 327
	short unsigned int p; // 329
	const unsigned char* vertex; // 333
	{
		size_t j; // 330
	}
	{
		size_t i; // 335
		{
			short unsigned int v; // 337
			short unsigned int d; // 341
			{
				size_t j; // 338
			}
		}
	}
} /* size: 0, variables: 4 */

// <0639CCD6> src/vertexcodec.cpp:324
// variables: 9
void encodeDeltas1<unsigned int, true>(unsigned char* buffer, const unsigned char* vertex_data, size_t vertex_count, size_t vertex_size, const unsigned char* last_vertex, size_t k, int rot)
{
	size_t k0; // 326
	int ks; // 327
	unsigned int p; // 329
	const unsigned char* vertex; // 333
	{
		size_t j; // 330
	}
	{
		size_t i; // 335
		{
			unsigned int v; // 337
			unsigned int d; // 341
			{
				size_t j; // 338
			}
		}
	}
} /* size: 0, variables: 4 */

// <063A4724> src/vertexcodec.cpp:349
// variables: 13
// function calls: 6
void encodeDeltas(unsigned char* buffer, const unsigned char* vertex_data, size_t vertex_count, size_t vertex_size, const unsigned char* last_vertex, size_t k, int channel)
{
	{
		size_t i; // 335
		{
			unsigned char v; // 337
			unsigned char d; // 341
			zigzag<unsigned char>(unsigned char v); // 341
		}
	}
	encodeDeltas1<unsigned char, false>(unsigned char* buffer,
						const unsigned char* vertex_data,
						size_t vertex_count,
						size_t vertex_size,
						const unsigned char* last_vertex,
						size_t k,
						int rot);  // 354
	{
		size_t j; // 330
	}
	{
		size_t i; // 335
		{
			unsigned int v; // 337
			unsigned int d; // 341
			{
				size_t j; // 338
			}
			rotate(unsigned int v,
				int r);  // 341
		}
	}
	encodeDeltas1<unsigned int, true>(unsigned char* buffer,
						const unsigned char* vertex_data,
						size_t vertex_count,
						size_t vertex_size,
						const unsigned char* last_vertex,
						size_t k,
						int rot);  // 358
	{
		size_t j; // 330
	}
	{
		size_t i; // 335
		{
			short unsigned int v; // 337
			short unsigned int d; // 341
			{
				size_t j; // 338
			}
			zigzag<short unsigned int>(short unsigned int v); // 341
		}
	}
	encodeDeltas1<short unsigned int, false>(unsigned char* buffer,
						const unsigned char* vertex_data,
						size_t vertex_count,
						size_t vertex_size,
						const unsigned char* last_vertex,
						size_t k,
						int rot);  // 356
} /* size: 0, inline expansions: 3 (0 bytes) */

// <063A470E> src/vertexcodec.cpp:364
void estimateBits(unsigned char v)
{
} /* size: 0 */

// <063A460C> src/vertexcodec.cpp:369
// variables: 12
void estimateRotate(const unsigned char* vertex_data, size_t vertex_count, size_t vertex_size, size_t k, size_t group_size)
{
	size_t sizes; // 371
	const unsigned char* vertex; // 373
	unsigned int last; // 374
	int best_rot; // 405
	{
		size_t i; // 376
		{
			unsigned int bitg; // 378
			{
				size_t j; // 381
				{
					unsigned int v; // 383
					unsigned int d; // 384
				}
			}
			{
				int j; // 396
				{
					unsigned int bitr; // 398
				}
			}
		}
	}
	{
		int rot; // 406
	}
} /* size: 0, variables: 4 */

// <063A44AE> src/vertexcodec.cpp:412
// variables: 16
void estimateChannel(const unsigned char* vertex_data, size_t vertex_count, size_t vertex_size, size_t k, size_t vertex_block_size, size_t block_skip, int max_channel, int xor_rot)
{
	unsigned char block; // 414
	unsigned char last_vertex; // 417
	size_t sizes; // 419
	int best_channel; // 455
	{
		size_t i; // 422
		{
			size_t block_size; // 424
			size_t block_size_aligned; // 425
			{
				int channel; // 433
				{
					size_t j; // 434
					{
						size_t ig; // 438
						{
							size_t size1; // 441
							size_t size2; // 442
							size_t size4; // 443
							size_t size8; // 444
							size_t best_size; // 446
						}
					}
				}
			}
		}
	}
	{
		int channel; // 456
	}
} /* size: 0, variables: 4 */

// <063A447C> src/vertexcodec.cpp:462
// variable: 1
void estimateControlZero(const unsigned char* buffer, size_t vertex_count_aligned)
{
	{
		size_t i; // 464
	}
} /* size: 0 */

// <063A43AC> src/vertexcodec.cpp:471
// variables: 11
void estimateControl(const unsigned char* buffer, size_t vertex_count, size_t vertex_count_aligned, int level)
{
	size_t header_size; // 480
	size_t est_bytes0; // 482
	size_t est_bytes1; // 482
	{
		size_t i; // 484
		{
			size_t size0; // 487
			size_t size1; // 488
			size_t size2; // 489
			size_t size4; // 490
			size_t size8; // 491
			size_t size12; // 494
			size_t size124; // 495
		}
	}
} /* size: 0, variables: 3 */

// <063A42DC> src/vertexcodec.cpp:509
// variables: 6
void encodeVertexBlock(unsigned char* data, unsigned char* data_end, const unsigned char* vertex_data, size_t vertex_count, size_t vertex_size, unsigned char* last_vertex, const unsigned char* channels, int version, int level)
{
	unsigned char buffer; // 514
	size_t vertex_count_aligned; // 517
	size_t control_size; // 522
	unsigned char* control; // 526
	{
		size_t k; // 531
		{
			int ctrl; // 540
		}
	}
} /* size: 0, variables: 4 */

// <063A4276> src/vertexcodec.cpp:582
// variables: 4
void decodeBytesGroup(const unsigned char* data, unsigned char* buffer, int bits)
{
	unsigned char byte; // 587
	unsigned char enc; // 587
	unsigned char encv; // 587
	const unsigned char* data_var; // 588
} /* size: 0, variables: 4 */

// <063A41E7> src/vertexcodec.cpp:643
// variables: 5
void decodeBytes(const unsigned char* data, const unsigned char* data_end, unsigned char* buffer, size_t buffer_size, const int* bits)
{
	size_t header_size; // 648
	const unsigned char* header; // 652
	{
		size_t i; // 655
		{
			size_t header_offset; // 660
			int bitsk; // 661
		}
	}
} /* size: 0, variables: 2 */

// <0639CBFC> src/vertexcodec.cpp:670
// variables: 8
void decodeDeltas1<unsigned char, false>(const unsigned char* buffer, unsigned char* transposed, size_t vertex_count, size_t vertex_size, const unsigned char* last_vertex, int rot)
{
	{
		size_t k; // 672
		{
			size_t vertex_offset; // 674
			unsigned char p; // 676
			{
				size_t j; // 677
			}
			{
				size_t i; // 680
				{
					unsigned char v; // 682
					{
						size_t j; // 683
					}
					{
						size_t j; // 688
					}
				}
			}
		}
	}
} /* size: 0 */

// <0639CB22> src/vertexcodec.cpp:670
// variables: 8
void decodeDeltas1<short unsigned int, false>(const unsigned char* buffer, unsigned char* transposed, size_t vertex_count, size_t vertex_size, const unsigned char* last_vertex, int rot)
{
	{
		size_t k; // 672
		{
			size_t vertex_offset; // 674
			short unsigned int p; // 676
			{
				size_t j; // 677
			}
			{
				size_t i; // 680
				{
					short unsigned int v; // 682
					{
						size_t j; // 683
					}
					{
						size_t j; // 688
					}
				}
			}
		}
	}
} /* size: 0 */

// <0639CA48> src/vertexcodec.cpp:670
// variables: 8
void decodeDeltas1<unsigned int, true>(const unsigned char* buffer, unsigned char* transposed, size_t vertex_count, size_t vertex_size, const unsigned char* last_vertex, int rot)
{
	{
		size_t k; // 672
		{
			size_t vertex_offset; // 674
			unsigned int p; // 676
			{
				size_t j; // 677
			}
			{
				size_t i; // 680
				{
					unsigned int v; // 682
					{
						size_t j; // 683
					}
					{
						size_t j; // 688
					}
				}
			}
		}
	}
} /* size: 0 */

// <063A36E2> src/vertexcodec.cpp:701
// variables: 35
// function calls: 14
void decodeVertexBlock(const unsigned char* data, const unsigned char* data_end, unsigned char* vertex_data, size_t vertex_count, size_t vertex_size, unsigned char* last_vertex, const unsigned char* channels, int version)
{
	unsigned char buffer; // 705
	unsigned char transposed; // 706
	size_t vertex_count_aligned; // 708
	size_t control_size; // 711
	const unsigned char* control; // 715
	{
		size_t k; // 718
		{
			unsigned char ctrl_byte; // 720
			int channel; // 748
			{
				size_t j; // 722
				{
					int ctrl; // 724
					{
						size_t i; // 655
						{
							size_t header_offset; // 660
							int bitsk; // 661
							memcpy(void* __dest,
								const void* __src,
								size_t __len);  // 632
							memset(void* __dest,
								int __ch,
								size_t __len);  // 593
							decodeBytesGroup(const unsigned char* data,
									unsigned char* buffer,
									int bits);  // 663
						}
					}
					decodeBytes(const unsigned char* data,
							const unsigned char* data_end,
							unsigned char* buffer,
							size_t buffer_size,
							const int* bits);  // 742
					memcpy(void* __dest,
						const void* __src,
						size_t __len);  // 732
					memset(void* __dest,
						int __ch,
						size_t __len);  // 738
				}
			}
			{
				size_t k; // 672
				{
					size_t vertex_offset; // 674
					unsigned char p; // 676
					{
						size_t i; // 680
						{
							unsigned char v; // 682
							unzigzag<unsigned char>(unsigned char v); // 686
							{
								size_t j; // 688
							}
						}
					}
				}
			}
			decodeDeltas1<unsigned char, false>(const unsigned char* buffer,
								unsigned char* transposed,
								size_t vertex_count,
								size_t vertex_size,
								const unsigned char* last_vertex,
								int rot);  // 753
			{
				size_t k; // 672
				{
					size_t vertex_offset; // 674
					unsigned int p; // 676
					{
						size_t j; // 677
					}
					{
						size_t i; // 680
						{
							unsigned int v; // 682
							{
								size_t j; // 683
							}
							rotate(unsigned int v,
								int r);  // 686
							{
								size_t j; // 688
							}
						}
					}
				}
			}
			decodeDeltas1<unsigned int, true>(const unsigned char* buffer,
								unsigned char* transposed,
								size_t vertex_count,
								size_t vertex_size,
								const unsigned char* last_vertex,
								int rot);  // 759
			{
				size_t k; // 672
				{
					size_t vertex_offset; // 674
					short unsigned int p; // 676
					{
						size_t j; // 677
					}
					{
						size_t i; // 680
						{
							short unsigned int v; // 682
							{
								size_t j; // 683
							}
							unzigzag<short unsigned int>(short unsigned int v); // 686
							{
								size_t j; // 688
							}
						}
					}
				}
			}
			decodeDeltas1<short unsigned int, false>(const unsigned char* buffer,
								unsigned char* transposed,
								size_t vertex_count,
								size_t vertex_size,
								const unsigned char* last_vertex,
								int rot);  // 756
		}
	}
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 766
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 768
} /* size: 0, variables: 5, inline expansions: 2 (0 bytes) */

// <063A3680> src/vertexcodec.cpp:782
// variables: 5
void decodeBytesGroupBuildTables(void)
{
	{
		int mask; // 784
		{
			unsigned char shuffle; // 786
			unsigned char count; // 787
			{
				int i; // 789
				{
					int maski; // 791
				}
			}
		}
	}
} /* size: 0 */

// <063A3627> src/vertexcodec.cpp:808
// variables: 4
inline void decodeShuffleMask(unsigned char mask0, unsigned char mask1)
{
	__m128i sm0; // 810
	__m128i sm1; // 811
	__m128i sm1off; // 812
	__m128i sm1r; // 814
} /* size: 0, variables: 4 */

// <063A23B2> src/vertexcodec.cpp:826
// variables: 33
// function calls: 68
void decodeBytesGroupSimd(const unsigned char* data, unsigned char* buffer, int hbits)
{
	{
		__m128i result; // 833
		_mm_storeu_si128(__m128i_u* __P,
				__m128i __B);  // 835
	}
	{
		unsigned int data32; // 844
		long long unsigned int data64; // 849
		int datacnt; // 852
		__m128i sel2; // 855
		__m128i rest; // 856
		__m128i sel22; // 858
		__m128i sel2222; // 859
		__m128i sel; // 860
		__m128i mask; // 862
		int mask16; // 863
		unsigned char mask0; // 864
		unsigned char mask1; // 865
		__m128i shuf; // 867
		__m128i result; // 868
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 845
		_mm_set_epi64x(long long int __q1,
				long long int __q0);  // 602
		_mm_set_epi64(__m64 __q1,
				__m64 __q0);  // 713
		_mm_loadl_epi64(const __m128i_u* __P); // 810
		_mm_set_epi8(char __q15,
				char __q14,
				char __q13,
				char __q12,
				char __q11,
				char __q10,
				char __q09,
				char __q08,
				char __q07,
				char __q06,
				char __q05,
				char __q04,
				char __q03,
				char __q02,
				char __q01,
				char __q00);  // 660
		_mm_set1_epi8(char __A); // 812
		_mm_set_epi64x(long long int __q1,
				long long int __q0);  // 602
		_mm_set_epi64(__m64 __q1,
				__m64 __q0);  // 713
		_mm_loadl_epi64(const __m128i_u* __P); // 811
		_mm_add_epi8(__m128i __A,
				__m128i __B);  // 814
		_mm_unpacklo_epi64(__m128i __A,
					__m128i __B);  // 816
		decodeShuffleMask(unsigned char mask0,
					unsigned char mask1);  // 867
		_mm_set_epi32(int __q3,
				int __q2,
				int __q1,
				int __q0);  // 1569
		_mm_cvtsi32_si128(int __A); // 855
		_mm_srli_epi16(__m128i __A,
				int __B);  // 858
		_mm_loadu_si128(const __m128i_u* __P); // 856
		_mm_unpacklo_epi8(__m128i __A,
					__m128i __B);  // 858
		_mm_and_si128(__m128i __A,
				__m128i __B);  // 860
		_mm_srli_epi16(__m128i __A,
				int __B);  // 859
		_mm_unpacklo_epi8(__m128i __A,
					__m128i __B);  // 859
		_mm_cmpeq_epi8(__m128i __A,
				__m128i __B);  // 862
		_mm_movemask_epi8(__m128i __A); // 863
		_mm_andnot_si128(__m128i __A,
				__m128i __B);  // 868
		_mm_shuffle_epi8(__m128i __X,
				__m128i __Y);  // 868
		_mm_or_si128(__m128i __A,
				__m128i __B);  // 868
		_mm_storeu_si128(__m128i_u* __P,
				__m128i __B);  // 870
	}
	{
		long long unsigned int data64; // 883
		int datacnt; // 889
		__m128i sel4; // 892
		__m128i rest; // 893
		__m128i sel44; // 895
		__m128i sel; // 896
		__m128i mask; // 898
		int mask16; // 899
		unsigned char mask0; // 900
		unsigned char mask1; // 901
		__m128i shuf; // 903
		__m128i result; // 904
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 884
		_mm_set_epi64x(long long int __q1,
				long long int __q0);  // 602
		_mm_set_epi64(__m64 __q1,
				__m64 __q0);  // 713
		_mm_loadl_epi64(const __m128i_u* __P); // 810
		_mm_set_epi8(char __q15,
				char __q14,
				char __q13,
				char __q12,
				char __q11,
				char __q10,
				char __q09,
				char __q08,
				char __q07,
				char __q06,
				char __q05,
				char __q04,
				char __q03,
				char __q02,
				char __q01,
				char __q00);  // 660
		_mm_set1_epi8(char __A); // 812
		_mm_set_epi64x(long long int __q1,
				long long int __q0);  // 602
		_mm_set_epi64(__m64 __q1,
				__m64 __q0);  // 713
		_mm_loadl_epi64(const __m128i_u* __P); // 811
		_mm_add_epi8(__m128i __A,
				__m128i __B);  // 814
		_mm_unpacklo_epi64(__m128i __A,
					__m128i __B);  // 816
		decodeShuffleMask(unsigned char mask0,
					unsigned char mask1);  // 903
		_mm_set_epi64x(long long int __q1,
				long long int __q0);  // 602
		_mm_set_epi64(__m64 __q1,
				__m64 __q0);  // 713
		_mm_loadl_epi64(const __m128i_u* __P); // 892
		_mm_srli_epi16(__m128i __A,
				int __B);  // 895
		_mm_loadu_si128(const __m128i_u* __P); // 893
		_mm_unpacklo_epi8(__m128i __A,
					__m128i __B);  // 895
		_mm_and_si128(__m128i __A,
				__m128i __B);  // 896
		_mm_cmpeq_epi8(__m128i __A,
				__m128i __B);  // 898
		_mm_movemask_epi8(__m128i __A); // 899
		_mm_andnot_si128(__m128i __A,
				__m128i __B);  // 904
		_mm_shuffle_epi8(__m128i __X,
				__m128i __Y);  // 904
		_mm_or_si128(__m128i __A,
				__m128i __B);  // 904
		_mm_storeu_si128(__m128i_u* __P,
				__m128i __B);  // 906
	}
	{
		__m128i result; // 918
		_mm_loadu_si128(const __m128i_u* __P); // 918
		_mm_storeu_si128(__m128i_u* __P,
				__m128i __B);  // 920
	}
	{
		__m128i rest; // 927
		unsigned char mask0; // 929
		unsigned char mask1; // 930
		__m128i shuf; // 932
		__m128i result; // 933
		_mm_loadu_si128(const __m128i_u* __P); // 927
		_mm_set_epi8(char __q15,
				char __q14,
				char __q13,
				char __q12,
				char __q11,
				char __q10,
				char __q09,
				char __q08,
				char __q07,
				char __q06,
				char __q05,
				char __q04,
				char __q03,
				char __q02,
				char __q01,
				char __q00);  // 660
		_mm_set1_epi8(char __A); // 812
		_mm_set_epi64x(long long int __q1,
				long long int __q0);  // 602
		_mm_set_epi64(__m64 __q1,
				__m64 __q0);  // 713
		_mm_loadl_epi64(const __m128i_u* __P); // 810
		_mm_set_epi64x(long long int __q1,
				long long int __q0);  // 602
		_mm_set_epi64(__m64 __q1,
				__m64 __q0);  // 713
		_mm_loadl_epi64(const __m128i_u* __P); // 811
		_mm_add_epi8(__m128i __A,
				__m128i __B);  // 814
		_mm_unpacklo_epi64(__m128i __A,
					__m128i __B);  // 816
		decodeShuffleMask(unsigned char mask0,
					unsigned char mask1);  // 932
		_mm_shuffle_epi8(__m128i __X,
				__m128i __Y);  // 933
		_mm_storeu_si128(__m128i_u* __P,
				__m128i __B);  // 935
	}
} /* size: 0 */

// <063A2347> src/vertexcodec.cpp:1274
// variables: 4
inline void transpose8(__m128i& x0, __m128i& x1, __m128i& x2, __m128i& x3)
{
	__m128i t0; // 1276
	__m128i t1; // 1277
	__m128i t2; // 1278
	__m128i t3; // 1279
} /* size: 0, variables: 4 */

// <063A2313> src/vertexcodec.cpp:1288
// variables: 2
inline void unzigzag8(__m128i v)
{
	__m128i xl; // 1290
	__m128i xr; // 1291
} /* size: 0, variables: 2 */

// <063A22E5> src/vertexcodec.cpp:1297
// variables: 2
inline void unzigzag16(__m128i v)
{
	__m128i xl; // 1299
	__m128i xr; // 1300
} /* size: 0, variables: 2 */

// <063A22C4> src/vertexcodec.cpp:1306
inline void rotate32(__m128i v, int r)
{
} /* size: 0 */

// <063A2217> src/vertexcodec.cpp:1425
// variables: 7
void decodeBytesSimd(const unsigned char* data, const unsigned char* data_end, unsigned char* buffer, size_t buffer_size, int hshift)
{
	size_t header_size; // 1431
	const unsigned char* header; // 1435
	size_t i; // 1438
	{
		size_t header_offset; // 1443
		unsigned char header_byte; // 1444
	}
	{
		size_t header_offset; // 1458
		unsigned char header_byte; // 1459
	}
} /* size: 0, variables: 3 */

// <0639C950> src/vertexcodec.cpp:1469
// variables: 12
void decodeDeltas4Simd<0>(const unsigned char* buffer, unsigned char* transposed, size_t vertex_count_aligned, size_t vertex_size, unsigned char* last_vertex, int rot)
{
	__m128i pi; // 1500
	unsigned char* savep; // 1502
	{
		size_t j; // 1504
		{
			__m128i r0; // 1506
			__m128i r1; // 1507
			__m128i r2; // 1508
			__m128i r3; // 1509
			__m128i t0; // 1513
			__m128i t1; // 1513
			__m128i t2; // 1513
			__m128i t3; // 1513
			__m128i npi; // 1514
		}
	}
} /* size: 0, variables: 2 */

// <0639C858> src/vertexcodec.cpp:1469
// variables: 12
void decodeDeltas4Simd<1>(const unsigned char* buffer, unsigned char* transposed, size_t vertex_count_aligned, size_t vertex_size, unsigned char* last_vertex, int rot)
{
	__m128i pi; // 1500
	unsigned char* savep; // 1502
	{
		size_t j; // 1504
		{
			__m128i r0; // 1506
			__m128i r1; // 1507
			__m128i r2; // 1508
			__m128i r3; // 1509
			__m128i t0; // 1513
			__m128i t1; // 1513
			__m128i t2; // 1513
			__m128i t3; // 1513
			__m128i npi; // 1514
		}
	}
} /* size: 0, variables: 2 */

// <0639C760> src/vertexcodec.cpp:1469
// variables: 12
void decodeDeltas4Simd<2>(const unsigned char* buffer, unsigned char* transposed, size_t vertex_count_aligned, size_t vertex_size, unsigned char* last_vertex, int rot)
{
	__m128i pi; // 1500
	unsigned char* savep; // 1502
	{
		size_t j; // 1504
		{
			__m128i r0; // 1506
			__m128i r1; // 1507
			__m128i r2; // 1508
			__m128i r3; // 1509
			__m128i t0; // 1513
			__m128i t1; // 1513
			__m128i t2; // 1513
			__m128i t3; // 1513
			__m128i npi; // 1514
		}
	}
} /* size: 0, variables: 2 */

// <0639E953> src/vertexcodec.cpp:1554
// variables: 45
// function calls: 245
void decodeVertexBlockSimd(const unsigned char* data, const unsigned char* data_end, unsigned char* vertex_data, size_t vertex_count, size_t vertex_size, unsigned char* last_vertex, const unsigned char* channels, int version)
{
	unsigned char buffer; // 1558
	unsigned char transposed; // 1559
	size_t vertex_count_aligned; // 1561
	size_t control_size; // 1563
	const unsigned char* control; // 1567
	{
		size_t k; // 1570
		{
			unsigned char ctrl_byte; // 1572
			int channel; // 1603
			{
				size_t j; // 1574
				{
					int ctrl; // 1576
					{
						int hshift; // 1595
						{
							size_t header_offset; // 1443
							unsigned char header_byte; // 1444
						}
						{
							size_t header_offset; // 1458
							unsigned char header_byte; // 1459
						}
						decodeBytesSimd(const unsigned char* data,
								const unsigned char* data_end,
								unsigned char* buffer,
								size_t buffer_size,
								int hshift);  // 1597
					}
					memset(void* __dest,
						int __ch,
						size_t __len);  // 1590
					memcpy(void* __dest,
						const void* __src,
						size_t __len);  // 1584
				}
			}
			{
				size_t j; // 1504
				{
					__m128i r0; // 1506
					__m128i r1; // 1507
					__m128i r2; // 1508
					__m128i r3; // 1509
					__m128i t0; // 1513
					__m128i t1; // 1513
					__m128i t2; // 1513
					__m128i t3; // 1513
					__m128i npi; // 1514
					_mm_and_si128(__m128i __A,
							__m128i __B);  // 1290
					_mm_and_si128(__m128i __A,
							__m128i __B);  // 1291
					_mm_sub_epi8(__m128i __A,
							__m128i __B);  // 1290
					_mm_srli_epi16(__m128i __A,
							int __B);  // 1291
					_mm_xor_si128(__m128i __A,
							__m128i __B);  // 1293
					unzigzag8(__m128i v); // 1516
					_mm_loadu_si128(const __m128i_u* __P); // 1506
					_mm_loadu_si128(const __m128i_u* __P); // 1507
					_mm_loadu_si128(const __m128i_u* __P); // 1508
					_mm_loadu_si128(const __m128i_u* __P); // 1509
					_mm_unpacklo_epi8(__m128i __A,
								__m128i __B);  // 1276
					_mm_unpacklo_epi8(__m128i __A,
								__m128i __B);  // 1278
					_mm_unpackhi_epi8(__m128i __A,
								__m128i __B);  // 1277
					_mm_unpackhi_epi8(__m128i __A,
								__m128i __B);  // 1279
					_mm_unpacklo_epi16(__m128i __A,
								__m128i __B);  // 1281
					_mm_unpackhi_epi16(__m128i __A,
								__m128i __B);  // 1282
					_mm_unpacklo_epi16(__m128i __A,
								__m128i __B);  // 1283
					_mm_unpackhi_epi16(__m128i __A,
								__m128i __B);  // 1284
					transpose8(__m128i& x0,
							__m128i& x1,
							__m128i& x2,
							__m128i& x3);  // 1511
					_mm_shuffle_epi32(__m128i __A,
								const int  __mask);  // 1517
					_mm_shuffle_epi32(__m128i __A,
								const int  __mask);  // 1517
					_mm_shuffle_epi32(__m128i __A,
								const int  __mask);  // 1517
					_mm_add_epi8(__m128i __A,
							__m128i __B);  // 1518
					_mm_add_epi8(__m128i __A,
							__m128i __B);  // 1518
					_mm_add_epi8(__m128i __A,
							__m128i __B);  // 1518
					_mm_add_epi8(__m128i __A,
							__m128i __B);  // 1518
					_mm_srli_epi16(__m128i __A,
							int __B);  // 1291
					_mm_and_si128(__m128i __A,
							__m128i __B);  // 1290
					_mm_sub_epi8(__m128i __A,
							__m128i __B);  // 1290
					_mm_and_si128(__m128i __A,
							__m128i __B);  // 1291
					_mm_xor_si128(__m128i __A,
							__m128i __B);  // 1293
					unzigzag8(__m128i v); // 1521
					_mm_cvtsi128_si32(__m128i __A); // 1519
					_mm_cvtsi128_si32(__m128i __A); // 1519
					_mm_cvtsi128_si32(__m128i __A); // 1519
					_mm_cvtsi128_si32(__m128i __A); // 1519
					_mm_add_epi8(__m128i __A,
							__m128i __B);  // 1523
					_mm_shuffle_epi32(__m128i __A,
								const int  __mask);  // 1522
					_mm_add_epi8(__m128i __A,
							__m128i __B);  // 1523
					_mm_shuffle_epi32(__m128i __A,
								const int  __mask);  // 1522
					_mm_shuffle_epi32(__m128i __A,
								const int  __mask);  // 1522
					_mm_add_epi8(__m128i __A,
							__m128i __B);  // 1523
					_mm_srli_epi16(__m128i __A,
							int __B);  // 1291
					_mm_and_si128(__m128i __A,
							__m128i __B);  // 1290
					_mm_sub_epi8(__m128i __A,
							__m128i __B);  // 1290
					_mm_and_si128(__m128i __A,
							__m128i __B);  // 1291
					_mm_xor_si128(__m128i __A,
							__m128i __B);  // 1293
					unzigzag8(__m128i v); // 1526
					_mm_add_epi8(__m128i __A,
							__m128i __B);  // 1523
					_mm_cvtsi128_si32(__m128i __A); // 1524
					_mm_cvtsi128_si32(__m128i __A); // 1524
					_mm_cvtsi128_si32(__m128i __A); // 1524
					_mm_cvtsi128_si32(__m128i __A); // 1524
					_mm_shuffle_epi32(__m128i __A,
								const int  __mask);  // 1527
					_mm_shuffle_epi32(__m128i __A,
								const int  __mask);  // 1527
					_mm_shuffle_epi32(__m128i __A,
								const int  __mask);  // 1527
					_mm_add_epi8(__m128i __A,
							__m128i __B);  // 1528
					_mm_add_epi8(__m128i __A,
							__m128i __B);  // 1528
					_mm_add_epi8(__m128i __A,
							__m128i __B);  // 1528
					_mm_add_epi8(__m128i __A,
							__m128i __B);  // 1528
					_mm_srli_epi16(__m128i __A,
							int __B);  // 1291
					_mm_and_si128(__m128i __A,
							__m128i __B);  // 1290
					_mm_sub_epi8(__m128i __A,
							__m128i __B);  // 1290
					_mm_and_si128(__m128i __A,
							__m128i __B);  // 1291
					_mm_xor_si128(__m128i __A,
							__m128i __B);  // 1293
					unzigzag8(__m128i v); // 1531
					_mm_cvtsi128_si32(__m128i __A); // 1529
					_mm_cvtsi128_si32(__m128i __A); // 1529
					_mm_shuffle_epi32(__m128i __A,
								const int  __mask);  // 1532
					_mm_shuffle_epi32(__m128i __A,
								const int  __mask);  // 1532
					_mm_cvtsi128_si32(__m128i __A); // 1529
					_mm_cvtsi128_si32(__m128i __A); // 1529
					_mm_shuffle_epi32(__m128i __A,
								const int  __mask);  // 1532
					_mm_add_epi8(__m128i __A,
							__m128i __B);  // 1533
					_mm_add_epi8(__m128i __A,
							__m128i __B);  // 1533
					_mm_add_epi8(__m128i __A,
							__m128i __B);  // 1533
					_mm_add_epi8(__m128i __A,
							__m128i __B);  // 1533
					_mm_cvtsi128_si32(__m128i __A); // 1534
					_mm_cvtsi128_si32(__m128i __A); // 1534
					_mm_cvtsi128_si32(__m128i __A); // 1534
					_mm_cvtsi128_si32(__m128i __A); // 1534
				}
			}
			_mm_set_epi32(int __q3,
					int __q2,
					int __q1,
					int __q0);  // 1569
			_mm_cvtsi32_si128(int __A); // 1500
			decodeDeltas4Simd<0>(const unsigned char* buffer,
						unsigned char* transposed,
						size_t vertex_count_aligned,
						size_t vertex_size,
						unsigned char* last_vertex,
						int rot);  // 1608
			_mm_set_epi32(int __q3,
					int __q2,
					int __q1,
					int __q0);  // 1569
			_mm_cvtsi32_si128(int __A); // 1500
			{
				size_t j; // 1504
				{
					__m128i r0; // 1506
					__m128i r1; // 1507
					__m128i r2; // 1508
					__m128i r3; // 1509
					__m128i t0; // 1513
					__m128i t1; // 1513
					__m128i t2; // 1513
					__m128i t3; // 1513
					__m128i npi; // 1514
					_mm_and_si128(__m128i __A,
							__m128i __B);  // 1299
					_mm_sub_epi16(__m128i __A,
							__m128i __B);  // 1299
					_mm_srli_epi16(__m128i __A,
							int __B);  // 1300
					_mm_xor_si128(__m128i __A,
							__m128i __B);  // 1302
					unzigzag16(__m128i v); // 1516
					_mm_loadu_si128(const __m128i_u* __P); // 1506
					_mm_loadu_si128(const __m128i_u* __P); // 1507
					_mm_loadu_si128(const __m128i_u* __P); // 1508
					_mm_loadu_si128(const __m128i_u* __P); // 1509
					_mm_unpacklo_epi8(__m128i __A,
								__m128i __B);  // 1276
					_mm_unpacklo_epi8(__m128i __A,
								__m128i __B);  // 1278
					_mm_unpackhi_epi8(__m128i __A,
								__m128i __B);  // 1277
					_mm_unpackhi_epi8(__m128i __A,
								__m128i __B);  // 1279
					_mm_unpacklo_epi16(__m128i __A,
								__m128i __B);  // 1281
					_mm_unpackhi_epi16(__m128i __A,
								__m128i __B);  // 1282
					_mm_unpacklo_epi16(__m128i __A,
								__m128i __B);  // 1283
					_mm_unpackhi_epi16(__m128i __A,
								__m128i __B);  // 1284
					transpose8(__m128i& x0,
							__m128i& x1,
							__m128i& x2,
							__m128i& x3);  // 1511
					_mm_shuffle_epi32(__m128i __A,
								const int  __mask);  // 1517
					_mm_shuffle_epi32(__m128i __A,
								const int  __mask);  // 1517
					_mm_shuffle_epi32(__m128i __A,
								const int  __mask);  // 1517
					_mm_add_epi16(__m128i __A,
							__m128i __B);  // 1518
					_mm_add_epi16(__m128i __A,
							__m128i __B);  // 1518
					_mm_add_epi16(__m128i __A,
							__m128i __B);  // 1518
					_mm_sub_epi16(__m128i __A,
							__m128i __B);  // 1299
					_mm_srli_epi16(__m128i __A,
							int __B);  // 1300
					_mm_and_si128(__m128i __A,
							__m128i __B);  // 1299
					_mm_xor_si128(__m128i __A,
							__m128i __B);  // 1302
					unzigzag16(__m128i v); // 1521
					_mm_add_epi16(__m128i __A,
							__m128i __B);  // 1518
					_mm_cvtsi128_si32(__m128i __A); // 1519
					_mm_cvtsi128_si32(__m128i __A); // 1519
					_mm_cvtsi128_si32(__m128i __A); // 1519
					_mm_cvtsi128_si32(__m128i __A); // 1519
					_mm_shuffle_epi32(__m128i __A,
								const int  __mask);  // 1522
					_mm_shuffle_epi32(__m128i __A,
								const int  __mask);  // 1522
					_mm_shuffle_epi32(__m128i __A,
								const int  __mask);  // 1522
					_mm_add_epi16(__m128i __A,
							__m128i __B);  // 1523
					_mm_add_epi16(__m128i __A,
							__m128i __B);  // 1523
					_mm_add_epi16(__m128i __A,
							__m128i __B);  // 1523
					_mm_srli_epi16(__m128i __A,
							int __B);  // 1300
					_mm_and_si128(__m128i __A,
							__m128i __B);  // 1299
					_mm_sub_epi16(__m128i __A,
							__m128i __B);  // 1299
					_mm_xor_si128(__m128i __A,
							__m128i __B);  // 1302
					unzigzag16(__m128i v); // 1526
					_mm_add_epi16(__m128i __A,
							__m128i __B);  // 1523
					_mm_cvtsi128_si32(__m128i __A); // 1524
					_mm_cvtsi128_si32(__m128i __A); // 1524
					_mm_cvtsi128_si32(__m128i __A); // 1524
					_mm_cvtsi128_si32(__m128i __A); // 1524
					_mm_shuffle_epi32(__m128i __A,
								const int  __mask);  // 1527
					_mm_add_epi16(__m128i __A,
							__m128i __B);  // 1528
					_mm_shuffle_epi32(__m128i __A,
								const int  __mask);  // 1527
					_mm_shuffle_epi32(__m128i __A,
								const int  __mask);  // 1527
					_mm_add_epi16(__m128i __A,
							__m128i __B);  // 1528
					_mm_add_epi16(__m128i __A,
							__m128i __B);  // 1528
					_mm_add_epi16(__m128i __A,
							__m128i __B);  // 1528
					_mm_sub_epi16(__m128i __A,
							__m128i __B);  // 1299
					_mm_srli_epi16(__m128i __A,
							int __B);  // 1300
					_mm_and_si128(__m128i __A,
							__m128i __B);  // 1299
					_mm_xor_si128(__m128i __A,
							__m128i __B);  // 1302
					unzigzag16(__m128i v); // 1531
					_mm_cvtsi128_si32(__m128i __A); // 1529
					_mm_cvtsi128_si32(__m128i __A); // 1529
					_mm_cvtsi128_si32(__m128i __A); // 1529
					_mm_cvtsi128_si32(__m128i __A); // 1529
					_mm_shuffle_epi32(__m128i __A,
								const int  __mask);  // 1532
					_mm_add_epi16(__m128i __A,
							__m128i __B);  // 1533
					_mm_shuffle_epi32(__m128i __A,
								const int  __mask);  // 1532
					_mm_add_epi16(__m128i __A,
							__m128i __B);  // 1533
					_mm_shuffle_epi32(__m128i __A,
								const int  __mask);  // 1532
					_mm_add_epi16(__m128i __A,
							__m128i __B);  // 1533
					_mm_add_epi16(__m128i __A,
							__m128i __B);  // 1533
					_mm_cvtsi128_si32(__m128i __A); // 1534
					_mm_cvtsi128_si32(__m128i __A); // 1534
					_mm_cvtsi128_si32(__m128i __A); // 1534
					_mm_cvtsi128_si32(__m128i __A); // 1534
				}
			}
			decodeDeltas4Simd<1>(const unsigned char* buffer,
						unsigned char* transposed,
						size_t vertex_count_aligned,
						size_t vertex_size,
						unsigned char* last_vertex,
						int rot);  // 1611
			_mm_set_epi32(int __q3,
					int __q2,
					int __q1,
					int __q0);  // 1569
			_mm_cvtsi32_si128(int __A); // 1500
			{
				size_t j; // 1504
				{
					__m128i r0; // 1506
					__m128i r1; // 1507
					__m128i r2; // 1508
					__m128i r3; // 1509
					__m128i t0; // 1513
					__m128i t1; // 1513
					__m128i t2; // 1513
					__m128i t3; // 1513
					__m128i npi; // 1514
					_mm_loadu_si128(const __m128i_u* __P); // 1506
					_mm_loadu_si128(const __m128i_u* __P); // 1507
					_mm_loadu_si128(const __m128i_u* __P); // 1508
					_mm_loadu_si128(const __m128i_u* __P); // 1509
					_mm_unpacklo_epi8(__m128i __A,
								__m128i __B);  // 1276
					_mm_unpacklo_epi8(__m128i __A,
								__m128i __B);  // 1278
					_mm_unpackhi_epi8(__m128i __A,
								__m128i __B);  // 1277
					_mm_unpackhi_epi8(__m128i __A,
								__m128i __B);  // 1279
					_mm_unpacklo_epi16(__m128i __A,
								__m128i __B);  // 1281
					_mm_unpackhi_epi16(__m128i __A,
								__m128i __B);  // 1282
					_mm_unpacklo_epi16(__m128i __A,
								__m128i __B);  // 1283
					_mm_unpackhi_epi16(__m128i __A,
								__m128i __B);  // 1284
					transpose8(__m128i& x0,
							__m128i& x1,
							__m128i& x2,
							__m128i& x3);  // 1511
					_mm_srli_epi32(__m128i __A,
							int __B);  // 1308
					_mm_slli_epi32(__m128i __A,
							int __B);  // 1308
					_mm_or_si128(__m128i __A,
							__m128i __B);  // 1308
					rotate32(__m128i v,
						int r);  // 1516
					_mm_shuffle_epi32(__m128i __A,
								const int  __mask);  // 1517
					_mm_shuffle_epi32(__m128i __A,
								const int  __mask);  // 1517
					_mm_shuffle_epi32(__m128i __A,
								const int  __mask);  // 1517
					_mm_xor_si128(__m128i __A,
							__m128i __B);  // 1518
					_mm_xor_si128(__m128i __A,
							__m128i __B);  // 1518
					_mm_xor_si128(__m128i __A,
							__m128i __B);  // 1518
					_mm_srli_epi32(__m128i __A,
							int __B);  // 1308
					_mm_slli_epi32(__m128i __A,
							int __B);  // 1308
					_mm_or_si128(__m128i __A,
							__m128i __B);  // 1308
					rotate32(__m128i v,
						int r);  // 1521
					_mm_xor_si128(__m128i __A,
							__m128i __B);  // 1518
					_mm_cvtsi128_si32(__m128i __A); // 1519
					_mm_cvtsi128_si32(__m128i __A); // 1519
					_mm_cvtsi128_si32(__m128i __A); // 1519
					_mm_cvtsi128_si32(__m128i __A); // 1519
					_mm_xor_si128(__m128i __A,
							__m128i __B);  // 1523
					_mm_shuffle_epi32(__m128i __A,
								const int  __mask);  // 1522
					_mm_shuffle_epi32(__m128i __A,
								const int  __mask);  // 1522
					_mm_xor_si128(__m128i __A,
							__m128i __B);  // 1523
					_mm_shuffle_epi32(__m128i __A,
								const int  __mask);  // 1522
					_mm_srli_epi32(__m128i __A,
							int __B);  // 1308
					_mm_slli_epi32(__m128i __A,
							int __B);  // 1308
					_mm_or_si128(__m128i __A,
							__m128i __B);  // 1308
					rotate32(__m128i v,
						int r);  // 1526
					_mm_xor_si128(__m128i __A,
							__m128i __B);  // 1523
					_mm_xor_si128(__m128i __A,
							__m128i __B);  // 1523
					_mm_cvtsi128_si32(__m128i __A); // 1524
					_mm_cvtsi128_si32(__m128i __A); // 1524
					_mm_cvtsi128_si32(__m128i __A); // 1524
					_mm_cvtsi128_si32(__m128i __A); // 1524
					_mm_shuffle_epi32(__m128i __A,
								const int  __mask);  // 1527
					_mm_shuffle_epi32(__m128i __A,
								const int  __mask);  // 1527
					_mm_shuffle_epi32(__m128i __A,
								const int  __mask);  // 1527
					_mm_xor_si128(__m128i __A,
							__m128i __B);  // 1528
					_mm_xor_si128(__m128i __A,
							__m128i __B);  // 1528
					_mm_xor_si128(__m128i __A,
							__m128i __B);  // 1528
					_mm_srli_epi32(__m128i __A,
							int __B);  // 1308
					_mm_slli_epi32(__m128i __A,
							int __B);  // 1308
					_mm_or_si128(__m128i __A,
							__m128i __B);  // 1308
					rotate32(__m128i v,
						int r);  // 1531
					_mm_xor_si128(__m128i __A,
							__m128i __B);  // 1528
					_mm_cvtsi128_si32(__m128i __A); // 1529
					_mm_cvtsi128_si32(__m128i __A); // 1529
					_mm_cvtsi128_si32(__m128i __A); // 1529
					_mm_cvtsi128_si32(__m128i __A); // 1529
					_mm_shuffle_epi32(__m128i __A,
								const int  __mask);  // 1532
					_mm_shuffle_epi32(__m128i __A,
								const int  __mask);  // 1532
					_mm_shuffle_epi32(__m128i __A,
								const int  __mask);  // 1532
					_mm_xor_si128(__m128i __A,
							__m128i __B);  // 1533
					_mm_xor_si128(__m128i __A,
							__m128i __B);  // 1533
					_mm_xor_si128(__m128i __A,
							__m128i __B);  // 1533
					_mm_xor_si128(__m128i __A,
							__m128i __B);  // 1533
					_mm_cvtsi128_si32(__m128i __A); // 1534
					_mm_cvtsi128_si32(__m128i __A); // 1534
					_mm_cvtsi128_si32(__m128i __A); // 1534
					_mm_cvtsi128_si32(__m128i __A); // 1534
				}
			}
			decodeDeltas4Simd<2>(const unsigned char* buffer,
						unsigned char* transposed,
						size_t vertex_count_aligned,
						size_t vertex_size,
						unsigned char* last_vertex,
						int rot);  // 1614
		}
	}
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 1621
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 1623
} /* size: 0, variables: 5, inline expansions: 2 (0 bytes) */

// <0639E92B> src/vertexcodec.cpp:1630
// variable: 1
void getCpuFeatures(void)
{
	int cpuinfo; // 1632
} /* size: 0, variables: 1 */

// <0639D551> src/vertexcodec.cpp:1646
// variables: 66
// function calls: 42
size_t meshopt_encodeVertexBufferLevel(unsigned char* buffer, size_t buffer_size, const void* vertices, size_t vertex_count, size_t vertex_size, int level, int version)
{
	const unsigned char* vertex_data; // 1661
	unsigned char* data; // 1663
	unsigned char* data_end; // 1664
	unsigned char first_vertex; // 1671
	unsigned char last_vertex; // 1675
	size_t vertex_block_size; // 1678
	unsigned char channels; // 1680
	size_t vertex_offset; // 1691
	size_t tail_size; // 1704
	size_t tail_size_min; // 1705
	size_t tail_size_pad; // 1706
	{
		size_t k; // 1682
		{
			int rot; // 1684
			int channel; // 1685
			{
				size_t i; // 422
				{
					size_t block_size; // 424
					size_t block_size_aligned; // 425
					{
						int channel; // 433
						{
							size_t j; // 434
							{
								size_t ig; // 438
								{
									size_t size1; // 441
									size_t size2; // 442
									size_t size4; // 443
									size_t size8; // 444
									size_t best_size; // 446
									{
										size_t i; // 204
									}
									encodeBytesGroupMeasure(const unsigned char* buffer,
												int bits);  // 442
									{
										size_t i; // 204
									}
									encodeBytesGroupMeasure(const unsigned char* buffer,
												int bits);  // 443
									{
										size_t i; // 204
									}
									encodeBytesGroupMeasure(const unsigned char* buffer,
												int bits);  // 441
								}
							}
						}
					}
					memcpy(void* __dest,
						const void* __src,
						size_t __len);  // 427
					memset(void* __dest,
						int __ch,
						size_t __len);  // 431
				}
			}
			{
				int channel; // 456
			}
			estimateChannel(const unsigned char* vertex_data,
					size_t vertex_count,
					size_t vertex_size,
					size_t k,
					size_t vertex_block_size,
					size_t block_skip,
					int max_channel,
					int xor_rot);  // 1685
			{
				size_t i; // 376
				{
					unsigned int bitg; // 378
					{
						size_t j; // 381
						{
							unsigned int v; // 383
							unsigned int d; // 384
						}
					}
					{
						int j; // 396
						{
							unsigned int bitr; // 398
							rotate(unsigned int v,
								int r);  // 398
							estimateBits(unsigned char v); // 364
							estimateBits(unsigned char v); // 400
							estimateBits(unsigned char v); // 364
							estimateBits(unsigned char v); // 400
							estimateBits(unsigned char v); // 364
							estimateBits(unsigned char v); // 401
							estimateBits(unsigned char v); // 364
							estimateBits(unsigned char v); // 401
						}
					}
				}
			}
			{
				int rot; // 406
			}
			estimateRotate(const unsigned char* vertex_data,
					size_t vertex_count,
					size_t vertex_size,
					size_t k,
					size_t group_size);  // 1684
		}
	}
	{
		size_t block_size; // 1695
		{
			size_t k; // 531
			{
				int ctrl; // 540
				{
					size_t i; // 281
					{
						int best_bitk; // 286
						size_t best_size; // 287
						size_t header_offset; // 301
						int best_bits; // 304
						unsigned char* next; // 305
						{
							size_t i; // 231
							{
								unsigned char byte; // 233
								{
									size_t k; // 235
									{
										unsigned char enc; // 237
									}
								}
							}
						}
						{
							size_t i; // 251
							{
								unsigned char v; // 253
							}
						}
						memcpy(void* __dest,
							const void* __src,
							size_t __len);  // 220
						encodeBytesGroup(unsigned char* data,
								const unsigned char* buffer,
								int bits);  // 305
						{
							int bitk; // 289
							{
								size_t size; // 291
							}
						}
					}
				}
				memset(void* __dest,
					int __ch,
					size_t __len);  // 277
				encodeBytes(unsigned char* data,
						unsigned char* data_end,
						const unsigned char* buffer,
						size_t buffer_size,
						const int* bits);  // 565
				{
					size_t i; // 464
					memcpy(void* __dest,
						const void* __src,
						size_t __len);  // 185
					encodeBytesGroupZero(const unsigned char* buffer); // 465
				}
				estimateControlZero(const unsigned char* buffer,
							size_t vertex_count_aligned);  // 473
				{
					size_t i; // 484
					{
						size_t size0; // 487
						size_t size1; // 488
						size_t size2; // 489
						size_t size4; // 490
						size_t size8; // 491
						size_t size12; // 494
						size_t size124; // 495
						{
							size_t i; // 204
						}
						encodeBytesGroupMeasure(const unsigned char* buffer,
									int bits);  // 488
						{
							size_t i; // 204
						}
						encodeBytesGroupMeasure(const unsigned char* buffer,
									int bits);  // 489
						{
							size_t i; // 204
						}
						encodeBytesGroupMeasure(const unsigned char* buffer,
									int bits);  // 490
						memcpy(void* __dest,
							const void* __src,
							size_t __len);  // 185
						encodeBytesGroupZero(const unsigned char* buffer); // 195
						encodeBytesGroupMeasure(const unsigned char* buffer,
									int bits);  // 190
						encodeBytesGroupMeasure(const unsigned char* buffer,
									int bits);  // 487
					}
				}
				estimateControl(const unsigned char* buffer,
						size_t vertex_count,
						size_t vertex_count_aligned,
						int level);  // 544
				memcpy(void* __dest,
					const void* __src,
					size_t __len);  // 560
			}
		}
		memset(void* __dest,
			int __ch,
			size_t __len);  // 520
		memset(void* __dest,
			int __ch,
			size_t __len);  // 529
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 576
		encodeVertexBlock(unsigned char* data,
					unsigned char* data_end,
					const unsigned char* vertex_data,
					size_t vertex_count,
					size_t vertex_size,
					unsigned char* last_vertex,
					const unsigned char* channels,
					int version,
					int level);  // 1697
	}
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 1676
	getVertexBlockSize(size_t vertex_size); // 1678
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 1717
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 1673
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 1722
	memset(void* __dest,
		int __ch,
		size_t __len);  // 1713
} /* size: 0, variables: 11, inline expansions: 6 (0 bytes) */

// <0639D48A> src/vertexcodec.cpp:1779
size_t meshopt_encodeVertexBuffer(unsigned char* buffer, size_t buffer_size, const void* vertices, size_t vertex_count, size_t vertex_size)
{
} /* size: 0 */

// <0639D35D> src/vertexcodec.cpp:1784
// variables: 8
// function call: 1
size_t meshopt_encodeVertexBufferBound(size_t vertex_count, size_t vertex_size)
{
	size_t vertex_block_size; // 1791
	size_t vertex_block_count; // 1792
	size_t vertex_block_control_size; // 1794
	size_t vertex_block_header_size; // 1795
	size_t vertex_block_data_size; // 1796
	size_t tail_size; // 1798
	size_t tail_size_min; // 1799
	size_t tail_size_pad; // 1800
	getVertexBlockSize(size_t vertex_size); // 1791
} /* size: 0, variables: 8, inline expansions: 1 (0 bytes) */

// <0639D32B> src/vertexcodec.cpp:1806
void meshopt_encodeVertexVersion(int version)
{
} /* size: 0 */

// <0639D2BC> src/vertexcodec.cpp:1813
// variables: 2
int meshopt_decodeVertexVersion(const unsigned char* buffer, size_t buffer_size)
{
	unsigned char header; // 1818
	int version; // 1823
} /* size: 0, variables: 2 */

