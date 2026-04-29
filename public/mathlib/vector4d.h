
//
// public/mathlib/vector4d.h
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
//	functions: 39
//	classes: 2
//

// <00028FFC> ../public/mathlib/vector4d.h:27
// member functions: 96
// member variables: 4
// class size: 16
class Vector4D {
	vec_t x; /* 0 4 */
	vec_t y; /* 4 4 */
	vec_t z; /* 8 4 */
	vec_t w; /* 12 4 */
	/* ../public/mathlib/vector4d.h:34 */
	void Vector4D(Vector4D* );
	/* ../public/mathlib/vector4d.h:35 */
	void Vector4D(Vector4D* , vec_t, vec_t, vec_t, vec_t);
	/* ../public/mathlib/vector4d.h:36 */
	void Vector4D(Vector4D* , const Vector& , vec_t);
	/* ../public/mathlib/vector4d.h:37 */
	void Vector4D(Vector4D* , const float* );
	/* ../public/mathlib/vector4d.h:40 */
	void Init(Vector4D* , vec_t, vec_t, vec_t, vec_t);
	/* ../public/mathlib/vector4d.h:41 */
	void Init(Vector4D* , const Vector& , vec_t);
	/* ../public/mathlib/vector4d.h:44 */
	bool IsValid(const Vector4D* );
	/* ../public/mathlib/vector4d.h:47 */
	vec_t operator[](const Vector4D* , int);
	/* ../public/mathlib/vector4d.h:48 */
	vec_t& operator[](Vector4D* , int);
	/* ../public/mathlib/vector4d.h:51 */
	vec_t* Base(Vector4D* );
	/* ../public/mathlib/vector4d.h:52 */
	const vec_t* Base(const Vector4D* );
	/* ../public/mathlib/vector4d.h:55 */
	Vector& AsVector3D(Vector4D* );
	/* ../public/mathlib/vector4d.h:56 */
	const Vector& AsVector3D(const Vector4D* );
	/* ../public/mathlib/vector4d.h:58 */
	Vector2D& AsVector2D(Vector4D* );
	/* ../public/mathlib/vector4d.h:59 */
	const Vector2D& AsVector2D(const Vector4D* );
	/* ../public/mathlib/vector4d.h:62 */
	void Random(Vector4D* , vec_t, vec_t);
	/* ../public/mathlib/vector4d.h:65 */
	bool operator==(const Vector4D* , const Vector4D& );
	/* ../public/mathlib/vector4d.h:66 */
	bool operator!=(const Vector4D* , const Vector4D& );
	/* ../public/mathlib/vector4d.h:69 */
	Vector4D& operator+=(Vector4D* , const Vector4D& );
	/* ../public/mathlib/vector4d.h:70 */
	Vector4D& operator-=(Vector4D* , const Vector4D& );
	/* ../public/mathlib/vector4d.h:71 */
	Vector4D& operator*=(Vector4D* , const Vector4D& );
	/* ../public/mathlib/vector4d.h:72 */
	Vector4D& operator*=(Vector4D* , float);
	/* ../public/mathlib/vector4d.h:73 */
	Vector4D& operator/=(Vector4D* , const Vector4D& );
	/* ../public/mathlib/vector4d.h:74 */
	Vector4D& operator/=(Vector4D* , float);
	/* ../public/mathlib/vector4d.h:76 */
	Vector4D operator-(const Vector4D* );
	/* ../public/mathlib/vector4d.h:77 */
	Vector4D operator*(const Vector4D* , float);
	/* ../public/mathlib/vector4d.h:78 */
	Vector4D operator/(const Vector4D* , float);
	/* ../public/mathlib/vector4d.h:79 */
	Vector4D operator*(const Vector4D* , const Vector4D& );
	/* ../public/mathlib/vector4d.h:80 */
	Vector4D operator+(const Vector4D* , const Vector4D& );
	/* ../public/mathlib/vector4d.h:81 */
	Vector4D operator-(const Vector4D* , const Vector4D& );
	/* ../public/mathlib/vector4d.h:84 */
	void Negate(Vector4D* );
	/* ../public/mathlib/vector4d.h:87 */
	vec_t Length(const Vector4D* );
	/* ../public/mathlib/vector4d.h:90 */
	vec_t LengthSqr(const Vector4D* );
	/* ../public/mathlib/vector4d.h:93 */
	bool IsZero(const Vector4D* , float);
	/* ../public/mathlib/vector4d.h:102 */
	vec_t DistTo(const Vector4D* , const Vector4D& );
	/* ../public/mathlib/vector4d.h:105 */
	vec_t DistToSqr(const Vector4D* , const Vector4D& );
	/* ../public/mathlib/vector4d.h:108 */
	void CopyToArray(const Vector4D* , float* );
	/* ../public/mathlib/vector4d.h:113 */
	void MulAdd(Vector4D* , const Vector4D& , const Vector4D& , float);
	/* ../public/mathlib/vector4d.h:116 */
	vec_t Dot(const Vector4D* , const Vector4D& );
	/* ../public/mathlib/vector4d.h:119 */
	float Element(const Vector4D* , int, int);
	/* ../public/mathlib/vector4d.h:125 */
	void SetElement(Vector4D* , int, int, float);
	/* ../public/mathlib/vector4d.h:131 */
	int Width(Vector4D* );
	/* ../public/mathlib/vector4d.h:132 */
	int Height(Vector4D* );
	/* ../public/mathlib/vector4d.h:133 */
	void SetDimensions(Vector4D* , int, int);
	/* ../public/mathlib/vector4d.h:136 */
	void Vector4D(Vector4D* , const Vector4D& );
	/* ../public/mathlib/vector4d.h:139 */
	Vector4D& operator=(Vector4D* , const Vector4D& );
	void Vector4D(class Vector4D *); /* linkage=_ZN8Vector4DC4Ev */
	void Vector4D(class Vector4D *, vec_t, vec_t, vec_t, vec_t); /* linkage=_ZN8Vector4DC4Effff */
	void Vector4D(class Vector4D *, const class Vector  &, vec_t); /* linkage=_ZN8Vector4DC4ERK6Vectorf */
	void Vector4D(class Vector4D *, const float  *); /* linkage=_ZN8Vector4DC4EPKf */
	void Init(class Vector4D *, vec_t, vec_t, vec_t, vec_t); /* linkage=_ZN8Vector4D4InitEffff */
	void Init(class Vector4D *, const class Vector  &, vec_t); /* linkage=_ZN8Vector4D4InitERK6Vectorf */
	bool IsValid(const class Vector4D  *); /* linkage=_ZNK8Vector4D7IsValidEv */
	vec_t operator[](const class Vector4D  *, int); /* linkage=_ZNK8Vector4DixEi */
	vec_t & operator[](class Vector4D *, int); /* linkage=_ZN8Vector4DixEi */
	vec_t * Base(class Vector4D *); /* linkage=_ZN8Vector4D4BaseEv */
	const vec_t  * Base(const class Vector4D  *); /* linkage=_ZNK8Vector4D4BaseEv */
	class Vector & AsVector3D(class Vector4D *); /* linkage=_ZN8Vector4D10AsVector3DEv */
	const class Vector  & AsVector3D(const class Vector4D  *); /* linkage=_ZNK8Vector4D10AsVector3DEv */
	class Vector2D & AsVector2D(class Vector4D *); /* linkage=_ZN8Vector4D10AsVector2DEv */
	const class Vector2D  & AsVector2D(const class Vector4D  *); /* linkage=_ZNK8Vector4D10AsVector2DEv */
	void Random(class Vector4D *, vec_t, vec_t); /* linkage=_ZN8Vector4D6RandomEff */
	bool operator==(const class Vector4D  *, const class Vector4D  &); /* linkage=_ZNK8Vector4DeqERKS_ */
	bool operator!=(const class Vector4D  *, const class Vector4D  &); /* linkage=_ZNK8Vector4DneERKS_ */
	class Vector4D & operator+=(class Vector4D *, const class Vector4D  &); /* linkage=_ZN8Vector4DpLERKS_ */
	class Vector4D & operator-=(class Vector4D *, const class Vector4D  &); /* linkage=_ZN8Vector4DmIERKS_ */
	class Vector4D & operator*=(class Vector4D *, const class Vector4D  &); /* linkage=_ZN8Vector4DmLERKS_ */
	class Vector4D & operator*=(class Vector4D *, float); /* linkage=_ZN8Vector4DmLEf */
	class Vector4D & operator/=(class Vector4D *, const class Vector4D  &); /* linkage=_ZN8Vector4DdVERKS_ */
	class Vector4D & operator/=(class Vector4D *, float); /* linkage=_ZN8Vector4DdVEf */
	class Vector4D operator-(const class Vector4D  *); /* linkage=_ZNK8Vector4DngEv */
	class Vector4D operator*(const class Vector4D  *, float); /* linkage=_ZNK8Vector4DmlEf */
	class Vector4D operator/(const class Vector4D  *, float); /* linkage=_ZNK8Vector4DdvEf */
	class Vector4D operator*(const class Vector4D  *, const class Vector4D  &); /* linkage=_ZNK8Vector4DmlERKS_ */
	class Vector4D operator+(const class Vector4D  *, const class Vector4D  &); /* linkage=_ZNK8Vector4DplERKS_ */
	class Vector4D operator-(const class Vector4D  *, const class Vector4D  &); /* linkage=_ZNK8Vector4DmiERKS_ */
	void Negate(class Vector4D *); /* linkage=_ZN8Vector4D6NegateEv */
	vec_t Length(const class Vector4D  *); /* linkage=_ZNK8Vector4D6LengthEv */
	vec_t LengthSqr(const class Vector4D  *); /* linkage=_ZNK8Vector4D9LengthSqrEv */
	bool IsZero(const class Vector4D  *, float); /* linkage=_ZNK8Vector4D6IsZeroEf */
	vec_t DistTo(const class Vector4D  *, const class Vector4D  &); /* linkage=_ZNK8Vector4D6DistToERKS_ */
	vec_t DistToSqr(const class Vector4D  *, const class Vector4D  &); /* linkage=_ZNK8Vector4D9DistToSqrERKS_ */
	void CopyToArray(const class Vector4D  *, float *); /* linkage=_ZNK8Vector4D11CopyToArrayEPf */
	void MulAdd(class Vector4D *, const class Vector4D  &, const class Vector4D  &, float); /* linkage=_ZN8Vector4D6MulAddERKS_S1_f */
	vec_t Dot(const class Vector4D  *, const class Vector4D  &); /* linkage=_ZNK8Vector4D3DotERKS_ */
	float Element(const class Vector4D  *, int, int); /* linkage=_ZNK8Vector4D7ElementEii */
	void SetElement(class Vector4D *, int, int, float); /* linkage=_ZN8Vector4D10SetElementEiif */
	int Width(class Vector4D *); /* linkage=_ZN8Vector4D5WidthEv */
	int Height(class Vector4D *); /* linkage=_ZN8Vector4D6HeightEv */
	void SetDimensions(class Vector4D *, int, int); /* linkage=_ZN8Vector4D13SetDimensionsEii */
	void Vector4D(class Vector4D *, const class Vector4D  &); /* linkage=_ZN8Vector4DC4ERKS_ */
	class Vector4D & operator=(class Vector4D *, const class Vector4D  &); /* linkage=_ZN8Vector4DaSERKS_ */
	void Vector4D(class Vector4D *, const class Vector__1  &, vec_t); /* linkage=_ZN8Vector4DC4ERK6Vectorf */
	void Init(class Vector4D *, const class Vector__1  &, vec_t); /* linkage=_ZN8Vector4D4InitERK6Vectorf */
	class Vector__1 & AsVector3D(class Vector4D *); /* linkage=_ZN8Vector4D10AsVector3DEv */
	const class Vector__1  & AsVector3D(const class Vector4D  *); /* linkage=_ZNK8Vector4D10AsVector3DEv */
};

// <0001BF43> ../../public/mathlib/vector4d.h:27
// member functions: 96
// member variables: 4
// class size: 16
class Vector4D {
	vec_t x; /* 0 4 */
	vec_t y; /* 4 4 */
	vec_t z; /* 8 4 */
	vec_t w; /* 12 4 */
	/* ../../public/mathlib/vector4d.h:34 */
	void Vector4D(Vector4D* );
	/* ../../public/mathlib/vector4d.h:35 */
	void Vector4D(Vector4D* , vec_t, vec_t, vec_t, vec_t);
	/* ../../public/mathlib/vector4d.h:36 */
	void Vector4D(Vector4D* , const Vector& , vec_t);
	/* ../../public/mathlib/vector4d.h:37 */
	void Vector4D(Vector4D* , const float* );
	/* ../../public/mathlib/vector4d.h:40 */
	void Init(Vector4D* , vec_t, vec_t, vec_t, vec_t);
	/* ../../public/mathlib/vector4d.h:41 */
	void Init(Vector4D* , const Vector& , vec_t);
	/* ../../public/mathlib/vector4d.h:44 */
	bool IsValid(const Vector4D* );
	/* ../../public/mathlib/vector4d.h:47 */
	vec_t operator[](const Vector4D* , int);
	/* ../../public/mathlib/vector4d.h:48 */
	vec_t& operator[](Vector4D* , int);
	/* ../../public/mathlib/vector4d.h:51 */
	vec_t* Base(Vector4D* );
	/* ../../public/mathlib/vector4d.h:52 */
	const vec_t* Base(const Vector4D* );
	/* ../../public/mathlib/vector4d.h:55 */
	Vector& AsVector3D(Vector4D* );
	/* ../../public/mathlib/vector4d.h:56 */
	const Vector& AsVector3D(const Vector4D* );
	/* ../../public/mathlib/vector4d.h:58 */
	Vector2D& AsVector2D(Vector4D* );
	/* ../../public/mathlib/vector4d.h:59 */
	const Vector2D& AsVector2D(const Vector4D* );
	/* ../../public/mathlib/vector4d.h:62 */
	void Random(Vector4D* , vec_t, vec_t);
	/* ../../public/mathlib/vector4d.h:65 */
	bool operator==(const Vector4D* , const Vector4D& );
	/* ../../public/mathlib/vector4d.h:66 */
	bool operator!=(const Vector4D* , const Vector4D& );
	/* ../../public/mathlib/vector4d.h:69 */
	Vector4D& operator+=(Vector4D* , const Vector4D& );
	/* ../../public/mathlib/vector4d.h:70 */
	Vector4D& operator-=(Vector4D* , const Vector4D& );
	/* ../../public/mathlib/vector4d.h:71 */
	Vector4D& operator*=(Vector4D* , const Vector4D& );
	/* ../../public/mathlib/vector4d.h:72 */
	Vector4D& operator*=(Vector4D* , float);
	/* ../../public/mathlib/vector4d.h:73 */
	Vector4D& operator/=(Vector4D* , const Vector4D& );
	/* ../../public/mathlib/vector4d.h:74 */
	Vector4D& operator/=(Vector4D* , float);
	/* ../../public/mathlib/vector4d.h:76 */
	Vector4D operator-(const Vector4D* );
	/* ../../public/mathlib/vector4d.h:77 */
	Vector4D operator*(const Vector4D* , float);
	/* ../../public/mathlib/vector4d.h:78 */
	Vector4D operator/(const Vector4D* , float);
	/* ../../public/mathlib/vector4d.h:79 */
	Vector4D operator*(const Vector4D* , const Vector4D& );
	/* ../../public/mathlib/vector4d.h:80 */
	Vector4D operator+(const Vector4D* , const Vector4D& );
	/* ../../public/mathlib/vector4d.h:81 */
	Vector4D operator-(const Vector4D* , const Vector4D& );
	/* ../../public/mathlib/vector4d.h:84 */
	void Negate(Vector4D* );
	/* ../../public/mathlib/vector4d.h:87 */
	vec_t Length(const Vector4D* );
	/* ../../public/mathlib/vector4d.h:90 */
	vec_t LengthSqr(const Vector4D* );
	/* ../../public/mathlib/vector4d.h:93 */
	bool IsZero(const Vector4D* , float);
	/* ../../public/mathlib/vector4d.h:102 */
	vec_t DistTo(const Vector4D* , const Vector4D& );
	/* ../../public/mathlib/vector4d.h:105 */
	vec_t DistToSqr(const Vector4D* , const Vector4D& );
	/* ../../public/mathlib/vector4d.h:108 */
	void CopyToArray(const Vector4D* , float* );
	/* ../../public/mathlib/vector4d.h:113 */
	void MulAdd(Vector4D* , const Vector4D& , const Vector4D& , float);
	/* ../../public/mathlib/vector4d.h:116 */
	vec_t Dot(const Vector4D* , const Vector4D& );
	/* ../../public/mathlib/vector4d.h:119 */
	float Element(const Vector4D* , int, int);
	/* ../../public/mathlib/vector4d.h:125 */
	void SetElement(Vector4D* , int, int, float);
	/* ../../public/mathlib/vector4d.h:131 */
	int Width(Vector4D* );
	/* ../../public/mathlib/vector4d.h:132 */
	int Height(Vector4D* );
	/* ../../public/mathlib/vector4d.h:133 */
	void SetDimensions(Vector4D* , int, int);
	/* ../../public/mathlib/vector4d.h:136 */
	void Vector4D(Vector4D* , const Vector4D& );
	/* ../../public/mathlib/vector4d.h:139 */
	Vector4D& operator=(Vector4D* , const Vector4D& );
	void Vector4D(class Vector4D *); /* linkage=_ZN8Vector4DC4Ev */
	void Vector4D(class Vector4D *, vec_t, vec_t, vec_t, vec_t); /* linkage=_ZN8Vector4DC4Effff */
	void Vector4D(class Vector4D *, const class Vector  &, vec_t); /* linkage=_ZN8Vector4DC4ERK6Vectorf */
	void Vector4D(class Vector4D *, const float  *); /* linkage=_ZN8Vector4DC4EPKf */
	void Init(class Vector4D *, vec_t, vec_t, vec_t, vec_t); /* linkage=_ZN8Vector4D4InitEffff */
	void Init(class Vector4D *, const class Vector  &, vec_t); /* linkage=_ZN8Vector4D4InitERK6Vectorf */
	bool IsValid(const class Vector4D  *); /* linkage=_ZNK8Vector4D7IsValidEv */
	vec_t operator[](const class Vector4D  *, int); /* linkage=_ZNK8Vector4DixEi */
	vec_t & operator[](class Vector4D *, int); /* linkage=_ZN8Vector4DixEi */
	vec_t * Base(class Vector4D *); /* linkage=_ZN8Vector4D4BaseEv */
	const vec_t  * Base(const class Vector4D  *); /* linkage=_ZNK8Vector4D4BaseEv */
	class Vector & AsVector3D(class Vector4D *); /* linkage=_ZN8Vector4D10AsVector3DEv */
	const class Vector  & AsVector3D(const class Vector4D  *); /* linkage=_ZNK8Vector4D10AsVector3DEv */
	class Vector2D & AsVector2D(class Vector4D *); /* linkage=_ZN8Vector4D10AsVector2DEv */
	const class Vector2D  & AsVector2D(const class Vector4D  *); /* linkage=_ZNK8Vector4D10AsVector2DEv */
	void Random(class Vector4D *, vec_t, vec_t); /* linkage=_ZN8Vector4D6RandomEff */
	bool operator==(const class Vector4D  *, const class Vector4D  &); /* linkage=_ZNK8Vector4DeqERKS_ */
	bool operator!=(const class Vector4D  *, const class Vector4D  &); /* linkage=_ZNK8Vector4DneERKS_ */
	class Vector4D & operator+=(class Vector4D *, const class Vector4D  &); /* linkage=_ZN8Vector4DpLERKS_ */
	class Vector4D & operator-=(class Vector4D *, const class Vector4D  &); /* linkage=_ZN8Vector4DmIERKS_ */
	class Vector4D & operator*=(class Vector4D *, const class Vector4D  &); /* linkage=_ZN8Vector4DmLERKS_ */
	class Vector4D & operator*=(class Vector4D *, float); /* linkage=_ZN8Vector4DmLEf */
	class Vector4D & operator/=(class Vector4D *, const class Vector4D  &); /* linkage=_ZN8Vector4DdVERKS_ */
	class Vector4D & operator/=(class Vector4D *, float); /* linkage=_ZN8Vector4DdVEf */
	class Vector4D operator-(const class Vector4D  *); /* linkage=_ZNK8Vector4DngEv */
	class Vector4D operator*(const class Vector4D  *, float); /* linkage=_ZNK8Vector4DmlEf */
	class Vector4D operator/(const class Vector4D  *, float); /* linkage=_ZNK8Vector4DdvEf */
	class Vector4D operator*(const class Vector4D  *, const class Vector4D  &); /* linkage=_ZNK8Vector4DmlERKS_ */
	class Vector4D operator+(const class Vector4D  *, const class Vector4D  &); /* linkage=_ZNK8Vector4DplERKS_ */
	class Vector4D operator-(const class Vector4D  *, const class Vector4D  &); /* linkage=_ZNK8Vector4DmiERKS_ */
	void Negate(class Vector4D *); /* linkage=_ZN8Vector4D6NegateEv */
	vec_t Length(const class Vector4D  *); /* linkage=_ZNK8Vector4D6LengthEv */
	vec_t LengthSqr(const class Vector4D  *); /* linkage=_ZNK8Vector4D9LengthSqrEv */
	bool IsZero(const class Vector4D  *, float); /* linkage=_ZNK8Vector4D6IsZeroEf */
	vec_t DistTo(const class Vector4D  *, const class Vector4D  &); /* linkage=_ZNK8Vector4D6DistToERKS_ */
	vec_t DistToSqr(const class Vector4D  *, const class Vector4D  &); /* linkage=_ZNK8Vector4D9DistToSqrERKS_ */
	void CopyToArray(const class Vector4D  *, float *); /* linkage=_ZNK8Vector4D11CopyToArrayEPf */
	void MulAdd(class Vector4D *, const class Vector4D  &, const class Vector4D  &, float); /* linkage=_ZN8Vector4D6MulAddERKS_S1_f */
	vec_t Dot(const class Vector4D  *, const class Vector4D  &); /* linkage=_ZNK8Vector4D3DotERKS_ */
	float Element(const class Vector4D  *, int, int); /* linkage=_ZNK8Vector4D7ElementEii */
	void SetElement(class Vector4D *, int, int, float); /* linkage=_ZN8Vector4D10SetElementEiif */
	int Width(class Vector4D *); /* linkage=_ZN8Vector4D5WidthEv */
	int Height(class Vector4D *); /* linkage=_ZN8Vector4D6HeightEv */
	void SetDimensions(class Vector4D *, int, int); /* linkage=_ZN8Vector4D13SetDimensionsEii */
	void Vector4D(class Vector4D *, const class Vector4D  &); /* linkage=_ZN8Vector4DC4ERKS_ */
	class Vector4D & operator=(class Vector4D *, const class Vector4D  &); /* linkage=_ZN8Vector4DaSERKS_ */
	void Vector4D(class Vector4D *, const class Vector__1  &, vec_t); /* linkage=_ZN8Vector4DC4ERK6Vectorf */
	void Init(class Vector4D *, const class Vector__1  &, vec_t); /* linkage=_ZN8Vector4D4InitERK6Vectorf */
	class Vector__1 & AsVector3D(class Vector4D *); /* linkage=_ZN8Vector4D10AsVector3DEv */
	const class Vector__1  & AsVector3D(const class Vector4D  *); /* linkage=_ZNK8Vector4D10AsVector3DEv */
};

// <06E2AA36> ../../public/mathlib/vector4d.h:202
void Vector4D::Vector4D()
{
} /* size: 0 */

// <06E2AA1A> ../../public/mathlib/vector4d.h:202
inline void Vector4D::Vector4D()
{
} /* size: 0 */

// <06E2A9EF> ../../public/mathlib/vector4d.h:210
void Vector4D::Vector4D(vec_t X, vec_t Y, vec_t Z, vec_t W)
{
} /* size: 0 */

// <06E2A9AB> ../../public/mathlib/vector4d.h:210
inline void Vector4D::Vector4D(vec_t X, vec_t Y, vec_t Z, vec_t W)
{
} /* size: 0 */

// <040275E3> ../public/mathlib/vector4d.h:216
void Vector4D::Vector4D(const Vector& xyz, vec_t W)
{
} /* size: 0 */

// <040275B1> ../public/mathlib/vector4d.h:216
inline void Vector4D::Vector4D(const Vector& xyz, vec_t W)
{
} /* size: 0 */

// <05A7DDCE> ../public/mathlib/vector4d.h:223
void Vector4D::Vector4D(const float* pFloat)
{
	{
		{
		}
	}
} /* size: 0 */

// <05A7DD73> ../public/mathlib/vector4d.h:223
// variables: 2
inline void Vector4D::Vector4D(const float* pFloat)
{
	const char   __FUNCTION__; // 30181
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 225
	}
} /* size: 0, variables: 1 */

// <02F2D9DA> ../public/mathlib/vector4d.h:223
// variables: 2
inline void Vector4D::Vector4D(const float* pFloat)
{
	const char   __FUNCTION__; // 63385
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 225
	}
} /* size: 0, variables: 1 */

// <02C3F9E9> ../public/mathlib/vector4d.h:223
// variables: 2
inline void Vector4D::Vector4D(const float* pFloat)
{
	const char   __FUNCTION__; // 24912
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 225
	}
} /* size: 0, variables: 1 */

// <011EF0CB> ../public/mathlib/vector4d.h:223
// variables: 2
inline void Vector4D::Vector4D(const float* pFloat)
{
	const char   __FUNCTION__; // 28656
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 225
	}
} /* size: 0, variables: 1 */

// <0071FB74> ../public/mathlib/vector4d.h:223
// variables: 2
inline void Vector4D::Vector4D(const float* pFloat)
{
	const char   __FUNCTION__; // 54262
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 225
	}
} /* size: 0, variables: 1 */

// <008EDE4A> ../public/mathlib/vector4d.h:223
// variables: 2
inline void Vector4D::Vector4D(const float* pFloat)
{
	const char   __FUNCTION__; // 33569
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 225
	}
} /* size: 0, variables: 1 */

// <008A0B58> ../public/mathlib/vector4d.h:223
// variables: 2
inline void Vector4D::Vector4D(const float* pFloat)
{
	const char   __FUNCTION__; // 5546
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 225
	}
} /* size: 0, variables: 1 */

// <0030DFF5> ../public/mathlib/vector4d.h:223
// variables: 2
inline void Vector4D::Vector4D(const float* pFloat)
{
	const char   __FUNCTION__; // 8290
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 225
	}
} /* size: 0, variables: 1 */

// <06A760BC> ../public/mathlib/vector4d.h:235
void Vector4D::Vector4D(const Vector4D& vOther)
{
} /* size: 0 */

// <06A76094> ../public/mathlib/vector4d.h:235
inline void Vector4D::Vector4D(const Vector4D& vOther)
{
} /* size: 0 */

// <06A7604C> ../public/mathlib/vector4d.h:244
inline void Vector4D::Init(vec_t ix, vec_t iy, vec_t iz, vec_t iw)
{
} /* size: 0 */

// <05DFED47> ../public/mathlib/vector4d.h:250
inline void Vector4D::Init(const Vector& src, vec_t iw)
{
} /* size: 0 */

// <06E2A981> ../../public/mathlib/vector4d.h:274
inline void Vector4D::operator=(const Vector4D& vOther)
{
} /* size: 0 */

// <06A75FFC> ../public/mathlib/vector4d.h:285
inline void Vector4D::operator[](int i)
{
} /* size: 0 */

// <06A75FE0> ../public/mathlib/vector4d.h:301
inline void Vector4D::AsVector3D()
{
} /* size: 0 */

// <06A75FC4> ../public/mathlib/vector4d.h:311
inline void Vector4D::AsVector2D()
{
} /* size: 0 */

// <06A75FA8> ../public/mathlib/vector4d.h:325
inline void Vector4D::Base()
{
} /* size: 0 */

// <05CB4D5B> ../public/mathlib/vector4d.h:339
inline void Vector4D::IsValid()
{
} /* size: 0 */

// <011137F5> ../public/mathlib/vector4d.h:360
inline void Vector4D::operator!=(const Vector4D& src)
{
} /* size: 0 */

// <05A7DCB2> ../public/mathlib/vector4d.h:373
inline void Vector4DCopy(const Vector4D& src, Vector4D& dst)
{
} /* size: 0 */

// <0030DF1E> ../public/mathlib/vector4d.h:424
inline void Vector4D::operator*=(const Vector4D& v)
{
} /* size: 0 */

// <02C3F8D8> ../public/mathlib/vector4d.h:439
// variable: 1
inline void Vector4D::operator+(const Vector4D& v)
{
	Vector4D res; // 441
} /* size: 0, variables: 1 */

// <028114CB> ../public/mathlib/vector4d.h:446
// variable: 1
inline void Vector4D::operator-(const Vector4D& v)
{
	Vector4D res; // 448
} /* size: 0, variables: 1 */

// <027E00D8> ../public/mathlib/vector4d.h:480
// variables: 3
inline void Vector4D::operator/=(float fl)
{
	const char   __FUNCTION__; // 33890
	float oofl; // 483
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 482
	}
} /* size: 0, variables: 2 */

// <05A7DC2D> ../public/mathlib/vector4d.h:503
inline void Vector4DAdd(const Vector4D& a, const Vector4D& b, Vector4D& c)
{
} /* size: 0 */

// <00B525AC> ../public/mathlib/vector4d.h:513
inline void Vector4DSubtract(const Vector4D& a, const Vector4D& b, Vector4D& c)
{
} /* size: 0 */

// <00D24A63> ../public/mathlib/vector4d.h:523
inline void Vector4DMultiply(const Vector4D& a, vec_t b, Vector4D& c)
{
} /* size: 0 */

// <06A75F7A> ../public/mathlib/vector4d.h:638
inline vec_t DotProduct4D(const Vector4D& a, const Vector4D& b)
{
} /* size: 0 */

// <013552E8> ../public/mathlib/vector4d.h:656
inline vec_t Vector4DLength(const Vector4D& v)
{
} /* size: 0 */

// <03C45591> ../public/mathlib/vector4d.h:662
inline void Vector4D::LengthSqr()
{
} /* size: 0 */

// <013552CC> ../public/mathlib/vector4d.h:668
inline void Vector4D::Length()
{
} /* size: 0 */

// <03C4555B> ../public/mathlib/vector4d.h:705
// variable: 1
inline void Vector4D::DistToSqr(const Vector4D& vOther)
{
	Vector4D delta; // 707
} /* size: 0, variables: 1 */

