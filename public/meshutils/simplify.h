
//
// public/meshutils/simplify.h
//
//	referenced by: libengine2.so
//
//	functions: 2
//	structs: 2
//

// <05DA2A8B> ../public/meshutils/simplify.h:20
// member functions: 4
// member variables: 7
// struct size: 28
struct mesh_simplifyparams_t {
	/* ../public/meshutils/simplify.h:22 */
	void Defaults(mesh_simplifyparams_t* );
	/* ../public/meshutils/simplify.h:33 */
	void SimplifyToVertexCount(mesh_simplifyparams_t* , int);
	/* ../public/meshutils/simplify.h:38 */
	void SimplifyToTriangleCount(mesh_simplifyparams_t* , int);
	/* ../public/meshutils/simplify.h:43 */
	void SimplifyToMaxError(mesh_simplifyparams_t* , float);
	float m_flMaxError; /* 0 4 */
	float m_flOpenEdgePenalty; /* 4 4 */
	float m_flIntegrationPenalty; /* 8 4 */
	int m_nMaxVertexCount; /* 12 4 */
	int m_nMaxTriangleCount; /* 16 4 */
	int m_nMinVertexCount; /* 20 4 */
	int m_nMinTriangleCount; /* 24 4 */
};

// <05DFE19F> ../public/meshutils/simplify.h:22
inline void mesh_simplifyparams_t::Defaults()
{
} /* size: 0 */

// <05DA2B95> ../public/meshutils/simplify.h:60
// member function: 1
// member variables: 2
// struct size: 16
struct mesh_simplifyweights_t {
	/* ../public/meshutils/simplify.h:62 */
	void Defaults(mesh_simplifyweights_t* );
	float * m_pVertexWeights; /* 0 8 */
	int m_nVertexCount; /* 8 4 */
};

// <05DB45F2> ../public/meshutils/simplify.h:71
void SimplifyMesh(CMesh &, const CMesh &, const mesh_simplifyparams_t &, const mesh_simplifyweights_t *)
{
} /* size: 0 */

