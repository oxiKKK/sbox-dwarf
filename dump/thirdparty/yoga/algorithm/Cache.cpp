
//
// thirdparty/yoga/algorithm/Cache.cpp
//
//	referenced by: libengine2.so
//
//	functions: 4
//

// <029B3D61> ../thirdparty/yoga/algorithm/Cache.cpp:17
inline void sizeIsExactAndMatchesOldMeasuredSize(SizingMode sizeMode, float size, float lastComputedSize)
{
} /* size: 0 */

// <029B3D26> ../thirdparty/yoga/algorithm/Cache.cpp:25
inline void oldSizeIsMaxContentAndStillFits(SizingMode sizeMode, float size, SizingMode lastSizeMode, float lastComputedSize)
{
} /* size: 0 */

// <029B3CDF> ../thirdparty/yoga/algorithm/Cache.cpp:35
inline void newSizeIsStricterAndStillValid(SizingMode sizeMode, float size, SizingMode lastSizeMode, float lastSize, float lastComputedSize)
{
} /* size: 0 */

// <029B34CD> ../thirdparty/yoga/algorithm/Cache.cpp:48
// variables: 10
// function calls: 25
void canUseCachedMeasurement(const SizingMode widthMode, const float availableWidth, const SizingMode heightMode, const float availableHeight, const SizingMode lastWidthMode, const float lastAvailableWidth, const SizingMode lastHeightMode, const float lastAvailableHeight, const float lastComputedWidth, const float lastComputedHeight, const float marginRow, const float marginColumn, const Config* config)
{
	const float  pointScaleFactor; // 67
	bool useRoundedComparison; // 69
	const float  effectiveWidth; // 70
	const float  effectiveHeight; // 73
	const float  effectiveLastWidth; // 76
	const float  effectiveLastHeight; // 80
	const bool  hasSameWidthSpec; // 85
	const bool  hasSameHeightSpec; // 87
	const bool  widthIsCompatible; // 90
	const bool  heightIsCompatible; // 106
	abs(float __x); // 61
	inexactEquals(float a,
			float b);  // 22
	sizeIsExactAndMatchesOldMeasuredSize(SizingMode sizeMode,
						float size,
						float lastComputedSize);  // 92
	abs(float __x); // 61
	inexactEquals(float a,
			float b);  // 32
	oldSizeIsMaxContentAndStillFits(SizingMode sizeMode,
					float size,
					SizingMode lastSizeMode,
					float lastComputedSize);  // 25
	oldSizeIsMaxContentAndStillFits(SizingMode sizeMode,
					float size,
					SizingMode lastSizeMode,
					float lastComputedSize);  // 94
	inexactEquals(float a,
			float b);  // 32
	oldSizeIsMaxContentAndStillFits(SizingMode sizeMode,
					float size,
					SizingMode lastSizeMode,
					float lastComputedSize);  // 25
	oldSizeIsMaxContentAndStillFits(SizingMode sizeMode,
					float size,
					SizingMode lastSizeMode,
					float lastComputedSize);  // 111
	abs(float __x); // 61
	inexactEquals(float a,
			float b);  // 32
	oldSizeIsMaxContentAndStillFits(SizingMode sizeMode,
					float size,
					SizingMode lastSizeMode,
					float lastComputedSize);  // 25
	newSizeIsStricterAndStillValid(SizingMode sizeMode,
					float size,
					SizingMode lastSizeMode,
					float lastSize,
					float lastComputedSize);  // 115
	abs(float __x); // 61
	inexactEquals(float a,
			float b);  // 86
	abs(float __x); // 61
	inexactEquals(float a,
			float b);  // 22
	sizeIsExactAndMatchesOldMeasuredSize(SizingMode sizeMode,
						float size,
						float lastComputedSize);  // 107
	abs(float __x); // 61
	inexactEquals(float a,
			float b);  // 88
	abs(float __x); // 61
	inexactEquals(float a,
			float b);  // 32
	oldSizeIsMaxContentAndStillFits(SizingMode sizeMode,
					float size,
					SizingMode lastSizeMode,
					float lastComputedSize);  // 25
	newSizeIsStricterAndStillValid(SizingMode sizeMode,
					float size,
					SizingMode lastSizeMode,
					float lastSize,
					float lastComputedSize);  // 99
} /* size: 2087, variables: 10, inline expansions: 25 (2529 bytes) */

