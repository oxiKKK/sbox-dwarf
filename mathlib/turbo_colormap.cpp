
//
// mathlib/turbo_colormap.cpp
//
//	referenced by: libengine2.so
//
//	function: 1
//

// <05A9613A> mathlib/turbo_colormap.cpp:529
// variables: 3
// function calls: 6
Vector TurboColorRampLookupsRGB(float f01)
{
	uint nMin; // 533
	uint nMax; // 534
	float t; // 535
	Clamp<float>(const float& val,
			const float& minVal,
			const float& maxVal);  // 531
	Floor2Int(float a); // 533
	Lerp<float>(float flPercent,
			const float& A,
			const float& B);  // 541
	Ceil2Int(float a); // 534
	Lerp<float>(float flPercent,
			const float& A,
			const float& B);  // 541
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 541
} /* size: 341, variables: 3, inline expansions: 6 (271 bytes) */

