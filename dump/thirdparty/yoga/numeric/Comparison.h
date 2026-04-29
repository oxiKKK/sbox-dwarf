
//
// thirdparty/yoga/numeric/Comparison.h
//
//	referenced by: libengine2.so
//
//	functions: 11
//

// <02AD4317> ../thirdparty/yoga/numeric/Comparison.h:22
inline void isUndefined<float>(float value)
{
} /* size: 0 */

// <02A482C2> ../thirdparty/yoga/numeric/Comparison.h:22
inline void isUndefined<double>(double value)
{
} /* size: 0 */

// <02AD4337> ../thirdparty/yoga/numeric/Comparison.h:26
inline void isDefined<float>(float value)
{
} /* size: 0 */

// <02A482E2> ../thirdparty/yoga/numeric/Comparison.h:26
inline void isDefined<double>(double value)
{
} /* size: 0 */

// <02AAE875> ../thirdparty/yoga/numeric/Comparison.h:33
inline void isinf<float>(float value)
{
} /* size: 0 */

// <02AC635B> ../thirdparty/yoga/numeric/Comparison.h:38
inline void maxOrDefined<float, float>(float a, float b)
{
} /* size: 0 */

// <029EFB36> ../thirdparty/yoga/numeric/Comparison.h:47
inline void minOrDefined<float, float>(float a, float b)
{
} /* size: 0 */

// <02AD4761> ../thirdparty/yoga/numeric/Comparison.h:59
inline void inexactEquals(float a, float b)
{
} /* size: 0 */

// <02A48EA2> ../thirdparty/yoga/numeric/Comparison.h:66
inline void inexactEquals(double a, double b)
{
} /* size: 0 */

// <02AD4201> ../thirdparty/yoga/numeric/Comparison.h:74
// variables: 2
// function calls: 2
void inexactEquals<4, float>(const array<float, 4>& val1, const array<float, 4>& val2)
{
	bool areEqual; // 77
	{
		size_t i; // 78
		abs(float __x); // 61
		inexactEquals(float a,
				float b);  // 79
	}
} /* size: 0, variables: 1 */

// <02AD41AD> ../thirdparty/yoga/numeric/Comparison.h:74
// variables: 2
void inexactEquals<2, float>(const array<float, 2>& val1, const array<float, 2>& val2)
{
	bool areEqual; // 77
	{
		size_t i; // 78
	}
} /* size: 0, variables: 1 */

