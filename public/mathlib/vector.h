
//
// public/mathlib/vector.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   liblocalize.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//				   libschemasystem.so
//				   libtier0.so
//				   libvfx_vulkan.so
//
//	functions: 143
//	classes: 14
//

// <00025564> ../public/mathlib/vector.h:45
// member functions: 136
// member variables: 3
// static member variables: 5
// class size: 12
class Vector {
	/* ../public/mathlib/vector.h:72 */
	enum VectorConstructFLU_t {
		kFLU = 0,
	};
	static const class Vector vZero; /* 0 0 */
	static const class Vector vOne; /* 0 0 */
	static const class Vector vForward; /* 0 0 */
	static const class Vector vLeft; /* 0 0 */
	static const class Vector vUp; /* 0 0 */
	vec_t x; /* 0 4 */
	vec_t y; /* 4 4 */
	vec_t z; /* 8 4 */
	/* ../public/mathlib/vector.h:62 */
	void Vector(Vector* );
	/* ../public/mathlib/vector.h:65 */
	void Vector(Vector* , vec_t, vec_t, vec_t);
	/* ../public/mathlib/vector.h:67 */
	void Vector(Vector* , vec_t);
	/* ../public/mathlib/vector.h:76 */
	void Vector(Vector* , VectorConstructFLU_t, vec_t, vec_t, vec_t);
	/* ../public/mathlib/vector.h:77 */
	Vector FLU(vec_t, vec_t, vec_t);
	/* ../public/mathlib/vector.h:79 */
	void Init(Vector* , vec_t, vec_t, vec_t);
	/* ../public/mathlib/vector.h:80 */
	void InitFLU(Vector* , vec_t, vec_t, vec_t);
	/* ../public/mathlib/vector.h:81 */
	void Zero(Vector* );
	/* ../public/mathlib/vector.h:82 */
	void Random(Vector* , vec_t, vec_t);
	/* ../public/mathlib/vector.h:84 */
	Vector& operator=(Vector* , const Vector& );
	/* ../public/mathlib/vector.h:88 */
	bool operator==(const Vector* , const Vector& );
	/* ../public/mathlib/vector.h:89 */
	bool operator!=(const Vector* , const Vector& );
	/* ../public/mathlib/vector.h:92 */
	bool IsZero(const Vector* , float);
	/* ../public/mathlib/vector.h:101 */
	bool IsZeroFast(const Vector* );
	/* ../public/mathlib/vector.h:109 */
	bool IsValid(const Vector* );
	/* ../public/mathlib/vector.h:110 */
	bool IsReasonable(const Vector* , float);
	/* ../public/mathlib/vector.h:111 */
	void Invalidate(Vector* );
	/* ../public/mathlib/vector.h:116 */
	vec_t operator[](const Vector* , int);
	/* ../public/mathlib/vector.h:117 */
	vec_t& operator[](Vector* , int);
	/* ../public/mathlib/vector.h:120 */
	vec_t* Base(Vector* );
	/* ../public/mathlib/vector.h:121 */
	const vec_t* Base(const Vector* );
	/* ../public/mathlib/vector.h:124 */
	void CopyToArray(const Vector* , float* );
	/* ../public/mathlib/vector.h:130 */
	Vector& operator+=(Vector* , const Vector& );
	/* ../public/mathlib/vector.h:131 */
	Vector& operator-=(Vector* , const Vector& );
	/* ../public/mathlib/vector.h:132 */
	Vector& operator*=(Vector* , const Vector& );
	/* ../public/mathlib/vector.h:133 */
	Vector& operator*=(Vector* , float);
	/* ../public/mathlib/vector.h:134 */
	Vector& operator/=(Vector* , const Vector& );
	/* ../public/mathlib/vector.h:135 */
	Vector& operator/=(Vector* , float);
	/* ../public/mathlib/vector.h:137 */
	Vector operator-(const Vector* );
	/* ../public/mathlib/vector.h:139 */
	Vector operator+(const Vector* , const Vector& );
	/* ../public/mathlib/vector.h:140 */
	Vector operator-(const Vector* , const Vector& );
	/* ../public/mathlib/vector.h:141 */
	Vector operator*(const Vector* , const Vector& );
	/* ../public/mathlib/vector.h:142 */
	Vector operator/(const Vector* , const Vector& );
	/* ../public/mathlib/vector.h:143 */
	Vector operator*(const Vector* , float);
	/* ../public/mathlib/vector.h:144 */
	Vector operator/(const Vector* , float);
	/* ../public/mathlib/vector.h:147 */
	Vector Cross(const Vector* , const Vector& );
	/* ../public/mathlib/vector.h:150 */
	Vector Min(const Vector* , const Vector& );
	/* ../public/mathlib/vector.h:151 */
	Vector Max(const Vector* , const Vector& );
	/* ../public/mathlib/vector.h:154 */
	void Negate(Vector* );
	/* ../public/mathlib/vector.h:157 */
	bool WithinAABox(Vector* , const Vector& , const Vector& );
	/* ../public/mathlib/vector.h:162 */
	void MulAdd(Vector* , const Vector& , const Vector& , float);
	/* ../public/mathlib/vector.h:165 */
	vec_t Dot(const Vector* , const Vector& );
	/* ../public/mathlib/vector.h:171 */
	vec_t Length(const Vector* );
	/* ../public/mathlib/vector.h:174 */
	vec_t LengthSqr(const Vector* );
	/* ../public/mathlib/vector.h:180 */
	vec_t NormalizeInPlace(Vector* );
	/* ../public/mathlib/vector.h:181 */
	vec_t NormalizeInPlaceSafe(Vector* , const Vector& );
	/* ../public/mathlib/vector.h:182 */
	Vector Normalized(const Vector* );
	/* ../public/mathlib/vector.h:183 */
	Vector NormalizedSafe(const Vector* , const Vector& );
	/* ../public/mathlib/vector.h:184 */
	bool IsLengthGreaterThan(const Vector* , float);
	/* ../public/mathlib/vector.h:185 */
	bool IsLengthLessThan(const Vector* , float);
	/* ../public/mathlib/vector.h:188 */
	vec_t DistTo(const Vector* , const Vector& );
	/* ../public/mathlib/vector.h:189 */
	vec_t DistTo2D(const Vector* , const Vector& );
	/* ../public/mathlib/vector.h:192 */
	vec_t DistToSqr(const Vector* , const Vector& );
	/* ../public/mathlib/vector.h:201 */
	vec_t DistTo2DSqr(const Vector* , const Vector& );
	/* ../public/mathlib/vector.h:210 */
	int LargestComponent(const Vector* );
	/* ../public/mathlib/vector.h:211 */
	vec_t LargestComponentValue(const Vector* );
	/* ../public/mathlib/vector.h:212 */
	int SmallestComponent(const Vector* );
	/* ../public/mathlib/vector.h:213 */
	vec_t SmallestComponentValue(const Vector* );
	/* ../public/mathlib/vector.h:218 */
	vec_t Length2D(const Vector* );
	/* ../public/mathlib/vector.h:220 */
	vec_t Length2DSqr(const Vector* );
	/* ../public/mathlib/vector.h:223 */
	Vector ProjectOnto(const Vector* , const Vector& );
	/* ../public/mathlib/vector.h:226 */
	Vector2D& AsVector2D(Vector* );
	/* ../public/mathlib/vector.h:227 */
	const Vector2D& AsVector2D(const Vector* );
	/* ../public/mathlib/vector.h:231 */
	float Element(const Vector* , int, int);
	/* ../public/mathlib/vector.h:237 */
	void SetElement(Vector* , int, int, float);
	/* ../public/mathlib/vector.h:243 */
	int Width(const Vector* );
	/* ../public/mathlib/vector.h:244 */
	int Height(const Vector* );
	/* ../public/mathlib/vector.h:245 */
	void SetDimensions(Vector* , int, int);
	void Vector(class Vector *); /* linkage=_ZN6VectorC4Ev */
	void Vector(class Vector *, vec_t, vec_t, vec_t); /* linkage=_ZN6VectorC4Efff */
	void Vector(class Vector *, vec_t); /* linkage=_ZN6VectorC4Ef */
	void Vector(class Vector *, enum VectorConstructFLU_t, vec_t, vec_t, vec_t); /* linkage=_ZN6VectorC4ENS_20VectorConstructFLU_tEfff */
	class Vector FLU(vec_t, vec_t, vec_t); /* linkage=_ZN6Vector3FLUEfff */
	void Init(class Vector *, vec_t, vec_t, vec_t); /* linkage=_ZN6Vector4InitEfff */
	void InitFLU(class Vector *, vec_t, vec_t, vec_t); /* linkage=_ZN6Vector7InitFLUEfff */
	void Zero(class Vector *); /* linkage=_ZN6Vector4ZeroEv */
	void Random(class Vector *, vec_t, vec_t); /* linkage=_ZN6Vector6RandomEff */
	class Vector & operator=(class Vector *, const class Vector  &); /* linkage=_ZN6VectoraSERKS_ */
	bool operator==(const class Vector  *, const class Vector  &); /* linkage=_ZNK6VectoreqERKS_ */
	bool operator!=(const class Vector  *, const class Vector  &); /* linkage=_ZNK6VectorneERKS_ */
	bool IsZero(const class Vector  *, float); /* linkage=_ZNK6Vector6IsZeroEf */
	bool IsZeroFast(const class Vector  *); /* linkage=_ZNK6Vector10IsZeroFastEv */
	bool IsValid(const class Vector  *); /* linkage=_ZNK6Vector7IsValidEv */
	bool IsReasonable(const class Vector  *, float); /* linkage=_ZNK6Vector12IsReasonableEf */
	void Invalidate(class Vector *); /* linkage=_ZN6Vector10InvalidateEv */
	vec_t operator[](const class Vector  *, int); /* linkage=_ZNK6VectorixEi */
	vec_t & operator[](class Vector *, int); /* linkage=_ZN6VectorixEi */
	vec_t * Base(class Vector *); /* linkage=_ZN6Vector4BaseEv */
	const vec_t  * Base(const class Vector  *); /* linkage=_ZNK6Vector4BaseEv */
	void CopyToArray(const class Vector  *, float *); /* linkage=_ZNK6Vector11CopyToArrayEPf */
	class Vector & operator+=(class Vector *, const class Vector  &); /* linkage=_ZN6VectorpLERKS_ */
	class Vector & operator-=(class Vector *, const class Vector  &); /* linkage=_ZN6VectormIERKS_ */
	class Vector & operator*=(class Vector *, const class Vector  &); /* linkage=_ZN6VectormLERKS_ */
	class Vector & operator*=(class Vector *, float); /* linkage=_ZN6VectormLEf */
	class Vector & operator/=(class Vector *, const class Vector  &); /* linkage=_ZN6VectordVERKS_ */
	class Vector & operator/=(class Vector *, float); /* linkage=_ZN6VectordVEf */
	class Vector operator-(const class Vector  *); /* linkage=_ZNK6VectorngEv */
	class Vector operator+(const class Vector  *, const class Vector  &); /* linkage=_ZNK6VectorplERKS_ */
	class Vector operator-(const class Vector  *, const class Vector  &); /* linkage=_ZNK6VectormiERKS_ */
	class Vector operator*(const class Vector  *, const class Vector  &); /* linkage=_ZNK6VectormlERKS_ */
	class Vector operator/(const class Vector  *, const class Vector  &); /* linkage=_ZNK6VectordvERKS_ */
	class Vector operator*(const class Vector  *, float); /* linkage=_ZNK6VectormlEf */
	class Vector operator/(const class Vector  *, float); /* linkage=_ZNK6VectordvEf */
	class Vector Cross(const class Vector  *, const class Vector  &); /* linkage=_ZNK6Vector5CrossERKS_ */
	class Vector Min(const class Vector  *, const class Vector  &); /* linkage=_ZNK6Vector3MinERKS_ */
	class Vector Max(const class Vector  *, const class Vector  &); /* linkage=_ZNK6Vector3MaxERKS_ */
	void Negate(class Vector *); /* linkage=_ZN6Vector6NegateEv */
	bool WithinAABox(class Vector *, const class Vector  &, const class Vector  &); /* linkage=_ZN6Vector11WithinAABoxERKS_S1_ */
	void MulAdd(class Vector *, const class Vector  &, const class Vector  &, float); /* linkage=_ZN6Vector6MulAddERKS_S1_f */
	vec_t Dot(const class Vector  *, const class Vector  &); /* linkage=_ZNK6Vector3DotERKS_ */
	vec_t Length(const class Vector  *); /* linkage=_ZNK6Vector6LengthEv */
	vec_t LengthSqr(const class Vector  *); /* linkage=_ZNK6Vector9LengthSqrEv */
	vec_t NormalizeInPlace(class Vector *); /* linkage=_ZN6Vector16NormalizeInPlaceEv */
	vec_t NormalizeInPlaceSafe(class Vector *, const class Vector  &); /* linkage=_ZN6Vector20NormalizeInPlaceSafeERKS_ */
	class Vector Normalized(const class Vector  *); /* linkage=_ZNK6Vector10NormalizedEv */
	class Vector NormalizedSafe(const class Vector  *, const class Vector  &); /* linkage=_ZNK6Vector14NormalizedSafeERKS_ */
	bool IsLengthGreaterThan(const class Vector  *, float); /* linkage=_ZNK6Vector19IsLengthGreaterThanEf */
	bool IsLengthLessThan(const class Vector  *, float); /* linkage=_ZNK6Vector16IsLengthLessThanEf */
	vec_t DistTo(const class Vector  *, const class Vector  &); /* linkage=_ZNK6Vector6DistToERKS_ */
	vec_t DistTo2D(const class Vector  *, const class Vector  &); /* linkage=_ZNK6Vector8DistTo2DERKS_ */
	vec_t DistToSqr(const class Vector  *, const class Vector  &); /* linkage=_ZNK6Vector9DistToSqrERKS_ */
	vec_t DistTo2DSqr(const class Vector  *, const class Vector  &); /* linkage=_ZNK6Vector11DistTo2DSqrERKS_ */
	int LargestComponent(const class Vector  *); /* linkage=_ZNK6Vector16LargestComponentEv */
	vec_t LargestComponentValue(const class Vector  *); /* linkage=_ZNK6Vector21LargestComponentValueEv */
	int SmallestComponent(const class Vector  *); /* linkage=_ZNK6Vector17SmallestComponentEv */
	vec_t SmallestComponentValue(const class Vector  *); /* linkage=_ZNK6Vector22SmallestComponentValueEv */
	vec_t Length2D(const class Vector  *); /* linkage=_ZNK6Vector8Length2DEv */
	vec_t Length2DSqr(const class Vector  *); /* linkage=_ZNK6Vector11Length2DSqrEv */
	class Vector ProjectOnto(const class Vector  *, const class Vector  &); /* linkage=_ZNK6Vector11ProjectOntoERKS_ */
	class Vector2D & AsVector2D(class Vector *); /* linkage=_ZN6Vector10AsVector2DEv */
	const class Vector2D  & AsVector2D(const class Vector  *); /* linkage=_ZNK6Vector10AsVector2DEv */
	float Element(const class Vector  *, int, int); /* linkage=_ZNK6Vector7ElementEii */
	void SetElement(class Vector *, int, int, float); /* linkage=_ZN6Vector10SetElementEiif */
	int Width(const class Vector  *); /* linkage=_ZNK6Vector5WidthEv */
	int Height(const class Vector  *); /* linkage=_ZNK6Vector6HeightEv */
	void SetDimensions(class Vector *, int, int); /* linkage=_ZN6Vector13SetDimensionsEii */
};

// <057EBF2E> ../../public/mathlib/vector.h:45
// member functions: 136
// member variables: 3
// static member variables: 5
// class size: 12
class Vector {
	/* ../../public/mathlib/vector.h:72 */
	enum VectorConstructFLU_t {
		kFLU = 0,
	};
	static const class Vector vZero; /* 0 0 */
	static const class Vector vOne; /* 0 0 */
	static const class Vector vForward; /* 0 0 */
	static const class Vector vLeft; /* 0 0 */
	static const class Vector vUp; /* 0 0 */
	vec_t x; /* 0 4 */
	vec_t y; /* 4 4 */
	vec_t z; /* 8 4 */
	/* ../../public/mathlib/vector.h:62 */
	void Vector(Vector* );
	/* ../../public/mathlib/vector.h:65 */
	void Vector(Vector* , vec_t, vec_t, vec_t);
	/* ../../public/mathlib/vector.h:67 */
	void Vector(Vector* , vec_t);
	/* ../../public/mathlib/vector.h:76 */
	void Vector(Vector* , VectorConstructFLU_t, vec_t, vec_t, vec_t);
	/* ../../public/mathlib/vector.h:77 */
	Vector FLU(vec_t, vec_t, vec_t);
	/* ../../public/mathlib/vector.h:79 */
	void Init(Vector* , vec_t, vec_t, vec_t);
	/* ../../public/mathlib/vector.h:80 */
	void InitFLU(Vector* , vec_t, vec_t, vec_t);
	/* ../../public/mathlib/vector.h:81 */
	void Zero(Vector* );
	/* ../../public/mathlib/vector.h:82 */
	void Random(Vector* , vec_t, vec_t);
	/* ../../public/mathlib/vector.h:84 */
	Vector& operator=(Vector* , const Vector& );
	/* ../../public/mathlib/vector.h:88 */
	bool operator==(const Vector* , const Vector& );
	/* ../../public/mathlib/vector.h:89 */
	bool operator!=(const Vector* , const Vector& );
	/* ../../public/mathlib/vector.h:92 */
	bool IsZero(const Vector* , float);
	/* ../../public/mathlib/vector.h:101 */
	bool IsZeroFast(const Vector* );
	/* ../../public/mathlib/vector.h:109 */
	bool IsValid(const Vector* );
	/* ../../public/mathlib/vector.h:110 */
	bool IsReasonable(const Vector* , float);
	/* ../../public/mathlib/vector.h:111 */
	void Invalidate(Vector* );
	/* ../../public/mathlib/vector.h:116 */
	vec_t operator[](const Vector* , int);
	/* ../../public/mathlib/vector.h:117 */
	vec_t& operator[](Vector* , int);
	/* ../../public/mathlib/vector.h:120 */
	vec_t* Base(Vector* );
	/* ../../public/mathlib/vector.h:121 */
	const vec_t* Base(const Vector* );
	/* ../../public/mathlib/vector.h:124 */
	void CopyToArray(const Vector* , float* );
	/* ../../public/mathlib/vector.h:130 */
	Vector& operator+=(Vector* , const Vector& );
	/* ../../public/mathlib/vector.h:131 */
	Vector& operator-=(Vector* , const Vector& );
	/* ../../public/mathlib/vector.h:132 */
	Vector& operator*=(Vector* , const Vector& );
	/* ../../public/mathlib/vector.h:133 */
	Vector& operator*=(Vector* , float);
	/* ../../public/mathlib/vector.h:134 */
	Vector& operator/=(Vector* , const Vector& );
	/* ../../public/mathlib/vector.h:135 */
	Vector& operator/=(Vector* , float);
	/* ../../public/mathlib/vector.h:137 */
	Vector operator-(const Vector* );
	/* ../../public/mathlib/vector.h:139 */
	Vector operator+(const Vector* , const Vector& );
	/* ../../public/mathlib/vector.h:140 */
	Vector operator-(const Vector* , const Vector& );
	/* ../../public/mathlib/vector.h:141 */
	Vector operator*(const Vector* , const Vector& );
	/* ../../public/mathlib/vector.h:142 */
	Vector operator/(const Vector* , const Vector& );
	/* ../../public/mathlib/vector.h:143 */
	Vector operator*(const Vector* , float);
	/* ../../public/mathlib/vector.h:144 */
	Vector operator/(const Vector* , float);
	/* ../../public/mathlib/vector.h:147 */
	Vector Cross(const Vector* , const Vector& );
	/* ../../public/mathlib/vector.h:150 */
	Vector Min(const Vector* , const Vector& );
	/* ../../public/mathlib/vector.h:151 */
	Vector Max(const Vector* , const Vector& );
	/* ../../public/mathlib/vector.h:154 */
	void Negate(Vector* );
	/* ../../public/mathlib/vector.h:157 */
	bool WithinAABox(Vector* , const Vector& , const Vector& );
	/* ../../public/mathlib/vector.h:162 */
	void MulAdd(Vector* , const Vector& , const Vector& , float);
	/* ../../public/mathlib/vector.h:165 */
	vec_t Dot(const Vector* , const Vector& );
	/* ../../public/mathlib/vector.h:171 */
	vec_t Length(const Vector* );
	/* ../../public/mathlib/vector.h:174 */
	vec_t LengthSqr(const Vector* );
	/* ../../public/mathlib/vector.h:180 */
	vec_t NormalizeInPlace(Vector* );
	/* ../../public/mathlib/vector.h:181 */
	vec_t NormalizeInPlaceSafe(Vector* , const Vector& );
	/* ../../public/mathlib/vector.h:182 */
	Vector Normalized(const Vector* );
	/* ../../public/mathlib/vector.h:183 */
	Vector NormalizedSafe(const Vector* , const Vector& );
	/* ../../public/mathlib/vector.h:184 */
	bool IsLengthGreaterThan(const Vector* , float);
	/* ../../public/mathlib/vector.h:185 */
	bool IsLengthLessThan(const Vector* , float);
	/* ../../public/mathlib/vector.h:188 */
	vec_t DistTo(const Vector* , const Vector& );
	/* ../../public/mathlib/vector.h:189 */
	vec_t DistTo2D(const Vector* , const Vector& );
	/* ../../public/mathlib/vector.h:192 */
	vec_t DistToSqr(const Vector* , const Vector& );
	/* ../../public/mathlib/vector.h:201 */
	vec_t DistTo2DSqr(const Vector* , const Vector& );
	/* ../../public/mathlib/vector.h:210 */
	int LargestComponent(const Vector* );
	/* ../../public/mathlib/vector.h:211 */
	vec_t LargestComponentValue(const Vector* );
	/* ../../public/mathlib/vector.h:212 */
	int SmallestComponent(const Vector* );
	/* ../../public/mathlib/vector.h:213 */
	vec_t SmallestComponentValue(const Vector* );
	/* ../../public/mathlib/vector.h:218 */
	vec_t Length2D(const Vector* );
	/* ../../public/mathlib/vector.h:220 */
	vec_t Length2DSqr(const Vector* );
	/* ../../public/mathlib/vector.h:223 */
	Vector ProjectOnto(const Vector* , const Vector& );
	/* ../../public/mathlib/vector.h:226 */
	Vector2D& AsVector2D(Vector* );
	/* ../../public/mathlib/vector.h:227 */
	const Vector2D& AsVector2D(const Vector* );
	/* ../../public/mathlib/vector.h:231 */
	float Element(const Vector* , int, int);
	/* ../../public/mathlib/vector.h:237 */
	void SetElement(Vector* , int, int, float);
	/* ../../public/mathlib/vector.h:243 */
	int Width(const Vector* );
	/* ../../public/mathlib/vector.h:244 */
	int Height(const Vector* );
	/* ../../public/mathlib/vector.h:245 */
	void SetDimensions(Vector* , int, int);
	void Vector(class Vector *); /* linkage=_ZN6VectorC4Ev */
	void Vector(class Vector *, vec_t, vec_t, vec_t); /* linkage=_ZN6VectorC4Efff */
	void Vector(class Vector *, vec_t); /* linkage=_ZN6VectorC4Ef */
	void Vector(class Vector *, enum VectorConstructFLU_t, vec_t, vec_t, vec_t); /* linkage=_ZN6VectorC4ENS_20VectorConstructFLU_tEfff */
	class Vector FLU(vec_t, vec_t, vec_t); /* linkage=_ZN6Vector3FLUEfff */
	void Init(class Vector *, vec_t, vec_t, vec_t); /* linkage=_ZN6Vector4InitEfff */
	void InitFLU(class Vector *, vec_t, vec_t, vec_t); /* linkage=_ZN6Vector7InitFLUEfff */
	void Zero(class Vector *); /* linkage=_ZN6Vector4ZeroEv */
	void Random(class Vector *, vec_t, vec_t); /* linkage=_ZN6Vector6RandomEff */
	class Vector & operator=(class Vector *, const class Vector  &); /* linkage=_ZN6VectoraSERKS_ */
	bool operator==(const class Vector  *, const class Vector  &); /* linkage=_ZNK6VectoreqERKS_ */
	bool operator!=(const class Vector  *, const class Vector  &); /* linkage=_ZNK6VectorneERKS_ */
	bool IsZero(const class Vector  *, float); /* linkage=_ZNK6Vector6IsZeroEf */
	bool IsZeroFast(const class Vector  *); /* linkage=_ZNK6Vector10IsZeroFastEv */
	bool IsValid(const class Vector  *); /* linkage=_ZNK6Vector7IsValidEv */
	bool IsReasonable(const class Vector  *, float); /* linkage=_ZNK6Vector12IsReasonableEf */
	void Invalidate(class Vector *); /* linkage=_ZN6Vector10InvalidateEv */
	vec_t operator[](const class Vector  *, int); /* linkage=_ZNK6VectorixEi */
	vec_t & operator[](class Vector *, int); /* linkage=_ZN6VectorixEi */
	vec_t * Base(class Vector *); /* linkage=_ZN6Vector4BaseEv */
	const vec_t  * Base(const class Vector  *); /* linkage=_ZNK6Vector4BaseEv */
	void CopyToArray(const class Vector  *, float *); /* linkage=_ZNK6Vector11CopyToArrayEPf */
	class Vector & operator+=(class Vector *, const class Vector  &); /* linkage=_ZN6VectorpLERKS_ */
	class Vector & operator-=(class Vector *, const class Vector  &); /* linkage=_ZN6VectormIERKS_ */
	class Vector & operator*=(class Vector *, const class Vector  &); /* linkage=_ZN6VectormLERKS_ */
	class Vector & operator*=(class Vector *, float); /* linkage=_ZN6VectormLEf */
	class Vector & operator/=(class Vector *, const class Vector  &); /* linkage=_ZN6VectordVERKS_ */
	class Vector & operator/=(class Vector *, float); /* linkage=_ZN6VectordVEf */
	class Vector operator-(const class Vector  *); /* linkage=_ZNK6VectorngEv */
	class Vector operator+(const class Vector  *, const class Vector  &); /* linkage=_ZNK6VectorplERKS_ */
	class Vector operator-(const class Vector  *, const class Vector  &); /* linkage=_ZNK6VectormiERKS_ */
	class Vector operator*(const class Vector  *, const class Vector  &); /* linkage=_ZNK6VectormlERKS_ */
	class Vector operator/(const class Vector  *, const class Vector  &); /* linkage=_ZNK6VectordvERKS_ */
	class Vector operator*(const class Vector  *, float); /* linkage=_ZNK6VectormlEf */
	class Vector operator/(const class Vector  *, float); /* linkage=_ZNK6VectordvEf */
	class Vector Cross(const class Vector  *, const class Vector  &); /* linkage=_ZNK6Vector5CrossERKS_ */
	class Vector Min(const class Vector  *, const class Vector  &); /* linkage=_ZNK6Vector3MinERKS_ */
	class Vector Max(const class Vector  *, const class Vector  &); /* linkage=_ZNK6Vector3MaxERKS_ */
	void Negate(class Vector *); /* linkage=_ZN6Vector6NegateEv */
	bool WithinAABox(class Vector *, const class Vector  &, const class Vector  &); /* linkage=_ZN6Vector11WithinAABoxERKS_S1_ */
	void MulAdd(class Vector *, const class Vector  &, const class Vector  &, float); /* linkage=_ZN6Vector6MulAddERKS_S1_f */
	vec_t Dot(const class Vector  *, const class Vector  &); /* linkage=_ZNK6Vector3DotERKS_ */
	vec_t Length(const class Vector  *); /* linkage=_ZNK6Vector6LengthEv */
	vec_t LengthSqr(const class Vector  *); /* linkage=_ZNK6Vector9LengthSqrEv */
	vec_t NormalizeInPlace(class Vector *); /* linkage=_ZN6Vector16NormalizeInPlaceEv */
	vec_t NormalizeInPlaceSafe(class Vector *, const class Vector  &); /* linkage=_ZN6Vector20NormalizeInPlaceSafeERKS_ */
	class Vector Normalized(const class Vector  *); /* linkage=_ZNK6Vector10NormalizedEv */
	class Vector NormalizedSafe(const class Vector  *, const class Vector  &); /* linkage=_ZNK6Vector14NormalizedSafeERKS_ */
	bool IsLengthGreaterThan(const class Vector  *, float); /* linkage=_ZNK6Vector19IsLengthGreaterThanEf */
	bool IsLengthLessThan(const class Vector  *, float); /* linkage=_ZNK6Vector16IsLengthLessThanEf */
	vec_t DistTo(const class Vector  *, const class Vector  &); /* linkage=_ZNK6Vector6DistToERKS_ */
	vec_t DistTo2D(const class Vector  *, const class Vector  &); /* linkage=_ZNK6Vector8DistTo2DERKS_ */
	vec_t DistToSqr(const class Vector  *, const class Vector  &); /* linkage=_ZNK6Vector9DistToSqrERKS_ */
	vec_t DistTo2DSqr(const class Vector  *, const class Vector  &); /* linkage=_ZNK6Vector11DistTo2DSqrERKS_ */
	int LargestComponent(const class Vector  *); /* linkage=_ZNK6Vector16LargestComponentEv */
	vec_t LargestComponentValue(const class Vector  *); /* linkage=_ZNK6Vector21LargestComponentValueEv */
	int SmallestComponent(const class Vector  *); /* linkage=_ZNK6Vector17SmallestComponentEv */
	vec_t SmallestComponentValue(const class Vector  *); /* linkage=_ZNK6Vector22SmallestComponentValueEv */
	vec_t Length2D(const class Vector  *); /* linkage=_ZNK6Vector8Length2DEv */
	vec_t Length2DSqr(const class Vector  *); /* linkage=_ZNK6Vector11Length2DSqrEv */
	class Vector ProjectOnto(const class Vector  *, const class Vector  &); /* linkage=_ZNK6Vector11ProjectOntoERKS_ */
	class Vector2D & AsVector2D(class Vector *); /* linkage=_ZN6Vector10AsVector2DEv */
	const class Vector2D  & AsVector2D(const class Vector  *); /* linkage=_ZNK6Vector10AsVector2DEv */
	float Element(const class Vector  *, int, int); /* linkage=_ZNK6Vector7ElementEii */
	void SetElement(class Vector *, int, int, float); /* linkage=_ZN6Vector10SetElementEiif */
	int Width(const class Vector  *); /* linkage=_ZNK6Vector5WidthEv */
	int Height(const class Vector  *); /* linkage=_ZNK6Vector6HeightEv */
	void SetDimensions(class Vector *, int, int); /* linkage=_ZN6Vector13SetDimensionsEii */
};

// <06F38A66> ../public/mathlib/vector.h:62
void Vector::Vector()
{
} /* size: 0 */

// <06F38A4D> ../public/mathlib/vector.h:62
inline void Vector::Vector()
{
} /* size: 0 */

// <06354023> ../public/mathlib/vector.h:67
void Vector::Vector(vec_t xyz)
{
} /* size: 0 */

// <06353FFE> ../public/mathlib/vector.h:67
inline void Vector::Vector(vec_t xyz)
{
} /* size: 0 */

// <00CB3C91> ../public/mathlib/vector.h:92
inline void Vector::IsZero(float tolerance)
{
} /* size: 0 */

// <02C47AE8> ../public/mathlib/vector.h:101
inline void Vector::IsZeroFast()
{
} /* size: 0 */

// <0658B396> ../public/mathlib/vector.h:174
inline void Vector::LengthSqr()
{
} /* size: 0 */

// <05CB53D8> ../public/mathlib/vector.h:192
// variable: 1
inline void Vector::DistToSqr(const Vector& vOther)
{
	Vector delta; // 194
} /* size: 0, variables: 1 */

// <00025FF2> ../public/mathlib/vector.h:321
// member functions: 36
// member variables: 4
// class size: 16
class IntVector4D {
	int x; /* 0 4 */
	int y; /* 4 4 */
	int z; /* 8 4 */
	int w; /* 12 4 */
	/* ../public/mathlib/vector.h:328 */
	void Init(IntVector4D* , int, int, int, int);
	/* ../public/mathlib/vector.h:331 */
	__m64& AsM64(IntVector4D* );
	/* ../public/mathlib/vector.h:332 */
	const __m64& AsM64(const IntVector4D* );
	/* ../public/mathlib/vector.h:336 */
	void Set(IntVector4D* , const IntVector4D& );
	/* ../public/mathlib/vector.h:337 */
	void Set(IntVector4D* , int, int, int, int);
	/* ../public/mathlib/vector.h:340 */
	int operator[](const IntVector4D* , int);
	/* ../public/mathlib/vector.h:341 */
	int& operator[](IntVector4D* , int);
	/* ../public/mathlib/vector.h:344 */
	int* Base(IntVector4D* );
	/* ../public/mathlib/vector.h:345 */
	const int* Base(const IntVector4D* );
	/* ../public/mathlib/vector.h:348 */
	bool operator==(const IntVector4D* , const IntVector4D& );
	/* ../public/mathlib/vector.h:349 */
	bool operator!=(const IntVector4D* , const IntVector4D& );
	/* ../public/mathlib/vector.h:352 */
	IntVector4D& operator+=(IntVector4D* , const IntVector4D& );
	/* ../public/mathlib/vector.h:353 */
	IntVector4D& operator-=(IntVector4D* , const IntVector4D& );
	/* ../public/mathlib/vector.h:354 */
	IntVector4D& operator*=(IntVector4D* , const IntVector4D& );
	/* ../public/mathlib/vector.h:355 */
	IntVector4D& operator*=(IntVector4D* , float);
	/* ../public/mathlib/vector.h:356 */
	IntVector4D& operator/=(IntVector4D* , const IntVector4D& );
	/* ../public/mathlib/vector.h:357 */
	IntVector4D& operator/=(IntVector4D* , float);
	/* ../public/mathlib/vector.h:358 */
	IntVector4D operator*(const IntVector4D* , float);
	void Init(class IntVector4D *, int, int, int, int); /* linkage=_ZN11IntVector4D4InitEiiii */
	__m64 & AsM64(class IntVector4D *); /* linkage=_ZN11IntVector4D5AsM64Ev */
	const __m64  & AsM64(const class IntVector4D  *); /* linkage=_ZNK11IntVector4D5AsM64Ev */
	void Set(class IntVector4D *, const class IntVector4D  &); /* linkage=_ZN11IntVector4D3SetERKS_ */
	void Set(class IntVector4D *, int, int, int, int); /* linkage=_ZN11IntVector4D3SetEiiii */
	int operator[](const class IntVector4D  *, int); /* linkage=_ZNK11IntVector4DixEi */
	int & operator[](class IntVector4D *, int); /* linkage=_ZN11IntVector4DixEi */
	int * Base(class IntVector4D *); /* linkage=_ZN11IntVector4D4BaseEv */
	const int  * Base(const class IntVector4D  *); /* linkage=_ZNK11IntVector4D4BaseEv */
	bool operator==(const class IntVector4D  *, const class IntVector4D  &); /* linkage=_ZNK11IntVector4DeqERKS_ */
	bool operator!=(const class IntVector4D  *, const class IntVector4D  &); /* linkage=_ZNK11IntVector4DneERKS_ */
	class IntVector4D & operator+=(class IntVector4D *, const class IntVector4D  &); /* linkage=_ZN11IntVector4DpLERKS_ */
	class IntVector4D & operator-=(class IntVector4D *, const class IntVector4D  &); /* linkage=_ZN11IntVector4DmIERKS_ */
	class IntVector4D & operator*=(class IntVector4D *, const class IntVector4D  &); /* linkage=_ZN11IntVector4DmLERKS_ */
	class IntVector4D & operator*=(class IntVector4D *, float); /* linkage=_ZN11IntVector4DmLEf */
	class IntVector4D & operator/=(class IntVector4D *, const class IntVector4D  &); /* linkage=_ZN11IntVector4DdVERKS_ */
	class IntVector4D & operator/=(class IntVector4D *, float); /* linkage=_ZN11IntVector4DdVEf */
	class IntVector4D operator*(const class IntVector4D  *, float); /* linkage=_ZNK11IntVector4DmlEf */
};

// <001D4176> ../../public/mathlib/vector.h:321
// member functions: 36
// member variables: 4
// class size: 16
class IntVector4D {
	int x; /* 0 4 */
	int y; /* 4 4 */
	int z; /* 8 4 */
	int w; /* 12 4 */
	/* ../../public/mathlib/vector.h:328 */
	void Init(IntVector4D* , int, int, int, int);
	/* ../../public/mathlib/vector.h:331 */
	__m64& AsM64(IntVector4D* );
	/* ../../public/mathlib/vector.h:332 */
	const __m64& AsM64(const IntVector4D* );
	/* ../../public/mathlib/vector.h:336 */
	void Set(IntVector4D* , const IntVector4D& );
	/* ../../public/mathlib/vector.h:337 */
	void Set(IntVector4D* , int, int, int, int);
	/* ../../public/mathlib/vector.h:340 */
	int operator[](const IntVector4D* , int);
	/* ../../public/mathlib/vector.h:341 */
	int& operator[](IntVector4D* , int);
	/* ../../public/mathlib/vector.h:344 */
	int* Base(IntVector4D* );
	/* ../../public/mathlib/vector.h:345 */
	const int* Base(const IntVector4D* );
	/* ../../public/mathlib/vector.h:348 */
	bool operator==(const IntVector4D* , const IntVector4D& );
	/* ../../public/mathlib/vector.h:349 */
	bool operator!=(const IntVector4D* , const IntVector4D& );
	/* ../../public/mathlib/vector.h:352 */
	IntVector4D& operator+=(IntVector4D* , const IntVector4D& );
	/* ../../public/mathlib/vector.h:353 */
	IntVector4D& operator-=(IntVector4D* , const IntVector4D& );
	/* ../../public/mathlib/vector.h:354 */
	IntVector4D& operator*=(IntVector4D* , const IntVector4D& );
	/* ../../public/mathlib/vector.h:355 */
	IntVector4D& operator*=(IntVector4D* , float);
	/* ../../public/mathlib/vector.h:356 */
	IntVector4D& operator/=(IntVector4D* , const IntVector4D& );
	/* ../../public/mathlib/vector.h:357 */
	IntVector4D& operator/=(IntVector4D* , float);
	/* ../../public/mathlib/vector.h:358 */
	IntVector4D operator*(const IntVector4D* , float);
	void Init(class IntVector4D *, int, int, int, int); /* linkage=_ZN11IntVector4D4InitEiiii */
	__m64 & AsM64(class IntVector4D *); /* linkage=_ZN11IntVector4D5AsM64Ev */
	const __m64  & AsM64(const class IntVector4D  *); /* linkage=_ZNK11IntVector4D5AsM64Ev */
	void Set(class IntVector4D *, const class IntVector4D  &); /* linkage=_ZN11IntVector4D3SetERKS_ */
	void Set(class IntVector4D *, int, int, int, int); /* linkage=_ZN11IntVector4D3SetEiiii */
	int operator[](const class IntVector4D  *, int); /* linkage=_ZNK11IntVector4DixEi */
	int & operator[](class IntVector4D *, int); /* linkage=_ZN11IntVector4DixEi */
	int * Base(class IntVector4D *); /* linkage=_ZN11IntVector4D4BaseEv */
	const int  * Base(const class IntVector4D  *); /* linkage=_ZNK11IntVector4D4BaseEv */
	bool operator==(const class IntVector4D  *, const class IntVector4D  &); /* linkage=_ZNK11IntVector4DeqERKS_ */
	bool operator!=(const class IntVector4D  *, const class IntVector4D  &); /* linkage=_ZNK11IntVector4DneERKS_ */
	class IntVector4D & operator+=(class IntVector4D *, const class IntVector4D  &); /* linkage=_ZN11IntVector4DpLERKS_ */
	class IntVector4D & operator-=(class IntVector4D *, const class IntVector4D  &); /* linkage=_ZN11IntVector4DmIERKS_ */
	class IntVector4D & operator*=(class IntVector4D *, const class IntVector4D  &); /* linkage=_ZN11IntVector4DmLERKS_ */
	class IntVector4D & operator*=(class IntVector4D *, float); /* linkage=_ZN11IntVector4DmLEf */
	class IntVector4D & operator/=(class IntVector4D *, const class IntVector4D  &); /* linkage=_ZN11IntVector4DdVERKS_ */
	class IntVector4D & operator/=(class IntVector4D *, float); /* linkage=_ZN11IntVector4DdVEf */
	class IntVector4D operator*(const class IntVector4D  *, float); /* linkage=_ZNK11IntVector4DmlEf */
};

// <02E0E5A2> ../public/mathlib/vector.h:478
Vector RandomVectorOnUnitSphere(void)
{
} /* size: 0 */

// <06F2ECC8> ../../public/mathlib/vector.h:500
void Vector::Vector(vec_t X, vec_t Y, vec_t Z)
{
} /* size: 0 */

// <06F2EC8B> ../../public/mathlib/vector.h:500
inline void Vector::Vector(vec_t X, vec_t Y, vec_t Z)
{
} /* size: 0 */

// <06470BFC> ../public/mathlib/vector.h:534
inline void Vector::Init(vec_t ix, vec_t iy, vec_t iz)
{
} /* size: 0 */

// <0022DE8F> ../public/mathlib/vector.h:540
inline void Vector::InitFLU(vec_t f, vec_t l, vec_t u)
{
} /* size: 0 */

// <06F2EC62> ../../public/mathlib/vector.h:563
inline void Vector::operator=(const Vector& vOther)
{
} /* size: 0 */

// <067E1507> ../public/mathlib/vector.h:574
inline void Vector::operator[](int i)
{
} /* size: 0 */

// <067E14C4> ../public/mathlib/vector.h:590
inline void Vector::Base()
{
} /* size: 0 */

// <05CB52F0> ../public/mathlib/vector.h:604
inline void Vector::AsVector2D()
{
} /* size: 0 */

// <06353EC8> ../public/mathlib/vector.h:617
inline void Vector::IsValid()
{
} /* size: 0 */

// <00D259E5> ../public/mathlib/vector.h:617
void Vector::IsValid()
{
} /* size: 0 */

// <0580DE2F> ../../public/mathlib/vector.h:625
// variable: 1
inline void Vector::IsReasonable(float range)
{
	float flLengthSqr; // 627
} /* size: 0, variables: 1 */

// <01355DB7> ../public/mathlib/vector.h:648
inline void Vector::operator==(const Vector& src)
{
} /* size: 0 */

// <040279D1> ../public/mathlib/vector.h:655
inline void Vector::operator!=(const Vector& src)
{
} /* size: 0 */

// <031822EA> ../public/mathlib/vector.h:668
inline void VectorCopy(const Vector& src, Vector& dst)
{
} /* size: 0 */

// <061D60DD> ../public/mathlib/vector.h:676
inline void Vector::CopyToArray(float* rgfl)
{
} /* size: 0 */

// <0596BF51> ../../public/mathlib/vector.h:688
inline void Vector::Negate()
{
} /* size: 0 */

// <00BB1B4A> ../public/mathlib/vector.h:694
inline void Vector::operator+=(const Vector& v)
{
} /* size: 0 */

// <06353EA1> ../public/mathlib/vector.h:702
inline void Vector::operator-=(const Vector& v)
{
} /* size: 0 */

// <05A7E2FC> ../public/mathlib/vector.h:710
inline void Vector::operator*=(float fl)
{
} /* size: 0 */

// <05BE41A4> ../public/mathlib/vector.h:719
inline void Vector::operator*=(const Vector& v)
{
} /* size: 0 */

// <06111B2B> ../public/mathlib/vector.h:732
// variable: 1
inline void Vector::operator/=(float fl)
{
	float oofl; // 735
} /* size: 0, variables: 1 */

// <01355CB0> ../public/mathlib/vector.h:919
inline void IntVector4D::Init(int ix, int iy, int iz, int iw)
{
} /* size: 0 */

// <0030E155> ../public/mathlib/vector.h:950
inline void IntVector4D::operator[](int i)
{
} /* size: 0 */

// <003DBBE5> ../public/mathlib/vector.h:1062
inline void VectorAdd(const Vector& a, const Vector& b, Vector& c)
{
} /* size: 0 */

// <003DBBB0> ../public/mathlib/vector.h:1071
inline void VectorSubtract(const Vector& a, const Vector& b, Vector& c)
{
} /* size: 0 */

// <003DBB7B> ../public/mathlib/vector.h:1080
inline void VectorMultiply(const Vector& a, vec_t b, Vector& c)
{
} /* size: 0 */

// <031821C2> ../public/mathlib/vector.h:1099
inline void VectorScale(const Vector& vIn, float flScale, Vector& vResult)
{
} /* size: 0 */

// <00D1D057> ../public/mathlib/vector.h:1105
// variable: 1
inline void VectorDivide(const Vector& a, vec_t b, Vector& c)
{
	vec_t oob; // 1109
} /* size: 0, variables: 1 */

// <059D9C4B> ../public/mathlib/vector.h:1127
inline void Vector::MulAdd(const Vector& a, const Vector& b, float scalar)
{
} /* size: 0 */

// <0596BDF6> ../../public/mathlib/vector.h:1136
inline void VectorLerp(const Vector& src1, const Vector& src2, vec_t t, Vector& dest)
{
} /* size: 0 */

// <00D2587B> ../public/mathlib/vector.h:1136
void VectorLerp(const Vector& src1, const Vector& src2, vec_t t, Vector& dest)
{
} /* size: 0 */

// <011A4A56> ../public/mathlib/vector.h:1145
// variable: 1
inline Vector VectorLerp(const Vector& src1, const Vector& src2, vec_t t)
{
	Vector result; // 1147
} /* size: 0, variables: 1 */

// <00A1AD41> ../public/mathlib/vector.h:1156
inline vec_t DotProduct(const Vector& a, const Vector& b)
{
} /* size: 0 */

// <06353D69> ../public/mathlib/vector.h:1164
inline void Vector::Dot(const Vector& vOther)
{
} /* size: 0 */

// <06353D26> ../public/mathlib/vector.h:1170
// variables: 3
inline void Vector::LargestComponent()
{
	float flAbsx; // 1172
	float flAbsy; // 1173
	float flAbsz; // 1174
} /* size: 0, variables: 3 */

// <05D00B7F> ../public/mathlib/vector.h:1186
// variables: 3
inline void Vector::SmallestComponent()
{
	float flAbsx; // 1188
	float flAbsy; // 1189
	float flAbsz; // 1190
} /* size: 0, variables: 3 */

// <06353CE3> ../public/mathlib/vector.h:1203
// variables: 3
inline void Vector::LargestComponentValue()
{
	float flAbsX; // 1205
	float flAbsY; // 1206
	float flAbsZ; // 1207
} /* size: 0, variables: 3 */

// <05F0B83D> ../public/mathlib/vector.h:1203
// variables: 3
void Vector::LargestComponentValue()
{
	float flAbsX; // 1205
	float flAbsY; // 1206
	float flAbsZ; // 1207
} /* size: 0, variables: 3 */

// <00E89DE4> ../public/mathlib/vector.h:1219
inline void CrossProduct(const Vector& a, const Vector& b, Vector& result)
{
} /* size: 0 */

// <0596BD38> ../../public/mathlib/vector.h:1230
inline vec_t DotProductAbs(const Vector& v0, const Vector& v1)
{
} /* size: 0 */

// <011A4998> ../public/mathlib/vector.h:1237
inline vec_t DotProductAbs(const Vector& v0, const float* v1)
{
} /* size: 0 */

// <00A1AD1E> ../public/mathlib/vector.h:1246
inline vec_t VectorLength(const Vector& v)
{
} /* size: 0 */

// <05989FDE> ../public/mathlib/vector.h:1253
inline void Vector::Length()
{
} /* size: 0 */

// <059D9A9B> ../public/mathlib/vector.h:1260
inline float Length(const Vector& v)
{
} /* size: 0 */

// <05CB50A0> ../public/mathlib/vector.h:1303
// variable: 1
inline void Vector::DistTo(const Vector& vOther)
{
	Vector delta; // 1305
} /* size: 0, variables: 1 */

// <00BB19AC> ../public/mathlib/vector.h:1323
// variables: 4
inline bool FloatsAreEqual(float f1, float f2, float flTolerance)
{
	int nExp1; // 1325
	int nExp2; // 1325
	float flFrac1; // 1326
	float flFrac2; // 1327
} /* size: 0, variables: 4 */

// <05A59910> ../public/mathlib/vector.h:1373
inline bool VectorsAreEqual(const Vector& src1, const Vector& src2, float flTolerance)
{
} /* size: 0 */

// <0596BCCB> ../../public/mathlib/vector.h:1385
inline void VectorAbs(const Vector& src, Vector& dst)
{
} /* size: 0 */

// <05D00AE0> ../public/mathlib/vector.h:1410
inline void Vector::Min(const Vector& vOther)
{
} /* size: 0 */

// <05D00AB7> ../public/mathlib/vector.h:1417
inline void Vector::Max(const Vector& vOther)
{
} /* size: 0 */

// <02B7528F> ../public/mathlib/vector.h:1429
inline void Vector::operator-()
{
} /* size: 0 */

// <003DBB46> ../public/mathlib/vector.h:1434
// variable: 1
inline void Vector::operator+(const Vector& v)
{
	Vector res; // 1436
} /* size: 0, variables: 1 */

// <0115903C> ../public/mathlib/vector.h:1448
// variable: 1
inline void Vector::operator*(float fl)
{
	Vector res; // 1450
} /* size: 0, variables: 1 */

// <01159008> ../public/mathlib/vector.h:1455
// variable: 1
inline void Vector::operator*(const Vector& v)
{
	Vector res; // 1457
} /* size: 0, variables: 1 */

// <05CB4F60> ../public/mathlib/vector.h:1462
// variable: 1
inline void Vector::operator/(float fl)
{
	Vector res; // 1464
} /* size: 0, variables: 1 */

// <003DBAAC> ../public/mathlib/vector.h:1476
inline Vector operator*(float fl, const Vector& v)
{
} /* size: 0 */

// <06353B36> ../public/mathlib/vector.h:1485
// variable: 1
inline void Vector::Cross(const Vector& vOther)
{
	Vector res; // 1487
} /* size: 0, variables: 1 */

// <00A1ABD2> ../public/mathlib/vector.h:1506
inline Vector CrossProduct(const Vector& a, const Vector& b)
{
} /* size: 0 */

// <05A103EF> ../public/mathlib/vector.h:1511
inline Vector ModifiedCrossProduct(const Vector& a, const Vector& b)
{
} /* size: 0 */

// <003DBA75> ../public/mathlib/vector.h:1517
inline void VectorMin(const Vector& a, const Vector& b, Vector& result)
{
} /* size: 0 */

// <00D256AD> ../public/mathlib/vector.h:1532
inline Vector VectorMin(const Vector& a, const Vector& b)
{
} /* size: 0 */

// <003DBA10> ../public/mathlib/vector.h:1537
inline Vector VectorMax(const Vector& a, const Vector& b)
{
} /* size: 0 */

// <05A10365> ../public/mathlib/vector.h:1569
inline bool VectorAnyGreater(const Vector& a, const Vector& b)
{
} /* size: 0 */

// <00B0B15A> ../public/mathlib/vector.h:1635
void VectorPerpendicularToVector(const Vector &, Vector *)
{
} /* size: 0 */

// <059D98A5> ../public/mathlib/vector.h:1657
// variable: 1
inline bool VectorIsNormalized(const Vector& vecIn, float flTolerance)
{
	float flLen; // 1659
} /* size: 0, variables: 1 */

// <0002630E> ../public/mathlib/vector.h:1717
// member functions: 10
// member variable: 1
// static member variables: 3
// class size: 4
class RotationAxis {
	static const class RotationAxis Pitch; /* 0 0 */
	static const class RotationAxis Yaw; /* 0 0 */
	static const class RotationAxis Roll; /* 0 0 */
	/* ../public/mathlib/vector.h:1724 */
	bool IsValid(const RotationAxis* );
	/* ../public/mathlib/vector.h:1727 */
	RotationAxis& operator=(RotationAxis* , const RotationAxis& );
	/* ../public/mathlib/vector.h:1730 */
	bool operator==(const RotationAxis* , const RotationAxis& );
	/* ../public/mathlib/vector.h:1731 */
	bool operator!=(const RotationAxis* , const RotationAxis& );
private:
	/* ../public/mathlib/vector.h:1734 */
	void RotationAxis(RotationAxis* , int);
	int m_nAxisID; /* 0 4 */
	bool IsValid(const class RotationAxis  *); /* linkage=_ZNK12RotationAxis7IsValidEv */
	class RotationAxis & operator=(class RotationAxis *, const class RotationAxis  &); /* linkage=_ZN12RotationAxisaSERKS_ */
	bool operator==(const class RotationAxis  *, const class RotationAxis  &); /* linkage=_ZNK12RotationAxiseqERKS_ */
	bool operator!=(const class RotationAxis  *, const class RotationAxis  &); /* linkage=_ZNK12RotationAxisneERKS_ */
	void RotationAxis(class RotationAxis *, int); /* linkage=_ZN12RotationAxisC4Ei */
};

// <057EC9B5> ../../public/mathlib/vector.h:1717
// member functions: 10
// member variable: 1
// static member variables: 3
// class size: 4
class RotationAxis {
	static const class RotationAxis Pitch; /* 0 0 */
	static const class RotationAxis Yaw; /* 0 0 */
	static const class RotationAxis Roll; /* 0 0 */
	/* ../../public/mathlib/vector.h:1724 */
	bool IsValid(const RotationAxis* );
	/* ../../public/mathlib/vector.h:1727 */
	RotationAxis& operator=(RotationAxis* , const RotationAxis& );
	/* ../../public/mathlib/vector.h:1730 */
	bool operator==(const RotationAxis* , const RotationAxis& );
	/* ../../public/mathlib/vector.h:1731 */
	bool operator!=(const RotationAxis* , const RotationAxis& );
private:
	/* ../../public/mathlib/vector.h:1734 */
	void RotationAxis(RotationAxis* , int);
	int m_nAxisID; /* 0 4 */
	bool IsValid(const class RotationAxis  *); /* linkage=_ZNK12RotationAxis7IsValidEv */
	class RotationAxis & operator=(class RotationAxis *, const class RotationAxis  &); /* linkage=_ZN12RotationAxisaSERKS_ */
	bool operator==(const class RotationAxis  *, const class RotationAxis  &); /* linkage=_ZNK12RotationAxiseqERKS_ */
	bool operator!=(const class RotationAxis  *, const class RotationAxis  &); /* linkage=_ZNK12RotationAxisneERKS_ */
	void RotationAxis(class RotationAxis *, int); /* linkage=_ZN12RotationAxisC4Ei */
};

// <05A5FBD5> ../public/mathlib/vector.h:1734
void RotationAxis::RotationAxis(int nAxisID)
{
} /* size: 0 */

// <05A5FBAF> ../public/mathlib/vector.h:1734
inline void RotationAxis::RotationAxis(int nAxisID)
{
} /* size: 0 */

// <00026434> ../public/mathlib/vector.h:1784
// member functions: 84
// member variables: 4
// static member variable: 1
// class size: 16
class Quaternion {
	static class Quaternion qIdentity; /* 0 0 */
	/* ../public/mathlib/vector.h:1798 */
	void Quaternion(Quaternion* );
	/* ../public/mathlib/vector.h:1800 */
	void Quaternion(Quaternion* , vec_t, vec_t, vec_t, vec_t);
	/* ../public/mathlib/vector.h:1801 */
	void Quaternion(Quaternion* , const Vector& , float);
	/* ../public/mathlib/vector.h:1802 */
	void Quaternion(Quaternion* , const RadianEuler& );
	/* ../public/mathlib/vector.h:1803 */
	void Quaternion(Quaternion* , const DegreeEuler& );
	/* ../public/mathlib/vector.h:1804 */
	void Quaternion(Quaternion* , const QAngle& );
	/* ../public/mathlib/vector.h:1806 */
	void Init(Quaternion* , vec_t, vec_t, vec_t, vec_t);
	/* ../public/mathlib/vector.h:1807 */
	void Init(Quaternion* , const Vector& , float);
	/* ../public/mathlib/vector.h:1809 */
	bool IsValid(const Quaternion* );
	/* ../public/mathlib/vector.h:1810 */
	void Invalidate(Quaternion* );
	/* ../public/mathlib/vector.h:1813 */
	vec_t operator[](const Quaternion* , int);
	/* ../public/mathlib/vector.h:1814 */
	vec_t& operator[](Quaternion* , int);
	/* ../public/mathlib/vector.h:1816 */
	vec_t* Base(Quaternion* );
	/* ../public/mathlib/vector.h:1817 */
	const vec_t* Base(const Quaternion* );
	/* ../public/mathlib/vector.h:1820 */
	Quaternion& operator*=(Quaternion* , const Quaternion& );
	/* ../public/mathlib/vector.h:1821 */
	Quaternion& operator+=(Quaternion* , const Quaternion& );
	/* ../public/mathlib/vector.h:1822 */
	Quaternion& operator-=(Quaternion* , const Quaternion& );
	/* ../public/mathlib/vector.h:1823 */
	Quaternion& operator*=(Quaternion* , float);
	/* ../public/mathlib/vector.h:1824 */
	Quaternion& operator/=(Quaternion* , float);
	/* ../public/mathlib/vector.h:1827 */
	Quaternion operator+(const Quaternion* );
	/* ../public/mathlib/vector.h:1828 */
	Quaternion operator-(const Quaternion* );
	/* ../public/mathlib/vector.h:1831 */
	bool operator==(const Quaternion* , const Quaternion& );
	/* ../public/mathlib/vector.h:1832 */
	bool operator!=(const Quaternion* , const Quaternion& );
	/* ../public/mathlib/vector.h:1835 */
	const Vector GetForward(const Quaternion* );
	/* ../public/mathlib/vector.h:1836 */
	const Vector GetLeft(const Quaternion* );
	/* ../public/mathlib/vector.h:1837 */
	const Vector GetUp(const Quaternion* );
	/* ../public/mathlib/vector.h:1840 */
	QAngle ToQAngle(const Quaternion* );
	/* ../public/mathlib/vector.h:1841 */
	matrix3x4_t ToMatrix(const Quaternion* , const Vector& );
	/* ../public/mathlib/vector.h:1844 */
	Vector& ImaginaryPart(Quaternion* );
	/* ../public/mathlib/vector.h:1845 */
	const Vector& ImaginaryPart(const Quaternion* );
	/* ../public/mathlib/vector.h:1846 */
	float& RealPart(Quaternion* );
	/* ../public/mathlib/vector.h:1847 */
	float RealPart(const Quaternion* );
	/* ../public/mathlib/vector.h:1849 */
	float Length(const Quaternion* );
	/* ../public/mathlib/vector.h:1852 */
	Vector& v(Quaternion* );
	/* ../public/mathlib/vector.h:1853 */
	Vector v(const Quaternion* );
	/* ../public/mathlib/vector.h:1854 */
	float& s(Quaternion* );
	/* ../public/mathlib/vector.h:1855 */
	float s(const Quaternion* );
	vec_t x; /* 0 4 */
	vec_t y; /* 4 4 */
	vec_t z; /* 8 4 */
	vec_t w; /* 12 4 */
	void Quaternion(class Quaternion *); /* linkage=_ZN10QuaternionC4Ev */
	void Quaternion(class Quaternion *, vec_t, vec_t, vec_t, vec_t); /* linkage=_ZN10QuaternionC4Effff */
	void Quaternion(class Quaternion *, const class Vector__1  &, float); /* linkage=_ZN10QuaternionC4ERK6Vectorf */
	void Quaternion(class Quaternion *, const class RadianEuler  &); /* linkage=_ZN10QuaternionC4ERK11RadianEuler */
	void Quaternion(class Quaternion *, const class DegreeEuler  &); /* linkage=_ZN10QuaternionC4ERK11DegreeEuler */
	void Quaternion(class Quaternion *, const class QAngle  &); /* linkage=_ZN10QuaternionC4ERK6QAngle */
	void Init(class Quaternion *, vec_t, vec_t, vec_t, vec_t); /* linkage=_ZN10Quaternion4InitEffff */
	void Init(class Quaternion *, const class Vector__1  &, float); /* linkage=_ZN10Quaternion4InitERK6Vectorf */
	bool IsValid(const class Quaternion  *); /* linkage=_ZNK10Quaternion7IsValidEv */
	void Invalidate(class Quaternion *); /* linkage=_ZN10Quaternion10InvalidateEv */
	vec_t operator[](const class Quaternion  *, int); /* linkage=_ZNK10QuaternionixEi */
	vec_t & operator[](class Quaternion *, int); /* linkage=_ZN10QuaternionixEi */
	vec_t * Base(class Quaternion *); /* linkage=_ZN10Quaternion4BaseEv */
	const vec_t  * Base(const class Quaternion  *); /* linkage=_ZNK10Quaternion4BaseEv */
	class Quaternion & operator*=(class Quaternion *, const class Quaternion  &); /* linkage=_ZN10QuaternionmLERKS_ */
	class Quaternion & operator+=(class Quaternion *, const class Quaternion  &); /* linkage=_ZN10QuaternionpLERKS_ */
	class Quaternion & operator-=(class Quaternion *, const class Quaternion  &); /* linkage=_ZN10QuaternionmIERKS_ */
	class Quaternion & operator*=(class Quaternion *, float); /* linkage=_ZN10QuaternionmLEf */
	class Quaternion & operator/=(class Quaternion *, float); /* linkage=_ZN10QuaterniondVEf */
	class Quaternion operator+(const class Quaternion  *); /* linkage=_ZNK10QuaternionpsEv */
	class Quaternion operator-(const class Quaternion  *); /* linkage=_ZNK10QuaternionngEv */
	bool operator==(const class Quaternion  *, const class Quaternion  &); /* linkage=_ZNK10QuaternioneqERKS_ */
	bool operator!=(const class Quaternion  *, const class Quaternion  &); /* linkage=_ZNK10QuaternionneERKS_ */
	const class Vector__1  GetForward(const class Quaternion  *); /* linkage=_ZNK10Quaternion10GetForwardEv */
	const class Vector__1  GetLeft(const class Quaternion  *); /* linkage=_ZNK10Quaternion7GetLeftEv */
	/* <59dc4a5> mathlib/mathlib.cpp:2652 */
	const class Vector__1  GetUp(const class Quaternion  *); /* linkage=_ZNK10Quaternion5GetUpEv */
	class QAngle ToQAngle(const class Quaternion  *); /* linkage=_ZNK10Quaternion8ToQAngleEv */
	class matrix3x4_t ToMatrix(const class Quaternion  *, const class Vector__1  &); /* linkage=_ZNK10Quaternion8ToMatrixERK6Vector */
	class Vector__1 & ImaginaryPart(class Quaternion *); /* linkage=_ZN10Quaternion13ImaginaryPartEv */
	const class Vector__1  & ImaginaryPart(const class Quaternion  *); /* linkage=_ZNK10Quaternion13ImaginaryPartEv */
	float & RealPart(class Quaternion *); /* linkage=_ZN10Quaternion8RealPartEv */
	float RealPart(const class Quaternion  *); /* linkage=_ZNK10Quaternion8RealPartEv */
	float Length(const class Quaternion  *); /* linkage=_ZNK10Quaternion6LengthEv */
	class Vector__1 & v(class Quaternion *); /* linkage=_ZN10Quaternion1vEv */
	class Vector__1 v(const class Quaternion  *); /* linkage=_ZNK10Quaternion1vEv */
	float & s(class Quaternion *); /* linkage=_ZN10Quaternion1sEv */
	float s(const class Quaternion  *); /* linkage=_ZNK10Quaternion1sEv */
	void Quaternion(class Quaternion *, const class Vector  &, float); /* linkage=_ZN10QuaternionC4ERK6Vectorf */
	void Init(class Quaternion *, const class Vector  &, float); /* linkage=_ZN10Quaternion4InitERK6Vectorf */
	const class Vector  GetForward(const class Quaternion  *); /* linkage=_ZNK10Quaternion10GetForwardEv */
	const class Vector  GetLeft(const class Quaternion  *); /* linkage=_ZNK10Quaternion7GetLeftEv */
	/* <59dc4a5> mathlib/mathlib.cpp:2652 */
	const class Vector  GetUp(const class Quaternion  *); /* linkage=_ZNK10Quaternion5GetUpEv */
	class matrix3x4_t ToMatrix(const class Quaternion  *, const class Vector  &); /* linkage=_ZNK10Quaternion8ToMatrixERK6Vector */
	class Vector & ImaginaryPart(class Quaternion *); /* linkage=_ZN10Quaternion13ImaginaryPartEv */
	const class Vector  & ImaginaryPart(const class Quaternion  *); /* linkage=_ZNK10Quaternion13ImaginaryPartEv */
	class Vector & v(class Quaternion *); /* linkage=_ZN10Quaternion1vEv */
	class Vector v(const class Quaternion  *); /* linkage=_ZNK10Quaternion1vEv */
};

// <057ECADB> ../../public/mathlib/vector.h:1784
// member functions: 84
// member variables: 4
// static member variable: 1
// class size: 16
class Quaternion {
	static class Quaternion qIdentity; /* 0 0 */
	/* ../../public/mathlib/vector.h:1798 */
	void Quaternion(Quaternion* );
	/* ../../public/mathlib/vector.h:1800 */
	void Quaternion(Quaternion* , vec_t, vec_t, vec_t, vec_t);
	/* ../../public/mathlib/vector.h:1801 */
	void Quaternion(Quaternion* , const Vector& , float);
	/* ../../public/mathlib/vector.h:1802 */
	void Quaternion(Quaternion* , const RadianEuler& );
	/* ../../public/mathlib/vector.h:1803 */
	void Quaternion(Quaternion* , const DegreeEuler& );
	/* ../../public/mathlib/vector.h:1804 */
	void Quaternion(Quaternion* , const QAngle& );
	/* ../../public/mathlib/vector.h:1806 */
	void Init(Quaternion* , vec_t, vec_t, vec_t, vec_t);
	/* ../../public/mathlib/vector.h:1807 */
	void Init(Quaternion* , const Vector& , float);
	/* ../../public/mathlib/vector.h:1809 */
	bool IsValid(const Quaternion* );
	/* ../../public/mathlib/vector.h:1810 */
	void Invalidate(Quaternion* );
	/* ../../public/mathlib/vector.h:1813 */
	vec_t operator[](const Quaternion* , int);
	/* ../../public/mathlib/vector.h:1814 */
	vec_t& operator[](Quaternion* , int);
	/* ../../public/mathlib/vector.h:1816 */
	vec_t* Base(Quaternion* );
	/* ../../public/mathlib/vector.h:1817 */
	const vec_t* Base(const Quaternion* );
	/* ../../public/mathlib/vector.h:1820 */
	Quaternion& operator*=(Quaternion* , const Quaternion& );
	/* ../../public/mathlib/vector.h:1821 */
	Quaternion& operator+=(Quaternion* , const Quaternion& );
	/* ../../public/mathlib/vector.h:1822 */
	Quaternion& operator-=(Quaternion* , const Quaternion& );
	/* ../../public/mathlib/vector.h:1823 */
	Quaternion& operator*=(Quaternion* , float);
	/* ../../public/mathlib/vector.h:1824 */
	Quaternion& operator/=(Quaternion* , float);
	/* ../../public/mathlib/vector.h:1827 */
	Quaternion operator+(const Quaternion* );
	/* ../../public/mathlib/vector.h:1828 */
	Quaternion operator-(const Quaternion* );
	/* ../../public/mathlib/vector.h:1831 */
	bool operator==(const Quaternion* , const Quaternion& );
	/* ../../public/mathlib/vector.h:1832 */
	bool operator!=(const Quaternion* , const Quaternion& );
	/* ../../public/mathlib/vector.h:1835 */
	const Vector GetForward(const Quaternion* );
	/* ../../public/mathlib/vector.h:1836 */
	const Vector GetLeft(const Quaternion* );
	/* ../../public/mathlib/vector.h:1837 */
	const Vector GetUp(const Quaternion* );
	/* ../../public/mathlib/vector.h:1840 */
	QAngle ToQAngle(const Quaternion* );
	/* ../../public/mathlib/vector.h:1841 */
	matrix3x4_t ToMatrix(const Quaternion* , const Vector& );
	/* ../../public/mathlib/vector.h:1844 */
	Vector& ImaginaryPart(Quaternion* );
	/* ../../public/mathlib/vector.h:1845 */
	const Vector& ImaginaryPart(const Quaternion* );
	/* ../../public/mathlib/vector.h:1846 */
	float& RealPart(Quaternion* );
	/* ../../public/mathlib/vector.h:1847 */
	float RealPart(const Quaternion* );
	/* ../../public/mathlib/vector.h:1849 */
	float Length(const Quaternion* );
	/* ../../public/mathlib/vector.h:1852 */
	Vector& v(Quaternion* );
	/* ../../public/mathlib/vector.h:1853 */
	Vector v(const Quaternion* );
	/* ../../public/mathlib/vector.h:1854 */
	float& s(Quaternion* );
	/* ../../public/mathlib/vector.h:1855 */
	float s(const Quaternion* );
	vec_t x; /* 0 4 */
	vec_t y; /* 4 4 */
	vec_t z; /* 8 4 */
	vec_t w; /* 12 4 */
	void Quaternion(class Quaternion *); /* linkage=_ZN10QuaternionC4Ev */
	void Quaternion(class Quaternion *, vec_t, vec_t, vec_t, vec_t); /* linkage=_ZN10QuaternionC4Effff */
	void Quaternion(class Quaternion *, const class Vector__1  &, float); /* linkage=_ZN10QuaternionC4ERK6Vectorf */
	void Quaternion(class Quaternion *, const class RadianEuler  &); /* linkage=_ZN10QuaternionC4ERK11RadianEuler */
	void Quaternion(class Quaternion *, const class DegreeEuler  &); /* linkage=_ZN10QuaternionC4ERK11DegreeEuler */
	void Quaternion(class Quaternion *, const class QAngle  &); /* linkage=_ZN10QuaternionC4ERK6QAngle */
	void Init(class Quaternion *, vec_t, vec_t, vec_t, vec_t); /* linkage=_ZN10Quaternion4InitEffff */
	void Init(class Quaternion *, const class Vector__1  &, float); /* linkage=_ZN10Quaternion4InitERK6Vectorf */
	bool IsValid(const class Quaternion  *); /* linkage=_ZNK10Quaternion7IsValidEv */
	void Invalidate(class Quaternion *); /* linkage=_ZN10Quaternion10InvalidateEv */
	vec_t operator[](const class Quaternion  *, int); /* linkage=_ZNK10QuaternionixEi */
	vec_t & operator[](class Quaternion *, int); /* linkage=_ZN10QuaternionixEi */
	vec_t * Base(class Quaternion *); /* linkage=_ZN10Quaternion4BaseEv */
	const vec_t  * Base(const class Quaternion  *); /* linkage=_ZNK10Quaternion4BaseEv */
	class Quaternion & operator*=(class Quaternion *, const class Quaternion  &); /* linkage=_ZN10QuaternionmLERKS_ */
	class Quaternion & operator+=(class Quaternion *, const class Quaternion  &); /* linkage=_ZN10QuaternionpLERKS_ */
	class Quaternion & operator-=(class Quaternion *, const class Quaternion  &); /* linkage=_ZN10QuaternionmIERKS_ */
	class Quaternion & operator*=(class Quaternion *, float); /* linkage=_ZN10QuaternionmLEf */
	class Quaternion & operator/=(class Quaternion *, float); /* linkage=_ZN10QuaterniondVEf */
	class Quaternion operator+(const class Quaternion  *); /* linkage=_ZNK10QuaternionpsEv */
	class Quaternion operator-(const class Quaternion  *); /* linkage=_ZNK10QuaternionngEv */
	bool operator==(const class Quaternion  *, const class Quaternion  &); /* linkage=_ZNK10QuaternioneqERKS_ */
	bool operator!=(const class Quaternion  *, const class Quaternion  &); /* linkage=_ZNK10QuaternionneERKS_ */
	const class Vector__1  GetForward(const class Quaternion  *); /* linkage=_ZNK10Quaternion10GetForwardEv */
	const class Vector__1  GetLeft(const class Quaternion  *); /* linkage=_ZNK10Quaternion7GetLeftEv */
	/* <59dc4a5> mathlib/mathlib.cpp:2652 */
	const class Vector__1  GetUp(const class Quaternion  *); /* linkage=_ZNK10Quaternion5GetUpEv */
	class QAngle ToQAngle(const class Quaternion  *); /* linkage=_ZNK10Quaternion8ToQAngleEv */
	class matrix3x4_t ToMatrix(const class Quaternion  *, const class Vector__1  &); /* linkage=_ZNK10Quaternion8ToMatrixERK6Vector */
	class Vector__1 & ImaginaryPart(class Quaternion *); /* linkage=_ZN10Quaternion13ImaginaryPartEv */
	const class Vector__1  & ImaginaryPart(const class Quaternion  *); /* linkage=_ZNK10Quaternion13ImaginaryPartEv */
	float & RealPart(class Quaternion *); /* linkage=_ZN10Quaternion8RealPartEv */
	float RealPart(const class Quaternion  *); /* linkage=_ZNK10Quaternion8RealPartEv */
	float Length(const class Quaternion  *); /* linkage=_ZNK10Quaternion6LengthEv */
	class Vector__1 & v(class Quaternion *); /* linkage=_ZN10Quaternion1vEv */
	class Vector__1 v(const class Quaternion  *); /* linkage=_ZNK10Quaternion1vEv */
	float & s(class Quaternion *); /* linkage=_ZN10Quaternion1sEv */
	float s(const class Quaternion  *); /* linkage=_ZNK10Quaternion1sEv */
	void Quaternion(class Quaternion *, const class Vector  &, float); /* linkage=_ZN10QuaternionC4ERK6Vectorf */
	void Init(class Quaternion *, const class Vector  &, float); /* linkage=_ZN10Quaternion4InitERK6Vectorf */
	const class Vector  GetForward(const class Quaternion  *); /* linkage=_ZNK10Quaternion10GetForwardEv */
	const class Vector  GetLeft(const class Quaternion  *); /* linkage=_ZNK10Quaternion7GetLeftEv */
	/* <59dc4a5> mathlib/mathlib.cpp:2652 */
	const class Vector  GetUp(const class Quaternion  *); /* linkage=_ZNK10Quaternion5GetUpEv */
	class matrix3x4_t ToMatrix(const class Quaternion  *, const class Vector  &); /* linkage=_ZNK10Quaternion8ToMatrixERK6Vector */
	class Vector & ImaginaryPart(class Quaternion *); /* linkage=_ZN10Quaternion13ImaginaryPartEv */
	const class Vector  & ImaginaryPart(const class Quaternion  *); /* linkage=_ZNK10Quaternion13ImaginaryPartEv */
	class Vector & v(class Quaternion *); /* linkage=_ZN10Quaternion1vEv */
	class Vector v(const class Quaternion  *); /* linkage=_ZNK10Quaternion1vEv */
};

// <067E14AD> ../public/mathlib/vector.h:1798
void Quaternion::Quaternion()
{
} /* size: 0 */

// <067E1494> ../public/mathlib/vector.h:1798
inline void Quaternion::Quaternion()
{
} /* size: 0 */

// <06353A7F> ../public/mathlib/vector.h:1800
void Quaternion::Quaternion(vec_t ix, vec_t iy, vec_t iz, vec_t iw)
{
} /* size: 0 */

// <06353A36> ../public/mathlib/vector.h:1800
inline void Quaternion::Quaternion(vec_t ix, vec_t iy, vec_t iz, vec_t iw)
{
} /* size: 0 */

// <059D97B8> ../public/mathlib/vector.h:1806
inline void Quaternion::Init(vec_t ix, vec_t iy, vec_t iz, vec_t iw)
{
} /* size: 0 */

// <059D9785> ../public/mathlib/vector.h:1807
inline void Quaternion::Init(const Vector& vImaginaryPart, float flRealPart)
{
} /* size: 0 */

// <067E147B> ../public/mathlib/vector.h:1816
inline void Quaternion::Base()
{
} /* size: 0 */

// <059D9721> ../public/mathlib/vector.h:1845
inline void Quaternion::ImaginaryPart()
{
} /* size: 0 */

// <059D9708> ../public/mathlib/vector.h:1853
inline void Quaternion::v()
{
} /* size: 0 */

// <059D96EF> ../public/mathlib/vector.h:1855
inline void Quaternion::s()
{
} /* size: 0 */

// <02C477F8> ../public/mathlib/vector.h:1870
inline Quaternion Conjugate(const Quaternion& q)
{
} /* size: 0 */

// <00A1AAA0> ../public/mathlib/vector.h:1876
// variables: 2
inline Quaternion ShortestArc(const Vector& v1, const Vector& v2)
{
	Quaternion out; // 1878
	Vector m; // 1880
} /* size: 0, variables: 2 */

// <067E1454> ../public/mathlib/vector.h:1914
inline void Quaternion::operator[](int i)
{
} /* size: 0 */

// <00BB176D> ../public/mathlib/vector.h:1936
inline void Quaternion::operator==(const Quaternion& src)
{
} /* size: 0 */

// <02BC081F> ../public/mathlib/vector.h:2016
inline Quaternion operator-(const Quaternion& q1, const Quaternion& q2)
{
} /* size: 0 */

// <000269DB> ../public/mathlib/vector.h:2045
// member functions: 30
// member variables: 3
// class size: 12
class RadianEuler {
	/* ../public/mathlib/vector.h:2058 */
	void RadianEuler(RadianEuler* );
	/* ../public/mathlib/vector.h:2060 */
	void RadianEuler(RadianEuler* , vec_t, vec_t, vec_t);
	/* ../public/mathlib/vector.h:2061 */
	void RadianEuler(RadianEuler* , const Quaternion& );
	/* ../public/mathlib/vector.h:2062 */
	void RadianEuler(RadianEuler* , const QAngle& );
	/* ../public/mathlib/vector.h:2063 */
	void RadianEuler(RadianEuler* , const DegreeEuler& );
	/* ../public/mathlib/vector.h:2066 */
	void Init(RadianEuler* , vec_t, vec_t, vec_t);
	/* ../public/mathlib/vector.h:2069 */
	QAngle ToQAngle(const RadianEuler* );
	/* ../public/mathlib/vector.h:2070 */
	bool IsValid(const RadianEuler* );
	/* ../public/mathlib/vector.h:2071 */
	void Invalidate(RadianEuler* );
	/* ../public/mathlib/vector.h:2073 */
	vec_t* Base(RadianEuler* );
	/* ../public/mathlib/vector.h:2074 */
	const vec_t* Base(const RadianEuler* );
	/* ../public/mathlib/vector.h:2077 */
	vec_t operator[](const RadianEuler* , int);
	/* ../public/mathlib/vector.h:2078 */
	vec_t& operator[](RadianEuler* , int);
	/* ../public/mathlib/vector.h:2081 */
	vec_t operator[](const RadianEuler* , RotationAxis);
	/* ../public/mathlib/vector.h:2082 */
	vec_t& operator[](RadianEuler* , RotationAxis);
	vec_t x; /* 0 4 */
	vec_t y; /* 4 4 */
	vec_t z; /* 8 4 */
	void RadianEuler(class RadianEuler *); /* linkage=_ZN11RadianEulerC4Ev */
	void RadianEuler(class RadianEuler *, vec_t, vec_t, vec_t); /* linkage=_ZN11RadianEulerC4Efff */
	void RadianEuler(class RadianEuler *, const class Quaternion  &); /* linkage=_ZN11RadianEulerC4ERK10Quaternion */
	void RadianEuler(class RadianEuler *, const class QAngle  &); /* linkage=_ZN11RadianEulerC4ERK6QAngle */
	void RadianEuler(class RadianEuler *, const class DegreeEuler  &); /* linkage=_ZN11RadianEulerC4ERK11DegreeEuler */
	void Init(class RadianEuler *, vec_t, vec_t, vec_t); /* linkage=_ZN11RadianEuler4InitEfff */
	class QAngle ToQAngle(const class RadianEuler  *); /* linkage=_ZNK11RadianEuler8ToQAngleEv */
	bool IsValid(const class RadianEuler  *); /* linkage=_ZNK11RadianEuler7IsValidEv */
	void Invalidate(class RadianEuler *); /* linkage=_ZN11RadianEuler10InvalidateEv */
	vec_t * Base(class RadianEuler *); /* linkage=_ZN11RadianEuler4BaseEv */
	const vec_t  * Base(const class RadianEuler  *); /* linkage=_ZNK11RadianEuler4BaseEv */
	vec_t operator[](const class RadianEuler  *, int); /* linkage=_ZNK11RadianEulerixEi */
	vec_t & operator[](class RadianEuler *, int); /* linkage=_ZN11RadianEulerixEi */
	vec_t operator[](const class RadianEuler  *, class RotationAxis); /* linkage=_ZNK11RadianEulerixE12RotationAxis */
	vec_t & operator[](class RadianEuler *, class RotationAxis); /* linkage=_ZN11RadianEulerixE12RotationAxis */
};

// <057ED07D> ../../public/mathlib/vector.h:2045
// member functions: 30
// member variables: 3
// class size: 12
class RadianEuler {
	/* ../../public/mathlib/vector.h:2058 */
	void RadianEuler(RadianEuler* );
	/* ../../public/mathlib/vector.h:2060 */
	void RadianEuler(RadianEuler* , vec_t, vec_t, vec_t);
	/* ../../public/mathlib/vector.h:2061 */
	void RadianEuler(RadianEuler* , const Quaternion& );
	/* ../../public/mathlib/vector.h:2062 */
	void RadianEuler(RadianEuler* , const QAngle& );
	/* ../../public/mathlib/vector.h:2063 */
	void RadianEuler(RadianEuler* , const DegreeEuler& );
	/* ../../public/mathlib/vector.h:2066 */
	void Init(RadianEuler* , vec_t, vec_t, vec_t);
	/* ../../public/mathlib/vector.h:2069 */
	QAngle ToQAngle(const RadianEuler* );
	/* ../../public/mathlib/vector.h:2070 */
	bool IsValid(const RadianEuler* );
	/* ../../public/mathlib/vector.h:2071 */
	void Invalidate(RadianEuler* );
	/* ../../public/mathlib/vector.h:2073 */
	vec_t* Base(RadianEuler* );
	/* ../../public/mathlib/vector.h:2074 */
	const vec_t* Base(const RadianEuler* );
	/* ../../public/mathlib/vector.h:2077 */
	vec_t operator[](const RadianEuler* , int);
	/* ../../public/mathlib/vector.h:2078 */
	vec_t& operator[](RadianEuler* , int);
	/* ../../public/mathlib/vector.h:2081 */
	vec_t operator[](const RadianEuler* , RotationAxis);
	/* ../../public/mathlib/vector.h:2082 */
	vec_t& operator[](RadianEuler* , RotationAxis);
	vec_t x; /* 0 4 */
	vec_t y; /* 4 4 */
	vec_t z; /* 8 4 */
	void RadianEuler(class RadianEuler *); /* linkage=_ZN11RadianEulerC4Ev */
	void RadianEuler(class RadianEuler *, vec_t, vec_t, vec_t); /* linkage=_ZN11RadianEulerC4Efff */
	void RadianEuler(class RadianEuler *, const class Quaternion  &); /* linkage=_ZN11RadianEulerC4ERK10Quaternion */
	void RadianEuler(class RadianEuler *, const class QAngle  &); /* linkage=_ZN11RadianEulerC4ERK6QAngle */
	void RadianEuler(class RadianEuler *, const class DegreeEuler  &); /* linkage=_ZN11RadianEulerC4ERK11DegreeEuler */
	void Init(class RadianEuler *, vec_t, vec_t, vec_t); /* linkage=_ZN11RadianEuler4InitEfff */
	class QAngle ToQAngle(const class RadianEuler  *); /* linkage=_ZNK11RadianEuler8ToQAngleEv */
	bool IsValid(const class RadianEuler  *); /* linkage=_ZNK11RadianEuler7IsValidEv */
	void Invalidate(class RadianEuler *); /* linkage=_ZN11RadianEuler10InvalidateEv */
	vec_t * Base(class RadianEuler *); /* linkage=_ZN11RadianEuler4BaseEv */
	const vec_t  * Base(const class RadianEuler  *); /* linkage=_ZNK11RadianEuler4BaseEv */
	vec_t operator[](const class RadianEuler  *, int); /* linkage=_ZNK11RadianEulerixEi */
	vec_t & operator[](class RadianEuler *, int); /* linkage=_ZN11RadianEulerixEi */
	vec_t operator[](const class RadianEuler  *, class RotationAxis); /* linkage=_ZNK11RadianEulerixE12RotationAxis */
	vec_t & operator[](class RadianEuler *, class RotationAxis); /* linkage=_ZN11RadianEulerixE12RotationAxis */
};

// <0020EF93> ../public/mathlib/vector.h:2058
void RadianEuler::RadianEuler()
{
} /* size: 0 */

// <0020EF7A> ../public/mathlib/vector.h:2058
inline void RadianEuler::RadianEuler()
{
} /* size: 0 */

// <05A384D0> ../public/mathlib/vector.h:2060
void RadianEuler::RadianEuler(vec_t X, vec_t Y, vec_t Z)
{
} /* size: 0 */

// <05A38496> ../public/mathlib/vector.h:2060
inline void RadianEuler::RadianEuler(vec_t X, vec_t Y, vec_t Z)
{
} /* size: 0 */

// <05A5982F> ../public/mathlib/vector.h:2066
inline void RadianEuler::Init(vec_t ix, vec_t iy, vec_t iz)
{
} /* size: 0 */

// <0541A73F> ../public/mathlib/vector.h:2105
void Quaternion::Quaternion(const RadianEuler& angle)
{
} /* size: 0 */

// <0541A716> ../public/mathlib/vector.h:2105
inline void Quaternion::Quaternion(const RadianEuler& angle)
{
} /* size: 0 */

// <059D95EA> ../public/mathlib/vector.h:2110
inline void Quaternion::IsValid()
{
} /* size: 0 */

// <00D25530> ../public/mathlib/vector.h:2110
void Quaternion::IsValid()
{
} /* size: 0 */

// <059D95CE> ../public/mathlib/vector.h:2115
inline void Quaternion::Length()
{
} /* size: 0 */

// <00B52A0C> ../public/mathlib/vector.h:2120
inline float QuaternionLength(const Quaternion& q)
{
} /* size: 0 */

// <04BDEC22> ../public/mathlib/vector.h:2137
void RadianEuler::RadianEuler(const Quaternion& q)
{
} /* size: 0 */

// <04BDEBFB> ../public/mathlib/vector.h:2137
inline void RadianEuler::RadianEuler(const Quaternion& q)
{
} /* size: 0 */

// <059D958F> ../public/mathlib/vector.h:2159
inline void RadianEuler::IsValid()
{
} /* size: 0 */

// <0541A6EF> ../public/mathlib/vector.h:2173
inline void RadianEuler::operator[](int i)
{
} /* size: 0 */

// <05A38451> ../public/mathlib/vector.h:2186
// variable: 1
inline void RadianEuler::operator[](RotationAxis axis)
{
	const int   axisMap; // 2189
} /* size: 0, variables: 1 */

// <05A383F7> ../public/mathlib/vector.h:2194
// variable: 1
inline void RadianEuler::operator[](RotationAxis axis)
{
	const int   axisMap; // 2197
} /* size: 0, variables: 1 */

// <00026C42> ../public/mathlib/vector.h:2205
// member functions: 34
// member variables: 3
// class size: 12
class DegreeEuler {
	/* ../public/mathlib/vector.h:2217 */
	void DegreeEuler(DegreeEuler* );
	/* ../public/mathlib/vector.h:2219 */
	void DegreeEuler(DegreeEuler* , vec_t, vec_t, vec_t);
	/* ../public/mathlib/vector.h:2220 */
	void DegreeEuler(DegreeEuler* , const Quaternion& );
	/* ../public/mathlib/vector.h:2221 */
	void DegreeEuler(DegreeEuler* , const QAngle& );
	/* ../public/mathlib/vector.h:2222 */
	void DegreeEuler(DegreeEuler* , const RadianEuler& );
	/* ../public/mathlib/vector.h:2225 */
	void Init(DegreeEuler* , vec_t, vec_t, vec_t);
	/* ../public/mathlib/vector.h:2227 */
	QAngle ToQAngle(const DegreeEuler* );
	/* ../public/mathlib/vector.h:2230 */
	bool IsValid(const DegreeEuler* );
	/* ../public/mathlib/vector.h:2231 */
	void Invalidate(DegreeEuler* );
	/* ../public/mathlib/vector.h:2233 */
	vec_t* Base(DegreeEuler* );
	/* ../public/mathlib/vector.h:2234 */
	const vec_t* Base(const DegreeEuler* );
	/* ../public/mathlib/vector.h:2237 */
	vec_t operator[](const DegreeEuler* , int);
	/* ../public/mathlib/vector.h:2238 */
	vec_t& operator[](DegreeEuler* , int);
	/* ../public/mathlib/vector.h:2241 */
	vec_t operator[](const DegreeEuler* , RotationAxis);
	/* ../public/mathlib/vector.h:2242 */
	vec_t& operator[](DegreeEuler* , RotationAxis);
	/* ../public/mathlib/vector.h:2245 */
	bool operator==(const DegreeEuler* , const DegreeEuler& );
	/* ../public/mathlib/vector.h:2246 */
	bool operator!=(const DegreeEuler* , const DegreeEuler& );
	vec_t x; /* 0 4 */
	vec_t y; /* 4 4 */
	vec_t z; /* 8 4 */
	void DegreeEuler(class DegreeEuler *); /* linkage=_ZN11DegreeEulerC4Ev */
	void DegreeEuler(class DegreeEuler *, vec_t, vec_t, vec_t); /* linkage=_ZN11DegreeEulerC4Efff */
	void DegreeEuler(class DegreeEuler *, const class Quaternion  &); /* linkage=_ZN11DegreeEulerC4ERK10Quaternion */
	void DegreeEuler(class DegreeEuler *, const class QAngle  &); /* linkage=_ZN11DegreeEulerC4ERK6QAngle */
	void DegreeEuler(class DegreeEuler *, const class RadianEuler  &); /* linkage=_ZN11DegreeEulerC4ERK11RadianEuler */
	void Init(class DegreeEuler *, vec_t, vec_t, vec_t); /* linkage=_ZN11DegreeEuler4InitEfff */
	class QAngle ToQAngle(const class DegreeEuler  *); /* linkage=_ZNK11DegreeEuler8ToQAngleEv */
	bool IsValid(const class DegreeEuler  *); /* linkage=_ZNK11DegreeEuler7IsValidEv */
	void Invalidate(class DegreeEuler *); /* linkage=_ZN11DegreeEuler10InvalidateEv */
	vec_t * Base(class DegreeEuler *); /* linkage=_ZN11DegreeEuler4BaseEv */
	const vec_t  * Base(const class DegreeEuler  *); /* linkage=_ZNK11DegreeEuler4BaseEv */
	vec_t operator[](const class DegreeEuler  *, int); /* linkage=_ZNK11DegreeEulerixEi */
	vec_t & operator[](class DegreeEuler *, int); /* linkage=_ZN11DegreeEulerixEi */
	vec_t operator[](const class DegreeEuler  *, class RotationAxis); /* linkage=_ZNK11DegreeEulerixE12RotationAxis */
	vec_t & operator[](class DegreeEuler *, class RotationAxis); /* linkage=_ZN11DegreeEulerixE12RotationAxis */
	bool operator==(const class DegreeEuler  *, const class DegreeEuler  &); /* linkage=_ZNK11DegreeEulereqERKS_ */
	bool operator!=(const class DegreeEuler  *, const class DegreeEuler  &); /* linkage=_ZNK11DegreeEulerneERKS_ */
};

// <057ED2E4> ../../public/mathlib/vector.h:2205
// member functions: 34
// member variables: 3
// class size: 12
class DegreeEuler {
	/* ../../public/mathlib/vector.h:2217 */
	void DegreeEuler(DegreeEuler* );
	/* ../../public/mathlib/vector.h:2219 */
	void DegreeEuler(DegreeEuler* , vec_t, vec_t, vec_t);
	/* ../../public/mathlib/vector.h:2220 */
	void DegreeEuler(DegreeEuler* , const Quaternion& );
	/* ../../public/mathlib/vector.h:2221 */
	void DegreeEuler(DegreeEuler* , const QAngle& );
	/* ../../public/mathlib/vector.h:2222 */
	void DegreeEuler(DegreeEuler* , const RadianEuler& );
	/* ../../public/mathlib/vector.h:2225 */
	void Init(DegreeEuler* , vec_t, vec_t, vec_t);
	/* ../../public/mathlib/vector.h:2227 */
	QAngle ToQAngle(const DegreeEuler* );
	/* ../../public/mathlib/vector.h:2230 */
	bool IsValid(const DegreeEuler* );
	/* ../../public/mathlib/vector.h:2231 */
	void Invalidate(DegreeEuler* );
	/* ../../public/mathlib/vector.h:2233 */
	vec_t* Base(DegreeEuler* );
	/* ../../public/mathlib/vector.h:2234 */
	const vec_t* Base(const DegreeEuler* );
	/* ../../public/mathlib/vector.h:2237 */
	vec_t operator[](const DegreeEuler* , int);
	/* ../../public/mathlib/vector.h:2238 */
	vec_t& operator[](DegreeEuler* , int);
	/* ../../public/mathlib/vector.h:2241 */
	vec_t operator[](const DegreeEuler* , RotationAxis);
	/* ../../public/mathlib/vector.h:2242 */
	vec_t& operator[](DegreeEuler* , RotationAxis);
	/* ../../public/mathlib/vector.h:2245 */
	bool operator==(const DegreeEuler* , const DegreeEuler& );
	/* ../../public/mathlib/vector.h:2246 */
	bool operator!=(const DegreeEuler* , const DegreeEuler& );
	vec_t x; /* 0 4 */
	vec_t y; /* 4 4 */
	vec_t z; /* 8 4 */
	void DegreeEuler(class DegreeEuler *); /* linkage=_ZN11DegreeEulerC4Ev */
	void DegreeEuler(class DegreeEuler *, vec_t, vec_t, vec_t); /* linkage=_ZN11DegreeEulerC4Efff */
	void DegreeEuler(class DegreeEuler *, const class Quaternion  &); /* linkage=_ZN11DegreeEulerC4ERK10Quaternion */
	void DegreeEuler(class DegreeEuler *, const class QAngle  &); /* linkage=_ZN11DegreeEulerC4ERK6QAngle */
	void DegreeEuler(class DegreeEuler *, const class RadianEuler  &); /* linkage=_ZN11DegreeEulerC4ERK11RadianEuler */
	void Init(class DegreeEuler *, vec_t, vec_t, vec_t); /* linkage=_ZN11DegreeEuler4InitEfff */
	class QAngle ToQAngle(const class DegreeEuler  *); /* linkage=_ZNK11DegreeEuler8ToQAngleEv */
	bool IsValid(const class DegreeEuler  *); /* linkage=_ZNK11DegreeEuler7IsValidEv */
	void Invalidate(class DegreeEuler *); /* linkage=_ZN11DegreeEuler10InvalidateEv */
	vec_t * Base(class DegreeEuler *); /* linkage=_ZN11DegreeEuler4BaseEv */
	const vec_t  * Base(const class DegreeEuler  *); /* linkage=_ZNK11DegreeEuler4BaseEv */
	vec_t operator[](const class DegreeEuler  *, int); /* linkage=_ZNK11DegreeEulerixEi */
	vec_t & operator[](class DegreeEuler *, int); /* linkage=_ZN11DegreeEulerixEi */
	vec_t operator[](const class DegreeEuler  *, class RotationAxis); /* linkage=_ZNK11DegreeEulerixE12RotationAxis */
	vec_t & operator[](class DegreeEuler *, class RotationAxis); /* linkage=_ZN11DegreeEulerixE12RotationAxis */
	bool operator==(const class DegreeEuler  *, const class DegreeEuler  &); /* linkage=_ZNK11DegreeEulereqERKS_ */
	bool operator!=(const class DegreeEuler  *, const class DegreeEuler  &); /* linkage=_ZNK11DegreeEulerneERKS_ */
};

// <0020EF63> ../public/mathlib/vector.h:2217
void DegreeEuler::DegreeEuler()
{
} /* size: 0 */

// <0020EF4A> ../public/mathlib/vector.h:2217
inline void DegreeEuler::DegreeEuler()
{
} /* size: 0 */

// <0273DBD8> ../public/mathlib/vector.h:2225
inline void DegreeEuler::Init(vec_t ix, vec_t iy, vec_t iz)
{
} /* size: 0 */

// <0273DBB0> ../public/mathlib/vector.h:2286
// variable: 1
void DegreeEuler::DegreeEuler(const Quaternion& q)
{
	{
		RadianEuler radians; // 2288
	}
} /* size: 0 */

// <0273DB7A> ../public/mathlib/vector.h:2286
// variable: 1
inline void DegreeEuler::DegreeEuler(const Quaternion& q)
{
	{
		RadianEuler radians; // 2288
	}
} /* size: 0 */

// <00026EF7> ../public/mathlib/vector.h:2362
// member functions: 62
// member variables: 3
// static member variable: 1
// class size: 12
class QAngle {
	static const class QAngle vZero; /* 0 0 */
	vec_t x; /* 0 4 */
	vec_t y; /* 4 4 */
	vec_t z; /* 8 4 */
	/* ../public/mathlib/vector.h:2376 */
	void QAngle(QAngle* );
	/* ../public/mathlib/vector.h:2378 */
	void QAngle(QAngle* , vec_t, vec_t, vec_t);
	/* ../public/mathlib/vector.h:2382 */
	void Init(QAngle* , vec_t, vec_t, vec_t);
	/* ../public/mathlib/vector.h:2383 */
	void Random(QAngle* , vec_t, vec_t);
	/* ../public/mathlib/vector.h:2386 */
	bool IsValid(const QAngle* );
	/* ../public/mathlib/vector.h:2387 */
	void Invalidate(QAngle* );
	/* ../public/mathlib/vector.h:2390 */
	vec_t operator[](const QAngle* , int);
	/* ../public/mathlib/vector.h:2391 */
	vec_t& operator[](QAngle* , int);
	/* ../public/mathlib/vector.h:2394 */
	vec_t operator[](const QAngle* , RotationAxis);
	/* ../public/mathlib/vector.h:2395 */
	vec_t& operator[](QAngle* , RotationAxis);
	/* ../public/mathlib/vector.h:2398 */
	vec_t* Base(QAngle* );
	/* ../public/mathlib/vector.h:2399 */
	const vec_t* Base(const QAngle* );
	/* ../public/mathlib/vector.h:2402 */
	bool operator==(const QAngle* , const QAngle& );
	/* ../public/mathlib/vector.h:2403 */
	bool operator!=(const QAngle* , const QAngle& );
	/* ../public/mathlib/vector.h:2406 */
	QAngle& operator+=(QAngle* , const QAngle& );
	/* ../public/mathlib/vector.h:2407 */
	QAngle& operator-=(QAngle* , const QAngle& );
	/* ../public/mathlib/vector.h:2408 */
	QAngle& operator*=(QAngle* , const QAngle& );
	/* ../public/mathlib/vector.h:2409 */
	QAngle& operator*=(QAngle* , float);
	/* ../public/mathlib/vector.h:2410 */
	QAngle& operator/=(QAngle* , float);
	/* ../public/mathlib/vector.h:2413 */
	vec_t Length(const QAngle* );
	/* ../public/mathlib/vector.h:2414 */
	vec_t LengthSqr(const QAngle* );
	/* ../public/mathlib/vector.h:2420 */
	QAngle& operator=(QAngle* , const QAngle& );
	/* ../public/mathlib/vector.h:2422 */
	void Normalize(QAngle* );
	/* ../public/mathlib/vector.h:2423 */
	void NormalizePositive(QAngle* );
	/* ../public/mathlib/vector.h:2425 */
	matrix3x4_t ToMatrix(const QAngle* );
	/* ../public/mathlib/vector.h:2426 */
	Quaternion ToQuaternion(const QAngle* );
	/* ../public/mathlib/vector.h:2431 */
	QAngle operator-(const QAngle* );
	/* ../public/mathlib/vector.h:2433 */
	QAngle operator+(const QAngle* , const QAngle& );
	/* ../public/mathlib/vector.h:2434 */
	QAngle operator-(const QAngle* , const QAngle& );
	/* ../public/mathlib/vector.h:2435 */
	QAngle operator*(const QAngle* , float);
	/* ../public/mathlib/vector.h:2436 */
	QAngle operator/(const QAngle* , float);
	void QAngle(class QAngle *); /* linkage=_ZN6QAngleC4Ev */
	void QAngle(class QAngle *, vec_t, vec_t, vec_t); /* linkage=_ZN6QAngleC4Efff */
	void Init(class QAngle *, vec_t, vec_t, vec_t); /* linkage=_ZN6QAngle4InitEfff */
	void Random(class QAngle *, vec_t, vec_t); /* linkage=_ZN6QAngle6RandomEff */
	bool IsValid(const class QAngle  *); /* linkage=_ZNK6QAngle7IsValidEv */
	void Invalidate(class QAngle *); /* linkage=_ZN6QAngle10InvalidateEv */
	vec_t operator[](const class QAngle  *, int); /* linkage=_ZNK6QAngleixEi */
	vec_t & operator[](class QAngle *, int); /* linkage=_ZN6QAngleixEi */
	vec_t operator[](const class QAngle  *, class RotationAxis); /* linkage=_ZNK6QAngleixE12RotationAxis */
	vec_t & operator[](class QAngle *, class RotationAxis); /* linkage=_ZN6QAngleixE12RotationAxis */
	vec_t * Base(class QAngle *); /* linkage=_ZN6QAngle4BaseEv */
	const vec_t  * Base(const class QAngle  *); /* linkage=_ZNK6QAngle4BaseEv */
	bool operator==(const class QAngle  *, const class QAngle  &); /* linkage=_ZNK6QAngleeqERKS_ */
	bool operator!=(const class QAngle  *, const class QAngle  &); /* linkage=_ZNK6QAngleneERKS_ */
	class QAngle & operator+=(class QAngle *, const class QAngle  &); /* linkage=_ZN6QAnglepLERKS_ */
	class QAngle & operator-=(class QAngle *, const class QAngle  &); /* linkage=_ZN6QAnglemIERKS_ */
	class QAngle & operator*=(class QAngle *, const class QAngle  &); /* linkage=_ZN6QAnglemLERKS_ */
	class QAngle & operator*=(class QAngle *, float); /* linkage=_ZN6QAnglemLEf */
	class QAngle & operator/=(class QAngle *, float); /* linkage=_ZN6QAngledVEf */
	vec_t Length(const class QAngle  *); /* linkage=_ZNK6QAngle6LengthEv */
	vec_t LengthSqr(const class QAngle  *); /* linkage=_ZNK6QAngle9LengthSqrEv */
	class QAngle & operator=(class QAngle *, const class QAngle  &); /* linkage=_ZN6QAngleaSERKS_ */
	void Normalize(class QAngle *); /* linkage=_ZN6QAngle9NormalizeEv */
	void NormalizePositive(class QAngle *); /* linkage=_ZN6QAngle17NormalizePositiveEv */
	class matrix3x4_t ToMatrix(const class QAngle  *); /* linkage=_ZNK6QAngle8ToMatrixEv */
	class Quaternion ToQuaternion(const class QAngle  *); /* linkage=_ZNK6QAngle12ToQuaternionEv */
	class QAngle operator-(const class QAngle  *); /* linkage=_ZNK6QAnglengEv */
	class QAngle operator+(const class QAngle  *, const class QAngle  &); /* linkage=_ZNK6QAngleplERKS_ */
	class QAngle operator-(const class QAngle  *, const class QAngle  &); /* linkage=_ZNK6QAnglemiERKS_ */
	class QAngle operator*(const class QAngle  *, float); /* linkage=_ZNK6QAnglemlEf */
	class QAngle operator/(const class QAngle  *, float); /* linkage=_ZNK6QAngledvEf */
};

// <0000DF78> ../../public/mathlib/vector.h:2362
// member functions: 62
// member variables: 3
// static member variable: 1
// class size: 12
class QAngle {
	static const class QAngle vZero; /* 0 0 */
	vec_t x; /* 0 4 */
	vec_t y; /* 4 4 */
	vec_t z; /* 8 4 */
	/* ../../public/mathlib/vector.h:2376 */
	void QAngle(QAngle* );
	/* ../../public/mathlib/vector.h:2378 */
	void QAngle(QAngle* , vec_t, vec_t, vec_t);
	/* ../../public/mathlib/vector.h:2382 */
	void Init(QAngle* , vec_t, vec_t, vec_t);
	/* ../../public/mathlib/vector.h:2383 */
	void Random(QAngle* , vec_t, vec_t);
	/* ../../public/mathlib/vector.h:2386 */
	bool IsValid(const QAngle* );
	/* ../../public/mathlib/vector.h:2387 */
	void Invalidate(QAngle* );
	/* ../../public/mathlib/vector.h:2390 */
	vec_t operator[](const QAngle* , int);
	/* ../../public/mathlib/vector.h:2391 */
	vec_t& operator[](QAngle* , int);
	/* ../../public/mathlib/vector.h:2394 */
	vec_t operator[](const QAngle* , RotationAxis);
	/* ../../public/mathlib/vector.h:2395 */
	vec_t& operator[](QAngle* , RotationAxis);
	/* ../../public/mathlib/vector.h:2398 */
	vec_t* Base(QAngle* );
	/* ../../public/mathlib/vector.h:2399 */
	const vec_t* Base(const QAngle* );
	/* ../../public/mathlib/vector.h:2402 */
	bool operator==(const QAngle* , const QAngle& );
	/* ../../public/mathlib/vector.h:2403 */
	bool operator!=(const QAngle* , const QAngle& );
	/* ../../public/mathlib/vector.h:2406 */
	QAngle& operator+=(QAngle* , const QAngle& );
	/* ../../public/mathlib/vector.h:2407 */
	QAngle& operator-=(QAngle* , const QAngle& );
	/* ../../public/mathlib/vector.h:2408 */
	QAngle& operator*=(QAngle* , const QAngle& );
	/* ../../public/mathlib/vector.h:2409 */
	QAngle& operator*=(QAngle* , float);
	/* ../../public/mathlib/vector.h:2410 */
	QAngle& operator/=(QAngle* , float);
	/* ../../public/mathlib/vector.h:2413 */
	vec_t Length(const QAngle* );
	/* ../../public/mathlib/vector.h:2414 */
	vec_t LengthSqr(const QAngle* );
	/* ../../public/mathlib/vector.h:2420 */
	QAngle& operator=(QAngle* , const QAngle& );
	/* ../../public/mathlib/vector.h:2422 */
	void Normalize(QAngle* );
	/* ../../public/mathlib/vector.h:2423 */
	void NormalizePositive(QAngle* );
	/* ../../public/mathlib/vector.h:2425 */
	matrix3x4_t ToMatrix(const QAngle* );
	/* ../../public/mathlib/vector.h:2426 */
	Quaternion ToQuaternion(const QAngle* );
	/* ../../public/mathlib/vector.h:2431 */
	QAngle operator-(const QAngle* );
	/* ../../public/mathlib/vector.h:2433 */
	QAngle operator+(const QAngle* , const QAngle& );
	/* ../../public/mathlib/vector.h:2434 */
	QAngle operator-(const QAngle* , const QAngle& );
	/* ../../public/mathlib/vector.h:2435 */
	QAngle operator*(const QAngle* , float);
	/* ../../public/mathlib/vector.h:2436 */
	QAngle operator/(const QAngle* , float);
	void QAngle(class QAngle *); /* linkage=_ZN6QAngleC4Ev */
	void QAngle(class QAngle *, vec_t, vec_t, vec_t); /* linkage=_ZN6QAngleC4Efff */
	void Init(class QAngle *, vec_t, vec_t, vec_t); /* linkage=_ZN6QAngle4InitEfff */
	void Random(class QAngle *, vec_t, vec_t); /* linkage=_ZN6QAngle6RandomEff */
	bool IsValid(const class QAngle  *); /* linkage=_ZNK6QAngle7IsValidEv */
	void Invalidate(class QAngle *); /* linkage=_ZN6QAngle10InvalidateEv */
	vec_t operator[](const class QAngle  *, int); /* linkage=_ZNK6QAngleixEi */
	vec_t & operator[](class QAngle *, int); /* linkage=_ZN6QAngleixEi */
	vec_t operator[](const class QAngle  *, class RotationAxis); /* linkage=_ZNK6QAngleixE12RotationAxis */
	vec_t & operator[](class QAngle *, class RotationAxis); /* linkage=_ZN6QAngleixE12RotationAxis */
	vec_t * Base(class QAngle *); /* linkage=_ZN6QAngle4BaseEv */
	const vec_t  * Base(const class QAngle  *); /* linkage=_ZNK6QAngle4BaseEv */
	bool operator==(const class QAngle  *, const class QAngle  &); /* linkage=_ZNK6QAngleeqERKS_ */
	bool operator!=(const class QAngle  *, const class QAngle  &); /* linkage=_ZNK6QAngleneERKS_ */
	class QAngle & operator+=(class QAngle *, const class QAngle  &); /* linkage=_ZN6QAnglepLERKS_ */
	class QAngle & operator-=(class QAngle *, const class QAngle  &); /* linkage=_ZN6QAnglemIERKS_ */
	class QAngle & operator*=(class QAngle *, const class QAngle  &); /* linkage=_ZN6QAnglemLERKS_ */
	class QAngle & operator*=(class QAngle *, float); /* linkage=_ZN6QAnglemLEf */
	class QAngle & operator/=(class QAngle *, float); /* linkage=_ZN6QAngledVEf */
	vec_t Length(const class QAngle  *); /* linkage=_ZNK6QAngle6LengthEv */
	vec_t LengthSqr(const class QAngle  *); /* linkage=_ZNK6QAngle9LengthSqrEv */
	class QAngle & operator=(class QAngle *, const class QAngle  &); /* linkage=_ZN6QAngleaSERKS_ */
	void Normalize(class QAngle *); /* linkage=_ZN6QAngle9NormalizeEv */
	void NormalizePositive(class QAngle *); /* linkage=_ZN6QAngle17NormalizePositiveEv */
	class matrix3x4_t ToMatrix(const class QAngle  *); /* linkage=_ZNK6QAngle8ToMatrixEv */
	class Quaternion ToQuaternion(const class QAngle  *); /* linkage=_ZNK6QAngle12ToQuaternionEv */
	class QAngle operator-(const class QAngle  *); /* linkage=_ZNK6QAnglengEv */
	class QAngle operator+(const class QAngle  *, const class QAngle  &); /* linkage=_ZNK6QAngleplERKS_ */
	class QAngle operator-(const class QAngle  *, const class QAngle  &); /* linkage=_ZNK6QAnglemiERKS_ */
	class QAngle operator*(const class QAngle  *, float); /* linkage=_ZNK6QAnglemlEf */
	class QAngle operator/(const class QAngle  *, float); /* linkage=_ZNK6QAngledvEf */
};

// <067E1416> ../public/mathlib/vector.h:2376
void QAngle::QAngle()
{
} /* size: 0 */

// <067E13FD> ../public/mathlib/vector.h:2376
inline void QAngle::QAngle()
{
} /* size: 0 */

// <05A5FB89> ../public/mathlib/vector.h:2478
void QAngle::QAngle(vec_t flPitchDegrees, vec_t flYawDegrees, vec_t flRollDegrees)
{
} /* size: 0 */

// <05A5FB46> ../public/mathlib/vector.h:2478
inline void QAngle::QAngle(vec_t flPitchDegrees, vec_t flYawDegrees, vec_t flRollDegrees)
{
} /* size: 0 */

// <0580DAE4> ../../public/mathlib/vector.h:2488
inline void QAngle::Init(vec_t ix, vec_t iy, vec_t iz)
{
} /* size: 0 */

// <039F9C95> ../public/mathlib/vector.h:2494
inline void QAngle::Random(vec_t minVal, vec_t maxVal)
{
} /* size: 0 */

// <05A597E3> ../public/mathlib/vector.h:2528
void Quaternion::Quaternion(const QAngle& angles)
{
} /* size: 0 */

// <05A597BA> ../public/mathlib/vector.h:2528
inline void Quaternion::Quaternion(const QAngle& angles)
{
} /* size: 0 */

// <05A5979E> ../public/mathlib/vector.h:2533
void RadianEuler::RadianEuler(const QAngle& angles)
{
} /* size: 0 */

// <05A59775> ../public/mathlib/vector.h:2533
inline void RadianEuler::RadianEuler(const QAngle& angles)
{
} /* size: 0 */

// <00D253DD> ../public/mathlib/vector.h:2538
void DegreeEuler::DegreeEuler(const QAngle& angles)
{
} /* size: 0 */

// <00D253B4> ../public/mathlib/vector.h:2538
inline void DegreeEuler::DegreeEuler(const QAngle& angles)
{
} /* size: 0 */

// <067E13D4> ../public/mathlib/vector.h:2557
inline void QAngle::operator=(const QAngle& vOther)
{
} /* size: 0 */

// <067E13AD> ../public/mathlib/vector.h:2568
inline void QAngle::operator[](int i)
{
} /* size: 0 */

// <05A38365> ../public/mathlib/vector.h:2580
inline void QAngle::operator[](RotationAxis axis)
{
} /* size: 0 */

// <067E136A> ../public/mathlib/vector.h:2596
inline void QAngle::Base()
{
} /* size: 0 */

// <059D93F0> ../public/mathlib/vector.h:2610
inline void QAngle::IsValid()
{
} /* size: 0 */

// <00D25307> ../public/mathlib/vector.h:2748
// variable: 1
inline void QAngle::operator+(const QAngle& v)
{
	QAngle res; // 2750
} /* size: 0, variables: 1 */

// <01864FE3> ../public/mathlib/vector.h:2807
// variable: 1
inline void Quaternion::ToQAngle()
{
	QAngle anglesOut; // 2811
} /* size: 0, variables: 1 */

// <0596BB2C> ../../public/mathlib/vector.h:2821
inline vec_t InvRSquared(const Vector& v)
{
} /* size: 0 */

// <009DC14C> ../public/mathlib/vector.h:2827
float VectorNormalize(Vector &)
{
} /* size: 0 */

// <01355853> ../public/mathlib/vector.h:2835
// variable: 1
inline void VectorNormalizeFast(Vector& vec)
{
	float ool; // 2837
} /* size: 0, variables: 1 */

// <06A767DD> ../public/mathlib/vector.h:2844
inline void Vector::NormalizeInPlace()
{
} /* size: 0 */

// <060E21FD> ../public/mathlib/vector.h:2849
// variable: 1
inline void Vector::NormalizeInPlaceSafe(const Vector& vFallback)
{
	float flLength; // 2851
} /* size: 0, variables: 1 */

// <0658B07D> ../public/mathlib/vector.h:2859
// variable: 1
inline void Vector::Normalized()
{
	Vector norm; // 2861
} /* size: 0, variables: 1 */

// <06470837> ../public/mathlib/vector.h:2867
// variables: 2
inline void Vector::NormalizedSafe(const Vector& vFallback)
{
	Vector vNorm; // 2869
	float flLength; // 2870
} /* size: 0, variables: 2 */

// <00A1AA54> ../public/mathlib/vector.h:2891
inline const Vector  InverseVector(const Vector& v)
{
} /* size: 0 */

// <059D9314> ../public/mathlib/vector.h:2897
// variables: 5
inline const Quaternion  Exp(const Vector& v)
{
	float theta; // 2899
	{
		float theta2_2; // 2904
		float theta4_24; // 2904
		float k; // 2905
	}
	{
		float k; // 2910
	}
} /* size: 0, variables: 1 */

// <02BC0448> ../public/mathlib/vector.h:2916
// variables: 6
inline const Vector  Log(const Quaternion& q)
{
	Vector axis; // 2918
	float sinTheta; // 2919
	float factor; // 2919
	{
		float theta; // 2923
	}
	{
		float sinTheta2; // 2929
		float sinTheta4; // 2930
	}
} /* size: 0, variables: 3 */

// <05CB4E28> ../public/mathlib/vector.h:2948
inline const Vector  Snap(const Vector& a, float flSnap)
{
} /* size: 0 */

