
//
// public/tier0/tier0_utils_math.h
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
//	functions: 9
//

// <00B53172> ../public/tier0/tier0_utils_math.h:83
// variable: 1
inline uint32 FloatBits(const vec_t& f)
{
	union Convertor_t tmp; // 89
} /* size: 0, variables: 1 */

// <063541F0> ../public/tier0/tier0_utils_math.h:96
// variable: 1
inline vec_t BitsToFloat(uint32 i)
{
	union Convertor_t tmp; // 102
} /* size: 0, variables: 1 */

// <00B5314A> ../public/tier0/tier0_utils_math.h:109
inline bool IsFinite(const vec_t& f)
{
} /* size: 0 */

// <0541AE28> ../public/tier0/tier0_utils_math.h:128
inline float FloatMakePositive(vec_t f)
{
} /* size: 0 */

// <06354182> ../public/tier0/tier0_utils_math.h:139
// variables: 2
inline bool SameSign(float flA, float flB)
{
	int32 aa; // 141
	int32 bb; // 142
} /* size: 0, variables: 2 */

// <00D1D2AA> ../public/tier0/tier0_utils_math.h:146
inline float RAD2DEG(float flRadians)
{
} /* size: 0 */

// <00B53126> ../public/tier0/tier0_utils_math.h:151
inline float DEG2RAD(float flDegrees)
{
} /* size: 0 */

// <026DD080> ../public/tier0/tier0_utils_math.h:156
inline int Floor2Int(float a)
{
} /* size: 0 */

// <026DD05F> ../public/tier0/tier0_utils_math.h:161
inline int Ceil2Int(float a)
{
} /* size: 0 */

