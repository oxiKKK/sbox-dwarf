
//
// public/mathlib/ray.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmeshsystem.so
//
//	functions: 10
//	structs: 2
//

// <01BB238F> ../public/mathlib/ray.h:12
inline void Ray_t::operator=(const Ray_t &)
{
} /* size: 0 */

// <01181853> ../public/mathlib/ray.h:12
// member functions: 7
// member variables: 7
// struct size: 80
struct Ray_t {
	VectorAligned m_Start __attribute__((__aligned__(16))); /* 0 16 */
	VectorAligned m_Delta __attribute__((__aligned__(16))); /* 16 16 */
	VectorAligned m_StartOffset __attribute__((__aligned__(16))); /* 32 16 */
	VectorAligned m_Extents __attribute__((__aligned__(16))); /* 48 16 */
	float m_flRadius; /* 64 4 */
	bool m_IsRay; /* 68 1 */
	bool m_IsSwept; /* 69 1 */
	/* ../public/mathlib/ray.h:22 */
	void Ray_t(Ray_t* );
	/* ../public/mathlib/ray.h:24 */
	void Ray_t(Ray_t* , const Vector& , const Vector& , float);
	/* ../public/mathlib/ray.h:29 */
	void Ray_t(Ray_t* , const Vector& , const Vector& , const Vector& , const Vector& );
	/* ../public/mathlib/ray.h:34 */
	void Init(Ray_t* , const Vector& , const Vector& , float);
	/* ../public/mathlib/ray.h:49 */
	void Init(Ray_t* , const Vector& , const Vector& , const Vector& , const Vector& );
	/* ../public/mathlib/ray.h:67 */
	void Init(Ray_t* , const Vector& , const Vector& , const Vector& , const Vector& , const Quaternion& );
	/* ../public/mathlib/ray.h:86 */
	void Bounds(const Ray_t* , Vector& , Vector& );
} __attribute__((__aligned__(16)));

// <01AD6521> ../../public/mathlib/ray.h:12
// member functions: 7
// member variables: 7
// struct size: 80
struct Ray_t {
	VectorAligned m_Start __attribute__((__aligned__(16))); /* 0 16 */
	VectorAligned m_Delta __attribute__((__aligned__(16))); /* 16 16 */
	VectorAligned m_StartOffset __attribute__((__aligned__(16))); /* 32 16 */
	VectorAligned m_Extents __attribute__((__aligned__(16))); /* 48 16 */
	float m_flRadius; /* 64 4 */
	bool m_IsRay; /* 68 1 */
	bool m_IsSwept; /* 69 1 */
	/* ../../public/mathlib/ray.h:22 */
	void Ray_t(Ray_t* );
	/* ../../public/mathlib/ray.h:24 */
	void Ray_t(Ray_t* , const Vector& , const Vector& , float);
	/* ../../public/mathlib/ray.h:29 */
	void Ray_t(Ray_t* , const Vector& , const Vector& , const Vector& , const Vector& );
	/* ../../public/mathlib/ray.h:34 */
	void Init(Ray_t* , const Vector& , const Vector& , float);
	/* ../../public/mathlib/ray.h:49 */
	void Init(Ray_t* , const Vector& , const Vector& , const Vector& , const Vector& );
	/* ../../public/mathlib/ray.h:67 */
	void Init(Ray_t* , const Vector& , const Vector& , const Vector& , const Vector& , const Quaternion& );
	/* ../../public/mathlib/ray.h:86 */
	void Bounds(const Ray_t* , Vector& , Vector& );
} __attribute__((__aligned__(16)));

// <0595BBED> ../../public/mathlib/ray.h:22
void Ray_t::Ray_t()
{
} /* size: 0 */

// <0595BBD4> ../../public/mathlib/ray.h:22
inline void Ray_t::Ray_t()
{
} /* size: 0 */

// <0178C209> ../public/mathlib/ray.h:24
void Ray_t::Ray_t(const Vector& start, const Vector& end, float flRadius)
{
} /* size: 0 */

// <0178C1CC> ../public/mathlib/ray.h:24
inline void Ray_t::Ray_t(const Vector& start, const Vector& end, float flRadius)
{
} /* size: 0 */

// <0186367A> ../public/mathlib/ray.h:29
void Ray_t::Ray_t(const Vector& vStart, const Vector& vEnd, const Vector& vMins, const Vector& vMaxs)
{
} /* size: 0 */

// <01863631> ../public/mathlib/ray.h:29
inline void Ray_t::Ray_t(const Vector& vStart, const Vector& vEnd, const Vector& vMins, const Vector& vMaxs)
{
} /* size: 0 */

// <01769E4F> ../public/mathlib/ray.h:34
inline void Ray_t::Init(const Vector& start, const Vector& end, float flRadius)
{
} /* size: 0 */

// <01BB242E> ../public/mathlib/ray.h:49
inline void Ray_t::Init(const Vector& start, const Vector& end, const Vector& mins, const Vector& maxs)
{
} /* size: 0 */

// <01769DFA> ../public/mathlib/ray.h:67
inline void Ray_t::Init(const Vector& start, const Vector& end, const Vector& mins, const Vector& maxs, const Quaternion& rot)
{
} /* size: 0 */

