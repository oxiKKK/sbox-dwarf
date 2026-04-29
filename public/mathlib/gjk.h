
//
// public/mathlib/gjk.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmeshsystem.so
//
//	functions: 15
//	structs: 7
//

// <05939E58> ../../public/mathlib/gjk.h:13
// member functions: 5
// member variables: 3
// struct size: 24
struct CGJKShapeProxy {
	/* ../../public/mathlib/gjk.h:16 */
	void CGJKShapeProxy(CGJKShapeProxy* , int, const Vector* , float);
	/* ../../public/mathlib/gjk.h:24 */
	int GetSupport(const CGJKShapeProxy* , const Vector& );
	/* ../../public/mathlib/gjk.h:44 */
	Vector GetVertex(const CGJKShapeProxy* , int);
	/* ../../public/mathlib/gjk.h:50 */
	const Vector* GetVertexData(const CGJKShapeProxy* );
	/* ../../public/mathlib/gjk.h:55 */
	int GetVertexCount(const CGJKShapeProxy* );
protected:
	int m_nVertexCount; /* 0 4 */
	const class Vector * m_pVertexBuffer; /* 8 8 */
	float m_flScale; /* 16 4 */
};

// <059808DD> ../public/mathlib/gjk.h:13
// member functions: 5
// member variables: 3
// struct size: 24
struct CGJKShapeProxy {
	/* ../public/mathlib/gjk.h:16 */
	void CGJKShapeProxy(CGJKShapeProxy* , int, const Vector* , float);
	/* ../public/mathlib/gjk.h:24 */
	int GetSupport(const CGJKShapeProxy* , const Vector& );
	/* ../public/mathlib/gjk.h:44 */
	Vector GetVertex(const CGJKShapeProxy* , int);
	/* ../public/mathlib/gjk.h:50 */
	const Vector* GetVertexData(const CGJKShapeProxy* );
	/* ../public/mathlib/gjk.h:55 */
	int GetVertexCount(const CGJKShapeProxy* );
protected:
	int m_nVertexCount; /* 0 4 */
	const class Vector * m_pVertexBuffer; /* 8 8 */
	float m_flScale; /* 16 4 */
};

// <05F07E58> ../public/mathlib/gjk.h:16
void CGJKShapeProxy::CGJKShapeProxy(int nVertexCount, const Vector* pVertexBuffer, float flScale)
{
} /* size: 0 */

// <05F07E1B> ../public/mathlib/gjk.h:16
inline void CGJKShapeProxy::CGJKShapeProxy(int nVertexCount, const Vector* pVertexBuffer, float flScale)
{
} /* size: 0 */

// <05989D29> ../public/mathlib/gjk.h:24
// variables: 4
inline void CGJKShapeProxy::GetSupport(const Vector& v)
{
	int nBestIndex; // 28
	float flBestSupport; // 29
	{
		int nIndex; // 31
		{
			float flSupport; // 33
		}
	}
} /* size: 0, variables: 2 */

// <05989D06> ../public/mathlib/gjk.h:44
inline void CGJKShapeProxy::GetVertex(int i)
{
} /* size: 0 */

// <05EC674B> ../public/mathlib/gjk.h:70
// member function: 1
// member variables: 2
// struct size: 32
struct CGJKSphereProxy : public CGJKShapeProxy {
public:
	/* struct CGJKShapeProxy <ancestor>; */ /* 0 24 */
	/* ../public/mathlib/gjk.h:73 */
	void CGJKSphereProxy(CGJKSphereProxy* , const Vector& );
private:
	Vector m_vCenter; /* 20 12 */
};

// <05F07DFF> ../public/mathlib/gjk.h:73
void CGJKSphereProxy::CGJKSphereProxy(const Vector& vCenter)
{
} /* size: 0 */

// <05F07DDA> ../public/mathlib/gjk.h:73
inline void CGJKSphereProxy::CGJKSphereProxy(const Vector& vCenter)
{
} /* size: 0 */

// <05939F66> ../../public/mathlib/gjk.h:87
// member function: 1
// member variables: 2
// struct size: 48
struct CGJKCapsuleProxy : public CGJKShapeProxy {
public:
	/* struct CGJKShapeProxy <ancestor>; */ /* 0 24 */
	/* ../../public/mathlib/gjk.h:90 */
	void CGJKCapsuleProxy(CGJKCapsuleProxy* , const Vector& , const Vector& );
private:
	Vector m_vCenter[2]; /* 20 24 */
};

// <0596B201> ../../public/mathlib/gjk.h:90
void CGJKCapsuleProxy::CGJKCapsuleProxy(const Vector& vCenter1, const Vector& vCenter2)
{
} /* size: 0 */

// <0596B1D0> ../../public/mathlib/gjk.h:90
inline void CGJKCapsuleProxy::CGJKCapsuleProxy(const Vector& vCenter1, const Vector& vCenter2)
{
} /* size: 0 */

// <05939FD0> ../../public/mathlib/gjk.h:103
// member functions: 2
// member variables: 2
// struct size: 120
struct CGJKBoxProxy : public CGJKShapeProxy {
public:
	/* struct CGJKShapeProxy <ancestor>; */ /* 0 24 */
	/* ../../public/mathlib/gjk.h:106 */
	void CGJKBoxProxy(CGJKBoxProxy* , const Vector& );
	/* ../../public/mathlib/gjk.h:120 */
	void CGJKBoxProxy(CGJKBoxProxy* , const Vector& , const Vector& );
private:
	Vector m_BoxVertices[8]; /* 20 96 */
};

// <0596B1A8> ../../public/mathlib/gjk.h:106
// variable: 1
void CGJKBoxProxy::CGJKBoxProxy(const Vector& vHalfExtent)
{
	{
		Vector e; // 110
	}
} /* size: 0 */

// <0596B176> ../../public/mathlib/gjk.h:106
// variable: 1
inline void CGJKBoxProxy::CGJKBoxProxy(const Vector& vHalfExtent)
{
	{
		Vector e; // 110
	}
} /* size: 0 */

// <05F06E57> ../public/mathlib/gjk.h:139
void GJKSimplexCache_t::GJKSimplexCache_t()
{
} /* size: 0 */

// <05F06E3B> ../public/mathlib/gjk.h:139
inline void GJKSimplexCache_t::GJKSimplexCache_t()
{
} /* size: 0 */

// <059809EB> ../public/mathlib/gjk.h:139
// member functions: 3
// member variables: 5
// struct size: 32
struct GJKSimplexCache_t {
	float m_flMetric; /* 0 4 */
	int m_nVertexCount; /* 4 4 */
	uint8 m_Vertices1[4]; /* 8 4 */
	uint8 m_Vertices2[4]; /* 12 4 */
	float m_Lambdas[4]; /* 16 16 */
	/* ../public/mathlib/gjk.h:147 */
	void Clear(GJKSimplexCache_t* );
	/* ../public/mathlib/gjk.h:152 */
	bool IsEmpty(const GJKSimplexCache_t* );
	void GJKSimplexCache_t(GJKSimplexCache_t* );
};

// <05988BA4> ../public/mathlib/gjk.h:160
void DistanceQueryResult_t::DistanceQueryResult_t()
{
} /* size: 0 */

// <05988B88> ../public/mathlib/gjk.h:160
inline void DistanceQueryResult_t::DistanceQueryResult_t()
{
} /* size: 0 */

// <0593A05E> ../../public/mathlib/gjk.h:160
// member functions: 2
// member variables: 3
// struct size: 28
struct DistanceQueryResult_t {
	Vector m_vPoint1; /* 0 12 */
	Vector m_vPoint2; /* 12 12 */
	float m_flDistance; /* 24 4 */
	/* ../../public/mathlib/gjk.h:166 */
	bool Overlap(const DistanceQueryResult_t* );
	/* ../../public/mathlib/gjk.h:171 */
	Vector Normal(const DistanceQueryResult_t* );
};

// <0594A6B4> ../../public/mathlib/gjk.h:184
DistanceQueryResult_t Distance(const matrix3x4_t &, const CGJKShapeProxy &, const matrix3x4_t &, const CGJKShapeProxy &, int)
{
} /* size: 0 */

