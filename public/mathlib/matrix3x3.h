
//
// public/mathlib/matrix3x3.h
//
//	referenced by: libengine2.so
//
//	functions: 7
//	struct: 1
//

// <05A071FD> ../public/mathlib/matrix3x3.h:12
// member functions: 21
// member variables: 3
// static member variable: 1
// struct size: 36
struct Matrix3x3 {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/mathlib/matrix3x3.h:14 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/mathlib/matrix3x3.h:14 */
	Matrix3x3* Schema_MarkHelperFn(void);
	/* ../public/mathlib/matrix3x3.h:14 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/mathlib/matrix3x3.h:14 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/mathlib/matrix3x3.h:14 */
	void Schema_CompileTimeVerificationFunction(Matrix3x3* );
	/* ../public/mathlib/matrix3x3.h:14 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/mathlib/matrix3x3.h:14 */
	const char* Schema_StaticClassname(void);
	/* ../public/mathlib/matrix3x3.h:14 */
	const CSchemaClassInfo* Schema_DynamicBinding(const Matrix3x3* );
	Vector c1; /* 0 12 */
	Vector c2; /* 12 12 */
	Vector c3; /* 24 12 */
	/* ../public/mathlib/matrix3x3.h:20 */
	void Matrix3x3(Matrix3x3* );
	/* ../public/mathlib/matrix3x3.h:21 */
	void Matrix3x3(Matrix3x3* , float, float, float);
	/* ../public/mathlib/matrix3x3.h:22 */
	void Matrix3x3(Matrix3x3* , const Vector& , const Vector& , const Vector& );
	/* ../public/mathlib/matrix3x3.h:23 */
	void Matrix3x3(Matrix3x3* , const Quaternion& );
	/* ../public/mathlib/matrix3x3.h:26 */
	Matrix3x3& operator*=(Matrix3x3* , const Matrix3x3& );
	/* ../public/mathlib/matrix3x3.h:27 */
	Matrix3x3& operator+=(Matrix3x3* , const Matrix3x3& );
	/* ../public/mathlib/matrix3x3.h:28 */
	Matrix3x3& operator-=(Matrix3x3* , const Matrix3x3& );
	/* ../public/mathlib/matrix3x3.h:29 */
	Matrix3x3& operator*=(Matrix3x3* , float);
	/* ../public/mathlib/matrix3x3.h:30 */
	Matrix3x3& operator/=(Matrix3x3* , float);
	/* ../public/mathlib/matrix3x3.h:33 */
	Matrix3x3 operator+(const Matrix3x3* );
	/* ../public/mathlib/matrix3x3.h:34 */
	Matrix3x3 operator-(const Matrix3x3* );
	/* ../public/mathlib/matrix3x3.h:37 */
	float& operator()(Matrix3x3* , int, int);
	/* ../public/mathlib/matrix3x3.h:38 */
	float operator()(const Matrix3x3* , int, int);
};

// <05A0FF60> ../public/mathlib/matrix3x3.h:76
void Matrix3x3::Matrix3x3()
{
} /* size: 0 */

// <05A0FF45> ../public/mathlib/matrix3x3.h:76
inline void Matrix3x3::Matrix3x3()
{
} /* size: 0 */

// <05A0FEF5> ../public/mathlib/matrix3x3.h:103
// variables: 9
void Matrix3x3::Matrix3x3(const Quaternion& q)
{
	{
		float xx; // 105
		float yy; // 106
		float zz; // 107
		float xy; // 109
		float xz; // 110
		float xw; // 111
		float yz; // 112
		float yw; // 113
		float zw; // 114
	}
} /* size: 0 */

// <05A0FE6B> ../public/mathlib/matrix3x3.h:103
// variables: 9
inline void Matrix3x3::Matrix3x3(const Quaternion& q)
{
	{
		float xx; // 105
		float yy; // 106
		float zz; // 107
		float xy; // 109
		float xz; // 110
		float xw; // 111
		float yz; // 112
		float yw; // 113
		float zw; // 114
	}
} /* size: 0 */

// <05A0FE02> ../public/mathlib/matrix3x3.h:391
// variable: 1
inline Matrix3x3 MatrixAbs(const Matrix3x3& m)
{
	Matrix3x3 out; // 393
} /* size: 0, variables: 1 */

// <05A0FDD2> ../public/mathlib/matrix3x3.h:403
// variable: 1
inline Matrix3x3 MatrixSkew(const Vector& v)
{
	Matrix3x3 out; // 405
} /* size: 0, variables: 1 */

// <05A0FD69> ../public/mathlib/matrix3x3.h:443
// variable: 1
inline Vector VectorTransformByTranspose(const Matrix3x3& m, const Vector& v)
{
	Vector out; // 445
} /* size: 0, variables: 1 */

