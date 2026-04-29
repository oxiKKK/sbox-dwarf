
//
// public/vphysics2/handle_decl.h
//
//	referenced by: libengine2.so
//
//	functions: 4
//	structs: 2
//

// <00B1959F> ../public/vphysics2/handle_decl.h:31
inline void PhysicsTrace_t::operator=(const PhysicsTrace_t &)
{
} /* size: 0 */

// <0096F0BF> ../public/vphysics2/handle_decl.h:31
// member functions: 6
// member variables: 9
// struct size: 64
struct PhysicsTrace_t {
	/* ../public/vphysics2/handle_decl.h:34 */
	void PhysicsTrace_t(PhysicsTrace_t* );
	/* ../public/vphysics2/handle_decl.h:47 */
	bool DidHit(const PhysicsTrace_t* );
	/* ../public/vphysics2/handle_decl.h:52 */
	bool DidStartSolid(const PhysicsTrace_t* );
	/* ../public/vphysics2/handle_decl.h:57 */
	const Vector& GetEndPoint(const PhysicsTrace_t* );
	/* ../public/vphysics2/handle_decl.h:62 */
	bool IsValid(const PhysicsTrace_t* );
	IPhysicsBody * m_HitObject; /* 0 8 */
	IPhysicsShape * m_HitShape; /* 8 8 */
	Vector m_vHitPoint; /* 16 12 */
	Vector m_vHitNormal; /* 28 12 */
	int m_pSurfaceIndex; /* 40 4 */
	float m_flHitOffset; /* 44 4 */
	float m_flFraction; /* 48 4 */
	int m_nHitTriangle; /* 52 4 */
	bool m_bStartInSolid; /* 56 1 */
	/* ../public/vphysics2/handle_decl.h:93 */
	int Compare(const PhysicsTrace_t* , const PhysicsTrace_t* );
};

// <00A9D52F> ../public/vphysics2/handle_decl.h:31
// member functions: 7
// member variables: 9
// struct size: 64
struct PhysicsTrace_t {
	/* ../public/vphysics2/handle_decl.h:34 */
	void PhysicsTrace_t(PhysicsTrace_t* );
	/* ../public/vphysics2/handle_decl.h:47 */
	bool DidHit(const PhysicsTrace_t* );
	/* ../public/vphysics2/handle_decl.h:52 */
	bool DidStartSolid(const PhysicsTrace_t* );
	/* ../public/vphysics2/handle_decl.h:57 */
	const Vector& GetEndPoint(const PhysicsTrace_t* );
	/* ../public/vphysics2/handle_decl.h:62 */
	bool IsValid(const PhysicsTrace_t* );
	IPhysicsBody * m_HitObject; /* 0 8 */
	IPhysicsShape * m_HitShape; /* 8 8 */
	Vector m_vHitPoint; /* 16 12 */
	Vector m_vHitNormal; /* 28 12 */
	int m_pSurfaceIndex; /* 40 4 */
	float m_flHitOffset; /* 44 4 */
	float m_flFraction; /* 48 4 */
	int m_nHitTriangle; /* 52 4 */
	bool m_bStartInSolid; /* 56 1 */
	/* ../public/vphysics2/handle_decl.h:93 */
	int Compare(const PhysicsTrace_t* , const PhysicsTrace_t* );
	PhysicsTrace_t& operator=(PhysicsTrace_t* , const PhysicsTrace_t& );
};

// <01769D44> ../public/vphysics2/handle_decl.h:34
void PhysicsTrace_t::PhysicsTrace_t()
{
} /* size: 0 */

// <01769D2B> ../public/vphysics2/handle_decl.h:34
inline void PhysicsTrace_t::PhysicsTrace_t()
{
} /* size: 0 */

// <01769D12> ../public/vphysics2/handle_decl.h:47
inline void PhysicsTrace_t::DidHit()
{
} /* size: 0 */

