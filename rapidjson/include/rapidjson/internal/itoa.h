
//
// ./rapidjson/include/rapidjson/internal/itoa.h
//
//	referenced by: librendersystemvulkan.so
//
//	functions: 5
//

// <019897E2> ./rapidjson/include/rapidjson/internal/itoa.h:23
// variable: 1
inline void GetDigitsLut(void)
{
	const char   cDigitsLut; // 24
} /* size: 0, variables: 1 */

// <01989603> ./rapidjson/include/rapidjson/internal/itoa.h:39
// variables: 17
// function call: 1
void u32toa(uint32_t value, char* buffer)
{
	const char* cDigitsLut; // 42
	{
		const uint32_t  d1; // 45
		const uint32_t  d2; // 46
	}
	{
		const uint32_t  b; // 58
		const uint32_t  c; // 59
		const uint32_t  d1; // 61
		const uint32_t  d2; // 62
		const uint32_t  d3; // 64
		const uint32_t  d4; // 65
	}
	{
		const uint32_t  a; // 83
		const uint32_t  b; // 94
		const uint32_t  c; // 95
		const uint32_t  d1; // 97
		const uint32_t  d2; // 98
		const uint32_t  d3; // 100
		const uint32_t  d4; // 101
		{
			const unsigned int  i; // 87
		}
	}
	GetDigitsLut(void); // 42
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <019895D6> ./rapidjson/include/rapidjson/internal/itoa.h:115
// variable: 1
inline void i32toa(int32_t value, char* buffer)
{
	uint32_t u; // 117
} /* size: 0, variables: 1 */

// <0198912A> ./rapidjson/include/rapidjson/internal/itoa.h:126
// variables: 52
// function call: 1
void u64toa(uint64_t value, char* buffer)
{
	const char* cDigitsLut; // 128
	const uint64_t  kTen8; // 129
	const uint64_t  kTen9; // 130
	const uint64_t  kTen10; // 131
	const uint64_t  kTen11; // 132
	const uint64_t  kTen12; // 133
	const uint64_t  kTen13; // 134
	const uint64_t  kTen14; // 135
	const uint64_t  kTen15; // 136
	const uint64_t  kTen16; // 137
	{
		uint32_t v; // 140
		{
			const uint32_t  d1; // 142
			const uint32_t  d2; // 143
		}
		{
			const uint32_t  b; // 155
			const uint32_t  c; // 156
			const uint32_t  d1; // 158
			const uint32_t  d2; // 159
			const uint32_t  d3; // 161
			const uint32_t  d4; // 162
		}
	}
	{
		const uint32_t  v0; // 179
		const uint32_t  v1; // 180
		const uint32_t  b0; // 182
		const uint32_t  c0; // 183
		const uint32_t  d1; // 185
		const uint32_t  d2; // 186
		const uint32_t  d3; // 188
		const uint32_t  d4; // 189
		const uint32_t  b1; // 191
		const uint32_t  c1; // 192
		const uint32_t  d5; // 194
		const uint32_t  d6; // 195
		const uint32_t  d7; // 197
		const uint32_t  d8; // 198
	}
	{
		const uint32_t  a; // 226
		const uint32_t  v0; // 252
		const uint32_t  v1; // 253
		const uint32_t  b0; // 255
		const uint32_t  c0; // 256
		const uint32_t  d1; // 258
		const uint32_t  d2; // 259
		const uint32_t  d3; // 261
		const uint32_t  d4; // 262
		const uint32_t  b1; // 264
		const uint32_t  c1; // 265
		const uint32_t  d5; // 267
		const uint32_t  d6; // 268
		const uint32_t  d7; // 270
		const uint32_t  d8; // 271
		{
			const uint32_t  i; // 232
		}
		{
			const uint32_t  i; // 239
		}
		{
			const uint32_t  i; // 244
			const uint32_t  j; // 245
		}
	}
	GetDigitsLut(void); // 128
} /* size: 0, variables: 10, inline expansions: 1 (0 bytes) */

// <019890FA> ./rapidjson/include/rapidjson/internal/itoa.h:294
// variable: 1
inline void i64toa(int64_t value, char* buffer)
{
	uint64_t u; // 296
} /* size: 0, variables: 1 */

