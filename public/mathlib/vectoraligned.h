
//
// public/mathlib/vectoraligned.h
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
//	functions: 49
//	classes: 2
//

// <00027D1E> ../public/mathlib/vectoraligned.h:15
// member functions: 110
// member variable: 1
// static member variables: 5
// class size: 16
class VectorAligned {
	static const class VectorAligned vZero; /* 0 0 */
	static const class VectorAligned vOne; /* 0 0 */
	static const class VectorAligned vForward; /* 0 0 */
	static const class VectorAligned vLeft; /* 0 0 */
	static const class VectorAligned vUp; /* 0 0 */
	/* ../public/mathlib/vectoraligned.h:24 */
	void VectorAligned(VectorAligned* );
	/* ../public/mathlib/vectoraligned.h:30 */
	void VectorAligned(VectorAligned* , vec_t, vec_t, vec_t);
	/* ../public/mathlib/vectoraligned.h:31 */
	void VectorAligned(VectorAligned* , const Vector& );
	/* ../public/mathlib/vectoraligned.h:32 */
	void VectorAligned(VectorAligned* , fltx4);
	/* ../public/mathlib/vectoraligned.h:34 */
	void Init(VectorAligned* , vec_t, vec_t, vec_t);
	/* ../public/mathlib/vectoraligned.h:35 */
	void InitZero(VectorAligned* );
	/* ../public/mathlib/vectoraligned.h:36 */
	bool IsValid(const VectorAligned* );
	/* ../public/mathlib/vectoraligned.h:39 */
	fltx4 operator fltx4(const VectorAligned* );
	/* ../public/mathlib/vectoraligned.h:40 */
	Vector operator Vector(const VectorAligned* );
	/* ../public/mathlib/vectoraligned.h:41 */
	Vector2D AsVector2D(const VectorAligned* );
	/* ../public/mathlib/vectoraligned.h:42 */
	Vector AsVector(const VectorAligned* );
	/* ../public/mathlib/vectoraligned.h:45 */
	VectorAligned& operator=(VectorAligned* , const VectorAligned& );
	/* ../public/mathlib/vectoraligned.h:46 */
	VectorAligned& operator=(VectorAligned* , const Vector& );
	/* ../public/mathlib/vectoraligned.h:47 */
	VectorAligned& operator=(VectorAligned* , fltx4);
	/* ../public/mathlib/vectoraligned.h:50 */
	bool operator==(const VectorAligned* , const VectorAligned& );
	/* ../public/mathlib/vectoraligned.h:51 */
	bool operator!=(const VectorAligned* , const VectorAligned& );
	/* ../public/mathlib/vectoraligned.h:54 */
	VectorAligned operator-(const VectorAligned* );
	/* ../public/mathlib/vectoraligned.h:57 */
	VectorAligned& operator+=(VectorAligned* , const VectorAligned& );
	/* ../public/mathlib/vectoraligned.h:58 */
	VectorAligned& operator-=(VectorAligned* , const VectorAligned& );
	/* ../public/mathlib/vectoraligned.h:59 */
	VectorAligned& operator*=(VectorAligned* , const VectorAligned& );
	/* ../public/mathlib/vectoraligned.h:60 */
	VectorAligned& operator*=(VectorAligned* , vec_t);
	/* ../public/mathlib/vectoraligned.h:61 */
	VectorAligned& operator/=(VectorAligned* , const VectorAligned& );
	/* ../public/mathlib/vectoraligned.h:62 */
	VectorAligned& operator/=(VectorAligned* , vec_t);
	/* ../public/mathlib/vectoraligned.h:64 */
	VectorAligned operator+(const VectorAligned* , const VectorAligned& );
	/* ../public/mathlib/vectoraligned.h:65 */
	VectorAligned operator-(const VectorAligned* , const VectorAligned& );
	/* ../public/mathlib/vectoraligned.h:66 */
	VectorAligned operator*(const VectorAligned* , const VectorAligned& );
	/* ../public/mathlib/vectoraligned.h:67 */
	VectorAligned operator*(const VectorAligned* , vec_t);
	/* ../public/mathlib/vectoraligned.h:68 */
	VectorAligned operator/(const VectorAligned* , vec_t);
	/* ../public/mathlib/vectoraligned.h:71 */
	vec_t& operator[](VectorAligned* , int);
	/* ../public/mathlib/vectoraligned.h:72 */
	vec_t operator[](const VectorAligned* , int);
	/* ../public/mathlib/vectoraligned.h:74 */
	vec_t x(const VectorAligned* );
	/* ../public/mathlib/vectoraligned.h:75 */
	vec_t y(const VectorAligned* );
	/* ../public/mathlib/vectoraligned.h:76 */
	vec_t z(const VectorAligned* );
	/* ../public/mathlib/vectoraligned.h:78 */
	void SetX(VectorAligned* , vec_t);
	/* ../public/mathlib/vectoraligned.h:79 */
	void SetY(VectorAligned* , vec_t);
	/* ../public/mathlib/vectoraligned.h:80 */
	void SetZ(VectorAligned* , vec_t);
	/* ../public/mathlib/vectoraligned.h:83 */
	vec_t w(const VectorAligned* );
	/* ../public/mathlib/vectoraligned.h:84 */
	void SetW(VectorAligned* , vec_t);
	/* ../public/mathlib/vectoraligned.h:87 */
	vec_t Length(const VectorAligned* );
	/* ../public/mathlib/vectoraligned.h:90 */
	vec_t Length2D(const VectorAligned* );
	/* ../public/mathlib/vectoraligned.h:93 */
	vec_t LengthApprox(const VectorAligned* );
	/* ../public/mathlib/vectoraligned.h:96 */
	vec_t LengthSqr(const VectorAligned* );
	/* ../public/mathlib/vectoraligned.h:100 */
	vec_t NormalizeInPlace(VectorAligned* );
	/* ../public/mathlib/vectoraligned.h:104 */
	vec_t NormalizeInPlaceSafe(VectorAligned* , const VectorAligned& );
	/* ../public/mathlib/vectoraligned.h:107 */
	VectorAligned Normalized(const VectorAligned* );
	/* ../public/mathlib/vectoraligned.h:110 */
	VectorAligned NormalizedSafe(const VectorAligned* , const VectorAligned& );
	/* ../public/mathlib/vectoraligned.h:113 */
	VectorAligned NormalizedApprox(const VectorAligned* );
	/* ../public/mathlib/vectoraligned.h:116 */
	vec_t Dot(const VectorAligned* , const VectorAligned& );
	/* ../public/mathlib/vectoraligned.h:119 */
	VectorAligned Cross(const VectorAligned* , const VectorAligned& );
	/* ../public/mathlib/vectoraligned.h:122 */
	VectorAligned Abs(const VectorAligned* );
	/* ../public/mathlib/vectoraligned.h:125 */
	VectorAligned Min(const VectorAligned* , const VectorAligned& );
	/* ../public/mathlib/vectoraligned.h:128 */
	VectorAligned Max(const VectorAligned* , const VectorAligned& );
	/* ../public/mathlib/vectoraligned.h:131 */
	float LargestComponentValue(const VectorAligned* );
private:
	fltx4 m_vec; /* 0 16 */
	void VectorAligned(class VectorAligned *); /* linkage=_ZN13VectorAlignedC4Ev */
	void VectorAligned(class VectorAligned *, vec_t, vec_t, vec_t); /* linkage=_ZN13VectorAlignedC4Efff */
	void VectorAligned(class VectorAligned *, const class Vector__1  &); /* linkage=_ZN13VectorAlignedC4ERK6Vector */
	void VectorAligned(class VectorAligned *, fltx4); /* linkage=_ZN13VectorAlignedC4EDv4_f */
	void Init(class VectorAligned *, vec_t, vec_t, vec_t); /* linkage=_ZN13VectorAligned4InitEfff */
	void InitZero(class VectorAligned *); /* linkage=_ZN13VectorAligned8InitZeroEv */
	bool IsValid(const class VectorAligned  *); /* linkage=_ZNK13VectorAligned7IsValidEv */
	fltx4 operator fltx4(const class VectorAligned  *); /* linkage=_ZNK13VectorAlignedcvDv4_fEv */
	class Vector__1 operator Vector(const class VectorAligned  *); /* linkage=_ZNK13VectorAlignedcv6VectorEv */
	class Vector2D AsVector2D(const class VectorAligned  *); /* linkage=_ZNK13VectorAligned10AsVector2DEv */
	class Vector__1 AsVector(const class VectorAligned  *); /* linkage=_ZNK13VectorAligned8AsVectorEv */
	class VectorAligned & operator=(class VectorAligned *, const class VectorAligned  &); /* linkage=_ZN13VectorAlignedaSERKS_ */
	class VectorAligned & operator=(class VectorAligned *, const class Vector__1  &); /* linkage=_ZN13VectorAlignedaSERK6Vector */
	class VectorAligned & operator=(class VectorAligned *, fltx4); /* linkage=_ZN13VectorAlignedaSEDv4_f */
	bool operator==(const class VectorAligned  *, const class VectorAligned  &); /* linkage=_ZNK13VectorAlignedeqERKS_ */
	bool operator!=(const class VectorAligned  *, const class VectorAligned  &); /* linkage=_ZNK13VectorAlignedneERKS_ */
	class VectorAligned operator-(const class VectorAligned  *); /* linkage=_ZNK13VectorAlignedngEv */
	class VectorAligned & operator+=(class VectorAligned *, const class VectorAligned  &); /* linkage=_ZN13VectorAlignedpLERKS_ */
	class VectorAligned & operator-=(class VectorAligned *, const class VectorAligned  &); /* linkage=_ZN13VectorAlignedmIERKS_ */
	class VectorAligned & operator*=(class VectorAligned *, const class VectorAligned  &); /* linkage=_ZN13VectorAlignedmLERKS_ */
	class VectorAligned & operator*=(class VectorAligned *, vec_t); /* linkage=_ZN13VectorAlignedmLEf */
	class VectorAligned & operator/=(class VectorAligned *, const class VectorAligned  &); /* linkage=_ZN13VectorAligneddVERKS_ */
	class VectorAligned & operator/=(class VectorAligned *, vec_t); /* linkage=_ZN13VectorAligneddVEf */
	class VectorAligned operator+(const class VectorAligned  *, const class VectorAligned  &); /* linkage=_ZNK13VectorAlignedplERKS_ */
	class VectorAligned operator-(const class VectorAligned  *, const class VectorAligned  &); /* linkage=_ZNK13VectorAlignedmiERKS_ */
	class VectorAligned operator*(const class VectorAligned  *, const class VectorAligned  &); /* linkage=_ZNK13VectorAlignedmlERKS_ */
	class VectorAligned operator*(const class VectorAligned  *, vec_t); /* linkage=_ZNK13VectorAlignedmlEf */
	class VectorAligned operator/(const class VectorAligned  *, vec_t); /* linkage=_ZNK13VectorAligneddvEf */
	vec_t & operator[](class VectorAligned *, int); /* linkage=_ZN13VectorAlignedixEi */
	vec_t operator[](const class VectorAligned  *, int); /* linkage=_ZNK13VectorAlignedixEi */
	vec_t x(const class VectorAligned  *); /* linkage=_ZNK13VectorAligned1xEv */
	vec_t y(const class VectorAligned  *); /* linkage=_ZNK13VectorAligned1yEv */
	vec_t z(const class VectorAligned  *); /* linkage=_ZNK13VectorAligned1zEv */
	void SetX(class VectorAligned *, vec_t); /* linkage=_ZN13VectorAligned4SetXEf */
	void SetY(class VectorAligned *, vec_t); /* linkage=_ZN13VectorAligned4SetYEf */
	void SetZ(class VectorAligned *, vec_t); /* linkage=_ZN13VectorAligned4SetZEf */
	vec_t w(const class VectorAligned  *); /* linkage=_ZNK13VectorAligned1wEv */
	void SetW(class VectorAligned *, vec_t); /* linkage=_ZN13VectorAligned4SetWEf */
	vec_t Length(const class VectorAligned  *); /* linkage=_ZNK13VectorAligned6LengthEv */
	vec_t Length2D(const class VectorAligned  *); /* linkage=_ZNK13VectorAligned8Length2DEv */
	vec_t LengthApprox(const class VectorAligned  *); /* linkage=_ZNK13VectorAligned12LengthApproxEv */
	vec_t LengthSqr(const class VectorAligned  *); /* linkage=_ZNK13VectorAligned9LengthSqrEv */
	vec_t NormalizeInPlace(class VectorAligned *); /* linkage=_ZN13VectorAligned16NormalizeInPlaceEv */
	vec_t NormalizeInPlaceSafe(class VectorAligned *, const class VectorAligned  &); /* linkage=_ZN13VectorAligned20NormalizeInPlaceSafeERKS_ */
	class VectorAligned Normalized(const class VectorAligned  *); /* linkage=_ZNK13VectorAligned10NormalizedEv */
	class VectorAligned NormalizedSafe(const class VectorAligned  *, const class VectorAligned  &); /* linkage=_ZNK13VectorAligned14NormalizedSafeERKS_ */
	class VectorAligned NormalizedApprox(const class VectorAligned  *); /* linkage=_ZNK13VectorAligned16NormalizedApproxEv */
	vec_t Dot(const class VectorAligned  *, const class VectorAligned  &); /* linkage=_ZNK13VectorAligned3DotERKS_ */
	class VectorAligned Cross(const class VectorAligned  *, const class VectorAligned  &); /* linkage=_ZNK13VectorAligned5CrossERKS_ */
	class VectorAligned Abs(const class VectorAligned  *); /* linkage=_ZNK13VectorAligned3AbsEv */
	class VectorAligned Min(const class VectorAligned  *, const class VectorAligned  &); /* linkage=_ZNK13VectorAligned3MinERKS_ */
	class VectorAligned Max(const class VectorAligned  *, const class VectorAligned  &); /* linkage=_ZNK13VectorAligned3MaxERKS_ */
	float LargestComponentValue(const class VectorAligned  *); /* linkage=_ZNK13VectorAligned21LargestComponentValueEv */
	void VectorAligned(class VectorAligned *, const class Vector  &); /* linkage=_ZN13VectorAlignedC4ERK6Vector */
	class Vector operator Vector(const class VectorAligned  *); /* linkage=_ZNK13VectorAlignedcv6VectorEv */
	class Vector AsVector(const class VectorAligned  *); /* linkage=_ZNK13VectorAligned8AsVectorEv */
	class VectorAligned & operator=(class VectorAligned *, const class Vector  &); /* linkage=_ZN13VectorAlignedaSERK6Vector */
} __attribute__((__aligned__(16)));

// <057EE3CB> ../../public/mathlib/vectoraligned.h:15
// member functions: 110
// member variable: 1
// static member variables: 5
// class size: 16
class VectorAligned {
	static const class VectorAligned vZero; /* 0 0 */
	static const class VectorAligned vOne; /* 0 0 */
	static const class VectorAligned vForward; /* 0 0 */
	static const class VectorAligned vLeft; /* 0 0 */
	static const class VectorAligned vUp; /* 0 0 */
	/* ../../public/mathlib/vectoraligned.h:24 */
	void VectorAligned(VectorAligned* );
	/* ../../public/mathlib/vectoraligned.h:30 */
	void VectorAligned(VectorAligned* , vec_t, vec_t, vec_t);
	/* ../../public/mathlib/vectoraligned.h:31 */
	void VectorAligned(VectorAligned* , const Vector& );
	/* ../../public/mathlib/vectoraligned.h:32 */
	void VectorAligned(VectorAligned* , fltx4);
	/* ../../public/mathlib/vectoraligned.h:34 */
	void Init(VectorAligned* , vec_t, vec_t, vec_t);
	/* ../../public/mathlib/vectoraligned.h:35 */
	void InitZero(VectorAligned* );
	/* ../../public/mathlib/vectoraligned.h:36 */
	bool IsValid(const VectorAligned* );
	/* ../../public/mathlib/vectoraligned.h:39 */
	fltx4 operator fltx4(const VectorAligned* );
	/* ../../public/mathlib/vectoraligned.h:40 */
	Vector operator Vector(const VectorAligned* );
	/* ../../public/mathlib/vectoraligned.h:41 */
	Vector2D AsVector2D(const VectorAligned* );
	/* ../../public/mathlib/vectoraligned.h:42 */
	Vector AsVector(const VectorAligned* );
	/* ../../public/mathlib/vectoraligned.h:45 */
	VectorAligned& operator=(VectorAligned* , const VectorAligned& );
	/* ../../public/mathlib/vectoraligned.h:46 */
	VectorAligned& operator=(VectorAligned* , const Vector& );
	/* ../../public/mathlib/vectoraligned.h:47 */
	VectorAligned& operator=(VectorAligned* , fltx4);
	/* ../../public/mathlib/vectoraligned.h:50 */
	bool operator==(const VectorAligned* , const VectorAligned& );
	/* ../../public/mathlib/vectoraligned.h:51 */
	bool operator!=(const VectorAligned* , const VectorAligned& );
	/* ../../public/mathlib/vectoraligned.h:54 */
	VectorAligned operator-(const VectorAligned* );
	/* ../../public/mathlib/vectoraligned.h:57 */
	VectorAligned& operator+=(VectorAligned* , const VectorAligned& );
	/* ../../public/mathlib/vectoraligned.h:58 */
	VectorAligned& operator-=(VectorAligned* , const VectorAligned& );
	/* ../../public/mathlib/vectoraligned.h:59 */
	VectorAligned& operator*=(VectorAligned* , const VectorAligned& );
	/* ../../public/mathlib/vectoraligned.h:60 */
	VectorAligned& operator*=(VectorAligned* , vec_t);
	/* ../../public/mathlib/vectoraligned.h:61 */
	VectorAligned& operator/=(VectorAligned* , const VectorAligned& );
	/* ../../public/mathlib/vectoraligned.h:62 */
	VectorAligned& operator/=(VectorAligned* , vec_t);
	/* ../../public/mathlib/vectoraligned.h:64 */
	VectorAligned operator+(const VectorAligned* , const VectorAligned& );
	/* ../../public/mathlib/vectoraligned.h:65 */
	VectorAligned operator-(const VectorAligned* , const VectorAligned& );
	/* ../../public/mathlib/vectoraligned.h:66 */
	VectorAligned operator*(const VectorAligned* , const VectorAligned& );
	/* ../../public/mathlib/vectoraligned.h:67 */
	VectorAligned operator*(const VectorAligned* , vec_t);
	/* ../../public/mathlib/vectoraligned.h:68 */
	VectorAligned operator/(const VectorAligned* , vec_t);
	/* ../../public/mathlib/vectoraligned.h:71 */
	vec_t& operator[](VectorAligned* , int);
	/* ../../public/mathlib/vectoraligned.h:72 */
	vec_t operator[](const VectorAligned* , int);
	/* ../../public/mathlib/vectoraligned.h:74 */
	vec_t x(const VectorAligned* );
	/* ../../public/mathlib/vectoraligned.h:75 */
	vec_t y(const VectorAligned* );
	/* ../../public/mathlib/vectoraligned.h:76 */
	vec_t z(const VectorAligned* );
	/* ../../public/mathlib/vectoraligned.h:78 */
	void SetX(VectorAligned* , vec_t);
	/* ../../public/mathlib/vectoraligned.h:79 */
	void SetY(VectorAligned* , vec_t);
	/* ../../public/mathlib/vectoraligned.h:80 */
	void SetZ(VectorAligned* , vec_t);
	/* ../../public/mathlib/vectoraligned.h:83 */
	vec_t w(const VectorAligned* );
	/* ../../public/mathlib/vectoraligned.h:84 */
	void SetW(VectorAligned* , vec_t);
	/* ../../public/mathlib/vectoraligned.h:87 */
	vec_t Length(const VectorAligned* );
	/* ../../public/mathlib/vectoraligned.h:90 */
	vec_t Length2D(const VectorAligned* );
	/* ../../public/mathlib/vectoraligned.h:93 */
	vec_t LengthApprox(const VectorAligned* );
	/* ../../public/mathlib/vectoraligned.h:96 */
	vec_t LengthSqr(const VectorAligned* );
	/* ../../public/mathlib/vectoraligned.h:100 */
	vec_t NormalizeInPlace(VectorAligned* );
	/* ../../public/mathlib/vectoraligned.h:104 */
	vec_t NormalizeInPlaceSafe(VectorAligned* , const VectorAligned& );
	/* ../../public/mathlib/vectoraligned.h:107 */
	VectorAligned Normalized(const VectorAligned* );
	/* ../../public/mathlib/vectoraligned.h:110 */
	VectorAligned NormalizedSafe(const VectorAligned* , const VectorAligned& );
	/* ../../public/mathlib/vectoraligned.h:113 */
	VectorAligned NormalizedApprox(const VectorAligned* );
	/* ../../public/mathlib/vectoraligned.h:116 */
	vec_t Dot(const VectorAligned* , const VectorAligned& );
	/* ../../public/mathlib/vectoraligned.h:119 */
	VectorAligned Cross(const VectorAligned* , const VectorAligned& );
	/* ../../public/mathlib/vectoraligned.h:122 */
	VectorAligned Abs(const VectorAligned* );
	/* ../../public/mathlib/vectoraligned.h:125 */
	VectorAligned Min(const VectorAligned* , const VectorAligned& );
	/* ../../public/mathlib/vectoraligned.h:128 */
	VectorAligned Max(const VectorAligned* , const VectorAligned& );
	/* ../../public/mathlib/vectoraligned.h:131 */
	float LargestComponentValue(const VectorAligned* );
private:
	fltx4 m_vec; /* 0 16 */
	void VectorAligned(class VectorAligned *); /* linkage=_ZN13VectorAlignedC4Ev */
	void VectorAligned(class VectorAligned *, vec_t, vec_t, vec_t); /* linkage=_ZN13VectorAlignedC4Efff */
	void VectorAligned(class VectorAligned *, const class Vector__1  &); /* linkage=_ZN13VectorAlignedC4ERK6Vector */
	void VectorAligned(class VectorAligned *, fltx4); /* linkage=_ZN13VectorAlignedC4EDv4_f */
	void Init(class VectorAligned *, vec_t, vec_t, vec_t); /* linkage=_ZN13VectorAligned4InitEfff */
	void InitZero(class VectorAligned *); /* linkage=_ZN13VectorAligned8InitZeroEv */
	bool IsValid(const class VectorAligned  *); /* linkage=_ZNK13VectorAligned7IsValidEv */
	fltx4 operator fltx4(const class VectorAligned  *); /* linkage=_ZNK13VectorAlignedcvDv4_fEv */
	class Vector__1 operator Vector(const class VectorAligned  *); /* linkage=_ZNK13VectorAlignedcv6VectorEv */
	class Vector2D AsVector2D(const class VectorAligned  *); /* linkage=_ZNK13VectorAligned10AsVector2DEv */
	class Vector__1 AsVector(const class VectorAligned  *); /* linkage=_ZNK13VectorAligned8AsVectorEv */
	class VectorAligned & operator=(class VectorAligned *, const class VectorAligned  &); /* linkage=_ZN13VectorAlignedaSERKS_ */
	class VectorAligned & operator=(class VectorAligned *, const class Vector__1  &); /* linkage=_ZN13VectorAlignedaSERK6Vector */
	class VectorAligned & operator=(class VectorAligned *, fltx4); /* linkage=_ZN13VectorAlignedaSEDv4_f */
	bool operator==(const class VectorAligned  *, const class VectorAligned  &); /* linkage=_ZNK13VectorAlignedeqERKS_ */
	bool operator!=(const class VectorAligned  *, const class VectorAligned  &); /* linkage=_ZNK13VectorAlignedneERKS_ */
	class VectorAligned operator-(const class VectorAligned  *); /* linkage=_ZNK13VectorAlignedngEv */
	class VectorAligned & operator+=(class VectorAligned *, const class VectorAligned  &); /* linkage=_ZN13VectorAlignedpLERKS_ */
	class VectorAligned & operator-=(class VectorAligned *, const class VectorAligned  &); /* linkage=_ZN13VectorAlignedmIERKS_ */
	class VectorAligned & operator*=(class VectorAligned *, const class VectorAligned  &); /* linkage=_ZN13VectorAlignedmLERKS_ */
	class VectorAligned & operator*=(class VectorAligned *, vec_t); /* linkage=_ZN13VectorAlignedmLEf */
	class VectorAligned & operator/=(class VectorAligned *, const class VectorAligned  &); /* linkage=_ZN13VectorAligneddVERKS_ */
	class VectorAligned & operator/=(class VectorAligned *, vec_t); /* linkage=_ZN13VectorAligneddVEf */
	class VectorAligned operator+(const class VectorAligned  *, const class VectorAligned  &); /* linkage=_ZNK13VectorAlignedplERKS_ */
	class VectorAligned operator-(const class VectorAligned  *, const class VectorAligned  &); /* linkage=_ZNK13VectorAlignedmiERKS_ */
	class VectorAligned operator*(const class VectorAligned  *, const class VectorAligned  &); /* linkage=_ZNK13VectorAlignedmlERKS_ */
	class VectorAligned operator*(const class VectorAligned  *, vec_t); /* linkage=_ZNK13VectorAlignedmlEf */
	class VectorAligned operator/(const class VectorAligned  *, vec_t); /* linkage=_ZNK13VectorAligneddvEf */
	vec_t & operator[](class VectorAligned *, int); /* linkage=_ZN13VectorAlignedixEi */
	vec_t operator[](const class VectorAligned  *, int); /* linkage=_ZNK13VectorAlignedixEi */
	vec_t x(const class VectorAligned  *); /* linkage=_ZNK13VectorAligned1xEv */
	vec_t y(const class VectorAligned  *); /* linkage=_ZNK13VectorAligned1yEv */
	vec_t z(const class VectorAligned  *); /* linkage=_ZNK13VectorAligned1zEv */
	void SetX(class VectorAligned *, vec_t); /* linkage=_ZN13VectorAligned4SetXEf */
	void SetY(class VectorAligned *, vec_t); /* linkage=_ZN13VectorAligned4SetYEf */
	void SetZ(class VectorAligned *, vec_t); /* linkage=_ZN13VectorAligned4SetZEf */
	vec_t w(const class VectorAligned  *); /* linkage=_ZNK13VectorAligned1wEv */
	void SetW(class VectorAligned *, vec_t); /* linkage=_ZN13VectorAligned4SetWEf */
	vec_t Length(const class VectorAligned  *); /* linkage=_ZNK13VectorAligned6LengthEv */
	vec_t Length2D(const class VectorAligned  *); /* linkage=_ZNK13VectorAligned8Length2DEv */
	vec_t LengthApprox(const class VectorAligned  *); /* linkage=_ZNK13VectorAligned12LengthApproxEv */
	vec_t LengthSqr(const class VectorAligned  *); /* linkage=_ZNK13VectorAligned9LengthSqrEv */
	vec_t NormalizeInPlace(class VectorAligned *); /* linkage=_ZN13VectorAligned16NormalizeInPlaceEv */
	vec_t NormalizeInPlaceSafe(class VectorAligned *, const class VectorAligned  &); /* linkage=_ZN13VectorAligned20NormalizeInPlaceSafeERKS_ */
	class VectorAligned Normalized(const class VectorAligned  *); /* linkage=_ZNK13VectorAligned10NormalizedEv */
	class VectorAligned NormalizedSafe(const class VectorAligned  *, const class VectorAligned  &); /* linkage=_ZNK13VectorAligned14NormalizedSafeERKS_ */
	class VectorAligned NormalizedApprox(const class VectorAligned  *); /* linkage=_ZNK13VectorAligned16NormalizedApproxEv */
	vec_t Dot(const class VectorAligned  *, const class VectorAligned  &); /* linkage=_ZNK13VectorAligned3DotERKS_ */
	class VectorAligned Cross(const class VectorAligned  *, const class VectorAligned  &); /* linkage=_ZNK13VectorAligned5CrossERKS_ */
	class VectorAligned Abs(const class VectorAligned  *); /* linkage=_ZNK13VectorAligned3AbsEv */
	class VectorAligned Min(const class VectorAligned  *, const class VectorAligned  &); /* linkage=_ZNK13VectorAligned3MinERKS_ */
	class VectorAligned Max(const class VectorAligned  *, const class VectorAligned  &); /* linkage=_ZNK13VectorAligned3MaxERKS_ */
	float LargestComponentValue(const class VectorAligned  *); /* linkage=_ZNK13VectorAligned21LargestComponentValueEv */
	void VectorAligned(class VectorAligned *, const class Vector  &); /* linkage=_ZN13VectorAlignedC4ERK6Vector */
	class Vector operator Vector(const class VectorAligned  *); /* linkage=_ZNK13VectorAlignedcv6VectorEv */
	class Vector AsVector(const class VectorAligned  *); /* linkage=_ZNK13VectorAligned8AsVectorEv */
	class VectorAligned & operator=(class VectorAligned *, const class Vector  &); /* linkage=_ZN13VectorAlignedaSERK6Vector */
} __attribute__((__aligned__(16)));

// <0668C72B> ../public/mathlib/vectoraligned.h:24
void VectorAligned::VectorAligned()
{
} /* size: 0 */

// <0668C712> ../public/mathlib/vectoraligned.h:24
inline void VectorAligned::VectorAligned()
{
} /* size: 0 */

// <05A7DF9F> ../public/mathlib/vectoraligned.h:30
void VectorAligned::VectorAligned(vec_t X, vec_t Y, vec_t Z)
{
} /* size: 0 */

// <05A7DF68> ../public/mathlib/vectoraligned.h:30
inline void VectorAligned::VectorAligned(vec_t X, vec_t Y, vec_t Z)
{
} /* size: 0 */

// <05B4BACB> ../public/mathlib/vectoraligned.h:31
void VectorAligned::VectorAligned(const Vector& rhs)
{
} /* size: 0 */

// <05B4BAA6> ../public/mathlib/vectoraligned.h:31
inline void VectorAligned::VectorAligned(const Vector& rhs)
{
} /* size: 0 */

// <063539A5> ../public/mathlib/vectoraligned.h:32
void VectorAligned::VectorAligned(fltx4 rhs)
{
} /* size: 0 */

// <06353980> ../public/mathlib/vectoraligned.h:32
inline void VectorAligned::VectorAligned(fltx4 rhs)
{
} /* size: 0 */

// <06353967> ../public/mathlib/vectoraligned.h:39
inline void operator VectorAligned::fltx4()
{
} /* size: 0 */

// <0668C6F9> ../public/mathlib/vectoraligned.h:40
inline void operator VectorAligned::Vector()
{
} /* size: 0 */

// <01864E60> ../public/mathlib/vectoraligned.h:41
inline void VectorAligned::AsVector2D()
{
} /* size: 0 */

// <02E241B4> ../public/mathlib/vectoraligned.h:42
inline void VectorAligned::AsVector()
{
} /* size: 0 */

// <0668C6E0> ../public/mathlib/vectoraligned.h:74
inline void VectorAligned::x()
{
} /* size: 0 */

// <0668C6C7> ../public/mathlib/vectoraligned.h:75
inline void VectorAligned::y()
{
} /* size: 0 */

// <0668C6AE> ../public/mathlib/vectoraligned.h:76
inline void VectorAligned::z()
{
} /* size: 0 */

// <00D25146> ../public/mathlib/vectoraligned.h:78
inline void VectorAligned::SetX(vec_t value)
{
} /* size: 0 */

// <00D25121> ../public/mathlib/vectoraligned.h:79
inline void VectorAligned::SetY(vec_t value)
{
} /* size: 0 */

// <01B54CDF> ../public/mathlib/vectoraligned.h:80
inline void VectorAligned::SetZ(vec_t value)
{
} /* size: 0 */

// <00D1CD34> ../public/mathlib/vectoraligned.h:83
inline void VectorAligned::w()
{
} /* size: 0 */

// <05B4B995> ../public/mathlib/vectoraligned.h:144
inline void VectorAligned::Init(vec_t X, vec_t Y, vec_t Z)
{
} /* size: 0 */

// <0541A53A> ../public/mathlib/vectoraligned.h:150
inline void VectorAligned::InitZero()
{
} /* size: 0 */

// <05A381D2> ../public/mathlib/vectoraligned.h:156
inline void VectorAligned::IsValid()
{
} /* size: 0 */

// <02B556F2> ../../public/mathlib/vectoraligned.h:162
inline void VectorAligned::operator-()
{
} /* size: 0 */

// <060E20D7> ../public/mathlib/vectoraligned.h:168
inline void VectorAligned::operator=(const VectorAligned& src)
{
} /* size: 0 */

// <063538DB> ../public/mathlib/vectoraligned.h:175
inline void VectorAligned::operator=(const Vector& src)
{
} /* size: 0 */

// <063538B3> ../public/mathlib/vectoraligned.h:182
inline void VectorAligned::operator=(fltx4 src)
{
} /* size: 0 */

// <03565ADE> ../public/mathlib/vectoraligned.h:199
// variable: 1
inline void VectorAligned::operator!=(const VectorAligned& src)
{
	const uint32  uComponentMask; // 201
} /* size: 0, variables: 1 */

// <020D863A> ../public/mathlib/vectoraligned.h:206
inline void VectorAligned::operator+=(const VectorAligned& v)
{
} /* size: 0 */

// <05A38186> ../public/mathlib/vectoraligned.h:213
inline void VectorAligned::operator-=(const VectorAligned& v)
{
} /* size: 0 */

// <0541A49E> ../public/mathlib/vectoraligned.h:227
inline void VectorAligned::operator*=(vec_t s)
{
} /* size: 0 */

// <01864CC6> ../public/mathlib/vectoraligned.h:241
inline void VectorAligned::operator/=(vec_t s)
{
} /* size: 0 */

// <033F1F79> ../public/mathlib/vectoraligned.h:248
inline void VectorAligned::operator+(const VectorAligned& v)
{
} /* size: 0 */

// <02BC01D0> ../public/mathlib/vectoraligned.h:254
inline void VectorAligned::operator-(const VectorAligned& v)
{
} /* size: 0 */

// <02866143> ../public/mathlib/vectoraligned.h:272
inline void VectorAligned::operator/(vec_t s)
{
} /* size: 0 */

// <05A7DEBB> ../public/mathlib/vectoraligned.h:278
inline void VectorAligned::operator[](int index)
{
} /* size: 0 */

// <0596B862> ../../public/mathlib/vectoraligned.h:296
// variables: 2
inline void VectorAligned::Length()
{
	fltx4 lengthSqr; // 298
	fltx4 length; // 299
} /* size: 0, variables: 2 */

// <0176A027> ../public/mathlib/vectoraligned.h:321
// variable: 1
inline void VectorAligned::LengthSqr()
{
	fltx4 lengthSqr; // 323
} /* size: 0, variables: 1 */

// <05A38143> ../public/mathlib/vectoraligned.h:328
inline void VectorAligned::NormalizeInPlace()
{
} /* size: 0 */

// <05A380E6> ../public/mathlib/vectoraligned.h:334
// variables: 4
inline void VectorAligned::NormalizeInPlaceSafe(const VectorAligned& vFallback)
{
	const fltx4  wMask; // 336
	fltx4 lengthSqr; // 338
	fltx4 length; // 339
	fltx4 mask; // 341
} /* size: 0, variables: 4 */

// <05A380CA> ../public/mathlib/vectoraligned.h:349
inline void VectorAligned::Normalized()
{
} /* size: 0 */

// <05A3806F> ../public/mathlib/vectoraligned.h:355
// variables: 4
inline void VectorAligned::NormalizedSafe(const VectorAligned& v)
{
	const fltx4  wMask; // 357
	fltx4 lengthSqr; // 359
	fltx4 length; // 360
	fltx4 mask; // 361
} /* size: 0, variables: 4 */

// <05A3803B> ../public/mathlib/vectoraligned.h:377
// variable: 1
inline void VectorAligned::Dot(const VectorAligned& v)
{
	fltx4 dot; // 379
} /* size: 0, variables: 1 */

// <05A38014> ../public/mathlib/vectoraligned.h:384
inline void VectorAligned::Cross(const VectorAligned& v)
{
} /* size: 0 */

// <0596B846> ../../public/mathlib/vectoraligned.h:390
inline void VectorAligned::Abs()
{
} /* size: 0 */

// <0179002E> ../public/mathlib/vectoraligned.h:396
inline void VectorAligned::Min(const VectorAligned& v)
{
} /* size: 0 */

// <01790007> ../public/mathlib/vectoraligned.h:402
inline void VectorAligned::Max(const VectorAligned& v)
{
} /* size: 0 */

// <00E88365> ../public/mathlib/vectoraligned.h:414
inline vec_t DotProduct(const VectorAligned& lhs, const VectorAligned& rhs)
{
} /* size: 0 */

// <000981CF> ../public/mathlib/vectoraligned.h:420
inline VectorAligned CrossProduct(const VectorAligned& lhs, const VectorAligned& rhs)
{
} /* size: 0 */

// <011A3E15> ../public/mathlib/vectoraligned.h:425
inline VectorAligned operator*(float fl, const VectorAligned& v)
{
} /* size: 0 */

