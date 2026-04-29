
//
// public/mathlib/ssecholesky.h
//
//	referenced by: libengine2.so
//
//	struct: 1
//

// <06F368C2> ../public/mathlib/ssecholesky.h:19
// member functions: 7
// member variables: 6
// struct size: 96
struct SimdCholesky3x3_t {
	fltx4 m_10; /* 0 16 */
	fltx4 m_20; /* 16 16 */
	fltx4 m_21; /* 32 16 */
	fltx4 m_inv00; /* 48 16 */
	fltx4 m_inv11; /* 64 16 */
	fltx4 m_inv22; /* 80 16 */
	/* ../public/mathlib/ssecholesky.h:26 */
	void SimdCholesky3x3_t(SimdCholesky3x3_t* , const fltx4& , const fltx4& , const fltx4& , const fltx4& , const fltx4& , const fltx4& );
	/* ../public/mathlib/ssecholesky.h:30 */
	void Init(SimdCholesky3x3_t* , const fltx4& , const fltx4& , const fltx4& , const fltx4& , const fltx4& , const fltx4& );
	/* ../public/mathlib/ssecholesky.h:34 */
	bool IsValid(const SimdCholesky3x3_t* );
	/* ../public/mathlib/ssecholesky.h:35 */
	fltx4 GetValidMask(const SimdCholesky3x3_t* );
	/* ../public/mathlib/ssecholesky.h:37 */
	const FourVectors SolveRight(SimdCholesky3x3_t* , const FourVectors& );
	/* ../public/mathlib/ssecholesky.h:38 */
	const FourVectors SolveLeft(SimdCholesky3x3_t* , const FourVectors& );
	/* ../public/mathlib/ssecholesky.h:41 */
	const FourVectors Solve(SimdCholesky3x3_t* , const FourVectors& );
};

