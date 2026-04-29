
//
// public/mathlib/motiontransform.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmeshsystem.so
//
//	functions: 11
//	classes: 2
//

// <059ED14E> ../public/mathlib/motiontransform.h:17
void CMotionTransform::CMotionTransform(const CMotionTransform &)
{
} /* size: 0 */

// <059ED12D> ../public/mathlib/motiontransform.h:17
inline void CMotionTransform::CMotionTransform(const CMotionTransform &)
{
} /* size: 0 */

// <059ED10C> ../public/mathlib/motiontransform.h:17
inline void CMotionTransform::operator=(CMotionTransform &)
{
} /* size: 0 */

// <019592DA> ../public/mathlib/motiontransform.h:17
inline void CMotionTransform::operator=(const CMotionTransform &)
{
} /* size: 0 */

// <0108630B> ../public/mathlib/motiontransform.h:17
void CMotionTransform::CMotionTransform(CMotionTransform &)
{
} /* size: 0 */

// <010862EA> ../public/mathlib/motiontransform.h:17
inline void CMotionTransform::CMotionTransform(CMotionTransform &)
{
} /* size: 0 */

// <011554E1> ../public/mathlib/motiontransform.h:17
// member functions: 57
// member variables: 2
// static member variable: 1
// class size: 16
class CMotionTransform {
	static const class CMotionTransform Identity; /* 0 0 */
	Vector m_vTranslation; /* 0 12 */
	CRotation m_flRotation; /* 12 4 */
	/* ../public/mathlib/motiontransform.h:25 */
	void CMotionTransform(CMotionTransform* );
	/* ../public/mathlib/motiontransform.h:26 */
	void CMotionTransform(CMotionTransform* , const Vector& , float);
	/* ../public/mathlib/motiontransform.h:27 */
	void CMotionTransform(CMotionTransform* , const Vector& , const QAngle& );
	/* ../public/mathlib/motiontransform.h:28 */
	void CMotionTransform(CMotionTransform* , const Vector& , const RadianEuler& );
	/* ../public/mathlib/motiontransform.h:29 */
	void CMotionTransform(CMotionTransform* , const CTransform& );
	/* ../public/mathlib/motiontransform.h:31 */
	bool IsValid(const CMotionTransform* );
	/* ../public/mathlib/motiontransform.h:34 */
	CMotionTransform operator*(const CMotionTransform* , const CMotionTransform& );
	/* ../public/mathlib/motiontransform.h:35 */
	CMotionTransform operator*(const CMotionTransform* , float);
	/* ../public/mathlib/motiontransform.h:36 */
	CMotionTransform operator+(const CMotionTransform* , const CMotionTransform& );
	/* ../public/mathlib/motiontransform.h:37 */
	CMotionTransform operator-(const CMotionTransform* , const CMotionTransform& );
	/* ../public/mathlib/motiontransform.h:39 */
	CMotionTransform operator*=(CMotionTransform* , const CMotionTransform& );
	/* ../public/mathlib/motiontransform.h:40 */
	CMotionTransform operator*=(CMotionTransform* , float);
	/* ../public/mathlib/motiontransform.h:41 */
	CMotionTransform operator+=(CMotionTransform* , const CMotionTransform& );
	/* ../public/mathlib/motiontransform.h:42 */
	CMotionTransform operator-=(CMotionTransform* , const CMotionTransform& );
	/* ../public/mathlib/motiontransform.h:44 */
	float Length(const CMotionTransform* );
	/* ../public/mathlib/motiontransform.h:46 */
	Vector TransformVector(const CMotionTransform* , const Vector& );
	/* ../public/mathlib/motiontransform.h:47 */
	Vector TransformVectorByInverse(const CMotionTransform* , const Vector& );
	/* ../public/mathlib/motiontransform.h:49 */
	Vector RotateVector(const CMotionTransform* , const Vector& );
	/* ../public/mathlib/motiontransform.h:50 */
	Vector RotateVectorByInverse(const CMotionTransform* , const Vector& );
	/* ../public/mathlib/motiontransform.h:52 */
	void Invert(CMotionTransform* );
	/* ../public/mathlib/motiontransform.h:53 */
	CMotionTransform Inverse(const CMotionTransform* );
	/* ../public/mathlib/motiontransform.h:55 */
	void Align(CMotionTransform* , const CMotionTransform& );
	/* ../public/mathlib/motiontransform.h:56 */
	CMotionTransform Aligned(const CMotionTransform* , const CMotionTransform& );
	/* ../public/mathlib/motiontransform.h:58 */
	Vector GetForward(const CMotionTransform* );
	/* ../public/mathlib/motiontransform.h:62 */
	CTransform ToCTransform(const CMotionTransform* );
	/* ../public/mathlib/motiontransform.h:63 */
	QAngle ToQAngle(const CMotionTransform* );
	/* ../public/mathlib/motiontransform.h:64 */
	RadianEuler ToRadianEuler(const CMotionTransform* );
	void CMotionTransform(class CMotionTransform *); /* linkage=_ZN16CMotionTransformC4Ev */
	void CMotionTransform(class CMotionTransform *, const class Vector  &, float); /* linkage=_ZN16CMotionTransformC4ERK6Vectorf */
	void CMotionTransform(class CMotionTransform *, const class Vector  &, const class QAngle  &); /* linkage=_ZN16CMotionTransformC4ERK6VectorRK6QAngle */
	void CMotionTransform(class CMotionTransform *, const class Vector  &, const class RadianEuler  &); /* linkage=_ZN16CMotionTransformC4ERK6VectorRK11RadianEuler */
	void CMotionTransform(class CMotionTransform *, const class CTransform  &); /* linkage=_ZN16CMotionTransformC4ERK10CTransform */
	bool IsValid(const class CMotionTransform  *); /* linkage=_ZNK16CMotionTransform7IsValidEv */
	class CMotionTransform operator*(const class CMotionTransform  *, const class CMotionTransform  &); /* linkage=_ZNK16CMotionTransformmlERKS_ */
	class CMotionTransform operator*(const class CMotionTransform  *, float); /* linkage=_ZNK16CMotionTransformmlEf */
	class CMotionTransform operator+(const class CMotionTransform  *, const class CMotionTransform  &); /* linkage=_ZNK16CMotionTransformplERKS_ */
	class CMotionTransform operator-(const class CMotionTransform  *, const class CMotionTransform  &); /* linkage=_ZNK16CMotionTransformmiERKS_ */
	class CMotionTransform operator*=(class CMotionTransform *, const class CMotionTransform  &); /* linkage=_ZN16CMotionTransformmLERKS_ */
	class CMotionTransform operator*=(class CMotionTransform *, float); /* linkage=_ZN16CMotionTransformmLEf */
	class CMotionTransform operator+=(class CMotionTransform *, const class CMotionTransform  &); /* linkage=_ZN16CMotionTransformpLERKS_ */
	class CMotionTransform operator-=(class CMotionTransform *, const class CMotionTransform  &); /* linkage=_ZN16CMotionTransformmIERKS_ */
	float Length(const class CMotionTransform  *); /* linkage=_ZNK16CMotionTransform6LengthEv */
	/* <59ef8ff> mathlib/motiontransform.cpp:154 */
	class Vector TransformVector(const class CMotionTransform  *, const class Vector  &); /* linkage=_ZNK16CMotionTransform15TransformVectorERK6Vector */
	class Vector TransformVectorByInverse(const class CMotionTransform  *, const class Vector  &); /* linkage=_ZNK16CMotionTransform24TransformVectorByInverseERK6Vector */
	/* <59efa30> mathlib/motiontransform.cpp:172 */
	class Vector RotateVector(const class CMotionTransform  *, const class Vector  &); /* linkage=_ZNK16CMotionTransform12RotateVectorERK6Vector */
	class Vector RotateVectorByInverse(const class CMotionTransform  *, const class Vector  &); /* linkage=_ZNK16CMotionTransform21RotateVectorByInverseERK6Vector */
	void Invert(class CMotionTransform *); /* linkage=_ZN16CMotionTransform6InvertEv */
	/* <59efab6> mathlib/motiontransform.cpp:200 */
	class CMotionTransform Inverse(const class CMotionTransform  *); /* linkage=_ZNK16CMotionTransform7InverseEv */
	void Align(class CMotionTransform *, const class CMotionTransform  &); /* linkage=_ZN16CMotionTransform5AlignERKS_ */
	class CMotionTransform Aligned(const class CMotionTransform  *, const class CMotionTransform  &); /* linkage=_ZNK16CMotionTransform7AlignedERKS_ */
	class Vector GetForward(const class CMotionTransform  *); /* linkage=_ZNK16CMotionTransform10GetForwardEv */
	class CTransform ToCTransform(const class CMotionTransform  *); /* linkage=_ZNK16CMotionTransform12ToCTransformEv */
	class QAngle ToQAngle(const class CMotionTransform  *); /* linkage=_ZNK16CMotionTransform8ToQAngleEv */
	class RadianEuler ToRadianEuler(const class CMotionTransform  *); /* linkage=_ZNK16CMotionTransform13ToRadianEulerEv */
	void CMotionTransform(class CMotionTransform *, const class CMotionTransform  &); /* linkage=_ZN16CMotionTransformC4ERKS_ */
	class CMotionTransform & operator=(class CMotionTransform *, class CMotionTransform &); /* linkage=_ZN16CMotionTransformaSEOS_ */
	class CMotionTransform & operator=(class CMotionTransform *, const class CMotionTransform  &); /* linkage=_ZN16CMotionTransformaSERKS_ */
};

// <00AE9A33> ../public/mathlib/motiontransform.h:17
// member functions: 58
// member variables: 2
// static member variable: 1
// class size: 16
class CMotionTransform {
	static const class CMotionTransform Identity; /* 0 0 */
	Vector m_vTranslation; /* 0 12 */
	CRotation m_flRotation; /* 12 4 */
	/* ../public/mathlib/motiontransform.h:25 */
	void CMotionTransform(CMotionTransform* );
	/* ../public/mathlib/motiontransform.h:26 */
	void CMotionTransform(CMotionTransform* , const Vector& , float);
	/* ../public/mathlib/motiontransform.h:27 */
	void CMotionTransform(CMotionTransform* , const Vector& , const QAngle& );
	/* ../public/mathlib/motiontransform.h:28 */
	void CMotionTransform(CMotionTransform* , const Vector& , const RadianEuler& );
	/* ../public/mathlib/motiontransform.h:29 */
	void CMotionTransform(CMotionTransform* , const CTransform& );
	/* ../public/mathlib/motiontransform.h:31 */
	bool IsValid(const CMotionTransform* );
	/* ../public/mathlib/motiontransform.h:34 */
	CMotionTransform operator*(const CMotionTransform* , const CMotionTransform& );
	/* ../public/mathlib/motiontransform.h:35 */
	CMotionTransform operator*(const CMotionTransform* , float);
	/* ../public/mathlib/motiontransform.h:36 */
	CMotionTransform operator+(const CMotionTransform* , const CMotionTransform& );
	/* ../public/mathlib/motiontransform.h:37 */
	CMotionTransform operator-(const CMotionTransform* , const CMotionTransform& );
	/* ../public/mathlib/motiontransform.h:39 */
	CMotionTransform operator*=(CMotionTransform* , const CMotionTransform& );
	/* ../public/mathlib/motiontransform.h:40 */
	CMotionTransform operator*=(CMotionTransform* , float);
	/* ../public/mathlib/motiontransform.h:41 */
	CMotionTransform operator+=(CMotionTransform* , const CMotionTransform& );
	/* ../public/mathlib/motiontransform.h:42 */
	CMotionTransform operator-=(CMotionTransform* , const CMotionTransform& );
	/* ../public/mathlib/motiontransform.h:44 */
	float Length(const CMotionTransform* );
	/* ../public/mathlib/motiontransform.h:46 */
	Vector TransformVector(const CMotionTransform* , const Vector& );
	/* ../public/mathlib/motiontransform.h:47 */
	Vector TransformVectorByInverse(const CMotionTransform* , const Vector& );
	/* ../public/mathlib/motiontransform.h:49 */
	Vector RotateVector(const CMotionTransform* , const Vector& );
	/* ../public/mathlib/motiontransform.h:50 */
	Vector RotateVectorByInverse(const CMotionTransform* , const Vector& );
	/* ../public/mathlib/motiontransform.h:52 */
	void Invert(CMotionTransform* );
	/* ../public/mathlib/motiontransform.h:53 */
	CMotionTransform Inverse(const CMotionTransform* );
	/* ../public/mathlib/motiontransform.h:55 */
	void Align(CMotionTransform* , const CMotionTransform& );
	/* ../public/mathlib/motiontransform.h:56 */
	CMotionTransform Aligned(const CMotionTransform* , const CMotionTransform& );
	/* ../public/mathlib/motiontransform.h:58 */
	Vector GetForward(const CMotionTransform* );
	/* ../public/mathlib/motiontransform.h:62 */
	CTransform ToCTransform(const CMotionTransform* );
	/* ../public/mathlib/motiontransform.h:63 */
	QAngle ToQAngle(const CMotionTransform* );
	/* ../public/mathlib/motiontransform.h:64 */
	RadianEuler ToRadianEuler(const CMotionTransform* );
	void CMotionTransform(CMotionTransform* , const CMotionTransform& );
	void CMotionTransform(class CMotionTransform *); /* linkage=_ZN16CMotionTransformC4Ev */
	void CMotionTransform(class CMotionTransform *, const class Vector  &, float); /* linkage=_ZN16CMotionTransformC4ERK6Vectorf */
	void CMotionTransform(class CMotionTransform *, const class Vector  &, const class QAngle  &); /* linkage=_ZN16CMotionTransformC4ERK6VectorRK6QAngle */
	void CMotionTransform(class CMotionTransform *, const class Vector  &, const class RadianEuler  &); /* linkage=_ZN16CMotionTransformC4ERK6VectorRK11RadianEuler */
	void CMotionTransform(class CMotionTransform *, const class CTransform  &); /* linkage=_ZN16CMotionTransformC4ERK10CTransform */
	bool IsValid(const class CMotionTransform  *); /* linkage=_ZNK16CMotionTransform7IsValidEv */
	class CMotionTransform operator*(const class CMotionTransform  *, const class CMotionTransform  &); /* linkage=_ZNK16CMotionTransformmlERKS_ */
	class CMotionTransform operator*(const class CMotionTransform  *, float); /* linkage=_ZNK16CMotionTransformmlEf */
	class CMotionTransform operator+(const class CMotionTransform  *, const class CMotionTransform  &); /* linkage=_ZNK16CMotionTransformplERKS_ */
	class CMotionTransform operator-(const class CMotionTransform  *, const class CMotionTransform  &); /* linkage=_ZNK16CMotionTransformmiERKS_ */
	class CMotionTransform operator*=(class CMotionTransform *, const class CMotionTransform  &); /* linkage=_ZN16CMotionTransformmLERKS_ */
	class CMotionTransform operator*=(class CMotionTransform *, float); /* linkage=_ZN16CMotionTransformmLEf */
	class CMotionTransform operator+=(class CMotionTransform *, const class CMotionTransform  &); /* linkage=_ZN16CMotionTransformpLERKS_ */
	class CMotionTransform operator-=(class CMotionTransform *, const class CMotionTransform  &); /* linkage=_ZN16CMotionTransformmIERKS_ */
	float Length(const class CMotionTransform  *); /* linkage=_ZNK16CMotionTransform6LengthEv */
	/* <59ef8ff> mathlib/motiontransform.cpp:154 */
	class Vector TransformVector(const class CMotionTransform  *, const class Vector  &); /* linkage=_ZNK16CMotionTransform15TransformVectorERK6Vector */
	class Vector TransformVectorByInverse(const class CMotionTransform  *, const class Vector  &); /* linkage=_ZNK16CMotionTransform24TransformVectorByInverseERK6Vector */
	/* <59efa30> mathlib/motiontransform.cpp:172 */
	class Vector RotateVector(const class CMotionTransform  *, const class Vector  &); /* linkage=_ZNK16CMotionTransform12RotateVectorERK6Vector */
	class Vector RotateVectorByInverse(const class CMotionTransform  *, const class Vector  &); /* linkage=_ZNK16CMotionTransform21RotateVectorByInverseERK6Vector */
	void Invert(class CMotionTransform *); /* linkage=_ZN16CMotionTransform6InvertEv */
	/* <59efab6> mathlib/motiontransform.cpp:200 */
	class CMotionTransform Inverse(const class CMotionTransform  *); /* linkage=_ZNK16CMotionTransform7InverseEv */
	void Align(class CMotionTransform *, const class CMotionTransform  &); /* linkage=_ZN16CMotionTransform5AlignERKS_ */
	class CMotionTransform Aligned(const class CMotionTransform  *, const class CMotionTransform  &); /* linkage=_ZNK16CMotionTransform7AlignedERKS_ */
	class Vector GetForward(const class CMotionTransform  *); /* linkage=_ZNK16CMotionTransform10GetForwardEv */
	class CTransform ToCTransform(const class CMotionTransform  *); /* linkage=_ZNK16CMotionTransform12ToCTransformEv */
	class QAngle ToQAngle(const class CMotionTransform  *); /* linkage=_ZNK16CMotionTransform8ToQAngleEv */
	class RadianEuler ToRadianEuler(const class CMotionTransform  *); /* linkage=_ZNK16CMotionTransform13ToRadianEulerEv */
	void CMotionTransform(class CMotionTransform *, const class CMotionTransform  &); /* linkage=_ZN16CMotionTransformC4ERKS_ */
	class CMotionTransform & operator=(class CMotionTransform *, class CMotionTransform &); /* linkage=_ZN16CMotionTransformaSEOS_ */
	class CMotionTransform & operator=(class CMotionTransform *, const class CMotionTransform  &); /* linkage=_ZN16CMotionTransformaSERKS_ */
};

// <059EEC69> ../public/mathlib/motiontransform.h:25
void CMotionTransform::CMotionTransform()
{
} /* size: 0 */

// <059EEC50> ../public/mathlib/motiontransform.h:25
inline void CMotionTransform::CMotionTransform()
{
} /* size: 0 */

// <01565ACA> ../public/mathlib/motiontransform.h:26
void CMotionTransform::CMotionTransform(const Vector& vTranslation, float flRotation)
{
} /* size: 0 */

// <017E8B20> ../public/mathlib/motiontransform.h:29
void CMotionTransform::CMotionTransform(const CTransform& xform)
{
} /* size: 0 */

// <01971924> ../public/mathlib/motiontransform.h:44
inline void CMotionTransform::Length()
{
} /* size: 0 */

