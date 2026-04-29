
//
// public/physicslib/physdebugmesh.h
//
//	referenced by: libengine2.so
//
//	functions: 9
//	structs: 2
//

// <0657C1DF> ../public/physicslib/physdebugmesh.h:12
void PhysicsDebugVertex_t::PhysicsDebugVertex_t(const PhysicsDebugVertex_t &)
{
} /* size: 0 */

// <0657C1BD> ../public/physicslib/physdebugmesh.h:12
inline void PhysicsDebugVertex_t::PhysicsDebugVertex_t(const PhysicsDebugVertex_t &)
{
} /* size: 0 */

// <009F8B5A> ../public/physicslib/physdebugmesh.h:12
void PhysicsDebugVertex_t::PhysicsDebugVertex_t()
{
} /* size: 0 */

// <009F8B3E> ../public/physicslib/physdebugmesh.h:12
inline void PhysicsDebugVertex_t::PhysicsDebugVertex_t()
{
} /* size: 0 */

// <009F2F43> ../public/physicslib/physdebugmesh.h:12
inline void PhysicsDebugVertex_t::operator=(const PhysicsDebugVertex_t &)
{
} /* size: 0 */

// <00992073> ../public/physicslib/physdebugmesh.h:12
// member functions: 2
// member variables: 6
// struct size: 48
struct PhysicsDebugVertex_t {
	Vector m_vecPosition; /* 0 12 */
	Vector m_vecNormal; /* 12 12 */
	VertexColor_t m_color; /* 24 4 */
	Vector m_vFirstVert; /* 28 12 */
	VertexBlendIndices_t<1> m_vBlendIndices; /* 40 1 */
	VertexColor_t m_vBlendWeights; /* 44 4 */
	PhysicsDebugVertex_t& operator=(PhysicsDebugVertex_t* , const PhysicsDebugVertex_t& );
	void PhysicsDebugVertex_t(PhysicsDebugVertex_t* );
};

// <009F8336> ../public/physicslib/physdebugmesh.h:22
void PhysicsDebugMeshBuffers_t::PhysicsDebugMeshBuffers_t()
{
} /* size: 0 */

// <009F831A> ../public/physicslib/physdebugmesh.h:22
inline void PhysicsDebugMeshBuffers_t::PhysicsDebugMeshBuffers_t()
{
} /* size: 0 */

// <009F8303> ../public/physicslib/physdebugmesh.h:22
void PhysicsDebugMeshBuffers_t::~PhysicsDebugMeshBuffers_t()
{
} /* size: 0 */

// <009F82E7> ../public/physicslib/physdebugmesh.h:22
inline void PhysicsDebugMeshBuffers_t::~PhysicsDebugMeshBuffers_t()
{
} /* size: 0 */

// <00993845> ../public/physicslib/physdebugmesh.h:22
// member functions: 9
// member variables: 3
// struct size: 96
struct PhysicsDebugMeshBuffers_t {
	CUtlVector<PhysicsDebugVertex_t, CUtlMemory<PhysicsDebugVertex_t, int> > m_Vertices; /* 0 32 */
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > m_Indices; /* 32 32 */
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > m_Parts; /* 64 32 */
	/* ../public/physicslib/physdebugmesh.h:28 */
	void AppendPart(PhysicsDebugMeshBuffers_t* );
	/* ../public/physicslib/physdebugmesh.h:30 */
	void AppendTo(PhysicsDebugMeshBuffers_t* , CVertexData<PhysicsDebugVertex_t>& , CIndexData<unsigned int>& );
	/* ../public/physicslib/physdebugmesh.h:31 */
	void ApplyPose(PhysicsDebugMeshBuffers_t* , const CUtlVector<matrix3x4_t, CUtlMemory<matrix3x4_t, int> >& );
	/* ../public/physicslib/physdebugmesh.h:32 */
	void AppendIndexAndVertex(PhysicsDebugMeshBuffers_t* , const PhysicsDebugVertex_t& );
	/* ../public/physicslib/physdebugmesh.h:33 */
	void AppendVertex(PhysicsDebugMeshBuffers_t* , const PhysicsDebugVertex_t& );
	/* ../public/physicslib/physdebugmesh.h:34 */
	int VertexCount(PhysicsDebugMeshBuffers_t* );
	/* ../public/physicslib/physdebugmesh.h:35 */
	void Index3(PhysicsDebugMeshBuffers_t* , uint, uint, uint);
	void ~PhysicsDebugMeshBuffers_t(PhysicsDebugMeshBuffers_t* );
	void PhysicsDebugMeshBuffers_t(PhysicsDebugMeshBuffers_t* );
};

