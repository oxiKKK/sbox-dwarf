
//
// ./rapidjson/include/rapidjson/internal/dtoa.h
//
//	referenced by: librendersystemvulkan.so
//
//	functions: 7
//

// <019890A7> ./rapidjson/include/rapidjson/internal/dtoa.h:35
inline void GrisuRound(char* buffer, int len, uint64_t delta, uint64_t rest, uint64_t ten_kappa, uint64_t wp_w)
{
} /* size: 0 */

// <01989092> ./rapidjson/include/rapidjson/internal/dtoa.h:44
inline void CountDecimalDigit32(uint32_t n)
{
} /* size: 0 */

// <01988FA3> ./rapidjson/include/rapidjson/internal/dtoa.h:60
// variables: 10
inline void DigitGen(const DiyFp& W, const DiyFp& Mp, uint64_t delta, char* buffer, int* len, int* K)
{
	const uint32_t   kPow10; // 61
	const DiyFp  one; // 62
	const DiyFp  wp_w; // 63
	uint32_t p1; // 64
	uint64_t p2; // 65
	int kappa; // 66
	{
		uint32_t d; // 70
		uint64_t tmp; // 86
	}
	{
		char d; // 98
		{
			int index; // 105
		}
	}
} /* size: 0, variables: 6 */

// <0198871D> ./rapidjson/include/rapidjson/internal/dtoa.h:112
// variables: 14
// function calls: 28
void Grisu2(double value, char* buffer, int* length, int* K)
{
	const DiyFp  v; // 113
	DiyFp w_m; // 114
	DiyFp w_p; // 114
	const DiyFp  c_mk; // 117
	const DiyFp  W; // 118
	DiyFp Wp; // 119
	DiyFp Wm; // 120
	{
		union  u; // 53
		int biased_e; // 55
		uint64_t significand; // 56
	}
	DiyFp::DiyFp(
		double d);  // 113
	DiyFp::NormalizeBoundary(); // 119
	DiyFp::DiyFp(
		uint64_t fp,
		int exp);  // 119
	DiyFp::DiyFp(
		uint64_t fp,
		int exp);  // 120
	DiyFp::DiyFp(
		uint64_t fp,
		int exp);  // 120
	DiyFp::NormalizedBoundaries(
				DiyFp* minus,
				DiyFp* plus);  // 115
	DiyFp::DiyFp(); // 114
	DiyFp::DiyFp(); // 114
	DiyFp::DiyFp(
		uint64_t fp,
		int exp);  // 221
	GetCachedPowerByIndex(size_t index); // 235
	GetCachedPower(int e,
			int* K);  // 117
	DiyFp::DiyFp(
		uint64_t fp,
		int exp);  // 85
	DiyFp::operator*(
			const DiyFp& rhs);  // 118
	clzll(uint64_t x); // 103
	DiyFp::DiyFp(
		uint64_t fp,
		int exp);  // 104
	DiyFp::Normalize(); // 118
	DiyFp::DiyFp(
		uint64_t fp,
		int exp);  // 85
	DiyFp::operator*(
			const DiyFp& rhs);  // 119
	DiyFp::DiyFp(
		uint64_t fp,
		int exp);  // 85
	DiyFp::operator*(
			const DiyFp& rhs);  // 120
	DiyFp::DiyFp(
		uint64_t fp,
		int exp);  // 68
	DiyFp::operator-(
			const DiyFp& rhs);  // 63
	CountDecimalDigit32(uint32_t n); // 44
	CountDecimalDigit32(uint32_t n); // 66
	DiyFp::DiyFp(
		uint64_t fp,
		int exp);  // 62
	{
		uint32_t d; // 70
		uint64_t tmp; // 86
		GrisuRound(char* buffer,
				int len,
				uint64_t delta,
				uint64_t rest,
				uint64_t ten_kappa,
				uint64_t wp_w);  // 89
	}
	{
		char d; // 98
		{
			int index; // 105
			GrisuRound(char* buffer,
					int len,
					uint64_t delta,
					uint64_t rest,
					uint64_t ten_kappa,
					uint64_t wp_w);  // 106
		}
	}
	DigitGen(const DiyFp& W,
		const DiyFp& Mp,
		uint64_t delta,
		char* buffer,
		int* len,
		int* K);  // 123
} /* size: 0, variables: 7, inline expansions: 26 (0 bytes) */

// <019886E0> ./rapidjson/include/rapidjson/internal/dtoa.h:126
// variables: 2
inline void WriteExponent(int K, char* buffer)
{
	{
		const char* d; // 135
	}
	{
		const char* d; // 140
	}
} /* size: 0 */

// <0198829F> ./rapidjson/include/rapidjson/internal/dtoa.h:150
// variables: 10
// function calls: 9
void Prettify(char* buffer, int length, int k, int maxDecimalPlaces)
{
	const int  kk; // 151
	{
		int i; // 155
	}
	{
		int i; // 168
	}
	{
		const int  offset; // 178
		{
			int i; // 182
		}
		{
			int i; // 187
		}
		memmove(void* __dest,
			const void* __src,
			size_t __len);  // 179
	}
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 209
	{
		const char* d; // 135
		GetDigitsLut(void); // 135
	}
	{
		const char* d; // 140
		GetDigitsLut(void); // 140
	}
	WriteExponent(int K,
			char* buffer);  // 212
	{
		const char* d; // 140
		GetDigitsLut(void); // 140
	}
	{
		const char* d; // 135
		GetDigitsLut(void); // 135
	}
	WriteExponent(int K,
			char* buffer);  // 205
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 163
} /* size: 0, variables: 1, inline expansions: 4 (0 bytes) */

// <0198824E> ./rapidjson/include/rapidjson/internal/dtoa.h:216
// variables: 3
inline void dtoa(double value, char* buffer, int maxDecimalPlaces)
{
	Double d; // 218
	{
		int length; // 232
		int K; // 232
	}
} /* size: 0, variables: 1 */

