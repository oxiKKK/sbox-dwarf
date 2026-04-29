
//
// public/tier0/lerp_functions.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmeshsystem.so
//
//	functions: 3
//

// <049A4A87> ../public/tier0/lerp_functions.h:29
// variables: 3
inline float LoopingLerp<float>(float flPercent, const float& _flFrom, const float& _flTo)
{
	float flFrom; // 31
	float flTo; // 32
	float s; // 42
} /* size: 0, variables: 3 */

// <0499A4AD> ../public/tier0/lerp_functions.h:92
// variables: 5
inline float Lerp_Hermite<float>(const float &, float t, const float& p0, const float& p1, const float& p2)
{
	float d1; // 94
	float d2; // 95
	float output; // 97
	float tSqr; // 98
	float tCube; // 99
} /* size: 0, variables: 5 */

// <049A49E6> ../public/tier0/lerp_functions.h:181
// variables: 4
inline float LoopingLerp_Hermite<float>(const float& current, float t, const float& f0, const float& f1, const float& f2)
{
	float p0; // 183
	float p1; // 184
	float p2; // 185
	float s; // 218
} /* size: 0, variables: 4 */

