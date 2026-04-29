
//
// src/sphere.cpp
//
//	referenced by: libengine2.so
//
//	function: 1
//

// <06C7BE73> src/sphere.cpp:143
// variables: 16
// function calls: 9
b3CastOutput b3RayCastHollowSphere(const b3Sphere* sphere, const b3RayCastInput* input)
{
	b3Vec3 p; // 145
	b3CastOutput output; // 147
	b3Vec3 s; // 150
	b3Vec3 d; // 151
	float t; // 156
	b3Vec3 c; // 159
	float cc; // 161
	float r; // 162
	float rr; // 163
	float h; // 172
	float fraction; // 174
	b3Vec3 hitPoint; // 192
	{
		float s; // 247
		b3Vec3 u; // 248
	}
	b3Normalize(b3Vec3 a); // 151
	b3Sub(b3Vec3 a,
		b3Vec3 b);  // 1021
	operator-(b3Vec3 a,
			b3Vec3 b);  // 150
	b3Dot(b3Vec3 a,
		b3Vec3 b);  // 156
	b3MulAdd(b3Vec3 a,
		float s,
		b3Vec3 b);  // 159
	b3Dot(b3Vec3 a,
		b3Vec3 b);  // 161
	b3MulAdd(b3Vec3 a,
		float s,
		b3Vec3 b);  // 192
	{
		float s; // 247
		b3Vec3 u; // 248
	}
	b3Normalize(b3Vec3 a); // 195
	b3MulAdd(b3Vec3 a,
		float s,
		b3Vec3 b);  // 196
} /* size: 0, variables: 12, inline expansions: 9 (0 bytes) */

