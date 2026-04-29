
//
// public/physicslib/param_types.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmeshsystem.so
//
//	functions: 7
//	structs: 3
//

// <0096EC54> ../public/physicslib/param_types.h:67
// member functions: 2
// member variables: 6
// struct size: 48
struct CShapeCastResult {
	float m_flHitTime; /* 0 4 */
	Vector m_vHitPoint; /* 4 12 */
	Vector m_vHitNormal; /* 16 12 */
	int m_nHitTriangle; /* 28 4 */
	const class CPhysSurfaceProperties * m_pSurfaceProperties; /* 32 8 */
	bool m_bStartInSolid; /* 40 1 */
	/* ../public/physicslib/param_types.h:76 */
	void CShapeCastResult(CShapeCastResult* );
	/* ../public/physicslib/param_types.h:86 */
	bool DidHit(const CShapeCastResult* );
};

// <00DE3DB2> ../public/physicslib/param_types.h:76
void CShapeCastResult::CShapeCastResult()
{
} /* size: 0 */

// <00DE3D99> ../public/physicslib/param_types.h:76
inline void CShapeCastResult::CShapeCastResult()
{
} /* size: 0 */

// <00DE3D80> ../public/physicslib/param_types.h:86
inline void CShapeCastResult::DidHit()
{
} /* size: 0 */

// <0096EF96> ../public/physicslib/param_types.h:94
// member functions: 2
// member variables: 6
// struct size: 32
struct RnMaterial_t {
	/* ../public/physicslib/param_types.h:96 */
	void RnMaterial_t(RnMaterial_t* );
	/* ../public/physicslib/param_types.h:98 */
	void RnMaterial_t(RnMaterial_t* , float, float, float);
	float m_flDensity; /* 0 4 */
	float m_flFriction; /* 4 4 */
	float m_flRestitution; /* 8 4 */
	float m_flBounceThreshold; /* 12 4 */
	float m_flRollingResistance; /* 16 4 */
	CPhysSurfaceProperties * m_pUserData; /* 24 8 */
};

// <00D740F6> ../public/physicslib/param_types.h:96
void RnMaterial_t::RnMaterial_t()
{
} /* size: 0 */

// <00D740DD> ../public/physicslib/param_types.h:96
inline void RnMaterial_t::RnMaterial_t()
{
} /* size: 0 */

// <0096F05F> ../public/physicslib/param_types.h:122
// member function: 1
// member variables: 3
// struct size: 64
struct RnMassProperties_t {
	matrix3x4_t m_Inertia; /* 0 48 */
	Vector m_vCenter; /* 48 12 */
	float m_flMass; /* 60 4 */
	/* ../public/physicslib/param_types.h:128 */
	void RnMassProperties_t(RnMassProperties_t* );
};

// <00A18741> ../public/physicslib/param_types.h:128
void RnMassProperties_t::RnMassProperties_t()
{
} /* size: 0 */

// <00A18728> ../public/physicslib/param_types.h:128
inline void RnMassProperties_t::RnMassProperties_t()
{
} /* size: 0 */

