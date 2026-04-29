
//
// public/mathlib/intvector2d.h
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
//
//	functions: 6
//	class: 1
//

// <0000C055> ../public/mathlib/intvector2d.h:19
// member functions: 74
// member variables: 2
// class size: 8
class IntVector2D {
	int x; /* 0 4 */
	int y; /* 4 4 */
	/* ../public/mathlib/intvector2d.h:24 */
	void IntVector2D(IntVector2D* );
	/* ../public/mathlib/intvector2d.h:25 */
	void IntVector2D(IntVector2D* , int, int);
	/* ../public/mathlib/intvector2d.h:26 */
	void IntVector2D(IntVector2D* , int);
	/* ../public/mathlib/intvector2d.h:27 */
	void IntVector2D(IntVector2D* , Vector2D, float);
	/* ../public/mathlib/intvector2d.h:29 */
	void Init(IntVector2D* , int, int);
	/* ../public/mathlib/intvector2d.h:31 */
	void Zero(IntVector2D* );
	/* ../public/mathlib/intvector2d.h:33 */
	Vector2D ToVector2D(const IntVector2D* );
	/* ../public/mathlib/intvector2d.h:35 */
	IntVector2D operator+(const IntVector2D* , const IntVector2D& );
	/* ../public/mathlib/intvector2d.h:40 */
	IntVector2D operator-(const IntVector2D* , const IntVector2D& );
	/* ../public/mathlib/intvector2d.h:45 */
	IntVector2D operator-(const IntVector2D* );
	/* ../public/mathlib/intvector2d.h:50 */
	IntVector2D operator*(const IntVector2D* , int);
	/* ../public/mathlib/intvector2d.h:55 */
	IntVector2D operator*(const IntVector2D* , const IntVector2D& );
	/* ../public/mathlib/intvector2d.h:60 */
	IntVector2D operator/(const IntVector2D* , int);
	/* ../public/mathlib/intvector2d.h:65 */
	IntVector2D operator/(const IntVector2D* , const IntVector2D& );
	/* ../public/mathlib/intvector2d.h:70 */
	IntVector2D operator%(const IntVector2D* , int);
	/* ../public/mathlib/intvector2d.h:75 */
	IntVector2D operator%(const IntVector2D* , const IntVector2D& );
	/* ../public/mathlib/intvector2d.h:80 */
	IntVector2D& operator+=(IntVector2D* , const IntVector2D& );
	/* ../public/mathlib/intvector2d.h:87 */
	IntVector2D& operator-=(IntVector2D* , const IntVector2D& );
	/* ../public/mathlib/intvector2d.h:94 */
	IntVector2D& operator*=(IntVector2D* , int);
	/* ../public/mathlib/intvector2d.h:101 */
	IntVector2D& operator*=(IntVector2D* , const IntVector2D& );
	/* ../public/mathlib/intvector2d.h:108 */
	IntVector2D& operator/=(IntVector2D* , int);
	/* ../public/mathlib/intvector2d.h:115 */
	IntVector2D& operator%=(IntVector2D* , int);
	/* ../public/mathlib/intvector2d.h:122 */
	IntVector2D& operator%=(IntVector2D* , const IntVector2D& );
	/* ../public/mathlib/intvector2d.h:129 */
	bool operator==(const IntVector2D* , const IntVector2D& );
	/* ../public/mathlib/intvector2d.h:134 */
	bool operator!=(const IntVector2D* , const IntVector2D& );
	/* ../public/mathlib/intvector2d.h:139 */
	const int& operator[](const IntVector2D* , int);
	/* ../public/mathlib/intvector2d.h:145 */
	int& operator[](IntVector2D* , int);
	/* ../public/mathlib/intvector2d.h:151 */
	int Dot(const IntVector2D* , const IntVector2D& );
	/* ../public/mathlib/intvector2d.h:156 */
	int LengthSqr(const IntVector2D* );
	/* ../public/mathlib/intvector2d.h:161 */
	bool StrictlyGreater(const IntVector2D* , const IntVector2D& );
	/* ../public/mathlib/intvector2d.h:166 */
	bool StrictlyGreaterOrEqual(const IntVector2D* , const IntVector2D& );
	/* ../public/mathlib/intvector2d.h:171 */
	bool StrictlyLess(const IntVector2D* , const IntVector2D& );
	/* ../public/mathlib/intvector2d.h:176 */
	bool StrictlyLessOrEqual(const IntVector2D* , const IntVector2D& );
	/* ../public/mathlib/intvector2d.h:181 */
	bool AnyGreater(const IntVector2D* , const IntVector2D& );
	/* ../public/mathlib/intvector2d.h:186 */
	bool AnyGreaterOrEqual(const IntVector2D* , const IntVector2D& );
	/* ../public/mathlib/intvector2d.h:191 */
	bool AnyLess(const IntVector2D* , const IntVector2D& );
	/* ../public/mathlib/intvector2d.h:196 */
	bool AnyLessOrEqual(const IntVector2D* , const IntVector2D& );
	void IntVector2D(class IntVector2D *); /* linkage=_ZN11IntVector2DC4Ev */
	void IntVector2D(class IntVector2D *, int, int); /* linkage=_ZN11IntVector2DC4Eii */
	void IntVector2D(class IntVector2D *, int); /* linkage=_ZN11IntVector2DC4Ei */
	void IntVector2D(class IntVector2D *, class Vector2D, float); /* linkage=_ZN11IntVector2DC4E8Vector2Df */
	void Init(class IntVector2D *, int, int); /* linkage=_ZN11IntVector2D4InitEii */
	void Zero(class IntVector2D *); /* linkage=_ZN11IntVector2D4ZeroEv */
	class Vector2D ToVector2D(const class IntVector2D  *); /* linkage=_ZNK11IntVector2D10ToVector2DEv */
	class IntVector2D operator+(const class IntVector2D  *, const class IntVector2D  &); /* linkage=_ZNK11IntVector2DplERKS_ */
	class IntVector2D operator-(const class IntVector2D  *, const class IntVector2D  &); /* linkage=_ZNK11IntVector2DmiERKS_ */
	class IntVector2D operator-(const class IntVector2D  *); /* linkage=_ZNK11IntVector2DngEv */
	class IntVector2D operator*(const class IntVector2D  *, int); /* linkage=_ZNK11IntVector2DmlEi */
	class IntVector2D operator*(const class IntVector2D  *, const class IntVector2D  &); /* linkage=_ZNK11IntVector2DmlERKS_ */
	class IntVector2D operator/(const class IntVector2D  *, int); /* linkage=_ZNK11IntVector2DdvEi */
	class IntVector2D operator/(const class IntVector2D  *, const class IntVector2D  &); /* linkage=_ZNK11IntVector2DdvERKS_ */
	class IntVector2D operator%(const class IntVector2D  *, int); /* linkage=_ZNK11IntVector2DrmEi */
	class IntVector2D operator%(const class IntVector2D  *, const class IntVector2D  &); /* linkage=_ZNK11IntVector2DrmERKS_ */
	class IntVector2D & operator+=(class IntVector2D *, const class IntVector2D  &); /* linkage=_ZN11IntVector2DpLERKS_ */
	class IntVector2D & operator-=(class IntVector2D *, const class IntVector2D  &); /* linkage=_ZN11IntVector2DmIERKS_ */
	class IntVector2D & operator*=(class IntVector2D *, int); /* linkage=_ZN11IntVector2DmLEi */
	class IntVector2D & operator*=(class IntVector2D *, const class IntVector2D  &); /* linkage=_ZN11IntVector2DmLERKS_ */
	class IntVector2D & operator/=(class IntVector2D *, int); /* linkage=_ZN11IntVector2DdVEi */
	class IntVector2D & operator%=(class IntVector2D *, int); /* linkage=_ZN11IntVector2DrMEi */
	class IntVector2D & operator%=(class IntVector2D *, const class IntVector2D  &); /* linkage=_ZN11IntVector2DrMERKS_ */
	bool operator==(const class IntVector2D  *, const class IntVector2D  &); /* linkage=_ZNK11IntVector2DeqERKS_ */
	bool operator!=(const class IntVector2D  *, const class IntVector2D  &); /* linkage=_ZNK11IntVector2DneERKS_ */
	const int  & operator[](const class IntVector2D  *, int); /* linkage=_ZNK11IntVector2DixEi */
	int & operator[](class IntVector2D *, int); /* linkage=_ZN11IntVector2DixEi */
	int Dot(const class IntVector2D  *, const class IntVector2D  &); /* linkage=_ZNK11IntVector2D3DotERKS_ */
	int LengthSqr(const class IntVector2D  *); /* linkage=_ZNK11IntVector2D9LengthSqrEv */
	bool StrictlyGreater(const class IntVector2D  *, const class IntVector2D  &); /* linkage=_ZNK11IntVector2D15StrictlyGreaterERKS_ */
	bool StrictlyGreaterOrEqual(const class IntVector2D  *, const class IntVector2D  &); /* linkage=_ZNK11IntVector2D22StrictlyGreaterOrEqualERKS_ */
	bool StrictlyLess(const class IntVector2D  *, const class IntVector2D  &); /* linkage=_ZNK11IntVector2D12StrictlyLessERKS_ */
	bool StrictlyLessOrEqual(const class IntVector2D  *, const class IntVector2D  &); /* linkage=_ZNK11IntVector2D19StrictlyLessOrEqualERKS_ */
	bool AnyGreater(const class IntVector2D  *, const class IntVector2D  &); /* linkage=_ZNK11IntVector2D10AnyGreaterERKS_ */
	bool AnyGreaterOrEqual(const class IntVector2D  *, const class IntVector2D  &); /* linkage=_ZNK11IntVector2D17AnyGreaterOrEqualERKS_ */
	bool AnyLess(const class IntVector2D  *, const class IntVector2D  &); /* linkage=_ZNK11IntVector2D7AnyLessERKS_ */
	bool AnyLessOrEqual(const class IntVector2D  *, const class IntVector2D  &); /* linkage=_ZNK11IntVector2D14AnyLessOrEqualERKS_ */
};

// <0596B15F> ../../public/mathlib/intvector2d.h:24
void IntVector2D::IntVector2D()
{
} /* size: 0 */

// <0596B146> ../../public/mathlib/intvector2d.h:24
inline void IntVector2D::IntVector2D()
{
} /* size: 0 */

// <0596B125> ../../public/mathlib/intvector2d.h:25
void IntVector2D::IntVector2D(int nX, int nY)
{
} /* size: 0 */

// <0596B0F6> ../../public/mathlib/intvector2d.h:25
inline void IntVector2D::IntVector2D(int nX, int nY)
{
} /* size: 0 */

// <0596B0B4> ../../public/mathlib/intvector2d.h:145
// variables: 2
inline void IntVector2D::operator[](const int i)
{
	const char   __FUNCTION__; // 32871
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 147
	}
} /* size: 0, variables: 1 */

// <02B54E26> ../../public/mathlib/intvector2d.h:145
// variables: 2
inline void IntVector2D::operator[](const int i)
{
	const char   __FUNCTION__; // 60622
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 147
	}
} /* size: 0, variables: 1 */

