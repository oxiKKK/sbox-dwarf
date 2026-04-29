
//
// public/mathlib/ray2d.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmeshsystem.so
//
//	functions: 2
//	class: 1
//

// <0593A8AA> ../../public/mathlib/ray2d.h:10
// member functions: 6
// member variables: 2
// class size: 16
class Ray2D_t {
	/* ../../public/mathlib/ray2d.h:14 */
	void Ray2D_t(Ray2D_t* , const Vector& , const Vector& );
	/* ../../public/mathlib/ray2d.h:20 */
	void Ray2D_t(Ray2D_t* , const Vector2D& , const Vector2D& );
	/* ../../public/mathlib/ray2d.h:26 */
	void Ray2D_t(Ray2D_t* , Ray_t& );
	Vector2D m_start; /* 0 8 */
	Vector2D m_delta; /* 8 8 */
	void Ray2D_t(class Ray2D_t *, const class Vector  &, const class Vector  &); /* linkage=_ZN7Ray2D_tC4ERK6VectorS2_ */
	void Ray2D_t(class Ray2D_t *, const class Vector2D  &, const class Vector2D  &); /* linkage=_ZN7Ray2D_tC4ERK8Vector2DS2_ */
	void Ray2D_t(class Ray2D_t *, class Ray_t &); /* linkage=_ZN7Ray2D_tC4ER5Ray_t */
};

// <0596B093> ../../public/mathlib/ray2d.h:14
void Ray2D_t::Ray2D_t(const Vector& start, const Vector& end)
{
} /* size: 0 */

// <0596B062> ../../public/mathlib/ray2d.h:14
inline void Ray2D_t::Ray2D_t(const Vector& start, const Vector& end)
{
} /* size: 0 */

