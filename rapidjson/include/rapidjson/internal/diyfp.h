
//
// ./rapidjson/include/rapidjson/internal/diyfp.h
//
//	referenced by: librendersystemvulkan.so
//
//	functions: 11
//

// <01989CD7> ./rapidjson/include/rapidjson/internal/diyfp.h:45
void DiyFp::DiyFp()
{
} /* size: 0 */

// <01989CBE> ./rapidjson/include/rapidjson/internal/diyfp.h:45
inline void DiyFp::DiyFp()
{
} /* size: 0 */

// <01989C9D> ./rapidjson/include/rapidjson/internal/diyfp.h:47
void DiyFp::DiyFp(uint64_t fp, int exp)
{
} /* size: 0 */

// <01989C6D> ./rapidjson/include/rapidjson/internal/diyfp.h:47
inline void DiyFp::DiyFp(uint64_t fp, int exp)
{
} /* size: 0 */

// <01989C3B> ./rapidjson/include/rapidjson/internal/diyfp.h:49
// variables: 3
void DiyFp::DiyFp(double d)
{
	{
		union  u; // 53
		int biased_e; // 55
		uint64_t significand; // 56
	}
} /* size: 0 */

// <01989B44> ./rapidjson/include/rapidjson/internal/diyfp.h:49
// variables: 3
inline void DiyFp::DiyFp(double d)
{
	{
		union  u; // 53
		int biased_e; // 55
		uint64_t significand; // 56
	}
} /* size: 0 */

// <01989AAD> ./rapidjson/include/rapidjson/internal/diyfp.h:102
// variable: 1
inline void DiyFp::Normalize()
{
	int s; // 103
} /* size: 0, variables: 1 */

// <01989A88> ./rapidjson/include/rapidjson/internal/diyfp.h:107
// variable: 1
inline void DiyFp::NormalizeBoundary()
{
	DiyFp res; // 108
} /* size: 0, variables: 1 */

// <01989A41> ./rapidjson/include/rapidjson/internal/diyfp.h:118
// variables: 2
inline void DiyFp::NormalizedBoundaries(DiyFp* minus, DiyFp* plus)
{
	DiyFp pl; // 119
	DiyFp mi; // 120
} /* size: 0, variables: 2 */

// <019899C8> ./rapidjson/include/rapidjson/internal/diyfp.h:161
// variables: 2
inline void GetCachedPowerByIndex(size_t index)
{
	const uint64_t   kCachedPowers_F; // 163
	const int16_t   kCachedPowers_E; // 209
} /* size: 0, variables: 2 */

// <01989988> ./rapidjson/include/rapidjson/internal/diyfp.h:224
// variables: 3
inline void GetCachedPower(int e, int* K)
{
	double dk; // 227
	int k; // 228
	unsigned int index; // 232
} /* size: 0, variables: 3 */

