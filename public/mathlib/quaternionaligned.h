
//
// public/mathlib/quaternionaligned.h
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
//	functions: 46
//	classes: 2
//

// <0002850C> ../public/mathlib/quaternionaligned.h:18
// member functions: 122
// member variable: 1
// static member variable: 1
// class size: 16
class QuaternionAligned {
	static const class QuaternionAligned qIdentity; /* 0 0 */
	/* ../public/mathlib/quaternionaligned.h:23 */
	void QuaternionAligned(QuaternionAligned* );
	/* ../public/mathlib/quaternionaligned.h:29 */
	void QuaternionAligned(QuaternionAligned* , vec_t, vec_t, vec_t, vec_t);
	/* ../public/mathlib/quaternionaligned.h:30 */
	void QuaternionAligned(QuaternionAligned* , const Quaternion& );
	/* ../public/mathlib/quaternionaligned.h:31 */
	void QuaternionAligned(QuaternionAligned* , const VectorAligned& , vec_t);
	/* ../public/mathlib/quaternionaligned.h:32 */
	void QuaternionAligned(QuaternionAligned* , fltx4);
	/* ../public/mathlib/quaternionaligned.h:34 */
	void Init(QuaternionAligned* , vec_t, vec_t, vec_t, vec_t);
	/* ../public/mathlib/quaternionaligned.h:35 */
	void Init(QuaternionAligned* , const VectorAligned& , float);
	/* ../public/mathlib/quaternionaligned.h:37 */
	bool IsValid(const QuaternionAligned* );
	/* ../public/mathlib/quaternionaligned.h:38 */
	void Invalidate(QuaternionAligned* );
	/* ../public/mathlib/quaternionaligned.h:41 */
	Quaternion operator Quaternion(const QuaternionAligned* );
	/* ../public/mathlib/quaternionaligned.h:42 */
	fltx4 operator fltx4(const QuaternionAligned* );
	/* ../public/mathlib/quaternionaligned.h:45 */
	QuaternionAligned& operator=(QuaternionAligned* , const QuaternionAligned& );
	/* ../public/mathlib/quaternionaligned.h:46 */
	QuaternionAligned& operator=(QuaternionAligned* , const Quaternion& );
	/* ../public/mathlib/quaternionaligned.h:47 */
	QuaternionAligned& operator=(QuaternionAligned* , fltx4);
	/* ../public/mathlib/quaternionaligned.h:50 */
	bool operator==(const QuaternionAligned* , const QuaternionAligned& );
	/* ../public/mathlib/quaternionaligned.h:51 */
	bool operator!=(const QuaternionAligned* , const QuaternionAligned& );
	/* ../public/mathlib/quaternionaligned.h:54 */
	QuaternionAligned operator-(const QuaternionAligned* );
	/* ../public/mathlib/quaternionaligned.h:57 */
	QuaternionAligned& operator+=(QuaternionAligned* , const QuaternionAligned& );
	/* ../public/mathlib/quaternionaligned.h:58 */
	QuaternionAligned& operator-=(QuaternionAligned* , const QuaternionAligned& );
	/* ../public/mathlib/quaternionaligned.h:59 */
	QuaternionAligned& operator*=(QuaternionAligned* , const QuaternionAligned& );
	/* ../public/mathlib/quaternionaligned.h:60 */
	QuaternionAligned& operator*=(QuaternionAligned* , vec_t);
	/* ../public/mathlib/quaternionaligned.h:61 */
	QuaternionAligned& operator/=(QuaternionAligned* , vec_t);
	/* ../public/mathlib/quaternionaligned.h:63 */
	QuaternionAligned operator+(const QuaternionAligned* , const QuaternionAligned& );
	/* ../public/mathlib/quaternionaligned.h:64 */
	QuaternionAligned operator-(const QuaternionAligned* , const QuaternionAligned& );
	/* ../public/mathlib/quaternionaligned.h:65 */
	QuaternionAligned operator*(const QuaternionAligned* , vec_t);
	/* ../public/mathlib/quaternionaligned.h:66 */
	QuaternionAligned operator*(const QuaternionAligned* , const QuaternionAligned& );
	/* ../public/mathlib/quaternionaligned.h:67 */
	VectorAligned operator*(const QuaternionAligned* , const VectorAligned& );
	/* ../public/mathlib/quaternionaligned.h:68 */
	QuaternionAligned operator/(const QuaternionAligned* , vec_t);
	/* ../public/mathlib/quaternionaligned.h:71 */
	vec_t& operator[](QuaternionAligned* , int);
	/* ../public/mathlib/quaternionaligned.h:72 */
	vec_t operator[](const QuaternionAligned* , int);
	/* ../public/mathlib/quaternionaligned.h:74 */
	vec_t x(const QuaternionAligned* );
	/* ../public/mathlib/quaternionaligned.h:75 */
	vec_t y(const QuaternionAligned* );
	/* ../public/mathlib/quaternionaligned.h:76 */
	vec_t z(const QuaternionAligned* );
	/* ../public/mathlib/quaternionaligned.h:77 */
	vec_t w(const QuaternionAligned* );
	/* ../public/mathlib/quaternionaligned.h:79 */
	void SetX(QuaternionAligned* , vec_t);
	/* ../public/mathlib/quaternionaligned.h:80 */
	void SetY(QuaternionAligned* , vec_t);
	/* ../public/mathlib/quaternionaligned.h:81 */
	void SetZ(QuaternionAligned* , vec_t);
	/* ../public/mathlib/quaternionaligned.h:82 */
	void SetW(QuaternionAligned* , vec_t);
	/* ../public/mathlib/quaternionaligned.h:85 */
	void GetAxisAngle(const QuaternionAligned* , VectorAligned& , vec_t& );
	/* ../public/mathlib/quaternionaligned.h:88 */
	void SetAxisAngle(QuaternionAligned* , const VectorAligned& , vec_t);
	/* ../public/mathlib/quaternionaligned.h:91 */
	vec_t Length(const QuaternionAligned* );
	/* ../public/mathlib/quaternionaligned.h:94 */
	vec_t LengthSqr(const QuaternionAligned* );
	/* ../public/mathlib/quaternionaligned.h:97 */
	vec_t Normalize(QuaternionAligned* );
	/* ../public/mathlib/quaternionaligned.h:100 */
	QuaternionAligned Normalized(const QuaternionAligned* );
	/* ../public/mathlib/quaternionaligned.h:102 */
	bool IsNormalized(const QuaternionAligned* , float);
	/* ../public/mathlib/quaternionaligned.h:105 */
	QuaternionAligned Conjugate(const QuaternionAligned* );
	/* ../public/mathlib/quaternionaligned.h:108 */
	float Dot(const QuaternionAligned* , const QuaternionAligned& );
	/* ../public/mathlib/quaternionaligned.h:111 */
	matrix3x4a_t ToMatrix(const QuaternionAligned* , const VectorAligned& );
	/* ../public/mathlib/quaternionaligned.h:114 */
	QAngle ToQAngle(const QuaternionAligned* );
	/* ../public/mathlib/quaternionaligned.h:117 */
	VectorAligned GetForward(const QuaternionAligned* );
	/* ../public/mathlib/quaternionaligned.h:118 */
	VectorAligned GetLeft(const QuaternionAligned* );
	/* ../public/mathlib/quaternionaligned.h:119 */
	VectorAligned GetUp(const QuaternionAligned* );
	/* ../public/mathlib/quaternionaligned.h:121 */
	void RotateAABB(const QuaternionAligned* , const Vector& , const Vector& , Vector& , Vector& );
	/* ../public/mathlib/quaternionaligned.h:122 */
	void RotateAABBByInverse(const QuaternionAligned* , const Vector& , const Vector& , Vector& , Vector& );
	/* ../public/mathlib/quaternionaligned.h:123 */
	Vector RotateExtents(const QuaternionAligned* , const Vector& );
	/* ../public/mathlib/quaternionaligned.h:124 */
	Vector RotateVector(const QuaternionAligned* , const Vector& );
	/* ../public/mathlib/quaternionaligned.h:125 */
	VectorAligned RotateVector(const QuaternionAligned* , const VectorAligned& );
	/* ../public/mathlib/quaternionaligned.h:127 */
	VectorAligned ImaginaryPart(const QuaternionAligned* );
	/* ../public/mathlib/quaternionaligned.h:128 */
	float RealPart(const QuaternionAligned* );
	fltx4 m_vec; /* 0 16 */
	void QuaternionAligned(class QuaternionAligned *); /* linkage=_ZN17QuaternionAlignedC4Ev */
	void QuaternionAligned(class QuaternionAligned *, vec_t, vec_t, vec_t, vec_t); /* linkage=_ZN17QuaternionAlignedC4Effff */
	void QuaternionAligned(class QuaternionAligned *, const class Quaternion  &); /* linkage=_ZN17QuaternionAlignedC4ERK10Quaternion */
	void QuaternionAligned(class QuaternionAligned *, const class VectorAligned  &, vec_t); /* linkage=_ZN17QuaternionAlignedC4ERK13VectorAlignedf */
	void QuaternionAligned(class QuaternionAligned *, fltx4); /* linkage=_ZN17QuaternionAlignedC4EDv4_f */
	void Init(class QuaternionAligned *, vec_t, vec_t, vec_t, vec_t); /* linkage=_ZN17QuaternionAligned4InitEffff */
	void Init(class QuaternionAligned *, const class VectorAligned  &, float); /* linkage=_ZN17QuaternionAligned4InitERK13VectorAlignedf */
	bool IsValid(const class QuaternionAligned  *); /* linkage=_ZNK17QuaternionAligned7IsValidEv */
	void Invalidate(class QuaternionAligned *); /* linkage=_ZN17QuaternionAligned10InvalidateEv */
	class Quaternion operator Quaternion(const class QuaternionAligned  *); /* linkage=_ZNK17QuaternionAlignedcv10QuaternionEv */
	fltx4 operator fltx4(const class QuaternionAligned  *); /* linkage=_ZNK17QuaternionAlignedcvDv4_fEv */
	class QuaternionAligned & operator=(class QuaternionAligned *, const class QuaternionAligned  &); /* linkage=_ZN17QuaternionAlignedaSERKS_ */
	class QuaternionAligned & operator=(class QuaternionAligned *, const class Quaternion  &); /* linkage=_ZN17QuaternionAlignedaSERK10Quaternion */
	class QuaternionAligned & operator=(class QuaternionAligned *, fltx4); /* linkage=_ZN17QuaternionAlignedaSEDv4_f */
	bool operator==(const class QuaternionAligned  *, const class QuaternionAligned  &); /* linkage=_ZNK17QuaternionAlignedeqERKS_ */
	bool operator!=(const class QuaternionAligned  *, const class QuaternionAligned  &); /* linkage=_ZNK17QuaternionAlignedneERKS_ */
	class QuaternionAligned operator-(const class QuaternionAligned  *); /* linkage=_ZNK17QuaternionAlignedngEv */
	class QuaternionAligned & operator+=(class QuaternionAligned *, const class QuaternionAligned  &); /* linkage=_ZN17QuaternionAlignedpLERKS_ */
	class QuaternionAligned & operator-=(class QuaternionAligned *, const class QuaternionAligned  &); /* linkage=_ZN17QuaternionAlignedmIERKS_ */
	class QuaternionAligned & operator*=(class QuaternionAligned *, const class QuaternionAligned  &); /* linkage=_ZN17QuaternionAlignedmLERKS_ */
	class QuaternionAligned & operator*=(class QuaternionAligned *, vec_t); /* linkage=_ZN17QuaternionAlignedmLEf */
	class QuaternionAligned & operator/=(class QuaternionAligned *, vec_t); /* linkage=_ZN17QuaternionAligneddVEf */
	class QuaternionAligned operator+(const class QuaternionAligned  *, const class QuaternionAligned  &); /* linkage=_ZNK17QuaternionAlignedplERKS_ */
	class QuaternionAligned operator-(const class QuaternionAligned  *, const class QuaternionAligned  &); /* linkage=_ZNK17QuaternionAlignedmiERKS_ */
	class QuaternionAligned operator*(const class QuaternionAligned  *, vec_t); /* linkage=_ZNK17QuaternionAlignedmlEf */
	class QuaternionAligned operator*(const class QuaternionAligned  *, const class QuaternionAligned  &); /* linkage=_ZNK17QuaternionAlignedmlERKS_ */
	class VectorAligned operator*(const class QuaternionAligned  *, const class VectorAligned  &); /* linkage=_ZNK17QuaternionAlignedmlERK13VectorAligned */
	class QuaternionAligned operator/(const class QuaternionAligned  *, vec_t); /* linkage=_ZNK17QuaternionAligneddvEf */
	vec_t & operator[](class QuaternionAligned *, int); /* linkage=_ZN17QuaternionAlignedixEi */
	vec_t operator[](const class QuaternionAligned  *, int); /* linkage=_ZNK17QuaternionAlignedixEi */
	vec_t x(const class QuaternionAligned  *); /* linkage=_ZNK17QuaternionAligned1xEv */
	vec_t y(const class QuaternionAligned  *); /* linkage=_ZNK17QuaternionAligned1yEv */
	vec_t z(const class QuaternionAligned  *); /* linkage=_ZNK17QuaternionAligned1zEv */
	vec_t w(const class QuaternionAligned  *); /* linkage=_ZNK17QuaternionAligned1wEv */
	void SetX(class QuaternionAligned *, vec_t); /* linkage=_ZN17QuaternionAligned4SetXEf */
	void SetY(class QuaternionAligned *, vec_t); /* linkage=_ZN17QuaternionAligned4SetYEf */
	void SetZ(class QuaternionAligned *, vec_t); /* linkage=_ZN17QuaternionAligned4SetZEf */
	void SetW(class QuaternionAligned *, vec_t); /* linkage=_ZN17QuaternionAligned4SetWEf */
	void GetAxisAngle(const class QuaternionAligned  *, class VectorAligned &, vec_t &); /* linkage=_ZNK17QuaternionAligned12GetAxisAngleER13VectorAlignedRf */
	void SetAxisAngle(class QuaternionAligned *, const class VectorAligned  &, vec_t); /* linkage=_ZN17QuaternionAligned12SetAxisAngleERK13VectorAlignedf */
	vec_t Length(const class QuaternionAligned  *); /* linkage=_ZNK17QuaternionAligned6LengthEv */
	vec_t LengthSqr(const class QuaternionAligned  *); /* linkage=_ZNK17QuaternionAligned9LengthSqrEv */
	vec_t Normalize(class QuaternionAligned *); /* linkage=_ZN17QuaternionAligned9NormalizeEv */
	class QuaternionAligned Normalized(const class QuaternionAligned  *); /* linkage=_ZNK17QuaternionAligned10NormalizedEv */
	bool IsNormalized(const class QuaternionAligned  *, float); /* linkage=_ZNK17QuaternionAligned12IsNormalizedEf */
	class QuaternionAligned Conjugate(const class QuaternionAligned  *); /* linkage=_ZNK17QuaternionAligned9ConjugateEv */
	float Dot(const class QuaternionAligned  *, const class QuaternionAligned  &); /* linkage=_ZNK17QuaternionAligned3DotERKS_ */
	class matrix3x4a_t ToMatrix(const class QuaternionAligned  *, const class VectorAligned  &); /* linkage=_ZNK17QuaternionAligned8ToMatrixERK13VectorAligned */
	class QAngle ToQAngle(const class QuaternionAligned  *); /* linkage=_ZNK17QuaternionAligned8ToQAngleEv */
	class VectorAligned GetForward(const class QuaternionAligned  *); /* linkage=_ZNK17QuaternionAligned10GetForwardEv */
	class VectorAligned GetLeft(const class QuaternionAligned  *); /* linkage=_ZNK17QuaternionAligned7GetLeftEv */
	class VectorAligned GetUp(const class QuaternionAligned  *); /* linkage=_ZNK17QuaternionAligned5GetUpEv */
	void RotateAABB(const class QuaternionAligned  *, const class Vector__1  &, const class Vector__1  &, class Vector__1 &, class Vector__1 &); /* linkage=_ZNK17QuaternionAligned10RotateAABBERK6VectorS2_RS0_S3_ */
	void RotateAABBByInverse(const class QuaternionAligned  *, const class Vector__1  &, const class Vector__1  &, class Vector__1 &, class Vector__1 &); /* linkage=_ZNK17QuaternionAligned19RotateAABBByInverseERK6VectorS2_RS0_S3_ */
	class Vector__1 RotateExtents(const class QuaternionAligned  *, const class Vector__1  &); /* linkage=_ZNK17QuaternionAligned13RotateExtentsERK6Vector */
	class Vector__1 RotateVector(const class QuaternionAligned  *, const class Vector__1  &); /* linkage=_ZNK17QuaternionAligned12RotateVectorERK6Vector */
	class VectorAligned RotateVector(const class QuaternionAligned  *, const class VectorAligned  &); /* linkage=_ZNK17QuaternionAligned12RotateVectorERK13VectorAligned */
	class VectorAligned ImaginaryPart(const class QuaternionAligned  *); /* linkage=_ZNK17QuaternionAligned13ImaginaryPartEv */
	float RealPart(const class QuaternionAligned  *); /* linkage=_ZNK17QuaternionAligned8RealPartEv */
	void RotateAABB(const class QuaternionAligned  *, const class Vector  &, const class Vector  &, class Vector &, class Vector &); /* linkage=_ZNK17QuaternionAligned10RotateAABBERK6VectorS2_RS0_S3_ */
	void RotateAABBByInverse(const class QuaternionAligned  *, const class Vector  &, const class Vector  &, class Vector &, class Vector &); /* linkage=_ZNK17QuaternionAligned19RotateAABBByInverseERK6VectorS2_RS0_S3_ */
	class Vector RotateExtents(const class QuaternionAligned  *, const class Vector  &); /* linkage=_ZNK17QuaternionAligned13RotateExtentsERK6Vector */
	class Vector RotateVector(const class QuaternionAligned  *, const class Vector  &); /* linkage=_ZNK17QuaternionAligned12RotateVectorERK6Vector */
} __attribute__((__aligned__(16)));

// <0585434A> ../../public/mathlib/quaternionaligned.h:18
// member functions: 122
// member variable: 1
// static member variable: 1
// class size: 16
class QuaternionAligned {
	static const class QuaternionAligned qIdentity; /* 0 0 */
	/* ../../public/mathlib/quaternionaligned.h:23 */
	void QuaternionAligned(QuaternionAligned* );
	/* ../../public/mathlib/quaternionaligned.h:29 */
	void QuaternionAligned(QuaternionAligned* , vec_t, vec_t, vec_t, vec_t);
	/* ../../public/mathlib/quaternionaligned.h:30 */
	void QuaternionAligned(QuaternionAligned* , const Quaternion& );
	/* ../../public/mathlib/quaternionaligned.h:31 */
	void QuaternionAligned(QuaternionAligned* , const VectorAligned& , vec_t);
	/* ../../public/mathlib/quaternionaligned.h:32 */
	void QuaternionAligned(QuaternionAligned* , fltx4);
	/* ../../public/mathlib/quaternionaligned.h:34 */
	void Init(QuaternionAligned* , vec_t, vec_t, vec_t, vec_t);
	/* ../../public/mathlib/quaternionaligned.h:35 */
	void Init(QuaternionAligned* , const VectorAligned& , float);
	/* ../../public/mathlib/quaternionaligned.h:37 */
	bool IsValid(const QuaternionAligned* );
	/* ../../public/mathlib/quaternionaligned.h:38 */
	void Invalidate(QuaternionAligned* );
	/* ../../public/mathlib/quaternionaligned.h:41 */
	Quaternion operator Quaternion(const QuaternionAligned* );
	/* ../../public/mathlib/quaternionaligned.h:42 */
	fltx4 operator fltx4(const QuaternionAligned* );
	/* ../../public/mathlib/quaternionaligned.h:45 */
	QuaternionAligned& operator=(QuaternionAligned* , const QuaternionAligned& );
	/* ../../public/mathlib/quaternionaligned.h:46 */
	QuaternionAligned& operator=(QuaternionAligned* , const Quaternion& );
	/* ../../public/mathlib/quaternionaligned.h:47 */
	QuaternionAligned& operator=(QuaternionAligned* , fltx4);
	/* ../../public/mathlib/quaternionaligned.h:50 */
	bool operator==(const QuaternionAligned* , const QuaternionAligned& );
	/* ../../public/mathlib/quaternionaligned.h:51 */
	bool operator!=(const QuaternionAligned* , const QuaternionAligned& );
	/* ../../public/mathlib/quaternionaligned.h:54 */
	QuaternionAligned operator-(const QuaternionAligned* );
	/* ../../public/mathlib/quaternionaligned.h:57 */
	QuaternionAligned& operator+=(QuaternionAligned* , const QuaternionAligned& );
	/* ../../public/mathlib/quaternionaligned.h:58 */
	QuaternionAligned& operator-=(QuaternionAligned* , const QuaternionAligned& );
	/* ../../public/mathlib/quaternionaligned.h:59 */
	QuaternionAligned& operator*=(QuaternionAligned* , const QuaternionAligned& );
	/* ../../public/mathlib/quaternionaligned.h:60 */
	QuaternionAligned& operator*=(QuaternionAligned* , vec_t);
	/* ../../public/mathlib/quaternionaligned.h:61 */
	QuaternionAligned& operator/=(QuaternionAligned* , vec_t);
	/* ../../public/mathlib/quaternionaligned.h:63 */
	QuaternionAligned operator+(const QuaternionAligned* , const QuaternionAligned& );
	/* ../../public/mathlib/quaternionaligned.h:64 */
	QuaternionAligned operator-(const QuaternionAligned* , const QuaternionAligned& );
	/* ../../public/mathlib/quaternionaligned.h:65 */
	QuaternionAligned operator*(const QuaternionAligned* , vec_t);
	/* ../../public/mathlib/quaternionaligned.h:66 */
	QuaternionAligned operator*(const QuaternionAligned* , const QuaternionAligned& );
	/* ../../public/mathlib/quaternionaligned.h:67 */
	VectorAligned operator*(const QuaternionAligned* , const VectorAligned& );
	/* ../../public/mathlib/quaternionaligned.h:68 */
	QuaternionAligned operator/(const QuaternionAligned* , vec_t);
	/* ../../public/mathlib/quaternionaligned.h:71 */
	vec_t& operator[](QuaternionAligned* , int);
	/* ../../public/mathlib/quaternionaligned.h:72 */
	vec_t operator[](const QuaternionAligned* , int);
	/* ../../public/mathlib/quaternionaligned.h:74 */
	vec_t x(const QuaternionAligned* );
	/* ../../public/mathlib/quaternionaligned.h:75 */
	vec_t y(const QuaternionAligned* );
	/* ../../public/mathlib/quaternionaligned.h:76 */
	vec_t z(const QuaternionAligned* );
	/* ../../public/mathlib/quaternionaligned.h:77 */
	vec_t w(const QuaternionAligned* );
	/* ../../public/mathlib/quaternionaligned.h:79 */
	void SetX(QuaternionAligned* , vec_t);
	/* ../../public/mathlib/quaternionaligned.h:80 */
	void SetY(QuaternionAligned* , vec_t);
	/* ../../public/mathlib/quaternionaligned.h:81 */
	void SetZ(QuaternionAligned* , vec_t);
	/* ../../public/mathlib/quaternionaligned.h:82 */
	void SetW(QuaternionAligned* , vec_t);
	/* ../../public/mathlib/quaternionaligned.h:85 */
	void GetAxisAngle(const QuaternionAligned* , VectorAligned& , vec_t& );
	/* ../../public/mathlib/quaternionaligned.h:88 */
	void SetAxisAngle(QuaternionAligned* , const VectorAligned& , vec_t);
	/* ../../public/mathlib/quaternionaligned.h:91 */
	vec_t Length(const QuaternionAligned* );
	/* ../../public/mathlib/quaternionaligned.h:94 */
	vec_t LengthSqr(const QuaternionAligned* );
	/* ../../public/mathlib/quaternionaligned.h:97 */
	vec_t Normalize(QuaternionAligned* );
	/* ../../public/mathlib/quaternionaligned.h:100 */
	QuaternionAligned Normalized(const QuaternionAligned* );
	/* ../../public/mathlib/quaternionaligned.h:102 */
	bool IsNormalized(const QuaternionAligned* , float);
	/* ../../public/mathlib/quaternionaligned.h:105 */
	QuaternionAligned Conjugate(const QuaternionAligned* );
	/* ../../public/mathlib/quaternionaligned.h:108 */
	float Dot(const QuaternionAligned* , const QuaternionAligned& );
	/* ../../public/mathlib/quaternionaligned.h:111 */
	matrix3x4a_t ToMatrix(const QuaternionAligned* , const VectorAligned& );
	/* ../../public/mathlib/quaternionaligned.h:114 */
	QAngle ToQAngle(const QuaternionAligned* );
	/* ../../public/mathlib/quaternionaligned.h:117 */
	VectorAligned GetForward(const QuaternionAligned* );
	/* ../../public/mathlib/quaternionaligned.h:118 */
	VectorAligned GetLeft(const QuaternionAligned* );
	/* ../../public/mathlib/quaternionaligned.h:119 */
	VectorAligned GetUp(const QuaternionAligned* );
	/* ../../public/mathlib/quaternionaligned.h:121 */
	void RotateAABB(const QuaternionAligned* , const Vector& , const Vector& , Vector& , Vector& );
	/* ../../public/mathlib/quaternionaligned.h:122 */
	void RotateAABBByInverse(const QuaternionAligned* , const Vector& , const Vector& , Vector& , Vector& );
	/* ../../public/mathlib/quaternionaligned.h:123 */
	Vector RotateExtents(const QuaternionAligned* , const Vector& );
	/* ../../public/mathlib/quaternionaligned.h:124 */
	Vector RotateVector(const QuaternionAligned* , const Vector& );
	/* ../../public/mathlib/quaternionaligned.h:125 */
	VectorAligned RotateVector(const QuaternionAligned* , const VectorAligned& );
	/* ../../public/mathlib/quaternionaligned.h:127 */
	VectorAligned ImaginaryPart(const QuaternionAligned* );
	/* ../../public/mathlib/quaternionaligned.h:128 */
	float RealPart(const QuaternionAligned* );
	fltx4 m_vec; /* 0 16 */
	void QuaternionAligned(class QuaternionAligned *); /* linkage=_ZN17QuaternionAlignedC4Ev */
	void QuaternionAligned(class QuaternionAligned *, vec_t, vec_t, vec_t, vec_t); /* linkage=_ZN17QuaternionAlignedC4Effff */
	void QuaternionAligned(class QuaternionAligned *, const class Quaternion  &); /* linkage=_ZN17QuaternionAlignedC4ERK10Quaternion */
	void QuaternionAligned(class QuaternionAligned *, const class VectorAligned  &, vec_t); /* linkage=_ZN17QuaternionAlignedC4ERK13VectorAlignedf */
	void QuaternionAligned(class QuaternionAligned *, fltx4); /* linkage=_ZN17QuaternionAlignedC4EDv4_f */
	void Init(class QuaternionAligned *, vec_t, vec_t, vec_t, vec_t); /* linkage=_ZN17QuaternionAligned4InitEffff */
	void Init(class QuaternionAligned *, const class VectorAligned  &, float); /* linkage=_ZN17QuaternionAligned4InitERK13VectorAlignedf */
	bool IsValid(const class QuaternionAligned  *); /* linkage=_ZNK17QuaternionAligned7IsValidEv */
	void Invalidate(class QuaternionAligned *); /* linkage=_ZN17QuaternionAligned10InvalidateEv */
	class Quaternion operator Quaternion(const class QuaternionAligned  *); /* linkage=_ZNK17QuaternionAlignedcv10QuaternionEv */
	fltx4 operator fltx4(const class QuaternionAligned  *); /* linkage=_ZNK17QuaternionAlignedcvDv4_fEv */
	class QuaternionAligned & operator=(class QuaternionAligned *, const class QuaternionAligned  &); /* linkage=_ZN17QuaternionAlignedaSERKS_ */
	class QuaternionAligned & operator=(class QuaternionAligned *, const class Quaternion  &); /* linkage=_ZN17QuaternionAlignedaSERK10Quaternion */
	class QuaternionAligned & operator=(class QuaternionAligned *, fltx4); /* linkage=_ZN17QuaternionAlignedaSEDv4_f */
	bool operator==(const class QuaternionAligned  *, const class QuaternionAligned  &); /* linkage=_ZNK17QuaternionAlignedeqERKS_ */
	bool operator!=(const class QuaternionAligned  *, const class QuaternionAligned  &); /* linkage=_ZNK17QuaternionAlignedneERKS_ */
	class QuaternionAligned operator-(const class QuaternionAligned  *); /* linkage=_ZNK17QuaternionAlignedngEv */
	class QuaternionAligned & operator+=(class QuaternionAligned *, const class QuaternionAligned  &); /* linkage=_ZN17QuaternionAlignedpLERKS_ */
	class QuaternionAligned & operator-=(class QuaternionAligned *, const class QuaternionAligned  &); /* linkage=_ZN17QuaternionAlignedmIERKS_ */
	class QuaternionAligned & operator*=(class QuaternionAligned *, const class QuaternionAligned  &); /* linkage=_ZN17QuaternionAlignedmLERKS_ */
	class QuaternionAligned & operator*=(class QuaternionAligned *, vec_t); /* linkage=_ZN17QuaternionAlignedmLEf */
	class QuaternionAligned & operator/=(class QuaternionAligned *, vec_t); /* linkage=_ZN17QuaternionAligneddVEf */
	class QuaternionAligned operator+(const class QuaternionAligned  *, const class QuaternionAligned  &); /* linkage=_ZNK17QuaternionAlignedplERKS_ */
	class QuaternionAligned operator-(const class QuaternionAligned  *, const class QuaternionAligned  &); /* linkage=_ZNK17QuaternionAlignedmiERKS_ */
	class QuaternionAligned operator*(const class QuaternionAligned  *, vec_t); /* linkage=_ZNK17QuaternionAlignedmlEf */
	class QuaternionAligned operator*(const class QuaternionAligned  *, const class QuaternionAligned  &); /* linkage=_ZNK17QuaternionAlignedmlERKS_ */
	class VectorAligned operator*(const class QuaternionAligned  *, const class VectorAligned  &); /* linkage=_ZNK17QuaternionAlignedmlERK13VectorAligned */
	class QuaternionAligned operator/(const class QuaternionAligned  *, vec_t); /* linkage=_ZNK17QuaternionAligneddvEf */
	vec_t & operator[](class QuaternionAligned *, int); /* linkage=_ZN17QuaternionAlignedixEi */
	vec_t operator[](const class QuaternionAligned  *, int); /* linkage=_ZNK17QuaternionAlignedixEi */
	vec_t x(const class QuaternionAligned  *); /* linkage=_ZNK17QuaternionAligned1xEv */
	vec_t y(const class QuaternionAligned  *); /* linkage=_ZNK17QuaternionAligned1yEv */
	vec_t z(const class QuaternionAligned  *); /* linkage=_ZNK17QuaternionAligned1zEv */
	vec_t w(const class QuaternionAligned  *); /* linkage=_ZNK17QuaternionAligned1wEv */
	void SetX(class QuaternionAligned *, vec_t); /* linkage=_ZN17QuaternionAligned4SetXEf */
	void SetY(class QuaternionAligned *, vec_t); /* linkage=_ZN17QuaternionAligned4SetYEf */
	void SetZ(class QuaternionAligned *, vec_t); /* linkage=_ZN17QuaternionAligned4SetZEf */
	void SetW(class QuaternionAligned *, vec_t); /* linkage=_ZN17QuaternionAligned4SetWEf */
	void GetAxisAngle(const class QuaternionAligned  *, class VectorAligned &, vec_t &); /* linkage=_ZNK17QuaternionAligned12GetAxisAngleER13VectorAlignedRf */
	void SetAxisAngle(class QuaternionAligned *, const class VectorAligned  &, vec_t); /* linkage=_ZN17QuaternionAligned12SetAxisAngleERK13VectorAlignedf */
	vec_t Length(const class QuaternionAligned  *); /* linkage=_ZNK17QuaternionAligned6LengthEv */
	vec_t LengthSqr(const class QuaternionAligned  *); /* linkage=_ZNK17QuaternionAligned9LengthSqrEv */
	vec_t Normalize(class QuaternionAligned *); /* linkage=_ZN17QuaternionAligned9NormalizeEv */
	class QuaternionAligned Normalized(const class QuaternionAligned  *); /* linkage=_ZNK17QuaternionAligned10NormalizedEv */
	bool IsNormalized(const class QuaternionAligned  *, float); /* linkage=_ZNK17QuaternionAligned12IsNormalizedEf */
	class QuaternionAligned Conjugate(const class QuaternionAligned  *); /* linkage=_ZNK17QuaternionAligned9ConjugateEv */
	float Dot(const class QuaternionAligned  *, const class QuaternionAligned  &); /* linkage=_ZNK17QuaternionAligned3DotERKS_ */
	class matrix3x4a_t ToMatrix(const class QuaternionAligned  *, const class VectorAligned  &); /* linkage=_ZNK17QuaternionAligned8ToMatrixERK13VectorAligned */
	class QAngle ToQAngle(const class QuaternionAligned  *); /* linkage=_ZNK17QuaternionAligned8ToQAngleEv */
	class VectorAligned GetForward(const class QuaternionAligned  *); /* linkage=_ZNK17QuaternionAligned10GetForwardEv */
	class VectorAligned GetLeft(const class QuaternionAligned  *); /* linkage=_ZNK17QuaternionAligned7GetLeftEv */
	class VectorAligned GetUp(const class QuaternionAligned  *); /* linkage=_ZNK17QuaternionAligned5GetUpEv */
	void RotateAABB(const class QuaternionAligned  *, const class Vector__1  &, const class Vector__1  &, class Vector__1 &, class Vector__1 &); /* linkage=_ZNK17QuaternionAligned10RotateAABBERK6VectorS2_RS0_S3_ */
	void RotateAABBByInverse(const class QuaternionAligned  *, const class Vector__1  &, const class Vector__1  &, class Vector__1 &, class Vector__1 &); /* linkage=_ZNK17QuaternionAligned19RotateAABBByInverseERK6VectorS2_RS0_S3_ */
	class Vector__1 RotateExtents(const class QuaternionAligned  *, const class Vector__1  &); /* linkage=_ZNK17QuaternionAligned13RotateExtentsERK6Vector */
	class Vector__1 RotateVector(const class QuaternionAligned  *, const class Vector__1  &); /* linkage=_ZNK17QuaternionAligned12RotateVectorERK6Vector */
	class VectorAligned RotateVector(const class QuaternionAligned  *, const class VectorAligned  &); /* linkage=_ZNK17QuaternionAligned12RotateVectorERK13VectorAligned */
	class VectorAligned ImaginaryPart(const class QuaternionAligned  *); /* linkage=_ZNK17QuaternionAligned13ImaginaryPartEv */
	float RealPart(const class QuaternionAligned  *); /* linkage=_ZNK17QuaternionAligned8RealPartEv */
	void RotateAABB(const class QuaternionAligned  *, const class Vector  &, const class Vector  &, class Vector &, class Vector &); /* linkage=_ZNK17QuaternionAligned10RotateAABBERK6VectorS2_RS0_S3_ */
	void RotateAABBByInverse(const class QuaternionAligned  *, const class Vector  &, const class Vector  &, class Vector &, class Vector &); /* linkage=_ZNK17QuaternionAligned19RotateAABBByInverseERK6VectorS2_RS0_S3_ */
	class Vector RotateExtents(const class QuaternionAligned  *, const class Vector  &); /* linkage=_ZNK17QuaternionAligned13RotateExtentsERK6Vector */
	class Vector RotateVector(const class QuaternionAligned  *, const class Vector  &); /* linkage=_ZNK17QuaternionAligned12RotateVectorERK6Vector */
} __attribute__((__aligned__(16)));

// <06353876> ../public/mathlib/quaternionaligned.h:23
void QuaternionAligned::QuaternionAligned()
{
} /* size: 0 */

// <0635385D> ../public/mathlib/quaternionaligned.h:23
inline void QuaternionAligned::QuaternionAligned()
{
} /* size: 0 */

// <05A25324> ../public/mathlib/quaternionaligned.h:29
void QuaternionAligned::QuaternionAligned(vec_t X, vec_t Y, vec_t Z, vec_t W)
{
} /* size: 0 */

// <05A252E3> ../public/mathlib/quaternionaligned.h:29
inline void QuaternionAligned::QuaternionAligned(vec_t X, vec_t Y, vec_t Z, vec_t W)
{
} /* size: 0 */

// <05A5955A> ../public/mathlib/quaternionaligned.h:30
void QuaternionAligned::QuaternionAligned(const Quaternion& rhs)
{
} /* size: 0 */

// <05A59535> ../public/mathlib/quaternionaligned.h:30
inline void QuaternionAligned::QuaternionAligned(const Quaternion& rhs)
{
} /* size: 0 */

// <05A37F8F> ../public/mathlib/quaternionaligned.h:31
void QuaternionAligned::QuaternionAligned(const VectorAligned& axis, vec_t angle)
{
} /* size: 0 */

// <05A37F5E> ../public/mathlib/quaternionaligned.h:31
inline void QuaternionAligned::QuaternionAligned(const VectorAligned& axis, vec_t angle)
{
} /* size: 0 */

// <05A59519> ../public/mathlib/quaternionaligned.h:32
void QuaternionAligned::QuaternionAligned(fltx4 vec)
{
} /* size: 0 */

// <05A594F4> ../public/mathlib/quaternionaligned.h:32
inline void QuaternionAligned::QuaternionAligned(fltx4 vec)
{
} /* size: 0 */

// <06353844> ../public/mathlib/quaternionaligned.h:41
inline void operator QuaternionAligned::Quaternion()
{
} /* size: 0 */

// <05A594C2> ../public/mathlib/quaternionaligned.h:42
inline void operator QuaternionAligned::fltx4()
{
} /* size: 0 */

// <0635382B> ../public/mathlib/quaternionaligned.h:74
inline void QuaternionAligned::x()
{
} /* size: 0 */

// <06353812> ../public/mathlib/quaternionaligned.h:75
inline void QuaternionAligned::y()
{
} /* size: 0 */

// <063537F9> ../public/mathlib/quaternionaligned.h:76
inline void QuaternionAligned::z()
{
} /* size: 0 */

// <063537E0> ../public/mathlib/quaternionaligned.h:77
inline void QuaternionAligned::w()
{
} /* size: 0 */

// <00D24E01> ../public/mathlib/quaternionaligned.h:79
inline void QuaternionAligned::SetX(vec_t value)
{
} /* size: 0 */

// <00D24DDC> ../public/mathlib/quaternionaligned.h:80
inline void QuaternionAligned::SetY(vec_t value)
{
} /* size: 0 */

// <00D24DB7> ../public/mathlib/quaternionaligned.h:81
inline void QuaternionAligned::SetZ(vec_t value)
{
} /* size: 0 */

// <059D8E0D> ../public/mathlib/quaternionaligned.h:82
inline void QuaternionAligned::SetW(vec_t value)
{
} /* size: 0 */

// <00DF49D7> ../public/mathlib/quaternionaligned.h:145
QuaternionAligned CalcRotationBetweenVectors(const VectorAligned &, const VectorAligned &)
{
} /* size: 0 */

// <00F34117> ../public/mathlib/quaternionaligned.h:148
QuaternionAligned CalcRotationAboutAxis(const VectorAligned &, const VectorAligned &, const VectorAligned &)
{
} /* size: 0 */

// <01565B1B> ../public/mathlib/quaternionaligned.h:151
float CalcAngleAboutAxis(const VectorAligned &, const VectorAligned &, const VectorAligned &)
{
} /* size: 0 */

// <05998B4B> ../public/mathlib/quaternionaligned.h:153
fltx4 QuaternionAlignedMultiply(fltx4, fltx4)
{
} /* size: 0 */

// <05A25117> ../public/mathlib/quaternionaligned.h:155
// variables: 10
inline fltx4 QuaternionAlignedMultiply_Inline(fltx4 p, fltx4 q)
{
	const fltx4  g_fl4QuatMultiplySignConstantX; // 157
	const fltx4  g_fl4QuatMultiplySignConstantY; // 158
	const fltx4  g_fl4QuatMultiplySignConstantZ; // 159
	fltx4 qRev; // 161
	fltx4 qRot2; // 162
	fltx4 qRevRot2; // 163
	fltx4 tmp1; // 165
	fltx4 tmp2; // 166
	fltx4 tmp3; // 167
	fltx4 result; // 169
} /* size: 0, variables: 10 */

// <0635379C> ../public/mathlib/quaternionaligned.h:183
inline void QuaternionAligned::Init(vec_t X, vec_t Y, vec_t Z, vec_t W)
{
} /* size: 0 */

// <05A37EDF> ../public/mathlib/quaternionaligned.h:196
inline void QuaternionAligned::IsValid()
{
} /* size: 0 */

// <060E200A> ../public/mathlib/quaternionaligned.h:208
inline void QuaternionAligned::operator=(const QuaternionAligned& vOther)
{
} /* size: 0 */

// <06353774> ../public/mathlib/quaternionaligned.h:215
inline void QuaternionAligned::operator=(const Quaternion& vOther)
{
} /* size: 0 */

// <05A59303> ../public/mathlib/quaternionaligned.h:222
inline void QuaternionAligned::operator=(fltx4 vOther)
{
} /* size: 0 */

// <059D8D30> ../public/mathlib/quaternionaligned.h:246
inline void QuaternionAligned::operator*=(const QuaternionAligned& q)
{
} /* size: 0 */

// <00097F9D> ../public/mathlib/quaternionaligned.h:299
// variable: 1
inline void QuaternionAligned::operator*(const QuaternionAligned& q)
{
	QuaternionAligned result; // 301
} /* size: 0, variables: 1 */

// <00097F52> ../public/mathlib/quaternionaligned.h:307
// variables: 3
inline void QuaternionAligned::operator*(const VectorAligned& v)
{
	fltx4 t; // 309
	fltx4 t2; // 309
	fltx4 result; // 309
} /* size: 0, variables: 3 */

// <01B54620> ../public/mathlib/quaternionaligned.h:347
// variable: 1
inline void QuaternionAligned::GetAxisAngle(VectorAligned& axisOut, vec_t& angleRadiansOut)
{
	vec_t halfAngle; // 349
} /* size: 0, variables: 1 */

// <05A59268> ../public/mathlib/quaternionaligned.h:356
// variables: 2
inline void QuaternionAligned::SetAxisAngle(const VectorAligned& axis, vec_t angleRadians)
{
	float sinAngle; // 360
	float cosAngle; // 360
} /* size: 0, variables: 2 */

// <059D8CB9> ../public/mathlib/quaternionaligned.h:390
// variables: 3
inline void QuaternionAligned::Normalize()
{
	fltx4 lengthSqr; // 392
	fltx4 length; // 393
	fltx4 mask; // 395
} /* size: 0, variables: 3 */

// <05A24FF6> ../public/mathlib/quaternionaligned.h:403
// variables: 3
inline void QuaternionAligned::Normalized()
{
	fltx4 lengthSqr; // 405
	fltx4 length; // 406
	fltx4 mask; // 407
} /* size: 0, variables: 3 */

// <00DE42A7> ../public/mathlib/quaternionaligned.h:419
// variables: 2
inline void QuaternionAligned::Conjugate()
{
	fltx4 vReverse; // 421
	fltx4 vReverseNeg; // 422
} /* size: 0, variables: 2 */

// <0541A19C> ../public/mathlib/quaternionaligned.h:433
inline void QuaternionAligned::GetForward()
{
} /* size: 0 */

// <0541A180> ../public/mathlib/quaternionaligned.h:439
inline void QuaternionAligned::GetLeft()
{
} /* size: 0 */

// <0541A164> ../public/mathlib/quaternionaligned.h:445
inline void QuaternionAligned::GetUp()
{
} /* size: 0 */

// <04AB63E6> ../public/mathlib/quaternionaligned.h:461
// variables: 4
inline fltx4 QuaternionAlignSIMD<>(const fltx4& p, const fltx4& q)
{
	fltx4 a; // 464
	fltx4 b; // 465
	fltx4 cmp; // 468
	fltx4 result; // 469
} /* size: 0, variables: 4 */

// <05A4E77A> ../public/mathlib/quaternionaligned.h:479
// variables: 10
inline fltx4 QuaternionSlerpNoAlignSIMD<>(const fltx4& p, const fltx4& q, float t)
{
	float omega; // 481
	float sinom; // 481
	float sclp; // 481
	float sclq; // 481
	fltx4 result; // 483
	fltx4 fl4Dot; // 486
	float cosom; // 487
	{
		fltx4 fl4Q; // 509
		fltx4 fl4PScale; // 514
		fltx4 fl4QScale; // 515
	}
} /* size: 0, variables: 7 */

// <05A4E842> ../public/mathlib/quaternionaligned.h:524
// variables: 2
inline fltx4 QuaternionSlerpSIMD<>(const fltx4& p, const fltx4& q, float t)
{
	fltx4 q2; // 526
	fltx4 result; // 526
} /* size: 0, variables: 2 */

// <028115AB> ../public/mathlib/quaternionaligned.h:538
inline void QuaternionSlerpNoAlign(const QuaternionAligned& p, const QuaternionAligned& q, float t, QuaternionAligned& qt)
{
} /* size: 0 */

// <00097EF9> ../public/mathlib/quaternionaligned.h:543
inline QuaternionAligned QuaternionSlerp(const QuaternionAligned& qFrom, const QuaternionAligned& qTo, float t)
{
} /* size: 0 */

