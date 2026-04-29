
//
// public/mathlib/vector2d.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libfilesystem_stdio.so
//				   liblocalize.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//				   libschemasystem.so
//				   libtier0.so
//				   libvfx_vulkan.so
//
//	functions: 40
//	classes: 2
//

// <0000AB29> ../public/mathlib/vector2d.h:22
// member functions: 94
// member variables: 2
// static member variables: 2
// class size: 8
class Vector2D {
	static const class Vector2D vZero; /* 0 0 */
	static const class Vector2D vOne; /* 0 0 */
	vec_t x; /* 0 4 */
	vec_t y; /* 4 4 */
	/* ../public/mathlib/vector2d.h:32 */
	void Vector2D(Vector2D* );
	/* ../public/mathlib/vector2d.h:33 */
	void Vector2D(Vector2D* , vec_t, vec_t);
	/* ../public/mathlib/vector2d.h:34 */
	void Vector2D(Vector2D* , const float* );
	/* ../public/mathlib/vector2d.h:37 */
	void Init(Vector2D* , vec_t, vec_t);
	/* ../public/mathlib/vector2d.h:39 */
	void Zero(Vector2D* );
	/* ../public/mathlib/vector2d.h:42 */
	Vector2D& operator=(Vector2D* , const Vector2D& );
	/* ../public/mathlib/vector2d.h:45 */
	bool IsValid(const Vector2D* );
	/* ../public/mathlib/vector2d.h:48 */
	vec_t operator[](const Vector2D* , int);
	/* ../public/mathlib/vector2d.h:49 */
	vec_t& operator[](Vector2D* , int);
	/* ../public/mathlib/vector2d.h:52 */
	vec_t* Base(Vector2D* );
	/* ../public/mathlib/vector2d.h:53 */
	const vec_t* Base(const Vector2D* );
	/* ../public/mathlib/vector2d.h:56 */
	void Random(Vector2D* , float, float);
	/* ../public/mathlib/vector2d.h:59 */
	bool operator==(const Vector2D* , const Vector2D& );
	/* ../public/mathlib/vector2d.h:60 */
	bool operator!=(const Vector2D* , const Vector2D& );
	/* ../public/mathlib/vector2d.h:63 */
	Vector2D& operator+=(Vector2D* , const Vector2D& );
	/* ../public/mathlib/vector2d.h:64 */
	Vector2D& operator-=(Vector2D* , const Vector2D& );
	/* ../public/mathlib/vector2d.h:65 */
	Vector2D& operator*=(Vector2D* , const Vector2D& );
	/* ../public/mathlib/vector2d.h:66 */
	Vector2D& operator*=(Vector2D* , float);
	/* ../public/mathlib/vector2d.h:67 */
	Vector2D& operator/=(Vector2D* , const Vector2D& );
	/* ../public/mathlib/vector2d.h:68 */
	Vector2D& operator/=(Vector2D* , float);
	/* ../public/mathlib/vector2d.h:71 */
	void Negate(Vector2D* );
	/* ../public/mathlib/vector2d.h:74 */
	vec_t Length(const Vector2D* );
	/* ../public/mathlib/vector2d.h:77 */
	vec_t LengthSqr(const Vector2D* );
	/* ../public/mathlib/vector2d.h:80 */
	bool IsZero(const Vector2D* , float);
	/* ../public/mathlib/vector2d.h:83 */
	vec_t NormalizeInPlace(Vector2D* );
	/* ../public/mathlib/vector2d.h:86 */
	vec_t NormalizeInPlaceSafe(Vector2D* , const Vector2D& );
	/* ../public/mathlib/vector2d.h:89 */
	Vector2D Normalized(const Vector2D* );
	/* ../public/mathlib/vector2d.h:92 */
	Vector2D NormalizedSafe(const Vector2D* , const Vector2D& );
	/* ../public/mathlib/vector2d.h:95 */
	bool IsLengthGreaterThan(const Vector2D* , float);
	/* ../public/mathlib/vector2d.h:96 */
	bool IsLengthLessThan(const Vector2D* , float);
	/* ../public/mathlib/vector2d.h:99 */
	vec_t DistTo(const Vector2D* , const Vector2D& );
	/* ../public/mathlib/vector2d.h:102 */
	vec_t DistToSqr(const Vector2D* , const Vector2D& );
	/* ../public/mathlib/vector2d.h:105 */
	float LargestComponentValue(const Vector2D* );
	/* ../public/mathlib/vector2d.h:113 */
	void CopyToArray(const Vector2D* , float* );
	/* ../public/mathlib/vector2d.h:118 */
	void MulAdd(Vector2D* , const Vector2D& , const Vector2D& , float);
	/* ../public/mathlib/vector2d.h:121 */
	vec_t Dot(const Vector2D* , const Vector2D& );
	/* ../public/mathlib/vector2d.h:124 */
	void Vector2D(Vector2D* , const Vector2D& );
	/* ../public/mathlib/vector2d.h:127 */
	Vector2D operator-(const Vector2D* );
	/* ../public/mathlib/vector2d.h:129 */
	Vector2D operator+(const Vector2D* , const Vector2D& );
	/* ../public/mathlib/vector2d.h:130 */
	Vector2D operator-(const Vector2D* , const Vector2D& );
	/* ../public/mathlib/vector2d.h:131 */
	Vector2D operator*(const Vector2D* , const Vector2D& );
	/* ../public/mathlib/vector2d.h:132 */
	Vector2D operator/(const Vector2D* , const Vector2D& );
	/* ../public/mathlib/vector2d.h:133 */
	Vector2D operator*(const Vector2D* , float);
	/* ../public/mathlib/vector2d.h:134 */
	Vector2D operator/(const Vector2D* , float);
	/* ../public/mathlib/vector2d.h:137 */
	Vector2D Cross(const Vector2D* , const Vector2D& );
	/* ../public/mathlib/vector2d.h:140 */
	Vector2D Min(const Vector2D* , const Vector2D& );
	/* ../public/mathlib/vector2d.h:141 */
	Vector2D Max(const Vector2D* , const Vector2D& );
	void Vector2D(class Vector2D *); /* linkage=_ZN8Vector2DC4Ev */
	void Vector2D(class Vector2D *, vec_t, vec_t); /* linkage=_ZN8Vector2DC4Eff */
	void Vector2D(class Vector2D *, const float  *); /* linkage=_ZN8Vector2DC4EPKf */
	void Init(class Vector2D *, vec_t, vec_t); /* linkage=_ZN8Vector2D4InitEff */
	void Zero(class Vector2D *); /* linkage=_ZN8Vector2D4ZeroEv */
	class Vector2D & operator=(class Vector2D *, const class Vector2D  &); /* linkage=_ZN8Vector2DaSERKS_ */
	bool IsValid(const class Vector2D  *); /* linkage=_ZNK8Vector2D7IsValidEv */
	vec_t operator[](const class Vector2D  *, int); /* linkage=_ZNK8Vector2DixEi */
	vec_t & operator[](class Vector2D *, int); /* linkage=_ZN8Vector2DixEi */
	vec_t * Base(class Vector2D *); /* linkage=_ZN8Vector2D4BaseEv */
	const vec_t  * Base(const class Vector2D  *); /* linkage=_ZNK8Vector2D4BaseEv */
	void Random(class Vector2D *, float, float); /* linkage=_ZN8Vector2D6RandomEff */
	bool operator==(const class Vector2D  *, const class Vector2D  &); /* linkage=_ZNK8Vector2DeqERKS_ */
	bool operator!=(const class Vector2D  *, const class Vector2D  &); /* linkage=_ZNK8Vector2DneERKS_ */
	class Vector2D & operator+=(class Vector2D *, const class Vector2D  &); /* linkage=_ZN8Vector2DpLERKS_ */
	class Vector2D & operator-=(class Vector2D *, const class Vector2D  &); /* linkage=_ZN8Vector2DmIERKS_ */
	class Vector2D & operator*=(class Vector2D *, const class Vector2D  &); /* linkage=_ZN8Vector2DmLERKS_ */
	class Vector2D & operator*=(class Vector2D *, float); /* linkage=_ZN8Vector2DmLEf */
	class Vector2D & operator/=(class Vector2D *, const class Vector2D  &); /* linkage=_ZN8Vector2DdVERKS_ */
	class Vector2D & operator/=(class Vector2D *, float); /* linkage=_ZN8Vector2DdVEf */
	void Negate(class Vector2D *); /* linkage=_ZN8Vector2D6NegateEv */
	vec_t Length(const class Vector2D  *); /* linkage=_ZNK8Vector2D6LengthEv */
	vec_t LengthSqr(const class Vector2D  *); /* linkage=_ZNK8Vector2D9LengthSqrEv */
	bool IsZero(const class Vector2D  *, float); /* linkage=_ZNK8Vector2D6IsZeroEf */
	vec_t NormalizeInPlace(class Vector2D *); /* linkage=_ZN8Vector2D16NormalizeInPlaceEv */
	vec_t NormalizeInPlaceSafe(class Vector2D *, const class Vector2D  &); /* linkage=_ZN8Vector2D20NormalizeInPlaceSafeERKS_ */
	class Vector2D Normalized(const class Vector2D  *); /* linkage=_ZNK8Vector2D10NormalizedEv */
	class Vector2D NormalizedSafe(const class Vector2D  *, const class Vector2D  &); /* linkage=_ZNK8Vector2D14NormalizedSafeERKS_ */
	bool IsLengthGreaterThan(const class Vector2D  *, float); /* linkage=_ZNK8Vector2D19IsLengthGreaterThanEf */
	bool IsLengthLessThan(const class Vector2D  *, float); /* linkage=_ZNK8Vector2D16IsLengthLessThanEf */
	vec_t DistTo(const class Vector2D  *, const class Vector2D  &); /* linkage=_ZNK8Vector2D6DistToERKS_ */
	vec_t DistToSqr(const class Vector2D  *, const class Vector2D  &); /* linkage=_ZNK8Vector2D9DistToSqrERKS_ */
	float LargestComponentValue(const class Vector2D  *); /* linkage=_ZNK8Vector2D21LargestComponentValueEv */
	void CopyToArray(const class Vector2D  *, float *); /* linkage=_ZNK8Vector2D11CopyToArrayEPf */
	void MulAdd(class Vector2D *, const class Vector2D  &, const class Vector2D  &, float); /* linkage=_ZN8Vector2D6MulAddERKS_S1_f */
	vec_t Dot(const class Vector2D  *, const class Vector2D  &); /* linkage=_ZNK8Vector2D3DotERKS_ */
	void Vector2D(class Vector2D *, const class Vector2D  &); /* linkage=_ZN8Vector2DC4ERKS_ */
	class Vector2D operator-(const class Vector2D  *); /* linkage=_ZNK8Vector2DngEv */
	class Vector2D operator+(const class Vector2D  *, const class Vector2D  &); /* linkage=_ZNK8Vector2DplERKS_ */
	class Vector2D operator-(const class Vector2D  *, const class Vector2D  &); /* linkage=_ZNK8Vector2DmiERKS_ */
	class Vector2D operator*(const class Vector2D  *, const class Vector2D  &); /* linkage=_ZNK8Vector2DmlERKS_ */
	class Vector2D operator/(const class Vector2D  *, const class Vector2D  &); /* linkage=_ZNK8Vector2DdvERKS_ */
	class Vector2D operator*(const class Vector2D  *, float); /* linkage=_ZNK8Vector2DmlEf */
	class Vector2D operator/(const class Vector2D  *, float); /* linkage=_ZNK8Vector2DdvEf */
	class Vector2D Cross(const class Vector2D  *, const class Vector2D  &); /* linkage=_ZNK8Vector2D5CrossERKS_ */
	class Vector2D Min(const class Vector2D  *, const class Vector2D  &); /* linkage=_ZNK8Vector2D3MinERKS_ */
	class Vector2D Max(const class Vector2D  *, const class Vector2D  &); /* linkage=_ZNK8Vector2D3MaxERKS_ */
};

// <0000C1C0> ../../public/mathlib/vector2d.h:22
// member functions: 94
// member variables: 2
// static member variables: 2
// class size: 8
class Vector2D {
	static const class Vector2D vZero; /* 0 0 */
	static const class Vector2D vOne; /* 0 0 */
	vec_t x; /* 0 4 */
	vec_t y; /* 4 4 */
	/* ../../public/mathlib/vector2d.h:32 */
	void Vector2D(Vector2D* );
	/* ../../public/mathlib/vector2d.h:33 */
	void Vector2D(Vector2D* , vec_t, vec_t);
	/* ../../public/mathlib/vector2d.h:34 */
	void Vector2D(Vector2D* , const float* );
	/* ../../public/mathlib/vector2d.h:37 */
	void Init(Vector2D* , vec_t, vec_t);
	/* ../../public/mathlib/vector2d.h:39 */
	void Zero(Vector2D* );
	/* ../../public/mathlib/vector2d.h:42 */
	Vector2D& operator=(Vector2D* , const Vector2D& );
	/* ../../public/mathlib/vector2d.h:45 */
	bool IsValid(const Vector2D* );
	/* ../../public/mathlib/vector2d.h:48 */
	vec_t operator[](const Vector2D* , int);
	/* ../../public/mathlib/vector2d.h:49 */
	vec_t& operator[](Vector2D* , int);
	/* ../../public/mathlib/vector2d.h:52 */
	vec_t* Base(Vector2D* );
	/* ../../public/mathlib/vector2d.h:53 */
	const vec_t* Base(const Vector2D* );
	/* ../../public/mathlib/vector2d.h:56 */
	void Random(Vector2D* , float, float);
	/* ../../public/mathlib/vector2d.h:59 */
	bool operator==(const Vector2D* , const Vector2D& );
	/* ../../public/mathlib/vector2d.h:60 */
	bool operator!=(const Vector2D* , const Vector2D& );
	/* ../../public/mathlib/vector2d.h:63 */
	Vector2D& operator+=(Vector2D* , const Vector2D& );
	/* ../../public/mathlib/vector2d.h:64 */
	Vector2D& operator-=(Vector2D* , const Vector2D& );
	/* ../../public/mathlib/vector2d.h:65 */
	Vector2D& operator*=(Vector2D* , const Vector2D& );
	/* ../../public/mathlib/vector2d.h:66 */
	Vector2D& operator*=(Vector2D* , float);
	/* ../../public/mathlib/vector2d.h:67 */
	Vector2D& operator/=(Vector2D* , const Vector2D& );
	/* ../../public/mathlib/vector2d.h:68 */
	Vector2D& operator/=(Vector2D* , float);
	/* ../../public/mathlib/vector2d.h:71 */
	void Negate(Vector2D* );
	/* ../../public/mathlib/vector2d.h:74 */
	vec_t Length(const Vector2D* );
	/* ../../public/mathlib/vector2d.h:77 */
	vec_t LengthSqr(const Vector2D* );
	/* ../../public/mathlib/vector2d.h:80 */
	bool IsZero(const Vector2D* , float);
	/* ../../public/mathlib/vector2d.h:83 */
	vec_t NormalizeInPlace(Vector2D* );
	/* ../../public/mathlib/vector2d.h:86 */
	vec_t NormalizeInPlaceSafe(Vector2D* , const Vector2D& );
	/* ../../public/mathlib/vector2d.h:89 */
	Vector2D Normalized(const Vector2D* );
	/* ../../public/mathlib/vector2d.h:92 */
	Vector2D NormalizedSafe(const Vector2D* , const Vector2D& );
	/* ../../public/mathlib/vector2d.h:95 */
	bool IsLengthGreaterThan(const Vector2D* , float);
	/* ../../public/mathlib/vector2d.h:96 */
	bool IsLengthLessThan(const Vector2D* , float);
	/* ../../public/mathlib/vector2d.h:99 */
	vec_t DistTo(const Vector2D* , const Vector2D& );
	/* ../../public/mathlib/vector2d.h:102 */
	vec_t DistToSqr(const Vector2D* , const Vector2D& );
	/* ../../public/mathlib/vector2d.h:105 */
	float LargestComponentValue(const Vector2D* );
	/* ../../public/mathlib/vector2d.h:113 */
	void CopyToArray(const Vector2D* , float* );
	/* ../../public/mathlib/vector2d.h:118 */
	void MulAdd(Vector2D* , const Vector2D& , const Vector2D& , float);
	/* ../../public/mathlib/vector2d.h:121 */
	vec_t Dot(const Vector2D* , const Vector2D& );
	/* ../../public/mathlib/vector2d.h:124 */
	void Vector2D(Vector2D* , const Vector2D& );
	/* ../../public/mathlib/vector2d.h:127 */
	Vector2D operator-(const Vector2D* );
	/* ../../public/mathlib/vector2d.h:129 */
	Vector2D operator+(const Vector2D* , const Vector2D& );
	/* ../../public/mathlib/vector2d.h:130 */
	Vector2D operator-(const Vector2D* , const Vector2D& );
	/* ../../public/mathlib/vector2d.h:131 */
	Vector2D operator*(const Vector2D* , const Vector2D& );
	/* ../../public/mathlib/vector2d.h:132 */
	Vector2D operator/(const Vector2D* , const Vector2D& );
	/* ../../public/mathlib/vector2d.h:133 */
	Vector2D operator*(const Vector2D* , float);
	/* ../../public/mathlib/vector2d.h:134 */
	Vector2D operator/(const Vector2D* , float);
	/* ../../public/mathlib/vector2d.h:137 */
	Vector2D Cross(const Vector2D* , const Vector2D& );
	/* ../../public/mathlib/vector2d.h:140 */
	Vector2D Min(const Vector2D* , const Vector2D& );
	/* ../../public/mathlib/vector2d.h:141 */
	Vector2D Max(const Vector2D* , const Vector2D& );
	void Vector2D(class Vector2D *); /* linkage=_ZN8Vector2DC4Ev */
	void Vector2D(class Vector2D *, vec_t, vec_t); /* linkage=_ZN8Vector2DC4Eff */
	void Vector2D(class Vector2D *, const float  *); /* linkage=_ZN8Vector2DC4EPKf */
	void Init(class Vector2D *, vec_t, vec_t); /* linkage=_ZN8Vector2D4InitEff */
	void Zero(class Vector2D *); /* linkage=_ZN8Vector2D4ZeroEv */
	class Vector2D & operator=(class Vector2D *, const class Vector2D  &); /* linkage=_ZN8Vector2DaSERKS_ */
	bool IsValid(const class Vector2D  *); /* linkage=_ZNK8Vector2D7IsValidEv */
	vec_t operator[](const class Vector2D  *, int); /* linkage=_ZNK8Vector2DixEi */
	vec_t & operator[](class Vector2D *, int); /* linkage=_ZN8Vector2DixEi */
	vec_t * Base(class Vector2D *); /* linkage=_ZN8Vector2D4BaseEv */
	const vec_t  * Base(const class Vector2D  *); /* linkage=_ZNK8Vector2D4BaseEv */
	void Random(class Vector2D *, float, float); /* linkage=_ZN8Vector2D6RandomEff */
	bool operator==(const class Vector2D  *, const class Vector2D  &); /* linkage=_ZNK8Vector2DeqERKS_ */
	bool operator!=(const class Vector2D  *, const class Vector2D  &); /* linkage=_ZNK8Vector2DneERKS_ */
	class Vector2D & operator+=(class Vector2D *, const class Vector2D  &); /* linkage=_ZN8Vector2DpLERKS_ */
	class Vector2D & operator-=(class Vector2D *, const class Vector2D  &); /* linkage=_ZN8Vector2DmIERKS_ */
	class Vector2D & operator*=(class Vector2D *, const class Vector2D  &); /* linkage=_ZN8Vector2DmLERKS_ */
	class Vector2D & operator*=(class Vector2D *, float); /* linkage=_ZN8Vector2DmLEf */
	class Vector2D & operator/=(class Vector2D *, const class Vector2D  &); /* linkage=_ZN8Vector2DdVERKS_ */
	class Vector2D & operator/=(class Vector2D *, float); /* linkage=_ZN8Vector2DdVEf */
	void Negate(class Vector2D *); /* linkage=_ZN8Vector2D6NegateEv */
	vec_t Length(const class Vector2D  *); /* linkage=_ZNK8Vector2D6LengthEv */
	vec_t LengthSqr(const class Vector2D  *); /* linkage=_ZNK8Vector2D9LengthSqrEv */
	bool IsZero(const class Vector2D  *, float); /* linkage=_ZNK8Vector2D6IsZeroEf */
	vec_t NormalizeInPlace(class Vector2D *); /* linkage=_ZN8Vector2D16NormalizeInPlaceEv */
	vec_t NormalizeInPlaceSafe(class Vector2D *, const class Vector2D  &); /* linkage=_ZN8Vector2D20NormalizeInPlaceSafeERKS_ */
	class Vector2D Normalized(const class Vector2D  *); /* linkage=_ZNK8Vector2D10NormalizedEv */
	class Vector2D NormalizedSafe(const class Vector2D  *, const class Vector2D  &); /* linkage=_ZNK8Vector2D14NormalizedSafeERKS_ */
	bool IsLengthGreaterThan(const class Vector2D  *, float); /* linkage=_ZNK8Vector2D19IsLengthGreaterThanEf */
	bool IsLengthLessThan(const class Vector2D  *, float); /* linkage=_ZNK8Vector2D16IsLengthLessThanEf */
	vec_t DistTo(const class Vector2D  *, const class Vector2D  &); /* linkage=_ZNK8Vector2D6DistToERKS_ */
	vec_t DistToSqr(const class Vector2D  *, const class Vector2D  &); /* linkage=_ZNK8Vector2D9DistToSqrERKS_ */
	float LargestComponentValue(const class Vector2D  *); /* linkage=_ZNK8Vector2D21LargestComponentValueEv */
	void CopyToArray(const class Vector2D  *, float *); /* linkage=_ZNK8Vector2D11CopyToArrayEPf */
	void MulAdd(class Vector2D *, const class Vector2D  &, const class Vector2D  &, float); /* linkage=_ZN8Vector2D6MulAddERKS_S1_f */
	vec_t Dot(const class Vector2D  *, const class Vector2D  &); /* linkage=_ZNK8Vector2D3DotERKS_ */
	void Vector2D(class Vector2D *, const class Vector2D  &); /* linkage=_ZN8Vector2DC4ERKS_ */
	class Vector2D operator-(const class Vector2D  *); /* linkage=_ZNK8Vector2DngEv */
	class Vector2D operator+(const class Vector2D  *, const class Vector2D  &); /* linkage=_ZNK8Vector2DplERKS_ */
	class Vector2D operator-(const class Vector2D  *, const class Vector2D  &); /* linkage=_ZNK8Vector2DmiERKS_ */
	class Vector2D operator*(const class Vector2D  *, const class Vector2D  &); /* linkage=_ZNK8Vector2DmlERKS_ */
	class Vector2D operator/(const class Vector2D  *, const class Vector2D  &); /* linkage=_ZNK8Vector2DdvERKS_ */
	class Vector2D operator*(const class Vector2D  *, float); /* linkage=_ZNK8Vector2DmlEf */
	class Vector2D operator/(const class Vector2D  *, float); /* linkage=_ZNK8Vector2DdvEf */
	class Vector2D Cross(const class Vector2D  *, const class Vector2D  &); /* linkage=_ZNK8Vector2D5CrossERKS_ */
	class Vector2D Min(const class Vector2D  *, const class Vector2D  &); /* linkage=_ZNK8Vector2D3MinERKS_ */
	class Vector2D Max(const class Vector2D  *, const class Vector2D  &); /* linkage=_ZNK8Vector2D3MaxERKS_ */
};

// <06D52760> ../../public/mathlib/vector2d.h:200
void Vector2D::Vector2D()
{
} /* size: 0 */

// <06D52744> ../../public/mathlib/vector2d.h:200
inline void Vector2D::Vector2D()
{
} /* size: 0 */

// <06F38AAD> ../public/mathlib/vector2d.h:208
void Vector2D::Vector2D(vec_t X, vec_t Y)
{
} /* size: 0 */

// <06F38A7D> ../public/mathlib/vector2d.h:208
inline void Vector2D::Vector2D(vec_t X, vec_t Y)
{
} /* size: 0 */

// <063540C0> ../public/mathlib/vector2d.h:226
void Vector2D::Vector2D(const Vector2D& vOther)
{
} /* size: 0 */

// <06354098> ../public/mathlib/vector2d.h:226
inline void Vector2D::Vector2D(const Vector2D& vOther)
{
} /* size: 0 */

// <06470D1F> ../public/mathlib/vector2d.h:236
inline void Vector2D::Init(vec_t ix, vec_t iy)
{
} /* size: 0 */

// <067E15F1> ../public/mathlib/vector2d.h:257
inline void Vector2D::operator=(const Vector2D& vOther)
{
} /* size: 0 */

// <067E1587> ../public/mathlib/vector2d.h:286
inline void Vector2D::Base()
{
} /* size: 0 */

// <05CB5632> ../public/mathlib/vector2d.h:300
inline void Vector2D::IsValid()
{
} /* size: 0 */

// <00A62125> ../public/mathlib/vector2d.h:314
inline void Vector2D::operator==(const Vector2D& src)
{
} /* size: 0 */

// <061D6137> ../public/mathlib/vector2d.h:339
inline void Vector2D::CopyToArray(float* rgfl)
{
} /* size: 0 */

// <00E88F7C> ../public/mathlib/vector2d.h:356
inline void Vector2D::operator+=(const Vector2D& v)
{
} /* size: 0 */

// <05D0117E> ../public/mathlib/vector2d.h:363
inline void Vector2D::operator-=(const Vector2D& v)
{
} /* size: 0 */

// <05D01157> ../public/mathlib/vector2d.h:378
inline void Vector2D::operator*=(const Vector2D& v)
{
} /* size: 0 */

// <05D01122> ../public/mathlib/vector2d.h:386
// variable: 1
inline void Vector2D::operator/=(float fl)
{
	float oofl; // 389
} /* size: 0, variables: 1 */

// <0318259C> ../public/mathlib/vector2d.h:405
inline void Vector2DAdd(const Vector2D& a, const Vector2D& b, Vector2D& c)
{
} /* size: 0 */

// <03182567> ../public/mathlib/vector2d.h:412
inline void Vector2DSubtract(const Vector2D& a, const Vector2D& b, Vector2D& c)
{
} /* size: 0 */

// <0596C2C0> ../../public/mathlib/vector2d.h:419
inline void Vector2DMultiply(const Vector2D& a, vec_t b, Vector2D& c)
{
} /* size: 0 */

// <05D01019> ../public/mathlib/vector2d.h:443
inline void Vector2DDivide(const Vector2D& a, const Vector2D& b, Vector2D& c)
{
} /* size: 0 */

// <0596C27A> ../../public/mathlib/vector2d.h:451
inline void Vector2DMA(const Vector2D& start, float s, const Vector2D& dir, Vector2D& result)
{
} /* size: 0 */

// <059DA219> ../public/mathlib/vector2d.h:460
inline void Vector2D::MulAdd(const Vector2D& a, const Vector2D& b, float scalar)
{
} /* size: 0 */

// <0596C234> ../../public/mathlib/vector2d.h:466
inline void Vector2DLerp(const Vector2D& src1, const Vector2D& src2, vec_t t, Vector2D& dest)
{
} /* size: 0 */

// <0596C206> ../../public/mathlib/vector2d.h:475
inline vec_t DotProduct2D(const Vector2D& a, const Vector2D& b)
{
} /* size: 0 */

// <05D00FC2> ../public/mathlib/vector2d.h:482
inline void Vector2D::Dot(const Vector2D& vOther)
{
} /* size: 0 */

// <059DA19F> ../public/mathlib/vector2d.h:495
inline vec_t Vector2DLength(const Vector2D& v)
{
} /* size: 0 */

// <060E257A> ../public/mathlib/vector2d.h:501
inline void Vector2D::LengthSqr()
{
} /* size: 0 */

// <05D00F67> ../public/mathlib/vector2d.h:513
inline void Vector2D::NormalizeInPlace()
{
} /* size: 0 */

// <05D00F3E> ../public/mathlib/vector2d.h:528
// variable: 1
inline void Vector2D::Normalized()
{
	Vector2D vNorm; // 530
} /* size: 0, variables: 1 */

// <0186559A> ../public/mathlib/vector2d.h:552
inline void Vector2D::Length()
{
} /* size: 0 */

// <03182514> ../public/mathlib/vector2d.h:565
inline void Vector2DMax(const Vector2D& a, const Vector2D& b, Vector2D& result)
{
} /* size: 0 */

// <05D00EF4> ../public/mathlib/vector2d.h:581
// variable: 1
inline vec_t Vector2DNormalize(Vector2D& v)
{
	vec_t l; // 584
} /* size: 0, variables: 1 */

// <05D00EBE> ../public/mathlib/vector2d.h:600
// variable: 1
inline void Vector2D::DistTo(const Vector2D& vOther)
{
	Vector2D delta; // 602
} /* size: 0, variables: 1 */

// <05D00E88> ../public/mathlib/vector2d.h:607
// variable: 1
inline void Vector2D::DistToSqr(const Vector2D& vOther)
{
	Vector2D delta; // 609
} /* size: 0, variables: 1 */

// <05A910A4> ../public/mathlib/vector2d.h:638
inline Vector2D Vector2DMin(const Vector2D& a, const Vector2D& b)
{
} /* size: 0 */

// <0353524F> ../public/mathlib/vector2d.h:647
inline Vector2D Vector2DMax(const Vector2D& a, const Vector2D& b)
{
} /* size: 0 */

// <05D00E5F> ../public/mathlib/vector2d.h:663
inline void Vector2D::Min(const Vector2D& vOther)
{
} /* size: 0 */

// <05D00E36> ../public/mathlib/vector2d.h:669
inline void Vector2D::Max(const Vector2D& vOther)
{
} /* size: 0 */

// <0353521B> ../public/mathlib/vector2d.h:685
// variable: 1
inline void Vector2D::operator+(const Vector2D& v)
{
	Vector2D res; // 687
} /* size: 0, variables: 1 */

// <05D00D31> ../public/mathlib/vector2d.h:720
// variable: 1
inline void Vector2D::operator/(const Vector2D& v)
{
	Vector2D res; // 722
} /* size: 0, variables: 1 */

