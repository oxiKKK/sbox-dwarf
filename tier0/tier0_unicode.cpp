
//
// tier0/tier0_unicode.cpp
//
//	referenced by: libtier0.so
//
//	functions: 213
//

// <0060F57A> tier0/tier0_unicode.cpp:75
int V_UChar32ToUTF16(uchar32 uVal, uchar16* pUTF16Out)
{
} /* size: 0 */

// <0060F3AB> tier0/tier0_unicode.cpp:164
// variable: 1
// function calls: 2
int V_UTF16ToUChar32(const uchar16* pUTF16, uchar32& uValueOut, bool& bErrorOut)
{
	{
		uchar32 uVal; // 175
		V_IsValidUChar32(uchar32 uVal); // 176
	}
	V_IsValidUChar32(uchar32 uVal); // 166
} /* size: 183, inline expansions: 1 (37 bytes) */

// <0060F338> tier0/tier0_unicode.cpp:197
// function call: 1
int V_UTF32ToUChar32(const uchar32* pUTF32, uchar32& uValueOut, bool& bErrorOut)
{
	V_IsValidUChar32(uchar32 uVal); // 199
} /* size: 87, inline expansions: 1 (42 bytes) */

// <00619048> tier0/tier0_unicode.cpp:208
// variables: 7
// function calls: 7
void UnicodeConvertT<>(const char* pIn, short unsigned int* pOut, int nOutBytes, EStringConvertErrorPolicy ePolicy, int nInChars, EncodeFuncAdapter<short unsigned int, V_UChar32ToUTF16>& EncodeDst, EncodeLenFuncAdapter<V_UChar32ToUTF16Len>& EncodeDstLen, WrapSimpleCaseMapFunctor<char, V_UTF8ToUChar32, V_towlower32>& DecodeSrc)
{
	int nOut; // 210
	{
		int nOutElems; // 245
		int nMaxOut; // 249
		{
			uchar32 uVal; // 252
			bool bErr; // 254
			WrapSimpleCaseMapFunctor<char, V_UTF8ToUChar32, V_towlower32>::operator(
					const char* pUTF,
					uchar32& uValueOut,
					bool& bErrorOut);  // 255
			V_UChar32ToUTF16Len(uchar32 uVal); // 294
			EncodeLenFuncAdapter<V_UChar32ToUTF16Len>::operator(
					uchar32 uVal);  // 271
			EncodeFuncAdapter<short unsigned int, V_UChar32ToUTF16>::operator(
					uchar32 uVal,
					short unsigned int* pUTF);  // 282
		}
	}
	{
		uchar32 uVal; // 222
		bool bErr; // 224
		WrapSimpleCaseMapFunctor<char, V_UTF8ToUChar32, V_towlower32>::operator(
				const char* pUTF,
				uchar32& uValueOut,
				bool& bErrorOut);  // 225
		V_UChar32ToUTF16Len(uchar32 uVal); // 294
		EncodeLenFuncAdapter<V_UChar32ToUTF16Len>::operator(
				uchar32 uVal);  // 226
	}
	{
	}
} /* size: 0, variables: 1 */

// <00618D58> tier0/tier0_unicode.cpp:208
// variables: 7
// function calls: 4
void UnicodeConvertT<>(const char* pIn, wchar_t* pOut, int nOutBytes, EStringConvertErrorPolicy ePolicy, int nInChars, EncodeFuncAdapter<wchar_t, V_UChar32ToUTF32>& EncodeDst, EncodeLenFuncAdapter<V_UChar32ToUTF32Len>& EncodeDstLen, WrapSimpleCaseMapFunctor<char, V_UTF8ToUChar32, V_towlower32>& DecodeSrc)
{
	int nOut; // 210
	{
		int nOutElems; // 245
		int nMaxOut; // 249
		{
			uchar32 uVal; // 252
			bool bErr; // 254
			WrapSimpleCaseMapFunctor<char, V_UTF8ToUChar32, V_towlower32>::operator(
					const char* pUTF,
					uchar32& uValueOut,
					bool& bErrorOut);  // 255
			V_UChar32ToUTF32(uchar32 uVal,
					uchar32* pUTF32);  // 297
			EncodeFuncAdapter<wchar_t, V_UChar32ToUTF32>::operator(
					uchar32 uVal,
					wchar_t* pUTF);  // 282
		}
	}
	{
		uchar32 uVal; // 222
		bool bErr; // 224
		WrapSimpleCaseMapFunctor<char, V_UTF8ToUChar32, V_towlower32>::operator(
				const char* pUTF,
				uchar32& uValueOut,
				bool& bErrorOut);  // 225
	}
	{
	}
} /* size: 0, variables: 1 */

// <006188C5> tier0/tier0_unicode.cpp:208
// variables: 7
// function calls: 12
void UnicodeConvertT<>(const char* pIn, char* pOut, int nOutBytes, EStringConvertErrorPolicy ePolicy, int nInChars, EncodeFuncAdapter<char, V_UChar32ToUTF8>& EncodeDst, EncodeLenFuncAdapter<V_UChar32ToUTF8Len>& EncodeDstLen, WrapSimpleCaseMapFunctor<char, V_UTF8ToUChar32, V_towlower32>& DecodeSrc)
{
	int nOut; // 210
	{
		int nOutElems; // 245
		int nMaxOut; // 249
		{
			uchar32 uVal; // 252
			bool bErr; // 254
			WrapSimpleCaseMapFunctor<char, V_UTF8ToUChar32, V_towlower32>::operator(
					const char* pUTF,
					uchar32& uValueOut,
					bool& bErrorOut);  // 255
			V_UChar32ToUTF8Len(uchar32 uVal); // 50
			V_UChar32ToUTF8Len(uchar32 uVal); // 294
			EncodeLenFuncAdapter<V_UChar32ToUTF8Len>::operator(
					uchar32 uVal);  // 271
			EncodeFuncAdapter<char, V_UChar32ToUTF8>::operator(
					uchar32 uVal,
					char* pUTF);  // 282
			V_UChar32ToUTF8Len(uchar32 uVal); // 50
			V_UChar32ToUTF8Len(uchar32 uVal); // 294
			EncodeLenFuncAdapter<V_UChar32ToUTF8Len>::operator(
					uchar32 uVal);  // 278
		}
	}
	{
		uchar32 uVal; // 222
		bool bErr; // 224
		WrapSimpleCaseMapFunctor<char, V_UTF8ToUChar32, V_towlower32>::operator(
				const char* pUTF,
				uchar32& uValueOut,
				bool& bErrorOut);  // 225
		V_UChar32ToUTF8Len(uchar32 uVal); // 50
		V_UChar32ToUTF8Len(uchar32 uVal); // 294
		EncodeLenFuncAdapter<V_UChar32ToUTF8Len>::operator(
				uchar32 uVal);  // 226
	}
	{
	}
} /* size: 0, variables: 1 */

// <006185D5> tier0/tier0_unicode.cpp:208
// variables: 7
// function calls: 4
void UnicodeConvertT<>(const short unsigned int* pIn, wchar_t* pOut, int nOutBytes, EStringConvertErrorPolicy ePolicy, int nInChars, EncodeFuncAdapter<wchar_t, V_UChar32ToUTF32>& EncodeDst, EncodeLenFuncAdapter<V_UChar32ToUTF32Len>& EncodeDstLen, WrapSimpleCaseMapFunctor<short unsigned int, V_UTF16ToUChar32, V_towlower32>& DecodeSrc)
{
	int nOut; // 210
	{
		int nOutElems; // 245
		int nMaxOut; // 249
		{
			uchar32 uVal; // 252
			bool bErr; // 254
			WrapSimpleCaseMapFunctor<short unsigned int, V_UTF16ToUChar32, V_towlower32>::operator(
					const short unsigned int* pUTF,
					uchar32& uValueOut,
					bool& bErrorOut);  // 255
			V_UChar32ToUTF32(uchar32 uVal,
					uchar32* pUTF32);  // 297
			EncodeFuncAdapter<wchar_t, V_UChar32ToUTF32>::operator(
					uchar32 uVal,
					wchar_t* pUTF);  // 282
		}
	}
	{
		uchar32 uVal; // 222
		bool bErr; // 224
		WrapSimpleCaseMapFunctor<short unsigned int, V_UTF16ToUChar32, V_towlower32>::operator(
				const short unsigned int* pUTF,
				uchar32& uValueOut,
				bool& bErrorOut);  // 225
	}
	{
	}
} /* size: 0, variables: 1 */

// <00618236> tier0/tier0_unicode.cpp:208
// variables: 7
// function calls: 7
void UnicodeConvertT<>(const short unsigned int* pIn, short unsigned int* pOut, int nOutBytes, EStringConvertErrorPolicy ePolicy, int nInChars, EncodeFuncAdapter<short unsigned int, V_UChar32ToUTF16>& EncodeDst, EncodeLenFuncAdapter<V_UChar32ToUTF16Len>& EncodeDstLen, WrapSimpleCaseMapFunctor<short unsigned int, V_UTF16ToUChar32, V_towlower32>& DecodeSrc)
{
	int nOut; // 210
	{
		int nOutElems; // 245
		int nMaxOut; // 249
		{
			uchar32 uVal; // 252
			bool bErr; // 254
			WrapSimpleCaseMapFunctor<short unsigned int, V_UTF16ToUChar32, V_towlower32>::operator(
					const short unsigned int* pUTF,
					uchar32& uValueOut,
					bool& bErrorOut);  // 255
			V_UChar32ToUTF16Len(uchar32 uVal); // 294
			EncodeLenFuncAdapter<V_UChar32ToUTF16Len>::operator(
					uchar32 uVal);  // 271
			EncodeFuncAdapter<short unsigned int, V_UChar32ToUTF16>::operator(
					uchar32 uVal,
					short unsigned int* pUTF);  // 282
		}
	}
	{
		uchar32 uVal; // 222
		bool bErr; // 224
		WrapSimpleCaseMapFunctor<short unsigned int, V_UTF16ToUChar32, V_towlower32>::operator(
				const short unsigned int* pUTF,
				uchar32& uValueOut,
				bool& bErrorOut);  // 225
		V_UChar32ToUTF16Len(uchar32 uVal); // 294
		EncodeLenFuncAdapter<V_UChar32ToUTF16Len>::operator(
				uchar32 uVal);  // 226
	}
	{
	}
} /* size: 0, variables: 1 */

// <00617F46> tier0/tier0_unicode.cpp:208
// variables: 7
// function calls: 4
void UnicodeConvertT<>(const wchar_t* pIn, wchar_t* pOut, int nOutBytes, EStringConvertErrorPolicy ePolicy, int nInChars, EncodeFuncAdapter<wchar_t, V_UChar32ToUTF32>& EncodeDst, EncodeLenFuncAdapter<V_UChar32ToUTF32Len>& EncodeDstLen, WrapSimpleCaseMapFunctor<wchar_t, V_UTF32ToUChar32, V_towlower32>& DecodeSrc)
{
	int nOut; // 210
	{
		int nOutElems; // 245
		int nMaxOut; // 249
		{
			uchar32 uVal; // 252
			bool bErr; // 254
			WrapSimpleCaseMapFunctor<wchar_t, V_UTF32ToUChar32, V_towlower32>::operator(
					const wchar_t* pUTF,
					uchar32& uValueOut,
					bool& bErrorOut);  // 255
			V_UChar32ToUTF32(uchar32 uVal,
					uchar32* pUTF32);  // 297
			EncodeFuncAdapter<wchar_t, V_UChar32ToUTF32>::operator(
					uchar32 uVal,
					wchar_t* pUTF);  // 282
		}
	}
	{
		uchar32 uVal; // 222
		bool bErr; // 224
		WrapSimpleCaseMapFunctor<wchar_t, V_UTF32ToUChar32, V_towlower32>::operator(
				const wchar_t* pUTF,
				uchar32& uValueOut,
				bool& bErrorOut);  // 225
	}
	{
	}
} /* size: 0, variables: 1 */

// <00617D2E> tier0/tier0_unicode.cpp:208
// variables: 7
// function calls: 2
void UnicodeConvertT<>(const char* pIn, wchar_t* pOut, int nOutBytes, EStringConvertErrorPolicy ePolicy, LinguisticToLowerFunctor<char, V_UTF8ToUChar32>& DecodeSrc, int nInChars, EncodeFuncAdapter<wchar_t, V_UChar32ToUTF32>& EncodeDst, EncodeLenFuncAdapter<V_UChar32ToUTF32Len>& EncodeDstLen)
{
	int nOut; // 210
	{
		int nOutElems; // 245
		int nMaxOut; // 249
		{
			uchar32 uVal; // 252
			bool bErr; // 254
			V_UChar32ToUTF32(uchar32 uVal,
					uchar32* pUTF32);  // 297
			EncodeFuncAdapter<wchar_t, V_UChar32ToUTF32>::operator(
					uchar32 uVal,
					wchar_t* pUTF);  // 282
		}
	}
	{
		uchar32 uVal; // 222
		bool bErr; // 224
	}
	{
	}
} /* size: 0, variables: 1 */

// <00617A3E> tier0/tier0_unicode.cpp:208
// variables: 7
// function calls: 5
void UnicodeConvertT<>(const char* pIn, short unsigned int* pOut, int nOutBytes, EStringConvertErrorPolicy ePolicy, LinguisticToLowerFunctor<char, V_UTF8ToUChar32>& DecodeSrc, int nInChars, EncodeFuncAdapter<short unsigned int, V_UChar32ToUTF16>& EncodeDst, EncodeLenFuncAdapter<V_UChar32ToUTF16Len>& EncodeDstLen)
{
	int nOut; // 210
	{
		int nOutElems; // 245
		int nMaxOut; // 249
		{
			uchar32 uVal; // 252
			bool bErr; // 254
			V_UChar32ToUTF16Len(uchar32 uVal); // 294
			EncodeLenFuncAdapter<V_UChar32ToUTF16Len>::operator(
					uchar32 uVal);  // 271
			EncodeFuncAdapter<short unsigned int, V_UChar32ToUTF16>::operator(
					uchar32 uVal,
					short unsigned int* pUTF);  // 282
		}
	}
	{
		uchar32 uVal; // 222
		bool bErr; // 224
		V_UChar32ToUTF16Len(uchar32 uVal); // 294
		EncodeLenFuncAdapter<V_UChar32ToUTF16Len>::operator(
				uchar32 uVal);  // 226
	}
	{
	}
} /* size: 0, variables: 1 */

// <00617678> tier0/tier0_unicode.cpp:208
// variables: 7
// function calls: 10
void UnicodeConvertT<>(const char* pIn, char* pOut, int nOutBytes, EStringConvertErrorPolicy ePolicy, LinguisticToLowerFunctor<char, V_UTF8ToUChar32>& DecodeSrc, int nInChars, EncodeFuncAdapter<char, V_UChar32ToUTF8>& EncodeDst, EncodeLenFuncAdapter<V_UChar32ToUTF8Len>& EncodeDstLen)
{
	int nOut; // 210
	{
		int nOutElems; // 245
		int nMaxOut; // 249
		{
			uchar32 uVal; // 252
			bool bErr; // 254
			V_UChar32ToUTF8Len(uchar32 uVal); // 50
			V_UChar32ToUTF8Len(uchar32 uVal); // 294
			EncodeLenFuncAdapter<V_UChar32ToUTF8Len>::operator(
					uchar32 uVal);  // 271
			EncodeFuncAdapter<char, V_UChar32ToUTF8>::operator(
					uchar32 uVal,
					char* pUTF);  // 282
			V_UChar32ToUTF8Len(uchar32 uVal); // 50
			V_UChar32ToUTF8Len(uchar32 uVal); // 294
			EncodeLenFuncAdapter<V_UChar32ToUTF8Len>::operator(
					uchar32 uVal);  // 278
		}
	}
	{
		uchar32 uVal; // 222
		bool bErr; // 224
		V_UChar32ToUTF8Len(uchar32 uVal); // 50
		V_UChar32ToUTF8Len(uchar32 uVal); // 294
		EncodeLenFuncAdapter<V_UChar32ToUTF8Len>::operator(
				uchar32 uVal);  // 226
	}
	{
	}
} /* size: 0, variables: 1 */

// <0061730B> tier0/tier0_unicode.cpp:208
// variables: 7
// function calls: 2
void UnicodeConvertT<>(const short unsigned int* pIn, wchar_t* pOut, int nOutBytes, EStringConvertErrorPolicy ePolicy, LinguisticToLowerFunctor<short unsigned int, V_UTF16ToUChar32>& DecodeSrc, int nInChars, EncodeFuncAdapter<wchar_t, V_UChar32ToUTF32>& EncodeDst, EncodeLenFuncAdapter<V_UChar32ToUTF32Len>& EncodeDstLen)
{
	int nOut; // 210
	{
		int nOutElems; // 245
		int nMaxOut; // 249
		{
			uchar32 uVal; // 252
			bool bErr; // 254
			V_UChar32ToUTF32(uchar32 uVal,
					uchar32* pUTF32);  // 297
			EncodeFuncAdapter<wchar_t, V_UChar32ToUTF32>::operator(
					uchar32 uVal,
					wchar_t* pUTF);  // 282
		}
	}
	{
		uchar32 uVal; // 222
		bool bErr; // 224
	}
	{
	}
} /* size: 0, variables: 1 */

// <0061701B> tier0/tier0_unicode.cpp:208
// variables: 7
// function calls: 5
void UnicodeConvertT<>(const short unsigned int* pIn, short unsigned int* pOut, int nOutBytes, EStringConvertErrorPolicy ePolicy, LinguisticToLowerFunctor<short unsigned int, V_UTF16ToUChar32>& DecodeSrc, int nInChars, EncodeFuncAdapter<short unsigned int, V_UChar32ToUTF16>& EncodeDst, EncodeLenFuncAdapter<V_UChar32ToUTF16Len>& EncodeDstLen)
{
	int nOut; // 210
	{
		int nOutElems; // 245
		int nMaxOut; // 249
		{
			uchar32 uVal; // 252
			bool bErr; // 254
			V_UChar32ToUTF16Len(uchar32 uVal); // 294
			EncodeLenFuncAdapter<V_UChar32ToUTF16Len>::operator(
					uchar32 uVal);  // 271
			EncodeFuncAdapter<short unsigned int, V_UChar32ToUTF16>::operator(
					uchar32 uVal,
					short unsigned int* pUTF);  // 282
		}
	}
	{
		uchar32 uVal; // 222
		bool bErr; // 224
		V_UChar32ToUTF16Len(uchar32 uVal); // 294
		EncodeLenFuncAdapter<V_UChar32ToUTF16Len>::operator(
				uchar32 uVal);  // 226
	}
	{
	}
} /* size: 0, variables: 1 */

// <00616CB0> tier0/tier0_unicode.cpp:208
// variables: 7
// function calls: 2
void UnicodeConvertT<>(const wchar_t* pIn, wchar_t* pOut, int nOutBytes, EStringConvertErrorPolicy ePolicy, LinguisticToLowerFunctor<wchar_t, V_UTF32ToUChar32>& DecodeSrc, int nInChars, EncodeFuncAdapter<wchar_t, V_UChar32ToUTF32>& EncodeDst, EncodeLenFuncAdapter<V_UChar32ToUTF32Len>& EncodeDstLen)
{
	int nOut; // 210
	{
		int nOutElems; // 245
		int nMaxOut; // 249
		{
			uchar32 uVal; // 252
			bool bErr; // 254
			V_UChar32ToUTF32(uchar32 uVal,
					uchar32* pUTF32);  // 297
			EncodeFuncAdapter<wchar_t, V_UChar32ToUTF32>::operator(
					uchar32 uVal,
					wchar_t* pUTF);  // 282
		}
	}
	{
		uchar32 uVal; // 222
		bool bErr; // 224
	}
	{
	}
} /* size: 0, variables: 1 */

// <006167BE> tier0/tier0_unicode.cpp:208
// variables: 7
// function calls: 7
void UnicodeConvertT<>(const char* pIn, short unsigned int* pOut, int nOutBytes, EStringConvertErrorPolicy ePolicy, int nInChars, EncodeFuncAdapter<short unsigned int, V_UChar32ToUTF16>& EncodeDst, EncodeLenFuncAdapter<V_UChar32ToUTF16Len>& EncodeDstLen, WrapSimpleCaseMapFunctor<char, V_UTF8ToUChar32, V_towupper32>& DecodeSrc)
{
	int nOut; // 210
	{
		int nOutElems; // 245
		int nMaxOut; // 249
		{
			uchar32 uVal; // 252
			bool bErr; // 254
			WrapSimpleCaseMapFunctor<char, V_UTF8ToUChar32, V_towupper32>::operator(
					const char* pUTF,
					uchar32& uValueOut,
					bool& bErrorOut);  // 255
			V_UChar32ToUTF16Len(uchar32 uVal); // 294
			EncodeLenFuncAdapter<V_UChar32ToUTF16Len>::operator(
					uchar32 uVal);  // 271
			EncodeFuncAdapter<short unsigned int, V_UChar32ToUTF16>::operator(
					uchar32 uVal,
					short unsigned int* pUTF);  // 282
		}
	}
	{
		uchar32 uVal; // 222
		bool bErr; // 224
		WrapSimpleCaseMapFunctor<char, V_UTF8ToUChar32, V_towupper32>::operator(
				const char* pUTF,
				uchar32& uValueOut,
				bool& bErrorOut);  // 225
		V_UChar32ToUTF16Len(uchar32 uVal); // 294
		EncodeLenFuncAdapter<V_UChar32ToUTF16Len>::operator(
				uchar32 uVal);  // 226
	}
	{
	}
} /* size: 0, variables: 1 */

// <006164CE> tier0/tier0_unicode.cpp:208
// variables: 7
// function calls: 4
void UnicodeConvertT<>(const char* pIn, wchar_t* pOut, int nOutBytes, EStringConvertErrorPolicy ePolicy, int nInChars, EncodeFuncAdapter<wchar_t, V_UChar32ToUTF32>& EncodeDst, EncodeLenFuncAdapter<V_UChar32ToUTF32Len>& EncodeDstLen, WrapSimpleCaseMapFunctor<char, V_UTF8ToUChar32, V_towupper32>& DecodeSrc)
{
	int nOut; // 210
	{
		int nOutElems; // 245
		int nMaxOut; // 249
		{
			uchar32 uVal; // 252
			bool bErr; // 254
			WrapSimpleCaseMapFunctor<char, V_UTF8ToUChar32, V_towupper32>::operator(
					const char* pUTF,
					uchar32& uValueOut,
					bool& bErrorOut);  // 255
			V_UChar32ToUTF32(uchar32 uVal,
					uchar32* pUTF32);  // 297
			EncodeFuncAdapter<wchar_t, V_UChar32ToUTF32>::operator(
					uchar32 uVal,
					wchar_t* pUTF);  // 282
		}
	}
	{
		uchar32 uVal; // 222
		bool bErr; // 224
		WrapSimpleCaseMapFunctor<char, V_UTF8ToUChar32, V_towupper32>::operator(
				const char* pUTF,
				uchar32& uValueOut,
				bool& bErrorOut);  // 225
	}
	{
	}
} /* size: 0, variables: 1 */

// <0061603B> tier0/tier0_unicode.cpp:208
// variables: 7
// function calls: 12
void UnicodeConvertT<>(const char* pIn, char* pOut, int nOutBytes, EStringConvertErrorPolicy ePolicy, int nInChars, EncodeFuncAdapter<char, V_UChar32ToUTF8>& EncodeDst, EncodeLenFuncAdapter<V_UChar32ToUTF8Len>& EncodeDstLen, WrapSimpleCaseMapFunctor<char, V_UTF8ToUChar32, V_towupper32>& DecodeSrc)
{
	int nOut; // 210
	{
		int nOutElems; // 245
		int nMaxOut; // 249
		{
			uchar32 uVal; // 252
			bool bErr; // 254
			WrapSimpleCaseMapFunctor<char, V_UTF8ToUChar32, V_towupper32>::operator(
					const char* pUTF,
					uchar32& uValueOut,
					bool& bErrorOut);  // 255
			V_UChar32ToUTF8Len(uchar32 uVal); // 50
			V_UChar32ToUTF8Len(uchar32 uVal); // 294
			EncodeLenFuncAdapter<V_UChar32ToUTF8Len>::operator(
					uchar32 uVal);  // 271
			EncodeFuncAdapter<char, V_UChar32ToUTF8>::operator(
					uchar32 uVal,
					char* pUTF);  // 282
			V_UChar32ToUTF8Len(uchar32 uVal); // 50
			V_UChar32ToUTF8Len(uchar32 uVal); // 294
			EncodeLenFuncAdapter<V_UChar32ToUTF8Len>::operator(
					uchar32 uVal);  // 278
		}
	}
	{
		uchar32 uVal; // 222
		bool bErr; // 224
		WrapSimpleCaseMapFunctor<char, V_UTF8ToUChar32, V_towupper32>::operator(
				const char* pUTF,
				uchar32& uValueOut,
				bool& bErrorOut);  // 225
		V_UChar32ToUTF8Len(uchar32 uVal); // 50
		V_UChar32ToUTF8Len(uchar32 uVal); // 294
		EncodeLenFuncAdapter<V_UChar32ToUTF8Len>::operator(
				uchar32 uVal);  // 226
	}
	{
	}
} /* size: 0, variables: 1 */

// <00615D4B> tier0/tier0_unicode.cpp:208
// variables: 7
// function calls: 4
void UnicodeConvertT<>(const short unsigned int* pIn, wchar_t* pOut, int nOutBytes, EStringConvertErrorPolicy ePolicy, int nInChars, EncodeFuncAdapter<wchar_t, V_UChar32ToUTF32>& EncodeDst, EncodeLenFuncAdapter<V_UChar32ToUTF32Len>& EncodeDstLen, WrapSimpleCaseMapFunctor<short unsigned int, V_UTF16ToUChar32, V_towupper32>& DecodeSrc)
{
	int nOut; // 210
	{
		int nOutElems; // 245
		int nMaxOut; // 249
		{
			uchar32 uVal; // 252
			bool bErr; // 254
			WrapSimpleCaseMapFunctor<short unsigned int, V_UTF16ToUChar32, V_towupper32>::operator(
					const short unsigned int* pUTF,
					uchar32& uValueOut,
					bool& bErrorOut);  // 255
			V_UChar32ToUTF32(uchar32 uVal,
					uchar32* pUTF32);  // 297
			EncodeFuncAdapter<wchar_t, V_UChar32ToUTF32>::operator(
					uchar32 uVal,
					wchar_t* pUTF);  // 282
		}
	}
	{
		uchar32 uVal; // 222
		bool bErr; // 224
		WrapSimpleCaseMapFunctor<short unsigned int, V_UTF16ToUChar32, V_towupper32>::operator(
				const short unsigned int* pUTF,
				uchar32& uValueOut,
				bool& bErrorOut);  // 225
	}
	{
	}
} /* size: 0, variables: 1 */

// <006159AC> tier0/tier0_unicode.cpp:208
// variables: 7
// function calls: 7
void UnicodeConvertT<>(const short unsigned int* pIn, short unsigned int* pOut, int nOutBytes, EStringConvertErrorPolicy ePolicy, int nInChars, EncodeFuncAdapter<short unsigned int, V_UChar32ToUTF16>& EncodeDst, EncodeLenFuncAdapter<V_UChar32ToUTF16Len>& EncodeDstLen, WrapSimpleCaseMapFunctor<short unsigned int, V_UTF16ToUChar32, V_towupper32>& DecodeSrc)
{
	int nOut; // 210
	{
		int nOutElems; // 245
		int nMaxOut; // 249
		{
			uchar32 uVal; // 252
			bool bErr; // 254
			WrapSimpleCaseMapFunctor<short unsigned int, V_UTF16ToUChar32, V_towupper32>::operator(
					const short unsigned int* pUTF,
					uchar32& uValueOut,
					bool& bErrorOut);  // 255
			V_UChar32ToUTF16Len(uchar32 uVal); // 294
			EncodeLenFuncAdapter<V_UChar32ToUTF16Len>::operator(
					uchar32 uVal);  // 271
			EncodeFuncAdapter<short unsigned int, V_UChar32ToUTF16>::operator(
					uchar32 uVal,
					short unsigned int* pUTF);  // 282
		}
	}
	{
		uchar32 uVal; // 222
		bool bErr; // 224
		WrapSimpleCaseMapFunctor<short unsigned int, V_UTF16ToUChar32, V_towupper32>::operator(
				const short unsigned int* pUTF,
				uchar32& uValueOut,
				bool& bErrorOut);  // 225
		V_UChar32ToUTF16Len(uchar32 uVal); // 294
		EncodeLenFuncAdapter<V_UChar32ToUTF16Len>::operator(
				uchar32 uVal);  // 226
	}
	{
	}
} /* size: 0, variables: 1 */

// <006156BC> tier0/tier0_unicode.cpp:208
// variables: 7
// function calls: 4
void UnicodeConvertT<>(const wchar_t* pIn, wchar_t* pOut, int nOutBytes, EStringConvertErrorPolicy ePolicy, int nInChars, EncodeFuncAdapter<wchar_t, V_UChar32ToUTF32>& EncodeDst, EncodeLenFuncAdapter<V_UChar32ToUTF32Len>& EncodeDstLen, WrapSimpleCaseMapFunctor<wchar_t, V_UTF32ToUChar32, V_towupper32>& DecodeSrc)
{
	int nOut; // 210
	{
		int nOutElems; // 245
		int nMaxOut; // 249
		{
			uchar32 uVal; // 252
			bool bErr; // 254
			WrapSimpleCaseMapFunctor<wchar_t, V_UTF32ToUChar32, V_towupper32>::operator(
					const wchar_t* pUTF,
					uchar32& uValueOut,
					bool& bErrorOut);  // 255
			V_UChar32ToUTF32(uchar32 uVal,
					uchar32* pUTF32);  // 297
			EncodeFuncAdapter<wchar_t, V_UChar32ToUTF32>::operator(
					uchar32 uVal,
					wchar_t* pUTF);  // 282
		}
	}
	{
		uchar32 uVal; // 222
		bool bErr; // 224
		WrapSimpleCaseMapFunctor<wchar_t, V_UTF32ToUChar32, V_towupper32>::operator(
				const wchar_t* pUTF,
				uchar32& uValueOut,
				bool& bErrorOut);  // 225
	}
	{
	}
} /* size: 0, variables: 1 */

// <0061532B> tier0/tier0_unicode.cpp:208
// variables: 7
// function calls: 7
void UnicodeConvertT<>(const char* pIn, short unsigned int* pOut, int nOutBytes, EStringConvertErrorPolicy ePolicy, LinguisticToUpperFunctor<char, V_UTF8ToUChar32>& DecodeSrc, int nInChars, EncodeFuncAdapter<short unsigned int, V_UChar32ToUTF16>& EncodeDst, EncodeLenFuncAdapter<V_UChar32ToUTF16Len>& EncodeDstLen)
{
	int nOut; // 210
	{
		int nOutElems; // 245
		int nMaxOut; // 249
		{
			uchar32 uVal; // 252
			bool bErr; // 254
			LinguisticToUpperFunctor<char, V_UTF8ToUChar32>::operator(
					const char* pUTF,
					uchar32& uValueOut,
					bool& bErrorOut);  // 255
			V_UChar32ToUTF16Len(uchar32 uVal); // 294
			EncodeLenFuncAdapter<V_UChar32ToUTF16Len>::operator(
					uchar32 uVal);  // 271
			EncodeFuncAdapter<short unsigned int, V_UChar32ToUTF16>::operator(
					uchar32 uVal,
					short unsigned int* pUTF);  // 282
		}
	}
	{
		uchar32 uVal; // 222
		bool bErr; // 224
		LinguisticToUpperFunctor<char, V_UTF8ToUChar32>::operator(
				const char* pUTF,
				uchar32& uValueOut,
				bool& bErrorOut);  // 225
		V_UChar32ToUTF16Len(uchar32 uVal); // 294
		EncodeLenFuncAdapter<V_UChar32ToUTF16Len>::operator(
				uchar32 uVal);  // 226
	}
	{
	}
} /* size: 0, variables: 1 */

// <0061500B> tier0/tier0_unicode.cpp:208
// variables: 7
// function calls: 4
void UnicodeConvertT<>(const char* pIn, wchar_t* pOut, int nOutBytes, EStringConvertErrorPolicy ePolicy, LinguisticToUpperFunctor<char, V_UTF8ToUChar32>& DecodeSrc, int nInChars, EncodeFuncAdapter<wchar_t, V_UChar32ToUTF32>& EncodeDst, EncodeLenFuncAdapter<V_UChar32ToUTF32Len>& EncodeDstLen)
{
	int nOut; // 210
	{
		int nOutElems; // 245
		int nMaxOut; // 249
		{
			uchar32 uVal; // 252
			bool bErr; // 254
			LinguisticToUpperFunctor<char, V_UTF8ToUChar32>::operator(
					const char* pUTF,
					uchar32& uValueOut,
					bool& bErrorOut);  // 255
			V_UChar32ToUTF32(uchar32 uVal,
					uchar32* pUTF32);  // 297
			EncodeFuncAdapter<wchar_t, V_UChar32ToUTF32>::operator(
					uchar32 uVal,
					wchar_t* pUTF);  // 282
		}
	}
	{
		uchar32 uVal; // 222
		bool bErr; // 224
		LinguisticToUpperFunctor<char, V_UTF8ToUChar32>::operator(
				const char* pUTF,
				uchar32& uValueOut,
				bool& bErrorOut);  // 225
	}
	{
	}
} /* size: 0, variables: 1 */

// <00614BB4> tier0/tier0_unicode.cpp:208
// variables: 7
// function calls: 12
void UnicodeConvertT<>(const char* pIn, char* pOut, int nOutBytes, EStringConvertErrorPolicy ePolicy, LinguisticToUpperFunctor<char, V_UTF8ToUChar32>& DecodeSrc, int nInChars, EncodeFuncAdapter<char, V_UChar32ToUTF8>& EncodeDst, EncodeLenFuncAdapter<V_UChar32ToUTF8Len>& EncodeDstLen)
{
	int nOut; // 210
	{
		int nOutElems; // 245
		int nMaxOut; // 249
		{
			uchar32 uVal; // 252
			bool bErr; // 254
			LinguisticToUpperFunctor<char, V_UTF8ToUChar32>::operator(
					const char* pUTF,
					uchar32& uValueOut,
					bool& bErrorOut);  // 255
			V_UChar32ToUTF8Len(uchar32 uVal); // 50
			V_UChar32ToUTF8Len(uchar32 uVal); // 294
			EncodeLenFuncAdapter<V_UChar32ToUTF8Len>::operator(
					uchar32 uVal);  // 271
			EncodeFuncAdapter<char, V_UChar32ToUTF8>::operator(
					uchar32 uVal,
					char* pUTF);  // 282
			V_UChar32ToUTF8Len(uchar32 uVal); // 50
			V_UChar32ToUTF8Len(uchar32 uVal); // 294
			EncodeLenFuncAdapter<V_UChar32ToUTF8Len>::operator(
					uchar32 uVal);  // 278
		}
	}
	{
		uchar32 uVal; // 222
		bool bErr; // 224
		LinguisticToUpperFunctor<char, V_UTF8ToUChar32>::operator(
				const char* pUTF,
				uchar32& uValueOut,
				bool& bErrorOut);  // 225
		V_UChar32ToUTF8Len(uchar32 uVal); // 50
		V_UChar32ToUTF8Len(uchar32 uVal); // 294
		EncodeLenFuncAdapter<V_UChar32ToUTF8Len>::operator(
				uchar32 uVal);  // 226
	}
	{
	}
} /* size: 0, variables: 1 */

// <00614894> tier0/tier0_unicode.cpp:208
// variables: 7
// function calls: 4
void UnicodeConvertT<>(const short unsigned int* pIn, wchar_t* pOut, int nOutBytes, EStringConvertErrorPolicy ePolicy, LinguisticToUpperFunctor<short unsigned int, V_UTF16ToUChar32>& DecodeSrc, int nInChars, EncodeFuncAdapter<wchar_t, V_UChar32ToUTF32>& EncodeDst, EncodeLenFuncAdapter<V_UChar32ToUTF32Len>& EncodeDstLen)
{
	int nOut; // 210
	{
		int nOutElems; // 245
		int nMaxOut; // 249
		{
			uchar32 uVal; // 252
			bool bErr; // 254
			LinguisticToUpperFunctor<short unsigned int, V_UTF16ToUChar32>::operator(
					const short unsigned int* pUTF,
					uchar32& uValueOut,
					bool& bErrorOut);  // 255
			V_UChar32ToUTF32(uchar32 uVal,
					uchar32* pUTF32);  // 297
			EncodeFuncAdapter<wchar_t, V_UChar32ToUTF32>::operator(
					uchar32 uVal,
					wchar_t* pUTF);  // 282
		}
	}
	{
		uchar32 uVal; // 222
		bool bErr; // 224
		LinguisticToUpperFunctor<short unsigned int, V_UTF16ToUChar32>::operator(
				const short unsigned int* pUTF,
				uchar32& uValueOut,
				bool& bErrorOut);  // 225
	}
	{
	}
} /* size: 0, variables: 1 */

// <00614503> tier0/tier0_unicode.cpp:208
// variables: 7
// function calls: 7
void UnicodeConvertT<>(const short unsigned int* pIn, short unsigned int* pOut, int nOutBytes, EStringConvertErrorPolicy ePolicy, LinguisticToUpperFunctor<short unsigned int, V_UTF16ToUChar32>& DecodeSrc, int nInChars, EncodeFuncAdapter<short unsigned int, V_UChar32ToUTF16>& EncodeDst, EncodeLenFuncAdapter<V_UChar32ToUTF16Len>& EncodeDstLen)
{
	int nOut; // 210
	{
		int nOutElems; // 245
		int nMaxOut; // 249
		{
			uchar32 uVal; // 252
			bool bErr; // 254
			LinguisticToUpperFunctor<short unsigned int, V_UTF16ToUChar32>::operator(
					const short unsigned int* pUTF,
					uchar32& uValueOut,
					bool& bErrorOut);  // 255
			V_UChar32ToUTF16Len(uchar32 uVal); // 294
			EncodeLenFuncAdapter<V_UChar32ToUTF16Len>::operator(
					uchar32 uVal);  // 271
			EncodeFuncAdapter<short unsigned int, V_UChar32ToUTF16>::operator(
					uchar32 uVal,
					short unsigned int* pUTF);  // 282
		}
	}
	{
		uchar32 uVal; // 222
		bool bErr; // 224
		LinguisticToUpperFunctor<short unsigned int, V_UTF16ToUChar32>::operator(
				const short unsigned int* pUTF,
				uchar32& uValueOut,
				bool& bErrorOut);  // 225
		V_UChar32ToUTF16Len(uchar32 uVal); // 294
		EncodeLenFuncAdapter<V_UChar32ToUTF16Len>::operator(
				uchar32 uVal);  // 226
	}
	{
	}
} /* size: 0, variables: 1 */

// <006141E3> tier0/tier0_unicode.cpp:208
// variables: 7
// function calls: 4
void UnicodeConvertT<>(const wchar_t* pIn, wchar_t* pOut, int nOutBytes, EStringConvertErrorPolicy ePolicy, LinguisticToUpperFunctor<wchar_t, V_UTF32ToUChar32>& DecodeSrc, int nInChars, EncodeFuncAdapter<wchar_t, V_UChar32ToUTF32>& EncodeDst, EncodeLenFuncAdapter<V_UChar32ToUTF32Len>& EncodeDstLen)
{
	int nOut; // 210
	{
		int nOutElems; // 245
		int nMaxOut; // 249
		{
			uchar32 uVal; // 252
			bool bErr; // 254
			LinguisticToUpperFunctor<wchar_t, V_UTF32ToUChar32>::operator(
					const wchar_t* pUTF,
					uchar32& uValueOut,
					bool& bErrorOut);  // 255
			V_UChar32ToUTF32(uchar32 uVal,
					uchar32* pUTF32);  // 297
			EncodeFuncAdapter<wchar_t, V_UChar32ToUTF32>::operator(
					uchar32 uVal,
					wchar_t* pUTF);  // 282
		}
	}
	{
		uchar32 uVal; // 222
		bool bErr; // 224
		LinguisticToUpperFunctor<wchar_t, V_UTF32ToUChar32>::operator(
				const wchar_t* pUTF,
				uchar32& uValueOut,
				bool& bErrorOut);  // 225
	}
	{
	}
} /* size: 0, variables: 1 */

// <00613D76> tier0/tier0_unicode.cpp:208
// variables: 7
// function calls: 12
void UnicodeConvertT<false, wchar_t, char, (anonymous namespace)::DecodeFuncAdapter<wchar_t, V_UTF32ToUChar32>, (anonymous namespace)::EncodeLenFuncAdapter<V_UChar32ToUTF8Len>, (anonymous namespace)::EncodeFuncAdapter<char, V_UChar32ToUTF8> >(const wchar_t* pIn, int nInChars, char* pOut, int nOutBytes, EStringConvertErrorPolicy ePolicy, EncodeFuncAdapter<char, V_UChar32ToUTF8>& EncodeDst, EncodeLenFuncAdapter<V_UChar32ToUTF8Len>& EncodeDstLen, DecodeFuncAdapter<wchar_t, V_UTF32ToUChar32>& DecodeSrc)
{
	int nOut; // 210
	{
		int nOutElems; // 245
		int nMaxOut; // 249
		{
			uchar32 uVal; // 252
			bool bErr; // 254
			DecodeFuncAdapter<wchar_t, V_UTF32ToUChar32>::operator(
					const wchar_t* pUTF,
					uchar32& uVal,
					bool& bErr);  // 255
			V_UChar32ToUTF8Len(uchar32 uVal); // 50
			V_UChar32ToUTF8Len(uchar32 uVal); // 294
			EncodeLenFuncAdapter<V_UChar32ToUTF8Len>::operator(
					uchar32 uVal);  // 271
			EncodeFuncAdapter<char, V_UChar32ToUTF8>::operator(
					uchar32 uVal,
					char* pUTF);  // 282
			V_UChar32ToUTF8Len(uchar32 uVal); // 50
			V_UChar32ToUTF8Len(uchar32 uVal); // 294
			EncodeLenFuncAdapter<V_UChar32ToUTF8Len>::operator(
					uchar32 uVal);  // 278
		}
	}
	{
		uchar32 uVal; // 222
		bool bErr; // 224
		DecodeFuncAdapter<wchar_t, V_UTF32ToUChar32>::operator(
				const wchar_t* pUTF,
				uchar32& uVal,
				bool& bErr);  // 225
		V_UChar32ToUTF8Len(uchar32 uVal); // 50
		V_UChar32ToUTF8Len(uchar32 uVal); // 294
		EncodeLenFuncAdapter<V_UChar32ToUTF8Len>::operator(
				uchar32 uVal);  // 226
	}
	{
	}
} /* size: 0, variables: 1 */

// <006139F3> tier0/tier0_unicode.cpp:208
// variables: 7
// function calls: 7
void UnicodeConvertT<false, wchar_t, short unsigned int, (anonymous namespace)::DecodeFuncAdapter<wchar_t, V_UTF32ToUChar32>, (anonymous namespace)::EncodeLenFuncAdapter<V_UChar32ToUTF16Len>, (anonymous namespace)::EncodeFuncAdapter<short unsigned int, V_UChar32ToUTF16> >(const wchar_t* pIn, int nInChars, short unsigned int* pOut, int nOutBytes, EStringConvertErrorPolicy ePolicy, EncodeFuncAdapter<short unsigned int, V_UChar32ToUTF16>& EncodeDst, EncodeLenFuncAdapter<V_UChar32ToUTF16Len>& EncodeDstLen, DecodeFuncAdapter<wchar_t, V_UTF32ToUChar32>& DecodeSrc)
{
	int nOut; // 210
	{
		int nOutElems; // 245
		int nMaxOut; // 249
		{
			uchar32 uVal; // 252
			bool bErr; // 254
			DecodeFuncAdapter<wchar_t, V_UTF32ToUChar32>::operator(
					const wchar_t* pUTF,
					uchar32& uVal,
					bool& bErr);  // 255
			V_UChar32ToUTF16Len(uchar32 uVal); // 294
			EncodeLenFuncAdapter<V_UChar32ToUTF16Len>::operator(
					uchar32 uVal);  // 271
			EncodeFuncAdapter<short unsigned int, V_UChar32ToUTF16>::operator(
					uchar32 uVal,
					short unsigned int* pUTF);  // 282
		}
	}
	{
		uchar32 uVal; // 222
		bool bErr; // 224
		DecodeFuncAdapter<wchar_t, V_UTF32ToUChar32>::operator(
				const wchar_t* pUTF,
				uchar32& uVal,
				bool& bErr);  // 225
		V_UChar32ToUTF16Len(uchar32 uVal); // 294
		EncodeLenFuncAdapter<V_UChar32ToUTF16Len>::operator(
				uchar32 uVal);  // 226
	}
	{
	}
} /* size: 0, variables: 1 */

// <00613723> tier0/tier0_unicode.cpp:208
// variables: 7
// function calls: 4
void UnicodeConvertT<>(const wchar_t* pIn, wchar_t* pOut, int nOutBytes, EStringConvertErrorPolicy ePolicy, int nInChars, EncodeFuncAdapter<wchar_t, V_UChar32ToUTF32>& EncodeDst, EncodeLenFuncAdapter<V_UChar32ToUTF32Len>& EncodeDstLen, WrapSimpleCaseMapFunctor<wchar_t, V_UTF32ToUChar32, V_toworiginal32>& DecodeSrc)
{
	int nOut; // 210
	{
		int nOutElems; // 245
		int nMaxOut; // 249
		{
			uchar32 uVal; // 252
			bool bErr; // 254
			WrapSimpleCaseMapFunctor<wchar_t, V_UTF32ToUChar32, V_toworiginal32>::operator(
					const wchar_t* pUTF,
					uchar32& uValueOut,
					bool& bErrorOut);  // 255
			V_UChar32ToUTF32(uchar32 uVal,
					uchar32* pUTF32);  // 297
			EncodeFuncAdapter<wchar_t, V_UChar32ToUTF32>::operator(
					uchar32 uVal,
					wchar_t* pUTF);  // 282
		}
	}
	{
		uchar32 uVal; // 222
		bool bErr; // 224
		WrapSimpleCaseMapFunctor<wchar_t, V_UTF32ToUChar32, V_toworiginal32>::operator(
				const wchar_t* pUTF,
				uchar32& uValueOut,
				bool& bErrorOut);  // 225
	}
	{
	}
} /* size: 0, variables: 1 */

// <0061349B> tier0/tier0_unicode.cpp:208
// variables: 7
// function calls: 4
void UnicodeConvertT<true, wchar_t, wchar_t, (anonymous namespace)::DecodeFuncAdapter<wchar_t, V_UTF32ToUChar32>, (anonymous namespace)::EncodeLenFuncAdapter<V_UChar32ToUTF32Len>, (anonymous namespace)::EncodeFuncAdapter<wchar_t, V_UChar32ToUTF32> >(const wchar_t* pIn, wchar_t* pOut, int nOutBytes, EStringConvertErrorPolicy ePolicy, int nInChars, EncodeFuncAdapter<wchar_t, V_UChar32ToUTF32>& EncodeDst, EncodeLenFuncAdapter<V_UChar32ToUTF32Len>& EncodeDstLen, DecodeFuncAdapter<wchar_t, V_UTF32ToUChar32>& DecodeSrc)
{
	int nOut; // 210
	{
		int nOutElems; // 245
		int nMaxOut; // 249
		{
			uchar32 uVal; // 252
			bool bErr; // 254
			DecodeFuncAdapter<wchar_t, V_UTF32ToUChar32>::operator(
					const wchar_t* pUTF,
					uchar32& uVal,
					bool& bErr);  // 255
			V_UChar32ToUTF32(uchar32 uVal,
					uchar32* pUTF32);  // 297
			EncodeFuncAdapter<wchar_t, V_UChar32ToUTF32>::operator(
					uchar32 uVal,
					wchar_t* pUTF);  // 282
		}
	}
	{
		uchar32 uVal; // 222
		bool bErr; // 224
		DecodeFuncAdapter<wchar_t, V_UTF32ToUChar32>::operator(
				const wchar_t* pUTF,
				uchar32& uVal,
				bool& bErr);  // 225
	}
	{
	}
} /* size: 0, variables: 1 */

// <00613138> tier0/tier0_unicode.cpp:208
// variables: 7
// function calls: 7
void UnicodeConvertT<true, wchar_t, short unsigned int, (anonymous namespace)::DecodeFuncAdapter<wchar_t, V_UTF32ToUChar32>, (anonymous namespace)::EncodeLenFuncAdapter<V_UChar32ToUTF16Len>, (anonymous namespace)::EncodeFuncAdapter<short unsigned int, V_UChar32ToUTF16> >(const wchar_t* pIn, short unsigned int* pOut, int nOutBytes, EStringConvertErrorPolicy ePolicy, int nInChars, EncodeFuncAdapter<short unsigned int, V_UChar32ToUTF16>& EncodeDst, EncodeLenFuncAdapter<V_UChar32ToUTF16Len>& EncodeDstLen, DecodeFuncAdapter<wchar_t, V_UTF32ToUChar32>& DecodeSrc)
{
	int nOut; // 210
	{
		int nOutElems; // 245
		int nMaxOut; // 249
		{
			uchar32 uVal; // 252
			bool bErr; // 254
			DecodeFuncAdapter<wchar_t, V_UTF32ToUChar32>::operator(
					const wchar_t* pUTF,
					uchar32& uVal,
					bool& bErr);  // 255
			V_UChar32ToUTF16Len(uchar32 uVal); // 294
			EncodeLenFuncAdapter<V_UChar32ToUTF16Len>::operator(
					uchar32 uVal);  // 271
			EncodeFuncAdapter<short unsigned int, V_UChar32ToUTF16>::operator(
					uchar32 uVal,
					short unsigned int* pUTF);  // 282
		}
	}
	{
		uchar32 uVal; // 222
		bool bErr; // 224
		DecodeFuncAdapter<wchar_t, V_UTF32ToUChar32>::operator(
				const wchar_t* pUTF,
				uchar32& uVal,
				bool& bErr);  // 225
		V_UChar32ToUTF16Len(uchar32 uVal); // 294
		EncodeLenFuncAdapter<V_UChar32ToUTF16Len>::operator(
				uchar32 uVal);  // 226
	}
	{
	}
} /* size: 0, variables: 1 */

// <00612CFD> tier0/tier0_unicode.cpp:208
// variables: 7
// function calls: 12
void UnicodeConvertT<true, wchar_t, char, (anonymous namespace)::DecodeFuncAdapter<wchar_t, V_UTF32ToUChar32>, (anonymous namespace)::EncodeLenFuncAdapter<V_UChar32ToUTF8Len>, (anonymous namespace)::EncodeFuncAdapter<char, V_UChar32ToUTF8> >(const wchar_t* pIn, char* pOut, int nOutBytes, EStringConvertErrorPolicy ePolicy, int nInChars, EncodeFuncAdapter<char, V_UChar32ToUTF8>& EncodeDst, EncodeLenFuncAdapter<V_UChar32ToUTF8Len>& EncodeDstLen, DecodeFuncAdapter<wchar_t, V_UTF32ToUChar32>& DecodeSrc)
{
	int nOut; // 210
	{
		int nOutElems; // 245
		int nMaxOut; // 249
		{
			uchar32 uVal; // 252
			bool bErr; // 254
			DecodeFuncAdapter<wchar_t, V_UTF32ToUChar32>::operator(
					const wchar_t* pUTF,
					uchar32& uVal,
					bool& bErr);  // 255
			V_UChar32ToUTF8Len(uchar32 uVal); // 50
			V_UChar32ToUTF8Len(uchar32 uVal); // 294
			EncodeLenFuncAdapter<V_UChar32ToUTF8Len>::operator(
					uchar32 uVal);  // 271
			EncodeFuncAdapter<char, V_UChar32ToUTF8>::operator(
					uchar32 uVal,
					char* pUTF);  // 282
			V_UChar32ToUTF8Len(uchar32 uVal); // 50
			V_UChar32ToUTF8Len(uchar32 uVal); // 294
			EncodeLenFuncAdapter<V_UChar32ToUTF8Len>::operator(
					uchar32 uVal);  // 278
		}
	}
	{
		uchar32 uVal; // 222
		bool bErr; // 224
		DecodeFuncAdapter<wchar_t, V_UTF32ToUChar32>::operator(
				const wchar_t* pUTF,
				uchar32& uVal,
				bool& bErr);  // 225
		V_UChar32ToUTF8Len(uchar32 uVal); // 50
		V_UChar32ToUTF8Len(uchar32 uVal); // 294
		EncodeLenFuncAdapter<V_UChar32ToUTF8Len>::operator(
				uchar32 uVal);  // 226
	}
	{
	}
} /* size: 0, variables: 1 */

// <00612890> tier0/tier0_unicode.cpp:208
// variables: 7
// function calls: 12
void UnicodeConvertT<false, short unsigned int, char, (anonymous namespace)::DecodeFuncAdapter<short unsigned int, V_UTF16ToUChar32>, (anonymous namespace)::EncodeLenFuncAdapter<V_UChar32ToUTF8Len>, (anonymous namespace)::EncodeFuncAdapter<char, V_UChar32ToUTF8> >(const short unsigned int* pIn, int nInChars, char* pOut, int nOutBytes, EStringConvertErrorPolicy ePolicy, EncodeFuncAdapter<char, V_UChar32ToUTF8>& EncodeDst, EncodeLenFuncAdapter<V_UChar32ToUTF8Len>& EncodeDstLen, DecodeFuncAdapter<short unsigned int, V_UTF16ToUChar32>& DecodeSrc)
{
	int nOut; // 210
	{
		int nOutElems; // 245
		int nMaxOut; // 249
		{
			uchar32 uVal; // 252
			bool bErr; // 254
			DecodeFuncAdapter<short unsigned int, V_UTF16ToUChar32>::operator(
					const short unsigned int* pUTF,
					uchar32& uVal,
					bool& bErr);  // 255
			V_UChar32ToUTF8Len(uchar32 uVal); // 50
			V_UChar32ToUTF8Len(uchar32 uVal); // 294
			EncodeLenFuncAdapter<V_UChar32ToUTF8Len>::operator(
					uchar32 uVal);  // 271
			EncodeFuncAdapter<char, V_UChar32ToUTF8>::operator(
					uchar32 uVal,
					char* pUTF);  // 282
			V_UChar32ToUTF8Len(uchar32 uVal); // 50
			V_UChar32ToUTF8Len(uchar32 uVal); // 294
			EncodeLenFuncAdapter<V_UChar32ToUTF8Len>::operator(
					uchar32 uVal);  // 278
		}
	}
	{
		uchar32 uVal; // 222
		bool bErr; // 224
		DecodeFuncAdapter<short unsigned int, V_UTF16ToUChar32>::operator(
				const short unsigned int* pUTF,
				uchar32& uVal,
				bool& bErr);  // 225
		V_UChar32ToUTF8Len(uchar32 uVal); // 50
		V_UChar32ToUTF8Len(uchar32 uVal); // 294
		EncodeLenFuncAdapter<V_UChar32ToUTF8Len>::operator(
				uchar32 uVal);  // 226
	}
	{
	}
} /* size: 0, variables: 1 */

// <006125E7> tier0/tier0_unicode.cpp:208
// variables: 7
// function calls: 4
void UnicodeConvertT<false, short unsigned int, wchar_t, (anonymous namespace)::DecodeFuncAdapter<short unsigned int, V_UTF16ToUChar32>, (anonymous namespace)::EncodeLenFuncAdapter<V_UChar32ToUTF32Len>, (anonymous namespace)::EncodeFuncAdapter<wchar_t, V_UChar32ToUTF32> >(const short unsigned int* pIn, int nInChars, wchar_t* pOut, int nOutBytes, EStringConvertErrorPolicy ePolicy, EncodeFuncAdapter<wchar_t, V_UChar32ToUTF32>& EncodeDst, EncodeLenFuncAdapter<V_UChar32ToUTF32Len>& EncodeDstLen, DecodeFuncAdapter<short unsigned int, V_UTF16ToUChar32>& DecodeSrc)
{
	int nOut; // 210
	{
		int nOutElems; // 245
		int nMaxOut; // 249
		{
			uchar32 uVal; // 252
			bool bErr; // 254
			DecodeFuncAdapter<short unsigned int, V_UTF16ToUChar32>::operator(
					const short unsigned int* pUTF,
					uchar32& uVal,
					bool& bErr);  // 255
			V_UChar32ToUTF32(uchar32 uVal,
					uchar32* pUTF32);  // 297
			EncodeFuncAdapter<wchar_t, V_UChar32ToUTF32>::operator(
					uchar32 uVal,
					wchar_t* pUTF);  // 282
		}
	}
	{
		uchar32 uVal; // 222
		bool bErr; // 224
		DecodeFuncAdapter<short unsigned int, V_UTF16ToUChar32>::operator(
				const short unsigned int* pUTF,
				uchar32& uVal,
				bool& bErr);  // 225
	}
	{
	}
} /* size: 0, variables: 1 */

// <00612317> tier0/tier0_unicode.cpp:208
// variables: 7
// function calls: 4
void UnicodeConvertT<>(const short unsigned int* pIn, wchar_t* pOut, int nOutBytes, EStringConvertErrorPolicy ePolicy, int nInChars, EncodeFuncAdapter<wchar_t, V_UChar32ToUTF32>& EncodeDst, EncodeLenFuncAdapter<V_UChar32ToUTF32Len>& EncodeDstLen, WrapSimpleCaseMapFunctor<short unsigned int, V_UTF16ToUChar32, V_toworiginal32>& DecodeSrc)
{
	int nOut; // 210
	{
		int nOutElems; // 245
		int nMaxOut; // 249
		{
			uchar32 uVal; // 252
			bool bErr; // 254
			WrapSimpleCaseMapFunctor<short unsigned int, V_UTF16ToUChar32, V_toworiginal32>::operator(
					const short unsigned int* pUTF,
					uchar32& uValueOut,
					bool& bErrorOut);  // 255
			V_UChar32ToUTF32(uchar32 uVal,
					uchar32* pUTF32);  // 297
			EncodeFuncAdapter<wchar_t, V_UChar32ToUTF32>::operator(
					uchar32 uVal,
					wchar_t* pUTF);  // 282
		}
	}
	{
		uchar32 uVal; // 222
		bool bErr; // 224
		WrapSimpleCaseMapFunctor<short unsigned int, V_UTF16ToUChar32, V_toworiginal32>::operator(
				const short unsigned int* pUTF,
				uchar32& uValueOut,
				bool& bErrorOut);  // 225
	}
	{
	}
} /* size: 0, variables: 1 */

// <00611F88> tier0/tier0_unicode.cpp:208
// variables: 7
// function calls: 7
void UnicodeConvertT<>(const short unsigned int* pIn, short unsigned int* pOut, int nOutBytes, EStringConvertErrorPolicy ePolicy, int nInChars, EncodeFuncAdapter<short unsigned int, V_UChar32ToUTF16>& EncodeDst, EncodeLenFuncAdapter<V_UChar32ToUTF16Len>& EncodeDstLen, WrapSimpleCaseMapFunctor<short unsigned int, V_UTF16ToUChar32, V_toworiginal32>& DecodeSrc)
{
	int nOut; // 210
	{
		int nOutElems; // 245
		int nMaxOut; // 249
		{
			uchar32 uVal; // 252
			bool bErr; // 254
			WrapSimpleCaseMapFunctor<short unsigned int, V_UTF16ToUChar32, V_toworiginal32>::operator(
					const short unsigned int* pUTF,
					uchar32& uValueOut,
					bool& bErrorOut);  // 255
			V_UChar32ToUTF16Len(uchar32 uVal); // 294
			EncodeLenFuncAdapter<V_UChar32ToUTF16Len>::operator(
					uchar32 uVal);  // 271
			EncodeFuncAdapter<short unsigned int, V_UChar32ToUTF16>::operator(
					uchar32 uVal,
					short unsigned int* pUTF);  // 282
		}
	}
	{
		uchar32 uVal; // 222
		bool bErr; // 224
		WrapSimpleCaseMapFunctor<short unsigned int, V_UTF16ToUChar32, V_toworiginal32>::operator(
				const short unsigned int* pUTF,
				uchar32& uValueOut,
				bool& bErrorOut);  // 225
		V_UChar32ToUTF16Len(uchar32 uVal); // 294
		EncodeLenFuncAdapter<V_UChar32ToUTF16Len>::operator(
				uchar32 uVal);  // 226
	}
	{
	}
} /* size: 0, variables: 1 */

// <00611C25> tier0/tier0_unicode.cpp:208
// variables: 7
// function calls: 7
void UnicodeConvertT<true, short unsigned int, short unsigned int, (anonymous namespace)::DecodeFuncAdapter<short unsigned int, V_UTF16ToUChar32>, (anonymous namespace)::EncodeLenFuncAdapter<V_UChar32ToUTF16Len>, (anonymous namespace)::EncodeFuncAdapter<short unsigned int, V_UChar32ToUTF16> >(const short unsigned int* pIn, short unsigned int* pOut, int nOutBytes, EStringConvertErrorPolicy ePolicy, int nInChars, EncodeFuncAdapter<short unsigned int, V_UChar32ToUTF16>& EncodeDst, EncodeLenFuncAdapter<V_UChar32ToUTF16Len>& EncodeDstLen, DecodeFuncAdapter<short unsigned int, V_UTF16ToUChar32>& DecodeSrc)
{
	int nOut; // 210
	{
		int nOutElems; // 245
		int nMaxOut; // 249
		{
			uchar32 uVal; // 252
			bool bErr; // 254
			DecodeFuncAdapter<short unsigned int, V_UTF16ToUChar32>::operator(
					const short unsigned int* pUTF,
					uchar32& uVal,
					bool& bErr);  // 255
			V_UChar32ToUTF16Len(uchar32 uVal); // 294
			EncodeLenFuncAdapter<V_UChar32ToUTF16Len>::operator(
					uchar32 uVal);  // 271
			EncodeFuncAdapter<short unsigned int, V_UChar32ToUTF16>::operator(
					uchar32 uVal,
					short unsigned int* pUTF);  // 282
		}
	}
	{
		uchar32 uVal; // 222
		bool bErr; // 224
		DecodeFuncAdapter<short unsigned int, V_UTF16ToUChar32>::operator(
				const short unsigned int* pUTF,
				uchar32& uVal,
				bool& bErr);  // 225
		V_UChar32ToUTF16Len(uchar32 uVal); // 294
		EncodeLenFuncAdapter<V_UChar32ToUTF16Len>::operator(
				uchar32 uVal);  // 226
	}
	{
	}
} /* size: 0, variables: 1 */

// <0061199D> tier0/tier0_unicode.cpp:208
// variables: 7
// function calls: 4
void UnicodeConvertT<true, short unsigned int, wchar_t, (anonymous namespace)::DecodeFuncAdapter<short unsigned int, V_UTF16ToUChar32>, (anonymous namespace)::EncodeLenFuncAdapter<V_UChar32ToUTF32Len>, (anonymous namespace)::EncodeFuncAdapter<wchar_t, V_UChar32ToUTF32> >(const short unsigned int* pIn, wchar_t* pOut, int nOutBytes, EStringConvertErrorPolicy ePolicy, int nInChars, EncodeFuncAdapter<wchar_t, V_UChar32ToUTF32>& EncodeDst, EncodeLenFuncAdapter<V_UChar32ToUTF32Len>& EncodeDstLen, DecodeFuncAdapter<short unsigned int, V_UTF16ToUChar32>& DecodeSrc)
{
	int nOut; // 210
	{
		int nOutElems; // 245
		int nMaxOut; // 249
		{
			uchar32 uVal; // 252
			bool bErr; // 254
			DecodeFuncAdapter<short unsigned int, V_UTF16ToUChar32>::operator(
					const short unsigned int* pUTF,
					uchar32& uVal,
					bool& bErr);  // 255
			V_UChar32ToUTF32(uchar32 uVal,
					uchar32* pUTF32);  // 297
			EncodeFuncAdapter<wchar_t, V_UChar32ToUTF32>::operator(
					uchar32 uVal,
					wchar_t* pUTF);  // 282
		}
	}
	{
		uchar32 uVal; // 222
		bool bErr; // 224
		DecodeFuncAdapter<short unsigned int, V_UTF16ToUChar32>::operator(
				const short unsigned int* pUTF,
				uchar32& uVal,
				bool& bErr);  // 225
	}
	{
	}
} /* size: 0, variables: 1 */

// <00611562> tier0/tier0_unicode.cpp:208
// variables: 7
// function calls: 12
void UnicodeConvertT<true, short unsigned int, char, (anonymous namespace)::DecodeFuncAdapter<short unsigned int, V_UTF16ToUChar32>, (anonymous namespace)::EncodeLenFuncAdapter<V_UChar32ToUTF8Len>, (anonymous namespace)::EncodeFuncAdapter<char, V_UChar32ToUTF8> >(const short unsigned int* pIn, char* pOut, int nOutBytes, EStringConvertErrorPolicy ePolicy, int nInChars, EncodeFuncAdapter<char, V_UChar32ToUTF8>& EncodeDst, EncodeLenFuncAdapter<V_UChar32ToUTF8Len>& EncodeDstLen, DecodeFuncAdapter<short unsigned int, V_UTF16ToUChar32>& DecodeSrc)
{
	int nOut; // 210
	{
		int nOutElems; // 245
		int nMaxOut; // 249
		{
			uchar32 uVal; // 252
			bool bErr; // 254
			DecodeFuncAdapter<short unsigned int, V_UTF16ToUChar32>::operator(
					const short unsigned int* pUTF,
					uchar32& uVal,
					bool& bErr);  // 255
			V_UChar32ToUTF8Len(uchar32 uVal); // 50
			V_UChar32ToUTF8Len(uchar32 uVal); // 294
			EncodeLenFuncAdapter<V_UChar32ToUTF8Len>::operator(
					uchar32 uVal);  // 271
			EncodeFuncAdapter<char, V_UChar32ToUTF8>::operator(
					uchar32 uVal,
					char* pUTF);  // 282
			V_UChar32ToUTF8Len(uchar32 uVal); // 50
			V_UChar32ToUTF8Len(uchar32 uVal); // 294
			EncodeLenFuncAdapter<V_UChar32ToUTF8Len>::operator(
					uchar32 uVal);  // 278
		}
	}
	{
		uchar32 uVal; // 222
		bool bErr; // 224
		DecodeFuncAdapter<short unsigned int, V_UTF16ToUChar32>::operator(
				const short unsigned int* pUTF,
				uchar32& uVal,
				bool& bErr);  // 225
		V_UChar32ToUTF8Len(uchar32 uVal); // 50
		V_UChar32ToUTF8Len(uchar32 uVal); // 294
		EncodeLenFuncAdapter<V_UChar32ToUTF8Len>::operator(
				uchar32 uVal);  // 226
	}
	{
	}
} /* size: 0, variables: 1 */

// <006111D3> tier0/tier0_unicode.cpp:208
// variables: 7
// function calls: 7
void UnicodeConvertT<false, char, short unsigned int, (anonymous namespace)::DecodeFuncAdapter<char, V_UTF8ToUChar32>, (anonymous namespace)::EncodeLenFuncAdapter<V_UChar32ToUTF16Len>, (anonymous namespace)::EncodeFuncAdapter<short unsigned int, V_UChar32ToUTF16> >(const char* pIn, int nInChars, short unsigned int* pOut, int nOutBytes, EStringConvertErrorPolicy ePolicy, EncodeFuncAdapter<short unsigned int, V_UChar32ToUTF16>& EncodeDst, EncodeLenFuncAdapter<V_UChar32ToUTF16Len>& EncodeDstLen, DecodeFuncAdapter<char, V_UTF8ToUChar32>& DecodeSrc)
{
	int nOut; // 210
	{
		int nOutElems; // 245
		int nMaxOut; // 249
		{
			uchar32 uVal; // 252
			bool bErr; // 254
			DecodeFuncAdapter<char, V_UTF8ToUChar32>::operator(
					const char* pUTF,
					uchar32& uVal,
					bool& bErr);  // 255
			V_UChar32ToUTF16Len(uchar32 uVal); // 294
			EncodeLenFuncAdapter<V_UChar32ToUTF16Len>::operator(
					uchar32 uVal);  // 271
			EncodeFuncAdapter<short unsigned int, V_UChar32ToUTF16>::operator(
					uchar32 uVal,
					short unsigned int* pUTF);  // 282
		}
	}
	{
		uchar32 uVal; // 222
		bool bErr; // 224
		DecodeFuncAdapter<char, V_UTF8ToUChar32>::operator(
				const char* pUTF,
				uchar32& uVal,
				bool& bErr);  // 225
		V_UChar32ToUTF16Len(uchar32 uVal); // 294
		EncodeLenFuncAdapter<V_UChar32ToUTF16Len>::operator(
				uchar32 uVal);  // 226
	}
	{
	}
} /* size: 0, variables: 1 */

// <00610F2A> tier0/tier0_unicode.cpp:208
// variables: 7
// function calls: 4
void UnicodeConvertT<false, char, wchar_t, (anonymous namespace)::DecodeFuncAdapter<char, V_UTF8ToUChar32>, (anonymous namespace)::EncodeLenFuncAdapter<V_UChar32ToUTF32Len>, (anonymous namespace)::EncodeFuncAdapter<wchar_t, V_UChar32ToUTF32> >(const char* pIn, int nInChars, wchar_t* pOut, int nOutBytes, EStringConvertErrorPolicy ePolicy, EncodeFuncAdapter<wchar_t, V_UChar32ToUTF32>& EncodeDst, EncodeLenFuncAdapter<V_UChar32ToUTF32Len>& EncodeDstLen, DecodeFuncAdapter<char, V_UTF8ToUChar32>& DecodeSrc)
{
	int nOut; // 210
	{
		int nOutElems; // 245
		int nMaxOut; // 249
		{
			uchar32 uVal; // 252
			bool bErr; // 254
			DecodeFuncAdapter<char, V_UTF8ToUChar32>::operator(
					const char* pUTF,
					uchar32& uVal,
					bool& bErr);  // 255
			V_UChar32ToUTF32(uchar32 uVal,
					uchar32* pUTF32);  // 297
			EncodeFuncAdapter<wchar_t, V_UChar32ToUTF32>::operator(
					uchar32 uVal,
					wchar_t* pUTF);  // 282
		}
	}
	{
		uchar32 uVal; // 222
		bool bErr; // 224
		DecodeFuncAdapter<char, V_UTF8ToUChar32>::operator(
				const char* pUTF,
				uchar32& uVal,
				bool& bErr);  // 225
	}
	{
	}
} /* size: 0, variables: 1 */

// <00610C5A> tier0/tier0_unicode.cpp:208
// variables: 7
// function calls: 4
void UnicodeConvertT<>(const char* pIn, wchar_t* pOut, int nOutBytes, EStringConvertErrorPolicy ePolicy, int nInChars, EncodeFuncAdapter<wchar_t, V_UChar32ToUTF32>& EncodeDst, EncodeLenFuncAdapter<V_UChar32ToUTF32Len>& EncodeDstLen, WrapSimpleCaseMapFunctor<char, V_UTF8ToUChar32, V_toworiginal32>& DecodeSrc)
{
	int nOut; // 210
	{
		int nOutElems; // 245
		int nMaxOut; // 249
		{
			uchar32 uVal; // 252
			bool bErr; // 254
			WrapSimpleCaseMapFunctor<char, V_UTF8ToUChar32, V_toworiginal32>::operator(
					const char* pUTF,
					uchar32& uValueOut,
					bool& bErrorOut);  // 255
			V_UChar32ToUTF32(uchar32 uVal,
					uchar32* pUTF32);  // 297
			EncodeFuncAdapter<wchar_t, V_UChar32ToUTF32>::operator(
					uchar32 uVal,
					wchar_t* pUTF);  // 282
		}
	}
	{
		uchar32 uVal; // 222
		bool bErr; // 224
		WrapSimpleCaseMapFunctor<char, V_UTF8ToUChar32, V_toworiginal32>::operator(
				const char* pUTF,
				uchar32& uValueOut,
				bool& bErrorOut);  // 225
	}
	{
	}
} /* size: 0, variables: 1 */

// <006108CB> tier0/tier0_unicode.cpp:208
// variables: 7
// function calls: 7
void UnicodeConvertT<>(const char* pIn, short unsigned int* pOut, int nOutBytes, EStringConvertErrorPolicy ePolicy, int nInChars, EncodeFuncAdapter<short unsigned int, V_UChar32ToUTF16>& EncodeDst, EncodeLenFuncAdapter<V_UChar32ToUTF16Len>& EncodeDstLen, WrapSimpleCaseMapFunctor<char, V_UTF8ToUChar32, V_toworiginal32>& DecodeSrc)
{
	int nOut; // 210
	{
		int nOutElems; // 245
		int nMaxOut; // 249
		{
			uchar32 uVal; // 252
			bool bErr; // 254
			WrapSimpleCaseMapFunctor<char, V_UTF8ToUChar32, V_toworiginal32>::operator(
					const char* pUTF,
					uchar32& uValueOut,
					bool& bErrorOut);  // 255
			V_UChar32ToUTF16Len(uchar32 uVal); // 294
			EncodeLenFuncAdapter<V_UChar32ToUTF16Len>::operator(
					uchar32 uVal);  // 271
			EncodeFuncAdapter<short unsigned int, V_UChar32ToUTF16>::operator(
					uchar32 uVal,
					short unsigned int* pUTF);  // 282
		}
	}
	{
		uchar32 uVal; // 222
		bool bErr; // 224
		WrapSimpleCaseMapFunctor<char, V_UTF8ToUChar32, V_toworiginal32>::operator(
				const char* pUTF,
				uchar32& uValueOut,
				bool& bErrorOut);  // 225
		V_UChar32ToUTF16Len(uchar32 uVal); // 294
		EncodeLenFuncAdapter<V_UChar32ToUTF16Len>::operator(
				uchar32 uVal);  // 226
	}
	{
	}
} /* size: 0, variables: 1 */

// <00610460> tier0/tier0_unicode.cpp:208
// variables: 7
// function calls: 12
void UnicodeConvertT<>(const char* pIn, char* pOut, int nOutBytes, EStringConvertErrorPolicy ePolicy, int nInChars, EncodeFuncAdapter<char, V_UChar32ToUTF8>& EncodeDst, EncodeLenFuncAdapter<V_UChar32ToUTF8Len>& EncodeDstLen, WrapSimpleCaseMapFunctor<char, V_UTF8ToUChar32, V_toworiginal32>& DecodeSrc)
{
	int nOut; // 210
	{
		int nOutElems; // 245
		int nMaxOut; // 249
		{
			uchar32 uVal; // 252
			bool bErr; // 254
			WrapSimpleCaseMapFunctor<char, V_UTF8ToUChar32, V_toworiginal32>::operator(
					const char* pUTF,
					uchar32& uValueOut,
					bool& bErrorOut);  // 255
			V_UChar32ToUTF8Len(uchar32 uVal); // 50
			V_UChar32ToUTF8Len(uchar32 uVal); // 294
			EncodeLenFuncAdapter<V_UChar32ToUTF8Len>::operator(
					uchar32 uVal);  // 271
			EncodeFuncAdapter<char, V_UChar32ToUTF8>::operator(
					uchar32 uVal,
					char* pUTF);  // 282
			V_UChar32ToUTF8Len(uchar32 uVal); // 50
			V_UChar32ToUTF8Len(uchar32 uVal); // 294
			EncodeLenFuncAdapter<V_UChar32ToUTF8Len>::operator(
					uchar32 uVal);  // 278
		}
	}
	{
		uchar32 uVal; // 222
		bool bErr; // 224
		WrapSimpleCaseMapFunctor<char, V_UTF8ToUChar32, V_toworiginal32>::operator(
				const char* pUTF,
				uchar32& uValueOut,
				bool& bErrorOut);  // 225
		V_UChar32ToUTF8Len(uchar32 uVal); // 50
		V_UChar32ToUTF8Len(uchar32 uVal); // 294
		EncodeLenFuncAdapter<V_UChar32ToUTF8Len>::operator(
				uchar32 uVal);  // 226
	}
	{
	}
} /* size: 0, variables: 1 */

// <00610025> tier0/tier0_unicode.cpp:208
// variables: 7
// function calls: 12
void UnicodeConvertT<true, char, char, (anonymous namespace)::DecodeFuncAdapter<char, V_UTF8ToUChar32>, (anonymous namespace)::EncodeLenFuncAdapter<V_UChar32ToUTF8Len>, (anonymous namespace)::EncodeFuncAdapter<char, V_UChar32ToUTF8> >(const char* pIn, char* pOut, int nOutBytes, EStringConvertErrorPolicy ePolicy, int nInChars, EncodeFuncAdapter<char, V_UChar32ToUTF8>& EncodeDst, EncodeLenFuncAdapter<V_UChar32ToUTF8Len>& EncodeDstLen, DecodeFuncAdapter<char, V_UTF8ToUChar32>& DecodeSrc)
{
	int nOut; // 210
	{
		int nOutElems; // 245
		int nMaxOut; // 249
		{
			uchar32 uVal; // 252
			bool bErr; // 254
			DecodeFuncAdapter<char, V_UTF8ToUChar32>::operator(
					const char* pUTF,
					uchar32& uVal,
					bool& bErr);  // 255
			V_UChar32ToUTF8Len(uchar32 uVal); // 50
			V_UChar32ToUTF8Len(uchar32 uVal); // 294
			EncodeLenFuncAdapter<V_UChar32ToUTF8Len>::operator(
					uchar32 uVal);  // 271
			EncodeFuncAdapter<char, V_UChar32ToUTF8>::operator(
					uchar32 uVal,
					char* pUTF);  // 282
			V_UChar32ToUTF8Len(uchar32 uVal); // 50
			V_UChar32ToUTF8Len(uchar32 uVal); // 294
			EncodeLenFuncAdapter<V_UChar32ToUTF8Len>::operator(
					uchar32 uVal);  // 278
		}
	}
	{
		uchar32 uVal; // 222
		bool bErr; // 224
		DecodeFuncAdapter<char, V_UTF8ToUChar32>::operator(
				const char* pUTF,
				uchar32& uVal,
				bool& bErr);  // 225
		V_UChar32ToUTF8Len(uchar32 uVal); // 50
		V_UChar32ToUTF8Len(uchar32 uVal); // 294
		EncodeLenFuncAdapter<V_UChar32ToUTF8Len>::operator(
				uchar32 uVal);  // 226
	}
	{
	}
} /* size: 0, variables: 1 */

// <0060FD9D> tier0/tier0_unicode.cpp:208
// variables: 7
// function calls: 4
void UnicodeConvertT<true, char, wchar_t, (anonymous namespace)::DecodeFuncAdapter<char, V_UTF8ToUChar32>, (anonymous namespace)::EncodeLenFuncAdapter<V_UChar32ToUTF32Len>, (anonymous namespace)::EncodeFuncAdapter<wchar_t, V_UChar32ToUTF32> >(const char* pIn, wchar_t* pOut, int nOutBytes, EStringConvertErrorPolicy ePolicy, int nInChars, EncodeFuncAdapter<wchar_t, V_UChar32ToUTF32>& EncodeDst, EncodeLenFuncAdapter<V_UChar32ToUTF32Len>& EncodeDstLen, DecodeFuncAdapter<char, V_UTF8ToUChar32>& DecodeSrc)
{
	int nOut; // 210
	{
		int nOutElems; // 245
		int nMaxOut; // 249
		{
			uchar32 uVal; // 252
			bool bErr; // 254
			DecodeFuncAdapter<char, V_UTF8ToUChar32>::operator(
					const char* pUTF,
					uchar32& uVal,
					bool& bErr);  // 255
			V_UChar32ToUTF32(uchar32 uVal,
					uchar32* pUTF32);  // 297
			EncodeFuncAdapter<wchar_t, V_UChar32ToUTF32>::operator(
					uchar32 uVal,
					wchar_t* pUTF);  // 282
		}
	}
	{
		uchar32 uVal; // 222
		bool bErr; // 224
		DecodeFuncAdapter<char, V_UTF8ToUChar32>::operator(
				const char* pUTF,
				uchar32& uVal,
				bool& bErr);  // 225
	}
	{
	}
} /* size: 0, variables: 1 */

// <0060FA3A> tier0/tier0_unicode.cpp:208
// variables: 7
// function calls: 7
void UnicodeConvertT<true, char, short unsigned int, (anonymous namespace)::DecodeFuncAdapter<char, V_UTF8ToUChar32>, (anonymous namespace)::EncodeLenFuncAdapter<V_UChar32ToUTF16Len>, (anonymous namespace)::EncodeFuncAdapter<short unsigned int, V_UChar32ToUTF16> >(const char* pIn, short unsigned int* pOut, int nOutBytes, EStringConvertErrorPolicy ePolicy, int nInChars, EncodeFuncAdapter<short unsigned int, V_UChar32ToUTF16>& EncodeDst, EncodeLenFuncAdapter<V_UChar32ToUTF16Len>& EncodeDstLen, DecodeFuncAdapter<char, V_UTF8ToUChar32>& DecodeSrc)
{
	int nOut; // 210
	{
		int nOutElems; // 245
		int nMaxOut; // 249
		{
			uchar32 uVal; // 252
			bool bErr; // 254
			DecodeFuncAdapter<char, V_UTF8ToUChar32>::operator(
					const char* pUTF,
					uchar32& uVal,
					bool& bErr);  // 255
			V_UChar32ToUTF16Len(uchar32 uVal); // 294
			EncodeLenFuncAdapter<V_UChar32ToUTF16Len>::operator(
					uchar32 uVal);  // 271
			EncodeFuncAdapter<short unsigned int, V_UChar32ToUTF16>::operator(
					uchar32 uVal,
					short unsigned int* pUTF);  // 282
		}
	}
	{
		uchar32 uVal; // 222
		bool bErr; // 224
		DecodeFuncAdapter<char, V_UTF8ToUChar32>::operator(
				const char* pUTF,
				uchar32& uVal,
				bool& bErr);  // 225
		V_UChar32ToUTF16Len(uchar32 uVal); // 294
		EncodeLenFuncAdapter<V_UChar32ToUTF16Len>::operator(
				uchar32 uVal);  // 226
	}
	{
	}
} /* size: 0, variables: 1 */

// <006079FB> tier0/tier0_unicode.cpp:208
// variables: 9
void UnicodeConvertT<true, char, short unsigned int, (anonymous namespace)::DecodeFuncAdapter<char, V_UTF8ToUChar32>, (anonymous namespace)::EncodeLenFuncAdapter<V_UChar32ToUTF16Len>, (anonymous namespace)::EncodeFuncAdapter<short unsigned int, V_UChar32ToUTF16> >(const char* pIn, int nInChars, short unsigned int* pOut, int nOutBytes, EStringConvertErrorPolicy ePolicy, DecodeFuncAdapter<char, V_UTF8ToUChar32>& DecodeSrc, EncodeLenFuncAdapter<V_UChar32ToUTF16Len>& EncodeDstLen, EncodeFuncAdapter<short unsigned int, V_UChar32ToUTF16>& EncodeDst)
{
	const char   __FUNCTION__; // 28752
	int nOut; // 210
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 213
	}
	{
		uchar32 uVal; // 222
		bool bErr; // 224
	}
	{
		int nOutElems; // 245
		int nMaxOut; // 249
		{
			uchar32 uVal; // 252
			bool bErr; // 254
		}
	}
} /* size: 0, variables: 2 */

// <006078D4> tier0/tier0_unicode.cpp:208
// variables: 9
void UnicodeConvertT<true, char, wchar_t, (anonymous namespace)::DecodeFuncAdapter<char, V_UTF8ToUChar32>, (anonymous namespace)::EncodeLenFuncAdapter<V_UChar32ToUTF32Len>, (anonymous namespace)::EncodeFuncAdapter<wchar_t, V_UChar32ToUTF32> >(const char* pIn, int nInChars, wchar_t* pOut, int nOutBytes, EStringConvertErrorPolicy ePolicy, DecodeFuncAdapter<char, V_UTF8ToUChar32>& DecodeSrc, EncodeLenFuncAdapter<V_UChar32ToUTF32Len>& EncodeDstLen, EncodeFuncAdapter<wchar_t, V_UChar32ToUTF32>& EncodeDst)
{
	const char   __FUNCTION__; // 28752
	int nOut; // 210
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 213
	}
	{
		uchar32 uVal; // 222
		bool bErr; // 224
	}
	{
		int nOutElems; // 245
		int nMaxOut; // 249
		{
			uchar32 uVal; // 252
			bool bErr; // 254
		}
	}
} /* size: 0, variables: 2 */

// <006077AD> tier0/tier0_unicode.cpp:208
// variables: 9
void UnicodeConvertT<true, short unsigned int, char, (anonymous namespace)::DecodeFuncAdapter<short unsigned int, V_UTF16ToUChar32>, (anonymous namespace)::EncodeLenFuncAdapter<V_UChar32ToUTF8Len>, (anonymous namespace)::EncodeFuncAdapter<char, V_UChar32ToUTF8> >(const short unsigned int* pIn, int nInChars, char* pOut, int nOutBytes, EStringConvertErrorPolicy ePolicy, DecodeFuncAdapter<short unsigned int, V_UTF16ToUChar32>& DecodeSrc, EncodeLenFuncAdapter<V_UChar32ToUTF8Len>& EncodeDstLen, EncodeFuncAdapter<char, V_UChar32ToUTF8>& EncodeDst)
{
	const char   __FUNCTION__; // 28752
	int nOut; // 210
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 213
	}
	{
		uchar32 uVal; // 222
		bool bErr; // 224
	}
	{
		int nOutElems; // 245
		int nMaxOut; // 249
		{
			uchar32 uVal; // 252
			bool bErr; // 254
		}
	}
} /* size: 0, variables: 2 */

// <00607686> tier0/tier0_unicode.cpp:208
// variables: 9
void UnicodeConvertT<true, short unsigned int, wchar_t, (anonymous namespace)::DecodeFuncAdapter<short unsigned int, V_UTF16ToUChar32>, (anonymous namespace)::EncodeLenFuncAdapter<V_UChar32ToUTF32Len>, (anonymous namespace)::EncodeFuncAdapter<wchar_t, V_UChar32ToUTF32> >(const short unsigned int* pIn, int nInChars, wchar_t* pOut, int nOutBytes, EStringConvertErrorPolicy ePolicy, DecodeFuncAdapter<short unsigned int, V_UTF16ToUChar32>& DecodeSrc, EncodeLenFuncAdapter<V_UChar32ToUTF32Len>& EncodeDstLen, EncodeFuncAdapter<wchar_t, V_UChar32ToUTF32>& EncodeDst)
{
	const char   __FUNCTION__; // 28752
	int nOut; // 210
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 213
	}
	{
		uchar32 uVal; // 222
		bool bErr; // 224
	}
	{
		int nOutElems; // 245
		int nMaxOut; // 249
		{
			uchar32 uVal; // 252
			bool bErr; // 254
		}
	}
} /* size: 0, variables: 2 */

// <0060755F> tier0/tier0_unicode.cpp:208
// variables: 9
void UnicodeConvertT<true, wchar_t, char, (anonymous namespace)::DecodeFuncAdapter<wchar_t, V_UTF32ToUChar32>, (anonymous namespace)::EncodeLenFuncAdapter<V_UChar32ToUTF8Len>, (anonymous namespace)::EncodeFuncAdapter<char, V_UChar32ToUTF8> >(const wchar_t* pIn, int nInChars, char* pOut, int nOutBytes, EStringConvertErrorPolicy ePolicy, DecodeFuncAdapter<wchar_t, V_UTF32ToUChar32>& DecodeSrc, EncodeLenFuncAdapter<V_UChar32ToUTF8Len>& EncodeDstLen, EncodeFuncAdapter<char, V_UChar32ToUTF8>& EncodeDst)
{
	const char   __FUNCTION__; // 28752
	int nOut; // 210
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 213
	}
	{
		uchar32 uVal; // 222
		bool bErr; // 224
	}
	{
		int nOutElems; // 245
		int nMaxOut; // 249
		{
			uchar32 uVal; // 252
			bool bErr; // 254
		}
	}
} /* size: 0, variables: 2 */

// <00607438> tier0/tier0_unicode.cpp:208
// variables: 9
void UnicodeConvertT<true, wchar_t, short unsigned int, (anonymous namespace)::DecodeFuncAdapter<wchar_t, V_UTF32ToUChar32>, (anonymous namespace)::EncodeLenFuncAdapter<V_UChar32ToUTF16Len>, (anonymous namespace)::EncodeFuncAdapter<short unsigned int, V_UChar32ToUTF16> >(const wchar_t* pIn, int nInChars, short unsigned int* pOut, int nOutBytes, EStringConvertErrorPolicy ePolicy, DecodeFuncAdapter<wchar_t, V_UTF32ToUChar32>& DecodeSrc, EncodeLenFuncAdapter<V_UChar32ToUTF16Len>& EncodeDstLen, EncodeFuncAdapter<short unsigned int, V_UChar32ToUTF16>& EncodeDst)
{
	const char   __FUNCTION__; // 28752
	int nOut; // 210
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 213
	}
	{
		uchar32 uVal; // 222
		bool bErr; // 224
	}
	{
		int nOutElems; // 245
		int nMaxOut; // 249
		{
			uchar32 uVal; // 252
			bool bErr; // 254
		}
	}
} /* size: 0, variables: 2 */

// <00607311> tier0/tier0_unicode.cpp:208
// variables: 9
void UnicodeConvertT<true, short unsigned int, short unsigned int, (anonymous namespace)::DecodeFuncAdapter<short unsigned int, V_UTF16ToUChar32>, (anonymous namespace)::EncodeLenFuncAdapter<V_UChar32ToUTF16Len>, (anonymous namespace)::EncodeFuncAdapter<short unsigned int, V_UChar32ToUTF16> >(const short unsigned int* pIn, int nInChars, short unsigned int* pOut, int nOutBytes, EStringConvertErrorPolicy ePolicy, DecodeFuncAdapter<short unsigned int, V_UTF16ToUChar32>& DecodeSrc, EncodeLenFuncAdapter<V_UChar32ToUTF16Len>& EncodeDstLen, EncodeFuncAdapter<short unsigned int, V_UChar32ToUTF16>& EncodeDst)
{
	const char   __FUNCTION__; // 28752
	int nOut; // 210
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 213
	}
	{
		uchar32 uVal; // 222
		bool bErr; // 224
	}
	{
		int nOutElems; // 245
		int nMaxOut; // 249
		{
			uchar32 uVal; // 252
			bool bErr; // 254
		}
	}
} /* size: 0, variables: 2 */

// <006071EA> tier0/tier0_unicode.cpp:208
// variables: 9
void UnicodeConvertT<true, wchar_t, wchar_t, (anonymous namespace)::DecodeFuncAdapter<wchar_t, V_UTF32ToUChar32>, (anonymous namespace)::EncodeLenFuncAdapter<V_UChar32ToUTF32Len>, (anonymous namespace)::EncodeFuncAdapter<wchar_t, V_UChar32ToUTF32> >(const wchar_t* pIn, int nInChars, wchar_t* pOut, int nOutBytes, EStringConvertErrorPolicy ePolicy, DecodeFuncAdapter<wchar_t, V_UTF32ToUChar32>& DecodeSrc, EncodeLenFuncAdapter<V_UChar32ToUTF32Len>& EncodeDstLen, EncodeFuncAdapter<wchar_t, V_UChar32ToUTF32>& EncodeDst)
{
	const char   __FUNCTION__; // 28752
	int nOut; // 210
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 213
	}
	{
		uchar32 uVal; // 222
		bool bErr; // 224
	}
	{
		int nOutElems; // 245
		int nMaxOut; // 249
		{
			uchar32 uVal; // 252
			bool bErr; // 254
		}
	}
} /* size: 0, variables: 2 */

// <006070C3> tier0/tier0_unicode.cpp:208
// variables: 9
void UnicodeConvertT<false, char, short unsigned int, (anonymous namespace)::DecodeFuncAdapter<char, V_UTF8ToUChar32>, (anonymous namespace)::EncodeLenFuncAdapter<V_UChar32ToUTF16Len>, (anonymous namespace)::EncodeFuncAdapter<short unsigned int, V_UChar32ToUTF16> >(const char* pIn, int nInChars, short unsigned int* pOut, int nOutBytes, EStringConvertErrorPolicy ePolicy, DecodeFuncAdapter<char, V_UTF8ToUChar32>& DecodeSrc, EncodeLenFuncAdapter<V_UChar32ToUTF16Len>& EncodeDstLen, EncodeFuncAdapter<short unsigned int, V_UChar32ToUTF16>& EncodeDst)
{
	const char   __FUNCTION__; // 28752
	int nOut; // 210
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 213
	}
	{
		uchar32 uVal; // 222
		bool bErr; // 224
	}
	{
		int nOutElems; // 245
		int nMaxOut; // 249
		{
			uchar32 uVal; // 252
			bool bErr; // 254
		}
	}
} /* size: 0, variables: 2 */

// <00606F9C> tier0/tier0_unicode.cpp:208
// variables: 9
void UnicodeConvertT<false, char, wchar_t, (anonymous namespace)::DecodeFuncAdapter<char, V_UTF8ToUChar32>, (anonymous namespace)::EncodeLenFuncAdapter<V_UChar32ToUTF32Len>, (anonymous namespace)::EncodeFuncAdapter<wchar_t, V_UChar32ToUTF32> >(const char* pIn, int nInChars, wchar_t* pOut, int nOutBytes, EStringConvertErrorPolicy ePolicy, DecodeFuncAdapter<char, V_UTF8ToUChar32>& DecodeSrc, EncodeLenFuncAdapter<V_UChar32ToUTF32Len>& EncodeDstLen, EncodeFuncAdapter<wchar_t, V_UChar32ToUTF32>& EncodeDst)
{
	const char   __FUNCTION__; // 28752
	int nOut; // 210
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 213
	}
	{
		uchar32 uVal; // 222
		bool bErr; // 224
	}
	{
		int nOutElems; // 245
		int nMaxOut; // 249
		{
			uchar32 uVal; // 252
			bool bErr; // 254
		}
	}
} /* size: 0, variables: 2 */

// <00606E75> tier0/tier0_unicode.cpp:208
// variables: 9
void UnicodeConvertT<false, short unsigned int, char, (anonymous namespace)::DecodeFuncAdapter<short unsigned int, V_UTF16ToUChar32>, (anonymous namespace)::EncodeLenFuncAdapter<V_UChar32ToUTF8Len>, (anonymous namespace)::EncodeFuncAdapter<char, V_UChar32ToUTF8> >(const short unsigned int* pIn, int nInChars, char* pOut, int nOutBytes, EStringConvertErrorPolicy ePolicy, DecodeFuncAdapter<short unsigned int, V_UTF16ToUChar32>& DecodeSrc, EncodeLenFuncAdapter<V_UChar32ToUTF8Len>& EncodeDstLen, EncodeFuncAdapter<char, V_UChar32ToUTF8>& EncodeDst)
{
	const char   __FUNCTION__; // 28752
	int nOut; // 210
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 213
	}
	{
		uchar32 uVal; // 222
		bool bErr; // 224
	}
	{
		int nOutElems; // 245
		int nMaxOut; // 249
		{
			uchar32 uVal; // 252
			bool bErr; // 254
		}
	}
} /* size: 0, variables: 2 */

// <00606D4E> tier0/tier0_unicode.cpp:208
// variables: 9
void UnicodeConvertT<false, short unsigned int, wchar_t, (anonymous namespace)::DecodeFuncAdapter<short unsigned int, V_UTF16ToUChar32>, (anonymous namespace)::EncodeLenFuncAdapter<V_UChar32ToUTF32Len>, (anonymous namespace)::EncodeFuncAdapter<wchar_t, V_UChar32ToUTF32> >(const short unsigned int* pIn, int nInChars, wchar_t* pOut, int nOutBytes, EStringConvertErrorPolicy ePolicy, DecodeFuncAdapter<short unsigned int, V_UTF16ToUChar32>& DecodeSrc, EncodeLenFuncAdapter<V_UChar32ToUTF32Len>& EncodeDstLen, EncodeFuncAdapter<wchar_t, V_UChar32ToUTF32>& EncodeDst)
{
	const char   __FUNCTION__; // 28752
	int nOut; // 210
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 213
	}
	{
		uchar32 uVal; // 222
		bool bErr; // 224
	}
	{
		int nOutElems; // 245
		int nMaxOut; // 249
		{
			uchar32 uVal; // 252
			bool bErr; // 254
		}
	}
} /* size: 0, variables: 2 */

// <00606C21> tier0/tier0_unicode.cpp:208
// variables: 9
void UnicodeConvertT<false, wchar_t, char, (anonymous namespace)::DecodeFuncAdapter<wchar_t, V_UTF32ToUChar32>, (anonymous namespace)::EncodeLenFuncAdapter<V_UChar32ToUTF8Len>, (anonymous namespace)::EncodeFuncAdapter<char, V_UChar32ToUTF8> >(const wchar_t* pIn, int nInChars, char* pOut, int nOutBytes, EStringConvertErrorPolicy ePolicy, DecodeFuncAdapter<wchar_t, V_UTF32ToUChar32>& DecodeSrc, EncodeLenFuncAdapter<V_UChar32ToUTF8Len>& EncodeDstLen, EncodeFuncAdapter<char, V_UChar32ToUTF8>& EncodeDst)
{
	const char   __FUNCTION__; // 28752
	int nOut; // 210
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 213
	}
	{
		uchar32 uVal; // 222
		bool bErr; // 224
	}
	{
		int nOutElems; // 245
		int nMaxOut; // 249
		{
			uchar32 uVal; // 252
			bool bErr; // 254
		}
	}
} /* size: 0, variables: 2 */

// <00606AFA> tier0/tier0_unicode.cpp:208
// variables: 9
void UnicodeConvertT<false, wchar_t, short unsigned int, (anonymous namespace)::DecodeFuncAdapter<wchar_t, V_UTF32ToUChar32>, (anonymous namespace)::EncodeLenFuncAdapter<V_UChar32ToUTF16Len>, (anonymous namespace)::EncodeFuncAdapter<short unsigned int, V_UChar32ToUTF16> >(const wchar_t* pIn, int nInChars, short unsigned int* pOut, int nOutBytes, EStringConvertErrorPolicy ePolicy, DecodeFuncAdapter<wchar_t, V_UTF32ToUChar32>& DecodeSrc, EncodeLenFuncAdapter<V_UChar32ToUTF16Len>& EncodeDstLen, EncodeFuncAdapter<short unsigned int, V_UChar32ToUTF16>& EncodeDst)
{
	const char   __FUNCTION__; // 28752
	int nOut; // 210
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 213
	}
	{
		uchar32 uVal; // 222
		bool bErr; // 224
	}
	{
		int nOutElems; // 245
		int nMaxOut; // 249
		{
			uchar32 uVal; // 252
			bool bErr; // 254
		}
	}
} /* size: 0, variables: 2 */

// <006069CD> tier0/tier0_unicode.cpp:208
// variables: 9
void UnicodeConvertT<true, char, char, (anonymous namespace)::DecodeFuncAdapter<char, V_UTF8ToUChar32>, (anonymous namespace)::EncodeLenFuncAdapter<V_UChar32ToUTF8Len>, (anonymous namespace)::EncodeFuncAdapter<char, V_UChar32ToUTF8> >(const char* pIn, int nInChars, char* pOut, int nOutBytes, EStringConvertErrorPolicy ePolicy, DecodeFuncAdapter<char, V_UTF8ToUChar32>& DecodeSrc, EncodeLenFuncAdapter<V_UChar32ToUTF8Len>& EncodeDstLen, EncodeFuncAdapter<char, V_UChar32ToUTF8>& EncodeDst)
{
	const char   __FUNCTION__; // 28752
	int nOut; // 210
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 213
	}
	{
		uchar32 uVal; // 222
		bool bErr; // 224
	}
	{
		int nOutElems; // 245
		int nMaxOut; // 249
		{
			uchar32 uVal; // 252
			bool bErr; // 254
		}
	}
} /* size: 0, variables: 2 */

// <0060686E> tier0/tier0_unicode.cpp:208
// variables: 9
void UnicodeConvertT<>(const char* pIn, int nInChars, char* pOut, int nOutBytes, EStringConvertErrorPolicy ePolicy, LinguisticToLowerFunctor<char, V_UTF8ToUChar32>& DecodeSrc, EncodeLenFuncAdapter<V_UChar32ToUTF8Len>& EncodeDstLen, EncodeFuncAdapter<char, V_UChar32ToUTF8>& EncodeDst)
{
	const char   __FUNCTION__; // 28752
	int nOut; // 210
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 213
	}
	{
		uchar32 uVal; // 222
		bool bErr; // 224
	}
	{
		int nOutElems; // 245
		int nMaxOut; // 249
		{
			uchar32 uVal; // 252
			bool bErr; // 254
		}
	}
} /* size: 0, variables: 2 */

// <00606715> tier0/tier0_unicode.cpp:208
// variables: 9
void UnicodeConvertT<>(const char* pIn, int nInChars, char* pOut, int nOutBytes, EStringConvertErrorPolicy ePolicy, LinguisticToUpperFunctor<char, V_UTF8ToUChar32>& DecodeSrc, EncodeLenFuncAdapter<V_UChar32ToUTF8Len>& EncodeDstLen, EncodeFuncAdapter<char, V_UChar32ToUTF8>& EncodeDst)
{
	const char   __FUNCTION__; // 28752
	int nOut; // 210
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 213
	}
	{
		uchar32 uVal; // 222
		bool bErr; // 224
	}
	{
		int nOutElems; // 245
		int nMaxOut; // 249
		{
			uchar32 uVal; // 252
			bool bErr; // 254
		}
	}
} /* size: 0, variables: 2 */

// <006065E8> tier0/tier0_unicode.cpp:208
// variables: 9
void UnicodeConvertT<>(const char* pIn, int nInChars, char* pOut, int nOutBytes, EStringConvertErrorPolicy ePolicy, WrapSimpleCaseMapFunctor<char, V_UTF8ToUChar32, V_towlower32>& DecodeSrc, EncodeLenFuncAdapter<V_UChar32ToUTF8Len>& EncodeDstLen, EncodeFuncAdapter<char, V_UChar32ToUTF8>& EncodeDst)
{
	const char   __FUNCTION__; // 28752
	int nOut; // 210
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 213
	}
	{
		uchar32 uVal; // 222
		bool bErr; // 224
	}
	{
		int nOutElems; // 245
		int nMaxOut; // 249
		{
			uchar32 uVal; // 252
			bool bErr; // 254
		}
	}
} /* size: 0, variables: 2 */

// <006064BB> tier0/tier0_unicode.cpp:208
// variables: 9
void UnicodeConvertT<>(const char* pIn, int nInChars, char* pOut, int nOutBytes, EStringConvertErrorPolicy ePolicy, WrapSimpleCaseMapFunctor<char, V_UTF8ToUChar32, V_towupper32>& DecodeSrc, EncodeLenFuncAdapter<V_UChar32ToUTF8Len>& EncodeDstLen, EncodeFuncAdapter<char, V_UChar32ToUTF8>& EncodeDst)
{
	const char   __FUNCTION__; // 28752
	int nOut; // 210
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 213
	}
	{
		uchar32 uVal; // 222
		bool bErr; // 224
	}
	{
		int nOutElems; // 245
		int nMaxOut; // 249
		{
			uchar32 uVal; // 252
			bool bErr; // 254
		}
	}
} /* size: 0, variables: 2 */

// <0060638E> tier0/tier0_unicode.cpp:208
// variables: 9
void UnicodeConvertT<>(const char* pIn, int nInChars, char* pOut, int nOutBytes, EStringConvertErrorPolicy ePolicy, WrapSimpleCaseMapFunctor<char, V_UTF8ToUChar32, V_toworiginal32>& DecodeSrc, EncodeLenFuncAdapter<V_UChar32ToUTF8Len>& EncodeDstLen, EncodeFuncAdapter<char, V_UChar32ToUTF8>& EncodeDst)
{
	const char   __FUNCTION__; // 28752
	int nOut; // 210
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 213
	}
	{
		uchar32 uVal; // 222
		bool bErr; // 224
	}
	{
		int nOutElems; // 245
		int nMaxOut; // 249
		{
			uchar32 uVal; // 252
			bool bErr; // 254
		}
	}
} /* size: 0, variables: 2 */

// <00606229> tier0/tier0_unicode.cpp:208
// variables: 9
void UnicodeConvertT<>(const short unsigned int* pIn, int nInChars, short unsigned int* pOut, int nOutBytes, EStringConvertErrorPolicy ePolicy, LinguisticToLowerFunctor<short unsigned int, V_UTF16ToUChar32>& DecodeSrc, EncodeLenFuncAdapter<V_UChar32ToUTF16Len>& EncodeDstLen, EncodeFuncAdapter<short unsigned int, V_UChar32ToUTF16>& EncodeDst)
{
	const char   __FUNCTION__; // 28752
	int nOut; // 210
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 213
	}
	{
		uchar32 uVal; // 222
		bool bErr; // 224
	}
	{
		int nOutElems; // 245
		int nMaxOut; // 249
		{
			uchar32 uVal; // 252
			bool bErr; // 254
		}
	}
} /* size: 0, variables: 2 */

// <006060D0> tier0/tier0_unicode.cpp:208
// variables: 9
void UnicodeConvertT<>(const short unsigned int* pIn, int nInChars, short unsigned int* pOut, int nOutBytes, EStringConvertErrorPolicy ePolicy, LinguisticToUpperFunctor<short unsigned int, V_UTF16ToUChar32>& DecodeSrc, EncodeLenFuncAdapter<V_UChar32ToUTF16Len>& EncodeDstLen, EncodeFuncAdapter<short unsigned int, V_UChar32ToUTF16>& EncodeDst)
{
	const char   __FUNCTION__; // 28752
	int nOut; // 210
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 213
	}
	{
		uchar32 uVal; // 222
		bool bErr; // 224
	}
	{
		int nOutElems; // 245
		int nMaxOut; // 249
		{
			uchar32 uVal; // 252
			bool bErr; // 254
		}
	}
} /* size: 0, variables: 2 */

// <00605FA3> tier0/tier0_unicode.cpp:208
// variables: 9
void UnicodeConvertT<>(const short unsigned int* pIn, int nInChars, short unsigned int* pOut, int nOutBytes, EStringConvertErrorPolicy ePolicy, WrapSimpleCaseMapFunctor<short unsigned int, V_UTF16ToUChar32, V_towlower32>& DecodeSrc, EncodeLenFuncAdapter<V_UChar32ToUTF16Len>& EncodeDstLen, EncodeFuncAdapter<short unsigned int, V_UChar32ToUTF16>& EncodeDst)
{
	const char   __FUNCTION__; // 28752
	int nOut; // 210
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 213
	}
	{
		uchar32 uVal; // 222
		bool bErr; // 224
	}
	{
		int nOutElems; // 245
		int nMaxOut; // 249
		{
			uchar32 uVal; // 252
			bool bErr; // 254
		}
	}
} /* size: 0, variables: 2 */

// <00605E76> tier0/tier0_unicode.cpp:208
// variables: 9
void UnicodeConvertT<>(const short unsigned int* pIn, int nInChars, short unsigned int* pOut, int nOutBytes, EStringConvertErrorPolicy ePolicy, WrapSimpleCaseMapFunctor<short unsigned int, V_UTF16ToUChar32, V_towupper32>& DecodeSrc, EncodeLenFuncAdapter<V_UChar32ToUTF16Len>& EncodeDstLen, EncodeFuncAdapter<short unsigned int, V_UChar32ToUTF16>& EncodeDst)
{
	const char   __FUNCTION__; // 28752
	int nOut; // 210
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 213
	}
	{
		uchar32 uVal; // 222
		bool bErr; // 224
	}
	{
		int nOutElems; // 245
		int nMaxOut; // 249
		{
			uchar32 uVal; // 252
			bool bErr; // 254
		}
	}
} /* size: 0, variables: 2 */

// <00605D49> tier0/tier0_unicode.cpp:208
// variables: 9
void UnicodeConvertT<>(const short unsigned int* pIn, int nInChars, short unsigned int* pOut, int nOutBytes, EStringConvertErrorPolicy ePolicy, WrapSimpleCaseMapFunctor<short unsigned int, V_UTF16ToUChar32, V_toworiginal32>& DecodeSrc, EncodeLenFuncAdapter<V_UChar32ToUTF16Len>& EncodeDstLen, EncodeFuncAdapter<short unsigned int, V_UChar32ToUTF16>& EncodeDst)
{
	const char   __FUNCTION__; // 28752
	int nOut; // 210
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 213
	}
	{
		uchar32 uVal; // 222
		bool bErr; // 224
	}
	{
		int nOutElems; // 245
		int nMaxOut; // 249
		{
			uchar32 uVal; // 252
			bool bErr; // 254
		}
	}
} /* size: 0, variables: 2 */

// <00605BF0> tier0/tier0_unicode.cpp:208
// variables: 9
void UnicodeConvertT<>(const wchar_t* pIn, int nInChars, wchar_t* pOut, int nOutBytes, EStringConvertErrorPolicy ePolicy, LinguisticToLowerFunctor<wchar_t, V_UTF32ToUChar32>& DecodeSrc, EncodeLenFuncAdapter<V_UChar32ToUTF32Len>& EncodeDstLen, EncodeFuncAdapter<wchar_t, V_UChar32ToUTF32>& EncodeDst)
{
	const char   __FUNCTION__; // 28752
	int nOut; // 210
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 213
	}
	{
		uchar32 uVal; // 222
		bool bErr; // 224
	}
	{
		int nOutElems; // 245
		int nMaxOut; // 249
		{
			uchar32 uVal; // 252
			bool bErr; // 254
		}
	}
} /* size: 0, variables: 2 */

// <00605A91> tier0/tier0_unicode.cpp:208
// variables: 9
void UnicodeConvertT<>(const wchar_t* pIn, int nInChars, wchar_t* pOut, int nOutBytes, EStringConvertErrorPolicy ePolicy, LinguisticToUpperFunctor<wchar_t, V_UTF32ToUChar32>& DecodeSrc, EncodeLenFuncAdapter<V_UChar32ToUTF32Len>& EncodeDstLen, EncodeFuncAdapter<wchar_t, V_UChar32ToUTF32>& EncodeDst)
{
	const char   __FUNCTION__; // 28752
	int nOut; // 210
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 213
	}
	{
		uchar32 uVal; // 222
		bool bErr; // 224
	}
	{
		int nOutElems; // 245
		int nMaxOut; // 249
		{
			uchar32 uVal; // 252
			bool bErr; // 254
		}
	}
} /* size: 0, variables: 2 */

// <0060595E> tier0/tier0_unicode.cpp:208
// variables: 9
void UnicodeConvertT<>(const wchar_t* pIn, int nInChars, wchar_t* pOut, int nOutBytes, EStringConvertErrorPolicy ePolicy, WrapSimpleCaseMapFunctor<wchar_t, V_UTF32ToUChar32, V_towlower32>& DecodeSrc, EncodeLenFuncAdapter<V_UChar32ToUTF32Len>& EncodeDstLen, EncodeFuncAdapter<wchar_t, V_UChar32ToUTF32>& EncodeDst)
{
	const char   __FUNCTION__; // 28752
	int nOut; // 210
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 213
	}
	{
		uchar32 uVal; // 222
		bool bErr; // 224
	}
	{
		int nOutElems; // 245
		int nMaxOut; // 249
		{
			uchar32 uVal; // 252
			bool bErr; // 254
		}
	}
} /* size: 0, variables: 2 */

// <0060582B> tier0/tier0_unicode.cpp:208
// variables: 9
void UnicodeConvertT<>(const wchar_t* pIn, int nInChars, wchar_t* pOut, int nOutBytes, EStringConvertErrorPolicy ePolicy, WrapSimpleCaseMapFunctor<wchar_t, V_UTF32ToUChar32, V_towupper32>& DecodeSrc, EncodeLenFuncAdapter<V_UChar32ToUTF32Len>& EncodeDstLen, EncodeFuncAdapter<wchar_t, V_UChar32ToUTF32>& EncodeDst)
{
	const char   __FUNCTION__; // 28752
	int nOut; // 210
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 213
	}
	{
		uchar32 uVal; // 222
		bool bErr; // 224
	}
	{
		int nOutElems; // 245
		int nMaxOut; // 249
		{
			uchar32 uVal; // 252
			bool bErr; // 254
		}
	}
} /* size: 0, variables: 2 */

// <006056F8> tier0/tier0_unicode.cpp:208
// variables: 9
void UnicodeConvertT<>(const wchar_t* pIn, int nInChars, wchar_t* pOut, int nOutBytes, EStringConvertErrorPolicy ePolicy, WrapSimpleCaseMapFunctor<wchar_t, V_UTF32ToUChar32, V_toworiginal32>& DecodeSrc, EncodeLenFuncAdapter<V_UChar32ToUTF32Len>& EncodeDstLen, EncodeFuncAdapter<wchar_t, V_UChar32ToUTF32>& EncodeDst)
{
	const char   __FUNCTION__; // 28752
	int nOut; // 210
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 213
	}
	{
		uchar32 uVal; // 222
		bool bErr; // 224
	}
	{
		int nOutElems; // 245
		int nMaxOut; // 249
		{
			uchar32 uVal; // 252
			bool bErr; // 254
		}
	}
} /* size: 0, variables: 2 */

// <0060416C> tier0/tier0_unicode.cpp:208
// variables: 9
void UnicodeConvertT<>(const char* pIn, int nInChars, short unsigned int* pOut, int nOutBytes, EStringConvertErrorPolicy ePolicy, LinguisticToLowerFunctor<char, V_UTF8ToUChar32>& DecodeSrc, EncodeLenFuncAdapter<V_UChar32ToUTF16Len>& EncodeDstLen, EncodeFuncAdapter<short unsigned int, V_UChar32ToUTF16>& EncodeDst)
{
	const char   __FUNCTION__; // 28752
	int nOut; // 210
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 213
	}
	{
		uchar32 uVal; // 222
		bool bErr; // 224
	}
	{
		int nOutElems; // 245
		int nMaxOut; // 249
		{
			uchar32 uVal; // 252
			bool bErr; // 254
		}
	}
} /* size: 0, variables: 2 */

// <0060403F> tier0/tier0_unicode.cpp:208
// variables: 9
void UnicodeConvertT<>(const char* pIn, int nInChars, short unsigned int* pOut, int nOutBytes, EStringConvertErrorPolicy ePolicy, LinguisticToUpperFunctor<char, V_UTF8ToUChar32>& DecodeSrc, EncodeLenFuncAdapter<V_UChar32ToUTF16Len>& EncodeDstLen, EncodeFuncAdapter<short unsigned int, V_UChar32ToUTF16>& EncodeDst)
{
	const char   __FUNCTION__; // 28752
	int nOut; // 210
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 213
	}
	{
		uchar32 uVal; // 222
		bool bErr; // 224
	}
	{
		int nOutElems; // 245
		int nMaxOut; // 249
		{
			uchar32 uVal; // 252
			bool bErr; // 254
		}
	}
} /* size: 0, variables: 2 */

// <00603F12> tier0/tier0_unicode.cpp:208
// variables: 9
void UnicodeConvertT<>(const char* pIn, int nInChars, short unsigned int* pOut, int nOutBytes, EStringConvertErrorPolicy ePolicy, WrapSimpleCaseMapFunctor<char, V_UTF8ToUChar32, V_towlower32>& DecodeSrc, EncodeLenFuncAdapter<V_UChar32ToUTF16Len>& EncodeDstLen, EncodeFuncAdapter<short unsigned int, V_UChar32ToUTF16>& EncodeDst)
{
	const char   __FUNCTION__; // 28752
	int nOut; // 210
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 213
	}
	{
		uchar32 uVal; // 222
		bool bErr; // 224
	}
	{
		int nOutElems; // 245
		int nMaxOut; // 249
		{
			uchar32 uVal; // 252
			bool bErr; // 254
		}
	}
} /* size: 0, variables: 2 */

// <00603DE5> tier0/tier0_unicode.cpp:208
// variables: 9
void UnicodeConvertT<>(const char* pIn, int nInChars, short unsigned int* pOut, int nOutBytes, EStringConvertErrorPolicy ePolicy, WrapSimpleCaseMapFunctor<char, V_UTF8ToUChar32, V_towupper32>& DecodeSrc, EncodeLenFuncAdapter<V_UChar32ToUTF16Len>& EncodeDstLen, EncodeFuncAdapter<short unsigned int, V_UChar32ToUTF16>& EncodeDst)
{
	const char   __FUNCTION__; // 28752
	int nOut; // 210
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 213
	}
	{
		uchar32 uVal; // 222
		bool bErr; // 224
	}
	{
		int nOutElems; // 245
		int nMaxOut; // 249
		{
			uchar32 uVal; // 252
			bool bErr; // 254
		}
	}
} /* size: 0, variables: 2 */

// <00603CB8> tier0/tier0_unicode.cpp:208
// variables: 9
void UnicodeConvertT<>(const char* pIn, int nInChars, short unsigned int* pOut, int nOutBytes, EStringConvertErrorPolicy ePolicy, WrapSimpleCaseMapFunctor<char, V_UTF8ToUChar32, V_toworiginal32>& DecodeSrc, EncodeLenFuncAdapter<V_UChar32ToUTF16Len>& EncodeDstLen, EncodeFuncAdapter<short unsigned int, V_UChar32ToUTF16>& EncodeDst)
{
	const char   __FUNCTION__; // 28752
	int nOut; // 210
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 213
	}
	{
		uchar32 uVal; // 222
		bool bErr; // 224
	}
	{
		int nOutElems; // 245
		int nMaxOut; // 249
		{
			uchar32 uVal; // 252
			bool bErr; // 254
		}
	}
} /* size: 0, variables: 2 */

// <00603B7F> tier0/tier0_unicode.cpp:208
// variables: 9
void UnicodeConvertT<>(const char* pIn, int nInChars, wchar_t* pOut, int nOutBytes, EStringConvertErrorPolicy ePolicy, LinguisticToLowerFunctor<char, V_UTF8ToUChar32>& DecodeSrc, EncodeLenFuncAdapter<V_UChar32ToUTF32Len>& EncodeDstLen, EncodeFuncAdapter<wchar_t, V_UChar32ToUTF32>& EncodeDst)
{
	const char   __FUNCTION__; // 28752
	int nOut; // 210
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 213
	}
	{
		uchar32 uVal; // 222
		bool bErr; // 224
	}
	{
		int nOutElems; // 245
		int nMaxOut; // 249
		{
			uchar32 uVal; // 252
			bool bErr; // 254
		}
	}
} /* size: 0, variables: 2 */

// <00603A4C> tier0/tier0_unicode.cpp:208
// variables: 9
void UnicodeConvertT<>(const char* pIn, int nInChars, wchar_t* pOut, int nOutBytes, EStringConvertErrorPolicy ePolicy, LinguisticToUpperFunctor<char, V_UTF8ToUChar32>& DecodeSrc, EncodeLenFuncAdapter<V_UChar32ToUTF32Len>& EncodeDstLen, EncodeFuncAdapter<wchar_t, V_UChar32ToUTF32>& EncodeDst)
{
	const char   __FUNCTION__; // 28752
	int nOut; // 210
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 213
	}
	{
		uchar32 uVal; // 222
		bool bErr; // 224
	}
	{
		int nOutElems; // 245
		int nMaxOut; // 249
		{
			uchar32 uVal; // 252
			bool bErr; // 254
		}
	}
} /* size: 0, variables: 2 */

// <00603919> tier0/tier0_unicode.cpp:208
// variables: 9
void UnicodeConvertT<>(const char* pIn, int nInChars, wchar_t* pOut, int nOutBytes, EStringConvertErrorPolicy ePolicy, WrapSimpleCaseMapFunctor<char, V_UTF8ToUChar32, V_towlower32>& DecodeSrc, EncodeLenFuncAdapter<V_UChar32ToUTF32Len>& EncodeDstLen, EncodeFuncAdapter<wchar_t, V_UChar32ToUTF32>& EncodeDst)
{
	const char   __FUNCTION__; // 28752
	int nOut; // 210
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 213
	}
	{
		uchar32 uVal; // 222
		bool bErr; // 224
	}
	{
		int nOutElems; // 245
		int nMaxOut; // 249
		{
			uchar32 uVal; // 252
			bool bErr; // 254
		}
	}
} /* size: 0, variables: 2 */

// <006037E6> tier0/tier0_unicode.cpp:208
// variables: 9
void UnicodeConvertT<>(const char* pIn, int nInChars, wchar_t* pOut, int nOutBytes, EStringConvertErrorPolicy ePolicy, WrapSimpleCaseMapFunctor<char, V_UTF8ToUChar32, V_towupper32>& DecodeSrc, EncodeLenFuncAdapter<V_UChar32ToUTF32Len>& EncodeDstLen, EncodeFuncAdapter<wchar_t, V_UChar32ToUTF32>& EncodeDst)
{
	const char   __FUNCTION__; // 28752
	int nOut; // 210
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 213
	}
	{
		uchar32 uVal; // 222
		bool bErr; // 224
	}
	{
		int nOutElems; // 245
		int nMaxOut; // 249
		{
			uchar32 uVal; // 252
			bool bErr; // 254
		}
	}
} /* size: 0, variables: 2 */

// <006036B3> tier0/tier0_unicode.cpp:208
// variables: 9
void UnicodeConvertT<>(const char* pIn, int nInChars, wchar_t* pOut, int nOutBytes, EStringConvertErrorPolicy ePolicy, WrapSimpleCaseMapFunctor<char, V_UTF8ToUChar32, V_toworiginal32>& DecodeSrc, EncodeLenFuncAdapter<V_UChar32ToUTF32Len>& EncodeDstLen, EncodeFuncAdapter<wchar_t, V_UChar32ToUTF32>& EncodeDst)
{
	const char   __FUNCTION__; // 28752
	int nOut; // 210
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 213
	}
	{
		uchar32 uVal; // 222
		bool bErr; // 224
	}
	{
		int nOutElems; // 245
		int nMaxOut; // 249
		{
			uchar32 uVal; // 252
			bool bErr; // 254
		}
	}
} /* size: 0, variables: 2 */

// <00603580> tier0/tier0_unicode.cpp:208
// variables: 9
void UnicodeConvertT<>(const short unsigned int* pIn, int nInChars, wchar_t* pOut, int nOutBytes, EStringConvertErrorPolicy ePolicy, LinguisticToLowerFunctor<short unsigned int, V_UTF16ToUChar32>& DecodeSrc, EncodeLenFuncAdapter<V_UChar32ToUTF32Len>& EncodeDstLen, EncodeFuncAdapter<wchar_t, V_UChar32ToUTF32>& EncodeDst)
{
	const char   __FUNCTION__; // 28752
	int nOut; // 210
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 213
	}
	{
		uchar32 uVal; // 222
		bool bErr; // 224
	}
	{
		int nOutElems; // 245
		int nMaxOut; // 249
		{
			uchar32 uVal; // 252
			bool bErr; // 254
		}
	}
} /* size: 0, variables: 2 */

// <0060344D> tier0/tier0_unicode.cpp:208
// variables: 9
void UnicodeConvertT<>(const short unsigned int* pIn, int nInChars, wchar_t* pOut, int nOutBytes, EStringConvertErrorPolicy ePolicy, LinguisticToUpperFunctor<short unsigned int, V_UTF16ToUChar32>& DecodeSrc, EncodeLenFuncAdapter<V_UChar32ToUTF32Len>& EncodeDstLen, EncodeFuncAdapter<wchar_t, V_UChar32ToUTF32>& EncodeDst)
{
	const char   __FUNCTION__; // 28752
	int nOut; // 210
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 213
	}
	{
		uchar32 uVal; // 222
		bool bErr; // 224
	}
	{
		int nOutElems; // 245
		int nMaxOut; // 249
		{
			uchar32 uVal; // 252
			bool bErr; // 254
		}
	}
} /* size: 0, variables: 2 */

// <0060331A> tier0/tier0_unicode.cpp:208
// variables: 9
void UnicodeConvertT<>(const short unsigned int* pIn, int nInChars, wchar_t* pOut, int nOutBytes, EStringConvertErrorPolicy ePolicy, WrapSimpleCaseMapFunctor<short unsigned int, V_UTF16ToUChar32, V_towlower32>& DecodeSrc, EncodeLenFuncAdapter<V_UChar32ToUTF32Len>& EncodeDstLen, EncodeFuncAdapter<wchar_t, V_UChar32ToUTF32>& EncodeDst)
{
	const char   __FUNCTION__; // 28752
	int nOut; // 210
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 213
	}
	{
		uchar32 uVal; // 222
		bool bErr; // 224
	}
	{
		int nOutElems; // 245
		int nMaxOut; // 249
		{
			uchar32 uVal; // 252
			bool bErr; // 254
		}
	}
} /* size: 0, variables: 2 */

// <006031E7> tier0/tier0_unicode.cpp:208
// variables: 9
void UnicodeConvertT<>(const short unsigned int* pIn, int nInChars, wchar_t* pOut, int nOutBytes, EStringConvertErrorPolicy ePolicy, WrapSimpleCaseMapFunctor<short unsigned int, V_UTF16ToUChar32, V_towupper32>& DecodeSrc, EncodeLenFuncAdapter<V_UChar32ToUTF32Len>& EncodeDstLen, EncodeFuncAdapter<wchar_t, V_UChar32ToUTF32>& EncodeDst)
{
	const char   __FUNCTION__; // 28752
	int nOut; // 210
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 213
	}
	{
		uchar32 uVal; // 222
		bool bErr; // 224
	}
	{
		int nOutElems; // 245
		int nMaxOut; // 249
		{
			uchar32 uVal; // 252
			bool bErr; // 254
		}
	}
} /* size: 0, variables: 2 */

// <0060309F> tier0/tier0_unicode.cpp:208
// variables: 9
void UnicodeConvertT<>(const short unsigned int* pIn, int nInChars, wchar_t* pOut, int nOutBytes, EStringConvertErrorPolicy ePolicy, WrapSimpleCaseMapFunctor<short unsigned int, V_UTF16ToUChar32, V_toworiginal32>& DecodeSrc, EncodeLenFuncAdapter<V_UChar32ToUTF32Len>& EncodeDstLen, EncodeFuncAdapter<wchar_t, V_UChar32ToUTF32>& EncodeDst)
{
	const char   __FUNCTION__; // 28752
	int nOut; // 210
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 213
	}
	{
		uchar32 uVal; // 222
		bool bErr; // 224
	}
	{
		int nOutElems; // 245
		int nMaxOut; // 249
		{
			uchar32 uVal; // 252
			bool bErr; // 254
		}
	}
} /* size: 0, variables: 2 */

// <00604A03> tier0/tier0_unicode.cpp:291
inline void DecodeFuncAdapter<char, V_UTF8ToUChar32>::operator(const char* pUTF, uchar32& uVal, bool& bErr)
{
} /* size: 0 */

// <00604911> tier0/tier0_unicode.cpp:291
inline void DecodeFuncAdapter<short unsigned int, V_UTF16ToUChar32>::operator(const short unsigned int* pUTF, uchar32& uVal, bool& bErr)
{
} /* size: 0 */

// <00604878> tier0/tier0_unicode.cpp:291
inline void DecodeFuncAdapter<wchar_t, V_UTF32ToUChar32>::operator(const wchar_t* pUTF, uchar32& uVal, bool& bErr)
{
} /* size: 0 */

// <006049DD> tier0/tier0_unicode.cpp:294
inline void EncodeLenFuncAdapter<V_UChar32ToUTF16Len>::operator(uchar32 uVal)
{
} /* size: 0 */

// <00604984> tier0/tier0_unicode.cpp:294
inline void EncodeLenFuncAdapter<V_UChar32ToUTF32Len>::operator(uchar32 uVal)
{
} /* size: 0 */

// <006048EB> tier0/tier0_unicode.cpp:294
inline void EncodeLenFuncAdapter<V_UChar32ToUTF8Len>::operator(uchar32 uVal)
{
} /* size: 0 */

// <006049AA> tier0/tier0_unicode.cpp:297
inline void EncodeFuncAdapter<short unsigned int, V_UChar32ToUTF16>::operator(uchar32 uVal, short unsigned int* pUTF)
{
} /* size: 0 */

// <00604951> tier0/tier0_unicode.cpp:297
inline void EncodeFuncAdapter<wchar_t, V_UChar32ToUTF32>::operator(uchar32 uVal, wchar_t* pUTF)
{
} /* size: 0 */

// <006048B8> tier0/tier0_unicode.cpp:297
inline void EncodeFuncAdapter<char, V_UChar32ToUTF8>::operator(uchar32 uVal, char* pUTF)
{
} /* size: 0 */

// <0060A667> tier0/tier0_unicode.cpp:300
// variables: 3
void UnicodeConvertT<char, short unsigned int, true, V_UTF8ToUChar32, V_UChar32ToUTF16Len, V_UChar32ToUTF16>(const char* pIn, int nInChars, short unsigned int* pOut, int nOutBytes, EStringConvertErrorPolicy ePolicy)
{
	DecodeFuncAdapter<char, V_UTF8ToUChar32> a; // 302
	EncodeLenFuncAdapter<V_UChar32ToUTF16Len> b; // 303
	EncodeFuncAdapter<short unsigned int, V_UChar32ToUTF16> c; // 304
} /* size: 0, variables: 3 */

// <0060A5B9> tier0/tier0_unicode.cpp:300
// variables: 3
void UnicodeConvertT<char, wchar_t, true, V_UTF8ToUChar32, V_UChar32ToUTF32Len, V_UChar32ToUTF32>(const char* pIn, int nInChars, wchar_t* pOut, int nOutBytes, EStringConvertErrorPolicy ePolicy)
{
	DecodeFuncAdapter<char, V_UTF8ToUChar32> a; // 302
	EncodeLenFuncAdapter<V_UChar32ToUTF32Len> b; // 303
	EncodeFuncAdapter<wchar_t, V_UChar32ToUTF32> c; // 304
} /* size: 0, variables: 3 */

// <0060A501> tier0/tier0_unicode.cpp:300
// variables: 3
void UnicodeConvertT<short unsigned int, char, true, V_UTF16ToUChar32, V_UChar32ToUTF8Len, V_UChar32ToUTF8>(const short unsigned int* pIn, int nInChars, char* pOut, int nOutBytes, EStringConvertErrorPolicy ePolicy)
{
	DecodeFuncAdapter<short unsigned int, V_UTF16ToUChar32> a; // 302
	EncodeLenFuncAdapter<V_UChar32ToUTF8Len> b; // 303
	EncodeFuncAdapter<char, V_UChar32ToUTF8> c; // 304
} /* size: 0, variables: 3 */

// <0060A453> tier0/tier0_unicode.cpp:300
// variables: 3
void UnicodeConvertT<short unsigned int, wchar_t, true, V_UTF16ToUChar32, V_UChar32ToUTF32Len, V_UChar32ToUTF32>(const short unsigned int* pIn, int nInChars, wchar_t* pOut, int nOutBytes, EStringConvertErrorPolicy ePolicy)
{
	DecodeFuncAdapter<short unsigned int, V_UTF16ToUChar32> a; // 302
	EncodeLenFuncAdapter<V_UChar32ToUTF32Len> b; // 303
	EncodeFuncAdapter<wchar_t, V_UChar32ToUTF32> c; // 304
} /* size: 0, variables: 3 */

// <0060A39B> tier0/tier0_unicode.cpp:300
// variables: 3
void UnicodeConvertT<wchar_t, char, true, V_UTF32ToUChar32, V_UChar32ToUTF8Len, V_UChar32ToUTF8>(const wchar_t* pIn, int nInChars, char* pOut, int nOutBytes, EStringConvertErrorPolicy ePolicy)
{
	DecodeFuncAdapter<wchar_t, V_UTF32ToUChar32> a; // 302
	EncodeLenFuncAdapter<V_UChar32ToUTF8Len> b; // 303
	EncodeFuncAdapter<char, V_UChar32ToUTF8> c; // 304
} /* size: 0, variables: 3 */

// <0060A2E3> tier0/tier0_unicode.cpp:300
// variables: 3
void UnicodeConvertT<wchar_t, short unsigned int, true, V_UTF32ToUChar32, V_UChar32ToUTF16Len, V_UChar32ToUTF16>(const wchar_t* pIn, int nInChars, short unsigned int* pOut, int nOutBytes, EStringConvertErrorPolicy ePolicy)
{
	DecodeFuncAdapter<wchar_t, V_UTF32ToUChar32> a; // 302
	EncodeLenFuncAdapter<V_UChar32ToUTF16Len> b; // 303
	EncodeFuncAdapter<short unsigned int, V_UChar32ToUTF16> c; // 304
} /* size: 0, variables: 3 */

// <0060A22B> tier0/tier0_unicode.cpp:300
// variables: 3
void UnicodeConvertT<short unsigned int, short unsigned int, true, V_UTF16ToUChar32, V_UChar32ToUTF16Len, V_UChar32ToUTF16>(const short unsigned int* pIn, int nInChars, short unsigned int* pOut, int nOutBytes, EStringConvertErrorPolicy ePolicy)
{
	DecodeFuncAdapter<short unsigned int, V_UTF16ToUChar32> a; // 302
	EncodeLenFuncAdapter<V_UChar32ToUTF16Len> b; // 303
	EncodeFuncAdapter<short unsigned int, V_UChar32ToUTF16> c; // 304
} /* size: 0, variables: 3 */

// <0060A17D> tier0/tier0_unicode.cpp:300
// variables: 3
void UnicodeConvertT<wchar_t, wchar_t, true, V_UTF32ToUChar32, V_UChar32ToUTF32Len, V_UChar32ToUTF32>(const wchar_t* pIn, int nInChars, wchar_t* pOut, int nOutBytes, EStringConvertErrorPolicy ePolicy)
{
	DecodeFuncAdapter<wchar_t, V_UTF32ToUChar32> a; // 302
	EncodeLenFuncAdapter<V_UChar32ToUTF32Len> b; // 303
	EncodeFuncAdapter<wchar_t, V_UChar32ToUTF32> c; // 304
} /* size: 0, variables: 3 */

// <0060A0C5> tier0/tier0_unicode.cpp:300
// variables: 3
void UnicodeConvertT<char, short unsigned int, false, V_UTF8ToUChar32, V_UChar32ToUTF16Len, V_UChar32ToUTF16>(const char* pIn, int nInChars, short unsigned int* pOut, int nOutBytes, EStringConvertErrorPolicy ePolicy)
{
	DecodeFuncAdapter<char, V_UTF8ToUChar32> a; // 302
	EncodeLenFuncAdapter<V_UChar32ToUTF16Len> b; // 303
	EncodeFuncAdapter<short unsigned int, V_UChar32ToUTF16> c; // 304
} /* size: 0, variables: 3 */

// <0060A017> tier0/tier0_unicode.cpp:300
// variables: 3
void UnicodeConvertT<char, wchar_t, false, V_UTF8ToUChar32, V_UChar32ToUTF32Len, V_UChar32ToUTF32>(const char* pIn, int nInChars, wchar_t* pOut, int nOutBytes, EStringConvertErrorPolicy ePolicy)
{
	DecodeFuncAdapter<char, V_UTF8ToUChar32> a; // 302
	EncodeLenFuncAdapter<V_UChar32ToUTF32Len> b; // 303
	EncodeFuncAdapter<wchar_t, V_UChar32ToUTF32> c; // 304
} /* size: 0, variables: 3 */

// <00609F5F> tier0/tier0_unicode.cpp:300
// variables: 3
void UnicodeConvertT<short unsigned int, char, false, V_UTF16ToUChar32, V_UChar32ToUTF8Len, V_UChar32ToUTF8>(const short unsigned int* pIn, int nInChars, char* pOut, int nOutBytes, EStringConvertErrorPolicy ePolicy)
{
	DecodeFuncAdapter<short unsigned int, V_UTF16ToUChar32> a; // 302
	EncodeLenFuncAdapter<V_UChar32ToUTF8Len> b; // 303
	EncodeFuncAdapter<char, V_UChar32ToUTF8> c; // 304
} /* size: 0, variables: 3 */

// <00609EB1> tier0/tier0_unicode.cpp:300
// variables: 3
void UnicodeConvertT<short unsigned int, wchar_t, false, V_UTF16ToUChar32, V_UChar32ToUTF32Len, V_UChar32ToUTF32>(const short unsigned int* pIn, int nInChars, wchar_t* pOut, int nOutBytes, EStringConvertErrorPolicy ePolicy)
{
	DecodeFuncAdapter<short unsigned int, V_UTF16ToUChar32> a; // 302
	EncodeLenFuncAdapter<V_UChar32ToUTF32Len> b; // 303
	EncodeFuncAdapter<wchar_t, V_UChar32ToUTF32> c; // 304
} /* size: 0, variables: 3 */

// <00609DF9> tier0/tier0_unicode.cpp:300
// variables: 3
void UnicodeConvertT<wchar_t, char, false, V_UTF32ToUChar32, V_UChar32ToUTF8Len, V_UChar32ToUTF8>(const wchar_t* pIn, int nInChars, char* pOut, int nOutBytes, EStringConvertErrorPolicy ePolicy)
{
	DecodeFuncAdapter<wchar_t, V_UTF32ToUChar32> a; // 302
	EncodeLenFuncAdapter<V_UChar32ToUTF8Len> b; // 303
	EncodeFuncAdapter<char, V_UChar32ToUTF8> c; // 304
} /* size: 0, variables: 3 */

// <00609D41> tier0/tier0_unicode.cpp:300
// variables: 3
void UnicodeConvertT<wchar_t, short unsigned int, false, V_UTF32ToUChar32, V_UChar32ToUTF16Len, V_UChar32ToUTF16>(const wchar_t* pIn, int nInChars, short unsigned int* pOut, int nOutBytes, EStringConvertErrorPolicy ePolicy)
{
	DecodeFuncAdapter<wchar_t, V_UTF32ToUChar32> a; // 302
	EncodeLenFuncAdapter<V_UChar32ToUTF16Len> b; // 303
	EncodeFuncAdapter<short unsigned int, V_UChar32ToUTF16> c; // 304
} /* size: 0, variables: 3 */

// <00609C89> tier0/tier0_unicode.cpp:300
// variables: 3
void UnicodeConvertT<char, char, true, V_UTF8ToUChar32, V_UChar32ToUTF8Len, V_UChar32ToUTF8>(const char* pIn, int nInChars, char* pOut, int nOutBytes, EStringConvertErrorPolicy ePolicy)
{
	DecodeFuncAdapter<char, V_UTF8ToUChar32> a; // 302
	EncodeLenFuncAdapter<V_UChar32ToUTF8Len> b; // 303
	EncodeFuncAdapter<char, V_UChar32ToUTF8> c; // 304
} /* size: 0, variables: 3 */

// <0060F299> tier0/tier0_unicode.cpp:330
// variables: 3
void InternalUnicodeTableLookupN(const InternalUnicodeRangeTableEntry_t* pTable, int N, uchar32 uc)
{
	int lo; // 332
	int hi; // 332
	{
		int mid; // 341
	}
} /* size: 127, variables: 2 */

// <006099CB> tier0/tier0_unicode.cpp:362
inline void InternalUnicodeTableLookup<10>(const InternalUnicodeRangeTableEntry_t& table, uchar32 uc)
{
} /* size: 0 */

// <00609984> tier0/tier0_unicode.cpp:362
inline void InternalUnicodeTableLookup<12>(const InternalUnicodeRangeTableEntry_t& table, uchar32 uc)
{
} /* size: 0 */

// <0060993D> tier0/tier0_unicode.cpp:362
inline void InternalUnicodeTableLookup<86>(const InternalUnicodeRangeTableEntry_t& table, uchar32 uc)
{
} /* size: 0 */

// <006098F6> tier0/tier0_unicode.cpp:362
inline void InternalUnicodeTableLookup<11>(const InternalUnicodeRangeTableEntry_t& table, uchar32 uc)
{
} /* size: 0 */

// <006098AF> tier0/tier0_unicode.cpp:362
inline void InternalUnicodeTableLookup<6>(const InternalUnicodeRangeTableEntry_t& table, uchar32 uc)
{
} /* size: 0 */

// <00609868> tier0/tier0_unicode.cpp:362
inline void InternalUnicodeTableLookup<31>(const InternalUnicodeRangeTableEntry_t& table, uchar32 uc)
{
} /* size: 0 */

// <00609C43> tier0/tier0_unicode.cpp:368
// variable: 1
inline void InternalUnicodeApplyDeltaFromTable<70>(const InternalUnicodeRangeTableEntry_t& table, const int32* pDeltas, uchar32 uc)
{
	int nIndex; // 370
} /* size: 0, variables: 1 */

// <00609BE2> tier0/tier0_unicode.cpp:368
// variable: 1
inline void InternalUnicodeApplyDeltaFromTable<23>(const InternalUnicodeRangeTableEntry_t& table, const int32* pDeltas, uchar32 uc)
{
	int nIndex; // 370
} /* size: 0, variables: 1 */

// <00609B81> tier0/tier0_unicode.cpp:368
// variable: 1
inline void InternalUnicodeApplyDeltaFromTable<48>(const InternalUnicodeRangeTableEntry_t& table, const int32* pDeltas, uchar32 uc)
{
	int nIndex; // 370
} /* size: 0, variables: 1 */

// <00609B20> tier0/tier0_unicode.cpp:368
// variable: 1
inline void InternalUnicodeApplyDeltaFromTable<12>(const InternalUnicodeRangeTableEntry_t& table, const int32* pDeltas, uchar32 uc)
{
	int nIndex; // 370
} /* size: 0, variables: 1 */

// <00609A79> tier0/tier0_unicode.cpp:368
// variable: 1
inline void InternalUnicodeApplyDeltaFromTable<53>(const InternalUnicodeRangeTableEntry_t& table, const int32* pDeltas, uchar32 uc)
{
	int nIndex; // 370
} /* size: 0, variables: 1 */

// <00609A18> tier0/tier0_unicode.cpp:368
// variable: 1
inline void InternalUnicodeApplyDeltaFromTable<20>(const InternalUnicodeRangeTableEntry_t& table, const int32* pDeltas, uchar32 uc)
{
	int nIndex; // 370
} /* size: 0, variables: 1 */

// <0060F0DE> tier0/tier0_unicode.cpp:413
// function call: 1
bool V_UnicodeValidate(const uchar32* pUTF32)
{
	V_IsValidUChar32(uchar32 uVal); // 417
} /* size: 89, inline expansions: 1 (49 bytes) */

// <0060EC94> tier0/tier0_unicode.cpp:537
// variable: 1
// function call: 1
int V_UnicodeBufferLength(const uchar32* pUTF32, int nBufferBytes, bool& bErrorOut)
{
	int nChars; // 539
	V_IsValidUChar32(uchar32 uVal); // 554
} /* size: 119, variables: 1, inline expansions: 1 (42 bytes) */

// <0060E9C0> tier0/tier0_unicode.cpp:614
// function call: 1
int V_UTF8ToUTF16(const char* pUTF8, uchar16* pUTF16, int cubDestSizeInBytes, EStringConvertErrorPolicy ePolicy)
{
	UnicodeConvertT<char, short unsigned int, true, V_UTF8ToUChar32, V_UChar32ToUTF16Len, V_UChar32ToUTF16>(const char* pIn,
														int nInChars,
														short unsigned int* pOut,
														int nOutBytes,
														EStringConvertErrorPolicy ePolicy);  // 616
} /* size: 9, inline expansions: 1 (5 bytes) */

// <0060E675> tier0/tier0_unicode.cpp:638
// function call: 1
int V_UTF16ToUTF32(const uchar16* pUTF16, uchar32* pUTF32, int cubDestSizeInBytes, EStringConvertErrorPolicy ePolicy)
{
	UnicodeConvertT<short unsigned int, wchar_t, true, V_UTF16ToUChar32, V_UChar32ToUTF32Len, V_UChar32ToUTF32>(const short unsigned int* pIn,
															int nInChars,
															wchar_t* pOut,
															int nOutBytes,
															EStringConvertErrorPolicy ePolicy);  // 640
} /* size: 9, inline expansions: 1 (5 bytes) */

// <0060E443> tier0/tier0_unicode.cpp:654
// function call: 1
int V_UTF32ToUTF16(const uchar32* pUTF32, uchar16* pUTF16, int cubDestSizeInBytes, EStringConvertErrorPolicy ePolicy)
{
	UnicodeConvertT<wchar_t, short unsigned int, true, V_UTF32ToUChar32, V_UChar32ToUTF16Len, V_UChar32ToUTF16>(const wchar_t* pIn,
															int nInChars,
															short unsigned int* pOut,
															int nOutBytes,
															EStringConvertErrorPolicy ePolicy);  // 656
} /* size: 9, inline expansions: 1 (5 bytes) */

// <0060E32A> tier0/tier0_unicode.cpp:662
// function call: 1
int V_UTF16ToUTF16(const uchar16* pUTF16Source, uchar16* pUTF16Dest, int cubDestSizeInBytes, EStringConvertErrorPolicy ePolicy)
{
	UnicodeConvertT<short unsigned int, short unsigned int, true, V_UTF16ToUChar32, V_UChar32ToUTF16Len, V_UChar32ToUTF16>(const short unsigned int* pIn,
																int nInChars,
																short unsigned int* pOut,
																int nOutBytes,
																EStringConvertErrorPolicy ePolicy);  // 664
} /* size: 9, inline expansions: 1 (5 bytes) */

// <0060E211> tier0/tier0_unicode.cpp:670
// function call: 1
int V_UTF32ToUTF32(const uchar32* pUTF32Source, uchar32* pUTF32Dest, int cubDestSizeInBytes, EStringConvertErrorPolicy ePolicy)
{
	UnicodeConvertT<wchar_t, wchar_t, true, V_UTF32ToUChar32, V_UChar32ToUTF32Len, V_UChar32ToUTF32>(const wchar_t* pIn,
													int nInChars,
													wchar_t* pOut,
													int nOutBytes,
													EStringConvertErrorPolicy ePolicy);  // 672
} /* size: 9, inline expansions: 1 (5 bytes) */

// <0060DE72> tier0/tier0_unicode.cpp:694
// function call: 1
int V_UTF16CharsToUTF8(const uchar16* pUTF16, int nElements, char* pUTF8, int cubDestSizeInBytes, EStringConvertErrorPolicy ePolicy)
{
	UnicodeConvertT<short unsigned int, char, false, V_UTF16ToUChar32, V_UChar32ToUTF8Len, V_UChar32ToUTF8>(const short unsigned int* pIn,
														int nInChars,
														char* pOut,
														int nOutBytes,
														EStringConvertErrorPolicy ePolicy);  // 696
} /* size: 9, inline expansions: 1 (5 bytes) */

// <0060DD3D> tier0/tier0_unicode.cpp:702
// function call: 1
int V_UTF16CharsToUTF32(const uchar16* pUTF16, int nElements, uchar32* pUTF32, int cubDestSizeInBytes, EStringConvertErrorPolicy ePolicy)
{
	UnicodeConvertT<short unsigned int, wchar_t, false, V_UTF16ToUChar32, V_UChar32ToUTF32Len, V_UChar32ToUTF32>(const short unsigned int* pIn,
															int nInChars,
															wchar_t* pOut,
															int nOutBytes,
															EStringConvertErrorPolicy ePolicy);  // 704
} /* size: 9, inline expansions: 1 (5 bytes) */

// <0060DAD3> tier0/tier0_unicode.cpp:718
// function call: 1
int V_UTF32CharsToUTF16(const uchar32* pUTF32, int nElements, uchar16* pUTF16, int cubDestSizeInBytes, EStringConvertErrorPolicy ePolicy)
{
	UnicodeConvertT<wchar_t, short unsigned int, false, V_UTF32ToUChar32, V_UChar32ToUTF16Len, V_UChar32ToUTF16>(const wchar_t* pIn,
															int nInChars,
															short unsigned int* pOut,
															int nOutBytes,
															EStringConvertErrorPolicy ePolicy);  // 720
} /* size: 9, inline expansions: 1 (5 bytes) */

// <0060D7DD> tier0/tier0_unicode.cpp:762
// variable: 1
// function calls: 3
int V_GetUTF8BytesNeeded(const uchar32* pString, int nStringUnits)
{
	int nNeeded; // 769
	V_strlen32(const uchar32* puc32); // 766
	V_UChar32ToUTF8Len(uchar32 uVal); // 50
	V_UChar32ToUTF8Len(uchar32 uVal); // 772
} /* size: 151, variables: 1, inline expansions: 3 (128 bytes) */

// <0060D50A> tier0/tier0_unicode.cpp:798
// function call: 1
int V_UnicodeRepair(uchar32* pUTF32, EStringConvertErrorPolicy ePolicy)
{
	UnicodeConvertT<wchar_t, wchar_t, true, V_UTF32ToUChar32, V_UChar32ToUTF32Len, V_UChar32ToUTF32>(const wchar_t* pIn,
													int nInChars,
													wchar_t* pOut,
													int nOutBytes,
													EStringConvertErrorPolicy ePolicy);  // 800
} /* size: 19, inline expansions: 1 (13 bytes) */

// <0060D321> tier0/tier0_unicode.cpp:808
// variables: 5
// function calls: 4
uchar32 V_towupper32(uchar32 uc)
{
	const int32   s_SimpleToUpper_deltas; // 819
	const InternalUnicodeRangeTableEntry_t   s_SimpleToUpper_1; // 827
	const InternalUnicodeRangeTableEntry_t   s_SimpleToUpper_2; // 853
	const InternalUnicodeRangeTableEntry_t   s_SimpleToUpper_3; // 862
	const InternalUnicodeRangeTableEntry_t   s_SimpleToUpper_4; // 879
	InternalUnicodeApplyDeltaFromTable<70>(const InternalUnicodeRangeTableEntry_t& table,
						const int32* pDeltas,
						uchar32 uc);  // 891
	InternalUnicodeApplyDeltaFromTable<23>(const InternalUnicodeRangeTableEntry_t& table,
						const int32* pDeltas,
						uchar32 uc);  // 893
	InternalUnicodeApplyDeltaFromTable<12>(const InternalUnicodeRangeTableEntry_t& table,
						const int32* pDeltas,
						uchar32 uc);  // 900
	InternalUnicodeApplyDeltaFromTable<48>(const InternalUnicodeRangeTableEntry_t& table,
						const int32* pDeltas,
						uchar32 uc);  // 898
} /* size: 269, variables: 5, inline expansions: 4 (105 bytes) */

// <0060D123> tier0/tier0_unicode.cpp:918
// variables: 5
// function calls: 4
uchar32 V_towlower32(uchar32 uc)
{
	const int32   s_SimpleToLower_deltas; // 929
	const InternalUnicodeRangeTableEntry_t   s_SimpleToLower_1; // 937
	const InternalUnicodeRangeTableEntry_t   s_SimpleToLower_2; // 958
	const InternalUnicodeRangeTableEntry_t   s_SimpleToLower_3; // 967
	const InternalUnicodeRangeTableEntry_t   s_SimpleToLower_4; // 986
	InternalUnicodeApplyDeltaFromTable<57>(const InternalUnicodeRangeTableEntry_t& table,
						const int32* pDeltas,
						uchar32 uc);  // 1001
	InternalUnicodeApplyDeltaFromTable<23>(const InternalUnicodeRangeTableEntry_t& table,
						const int32* pDeltas,
						uchar32 uc);  // 1003
	InternalUnicodeApplyDeltaFromTable<20>(const InternalUnicodeRangeTableEntry_t& table,
						const int32* pDeltas,
						uchar32 uc);  // 1010
	InternalUnicodeApplyDeltaFromTable<53>(const InternalUnicodeRangeTableEntry_t& table,
						const int32* pDeltas,
						uchar32 uc);  // 1008
} /* size: 269, variables: 5, inline expansions: 4 (105 bytes) */

// <0060D0FE> tier0/tier0_unicode.cpp:1027
uchar32 V_toworiginal32(uchar32 uc)
{
} /* size: 0 */

// <0060CE6F> tier0/tier0_unicode.cpp:1038
// variables: 7
// function calls: 4
void UChar32ToUpper(uchar32 uc, uchar32& rgOut)
{
	uchar32 simple; // 1040
	uchar16 s_SpecialUpperCaseValues; // 1051
	const InternalUnicodeRangeTableEntry_t   k_SpecialUpperCaseLookup1; // 1085
	const InternalUnicodeRangeTableEntry_t   k_SpecialUpperCaseLookup2; // 1090
	const InternalUnicodeRangeTableEntry_t   k_SpecialUpperCaseLookup3; // 1095
	const InternalUnicodeRangeTableEntry_t   k_SpecialUpperCaseLookup4; // 1125
	int nIndex; // 1132
	InternalUnicodeTableLookup<10>(const InternalUnicodeRangeTableEntry_t& table,
					uchar32 uc);  // 1137
	InternalUnicodeTableLookup<12>(const InternalUnicodeRangeTableEntry_t& table,
					uchar32 uc);  // 1141
	InternalUnicodeTableLookup<86>(const InternalUnicodeRangeTableEntry_t& table,
					uchar32 uc);  // 1148
	InternalUnicodeTableLookup<11>(const InternalUnicodeRangeTableEntry_t& table,
					uchar32 uc);  // 1152
} /* size: 262, variables: 7, inline expansions: 4 (75 bytes) */

// <0060CCCC> tier0/tier0_unicode.cpp:1173
// variables: 5
// function calls: 2
void UChar32ToLower(uchar32 uc, uchar32& rgOut)
{
	uchar32 simple; // 1175
	const uint16   k_SpecialLowerCaseValues; // 1186
	const InternalUnicodeRangeTableEntry_t   k_SpecialLowerCaseLookup1; // 1196
	const InternalUnicodeRangeTableEntry_t   k_SpecialLowerCaseLookup2; // 1199
	int nIndex; // 1213
	InternalUnicodeTableLookup<6>(const InternalUnicodeRangeTableEntry_t& table,
					uchar32 uc);  // 1216
	InternalUnicodeTableLookup<31>(const InternalUnicodeRangeTableEntry_t& table,
					uchar32 uc);  // 1220
} /* size: 173, variables: 5, inline expansions: 2 (36 bytes) */

// <0060685B> tier0/tier0_unicode.cpp:1333
void LinguisticToUpperFunctor<char, V_UTF8ToUChar32>::LinguisticToUpperFunctor()
{
} /* size: 0 */

// <00606842> tier0/tier0_unicode.cpp:1333
inline void LinguisticToUpperFunctor<char, V_UTF8ToUChar32>::LinguisticToUpperFunctor()
{
} /* size: 0 */

// <00606216> tier0/tier0_unicode.cpp:1333
void LinguisticToUpperFunctor<short unsigned int, V_UTF16ToUChar32>::LinguisticToUpperFunctor()
{
} /* size: 0 */

// <006061FD> tier0/tier0_unicode.cpp:1333
inline void LinguisticToUpperFunctor<short unsigned int, V_UTF16ToUChar32>::LinguisticToUpperFunctor()
{
} /* size: 0 */

// <00605BD7> tier0/tier0_unicode.cpp:1333
void LinguisticToUpperFunctor<wchar_t, V_UTF32ToUChar32>::LinguisticToUpperFunctor()
{
} /* size: 0 */

// <00605BBE> tier0/tier0_unicode.cpp:1333
inline void LinguisticToUpperFunctor<wchar_t, V_UTF32ToUChar32>::LinguisticToUpperFunctor()
{
} /* size: 0 */

// <0060478E> tier0/tier0_unicode.cpp:1335
// variables: 2
inline void LinguisticToUpperFunctor<char, V_UTF8ToUChar32>::operator(const char* pUTF, uchar32& uValueOut, bool& bErrorOut)
{
	uchar32 uc; // 1346
	int ret; // 1347
} /* size: 0, variables: 2 */

// <00604599> tier0/tier0_unicode.cpp:1335
// variables: 2
inline void LinguisticToUpperFunctor<short unsigned int, V_UTF16ToUChar32>::operator(const short unsigned int* pUTF, uchar32& uValueOut, bool& bErrorOut)
{
	uchar32 uc; // 1346
	int ret; // 1347
} /* size: 0, variables: 2 */

// <006043A4> tier0/tier0_unicode.cpp:1335
// variables: 2
inline void LinguisticToUpperFunctor<wchar_t, V_UTF32ToUChar32>::operator(const wchar_t* pUTF, uchar32& uValueOut, bool& bErrorOut)
{
	uchar32 uc; // 1346
	int ret; // 1347
} /* size: 0, variables: 2 */

// <006069B4> tier0/tier0_unicode.cpp:1385
void LinguisticToLowerFunctor<char, V_UTF8ToUChar32>::LinguisticToLowerFunctor()
{
} /* size: 0 */

// <0060699B> tier0/tier0_unicode.cpp:1385
inline void LinguisticToLowerFunctor<char, V_UTF8ToUChar32>::LinguisticToLowerFunctor()
{
} /* size: 0 */

// <0060636F> tier0/tier0_unicode.cpp:1385
void LinguisticToLowerFunctor<short unsigned int, V_UTF16ToUChar32>::LinguisticToLowerFunctor()
{
} /* size: 0 */

// <00606356> tier0/tier0_unicode.cpp:1385
inline void LinguisticToLowerFunctor<short unsigned int, V_UTF16ToUChar32>::LinguisticToLowerFunctor()
{
} /* size: 0 */

// <00605D36> tier0/tier0_unicode.cpp:1385
void LinguisticToLowerFunctor<wchar_t, V_UTF32ToUChar32>::LinguisticToLowerFunctor()
{
} /* size: 0 */

// <00605D1D> tier0/tier0_unicode.cpp:1385
inline void LinguisticToLowerFunctor<wchar_t, V_UTF32ToUChar32>::LinguisticToLowerFunctor()
{
} /* size: 0 */

// <00617523> tier0/tier0_unicode.cpp:1387
// variables: 6
void LinguisticToLowerFunctor<char, V_UTF8ToUChar32>::operator(const char* pUTF, uchar32& uValueOut, bool& bErrorOut)
{
	uchar32 uc; // 1396
	int ret; // 1397
	{
		const char* pLookahead; // 1421
		{
			int n; // 1422
			{
				uchar32 ucAhead; // 1424
				bool bErrorAhead; // 1425
			}
		}
	}
} /* size: 488, variables: 2 */

// <00616EC8> tier0/tier0_unicode.cpp:1387
// variables: 6
void LinguisticToLowerFunctor<short unsigned int, V_UTF16ToUChar32>::operator(const short unsigned int* pUTF, uchar32& uValueOut, bool& bErrorOut)
{
	uchar32 uc; // 1396
	int ret; // 1397
	{
		const short unsigned int* pLookahead; // 1421
		{
			int n; // 1422
			{
				uchar32 ucAhead; // 1424
				bool bErrorAhead; // 1425
			}
		}
	}
} /* size: 488, variables: 2 */

// <00616B5D> tier0/tier0_unicode.cpp:1387
// variables: 6
void LinguisticToLowerFunctor<wchar_t, V_UTF32ToUChar32>::operator(const wchar_t* pUTF, uchar32& uValueOut, bool& bErrorOut)
{
	uchar32 uc; // 1396
	int ret; // 1397
	{
		const wchar_t* pLookahead; // 1421
		{
			int n; // 1422
			{
				uchar32 ucAhead; // 1424
				bool bErrorAhead; // 1425
			}
		}
	}
} /* size: 488, variables: 2 */

// <006047E7> tier0/tier0_unicode.cpp:1387
// variables: 6
inline void LinguisticToLowerFunctor<char, V_UTF8ToUChar32>::operator(const char* pUTF, uchar32& uValueOut, bool& bErrorOut)
{
	uchar32 uc; // 1396
	int ret; // 1397
	{
		const char* pLookahead; // 1421
		{
			int n; // 1422
			{
				uchar32 ucAhead; // 1424
				bool bErrorAhead; // 1425
			}
		}
	}
} /* size: 0, variables: 2 */

// <006045F2> tier0/tier0_unicode.cpp:1387
// variables: 6
inline void LinguisticToLowerFunctor<short unsigned int, V_UTF16ToUChar32>::operator(const short unsigned int* pUTF, uchar32& uValueOut, bool& bErrorOut)
{
	uchar32 uc; // 1396
	int ret; // 1397
	{
		const short unsigned int* pLookahead; // 1421
		{
			int n; // 1422
			{
				uchar32 ucAhead; // 1424
				bool bErrorAhead; // 1425
			}
		}
	}
} /* size: 0, variables: 2 */

// <006043FD> tier0/tier0_unicode.cpp:1387
// variables: 6
inline void LinguisticToLowerFunctor<wchar_t, V_UTF32ToUChar32>::operator(const wchar_t* pUTF, uchar32& uValueOut, bool& bErrorOut)
{
	uchar32 uc; // 1396
	int ret; // 1397
	{
		const wchar_t* pLookahead; // 1421
		{
			int n; // 1422
			{
				uchar32 ucAhead; // 1424
				bool bErrorAhead; // 1425
			}
		}
	}
} /* size: 0, variables: 2 */

// <00604735> tier0/tier0_unicode.cpp:1460
// variables: 2
inline void WrapSimpleCaseMapFunctor<char, V_UTF8ToUChar32, V_towlower32>::operator(const char* pUTF, uchar32& uValueOut, bool& bErrorOut)
{
	uchar32 uc; // 1462
	int ret; // 1463
} /* size: 0, variables: 2 */

// <006046DC> tier0/tier0_unicode.cpp:1460
// variables: 2
inline void WrapSimpleCaseMapFunctor<char, V_UTF8ToUChar32, V_towupper32>::operator(const char* pUTF, uchar32& uValueOut, bool& bErrorOut)
{
	uchar32 uc; // 1462
	int ret; // 1463
} /* size: 0, variables: 2 */

// <00604683> tier0/tier0_unicode.cpp:1460
// variables: 2
inline void WrapSimpleCaseMapFunctor<char, V_UTF8ToUChar32, V_toworiginal32>::operator(const char* pUTF, uchar32& uValueOut, bool& bErrorOut)
{
	uchar32 uc; // 1462
	int ret; // 1463
} /* size: 0, variables: 2 */

// <00604540> tier0/tier0_unicode.cpp:1460
// variables: 2
inline void WrapSimpleCaseMapFunctor<short unsigned int, V_UTF16ToUChar32, V_towlower32>::operator(const short unsigned int* pUTF, uchar32& uValueOut, bool& bErrorOut)
{
	uchar32 uc; // 1462
	int ret; // 1463
} /* size: 0, variables: 2 */

// <006044E7> tier0/tier0_unicode.cpp:1460
// variables: 2
inline void WrapSimpleCaseMapFunctor<short unsigned int, V_UTF16ToUChar32, V_towupper32>::operator(const short unsigned int* pUTF, uchar32& uValueOut, bool& bErrorOut)
{
	uchar32 uc; // 1462
	int ret; // 1463
} /* size: 0, variables: 2 */

// <0060448E> tier0/tier0_unicode.cpp:1460
// variables: 2
inline void WrapSimpleCaseMapFunctor<short unsigned int, V_UTF16ToUChar32, V_toworiginal32>::operator(const short unsigned int* pUTF, uchar32& uValueOut, bool& bErrorOut)
{
	uchar32 uc; // 1462
	int ret; // 1463
} /* size: 0, variables: 2 */

// <0060434B> tier0/tier0_unicode.cpp:1460
// variables: 2
inline void WrapSimpleCaseMapFunctor<wchar_t, V_UTF32ToUChar32, V_towlower32>::operator(const wchar_t* pUTF, uchar32& uValueOut, bool& bErrorOut)
{
	uchar32 uc; // 1462
	int ret; // 1463
} /* size: 0, variables: 2 */

// <006042F2> tier0/tier0_unicode.cpp:1460
// variables: 2
inline void WrapSimpleCaseMapFunctor<wchar_t, V_UTF32ToUChar32, V_towupper32>::operator(const wchar_t* pUTF, uchar32& uValueOut, bool& bErrorOut)
{
	uchar32 uc; // 1462
	int ret; // 1463
} /* size: 0, variables: 2 */

// <00604299> tier0/tier0_unicode.cpp:1460
// variables: 2
inline void WrapSimpleCaseMapFunctor<wchar_t, V_UTF32ToUChar32, V_toworiginal32>::operator(const wchar_t* pUTF, uchar32& uValueOut, bool& bErrorOut)
{
	uchar32 uc; // 1462
	int ret; // 1463
} /* size: 0, variables: 2 */

// <006096EB> tier0/tier0_unicode.cpp:1470
// variables: 12
void UnicodeCaseConvertT<char, char, V_UTF8ToUChar32, V_UChar32ToUTF8Len, V_UChar32ToUTF8>(const char* in, char* out, int cchOut, int nStringCaseFlags, EStringConvertErrorPolicy ePolicy)
{
	const char   __FUNCTION__; // 35912
	EncodeLenFuncAdapter<V_UChar32ToUTF8Len> EncLen; // 1476
	EncodeFuncAdapter<char, V_UChar32ToUTF8> Enc; // 1477
	int ret; // 1479
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1474
	}
	{
		LinguisticToLowerFunctor<char, V_UTF8ToUChar32> Dec; // 1484
	}
	{
		LinguisticToUpperFunctor<char, V_UTF8ToUChar32> Dec; // 1492
	}
	{
		WrapSimpleCaseMapFunctor<char, V_UTF8ToUChar32, V_towlower32> Dec; // 1500
	}
	{
		WrapSimpleCaseMapFunctor<char, V_UTF8ToUChar32, V_towupper32> Dec; // 1507
	}
	{
		WrapSimpleCaseMapFunctor<char, V_UTF8ToUChar32, V_toworiginal32> Dec; // 1517
	}
	{
		WrapSimpleCaseMapFunctor<char, V_UTF8ToUChar32, V_towupper32> Dec; // 1529
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1528
		}
	}
} /* size: 0, variables: 4 */

// <00609575> tier0/tier0_unicode.cpp:1470
// variables: 12
void UnicodeCaseConvertT<short unsigned int, short unsigned int, V_UTF16ToUChar32, V_UChar32ToUTF16Len, V_UChar32ToUTF16>(const short unsigned int* in, short unsigned int* out, int cchOut, int nStringCaseFlags, EStringConvertErrorPolicy ePolicy)
{
	const char   __FUNCTION__; // 35912
	EncodeLenFuncAdapter<V_UChar32ToUTF16Len> EncLen; // 1476
	EncodeFuncAdapter<short unsigned int, V_UChar32ToUTF16> Enc; // 1477
	int ret; // 1479
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1474
	}
	{
		LinguisticToLowerFunctor<short unsigned int, V_UTF16ToUChar32> Dec; // 1484
	}
	{
		LinguisticToUpperFunctor<short unsigned int, V_UTF16ToUChar32> Dec; // 1492
	}
	{
		WrapSimpleCaseMapFunctor<short unsigned int, V_UTF16ToUChar32, V_towlower32> Dec; // 1500
	}
	{
		WrapSimpleCaseMapFunctor<short unsigned int, V_UTF16ToUChar32, V_towupper32> Dec; // 1507
	}
	{
		WrapSimpleCaseMapFunctor<short unsigned int, V_UTF16ToUChar32, V_toworiginal32> Dec; // 1517
	}
	{
		WrapSimpleCaseMapFunctor<short unsigned int, V_UTF16ToUChar32, V_towupper32> Dec; // 1529
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1528
		}
	}
} /* size: 0, variables: 4 */

// <00609236> tier0/tier0_unicode.cpp:1470
// variables: 12
// function calls: 2
void UnicodeCaseConvertT<wchar_t, wchar_t, V_UTF32ToUChar32, V_UChar32ToUTF32Len, V_UChar32ToUTF32>(const wchar_t* in, wchar_t* out, int cchOut, int nStringCaseFlags, EStringConvertErrorPolicy ePolicy)
{
	const char   __FUNCTION__; // 35912
	EncodeLenFuncAdapter<V_UChar32ToUTF32Len> EncLen; // 1476
	EncodeFuncAdapter<wchar_t, V_UChar32ToUTF32> Enc; // 1477
	int ret; // 1479
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1474
	}
	{
		LinguisticToLowerFunctor<wchar_t, V_UTF32ToUChar32> Dec; // 1484
		LinguisticToLowerFunctor<wchar_t, V_UTF32ToUChar32>::LinguisticToLowerFunctor(); // 1484
	}
	{
		LinguisticToUpperFunctor<wchar_t, V_UTF32ToUChar32> Dec; // 1492
		LinguisticToUpperFunctor<wchar_t, V_UTF32ToUChar32>::LinguisticToUpperFunctor(); // 1492
	}
	{
		WrapSimpleCaseMapFunctor<wchar_t, V_UTF32ToUChar32, V_towlower32> Dec; // 1500
	}
	{
		WrapSimpleCaseMapFunctor<wchar_t, V_UTF32ToUChar32, V_towupper32> Dec; // 1507
	}
	{
		WrapSimpleCaseMapFunctor<wchar_t, V_UTF32ToUChar32, V_toworiginal32> Dec; // 1517
	}
	{
		WrapSimpleCaseMapFunctor<wchar_t, V_UTF32ToUChar32, V_towupper32> Dec; // 1529
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1528
		}
	}
} /* size: 0, variables: 4 */

// <00605145> tier0/tier0_unicode.cpp:1470
// variables: 12
// function calls: 2
void UnicodeCaseConvertT<char, short unsigned int, V_UTF8ToUChar32, V_UChar32ToUTF16Len, V_UChar32ToUTF16>(const char* in, short unsigned int* out, int cchOut, int nStringCaseFlags, EStringConvertErrorPolicy ePolicy)
{
	const char   __FUNCTION__; // 35912
	EncodeLenFuncAdapter<V_UChar32ToUTF16Len> EncLen; // 1476
	EncodeFuncAdapter<short unsigned int, V_UChar32ToUTF16> Enc; // 1477
	int ret; // 1479
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1474
	}
	{
		LinguisticToLowerFunctor<char, V_UTF8ToUChar32> Dec; // 1484
		LinguisticToLowerFunctor<char, V_UTF8ToUChar32>::LinguisticToLowerFunctor(); // 1484
	}
	{
		LinguisticToUpperFunctor<char, V_UTF8ToUChar32> Dec; // 1492
		LinguisticToUpperFunctor<char, V_UTF8ToUChar32>::LinguisticToUpperFunctor(); // 1492
	}
	{
		WrapSimpleCaseMapFunctor<char, V_UTF8ToUChar32, V_towlower32> Dec; // 1500
	}
	{
		WrapSimpleCaseMapFunctor<char, V_UTF8ToUChar32, V_towupper32> Dec; // 1507
	}
	{
		WrapSimpleCaseMapFunctor<char, V_UTF8ToUChar32, V_toworiginal32> Dec; // 1517
	}
	{
		WrapSimpleCaseMapFunctor<char, V_UTF8ToUChar32, V_towupper32> Dec; // 1529
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1528
		}
	}
} /* size: 0, variables: 4 */

// <00604DF2> tier0/tier0_unicode.cpp:1470
// variables: 12
// function calls: 2
void UnicodeCaseConvertT<char, wchar_t, V_UTF8ToUChar32, V_UChar32ToUTF32Len, V_UChar32ToUTF32>(const char* in, wchar_t* out, int cchOut, int nStringCaseFlags, EStringConvertErrorPolicy ePolicy)
{
	const char   __FUNCTION__; // 35912
	EncodeLenFuncAdapter<V_UChar32ToUTF32Len> EncLen; // 1476
	EncodeFuncAdapter<wchar_t, V_UChar32ToUTF32> Enc; // 1477
	int ret; // 1479
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1474
	}
	{
		LinguisticToLowerFunctor<char, V_UTF8ToUChar32> Dec; // 1484
		LinguisticToLowerFunctor<char, V_UTF8ToUChar32>::LinguisticToLowerFunctor(); // 1484
	}
	{
		LinguisticToUpperFunctor<char, V_UTF8ToUChar32> Dec; // 1492
		LinguisticToUpperFunctor<char, V_UTF8ToUChar32>::LinguisticToUpperFunctor(); // 1492
	}
	{
		WrapSimpleCaseMapFunctor<char, V_UTF8ToUChar32, V_towlower32> Dec; // 1500
	}
	{
		WrapSimpleCaseMapFunctor<char, V_UTF8ToUChar32, V_towupper32> Dec; // 1507
	}
	{
		WrapSimpleCaseMapFunctor<char, V_UTF8ToUChar32, V_toworiginal32> Dec; // 1517
	}
	{
		WrapSimpleCaseMapFunctor<char, V_UTF8ToUChar32, V_towupper32> Dec; // 1529
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1528
		}
	}
} /* size: 0, variables: 4 */

// <00604A85> tier0/tier0_unicode.cpp:1470
// variables: 12
// function calls: 2
void UnicodeCaseConvertT<short unsigned int, wchar_t, V_UTF16ToUChar32, V_UChar32ToUTF32Len, V_UChar32ToUTF32>(const short unsigned int* in, wchar_t* out, int cchOut, int nStringCaseFlags, EStringConvertErrorPolicy ePolicy)
{
	const char   __FUNCTION__; // 35912
	EncodeLenFuncAdapter<V_UChar32ToUTF32Len> EncLen; // 1476
	EncodeFuncAdapter<wchar_t, V_UChar32ToUTF32> Enc; // 1477
	int ret; // 1479
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1474
	}
	{
		LinguisticToLowerFunctor<short unsigned int, V_UTF16ToUChar32> Dec; // 1484
		LinguisticToLowerFunctor<short unsigned int, V_UTF16ToUChar32>::LinguisticToLowerFunctor(); // 1484
	}
	{
		LinguisticToUpperFunctor<short unsigned int, V_UTF16ToUChar32> Dec; // 1492
		LinguisticToUpperFunctor<short unsigned int, V_UTF16ToUChar32>::LinguisticToUpperFunctor(); // 1492
	}
	{
		WrapSimpleCaseMapFunctor<short unsigned int, V_UTF16ToUChar32, V_towlower32> Dec; // 1500
	}
	{
		WrapSimpleCaseMapFunctor<short unsigned int, V_UTF16ToUChar32, V_towupper32> Dec; // 1507
	}
	{
		WrapSimpleCaseMapFunctor<short unsigned int, V_UTF16ToUChar32, V_toworiginal32> Dec; // 1517
	}
	{
		WrapSimpleCaseMapFunctor<short unsigned int, V_UTF16ToUChar32, V_towupper32> Dec; // 1529
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1528
		}
	}
} /* size: 0, variables: 4 */

// <00607D45> tier0/tier0_unicode.cpp:1539
// variables: 2
void UnicodeConvertAndCaseT<char, short unsigned int, V_UTF8ToUChar32, V_UChar32ToUTF16Len, V_UChar32ToUTF16>(const char* str, short unsigned int* pFixedBuf, int nFixedBufBytes, short unsigned int** pAllocBuf, int nStringCaseFlags, EStringConvertErrorPolicy ePolicy)
{
	short unsigned int* pResult; // 1543
	int nDstCharsNeeded; // 1544
} /* size: 0, variables: 2 */

// <00607C95> tier0/tier0_unicode.cpp:1539
// variables: 2
void UnicodeConvertAndCaseT<char, wchar_t, V_UTF8ToUChar32, V_UChar32ToUTF32Len, V_UChar32ToUTF32>(const char* str, wchar_t* pFixedBuf, int nFixedBufBytes, wchar_t** pAllocBuf, int nStringCaseFlags, EStringConvertErrorPolicy ePolicy)
{
	wchar_t* pResult; // 1543
	int nDstCharsNeeded; // 1544
} /* size: 0, variables: 2 */

// <00607BEB> tier0/tier0_unicode.cpp:1539
// variables: 2
void UnicodeConvertAndCaseT<short unsigned int, wchar_t, V_UTF16ToUChar32, V_UChar32ToUTF32Len, V_UChar32ToUTF32>(const short unsigned int* str, wchar_t* pFixedBuf, int nFixedBufBytes, wchar_t** pAllocBuf, int nStringCaseFlags, EStringConvertErrorPolicy ePolicy)
{
	wchar_t* pResult; // 1543
	int nDstCharsNeeded; // 1544
} /* size: 0, variables: 2 */

// <00607B41> tier0/tier0_unicode.cpp:1539
// variables: 2
void UnicodeConvertAndCaseT<wchar_t, wchar_t, V_UTF32ToUChar32, V_UChar32ToUTF32Len, V_UChar32ToUTF32>(const wchar_t* str, wchar_t* pFixedBuf, int nFixedBufBytes, wchar_t** pAllocBuf, int nStringCaseFlags, EStringConvertErrorPolicy ePolicy)
{
	wchar_t* pResult; // 1543
	int nDstCharsNeeded; // 1544
} /* size: 0, variables: 2 */

// <00608F6F> tier0/tier0_unicode.cpp:1592
// variables: 2
// function calls: 6
int V_UnicodeCaseCompareFull<char>(const char* str1, const char* str2, int nStringCaseFlags, EStringConvertErrorPolicy ePolicy)
{
	CUnicodeConvertAndCaseStr<char, wchar_t, 100> strOp1; // 1598
	CUnicodeConvertAndCaseStr<char, wchar_t, 100> strOp2; // 1599
	CUnicodeConvertAndCaseStr<char, wchar_t, 100>::CUnicodeConvertAndCaseStr(); // 1598
	CUnicodeConvertAndCaseStr<char, wchar_t, 100>::Convert(
		const char* str,
		int nStringCaseFlags,
		EStringConvertErrorPolicy ePolicy);  // 1600
	CUnicodeConvertAndCaseStr<char, wchar_t, 100>::CUnicodeConvertAndCaseStr(); // 1599
	{
	}
	CUnicodeConvertAndCaseStr<char, wchar_t, 100>::Convert(
		const char* str,
		int nStringCaseFlags,
		EStringConvertErrorPolicy ePolicy);  // 1600
	CUnicodeConvertAndCaseStr<char, wchar_t, 100>::~CUnicodeConvertAndCaseStr(); // 1601
	CUnicodeConvertAndCaseStr<char, wchar_t, 100>::~CUnicodeConvertAndCaseStr(); // 1601
} /* size: 315, variables: 2, inline expansions: 6 (212 bytes) */

// <00608CA8> tier0/tier0_unicode.cpp:1592
// variables: 2
// function calls: 6
int V_UnicodeCaseCompareFull<short unsigned int>(const short unsigned int* str1, const short unsigned int* str2, int nStringCaseFlags, EStringConvertErrorPolicy ePolicy)
{
	CUnicodeConvertAndCaseStr<short unsigned int, wchar_t, 100> strOp1; // 1598
	CUnicodeConvertAndCaseStr<short unsigned int, wchar_t, 100> strOp2; // 1599
	CUnicodeConvertAndCaseStr<short unsigned int, wchar_t, 100>::CUnicodeConvertAndCaseStr(); // 1598
	CUnicodeConvertAndCaseStr<short unsigned int, wchar_t, 100>::Convert(
		const short unsigned int* str,
		int nStringCaseFlags,
		EStringConvertErrorPolicy ePolicy);  // 1600
	CUnicodeConvertAndCaseStr<short unsigned int, wchar_t, 100>::CUnicodeConvertAndCaseStr(); // 1599
	{
	}
	CUnicodeConvertAndCaseStr<short unsigned int, wchar_t, 100>::Convert(
		const short unsigned int* str,
		int nStringCaseFlags,
		EStringConvertErrorPolicy ePolicy);  // 1600
	CUnicodeConvertAndCaseStr<short unsigned int, wchar_t, 100>::~CUnicodeConvertAndCaseStr(); // 1601
	CUnicodeConvertAndCaseStr<short unsigned int, wchar_t, 100>::~CUnicodeConvertAndCaseStr(); // 1601
} /* size: 315, variables: 2, inline expansions: 6 (212 bytes) */

// <006089E1> tier0/tier0_unicode.cpp:1592
// variables: 2
// function calls: 6
int V_UnicodeCaseCompareFull<wchar_t>(const wchar_t* str1, const wchar_t* str2, int nStringCaseFlags, EStringConvertErrorPolicy ePolicy)
{
	CUnicodeConvertAndCaseStr<wchar_t, wchar_t, 100> strOp1; // 1598
	CUnicodeConvertAndCaseStr<wchar_t, wchar_t, 100> strOp2; // 1599
	CUnicodeConvertAndCaseStr<wchar_t, wchar_t, 100>::CUnicodeConvertAndCaseStr(); // 1598
	CUnicodeConvertAndCaseStr<wchar_t, wchar_t, 100>::Convert(
		const wchar_t* str,
		int nStringCaseFlags,
		EStringConvertErrorPolicy ePolicy);  // 1600
	CUnicodeConvertAndCaseStr<wchar_t, wchar_t, 100>::CUnicodeConvertAndCaseStr(); // 1599
	{
	}
	CUnicodeConvertAndCaseStr<wchar_t, wchar_t, 100>::Convert(
		const wchar_t* str,
		int nStringCaseFlags,
		EStringConvertErrorPolicy ePolicy);  // 1600
	CUnicodeConvertAndCaseStr<wchar_t, wchar_t, 100>::~CUnicodeConvertAndCaseStr(); // 1601
	CUnicodeConvertAndCaseStr<wchar_t, wchar_t, 100>::~CUnicodeConvertAndCaseStr(); // 1601
} /* size: 315, variables: 2, inline expansions: 6 (212 bytes) */

// <0060C36F> tier0/tier0_unicode.cpp:1673
int V_UnicodeCaseCompare(const uchar32* str1, const uchar32* str2, int nStringCaseFlags, EStringConvertErrorPolicy ePolicy)
{
} /* size: 9 */

// <006086D6> tier0/tier0_unicode.cpp:1682
// variables: 2
// function calls: 7
bool V_UnicodeCaseStringInStringFull<char, V_UTF8ToUChar32>(const char* str, const char* search, int nStringCaseFlags, EStringConvertErrorPolicy ePolicy)
{
	CUnicodeConvertAndCaseStr<char, wchar_t, 100> strOp1; // 1685
	CUnicodeConvertAndCaseStr<char, wchar_t, 100> strOp2; // 1686
	CUnicodeConvertAndCaseStr<char, wchar_t, 100>::CUnicodeConvertAndCaseStr(); // 1685
	CUnicodeConvertAndCaseStr<char, wchar_t, 100>::Convert(
		const char* str,
		int nStringCaseFlags,
		EStringConvertErrorPolicy ePolicy);  // 1687
	CUnicodeConvertAndCaseStr<char, wchar_t, 100>::CUnicodeConvertAndCaseStr(); // 1686
	{
	}
	CUnicodeConvertAndCaseStr<char, wchar_t, 100>::Convert(
		const char* str,
		int nStringCaseFlags,
		EStringConvertErrorPolicy ePolicy);  // 1687
	V_strstr32(uchar32* pStr,
			const uchar32* pSearch);  // 1687
	CUnicodeConvertAndCaseStr<char, wchar_t, 100>::~CUnicodeConvertAndCaseStr(); // 1688
	CUnicodeConvertAndCaseStr<char, wchar_t, 100>::~CUnicodeConvertAndCaseStr(); // 1688
} /* size: 319, variables: 2, inline expansions: 7 (223 bytes) */

// <006083CB> tier0/tier0_unicode.cpp:1682
// variables: 2
// function calls: 7
bool V_UnicodeCaseStringInStringFull<short unsigned int, V_UTF16ToUChar32>(const short unsigned int* str, const short unsigned int* search, int nStringCaseFlags, EStringConvertErrorPolicy ePolicy)
{
	CUnicodeConvertAndCaseStr<short unsigned int, wchar_t, 100> strOp1; // 1685
	CUnicodeConvertAndCaseStr<short unsigned int, wchar_t, 100> strOp2; // 1686
	CUnicodeConvertAndCaseStr<short unsigned int, wchar_t, 100>::CUnicodeConvertAndCaseStr(); // 1685
	CUnicodeConvertAndCaseStr<short unsigned int, wchar_t, 100>::Convert(
		const short unsigned int* str,
		int nStringCaseFlags,
		EStringConvertErrorPolicy ePolicy);  // 1687
	CUnicodeConvertAndCaseStr<short unsigned int, wchar_t, 100>::CUnicodeConvertAndCaseStr(); // 1686
	{
	}
	CUnicodeConvertAndCaseStr<short unsigned int, wchar_t, 100>::Convert(
		const short unsigned int* str,
		int nStringCaseFlags,
		EStringConvertErrorPolicy ePolicy);  // 1687
	V_strstr32(uchar32* pStr,
			const uchar32* pSearch);  // 1687
	CUnicodeConvertAndCaseStr<short unsigned int, wchar_t, 100>::~CUnicodeConvertAndCaseStr(); // 1688
	CUnicodeConvertAndCaseStr<short unsigned int, wchar_t, 100>::~CUnicodeConvertAndCaseStr(); // 1688
} /* size: 319, variables: 2, inline expansions: 7 (223 bytes) */

// <006080C0> tier0/tier0_unicode.cpp:1682
// variables: 2
// function calls: 7
bool V_UnicodeCaseStringInStringFull<wchar_t, V_UTF32ToUChar32>(const wchar_t* str, const wchar_t* search, int nStringCaseFlags, EStringConvertErrorPolicy ePolicy)
{
	CUnicodeConvertAndCaseStr<wchar_t, wchar_t, 100> strOp1; // 1685
	CUnicodeConvertAndCaseStr<wchar_t, wchar_t, 100> strOp2; // 1686
	CUnicodeConvertAndCaseStr<wchar_t, wchar_t, 100>::CUnicodeConvertAndCaseStr(); // 1685
	CUnicodeConvertAndCaseStr<wchar_t, wchar_t, 100>::Convert(
		const wchar_t* str,
		int nStringCaseFlags,
		EStringConvertErrorPolicy ePolicy);  // 1687
	CUnicodeConvertAndCaseStr<wchar_t, wchar_t, 100>::CUnicodeConvertAndCaseStr(); // 1686
	{
	}
	CUnicodeConvertAndCaseStr<wchar_t, wchar_t, 100>::Convert(
		const wchar_t* str,
		int nStringCaseFlags,
		EStringConvertErrorPolicy ePolicy);  // 1687
	V_strstr32(uchar32* pStr,
			const uchar32* pSearch);  // 1687
	CUnicodeConvertAndCaseStr<wchar_t, wchar_t, 100>::~CUnicodeConvertAndCaseStr(); // 1688
	CUnicodeConvertAndCaseStr<wchar_t, wchar_t, 100>::~CUnicodeConvertAndCaseStr(); // 1688
} /* size: 319, variables: 2, inline expansions: 7 (223 bytes) */

// <0060C171> tier0/tier0_unicode.cpp:1709
bool V_UnicodeCaseStringInString(const uchar32* str, const uchar32* search, int nStringCaseFlags, EStringConvertErrorPolicy ePolicy)
{
} /* size: 9 */

// <00607DF9> tier0/tier0_unicode.cpp:1719
// variables: 2
// function calls: 6
int V_UnicodeCaseCollateFull<char>(const char* str1, const char* str2, int nStringCaseFlags, EStringConvertErrorPolicy ePolicy)
{
	CUnicodeConvertAndCaseStr<char, wchar_t, 100> strOp1; // 1723
	CUnicodeConvertAndCaseStr<char, wchar_t, 100> strOp2; // 1724
	CUnicodeConvertAndCaseStr<char, wchar_t, 100>::Convert(
		const char* str,
		int nStringCaseFlags,
		EStringConvertErrorPolicy ePolicy);  // 1725
	CUnicodeConvertAndCaseStr<char, wchar_t, 100>::CUnicodeConvertAndCaseStr(); // 1723
	CUnicodeConvertAndCaseStr<char, wchar_t, 100>::CUnicodeConvertAndCaseStr(); // 1724
	{
	}
	CUnicodeConvertAndCaseStr<char, wchar_t, 100>::Convert(
		const char* str,
		int nStringCaseFlags,
		EStringConvertErrorPolicy ePolicy);  // 1725
	CUnicodeConvertAndCaseStr<char, wchar_t, 100>::~CUnicodeConvertAndCaseStr(); // 1726
	CUnicodeConvertAndCaseStr<char, wchar_t, 100>::~CUnicodeConvertAndCaseStr(); // 1726
} /* size: 309, variables: 2, inline expansions: 6 (212 bytes) */

// <0060C0C7> tier0/tier0_unicode.cpp:1732
int V_UnicodeCaseCollate(const char* str1, const char* str2, int nStringCaseFlags, EStringConvertErrorPolicy ePolicy)
{
} /* size: 9 */

// <0060BA0F> tier0/tier0_unicode.cpp:1759
// function call: 1
uchar32* V_UnicodeConvertAndCaseStr(const uchar32* pStr, uchar32* pUTF32, int cubDestSizeInBytes, uchar32** pAllocBuf, int nStringCaseFlags, EStringConvertErrorPolicy ePolicy)
{
	UnicodeConvertAndCaseT<wchar_t, wchar_t, V_UTF32ToUChar32, V_UChar32ToUTF32Len, V_UChar32ToUTF32>(const wchar_t* str,
														wchar_t* pFixedBuf,
														int nFixedBufBytes,
														wchar_t** pAllocBuf,
														int nStringCaseFlags,
														EStringConvertErrorPolicy ePolicy);  // 1761
} /* size: 156, inline expansions: 1 (91 bytes) */

// <0060B801> tier0/tier0_unicode.cpp:1767
// variables: 2
// function calls: 4
void CStrAutoEncode::SetCopy(const char* pStr, int nChars)
{
	char* pCopy; // 1769
	{
		int nBytes; // 1776
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 75
		V_memcpy(void* dest,
			const void* src,
			int count);  // 1778
		V_strlen(const char* str); // 1774
	}
	CStrAutoEncode::Set(
		const char* pch);  // 1782
} /* size: 227, variables: 1, inline expansions: 1 (49 bytes) */

// <0060B617> tier0/tier0_unicode.cpp:1790
// variables: 2
// function calls: 4
void CStrAutoEncode::SetCopy(const uchar16* pStr, int nChars)
{
	uchar16* pCopy; // 1792
	{
		int nBytes; // 1799
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 75
		V_memcpy(void* dest,
			const void* src,
			int count);  // 1801
		V_strlen16(const uchar16* puc16); // 1797
	}
	CStrAutoEncode::Set(
		const uchar16* pch16);  // 1805
} /* size: 313, variables: 1, inline expansions: 1 (62 bytes) */

// <0060B42D> tier0/tier0_unicode.cpp:1813
// variables: 2
// function calls: 4
void CStrAutoEncode::SetCopy(const uchar32* pStr, int nChars)
{
	uchar32* pCopy; // 1815
	{
		int nBytes; // 1822
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 75
		V_memcpy(void* dest,
			const void* src,
			int count);  // 1824
		V_strlen32(const uchar32* puc32); // 1820
	}
	CStrAutoEncode::Set(
		const uchar32* pch32);  // 1828
} /* size: 313, variables: 1, inline expansions: 1 (62 bytes) */

// <0060B382> tier0/tier0_unicode.cpp:1836
// function call: 1
void CStrAutoEncode::SetUTF8Copy(const uchar16* pStr)
{
	CStrAutoEncode::Set(
		const uchar16* pch16);  // 1838
} /* size: 91, inline expansions: 1 (49 bytes) */

// <0060B2D7> tier0/tier0_unicode.cpp:1844
// function call: 1
void CStrAutoEncode::SetUTF8Copy(const uchar32* pStr)
{
	CStrAutoEncode::Set(
		const uchar32* pch32);  // 1846
} /* size: 91, inline expansions: 1 (49 bytes) */

// <0060B22C> tier0/tier0_unicode.cpp:1852
// function call: 1
void CStrAutoEncode::SetUTF16Copy(const char* pStr)
{
	CStrAutoEncode::Set(
		const char* pch);  // 1854
} /* size: 88, inline expansions: 1 (47 bytes) */

// <0060B181> tier0/tier0_unicode.cpp:1860
// function call: 1
void CStrAutoEncode::SetUTF16Copy(const uchar32* pStr)
{
	CStrAutoEncode::Set(
		const uchar32* pch32);  // 1862
} /* size: 91, inline expansions: 1 (49 bytes) */

// <0060B0D6> tier0/tier0_unicode.cpp:1868
// function call: 1
void CStrAutoEncode::SetUTF32Copy(const char* pStr)
{
	CStrAutoEncode::Set(
		const char* pch);  // 1870
} /* size: 88, inline expansions: 1 (47 bytes) */

// <0060B02B> tier0/tier0_unicode.cpp:1876
// function call: 1
void CStrAutoEncode::SetUTF32Copy(const uchar16* pStr)
{
	CStrAutoEncode::Set(
		const uchar16* pch16);  // 1878
} /* size: 91, inline expansions: 1 (49 bytes) */

// <0060AF82> tier0/tier0_unicode.cpp:1884
void CStrAutoEncode::Copy(const CStrAutoEncode& other)
{
} /* size: 119 */

// <0060AEF2> tier0/tier0_unicode.cpp:1908
void CStrAutoEncode::Clear()
{
} /* size: 103 */

// <0060AEBE> tier0/tier0_unicode.cpp:1926
void CStrAutoEncode::InitEmpty()
{
} /* size: 33 */

// <0060AC2F> tier0/tier0_unicode.cpp:1945
// variables: 7
// function calls: 5
void CStrAutoEncode::PopulateUTF8()
{
	int nCharGuess; // 1954
	uint32 cbMax; // 1966
	bool bTempOnHeap; // 1967
	char* pchTemp; // 1968
	int nOutBytes; // 1970
	{
		uint32 cbAlloc; // 1981
		char* pchHeap; // 1982
		V_strlen(const char* str); // 1981
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 79
		V_memcpy(void* dest,
			const void* src,
			uint count);  // 1983
	}
	V_strlen32(const uchar32* puc32); // 1957
	V_strlen16(const uchar16* puc16); // 1961
} /* size: 551, variables: 5, inline expansions: 2 (87 bytes) */

// <0060A9A7> tier0/tier0_unicode.cpp:1999
// variables: 7
// function calls: 5
void CStrAutoEncode::PopulateUTF16()
{
	int nCharGuess; // 2008
	uint32 cbMax; // 2020
	bool bTempOnHeap; // 2021
	uchar16* pch16Temp; // 2022
	int nOutBytes; // 2024
	{
		uint32 cbAlloc; // 2035
		uchar16* pch16Heap; // 2036
		V_strlen16(const uchar16* puc16); // 2035
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 79
		V_memcpy(void* dest,
			const void* src,
			uint count);  // 2037
	}
	V_strlen32(const uchar32* puc32); // 2011
	V_strlen(const char* str); // 2015
} /* size: 548, variables: 5, inline expansions: 2 (69 bytes) */

// <0060A71F> tier0/tier0_unicode.cpp:2053
// variables: 7
// function calls: 5
void CStrAutoEncode::PopulateUTF32()
{
	int nCharGuess; // 2062
	uint32 cbMax; // 2074
	bool bTempOnHeap; // 2075
	uchar32* pch32Temp; // 2076
	int nOutBytes; // 2078
	{
		uint32 cbAlloc; // 2089
		uchar32* pch32Heap; // 2090
		V_strlen32(const uchar32* puc32); // 2089
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 79
		V_memcpy(void* dest,
			const void* src,
			uint count);  // 2091
	}
	V_strlen16(const uchar16* puc16); // 2065
	V_strlen(const char* str); // 2069
} /* size: 548, variables: 5, inline expansions: 2 (69 bytes) */

