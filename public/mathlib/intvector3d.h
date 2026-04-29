
//
// public/mathlib/intvector3d.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//				   libschemasystem.so
//				   libtier0.so
//				   libvfx_vulkan.so
//
//	functions: 9
//	class: 1
//

// <008242BF> ../public/mathlib/intvector3d.h:20
// member functions: 122
// member variables: 3
// class size: 12
class IntVector3D {
	int x; /* 0 4 */
	int y; /* 4 4 */
	int z; /* 8 4 */
	/* ../public/mathlib/intvector3d.h:26 */
	void IntVector3D(IntVector3D* );
	/* ../public/mathlib/intvector3d.h:27 */
	void IntVector3D(IntVector3D* , int, int, int);
	/* ../public/mathlib/intvector3d.h:28 */
	void IntVector3D(IntVector3D* , int);
	/* ../public/mathlib/intvector3d.h:29 */
	void IntVector3D(IntVector3D* , Vector, float);
	/* ../public/mathlib/intvector3d.h:31 */
	void Zero(IntVector3D* );
	/* ../public/mathlib/intvector3d.h:32 */
	void Init(IntVector3D* , int, int, int);
	/* ../public/mathlib/intvector3d.h:35 */
	Vector ToVector(const IntVector3D* );
	/* ../public/mathlib/intvector3d.h:38 */
	int& operator[](IntVector3D* , int);
	/* ../public/mathlib/intvector3d.h:44 */
	int operator[](const IntVector3D* , int);
	/* ../public/mathlib/intvector3d.h:51 */
	IntVector3D operator+(const IntVector3D* );
	/* ../public/mathlib/intvector3d.h:56 */
	IntVector3D operator-(const IntVector3D* );
	/* ../public/mathlib/intvector3d.h:61 */
	IntVector3D& operator*=(IntVector3D* , const IntVector3D& );
	/* ../public/mathlib/intvector3d.h:69 */
	IntVector3D& operator/=(IntVector3D* , const IntVector3D& );
	/* ../public/mathlib/intvector3d.h:77 */
	IntVector3D& operator+=(IntVector3D* , const IntVector3D& );
	/* ../public/mathlib/intvector3d.h:85 */
	IntVector3D& operator-=(IntVector3D* , const IntVector3D& );
	/* ../public/mathlib/intvector3d.h:93 */
	IntVector3D& operator*=(IntVector3D* , int);
	/* ../public/mathlib/intvector3d.h:101 */
	IntVector3D& operator/=(IntVector3D* , int);
	/* ../public/mathlib/intvector3d.h:110 */
	IntVector3D& operator%=(IntVector3D* , const IntVector3D& );
	/* ../public/mathlib/intvector3d.h:118 */
	IntVector3D& operator%=(IntVector3D* , int);
	/* ../public/mathlib/intvector3d.h:126 */
	IntVector3D& operator&=(IntVector3D* , const IntVector3D& );
	/* ../public/mathlib/intvector3d.h:134 */
	IntVector3D& operator&=(IntVector3D* , int);
	/* ../public/mathlib/intvector3d.h:142 */
	IntVector3D& operator|=(IntVector3D* , const IntVector3D& );
	/* ../public/mathlib/intvector3d.h:150 */
	IntVector3D& operator|=(IntVector3D* , int);
	/* ../public/mathlib/intvector3d.h:158 */
	IntVector3D& operator^=(IntVector3D* , const IntVector3D& );
	/* ../public/mathlib/intvector3d.h:166 */
	IntVector3D& operator^=(IntVector3D* , int);
	/* ../public/mathlib/intvector3d.h:174 */
	IntVector3D& operator<<=(IntVector3D* , const IntVector3D& );
	/* ../public/mathlib/intvector3d.h:182 */
	IntVector3D& operator<<=(IntVector3D* , int);
	/* ../public/mathlib/intvector3d.h:190 */
	IntVector3D& operator>>=(IntVector3D* , const IntVector3D& );
	/* ../public/mathlib/intvector3d.h:198 */
	IntVector3D& operator>>=(IntVector3D* , int);
	/* ../public/mathlib/intvector3d.h:207 */
	IntVector3D operator*(const IntVector3D* , const IntVector3D& );
	/* ../public/mathlib/intvector3d.h:212 */
	IntVector3D operator/(const IntVector3D* , const IntVector3D& );
	/* ../public/mathlib/intvector3d.h:217 */
	IntVector3D operator+(const IntVector3D* , const IntVector3D& );
	/* ../public/mathlib/intvector3d.h:222 */
	IntVector3D operator-(const IntVector3D* , const IntVector3D& );
	/* ../public/mathlib/intvector3d.h:227 */
	IntVector3D operator*(const IntVector3D* , int);
	/* ../public/mathlib/intvector3d.h:232 */
	IntVector3D operator/(const IntVector3D* , int);
	/* ../public/mathlib/intvector3d.h:238 */
	IntVector3D operator%(const IntVector3D* , const IntVector3D& );
	/* ../public/mathlib/intvector3d.h:243 */
	IntVector3D operator%(const IntVector3D* , int);
	/* ../public/mathlib/intvector3d.h:248 */
	IntVector3D operator&(const IntVector3D* , const IntVector3D& );
	/* ../public/mathlib/intvector3d.h:253 */
	IntVector3D operator&(const IntVector3D* , int);
	/* ../public/mathlib/intvector3d.h:258 */
	IntVector3D operator|(const IntVector3D* , const IntVector3D& );
	/* ../public/mathlib/intvector3d.h:263 */
	IntVector3D operator|(const IntVector3D* , int);
	/* ../public/mathlib/intvector3d.h:268 */
	IntVector3D operator^(const IntVector3D* , const IntVector3D& );
	/* ../public/mathlib/intvector3d.h:273 */
	IntVector3D operator^(const IntVector3D* , int);
	/* ../public/mathlib/intvector3d.h:278 */
	IntVector3D operator<<(const IntVector3D* , const IntVector3D& );
	/* ../public/mathlib/intvector3d.h:283 */
	IntVector3D operator<<(const IntVector3D* , int);
	/* ../public/mathlib/intvector3d.h:288 */
	IntVector3D operator>>(const IntVector3D* , const IntVector3D& );
	/* ../public/mathlib/intvector3d.h:293 */
	IntVector3D operator>>(const IntVector3D* , int);
	/* ../public/mathlib/intvector3d.h:299 */
	bool operator==(const IntVector3D* , const IntVector3D& );
	/* ../public/mathlib/intvector3d.h:304 */
	bool operator!=(const IntVector3D* , const IntVector3D& );
	/* ../public/mathlib/intvector3d.h:309 */
	bool StrictlyGreater(const IntVector3D* , const IntVector3D& );
	/* ../public/mathlib/intvector3d.h:314 */
	bool StrictlyGreaterOrEqual(const IntVector3D* , const IntVector3D& );
	/* ../public/mathlib/intvector3d.h:319 */
	bool StrictlyLess(const IntVector3D* , const IntVector3D& );
	/* ../public/mathlib/intvector3d.h:324 */
	bool StrictlyLessOrEqual(const IntVector3D* , const IntVector3D& );
	/* ../public/mathlib/intvector3d.h:329 */
	bool AnyGreater(const IntVector3D* , const IntVector3D& );
	/* ../public/mathlib/intvector3d.h:334 */
	bool AnyGreaterOrEqual(const IntVector3D* , const IntVector3D& );
	/* ../public/mathlib/intvector3d.h:339 */
	bool AnyLess(const IntVector3D* , const IntVector3D& );
	/* ../public/mathlib/intvector3d.h:344 */
	bool AnyLessOrEqual(const IntVector3D* , const IntVector3D& );
	/* ../public/mathlib/intvector3d.h:350 */
	int Dot(const IntVector3D* , const IntVector3D& );
	/* ../public/mathlib/intvector3d.h:355 */
	IntVector3D Cross(const IntVector3D* , const IntVector3D& );
	/* ../public/mathlib/intvector3d.h:365 */
	int LengthSqr(const IntVector3D* );
	void IntVector3D(class IntVector3D *); /* linkage=_ZN11IntVector3DC4Ev */
	void IntVector3D(class IntVector3D *, int, int, int); /* linkage=_ZN11IntVector3DC4Eiii */
	void IntVector3D(class IntVector3D *, int); /* linkage=_ZN11IntVector3DC4Ei */
	void IntVector3D(class IntVector3D *, class Vector__1, float); /* linkage=_ZN11IntVector3DC4E6Vectorf */
	void Zero(class IntVector3D *); /* linkage=_ZN11IntVector3D4ZeroEv */
	void Init(class IntVector3D *, int, int, int); /* linkage=_ZN11IntVector3D4InitEiii */
	class Vector__1 ToVector(const class IntVector3D  *); /* linkage=_ZNK11IntVector3D8ToVectorEv */
	int & operator[](class IntVector3D *, int); /* linkage=_ZN11IntVector3DixEi */
	int operator[](const class IntVector3D  *, int); /* linkage=_ZNK11IntVector3DixEi */
	class IntVector3D operator+(const class IntVector3D  *); /* linkage=_ZNK11IntVector3DpsEv */
	class IntVector3D operator-(const class IntVector3D  *); /* linkage=_ZNK11IntVector3DngEv */
	class IntVector3D & operator*=(class IntVector3D *, const class IntVector3D  &); /* linkage=_ZN11IntVector3DmLERKS_ */
	class IntVector3D & operator/=(class IntVector3D *, const class IntVector3D  &); /* linkage=_ZN11IntVector3DdVERKS_ */
	class IntVector3D & operator+=(class IntVector3D *, const class IntVector3D  &); /* linkage=_ZN11IntVector3DpLERKS_ */
	class IntVector3D & operator-=(class IntVector3D *, const class IntVector3D  &); /* linkage=_ZN11IntVector3DmIERKS_ */
	class IntVector3D & operator*=(class IntVector3D *, int); /* linkage=_ZN11IntVector3DmLEi */
	class IntVector3D & operator/=(class IntVector3D *, int); /* linkage=_ZN11IntVector3DdVEi */
	class IntVector3D & operator%=(class IntVector3D *, const class IntVector3D  &); /* linkage=_ZN11IntVector3DrMERKS_ */
	class IntVector3D & operator%=(class IntVector3D *, int); /* linkage=_ZN11IntVector3DrMEi */
	class IntVector3D & operator&=(class IntVector3D *, const class IntVector3D  &); /* linkage=_ZN11IntVector3DaNERKS_ */
	class IntVector3D & operator&=(class IntVector3D *, int); /* linkage=_ZN11IntVector3DaNEi */
	class IntVector3D & operator|=(class IntVector3D *, const class IntVector3D  &); /* linkage=_ZN11IntVector3DoRERKS_ */
	class IntVector3D & operator|=(class IntVector3D *, int); /* linkage=_ZN11IntVector3DoREi */
	class IntVector3D & operator^=(class IntVector3D *, const class IntVector3D  &); /* linkage=_ZN11IntVector3DeOERKS_ */
	class IntVector3D & operator^=(class IntVector3D *, int); /* linkage=_ZN11IntVector3DeOEi */
	class IntVector3D & operator<<=(class IntVector3D *, const class IntVector3D  &); /* linkage=_ZN11IntVector3DlSERKS_ */
	class IntVector3D & operator<<=(class IntVector3D *, int); /* linkage=_ZN11IntVector3DlSEi */
	class IntVector3D & operator>>=(class IntVector3D *, const class IntVector3D  &); /* linkage=_ZN11IntVector3DrSERKS_ */
	class IntVector3D & operator>>=(class IntVector3D *, int); /* linkage=_ZN11IntVector3DrSEi */
	class IntVector3D operator*(const class IntVector3D  *, const class IntVector3D  &); /* linkage=_ZNK11IntVector3DmlERKS_ */
	class IntVector3D operator/(const class IntVector3D  *, const class IntVector3D  &); /* linkage=_ZNK11IntVector3DdvERKS_ */
	class IntVector3D operator+(const class IntVector3D  *, const class IntVector3D  &); /* linkage=_ZNK11IntVector3DplERKS_ */
	class IntVector3D operator-(const class IntVector3D  *, const class IntVector3D  &); /* linkage=_ZNK11IntVector3DmiERKS_ */
	class IntVector3D operator*(const class IntVector3D  *, int); /* linkage=_ZNK11IntVector3DmlEi */
	class IntVector3D operator/(const class IntVector3D  *, int); /* linkage=_ZNK11IntVector3DdvEi */
	class IntVector3D operator%(const class IntVector3D  *, const class IntVector3D  &); /* linkage=_ZNK11IntVector3DrmERKS_ */
	class IntVector3D operator%(const class IntVector3D  *, int); /* linkage=_ZNK11IntVector3DrmEi */
	class IntVector3D operator&(const class IntVector3D  *, const class IntVector3D  &); /* linkage=_ZNK11IntVector3DanERKS_ */
	class IntVector3D operator&(const class IntVector3D  *, int); /* linkage=_ZNK11IntVector3DanEi */
	class IntVector3D operator|(const class IntVector3D  *, const class IntVector3D  &); /* linkage=_ZNK11IntVector3DorERKS_ */
	class IntVector3D operator|(const class IntVector3D  *, int); /* linkage=_ZNK11IntVector3DorEi */
	class IntVector3D operator^(const class IntVector3D  *, const class IntVector3D  &); /* linkage=_ZNK11IntVector3DeoERKS_ */
	class IntVector3D operator^(const class IntVector3D  *, int); /* linkage=_ZNK11IntVector3DeoEi */
	class IntVector3D operator<<(const class IntVector3D  *, const class IntVector3D  &); /* linkage=_ZNK11IntVector3DlsERKS_ */
	class IntVector3D operator<<(const class IntVector3D  *, int); /* linkage=_ZNK11IntVector3DlsEi */
	class IntVector3D operator>>(const class IntVector3D  *, const class IntVector3D  &); /* linkage=_ZNK11IntVector3DrsERKS_ */
	class IntVector3D operator>>(const class IntVector3D  *, int); /* linkage=_ZNK11IntVector3DrsEi */
	bool operator==(const class IntVector3D  *, const class IntVector3D  &); /* linkage=_ZNK11IntVector3DeqERKS_ */
	bool operator!=(const class IntVector3D  *, const class IntVector3D  &); /* linkage=_ZNK11IntVector3DneERKS_ */
	bool StrictlyGreater(const class IntVector3D  *, const class IntVector3D  &); /* linkage=_ZNK11IntVector3D15StrictlyGreaterERKS_ */
	bool StrictlyGreaterOrEqual(const class IntVector3D  *, const class IntVector3D  &); /* linkage=_ZNK11IntVector3D22StrictlyGreaterOrEqualERKS_ */
	bool StrictlyLess(const class IntVector3D  *, const class IntVector3D  &); /* linkage=_ZNK11IntVector3D12StrictlyLessERKS_ */
	bool StrictlyLessOrEqual(const class IntVector3D  *, const class IntVector3D  &); /* linkage=_ZNK11IntVector3D19StrictlyLessOrEqualERKS_ */
	bool AnyGreater(const class IntVector3D  *, const class IntVector3D  &); /* linkage=_ZNK11IntVector3D10AnyGreaterERKS_ */
	bool AnyGreaterOrEqual(const class IntVector3D  *, const class IntVector3D  &); /* linkage=_ZNK11IntVector3D17AnyGreaterOrEqualERKS_ */
	bool AnyLess(const class IntVector3D  *, const class IntVector3D  &); /* linkage=_ZNK11IntVector3D7AnyLessERKS_ */
	bool AnyLessOrEqual(const class IntVector3D  *, const class IntVector3D  &); /* linkage=_ZNK11IntVector3D14AnyLessOrEqualERKS_ */
	int Dot(const class IntVector3D  *, const class IntVector3D  &); /* linkage=_ZNK11IntVector3D3DotERKS_ */
	class IntVector3D Cross(const class IntVector3D  *, const class IntVector3D  &); /* linkage=_ZNK11IntVector3D5CrossERKS_ */
	int LengthSqr(const class IntVector3D  *); /* linkage=_ZNK11IntVector3D9LengthSqrEv */
	void IntVector3D(class IntVector3D *, class Vector, float); /* linkage=_ZN11IntVector3DC4E6Vectorf */
	class Vector ToVector(const class IntVector3D  *); /* linkage=_ZNK11IntVector3D8ToVectorEv */
};

// <04500235> ../public/mathlib/intvector3d.h:26
void IntVector3D::IntVector3D()
{
} /* size: 0 */

// <0450021C> ../public/mathlib/intvector3d.h:26
inline void IntVector3D::IntVector3D()
{
} /* size: 0 */

// <059D830A> ../public/mathlib/intvector3d.h:27
void IntVector3D::IntVector3D(int nX, int nY, int nZ)
{
} /* size: 0 */

// <059D82D0> ../public/mathlib/intvector3d.h:27
inline void IntVector3D::IntVector3D(int nX, int nY, int nZ)
{
} /* size: 0 */

// <0053591B> ../public/mathlib/intvector3d.h:32
inline void IntVector3D::Init(int nX, int nY, int nZ)
{
} /* size: 0 */

// <04500199> ../public/mathlib/intvector3d.h:38
inline void IntVector3D::operator[](const int i)
{
} /* size: 0 */

// <01B5B863> ../public/mathlib/intvector3d.h:77
inline void IntVector3D::operator+=(const IntVector3D& rhs)
{
} /* size: 0 */

// <0450012C> ../public/mathlib/intvector3d.h:85
inline void IntVector3D::operator-=(const IntVector3D& rhs)
{
} /* size: 0 */

// <01B5B819> ../public/mathlib/intvector3d.h:217
inline void IntVector3D::operator+(const IntVector3D& rhs)
{
} /* size: 0 */

