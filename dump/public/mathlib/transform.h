
//
// public/mathlib/transform.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   liblocalize.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//				   libschemasystem.so
//				   libvfx_vulkan.so
//
//	functions: 64
//	classes: 8
//

// <060E14FF> ../public/mathlib/transform.h:26
inline void CTransform::operator=(const CTransform &)
{
} /* size: 0 */

// <05A570E9> ../public/mathlib/transform.h:26
inline void CTransform::operator=(CTransform &)
{
} /* size: 0 */

// <0002975E> ../public/mathlib/transform.h:26
// member functions: 112
// member variables: 2
// static member variable: 1
// class size: 32
class CTransform {
	static class CTransform xIdentity; /* 0 0 */
	/* ../public/mathlib/transform.h:31 */
	void CTransform(CTransform* );
	/* ../public/mathlib/transform.h:32 */
	void CTransform(CTransform* , const VectorAligned& , const QuaternionAligned& , float);
	/* ../public/mathlib/transform.h:33 */
	void CTransform(CTransform* , const Vector& , const Quaternion& , float);
	/* ../public/mathlib/transform.h:34 */
	void CTransform(CTransform* , const Vector& , const QAngle& , float);
	/* ../public/mathlib/transform.h:37 */
	void CTransform(CTransform* , const CTransformUnaligned& );
	VectorAligned m_vPositionWScale __attribute__((__aligned__(16))); /* 0 16 */
	QuaternionAligned m_orientation __attribute__((__aligned__(16))); /* 16 16 */
	/* ../public/mathlib/transform.h:42 */
	bool IsValid(const CTransform* );
	/* ../public/mathlib/transform.h:47 */
	bool operator==(const CTransform* , const CTransform& );
	/* ../public/mathlib/transform.h:48 */
	bool operator!=(const CTransform* , const CTransform& );
	/* ../public/mathlib/transform.h:50 */
	CTransform operator*(const CTransform* , const CTransform& );
	/* ../public/mathlib/transform.h:53 */
	bool IsEqualTo(const CTransform* , const CTransform& , float);
	/* ../public/mathlib/transform.h:54 */
	void InitFromQAngles(CTransform* , const QAngle& , const Vector& , float);
	/* ../public/mathlib/transform.h:55 */
	void InitFromMatrix(CTransform* , const matrix3x4_t& );
	/* ../public/mathlib/transform.h:56 */
	void InitFromQuaternion(CTransform* , const Quaternion& , const Vector& , float);
	/* ../public/mathlib/transform.h:57 */
	void InitFromRotationAboutAxis(CTransform* , const Vector& , float, const Vector& , float);
	/* ../public/mathlib/transform.h:58 */
	void InitFLU(CTransform* , const Vector& , const Vector& , const Vector& , const Vector& );
	/* ../public/mathlib/transform.h:59 */
	void InitFromForwardVector(CTransform* , const Vector& , const Vector& , float);
	/* ../public/mathlib/transform.h:61 */
	Quaternion ToQuaternion(const CTransform* );
	/* ../public/mathlib/transform.h:62 */
	QAngle ToQAngle(const CTransform* );
	/* ../public/mathlib/transform.h:63 */
	matrix3x4_t ToMatrix(const CTransform* );
	/* ../public/mathlib/transform.h:64 */
	CTransform Unscaled(const CTransform* );
	/* ../public/mathlib/transform.h:66 */
	void SetToIdentity(CTransform* );
	/* ../public/mathlib/transform.h:68 */
	void SetOrigin(CTransform* , const VectorAligned& );
	/* ../public/mathlib/transform.h:69 */
	void SetAngles(CTransform* , const QAngle& );
	/* ../public/mathlib/transform.h:70 */
	void SetOrientation(CTransform* , const Quaternion& );
	/* ../public/mathlib/transform.h:71 */
	const VectorAligned GetOrigin(const CTransform* );
	/* ../public/mathlib/transform.h:73 */
	VectorAligned GetForward(const CTransform* );
	/* ../public/mathlib/transform.h:74 */
	VectorAligned GetLeft(const CTransform* );
	/* ../public/mathlib/transform.h:75 */
	VectorAligned GetUp(const CTransform* );
	/* ../public/mathlib/transform.h:77 */
	VectorAligned TransformVector(const CTransform* , const VectorAligned& );
	/* ../public/mathlib/transform.h:78 */
	VectorAligned RotateVector(const CTransform* , const VectorAligned& );
	/* ../public/mathlib/transform.h:79 */
	VectorAligned RotateAndScaleVector(const CTransform* , const VectorAligned& );
	/* ../public/mathlib/transform.h:80 */
	VectorAligned TransformVectorByInverse(const CTransform* , const VectorAligned& );
	/* ../public/mathlib/transform.h:81 */
	VectorAligned RotateVectorByInverse(const CTransform* , const VectorAligned& );
	/* ../public/mathlib/transform.h:83 */
	Vector TransformVector(const CTransform* , const Vector& );
	/* ../public/mathlib/transform.h:84 */
	Vector RotateVector(const CTransform* , const Vector& );
	/* ../public/mathlib/transform.h:85 */
	Vector RotateAndScaleVector(const CTransform* , const Vector& );
	/* ../public/mathlib/transform.h:86 */
	Vector TransformVectorByInverse(const CTransform* , const Vector& );
	/* ../public/mathlib/transform.h:87 */
	Vector RotateVectorByInverse(const CTransform* , const Vector& );
	/* ../public/mathlib/transform.h:89 */
	void GetBasisVectorsFLU(const CTransform* , Vector* , Vector* , Vector* );
	/* ../public/mathlib/transform.h:90 */
	void TransformAABB(const CTransform* , const Vector& , const Vector& , Vector& , Vector& );
	/* ../public/mathlib/transform.h:91 */
	void TransformAABBByInverse(const CTransform* , const Vector& , const Vector& , Vector& , Vector& );
	/* ../public/mathlib/transform.h:92 */
	void RotateAABB(const CTransform* , const Vector& , const Vector& , Vector& , Vector& );
	/* ../public/mathlib/transform.h:93 */
	void RotateAABBByInverse(const CTransform* , const Vector& , const Vector& , Vector& , Vector& );
	/* ../public/mathlib/transform.h:94 */
	void RotateAndScaleAABB(const CTransform* , const Vector& , const Vector& , Vector& , Vector& );
	/* ../public/mathlib/transform.h:95 */
	void RotateAndScaleAABBByInverse(const CTransform* , const Vector& , const Vector& , Vector& , Vector& );
	/* ../public/mathlib/transform.h:96 */
	Vector RotateExtents(const CTransform* , const Vector& );
	/* ../public/mathlib/transform.h:98 */
	float GetScale(const CTransform* );
	/* ../public/mathlib/transform.h:99 */
	void SetScale(CTransform* , float);
	/* ../public/mathlib/transform.h:101 */
	CTransform Inverse(const CTransform* );
	/* ../public/mathlib/transform.h:105 */
	CTransform InverseTR(const CTransform* );
	/* ../public/mathlib/transform.h:108 */
	void SetPositionAndScale(CTransform* , const VectorAligned& , float);
	/* ../public/mathlib/transform.h:109 */
	void SetPosition(CTransform* , const VectorAligned& );
	/* ../public/mathlib/transform.h:110 */
	void SetPosition(CTransform* , const Vector& );
	/* ../public/mathlib/transform.h:111 */
	void SetPositionAndScale(CTransform* , const Vector& , float);
	/* ../public/mathlib/transform.h:112 */
	CTransform& operator=(CTransform* , const CTransformUnaligned& );
	void CTransform(class CTransform *); /* linkage=_ZN10CTransformC4Ev */
	void CTransform(class CTransform *, const class VectorAligned  &, const class QuaternionAligned  &, float); /* linkage=_ZN10CTransformC4ERK13VectorAlignedRK17QuaternionAlignedf */
	void CTransform(class CTransform *, const class Vector  &, const class Quaternion  &, float); /* linkage=_ZN10CTransformC4ERK6VectorRK10Quaternionf */
	void CTransform(class CTransform *, const class Vector  &, const class QAngle  &, float); /* linkage=_ZN10CTransformC4ERK6VectorRK6QAnglef */
	void CTransform(class CTransform *, const class CTransformUnaligned  &); /* linkage=_ZN10CTransformC4ERK19CTransformUnaligned */
	bool IsValid(const class CTransform  *); /* linkage=_ZNK10CTransform7IsValidEv */
	bool operator==(const class CTransform  *, const class CTransform  &); /* linkage=_ZNK10CTransformeqERKS_ */
	bool operator!=(const class CTransform  *, const class CTransform  &); /* linkage=_ZNK10CTransformneERKS_ */
	class CTransform operator*(const class CTransform  *, const class CTransform  &); /* linkage=_ZNK10CTransformmlERKS_ */
	bool IsEqualTo(const class CTransform  *, const class CTransform  &, float); /* linkage=_ZNK10CTransform9IsEqualToERKS_f */
	void InitFromQAngles(class CTransform *, const class QAngle  &, const class Vector  &, float); /* linkage=_ZN10CTransform15InitFromQAnglesERK6QAngleRK6Vectorf */
	/* <25e07c0> ../public/mathlib/transform.h:303 */
	void InitFromMatrix(class CTransform *, const class matrix3x4_t  &); /* linkage=_ZN10CTransform14InitFromMatrixERK11matrix3x4_t */
	void InitFromQuaternion(class CTransform *, const class Quaternion  &, const class Vector  &, float); /* linkage=_ZN10CTransform18InitFromQuaternionERK10QuaternionRK6Vectorf */
	void InitFromRotationAboutAxis(class CTransform *, const class Vector  &, float, const class Vector  &, float); /* linkage=_ZN10CTransform25InitFromRotationAboutAxisERK6VectorfS2_f */
	void InitFLU(class CTransform *, const class Vector  &, const class Vector  &, const class Vector  &, const class Vector  &); /* linkage=_ZN10CTransform7InitFLUERK6VectorS2_S2_S2_ */
	void InitFromForwardVector(class CTransform *, const class Vector  &, const class Vector  &, float); /* linkage=_ZN10CTransform21InitFromForwardVectorERK6VectorS2_f */
	class Quaternion ToQuaternion(const class CTransform  *); /* linkage=_ZNK10CTransform12ToQuaternionEv */
	class QAngle ToQAngle(const class CTransform  *); /* linkage=_ZNK10CTransform8ToQAngleEv */
	class matrix3x4_t ToMatrix(const class CTransform  *); /* linkage=_ZNK10CTransform8ToMatrixEv */
	class CTransform Unscaled(const class CTransform  *); /* linkage=_ZNK10CTransform8UnscaledEv */
	void SetToIdentity(class CTransform *); /* linkage=_ZN10CTransform13SetToIdentityEv */
	void SetOrigin(class CTransform *, const class VectorAligned  &); /* linkage=_ZN10CTransform9SetOriginERK13VectorAligned */
	void SetAngles(class CTransform *, const class QAngle  &); /* linkage=_ZN10CTransform9SetAnglesERK6QAngle */
	void SetOrientation(class CTransform *, const class Quaternion  &); /* linkage=_ZN10CTransform14SetOrientationERK10Quaternion */
	const class VectorAligned  GetOrigin(const class CTransform  *); /* linkage=_ZNK10CTransform9GetOriginEv */
	class VectorAligned GetForward(const class CTransform  *); /* linkage=_ZNK10CTransform10GetForwardEv */
	class VectorAligned GetLeft(const class CTransform  *); /* linkage=_ZNK10CTransform7GetLeftEv */
	class VectorAligned GetUp(const class CTransform  *); /* linkage=_ZNK10CTransform5GetUpEv */
	class VectorAligned TransformVector(const class CTransform  *, const class VectorAligned  &); /* linkage=_ZNK10CTransform15TransformVectorERK13VectorAligned */
	class VectorAligned RotateVector(const class CTransform  *, const class VectorAligned  &); /* linkage=_ZNK10CTransform12RotateVectorERK13VectorAligned */
	class VectorAligned RotateAndScaleVector(const class CTransform  *, const class VectorAligned  &); /* linkage=_ZNK10CTransform20RotateAndScaleVectorERK13VectorAligned */
	class VectorAligned TransformVectorByInverse(const class CTransform  *, const class VectorAligned  &); /* linkage=_ZNK10CTransform24TransformVectorByInverseERK13VectorAligned */
	class VectorAligned RotateVectorByInverse(const class CTransform  *, const class VectorAligned  &); /* linkage=_ZNK10CTransform21RotateVectorByInverseERK13VectorAligned */
	class Vector TransformVector(const class CTransform  *, const class Vector  &); /* linkage=_ZNK10CTransform15TransformVectorERK6Vector */
	class Vector RotateVector(const class CTransform  *, const class Vector  &); /* linkage=_ZNK10CTransform12RotateVectorERK6Vector */
	class Vector RotateAndScaleVector(const class CTransform  *, const class Vector  &); /* linkage=_ZNK10CTransform20RotateAndScaleVectorERK6Vector */
	class Vector TransformVectorByInverse(const class CTransform  *, const class Vector  &); /* linkage=_ZNK10CTransform24TransformVectorByInverseERK6Vector */
	class Vector RotateVectorByInverse(const class CTransform  *, const class Vector  &); /* linkage=_ZNK10CTransform21RotateVectorByInverseERK6Vector */
	void GetBasisVectorsFLU(const class CTransform  *, class Vector *, class Vector *, class Vector *); /* linkage=_ZNK10CTransform18GetBasisVectorsFLUEP6VectorS1_S1_ */
	void TransformAABB(const class CTransform  *, const class Vector  &, const class Vector  &, class Vector &, class Vector &); /* linkage=_ZNK10CTransform13TransformAABBERK6VectorS2_RS0_S3_ */
	void TransformAABBByInverse(const class CTransform  *, const class Vector  &, const class Vector  &, class Vector &, class Vector &); /* linkage=_ZNK10CTransform22TransformAABBByInverseERK6VectorS2_RS0_S3_ */
	void RotateAABB(const class CTransform  *, const class Vector  &, const class Vector  &, class Vector &, class Vector &); /* linkage=_ZNK10CTransform10RotateAABBERK6VectorS2_RS0_S3_ */
	void RotateAABBByInverse(const class CTransform  *, const class Vector  &, const class Vector  &, class Vector &, class Vector &); /* linkage=_ZNK10CTransform19RotateAABBByInverseERK6VectorS2_RS0_S3_ */
	void RotateAndScaleAABB(const class CTransform  *, const class Vector  &, const class Vector  &, class Vector &, class Vector &); /* linkage=_ZNK10CTransform18RotateAndScaleAABBERK6VectorS2_RS0_S3_ */
	void RotateAndScaleAABBByInverse(const class CTransform  *, const class Vector  &, const class Vector  &, class Vector &, class Vector &); /* linkage=_ZNK10CTransform27RotateAndScaleAABBByInverseERK6VectorS2_RS0_S3_ */
	class Vector RotateExtents(const class CTransform  *, const class Vector  &); /* linkage=_ZNK10CTransform13RotateExtentsERK6Vector */
	float GetScale(const class CTransform  *); /* linkage=_ZNK10CTransform8GetScaleEv */
	void SetScale(class CTransform *, float); /* linkage=_ZN10CTransform8SetScaleEf */
	class CTransform Inverse(const class CTransform  *); /* linkage=_ZNK10CTransform7InverseEv */
	class CTransform InverseTR(const class CTransform  *); /* linkage=_ZNK10CTransform9InverseTREv */
	void SetPositionAndScale(class CTransform *, const class VectorAligned  &, float); /* linkage=_ZN10CTransform19SetPositionAndScaleERK13VectorAlignedf */
	void SetPosition(class CTransform *, const class VectorAligned  &); /* linkage=_ZN10CTransform11SetPositionERK13VectorAligned */
	void SetPosition(class CTransform *, const class Vector  &); /* linkage=_ZN10CTransform11SetPositionERK6Vector */
	void SetPositionAndScale(class CTransform *, const class Vector  &, float); /* linkage=_ZN10CTransform19SetPositionAndScaleERK6Vectorf */
	class CTransform & operator=(class CTransform *, const class CTransformUnaligned  &); /* linkage=_ZN10CTransformaSERK19CTransformUnaligned */
	class CTransform & operator=(class CTransform *, const class CTransform  &); /* linkage=_ZN10CTransformaSERKS_ */
	class CTransform & operator=(class CTransform *, class CTransform &); /* linkage=_ZN10CTransformaSEOS_ */
} __attribute__((__aligned__(16)));

// <00CC6522> ../public/mathlib/transform.h:26
// member functions: 114
// member variables: 2
// static member variable: 1
// class size: 32
class CTransform {
	static class CTransform xIdentity; /* 0 0 */
	/* ../public/mathlib/transform.h:31 */
	void CTransform(CTransform* );
	/* ../public/mathlib/transform.h:32 */
	void CTransform(CTransform* , const VectorAligned& , const QuaternionAligned& , float);
	/* ../public/mathlib/transform.h:33 */
	void CTransform(CTransform* , const Vector& , const Quaternion& , float);
	/* ../public/mathlib/transform.h:34 */
	void CTransform(CTransform* , const Vector& , const QAngle& , float);
	/* ../public/mathlib/transform.h:37 */
	void CTransform(CTransform* , const CTransformUnaligned& );
	VectorAligned m_vPositionWScale __attribute__((__aligned__(16))); /* 0 16 */
	QuaternionAligned m_orientation __attribute__((__aligned__(16))); /* 16 16 */
	/* ../public/mathlib/transform.h:42 */
	bool IsValid(const CTransform* );
	/* ../public/mathlib/transform.h:47 */
	bool operator==(const CTransform* , const CTransform& );
	/* ../public/mathlib/transform.h:48 */
	bool operator!=(const CTransform* , const CTransform& );
	/* ../public/mathlib/transform.h:50 */
	CTransform operator*(const CTransform* , const CTransform& );
	/* ../public/mathlib/transform.h:53 */
	bool IsEqualTo(const CTransform* , const CTransform& , float);
	/* ../public/mathlib/transform.h:54 */
	void InitFromQAngles(CTransform* , const QAngle& , const Vector& , float);
	/* ../public/mathlib/transform.h:55 */
	void InitFromMatrix(CTransform* , const matrix3x4_t& );
	/* ../public/mathlib/transform.h:56 */
	void InitFromQuaternion(CTransform* , const Quaternion& , const Vector& , float);
	/* ../public/mathlib/transform.h:57 */
	void InitFromRotationAboutAxis(CTransform* , const Vector& , float, const Vector& , float);
	/* ../public/mathlib/transform.h:58 */
	void InitFLU(CTransform* , const Vector& , const Vector& , const Vector& , const Vector& );
	/* ../public/mathlib/transform.h:59 */
	void InitFromForwardVector(CTransform* , const Vector& , const Vector& , float);
	/* ../public/mathlib/transform.h:61 */
	Quaternion ToQuaternion(const CTransform* );
	/* ../public/mathlib/transform.h:62 */
	QAngle ToQAngle(const CTransform* );
	/* ../public/mathlib/transform.h:63 */
	matrix3x4_t ToMatrix(const CTransform* );
	/* ../public/mathlib/transform.h:64 */
	CTransform Unscaled(const CTransform* );
	/* ../public/mathlib/transform.h:66 */
	void SetToIdentity(CTransform* );
	/* ../public/mathlib/transform.h:68 */
	void SetOrigin(CTransform* , const VectorAligned& );
	/* ../public/mathlib/transform.h:69 */
	void SetAngles(CTransform* , const QAngle& );
	/* ../public/mathlib/transform.h:70 */
	void SetOrientation(CTransform* , const Quaternion& );
	/* ../public/mathlib/transform.h:71 */
	const VectorAligned GetOrigin(const CTransform* );
	/* ../public/mathlib/transform.h:73 */
	VectorAligned GetForward(const CTransform* );
	/* ../public/mathlib/transform.h:74 */
	VectorAligned GetLeft(const CTransform* );
	/* ../public/mathlib/transform.h:75 */
	VectorAligned GetUp(const CTransform* );
	/* ../public/mathlib/transform.h:77 */
	VectorAligned TransformVector(const CTransform* , const VectorAligned& );
	/* ../public/mathlib/transform.h:78 */
	VectorAligned RotateVector(const CTransform* , const VectorAligned& );
	/* ../public/mathlib/transform.h:79 */
	VectorAligned RotateAndScaleVector(const CTransform* , const VectorAligned& );
	/* ../public/mathlib/transform.h:80 */
	VectorAligned TransformVectorByInverse(const CTransform* , const VectorAligned& );
	/* ../public/mathlib/transform.h:81 */
	VectorAligned RotateVectorByInverse(const CTransform* , const VectorAligned& );
	/* ../public/mathlib/transform.h:83 */
	Vector TransformVector(const CTransform* , const Vector& );
	/* ../public/mathlib/transform.h:84 */
	Vector RotateVector(const CTransform* , const Vector& );
	/* ../public/mathlib/transform.h:85 */
	Vector RotateAndScaleVector(const CTransform* , const Vector& );
	/* ../public/mathlib/transform.h:86 */
	Vector TransformVectorByInverse(const CTransform* , const Vector& );
	/* ../public/mathlib/transform.h:87 */
	Vector RotateVectorByInverse(const CTransform* , const Vector& );
	/* ../public/mathlib/transform.h:89 */
	void GetBasisVectorsFLU(const CTransform* , Vector* , Vector* , Vector* );
	/* ../public/mathlib/transform.h:90 */
	void TransformAABB(const CTransform* , const Vector& , const Vector& , Vector& , Vector& );
	/* ../public/mathlib/transform.h:91 */
	void TransformAABBByInverse(const CTransform* , const Vector& , const Vector& , Vector& , Vector& );
	/* ../public/mathlib/transform.h:92 */
	void RotateAABB(const CTransform* , const Vector& , const Vector& , Vector& , Vector& );
	/* ../public/mathlib/transform.h:93 */
	void RotateAABBByInverse(const CTransform* , const Vector& , const Vector& , Vector& , Vector& );
	/* ../public/mathlib/transform.h:94 */
	void RotateAndScaleAABB(const CTransform* , const Vector& , const Vector& , Vector& , Vector& );
	/* ../public/mathlib/transform.h:95 */
	void RotateAndScaleAABBByInverse(const CTransform* , const Vector& , const Vector& , Vector& , Vector& );
	/* ../public/mathlib/transform.h:96 */
	Vector RotateExtents(const CTransform* , const Vector& );
	/* ../public/mathlib/transform.h:98 */
	float GetScale(const CTransform* );
	/* ../public/mathlib/transform.h:99 */
	void SetScale(CTransform* , float);
	/* ../public/mathlib/transform.h:101 */
	CTransform Inverse(const CTransform* );
	/* ../public/mathlib/transform.h:105 */
	CTransform InverseTR(const CTransform* );
	/* ../public/mathlib/transform.h:108 */
	void SetPositionAndScale(CTransform* , const VectorAligned& , float);
	/* ../public/mathlib/transform.h:109 */
	void SetPosition(CTransform* , const VectorAligned& );
	/* ../public/mathlib/transform.h:110 */
	void SetPosition(CTransform* , const Vector& );
	/* ../public/mathlib/transform.h:111 */
	void SetPositionAndScale(CTransform* , const Vector& , float);
	/* ../public/mathlib/transform.h:112 */
	CTransform& operator=(CTransform* , const CTransformUnaligned& );
	CTransform& operator=(CTransform* , CTransform& );
	CTransform& operator=(CTransform* , const CTransform& );
	void CTransform(class CTransform *); /* linkage=_ZN10CTransformC4Ev */
	void CTransform(class CTransform *, const class VectorAligned  &, const class QuaternionAligned  &, float); /* linkage=_ZN10CTransformC4ERK13VectorAlignedRK17QuaternionAlignedf */
	void CTransform(class CTransform *, const class Vector  &, const class Quaternion  &, float); /* linkage=_ZN10CTransformC4ERK6VectorRK10Quaternionf */
	void CTransform(class CTransform *, const class Vector  &, const class QAngle  &, float); /* linkage=_ZN10CTransformC4ERK6VectorRK6QAnglef */
	void CTransform(class CTransform *, const class CTransformUnaligned  &); /* linkage=_ZN10CTransformC4ERK19CTransformUnaligned */
	bool IsValid(const class CTransform  *); /* linkage=_ZNK10CTransform7IsValidEv */
	bool operator==(const class CTransform  *, const class CTransform  &); /* linkage=_ZNK10CTransformeqERKS_ */
	bool operator!=(const class CTransform  *, const class CTransform  &); /* linkage=_ZNK10CTransformneERKS_ */
	class CTransform operator*(const class CTransform  *, const class CTransform  &); /* linkage=_ZNK10CTransformmlERKS_ */
	bool IsEqualTo(const class CTransform  *, const class CTransform  &, float); /* linkage=_ZNK10CTransform9IsEqualToERKS_f */
	void InitFromQAngles(class CTransform *, const class QAngle  &, const class Vector  &, float); /* linkage=_ZN10CTransform15InitFromQAnglesERK6QAngleRK6Vectorf */
	/* <25e07c0> ../public/mathlib/transform.h:303 */
	void InitFromMatrix(class CTransform *, const class matrix3x4_t  &); /* linkage=_ZN10CTransform14InitFromMatrixERK11matrix3x4_t */
	void InitFromQuaternion(class CTransform *, const class Quaternion  &, const class Vector  &, float); /* linkage=_ZN10CTransform18InitFromQuaternionERK10QuaternionRK6Vectorf */
	void InitFromRotationAboutAxis(class CTransform *, const class Vector  &, float, const class Vector  &, float); /* linkage=_ZN10CTransform25InitFromRotationAboutAxisERK6VectorfS2_f */
	void InitFLU(class CTransform *, const class Vector  &, const class Vector  &, const class Vector  &, const class Vector  &); /* linkage=_ZN10CTransform7InitFLUERK6VectorS2_S2_S2_ */
	void InitFromForwardVector(class CTransform *, const class Vector  &, const class Vector  &, float); /* linkage=_ZN10CTransform21InitFromForwardVectorERK6VectorS2_f */
	class Quaternion ToQuaternion(const class CTransform  *); /* linkage=_ZNK10CTransform12ToQuaternionEv */
	class QAngle ToQAngle(const class CTransform  *); /* linkage=_ZNK10CTransform8ToQAngleEv */
	class matrix3x4_t ToMatrix(const class CTransform  *); /* linkage=_ZNK10CTransform8ToMatrixEv */
	class CTransform Unscaled(const class CTransform  *); /* linkage=_ZNK10CTransform8UnscaledEv */
	void SetToIdentity(class CTransform *); /* linkage=_ZN10CTransform13SetToIdentityEv */
	void SetOrigin(class CTransform *, const class VectorAligned  &); /* linkage=_ZN10CTransform9SetOriginERK13VectorAligned */
	void SetAngles(class CTransform *, const class QAngle  &); /* linkage=_ZN10CTransform9SetAnglesERK6QAngle */
	void SetOrientation(class CTransform *, const class Quaternion  &); /* linkage=_ZN10CTransform14SetOrientationERK10Quaternion */
	const class VectorAligned  GetOrigin(const class CTransform  *); /* linkage=_ZNK10CTransform9GetOriginEv */
	class VectorAligned GetForward(const class CTransform  *); /* linkage=_ZNK10CTransform10GetForwardEv */
	class VectorAligned GetLeft(const class CTransform  *); /* linkage=_ZNK10CTransform7GetLeftEv */
	class VectorAligned GetUp(const class CTransform  *); /* linkage=_ZNK10CTransform5GetUpEv */
	class VectorAligned TransformVector(const class CTransform  *, const class VectorAligned  &); /* linkage=_ZNK10CTransform15TransformVectorERK13VectorAligned */
	class VectorAligned RotateVector(const class CTransform  *, const class VectorAligned  &); /* linkage=_ZNK10CTransform12RotateVectorERK13VectorAligned */
	class VectorAligned RotateAndScaleVector(const class CTransform  *, const class VectorAligned  &); /* linkage=_ZNK10CTransform20RotateAndScaleVectorERK13VectorAligned */
	class VectorAligned TransformVectorByInverse(const class CTransform  *, const class VectorAligned  &); /* linkage=_ZNK10CTransform24TransformVectorByInverseERK13VectorAligned */
	class VectorAligned RotateVectorByInverse(const class CTransform  *, const class VectorAligned  &); /* linkage=_ZNK10CTransform21RotateVectorByInverseERK13VectorAligned */
	class Vector TransformVector(const class CTransform  *, const class Vector  &); /* linkage=_ZNK10CTransform15TransformVectorERK6Vector */
	class Vector RotateVector(const class CTransform  *, const class Vector  &); /* linkage=_ZNK10CTransform12RotateVectorERK6Vector */
	class Vector RotateAndScaleVector(const class CTransform  *, const class Vector  &); /* linkage=_ZNK10CTransform20RotateAndScaleVectorERK6Vector */
	class Vector TransformVectorByInverse(const class CTransform  *, const class Vector  &); /* linkage=_ZNK10CTransform24TransformVectorByInverseERK6Vector */
	class Vector RotateVectorByInverse(const class CTransform  *, const class Vector  &); /* linkage=_ZNK10CTransform21RotateVectorByInverseERK6Vector */
	void GetBasisVectorsFLU(const class CTransform  *, class Vector *, class Vector *, class Vector *); /* linkage=_ZNK10CTransform18GetBasisVectorsFLUEP6VectorS1_S1_ */
	void TransformAABB(const class CTransform  *, const class Vector  &, const class Vector  &, class Vector &, class Vector &); /* linkage=_ZNK10CTransform13TransformAABBERK6VectorS2_RS0_S3_ */
	void TransformAABBByInverse(const class CTransform  *, const class Vector  &, const class Vector  &, class Vector &, class Vector &); /* linkage=_ZNK10CTransform22TransformAABBByInverseERK6VectorS2_RS0_S3_ */
	void RotateAABB(const class CTransform  *, const class Vector  &, const class Vector  &, class Vector &, class Vector &); /* linkage=_ZNK10CTransform10RotateAABBERK6VectorS2_RS0_S3_ */
	void RotateAABBByInverse(const class CTransform  *, const class Vector  &, const class Vector  &, class Vector &, class Vector &); /* linkage=_ZNK10CTransform19RotateAABBByInverseERK6VectorS2_RS0_S3_ */
	void RotateAndScaleAABB(const class CTransform  *, const class Vector  &, const class Vector  &, class Vector &, class Vector &); /* linkage=_ZNK10CTransform18RotateAndScaleAABBERK6VectorS2_RS0_S3_ */
	void RotateAndScaleAABBByInverse(const class CTransform  *, const class Vector  &, const class Vector  &, class Vector &, class Vector &); /* linkage=_ZNK10CTransform27RotateAndScaleAABBByInverseERK6VectorS2_RS0_S3_ */
	class Vector RotateExtents(const class CTransform  *, const class Vector  &); /* linkage=_ZNK10CTransform13RotateExtentsERK6Vector */
	float GetScale(const class CTransform  *); /* linkage=_ZNK10CTransform8GetScaleEv */
	void SetScale(class CTransform *, float); /* linkage=_ZN10CTransform8SetScaleEf */
	class CTransform Inverse(const class CTransform  *); /* linkage=_ZNK10CTransform7InverseEv */
	class CTransform InverseTR(const class CTransform  *); /* linkage=_ZNK10CTransform9InverseTREv */
	void SetPositionAndScale(class CTransform *, const class VectorAligned  &, float); /* linkage=_ZN10CTransform19SetPositionAndScaleERK13VectorAlignedf */
	void SetPosition(class CTransform *, const class VectorAligned  &); /* linkage=_ZN10CTransform11SetPositionERK13VectorAligned */
	void SetPosition(class CTransform *, const class Vector  &); /* linkage=_ZN10CTransform11SetPositionERK6Vector */
	void SetPositionAndScale(class CTransform *, const class Vector  &, float); /* linkage=_ZN10CTransform19SetPositionAndScaleERK6Vectorf */
	class CTransform & operator=(class CTransform *, const class CTransformUnaligned  &); /* linkage=_ZN10CTransformaSERK19CTransformUnaligned */
	class CTransform & operator=(class CTransform *, const class CTransform  &); /* linkage=_ZN10CTransformaSERKS_ */
	class CTransform & operator=(class CTransform *, class CTransform &); /* linkage=_ZN10CTransformaSEOS_ */
} __attribute__((__aligned__(16)));

// <017A2E7F> ../public/mathlib/transform.h:26
// member functions: 113
// member variables: 2
// static member variable: 1
// class size: 32
class CTransform {
	static class CTransform xIdentity; /* 0 0 */
	/* ../public/mathlib/transform.h:31 */
	void CTransform(CTransform* );
	/* ../public/mathlib/transform.h:32 */
	void CTransform(CTransform* , const VectorAligned& , const QuaternionAligned& , float);
	/* ../public/mathlib/transform.h:33 */
	void CTransform(CTransform* , const Vector& , const Quaternion& , float);
	/* ../public/mathlib/transform.h:34 */
	void CTransform(CTransform* , const Vector& , const QAngle& , float);
	/* ../public/mathlib/transform.h:37 */
	void CTransform(CTransform* , const CTransformUnaligned& );
	VectorAligned m_vPositionWScale __attribute__((__aligned__(16))); /* 0 16 */
	QuaternionAligned m_orientation __attribute__((__aligned__(16))); /* 16 16 */
	/* ../public/mathlib/transform.h:42 */
	bool IsValid(const CTransform* );
	/* ../public/mathlib/transform.h:47 */
	bool operator==(const CTransform* , const CTransform& );
	/* ../public/mathlib/transform.h:48 */
	bool operator!=(const CTransform* , const CTransform& );
	/* ../public/mathlib/transform.h:50 */
	CTransform operator*(const CTransform* , const CTransform& );
	/* ../public/mathlib/transform.h:53 */
	bool IsEqualTo(const CTransform* , const CTransform& , float);
	/* ../public/mathlib/transform.h:54 */
	void InitFromQAngles(CTransform* , const QAngle& , const Vector& , float);
	/* ../public/mathlib/transform.h:55 */
	void InitFromMatrix(CTransform* , const matrix3x4_t& );
	/* ../public/mathlib/transform.h:56 */
	void InitFromQuaternion(CTransform* , const Quaternion& , const Vector& , float);
	/* ../public/mathlib/transform.h:57 */
	void InitFromRotationAboutAxis(CTransform* , const Vector& , float, const Vector& , float);
	/* ../public/mathlib/transform.h:58 */
	void InitFLU(CTransform* , const Vector& , const Vector& , const Vector& , const Vector& );
	/* ../public/mathlib/transform.h:59 */
	void InitFromForwardVector(CTransform* , const Vector& , const Vector& , float);
	/* ../public/mathlib/transform.h:61 */
	Quaternion ToQuaternion(const CTransform* );
	/* ../public/mathlib/transform.h:62 */
	QAngle ToQAngle(const CTransform* );
	/* ../public/mathlib/transform.h:63 */
	matrix3x4_t ToMatrix(const CTransform* );
	/* ../public/mathlib/transform.h:64 */
	CTransform Unscaled(const CTransform* );
	/* ../public/mathlib/transform.h:66 */
	void SetToIdentity(CTransform* );
	/* ../public/mathlib/transform.h:68 */
	void SetOrigin(CTransform* , const VectorAligned& );
	/* ../public/mathlib/transform.h:69 */
	void SetAngles(CTransform* , const QAngle& );
	/* ../public/mathlib/transform.h:70 */
	void SetOrientation(CTransform* , const Quaternion& );
	/* ../public/mathlib/transform.h:71 */
	const VectorAligned GetOrigin(const CTransform* );
	/* ../public/mathlib/transform.h:73 */
	VectorAligned GetForward(const CTransform* );
	/* ../public/mathlib/transform.h:74 */
	VectorAligned GetLeft(const CTransform* );
	/* ../public/mathlib/transform.h:75 */
	VectorAligned GetUp(const CTransform* );
	/* ../public/mathlib/transform.h:77 */
	VectorAligned TransformVector(const CTransform* , const VectorAligned& );
	/* ../public/mathlib/transform.h:78 */
	VectorAligned RotateVector(const CTransform* , const VectorAligned& );
	/* ../public/mathlib/transform.h:79 */
	VectorAligned RotateAndScaleVector(const CTransform* , const VectorAligned& );
	/* ../public/mathlib/transform.h:80 */
	VectorAligned TransformVectorByInverse(const CTransform* , const VectorAligned& );
	/* ../public/mathlib/transform.h:81 */
	VectorAligned RotateVectorByInverse(const CTransform* , const VectorAligned& );
	/* ../public/mathlib/transform.h:83 */
	Vector TransformVector(const CTransform* , const Vector& );
	/* ../public/mathlib/transform.h:84 */
	Vector RotateVector(const CTransform* , const Vector& );
	/* ../public/mathlib/transform.h:85 */
	Vector RotateAndScaleVector(const CTransform* , const Vector& );
	/* ../public/mathlib/transform.h:86 */
	Vector TransformVectorByInverse(const CTransform* , const Vector& );
	/* ../public/mathlib/transform.h:87 */
	Vector RotateVectorByInverse(const CTransform* , const Vector& );
	/* ../public/mathlib/transform.h:89 */
	void GetBasisVectorsFLU(const CTransform* , Vector* , Vector* , Vector* );
	/* ../public/mathlib/transform.h:90 */
	void TransformAABB(const CTransform* , const Vector& , const Vector& , Vector& , Vector& );
	/* ../public/mathlib/transform.h:91 */
	void TransformAABBByInverse(const CTransform* , const Vector& , const Vector& , Vector& , Vector& );
	/* ../public/mathlib/transform.h:92 */
	void RotateAABB(const CTransform* , const Vector& , const Vector& , Vector& , Vector& );
	/* ../public/mathlib/transform.h:93 */
	void RotateAABBByInverse(const CTransform* , const Vector& , const Vector& , Vector& , Vector& );
	/* ../public/mathlib/transform.h:94 */
	void RotateAndScaleAABB(const CTransform* , const Vector& , const Vector& , Vector& , Vector& );
	/* ../public/mathlib/transform.h:95 */
	void RotateAndScaleAABBByInverse(const CTransform* , const Vector& , const Vector& , Vector& , Vector& );
	/* ../public/mathlib/transform.h:96 */
	Vector RotateExtents(const CTransform* , const Vector& );
	/* ../public/mathlib/transform.h:98 */
	float GetScale(const CTransform* );
	/* ../public/mathlib/transform.h:99 */
	void SetScale(CTransform* , float);
	/* ../public/mathlib/transform.h:101 */
	CTransform Inverse(const CTransform* );
	/* ../public/mathlib/transform.h:105 */
	CTransform InverseTR(const CTransform* );
	/* ../public/mathlib/transform.h:108 */
	void SetPositionAndScale(CTransform* , const VectorAligned& , float);
	/* ../public/mathlib/transform.h:109 */
	void SetPosition(CTransform* , const VectorAligned& );
	/* ../public/mathlib/transform.h:110 */
	void SetPosition(CTransform* , const Vector& );
	/* ../public/mathlib/transform.h:111 */
	void SetPositionAndScale(CTransform* , const Vector& , float);
	/* ../public/mathlib/transform.h:112 */
	CTransform& operator=(CTransform* , const CTransformUnaligned& );
	CTransform& operator=(CTransform* , const CTransform& );
	void CTransform(class CTransform *); /* linkage=_ZN10CTransformC4Ev */
	void CTransform(class CTransform *, const class VectorAligned  &, const class QuaternionAligned  &, float); /* linkage=_ZN10CTransformC4ERK13VectorAlignedRK17QuaternionAlignedf */
	void CTransform(class CTransform *, const class Vector  &, const class Quaternion  &, float); /* linkage=_ZN10CTransformC4ERK6VectorRK10Quaternionf */
	void CTransform(class CTransform *, const class Vector  &, const class QAngle  &, float); /* linkage=_ZN10CTransformC4ERK6VectorRK6QAnglef */
	void CTransform(class CTransform *, const class CTransformUnaligned  &); /* linkage=_ZN10CTransformC4ERK19CTransformUnaligned */
	bool IsValid(const class CTransform  *); /* linkage=_ZNK10CTransform7IsValidEv */
	bool operator==(const class CTransform  *, const class CTransform  &); /* linkage=_ZNK10CTransformeqERKS_ */
	bool operator!=(const class CTransform  *, const class CTransform  &); /* linkage=_ZNK10CTransformneERKS_ */
	class CTransform operator*(const class CTransform  *, const class CTransform  &); /* linkage=_ZNK10CTransformmlERKS_ */
	bool IsEqualTo(const class CTransform  *, const class CTransform  &, float); /* linkage=_ZNK10CTransform9IsEqualToERKS_f */
	void InitFromQAngles(class CTransform *, const class QAngle  &, const class Vector  &, float); /* linkage=_ZN10CTransform15InitFromQAnglesERK6QAngleRK6Vectorf */
	/* <25e07c0> ../public/mathlib/transform.h:303 */
	void InitFromMatrix(class CTransform *, const class matrix3x4_t  &); /* linkage=_ZN10CTransform14InitFromMatrixERK11matrix3x4_t */
	void InitFromQuaternion(class CTransform *, const class Quaternion  &, const class Vector  &, float); /* linkage=_ZN10CTransform18InitFromQuaternionERK10QuaternionRK6Vectorf */
	void InitFromRotationAboutAxis(class CTransform *, const class Vector  &, float, const class Vector  &, float); /* linkage=_ZN10CTransform25InitFromRotationAboutAxisERK6VectorfS2_f */
	void InitFLU(class CTransform *, const class Vector  &, const class Vector  &, const class Vector  &, const class Vector  &); /* linkage=_ZN10CTransform7InitFLUERK6VectorS2_S2_S2_ */
	void InitFromForwardVector(class CTransform *, const class Vector  &, const class Vector  &, float); /* linkage=_ZN10CTransform21InitFromForwardVectorERK6VectorS2_f */
	class Quaternion ToQuaternion(const class CTransform  *); /* linkage=_ZNK10CTransform12ToQuaternionEv */
	class QAngle ToQAngle(const class CTransform  *); /* linkage=_ZNK10CTransform8ToQAngleEv */
	class matrix3x4_t ToMatrix(const class CTransform  *); /* linkage=_ZNK10CTransform8ToMatrixEv */
	class CTransform Unscaled(const class CTransform  *); /* linkage=_ZNK10CTransform8UnscaledEv */
	void SetToIdentity(class CTransform *); /* linkage=_ZN10CTransform13SetToIdentityEv */
	void SetOrigin(class CTransform *, const class VectorAligned  &); /* linkage=_ZN10CTransform9SetOriginERK13VectorAligned */
	void SetAngles(class CTransform *, const class QAngle  &); /* linkage=_ZN10CTransform9SetAnglesERK6QAngle */
	void SetOrientation(class CTransform *, const class Quaternion  &); /* linkage=_ZN10CTransform14SetOrientationERK10Quaternion */
	const class VectorAligned  GetOrigin(const class CTransform  *); /* linkage=_ZNK10CTransform9GetOriginEv */
	class VectorAligned GetForward(const class CTransform  *); /* linkage=_ZNK10CTransform10GetForwardEv */
	class VectorAligned GetLeft(const class CTransform  *); /* linkage=_ZNK10CTransform7GetLeftEv */
	class VectorAligned GetUp(const class CTransform  *); /* linkage=_ZNK10CTransform5GetUpEv */
	class VectorAligned TransformVector(const class CTransform  *, const class VectorAligned  &); /* linkage=_ZNK10CTransform15TransformVectorERK13VectorAligned */
	class VectorAligned RotateVector(const class CTransform  *, const class VectorAligned  &); /* linkage=_ZNK10CTransform12RotateVectorERK13VectorAligned */
	class VectorAligned RotateAndScaleVector(const class CTransform  *, const class VectorAligned  &); /* linkage=_ZNK10CTransform20RotateAndScaleVectorERK13VectorAligned */
	class VectorAligned TransformVectorByInverse(const class CTransform  *, const class VectorAligned  &); /* linkage=_ZNK10CTransform24TransformVectorByInverseERK13VectorAligned */
	class VectorAligned RotateVectorByInverse(const class CTransform  *, const class VectorAligned  &); /* linkage=_ZNK10CTransform21RotateVectorByInverseERK13VectorAligned */
	class Vector TransformVector(const class CTransform  *, const class Vector  &); /* linkage=_ZNK10CTransform15TransformVectorERK6Vector */
	class Vector RotateVector(const class CTransform  *, const class Vector  &); /* linkage=_ZNK10CTransform12RotateVectorERK6Vector */
	class Vector RotateAndScaleVector(const class CTransform  *, const class Vector  &); /* linkage=_ZNK10CTransform20RotateAndScaleVectorERK6Vector */
	class Vector TransformVectorByInverse(const class CTransform  *, const class Vector  &); /* linkage=_ZNK10CTransform24TransformVectorByInverseERK6Vector */
	class Vector RotateVectorByInverse(const class CTransform  *, const class Vector  &); /* linkage=_ZNK10CTransform21RotateVectorByInverseERK6Vector */
	void GetBasisVectorsFLU(const class CTransform  *, class Vector *, class Vector *, class Vector *); /* linkage=_ZNK10CTransform18GetBasisVectorsFLUEP6VectorS1_S1_ */
	void TransformAABB(const class CTransform  *, const class Vector  &, const class Vector  &, class Vector &, class Vector &); /* linkage=_ZNK10CTransform13TransformAABBERK6VectorS2_RS0_S3_ */
	void TransformAABBByInverse(const class CTransform  *, const class Vector  &, const class Vector  &, class Vector &, class Vector &); /* linkage=_ZNK10CTransform22TransformAABBByInverseERK6VectorS2_RS0_S3_ */
	void RotateAABB(const class CTransform  *, const class Vector  &, const class Vector  &, class Vector &, class Vector &); /* linkage=_ZNK10CTransform10RotateAABBERK6VectorS2_RS0_S3_ */
	void RotateAABBByInverse(const class CTransform  *, const class Vector  &, const class Vector  &, class Vector &, class Vector &); /* linkage=_ZNK10CTransform19RotateAABBByInverseERK6VectorS2_RS0_S3_ */
	void RotateAndScaleAABB(const class CTransform  *, const class Vector  &, const class Vector  &, class Vector &, class Vector &); /* linkage=_ZNK10CTransform18RotateAndScaleAABBERK6VectorS2_RS0_S3_ */
	void RotateAndScaleAABBByInverse(const class CTransform  *, const class Vector  &, const class Vector  &, class Vector &, class Vector &); /* linkage=_ZNK10CTransform27RotateAndScaleAABBByInverseERK6VectorS2_RS0_S3_ */
	class Vector RotateExtents(const class CTransform  *, const class Vector  &); /* linkage=_ZNK10CTransform13RotateExtentsERK6Vector */
	float GetScale(const class CTransform  *); /* linkage=_ZNK10CTransform8GetScaleEv */
	void SetScale(class CTransform *, float); /* linkage=_ZN10CTransform8SetScaleEf */
	class CTransform Inverse(const class CTransform  *); /* linkage=_ZNK10CTransform7InverseEv */
	class CTransform InverseTR(const class CTransform  *); /* linkage=_ZNK10CTransform9InverseTREv */
	void SetPositionAndScale(class CTransform *, const class VectorAligned  &, float); /* linkage=_ZN10CTransform19SetPositionAndScaleERK13VectorAlignedf */
	void SetPosition(class CTransform *, const class VectorAligned  &); /* linkage=_ZN10CTransform11SetPositionERK13VectorAligned */
	void SetPosition(class CTransform *, const class Vector  &); /* linkage=_ZN10CTransform11SetPositionERK6Vector */
	void SetPositionAndScale(class CTransform *, const class Vector  &, float); /* linkage=_ZN10CTransform19SetPositionAndScaleERK6Vectorf */
	class CTransform & operator=(class CTransform *, const class CTransformUnaligned  &); /* linkage=_ZN10CTransformaSERK19CTransformUnaligned */
	class CTransform & operator=(class CTransform *, const class CTransform  &); /* linkage=_ZN10CTransformaSERKS_ */
	class CTransform & operator=(class CTransform *, class CTransform &); /* linkage=_ZN10CTransformaSEOS_ */
} __attribute__((__aligned__(16)));

// <0544A65B> ../public/mathlib/transform.h:26
// member functions: 113
// member variables: 2
// static member variable: 1
// class size: 32
class CTransform {
	static class CTransform xIdentity; /* 0 0 */
	/* ../public/mathlib/transform.h:31 */
	void CTransform(CTransform* );
	/* ../public/mathlib/transform.h:32 */
	void CTransform(CTransform* , const VectorAligned& , const QuaternionAligned& , float);
	/* ../public/mathlib/transform.h:33 */
	void CTransform(CTransform* , const Vector& , const Quaternion& , float);
	/* ../public/mathlib/transform.h:34 */
	void CTransform(CTransform* , const Vector& , const QAngle& , float);
	/* ../public/mathlib/transform.h:37 */
	void CTransform(CTransform* , const CTransformUnaligned& );
	VectorAligned m_vPositionWScale __attribute__((__aligned__(16))); /* 0 16 */
	QuaternionAligned m_orientation __attribute__((__aligned__(16))); /* 16 16 */
	/* ../public/mathlib/transform.h:42 */
	bool IsValid(const CTransform* );
	/* ../public/mathlib/transform.h:47 */
	bool operator==(const CTransform* , const CTransform& );
	/* ../public/mathlib/transform.h:48 */
	bool operator!=(const CTransform* , const CTransform& );
	/* ../public/mathlib/transform.h:50 */
	CTransform operator*(const CTransform* , const CTransform& );
	/* ../public/mathlib/transform.h:53 */
	bool IsEqualTo(const CTransform* , const CTransform& , float);
	/* ../public/mathlib/transform.h:54 */
	void InitFromQAngles(CTransform* , const QAngle& , const Vector& , float);
	/* ../public/mathlib/transform.h:55 */
	void InitFromMatrix(CTransform* , const matrix3x4_t& );
	/* ../public/mathlib/transform.h:56 */
	void InitFromQuaternion(CTransform* , const Quaternion& , const Vector& , float);
	/* ../public/mathlib/transform.h:57 */
	void InitFromRotationAboutAxis(CTransform* , const Vector& , float, const Vector& , float);
	/* ../public/mathlib/transform.h:58 */
	void InitFLU(CTransform* , const Vector& , const Vector& , const Vector& , const Vector& );
	/* ../public/mathlib/transform.h:59 */
	void InitFromForwardVector(CTransform* , const Vector& , const Vector& , float);
	/* ../public/mathlib/transform.h:61 */
	Quaternion ToQuaternion(const CTransform* );
	/* ../public/mathlib/transform.h:62 */
	QAngle ToQAngle(const CTransform* );
	/* ../public/mathlib/transform.h:63 */
	matrix3x4_t ToMatrix(const CTransform* );
	/* ../public/mathlib/transform.h:64 */
	CTransform Unscaled(const CTransform* );
	/* ../public/mathlib/transform.h:66 */
	void SetToIdentity(CTransform* );
	/* ../public/mathlib/transform.h:68 */
	void SetOrigin(CTransform* , const VectorAligned& );
	/* ../public/mathlib/transform.h:69 */
	void SetAngles(CTransform* , const QAngle& );
	/* ../public/mathlib/transform.h:70 */
	void SetOrientation(CTransform* , const Quaternion& );
	/* ../public/mathlib/transform.h:71 */
	const VectorAligned GetOrigin(const CTransform* );
	/* ../public/mathlib/transform.h:73 */
	VectorAligned GetForward(const CTransform* );
	/* ../public/mathlib/transform.h:74 */
	VectorAligned GetLeft(const CTransform* );
	/* ../public/mathlib/transform.h:75 */
	VectorAligned GetUp(const CTransform* );
	/* ../public/mathlib/transform.h:77 */
	VectorAligned TransformVector(const CTransform* , const VectorAligned& );
	/* ../public/mathlib/transform.h:78 */
	VectorAligned RotateVector(const CTransform* , const VectorAligned& );
	/* ../public/mathlib/transform.h:79 */
	VectorAligned RotateAndScaleVector(const CTransform* , const VectorAligned& );
	/* ../public/mathlib/transform.h:80 */
	VectorAligned TransformVectorByInverse(const CTransform* , const VectorAligned& );
	/* ../public/mathlib/transform.h:81 */
	VectorAligned RotateVectorByInverse(const CTransform* , const VectorAligned& );
	/* ../public/mathlib/transform.h:83 */
	Vector TransformVector(const CTransform* , const Vector& );
	/* ../public/mathlib/transform.h:84 */
	Vector RotateVector(const CTransform* , const Vector& );
	/* ../public/mathlib/transform.h:85 */
	Vector RotateAndScaleVector(const CTransform* , const Vector& );
	/* ../public/mathlib/transform.h:86 */
	Vector TransformVectorByInverse(const CTransform* , const Vector& );
	/* ../public/mathlib/transform.h:87 */
	Vector RotateVectorByInverse(const CTransform* , const Vector& );
	/* ../public/mathlib/transform.h:89 */
	void GetBasisVectorsFLU(const CTransform* , Vector* , Vector* , Vector* );
	/* ../public/mathlib/transform.h:90 */
	void TransformAABB(const CTransform* , const Vector& , const Vector& , Vector& , Vector& );
	/* ../public/mathlib/transform.h:91 */
	void TransformAABBByInverse(const CTransform* , const Vector& , const Vector& , Vector& , Vector& );
	/* ../public/mathlib/transform.h:92 */
	void RotateAABB(const CTransform* , const Vector& , const Vector& , Vector& , Vector& );
	/* ../public/mathlib/transform.h:93 */
	void RotateAABBByInverse(const CTransform* , const Vector& , const Vector& , Vector& , Vector& );
	/* ../public/mathlib/transform.h:94 */
	void RotateAndScaleAABB(const CTransform* , const Vector& , const Vector& , Vector& , Vector& );
	/* ../public/mathlib/transform.h:95 */
	void RotateAndScaleAABBByInverse(const CTransform* , const Vector& , const Vector& , Vector& , Vector& );
	/* ../public/mathlib/transform.h:96 */
	Vector RotateExtents(const CTransform* , const Vector& );
	/* ../public/mathlib/transform.h:98 */
	float GetScale(const CTransform* );
	/* ../public/mathlib/transform.h:99 */
	void SetScale(CTransform* , float);
	/* ../public/mathlib/transform.h:101 */
	CTransform Inverse(const CTransform* );
	/* ../public/mathlib/transform.h:105 */
	CTransform InverseTR(const CTransform* );
	/* ../public/mathlib/transform.h:108 */
	void SetPositionAndScale(CTransform* , const VectorAligned& , float);
	/* ../public/mathlib/transform.h:109 */
	void SetPosition(CTransform* , const VectorAligned& );
	/* ../public/mathlib/transform.h:110 */
	void SetPosition(CTransform* , const Vector& );
	/* ../public/mathlib/transform.h:111 */
	void SetPositionAndScale(CTransform* , const Vector& , float);
	/* ../public/mathlib/transform.h:112 */
	CTransform& operator=(CTransform* , const CTransformUnaligned& );
	CTransform& operator=(CTransform* , CTransform& );
	void CTransform(class CTransform *); /* linkage=_ZN10CTransformC4Ev */
	void CTransform(class CTransform *, const class VectorAligned  &, const class QuaternionAligned  &, float); /* linkage=_ZN10CTransformC4ERK13VectorAlignedRK17QuaternionAlignedf */
	void CTransform(class CTransform *, const class Vector  &, const class Quaternion  &, float); /* linkage=_ZN10CTransformC4ERK6VectorRK10Quaternionf */
	void CTransform(class CTransform *, const class Vector  &, const class QAngle  &, float); /* linkage=_ZN10CTransformC4ERK6VectorRK6QAnglef */
	void CTransform(class CTransform *, const class CTransformUnaligned  &); /* linkage=_ZN10CTransformC4ERK19CTransformUnaligned */
	bool IsValid(const class CTransform  *); /* linkage=_ZNK10CTransform7IsValidEv */
	bool operator==(const class CTransform  *, const class CTransform  &); /* linkage=_ZNK10CTransformeqERKS_ */
	bool operator!=(const class CTransform  *, const class CTransform  &); /* linkage=_ZNK10CTransformneERKS_ */
	class CTransform operator*(const class CTransform  *, const class CTransform  &); /* linkage=_ZNK10CTransformmlERKS_ */
	bool IsEqualTo(const class CTransform  *, const class CTransform  &, float); /* linkage=_ZNK10CTransform9IsEqualToERKS_f */
	void InitFromQAngles(class CTransform *, const class QAngle  &, const class Vector  &, float); /* linkage=_ZN10CTransform15InitFromQAnglesERK6QAngleRK6Vectorf */
	/* <25e07c0> ../public/mathlib/transform.h:303 */
	void InitFromMatrix(class CTransform *, const class matrix3x4_t  &); /* linkage=_ZN10CTransform14InitFromMatrixERK11matrix3x4_t */
	void InitFromQuaternion(class CTransform *, const class Quaternion  &, const class Vector  &, float); /* linkage=_ZN10CTransform18InitFromQuaternionERK10QuaternionRK6Vectorf */
	void InitFromRotationAboutAxis(class CTransform *, const class Vector  &, float, const class Vector  &, float); /* linkage=_ZN10CTransform25InitFromRotationAboutAxisERK6VectorfS2_f */
	void InitFLU(class CTransform *, const class Vector  &, const class Vector  &, const class Vector  &, const class Vector  &); /* linkage=_ZN10CTransform7InitFLUERK6VectorS2_S2_S2_ */
	void InitFromForwardVector(class CTransform *, const class Vector  &, const class Vector  &, float); /* linkage=_ZN10CTransform21InitFromForwardVectorERK6VectorS2_f */
	class Quaternion ToQuaternion(const class CTransform  *); /* linkage=_ZNK10CTransform12ToQuaternionEv */
	class QAngle ToQAngle(const class CTransform  *); /* linkage=_ZNK10CTransform8ToQAngleEv */
	class matrix3x4_t ToMatrix(const class CTransform  *); /* linkage=_ZNK10CTransform8ToMatrixEv */
	class CTransform Unscaled(const class CTransform  *); /* linkage=_ZNK10CTransform8UnscaledEv */
	void SetToIdentity(class CTransform *); /* linkage=_ZN10CTransform13SetToIdentityEv */
	void SetOrigin(class CTransform *, const class VectorAligned  &); /* linkage=_ZN10CTransform9SetOriginERK13VectorAligned */
	void SetAngles(class CTransform *, const class QAngle  &); /* linkage=_ZN10CTransform9SetAnglesERK6QAngle */
	void SetOrientation(class CTransform *, const class Quaternion  &); /* linkage=_ZN10CTransform14SetOrientationERK10Quaternion */
	const class VectorAligned  GetOrigin(const class CTransform  *); /* linkage=_ZNK10CTransform9GetOriginEv */
	class VectorAligned GetForward(const class CTransform  *); /* linkage=_ZNK10CTransform10GetForwardEv */
	class VectorAligned GetLeft(const class CTransform  *); /* linkage=_ZNK10CTransform7GetLeftEv */
	class VectorAligned GetUp(const class CTransform  *); /* linkage=_ZNK10CTransform5GetUpEv */
	class VectorAligned TransformVector(const class CTransform  *, const class VectorAligned  &); /* linkage=_ZNK10CTransform15TransformVectorERK13VectorAligned */
	class VectorAligned RotateVector(const class CTransform  *, const class VectorAligned  &); /* linkage=_ZNK10CTransform12RotateVectorERK13VectorAligned */
	class VectorAligned RotateAndScaleVector(const class CTransform  *, const class VectorAligned  &); /* linkage=_ZNK10CTransform20RotateAndScaleVectorERK13VectorAligned */
	class VectorAligned TransformVectorByInverse(const class CTransform  *, const class VectorAligned  &); /* linkage=_ZNK10CTransform24TransformVectorByInverseERK13VectorAligned */
	class VectorAligned RotateVectorByInverse(const class CTransform  *, const class VectorAligned  &); /* linkage=_ZNK10CTransform21RotateVectorByInverseERK13VectorAligned */
	class Vector TransformVector(const class CTransform  *, const class Vector  &); /* linkage=_ZNK10CTransform15TransformVectorERK6Vector */
	class Vector RotateVector(const class CTransform  *, const class Vector  &); /* linkage=_ZNK10CTransform12RotateVectorERK6Vector */
	class Vector RotateAndScaleVector(const class CTransform  *, const class Vector  &); /* linkage=_ZNK10CTransform20RotateAndScaleVectorERK6Vector */
	class Vector TransformVectorByInverse(const class CTransform  *, const class Vector  &); /* linkage=_ZNK10CTransform24TransformVectorByInverseERK6Vector */
	class Vector RotateVectorByInverse(const class CTransform  *, const class Vector  &); /* linkage=_ZNK10CTransform21RotateVectorByInverseERK6Vector */
	void GetBasisVectorsFLU(const class CTransform  *, class Vector *, class Vector *, class Vector *); /* linkage=_ZNK10CTransform18GetBasisVectorsFLUEP6VectorS1_S1_ */
	void TransformAABB(const class CTransform  *, const class Vector  &, const class Vector  &, class Vector &, class Vector &); /* linkage=_ZNK10CTransform13TransformAABBERK6VectorS2_RS0_S3_ */
	void TransformAABBByInverse(const class CTransform  *, const class Vector  &, const class Vector  &, class Vector &, class Vector &); /* linkage=_ZNK10CTransform22TransformAABBByInverseERK6VectorS2_RS0_S3_ */
	void RotateAABB(const class CTransform  *, const class Vector  &, const class Vector  &, class Vector &, class Vector &); /* linkage=_ZNK10CTransform10RotateAABBERK6VectorS2_RS0_S3_ */
	void RotateAABBByInverse(const class CTransform  *, const class Vector  &, const class Vector  &, class Vector &, class Vector &); /* linkage=_ZNK10CTransform19RotateAABBByInverseERK6VectorS2_RS0_S3_ */
	void RotateAndScaleAABB(const class CTransform  *, const class Vector  &, const class Vector  &, class Vector &, class Vector &); /* linkage=_ZNK10CTransform18RotateAndScaleAABBERK6VectorS2_RS0_S3_ */
	void RotateAndScaleAABBByInverse(const class CTransform  *, const class Vector  &, const class Vector  &, class Vector &, class Vector &); /* linkage=_ZNK10CTransform27RotateAndScaleAABBByInverseERK6VectorS2_RS0_S3_ */
	class Vector RotateExtents(const class CTransform  *, const class Vector  &); /* linkage=_ZNK10CTransform13RotateExtentsERK6Vector */
	float GetScale(const class CTransform  *); /* linkage=_ZNK10CTransform8GetScaleEv */
	void SetScale(class CTransform *, float); /* linkage=_ZN10CTransform8SetScaleEf */
	class CTransform Inverse(const class CTransform  *); /* linkage=_ZNK10CTransform7InverseEv */
	class CTransform InverseTR(const class CTransform  *); /* linkage=_ZNK10CTransform9InverseTREv */
	void SetPositionAndScale(class CTransform *, const class VectorAligned  &, float); /* linkage=_ZN10CTransform19SetPositionAndScaleERK13VectorAlignedf */
	void SetPosition(class CTransform *, const class VectorAligned  &); /* linkage=_ZN10CTransform11SetPositionERK13VectorAligned */
	void SetPosition(class CTransform *, const class Vector  &); /* linkage=_ZN10CTransform11SetPositionERK6Vector */
	void SetPositionAndScale(class CTransform *, const class Vector  &, float); /* linkage=_ZN10CTransform19SetPositionAndScaleERK6Vectorf */
	class CTransform & operator=(class CTransform *, const class CTransformUnaligned  &); /* linkage=_ZN10CTransformaSERK19CTransformUnaligned */
	class CTransform & operator=(class CTransform *, const class CTransform  &); /* linkage=_ZN10CTransformaSERKS_ */
	class CTransform & operator=(class CTransform *, class CTransform &); /* linkage=_ZN10CTransformaSEOS_ */
} __attribute__((__aligned__(16)));

// <05855599> ../../public/mathlib/transform.h:26
// member functions: 112
// member variables: 2
// static member variable: 1
// class size: 32
class CTransform {
	static class CTransform xIdentity; /* 0 0 */
	/* ../../public/mathlib/transform.h:31 */
	void CTransform(CTransform* );
	/* ../../public/mathlib/transform.h:32 */
	void CTransform(CTransform* , const VectorAligned& , const QuaternionAligned& , float);
	/* ../../public/mathlib/transform.h:33 */
	void CTransform(CTransform* , const Vector& , const Quaternion& , float);
	/* ../../public/mathlib/transform.h:34 */
	void CTransform(CTransform* , const Vector& , const QAngle& , float);
	/* ../../public/mathlib/transform.h:37 */
	void CTransform(CTransform* , const CTransformUnaligned& );
	VectorAligned m_vPositionWScale __attribute__((__aligned__(16))); /* 0 16 */
	QuaternionAligned m_orientation __attribute__((__aligned__(16))); /* 16 16 */
	/* ../../public/mathlib/transform.h:42 */
	bool IsValid(const CTransform* );
	/* ../../public/mathlib/transform.h:47 */
	bool operator==(const CTransform* , const CTransform& );
	/* ../../public/mathlib/transform.h:48 */
	bool operator!=(const CTransform* , const CTransform& );
	/* ../../public/mathlib/transform.h:50 */
	CTransform operator*(const CTransform* , const CTransform& );
	/* ../../public/mathlib/transform.h:53 */
	bool IsEqualTo(const CTransform* , const CTransform& , float);
	/* ../../public/mathlib/transform.h:54 */
	void InitFromQAngles(CTransform* , const QAngle& , const Vector& , float);
	/* ../../public/mathlib/transform.h:55 */
	void InitFromMatrix(CTransform* , const matrix3x4_t& );
	/* ../../public/mathlib/transform.h:56 */
	void InitFromQuaternion(CTransform* , const Quaternion& , const Vector& , float);
	/* ../../public/mathlib/transform.h:57 */
	void InitFromRotationAboutAxis(CTransform* , const Vector& , float, const Vector& , float);
	/* ../../public/mathlib/transform.h:58 */
	void InitFLU(CTransform* , const Vector& , const Vector& , const Vector& , const Vector& );
	/* ../../public/mathlib/transform.h:59 */
	void InitFromForwardVector(CTransform* , const Vector& , const Vector& , float);
	/* ../../public/mathlib/transform.h:61 */
	Quaternion ToQuaternion(const CTransform* );
	/* ../../public/mathlib/transform.h:62 */
	QAngle ToQAngle(const CTransform* );
	/* ../../public/mathlib/transform.h:63 */
	matrix3x4_t ToMatrix(const CTransform* );
	/* ../../public/mathlib/transform.h:64 */
	CTransform Unscaled(const CTransform* );
	/* ../../public/mathlib/transform.h:66 */
	void SetToIdentity(CTransform* );
	/* ../../public/mathlib/transform.h:68 */
	void SetOrigin(CTransform* , const VectorAligned& );
	/* ../../public/mathlib/transform.h:69 */
	void SetAngles(CTransform* , const QAngle& );
	/* ../../public/mathlib/transform.h:70 */
	void SetOrientation(CTransform* , const Quaternion& );
	/* ../../public/mathlib/transform.h:71 */
	const VectorAligned GetOrigin(const CTransform* );
	/* ../../public/mathlib/transform.h:73 */
	VectorAligned GetForward(const CTransform* );
	/* ../../public/mathlib/transform.h:74 */
	VectorAligned GetLeft(const CTransform* );
	/* ../../public/mathlib/transform.h:75 */
	VectorAligned GetUp(const CTransform* );
	/* ../../public/mathlib/transform.h:77 */
	VectorAligned TransformVector(const CTransform* , const VectorAligned& );
	/* ../../public/mathlib/transform.h:78 */
	VectorAligned RotateVector(const CTransform* , const VectorAligned& );
	/* ../../public/mathlib/transform.h:79 */
	VectorAligned RotateAndScaleVector(const CTransform* , const VectorAligned& );
	/* ../../public/mathlib/transform.h:80 */
	VectorAligned TransformVectorByInverse(const CTransform* , const VectorAligned& );
	/* ../../public/mathlib/transform.h:81 */
	VectorAligned RotateVectorByInverse(const CTransform* , const VectorAligned& );
	/* ../../public/mathlib/transform.h:83 */
	Vector TransformVector(const CTransform* , const Vector& );
	/* ../../public/mathlib/transform.h:84 */
	Vector RotateVector(const CTransform* , const Vector& );
	/* ../../public/mathlib/transform.h:85 */
	Vector RotateAndScaleVector(const CTransform* , const Vector& );
	/* ../../public/mathlib/transform.h:86 */
	Vector TransformVectorByInverse(const CTransform* , const Vector& );
	/* ../../public/mathlib/transform.h:87 */
	Vector RotateVectorByInverse(const CTransform* , const Vector& );
	/* ../../public/mathlib/transform.h:89 */
	void GetBasisVectorsFLU(const CTransform* , Vector* , Vector* , Vector* );
	/* ../../public/mathlib/transform.h:90 */
	void TransformAABB(const CTransform* , const Vector& , const Vector& , Vector& , Vector& );
	/* ../../public/mathlib/transform.h:91 */
	void TransformAABBByInverse(const CTransform* , const Vector& , const Vector& , Vector& , Vector& );
	/* ../../public/mathlib/transform.h:92 */
	void RotateAABB(const CTransform* , const Vector& , const Vector& , Vector& , Vector& );
	/* ../../public/mathlib/transform.h:93 */
	void RotateAABBByInverse(const CTransform* , const Vector& , const Vector& , Vector& , Vector& );
	/* ../../public/mathlib/transform.h:94 */
	void RotateAndScaleAABB(const CTransform* , const Vector& , const Vector& , Vector& , Vector& );
	/* ../../public/mathlib/transform.h:95 */
	void RotateAndScaleAABBByInverse(const CTransform* , const Vector& , const Vector& , Vector& , Vector& );
	/* ../../public/mathlib/transform.h:96 */
	Vector RotateExtents(const CTransform* , const Vector& );
	/* ../../public/mathlib/transform.h:98 */
	float GetScale(const CTransform* );
	/* ../../public/mathlib/transform.h:99 */
	void SetScale(CTransform* , float);
	/* ../../public/mathlib/transform.h:101 */
	CTransform Inverse(const CTransform* );
	/* ../../public/mathlib/transform.h:105 */
	CTransform InverseTR(const CTransform* );
	/* ../../public/mathlib/transform.h:108 */
	void SetPositionAndScale(CTransform* , const VectorAligned& , float);
	/* ../../public/mathlib/transform.h:109 */
	void SetPosition(CTransform* , const VectorAligned& );
	/* ../../public/mathlib/transform.h:110 */
	void SetPosition(CTransform* , const Vector& );
	/* ../../public/mathlib/transform.h:111 */
	void SetPositionAndScale(CTransform* , const Vector& , float);
	/* ../../public/mathlib/transform.h:112 */
	CTransform& operator=(CTransform* , const CTransformUnaligned& );
	void CTransform(class CTransform *); /* linkage=_ZN10CTransformC4Ev */
	void CTransform(class CTransform *, const class VectorAligned  &, const class QuaternionAligned  &, float); /* linkage=_ZN10CTransformC4ERK13VectorAlignedRK17QuaternionAlignedf */
	void CTransform(class CTransform *, const class Vector  &, const class Quaternion  &, float); /* linkage=_ZN10CTransformC4ERK6VectorRK10Quaternionf */
	void CTransform(class CTransform *, const class Vector  &, const class QAngle  &, float); /* linkage=_ZN10CTransformC4ERK6VectorRK6QAnglef */
	void CTransform(class CTransform *, const class CTransformUnaligned  &); /* linkage=_ZN10CTransformC4ERK19CTransformUnaligned */
	bool IsValid(const class CTransform  *); /* linkage=_ZNK10CTransform7IsValidEv */
	bool operator==(const class CTransform  *, const class CTransform  &); /* linkage=_ZNK10CTransformeqERKS_ */
	bool operator!=(const class CTransform  *, const class CTransform  &); /* linkage=_ZNK10CTransformneERKS_ */
	class CTransform operator*(const class CTransform  *, const class CTransform  &); /* linkage=_ZNK10CTransformmlERKS_ */
	bool IsEqualTo(const class CTransform  *, const class CTransform  &, float); /* linkage=_ZNK10CTransform9IsEqualToERKS_f */
	void InitFromQAngles(class CTransform *, const class QAngle  &, const class Vector  &, float); /* linkage=_ZN10CTransform15InitFromQAnglesERK6QAngleRK6Vectorf */
	/* <25e07c0> ../public/mathlib/transform.h:303 */
	void InitFromMatrix(class CTransform *, const class matrix3x4_t  &); /* linkage=_ZN10CTransform14InitFromMatrixERK11matrix3x4_t */
	void InitFromQuaternion(class CTransform *, const class Quaternion  &, const class Vector  &, float); /* linkage=_ZN10CTransform18InitFromQuaternionERK10QuaternionRK6Vectorf */
	void InitFromRotationAboutAxis(class CTransform *, const class Vector  &, float, const class Vector  &, float); /* linkage=_ZN10CTransform25InitFromRotationAboutAxisERK6VectorfS2_f */
	void InitFLU(class CTransform *, const class Vector  &, const class Vector  &, const class Vector  &, const class Vector  &); /* linkage=_ZN10CTransform7InitFLUERK6VectorS2_S2_S2_ */
	void InitFromForwardVector(class CTransform *, const class Vector  &, const class Vector  &, float); /* linkage=_ZN10CTransform21InitFromForwardVectorERK6VectorS2_f */
	class Quaternion ToQuaternion(const class CTransform  *); /* linkage=_ZNK10CTransform12ToQuaternionEv */
	class QAngle ToQAngle(const class CTransform  *); /* linkage=_ZNK10CTransform8ToQAngleEv */
	class matrix3x4_t ToMatrix(const class CTransform  *); /* linkage=_ZNK10CTransform8ToMatrixEv */
	class CTransform Unscaled(const class CTransform  *); /* linkage=_ZNK10CTransform8UnscaledEv */
	void SetToIdentity(class CTransform *); /* linkage=_ZN10CTransform13SetToIdentityEv */
	void SetOrigin(class CTransform *, const class VectorAligned  &); /* linkage=_ZN10CTransform9SetOriginERK13VectorAligned */
	void SetAngles(class CTransform *, const class QAngle  &); /* linkage=_ZN10CTransform9SetAnglesERK6QAngle */
	void SetOrientation(class CTransform *, const class Quaternion  &); /* linkage=_ZN10CTransform14SetOrientationERK10Quaternion */
	const class VectorAligned  GetOrigin(const class CTransform  *); /* linkage=_ZNK10CTransform9GetOriginEv */
	class VectorAligned GetForward(const class CTransform  *); /* linkage=_ZNK10CTransform10GetForwardEv */
	class VectorAligned GetLeft(const class CTransform  *); /* linkage=_ZNK10CTransform7GetLeftEv */
	class VectorAligned GetUp(const class CTransform  *); /* linkage=_ZNK10CTransform5GetUpEv */
	class VectorAligned TransformVector(const class CTransform  *, const class VectorAligned  &); /* linkage=_ZNK10CTransform15TransformVectorERK13VectorAligned */
	class VectorAligned RotateVector(const class CTransform  *, const class VectorAligned  &); /* linkage=_ZNK10CTransform12RotateVectorERK13VectorAligned */
	class VectorAligned RotateAndScaleVector(const class CTransform  *, const class VectorAligned  &); /* linkage=_ZNK10CTransform20RotateAndScaleVectorERK13VectorAligned */
	class VectorAligned TransformVectorByInverse(const class CTransform  *, const class VectorAligned  &); /* linkage=_ZNK10CTransform24TransformVectorByInverseERK13VectorAligned */
	class VectorAligned RotateVectorByInverse(const class CTransform  *, const class VectorAligned  &); /* linkage=_ZNK10CTransform21RotateVectorByInverseERK13VectorAligned */
	class Vector TransformVector(const class CTransform  *, const class Vector  &); /* linkage=_ZNK10CTransform15TransformVectorERK6Vector */
	class Vector RotateVector(const class CTransform  *, const class Vector  &); /* linkage=_ZNK10CTransform12RotateVectorERK6Vector */
	class Vector RotateAndScaleVector(const class CTransform  *, const class Vector  &); /* linkage=_ZNK10CTransform20RotateAndScaleVectorERK6Vector */
	class Vector TransformVectorByInverse(const class CTransform  *, const class Vector  &); /* linkage=_ZNK10CTransform24TransformVectorByInverseERK6Vector */
	class Vector RotateVectorByInverse(const class CTransform  *, const class Vector  &); /* linkage=_ZNK10CTransform21RotateVectorByInverseERK6Vector */
	void GetBasisVectorsFLU(const class CTransform  *, class Vector *, class Vector *, class Vector *); /* linkage=_ZNK10CTransform18GetBasisVectorsFLUEP6VectorS1_S1_ */
	void TransformAABB(const class CTransform  *, const class Vector  &, const class Vector  &, class Vector &, class Vector &); /* linkage=_ZNK10CTransform13TransformAABBERK6VectorS2_RS0_S3_ */
	void TransformAABBByInverse(const class CTransform  *, const class Vector  &, const class Vector  &, class Vector &, class Vector &); /* linkage=_ZNK10CTransform22TransformAABBByInverseERK6VectorS2_RS0_S3_ */
	void RotateAABB(const class CTransform  *, const class Vector  &, const class Vector  &, class Vector &, class Vector &); /* linkage=_ZNK10CTransform10RotateAABBERK6VectorS2_RS0_S3_ */
	void RotateAABBByInverse(const class CTransform  *, const class Vector  &, const class Vector  &, class Vector &, class Vector &); /* linkage=_ZNK10CTransform19RotateAABBByInverseERK6VectorS2_RS0_S3_ */
	void RotateAndScaleAABB(const class CTransform  *, const class Vector  &, const class Vector  &, class Vector &, class Vector &); /* linkage=_ZNK10CTransform18RotateAndScaleAABBERK6VectorS2_RS0_S3_ */
	void RotateAndScaleAABBByInverse(const class CTransform  *, const class Vector  &, const class Vector  &, class Vector &, class Vector &); /* linkage=_ZNK10CTransform27RotateAndScaleAABBByInverseERK6VectorS2_RS0_S3_ */
	class Vector RotateExtents(const class CTransform  *, const class Vector  &); /* linkage=_ZNK10CTransform13RotateExtentsERK6Vector */
	float GetScale(const class CTransform  *); /* linkage=_ZNK10CTransform8GetScaleEv */
	void SetScale(class CTransform *, float); /* linkage=_ZN10CTransform8SetScaleEf */
	class CTransform Inverse(const class CTransform  *); /* linkage=_ZNK10CTransform7InverseEv */
	class CTransform InverseTR(const class CTransform  *); /* linkage=_ZNK10CTransform9InverseTREv */
	void SetPositionAndScale(class CTransform *, const class VectorAligned  &, float); /* linkage=_ZN10CTransform19SetPositionAndScaleERK13VectorAlignedf */
	void SetPosition(class CTransform *, const class VectorAligned  &); /* linkage=_ZN10CTransform11SetPositionERK13VectorAligned */
	void SetPosition(class CTransform *, const class Vector  &); /* linkage=_ZN10CTransform11SetPositionERK6Vector */
	void SetPositionAndScale(class CTransform *, const class Vector  &, float); /* linkage=_ZN10CTransform19SetPositionAndScaleERK6Vectorf */
	class CTransform & operator=(class CTransform *, const class CTransformUnaligned  &); /* linkage=_ZN10CTransformaSERK19CTransformUnaligned */
	class CTransform & operator=(class CTransform *, const class CTransform  &); /* linkage=_ZN10CTransformaSERKS_ */
	class CTransform & operator=(class CTransform *, class CTransform &); /* linkage=_ZN10CTransformaSEOS_ */
} __attribute__((__aligned__(16)));

// <0634FFFC> ../public/mathlib/transform.h:31
void CTransform::CTransform()
{
} /* size: 0 */

// <0634FFE3> ../public/mathlib/transform.h:31
inline void CTransform::CTransform()
{
} /* size: 0 */

// <05A58FFC> ../public/mathlib/transform.h:33
void CTransform::CTransform(const Vector& v, const Quaternion& q, float flScale)
{
} /* size: 0 */

// <05A58FC3> ../public/mathlib/transform.h:33
inline void CTransform::CTransform(const Vector& v, const Quaternion& q, float flScale)
{
} /* size: 0 */

// <05A58F9D> ../public/mathlib/transform.h:34
void CTransform::CTransform(const Vector& v, const QAngle& a, float flScale)
{
} /* size: 0 */

// <05A58F64> ../public/mathlib/transform.h:34
inline void CTransform::CTransform(const Vector& v, const QAngle& a, float flScale)
{
} /* size: 0 */

// <04AE467B> ../public/mathlib/transform.h:42
inline void CTransform::IsValid()
{
} /* size: 0 */

// <05419D77> ../public/mathlib/transform.h:68
inline void CTransform::SetOrigin(const VectorAligned& vPos)
{
} /* size: 0 */

// <05B4B64F> ../public/mathlib/transform.h:71
inline void CTransform::GetOrigin()
{
} /* size: 0 */

// <05A58F27> ../public/mathlib/transform.h:84
inline void CTransform::RotateVector(const Vector& v0)
{
} /* size: 0 */

// <01B53F0A> ../public/mathlib/transform.h:86
inline void CTransform::TransformVectorByInverse(const Vector& v0)
{
} /* size: 0 */

// <00DE4239> ../public/mathlib/transform.h:87
inline void CTransform::RotateVectorByInverse(const Vector& v0)
{
} /* size: 0 */

// <0634FFCA> ../public/mathlib/transform.h:98
inline void CTransform::GetScale()
{
} /* size: 0 */

// <0559FA84> ../public/mathlib/transform.h:99
inline void CTransform::SetScale(float flScale)
{
} /* size: 0 */

// <022E04DC> ../public/mathlib/transform.h:105
inline void CTransform::InverseTR()
{
} /* size: 0 */

// <0559FA54> ../public/mathlib/transform.h:108
inline void CTransform::SetPositionAndScale(const VectorAligned& v0, float flScale)
{
} /* size: 0 */

// <05B4B612> ../public/mathlib/transform.h:109
inline void CTransform::SetPosition(const VectorAligned& v0)
{
} /* size: 0 */

// <01B53EB4> ../public/mathlib/transform.h:110
inline void CTransform::SetPosition(const Vector& v0)
{
} /* size: 0 */

// <0634FF9A> ../public/mathlib/transform.h:111
inline void CTransform::SetPositionAndScale(const Vector& v0, float flScale)
{
} /* size: 0 */

// <04AB9AF8> ../public/mathlib/transform.h:122
inline void CTransformUnaligned::operator=(CTransformUnaligned &)
{
} /* size: 0 */

// <00032E1E> ../public/mathlib/transform.h:122
// member functions: 21
// member variables: 3
// class size: 40
class CTransformUnaligned {
	/* ../public/mathlib/transform.h:125 */
	void CTransformUnaligned(CTransformUnaligned* );
	/* ../public/mathlib/transform.h:126 */
	void CTransformUnaligned(CTransformUnaligned* , const Vector& , const Quaternion& , float);
	/* ../public/mathlib/transform.h:127 */
	void CTransformUnaligned(CTransformUnaligned* , const CTransform& );
	Vector m_vPosition; /* 0 12 */
	Vector m_Scale; /* 12 12 */
	Quaternion m_orientation; /* 24 16 */
	/* ../public/mathlib/transform.h:134 */
	float UniformScale(const CTransformUnaligned* );
	/* ../public/mathlib/transform.h:139 */
	bool IsValid(const CTransformUnaligned* );
	/* ../public/mathlib/transform.h:144 */
	bool IsUniformScale(const CTransformUnaligned* );
	/* ../public/mathlib/transform.h:149 */
	CTransform AsTransform(const CTransformUnaligned* );
	/* ../public/mathlib/transform.h:154 */
	matrix3x4_t ToMatrix(const CTransformUnaligned* );
	/* ../public/mathlib/transform.h:156 */
	void InitFromMatrix(CTransformUnaligned* , const matrix3x4_t& );
	/* ../public/mathlib/transform.h:159 */
	CTransformUnaligned& operator=(CTransformUnaligned* , const CTransform& );
	void CTransformUnaligned(class CTransformUnaligned *); /* linkage=_ZN19CTransformUnalignedC4Ev */
	void CTransformUnaligned(class CTransformUnaligned *, const class Vector  &, const class Quaternion  &, float); /* linkage=_ZN19CTransformUnalignedC4ERK6VectorRK10Quaternionf */
	void CTransformUnaligned(class CTransformUnaligned *, const class CTransform  &); /* linkage=_ZN19CTransformUnalignedC4ERK10CTransform */
	float UniformScale(const class CTransformUnaligned  *); /* linkage=_ZNK19CTransformUnaligned12UniformScaleEv */
	bool IsValid(const class CTransformUnaligned  *); /* linkage=_ZNK19CTransformUnaligned7IsValidEv */
	bool IsUniformScale(const class CTransformUnaligned  *); /* linkage=_ZNK19CTransformUnaligned14IsUniformScaleEv */
	class CTransform AsTransform(const class CTransformUnaligned  *); /* linkage=_ZNK19CTransformUnaligned11AsTransformEv */
	class matrix3x4_t ToMatrix(const class CTransformUnaligned  *); /* linkage=_ZNK19CTransformUnaligned8ToMatrixEv */
	void InitFromMatrix(class CTransformUnaligned *, const class matrix3x4_t  &); /* linkage=_ZN19CTransformUnaligned14InitFromMatrixERK11matrix3x4_t */
	class CTransformUnaligned & operator=(class CTransformUnaligned *, const class CTransform  &); /* linkage=_ZN19CTransformUnalignedaSERK10CTransform */
	class CTransformUnaligned & operator=(class CTransformUnaligned *, class CTransformUnaligned &); /* linkage=_ZN19CTransformUnalignedaSEOS_ */
};

// <049B90B2> ../public/mathlib/transform.h:122
// member functions: 22
// member variables: 3
// class size: 40
class CTransformUnaligned {
	/* ../public/mathlib/transform.h:125 */
	void CTransformUnaligned(CTransformUnaligned* );
	/* ../public/mathlib/transform.h:126 */
	void CTransformUnaligned(CTransformUnaligned* , const Vector& , const Quaternion& , float);
	/* ../public/mathlib/transform.h:127 */
	void CTransformUnaligned(CTransformUnaligned* , const CTransform& );
	Vector m_vPosition; /* 0 12 */
	Vector m_Scale; /* 12 12 */
	Quaternion m_orientation; /* 24 16 */
	/* ../public/mathlib/transform.h:134 */
	float UniformScale(const CTransformUnaligned* );
	/* ../public/mathlib/transform.h:139 */
	bool IsValid(const CTransformUnaligned* );
	/* ../public/mathlib/transform.h:144 */
	bool IsUniformScale(const CTransformUnaligned* );
	/* ../public/mathlib/transform.h:149 */
	CTransform AsTransform(const CTransformUnaligned* );
	/* ../public/mathlib/transform.h:154 */
	matrix3x4_t ToMatrix(const CTransformUnaligned* );
	/* ../public/mathlib/transform.h:156 */
	void InitFromMatrix(CTransformUnaligned* , const matrix3x4_t& );
	/* ../public/mathlib/transform.h:159 */
	CTransformUnaligned& operator=(CTransformUnaligned* , const CTransform& );
	CTransformUnaligned& operator=(CTransformUnaligned* , CTransformUnaligned& );
	void CTransformUnaligned(class CTransformUnaligned *); /* linkage=_ZN19CTransformUnalignedC4Ev */
	void CTransformUnaligned(class CTransformUnaligned *, const class Vector  &, const class Quaternion  &, float); /* linkage=_ZN19CTransformUnalignedC4ERK6VectorRK10Quaternionf */
	void CTransformUnaligned(class CTransformUnaligned *, const class CTransform  &); /* linkage=_ZN19CTransformUnalignedC4ERK10CTransform */
	float UniformScale(const class CTransformUnaligned  *); /* linkage=_ZNK19CTransformUnaligned12UniformScaleEv */
	bool IsValid(const class CTransformUnaligned  *); /* linkage=_ZNK19CTransformUnaligned7IsValidEv */
	bool IsUniformScale(const class CTransformUnaligned  *); /* linkage=_ZNK19CTransformUnaligned14IsUniformScaleEv */
	class CTransform AsTransform(const class CTransformUnaligned  *); /* linkage=_ZNK19CTransformUnaligned11AsTransformEv */
	class matrix3x4_t ToMatrix(const class CTransformUnaligned  *); /* linkage=_ZNK19CTransformUnaligned8ToMatrixEv */
	void InitFromMatrix(class CTransformUnaligned *, const class matrix3x4_t  &); /* linkage=_ZN19CTransformUnaligned14InitFromMatrixERK11matrix3x4_t */
	class CTransformUnaligned & operator=(class CTransformUnaligned *, const class CTransform  &); /* linkage=_ZN19CTransformUnalignedaSERK10CTransform */
	class CTransformUnaligned & operator=(class CTransformUnaligned *, class CTransformUnaligned &); /* linkage=_ZN19CTransformUnalignedaSEOS_ */
};

// <05868B0E> ../../public/mathlib/transform.h:122
// member functions: 21
// member variables: 3
// class size: 40
class CTransformUnaligned {
	/* ../../public/mathlib/transform.h:125 */
	void CTransformUnaligned(CTransformUnaligned* );
	/* ../../public/mathlib/transform.h:126 */
	void CTransformUnaligned(CTransformUnaligned* , const Vector& , const Quaternion& , float);
	/* ../../public/mathlib/transform.h:127 */
	void CTransformUnaligned(CTransformUnaligned* , const CTransform& );
	Vector m_vPosition; /* 0 12 */
	Vector m_Scale; /* 12 12 */
	Quaternion m_orientation; /* 24 16 */
	/* ../../public/mathlib/transform.h:134 */
	float UniformScale(const CTransformUnaligned* );
	/* ../../public/mathlib/transform.h:139 */
	bool IsValid(const CTransformUnaligned* );
	/* ../../public/mathlib/transform.h:144 */
	bool IsUniformScale(const CTransformUnaligned* );
	/* ../../public/mathlib/transform.h:149 */
	CTransform AsTransform(const CTransformUnaligned* );
	/* ../../public/mathlib/transform.h:154 */
	matrix3x4_t ToMatrix(const CTransformUnaligned* );
	/* ../../public/mathlib/transform.h:156 */
	void InitFromMatrix(CTransformUnaligned* , const matrix3x4_t& );
	/* ../../public/mathlib/transform.h:159 */
	CTransformUnaligned& operator=(CTransformUnaligned* , const CTransform& );
	void CTransformUnaligned(class CTransformUnaligned *); /* linkage=_ZN19CTransformUnalignedC4Ev */
	void CTransformUnaligned(class CTransformUnaligned *, const class Vector  &, const class Quaternion  &, float); /* linkage=_ZN19CTransformUnalignedC4ERK6VectorRK10Quaternionf */
	void CTransformUnaligned(class CTransformUnaligned *, const class CTransform  &); /* linkage=_ZN19CTransformUnalignedC4ERK10CTransform */
	float UniformScale(const class CTransformUnaligned  *); /* linkage=_ZNK19CTransformUnaligned12UniformScaleEv */
	bool IsValid(const class CTransformUnaligned  *); /* linkage=_ZNK19CTransformUnaligned7IsValidEv */
	bool IsUniformScale(const class CTransformUnaligned  *); /* linkage=_ZNK19CTransformUnaligned14IsUniformScaleEv */
	class CTransform AsTransform(const class CTransformUnaligned  *); /* linkage=_ZNK19CTransformUnaligned11AsTransformEv */
	class matrix3x4_t ToMatrix(const class CTransformUnaligned  *); /* linkage=_ZNK19CTransformUnaligned8ToMatrixEv */
	void InitFromMatrix(class CTransformUnaligned *, const class matrix3x4_t  &); /* linkage=_ZN19CTransformUnaligned14InitFromMatrixERK11matrix3x4_t */
	class CTransformUnaligned & operator=(class CTransformUnaligned *, const class CTransform  &); /* linkage=_ZN19CTransformUnalignedaSERK10CTransform */
	class CTransformUnaligned & operator=(class CTransformUnaligned *, class CTransformUnaligned &); /* linkage=_ZN19CTransformUnalignedaSEOS_ */
};

// <0634FF83> ../public/mathlib/transform.h:125
void CTransformUnaligned::CTransformUnaligned()
{
} /* size: 0 */

// <0634FF6A> ../public/mathlib/transform.h:125
inline void CTransformUnaligned::CTransformUnaligned()
{
} /* size: 0 */

// <04AE459E> ../public/mathlib/transform.h:126
void CTransformUnaligned::CTransformUnaligned(const Vector& v, const Quaternion& q, float flScale)
{
} /* size: 0 */

// <04AE4565> ../public/mathlib/transform.h:126
inline void CTransformUnaligned::CTransformUnaligned(const Vector& v, const Quaternion& q, float flScale)
{
} /* size: 0 */

// <05B4B5F6> ../public/mathlib/transform.h:127
void CTransformUnaligned::CTransformUnaligned(const CTransform& transform)
{
} /* size: 0 */

// <05B4B5D1> ../public/mathlib/transform.h:127
inline void CTransformUnaligned::CTransformUnaligned(const CTransform& transform)
{
} /* size: 0 */

// <01875D2A> ../public/mathlib/transform.h:134
inline void CTransformUnaligned::UniformScale()
{
} /* size: 0 */

// <00BB117C> ../public/mathlib/transform.h:139
inline void CTransformUnaligned::IsValid()
{
} /* size: 0 */

// <01875D11> ../public/mathlib/transform.h:149
inline void CTransformUnaligned::AsTransform()
{
} /* size: 0 */

// <0634FF44> ../public/mathlib/transform.h:166
inline void CTransformUnaligned::operator=(const CTransform& i)
{
} /* size: 0 */

// <05A58EA7> ../public/mathlib/transform.h:184
inline fltx4 LerpFl4(const fltx4& percent, const fltx4& a, const fltx4& b)
{
} /* size: 0 */

// <05A58E66> ../public/mathlib/transform.h:189
// variable: 1
inline CTransform Slerp(const CTransform& p, const CTransform& q, float t)
{
	CTransform newXform; // 191
} /* size: 0, variables: 1 */

// <00088669> ../public/mathlib/transform.h:200
CTransform TransformSlerp(const CTransform &, const CTransform &, float)
{
} /* size: 0 */

// <0499817F> ../public/mathlib/transform.h:201
CTransform TransformLerp(const CTransform &, const CTransform &, float)
{
} /* size: 0 */

// <00A1A004> ../public/mathlib/transform.h:234
inline const matrix3x4_t  TransformMatrix(const CTransform& in)
{
} /* size: 0 */

// <01954A67> ../public/mathlib/transform.h:246
// variable: 1
inline void CTransformUnaligned::ToMatrix()
{
	matrix3x4_t out; // 248
} /* size: 0, variables: 1 */

// <00088535> ../public/mathlib/transform.h:254
CTransform ConcatTransforms(fltx4, fltx4, fltx4, fltx4)
{
} /* size: 0 */

// <053E8147> ../public/mathlib/transform.h:290
bool TransformsAreEqual(const CTransform &, const CTransform &, float, float)
{
} /* size: 0 */

// <0634FEF4> ../public/mathlib/transform.h:303
// variables: 3
inline void CTransform::InitFromMatrix(const matrix3x4_t& xform)
{
	Quaternion orientation; // 305
	Vector vPos; // 306
	float flScale; // 307
} /* size: 0, variables: 3 */

// <025E07C0> ../public/mathlib/transform.h:303
// variables: 4
// function calls: 12
void CTransform::InitFromMatrix(const matrix3x4_t& xform)
{
	Quaternion orientation; // 305
	Vector vPos; // 306
	float flScale; // 307
	Quaternion::Quaternion(); // 305
	Vector::Vector(); // 306
	matrix3x4_t::matrix3x4_t(); // 753
	Vector::LargestComponentValue(); // 755
	MatrixPosition(const matrix3x4_t& matrix,
			Vector& position);  // 757
	MatrixQuaternion(const matrix3x4_t& mat,
			Quaternion& q,
			Vector& o,
			float& flScale);  // 308
	QuaternionAligned::Init(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 217
	QuaternionAligned::operator=(
			const Quaternion& vOther);  // 309
	{
		fltx4 retVal; // 186
		_mm_set_ps(const float  __Z,
				const float  __Y,
				const float  __X,
				const float  __W);  // 187
	}
	Set4Floats<>(float p0,
			float p1,
			float p2,
			float p3);  // 111
	VectorAligned::operator=(
			fltx4 src);  // 111
	CTransform::SetPositionAndScale(
				const Vector& v0,
				float flScale);  // 310
} /* size: 177, variables: 3, inline expansions: 11 (204 bytes) */

// <02C46E16> ../public/mathlib/transform.h:313
// variables: 5
inline void CTransformUnaligned::InitFromMatrix(const matrix3x4_t& xform)
{
	Quaternion orientation; // 315
	Vector vPos; // 316
	matrix3x4_t norm; // 317
	Vector vScale; // 318
	float flScale; // 319
} /* size: 0, variables: 5 */

// <05419C50> ../public/mathlib/transform.h:326
inline void CTransform::InitFromQuaternion(const Quaternion& orientation, const Vector& vPosition, float flScale)
{
} /* size: 0 */

// <05419C27> ../public/mathlib/transform.h:343
inline void CTransform::SetOrientation(const Quaternion& qOrientation)
{
} /* size: 0 */

// <0547ECAB> ../public/mathlib/transform.h:348
inline void CTransform::ToQuaternion()
{
} /* size: 0 */

// <05A58DBB> ../public/mathlib/transform.h:353
// variable: 1
inline void CTransform::ToQAngle()
{
	QAngle angles; // 355
} /* size: 0, variables: 1 */

// <05B4B575> ../public/mathlib/transform.h:360
// variables: 2
inline void CTransform::ToMatrix()
{
	matrix3x4_t out; // 361
	float flScale; // 362
} /* size: 0, variables: 2 */

// <0178F6CD> ../public/mathlib/transform.h:371
inline void CTransform::Unscaled()
{
} /* size: 0 */

// <05419BB9> ../public/mathlib/transform.h:376
inline void CTransform::SetToIdentity()
{
} /* size: 0 */

// <04AA30EE> ../public/mathlib/transform.h:382
void SetIdentityTransform(CTransform &)
{
} /* size: 0 */

// <03324DFB> ../public/mathlib/transform.h:389
inline void CTransform::GetForward()
{
} /* size: 0 */

// <01BB27A9> ../public/mathlib/transform.h:394
inline void CTransform::GetLeft()
{
} /* size: 0 */

// <01BB278D> ../public/mathlib/transform.h:399
inline void CTransform::GetUp()
{
} /* size: 0 */

// <02865ADD> ../public/mathlib/transform.h:404
// variables: 3
inline void CTransform::TransformVector(const VectorAligned& v0)
{
	fltx4 fl4Scale; // 406
	fltx4 fl4Rotated; // 408
	fltx4 fl4Out; // 409
} /* size: 0, variables: 3 */

// <05B4B519> ../public/mathlib/transform.h:415
// variables: 4
inline void CTransform::TransformVector(const Vector& v0)
{
	fltx4 fl4Scale; // 417
	fltx4 fl4Rotated; // 419
	fltx4 fl4Out; // 420
	Vector vOut; // 422
} /* size: 0, variables: 4 */

// <05A58D93> ../public/mathlib/transform.h:428
inline void CTransform::RotateVector(const VectorAligned& v0)
{
} /* size: 0 */

// <01B53CF4> ../public/mathlib/transform.h:439
// variable: 1
inline void CTransform::TransformVectorByInverse(const VectorAligned& v0)
{
	CTransform invTransform; // 441
} /* size: 0, variables: 1 */

// <00DE41B5> ../public/mathlib/transform.h:446
inline void CTransform::RotateVectorByInverse(const VectorAligned& v0)
{
} /* size: 0 */

// <0178F562> ../public/mathlib/transform.h:453
// variable: 1
inline bool IsEqualSIMD(fltx4 a, fltx4 b)
{
	const uint32  uComponentMask; // 455
} /* size: 0, variables: 1 */

// <00D24360> ../public/mathlib/transform.h:469
inline void CTransform::operator*(const CTransform& rhs)
{
} /* size: 0 */

// <0634FECA> ../public/mathlib/transform.h:527
// variable: 1
inline void matrix3x4_t::ToCTransform()
{
	CTransform out; // 529
} /* size: 0, variables: 1 */

// <01351FC5> ../public/mathlib/transform.h:534
void CTransform::CTransform(const CTransformUnaligned& tx)
{
} /* size: 0 */

// <01351F9D> ../public/mathlib/transform.h:534
inline void CTransform::CTransform(const CTransformUnaligned& tx)
{
} /* size: 0 */

