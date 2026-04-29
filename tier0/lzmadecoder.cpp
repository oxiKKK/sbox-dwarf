
//
// tier0/lzmadecoder.cpp
//
//	referenced by: libtier0.so
//
//	functions: 6
//	structs: 2
//

// <00290BC1> tier0/lzmadecoder.cpp:81
// member variables: 3
// struct size: 12
struct _CLzmaProperties {
	int lc; /* 0 4 */
	int lp; /* 4 4 */
	int pb; /* 8 4 */
};

// <00290C05> tier0/lzmadecoder.cpp:97
// member variables: 2
// struct size: 24
struct _CLzmaDecoderState {
	CLzmaProperties Properties; /* 0 12 */
	UInt32 * Probs; /* 16 8 */
};

// <00291C14> tier0/lzmadecoder.cpp:229
// variable: 1
int LzmaDecodeProperties(CLzmaProperties* propsRes, const unsigned char* propsData, int size)
{
	unsigned char prop0; // 231
} /* size: 0, variables: 1 */

// <00291962> tier0/lzmadecoder.cpp:266
// variables: 40
int LzmaDecodeWithCallback(CLzmaDecoderState* vs, const unsigned char* inStream, SizeT inSize, SizeT* inSizeProcessed, unsigned char* outStream, SizeT outSize, SizeT* outSizeProcessed, LZMAReadProgressCallbackFunc_t pCallbackFunc)
{
	UInt32* p; // 274
	SizeT nowPos; // 275
	Byte previousByte; // 276
	UInt32 posStateMask; // 277
	UInt32 literalPosMask; // 278
	int lc; // 279
	int state; // 360
	UInt32 rep0; // 361
	UInt32 rep1; // 361
	UInt32 rep2; // 361
	UInt32 rep3; // 361
	int len; // 362
	const Byte* Buffer; // 363
	const Byte* BufferLim; // 364
	UInt32 Range; // 365
	UInt32 Code; // 366
	{
		UInt32 i; // 374
		UInt32 numProbs; // 375
	}
	{
		int i; // 383
	}
	{
		UInt32* prob; // 390
		UInt32 bound; // 391
		int posState; // 392
		{
			int symbol; // 403
			{
				int matchByte; // 416
				{
					int bit; // 427
					UInt32* probLit; // 428
				}
			}
			{
				UInt32* probLit; // 438
			}
		}
		{
			UInt32 distance; // 526
		}
		{
			int numBits; // 558
			int offset; // 558
			UInt32* probLen; // 559
			{
				int i; // 586
				{
					UInt32* pProb; // 586
				}
			}
		}
		{
			int posSlot; // 592
			{
				int i; // 597
				{
					UInt32* pProb; // 597
				}
			}
			{
				int numDirectBits; // 600
				{
					int i; // 627
					int mi; // 628
					{
						UInt32* prob3; // 631
					}
				}
			}
		}
	}
} /* size: 0, variables: 16 */

// <0029169E> tier0/lzmadecoder.cpp:714
// variables: 40
int LzmaDecode(CLzmaDecoderState* vs, const unsigned char* inStream, SizeT inSize, SizeT* inSizeProcessed, unsigned char* outStream, SizeT outSize, SizeT* outSizeProcessed, LZMAReadProgressCallbackFunc_t pCallbackFunc)
{
	UInt32* p; // 728
	SizeT nowPos; // 729
	Byte previousByte; // 730
	UInt32 posStateMask; // 731
	UInt32 literalPosMask; // 732
	int lc; // 733
	int state; // 810
	UInt32 rep0; // 811
	UInt32 rep1; // 811
	UInt32 rep2; // 811
	UInt32 rep3; // 811
	int len; // 812
	const Byte* Buffer; // 813
	const Byte* BufferLim; // 814
	UInt32 Range; // 815
	UInt32 Code; // 816
	{
		UInt32 i; // 824
		UInt32 numProbs; // 825
	}
	{
		int i; // 833
	}
	{
		UInt32* prob; // 840
		UInt32 bound; // 841
		int posState; // 842
		{
			int symbol; // 853
			{
				int matchByte; // 866
				{
					int bit; // 877
					UInt32* probLit; // 878
				}
			}
			{
				UInt32* probLit; // 888
			}
		}
		{
			UInt32 distance; // 968
		}
		{
			int numBits; // 1000
			int offset; // 1000
			UInt32* probLen; // 1001
			{
				int i; // 1028
				{
					UInt32* pProb; // 1028
				}
			}
		}
		{
			int posSlot; // 1034
			{
				int i; // 1039
				{
					UInt32* pProb; // 1039
				}
			}
			{
				int numDirectBits; // 1042
				{
					int i; // 1069
					int mi; // 1070
					{
						UInt32* prob3; // 1073
					}
				}
			}
		}
	}
} /* size: 0, variables: 16 */

// <00291648> tier0/lzmadecoder.cpp:1154
// variable: 1
void CLZMA::IsCompressed(const unsigned char* pInput)
{
	lzma_header_t* pHeader; // 1156
} /* size: 21, variables: 1 */

// <002915EC> tier0/lzmadecoder.cpp:1170
// variable: 1
void CLZMA::GetActualSize(const unsigned char* pInput)
{
	lzma_header_t* pHeader; // 1172
} /* size: 28, variables: 1 */

// <00290D95> tier0/lzmadecoder.cpp:1186
// variables: 57
// function calls: 3
void CLZMA::Uncompress(const unsigned char* pInput, unsigned char* pOutput, LZMAReadProgressCallbackFunc_t pCallback)
{
	unsigned int actualSize; // 1188
	CLzmaDecoderState state; // 1195
	const char   __FUNCTION__; // 21595
	unsigned int lzmaSize; // 1202
	SizeT inProcessed; // 1204
	SizeT outProcessed; // 1205
	int result; // 1206
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1198
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1212
	}
	LzmaDecodeProperties(CLzmaProperties* propsRes,
				const unsigned char* propsData,
				int size);  // 1196
	{
		UInt32 i; // 374
		UInt32 numProbs; // 375
	}
	{
		int i; // 383
	}
	{
		UInt32* prob; // 390
		UInt32 bound; // 391
		int posState; // 392
		{
			int symbol; // 403
			{
				int matchByte; // 416
				{
					int bit; // 427
					UInt32* probLit; // 428
				}
			}
			{
				UInt32* probLit; // 438
			}
		}
		{
			UInt32 distance; // 526
		}
		{
			int numBits; // 558
			int offset; // 558
			UInt32* probLen; // 559
			{
				int i; // 586
				{
					UInt32* pProb; // 586
				}
			}
		}
		{
			int posSlot; // 592
			{
				int i; // 597
				{
					UInt32* pProb; // 597
				}
			}
			{
				int numDirectBits; // 600
				{
					int i; // 627
					int mi; // 628
					{
						UInt32* prob3; // 631
					}
				}
			}
		}
	}
	LzmaDecodeWithCallback(CLzmaDecoderState* vs,
				const unsigned char* inStream,
				SizeT inSize,
				SizeT* inSizeProcessed,
				unsigned char* outStream,
				SizeT outSize,
				SizeT* outSizeProcessed,
				LZMAReadProgressCallbackFunc_t pCallbackFunc);  // 725
	{
		UInt32 i; // 824
		UInt32 numProbs; // 825
	}
	{
		int i; // 833
	}
	{
		UInt32* prob; // 840
		UInt32 bound; // 841
		int posState; // 842
		{
			int symbol; // 853
			{
				int matchByte; // 866
				{
					int bit; // 877
					UInt32* probLit; // 878
				}
			}
			{
				UInt32* probLit; // 888
			}
		}
		{
			UInt32 distance; // 968
		}
		{
			int numBits; // 1000
			int offset; // 1000
			UInt32* probLen; // 1001
			{
				int i; // 1028
				{
					UInt32* pProb; // 1028
				}
			}
		}
		{
			int posSlot; // 1034
			{
				int i; // 1039
				{
					UInt32* pProb; // 1039
				}
			}
			{
				int numDirectBits; // 1042
				{
					int i; // 1069
					int mi; // 1070
					{
						UInt32* prob3; // 1073
					}
				}
			}
		}
	}
	LzmaDecode(CLzmaDecoderState* vs,
			const unsigned char* inStream,
			SizeT inSize,
			SizeT* inSizeProcessed,
			unsigned char* outStream,
			SizeT outSize,
			SizeT* outSizeProcessed,
			LZMAReadProgressCallbackFunc_t pCallbackFunc);  // 1206
} /* size: 0, variables: 7, inline expansions: 3 (8460 bytes) */

