
//
// public/materialsystem2/meshbuilderbuffers.h
//
//	referenced by: libengine2.so
//				   libmaterialsystem2.so
//
//	functions: 5
//	structs: 2
//

// <03C1D217> ../public/materialsystem2/meshbuilderbuffers.h:11
void MeshBuilderBuffers_t::MeshBuilderBuffers_t()
{
} /* size: 0 */

// <03C1D1FB> ../public/materialsystem2/meshbuilderbuffers.h:11
inline void MeshBuilderBuffers_t::MeshBuilderBuffers_t()
{
} /* size: 0 */

// <02D4FD23> ../public/materialsystem2/meshbuilderbuffers.h:11
// member functions: 4
// member variables: 9
// struct size: 64
struct MeshBuilderBuffers_t {
	void * pVB; /* 0 8 */
	uint16 * pIB; /* 8 8 */
	int nVertices; /* 16 4 */
	int nVertSize; /* 20 4 */
	RenderInputLayout_t hVertInputLayout; /* 24 8 */
	int nIndices; /* 32 4 */
	MaterialPrimitiveType2_t materialPrimType; /* 36 4 */
	Vector vMinLocalBounds; /* 40 12 */
	Vector vMaxLocalBounds; /* 52 12 */
	/* ../public/materialsystem2/meshbuilderbuffers.h:28 */
	MeshBuilderBuffers_t& ShallowCopy(MeshBuilderBuffers_t* , const MeshBuilderBuffers_t& );
	/* ../public/materialsystem2/meshbuilderbuffers.h:41 */
	MeshBuilderBuffers_t& DeepCopy(MeshBuilderBuffers_t* , const MeshBuilderBuffers_t& );
	/* ../public/materialsystem2/meshbuilderbuffers.h:57 */
	void Purge(MeshBuilderBuffers_t* );
private:
	/* ../public/materialsystem2/meshbuilderbuffers.h:69 */
	MeshBuilderBuffers_t& operator=(MeshBuilderBuffers_t* , const MeshBuilderBuffers_t& );
};

// <004008E2> ../public/materialsystem2/meshbuilderbuffers.h:11
// member functions: 5
// member variables: 9
// struct size: 64
struct MeshBuilderBuffers_t {
	void * pVB; /* 0 8 */
	uint16 * pIB; /* 8 8 */
	int nVertices; /* 16 4 */
	int nVertSize; /* 20 4 */
	RenderInputLayout_t hVertInputLayout; /* 24 8 */
	int nIndices; /* 32 4 */
	MaterialPrimitiveType2_t materialPrimType; /* 36 4 */
	Vector vMinLocalBounds; /* 40 12 */
	Vector vMaxLocalBounds; /* 52 12 */
	/* ../public/materialsystem2/meshbuilderbuffers.h:28 */
	MeshBuilderBuffers_t& ShallowCopy(MeshBuilderBuffers_t* , const MeshBuilderBuffers_t& );
	/* ../public/materialsystem2/meshbuilderbuffers.h:41 */
	MeshBuilderBuffers_t& DeepCopy(MeshBuilderBuffers_t* , const MeshBuilderBuffers_t& );
	/* ../public/materialsystem2/meshbuilderbuffers.h:57 */
	void Purge(MeshBuilderBuffers_t* );
private:
	/* ../public/materialsystem2/meshbuilderbuffers.h:69 */
	MeshBuilderBuffers_t& operator=(MeshBuilderBuffers_t* , const MeshBuilderBuffers_t& );
	void MeshBuilderBuffers_t(MeshBuilderBuffers_t* );
};

// <00498548> ../public/materialsystem2/meshbuilderbuffers.h:28
inline void MeshBuilderBuffers_t::ShallowCopy(const MeshBuilderBuffers_t& other)
{
} /* size: 0 */

// <00498523> ../public/materialsystem2/meshbuilderbuffers.h:41
inline void MeshBuilderBuffers_t::DeepCopy(const MeshBuilderBuffers_t& other)
{
} /* size: 0 */

// <0049850A> ../public/materialsystem2/meshbuilderbuffers.h:57
inline void MeshBuilderBuffers_t::Purge()
{
} /* size: 0 */

