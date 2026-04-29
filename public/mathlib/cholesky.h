
//
// public/mathlib/cholesky.h
//
//	referenced by: libengine2.so
//
//	functions: 5
//	struct: 1
//

// <0611C790> ../public/mathlib/cholesky.h:18
// member functions: 10
// member variables: 9
// struct size: 36
struct Cholesky3x3_t {
	float m_00; /* 0 4 */
	float m_11; /* 4 4 */
	float m_22; /* 8 4 */
	float m_10; /* 12 4 */
	float m_20; /* 16 4 */
	float m_21; /* 20 4 */
	float m_inv00; /* 24 4 */
	float m_inv11; /* 28 4 */
	float m_inv22; /* 32 4 */
	/* ../public/mathlib/cholesky.h:26 */
	void Cholesky3x3_t(Cholesky3x3_t* , const matrix3x4_t& );
	/* ../public/mathlib/cholesky.h:30 */
	void Cholesky3x3_t(Cholesky3x3_t* , float, float, float, float, float, float);
	/* ../public/mathlib/cholesky.h:34 */
	bool Init(Cholesky3x3_t* , float, float, float, float, float, float);
	/* ../public/mathlib/cholesky.h:35 */
	bool Init(Cholesky3x3_t* , const matrix3x4_t& );
	/* ../public/mathlib/cholesky.h:42 */
	void FillLeft(Cholesky3x3_t* , matrix3x4_t& );
	/* ../public/mathlib/cholesky.h:43 */
	void FillRight(Cholesky3x3_t* , matrix3x4_t& );
	/* ../public/mathlib/cholesky.h:44 */
	bool IsValid(Cholesky3x3_t* );
	/* ../public/mathlib/cholesky.h:46 */
	const Vector SolveRight(Cholesky3x3_t* , const Vector& );
	/* ../public/mathlib/cholesky.h:47 */
	const Vector SolveLeft(Cholesky3x3_t* , const Vector& );
	/* ../public/mathlib/cholesky.h:50 */
	const Vector Solve(Cholesky3x3_t* , const Vector& );
};

// <0615B9EB> ../public/mathlib/cholesky.h:26
void Cholesky3x3_t::Cholesky3x3_t(const matrix3x4_t& m)
{
} /* size: 0 */

// <0615B9C8> ../public/mathlib/cholesky.h:26
inline void Cholesky3x3_t::Cholesky3x3_t(const matrix3x4_t& m)
{
} /* size: 0 */

// <0615B9A5> ../public/mathlib/cholesky.h:35
inline void Cholesky3x3_t::Init(const matrix3x4_t& m)
{
} /* size: 0 */

// <0615B980> ../public/mathlib/cholesky.h:50
inline void Cholesky3x3_t::Solve(const Vector& rhs)
{
} /* size: 0 */

// <0615B952> ../public/mathlib/cholesky.h:64
// variable: 1
inline Vector CholeskySolve(const matrix3x4_t& m)
{
	Cholesky3x3_t cholesky; // 66
} /* size: 0, variables: 1 */

