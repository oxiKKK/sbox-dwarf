
//
// public/mathlib/raytraceutils.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmeshsystem.so
//
//	functions: 3
//	struct: 1
//

// <0593A698> ../../public/mathlib/raytraceutils.h:11
// member variables: 4
// struct size: 16
struct BoxTraceInfo_t {
	float t1; /* 0 4 */
	float t2; /* 4 4 */
	int hitside; /* 8 4 */
	bool startsolid; /* 12 1 */
};

// <0594A656> ../../public/mathlib/raytraceutils.h:23
bool IntersectRayWithBox(const Vector &, const Vector &, const Vector &, const Vector &, float, BoxTraceInfo_t *)
{
} /* size: 0 */

// <01692EE4> ../public/mathlib/raytraceutils.h:29
bool IsBoxIntersectingTriangle(const Vector &, const Vector &, const Vector &, const Vector &, const Vector &, float)
{
} /* size: 0 */

// <0594A603> ../../public/mathlib/raytraceutils.h:51
bool IsRayIntersectingSphere(const Vector &, const Vector &, const Vector &, float, float)
{
} /* size: 0 */

