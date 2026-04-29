
//
// public/mathlib/vector4daligned.h
//
//	referenced by: libengine2.so
//
//	functions: 11
//	class: 1
//

// <03F51662> ../public/mathlib/vector4daligned.h:13
// member functions: 108
// member variable: 1
// static member variables: 5
// class size: 16
class Vector4DAligned {
	static const class Vector4DAligned vZero; /* 0 0 */
	static const class Vector4DAligned vOne; /* 0 0 */
	static const class Vector4DAligned vForward; /* 0 0 */
	static const class Vector4DAligned vLeft; /* 0 0 */
	static const class Vector4DAligned vUp; /* 0 0 */
	/* ../public/mathlib/vector4daligned.h:22 */
	void Vector4DAligned(Vector4DAligned* );
	/* ../public/mathlib/vector4daligned.h:23 */
	void Vector4DAligned(Vector4DAligned* , vec_t, vec_t, vec_t, vec_t);
	/* ../public/mathlib/vector4daligned.h:24 */
	void Vector4DAligned(Vector4DAligned* , const Vector4DAligned& );
	/* ../public/mathlib/vector4daligned.h:25 */
	void Vector4DAligned(Vector4DAligned* , fltx4);
	/* ../public/mathlib/vector4daligned.h:27 */
	void Vector4DAligned(Vector4DAligned* , const Vector& , vec_t);
	/* ../public/mathlib/vector4daligned.h:28 */
	void Vector4DAligned(Vector4DAligned* , const Vector4D& );
	/* ../public/mathlib/vector4daligned.h:30 */
	void Init(Vector4DAligned* , vec_t, vec_t, vec_t, vec_t);
	/* ../public/mathlib/vector4daligned.h:31 */
	void Init(Vector4DAligned* , const Vector& , vec_t);
	/* ../public/mathlib/vector4daligned.h:32 */
	void InitZero(Vector4DAligned* );
	/* ../public/mathlib/vector4daligned.h:33 */
	bool IsValid(const Vector4DAligned* );
	/* ../public/mathlib/vector4daligned.h:36 */
	fltx4 operator fltx4(const Vector4DAligned* );
	/* ../public/mathlib/vector4daligned.h:37 */
	Vector4D operator Vector4D(const Vector4DAligned* );
	/* ../public/mathlib/vector4daligned.h:39 */
	Vector& AsVector3D(Vector4DAligned* );
	/* ../public/mathlib/vector4daligned.h:40 */
	const Vector& AsVector3D(const Vector4DAligned* );
	/* ../public/mathlib/vector4daligned.h:43 */
	Vector4DAligned& operator=(Vector4DAligned* , const Vector4DAligned& );
	/* ../public/mathlib/vector4daligned.h:44 */
	Vector4DAligned& operator=(Vector4DAligned* , fltx4);
	/* ../public/mathlib/vector4daligned.h:47 */
	bool operator==(const Vector4DAligned* , const Vector4DAligned& );
	/* ../public/mathlib/vector4daligned.h:48 */
	bool operator!=(const Vector4DAligned* , const Vector4DAligned& );
	/* ../public/mathlib/vector4daligned.h:51 */
	Vector4DAligned operator-(const Vector4DAligned* );
	/* ../public/mathlib/vector4daligned.h:54 */
	Vector4DAligned& operator+=(Vector4DAligned* , const Vector4DAligned& );
	/* ../public/mathlib/vector4daligned.h:55 */
	Vector4DAligned& operator-=(Vector4DAligned* , const Vector4DAligned& );
	/* ../public/mathlib/vector4daligned.h:56 */
	Vector4DAligned& operator*=(Vector4DAligned* , const Vector4DAligned& );
	/* ../public/mathlib/vector4daligned.h:57 */
	Vector4DAligned& operator*=(Vector4DAligned* , vec_t);
	/* ../public/mathlib/vector4daligned.h:58 */
	Vector4DAligned& operator/=(Vector4DAligned* , const Vector4DAligned& );
	/* ../public/mathlib/vector4daligned.h:59 */
	Vector4DAligned& operator/=(Vector4DAligned* , vec_t);
	/* ../public/mathlib/vector4daligned.h:61 */
	Vector4DAligned operator+(const Vector4DAligned* , const Vector4DAligned& );
	/* ../public/mathlib/vector4daligned.h:62 */
	Vector4DAligned operator-(const Vector4DAligned* , const Vector4DAligned& );
	/* ../public/mathlib/vector4daligned.h:63 */
	Vector4DAligned operator*(const Vector4DAligned* , const Vector4DAligned& );
	/* ../public/mathlib/vector4daligned.h:64 */
	Vector4DAligned operator*(const Vector4DAligned* , vec_t);
	/* ../public/mathlib/vector4daligned.h:65 */
	Vector4DAligned operator/(const Vector4DAligned* , vec_t);
	/* ../public/mathlib/vector4daligned.h:68 */
	vec_t& operator[](Vector4DAligned* , int);
	/* ../public/mathlib/vector4daligned.h:69 */
	vec_t operator[](const Vector4DAligned* , int);
	/* ../public/mathlib/vector4daligned.h:71 */
	vec_t x(const Vector4DAligned* );
	/* ../public/mathlib/vector4daligned.h:72 */
	vec_t y(const Vector4DAligned* );
	/* ../public/mathlib/vector4daligned.h:73 */
	vec_t z(const Vector4DAligned* );
	/* ../public/mathlib/vector4daligned.h:74 */
	vec_t w(const Vector4DAligned* );
	/* ../public/mathlib/vector4daligned.h:76 */
	void SetX(Vector4DAligned* , vec_t);
	/* ../public/mathlib/vector4daligned.h:77 */
	void SetY(Vector4DAligned* , vec_t);
	/* ../public/mathlib/vector4daligned.h:78 */
	void SetZ(Vector4DAligned* , vec_t);
	/* ../public/mathlib/vector4daligned.h:79 */
	void SetW(Vector4DAligned* , vec_t);
	/* ../public/mathlib/vector4daligned.h:82 */
	vec_t Length(const Vector4DAligned* );
	/* ../public/mathlib/vector4daligned.h:85 */
	vec_t Length3(const Vector4DAligned* );
	/* ../public/mathlib/vector4daligned.h:88 */
	vec_t Length3Approx(const Vector4DAligned* );
	/* ../public/mathlib/vector4daligned.h:91 */
	vec_t LengthSqr(const Vector4DAligned* );
	/* ../public/mathlib/vector4daligned.h:94 */
	vec_t LengthSqr3(const Vector4DAligned* );
	/* ../public/mathlib/vector4daligned.h:98 */
	vec_t Normalize(Vector4DAligned* );
	/* ../public/mathlib/vector4daligned.h:102 */
	vec_t Normalize3(Vector4DAligned* );
	/* ../public/mathlib/vector4daligned.h:105 */
	vec_t Normalize3Approx(Vector4DAligned* );
	/* ../public/mathlib/vector4daligned.h:108 */
	Vector4DAligned Normalized3(const Vector4DAligned* );
	/* ../public/mathlib/vector4daligned.h:111 */
	Vector4DAligned Normalized3Approx(const Vector4DAligned* );
	/* ../public/mathlib/vector4daligned.h:114 */
	vec_t Dot(const Vector4DAligned* , const Vector4DAligned& );
	/* ../public/mathlib/vector4daligned.h:117 */
	vec_t Dot3(const Vector4DAligned* , const Vector4DAligned& );
	/* ../public/mathlib/vector4daligned.h:121 */
	Vector4DAligned Cross3(const Vector4DAligned* , const Vector4DAligned& );
	/* ../public/mathlib/vector4daligned.h:124 */
	Vector4DAligned Abs(const Vector4DAligned* );
private:
	fltx4 m_vec; /* 0 16 */
	void Vector4DAligned(class Vector4DAligned *); /* linkage=_ZN15Vector4DAlignedC4Ev */
	void Vector4DAligned(class Vector4DAligned *, vec_t, vec_t, vec_t, vec_t); /* linkage=_ZN15Vector4DAlignedC4Effff */
	void Vector4DAligned(class Vector4DAligned *, const class Vector4DAligned  &); /* linkage=_ZN15Vector4DAlignedC4ERKS_ */
	void Vector4DAligned(class Vector4DAligned *, fltx4); /* linkage=_ZN15Vector4DAlignedC4EDv4_f */
	void Vector4DAligned(class Vector4DAligned *, const class Vector  &, vec_t); /* linkage=_ZN15Vector4DAlignedC4ERK6Vectorf */
	void Vector4DAligned(class Vector4DAligned *, const class Vector4D  &); /* linkage=_ZN15Vector4DAlignedC4ERK8Vector4D */
	void Init(class Vector4DAligned *, vec_t, vec_t, vec_t, vec_t); /* linkage=_ZN15Vector4DAligned4InitEffff */
	void Init(class Vector4DAligned *, const class Vector  &, vec_t); /* linkage=_ZN15Vector4DAligned4InitERK6Vectorf */
	void InitZero(class Vector4DAligned *); /* linkage=_ZN15Vector4DAligned8InitZeroEv */
	bool IsValid(const class Vector4DAligned  *); /* linkage=_ZNK15Vector4DAligned7IsValidEv */
	fltx4 operator fltx4(const class Vector4DAligned  *); /* linkage=_ZNK15Vector4DAlignedcvDv4_fEv */
	class Vector4D operator Vector4D(const class Vector4DAligned  *); /* linkage=_ZNK15Vector4DAlignedcv8Vector4DEv */
	class Vector & AsVector3D(class Vector4DAligned *); /* linkage=_ZN15Vector4DAligned10AsVector3DEv */
	const class Vector  & AsVector3D(const class Vector4DAligned  *); /* linkage=_ZNK15Vector4DAligned10AsVector3DEv */
	class Vector4DAligned & operator=(class Vector4DAligned *, const class Vector4DAligned  &); /* linkage=_ZN15Vector4DAlignedaSERKS_ */
	class Vector4DAligned & operator=(class Vector4DAligned *, fltx4); /* linkage=_ZN15Vector4DAlignedaSEDv4_f */
	bool operator==(const class Vector4DAligned  *, const class Vector4DAligned  &); /* linkage=_ZNK15Vector4DAlignedeqERKS_ */
	bool operator!=(const class Vector4DAligned  *, const class Vector4DAligned  &); /* linkage=_ZNK15Vector4DAlignedneERKS_ */
	class Vector4DAligned operator-(const class Vector4DAligned  *); /* linkage=_ZNK15Vector4DAlignedngEv */
	class Vector4DAligned & operator+=(class Vector4DAligned *, const class Vector4DAligned  &); /* linkage=_ZN15Vector4DAlignedpLERKS_ */
	class Vector4DAligned & operator-=(class Vector4DAligned *, const class Vector4DAligned  &); /* linkage=_ZN15Vector4DAlignedmIERKS_ */
	class Vector4DAligned & operator*=(class Vector4DAligned *, const class Vector4DAligned  &); /* linkage=_ZN15Vector4DAlignedmLERKS_ */
	class Vector4DAligned & operator*=(class Vector4DAligned *, vec_t); /* linkage=_ZN15Vector4DAlignedmLEf */
	class Vector4DAligned & operator/=(class Vector4DAligned *, const class Vector4DAligned  &); /* linkage=_ZN15Vector4DAligneddVERKS_ */
	class Vector4DAligned & operator/=(class Vector4DAligned *, vec_t); /* linkage=_ZN15Vector4DAligneddVEf */
	class Vector4DAligned operator+(const class Vector4DAligned  *, const class Vector4DAligned  &); /* linkage=_ZNK15Vector4DAlignedplERKS_ */
	class Vector4DAligned operator-(const class Vector4DAligned  *, const class Vector4DAligned  &); /* linkage=_ZNK15Vector4DAlignedmiERKS_ */
	class Vector4DAligned operator*(const class Vector4DAligned  *, const class Vector4DAligned  &); /* linkage=_ZNK15Vector4DAlignedmlERKS_ */
	class Vector4DAligned operator*(const class Vector4DAligned  *, vec_t); /* linkage=_ZNK15Vector4DAlignedmlEf */
	class Vector4DAligned operator/(const class Vector4DAligned  *, vec_t); /* linkage=_ZNK15Vector4DAligneddvEf */
	vec_t & operator[](class Vector4DAligned *, int); /* linkage=_ZN15Vector4DAlignedixEi */
	vec_t operator[](const class Vector4DAligned  *, int); /* linkage=_ZNK15Vector4DAlignedixEi */
	vec_t x(const class Vector4DAligned  *); /* linkage=_ZNK15Vector4DAligned1xEv */
	vec_t y(const class Vector4DAligned  *); /* linkage=_ZNK15Vector4DAligned1yEv */
	vec_t z(const class Vector4DAligned  *); /* linkage=_ZNK15Vector4DAligned1zEv */
	vec_t w(const class Vector4DAligned  *); /* linkage=_ZNK15Vector4DAligned1wEv */
	void SetX(class Vector4DAligned *, vec_t); /* linkage=_ZN15Vector4DAligned4SetXEf */
	void SetY(class Vector4DAligned *, vec_t); /* linkage=_ZN15Vector4DAligned4SetYEf */
	void SetZ(class Vector4DAligned *, vec_t); /* linkage=_ZN15Vector4DAligned4SetZEf */
	void SetW(class Vector4DAligned *, vec_t); /* linkage=_ZN15Vector4DAligned4SetWEf */
	vec_t Length(const class Vector4DAligned  *); /* linkage=_ZNK15Vector4DAligned6LengthEv */
	vec_t Length3(const class Vector4DAligned  *); /* linkage=_ZNK15Vector4DAligned7Length3Ev */
	vec_t Length3Approx(const class Vector4DAligned  *); /* linkage=_ZNK15Vector4DAligned13Length3ApproxEv */
	vec_t LengthSqr(const class Vector4DAligned  *); /* linkage=_ZNK15Vector4DAligned9LengthSqrEv */
	vec_t LengthSqr3(const class Vector4DAligned  *); /* linkage=_ZNK15Vector4DAligned10LengthSqr3Ev */
	vec_t Normalize(class Vector4DAligned *); /* linkage=_ZN15Vector4DAligned9NormalizeEv */
	vec_t Normalize3(class Vector4DAligned *); /* linkage=_ZN15Vector4DAligned10Normalize3Ev */
	vec_t Normalize3Approx(class Vector4DAligned *); /* linkage=_ZN15Vector4DAligned16Normalize3ApproxEv */
	class Vector4DAligned Normalized3(const class Vector4DAligned  *); /* linkage=_ZNK15Vector4DAligned11Normalized3Ev */
	class Vector4DAligned Normalized3Approx(const class Vector4DAligned  *); /* linkage=_ZNK15Vector4DAligned17Normalized3ApproxEv */
	vec_t Dot(const class Vector4DAligned  *, const class Vector4DAligned  &); /* linkage=_ZNK15Vector4DAligned3DotERKS_ */
	vec_t Dot3(const class Vector4DAligned  *, const class Vector4DAligned  &); /* linkage=_ZNK15Vector4DAligned4Dot3ERKS_ */
	class Vector4DAligned Cross3(const class Vector4DAligned  *, const class Vector4DAligned  &); /* linkage=_ZNK15Vector4DAligned6Cross3ERKS_ */
	class Vector4DAligned Abs(const class Vector4DAligned  *); /* linkage=_ZNK15Vector4DAligned3AbsEv */
} __attribute__((__aligned__(16)));

// <040274FD> ../public/mathlib/vector4daligned.h:23
void Vector4DAligned::Vector4DAligned(vec_t X, vec_t Y, vec_t Z, vec_t W)
{
} /* size: 0 */

// <040274BC> ../public/mathlib/vector4daligned.h:23
inline void Vector4DAligned::Vector4DAligned(vec_t X, vec_t Y, vec_t Z, vec_t W)
{
} /* size: 0 */

// <0402749B> ../public/mathlib/vector4daligned.h:27
void Vector4DAligned::Vector4DAligned(const Vector& vec3, vec_t w)
{
} /* size: 0 */

// <0402746C> ../public/mathlib/vector4daligned.h:27
inline void Vector4DAligned::Vector4DAligned(const Vector& vec3, vec_t w)
{
} /* size: 0 */

// <04027453> ../public/mathlib/vector4daligned.h:37
inline void operator Vector4DAligned::Vector4D()
{
} /* size: 0 */

// <0402743A> ../public/mathlib/vector4daligned.h:71
inline void Vector4DAligned::x()
{
} /* size: 0 */

// <04027421> ../public/mathlib/vector4daligned.h:72
inline void Vector4DAligned::y()
{
} /* size: 0 */

// <04027408> ../public/mathlib/vector4daligned.h:73
inline void Vector4DAligned::z()
{
} /* size: 0 */

// <040273EF> ../public/mathlib/vector4daligned.h:74
inline void Vector4DAligned::w()
{
} /* size: 0 */

// <040273AB> ../public/mathlib/vector4daligned.h:137
inline void Vector4DAligned::Init(vec_t X, vec_t Y, vec_t Z, vec_t W)
{
} /* size: 0 */

// <04027383> ../public/mathlib/vector4daligned.h:167
inline void Vector4DAligned::operator=(const Vector4DAligned& src)
{
} /* size: 0 */

