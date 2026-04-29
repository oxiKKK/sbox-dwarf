
//
// public/mathlib/piecewisecurve.h
//
//	referenced by: libengine2.so
//
//	function: 1
//	struct: 1
//

// <06D471CB> ../../public/mathlib/piecewisecurve.h:25
// member functions: 2
// member variables: 4
// struct size: 16
struct quadratic_curve_t {
	float m_flx0; /* 0 4 */
	float m_fly0; /* 4 4 */
	float m_flA; /* 8 4 */
	float m_flB; /* 12 4 */
	/* ../../public/mathlib/piecewisecurve.h:32 */
	float Eval(quadratic_curve_t* , float);
	/* ../../public/mathlib/piecewisecurve.h:38 */
	void Fit(quadratic_curve_t* , const Vector2D& , const Vector2D& , const Vector2D& );
};

// <06D51B27> ../../public/mathlib/piecewisecurve.h:38
// variables: 7
inline void quadratic_curve_t::Fit(const Vector2D& v0, const Vector2D& v2, const Vector2D& vMid)
{
	Vector2D v1; // 44
	float k; // 53
	float m; // 54
	float m2; // 55
	float y10; // 56
	float y20; // 57
	float mo2k; // 59
} /* size: 0, variables: 7 */

