
//
// thirdparty/quickhull/qhHalfEdge.h
//
//	referenced by: libengine2.so
//
//	functions: 7
//	structs: 3
//

// <00996B69> ../thirdparty/quickhull/qhHalfEdge.h:31
// member variables: 6
// struct size: 48
struct qhVertex {
	qhVertex * Prev; /* 0 8 */
	qhVertex * Next; /* 8 8 */
	int Mark; /* 16 4 */
	qhVector3 Position; /* 20 12 */
	qhHalfEdge * Edge; /* 32 8 */
	qhFace * ConflictFace; /* 40 8 */
};

// <00996BE4> ../thirdparty/quickhull/qhHalfEdge.h:46
// member function: 1
// member variables: 5
// struct size: 40
struct qhHalfEdge {
	qhHalfEdge * Prev; /* 0 8 */
	qhHalfEdge * Next; /* 8 8 */
	qhVertex * Origin; /* 16 8 */
	qhFace * Face; /* 24 8 */
	qhHalfEdge * Twin; /* 32 8 */
	/* ../thirdparty/quickhull/qhHalfEdge.h:55 */
	bool IsConvex(const qhHalfEdge* , qhReal);
};

// <061F21E1> thirdparty/quickhull/qhHalfEdge.h:62
void qhFace::qhFace()
{
} /* size: 0 */

// <061F21C5> thirdparty/quickhull/qhHalfEdge.h:62
inline void qhFace::qhFace()
{
} /* size: 0 */

// <00996C73> ../thirdparty/quickhull/qhHalfEdge.h:62
// member variables: 9
// struct size: 112
struct qhFace {
	qhFace * Prev; /* 0 8 */
	qhFace * Next; /* 8 8 */
	qhHalfEdge * Edge; /* 16 8 */
	int Mark; /* 24 4 */
	qhReal Area; /* 28 4 */
	qhVector3 Centroid; /* 32 12 */
	qhPlane Plane; /* 44 16 */
	bool Flipped; /* 60 1 */
	qhList<qhVertex> ConflictList; /* 64 48 */
};

// <061E9313> thirdparty/quickhull/qhHalfEdge.h:82
void qhLinkFace(qhFace *, int, qhHalfEdge *)
{
} /* size: 0 */

// <061E9335> thirdparty/quickhull/qhHalfEdge.h:83
void qhLinkFaces(qhFace *, int, qhFace *, int)
{
} /* size: 0 */

// <061E92FB> thirdparty/quickhull/qhHalfEdge.h:84
void qhNewellPlane(qhFace *)
{
} /* size: 0 */

// <061E92DF> thirdparty/quickhull/qhHalfEdge.h:86
int qhVertexCount(const qhFace *)
{
} /* size: 0 */

// <061E935C> thirdparty/quickhull/qhHalfEdge.h:88
bool qhCheckConsistency(const qhFace *)
{
} /* size: 0 */

