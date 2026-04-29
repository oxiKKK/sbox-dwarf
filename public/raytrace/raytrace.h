
//
// public/raytrace/raytrace.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//				   libschemasystem.so
//
//	functions: 97
//	classes: 15
//	structs: 12
//

// <0632EA5E> ../public/raytrace/raytrace.h:24
void FourRays::FourRays()
{
} /* size: 0 */

// <0632EA41> ../public/raytrace/raytrace.h:24
inline void FourRays::FourRays()
{
} /* size: 0 */

// <0630EE92> ../public/raytrace/raytrace.h:24
void FourRays::FourRays(const FourRays &)
{
} /* size: 0 */

// <0630EE70> ../public/raytrace/raytrace.h:24
inline void FourRays::FourRays(const FourRays &)
{
} /* size: 0 */

// <0617AB4E> ../public/raytrace/raytrace.h:24
// member functions: 7
// member variables: 2
// class size: 96
class FourRays {
	FourVectors m_v4Origin; /* 0 48 */
	FourVectors m_v4Direction; /* 48 48 */
	/* ../public/raytrace/raytrace.h:30 */
	void Check(const FourRays* );
	/* ../public/raytrace/raytrace.h:45 */
	int CalculateDirectionSignMask(const FourRays* );
	void FourRays(FourRays* );
	void Check(const class FourRays  *); /* linkage=_ZNK8FourRays5CheckEv */
	int CalculateDirectionSignMask(const class FourRays  *); /* linkage=_ZNK8FourRays26CalculateDirectionSignMaskEv */
	void FourRays(class FourRays *, const class FourRays  &); /* linkage=_ZN8FourRaysC4ERKS_ */
	void FourRays(class FourRays *); /* linkage=_ZN8FourRaysC4Ev */
};

// <02E51CD8> ../public/raytrace/raytrace.h:24
// member functions: 8
// member variables: 2
// class size: 96
class FourRays {
	FourVectors m_v4Origin; /* 0 48 */
	FourVectors m_v4Direction; /* 48 48 */
	/* ../public/raytrace/raytrace.h:30 */
	void Check(const FourRays* );
	/* ../public/raytrace/raytrace.h:45 */
	int CalculateDirectionSignMask(const FourRays* );
	void FourRays(FourRays* , const FourRays& );
	void FourRays(FourRays* );
	void Check(const class FourRays  *); /* linkage=_ZNK8FourRays5CheckEv */
	int CalculateDirectionSignMask(const class FourRays  *); /* linkage=_ZNK8FourRays26CalculateDirectionSignMaskEv */
	void FourRays(class FourRays *, const class FourRays  &); /* linkage=_ZN8FourRaysC4ERKS_ */
	void FourRays(class FourRays *); /* linkage=_ZN8FourRaysC4Ev */
};

// <0635246B> ../public/raytrace/raytrace.h:30
inline void FourRays::Check()
{
} /* size: 0 */

// <000A8E4A> ../public/raytrace/raytrace.h:85
// member variables: 9
// struct size: 48
struct TriIntersectData_t {
	float m_flNx; /* 0 4 */
	float m_flNy; /* 4 4 */
	float m_flNz; /* 8 4 */
	float m_flD; /* 12 4 */
	int32 m_nTriangleID; /* 16 4 */
	float m_ProjectedEdgeEquations[6]; /* 20 24 */
	uint8 m_nCoordSelect0; /* 44 1 */
	uint8 m_nCoordSelect1; /* 45 1 */
	uint16 m_nFlags; /* 46 2 */
};

// <000A8EEF> ../public/raytrace/raytrace.h:108
// member functions: 2
// member variables: 4
// struct size: 44
struct TriGeometryData_t {
	int32 m_nTriangleID; /* 0 4 */
	float m_VertexCoordData[9]; /* 4 36 */
	uint16 m_nFlags; /* 40 2 */
	uint8 m_nPadToDWord[2]; /* 42 2 */
	/* ../public/raytrace/raytrace.h:119 */
	Vector& Vertex(TriGeometryData_t* , int);
	/* ../public/raytrace/raytrace.h:124 */
	const Vector& Vertex(const TriGeometryData_t* , int);
};

// <06352446> ../public/raytrace/raytrace.h:119
inline void TriGeometryData_t::Vertex(int idx)
{
} /* size: 0 */

// <000A8FB2> ../public/raytrace/raytrace.h:132
// member functions: 6
// member variable: 1
// struct size: 48
struct CacheOptimizedTriangle_t {
	/* ../public/raytrace/raytrace.h:136 */
	union {
		TriIntersectData_t m_IntersectData; /* 0 48 */
		TriGeometryData_t m_GeometryData; /* 0 44 */
	};
	union {
		TriIntersectData_t m_IntersectData; /* 0 48 */
		TriGeometryData_t m_GeometryData; /* 0 44 */
	} m_Data; /* 0 48 */
	/* ../public/raytrace/raytrace.h:142 */
	Vector& Vertex(CacheOptimizedTriangle_t* , int);
	/* ../public/raytrace/raytrace.h:147 */
	const Vector& Vertex(const CacheOptimizedTriangle_t* , int);
	/* ../public/raytrace/raytrace.h:152 */
	void ChangeIntoIntersectionFormat(CacheOptimizedTriangle_t* );
	/* ../public/raytrace/raytrace.h:155 */
	bool ExtractNormalFromIntersectionFormat(const CacheOptimizedTriangle_t* , Vector& );
	/* ../public/raytrace/raytrace.h:167 */
	bool ExtractVerticesFromIntersectionFormat(const CacheOptimizedTriangle_t* , Vector& , Vector& , Vector& );
private:
	/* ../public/raytrace/raytrace.h:203 */
	Vector ProjectOntoPlaneFromAxis(const Vector& , const Vector& , float, int);
};

// <058A9F43> ../../public/raytrace/raytrace.h:132
// member functions: 6
// member variable: 1
// struct size: 48
struct CacheOptimizedTriangle_t {
	/* ../../public/raytrace/raytrace.h:136 */
	union {
		TriIntersectData_t m_IntersectData; /* 0 48 */
		TriGeometryData_t m_GeometryData; /* 0 44 */
	};
	union {
		TriIntersectData_t m_IntersectData; /* 0 48 */
		TriGeometryData_t m_GeometryData; /* 0 44 */
	} m_Data; /* 0 48 */
	/* ../../public/raytrace/raytrace.h:142 */
	Vector& Vertex(CacheOptimizedTriangle_t* , int);
	/* ../../public/raytrace/raytrace.h:147 */
	const Vector& Vertex(const CacheOptimizedTriangle_t* , int);
	/* ../../public/raytrace/raytrace.h:152 */
	void ChangeIntoIntersectionFormat(CacheOptimizedTriangle_t* );
	/* ../../public/raytrace/raytrace.h:155 */
	bool ExtractNormalFromIntersectionFormat(const CacheOptimizedTriangle_t* , Vector& );
	/* ../../public/raytrace/raytrace.h:167 */
	bool ExtractVerticesFromIntersectionFormat(const CacheOptimizedTriangle_t* , Vector& , Vector& , Vector& );
private:
	/* ../../public/raytrace/raytrace.h:203 */
	Vector ProjectOntoPlaneFromAxis(const Vector& , const Vector& , float, int);
};

// <063523FC> ../public/raytrace/raytrace.h:142
inline void CacheOptimizedTriangle_t::Vertex(int idx)
{
} /* size: 0 */

// <06351863> ../public/raytrace/raytrace.h:167
// variables: 9
// function calls: 45
void CacheOptimizedTriangle_t::ExtractVerticesFromIntersectionFormat(Vector& v0, Vector& v1, Vector& v2)
{
	const TriIntersectData_t& data; // 169
	const float* pPlane0; // 170
	const float* pPlane1; // 171
	Vector vNormal; // 173
	int n0; // 175
	int n1; // 176
	int n2; // 177
	float flOffset; // 178
	float flOOscale; // 179
	Vector::Vector(); // 173
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 174
	Vector::operator[](
			int i);  // 181
	Vector::operator[](
			int i);  // 183
	Vector::operator[](
			int i);  // 182
	Vector::operator[](
			int i);  // 186
	Vector::operator[](
			int i);  // 187
	Vector::operator[](
			int i);  // 188
	Vector::operator[](
			int i);  // 191
	Vector::operator[](
			int i);  // 192
	Vector::operator[](
			int i);  // 193
	DotProduct(const Vector& a,
			const Vector& b);  // 205
	Vector::operator[](
			int i);  // 206
	Vector::operator[](
			int i);  // 208
	ProjectOntoPlaneFromAxis(const Vector& v,
				const Vector& vNormal,
				float flDist,
				int nAxis);  // 194
	Vector::operator=(
			const Vector& vOther);  // 194
	DotProduct(const Vector& a,
			const Vector& b);  // 205
	Vector::operator[](
			int i);  // 208
	ProjectOntoPlaneFromAxis(const Vector& v,
				const Vector& vNormal,
				float flDist,
				int nAxis);  // 195
	Vector::operator=(
			const Vector& vOther);  // 195
	DotProduct(const Vector& a,
			const Vector& b);  // 205
	Vector::operator[](
			int i);  // 208
	ProjectOntoPlaneFromAxis(const Vector& v,
				const Vector& vNormal,
				float flDist,
				int nAxis);  // 196
	Vector::operator=(
			const Vector& vOther);  // 196
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 619
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 619
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 619
	Vector::IsValid(); // 198
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 619
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 619
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 619
	Vector::IsValid(); // 198
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 619
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 619
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 619
	Vector::IsValid(); // 198
} /* size: 784, variables: 9, inline expansions: 45 (527 bytes) */

// <06351812> ../public/raytrace/raytrace.h:203
// variables: 2
inline void ProjectOntoPlaneFromAxis(const Vector& v, const Vector& vNormal, float flDist, int nAxis)
{
	float flAxisDist; // 205
	Vector vOut; // 207
} /* size: 0, variables: 2 */

// <000A90ED> ../public/raytrace/raytrace.h:215
// member functions: 2
// member variable: 1
// struct size: 24
struct TriangleBounds_t {
	float m_flMinsMaxs[6]; /* 0 24 */
	/* ../public/raytrace/raytrace.h:219 */
	void SetBoundsFromTriangle(TriangleBounds_t* , const CacheOptimizedTriangle_t& );
	/* ../public/raytrace/raytrace.h:220 */
	int ClassifyAgainstAxisSplit(const TriangleBounds_t* , int, float);
};

// <000A916A> ../public/raytrace/raytrace.h:232
// member functions: 6
// member variables: 2
// struct size: 8
struct CacheOptimizedKDNode_t {
	/* ../public/raytrace/raytrace.h:245 */
	union {
		int32 m_nLeafTriangleCount; /* 0 4 */
		float m_flSplitPlaneValue; /* 0 4 */
	};
	int32 m_nChildIdx; /* 0 4 */
	union {
		int32 m_nLeafTriangleCount; /* 4 4 */
		float m_flSplitPlaneValue; /* 4 4 */
	} m_CountOrSplit; /* 4 4 */
	/* ../public/raytrace/raytrace.h:258 */
	int NodeType(const CacheOptimizedKDNode_t* );
	/* ../public/raytrace/raytrace.h:264 */
	int32 TriangleIndexStart(const CacheOptimizedKDNode_t* );
	/* ../public/raytrace/raytrace.h:270 */
	int LeftChild(const CacheOptimizedKDNode_t* );
	/* ../public/raytrace/raytrace.h:276 */
	int RightChild(const CacheOptimizedKDNode_t* );
	/* ../public/raytrace/raytrace.h:281 */
	int NumberOfTrianglesInLeaf(const CacheOptimizedKDNode_t* );
	/* ../public/raytrace/raytrace.h:287 */
	void SetNumberOfTrianglesInLeafNode(CacheOptimizedKDNode_t* , int);
};

// <058AA0F9> ../../public/raytrace/raytrace.h:232
// member functions: 6
// member variables: 2
// struct size: 8
struct CacheOptimizedKDNode_t {
	/* ../../public/raytrace/raytrace.h:245 */
	union {
		int32 m_nLeafTriangleCount; /* 0 4 */
		float m_flSplitPlaneValue; /* 0 4 */
	};
	int32 m_nChildIdx; /* 0 4 */
	union {
		int32 m_nLeafTriangleCount; /* 4 4 */
		float m_flSplitPlaneValue; /* 4 4 */
	} m_CountOrSplit; /* 4 4 */
	/* ../../public/raytrace/raytrace.h:258 */
	int NodeType(const CacheOptimizedKDNode_t* );
	/* ../../public/raytrace/raytrace.h:264 */
	int32 TriangleIndexStart(const CacheOptimizedKDNode_t* );
	/* ../../public/raytrace/raytrace.h:270 */
	int LeftChild(const CacheOptimizedKDNode_t* );
	/* ../../public/raytrace/raytrace.h:276 */
	int RightChild(const CacheOptimizedKDNode_t* );
	/* ../../public/raytrace/raytrace.h:281 */
	int NumberOfTrianglesInLeaf(const CacheOptimizedKDNode_t* );
	/* ../../public/raytrace/raytrace.h:287 */
	void SetNumberOfTrianglesInLeafNode(CacheOptimizedKDNode_t* , int);
};

// <063517F9> ../public/raytrace/raytrace.h:258
inline void CacheOptimizedKDNode_t::NodeType()
{
} /* size: 0 */

// <063517E0> ../public/raytrace/raytrace.h:264
inline void CacheOptimizedKDNode_t::TriangleIndexStart()
{
} /* size: 0 */

// <063517C7> ../public/raytrace/raytrace.h:270
inline void CacheOptimizedKDNode_t::LeftChild()
{
} /* size: 0 */

// <063517AE> ../public/raytrace/raytrace.h:276
inline void CacheOptimizedKDNode_t::RightChild()
{
} /* size: 0 */

// <06351795> ../public/raytrace/raytrace.h:281
inline void CacheOptimizedKDNode_t::NumberOfTrianglesInLeaf()
{
} /* size: 0 */

// <06351771> ../public/raytrace/raytrace.h:287
inline void CacheOptimizedKDNode_t::SetNumberOfTrianglesInLeafNode(int n)
{
} /* size: 0 */

// <0634A4FA> ../public/raytrace/raytrace.h:299
void CRaytraceMaterialRemapTable::~CRaytraceMaterialRemapTable()
{
} /* size: 0 */

// <0634A4DD> ../public/raytrace/raytrace.h:299
inline void CRaytraceMaterialRemapTable::~CRaytraceMaterialRemapTable()
{
} /* size: 0 */

// <000AA93C> ../public/raytrace/raytrace.h:299
// member functions: 15
// member variables: 2
// class size: 64
class CRaytraceMaterialRemapTable {
	CUtlVector<long long unsigned int, CUtlMemory<long long unsigned int, int> > m_BaseMaterials; /* 0 32 */
	CUtlVector<long long unsigned int, CUtlMemory<long long unsigned int, int> > m_OverrideMaterials; /* 32 32 */
	/* ../public/raytrace/raytrace.h:305 */
	void Serialize(const CRaytraceMaterialRemapTable* , CUtlBuffer& );
	/* ../public/raytrace/raytrace.h:306 */
	void Unserialize(CRaytraceMaterialRemapTable* , CUtlBuffer& );
	/* ../public/raytrace/raytrace.h:308 */
	void CRaytraceMaterialRemapTable(CRaytraceMaterialRemapTable* );
	/* ../public/raytrace/raytrace.h:309 */
	void CRaytraceMaterialRemapTable(CRaytraceMaterialRemapTable* , const CRaytraceMaterialRemapTable& );
	/* ../public/raytrace/raytrace.h:315 */
	void Add(CRaytraceMaterialRemapTable* , uint64, uint64);
	/* ../public/raytrace/raytrace.h:321 */
	uint64 Remap(const CRaytraceMaterialRemapTable* , uint64);
	/* ../public/raytrace/raytrace.h:331 */
	bool IsEmpty(const CRaytraceMaterialRemapTable* );
	void Serialize(const class CRaytraceMaterialRemapTable  *, class CUtlBuffer &); /* linkage=_ZNK27CRaytraceMaterialRemapTable9SerializeER10CUtlBuffer */
	void Unserialize(class CRaytraceMaterialRemapTable *, class CUtlBuffer &); /* linkage=_ZN27CRaytraceMaterialRemapTable11UnserializeER10CUtlBuffer */
	void CRaytraceMaterialRemapTable(class CRaytraceMaterialRemapTable *); /* linkage=_ZN27CRaytraceMaterialRemapTableC4Ev */
	void CRaytraceMaterialRemapTable(class CRaytraceMaterialRemapTable *, const class CRaytraceMaterialRemapTable  &); /* linkage=_ZN27CRaytraceMaterialRemapTableC4ERKS_ */
	void Add(class CRaytraceMaterialRemapTable *, uint64, uint64); /* linkage=_ZN27CRaytraceMaterialRemapTable3AddEyy */
	uint64 Remap(const class CRaytraceMaterialRemapTable  *, uint64); /* linkage=_ZNK27CRaytraceMaterialRemapTable5RemapEy */
	bool IsEmpty(const class CRaytraceMaterialRemapTable  *); /* linkage=_ZNK27CRaytraceMaterialRemapTable7IsEmptyEv */
	void ~CRaytraceMaterialRemapTable(class CRaytraceMaterialRemapTable *); /* linkage=_ZN27CRaytraceMaterialRemapTableD4Ev */
};

// <06351726> ../public/raytrace/raytrace.h:308
void CRaytraceMaterialRemapTable::CRaytraceMaterialRemapTable()
{
} /* size: 0 */

// <0635170D> ../public/raytrace/raytrace.h:308
inline void CRaytraceMaterialRemapTable::CRaytraceMaterialRemapTable()
{
} /* size: 0 */

// <063516DA> ../public/raytrace/raytrace.h:321
// variable: 1
inline void CRaytraceMaterialRemapTable::Remap(uint64 nMaterial)
{
	int nIdx; // 323
} /* size: 0, variables: 1 */

// <063516C1> ../public/raytrace/raytrace.h:331
inline void CRaytraceMaterialRemapTable::IsEmpty()
{
} /* size: 0 */

// <0634A4C6> ../public/raytrace/raytrace.h:338
void InstancedRayTracingEnvironmentReference_t::InstancedRayTracingEnvironmentReference_t()
{
} /* size: 0 */

// <0634A4A9> ../public/raytrace/raytrace.h:338
inline void InstancedRayTracingEnvironmentReference_t::InstancedRayTracingEnvironmentReference_t()
{
} /* size: 0 */

// <063495CD> ../public/raytrace/raytrace.h:338
void InstancedRayTracingEnvironmentReference_t::~InstancedRayTracingEnvironmentReference_t()
{
} /* size: 0 */

// <063495B0> ../public/raytrace/raytrace.h:338
inline void InstancedRayTracingEnvironmentReference_t::~InstancedRayTracingEnvironmentReference_t()
{
} /* size: 0 */

// <000AAA78> ../public/raytrace/raytrace.h:338
// member functions: 2
// member variables: 7
// class size: 224
class InstancedRayTracingEnvironmentReference_t {
	RayTracingEnvironment * m_pTarget; /* 0 8 */
	matrix3x4a_t m_matTransform __attribute__((__aligned__(16))); /* 16 48 */
	matrix3x4a_t m_matITransform __attribute__((__aligned__(16))); /* 64 48 */
	AABB_t m_boundingBox; /* 112 24 */
	void * m_pUserData; /* 136 8 */
	CRaytraceMaterialRemapTable m_MaterialRemapTable; /* 144 64 */
	CSceneObject * m_pSceneObject; /* 208 8 */
	void ~InstancedRayTracingEnvironmentReference_t(class InstancedRayTracingEnvironmentReference_t *); /* linkage=_ZN41InstancedRayTracingEnvironmentReference_tD4Ev */
	void InstancedRayTracingEnvironmentReference_t(class InstancedRayTracingEnvironmentReference_t *); /* linkage=_ZN41InstancedRayTracingEnvironmentReference_tC4Ev */
} __attribute__((__aligned__(16)));

// <0632FB9C> ../public/raytrace/raytrace.h:360
void RayTracingSingleResult_t::RayTracingSingleResult_t()
{
} /* size: 0 */

// <0632FB7F> ../public/raytrace/raytrace.h:360
inline void RayTracingSingleResult_t::RayTracingSingleResult_t()
{
} /* size: 0 */

// <062EA392> ../public/raytrace/raytrace.h:360
inline void RayTracingSingleResult_t::operator=(RayTracingSingleResult_t &)
{
} /* size: 0 */

// <0617D193> ../public/raytrace/raytrace.h:360
// member functions: 12
// member variables: 8
// struct size: 56
struct RayTracingSingleResult_t {
	Vector m_vSurfaceNormal; /* 0 12 */
	int32 m_nTriangleHitIndex; /* 12 4 */
	float m_flHitDistance; /* 16 4 */
	const class RayTracingEnvironment * m_pRtEnv; /* 24 8 */
	const class InstancedRayTracingEnvironmentReference_t * m_pInstance; /* 32 8 */
	uint64 m_nTriangleMaterial; /* 40 8 */
	float m_flU; /* 48 4 */
	float m_flV; /* 52 4 */
	/* ../public/raytrace/raytrace.h:375 */
	void Init(RayTracingSingleResult_t* );
	/* ../public/raytrace/raytrace.h:385 */
	void SetInstanceEnv(RayTracingSingleResult_t* , const InstancedRayTracingEnvironmentReference_t* );
	/* ../public/raytrace/raytrace.h:390 */
	void SetRayTraceEnv(RayTracingSingleResult_t* , const RayTracingEnvironment* );
	/* ../public/raytrace/raytrace.h:395 */
	void MergeInResult(RayTracingSingleResult_t* , const RayTracingSingleResult_t& );
	/* ../public/raytrace/raytrace.h:407 */
	Vector TriangleColor(const RayTracingSingleResult_t* );
	/* ../public/raytrace/raytrace.h:410 */
	uint64 TriangleMaterial(const RayTracingSingleResult_t* );
	/* ../public/raytrace/raytrace.h:413 */
	int32 TriangleID(const RayTracingSingleResult_t* );
	/* ../public/raytrace/raytrace.h:415 */
	bool HasAnyIntersections(const RayTracingSingleResult_t* );
	/* ../public/raytrace/raytrace.h:416 */
	bool HasIntersection(const RayTracingSingleResult_t* );
	/* ../public/raytrace/raytrace.h:417 */
	const InstancedRayTracingEnvironmentReference_t* GetHitInstance(const RayTracingSingleResult_t* );
	/* ../public/raytrace/raytrace.h:422 */
	void* UserData(const RayTracingSingleResult_t* );
	void RayTracingSingleResult_t(RayTracingSingleResult_t* );
};

// <02E57A09> ../public/raytrace/raytrace.h:360
// member functions: 13
// member variables: 8
// struct size: 56
struct RayTracingSingleResult_t {
	Vector m_vSurfaceNormal; /* 0 12 */
	int32 m_nTriangleHitIndex; /* 12 4 */
	float m_flHitDistance; /* 16 4 */
	const class RayTracingEnvironment * m_pRtEnv; /* 24 8 */
	const class InstancedRayTracingEnvironmentReference_t * m_pInstance; /* 32 8 */
	uint64 m_nTriangleMaterial; /* 40 8 */
	float m_flU; /* 48 4 */
	float m_flV; /* 52 4 */
	/* ../public/raytrace/raytrace.h:375 */
	void Init(RayTracingSingleResult_t* );
	/* ../public/raytrace/raytrace.h:385 */
	void SetInstanceEnv(RayTracingSingleResult_t* , const InstancedRayTracingEnvironmentReference_t* );
	/* ../public/raytrace/raytrace.h:390 */
	void SetRayTraceEnv(RayTracingSingleResult_t* , const RayTracingEnvironment* );
	/* ../public/raytrace/raytrace.h:395 */
	void MergeInResult(RayTracingSingleResult_t* , const RayTracingSingleResult_t& );
	/* ../public/raytrace/raytrace.h:407 */
	Vector TriangleColor(const RayTracingSingleResult_t* );
	/* ../public/raytrace/raytrace.h:410 */
	uint64 TriangleMaterial(const RayTracingSingleResult_t* );
	/* ../public/raytrace/raytrace.h:413 */
	int32 TriangleID(const RayTracingSingleResult_t* );
	/* ../public/raytrace/raytrace.h:415 */
	bool HasAnyIntersections(const RayTracingSingleResult_t* );
	/* ../public/raytrace/raytrace.h:416 */
	bool HasIntersection(const RayTracingSingleResult_t* );
	/* ../public/raytrace/raytrace.h:417 */
	const InstancedRayTracingEnvironmentReference_t* GetHitInstance(const RayTracingSingleResult_t* );
	/* ../public/raytrace/raytrace.h:422 */
	void* UserData(const RayTracingSingleResult_t* );
	RayTracingSingleResult_t& operator=(RayTracingSingleResult_t* , RayTracingSingleResult_t& );
	void RayTracingSingleResult_t(RayTracingSingleResult_t* );
};

// <063516A8> ../public/raytrace/raytrace.h:415
inline void RayTracingSingleResult_t::HasAnyIntersections()
{
} /* size: 0 */

// <0635168F> ../public/raytrace/raytrace.h:416
inline void RayTracingSingleResult_t::HasIntersection()
{
} /* size: 0 */

// <0634E46C> ../public/raytrace/raytrace.h:435
void RayTracingResult_t::RayTracingResult_t()
{
} /* size: 0 */

// <0634E44F> ../public/raytrace/raytrace.h:435
inline void RayTracingResult_t::RayTracingResult_t()
{
} /* size: 0 */

// <0631255F> ../public/raytrace/raytrace.h:435
void RayTracingResult_t::RayTracingResult_t(const RayTracingResult_t &)
{
} /* size: 0 */

// <0631253D> ../public/raytrace/raytrace.h:435
inline void RayTracingResult_t::RayTracingResult_t(const RayTracingResult_t &)
{
} /* size: 0 */

// <06233177> ../public/raytrace/raytrace.h:435
// member functions: 21
// member variables: 8
// struct size: 208
struct RayTracingResult_t {
	FourVectors m_v4SurfaceNormal; /* 0 48 */
	int32 m_nTriangleHitIndex[4] __attribute__((__aligned__(16))); /* 48 16 */
	fltx4 m_fl4HitDistance; /* 64 16 */
	fltx4 m_fl4U; /* 80 16 */
	fltx4 m_fl4V; /* 96 16 */
	const class RayTracingEnvironment * m_pRtEnv[4] __attribute__((__aligned__(16))); /* 112 32 */
	const class InstancedRayTracingEnvironmentReference_t * m_pInstance[4] __attribute__((__aligned__(16))); /* 144 32 */
	uint64 m_nTriangleMaterials[4] __attribute__((__aligned__(16))); /* 176 32 */
	/* ../public/raytrace/raytrace.h:450 */
	bool HasAnyIntersections(const RayTracingResult_t* );
	/* ../public/raytrace/raytrace.h:457 */
	void Init(RayTracingResult_t* );
	/* ../public/raytrace/raytrace.h:469 */
	void SetRayTraceEnv(RayTracingResult_t* , const RayTracingEnvironment* );
	/* ../public/raytrace/raytrace.h:474 */
	void SetInstanceEnv(RayTracingResult_t* , const InstancedRayTracingEnvironmentReference_t* );
	/* ../public/raytrace/raytrace.h:480 */
	void RegisterIntersection(RayTracingResult_t* , const fltx4& , const fltx4& , const fltx4& , int, const fltx4& , const FourVectors& , const RayTracingEnvironment* , const InstancedRayTracingEnvironmentReference_t* , uint64);
	/* ../public/raytrace/raytrace.h:508 */
	void MergeInResult(RayTracingResult_t* , const RayTracingResult_t& );
	/* ../public/raytrace/raytrace.h:563 */
	fltx4 AdjustMaskForIntersectionDistance(const RayTracingResult_t* , fltx4, fltx4);
	/* ../public/raytrace/raytrace.h:569 */
	void PostTraceFixup(RayTracingResult_t* );
	/* ../public/raytrace/raytrace.h:573 */
	void MergeInSubResult(RayTracingResult_t* , const RayTracingResult_t& , int);
	/* ../public/raytrace/raytrace.h:589 */
	int IntersectionCount(const RayTracingResult_t* , int);
	/* ../public/raytrace/raytrace.h:594 */
	fltx4 RaysStillActiveMask(const RayTracingResult_t* , fltx4);
	/* ../public/raytrace/raytrace.h:599 */
	void ExtractSingleResult(const RayTracingResult_t* , int, RayTracingSingleResult_t& );
	/* ../public/raytrace/raytrace.h:602 */
	Vector TriangleColor(const RayTracingResult_t* , int);
	/* ../public/raytrace/raytrace.h:605 */
	uint64 TriangleMaterial(const RayTracingResult_t* , int);
	/* ../public/raytrace/raytrace.h:608 */
	int32 TriangleID(const RayTracingResult_t* , int);
	/* ../public/raytrace/raytrace.h:611 */
	fltx4 TriangleHitMaskSIMD(const RayTracingResult_t* );
	/* ../public/raytrace/raytrace.h:614 */
	bool HasIntersection(const RayTracingResult_t* , int);
	/* ../public/raytrace/raytrace.h:616 */
	const InstancedRayTracingEnvironmentReference_t* GetHitInstance(const RayTracingResult_t* , int);
	/* ../public/raytrace/raytrace.h:621 */
	void TransformFromModelSpaceToWorldSpace(RayTracingResult_t* , const FourRays& , const FourRays& , const matrix3x4a_t& );
	void RayTracingResult_t(RayTracingResult_t* , const RayTracingResult_t& );
	void RayTracingResult_t(RayTracingResult_t* );
} __attribute__((__aligned__(16)));

// <06351676> ../public/raytrace/raytrace.h:450
inline void RayTracingResult_t::HasAnyIntersections()
{
} /* size: 0 */

// <0635165D> ../public/raytrace/raytrace.h:457
inline void RayTracingResult_t::Init()
{
} /* size: 0 */

// <06351637> ../public/raytrace/raytrace.h:469
inline void RayTracingResult_t::SetRayTraceEnv(const RayTracingEnvironment* pEnv)
{
} /* size: 0 */

// <06351611> ../public/raytrace/raytrace.h:474
inline void RayTracingResult_t::SetInstanceEnv(const InstancedRayTracingEnvironmentReference_t* pInstance)
{
} /* size: 0 */

// <06351569> ../public/raytrace/raytrace.h:480
// variables: 2
inline void RayTracingResult_t::RegisterIntersection(const fltx4& fl4HitMask, const fltx4& fl4U, const fltx4& fl4V, int nTriangleIndex, const fltx4& isect_t, const FourVectors& N, const RayTracingEnvironment* pRtEnv, const InstancedRayTracingEnvironmentReference_t* pInstance, uint64 nTriangleMaterial)
{
	fltx4 fl4TriangleIndex; // 482
	int nSign; // 493
} /* size: 0, variables: 2 */

// <063514DA> ../public/raytrace/raytrace.h:508
// variables: 7
inline void RayTracingResult_t::MergeInResult(const RayTracingResult_t& other)
{
	fltx4 fl4ReplaceMask; // 511
	int nMask; // 516
	{
		fltx4 fl4OldIndex; // 523
		fltx4 fl4NewIndex; // 524
		{
			int i; // 531
		}
		{
			const fltx4* pSrcPtrs; // 543
			fltx4* pDestPtrs; // 544
		}
	}
} /* size: 0, variables: 2 */

// <063514A7> ../public/raytrace/raytrace.h:563
inline void RayTracingResult_t::AdjustMaskForIntersectionDistance(fltx4 fl4HitMask, fltx4 isect_t)
{
} /* size: 0 */

// <0635148E> ../public/raytrace/raytrace.h:569
inline void RayTracingResult_t::PostTraceFixup()
{
} /* size: 0 */

// <0635145B> ../public/raytrace/raytrace.h:573
inline void RayTracingResult_t::MergeInSubResult(const RayTracingResult_t& srcSubResult, int nIdx)
{
} /* size: 0 */

// <06351435> ../public/raytrace/raytrace.h:594
inline void RayTracingResult_t::RaysStillActiveMask(fltx4 fl4RayTMax)
{
} /* size: 0 */

// <063513FF> ../public/raytrace/raytrace.h:625
inline void RayTracingResult_t::ExtractSingleResult(int nSubIdx, RayTracingSingleResult_t& out)
{
} /* size: 0 */

// <0632E9C2> ../public/raytrace/raytrace.h:650
void RayTracingResultMulti_t::RayTracingResultMulti_t()
{
} /* size: 0 */

// <0632E9A5> ../public/raytrace/raytrace.h:650
inline void RayTracingResultMulti_t::RayTracingResultMulti_t()
{
} /* size: 0 */

// <0632E98E> ../public/raytrace/raytrace.h:650
void RayTracingResultMulti_t::~RayTracingResultMulti_t()
{
} /* size: 0 */

// <0632E971> ../public/raytrace/raytrace.h:650
inline void RayTracingResultMulti_t::~RayTracingResultMulti_t()
{
} /* size: 0 */

// <06236676> ../public/raytrace/raytrace.h:650
// member functions: 32
// member variables: 2
// class size: 8,608
class RayTracingResultMulti_t {
private:
	CUtlVectorFixedGrowable<RayTracingResult_t, 32> m_results __attribute__((__aligned__(16))); /* 0 6688 */
	CUtlVectorFixedGrowable<RayTracingSingleResult_t, 8> m_unpackedResults[4] __attribute__((__aligned__(8))); /* 6688 1920 */
	/* ../public/raytrace/raytrace.h:657 */
	void Init(RayTracingResultMulti_t* );
	/* ../public/raytrace/raytrace.h:666 */
	void RemoveAll(RayTracingResultMulti_t* );
	/* ../public/raytrace/raytrace.h:668 */
	void SetRayTraceEnv(RayTracingResultMulti_t* , const RayTracingEnvironment* );
	/* ../public/raytrace/raytrace.h:669 */
	void SetInstanceEnv(RayTracingResultMulti_t* , const InstancedRayTracingEnvironmentReference_t* );
	/* ../public/raytrace/raytrace.h:671 */
	void RegisterIntersection(RayTracingResultMulti_t* , const fltx4& , const fltx4& , const fltx4& , int, const fltx4& , const FourVectors& , const RayTracingEnvironment* , const InstancedRayTracingEnvironmentReference_t* , uint64);
	/* ../public/raytrace/raytrace.h:673 */
	fltx4 AdjustMaskForIntersectionDistance(const RayTracingResultMulti_t* , fltx4, fltx4);
	/* ../public/raytrace/raytrace.h:675 */
	void PostTraceFixup(RayTracingResultMulti_t* );
	/* ../public/raytrace/raytrace.h:678 */
	void MergeInSubResult(RayTracingResultMulti_t* , const RayTracingResultMulti_t& , int);
	/* ../public/raytrace/raytrace.h:680 */
	fltx4 RaysStillActiveMask(const RayTracingResultMulti_t* , fltx4);
	/* ../public/raytrace/raytrace.h:683 */
	int IntersectionCount(const RayTracingResultMulti_t* , int);
	/* ../public/raytrace/raytrace.h:685 */
	bool HasAnyIntersections(const RayTracingResultMulti_t* );
	/* ../public/raytrace/raytrace.h:690 */
	RayTracingSingleResult_t& Result(RayTracingResultMulti_t* , int, int);
	/* ../public/raytrace/raytrace.h:692 */
	void MergeInResult(RayTracingResultMulti_t* , const RayTracingResultMulti_t& );
	/* ../public/raytrace/raytrace.h:700 */
	void TransformFromModelSpaceToWorldSpace(RayTracingResultMulti_t* , const FourRays& , const FourRays& , const matrix3x4a_t& );
	void ~RayTracingResultMulti_t(RayTracingResultMulti_t* );
	void RayTracingResultMulti_t(RayTracingResultMulti_t* );
	void Init(class RayTracingResultMulti_t *); /* linkage=_ZN23RayTracingResultMulti_t4InitEv */
	void RemoveAll(class RayTracingResultMulti_t *); /* linkage=_ZN23RayTracingResultMulti_t9RemoveAllEv */
	void SetRayTraceEnv(class RayTracingResultMulti_t *, const class RayTracingEnvironment  *); /* linkage=_ZN23RayTracingResultMulti_t14SetRayTraceEnvEPK21RayTracingEnvironment */
	void SetInstanceEnv(class RayTracingResultMulti_t *, const class InstancedRayTracingEnvironmentReference_t  *); /* linkage=_ZN23RayTracingResultMulti_t14SetInstanceEnvEPK41InstancedRayTracingEnvironmentReference_t */
	/* <637afb4> raytrace/raytrace.cpp:21 */
	void RegisterIntersection(class RayTracingResultMulti_t *, const fltx4  &, const fltx4  &, const fltx4  &, int, const fltx4  &, const class FourVectors  &, const class RayTracingEnvironment  *, const class InstancedRayTracingEnvironmentReference_t  *, uint64); /* linkage=_ZN23RayTracingResultMulti_t20RegisterIntersectionERKDv4_fS2_S2_iS2_RK11FourVectorsPK21RayTracingEnvironmentPK41InstancedRayTracingEnvironmentReference_ty */
	fltx4 AdjustMaskForIntersectionDistance(const class RayTracingResultMulti_t  *, fltx4, fltx4); /* linkage=_ZNK23RayTracingResultMulti_t33AdjustMaskForIntersectionDistanceEDv4_fS0_ */
	void PostTraceFixup(class RayTracingResultMulti_t *); /* linkage=_ZN23RayTracingResultMulti_t14PostTraceFixupEv */
	void MergeInSubResult(class RayTracingResultMulti_t *, const class RayTracingResultMulti_t  &, int); /* linkage=_ZN23RayTracingResultMulti_t16MergeInSubResultERKS_i */
	fltx4 RaysStillActiveMask(const class RayTracingResultMulti_t  *, fltx4); /* linkage=_ZNK23RayTracingResultMulti_t19RaysStillActiveMaskEDv4_f */
	int IntersectionCount(const class RayTracingResultMulti_t  *, int); /* linkage=_ZNK23RayTracingResultMulti_t17IntersectionCountEi */
	bool HasAnyIntersections(const class RayTracingResultMulti_t  *); /* linkage=_ZNK23RayTracingResultMulti_t19HasAnyIntersectionsEv */
	class RayTracingSingleResult_t & Result(class RayTracingResultMulti_t *, int, int); /* linkage=_ZN23RayTracingResultMulti_t6ResultEii */
	void MergeInResult(class RayTracingResultMulti_t *, const class RayTracingResultMulti_t  &); /* linkage=_ZN23RayTracingResultMulti_t13MergeInResultERKS_ */
	/* <6375f8a> raytrace/raytrace.cpp:738 */
	void TransformFromModelSpaceToWorldSpace(class RayTracingResultMulti_t *, const class FourRays  &, const class FourRays  &, const class matrix3x4a_t  &); /* linkage=_ZN23RayTracingResultMulti_t35TransformFromModelSpaceToWorldSpaceERK8FourRaysS2_RK12matrix3x4a_t */
	void ~RayTracingResultMulti_t(class RayTracingResultMulti_t *); /* linkage=_ZN23RayTracingResultMulti_tD4Ev */
	void RayTracingResultMulti_t(class RayTracingResultMulti_t *); /* linkage=_ZN23RayTracingResultMulti_tC4Ev */
} __attribute__((__aligned__(16)));

// <06350973> ../public/raytrace/raytrace.h:657
// function calls: 45
void RayTracingResultMulti_t::Init()
{
	CUtlVectorBase<RayTracingResult_t, CUtlMemoryFixedGrowable<RayTracingResult_t, 32, int> >::RemoveAll(); // 1798
	AlignedByteArrayExplicit_t<32, RayTracingResult_t, 16>::Base(); // 237
	CUtlMemoryFixedGrowable_Base<RayTracingResult_t, int>::Purge_FixedGrowable(
				RayTracingResult_t* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<RayTracingResult_t, int>::Purge_FixedGrowable(
				RayTracingResult_t* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	CUtlMemoryFixedGrowable<RayTracingResult_t, 32, int>::Purge(
		int numElements);  // 1799
	CUtlMemory<RayTracingResult_t, int>::Base(); // 112
	CUtlVectorBase<RayTracingResult_t, CUtlMemoryFixedGrowable<RayTracingResult_t, 32, int> >::Base(); // 368
	CUtlVectorBase<RayTracingResult_t, CUtlMemoryFixedGrowable<RayTracingResult_t, 32, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<RayTracingResult_t, CUtlMemoryFixedGrowable<RayTracingResult_t, 32, int> >::Purge(); // 659
	CUtlMemory<RayTracingSingleResult_t, int>::IsExternallyAllocated(); // 577
	CUtlMemory<RayTracingSingleResult_t, int>::ConvertToExternalMemory(
				RayTracingSingleResult_t* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<RayTracingSingleResult_t, int>::Purge_FixedGrowable(
				RayTracingSingleResult_t* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<RayTracingSingleResult_t, int>::Purge_FixedGrowable(
				RayTracingSingleResult_t* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<8, RayTracingSingleResult_t, 8>::Base(); // 237
	CUtlMemoryFixedGrowable<RayTracingSingleResult_t, 8, int>::Purge(
		int numElements);  // 1799
	CUtlVectorBase<RayTracingSingleResult_t, CUtlMemoryFixedGrowable<RayTracingSingleResult_t, 8, int> >::RemoveAll(); // 1798
	CUtlVectorBase<RayTracingSingleResult_t, CUtlMemoryFixedGrowable<RayTracingSingleResult_t, 8, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<RayTracingSingleResult_t, CUtlMemoryFixedGrowable<RayTracingSingleResult_t, 8, int> >::Purge(); // 660
	CUtlMemory<RayTracingSingleResult_t, int>::IsExternallyAllocated(); // 577
	CUtlMemory<RayTracingSingleResult_t, int>::ConvertToExternalMemory(
				RayTracingSingleResult_t* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<RayTracingSingleResult_t, int>::Purge_FixedGrowable(
				RayTracingSingleResult_t* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<RayTracingSingleResult_t, int>::Purge_FixedGrowable(
				RayTracingSingleResult_t* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<8, RayTracingSingleResult_t, 8>::Base(); // 237
	CUtlMemoryFixedGrowable<RayTracingSingleResult_t, 8, int>::Purge(
		int numElements);  // 1799
	CUtlVectorBase<RayTracingSingleResult_t, CUtlMemoryFixedGrowable<RayTracingSingleResult_t, 8, int> >::RemoveAll(); // 1798
	CUtlVectorBase<RayTracingSingleResult_t, CUtlMemoryFixedGrowable<RayTracingSingleResult_t, 8, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<RayTracingSingleResult_t, CUtlMemoryFixedGrowable<RayTracingSingleResult_t, 8, int> >::Purge(); // 661
	CUtlMemory<RayTracingSingleResult_t, int>::IsExternallyAllocated(); // 577
	CUtlMemory<RayTracingSingleResult_t, int>::ConvertToExternalMemory(
				RayTracingSingleResult_t* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<RayTracingSingleResult_t, int>::Purge_FixedGrowable(
				RayTracingSingleResult_t* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<RayTracingSingleResult_t, int>::Purge_FixedGrowable(
				RayTracingSingleResult_t* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<8, RayTracingSingleResult_t, 8>::Base(); // 237
	CUtlMemoryFixedGrowable<RayTracingSingleResult_t, 8, int>::Purge(
		int numElements);  // 1799
	CUtlVectorBase<RayTracingSingleResult_t, CUtlMemoryFixedGrowable<RayTracingSingleResult_t, 8, int> >::RemoveAll(); // 1798
	CUtlVectorBase<RayTracingSingleResult_t, CUtlMemoryFixedGrowable<RayTracingSingleResult_t, 8, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<RayTracingSingleResult_t, CUtlMemoryFixedGrowable<RayTracingSingleResult_t, 8, int> >::Purge(); // 662
	CUtlMemory<RayTracingSingleResult_t, int>::IsExternallyAllocated(); // 577
	CUtlMemory<RayTracingSingleResult_t, int>::ConvertToExternalMemory(
				RayTracingSingleResult_t* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<RayTracingSingleResult_t, int>::Purge_FixedGrowable(
				RayTracingSingleResult_t* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<RayTracingSingleResult_t, int>::Purge_FixedGrowable(
				RayTracingSingleResult_t* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<8, RayTracingSingleResult_t, 8>::Base(); // 237
	CUtlMemoryFixedGrowable<RayTracingSingleResult_t, 8, int>::Purge(
		int numElements);  // 1799
	CUtlVectorBase<RayTracingSingleResult_t, CUtlMemoryFixedGrowable<RayTracingSingleResult_t, 8, int> >::RemoveAll(); // 1798
	CUtlVectorBase<RayTracingSingleResult_t, CUtlMemoryFixedGrowable<RayTracingSingleResult_t, 8, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<RayTracingSingleResult_t, CUtlMemoryFixedGrowable<RayTracingSingleResult_t, 8, int> >::Purge(); // 663
} /* size: 600, inline expansions: 45 (2536 bytes) */

// <0635094D> ../public/raytrace/raytrace.h:668
inline void RayTracingResultMulti_t::SetRayTraceEnv(const RayTracingEnvironment* pEnv)
{
} /* size: 0 */

// <06350927> ../public/raytrace/raytrace.h:669
inline void RayTracingResultMulti_t::SetInstanceEnv(const InstancedRayTracingEnvironmentReference_t* pInstance)
{
} /* size: 0 */

// <063508F4> ../public/raytrace/raytrace.h:673
inline void RayTracingResultMulti_t::AdjustMaskForIntersectionDistance(fltx4 fl4HitMask, fltx4 isect_t)
{
} /* size: 0 */

// <063508CE> ../public/raytrace/raytrace.h:680
inline void RayTracingResultMulti_t::RaysStillActiveMask(fltx4 fl4RayTMax)
{
} /* size: 0 */

// <063508A8> ../public/raytrace/raytrace.h:683
inline void RayTracingResultMulti_t::IntersectionCount(int nIdx)
{
} /* size: 0 */

// <0635088F> ../public/raytrace/raytrace.h:685
inline void RayTracingResultMulti_t::HasAnyIntersections()
{
} /* size: 0 */

// <0635083C> ../public/raytrace/raytrace.h:690
// variables: 2
inline void RayTracingResultMulti_t::Result(int nRayIdx, int nResultIdx)
{
	const char   __FUNCTION__; // 4775
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 690
	}
} /* size: 0, variables: 1 */

// <02F75351> ../public/raytrace/raytrace.h:690
// variables: 2
inline void RayTracingResultMulti_t::Result(int nRayIdx, int nResultIdx)
{
	const char   __FUNCTION__; // 11441
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 690
	}
} /* size: 0, variables: 1 */

// <0175EF89> ../public/raytrace/raytrace.h:690
// variables: 2
inline void RayTracingResultMulti_t::Result(int nRayIdx, int nResultIdx)
{
	const char   __FUNCTION__; // 1625
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 690
	}
} /* size: 0, variables: 1 */

// <06350809> ../public/raytrace/raytrace.h:692
// variable: 1
inline void RayTracingResultMulti_t::MergeInResult(const RayTracingResultMulti_t& other)
{
	{
		int i; // 694
	}
} /* size: 0 */

// <0618BC56> ../public/raytrace/raytrace.h:736
// member functions: 4
// member variables: 5
// class size: 1,072
class CFilteredRayStream<CFilterSkipFlags> {
private:
	RayTracingSingleResult_t * PendingStreamOutputs[8][4]; /* 0 256 */
	int n_in_stream[8]; /* 256 32 */
	FourRays PendingRays[8]; /* 288 768 */
	RTECullMode_t m_cullMode; /* 1056 4 */
	CFilterSkipFlags m_filter; /* 1060 4 */
	/* ../public/raytrace/raytrace.h:748 */
	void CFilteredRayStream(CFilteredRayStream<CFilterSkipFlags>* , RTECullMode_t, CFilterSkipFlags);
	/* ../public/raytrace/raytrace.h:752 */
	void SetCullMode(CFilteredRayStream<CFilterSkipFlags>* , RTECullMode_t);
	void CFilteredRayStream(class CFilteredRayStream<CFilterSkipFlags> *, enum RTECullMode_t, class CFilterSkipFlags); /* linkage=_ZN18CFilteredRayStreamI16CFilterSkipFlagsEC4E13RTECullMode_tS0_ */
	void SetCullMode(class CFilteredRayStream<CFilterSkipFlags> *, enum RTECullMode_t); /* linkage=_ZN18CFilteredRayStreamI16CFilterSkipFlagsE11SetCullModeE13RTECullMode_t */
};

// <0624525F> ../public/raytrace/raytrace.h:736
// member functions: 2
// member variables: 5
// class size: 1,072
class CFilteredRayStream<CFilterNone> {
private:
	RayTracingSingleResult_t * PendingStreamOutputs[8][4]; /* 0 256 */
	int n_in_stream[8]; /* 256 32 */
	FourRays PendingRays[8]; /* 288 768 */
	RTECullMode_t m_cullMode; /* 1056 4 */
	CFilterNone m_filter; /* 1060 0 */
	/* ../public/raytrace/raytrace.h:748 */
	void CFilteredRayStream(CFilteredRayStream<CFilterNone>* , RTECullMode_t, CFilterNone);
	/* ../public/raytrace/raytrace.h:752 */
	void SetCullMode(CFilteredRayStream<CFilterNone>* , RTECullMode_t);
};

// <0627FF2C> ../public/raytrace/raytrace.h:736
// member functions: 4
// member variables: 5
// class size: 1,184
class CFilteredRayStream<CFilterTags> {
private:
	RayTracingSingleResult_t * PendingStreamOutputs[8][4]; /* 0 256 */
	int n_in_stream[8]; /* 256 32 */
	FourRays PendingRays[8]; /* 288 768 */
	RTECullMode_t m_cullMode; /* 1056 4 */
	CFilterTags m_filter; /* 1064 112 */
	/* ../public/raytrace/raytrace.h:748 */
	void CFilteredRayStream(CFilteredRayStream<CFilterTags>* , RTECullMode_t, CFilterTags);
	/* ../public/raytrace/raytrace.h:752 */
	void SetCullMode(CFilteredRayStream<CFilterTags>* , RTECullMode_t);
	void CFilteredRayStream(class CFilteredRayStream<CFilterTags> *, enum RTECullMode_t, class CFilterTags); /* linkage=_ZN18CFilteredRayStreamI11CFilterTagsEC4E13RTECullMode_tS0_ */
	void SetCullMode(class CFilteredRayStream<CFilterTags> *, enum RTECullMode_t); /* linkage=_ZN18CFilteredRayStreamI11CFilterTagsE11SetCullModeE13RTECullMode_t */
};

// <062818BF> ../public/raytrace/raytrace.h:736
// member functions: 2
// member variables: 5
// class size: 1,072
class CFilteredRayStream<CFilterSkipID> {
private:
	RayTracingSingleResult_t * PendingStreamOutputs[8][4]; /* 0 256 */
	int n_in_stream[8]; /* 256 32 */
	FourRays PendingRays[8]; /* 288 768 */
	RTECullMode_t m_cullMode; /* 1056 4 */
	CFilterSkipID m_filter; /* 1060 4 */
	/* ../public/raytrace/raytrace.h:748 */
	void CFilteredRayStream(CFilteredRayStream<CFilterSkipID>* , RTECullMode_t, CFilterSkipID);
	/* ../public/raytrace/raytrace.h:752 */
	void SetCullMode(CFilteredRayStream<CFilterSkipID>* , RTECullMode_t);
};

// <06281982> ../public/raytrace/raytrace.h:736
// member functions: 2
// member variables: 5
// class size: 1,072
class CFilteredRayStream<CFilterRequireFlags> {
private:
	RayTracingSingleResult_t * PendingStreamOutputs[8][4]; /* 0 256 */
	int n_in_stream[8]; /* 256 32 */
	FourRays PendingRays[8]; /* 288 768 */
	RTECullMode_t m_cullMode; /* 1056 4 */
	CFilterRequireFlags m_filter; /* 1060 4 */
	/* ../public/raytrace/raytrace.h:748 */
	void CFilteredRayStream(CFilteredRayStream<CFilterRequireFlags>* , RTECullMode_t, CFilterRequireFlags);
	/* ../public/raytrace/raytrace.h:752 */
	void SetCullMode(CFilteredRayStream<CFilterRequireFlags>* , RTECullMode_t);
};

// <06312F01> ../public/raytrace/raytrace.h:748
void CFilteredRayStream<CFilterTags>::CFilteredRayStream(RTECullMode_t cullMode, CFilterTags filter)
{
} /* size: 0 */

// <06312ECE> ../public/raytrace/raytrace.h:748
inline void CFilteredRayStream<CFilterTags>::CFilteredRayStream(RTECullMode_t cullMode, CFilterTags filter)
{
} /* size: 0 */

// <06191383> ../public/raytrace/raytrace.h:748
void CFilteredRayStream<CFilterSkipFlags>::CFilteredRayStream(RTECullMode_t cullMode, CFilterSkipFlags filter)
{
} /* size: 0 */

// <06191350> ../public/raytrace/raytrace.h:748
inline void CFilteredRayStream<CFilterSkipFlags>::CFilteredRayStream(RTECullMode_t cullMode, CFilterSkipFlags filter)
{
} /* size: 0 */

// <000ACF6E> ../public/raytrace/raytrace.h:775
// member variables: 6
// struct size: 24
struct SplitStats_t {
	float m_flCost; /* 0 4 */
	float m_flSplitValue; /* 4 4 */
	int m_nNumTrisOnLeftOfSplitPlane; /* 8 4 */
	int m_nNumTrisOnRightOfSplitPlane; /* 12 4 */
	int m_nNumTrisStraddlingSplitPlane; /* 16 4 */
	int m_nAxisIndexOfSplitPlane; /* 20 4 */
};

// <0630FDBE> ../public/raytrace/raytrace.h:786
void InstancedRayTracingEnvironmentBVHNode_t::InstancedRayTracingEnvironmentBVHNode_t()
{
} /* size: 0 */

// <0630FDA1> ../public/raytrace/raytrace.h:786
inline void InstancedRayTracingEnvironmentBVHNode_t::InstancedRayTracingEnvironmentBVHNode_t()
{
} /* size: 0 */

// <000ACFDD> ../public/raytrace/raytrace.h:786
// member variables: 5
// struct size: 48
struct InstancedRayTracingEnvironmentBVHNode_t {
	VectorAligned m_vAABBMin __attribute__((__aligned__(16))); /* 0 16 */
	VectorAligned m_vAABBMax __attribute__((__aligned__(16))); /* 16 16 */
	int m_nFirstChildOrInstancesStart; /* 32 4 */
	int m_nSecondChildOrInstancesEnd; /* 36 4 */
	bool m_bInterior; /* 40 1 */
} __attribute__((__aligned__(16)));

// <060C62D3> ../public/raytrace/raytrace.h:800
// variables: 5
// function calls: 152
void RayTracingEnvironment::~RayTracingEnvironment()
{
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
	CUtlMemory<int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 800
	CUtlVectorBase<RayTracingEnvironment::RemoveAll(); // 1798
	CUtlMemory<RayTracingEnvironment::IsExternallyAllocated(); // 905
	CUtlMemory<RayTracingEnvironment::Purge(); // 903
	CUtlMemory<RayTracingEnvironment::Purge(); // 1799
	CUtlVectorBase<RayTracingEnvironment::Purge(); // 560
	ValidateAlignment<RayTracingEnvironment*>(void); // 508
	CUtlMemory<RayTracingEnvironment::Purge(); // 510
	CUtlMemory<RayTracingEnvironment::~CUtlMemory(); // 562
	CUtlVectorBase<RayTracingEnvironment::~CUtlVectorBase(); // 410
	CUtlVector<RayTracingEnvironment::~CUtlVector(); // 800
	{
		int i; // 1807
		CUtlMemory<InstancedRayTracingEnvironmentReference_t::operator[](
				int i);  // 602
		CUtlVectorBase<InstancedRayTracingEnvironmentReference_t::Element(
			int i);  // 1809
		CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::RemoveAll(); // 1798
		CUtlMemory<long long unsigned int, int>::IsExternallyAllocated(); // 905
		CUtlMemory<long long unsigned int, int>::Purge(); // 903
		CUtlMemory<long long unsigned int, int>::Purge(); // 1799
		CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::Purge(); // 560
		ValidateAlignment<long long unsigned int>(void); // 508
		CUtlMemory<long long unsigned int, int>::Purge(); // 510
		CUtlMemory<long long unsigned int, int>::~CUtlMemory(); // 562
		CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::~CUtlVectorBase(); // 410
		CUtlVector<long long unsigned int, CUtlMemory<long long unsigned int, int> >::~CUtlVector(); // 299
		CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::RemoveAll(); // 1798
		CUtlMemory<long long unsigned int, int>::IsExternallyAllocated(); // 905
		CUtlMemory<long long unsigned int, int>::Purge(); // 903
		CUtlMemory<long long unsigned int, int>::Purge(); // 1799
		CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::Purge(); // 560
		ValidateAlignment<long long unsigned int>(void); // 508
		CUtlMemory<long long unsigned int, int>::Purge(); // 510
		CUtlMemory<long long unsigned int, int>::~CUtlMemory(); // 562
		CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::~CUtlVectorBase(); // 410
		CUtlVector<long long unsigned int, CUtlMemory<long long unsigned int, int> >::~CUtlVector(); // 299
		CRaytraceMaterialRemapTable::~CRaytraceMaterialRemapTable(); // 338
		InstancedRayTracingEnvironmentReference_t::~InstancedRayTracingEnvironmentReference_t(); // 1809
	}
	CUtlVectorBase<InstancedRayTracingEnvironmentReference_t::RemoveAll(); // 1798
	CUtlMemory<InstancedRayTracingEnvironmentReference_t::IsExternallyAllocated(); // 905
	CUtlMemory<InstancedRayTracingEnvironmentReference_t::Purge(); // 903
	CUtlMemory<InstancedRayTracingEnvironmentReference_t::Purge(); // 1799
	CUtlVectorBase<InstancedRayTracingEnvironmentReference_t::ResetDbgInfo(); // 1800
	CUtlVectorBase<InstancedRayTracingEnvironmentReference_t::Purge(); // 1811
	CUtlVectorBase<InstancedRayTracingEnvironmentReference_t::PurgeAndDeleteElements(); // 1900
	CUtlVectorBase<InstancedRayTracingEnvironmentReference_t::RemoveAll(); // 1798
	CUtlVectorBase<InstancedRayTracingEnvironmentReference_t::Purge(); // 560
	ValidateAlignment<InstancedRayTracingEnvironmentReference_t*>(void); // 508
	CUtlMemory<InstancedRayTracingEnvironmentReference_t::Purge(); // 510
	CUtlMemory<InstancedRayTracingEnvironmentReference_t::~CUtlMemory(); // 562
	CUtlVectorBase<InstancedRayTracingEnvironmentReference_t::~CUtlVectorBase(); // 410
	CUtlVector<InstancedRayTracingEnvironmentReference_t::~CUtlVector(); // 1901
	CUtlVectorAutoPurge<InstancedRayTracingEnvironmentReference_t::~CUtlVectorAutoPurge(); // 800
	RemoveAll(const CUtlVectorBase<InstancedRayTracingEnvironmentBVHNode_t, CUtlMemory<InstancedRayTracingEnvironmentBVHNode_t, int> > this); // 1798
	CUtlMemory<InstancedRayTracingEnvironmentBVHNode_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<InstancedRayTracingEnvironmentBVHNode_t, int>::Purge(); // 903
	CUtlMemory<InstancedRayTracingEnvironmentBVHNode_t, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<InstancedRayTracingEnvironmentBVHNode_t, CUtlMemory<InstancedRayTracingEnvironmentBVHNode_t, int> > this); // 560
	ValidateAlignment<InstancedRayTracingEnvironmentBVHNode_t>(void); // 508
	CUtlMemory<InstancedRayTracingEnvironmentBVHNode_t, int>::Purge(); // 510
	CUtlMemory<InstancedRayTracingEnvironmentBVHNode_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<InstancedRayTracingEnvironmentBVHNode_t, CUtlMemory<InstancedRayTracingEnvironmentBVHNode_t, int> > this); // 410
	CUtlVector<InstancedRayTracingEnvironmentBVHNode_t, CUtlMemory<InstancedRayTracingEnvironmentBVHNode_t, int> >::~CUtlVector(); // 800
	CUtlVectorBase<TraceVertex_t::RemoveAll(); // 1798
	CUtlMemory<TraceVertex_t::IsExternallyAllocated(); // 905
	CUtlMemory<TraceVertex_t::Purge(); // 903
	CUtlMemory<TraceVertex_t::Purge(); // 1799
	CUtlVectorBase<TraceVertex_t::Purge(); // 560
	ValidateAlignment<TraceVertex_t*>(void); // 508
	CUtlMemory<TraceVertex_t::Purge(); // 510
	CUtlMemory<TraceVertex_t::~CUtlMemory(); // 562
	CUtlVectorBase<TraceVertex_t::~CUtlVectorBase(); // 410
	CUtlVector<TraceVertex_t::~CUtlVector(); // 800
	{
		int i; // 1721
		CUtlBlockMemory<Vector2D, int>::MajorIndex(
				int i);  // 243
		CUtlBlockMemory<Vector2D, int>::IsIdxValid(
				int i);  // 191
		{
		}
		CUtlBlockMemory<Vector2D, int>::operator[](
				int i);  // 602
		CUtlVectorBase<Vector2D, CUtlBlockMemory<Vector2D, int> >::Element(
			int i);  // 1723
	}
	CUtlVectorBase<Vector2D, CUtlBlockMemory<Vector2D, int> >::RemoveAll(); // 1798
	{
		int i; // 359
	}
	CUtlBlockMemory<Vector2D, int>::Purge(); // 354
	CUtlBlockMemory<Vector2D, int>::Purge(); // 1799
	CUtlVectorBase<Vector2D, CUtlBlockMemory<Vector2D, int> >::Purge(); // 560
	CUtlBlockMemory<Vector2D, int>::Purge(); // 132
	CUtlBlockMemory<Vector2D, int>::~CUtlBlockMemory(); // 562
	CUtlVectorBase<Vector2D, CUtlBlockMemory<Vector2D, int> >::~CUtlVectorBase(); // 10
	CUtlBlockVector<Vector2D, int>::~CUtlBlockVector(); // 800
	CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::RemoveAll(); // 1798
	CUtlMemory<long long unsigned int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<long long unsigned int, int>::Purge(); // 903
	CUtlMemory<long long unsigned int, int>::Purge(); // 1799
	CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::Purge(); // 560
	ValidateAlignment<long long unsigned int>(void); // 508
	CUtlMemory<long long unsigned int, int>::Purge(); // 510
	CUtlMemory<long long unsigned int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<long long unsigned int, CUtlMemory<long long unsigned int, int> >::~CUtlVector(); // 800
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::RemoveAll(); // 1798
	CUtlMemory<Vector, int>::IsExternallyAllocated(); // 905
	CUtlMemory<Vector, int>::Purge(); // 903
	CUtlMemory<Vector, int>::Purge(); // 1799
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Purge(); // 560
	ValidateAlignment<Vector>(void); // 508
	CUtlMemory<Vector, int>::Purge(); // 510
	CUtlMemory<Vector, int>::~CUtlMemory(); // 562
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Vector, CUtlMemory<Vector, int> >::~CUtlVector(); // 800
	{
		int i; // 1721
		CUtlMemory<LightDesc_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<LightDesc_t, CUtlMemory<LightDesc_t, int> >::Element(
			int i);  // 1723
		CStrongHandle<InfoForResourceTypeCTextureBase>::~CStrongHandle(); // 211
		CStrongHandleCopyable<InfoForResourceTypeCTextureBase>::~CStrongHandleCopyable(); // 76
		LightDesc_t::~LightDesc_t(); // 1526
		Destruct<LightDesc_t>(LightDesc_t* pMemory); // 1723
	}
	CUtlVectorBase<LightDesc_t, CUtlMemory<LightDesc_t, int> >::RemoveAll(); // 1798
	CUtlMemory<LightDesc_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<LightDesc_t, int>::Purge(); // 903
	CUtlMemory<LightDesc_t, int>::Purge(); // 1799
	CUtlVectorBase<LightDesc_t, CUtlMemory<LightDesc_t, int> >::Purge(); // 560
	ValidateAlignment<LightDesc_t>(void); // 508
	CUtlMemory<LightDesc_t, int>::Purge(); // 510
	CUtlMemory<LightDesc_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<LightDesc_t, CUtlMemory<LightDesc_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<LightDesc_t, CUtlMemory<LightDesc_t, int> >::~CUtlVector(); // 800
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
	CUtlMemory<int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 800
	CUtlVectorBase<CacheOptimizedTriangle_t, CUtlBlockMemory<CacheOptimizedTriangle_t, int> >::RemoveAll(); // 1798
	{
		int i; // 359
	}
	CUtlBlockMemory<CacheOptimizedTriangle_t, int>::Purge(); // 354
	CUtlBlockMemory<CacheOptimizedTriangle_t, int>::Purge(); // 1799
	CUtlVectorBase<CacheOptimizedTriangle_t, CUtlBlockMemory<CacheOptimizedTriangle_t, int> >::Purge(); // 560
	CUtlBlockMemory<CacheOptimizedTriangle_t, int>::Purge(); // 132
	CUtlBlockMemory<CacheOptimizedTriangle_t, int>::~CUtlBlockMemory(); // 562
	CUtlVectorBase<CacheOptimizedTriangle_t, CUtlBlockMemory<CacheOptimizedTriangle_t, int> >::~CUtlVectorBase(); // 10
	CUtlBlockVector<CacheOptimizedTriangle_t, int>::~CUtlBlockVector(); // 800
	CUtlVectorBase<CacheOptimizedKDNode_t, CUtlMemory<CacheOptimizedKDNode_t, int> >::RemoveAll(); // 1798
	CUtlMemory<CacheOptimizedKDNode_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CacheOptimizedKDNode_t, int>::Purge(); // 903
	CUtlMemory<CacheOptimizedKDNode_t, int>::Purge(); // 1799
	CUtlVectorBase<CacheOptimizedKDNode_t, CUtlMemory<CacheOptimizedKDNode_t, int> >::Purge(); // 560
	CUtlVectorBase<CacheOptimizedKDNode_t, CUtlMemory<CacheOptimizedKDNode_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CacheOptimizedKDNode_t, CUtlMemory<CacheOptimizedKDNode_t, int> >::~CUtlVector(); // 800
} /* size: 957, inline expansions: 118 (3674 bytes) */

// <060C62B6> ../public/raytrace/raytrace.h:800
inline void RayTracingEnvironment::~RayTracingEnvironment()
{
} /* size: 0 */

// <000AAB00> ../public/raytrace/raytrace.h:800
// member functions: 148
// member variables: 21
// class size: 528
class RayTracingEnvironment {
	uint32 m_nFlags; /* 0 4 */
	Vector m_vMinBound; /* 4 12 */
	Vector m_vMaxBound; /* 16 12 */
	void * m_pUserData; /* 32 8 */
	FourVectors m_v4BackgroundColor; /* 48 48 */
	CUtlVector<CacheOptimizedKDNode_t, CUtlMemory<CacheOptimizedKDNode_t, int> > m_optimizedKDTree; /* 96 32 */
	CUtlBlockVector<CacheOptimizedTriangle_t, int> m_optimizedTriangleList; /* 128 32 */
	CUtlVector<int, CUtlMemory<int, int> > m_triangleIndexList; /* 160 32 */
	CUtlVector<LightDesc_t, CUtlMemory<LightDesc_t, int> > m_lightList; /* 192 32 */
	CUtlVector<Vector, CUtlMemory<Vector, int> > m_triangleColors; /* 224 32 */
	CUtlVector<long long unsigned int, CUtlMemory<long long unsigned int, int> > m_triangleMaterials; /* 256 32 */
	CUtlBlockVector<Vector2D, int> m_texcoord0; /* 288 32 */
	CUtlVector<TraceVertex_t*, CUtlMemory<TraceVertex_t*, int> > m_vertices; /* 320 32 */
	bool m_bChildHierarchyUpToDate; /* 352 1 */
	CUtlVector<InstancedRayTracingEnvironmentBVHNode_t, CUtlMemory<InstancedRayTracingEnvironmentBVHNode_t, int> > m_childInstanceBVHNodes; /* 360 32 */
	CUtlVectorAutoPurge<InstancedRayTracingEnvironmentReference_t*> m_childInstances; /* 392 32 */
	CUtlVector<RayTracingEnvironment*, CUtlMemory<RayTracingEnvironment*, int> > m_parentEnvironments; /* 424 32 */
	CUtlVector<int, CUtlMemory<int, int> > m_parentEnvironmentCounts; /* 456 32 */
	CThreadFastMutex m_mutexUsedDuringBuild; /* 488 24 */
	bool m_bNeverSplit; /* 512 1 */
	bool m_bHighQualityLighting; /* 513 1 */
	/* ../public/raytrace/raytrace.h:831 */
	void RayTracingEnvironment(RayTracingEnvironment* );
	/* ../public/raytrace/raytrace.h:846 */
	InstancedRayTracingEnvironmentReference_t* AddInstancedEnv(RayTracingEnvironment* , RayTracingEnvironment* , const matrix3x4a_t& , void* );
	/* ../public/raytrace/raytrace.h:848 */
	void RemoveInstancedEnv(RayTracingEnvironment* , InstancedRayTracingEnvironmentReference_t* );
	/* ../public/raytrace/raytrace.h:849 */
	void SetChildTransform(RayTracingEnvironment* , InstancedRayTracingEnvironmentReference_t* , const matrix3x4a_t& );
	/* ../public/raytrace/raytrace.h:851 */
	int AddTriangle(RayTracingEnvironment* , int32, TraceVertex_t* , TraceVertex_t* , TraceVertex_t* , uint16, uint64);
	/* ../public/raytrace/raytrace.h:854 */
	int AddTriangle(RayTracingEnvironment* , int32, const Vector& , const Vector& , const Vector& , const Vector& );
	/* ../public/raytrace/raytrace.h:858 */
	int AddTriangle(RayTracingEnvironment* , int32, const Vector& , const Vector& , const Vector& , const Vector& , uint16, uint64);
	/* ../public/raytrace/raytrace.h:862 */
	void SetTexcoord0(RayTracingEnvironment* , int, const Vector2D& , const Vector2D& , const Vector2D& );
	/* ../public/raytrace/raytrace.h:865 */
	int AddQuad(RayTracingEnvironment* , int32, const Vector& , const Vector& , const Vector& , const Vector& , const Vector& );
	/* ../public/raytrace/raytrace.h:870 */
	void AddAxisAlignedRectangularSolid(RayTracingEnvironment* , int, Vector, Vector, const Vector& );
	/* ../public/raytrace/raytrace.h:874 */
	int NumTriangles(const RayTracingEnvironment* );
	/* ../public/raytrace/raytrace.h:877 */
	void SetupAccelerationStructure(RayTracingEnvironment* );
	/* ../public/raytrace/raytrace.h:880 */
	void ClearAllTriangles(RayTracingEnvironment* );
	/* ../public/raytrace/raytrace.h:884 */
	bool EnsureInstanceAccelerationStructureUpToDate(RayTracingEnvironment* );
	/* ../public/raytrace/raytrace.h:933 */
	void ComputeVirtualLightSources(RayTracingEnvironment* );
	/* ../public/raytrace/raytrace.h:937 */
	float IntersectRayWithTrianglePlane(const RayTracingEnvironment* , const Vector& , const Vector& , int);
	/* ../public/raytrace/raytrace.h:941 */
	void RenderScene(RayTracingEnvironment* , int, int, int, uint32* , Vector, Vector, Vector, Vector, Vector, RayTraceLightingMode_t);
	/* ../public/raytrace/raytrace.h:968 */
	void AddInfinitePointLight(RayTracingEnvironment* , Vector, Vector);
	/* ../public/raytrace/raytrace.h:973 */
	void MakeRoomForTriangles(RayTracingEnvironment* , int);
	/* ../public/raytrace/raytrace.h:975 */
	const CacheOptimizedTriangle_t& GetTriangle(const RayTracingEnvironment* , int32);
	/* ../public/raytrace/raytrace.h:980 */
	uint64 GetTriangleMaterial(const RayTracingEnvironment* , int32);
	/* ../public/raytrace/raytrace.h:984 */
	const Vector& GetTriangleColor(const RayTracingEnvironment* , int);
	/* ../public/raytrace/raytrace.h:990 */
	size_t GetSerializationNumBytes(const RayTracingEnvironment* , uint32);
	/* ../public/raytrace/raytrace.h:991 */
	void Serialize(const RayTracingEnvironment* , CUtlBuffer& , uint32);
	/* ../public/raytrace/raytrace.h:992 */
	bool UnSerialize(RayTracingEnvironment* , CUtlBuffer& );
	/* ../public/raytrace/raytrace.h:995 */
	void OutputTrianglesAsText(RayTracingEnvironment* , const char* );
	/* ../public/raytrace/raytrace.h:998 */
	void ReadTrianglesFromTextFile(RayTracingEnvironment* , const char* , int);
	/* ../public/raytrace/raytrace.h:1002 */
	void TrianglesInBox(RayTracingEnvironment* , CUtlVector<int, CUtlMemory<int, int> >& , const Vector& , const Vector& , uint16);
private:
	/* ../public/raytrace/raytrace.h:1005 */
	void TrianglesInBox_r(RayTracingEnvironment* , CUtlVector<int, CUtlMemory<int, int> >& , int, const Vector& , const Vector& , uint16);
	/* ../public/raytrace/raytrace.h:1006 */
	void TrianglesInBox(RayTracingEnvironment* , CUtlVector<int, CUtlMemory<int, int> >& , const CacheOptimizedKDNode_t* , const Vector& , const Vector& , uint16);
	/* ../public/raytrace/raytrace.h:1008 */
	int MakeLeafNode(RayTracingEnvironment* , int, int);
	/* ../public/raytrace/raytrace.h:1011 */
	void FindBestAxisVertexSplit(const RayTracingEnvironment* , int, int, SplitStats_t* , const int32* , int, const TriangleBounds_t* , Vector, Vector);
	/* ../public/raytrace/raytrace.h:1017 */
	void CalculateCostsOfSplit(const RayTracingEnvironment* , SplitStats_t& , const int32* , int, const TriangleBounds_t* , Vector, Vector);
	/* ../public/raytrace/raytrace.h:1020 */
	void RefineNode(RayTracingEnvironment* , int, const int32* , int, const TriangleBounds_t* , Vector, Vector, int, CUtlMultiJobProcessor* );
	/* ../public/raytrace/raytrace.h:1024 */
	void RefineNodeJob(RayTracingEnvironment* , int, const int32* , int, const TriangleBounds_t* , Vector, Vector, int, CUtlMultiJobProcessor* );
	/* ../public/raytrace/raytrace.h:1028 */
	void RenderSceneYRange(RayTracingEnvironment* , int, int, int, int, int, uint32* , Vector, Vector, Vector, Vector, Vector, RayTraceLightingMode_t);
	bool :8;
	bool :8;
	bool :8;
	bool :8;
	bool :8;
	bool :8;
	bool :8;
	bool :8;
	bool :8;
	bool :8;
	bool :8;
	bool :8;
	bool :8;
	bool :8;
	void RayTracingEnvironment(class RayTracingEnvironment *); /* linkage=_ZN21RayTracingEnvironmentC4Ev */
	class InstancedRayTracingEnvironmentReference_t * AddInstancedEnv(class RayTracingEnvironment *, class RayTracingEnvironment *, const class matrix3x4a_t  &, void *); /* linkage=_ZN21RayTracingEnvironment15AddInstancedEnvEPS_RK12matrix3x4a_tPv */
	void RemoveInstancedEnv(class RayTracingEnvironment *, class InstancedRayTracingEnvironmentReference_t *); /* linkage=_ZN21RayTracingEnvironment18RemoveInstancedEnvEP41InstancedRayTracingEnvironmentReference_t */
	void SetChildTransform(class RayTracingEnvironment *, class InstancedRayTracingEnvironmentReference_t *, const class matrix3x4a_t  &); /* linkage=_ZN21RayTracingEnvironment17SetChildTransformEP41InstancedRayTracingEnvironmentReference_tRK12matrix3x4a_t */
	int AddTriangle(class RayTracingEnvironment *, int32, class TraceVertex_t *, class TraceVertex_t *, class TraceVertex_t *, uint16, uint64); /* linkage=_ZN21RayTracingEnvironment11AddTriangleEiP13TraceVertex_tS1_S1_ty */
	/* <6398d87> raytrace/raytrace.cpp:337 */
	int AddTriangle(class RayTracingEnvironment *, int32, const class Vector  &, const class Vector  &, const class Vector  &, const class Vector  &); /* linkage=_ZN21RayTracingEnvironment11AddTriangleEiRK6VectorS2_S2_S2_ */
	int AddTriangle(class RayTracingEnvironment *, int32, const class Vector  &, const class Vector  &, const class Vector  &, const class Vector  &, uint16, uint64); /* linkage=_ZN21RayTracingEnvironment11AddTriangleEiRK6VectorS2_S2_S2_ty */
	void SetTexcoord0(class RayTracingEnvironment *, int, const class Vector2D  &, const class Vector2D  &, const class Vector2D  &); /* linkage=_ZN21RayTracingEnvironment12SetTexcoord0EiRK8Vector2DS2_S2_ */
	/* <6398e31> raytrace/raytrace.cpp:389 */
	int AddQuad(class RayTracingEnvironment *, int32, const class Vector  &, const class Vector  &, const class Vector  &, const class Vector  &, const class Vector  &); /* linkage=_ZN21RayTracingEnvironment7AddQuadEiRK6VectorS2_S2_S2_S2_ */
	void AddAxisAlignedRectangularSolid(class RayTracingEnvironment *, int, class Vector, class Vector, const class Vector  &); /* linkage=_ZN21RayTracingEnvironment30AddAxisAlignedRectangularSolidEi6VectorS0_RKS0_ */
	int NumTriangles(const class RayTracingEnvironment  *); /* linkage=_ZNK21RayTracingEnvironment12NumTrianglesEv */
	void SetupAccelerationStructure(class RayTracingEnvironment *); /* linkage=_ZN21RayTracingEnvironment26SetupAccelerationStructureEv */
	void ClearAllTriangles(class RayTracingEnvironment *); /* linkage=_ZN21RayTracingEnvironment17ClearAllTrianglesEv */
	bool EnsureInstanceAccelerationStructureUpToDate(class RayTracingEnvironment *); /* linkage=_ZN21RayTracingEnvironment43EnsureInstanceAccelerationStructureUpToDateEv */
	void ComputeVirtualLightSources(class RayTracingEnvironment *); /* linkage=_ZN21RayTracingEnvironment26ComputeVirtualLightSourcesEv */
	float IntersectRayWithTrianglePlane(const class RayTracingEnvironment  *, const class Vector  &, const class Vector  &, int); /* linkage=_ZNK21RayTracingEnvironment29IntersectRayWithTrianglePlaneERK6VectorS2_i */
	void RenderScene(class RayTracingEnvironment *, int, int, int, uint32 *, class Vector, class Vector, class Vector, class Vector, class Vector, enum RayTraceLightingMode_t); /* linkage=_ZN21RayTracingEnvironment11RenderSceneEiiiPj6VectorS1_S1_S1_S1_22RayTraceLightingMode_t */
	void AddInfinitePointLight(class RayTracingEnvironment *, class Vector, class Vector); /* linkage=_ZN21RayTracingEnvironment21AddInfinitePointLightE6VectorS0_ */
	void MakeRoomForTriangles(class RayTracingEnvironment *, int); /* linkage=_ZN21RayTracingEnvironment20MakeRoomForTrianglesEi */
	const class CacheOptimizedTriangle_t  & GetTriangle(const class RayTracingEnvironment  *, int32); /* linkage=_ZNK21RayTracingEnvironment11GetTriangleEi */
	uint64 GetTriangleMaterial(const class RayTracingEnvironment  *, int32); /* linkage=_ZNK21RayTracingEnvironment19GetTriangleMaterialEi */
	const class Vector  & GetTriangleColor(const class RayTracingEnvironment  *, int); /* linkage=_ZNK21RayTracingEnvironment16GetTriangleColorEi */
	size_t GetSerializationNumBytes(const class RayTracingEnvironment  *, uint32); /* linkage=_ZNK21RayTracingEnvironment24GetSerializationNumBytesEj */
	void Serialize(const class RayTracingEnvironment  *, class CUtlBuffer &, uint32); /* linkage=_ZNK21RayTracingEnvironment9SerializeER10CUtlBufferj */
	bool UnSerialize(class RayTracingEnvironment *, class CUtlBuffer &); /* linkage=_ZN21RayTracingEnvironment11UnSerializeER10CUtlBuffer */
	void OutputTrianglesAsText(class RayTracingEnvironment *, const char  *); /* linkage=_ZN21RayTracingEnvironment21OutputTrianglesAsTextEPKc */
	void ReadTrianglesFromTextFile(class RayTracingEnvironment *, const char  *, int); /* linkage=_ZN21RayTracingEnvironment25ReadTrianglesFromTextFileEPKci */
	void TrianglesInBox(class RayTracingEnvironment *, class CUtlVector<int, CUtlMemory<int, int> > &, const class Vector  &, const class Vector  &, uint16); /* linkage=_ZN21RayTracingEnvironment14TrianglesInBoxER10CUtlVectorIi10CUtlMemoryIiiEERK6VectorS7_t */
	void TrianglesInBox_r(class RayTracingEnvironment *, class CUtlVector<int, CUtlMemory<int, int> > &, int, const class Vector  &, const class Vector  &, uint16); /* linkage=_ZN21RayTracingEnvironment16TrianglesInBox_rER10CUtlVectorIi10CUtlMemoryIiiEEiRK6VectorS7_t */
	void TrianglesInBox(class RayTracingEnvironment *, class CUtlVector<int, CUtlMemory<int, int> > &, const class CacheOptimizedKDNode_t  *, const class Vector  &, const class Vector  &, uint16); /* linkage=_ZN21RayTracingEnvironment14TrianglesInBoxER10CUtlVectorIi10CUtlMemoryIiiEEPK22CacheOptimizedKDNode_tRK6VectorSA_t */
	int MakeLeafNode(class RayTracingEnvironment *, int, int); /* linkage=_ZN21RayTracingEnvironment12MakeLeafNodeEii */
	void FindBestAxisVertexSplit(const class RayTracingEnvironment  *, int, int, class SplitStats_t *, const int32  *, int, const class TriangleBounds_t  *, class Vector, class Vector); /* linkage=_ZNK21RayTracingEnvironment23FindBestAxisVertexSplitEiiP12SplitStats_tPKiiPK16TriangleBounds_t6VectorS7_ */
	void CalculateCostsOfSplit(const class RayTracingEnvironment  *, class SplitStats_t &, const int32  *, int, const class TriangleBounds_t  *, class Vector, class Vector); /* linkage=_ZNK21RayTracingEnvironment21CalculateCostsOfSplitER12SplitStats_tPKiiPK16TriangleBounds_t6VectorS7_ */
	void RefineNode(class RayTracingEnvironment *, int, const int32  *, int, const class TriangleBounds_t  *, class Vector, class Vector, int, class CUtlMultiJobProcessor *); /* linkage=_ZN21RayTracingEnvironment10RefineNodeEiPKiiPK16TriangleBounds_t6VectorS5_iP21CUtlMultiJobProcessor */
	/* <637c606> raytrace/raytrace.cpp:1421 */
	void RefineNodeJob(class RayTracingEnvironment *, int, const int32  *, int, const class TriangleBounds_t  *, class Vector, class Vector, int, class CUtlMultiJobProcessor *); /* linkage=_ZN21RayTracingEnvironment13RefineNodeJobEiPKiiPK16TriangleBounds_t6VectorS5_iP21CUtlMultiJobProcessor */
	void RenderSceneYRange(class RayTracingEnvironment *, int, int, int, int, int, uint32 *, class Vector, class Vector, class Vector, class Vector, class Vector, enum RayTraceLightingMode_t); /* linkage=_ZN21RayTracingEnvironment17RenderSceneYRangeEiiiiiPj6VectorS1_S1_S1_S1_22RayTraceLightingMode_t */
	void ~RayTracingEnvironment(class RayTracingEnvironment *); /* linkage=_ZN21RayTracingEnvironmentD4Ev */
	void Trace4RaysInternal<(RTECullMode_t)0, CFilterRequireFlags, RayTracingResultMulti_t>(const class RayTracingEnvironment  *, const class FourRays  &, fltx4, fltx4, int, class RayTracingResultMulti_t *, class CFilterRequireFlags, class ITransparentTriangleCallback *, const class InstancedRayTracingEnvironmentReference_t  *, const class CRaytraceMaterialRemapTable  *); /* linkage=_ZNK21RayTracingEnvironment18Trace4RaysInternalIL13RTECullMode_t0E19CFilterRequireFlags23RayTracingResultMulti_tEEvRK8FourRaysDv4_fS7_iPT1_T0_P28ITransparentTriangleCallbackPK41InstancedRayTracingEnvironmentReference_tPK27CRaytraceMaterialRemapTable */
	void Trace4RaysInternal<(RTECullMode_t)2, CFilterRequireFlags, RayTracingResultMulti_t>(const class RayTracingEnvironment  *, const class FourRays  &, fltx4, fltx4, int, class RayTracingResultMulti_t *, class CFilterRequireFlags, class ITransparentTriangleCallback *, const class InstancedRayTracingEnvironmentReference_t  *, const class CRaytraceMaterialRemapTable  *); /* linkage=_ZNK21RayTracingEnvironment18Trace4RaysInternalIL13RTECullMode_t2E19CFilterRequireFlags23RayTracingResultMulti_tEEvRK8FourRaysDv4_fS7_iPT1_T0_P28ITransparentTriangleCallbackPK41InstancedRayTracingEnvironmentReference_tPK27CRaytraceMaterialRemapTable */
	void Trace4RaysInternal<(RTECullMode_t)1, CFilterRequireFlags, RayTracingResultMulti_t>(const class RayTracingEnvironment  *, const class FourRays  &, fltx4, fltx4, int, class RayTracingResultMulti_t *, class CFilterRequireFlags, class ITransparentTriangleCallback *, const class InstancedRayTracingEnvironmentReference_t  *, const class CRaytraceMaterialRemapTable  *); /* linkage=_ZNK21RayTracingEnvironment18Trace4RaysInternalIL13RTECullMode_t1E19CFilterRequireFlags23RayTracingResultMulti_tEEvRK8FourRaysDv4_fS7_iPT1_T0_P28ITransparentTriangleCallbackPK41InstancedRayTracingEnvironmentReference_tPK27CRaytraceMaterialRemapTable */
	void Trace4RaysInternal<(RTECullMode_t)0, CFilterRequireFlags, RayTracingResult_t>(const class RayTracingEnvironment  *, const class FourRays  &, fltx4, fltx4, int, class RayTracingResult_t *, class CFilterRequireFlags, class ITransparentTriangleCallback *, const class InstancedRayTracingEnvironmentReference_t  *, const class CRaytraceMaterialRemapTable  *); /* linkage=_ZNK21RayTracingEnvironment18Trace4RaysInternalIL13RTECullMode_t0E19CFilterRequireFlags18RayTracingResult_tEEvRK8FourRaysDv4_fS7_iPT1_T0_P28ITransparentTriangleCallbackPK41InstancedRayTracingEnvironmentReference_tPK27CRaytraceMaterialRemapTable */
	void Trace4RaysInternal<(RTECullMode_t)2, CFilterRequireFlags, RayTracingResult_t>(const class RayTracingEnvironment  *, const class FourRays  &, fltx4, fltx4, int, class RayTracingResult_t *, class CFilterRequireFlags, class ITransparentTriangleCallback *, const class InstancedRayTracingEnvironmentReference_t  *, const class CRaytraceMaterialRemapTable  *); /* linkage=_ZNK21RayTracingEnvironment18Trace4RaysInternalIL13RTECullMode_t2E19CFilterRequireFlags18RayTracingResult_tEEvRK8FourRaysDv4_fS7_iPT1_T0_P28ITransparentTriangleCallbackPK41InstancedRayTracingEnvironmentReference_tPK27CRaytraceMaterialRemapTable */
	void Trace4RaysInternal<(RTECullMode_t)1, CFilterRequireFlags, RayTracingResult_t>(const class RayTracingEnvironment  *, const class FourRays  &, fltx4, fltx4, int, class RayTracingResult_t *, class CFilterRequireFlags, class ITransparentTriangleCallback *, const class InstancedRayTracingEnvironmentReference_t  *, const class CRaytraceMaterialRemapTable  *); /* linkage=_ZNK21RayTracingEnvironment18Trace4RaysInternalIL13RTECullMode_t1E19CFilterRequireFlags18RayTracingResult_tEEvRK8FourRaysDv4_fS7_iPT1_T0_P28ITransparentTriangleCallbackPK41InstancedRayTracingEnvironmentReference_tPK27CRaytraceMaterialRemapTable */
	void Trace4RaysInternal<(RTECullMode_t)0, CFilterSkipID, RayTracingResultMulti_t>(const class RayTracingEnvironment  *, const class FourRays  &, fltx4, fltx4, int, class RayTracingResultMulti_t *, class CFilterSkipID, class ITransparentTriangleCallback *, const class InstancedRayTracingEnvironmentReference_t  *, const class CRaytraceMaterialRemapTable  *); /* linkage=_ZNK21RayTracingEnvironment18Trace4RaysInternalIL13RTECullMode_t0E13CFilterSkipID23RayTracingResultMulti_tEEvRK8FourRaysDv4_fS7_iPT1_T0_P28ITransparentTriangleCallbackPK41InstancedRayTracingEnvironmentReference_tPK27CRaytraceMaterialRemapTable */
	void Trace4RaysInternal<(RTECullMode_t)2, CFilterSkipID, RayTracingResultMulti_t>(const class RayTracingEnvironment  *, const class FourRays  &, fltx4, fltx4, int, class RayTracingResultMulti_t *, class CFilterSkipID, class ITransparentTriangleCallback *, const class InstancedRayTracingEnvironmentReference_t  *, const class CRaytraceMaterialRemapTable  *); /* linkage=_ZNK21RayTracingEnvironment18Trace4RaysInternalIL13RTECullMode_t2E13CFilterSkipID23RayTracingResultMulti_tEEvRK8FourRaysDv4_fS7_iPT1_T0_P28ITransparentTriangleCallbackPK41InstancedRayTracingEnvironmentReference_tPK27CRaytraceMaterialRemapTable */
	void Trace4RaysInternal<(RTECullMode_t)1, CFilterSkipID, RayTracingResultMulti_t>(const class RayTracingEnvironment  *, const class FourRays  &, fltx4, fltx4, int, class RayTracingResultMulti_t *, class CFilterSkipID, class ITransparentTriangleCallback *, const class InstancedRayTracingEnvironmentReference_t  *, const class CRaytraceMaterialRemapTable  *); /* linkage=_ZNK21RayTracingEnvironment18Trace4RaysInternalIL13RTECullMode_t1E13CFilterSkipID23RayTracingResultMulti_tEEvRK8FourRaysDv4_fS7_iPT1_T0_P28ITransparentTriangleCallbackPK41InstancedRayTracingEnvironmentReference_tPK27CRaytraceMaterialRemapTable */
	void Trace4RaysInternal<(RTECullMode_t)0, CFilterSkipID, RayTracingResult_t>(const class RayTracingEnvironment  *, const class FourRays  &, fltx4, fltx4, int, class RayTracingResult_t *, class CFilterSkipID, class ITransparentTriangleCallback *, const class InstancedRayTracingEnvironmentReference_t  *, const class CRaytraceMaterialRemapTable  *); /* linkage=_ZNK21RayTracingEnvironment18Trace4RaysInternalIL13RTECullMode_t0E13CFilterSkipID18RayTracingResult_tEEvRK8FourRaysDv4_fS7_iPT1_T0_P28ITransparentTriangleCallbackPK41InstancedRayTracingEnvironmentReference_tPK27CRaytraceMaterialRemapTable */
	void Trace4RaysInternal<(RTECullMode_t)2, CFilterSkipID, RayTracingResult_t>(const class RayTracingEnvironment  *, const class FourRays  &, fltx4, fltx4, int, class RayTracingResult_t *, class CFilterSkipID, class ITransparentTriangleCallback *, const class InstancedRayTracingEnvironmentReference_t  *, const class CRaytraceMaterialRemapTable  *); /* linkage=_ZNK21RayTracingEnvironment18Trace4RaysInternalIL13RTECullMode_t2E13CFilterSkipID18RayTracingResult_tEEvRK8FourRaysDv4_fS7_iPT1_T0_P28ITransparentTriangleCallbackPK41InstancedRayTracingEnvironmentReference_tPK27CRaytraceMaterialRemapTable */
	void Trace4RaysInternal<(RTECullMode_t)1, CFilterSkipID, RayTracingResult_t>(const class RayTracingEnvironment  *, const class FourRays  &, fltx4, fltx4, int, class RayTracingResult_t *, class CFilterSkipID, class ITransparentTriangleCallback *, const class InstancedRayTracingEnvironmentReference_t  *, const class CRaytraceMaterialRemapTable  *); /* linkage=_ZNK21RayTracingEnvironment18Trace4RaysInternalIL13RTECullMode_t1E13CFilterSkipID18RayTracingResult_tEEvRK8FourRaysDv4_fS7_iPT1_T0_P28ITransparentTriangleCallbackPK41InstancedRayTracingEnvironmentReference_tPK27CRaytraceMaterialRemapTable */
	void Trace4RaysInternal<(RTECullMode_t)0, CFilterNone, RayTracingResultMulti_t>(const class RayTracingEnvironment  *, const class FourRays  &, fltx4, fltx4, int, class RayTracingResultMulti_t *, class CFilterNone, class ITransparentTriangleCallback *, const class InstancedRayTracingEnvironmentReference_t  *, const class CRaytraceMaterialRemapTable  *); /* linkage=_ZNK21RayTracingEnvironment18Trace4RaysInternalIL13RTECullMode_t0E11CFilterNone23RayTracingResultMulti_tEEvRK8FourRaysDv4_fS7_iPT1_T0_P28ITransparentTriangleCallbackPK41InstancedRayTracingEnvironmentReference_tPK27CRaytraceMaterialRemapTable */
	void Trace4RaysInternal<(RTECullMode_t)2, CFilterNone, RayTracingResultMulti_t>(const class RayTracingEnvironment  *, const class FourRays  &, fltx4, fltx4, int, class RayTracingResultMulti_t *, class CFilterNone, class ITransparentTriangleCallback *, const class InstancedRayTracingEnvironmentReference_t  *, const class CRaytraceMaterialRemapTable  *); /* linkage=_ZNK21RayTracingEnvironment18Trace4RaysInternalIL13RTECullMode_t2E11CFilterNone23RayTracingResultMulti_tEEvRK8FourRaysDv4_fS7_iPT1_T0_P28ITransparentTriangleCallbackPK41InstancedRayTracingEnvironmentReference_tPK27CRaytraceMaterialRemapTable */
	void Trace4RaysInternal<(RTECullMode_t)1, CFilterNone, RayTracingResultMulti_t>(const class RayTracingEnvironment  *, const class FourRays  &, fltx4, fltx4, int, class RayTracingResultMulti_t *, class CFilterNone, class ITransparentTriangleCallback *, const class InstancedRayTracingEnvironmentReference_t  *, const class CRaytraceMaterialRemapTable  *); /* linkage=_ZNK21RayTracingEnvironment18Trace4RaysInternalIL13RTECullMode_t1E11CFilterNone23RayTracingResultMulti_tEEvRK8FourRaysDv4_fS7_iPT1_T0_P28ITransparentTriangleCallbackPK41InstancedRayTracingEnvironmentReference_tPK27CRaytraceMaterialRemapTable */
	void Trace4RaysInternal<(RTECullMode_t)0, CFilterNone, RayTracingResult_t>(const class RayTracingEnvironment  *, const class FourRays  &, fltx4, fltx4, int, class RayTracingResult_t *, class CFilterNone, class ITransparentTriangleCallback *, const class InstancedRayTracingEnvironmentReference_t  *, const class CRaytraceMaterialRemapTable  *); /* linkage=_ZNK21RayTracingEnvironment18Trace4RaysInternalIL13RTECullMode_t0E11CFilterNone18RayTracingResult_tEEvRK8FourRaysDv4_fS7_iPT1_T0_P28ITransparentTriangleCallbackPK41InstancedRayTracingEnvironmentReference_tPK27CRaytraceMaterialRemapTable */
	void Trace4RaysInternal<(RTECullMode_t)2, CFilterNone, RayTracingResult_t>(const class RayTracingEnvironment  *, const class FourRays  &, fltx4, fltx4, int, class RayTracingResult_t *, class CFilterNone, class ITransparentTriangleCallback *, const class InstancedRayTracingEnvironmentReference_t  *, const class CRaytraceMaterialRemapTable  *); /* linkage=_ZNK21RayTracingEnvironment18Trace4RaysInternalIL13RTECullMode_t2E11CFilterNone18RayTracingResult_tEEvRK8FourRaysDv4_fS7_iPT1_T0_P28ITransparentTriangleCallbackPK41InstancedRayTracingEnvironmentReference_tPK27CRaytraceMaterialRemapTable */
	void Trace4RaysInternal<(RTECullMode_t)1, CFilterNone, RayTracingResult_t>(const class RayTracingEnvironment  *, const class FourRays  &, fltx4, fltx4, int, class RayTracingResult_t *, class CFilterNone, class ITransparentTriangleCallback *, const class InstancedRayTracingEnvironmentReference_t  *, const class CRaytraceMaterialRemapTable  *); /* linkage=_ZNK21RayTracingEnvironment18Trace4RaysInternalIL13RTECullMode_t1E11CFilterNone18RayTracingResult_tEEvRK8FourRaysDv4_fS7_iPT1_T0_P28ITransparentTriangleCallbackPK41InstancedRayTracingEnvironmentReference_tPK27CRaytraceMaterialRemapTable */
	void Trace4RaysInternal<(RTECullMode_t)0, CFilterSkipFlags, RayTracingResultMulti_t>(const class RayTracingEnvironment  *, const class FourRays  &, fltx4, fltx4, int, class RayTracingResultMulti_t *, class CFilterSkipFlags, class ITransparentTriangleCallback *, const class InstancedRayTracingEnvironmentReference_t  *, const class CRaytraceMaterialRemapTable  *); /* linkage=_ZNK21RayTracingEnvironment18Trace4RaysInternalIL13RTECullMode_t0E16CFilterSkipFlags23RayTracingResultMulti_tEEvRK8FourRaysDv4_fS7_iPT1_T0_P28ITransparentTriangleCallbackPK41InstancedRayTracingEnvironmentReference_tPK27CRaytraceMaterialRemapTable */
	void Trace4RaysInternal<(RTECullMode_t)2, CFilterSkipFlags, RayTracingResultMulti_t>(const class RayTracingEnvironment  *, const class FourRays  &, fltx4, fltx4, int, class RayTracingResultMulti_t *, class CFilterSkipFlags, class ITransparentTriangleCallback *, const class InstancedRayTracingEnvironmentReference_t  *, const class CRaytraceMaterialRemapTable  *); /* linkage=_ZNK21RayTracingEnvironment18Trace4RaysInternalIL13RTECullMode_t2E16CFilterSkipFlags23RayTracingResultMulti_tEEvRK8FourRaysDv4_fS7_iPT1_T0_P28ITransparentTriangleCallbackPK41InstancedRayTracingEnvironmentReference_tPK27CRaytraceMaterialRemapTable */
	void Trace4RaysInternal<(RTECullMode_t)1, CFilterSkipFlags, RayTracingResultMulti_t>(const class RayTracingEnvironment  *, const class FourRays  &, fltx4, fltx4, int, class RayTracingResultMulti_t *, class CFilterSkipFlags, class ITransparentTriangleCallback *, const class InstancedRayTracingEnvironmentReference_t  *, const class CRaytraceMaterialRemapTable  *); /* linkage=_ZNK21RayTracingEnvironment18Trace4RaysInternalIL13RTECullMode_t1E16CFilterSkipFlags23RayTracingResultMulti_tEEvRK8FourRaysDv4_fS7_iPT1_T0_P28ITransparentTriangleCallbackPK41InstancedRayTracingEnvironmentReference_tPK27CRaytraceMaterialRemapTable */
	void Trace4RaysInternal<(RTECullMode_t)0, CFilterSkipFlags, RayTracingResult_t>(const class RayTracingEnvironment  *, const class FourRays  &, fltx4, fltx4, int, class RayTracingResult_t *, class CFilterSkipFlags, class ITransparentTriangleCallback *, const class InstancedRayTracingEnvironmentReference_t  *, const class CRaytraceMaterialRemapTable  *); /* linkage=_ZNK21RayTracingEnvironment18Trace4RaysInternalIL13RTECullMode_t0E16CFilterSkipFlags18RayTracingResult_tEEvRK8FourRaysDv4_fS7_iPT1_T0_P28ITransparentTriangleCallbackPK41InstancedRayTracingEnvironmentReference_tPK27CRaytraceMaterialRemapTable */
	void Trace4RaysInternal<(RTECullMode_t)2, CFilterSkipFlags, RayTracingResult_t>(const class RayTracingEnvironment  *, const class FourRays  &, fltx4, fltx4, int, class RayTracingResult_t *, class CFilterSkipFlags, class ITransparentTriangleCallback *, const class InstancedRayTracingEnvironmentReference_t  *, const class CRaytraceMaterialRemapTable  *); /* linkage=_ZNK21RayTracingEnvironment18Trace4RaysInternalIL13RTECullMode_t2E16CFilterSkipFlags18RayTracingResult_tEEvRK8FourRaysDv4_fS7_iPT1_T0_P28ITransparentTriangleCallbackPK41InstancedRayTracingEnvironmentReference_tPK27CRaytraceMaterialRemapTable */
	void Trace4RaysInternal<(RTECullMode_t)1, CFilterSkipFlags, RayTracingResult_t>(const class RayTracingEnvironment  *, const class FourRays  &, fltx4, fltx4, int, class RayTracingResult_t *, class CFilterSkipFlags, class ITransparentTriangleCallback *, const class InstancedRayTracingEnvironmentReference_t  *, const class CRaytraceMaterialRemapTable  *); /* linkage=_ZNK21RayTracingEnvironment18Trace4RaysInternalIL13RTECullMode_t1E16CFilterSkipFlags18RayTracingResult_tEEvRK8FourRaysDv4_fS7_iPT1_T0_P28ITransparentTriangleCallbackPK41InstancedRayTracingEnvironmentReference_tPK27CRaytraceMaterialRemapTable */
	void Trace4RaysInternal<(RTECullMode_t)0, CFilterTags, RayTracingResult_t>(const class RayTracingEnvironment  *, const class FourRays  &, fltx4, fltx4, int, class RayTracingResult_t *, class CFilterTags, class ITransparentTriangleCallback *, const class InstancedRayTracingEnvironmentReference_t  *, const class CRaytraceMaterialRemapTable  *); /* linkage=_ZNK21RayTracingEnvironment18Trace4RaysInternalIL13RTECullMode_t0E11CFilterTags18RayTracingResult_tEEvRK8FourRaysDv4_fS7_iPT1_T0_P28ITransparentTriangleCallbackPK41InstancedRayTracingEnvironmentReference_tPK27CRaytraceMaterialRemapTable */
	void Trace4RaysInternal<(RTECullMode_t)2, CFilterTags, RayTracingResult_t>(const class RayTracingEnvironment  *, const class FourRays  &, fltx4, fltx4, int, class RayTracingResult_t *, class CFilterTags, class ITransparentTriangleCallback *, const class InstancedRayTracingEnvironmentReference_t  *, const class CRaytraceMaterialRemapTable  *); /* linkage=_ZNK21RayTracingEnvironment18Trace4RaysInternalIL13RTECullMode_t2E11CFilterTags18RayTracingResult_tEEvRK8FourRaysDv4_fS7_iPT1_T0_P28ITransparentTriangleCallbackPK41InstancedRayTracingEnvironmentReference_tPK27CRaytraceMaterialRemapTable */
	void Trace4RaysInternal<(RTECullMode_t)1, CFilterTags, RayTracingResult_t>(const class RayTracingEnvironment  *, const class FourRays  &, fltx4, fltx4, int, class RayTracingResult_t *, class CFilterTags, class ITransparentTriangleCallback *, const class InstancedRayTracingEnvironmentReference_t  *, const class CRaytraceMaterialRemapTable  *); /* linkage=_ZNK21RayTracingEnvironment18Trace4RaysInternalIL13RTECullMode_t1E11CFilterTags18RayTracingResult_tEEvRK8FourRaysDv4_fS7_iPT1_T0_P28ITransparentTriangleCallbackPK41InstancedRayTracingEnvironmentReference_tPK27CRaytraceMaterialRemapTable */
	void Trace4RaysInternal<(RTECullMode_t)0, CFilterTags, RayTracingResultMulti_t>(const class RayTracingEnvironment  *, const class FourRays  &, fltx4, fltx4, int, class RayTracingResultMulti_t *, class CFilterTags, class ITransparentTriangleCallback *, const class InstancedRayTracingEnvironmentReference_t  *, const class CRaytraceMaterialRemapTable  *); /* linkage=_ZNK21RayTracingEnvironment18Trace4RaysInternalIL13RTECullMode_t0E11CFilterTags23RayTracingResultMulti_tEEvRK8FourRaysDv4_fS7_iPT1_T0_P28ITransparentTriangleCallbackPK41InstancedRayTracingEnvironmentReference_tPK27CRaytraceMaterialRemapTable */
	void Trace4RaysInternal<(RTECullMode_t)2, CFilterTags, RayTracingResultMulti_t>(const class RayTracingEnvironment  *, const class FourRays  &, fltx4, fltx4, int, class RayTracingResultMulti_t *, class CFilterTags, class ITransparentTriangleCallback *, const class InstancedRayTracingEnvironmentReference_t  *, const class CRaytraceMaterialRemapTable  *); /* linkage=_ZNK21RayTracingEnvironment18Trace4RaysInternalIL13RTECullMode_t2E11CFilterTags23RayTracingResultMulti_tEEvRK8FourRaysDv4_fS7_iPT1_T0_P28ITransparentTriangleCallbackPK41InstancedRayTracingEnvironmentReference_tPK27CRaytraceMaterialRemapTable */
	void Trace4RaysInternal<(RTECullMode_t)1, CFilterTags, RayTracingResultMulti_t>(const class RayTracingEnvironment  *, const class FourRays  &, fltx4, fltx4, int, class RayTracingResultMulti_t *, class CFilterTags, class ITransparentTriangleCallback *, const class InstancedRayTracingEnvironmentReference_t  *, const class CRaytraceMaterialRemapTable  *); /* linkage=_ZNK21RayTracingEnvironment18Trace4RaysInternalIL13RTECullMode_t1E11CFilterTags23RayTracingResultMulti_tEEvRK8FourRaysDv4_fS7_iPT1_T0_P28ITransparentTriangleCallbackPK41InstancedRayTracingEnvironmentReference_tPK27CRaytraceMaterialRemapTable */
	void TraceAgainstChildren<CFilterRequireFlags, RayTracingResultMulti_t>(const class RayTracingEnvironment  *, const class FourRays  &, fltx4, fltx4, class RayTracingResultMulti_t *, class CFilterRequireFlags, class ITransparentTriangleCallback *, enum RTECullMode_t, const class CRaytraceMaterialRemapTable  *); /* linkage=_ZNK21RayTracingEnvironment20TraceAgainstChildrenI19CFilterRequireFlags23RayTracingResultMulti_tEEvRK8FourRaysDv4_fS6_PT0_T_P28ITransparentTriangleCallback13RTECullMode_tPK27CRaytraceMaterialRemapTable */
	void Trace4RaysInternal<CFilterRequireFlags, RayTracingResultMulti_t>(const class RayTracingEnvironment  *, const class FourRays  &, fltx4, fltx4, int, class RayTracingResultMulti_t *, class CFilterRequireFlags, class ITransparentTriangleCallback *, enum RTECullMode_t, const class InstancedRayTracingEnvironmentReference_t  *, const class CRaytraceMaterialRemapTable  *); /* linkage=_ZNK21RayTracingEnvironment18Trace4RaysInternalI19CFilterRequireFlags23RayTracingResultMulti_tEEvRK8FourRaysDv4_fS6_iPT0_T_P28ITransparentTriangleCallback13RTECullMode_tPK41InstancedRayTracingEnvironmentReference_tPK27CRaytraceMaterialRemapTable */
	void TraceAgainstChildren<CFilterRequireFlags, RayTracingResult_t>(const class RayTracingEnvironment  *, const class FourRays  &, fltx4, fltx4, class RayTracingResult_t *, class CFilterRequireFlags, class ITransparentTriangleCallback *, enum RTECullMode_t, const class CRaytraceMaterialRemapTable  *); /* linkage=_ZNK21RayTracingEnvironment20TraceAgainstChildrenI19CFilterRequireFlags18RayTracingResult_tEEvRK8FourRaysDv4_fS6_PT0_T_P28ITransparentTriangleCallback13RTECullMode_tPK27CRaytraceMaterialRemapTable */
	void Trace4RaysInternal<CFilterRequireFlags, RayTracingResult_t>(const class RayTracingEnvironment  *, const class FourRays  &, fltx4, fltx4, int, class RayTracingResult_t *, class CFilterRequireFlags, class ITransparentTriangleCallback *, enum RTECullMode_t, const class InstancedRayTracingEnvironmentReference_t  *, const class CRaytraceMaterialRemapTable  *); /* linkage=_ZNK21RayTracingEnvironment18Trace4RaysInternalI19CFilterRequireFlags18RayTracingResult_tEEvRK8FourRaysDv4_fS6_iPT0_T_P28ITransparentTriangleCallback13RTECullMode_tPK41InstancedRayTracingEnvironmentReference_tPK27CRaytraceMaterialRemapTable */
	void TraceAgainstChildren<CFilterSkipID, RayTracingResultMulti_t>(const class RayTracingEnvironment  *, const class FourRays  &, fltx4, fltx4, class RayTracingResultMulti_t *, class CFilterSkipID, class ITransparentTriangleCallback *, enum RTECullMode_t, const class CRaytraceMaterialRemapTable  *); /* linkage=_ZNK21RayTracingEnvironment20TraceAgainstChildrenI13CFilterSkipID23RayTracingResultMulti_tEEvRK8FourRaysDv4_fS6_PT0_T_P28ITransparentTriangleCallback13RTECullMode_tPK27CRaytraceMaterialRemapTable */
	void Trace4RaysInternal<CFilterSkipID, RayTracingResultMulti_t>(const class RayTracingEnvironment  *, const class FourRays  &, fltx4, fltx4, int, class RayTracingResultMulti_t *, class CFilterSkipID, class ITransparentTriangleCallback *, enum RTECullMode_t, const class InstancedRayTracingEnvironmentReference_t  *, const class CRaytraceMaterialRemapTable  *); /* linkage=_ZNK21RayTracingEnvironment18Trace4RaysInternalI13CFilterSkipID23RayTracingResultMulti_tEEvRK8FourRaysDv4_fS6_iPT0_T_P28ITransparentTriangleCallback13RTECullMode_tPK41InstancedRayTracingEnvironmentReference_tPK27CRaytraceMaterialRemapTable */
	void TraceAgainstChildren<CFilterSkipID, RayTracingResult_t>(const class RayTracingEnvironment  *, const class FourRays  &, fltx4, fltx4, class RayTracingResult_t *, class CFilterSkipID, class ITransparentTriangleCallback *, enum RTECullMode_t, const class CRaytraceMaterialRemapTable  *); /* linkage=_ZNK21RayTracingEnvironment20TraceAgainstChildrenI13CFilterSkipID18RayTracingResult_tEEvRK8FourRaysDv4_fS6_PT0_T_P28ITransparentTriangleCallback13RTECullMode_tPK27CRaytraceMaterialRemapTable */
	void Trace4RaysInternal<CFilterSkipID, RayTracingResult_t>(const class RayTracingEnvironment  *, const class FourRays  &, fltx4, fltx4, int, class RayTracingResult_t *, class CFilterSkipID, class ITransparentTriangleCallback *, enum RTECullMode_t, const class InstancedRayTracingEnvironmentReference_t  *, const class CRaytraceMaterialRemapTable  *); /* linkage=_ZNK21RayTracingEnvironment18Trace4RaysInternalI13CFilterSkipID18RayTracingResult_tEEvRK8FourRaysDv4_fS6_iPT0_T_P28ITransparentTriangleCallback13RTECullMode_tPK41InstancedRayTracingEnvironmentReference_tPK27CRaytraceMaterialRemapTable */
	void TraceAgainstChildren<CFilterNone, RayTracingResultMulti_t>(const class RayTracingEnvironment  *, const class FourRays  &, fltx4, fltx4, class RayTracingResultMulti_t *, class CFilterNone, class ITransparentTriangleCallback *, enum RTECullMode_t, const class CRaytraceMaterialRemapTable  *); /* linkage=_ZNK21RayTracingEnvironment20TraceAgainstChildrenI11CFilterNone23RayTracingResultMulti_tEEvRK8FourRaysDv4_fS6_PT0_T_P28ITransparentTriangleCallback13RTECullMode_tPK27CRaytraceMaterialRemapTable */
	void Trace4RaysInternal<CFilterNone, RayTracingResultMulti_t>(const class RayTracingEnvironment  *, const class FourRays  &, fltx4, fltx4, int, class RayTracingResultMulti_t *, class CFilterNone, class ITransparentTriangleCallback *, enum RTECullMode_t, const class InstancedRayTracingEnvironmentReference_t  *, const class CRaytraceMaterialRemapTable  *); /* linkage=_ZNK21RayTracingEnvironment18Trace4RaysInternalI11CFilterNone23RayTracingResultMulti_tEEvRK8FourRaysDv4_fS6_iPT0_T_P28ITransparentTriangleCallback13RTECullMode_tPK41InstancedRayTracingEnvironmentReference_tPK27CRaytraceMaterialRemapTable */
	void TraceAgainstChildren<CFilterNone, RayTracingResult_t>(const class RayTracingEnvironment  *, const class FourRays  &, fltx4, fltx4, class RayTracingResult_t *, class CFilterNone, class ITransparentTriangleCallback *, enum RTECullMode_t, const class CRaytraceMaterialRemapTable  *); /* linkage=_ZNK21RayTracingEnvironment20TraceAgainstChildrenI11CFilterNone18RayTracingResult_tEEvRK8FourRaysDv4_fS6_PT0_T_P28ITransparentTriangleCallback13RTECullMode_tPK27CRaytraceMaterialRemapTable */
	void Trace4RaysInternal<CFilterNone, RayTracingResult_t>(const class RayTracingEnvironment  *, const class FourRays  &, fltx4, fltx4, int, class RayTracingResult_t *, class CFilterNone, class ITransparentTriangleCallback *, enum RTECullMode_t, const class InstancedRayTracingEnvironmentReference_t  *, const class CRaytraceMaterialRemapTable  *); /* linkage=_ZNK21RayTracingEnvironment18Trace4RaysInternalI11CFilterNone18RayTracingResult_tEEvRK8FourRaysDv4_fS6_iPT0_T_P28ITransparentTriangleCallback13RTECullMode_tPK41InstancedRayTracingEnvironmentReference_tPK27CRaytraceMaterialRemapTable */
	void TraceAgainstChildren<CFilterSkipFlags, RayTracingResultMulti_t>(const class RayTracingEnvironment  *, const class FourRays  &, fltx4, fltx4, class RayTracingResultMulti_t *, class CFilterSkipFlags, class ITransparentTriangleCallback *, enum RTECullMode_t, const class CRaytraceMaterialRemapTable  *); /* linkage=_ZNK21RayTracingEnvironment20TraceAgainstChildrenI16CFilterSkipFlags23RayTracingResultMulti_tEEvRK8FourRaysDv4_fS6_PT0_T_P28ITransparentTriangleCallback13RTECullMode_tPK27CRaytraceMaterialRemapTable */
	void Trace4RaysInternal<CFilterSkipFlags, RayTracingResultMulti_t>(const class RayTracingEnvironment  *, const class FourRays  &, fltx4, fltx4, int, class RayTracingResultMulti_t *, class CFilterSkipFlags, class ITransparentTriangleCallback *, enum RTECullMode_t, const class InstancedRayTracingEnvironmentReference_t  *, const class CRaytraceMaterialRemapTable  *); /* linkage=_ZNK21RayTracingEnvironment18Trace4RaysInternalI16CFilterSkipFlags23RayTracingResultMulti_tEEvRK8FourRaysDv4_fS6_iPT0_T_P28ITransparentTriangleCallback13RTECullMode_tPK41InstancedRayTracingEnvironmentReference_tPK27CRaytraceMaterialRemapTable */
	void TraceAgainstChildren<CFilterSkipFlags, RayTracingResult_t>(const class RayTracingEnvironment  *, const class FourRays  &, fltx4, fltx4, class RayTracingResult_t *, class CFilterSkipFlags, class ITransparentTriangleCallback *, enum RTECullMode_t, const class CRaytraceMaterialRemapTable  *); /* linkage=_ZNK21RayTracingEnvironment20TraceAgainstChildrenI16CFilterSkipFlags18RayTracingResult_tEEvRK8FourRaysDv4_fS6_PT0_T_P28ITransparentTriangleCallback13RTECullMode_tPK27CRaytraceMaterialRemapTable */
	void Trace4RaysInternal<CFilterSkipFlags, RayTracingResult_t>(const class RayTracingEnvironment  *, const class FourRays  &, fltx4, fltx4, int, class RayTracingResult_t *, class CFilterSkipFlags, class ITransparentTriangleCallback *, enum RTECullMode_t, const class InstancedRayTracingEnvironmentReference_t  *, const class CRaytraceMaterialRemapTable  *); /* linkage=_ZNK21RayTracingEnvironment18Trace4RaysInternalI16CFilterSkipFlags18RayTracingResult_tEEvRK8FourRaysDv4_fS6_iPT0_T_P28ITransparentTriangleCallback13RTECullMode_tPK41InstancedRayTracingEnvironmentReference_tPK27CRaytraceMaterialRemapTable */
	void TraceAgainstChildren<CFilterTags, RayTracingResult_t>(const class RayTracingEnvironment  *, const class FourRays  &, fltx4, fltx4, class RayTracingResult_t *, class CFilterTags, class ITransparentTriangleCallback *, enum RTECullMode_t, const class CRaytraceMaterialRemapTable  *); /* linkage=_ZNK21RayTracingEnvironment20TraceAgainstChildrenI11CFilterTags18RayTracingResult_tEEvRK8FourRaysDv4_fS6_PT0_T_P28ITransparentTriangleCallback13RTECullMode_tPK27CRaytraceMaterialRemapTable */
	void Trace4RaysInternal<CFilterTags, RayTracingResult_t>(const class RayTracingEnvironment  *, const class FourRays  &, fltx4, fltx4, int, class RayTracingResult_t *, class CFilterTags, class ITransparentTriangleCallback *, enum RTECullMode_t, const class InstancedRayTracingEnvironmentReference_t  *, const class CRaytraceMaterialRemapTable  *); /* linkage=_ZNK21RayTracingEnvironment18Trace4RaysInternalI11CFilterTags18RayTracingResult_tEEvRK8FourRaysDv4_fS6_iPT0_T_P28ITransparentTriangleCallback13RTECullMode_tPK41InstancedRayTracingEnvironmentReference_tPK27CRaytraceMaterialRemapTable */
	void TraceAgainstChildren<CFilterTags, RayTracingResultMulti_t>(const class RayTracingEnvironment  *, const class FourRays  &, fltx4, fltx4, class RayTracingResultMulti_t *, class CFilterTags, class ITransparentTriangleCallback *, enum RTECullMode_t, const class CRaytraceMaterialRemapTable  *); /* linkage=_ZNK21RayTracingEnvironment20TraceAgainstChildrenI11CFilterTags23RayTracingResultMulti_tEEvRK8FourRaysDv4_fS6_PT0_T_P28ITransparentTriangleCallback13RTECullMode_tPK27CRaytraceMaterialRemapTable */
	void Trace4RaysInternal<CFilterTags, RayTracingResultMulti_t>(const class RayTracingEnvironment  *, const class FourRays  &, fltx4, fltx4, int, class RayTracingResultMulti_t *, class CFilterTags, class ITransparentTriangleCallback *, enum RTECullMode_t, const class InstancedRayTracingEnvironmentReference_t  *, const class CRaytraceMaterialRemapTable  *); /* linkage=_ZNK21RayTracingEnvironment18Trace4RaysInternalI11CFilterTags23RayTracingResultMulti_tEEvRK8FourRaysDv4_fS6_iPT0_T_P28ITransparentTriangleCallback13RTECullMode_tPK41InstancedRayTracingEnvironmentReference_tPK27CRaytraceMaterialRemapTable */
	void Trace4Rays<CFilterRequireFlags, RayTracingResult_t>(const class RayTracingEnvironment  *, const class FourRays  &, fltx4, fltx4, class RayTracingResult_t *, class CFilterRequireFlags, class ITransparentTriangleCallback *, enum RTECullMode_t, const class InstancedRayTracingEnvironmentReference_t  *, const class CRaytraceMaterialRemapTable  *); /* linkage=_ZNK21RayTracingEnvironment10Trace4RaysI19CFilterRequireFlags18RayTracingResult_tEEvRK8FourRaysDv4_fS6_PT0_T_P28ITransparentTriangleCallback13RTECullMode_tPK41InstancedRayTracingEnvironmentReference_tPK27CRaytraceMaterialRemapTable */
	void Trace4Rays<CFilterRequireFlags, RayTracingResultMulti_t>(const class RayTracingEnvironment  *, const class FourRays  &, fltx4, fltx4, class RayTracingResultMulti_t *, class CFilterRequireFlags, class ITransparentTriangleCallback *, enum RTECullMode_t, const class InstancedRayTracingEnvironmentReference_t  *, const class CRaytraceMaterialRemapTable  *); /* linkage=_ZNK21RayTracingEnvironment10Trace4RaysI19CFilterRequireFlags23RayTracingResultMulti_tEEvRK8FourRaysDv4_fS6_PT0_T_P28ITransparentTriangleCallback13RTECullMode_tPK41InstancedRayTracingEnvironmentReference_tPK27CRaytraceMaterialRemapTable */
	void FinishRayStream<CFilterRequireFlags>(const class RayTracingEnvironment  *, class CFilteredRayStream<CFilterRequireFlags> &); /* linkage=_ZNK21RayTracingEnvironment15FinishRayStreamI19CFilterRequireFlagsEEvR18CFilteredRayStreamIT_E */
	void AddToRayStream<CFilterRequireFlags>(const class RayTracingEnvironment  *, class CFilteredRayStream<CFilterRequireFlags> &, const class Vector  &, const class Vector  &, class RayTracingSingleResult_t *); /* linkage=_ZNK21RayTracingEnvironment14AddToRayStreamI19CFilterRequireFlagsEEvR18CFilteredRayStreamIT_ERK6VectorS8_P24RayTracingSingleResult_t */
	void FlushStreamEntry<CFilterRequireFlags>(const class RayTracingEnvironment  *, class CFilteredRayStream<CFilterRequireFlags> &, int); /* linkage=_ZNK21RayTracingEnvironment16FlushStreamEntryI19CFilterRequireFlagsEEvR18CFilteredRayStreamIT_Ei */
	void Trace4Rays<CFilterSkipID, RayTracingResult_t>(const class RayTracingEnvironment  *, const class FourRays  &, fltx4, fltx4, class RayTracingResult_t *, class CFilterSkipID, class ITransparentTriangleCallback *, enum RTECullMode_t, const class InstancedRayTracingEnvironmentReference_t  *, const class CRaytraceMaterialRemapTable  *); /* linkage=_ZNK21RayTracingEnvironment10Trace4RaysI13CFilterSkipID18RayTracingResult_tEEvRK8FourRaysDv4_fS6_PT0_T_P28ITransparentTriangleCallback13RTECullMode_tPK41InstancedRayTracingEnvironmentReference_tPK27CRaytraceMaterialRemapTable */
	void Trace4Rays<CFilterSkipID, RayTracingResultMulti_t>(const class RayTracingEnvironment  *, const class FourRays  &, fltx4, fltx4, class RayTracingResultMulti_t *, class CFilterSkipID, class ITransparentTriangleCallback *, enum RTECullMode_t, const class InstancedRayTracingEnvironmentReference_t  *, const class CRaytraceMaterialRemapTable  *); /* linkage=_ZNK21RayTracingEnvironment10Trace4RaysI13CFilterSkipID23RayTracingResultMulti_tEEvRK8FourRaysDv4_fS6_PT0_T_P28ITransparentTriangleCallback13RTECullMode_tPK41InstancedRayTracingEnvironmentReference_tPK27CRaytraceMaterialRemapTable */
	void FinishRayStream<CFilterSkipID>(const class RayTracingEnvironment  *, class CFilteredRayStream<CFilterSkipID> &); /* linkage=_ZNK21RayTracingEnvironment15FinishRayStreamI13CFilterSkipIDEEvR18CFilteredRayStreamIT_E */
	void AddToRayStream<CFilterSkipID>(const class RayTracingEnvironment  *, class CFilteredRayStream<CFilterSkipID> &, const class Vector  &, const class Vector  &, class RayTracingSingleResult_t *); /* linkage=_ZNK21RayTracingEnvironment14AddToRayStreamI13CFilterSkipIDEEvR18CFilteredRayStreamIT_ERK6VectorS8_P24RayTracingSingleResult_t */
	void FlushStreamEntry<CFilterSkipID>(const class RayTracingEnvironment  *, class CFilteredRayStream<CFilterSkipID> &, int); /* linkage=_ZNK21RayTracingEnvironment16FlushStreamEntryI13CFilterSkipIDEEvR18CFilteredRayStreamIT_Ei */
	void Trace4Rays<CFilterNone, RayTracingResult_t>(const class RayTracingEnvironment  *, const class FourRays  &, fltx4, fltx4, class RayTracingResult_t *, class CFilterNone, class ITransparentTriangleCallback *, enum RTECullMode_t, const class InstancedRayTracingEnvironmentReference_t  *, const class CRaytraceMaterialRemapTable  *); /* linkage=_ZNK21RayTracingEnvironment10Trace4RaysI11CFilterNone18RayTracingResult_tEEvRK8FourRaysDv4_fS6_PT0_T_P28ITransparentTriangleCallback13RTECullMode_tPK41InstancedRayTracingEnvironmentReference_tPK27CRaytraceMaterialRemapTable */
	void Trace4Rays<CFilterNone, RayTracingResultMulti_t>(const class RayTracingEnvironment  *, const class FourRays  &, fltx4, fltx4, class RayTracingResultMulti_t *, class CFilterNone, class ITransparentTriangleCallback *, enum RTECullMode_t, const class InstancedRayTracingEnvironmentReference_t  *, const class CRaytraceMaterialRemapTable  *); /* linkage=_ZNK21RayTracingEnvironment10Trace4RaysI11CFilterNone23RayTracingResultMulti_tEEvRK8FourRaysDv4_fS6_PT0_T_P28ITransparentTriangleCallback13RTECullMode_tPK41InstancedRayTracingEnvironmentReference_tPK27CRaytraceMaterialRemapTable */
	void FinishRayStream<CFilterNone>(const class RayTracingEnvironment  *, class CFilteredRayStream<CFilterNone> &); /* linkage=_ZNK21RayTracingEnvironment15FinishRayStreamI11CFilterNoneEEvR18CFilteredRayStreamIT_E */
	void AddToRayStream<CFilterNone>(const class RayTracingEnvironment  *, class CFilteredRayStream<CFilterNone> &, const class Vector  &, const class Vector  &, class RayTracingSingleResult_t *); /* linkage=_ZNK21RayTracingEnvironment14AddToRayStreamI11CFilterNoneEEvR18CFilteredRayStreamIT_ERK6VectorS8_P24RayTracingSingleResult_t */
	void FlushStreamEntry<CFilterNone>(const class RayTracingEnvironment  *, class CFilteredRayStream<CFilterNone> &, int); /* linkage=_ZNK21RayTracingEnvironment16FlushStreamEntryI11CFilterNoneEEvR18CFilteredRayStreamIT_Ei */
	void Trace4Rays<CFilterSkipFlags, RayTracingResult_t>(const class RayTracingEnvironment  *, const class FourRays  &, fltx4, fltx4, class RayTracingResult_t *, class CFilterSkipFlags, class ITransparentTriangleCallback *, enum RTECullMode_t, const class InstancedRayTracingEnvironmentReference_t  *, const class CRaytraceMaterialRemapTable  *); /* linkage=_ZNK21RayTracingEnvironment10Trace4RaysI16CFilterSkipFlags18RayTracingResult_tEEvRK8FourRaysDv4_fS6_PT0_T_P28ITransparentTriangleCallback13RTECullMode_tPK41InstancedRayTracingEnvironmentReference_tPK27CRaytraceMaterialRemapTable */
	void Trace4Rays<CFilterSkipFlags, RayTracingResultMulti_t>(const class RayTracingEnvironment  *, const class FourRays  &, fltx4, fltx4, class RayTracingResultMulti_t *, class CFilterSkipFlags, class ITransparentTriangleCallback *, enum RTECullMode_t, const class InstancedRayTracingEnvironmentReference_t  *, const class CRaytraceMaterialRemapTable  *); /* linkage=_ZNK21RayTracingEnvironment10Trace4RaysI16CFilterSkipFlags23RayTracingResultMulti_tEEvRK8FourRaysDv4_fS6_PT0_T_P28ITransparentTriangleCallback13RTECullMode_tPK41InstancedRayTracingEnvironmentReference_tPK27CRaytraceMaterialRemapTable */
	/* <618f662> ../public/raytrace/raytrace.h:965 */
	void FinishRayStream<CFilterSkipFlags>(const class RayTracingEnvironment  *, class CFilteredRayStream<CFilterSkipFlags> &); /* linkage=_ZNK21RayTracingEnvironment15FinishRayStreamI16CFilterSkipFlagsEEvR18CFilteredRayStreamIT_E */
	/* <618f694> ../public/raytrace/raytrace.h:957 */
	void AddToRayStream<CFilterSkipFlags>(const class RayTracingEnvironment  *, class CFilteredRayStream<CFilterSkipFlags> &, const class Vector  &, const class Vector  &, class RayTracingSingleResult_t *); /* linkage=_ZNK21RayTracingEnvironment14AddToRayStreamI16CFilterSkipFlagsEEvR18CFilteredRayStreamIT_ERK6VectorS8_P24RayTracingSingleResult_t */
	void FlushStreamEntry<CFilterSkipFlags>(const class RayTracingEnvironment  *, class CFilteredRayStream<CFilterSkipFlags> &, int); /* linkage=_ZNK21RayTracingEnvironment16FlushStreamEntryI16CFilterSkipFlagsEEvR18CFilteredRayStreamIT_Ei */
	void Trace4Rays<CFilterTags, RayTracingResult_t>(const class RayTracingEnvironment  *, const class FourRays  &, fltx4, fltx4, class RayTracingResult_t *, class CFilterTags, class ITransparentTriangleCallback *, enum RTECullMode_t, const class InstancedRayTracingEnvironmentReference_t  *, const class CRaytraceMaterialRemapTable  *); /* linkage=_ZNK21RayTracingEnvironment10Trace4RaysI11CFilterTags18RayTracingResult_tEEvRK8FourRaysDv4_fS6_PT0_T_P28ITransparentTriangleCallback13RTECullMode_tPK41InstancedRayTracingEnvironmentReference_tPK27CRaytraceMaterialRemapTable */
	void Trace4Rays<CFilterTags, RayTracingResultMulti_t>(const class RayTracingEnvironment  *, const class FourRays  &, fltx4, fltx4, class RayTracingResultMulti_t *, class CFilterTags, class ITransparentTriangleCallback *, enum RTECullMode_t, const class InstancedRayTracingEnvironmentReference_t  *, const class CRaytraceMaterialRemapTable  *); /* linkage=_ZNK21RayTracingEnvironment10Trace4RaysI11CFilterTags23RayTracingResultMulti_tEEvRK8FourRaysDv4_fS6_PT0_T_P28ITransparentTriangleCallback13RTECullMode_tPK41InstancedRayTracingEnvironmentReference_tPK27CRaytraceMaterialRemapTable */
	void FinishRayStream<CFilterTags>(const class RayTracingEnvironment  *, class CFilteredRayStream<CFilterTags> &); /* linkage=_ZNK21RayTracingEnvironment15FinishRayStreamI11CFilterTagsEEvR18CFilteredRayStreamIT_E */
	void AddToRayStream<CFilterTags>(const class RayTracingEnvironment  *, class CFilteredRayStream<CFilterTags> &, const class Vector  &, const class Vector  &, class RayTracingSingleResult_t *); /* linkage=_ZNK21RayTracingEnvironment14AddToRayStreamI11CFilterTagsEEvR18CFilteredRayStreamIT_ERK6VectorS8_P24RayTracingSingleResult_t */
	void FlushStreamEntry<CFilterTags>(const class RayTracingEnvironment  *, class CFilteredRayStream<CFilterTags> &, int); /* linkage=_ZNK21RayTracingEnvironment16FlushStreamEntryI11CFilterTagsEEvR18CFilteredRayStreamIT_Ei */
};

// <060E0F7A> ../public/raytrace/raytrace.h:831
void RayTracingEnvironment::RayTracingEnvironment()
{
} /* size: 0 */

// <060E0F61> ../public/raytrace/raytrace.h:831
inline void RayTracingEnvironment::RayTracingEnvironment()
{
} /* size: 0 */

// <0630EEAE> ../public/raytrace/raytrace.h:897
inline void Trace4RaysInternal<CFilterTags, RayTracingEnvironment::RayTracingResultMulti_t>(const FourRays& rays, fltx4 fl4TMin, fltx4 fl4TMax, int nDirectionSignMask, RayTracingResultMulti_t* pResultOut, CFilterTags filter, ITransparentTriangleCallback* pCallback, RTECullMode_t cullMode, const InstancedRayTracingEnvironmentReference_t* pInstance, const CRaytraceMaterialRemapTable* pMaterialRemap)
{
} /* size: 0 */

// <0630A8E1> ../public/raytrace/raytrace.h:897
inline void Trace4RaysInternal<CFilterTags, RayTracingEnvironment::RayTracingResult_t>(const FourRays& rays, fltx4 fl4TMin, fltx4 fl4TMax, int nDirectionSignMask, RayTracingResult_t* pResultOut, CFilterTags filter, ITransparentTriangleCallback* pCallback, RTECullMode_t cullMode, const InstancedRayTracingEnvironmentReference_t* pInstance, const CRaytraceMaterialRemapTable* pMaterialRemap)
{
} /* size: 0 */

// <06306102> ../public/raytrace/raytrace.h:897
inline void Trace4RaysInternal<CFilterSkipFlags, RayTracingEnvironment::RayTracingResult_t>(const FourRays& rays, fltx4 fl4TMin, fltx4 fl4TMax, int nDirectionSignMask, RayTracingResult_t* pResultOut, CFilterSkipFlags filter, ITransparentTriangleCallback* pCallback, RTECullMode_t cullMode, const InstancedRayTracingEnvironmentReference_t* pInstance, const CRaytraceMaterialRemapTable* pMaterialRemap)
{
} /* size: 0 */

// <063018C1> ../public/raytrace/raytrace.h:897
inline void Trace4RaysInternal<CFilterSkipFlags, RayTracingEnvironment::RayTracingResultMulti_t>(const FourRays& rays, fltx4 fl4TMin, fltx4 fl4TMax, int nDirectionSignMask, RayTracingResultMulti_t* pResultOut, CFilterSkipFlags filter, ITransparentTriangleCallback* pCallback, RTECullMode_t cullMode, const InstancedRayTracingEnvironmentReference_t* pInstance, const CRaytraceMaterialRemapTable* pMaterialRemap)
{
} /* size: 0 */

// <062FD425> ../public/raytrace/raytrace.h:897
inline void Trace4RaysInternal<CFilterNone, RayTracingEnvironment::RayTracingResult_t>(const FourRays& rays, fltx4 fl4TMin, fltx4 fl4TMax, int nDirectionSignMask, RayTracingResult_t* pResultOut, CFilterNone filter, ITransparentTriangleCallback* pCallback, RTECullMode_t cullMode, const InstancedRayTracingEnvironmentReference_t* pInstance, const CRaytraceMaterialRemapTable* pMaterialRemap)
{
} /* size: 0 */

// <062FD1E9> ../public/raytrace/raytrace.h:897
inline void Trace4RaysInternal<CFilterNone, RayTracingEnvironment::RayTracingResultMulti_t>(const FourRays& rays, fltx4 fl4TMin, fltx4 fl4TMax, int nDirectionSignMask, RayTracingResultMulti_t* pResultOut, CFilterNone filter, ITransparentTriangleCallback* pCallback, RTECullMode_t cullMode, const InstancedRayTracingEnvironmentReference_t* pInstance, const CRaytraceMaterialRemapTable* pMaterialRemap)
{
} /* size: 0 */

// <062FCFAD> ../public/raytrace/raytrace.h:897
inline void Trace4RaysInternal<CFilterSkipID, RayTracingEnvironment::RayTracingResult_t>(const FourRays& rays, fltx4 fl4TMin, fltx4 fl4TMax, int nDirectionSignMask, RayTracingResult_t* pResultOut, CFilterSkipID filter, ITransparentTriangleCallback* pCallback, RTECullMode_t cullMode, const InstancedRayTracingEnvironmentReference_t* pInstance, const CRaytraceMaterialRemapTable* pMaterialRemap)
{
} /* size: 0 */

// <062F87AE> ../public/raytrace/raytrace.h:897
inline void Trace4RaysInternal<CFilterSkipID, RayTracingEnvironment::RayTracingResultMulti_t>(const FourRays& rays, fltx4 fl4TMin, fltx4 fl4TMax, int nDirectionSignMask, RayTracingResultMulti_t* pResultOut, CFilterSkipID filter, ITransparentTriangleCallback* pCallback, RTECullMode_t cullMode, const InstancedRayTracingEnvironmentReference_t* pInstance, const CRaytraceMaterialRemapTable* pMaterialRemap)
{
} /* size: 0 */

// <062F4354> ../public/raytrace/raytrace.h:897
inline void Trace4RaysInternal<CFilterRequireFlags, RayTracingEnvironment::RayTracingResult_t>(const FourRays& rays, fltx4 fl4TMin, fltx4 fl4TMax, int nDirectionSignMask, RayTracingResult_t* pResultOut, CFilterRequireFlags filter, ITransparentTriangleCallback* pCallback, RTECullMode_t cullMode, const InstancedRayTracingEnvironmentReference_t* pInstance, const CRaytraceMaterialRemapTable* pMaterialRemap)
{
} /* size: 0 */

// <062EFB55> ../public/raytrace/raytrace.h:897
inline void Trace4RaysInternal<CFilterRequireFlags, RayTracingEnvironment::RayTracingResultMulti_t>(const FourRays& rays, fltx4 fl4TMin, fltx4 fl4TMax, int nDirectionSignMask, RayTracingResultMulti_t* pResultOut, CFilterRequireFlags filter, ITransparentTriangleCallback* pCallback, RTECullMode_t cullMode, const InstancedRayTracingEnvironmentReference_t* pInstance, const CRaytraceMaterialRemapTable* pMaterialRemap)
{
} /* size: 0 */

// <0618F694> ../public/raytrace/raytrace.h:957
void AddToRayStream<CFilterSkipFlags>(const RayTracingEnvironment *, CFilteredRayStream<CFilterSkipFlags> &, const Vector &, const Vector &, RayTracingSingleResult_t *)
{
} /* size: 0 */

// <0618F662> ../public/raytrace/raytrace.h:965
void FinishRayStream<CFilterSkipFlags>(const RayTracingEnvironment *, CFilteredRayStream<CFilterSkipFlags> &)
{
} /* size: 0 */

// <063507E3> ../public/raytrace/raytrace.h:975
inline void RayTracingEnvironment::GetTriangle(int32 nTriID)
{
} /* size: 0 */

// <06244F4B> ../public/raytrace/raytrace.h:1105
// member functions: 6
// class size: 1
class CFilterNone {
	/* ../public/raytrace/raytrace.h:1108 */
	bool ShouldSkip(CFilterNone* , const TriIntersectData_t* );
	/* ../public/raytrace/raytrace.h:1112 */
	bool ShouldSkip(CFilterNone* , const RayTracingEnvironment* );
	/* ../public/raytrace/raytrace.h:1116 */
	bool ShouldSkip(CFilterNone* , const InstancedRayTracingEnvironmentReference_t* );
	bool ShouldSkip(class CFilterNone *, const class TriIntersectData_t  *); /* linkage=_ZN11CFilterNone10ShouldSkipEPK18TriIntersectData_t */
	bool ShouldSkip(class CFilterNone *, const class RayTracingEnvironment  *); /* linkage=_ZN11CFilterNone10ShouldSkipEPK21RayTracingEnvironment */
	bool ShouldSkip(class CFilterNone *, const class InstancedRayTracingEnvironmentReference_t  *); /* linkage=_ZN11CFilterNone10ShouldSkipEPK41InstancedRayTracingEnvironmentReference_t */
};

// <063507BD> ../public/raytrace/raytrace.h:1108
inline void CFilterNone::ShouldSkip(const TriIntersectData_t* pTri)
{
} /* size: 0 */

// <06350797> ../public/raytrace/raytrace.h:1112
inline void CFilterNone::ShouldSkip(const RayTracingEnvironment* pRayTracingEnvironment)
{
} /* size: 0 */

// <06350771> ../public/raytrace/raytrace.h:1116
inline void CFilterNone::ShouldSkip(const InstancedRayTracingEnvironmentReference_t* instance)
{
} /* size: 0 */

// <06244FDD> ../public/raytrace/raytrace.h:1122
// member functions: 8
// member variable: 1
// class size: 4
class CFilterSkipID {
	/* ../public/raytrace/raytrace.h:1125 */
	void CFilterSkipID(CFilterSkipID* , int32);
	/* ../public/raytrace/raytrace.h:1129 */
	bool ShouldSkip(CFilterSkipID* , const TriIntersectData_t* );
	/* ../public/raytrace/raytrace.h:1133 */
	bool ShouldSkip(CFilterSkipID* , const RayTracingEnvironment* );
	/* ../public/raytrace/raytrace.h:1137 */
	bool ShouldSkip(CFilterSkipID* , const InstancedRayTracingEnvironmentReference_t* );
	int32 m_nSkipID; /* 0 4 */
	void CFilterSkipID(class CFilterSkipID *, int32); /* linkage=_ZN13CFilterSkipIDC4Ei */
	bool ShouldSkip(class CFilterSkipID *, const class TriIntersectData_t  *); /* linkage=_ZN13CFilterSkipID10ShouldSkipEPK18TriIntersectData_t */
	bool ShouldSkip(class CFilterSkipID *, const class RayTracingEnvironment  *); /* linkage=_ZN13CFilterSkipID10ShouldSkipEPK21RayTracingEnvironment */
	bool ShouldSkip(class CFilterSkipID *, const class InstancedRayTracingEnvironmentReference_t  *); /* linkage=_ZN13CFilterSkipID10ShouldSkipEPK41InstancedRayTracingEnvironmentReference_t */
};

// <0635074B> ../public/raytrace/raytrace.h:1129
inline void CFilterSkipID::ShouldSkip(const TriIntersectData_t* pTri)
{
} /* size: 0 */

// <06350725> ../public/raytrace/raytrace.h:1133
inline void CFilterSkipID::ShouldSkip(const RayTracingEnvironment* pRayTracingEnvironment)
{
} /* size: 0 */

// <063506FF> ../public/raytrace/raytrace.h:1137
inline void CFilterSkipID::ShouldSkip(const InstancedRayTracingEnvironmentReference_t* instance)
{
} /* size: 0 */

// <0618BB40> ../public/raytrace/raytrace.h:1144
// member functions: 10
// member variable: 1
// class size: 4
class CFilterSkipFlags {
	/* ../public/raytrace/raytrace.h:1147 */
	void CFilterSkipFlags(CFilterSkipFlags* );
	/* ../public/raytrace/raytrace.h:1148 */
	void CFilterSkipFlags(CFilterSkipFlags* , uint32);
	/* ../public/raytrace/raytrace.h:1150 */
	bool ShouldSkip(CFilterSkipFlags* , const TriIntersectData_t* );
	/* ../public/raytrace/raytrace.h:1154 */
	bool ShouldSkip(CFilterSkipFlags* , const RayTracingEnvironment* );
	/* ../public/raytrace/raytrace.h:1159 */
	bool ShouldSkip(CFilterSkipFlags* , const InstancedRayTracingEnvironmentReference_t* );
	uint32 m_nSkipMask; /* 0 4 */
	void CFilterSkipFlags(class CFilterSkipFlags *); /* linkage=_ZN16CFilterSkipFlagsC4Ev */
	void CFilterSkipFlags(class CFilterSkipFlags *, uint32); /* linkage=_ZN16CFilterSkipFlagsC4Ej */
	bool ShouldSkip(class CFilterSkipFlags *, const class TriIntersectData_t  *); /* linkage=_ZN16CFilterSkipFlags10ShouldSkipEPK18TriIntersectData_t */
	bool ShouldSkip(class CFilterSkipFlags *, const class RayTracingEnvironment  *); /* linkage=_ZN16CFilterSkipFlags10ShouldSkipEPK21RayTracingEnvironment */
	bool ShouldSkip(class CFilterSkipFlags *, const class InstancedRayTracingEnvironmentReference_t  *); /* linkage=_ZN16CFilterSkipFlags10ShouldSkipEPK41InstancedRayTracingEnvironmentReference_t */
};

// <06193A18> ../public/raytrace/raytrace.h:1148
void CFilterSkipFlags::CFilterSkipFlags(uint32 nSkipFlagMask)
{
} /* size: 0 */

// <061939F2> ../public/raytrace/raytrace.h:1148
inline void CFilterSkipFlags::CFilterSkipFlags(uint32 nSkipFlagMask)
{
} /* size: 0 */

// <063506D9> ../public/raytrace/raytrace.h:1150
inline void CFilterSkipFlags::ShouldSkip(const TriIntersectData_t* pTri)
{
} /* size: 0 */

// <063506B3> ../public/raytrace/raytrace.h:1154
inline void CFilterSkipFlags::ShouldSkip(const RayTracingEnvironment* pRayTracingEnvironment)
{
} /* size: 0 */

// <0635068D> ../public/raytrace/raytrace.h:1159
inline void CFilterSkipFlags::ShouldSkip(const InstancedRayTracingEnvironmentReference_t* instance)
{
} /* size: 0 */

// <0624517F> ../public/raytrace/raytrace.h:1167
// member functions: 10
// member variable: 1
// class size: 4
class CFilterRequireFlags {
	/* ../public/raytrace/raytrace.h:1170 */
	void CFilterRequireFlags(CFilterRequireFlags* );
	/* ../public/raytrace/raytrace.h:1171 */
	void CFilterRequireFlags(CFilterRequireFlags* , uint16);
	/* ../public/raytrace/raytrace.h:1173 */
	bool ShouldSkip(CFilterRequireFlags* , const TriIntersectData_t* );
	/* ../public/raytrace/raytrace.h:1177 */
	bool ShouldSkip(CFilterRequireFlags* , const RayTracingEnvironment* );
	/* ../public/raytrace/raytrace.h:1182 */
	bool ShouldSkip(CFilterRequireFlags* , const InstancedRayTracingEnvironmentReference_t* );
	uint32 m_nRequireMask; /* 0 4 */
	void CFilterRequireFlags(class CFilterRequireFlags *); /* linkage=_ZN19CFilterRequireFlagsC4Ev */
	void CFilterRequireFlags(class CFilterRequireFlags *, uint16); /* linkage=_ZN19CFilterRequireFlagsC4Et */
	bool ShouldSkip(class CFilterRequireFlags *, const class TriIntersectData_t  *); /* linkage=_ZN19CFilterRequireFlags10ShouldSkipEPK18TriIntersectData_t */
	bool ShouldSkip(class CFilterRequireFlags *, const class RayTracingEnvironment  *); /* linkage=_ZN19CFilterRequireFlags10ShouldSkipEPK21RayTracingEnvironment */
	bool ShouldSkip(class CFilterRequireFlags *, const class InstancedRayTracingEnvironmentReference_t  *); /* linkage=_ZN19CFilterRequireFlags10ShouldSkipEPK41InstancedRayTracingEnvironmentReference_t */
};

// <06350667> ../public/raytrace/raytrace.h:1173
inline void CFilterRequireFlags::ShouldSkip(const TriIntersectData_t* pTri)
{
} /* size: 0 */

// <06350641> ../public/raytrace/raytrace.h:1177
inline void CFilterRequireFlags::ShouldSkip(const RayTracingEnvironment* pRayTracingEnvironment)
{
} /* size: 0 */

// <0635061B> ../public/raytrace/raytrace.h:1182
inline void CFilterRequireFlags::ShouldSkip(const InstancedRayTracingEnvironmentReference_t* instance)
{
} /* size: 0 */

