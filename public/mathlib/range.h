
//
// public/mathlib/range.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmeshsystem.so
//
//	functions: 4
//	struct: 1
//

// <02DE4C07> ../public/mathlib/range.h:10
// member functions: 3
// member variables: 2
// struct size: 8
struct Range_t {
	float m_flMin; /* 0 4 */
	float m_flMax; /* 4 4 */
	/* ../public/mathlib/range.h:15 */
	void Range_t(Range_t* );
	/* ../public/mathlib/range.h:16 */
	void Range_t(Range_t* , float, float);
	/* ../public/mathlib/range.h:18 */
	float Restrict(Range_t* , float);
};

// <05F092EC> ../public/mathlib/range.h:15
void Range_t::Range_t()
{
} /* size: 0 */

// <05F092D3> ../public/mathlib/range.h:15
inline void Range_t::Range_t()
{
} /* size: 0 */

// <05F092B2> ../public/mathlib/range.h:16
void Range_t::Range_t(float flMin, float flMax)
{
} /* size: 0 */

// <05F09281> ../public/mathlib/range.h:16
inline void Range_t::Range_t(float flMin, float flMax)
{
} /* size: 0 */

