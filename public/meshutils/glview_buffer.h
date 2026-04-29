
//
// public/meshutils/glview_buffer.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmeshsystem.so
//
//	functions: 29
//	classes: 13
//	structs: 4
//

// <05B2AA5A> ../public/meshutils/glview_buffer.h:23
void GLViewLine_t::GLViewLine_t()
{
} /* size: 0 */

// <05B2AA3D> ../public/meshutils/glview_buffer.h:23
inline void GLViewLine_t::GLViewLine_t()
{
} /* size: 0 */

// <02DDF59F> ../public/meshutils/glview_buffer.h:23
// member variables: 3
// struct size: 36
struct GLViewLine_t {
	Vector m_vecP0; /* 0 12 */
	Vector m_vecP1; /* 12 12 */
	Vector m_vecColor; /* 24 12 */
};

// <05B2A94F> ../public/meshutils/glview_buffer.h:30
void GLViewPoly_t::GLViewPoly_t()
{
} /* size: 0 */

// <05B2A932> ../public/meshutils/glview_buffer.h:30
inline void GLViewPoly_t::GLViewPoly_t()
{
} /* size: 0 */

// <02DDF5DF> ../public/meshutils/glview_buffer.h:30
// member variables: 2
// struct size: 48
struct GLViewPoly_t {
	CUtlVector<Vector, CUtlMemory<Vector, int> > m_Points; /* 0 32 */
	Vector m_vecColor; /* 32 12 */
};

// <02DE2374> ../public/meshutils/glview_buffer.h:36
// member variables: 2
// struct size: 64
struct GLViewPrimitiveList_t {
	CUtlVector<GLViewLine_t, CUtlMemory<GLViewLine_t, int> > m_Lines; /* 0 32 */
	CUtlVector<GLViewPoly_t, CUtlMemory<GLViewPoly_t, int> > m_Polys; /* 32 32 */
};

// <02DE23A0> ../public/meshutils/glview_buffer.h:44
// member functions: 48
// member variable: 1
// class size: 80
class CGlViewBuffer : public CUtlBuffer {
public:
	/* class CUtlBuffer <ancestor>; */ /* 0 80 */
	/* ../public/meshutils/glview_buffer.h:47 */
	void CGlViewBuffer(CGlViewBuffer* );
	/* ../public/meshutils/glview_buffer.h:49 */
	void WriteVertex(CGlViewBuffer* , const Vector& , float, float, float);
	/* ../public/meshutils/glview_buffer.h:50 */
	void WriteBox(CGlViewBuffer* , Vector* , float, float, float);
	/* ../public/meshutils/glview_buffer.h:51 */
	void WriteBBox(CGlViewBuffer* , const Vector& , const Vector& , float, float, float);
	/* ../public/meshutils/glview_buffer.h:52 */
	void WriteOrientedBox(CGlViewBuffer* , const Vector& , const Vector& , const CTransform& , float, float, float);
	/* ../public/meshutils/glview_buffer.h:53 */
	void WriteOrientedBox(CGlViewBuffer* , const Vector& , const Vector& , const VMatrix& , float, float, float);
	/* ../public/meshutils/glview_buffer.h:54 */
	void WriteLine(CGlViewBuffer* , const Vector& , const Vector& , float, float, float);
	/* ../public/meshutils/glview_buffer.h:55 */
	void WriteSphere(CGlViewBuffer* , const Vector& , float, float, float, float);
	/* ../public/meshutils/glview_buffer.h:56 */
	void WriteDisc(CGlViewBuffer* , const Vector& , const Vector& , const Vector& , float, float, float, float, int);
	/* ../public/meshutils/glview_buffer.h:57 */
	void WriteDiscWireframe(CGlViewBuffer* , const Vector& , const Vector& , const Vector& , float, float, float, float, int);
	/* ../public/meshutils/glview_buffer.h:58 */
	void WriteBoundingCone(CGlViewBuffer* , const Vector& , float, const Vector& , float, float, float, float);
	/* ../public/meshutils/glview_buffer.h:60 */
	void WritePolygon(CGlViewBuffer* , const Vector* , int, float, float, float);
	/* ../public/meshutils/glview_buffer.h:61 */
	void WritePolygon(CGlViewBuffer* , const Vector* , const Vector* , int);
	/* ../public/meshutils/glview_buffer.h:62 */
	void WritePolygonIndexed(CGlViewBuffer* , const Vector* , const Vector* , const int* , int);
	/* ../public/meshutils/glview_buffer.h:63 */
	void WritePolygonWireframe(CGlViewBuffer* , const Vector* , int, float, float, float);
	/* ../public/meshutils/glview_buffer.h:65 */
	void WriteKDTree(CGlViewBuffer* , const RayTracingEnvironment* , uint16, float, float, float);
	/* ../public/meshutils/glview_buffer.h:66 */
	void WriteKDTree_HalfLambert(CGlViewBuffer* , const RayTracingEnvironment* , uint16, const Vector& , float, float, float);
	/* ../public/meshutils/glview_buffer.h:67 */
	void WriteKDTreeMaterialColors(CGlViewBuffer* , const RayTracingEnvironment* , uint16, const Vector* , uint);
	/* ../public/meshutils/glview_buffer.h:69 */
	bool ConvertToPrimitiveList(CGlViewBuffer* , GLViewPrimitiveList_t& , CUtlString& );
	/* ../public/meshutils/glview_buffer.h:70 */
	void WriteCMeshWireframe(CGlViewBuffer* , const CMesh& , const CTransform& , float, float, float);
	/* ../public/meshutils/glview_buffer.h:72 */
	void WriteSweptBox(CGlViewBuffer* , const CTransform& , const Vector& , const Vector& , const Vector& , float, float, float);
	/* ../public/meshutils/glview_buffer.h:74 */
	void WriteAmbientCube(CGlViewBuffer* , const Vector& , float, const Vector& , int, int);
	/* ../public/meshutils/glview_buffer.h:75 */
	void WriteWireframePolyhedron(CGlViewBuffer* , const CPolyhedron& , float, float, float);
	/* ../public/meshutils/glview_buffer.h:76 */
	void WriteSolidPolyhedron(CGlViewBuffer* , const CPolyhedron& , float, float, float);
	void CGlViewBuffer(class CGlViewBuffer *); /* linkage=_ZN13CGlViewBufferC4Ev */
	/* <5b4d04f> meshutils/glview_buffer.cpp:95 */
	void WriteVertex(class CGlViewBuffer *, const class Vector  &, float, float, float); /* linkage=_ZN13CGlViewBuffer11WriteVertexERK6Vectorfff */
	void WriteBox(class CGlViewBuffer *, class Vector *, float, float, float); /* linkage=_ZN13CGlViewBuffer8WriteBoxEP6Vectorfff */
	void WriteBBox(class CGlViewBuffer *, const class Vector  &, const class Vector  &, float, float, float); /* linkage=_ZN13CGlViewBuffer9WriteBBoxERK6VectorS2_fff */
	void WriteOrientedBox(class CGlViewBuffer *, const class Vector  &, const class Vector  &, const class CTransform  &, float, float, float); /* linkage=_ZN13CGlViewBuffer16WriteOrientedBoxERK6VectorS2_RK10CTransformfff */
	void WriteOrientedBox(class CGlViewBuffer *, const class Vector  &, const class Vector  &, const class VMatrix  &, float, float, float); /* linkage=_ZN13CGlViewBuffer16WriteOrientedBoxERK6VectorS2_RK7VMatrixfff */
	/* <5b4d0e1> meshutils/glview_buffer.cpp:189 */
	void WriteLine(class CGlViewBuffer *, const class Vector  &, const class Vector  &, float, float, float); /* linkage=_ZN13CGlViewBuffer9WriteLineERK6VectorS2_fff */
	void WriteSphere(class CGlViewBuffer *, const class Vector  &, float, float, float, float); /* linkage=_ZN13CGlViewBuffer11WriteSphereERK6Vectorffff */
	void WriteDisc(class CGlViewBuffer *, const class Vector  &, const class Vector  &, const class Vector  &, float, float, float, float, int); /* linkage=_ZN13CGlViewBuffer9WriteDiscERK6VectorS2_S2_ffffi */
	void WriteDiscWireframe(class CGlViewBuffer *, const class Vector  &, const class Vector  &, const class Vector  &, float, float, float, float, int); /* linkage=_ZN13CGlViewBuffer18WriteDiscWireframeERK6VectorS2_S2_ffffi */
	void WriteBoundingCone(class CGlViewBuffer *, const class Vector  &, float, const class Vector  &, float, float, float, float); /* linkage=_ZN13CGlViewBuffer17WriteBoundingConeERK6VectorfS2_ffff */
	/* <5b4d2b3> meshutils/glview_buffer.cpp:306 */
	void WritePolygon(class CGlViewBuffer *, const class Vector  *, int, float, float, float); /* linkage=_ZN13CGlViewBuffer12WritePolygonEPK6Vectorifff */
	void WritePolygon(class CGlViewBuffer *, const class Vector  *, const class Vector  *, int); /* linkage=_ZN13CGlViewBuffer12WritePolygonEPK6VectorS2_i */
	/* <5b4d470> meshutils/glview_buffer.cpp:318 */
	void WritePolygonIndexed(class CGlViewBuffer *, const class Vector  *, const class Vector  *, const int  *, int); /* linkage=_ZN13CGlViewBuffer19WritePolygonIndexedEPK6VectorS2_PKii */
	void WritePolygonWireframe(class CGlViewBuffer *, const class Vector  *, int, float, float, float); /* linkage=_ZN13CGlViewBuffer21WritePolygonWireframeEPK6Vectorifff */
	void WriteKDTree(class CGlViewBuffer *, const class RayTracingEnvironment  *, uint16, float, float, float); /* linkage=_ZN13CGlViewBuffer11WriteKDTreeEPK21RayTracingEnvironmenttfff */
	void WriteKDTree_HalfLambert(class CGlViewBuffer *, const class RayTracingEnvironment  *, uint16, const class Vector  &, float, float, float); /* linkage=_ZN13CGlViewBuffer23WriteKDTree_HalfLambertEPK21RayTracingEnvironmenttRK6Vectorfff */
	void WriteKDTreeMaterialColors(class CGlViewBuffer *, const class RayTracingEnvironment  *, uint16, const class Vector  *, uint); /* linkage=_ZN13CGlViewBuffer25WriteKDTreeMaterialColorsEPK21RayTracingEnvironmenttPK6Vectorj */
	bool ConvertToPrimitiveList(class CGlViewBuffer *, class GLViewPrimitiveList_t &, class CUtlString &); /* linkage=_ZN13CGlViewBuffer22ConvertToPrimitiveListER21GLViewPrimitiveList_tR10CUtlString */
	void WriteCMeshWireframe(class CGlViewBuffer *, const class CMesh  &, const class CTransform  &, float, float, float); /* linkage=_ZN13CGlViewBuffer19WriteCMeshWireframeERK5CMeshRK10CTransformfff */
	void WriteSweptBox(class CGlViewBuffer *, const class CTransform  &, const class Vector  &, const class Vector  &, const class Vector  &, float, float, float); /* linkage=_ZN13CGlViewBuffer13WriteSweptBoxERK10CTransformRK6VectorS5_S5_fff */
	void WriteAmbientCube(class CGlViewBuffer *, const class Vector  &, float, const class Vector  &, int, int); /* linkage=_ZN13CGlViewBuffer16WriteAmbientCubeERK6VectorfRA6_S1_ii */
	void WriteWireframePolyhedron(class CGlViewBuffer *, const class CPolyhedron  &, float, float, float); /* linkage=_ZN13CGlViewBuffer24WriteWireframePolyhedronERK11CPolyhedronfff */
	void WriteSolidPolyhedron(class CGlViewBuffer *, const class CPolyhedron  &, float, float, float); /* linkage=_ZN13CGlViewBuffer20WriteSolidPolyhedronERK11CPolyhedronfff */
};

// <05F07D0E> ../public/meshutils/glview_buffer.h:79
void CGeoViewBuffer::~CGeoViewBuffer()
{
} /* size: 0 */

// <05F07CF2> ../public/meshutils/glview_buffer.h:79
inline void CGeoViewBuffer::~CGeoViewBuffer()
{
} /* size: 0 */

// <02DE41EA> ../public/meshutils/glview_buffer.h:79
// member functions: 80
// member variable: 1
// class size: 80
class CGeoViewBuffer : public CUtlBuffer {
public:
	/* class CUtlBuffer <ancestor>; */ /* 0 80 */
	/* ../public/meshutils/glview_buffer.h:82 */
	void CGeoViewBuffer(CGeoViewBuffer* );
	/* ../public/meshutils/glview_buffer.h:84 */
	void WriteBox(CGeoViewBuffer* , Vector* , float, float, float);
	/* ../public/meshutils/glview_buffer.h:85 */
	void WriteBBox(CGeoViewBuffer* , const Vector& , const Vector& , float, float, float);
	/* ../public/meshutils/glview_buffer.h:86 */
	void WriteBBox(CGeoViewBuffer* , const AABB_t& , float, float, float);
	/* ../public/meshutils/glview_buffer.h:87 */
	void WriteOrientedBox(CGeoViewBuffer* , const Vector& , const Vector& , const CTransform& , float, float, float);
	/* ../public/meshutils/glview_buffer.h:88 */
	void WriteOrientedBox(CGeoViewBuffer* , const Vector& , const Vector& , const VMatrix& , float, float, float);
	/* ../public/meshutils/glview_buffer.h:89 */
	void WriteOrientedBox(CGeoViewBuffer* , const AABB_t& , const matrix3x4_t& , float, float, float);
	/* ../public/meshutils/glview_buffer.h:90 */
	void WriteLine(CGeoViewBuffer* , const Vector& , const Vector& , float, float, float);
	/* ../public/meshutils/glview_buffer.h:91 */
	void WriteLine(CGeoViewBuffer* , const Vector& , const Vector& , const VertexColor_t& );
	/* ../public/meshutils/glview_buffer.h:92 */
	void WriteSphere(CGeoViewBuffer* , const Vector& , float, float, float, float);
	/* ../public/meshutils/glview_buffer.h:93 */
	void WriteCapsule(CGeoViewBuffer* , const Vector& , const Vector& , float, float, float, float);
	/* ../public/meshutils/glview_buffer.h:94 */
	void WriteDisc(CGeoViewBuffer* , const Vector& , const Vector& , const Vector& , float, float, float, float, int);
	/* ../public/meshutils/glview_buffer.h:95 */
	void WriteDiscWireframe(CGeoViewBuffer* , const Vector& , const Vector& , const Vector& , float, float, float, float, int);
	/* ../public/meshutils/glview_buffer.h:96 */
	void WriteHemiDiscWireframe(CGeoViewBuffer* , const Vector& , const Vector& , const Vector& , float, float, float, float, int);
	/* ../public/meshutils/glview_buffer.h:97 */
	void WriteHemisphereWireframe(CGeoViewBuffer* , const Vector& , const Vector& , const Vector& , float, float, float, float, int);
	/* ../public/meshutils/glview_buffer.h:99 */
	void WritePolygon(CGeoViewBuffer* , const Vector* , int, float, float, float);
	/* ../public/meshutils/glview_buffer.h:100 */
	void WritePolygon(CGeoViewBuffer* , const Vector* , int, const VertexColor_t& );
	/* ../public/meshutils/glview_buffer.h:101 */
	void WritePolygon(CGeoViewBuffer* , const Vector* , const Vector* , int);
	/* ../public/meshutils/glview_buffer.h:102 */
	void WritePolygonIndexed(CGeoViewBuffer* , const Vector* , const Vector* , const int* , int);
	/* ../public/meshutils/glview_buffer.h:103 */
	void WritePolygonWireframe(CGeoViewBuffer* , const Vector* , int, float, float, float);
	/* ../public/meshutils/glview_buffer.h:104 */
	void WriteTriangleWireframe(CGeoViewBuffer* , const Vector& , const Vector& , const Vector& , float, float, float);
	/* ../public/meshutils/glview_buffer.h:111 */
	void WriteKDTree(CGeoViewBuffer* , const RayTracingEnvironment* , uint16, float, float, float);
	/* ../public/meshutils/glview_buffer.h:112 */
	void WriteKDTree_HalfLambert(CGeoViewBuffer* , const RayTracingEnvironment* , uint16, const Vector& , float, float, float);
	/* ../public/meshutils/glview_buffer.h:113 */
	void WriteKDTreeMaterialColors(CGeoViewBuffer* , const RayTracingEnvironment* , uint16, const Vector* , uint);
	/* ../public/meshutils/glview_buffer.h:114 */
	void WriteCMeshWireframe(CGeoViewBuffer* , const CMesh& , const CTransform& , float, float, float);
	/* ../public/meshutils/glview_buffer.h:115 */
	void WriteSweptBox(CGeoViewBuffer* , const CTransform& , const Vector& , const Vector& , const Vector& , float, float, float);
	/* ../public/meshutils/glview_buffer.h:116 */
	void WriteAmbientCube(CGeoViewBuffer* , const Vector& , float, const Vector& , int, int);
	/* ../public/meshutils/glview_buffer.h:117 */
	void WriteCamera(CGeoViewBuffer* , const CTransform& );
	/* ../public/meshutils/glview_buffer.h:118 */
	void WriteText3D(CGeoViewBuffer* , const Vector& , const char* );
	/* ../public/meshutils/glview_buffer.h:120 */
	void WriteObjectName(CGeoViewBuffer* , uint64, const char* , const char* );
	/* ../public/meshutils/glview_buffer.h:121 */
	void WriteObjectName(CGeoViewBuffer* , const char* , const char* );
	/* ../public/meshutils/glview_buffer.h:122 */
	void PushObjectNamespace(CGeoViewBuffer* , const char* , const char* );
	/* ../public/meshutils/glview_buffer.h:123 */
	void PushObjectNamespace(CGeoViewBuffer* , uint64, const char* , const char* );
	/* ../public/meshutils/glview_buffer.h:124 */
	void PopObjectNamespace(CGeoViewBuffer* );
	/* ../public/meshutils/glview_buffer.h:125 */
	void WriteFrameEndMarker(CGeoViewBuffer* , const char* , const char* , uint);
	/* ../public/meshutils/glview_buffer.h:126 */
	void WriteTextMsg(CGeoViewBuffer* , const char* , const char* , uint);
private:
	/* ../public/meshutils/glview_buffer.h:149 */
	void WriteVertex(CGeoViewBuffer* , const Vector& , float, float, float);
	/* ../public/meshutils/glview_buffer.h:150 */
	void WriteKDTreeAndChildren(CGeoViewBuffer* , const RayTracingEnvironment* , uint16, IVertColorBase* );
	/* ../public/meshutils/glview_buffer.h:151 */
	void WriteKDTree(CGeoViewBuffer* , const RayTracingEnvironment* , const matrix3x4a_t& , uint16, IVertColorBase* );
	void ~CGeoViewBuffer(CGeoViewBuffer* );
	void CGeoViewBuffer(class CGeoViewBuffer *); /* linkage=_ZN14CGeoViewBufferC4Ev */
	void WriteBox(class CGeoViewBuffer *, class Vector *, float, float, float); /* linkage=_ZN14CGeoViewBuffer8WriteBoxEP6Vectorfff */
	void WriteBBox(class CGeoViewBuffer *, const class Vector  &, const class Vector  &, float, float, float); /* linkage=_ZN14CGeoViewBuffer9WriteBBoxERK6VectorS2_fff */
	void WriteBBox(class CGeoViewBuffer *, const class AABB_t  &, float, float, float); /* linkage=_ZN14CGeoViewBuffer9WriteBBoxERK6AABB_tfff */
	void WriteOrientedBox(class CGeoViewBuffer *, const class Vector  &, const class Vector  &, const class CTransform  &, float, float, float); /* linkage=_ZN14CGeoViewBuffer16WriteOrientedBoxERK6VectorS2_RK10CTransformfff */
	void WriteOrientedBox(class CGeoViewBuffer *, const class Vector  &, const class Vector  &, const class VMatrix  &, float, float, float); /* linkage=_ZN14CGeoViewBuffer16WriteOrientedBoxERK6VectorS2_RK7VMatrixfff */
	void WriteOrientedBox(class CGeoViewBuffer *, const class AABB_t  &, const class matrix3x4_t  &, float, float, float); /* linkage=_ZN14CGeoViewBuffer16WriteOrientedBoxERK6AABB_tRK11matrix3x4_tfff */
	void WriteLine(class CGeoViewBuffer *, const class Vector  &, const class Vector  &, float, float, float); /* linkage=_ZN14CGeoViewBuffer9WriteLineERK6VectorS2_fff */
	void WriteLine(class CGeoViewBuffer *, const class Vector  &, const class Vector  &, const class VertexColor_t  &); /* linkage=_ZN14CGeoViewBuffer9WriteLineERK6VectorS2_RK13VertexColor_t */
	void WriteSphere(class CGeoViewBuffer *, const class Vector  &, float, float, float, float); /* linkage=_ZN14CGeoViewBuffer11WriteSphereERK6Vectorffff */
	void WriteCapsule(class CGeoViewBuffer *, const class Vector  &, const class Vector  &, float, float, float, float); /* linkage=_ZN14CGeoViewBuffer12WriteCapsuleERK6VectorS2_ffff */
	void WriteDisc(class CGeoViewBuffer *, const class Vector  &, const class Vector  &, const class Vector  &, float, float, float, float, int); /* linkage=_ZN14CGeoViewBuffer9WriteDiscERK6VectorS2_S2_ffffi */
	void WriteDiscWireframe(class CGeoViewBuffer *, const class Vector  &, const class Vector  &, const class Vector  &, float, float, float, float, int); /* linkage=_ZN14CGeoViewBuffer18WriteDiscWireframeERK6VectorS2_S2_ffffi */
	void WriteHemiDiscWireframe(class CGeoViewBuffer *, const class Vector  &, const class Vector  &, const class Vector  &, float, float, float, float, int); /* linkage=_ZN14CGeoViewBuffer22WriteHemiDiscWireframeERK6VectorS2_S2_ffffi */
	void WriteHemisphereWireframe(class CGeoViewBuffer *, const class Vector  &, const class Vector  &, const class Vector  &, float, float, float, float, int); /* linkage=_ZN14CGeoViewBuffer24WriteHemisphereWireframeERK6VectorS2_S2_ffffi */
	/* <5b4f156> meshutils/glview_buffer.cpp:990 */
	void WritePolygon(class CGeoViewBuffer *, const class Vector  *, int, float, float, float); /* linkage=_ZN14CGeoViewBuffer12WritePolygonEPK6Vectorifff */
	void WritePolygon(class CGeoViewBuffer *, const class Vector  *, int, const class VertexColor_t  &); /* linkage=_ZN14CGeoViewBuffer12WritePolygonEPK6VectoriRK13VertexColor_t */
	void WritePolygon(class CGeoViewBuffer *, const class Vector  *, const class Vector  *, int); /* linkage=_ZN14CGeoViewBuffer12WritePolygonEPK6VectorS2_i */
	/* <5b4e7cc> meshutils/glview_buffer.cpp:1014 */
	void WritePolygonIndexed(class CGeoViewBuffer *, const class Vector  *, const class Vector  *, const int  *, int); /* linkage=_ZN14CGeoViewBuffer19WritePolygonIndexedEPK6VectorS2_PKii */
	void WritePolygonWireframe(class CGeoViewBuffer *, const class Vector  *, int, float, float, float); /* linkage=_ZN14CGeoViewBuffer21WritePolygonWireframeEPK6Vectorifff */
	void WriteTriangleWireframe(class CGeoViewBuffer *, const class Vector  &, const class Vector  &, const class Vector  &, float, float, float); /* linkage=_ZN14CGeoViewBuffer22WriteTriangleWireframeERK6VectorS2_S2_fff */
	void WriteKDTree(class CGeoViewBuffer *, const class RayTracingEnvironment  *, uint16, float, float, float); /* linkage=_ZN14CGeoViewBuffer11WriteKDTreeEPK21RayTracingEnvironmenttfff */
	void WriteKDTree_HalfLambert(class CGeoViewBuffer *, const class RayTracingEnvironment  *, uint16, const class Vector  &, float, float, float); /* linkage=_ZN14CGeoViewBuffer23WriteKDTree_HalfLambertEPK21RayTracingEnvironmenttRK6Vectorfff */
	void WriteKDTreeMaterialColors(class CGeoViewBuffer *, const class RayTracingEnvironment  *, uint16, const class Vector  *, uint); /* linkage=_ZN14CGeoViewBuffer25WriteKDTreeMaterialColorsEPK21RayTracingEnvironmenttPK6Vectorj */
	void WriteCMeshWireframe(class CGeoViewBuffer *, const class CMesh  &, const class CTransform  &, float, float, float); /* linkage=_ZN14CGeoViewBuffer19WriteCMeshWireframeERK5CMeshRK10CTransformfff */
	void WriteSweptBox(class CGeoViewBuffer *, const class CTransform  &, const class Vector  &, const class Vector  &, const class Vector  &, float, float, float); /* linkage=_ZN14CGeoViewBuffer13WriteSweptBoxERK10CTransformRK6VectorS5_S5_fff */
	void WriteAmbientCube(class CGeoViewBuffer *, const class Vector  &, float, const class Vector  &, int, int); /* linkage=_ZN14CGeoViewBuffer16WriteAmbientCubeERK6VectorfRA6_S1_ii */
	void WriteCamera(class CGeoViewBuffer *, const class CTransform  &); /* linkage=_ZN14CGeoViewBuffer11WriteCameraERK10CTransform */
	void WriteText3D(class CGeoViewBuffer *, const class Vector  &, const char  *); /* linkage=_ZN14CGeoViewBuffer11WriteText3DERK6VectorPKc */
	/* <5b4e0e7> meshutils/glview_buffer.cpp:1214 */
	void WriteObjectName(class CGeoViewBuffer *, uint64, const char  *, const char  *); /* linkage=_ZN14CGeoViewBuffer15WriteObjectNameEyPKcS1_ */
	void WriteObjectName(class CGeoViewBuffer *, const char  *, const char  *); /* linkage=_ZN14CGeoViewBuffer15WriteObjectNameEPKcS1_ */
	void PushObjectNamespace(class CGeoViewBuffer *, const char  *, const char  *); /* linkage=_ZN14CGeoViewBuffer19PushObjectNamespaceEPKcS1_ */
	/* <5b4e1c7> meshutils/glview_buffer.cpp:1225 */
	void PushObjectNamespace(class CGeoViewBuffer *, uint64, const char  *, const char  *); /* linkage=_ZN14CGeoViewBuffer19PushObjectNamespaceEyPKcS1_ */
	void PopObjectNamespace(class CGeoViewBuffer *); /* linkage=_ZN14CGeoViewBuffer18PopObjectNamespaceEv */
	void WriteFrameEndMarker(class CGeoViewBuffer *, const char  *, const char  *, uint); /* linkage=_ZN14CGeoViewBuffer19WriteFrameEndMarkerEPKcS1_j */
	void WriteTextMsg(class CGeoViewBuffer *, const char  *, const char  *, uint); /* linkage=_ZN14CGeoViewBuffer12WriteTextMsgEPKcS1_j */
	void WriteVertex(class CGeoViewBuffer *, const class Vector  &, float, float, float); /* linkage=_ZN14CGeoViewBuffer11WriteVertexERK6Vectorfff */
	void WriteKDTreeAndChildren(class CGeoViewBuffer *, const class RayTracingEnvironment  *, uint16, class IVertColorBase *); /* linkage=_ZN14CGeoViewBuffer22WriteKDTreeAndChildrenEPK21RayTracingEnvironmenttP14IVertColorBase */
	void WriteKDTree(class CGeoViewBuffer *, const class RayTracingEnvironment  *, const class matrix3x4a_t  &, uint16, class IVertColorBase *); /* linkage=_ZN14CGeoViewBuffer11WriteKDTreeEPK21RayTracingEnvironmentRK12matrix3x4a_ttP14IVertColorBase */
	void ~CGeoViewBuffer(class CGeoViewBuffer *); /* linkage=_ZN14CGeoViewBufferD4Ev */
};

// <05EC3B4A> ../public/meshutils/glview_buffer.h:79
// member functions: 82
// member variable: 1
// class size: 80
class CGeoViewBuffer : public CUtlBuffer {
	/* ../public/meshutils/glview_buffer.h:128 */
	class CNamespaceScope {
	private:
		CGeoViewBuffer * m_pGeoView; /* 0 8 */
		/* ../public/meshutils/glview_buffer.h:132 */
		void CNamespaceScope(CNamespaceScope* , CGeoViewBuffer* , const char* );
		/* ../public/meshutils/glview_buffer.h:139 */
		void ~CNamespaceScope(CNamespaceScope* );
	};
public:
	/* class CUtlBuffer <ancestor>; */ /* 0 80 */
	/* ../public/meshutils/glview_buffer.h:82 */
	void CGeoViewBuffer(CGeoViewBuffer* );
	/* ../public/meshutils/glview_buffer.h:84 */
	void WriteBox(CGeoViewBuffer* , Vector* , float, float, float);
	/* ../public/meshutils/glview_buffer.h:85 */
	void WriteBBox(CGeoViewBuffer* , const Vector& , const Vector& , float, float, float);
	/* ../public/meshutils/glview_buffer.h:86 */
	void WriteBBox(CGeoViewBuffer* , const AABB_t& , float, float, float);
	/* ../public/meshutils/glview_buffer.h:87 */
	void WriteOrientedBox(CGeoViewBuffer* , const Vector& , const Vector& , const CTransform& , float, float, float);
	/* ../public/meshutils/glview_buffer.h:88 */
	void WriteOrientedBox(CGeoViewBuffer* , const Vector& , const Vector& , const VMatrix& , float, float, float);
	/* ../public/meshutils/glview_buffer.h:89 */
	void WriteOrientedBox(CGeoViewBuffer* , const AABB_t& , const matrix3x4_t& , float, float, float);
	/* ../public/meshutils/glview_buffer.h:90 */
	void WriteLine(CGeoViewBuffer* , const Vector& , const Vector& , float, float, float);
	/* ../public/meshutils/glview_buffer.h:91 */
	void WriteLine(CGeoViewBuffer* , const Vector& , const Vector& , const VertexColor_t& );
	/* ../public/meshutils/glview_buffer.h:92 */
	void WriteSphere(CGeoViewBuffer* , const Vector& , float, float, float, float);
	/* ../public/meshutils/glview_buffer.h:93 */
	void WriteCapsule(CGeoViewBuffer* , const Vector& , const Vector& , float, float, float, float);
	/* ../public/meshutils/glview_buffer.h:94 */
	void WriteDisc(CGeoViewBuffer* , const Vector& , const Vector& , const Vector& , float, float, float, float, int);
	/* ../public/meshutils/glview_buffer.h:95 */
	void WriteDiscWireframe(CGeoViewBuffer* , const Vector& , const Vector& , const Vector& , float, float, float, float, int);
	/* ../public/meshutils/glview_buffer.h:96 */
	void WriteHemiDiscWireframe(CGeoViewBuffer* , const Vector& , const Vector& , const Vector& , float, float, float, float, int);
	/* ../public/meshutils/glview_buffer.h:97 */
	void WriteHemisphereWireframe(CGeoViewBuffer* , const Vector& , const Vector& , const Vector& , float, float, float, float, int);
	/* ../public/meshutils/glview_buffer.h:99 */
	void WritePolygon(CGeoViewBuffer* , const Vector* , int, float, float, float);
	/* ../public/meshutils/glview_buffer.h:100 */
	void WritePolygon(CGeoViewBuffer* , const Vector* , int, const VertexColor_t& );
	/* ../public/meshutils/glview_buffer.h:101 */
	void WritePolygon(CGeoViewBuffer* , const Vector* , const Vector* , int);
	/* ../public/meshutils/glview_buffer.h:102 */
	void WritePolygonIndexed(CGeoViewBuffer* , const Vector* , const Vector* , const int* , int);
	/* ../public/meshutils/glview_buffer.h:103 */
	void WritePolygonWireframe(CGeoViewBuffer* , const Vector* , int, float, float, float);
	/* ../public/meshutils/glview_buffer.h:104 */
	void WriteTriangleWireframe(CGeoViewBuffer* , const Vector& , const Vector& , const Vector& , float, float, float);
	/* ../public/meshutils/glview_buffer.h:111 */
	void WriteKDTree(CGeoViewBuffer* , const RayTracingEnvironment* , uint16, float, float, float);
	/* ../public/meshutils/glview_buffer.h:112 */
	void WriteKDTree_HalfLambert(CGeoViewBuffer* , const RayTracingEnvironment* , uint16, const Vector& , float, float, float);
	/* ../public/meshutils/glview_buffer.h:113 */
	void WriteKDTreeMaterialColors(CGeoViewBuffer* , const RayTracingEnvironment* , uint16, const Vector* , uint);
	/* ../public/meshutils/glview_buffer.h:114 */
	void WriteCMeshWireframe(CGeoViewBuffer* , const CMesh& , const CTransform& , float, float, float);
	/* ../public/meshutils/glview_buffer.h:115 */
	void WriteSweptBox(CGeoViewBuffer* , const CTransform& , const Vector& , const Vector& , const Vector& , float, float, float);
	/* ../public/meshutils/glview_buffer.h:116 */
	void WriteAmbientCube(CGeoViewBuffer* , const Vector& , float, const Vector& , int, int);
	/* ../public/meshutils/glview_buffer.h:117 */
	void WriteCamera(CGeoViewBuffer* , const CTransform& );
	/* ../public/meshutils/glview_buffer.h:118 */
	void WriteText3D(CGeoViewBuffer* , const Vector& , const char* );
	/* ../public/meshutils/glview_buffer.h:120 */
	void WriteObjectName(CGeoViewBuffer* , uint64, const char* , const char* );
	/* ../public/meshutils/glview_buffer.h:121 */
	void WriteObjectName(CGeoViewBuffer* , const char* , const char* );
	/* ../public/meshutils/glview_buffer.h:122 */
	void PushObjectNamespace(CGeoViewBuffer* , const char* , const char* );
	/* ../public/meshutils/glview_buffer.h:123 */
	void PushObjectNamespace(CGeoViewBuffer* , uint64, const char* , const char* );
	/* ../public/meshutils/glview_buffer.h:124 */
	void PopObjectNamespace(CGeoViewBuffer* );
	/* ../public/meshutils/glview_buffer.h:125 */
	void WriteFrameEndMarker(CGeoViewBuffer* , const char* , const char* , uint);
	/* ../public/meshutils/glview_buffer.h:126 */
	void WriteTextMsg(CGeoViewBuffer* , const char* , const char* , uint);
private:
	/* ../public/meshutils/glview_buffer.h:149 */
	void WriteVertex(CGeoViewBuffer* , const Vector& , float, float, float);
	/* ../public/meshutils/glview_buffer.h:150 */
	void WriteKDTreeAndChildren(CGeoViewBuffer* , const RayTracingEnvironment* , uint16, IVertColorBase* );
	/* ../public/meshutils/glview_buffer.h:151 */
	void WriteKDTree(CGeoViewBuffer* , const RayTracingEnvironment* , const matrix3x4a_t& , uint16, IVertColorBase* );
	void ~CGeoViewBuffer(CGeoViewBuffer* );
	void CGeoViewBuffer(class CGeoViewBuffer *); /* linkage=_ZN14CGeoViewBufferC4Ev */
	void WriteBox(class CGeoViewBuffer *, class Vector *, float, float, float); /* linkage=_ZN14CGeoViewBuffer8WriteBoxEP6Vectorfff */
	void WriteBBox(class CGeoViewBuffer *, const class Vector  &, const class Vector  &, float, float, float); /* linkage=_ZN14CGeoViewBuffer9WriteBBoxERK6VectorS2_fff */
	void WriteBBox(class CGeoViewBuffer *, const class AABB_t  &, float, float, float); /* linkage=_ZN14CGeoViewBuffer9WriteBBoxERK6AABB_tfff */
	void WriteOrientedBox(class CGeoViewBuffer *, const class Vector  &, const class Vector  &, const class CTransform  &, float, float, float); /* linkage=_ZN14CGeoViewBuffer16WriteOrientedBoxERK6VectorS2_RK10CTransformfff */
	void WriteOrientedBox(class CGeoViewBuffer *, const class Vector  &, const class Vector  &, const class VMatrix  &, float, float, float); /* linkage=_ZN14CGeoViewBuffer16WriteOrientedBoxERK6VectorS2_RK7VMatrixfff */
	void WriteOrientedBox(class CGeoViewBuffer *, const class AABB_t  &, const class matrix3x4_t  &, float, float, float); /* linkage=_ZN14CGeoViewBuffer16WriteOrientedBoxERK6AABB_tRK11matrix3x4_tfff */
	void WriteLine(class CGeoViewBuffer *, const class Vector  &, const class Vector  &, float, float, float); /* linkage=_ZN14CGeoViewBuffer9WriteLineERK6VectorS2_fff */
	void WriteLine(class CGeoViewBuffer *, const class Vector  &, const class Vector  &, const class VertexColor_t  &); /* linkage=_ZN14CGeoViewBuffer9WriteLineERK6VectorS2_RK13VertexColor_t */
	void WriteSphere(class CGeoViewBuffer *, const class Vector  &, float, float, float, float); /* linkage=_ZN14CGeoViewBuffer11WriteSphereERK6Vectorffff */
	void WriteCapsule(class CGeoViewBuffer *, const class Vector  &, const class Vector  &, float, float, float, float); /* linkage=_ZN14CGeoViewBuffer12WriteCapsuleERK6VectorS2_ffff */
	void WriteDisc(class CGeoViewBuffer *, const class Vector  &, const class Vector  &, const class Vector  &, float, float, float, float, int); /* linkage=_ZN14CGeoViewBuffer9WriteDiscERK6VectorS2_S2_ffffi */
	void WriteDiscWireframe(class CGeoViewBuffer *, const class Vector  &, const class Vector  &, const class Vector  &, float, float, float, float, int); /* linkage=_ZN14CGeoViewBuffer18WriteDiscWireframeERK6VectorS2_S2_ffffi */
	void WriteHemiDiscWireframe(class CGeoViewBuffer *, const class Vector  &, const class Vector  &, const class Vector  &, float, float, float, float, int); /* linkage=_ZN14CGeoViewBuffer22WriteHemiDiscWireframeERK6VectorS2_S2_ffffi */
	void WriteHemisphereWireframe(class CGeoViewBuffer *, const class Vector  &, const class Vector  &, const class Vector  &, float, float, float, float, int); /* linkage=_ZN14CGeoViewBuffer24WriteHemisphereWireframeERK6VectorS2_S2_ffffi */
	/* <5b4f156> meshutils/glview_buffer.cpp:990 */
	void WritePolygon(class CGeoViewBuffer *, const class Vector  *, int, float, float, float); /* linkage=_ZN14CGeoViewBuffer12WritePolygonEPK6Vectorifff */
	void WritePolygon(class CGeoViewBuffer *, const class Vector  *, int, const class VertexColor_t  &); /* linkage=_ZN14CGeoViewBuffer12WritePolygonEPK6VectoriRK13VertexColor_t */
	void WritePolygon(class CGeoViewBuffer *, const class Vector  *, const class Vector  *, int); /* linkage=_ZN14CGeoViewBuffer12WritePolygonEPK6VectorS2_i */
	/* <5b4e7cc> meshutils/glview_buffer.cpp:1014 */
	void WritePolygonIndexed(class CGeoViewBuffer *, const class Vector  *, const class Vector  *, const int  *, int); /* linkage=_ZN14CGeoViewBuffer19WritePolygonIndexedEPK6VectorS2_PKii */
	void WritePolygonWireframe(class CGeoViewBuffer *, const class Vector  *, int, float, float, float); /* linkage=_ZN14CGeoViewBuffer21WritePolygonWireframeEPK6Vectorifff */
	void WriteTriangleWireframe(class CGeoViewBuffer *, const class Vector  &, const class Vector  &, const class Vector  &, float, float, float); /* linkage=_ZN14CGeoViewBuffer22WriteTriangleWireframeERK6VectorS2_S2_fff */
	void WriteKDTree(class CGeoViewBuffer *, const class RayTracingEnvironment  *, uint16, float, float, float); /* linkage=_ZN14CGeoViewBuffer11WriteKDTreeEPK21RayTracingEnvironmenttfff */
	void WriteKDTree_HalfLambert(class CGeoViewBuffer *, const class RayTracingEnvironment  *, uint16, const class Vector  &, float, float, float); /* linkage=_ZN14CGeoViewBuffer23WriteKDTree_HalfLambertEPK21RayTracingEnvironmenttRK6Vectorfff */
	void WriteKDTreeMaterialColors(class CGeoViewBuffer *, const class RayTracingEnvironment  *, uint16, const class Vector  *, uint); /* linkage=_ZN14CGeoViewBuffer25WriteKDTreeMaterialColorsEPK21RayTracingEnvironmenttPK6Vectorj */
	void WriteCMeshWireframe(class CGeoViewBuffer *, const class CMesh  &, const class CTransform  &, float, float, float); /* linkage=_ZN14CGeoViewBuffer19WriteCMeshWireframeERK5CMeshRK10CTransformfff */
	void WriteSweptBox(class CGeoViewBuffer *, const class CTransform  &, const class Vector  &, const class Vector  &, const class Vector  &, float, float, float); /* linkage=_ZN14CGeoViewBuffer13WriteSweptBoxERK10CTransformRK6VectorS5_S5_fff */
	void WriteAmbientCube(class CGeoViewBuffer *, const class Vector  &, float, const class Vector  &, int, int); /* linkage=_ZN14CGeoViewBuffer16WriteAmbientCubeERK6VectorfRA6_S1_ii */
	void WriteCamera(class CGeoViewBuffer *, const class CTransform  &); /* linkage=_ZN14CGeoViewBuffer11WriteCameraERK10CTransform */
	void WriteText3D(class CGeoViewBuffer *, const class Vector  &, const char  *); /* linkage=_ZN14CGeoViewBuffer11WriteText3DERK6VectorPKc */
	/* <5b4e0e7> meshutils/glview_buffer.cpp:1214 */
	void WriteObjectName(class CGeoViewBuffer *, uint64, const char  *, const char  *); /* linkage=_ZN14CGeoViewBuffer15WriteObjectNameEyPKcS1_ */
	void WriteObjectName(class CGeoViewBuffer *, const char  *, const char  *); /* linkage=_ZN14CGeoViewBuffer15WriteObjectNameEPKcS1_ */
	void PushObjectNamespace(class CGeoViewBuffer *, const char  *, const char  *); /* linkage=_ZN14CGeoViewBuffer19PushObjectNamespaceEPKcS1_ */
	/* <5b4e1c7> meshutils/glview_buffer.cpp:1225 */
	void PushObjectNamespace(class CGeoViewBuffer *, uint64, const char  *, const char  *); /* linkage=_ZN14CGeoViewBuffer19PushObjectNamespaceEyPKcS1_ */
	void PopObjectNamespace(class CGeoViewBuffer *); /* linkage=_ZN14CGeoViewBuffer18PopObjectNamespaceEv */
	void WriteFrameEndMarker(class CGeoViewBuffer *, const char  *, const char  *, uint); /* linkage=_ZN14CGeoViewBuffer19WriteFrameEndMarkerEPKcS1_j */
	void WriteTextMsg(class CGeoViewBuffer *, const char  *, const char  *, uint); /* linkage=_ZN14CGeoViewBuffer12WriteTextMsgEPKcS1_j */
	void WriteVertex(class CGeoViewBuffer *, const class Vector  &, float, float, float); /* linkage=_ZN14CGeoViewBuffer11WriteVertexERK6Vectorfff */
	void WriteKDTreeAndChildren(class CGeoViewBuffer *, const class RayTracingEnvironment  *, uint16, class IVertColorBase *); /* linkage=_ZN14CGeoViewBuffer22WriteKDTreeAndChildrenEPK21RayTracingEnvironmenttP14IVertColorBase */
	void WriteKDTree(class CGeoViewBuffer *, const class RayTracingEnvironment  *, const class matrix3x4a_t  &, uint16, class IVertColorBase *); /* linkage=_ZN14CGeoViewBuffer11WriteKDTreeEPK21RayTracingEnvironmentRK12matrix3x4a_ttP14IVertColorBase */
	void ~CGeoViewBuffer(class CGeoViewBuffer *); /* linkage=_ZN14CGeoViewBufferD4Ev */
};

// <02DD6BBA> ../public/meshutils/glview_buffer.h:79
// member functions: 79
// member variable: 1
// class size: 80
class CGeoViewBuffer : public CUtlBuffer {
public:
	/* class CUtlBuffer <ancestor>; */ /* 0 80 */
	/* ../public/meshutils/glview_buffer.h:82 */
	void CGeoViewBuffer(CGeoViewBuffer* );
	/* ../public/meshutils/glview_buffer.h:84 */
	void WriteBox(CGeoViewBuffer* , Vector* , float, float, float);
	/* ../public/meshutils/glview_buffer.h:85 */
	void WriteBBox(CGeoViewBuffer* , const Vector& , const Vector& , float, float, float);
	/* ../public/meshutils/glview_buffer.h:86 */
	void WriteBBox(CGeoViewBuffer* , const AABB_t& , float, float, float);
	/* ../public/meshutils/glview_buffer.h:87 */
	void WriteOrientedBox(CGeoViewBuffer* , const Vector& , const Vector& , const CTransform& , float, float, float);
	/* ../public/meshutils/glview_buffer.h:88 */
	void WriteOrientedBox(CGeoViewBuffer* , const Vector& , const Vector& , const VMatrix& , float, float, float);
	/* ../public/meshutils/glview_buffer.h:89 */
	void WriteOrientedBox(CGeoViewBuffer* , const AABB_t& , const matrix3x4_t& , float, float, float);
	/* ../public/meshutils/glview_buffer.h:90 */
	void WriteLine(CGeoViewBuffer* , const Vector& , const Vector& , float, float, float);
	/* ../public/meshutils/glview_buffer.h:91 */
	void WriteLine(CGeoViewBuffer* , const Vector& , const Vector& , const VertexColor_t& );
	/* ../public/meshutils/glview_buffer.h:92 */
	void WriteSphere(CGeoViewBuffer* , const Vector& , float, float, float, float);
	/* ../public/meshutils/glview_buffer.h:93 */
	void WriteCapsule(CGeoViewBuffer* , const Vector& , const Vector& , float, float, float, float);
	/* ../public/meshutils/glview_buffer.h:94 */
	void WriteDisc(CGeoViewBuffer* , const Vector& , const Vector& , const Vector& , float, float, float, float, int);
	/* ../public/meshutils/glview_buffer.h:95 */
	void WriteDiscWireframe(CGeoViewBuffer* , const Vector& , const Vector& , const Vector& , float, float, float, float, int);
	/* ../public/meshutils/glview_buffer.h:96 */
	void WriteHemiDiscWireframe(CGeoViewBuffer* , const Vector& , const Vector& , const Vector& , float, float, float, float, int);
	/* ../public/meshutils/glview_buffer.h:97 */
	void WriteHemisphereWireframe(CGeoViewBuffer* , const Vector& , const Vector& , const Vector& , float, float, float, float, int);
	/* ../public/meshutils/glview_buffer.h:99 */
	void WritePolygon(CGeoViewBuffer* , const Vector* , int, float, float, float);
	/* ../public/meshutils/glview_buffer.h:100 */
	void WritePolygon(CGeoViewBuffer* , const Vector* , int, const VertexColor_t& );
	/* ../public/meshutils/glview_buffer.h:101 */
	void WritePolygon(CGeoViewBuffer* , const Vector* , const Vector* , int);
	/* ../public/meshutils/glview_buffer.h:102 */
	void WritePolygonIndexed(CGeoViewBuffer* , const Vector* , const Vector* , const int* , int);
	/* ../public/meshutils/glview_buffer.h:103 */
	void WritePolygonWireframe(CGeoViewBuffer* , const Vector* , int, float, float, float);
	/* ../public/meshutils/glview_buffer.h:104 */
	void WriteTriangleWireframe(CGeoViewBuffer* , const Vector& , const Vector& , const Vector& , float, float, float);
	/* ../public/meshutils/glview_buffer.h:111 */
	void WriteKDTree(CGeoViewBuffer* , const RayTracingEnvironment* , uint16, float, float, float);
	/* ../public/meshutils/glview_buffer.h:112 */
	void WriteKDTree_HalfLambert(CGeoViewBuffer* , const RayTracingEnvironment* , uint16, const Vector& , float, float, float);
	/* ../public/meshutils/glview_buffer.h:113 */
	void WriteKDTreeMaterialColors(CGeoViewBuffer* , const RayTracingEnvironment* , uint16, const Vector* , uint);
	/* ../public/meshutils/glview_buffer.h:114 */
	void WriteCMeshWireframe(CGeoViewBuffer* , const CMesh& , const CTransform& , float, float, float);
	/* ../public/meshutils/glview_buffer.h:115 */
	void WriteSweptBox(CGeoViewBuffer* , const CTransform& , const Vector& , const Vector& , const Vector& , float, float, float);
	/* ../public/meshutils/glview_buffer.h:116 */
	void WriteAmbientCube(CGeoViewBuffer* , const Vector& , float, const Vector& , int, int);
	/* ../public/meshutils/glview_buffer.h:117 */
	void WriteCamera(CGeoViewBuffer* , const CTransform& );
	/* ../public/meshutils/glview_buffer.h:118 */
	void WriteText3D(CGeoViewBuffer* , const Vector& , const char* );
	/* ../public/meshutils/glview_buffer.h:120 */
	void WriteObjectName(CGeoViewBuffer* , uint64, const char* , const char* );
	/* ../public/meshutils/glview_buffer.h:121 */
	void WriteObjectName(CGeoViewBuffer* , const char* , const char* );
	/* ../public/meshutils/glview_buffer.h:122 */
	void PushObjectNamespace(CGeoViewBuffer* , const char* , const char* );
	/* ../public/meshutils/glview_buffer.h:123 */
	void PushObjectNamespace(CGeoViewBuffer* , uint64, const char* , const char* );
	/* ../public/meshutils/glview_buffer.h:124 */
	void PopObjectNamespace(CGeoViewBuffer* );
	/* ../public/meshutils/glview_buffer.h:125 */
	void WriteFrameEndMarker(CGeoViewBuffer* , const char* , const char* , uint);
	/* ../public/meshutils/glview_buffer.h:126 */
	void WriteTextMsg(CGeoViewBuffer* , const char* , const char* , uint);
private:
	/* ../public/meshutils/glview_buffer.h:149 */
	void WriteVertex(CGeoViewBuffer* , const Vector& , float, float, float);
	/* ../public/meshutils/glview_buffer.h:150 */
	void WriteKDTreeAndChildren(CGeoViewBuffer* , const RayTracingEnvironment* , uint16, IVertColorBase* );
	/* ../public/meshutils/glview_buffer.h:151 */
	void WriteKDTree(CGeoViewBuffer* , const RayTracingEnvironment* , const matrix3x4a_t& , uint16, IVertColorBase* );
	void CGeoViewBuffer(class CGeoViewBuffer *); /* linkage=_ZN14CGeoViewBufferC4Ev */
	void WriteBox(class CGeoViewBuffer *, class Vector *, float, float, float); /* linkage=_ZN14CGeoViewBuffer8WriteBoxEP6Vectorfff */
	void WriteBBox(class CGeoViewBuffer *, const class Vector  &, const class Vector  &, float, float, float); /* linkage=_ZN14CGeoViewBuffer9WriteBBoxERK6VectorS2_fff */
	void WriteBBox(class CGeoViewBuffer *, const class AABB_t  &, float, float, float); /* linkage=_ZN14CGeoViewBuffer9WriteBBoxERK6AABB_tfff */
	void WriteOrientedBox(class CGeoViewBuffer *, const class Vector  &, const class Vector  &, const class CTransform  &, float, float, float); /* linkage=_ZN14CGeoViewBuffer16WriteOrientedBoxERK6VectorS2_RK10CTransformfff */
	void WriteOrientedBox(class CGeoViewBuffer *, const class Vector  &, const class Vector  &, const class VMatrix  &, float, float, float); /* linkage=_ZN14CGeoViewBuffer16WriteOrientedBoxERK6VectorS2_RK7VMatrixfff */
	void WriteOrientedBox(class CGeoViewBuffer *, const class AABB_t  &, const class matrix3x4_t  &, float, float, float); /* linkage=_ZN14CGeoViewBuffer16WriteOrientedBoxERK6AABB_tRK11matrix3x4_tfff */
	void WriteLine(class CGeoViewBuffer *, const class Vector  &, const class Vector  &, float, float, float); /* linkage=_ZN14CGeoViewBuffer9WriteLineERK6VectorS2_fff */
	void WriteLine(class CGeoViewBuffer *, const class Vector  &, const class Vector  &, const class VertexColor_t  &); /* linkage=_ZN14CGeoViewBuffer9WriteLineERK6VectorS2_RK13VertexColor_t */
	void WriteSphere(class CGeoViewBuffer *, const class Vector  &, float, float, float, float); /* linkage=_ZN14CGeoViewBuffer11WriteSphereERK6Vectorffff */
	void WriteCapsule(class CGeoViewBuffer *, const class Vector  &, const class Vector  &, float, float, float, float); /* linkage=_ZN14CGeoViewBuffer12WriteCapsuleERK6VectorS2_ffff */
	void WriteDisc(class CGeoViewBuffer *, const class Vector  &, const class Vector  &, const class Vector  &, float, float, float, float, int); /* linkage=_ZN14CGeoViewBuffer9WriteDiscERK6VectorS2_S2_ffffi */
	void WriteDiscWireframe(class CGeoViewBuffer *, const class Vector  &, const class Vector  &, const class Vector  &, float, float, float, float, int); /* linkage=_ZN14CGeoViewBuffer18WriteDiscWireframeERK6VectorS2_S2_ffffi */
	void WriteHemiDiscWireframe(class CGeoViewBuffer *, const class Vector  &, const class Vector  &, const class Vector  &, float, float, float, float, int); /* linkage=_ZN14CGeoViewBuffer22WriteHemiDiscWireframeERK6VectorS2_S2_ffffi */
	void WriteHemisphereWireframe(class CGeoViewBuffer *, const class Vector  &, const class Vector  &, const class Vector  &, float, float, float, float, int); /* linkage=_ZN14CGeoViewBuffer24WriteHemisphereWireframeERK6VectorS2_S2_ffffi */
	/* <5b4f156> meshutils/glview_buffer.cpp:990 */
	void WritePolygon(class CGeoViewBuffer *, const class Vector  *, int, float, float, float); /* linkage=_ZN14CGeoViewBuffer12WritePolygonEPK6Vectorifff */
	void WritePolygon(class CGeoViewBuffer *, const class Vector  *, int, const class VertexColor_t  &); /* linkage=_ZN14CGeoViewBuffer12WritePolygonEPK6VectoriRK13VertexColor_t */
	void WritePolygon(class CGeoViewBuffer *, const class Vector  *, const class Vector  *, int); /* linkage=_ZN14CGeoViewBuffer12WritePolygonEPK6VectorS2_i */
	/* <5b4e7cc> meshutils/glview_buffer.cpp:1014 */
	void WritePolygonIndexed(class CGeoViewBuffer *, const class Vector  *, const class Vector  *, const int  *, int); /* linkage=_ZN14CGeoViewBuffer19WritePolygonIndexedEPK6VectorS2_PKii */
	void WritePolygonWireframe(class CGeoViewBuffer *, const class Vector  *, int, float, float, float); /* linkage=_ZN14CGeoViewBuffer21WritePolygonWireframeEPK6Vectorifff */
	void WriteTriangleWireframe(class CGeoViewBuffer *, const class Vector  &, const class Vector  &, const class Vector  &, float, float, float); /* linkage=_ZN14CGeoViewBuffer22WriteTriangleWireframeERK6VectorS2_S2_fff */
	void WriteKDTree(class CGeoViewBuffer *, const class RayTracingEnvironment  *, uint16, float, float, float); /* linkage=_ZN14CGeoViewBuffer11WriteKDTreeEPK21RayTracingEnvironmenttfff */
	void WriteKDTree_HalfLambert(class CGeoViewBuffer *, const class RayTracingEnvironment  *, uint16, const class Vector  &, float, float, float); /* linkage=_ZN14CGeoViewBuffer23WriteKDTree_HalfLambertEPK21RayTracingEnvironmenttRK6Vectorfff */
	void WriteKDTreeMaterialColors(class CGeoViewBuffer *, const class RayTracingEnvironment  *, uint16, const class Vector  *, uint); /* linkage=_ZN14CGeoViewBuffer25WriteKDTreeMaterialColorsEPK21RayTracingEnvironmenttPK6Vectorj */
	void WriteCMeshWireframe(class CGeoViewBuffer *, const class CMesh  &, const class CTransform  &, float, float, float); /* linkage=_ZN14CGeoViewBuffer19WriteCMeshWireframeERK5CMeshRK10CTransformfff */
	void WriteSweptBox(class CGeoViewBuffer *, const class CTransform  &, const class Vector  &, const class Vector  &, const class Vector  &, float, float, float); /* linkage=_ZN14CGeoViewBuffer13WriteSweptBoxERK10CTransformRK6VectorS5_S5_fff */
	void WriteAmbientCube(class CGeoViewBuffer *, const class Vector  &, float, const class Vector  &, int, int); /* linkage=_ZN14CGeoViewBuffer16WriteAmbientCubeERK6VectorfRA6_S1_ii */
	void WriteCamera(class CGeoViewBuffer *, const class CTransform  &); /* linkage=_ZN14CGeoViewBuffer11WriteCameraERK10CTransform */
	void WriteText3D(class CGeoViewBuffer *, const class Vector  &, const char  *); /* linkage=_ZN14CGeoViewBuffer11WriteText3DERK6VectorPKc */
	/* <5b4e0e7> meshutils/glview_buffer.cpp:1214 */
	void WriteObjectName(class CGeoViewBuffer *, uint64, const char  *, const char  *); /* linkage=_ZN14CGeoViewBuffer15WriteObjectNameEyPKcS1_ */
	void WriteObjectName(class CGeoViewBuffer *, const char  *, const char  *); /* linkage=_ZN14CGeoViewBuffer15WriteObjectNameEPKcS1_ */
	void PushObjectNamespace(class CGeoViewBuffer *, const char  *, const char  *); /* linkage=_ZN14CGeoViewBuffer19PushObjectNamespaceEPKcS1_ */
	/* <5b4e1c7> meshutils/glview_buffer.cpp:1225 */
	void PushObjectNamespace(class CGeoViewBuffer *, uint64, const char  *, const char  *); /* linkage=_ZN14CGeoViewBuffer19PushObjectNamespaceEyPKcS1_ */
	void PopObjectNamespace(class CGeoViewBuffer *); /* linkage=_ZN14CGeoViewBuffer18PopObjectNamespaceEv */
	void WriteFrameEndMarker(class CGeoViewBuffer *, const char  *, const char  *, uint); /* linkage=_ZN14CGeoViewBuffer19WriteFrameEndMarkerEPKcS1_j */
	void WriteTextMsg(class CGeoViewBuffer *, const char  *, const char  *, uint); /* linkage=_ZN14CGeoViewBuffer12WriteTextMsgEPKcS1_j */
	void WriteVertex(class CGeoViewBuffer *, const class Vector  &, float, float, float); /* linkage=_ZN14CGeoViewBuffer11WriteVertexERK6Vectorfff */
	void WriteKDTreeAndChildren(class CGeoViewBuffer *, const class RayTracingEnvironment  *, uint16, class IVertColorBase *); /* linkage=_ZN14CGeoViewBuffer22WriteKDTreeAndChildrenEPK21RayTracingEnvironmenttP14IVertColorBase */
	void WriteKDTree(class CGeoViewBuffer *, const class RayTracingEnvironment  *, const class matrix3x4a_t  &, uint16, class IVertColorBase *); /* linkage=_ZN14CGeoViewBuffer11WriteKDTreeEPK21RayTracingEnvironmentRK12matrix3x4a_ttP14IVertColorBase */
	void ~CGeoViewBuffer(class CGeoViewBuffer *); /* linkage=_ZN14CGeoViewBufferD4Ev */
};

// <05ED1889> ../public/meshutils/glview_buffer.h:82
void CGeoViewBuffer::CGeoViewBuffer()
{
} /* size: 0 */

// <05F07D86> ../public/meshutils/glview_buffer.h:132
void CNamespaceScope::CNamespaceScope(CGeoViewBuffer* pGeoView, const char* pName)
{
} /* size: 0 */

// <05F07D55> ../public/meshutils/glview_buffer.h:132
inline void CNamespaceScope::CNamespaceScope(CGeoViewBuffer* pGeoView, const char* pName)
{
} /* size: 0 */

// <05F07D3E> ../public/meshutils/glview_buffer.h:139
void CNamespaceScope::~CNamespaceScope()
{
} /* size: 0 */

// <05F07D25> ../public/meshutils/glview_buffer.h:139
inline void CNamespaceScope::~CNamespaceScope()
{
} /* size: 0 */

// <05B2A842> ../public/meshutils/glview_buffer.h:179
void CGeoViewVertex::CGeoViewVertex()
{
} /* size: 0 */

// <05B2A825> ../public/meshutils/glview_buffer.h:179
inline void CGeoViewVertex::CGeoViewVertex()
{
} /* size: 0 */

// <05AFF61C> ../public/meshutils/glview_buffer.h:179
// member functions: 6
// member variables: 2
// class size: 16
class CGeoViewVertex {
	Vector m_vPos; /* 0 12 */
	Color m_color; /* 12 4 */
	/* ../public/meshutils/glview_buffer.h:185 */
	void Serialize(CGeoViewVertex* , CUtlBuffer& );
	/* ../public/meshutils/glview_buffer.h:186 */
	void Unserialize(CGeoViewVertex* , CUtlBuffer& );
	void CGeoViewVertex(CGeoViewVertex* );
	void Serialize(class CGeoViewVertex *, class CUtlBuffer &); /* linkage=_ZN14CGeoViewVertex9SerializeER10CUtlBuffer */
	void Unserialize(class CGeoViewVertex *, class CUtlBuffer &); /* linkage=_ZN14CGeoViewVertex11UnserializeER10CUtlBuffer */
	void CGeoViewVertex(class CGeoViewVertex *); /* linkage=_ZN14CGeoViewVertexC4Ev */
};

// <05B37D39> ../public/meshutils/glview_buffer.h:190
void CGeoViewLines::CGeoViewLines()
{
} /* size: 0 */

// <05B37D1C> ../public/meshutils/glview_buffer.h:190
inline void CGeoViewLines::CGeoViewLines()
{
} /* size: 0 */

// <05B37D05> ../public/meshutils/glview_buffer.h:190
void CGeoViewLines::~CGeoViewLines()
{
} /* size: 0 */

// <05B37CE8> ../public/meshutils/glview_buffer.h:190
inline void CGeoViewLines::~CGeoViewLines()
{
} /* size: 0 */

// <05B00DD2> ../public/meshutils/glview_buffer.h:190
// member functions: 14
// member variable: 1
// class size: 32
class CGeoViewLines {
	CUtlVector<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> > m_verts; /* 0 32 */
	/* ../public/meshutils/glview_buffer.h:194 */
	void AddVert(CGeoViewLines* , const Vector& , float, float, float);
	/* ../public/meshutils/glview_buffer.h:195 */
	void AddVert(CGeoViewLines* , const Vector& , const VertexColor_t& );
	/* ../public/meshutils/glview_buffer.h:196 */
	size_t ByteCount(CGeoViewLines* );
	/* ../public/meshutils/glview_buffer.h:198 */
	void Serialize(CGeoViewLines* , CUtlBuffer& );
	/* ../public/meshutils/glview_buffer.h:199 */
	void Unserialize(CGeoViewLines* , CUtlBuffer& );
	void ~CGeoViewLines(CGeoViewLines* );
	void CGeoViewLines(CGeoViewLines* );
	/* <5b4e2a7> meshutils/glview_buffer.cpp:650 */
	void AddVert(class CGeoViewLines *, const class Vector  &, float, float, float); /* linkage=_ZN13CGeoViewLines7AddVertERK6Vectorfff */
	/* <5b4ecf3> meshutils/glview_buffer.cpp:657 */
	void AddVert(class CGeoViewLines *, const class Vector  &, const class VertexColor_t  &); /* linkage=_ZN13CGeoViewLines7AddVertERK6VectorRK13VertexColor_t */
	/* <5b4d60c> meshutils/glview_buffer.cpp:664 */
	size_t ByteCount(class CGeoViewLines *); /* linkage=_ZN13CGeoViewLines9ByteCountEv */
	/* <5b4dd27> meshutils/glview_buffer.cpp:669 */
	void Serialize(class CGeoViewLines *, class CUtlBuffer &); /* linkage=_ZN13CGeoViewLines9SerializeER10CUtlBuffer */
	void Unserialize(class CGeoViewLines *, class CUtlBuffer &); /* linkage=_ZN13CGeoViewLines11UnserializeER10CUtlBuffer */
	void ~CGeoViewLines(class CGeoViewLines *); /* linkage=_ZN13CGeoViewLinesD4Ev */
	void CGeoViewLines(class CGeoViewLines *); /* linkage=_ZN13CGeoViewLinesC4Ev */
};

// <05B2E731> ../public/meshutils/glview_buffer.h:203
void CGeoViewCamera::CGeoViewCamera()
{
} /* size: 0 */

// <05B2E714> ../public/meshutils/glview_buffer.h:203
inline void CGeoViewCamera::CGeoViewCamera()
{
} /* size: 0 */

// <05B00EEA> ../public/meshutils/glview_buffer.h:203
// member functions: 8
// member variables: 3
// class size: 48
class CGeoViewCamera {
	CTransformUnaligned m_transform; /* 0 40 */
	float m_flHorizontalFOV; /* 40 4 */
	int m_nCameraId; /* 44 4 */
	/* ../public/meshutils/glview_buffer.h:210 */
	size_t ByteCount(CGeoViewCamera* );
	/* ../public/meshutils/glview_buffer.h:211 */
	void Serialize(CGeoViewCamera* , CUtlBuffer& );
	/* ../public/meshutils/glview_buffer.h:212 */
	void Unserialize(CGeoViewCamera* , CUtlBuffer& );
	void CGeoViewCamera(CGeoViewCamera* );
	/* <5b4d667> meshutils/glview_buffer.cpp:694 */
	size_t ByteCount(class CGeoViewCamera *); /* linkage=_ZN14CGeoViewCamera9ByteCountEv */
	void Serialize(class CGeoViewCamera *, class CUtlBuffer &); /* linkage=_ZN14CGeoViewCamera9SerializeER10CUtlBuffer */
	void Unserialize(class CGeoViewCamera *, class CUtlBuffer &); /* linkage=_ZN14CGeoViewCamera11UnserializeER10CUtlBuffer */
	void CGeoViewCamera(class CGeoViewCamera *); /* linkage=_ZN14CGeoViewCameraC4Ev */
};

// <05B34003> ../public/meshutils/glview_buffer.h:216
void CGeoViewPolygon::CGeoViewPolygon()
{
} /* size: 0 */

// <05B33FE6> ../public/meshutils/glview_buffer.h:216
inline void CGeoViewPolygon::CGeoViewPolygon()
{
} /* size: 0 */

// <05B33FCF> ../public/meshutils/glview_buffer.h:216
void CGeoViewPolygon::~CGeoViewPolygon()
{
} /* size: 0 */

// <05B33FB2> ../public/meshutils/glview_buffer.h:216
inline void CGeoViewPolygon::~CGeoViewPolygon()
{
} /* size: 0 */

// <05B00FAD> ../public/meshutils/glview_buffer.h:216
// member functions: 14
// member variable: 1
// class size: 32
class CGeoViewPolygon {
	CUtlVector<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> > m_verts; /* 0 32 */
	/* ../public/meshutils/glview_buffer.h:220 */
	void AddVert(CGeoViewPolygon* , const Vector& , float, float, float);
	/* ../public/meshutils/glview_buffer.h:221 */
	void AddVert(CGeoViewPolygon* , const Vector& , const VertexColor_t& );
	/* ../public/meshutils/glview_buffer.h:222 */
	size_t ByteCount(CGeoViewPolygon* );
	/* ../public/meshutils/glview_buffer.h:223 */
	void Serialize(CGeoViewPolygon* , CUtlBuffer& );
	/* ../public/meshutils/glview_buffer.h:224 */
	void Unserialize(CGeoViewPolygon* , CUtlBuffer& );
	void ~CGeoViewPolygon(CGeoViewPolygon* );
	void CGeoViewPolygon(CGeoViewPolygon* );
	void AddVert(class CGeoViewPolygon *, const class Vector  &, float, float, float); /* linkage=_ZN15CGeoViewPolygon7AddVertERK6Vectorfff */
	void AddVert(class CGeoViewPolygon *, const class Vector  &, const class VertexColor_t  &); /* linkage=_ZN15CGeoViewPolygon7AddVertERK6VectorRK13VertexColor_t */
	size_t ByteCount(class CGeoViewPolygon *); /* linkage=_ZN15CGeoViewPolygon9ByteCountEv */
	/* <5b4df07> meshutils/glview_buffer.cpp:742 */
	void Serialize(class CGeoViewPolygon *, class CUtlBuffer &); /* linkage=_ZN15CGeoViewPolygon9SerializeER10CUtlBuffer */
	void Unserialize(class CGeoViewPolygon *, class CUtlBuffer &); /* linkage=_ZN15CGeoViewPolygon11UnserializeER10CUtlBuffer */
	void ~CGeoViewPolygon(class CGeoViewPolygon *); /* linkage=_ZN15CGeoViewPolygonD4Ev */
	void CGeoViewPolygon(class CGeoViewPolygon *); /* linkage=_ZN15CGeoViewPolygonC4Ev */
};

// <05B010C5> ../public/meshutils/glview_buffer.h:227
// member functions: 10
// member variables: 2
// class size: 24
class CGeoViewText3D {
	Vector m_vPos; /* 0 12 */
	const char * m_pText; /* 16 8 */
	/* ../public/meshutils/glview_buffer.h:233 */
	void CGeoViewText3D(CGeoViewText3D* );
	/* ../public/meshutils/glview_buffer.h:234 */
	void CGeoViewText3D(CGeoViewText3D* , const Vector& , const char* );
	/* ../public/meshutils/glview_buffer.h:235 */
	size_t ByteCount(CGeoViewText3D* );
	/* ../public/meshutils/glview_buffer.h:236 */
	void Serialize(CGeoViewText3D* , CUtlBuffer& );
	/* ../public/meshutils/glview_buffer.h:237 */
	void Unserialize(CGeoViewText3D* , CUtlBuffer& );
	void CGeoViewText3D(class CGeoViewText3D *); /* linkage=_ZN14CGeoViewText3DC4Ev */
	void CGeoViewText3D(class CGeoViewText3D *, const class Vector  &, const char  *); /* linkage=_ZN14CGeoViewText3DC4ERK6VectorPKc */
	/* <5b4d691> meshutils/glview_buffer.cpp:772 */
	size_t ByteCount(class CGeoViewText3D *); /* linkage=_ZN14CGeoViewText3D9ByteCountEv */
	void Serialize(class CGeoViewText3D *, class CUtlBuffer &); /* linkage=_ZN14CGeoViewText3D9SerializeER10CUtlBuffer */
	void Unserialize(class CGeoViewText3D *, class CUtlBuffer &); /* linkage=_ZN14CGeoViewText3D11UnserializeER10CUtlBuffer */
};

// <05B011A2> ../public/meshutils/glview_buffer.h:241
// member functions: 10
// member variables: 3
// class size: 24
class CGeomViewObjectName {
	uint64 m_nId; /* 0 8 */
	const char * m_pName; /* 8 8 */
	const char * m_pDescription; /* 16 8 */
	/* ../public/meshutils/glview_buffer.h:247 */
	void CGeomViewObjectName(CGeomViewObjectName* );
	/* ../public/meshutils/glview_buffer.h:248 */
	void CGeomViewObjectName(CGeomViewObjectName* , uint64, const char* , const char* );
	/* ../public/meshutils/glview_buffer.h:249 */
	size_t ByteCount(const CGeomViewObjectName* );
	/* ../public/meshutils/glview_buffer.h:250 */
	void Serialize(CGeomViewObjectName* , uint, CUtlBuffer& );
	/* ../public/meshutils/glview_buffer.h:251 */
	void Unserialize(CGeomViewObjectName* , CUtlBuffer& );
	void CGeomViewObjectName(class CGeomViewObjectName *); /* linkage=_ZN19CGeomViewObjectNameC4Ev */
	void CGeomViewObjectName(class CGeomViewObjectName *, uint64, const char  *, const char  *); /* linkage=_ZN19CGeomViewObjectNameC4EyPKcS1_ */
	/* <5b4d83b> meshutils/glview_buffer.cpp:1330 */
	size_t ByteCount(const class CGeomViewObjectName  *); /* linkage=_ZNK19CGeomViewObjectName9ByteCountEv */
	void Serialize(class CGeomViewObjectName *, uint, class CUtlBuffer &); /* linkage=_ZN19CGeomViewObjectName9SerializeEjR10CUtlBuffer */
	void Unserialize(class CGeomViewObjectName *, class CUtlBuffer &); /* linkage=_ZN19CGeomViewObjectName11UnserializeER10CUtlBuffer */
};

// <05B012A8> ../public/meshutils/glview_buffer.h:255
// member functions: 10
// member variables: 3
// class size: 24
class CGeomViewFrameEndMarker {
	uint32 m_nFlags; /* 0 4 */
	const char * m_pTitle; /* 8 8 */
	const char * m_pContent; /* 16 8 */
	/* ../public/meshutils/glview_buffer.h:267 */
	void CGeomViewFrameEndMarker(CGeomViewFrameEndMarker* );
	/* ../public/meshutils/glview_buffer.h:268 */
	void CGeomViewFrameEndMarker(CGeomViewFrameEndMarker* , const char* , const char* , uint32);
	/* ../public/meshutils/glview_buffer.h:269 */
	size_t ByteCount(const CGeomViewFrameEndMarker* );
	/* ../public/meshutils/glview_buffer.h:270 */
	void Serialize(CGeomViewFrameEndMarker* , CUtlBuffer& );
	/* ../public/meshutils/glview_buffer.h:271 */
	void Unserialize(CGeomViewFrameEndMarker* , CUtlBuffer& );
	void CGeomViewFrameEndMarker(class CGeomViewFrameEndMarker *); /* linkage=_ZN23CGeomViewFrameEndMarkerC4Ev */
	void CGeomViewFrameEndMarker(class CGeomViewFrameEndMarker *, const char  *, const char  *, uint32); /* linkage=_ZN23CGeomViewFrameEndMarkerC4EPKcS1_j */
	/* <5b4d6f3> meshutils/glview_buffer.cpp:1262 */
	size_t ByteCount(const class CGeomViewFrameEndMarker  *); /* linkage=_ZNK23CGeomViewFrameEndMarker9ByteCountEv */
	void Serialize(class CGeomViewFrameEndMarker *, class CUtlBuffer &); /* linkage=_ZN23CGeomViewFrameEndMarker9SerializeER10CUtlBuffer */
	void Unserialize(class CGeomViewFrameEndMarker *, class CUtlBuffer &); /* linkage=_ZN23CGeomViewFrameEndMarker11UnserializeER10CUtlBuffer */
};

// <05B013B1> ../public/meshutils/glview_buffer.h:274
// member functions: 10
// member variables: 3
// class size: 24
class CGeomViewTextMsg {
	uint32 m_nFlags; /* 0 4 */
	const char * m_pTitle; /* 8 8 */
	const char * m_pContent; /* 16 8 */
	/* ../public/meshutils/glview_buffer.h:286 */
	void CGeomViewTextMsg(CGeomViewTextMsg* );
	/* ../public/meshutils/glview_buffer.h:287 */
	void CGeomViewTextMsg(CGeomViewTextMsg* , const char* , const char* , uint32);
	/* ../public/meshutils/glview_buffer.h:288 */
	size_t ByteCount(const CGeomViewTextMsg* );
	/* ../public/meshutils/glview_buffer.h:289 */
	void Serialize(CGeomViewTextMsg* , CUtlBuffer& );
	/* ../public/meshutils/glview_buffer.h:290 */
	void Unserialize(CGeomViewTextMsg* , CUtlBuffer& );
	void CGeomViewTextMsg(class CGeomViewTextMsg *); /* linkage=_ZN16CGeomViewTextMsgC4Ev */
	void CGeomViewTextMsg(class CGeomViewTextMsg *, const char  *, const char  *, uint32); /* linkage=_ZN16CGeomViewTextMsgC4EPKcS1_j */
	/* <5b4d797> meshutils/glview_buffer.cpp:1298 */
	size_t ByteCount(const class CGeomViewTextMsg  *); /* linkage=_ZNK16CGeomViewTextMsg9ByteCountEv */
	void Serialize(class CGeomViewTextMsg *, class CUtlBuffer &); /* linkage=_ZN16CGeomViewTextMsg9SerializeER10CUtlBuffer */
	void Unserialize(class CGeomViewTextMsg *, class CUtlBuffer &); /* linkage=_ZN16CGeomViewTextMsg11UnserializeER10CUtlBuffer */
};

// <02DE4A12> ../public/meshutils/glview_buffer.h:299
// member variables: 2
// struct size: 288
struct LoggingMetaGeoViewHeader_t {
	char m_Filename[256]; /* 0 256 */
	char m_Description[32]; /* 256 32 */
};

// <02DE4A44> ../public/meshutils/glview_buffer.h:311
// member functions: 6
// member variable: 1
// class size: 40
class CLoggingMetaGeoView : public LoggingMetaData_t {
public:
	/* struct LoggingMetaData_t <ancestor>; */ /* 0 40 */
	/* ../public/meshutils/glview_buffer.h:315 */
	void CLoggingMetaGeoView(CLoggingMetaGeoView* , const char* , const CGeoViewBuffer& , LoggingVerbosity_t);
	/* ../public/meshutils/glview_buffer.h:340 */
	void ~CLoggingMetaGeoView(CLoggingMetaGeoView* );
	/* ../public/meshutils/glview_buffer.h:346 */
	const CLoggingMetaGeoView* operator const CLoggingMetaGeoView*(const CLoggingMetaGeoView* );
	void CLoggingMetaGeoView(class CLoggingMetaGeoView *, const char  *, const class CGeoViewBuffer  &, enum LoggingVerbosity_t); /* linkage=_ZN19CLoggingMetaGeoViewC4EPKcRK14CGeoViewBuffer18LoggingVerbosity_t */
	void ~CLoggingMetaGeoView(class CLoggingMetaGeoView *); /* linkage=_ZN19CLoggingMetaGeoViewD4Ev */
	const class CLoggingMetaGeoView  * operator const CLoggingMetaGeoView*(const class CLoggingMetaGeoView  *); /* linkage=_ZNK19CLoggingMetaGeoViewcvPKS_Ev */
};

// <05DFE130> ../public/meshutils/glview_buffer.h:315
// variables: 3
void CLoggingMetaGeoView::CLoggingMetaGeoView(const char* pShortDescription, const CGeoViewBuffer& geoViewData, LoggingVerbosity_t verbosity)
{
	{
		LoggingMetaGeoViewHeader_t* pHeader; // 322
		char nameBuf; // 323
		CBufferString wrapBufPtr; // 326
	}
} /* size: 0 */

// <05DFE0AE> ../public/meshutils/glview_buffer.h:315
// variables: 4
inline void CLoggingMetaGeoView::CLoggingMetaGeoView(const char* pShortDescription, const CGeoViewBuffer& geoViewData, LoggingVerbosity_t verbosity)
{
	{
		int s_nLocalMsTime; // 318
		LoggingMetaGeoViewHeader_t* pHeader; // 322
		char nameBuf; // 323
		CBufferString wrapBufPtr; // 326
	}
} /* size: 0 */

// <02F19689> ../public/meshutils/glview_buffer.h:315
// variables: 6
// function calls: 10
void CLoggingMetaGeoView::CLoggingMetaGeoView(const char* pShortDescription, const CGeoViewBuffer& geoViewData, LoggingVerbosity_t verbosity)
{
	{
		LoggingMetaGeoViewHeader_t* pHeader; // 322
		char nameBuf; // 323
		CBufferString wrapBufPtr; // 326
	}
	LoggingMetaData_t::LoggingMetaData_t(
				uint64 TypeID,
				uint8* pData,
				size_t nDataSize,
				LoggingVerbosity_t verbosity);  // 316
	{
		LoggingMetaGeoViewHeader_t* pHeader; // 322
		char nameBuf; // 323
		CBufferString wrapBufPtr; // 326
		CBufferString::SetFixedPtr(
				char* pBuffer,
				int nBufferChars,
				int nStringChars,
				bool bFreeBuffer);  // 327
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 326
		CFileSystemPassThru::RelativePathToFullPath(
					const char* pFileName,
					const char* pPathID,
					CBufferString* pLocalPath,
					PathTypeFilter_t pathFilter);  // 163
		CFileSystemPassThru::RelativePathToFullPath(
					const char* pFileName,
					const char* pPathID,
					CBufferString* pLocalPath,
					PathTypeFilter_t pathFilter);  // 163
		CFileSystemPassThru::RelativePathToFullPath(
					const char* pFileName,
					const char* pPathID,
					CBufferString* pLocalPath,
					PathTypeFilter_t pathFilter);  // 163
		CFileSystemPassThru::RelativePathToFullPath(
					const char* pFileName,
					const char* pPathID,
					CBufferString* pLocalPath,
					PathTypeFilter_t pathFilter);  // 328
		CBufferString::~CBufferString(); // 338
		V_strncpy<long unsigned int>(char* pDest,
						const char* pSrc,
						long unsigned int maxLenInChars);  // 336
	}
} /* size: 622, inline expansions: 1 (41 bytes) */

// <05DFE097> ../public/meshutils/glview_buffer.h:340
void CLoggingMetaGeoView::~CLoggingMetaGeoView()
{
} /* size: 0 */

// <05DFE07E> ../public/meshutils/glview_buffer.h:340
inline void CLoggingMetaGeoView::~CLoggingMetaGeoView()
{
} /* size: 0 */

// <05DFE065> ../public/meshutils/glview_buffer.h:346
inline void operator const CLoggingMetaGeoView::CLoggingMetaGeoView*()
{
} /* size: 0 */

