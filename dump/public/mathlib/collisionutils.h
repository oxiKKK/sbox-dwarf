
//
// public/mathlib/collisionutils.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmeshsystem.so
//
//	functions: 6
//	class: 1
//	structs: 2
//

// <05939D16> ../../public/mathlib/collisionutils.h:29
// member variables: 8
// class size: 64
class CollisionTrace_t {
	Vector m_vStartPos; /* 0 12 */
	Vector m_vEndPos; /* 12 12 */
	Vector m_vHitPoint; /* 24 12 */
	Vector m_vHitNormal; /* 36 12 */
	float m_flHitOffset; /* 48 4 */
	float m_flFraction; /* 52 4 */
	int32 m_nFaceIndex; /* 56 4 */
	bool m_bStartInSolid; /* 60 1 */
};

// <00DCE0FE> ../public/mathlib/collisionutils.h:106
bool IntersectRayWithSphere(const Vector &, const Vector &, const Vector &, float, float *, float *)
{
} /* size: 0 */

// <01AD0B09> ../public/mathlib/collisionutils.h:151
float IntersectRayWithPlane(const Vector &, const Vector &, const cplane_t &)
{
} /* size: 0 */

// <0583E6D6> ../../public/mathlib/collisionutils.h:480
Vector CalcClosestPointOnOBB(const matrix3x4_t &, const Vector &, const Vector &)
{
} /* size: 0 */

// <0594CE55> ../../public/mathlib/collisionutils.h:487
void ClosestApproach_t::ClosestApproach_t()
{
} /* size: 0 */

// <0594CE37> ../../public/mathlib/collisionutils.h:487
inline void ClosestApproach_t::ClosestApproach_t()
{
} /* size: 0 */

// <05939DC3> ../../public/mathlib/collisionutils.h:487
// member functions: 2
// member variables: 4
// struct size: 32
struct ClosestApproach_t {
	Vector m_vPoint1; /* 0 12 */
	float m_flLambda1; /* 12 4 */
	Vector m_vPoint2; /* 16 12 */
	float m_flLambda2; /* 28 4 */
	/* ../../public/mathlib/collisionutils.h:494 */
	bool IsNormalized(const ClosestApproach_t* );
	void ClosestApproach_t(ClosestApproach_t* );
};

// <0170C405> ../public/mathlib/collisionutils.h:487
// member function: 1
// member variables: 4
// struct size: 32
struct ClosestApproach_t {
	Vector m_vPoint1; /* 0 12 */
	float m_flLambda1; /* 12 4 */
	Vector m_vPoint2; /* 16 12 */
	float m_flLambda2; /* 28 4 */
	/* ../public/mathlib/collisionutils.h:494 */
	bool IsNormalized(const ClosestApproach_t* );
};

// <01716532> ../public/mathlib/collisionutils.h:500
ClosestApproach_t CalcClosestApproachBetweenSegments(const Vector &, const Vector &, const Vector &, const Vector &)
{
} /* size: 0 */

