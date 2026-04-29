
//
// public/mathlib/vplane.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//				   libschemasystem.so
//				   libvfx_vulkan.so
//
//	functions: 18
//	classes: 2
//

// <0002A1F4> ../public/mathlib/vplane.h:19
// member functions: 55
// member variables: 2
// class size: 16
class VPlane {
	/* ../public/mathlib/vplane.h:26 */
	void VPlane(VPlane* );
	/* ../public/mathlib/vplane.h:27 */
	void VPlane(VPlane* , const Vector& , vec_t);
	/* ../public/mathlib/vplane.h:28 */
	void VPlane(VPlane* , const Vector& , const Vector& );
	/* ../public/mathlib/vplane.h:30 */
	void Init(VPlane* , const Vector& , vec_t);
	/* ../public/mathlib/vplane.h:31 */
	void InitFromPointAndNormal(VPlane* , const Vector& , const Vector& );
	/* ../public/mathlib/vplane.h:34 */
	VPlane& operator=(VPlane* , const VPlane& );
	/* ../public/mathlib/vplane.h:39 */
	vec_t DistTo(const VPlane* , const Vector& );
	/* ../public/mathlib/vplane.h:43 */
	bool IntersectLineSegment(const VPlane* , const Vector& , const Vector& , Vector& );
	/* ../public/mathlib/vplane.h:46 */
	SideType GetPointSide(const VPlane* , const Vector& , vec_t);
	/* ../public/mathlib/vplane.h:49 */
	SideType GetPointSideExact(const VPlane* , const Vector& );
	/* ../public/mathlib/vplane.h:52 */
	SideType BoxOnPlaneSide(const VPlane* , const Vector& , const Vector& );
	/* ../public/mathlib/vplane.h:54 */
	bool PointInFront(VPlane* , const Vector& );
	/* ../public/mathlib/vplane.h:57 */
	void ReflectPoint(const VPlane* , Vector& );
	/* ../public/mathlib/vplane.h:60 */
	void ReflectDirection(const VPlane* , Vector& );
	/* ../public/mathlib/vplane.h:63 */
	void ConvertToPlaneEquation(const VPlane* , Vector4D& );
	/* ../public/mathlib/vplane.h:66 */
	VPlane Flip(VPlane* );
	/* ../public/mathlib/vplane.h:69 */
	Vector GetPointOnPlane(const VPlane* );
	/* ../public/mathlib/vplane.h:72 */
	Vector SnapPointToPlane(const VPlane* , const Vector& );
	/* ../public/mathlib/vplane.h:75 */
	bool IsZero(const VPlane* );
	/* ../public/mathlib/vplane.h:78 */
	Vector CalculateClosestPointOnPlane(const VPlane* , const Vector& );
	Vector m_Normal; /* 0 12 */
	vec_t m_Dist; /* 12 4 */
	void VPlane(class VPlane *); /* linkage=_ZN6VPlaneC4Ev */
	void VPlane(class VPlane *, const class Vector__1  &, vec_t); /* linkage=_ZN6VPlaneC4ERK6Vectorf */
	void VPlane(class VPlane *, const class Vector__1  &, const class Vector__1  &); /* linkage=_ZN6VPlaneC4ERK6VectorS2_ */
	void Init(class VPlane *, const class Vector__1  &, vec_t); /* linkage=_ZN6VPlane4InitERK6Vectorf */
	void InitFromPointAndNormal(class VPlane *, const class Vector__1  &, const class Vector__1  &); /* linkage=_ZN6VPlane22InitFromPointAndNormalERK6VectorS2_ */
	class VPlane & operator=(class VPlane *, const class VPlane  &); /* linkage=_ZN6VPlaneaSERKS_ */
	vec_t DistTo(const class VPlane  *, const class Vector__1  &); /* linkage=_ZNK6VPlane6DistToERK6Vector */
	bool IntersectLineSegment(const class VPlane  *, const class Vector__1  &, const class Vector__1  &, class Vector__1 &); /* linkage=_ZNK6VPlane20IntersectLineSegmentERK6VectorS2_RS0_ */
	enum SideType GetPointSide(const class VPlane  *, const class Vector__1  &, vec_t); /* linkage=_ZNK6VPlane12GetPointSideERK6Vectorf */
	enum SideType GetPointSideExact(const class VPlane  *, const class Vector__1  &); /* linkage=_ZNK6VPlane17GetPointSideExactERK6Vector */
	enum SideType BoxOnPlaneSide(const class VPlane  *, const class Vector__1  &, const class Vector__1  &); /* linkage=_ZNK6VPlane14BoxOnPlaneSideERK6VectorS2_ */
	bool PointInFront(class VPlane *, const class Vector__1  &); /* linkage=_ZN6VPlane12PointInFrontERK6Vector */
	void ReflectPoint(const class VPlane  *, class Vector__1 &); /* linkage=_ZNK6VPlane12ReflectPointER6Vector */
	void ReflectDirection(const class VPlane  *, class Vector__1 &); /* linkage=_ZNK6VPlane16ReflectDirectionER6Vector */
	void ConvertToPlaneEquation(const class VPlane  *, class Vector4D &); /* linkage=_ZNK6VPlane22ConvertToPlaneEquationER8Vector4D */
	class VPlane Flip(class VPlane *); /* linkage=_ZN6VPlane4FlipEv */
	class Vector__1 GetPointOnPlane(const class VPlane  *); /* linkage=_ZNK6VPlane15GetPointOnPlaneEv */
	class Vector__1 SnapPointToPlane(const class VPlane  *, const class Vector__1  &); /* linkage=_ZNK6VPlane16SnapPointToPlaneERK6Vector */
	bool IsZero(const class VPlane  *); /* linkage=_ZNK6VPlane6IsZeroEv */
	class Vector__1 CalculateClosestPointOnPlane(const class VPlane  *, const class Vector__1  &); /* linkage=_ZNK6VPlane28CalculateClosestPointOnPlaneERK6Vector */
	void VPlane(class VPlane *, const class Vector  &, vec_t); /* linkage=_ZN6VPlaneC4ERK6Vectorf */
	void VPlane(class VPlane *, const class Vector  &, const class Vector  &); /* linkage=_ZN6VPlaneC4ERK6VectorS2_ */
	void Init(class VPlane *, const class Vector  &, vec_t); /* linkage=_ZN6VPlane4InitERK6Vectorf */
	void InitFromPointAndNormal(class VPlane *, const class Vector  &, const class Vector  &); /* linkage=_ZN6VPlane22InitFromPointAndNormalERK6VectorS2_ */
	vec_t DistTo(const class VPlane  *, const class Vector  &); /* linkage=_ZNK6VPlane6DistToERK6Vector */
	bool IntersectLineSegment(const class VPlane  *, const class Vector  &, const class Vector  &, class Vector &); /* linkage=_ZNK6VPlane20IntersectLineSegmentERK6VectorS2_RS0_ */
	enum SideType GetPointSide(const class VPlane  *, const class Vector  &, vec_t); /* linkage=_ZNK6VPlane12GetPointSideERK6Vectorf */
	enum SideType GetPointSideExact(const class VPlane  *, const class Vector  &); /* linkage=_ZNK6VPlane17GetPointSideExactERK6Vector */
	enum SideType BoxOnPlaneSide(const class VPlane  *, const class Vector  &, const class Vector  &); /* linkage=_ZNK6VPlane14BoxOnPlaneSideERK6VectorS2_ */
	bool PointInFront(class VPlane *, const class Vector  &); /* linkage=_ZN6VPlane12PointInFrontERK6Vector */
	void ReflectPoint(const class VPlane  *, class Vector &); /* linkage=_ZNK6VPlane12ReflectPointER6Vector */
	void ReflectDirection(const class VPlane  *, class Vector &); /* linkage=_ZNK6VPlane16ReflectDirectionER6Vector */
	class Vector GetPointOnPlane(const class VPlane  *); /* linkage=_ZNK6VPlane15GetPointOnPlaneEv */
	class Vector SnapPointToPlane(const class VPlane  *, const class Vector  &); /* linkage=_ZNK6VPlane16SnapPointToPlaneERK6Vector */
	class Vector CalculateClosestPointOnPlane(const class VPlane  *, const class Vector  &); /* linkage=_ZNK6VPlane28CalculateClosestPointOnPlaneERK6Vector */
};

// <057EF3CF> ../../public/mathlib/vplane.h:19
// member functions: 55
// member variables: 2
// class size: 16
class VPlane {
	/* ../../public/mathlib/vplane.h:26 */
	void VPlane(VPlane* );
	/* ../../public/mathlib/vplane.h:27 */
	void VPlane(VPlane* , const Vector& , vec_t);
	/* ../../public/mathlib/vplane.h:28 */
	void VPlane(VPlane* , const Vector& , const Vector& );
	/* ../../public/mathlib/vplane.h:30 */
	void Init(VPlane* , const Vector& , vec_t);
	/* ../../public/mathlib/vplane.h:31 */
	void InitFromPointAndNormal(VPlane* , const Vector& , const Vector& );
	/* ../../public/mathlib/vplane.h:34 */
	VPlane& operator=(VPlane* , const VPlane& );
	/* ../../public/mathlib/vplane.h:39 */
	vec_t DistTo(const VPlane* , const Vector& );
	/* ../../public/mathlib/vplane.h:43 */
	bool IntersectLineSegment(const VPlane* , const Vector& , const Vector& , Vector& );
	/* ../../public/mathlib/vplane.h:46 */
	SideType GetPointSide(const VPlane* , const Vector& , vec_t);
	/* ../../public/mathlib/vplane.h:49 */
	SideType GetPointSideExact(const VPlane* , const Vector& );
	/* ../../public/mathlib/vplane.h:52 */
	SideType BoxOnPlaneSide(const VPlane* , const Vector& , const Vector& );
	/* ../../public/mathlib/vplane.h:54 */
	bool PointInFront(VPlane* , const Vector& );
	/* ../../public/mathlib/vplane.h:57 */
	void ReflectPoint(const VPlane* , Vector& );
	/* ../../public/mathlib/vplane.h:60 */
	void ReflectDirection(const VPlane* , Vector& );
	/* ../../public/mathlib/vplane.h:63 */
	void ConvertToPlaneEquation(const VPlane* , Vector4D& );
	/* ../../public/mathlib/vplane.h:66 */
	VPlane Flip(VPlane* );
	/* ../../public/mathlib/vplane.h:69 */
	Vector GetPointOnPlane(const VPlane* );
	/* ../../public/mathlib/vplane.h:72 */
	Vector SnapPointToPlane(const VPlane* , const Vector& );
	/* ../../public/mathlib/vplane.h:75 */
	bool IsZero(const VPlane* );
	/* ../../public/mathlib/vplane.h:78 */
	Vector CalculateClosestPointOnPlane(const VPlane* , const Vector& );
	Vector m_Normal; /* 0 12 */
	vec_t m_Dist; /* 12 4 */
	void VPlane(class VPlane *); /* linkage=_ZN6VPlaneC4Ev */
	void VPlane(class VPlane *, const class Vector__1  &, vec_t); /* linkage=_ZN6VPlaneC4ERK6Vectorf */
	void VPlane(class VPlane *, const class Vector__1  &, const class Vector__1  &); /* linkage=_ZN6VPlaneC4ERK6VectorS2_ */
	void Init(class VPlane *, const class Vector__1  &, vec_t); /* linkage=_ZN6VPlane4InitERK6Vectorf */
	void InitFromPointAndNormal(class VPlane *, const class Vector__1  &, const class Vector__1  &); /* linkage=_ZN6VPlane22InitFromPointAndNormalERK6VectorS2_ */
	class VPlane & operator=(class VPlane *, const class VPlane  &); /* linkage=_ZN6VPlaneaSERKS_ */
	vec_t DistTo(const class VPlane  *, const class Vector__1  &); /* linkage=_ZNK6VPlane6DistToERK6Vector */
	bool IntersectLineSegment(const class VPlane  *, const class Vector__1  &, const class Vector__1  &, class Vector__1 &); /* linkage=_ZNK6VPlane20IntersectLineSegmentERK6VectorS2_RS0_ */
	enum SideType GetPointSide(const class VPlane  *, const class Vector__1  &, vec_t); /* linkage=_ZNK6VPlane12GetPointSideERK6Vectorf */
	enum SideType GetPointSideExact(const class VPlane  *, const class Vector__1  &); /* linkage=_ZNK6VPlane17GetPointSideExactERK6Vector */
	enum SideType BoxOnPlaneSide(const class VPlane  *, const class Vector__1  &, const class Vector__1  &); /* linkage=_ZNK6VPlane14BoxOnPlaneSideERK6VectorS2_ */
	bool PointInFront(class VPlane *, const class Vector__1  &); /* linkage=_ZN6VPlane12PointInFrontERK6Vector */
	void ReflectPoint(const class VPlane  *, class Vector__1 &); /* linkage=_ZNK6VPlane12ReflectPointER6Vector */
	void ReflectDirection(const class VPlane  *, class Vector__1 &); /* linkage=_ZNK6VPlane16ReflectDirectionER6Vector */
	void ConvertToPlaneEquation(const class VPlane  *, class Vector4D &); /* linkage=_ZNK6VPlane22ConvertToPlaneEquationER8Vector4D */
	class VPlane Flip(class VPlane *); /* linkage=_ZN6VPlane4FlipEv */
	class Vector__1 GetPointOnPlane(const class VPlane  *); /* linkage=_ZNK6VPlane15GetPointOnPlaneEv */
	class Vector__1 SnapPointToPlane(const class VPlane  *, const class Vector__1  &); /* linkage=_ZNK6VPlane16SnapPointToPlaneERK6Vector */
	bool IsZero(const class VPlane  *); /* linkage=_ZNK6VPlane6IsZeroEv */
	class Vector__1 CalculateClosestPointOnPlane(const class VPlane  *, const class Vector__1  &); /* linkage=_ZNK6VPlane28CalculateClosestPointOnPlaneERK6Vector */
	void VPlane(class VPlane *, const class Vector  &, vec_t); /* linkage=_ZN6VPlaneC4ERK6Vectorf */
	void VPlane(class VPlane *, const class Vector  &, const class Vector  &); /* linkage=_ZN6VPlaneC4ERK6VectorS2_ */
	void Init(class VPlane *, const class Vector  &, vec_t); /* linkage=_ZN6VPlane4InitERK6Vectorf */
	void InitFromPointAndNormal(class VPlane *, const class Vector  &, const class Vector  &); /* linkage=_ZN6VPlane22InitFromPointAndNormalERK6VectorS2_ */
	vec_t DistTo(const class VPlane  *, const class Vector  &); /* linkage=_ZNK6VPlane6DistToERK6Vector */
	bool IntersectLineSegment(const class VPlane  *, const class Vector  &, const class Vector  &, class Vector &); /* linkage=_ZNK6VPlane20IntersectLineSegmentERK6VectorS2_RS0_ */
	enum SideType GetPointSide(const class VPlane  *, const class Vector  &, vec_t); /* linkage=_ZNK6VPlane12GetPointSideERK6Vectorf */
	enum SideType GetPointSideExact(const class VPlane  *, const class Vector  &); /* linkage=_ZNK6VPlane17GetPointSideExactERK6Vector */
	enum SideType BoxOnPlaneSide(const class VPlane  *, const class Vector  &, const class Vector  &); /* linkage=_ZNK6VPlane14BoxOnPlaneSideERK6VectorS2_ */
	bool PointInFront(class VPlane *, const class Vector  &); /* linkage=_ZN6VPlane12PointInFrontERK6Vector */
	void ReflectPoint(const class VPlane  *, class Vector &); /* linkage=_ZNK6VPlane12ReflectPointER6Vector */
	void ReflectDirection(const class VPlane  *, class Vector &); /* linkage=_ZNK6VPlane16ReflectDirectionER6Vector */
	class Vector GetPointOnPlane(const class VPlane  *); /* linkage=_ZNK6VPlane15GetPointOnPlaneEv */
	class Vector SnapPointToPlane(const class VPlane  *, const class Vector  &); /* linkage=_ZNK6VPlane16SnapPointToPlaneERK6Vector */
	class Vector CalculateClosestPointOnPlane(const class VPlane  *, const class Vector  &); /* linkage=_ZNK6VPlane28CalculateClosestPointOnPlaneERK6Vector */
};

// <05CB4C13> ../public/mathlib/vplane.h:89
void VPlane::VPlane()
{
} /* size: 0 */

// <05CB4BF8> ../public/mathlib/vplane.h:89
inline void VPlane::VPlane()
{
} /* size: 0 */

// <05A509DA> ../public/mathlib/vplane.h:93
void VPlane::VPlane(const Vector& vNormal, vec_t dist)
{
} /* size: 0 */

// <05A509A7> ../public/mathlib/vplane.h:93
inline void VPlane::VPlane(const Vector& vNormal, vec_t dist)
{
} /* size: 0 */

// <00BB113F> ../public/mathlib/vplane.h:99
void VPlane::VPlane(const Vector& vNormal, const Vector& vPoint)
{
} /* size: 0 */

// <00BB110B> ../public/mathlib/vplane.h:99
inline void VPlane::VPlane(const Vector& vNormal, const Vector& vPoint)
{
} /* size: 0 */

// <05A7DB06> ../public/mathlib/vplane.h:104
inline void VPlane::Init(const Vector& vNormal, vec_t dist)
{
} /* size: 0 */

// <05CB4BC5> ../public/mathlib/vplane.h:110
inline void VPlane::InitFromPointAndNormal(const Vector& vPos, const Vector& vNormal)
{
} /* size: 0 */

// <05CB4B9E> ../public/mathlib/vplane.h:117
inline void VPlane::DistTo(const Vector& vVec)
{
} /* size: 0 */

// <05A7DADF> ../public/mathlib/vplane.h:122
inline void VPlane::operator=(const VPlane& thePlane)
{
} /* size: 0 */

// <03428191> ../public/mathlib/vplane.h:134
// variables: 2
inline void VPlane::CalculateClosestPointOnPlane(const Vector& vPoint)
{
	const Vector  vReferencePoint; // 136
	const Vector  vReferencePointToPoint; // 137
} /* size: 0, variables: 2 */

// <0178F35E> ../public/mathlib/vplane.h:134
// variables: 2
void VPlane::CalculateClosestPointOnPlane(const Vector& vPoint)
{
	const Vector  vReferencePoint; // 136
	const Vector  vReferencePointToPoint; // 137
} /* size: 0, variables: 2 */

// <05A7DAC4> ../public/mathlib/vplane.h:147
inline void VPlane::GetPointOnPlane()
{
} /* size: 0 */

// <05CB4B77> ../public/mathlib/vplane.h:152
inline void VPlane::SnapPointToPlane(const Vector& vPoint)
{
} /* size: 0 */

// <05CB4B50> ../public/mathlib/vplane.h:157
inline void VPlane::ConvertToPlaneEquation(Vector4D& vOut)
{
} /* size: 0 */

// <034805E8> ../public/mathlib/vplane.h:184
// variable: 1
inline Vector Support(const Vector& vDirection, const Vector& vMin, const Vector& vMax)
{
	Vector vSupport; // 186
} /* size: 0, variables: 1 */

// <034805B4> ../public/mathlib/vplane.h:198
inline void VPlane::BoxOnPlaneSide(const Vector& vMin, const Vector& vMax)
{
} /* size: 0 */

// <05CB4AEF> ../public/mathlib/vplane.h:231
// variables: 3
inline void VPlane::IntersectLineSegment(const Vector& vStart, const Vector& vEnd, Vector& vIntersection)
{
	float flDist1; // 233
	float flDist2; // 234
	float t; // 248
} /* size: 0, variables: 3 */

