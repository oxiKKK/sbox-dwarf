
//
// public/mathlib/quadric.h
//
//	referenced by: libengine2.so
//
//	functions: 9
//	class: 1
//

// <0611C9C5> ../public/mathlib/quadric.h:18
// member functions: 22
// member variable: 1
// class size: 40
class CQuadricError {
	/* ../public/mathlib/quadric.h:21 */
	void CQuadricError(CQuadricError* );
	/* ../public/mathlib/quadric.h:23 */
	void CheckDebug(CQuadricError* );
	/* ../public/mathlib/quadric.h:29 */
	CQuadricError& operator+=(CQuadricError* , const CQuadricError& );
	/* ../public/mathlib/quadric.h:38 */
	CQuadricError operator+(const CQuadricError* , const CQuadricError& );
	/* ../public/mathlib/quadric.h:48 */
	CQuadricError& operator=(CQuadricError* , const CQuadricError& );
	/* ../public/mathlib/quadric.h:57 */
	CQuadricError& operator*=(CQuadricError* , float);
	/* ../public/mathlib/quadric.h:68 */
	Vector SolveForMinimumError(CQuadricError* );
	/* ../public/mathlib/quadric.h:79 */
	void SetToZero(CQuadricError* );
	/* ../public/mathlib/quadric.h:89 */
	void InitFromPlane(CQuadricError* , const Vector& , float, float);
	/* ../public/mathlib/quadric.h:104 */
	void InitFromTriangle(CQuadricError* , const Vector& , const Vector& , const Vector& , float);
	/* ../public/mathlib/quadric.h:114 */
	float ComputeError(CQuadricError* , const Vector& );
private:
	float m_coefficients[10]; /* 0 40 */
	void CQuadricError(class CQuadricError *); /* linkage=_ZN13CQuadricErrorC4Ev */
	void CheckDebug(class CQuadricError *); /* linkage=_ZN13CQuadricError10CheckDebugEv */
	class CQuadricError & operator+=(class CQuadricError *, const class CQuadricError  &); /* linkage=_ZN13CQuadricErrorpLERKS_ */
	class CQuadricError operator+(const class CQuadricError  *, const class CQuadricError  &); /* linkage=_ZNK13CQuadricErrorplERKS_ */
	class CQuadricError & operator=(class CQuadricError *, const class CQuadricError  &); /* linkage=_ZN13CQuadricErroraSERKS_ */
	class CQuadricError & operator*=(class CQuadricError *, float); /* linkage=_ZN13CQuadricErrormLEf */
	class Vector SolveForMinimumError(class CQuadricError *); /* linkage=_ZN13CQuadricError20SolveForMinimumErrorEv */
	void SetToZero(class CQuadricError *); /* linkage=_ZN13CQuadricError9SetToZeroEv */
	void InitFromPlane(class CQuadricError *, const class Vector  &, float, float); /* linkage=_ZN13CQuadricError13InitFromPlaneERK6Vectorff */
	void InitFromTriangle(class CQuadricError *, const class Vector  &, const class Vector  &, const class Vector  &, float); /* linkage=_ZN13CQuadricError16InitFromTriangleERK6VectorS2_S2_f */
	float ComputeError(class CQuadricError *, const class Vector  &); /* linkage=_ZN13CQuadricError12ComputeErrorERK6Vector */
};

// <0615B93B> ../public/mathlib/quadric.h:21
void CQuadricError::CQuadricError()
{
} /* size: 0 */

// <0615B922> ../public/mathlib/quadric.h:21
inline void CQuadricError::CQuadricError()
{
} /* size: 0 */

// <0615B883> ../public/mathlib/quadric.h:48
// variable: 1
inline void CQuadricError::operator=(const CQuadricError& inError0)
{
	{
		int i; // 50
	}
} /* size: 0 */

// <0615B852> ../public/mathlib/quadric.h:57
// variable: 1
inline void CQuadricError::operator*=(float flScale)
{
	{
		int i; // 59
	}
} /* size: 0 */

// <0615B82D> ../public/mathlib/quadric.h:68
// variable: 1
inline void CQuadricError::SolveForMinimumError()
{
	matrix3x4_t tmp; // 70
} /* size: 0, variables: 1 */

// <0615B808> ../public/mathlib/quadric.h:79
// variable: 1
inline void CQuadricError::SetToZero()
{
	{
		int i; // 81
	}
} /* size: 0 */

// <0615B7BF> ../public/mathlib/quadric.h:89
// variable: 1
inline void CQuadricError::InitFromPlane(const Vector& vNormal, float flDist, float flScale)
{
	float flScale2; // 91
} /* size: 0, variables: 1 */

// <0615B755> ../public/mathlib/quadric.h:104
// variables: 3
inline void CQuadricError::InitFromTriangle(const Vector& v0, const Vector& v1, const Vector& v2, float flMinArea)
{
	Vector vNormal; // 106
	float flArea; // 107
	float flDist; // 109
} /* size: 0, variables: 3 */

// <0615B6DF> ../public/mathlib/quadric.h:114
// variables: 6
inline void CQuadricError::ComputeError(const Vector& v0)
{
	float x; // 116
	float y; // 117
	float z; // 118
	float flVertex; // 119
	float flTotal; // 129
	{
		int i; // 130
	}
} /* size: 0, variables: 5 */

