
//
// thirdparty/mikktspace/mikktspace.h
//
//	referenced by: libengine2.so
//
//	function: 1
//	structs: 2
//

// <061D088C> ../thirdparty/mikktspace/mikktspace.h:65
// member functions: 7
// member variables: 7
// struct size: 56
typedef struct {
	int (*m_getNumFaces)(const SMikkTSpaceContext* ); /* 0 8* /
	int (*m_getNumVerticesOfFace)(const SMikkTSpaceContext* , int); /* 8 8* /
	void (*m_getPosition)(const SMikkTSpaceContext* , float* , int, int); /* 16 8* /
	void (*m_getNormal)(const SMikkTSpaceContext* , float* , int, int); /* 24 8* /
	void (*m_getTexCoord)(const SMikkTSpaceContext* , float* , int, int); /* 32 8* /
	void (*m_setTSpaceBasic)(const SMikkTSpaceContext* , const float* , float, int, int); /* 40 8* /
	void (*m_setTSpace)(const SMikkTSpaceContext* , const float* , const float* , float, float, tbool, int, int); /* 48 8* /
} SMikkTSpaceInterface;

// <061D0860> ../thirdparty/mikktspace/mikktspace.h:106
// member variables: 2
// struct size: 16
struct SMikkTSpaceContext {
	SMikkTSpaceInterface * m_pInterface; /* 0 8 */
	void * m_pUserData; /* 8 8 */
};

// <061D1F77> ../thirdparty/mikktspace/mikktspace.h:113
tbool genTangSpaceDefault(const SMikkTSpaceContext *)
{
} /* size: 0 */

