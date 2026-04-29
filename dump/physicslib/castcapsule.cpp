
//
// physicslib/castcapsule.cpp
//
//	referenced by: libengine2.so
//
//	functions: 4
//	struct: 1
//

// <06589180> physicslib/castcapsule.cpp:10
// member variables: 2
// struct size: 8
struct CapsuleCast2D_t {
	float m_flCapsule; /* 0 4 */
	float m_flRay; /* 4 4 */
};

// <0658B01F> physicslib/castcapsule.cpp:16
// variables: 2
void CastCapsuleRay2DCoaxialInternal(CapsuleCast2D_t& out, float mx, float dx, float h, float e)
{
	float mxProj; // 19
	{
		float mxEnd; // 38
	}
} /* size: 0, variables: 1 */

// <0658AFC4> physicslib/castcapsule.cpp:48
// variables: 2
void CastCapsuleRay2DParallelInternal(CapsuleCast2D_t& out, const Vector2D& m, float dx, float h, float rr)
{
	float e2; // 50
	{
		float e; // 54
	}
} /* size: 0, variables: 1 */

// <0658AEEB> physicslib/castcapsule.cpp:64
// variables: 13
void CastCapsuleRay2DInternal(CapsuleCast2D_t& out, const Vector2D& m, const Vector2D& d, float h, float rr)
{
	float my2; // 69
	float r; // 81
	float dd; // 81
	float ddInv; // 81
	float dymy; // 81
	float t; // 85
	float t0; // 85
	float s0; // 85
	float mxh; // 90
	float b; // 114
	float c; // 114
	float D; // 114
	{
		float tc; // 117
	}
} /* size: 0, variables: 12 */

// <0658AE67> physicslib/castcapsule.cpp:129
// variables: 3
void CastCapsuleShortRay(CShapeCastResult& out, const Vector& sUnit, float sLen, const Vector& m, const Vector& vRayStart, const Vector* vCenter, float flRadius)
{
	float flProjOnCapsule; // 133
	Vector vDistance; // 134
	float flDistFromCapsuleSqr; // 149
} /* size: 0, variables: 3 */

