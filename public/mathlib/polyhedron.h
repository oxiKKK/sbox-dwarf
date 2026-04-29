
//
// public/mathlib/polyhedron.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmeshsystem.so
//
//	class: 1
//	structs: 3
//

// <05B28766> ../public/mathlib/polyhedron.h:27
// member variable: 1
// struct size: 4
struct Polyhedron_IndexedLine_t {
	uint16 iPointIndices[2]; /* 0 4 */
};

// <05B28798> ../public/mathlib/polyhedron.h:32
// member variables: 2
// struct size: 4
struct Polyhedron_IndexedLineReference_t {
	uint16 iLineIndex; /* 0 2 */
	uint8 iEndPointIndex; /* 2 1 */
};

// <05B287C4> ../public/mathlib/polyhedron.h:38
// member variables: 3
// struct size: 16
struct Polyhedron_IndexedPolygon_t {
	uint16 iFirstIndex; /* 0 2 */
	uint16 iIndexCount; /* 2 2 */
	Vector polyNormal; /* 4 12 */
};

// <05AFE2E1> ../public/mathlib/polyhedron.h:45
// member functions: 5
// member variables: 9
// vtable entry: 1
// class size: 48
class CPolyhedron {
	void CPolyhedron(CPolyhedron* , const CPolyhedron& );
	void CPolyhedron(CPolyhedron* );
	int ()(void) * * _vptr.CPolyhedron; /* 0 8 */
	Vector * pVertices; /* 8 8 */
	Polyhedron_IndexedLine_t * pLines; /* 16 8 */
	Polyhedron_IndexedLineReference_t * pIndices; /* 24 8 */
	Polyhedron_IndexedPolygon_t * pPolygons; /* 32 8 */
	uint16 iVertexCount; /* 40 2 */
	uint16 iLineCount; /* 42 2 */
	uint16 iIndexCount; /* 44 2 */
	uint16 iPolygonCount; /* 46 2 */
	/* ../public/mathlib/polyhedron.h:58 */
	virtual void ~CPolyhedron(CPolyhedron* );
	/* ../public/mathlib/polyhedron.h:59 */
	virtual void Release(CPolyhedron* );
	/* ../public/mathlib/polyhedron.h:60 */
	Vector Center(CPolyhedron* );
};

