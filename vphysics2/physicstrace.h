
//
// vphysics2/physicstrace.h
//
//	referenced by: libengine2.so
//
//	functions: 31
//	classes: 10
//

// <00DE3EF5> vphysics2/physicstrace.h:21
void ITraceObject::ITraceObject()
{
} /* size: 0 */

// <00DE3ED8> vphysics2/physicstrace.h:21
inline void ITraceObject::ITraceObject()
{
} /* size: 0 */

// <0098DB35> vphysics2/physicstrace.h:21
// member functions: 8
// member variable: 1
// vtable entry: 1
// class size: 8
class ITraceObject {
	void ITraceObject(ITraceObject* , const ITraceObject& );
	void ITraceObject(ITraceObject* );
	int ()(void) * * _vptr.ITraceObject; /* 0 8 */
	/* vphysics2/physicstrace.h:24 */
	virtual void ~ITraceObject(ITraceObject* );
	/* vphysics2/physicstrace.h:27 */
	virtual Vector SupportMap(const ITraceObject* , const Vector& );
	void ITraceObject(class ITraceObject *, const class ITraceObject  &); /* linkage=_ZN12ITraceObjectC4ERKS_ */
	void ITraceObject(class ITraceObject *); /* linkage=_ZN12ITraceObjectC4Ev */
	virtual void ~ITraceObject(class ITraceObject *); /* linkage=_ZN12ITraceObjectD4Ev */
	virtual class Vector SupportMap(const class ITraceObject  *, const class Vector  &); /* linkage=_ZNK12ITraceObject10SupportMapERK6Vector */
};

// <00DE3F3C> vphysics2/physicstrace.h:24
void ITraceObject::~ITraceObject()
{
} /* size: 0 */

// <00DE3F0C> vphysics2/physicstrace.h:24
inline void ITraceObject::~ITraceObject()
{
} /* size: 0 */

// <00DCE759> vphysics2/physicstrace.h:34
// function call: 1
void CTraceAABB::~CTraceAABB()
{
	ITraceObject::~ITraceObject(); // 34
} /* size: 0, inline expansions: 1 (0 bytes) */

// <00DCE6A5> vphysics2/physicstrace.h:34
// function calls: 2
void CTraceAABB::~CTraceAABB()
{
	ITraceObject::~ITraceObject(); // 34
	CTraceAABB::~CTraceAABB(); // 34
} /* size: 0, inline expansions: 2 (0 bytes) */

// <00DCE688> vphysics2/physicstrace.h:34
inline void CTraceAABB::~CTraceAABB()
{
} /* size: 0 */

// <00DCD787> vphysics2/physicstrace.h:34
// member functions: 10
// member variables: 4
// vtable entry: 1
// class size: 32
class CTraceAABB : public ITraceObject {
public:
	/* class ITraceObject <ancestor>; */ /* 0 8 */
	void CTraceAABB(CTraceAABB* , CTraceAABB& );
	void CTraceAABB(CTraceAABB* , const CTraceAABB& );
	/* vphysics2/physicstrace.cpp:751 */
	void CTraceAABB(CTraceAABB* , const Vector& , const Vector& );
	/* vphysics2/physicstrace.cpp:763 */
	virtual Vector SupportMap(const CTraceAABB* , const Vector& );
private:
	float m_x[2]; /* 8 8 */
	float m_y[2]; /* 16 8 */
	float m_z[2]; /* 24 8 */
	virtual void ~CTraceAABB(CTraceAABB* );
	void CTraceAABB(class CTraceAABB *, class CTraceAABB &); /* linkage=_ZN10CTraceAABBC4EOS_ */
	void CTraceAABB(class CTraceAABB *, const class CTraceAABB  &); /* linkage=_ZN10CTraceAABBC4ERKS_ */
	void CTraceAABB(class CTraceAABB *, const class Vector  &, const class Vector  &); /* linkage=_ZN10CTraceAABBC4ERK6VectorS2_ */
	virtual class Vector SupportMap(const class CTraceAABB  *, const class Vector  &); /* linkage=_ZNK10CTraceAABB10SupportMapERK6Vector */
	virtual void ~CTraceAABB(class CTraceAABB *); /* linkage=_ZN10CTraceAABBD4Ev */
};

// <00DCE887> vphysics2/physicstrace.h:51
// function call: 1
void CTraceHull::~CTraceHull()
{
	ITraceObject::~ITraceObject(); // 51
} /* size: 0, inline expansions: 1 (0 bytes) */

// <00DCE7D3> vphysics2/physicstrace.h:51
// function calls: 2
void CTraceHull::~CTraceHull()
{
	ITraceObject::~ITraceObject(); // 51
	CTraceHull::~CTraceHull(); // 51
} /* size: 0, inline expansions: 2 (0 bytes) */

// <00DCE7B6> vphysics2/physicstrace.h:51
inline void CTraceHull::~CTraceHull()
{
} /* size: 0 */

// <00DCD659> vphysics2/physicstrace.h:51
// member functions: 10
// member variables: 4
// vtable entry: 1
// class size: 64
class CTraceHull : public ITraceObject {
public:
	/* class ITraceObject <ancestor>; */ /* 0 8 */
	void CTraceHull(CTraceHull* , CTraceHull& );
	void CTraceHull(CTraceHull* , const CTraceHull& );
	/* vphysics2/physicstrace.cpp:775 */
	void CTraceHull(CTraceHull* , const CTransform& , float, const RnHull_t* );
	/* vphysics2/physicstrace.cpp:785 */
	virtual Vector SupportMap(const CTraceHull* , const Vector& );
private:
	CTransform m_Transform __attribute__((__aligned__(16))); /* 16 32 */
	float m_flScale; /* 48 4 */
	const class RnHull_t * m_pHull; /* 56 8 */
	virtual void ~CTraceHull(CTraceHull* );
	void CTraceHull(class CTraceHull *, class CTraceHull &); /* linkage=_ZN10CTraceHullC4EOS_ */
	void CTraceHull(class CTraceHull *, const class CTraceHull  &); /* linkage=_ZN10CTraceHullC4ERKS_ */
	void CTraceHull(class CTraceHull *, const class CTransform  &, float, const class RnHull_t  *); /* linkage=_ZN10CTraceHullC4ERK10CTransformfPK8RnHull_t */
	virtual class Vector SupportMap(const class CTraceHull  *, const class Vector  &); /* linkage=_ZNK10CTraceHull10SupportMapERK6Vector */
	virtual void ~CTraceHull(class CTraceHull *); /* linkage=_ZN10CTraceHullD4Ev */
} __attribute__((__aligned__(16)));

// <00DCE9B5> vphysics2/physicstrace.h:70
// function call: 1
void CTraceCloud::~CTraceCloud()
{
	ITraceObject::~ITraceObject(); // 70
} /* size: 0, inline expansions: 1 (0 bytes) */

// <00DCE901> vphysics2/physicstrace.h:70
// function calls: 2
void CTraceCloud::~CTraceCloud()
{
	ITraceObject::~ITraceObject(); // 70
	CTraceCloud::~CTraceCloud(); // 70
} /* size: 0, inline expansions: 2 (0 bytes) */

// <00DCE8E4> vphysics2/physicstrace.h:70
inline void CTraceCloud::~CTraceCloud()
{
} /* size: 0 */

// <00DCD563> vphysics2/physicstrace.h:70
// member functions: 6
// member variables: 5
// vtable entry: 1
// class size: 64
class CTraceCloud : public ITraceObject {
public:
	/* class ITraceObject <ancestor>; */ /* 0 8 */
	/* vphysics2/physicstrace.h:73 */
	void CTraceCloud(CTraceCloud* , const CTransform& , int, const Vector* , float);
	/* vphysics2/physicstrace.cpp:811 */
	virtual Vector SupportMap(const CTraceCloud* , const Vector& );
private:
	CTransform m_Transform __attribute__((__aligned__(16))); /* 16 32 */
	int m_nVertexCount; /* 48 4 */
	float m_flScale; /* 52 4 */
	const class Vector * m_pVertexBase; /* 56 8 */
	virtual void ~CTraceCloud(CTraceCloud* );
	void CTraceCloud(class CTraceCloud *, const class CTransform  &, int, const class Vector  *, float); /* linkage=_ZN11CTraceCloudC4ERK10CTransformiPK6Vectorf */
	virtual class Vector SupportMap(const class CTraceCloud  *, const class Vector  &); /* linkage=_ZNK11CTraceCloud10SupportMapERK6Vector */
	virtual void ~CTraceCloud(class CTraceCloud *); /* linkage=_ZN11CTraceCloudD4Ev */
} __attribute__((__aligned__(16)));

// <00DCEAE2> vphysics2/physicstrace.h:90
// function call: 1
void CTraceWorldspaceCloud::~CTraceWorldspaceCloud()
{
	ITraceObject::~ITraceObject(); // 90
} /* size: 5, inline expansions: 1 (0 bytes) */

// <00DCEA2F> vphysics2/physicstrace.h:90
// function calls: 2
void CTraceWorldspaceCloud::~CTraceWorldspaceCloud()
{
	ITraceObject::~ITraceObject(); // 90
	CTraceWorldspaceCloud::~CTraceWorldspaceCloud(); // 90
} /* size: 14, inline expansions: 2 (0 bytes) */

// <00DCEA12> vphysics2/physicstrace.h:90
inline void CTraceWorldspaceCloud::~CTraceWorldspaceCloud()
{
} /* size: 0 */

// <00A07890> vphysics2/physicstrace.h:90
void CTraceWorldspaceCloud::~CTraceWorldspaceCloud()
{
} /* size: 0 */

// <00DCD49B> vphysics2/physicstrace.h:90
// member functions: 6
// member variables: 3
// vtable entry: 1
// class size: 24
class CTraceWorldspaceCloud : public ITraceObject {
public:
	/* class ITraceObject <ancestor>; */ /* 0 8 */
	/* vphysics2/physicstrace.h:93 */
	void CTraceWorldspaceCloud(CTraceWorldspaceCloud* , int, const Vector* );
	/* vphysics2/physicstrace.cpp:838 */
	virtual Vector SupportMap(const CTraceWorldspaceCloud* , const Vector& );
private:
	int m_nVertexCount; /* 8 4 */
	const class Vector * m_pVertexBase; /* 16 8 */
	virtual void ~CTraceWorldspaceCloud(CTraceWorldspaceCloud* );
	virtual class Vector SupportMap(const class CTraceWorldspaceCloud  *, const class Vector  &); /* linkage=_ZNK21CTraceWorldspaceCloud10SupportMapERK6Vector */
	virtual void ~CTraceWorldspaceCloud(class CTraceWorldspaceCloud *); /* linkage=_ZN21CTraceWorldspaceCloudD4Ev */
	void CTraceWorldspaceCloud(class CTraceWorldspaceCloud *, int, const class Vector  *); /* linkage=_ZN21CTraceWorldspaceCloudC4EiPK6Vector */
};

// <00A178D5> vphysics2/physicstrace.h:93
void CTraceWorldspaceCloud::CTraceWorldspaceCloud(int nVertexCount, const Vector* pVertexBase)
{
} /* size: 0 */

// <00A178A4> vphysics2/physicstrace.h:93
inline void CTraceWorldspaceCloud::CTraceWorldspaceCloud(int nVertexCount, const Vector* pVertexBase)
{
} /* size: 0 */

// <00DCEC10> vphysics2/physicstrace.h:108
// function call: 1
void CTraceTriangle::~CTraceTriangle()
{
	ITraceObject::~ITraceObject(); // 108
} /* size: 0, inline expansions: 1 (0 bytes) */

// <00DCEB5C> vphysics2/physicstrace.h:108
// function calls: 2
void CTraceTriangle::~CTraceTriangle()
{
	ITraceObject::~ITraceObject(); // 108
	CTraceTriangle::~CTraceTriangle(); // 108
} /* size: 0, inline expansions: 2 (0 bytes) */

// <00DCEB3F> vphysics2/physicstrace.h:108
inline void CTraceTriangle::~CTraceTriangle()
{
} /* size: 0 */

// <00DCD354> vphysics2/physicstrace.h:108
// member functions: 12
// member variables: 3
// vtable entry: 1
// class size: 112
class CTraceTriangle : public ITraceObject {
public:
	/* class ITraceObject <ancestor>; */ /* 0 8 */
	void CTraceTriangle(CTraceTriangle* , CTraceTriangle& );
	void CTraceTriangle(CTraceTriangle* , const CTraceTriangle& );
	/* vphysics2/physicstrace.cpp:862 */
	void CTraceTriangle(CTraceTriangle* , const Vector& , const Vector& , const Vector& );
	/* vphysics2/physicstrace.cpp:870 */
	void CTraceTriangle(CTraceTriangle* , const fltx4& , const fltx4& , const fltx4& );
	/* vphysics2/physicstrace.cpp:879 */
	virtual Vector SupportMap(const CTraceTriangle* , const Vector& );
private:
	FourVectors m_triangleVerts; /* 16 48 */
	Vector m_vVertices[3]; /* 64 36 */
	virtual void ~CTraceTriangle(CTraceTriangle* );
	void CTraceTriangle(class CTraceTriangle *, class CTraceTriangle &); /* linkage=_ZN14CTraceTriangleC4EOS_ */
	void CTraceTriangle(class CTraceTriangle *, const class CTraceTriangle  &); /* linkage=_ZN14CTraceTriangleC4ERKS_ */
	void CTraceTriangle(class CTraceTriangle *, const class Vector  &, const class Vector  &, const class Vector  &); /* linkage=_ZN14CTraceTriangleC4ERK6VectorS2_S2_ */
	void CTraceTriangle(class CTraceTriangle *, const fltx4  &, const fltx4  &, const fltx4  &); /* linkage=_ZN14CTraceTriangleC4ERKDv4_fS2_S2_ */
	virtual class Vector SupportMap(const class CTraceTriangle  *, const class Vector  &); /* linkage=_ZNK14CTraceTriangle10SupportMapERK6Vector */
	virtual void ~CTraceTriangle(class CTraceTriangle *); /* linkage=_ZN14CTraceTriangleD4Ev */
};

// <0098D4AD> vphysics2/physicstrace.h:125
// member functions: 16
// member variables: 8
// class size: 64
class CTraceRay {
	/* vphysics2/physicstrace.h:128 */
	void CTraceRay(CTraceRay* );
	/* vphysics2/physicstrace.h:131 */
	void CTraceRay(CTraceRay* , const Vector& , const Vector& );
	/* vphysics2/physicstrace.h:132 */
	void Init(CTraceRay* , const Vector& , const Vector& );
	/* vphysics2/physicstrace.h:134 */
	Vector SupportMap(const CTraceRay* , const Vector& );
	/* vphysics2/physicstrace.h:143 */
	int GetSupport(const CTraceRay* , const Vector& );
	/* vphysics2/physicstrace.h:147 */
	Vector GetVertex(const CTraceRay* , int);
	/* vphysics2/physicstrace.h:152 */
	void Reset(CTraceRay* , float);
	/* vphysics2/physicstrace.h:153 */
	void ShiftByEpsilon(CTraceRay* , float);
	Vector m_start; /* 0 12 */
	Vector m_end; /* 12 12 */
	Vector m_delta; /* 24 12 */
	Vector m_dir; /* 36 12 */
	float m_length; /* 48 4 */
	float m_baseLength; /* 52 4 */
	float m_ooBaseLength; /* 56 4 */
	float m_flMaxFraction; /* 60 4 */
	void CTraceRay(class CTraceRay *); /* linkage=_ZN9CTraceRayC4Ev */
	void CTraceRay(class CTraceRay *, const class Vector  &, const class Vector  &); /* linkage=_ZN9CTraceRayC4ERK6VectorS2_ */
	void Init(class CTraceRay *, const class Vector  &, const class Vector  &); /* linkage=_ZN9CTraceRay4InitERK6VectorS2_ */
	class Vector SupportMap(const class CTraceRay  *, const class Vector  &); /* linkage=_ZNK9CTraceRay10SupportMapERK6Vector */
	int GetSupport(const class CTraceRay  *, const class Vector  &); /* linkage=_ZNK9CTraceRay10GetSupportERK6Vector */
	class Vector GetVertex(const class CTraceRay  *, int); /* linkage=_ZNK9CTraceRay9GetVertexEi */
	void Reset(class CTraceRay *, float); /* linkage=_ZN9CTraceRay5ResetEf */
	/* <de5474> vphysics2/physicstrace.cpp:951 */
	void ShiftByEpsilon(class CTraceRay *, float); /* linkage=_ZN9CTraceRay14ShiftByEpsilonEf */
};

// <009DC64B> vphysics2/physicstrace.h:131
void CTraceRay::CTraceRay(const Vector& vStart, const Vector& vDelta)
{
} /* size: 0 */

// <00DE3EB3> vphysics2/physicstrace.h:134
inline void CTraceRay::SupportMap(const Vector& vDir)
{
} /* size: 0 */

// <00DCD96D> vphysics2/physicstrace.h:167
// member functions: 3
// member variables: 3
// vtable entry: 1
// class size: 32
class CTraceCapsule : public ITraceObject {
public:
	/* class ITraceObject <ancestor>; */ /* 0 8 */
	/* vphysics2/physicstrace.h:170 */
	void CTraceCapsule(CTraceCapsule* , const Vector& , const Vector& );
	/* vphysics2/physicstrace.h:176 */
	virtual Vector SupportMap(const CTraceCapsule* , const Vector& );
	Vector m_v0; /* 8 12 */
	Vector m_v1; /* 20 12 */
	virtual void ~CTraceCapsule(CTraceCapsule* );
};

// <00DE3E76> vphysics2/physicstrace.h:176
// variables: 2
void CTraceCapsule::SupportMap(const Vector& dir)
{
	float flDot0; // 178
	float flDot1; // 179
} /* size: 0, variables: 2 */

// <00DCD8BF> vphysics2/physicstrace.h:189
// member functions: 3
// member variables: 2
// vtable entry: 1
// class size: 24
class CTracePoint : public ITraceObject {
public:
	/* class ITraceObject <ancestor>; */ /* 0 8 */
private:
	Vector m_vPoint; /* 8 12 */
	/* vphysics2/physicstrace.h:193 */
	void CTracePoint(CTracePoint* , const Vector& );
	/* vphysics2/physicstrace.h:196 */
	virtual Vector SupportMap(const CTracePoint* , const Vector& );
	virtual void ~CTracePoint(CTracePoint* );
};

// <00DE3E51> vphysics2/physicstrace.h:196
void CTracePoint::SupportMap(const Vector& dir)
{
} /* size: 0 */

// <0098D66C> vphysics2/physicstrace.h:206
// member functions: 44
// member variables: 12
// class size: 88
class CTraceSolver {
	/* vphysics2/physicstrace.h:209 */
	void CTraceSolver(CTraceSolver* , ITraceObject* , CTraceRay* , ITraceObject* , const Vector& , float);
	/* vphysics2/physicstrace.h:210 */
	void SetEpsilon(CTraceSolver* , float);
	/* vphysics2/physicstrace.h:215 */
	Vector Support(const CTraceSolver* , const Vector& );
	/* vphysics2/physicstrace.h:224 */
	bool SolveSweep(CTraceSolver* );
	/* vphysics2/physicstrace.h:226 */
	bool SolveSweep(CTraceSolver* , CShapeCastResult& );
	/* vphysics2/physicstrace.h:228 */
	float GetHitFraction(const CTraceSolver* );
	/* vphysics2/physicstrace.h:232 */
	bool IsStartSolid(const CTraceSolver* );
	/* vphysics2/physicstrace.h:236 */
	Vector GetHitNormal(const CTraceSolver* );
	/* vphysics2/physicstrace.h:241 */
	void SetHitNormal(CTraceSolver* , const Vector& );
protected:
	/* vphysics2/physicstrace.h:246 */
	bool SweepSingleConvex(CTraceSolver* );
	/* vphysics2/physicstrace.h:247 */
	bool SolveMeshIntersection(CTraceSolver* , simplex_t& , float* );
	/* vphysics2/physicstrace.h:248 */
	float SolveMeshIntersection2D(CTraceSolver* , simplex_t& );
	/* vphysics2/physicstrace.h:250 */
	bool SolveMinDistanceSimplex(CTraceSolver* , simplex_t& , Vector, float, const Vector& );
	/* vphysics2/physicstrace.h:252 */
	void CalculateSeparatingPlane(CTraceSolver* , const simplex_t& );
	/* vphysics2/physicstrace.h:253 */
	void ComputeSeparation(CTraceSolver* , const simplex_t& , float, bool);
	/* vphysics2/physicstrace.h:255 */
	float BackupRequiredDistanceFromFace(CTraceSolver* , const simplex_t& , float, float, bool);
	/* vphysics2/physicstrace.h:256 */
	float BackupRequiredDistanceFromEdge(CTraceSolver* , const simplex_t& , float, float, bool);
	/* vphysics2/physicstrace.h:257 */
	float BackupRequiredDistanceFromVertex(CTraceSolver* , const Vector& , float, float);
	/* vphysics2/physicstrace.h:258 */
	float IterateFaceBackup(CTraceSolver* , const Vector& , const Vector& , float, float, const Vector& , float);
	/* vphysics2/physicstrace.h:259 */
	float IterateEdgeBackup(CTraceSolver* , const Vector& , float, float, const Vector& , float);
	/* vphysics2/physicstrace.h:260 */
	float TestEdgeAndIterate(CTraceSolver* , const Vector& , const Vector& , const Vector& , float, float, const Vector& , const Vector& , const Vector& , float);
	Vector m_vNextSearchDirection; /* 0 12 */
	Vector m_vHitNormal; /* 12 12 */
	Vector m_vInitialPlaneNormal; /* 24 12 */
	ITraceObject * m_pSweepObject; /* 40 8 */
	ITraceObject * m_pObstacle; /* 48 8 */
	CTraceRay * m_ray; /* 56 8 */
	float m_flTraceLength; /* 64 4 */
	float m_flHitFraction; /* 68 4 */
	float m_flSeparationRadius; /* 72 4 */
	float m_flEpsilon; /* 76 4 */
	bool m_bStartInSolid; /* 80 1 */
	bool m_bRecurse; /* 81 1 */
private:
	/* vphysics2/physicstrace.h:276 */
	void CTraceSolver(CTraceSolver* , const CTraceSolver& );
	void CTraceSolver(class CTraceSolver *, class ITraceObject *, class CTraceRay *, class ITraceObject *, const class Vector  &, float); /* linkage=_ZN12CTraceSolverC4EP12ITraceObjectP9CTraceRayS1_RK6Vectorf */
	void SetEpsilon(class CTraceSolver *, float); /* linkage=_ZN12CTraceSolver10SetEpsilonEf */
	class Vector Support(const class CTraceSolver  *, const class Vector  &); /* linkage=_ZNK12CTraceSolver7SupportERK6Vector */
	bool SolveSweep(class CTraceSolver *); /* linkage=_ZN12CTraceSolver10SolveSweepEv */
	bool SolveSweep(class CTraceSolver *, class CShapeCastResult &); /* linkage=_ZN12CTraceSolver10SolveSweepER16CShapeCastResult */
	float GetHitFraction(const class CTraceSolver  *); /* linkage=_ZNK12CTraceSolver14GetHitFractionEv */
	bool IsStartSolid(const class CTraceSolver  *); /* linkage=_ZNK12CTraceSolver12IsStartSolidEv */
	class Vector GetHitNormal(const class CTraceSolver  *); /* linkage=_ZNK12CTraceSolver12GetHitNormalEv */
	void SetHitNormal(class CTraceSolver *, const class Vector  &); /* linkage=_ZN12CTraceSolver12SetHitNormalERK6Vector */
	bool SweepSingleConvex(class CTraceSolver *); /* linkage=_ZN12CTraceSolver17SweepSingleConvexEv */
	bool SolveMeshIntersection(class CTraceSolver *, class simplex_t &, float *); /* linkage=_ZN12CTraceSolver21SolveMeshIntersectionER9simplex_tPf */
	/* <de572b> vphysics2/physicstrace.cpp:1899 */
	float SolveMeshIntersection2D(class CTraceSolver *, class simplex_t &); /* linkage=_ZN12CTraceSolver23SolveMeshIntersection2DER9simplex_t */
	bool SolveMinDistanceSimplex(class CTraceSolver *, class simplex_t &, class Vector, float, const class Vector  &); /* linkage=_ZN12CTraceSolver23SolveMinDistanceSimplexER9simplex_t6VectorfRKS2_ */
	void CalculateSeparatingPlane(class CTraceSolver *, const class simplex_t  &); /* linkage=_ZN12CTraceSolver24CalculateSeparatingPlaneERK9simplex_t */
	void ComputeSeparation(class CTraceSolver *, const class simplex_t  &, float, bool); /* linkage=_ZN12CTraceSolver17ComputeSeparationERK9simplex_tfb */
	float BackupRequiredDistanceFromFace(class CTraceSolver *, const class simplex_t  &, float, float, bool); /* linkage=_ZN12CTraceSolver30BackupRequiredDistanceFromFaceERK9simplex_tffb */
	float BackupRequiredDistanceFromEdge(class CTraceSolver *, const class simplex_t  &, float, float, bool); /* linkage=_ZN12CTraceSolver30BackupRequiredDistanceFromEdgeERK9simplex_tffb */
	float BackupRequiredDistanceFromVertex(class CTraceSolver *, const class Vector  &, float, float); /* linkage=_ZN12CTraceSolver32BackupRequiredDistanceFromVertexERK6Vectorff */
	float IterateFaceBackup(class CTraceSolver *, const class Vector  &, const class Vector  &, float, float, const class Vector  &, float); /* linkage=_ZN12CTraceSolver17IterateFaceBackupERK6VectorS2_ffS2_f */
	float IterateEdgeBackup(class CTraceSolver *, const class Vector  &, float, float, const class Vector  &, float); /* linkage=_ZN12CTraceSolver17IterateEdgeBackupERK6VectorffS2_f */
	float TestEdgeAndIterate(class CTraceSolver *, const class Vector  &, const class Vector  &, const class Vector  &, float, float, const class Vector  &, const class Vector  &, const class Vector  &, float); /* linkage=_ZN12CTraceSolver18TestEdgeAndIterateERK6VectorS2_S2_ffS2_S2_S2_f */
	void CTraceSolver(class CTraceSolver *, const class CTraceSolver  &); /* linkage=_ZN12CTraceSolverC4ERKS_ */
};

// <009DC5F3> vphysics2/physicstrace.h:209
void CTraceSolver::CTraceSolver(ITraceObject* sweepobject, CTraceRay* ray, ITraceObject* obstacle, const Vector& axis, float flSeparationRadius)
{
} /* size: 0 */

// <00DE3E20> vphysics2/physicstrace.h:215
// variable: 1
inline void CTraceSolver::Support(const Vector& vDir)
{
	Vector vOut; // 217
} /* size: 0, variables: 1 */

// <00DE3E07> vphysics2/physicstrace.h:232
inline void CTraceSolver::IsStartSolid()
{
} /* size: 0 */

// <00DE3DEE> vphysics2/physicstrace.h:236
inline void CTraceSolver::GetHitNormal()
{
} /* size: 0 */

// <00DE3DC9> vphysics2/physicstrace.h:241
inline void CTraceSolver::SetHitNormal(const Vector& vNormal)
{
} /* size: 0 */

