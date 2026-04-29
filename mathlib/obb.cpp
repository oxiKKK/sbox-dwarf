
//
// mathlib/obb.cpp
//
//	referenced by: libengine2.so
//
//	functions: 7
//

// <05A0FCE0> mathlib/obb.cpp:9
// variables: 6
inline bool TestSegmentOverlap(const Vector& vBoxExtent, const Vector& vRayStart, const Vector& vRayEnd)
{
	const Vector  kZero; // 11
	Vector vFaceSeparation1; // 14
	Vector vFaceSeparation2; // 15
	Vector vFaceSeparation; // 16
	Vector RayDelta; // 24
	Vector EdgeSeparation; // 25
} /* size: 0, variables: 6 */

// <05A0AA3F> mathlib/obb.cpp:38
// variables: 9
// function calls: 429
bool TestBoxOverlap(const Vector& vBoxExtent1, const Vector& vBoxCenter2, const Matrix3x3& mBoxRotation2, const Vector& vBoxExtent2)
{
	const Vector  kZero; // 40
	Vector vFaceSeparation1; // 43
	Vector vFaceSeparation2; // 51
	Vector b1; // 59
	Vector vEdgeSeparation1; // 60
	Vector b2; // 67
	Vector vEdgeSeparation2; // 68
	Vector b3; // 75
	Vector vEdgeSeparation3; // 76
	Vector::Vector(); // 76
	Vector::Vector(); // 76
	Vector::Vector(); // 76
	Matrix3x3::Matrix3x3(); // 393
	Vector::Vector(); // 1395
	FloatMakePositive(vec_t f); // 1387
	FloatMakePositive(vec_t f); // 1388
	FloatMakePositive(vec_t f); // 1389
	VectorAbs(const Vector& src,
			Vector& dst);  // 1396
	VectorAbs(const Vector& in); // 394
	FloatMakePositive(vec_t f); // 1387
	FloatMakePositive(vec_t f); // 1388
	FloatMakePositive(vec_t f); // 1389
	VectorAbs(const Vector& src,
			Vector& dst);  // 1396
	Vector::Vector(); // 1395
	VectorAbs(const Vector& in); // 395
	FloatMakePositive(vec_t f); // 1387
	FloatMakePositive(vec_t f); // 1388
	FloatMakePositive(vec_t f); // 1389
	VectorAbs(const Vector& src,
			Vector& dst);  // 1396
	Vector::Vector(); // 1395
	VectorAbs(const Vector& in); // 396
	MatrixAbs(const Matrix3x3& m); // 43
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 431
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 431
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 431
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 431
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 431
	operator*(const Matrix3x3& m,
			const Vector& v);  // 43
	Vector::Vector(); // 1395
	FloatMakePositive(vec_t f); // 1387
	FloatMakePositive(vec_t f); // 1388
	FloatMakePositive(vec_t f); // 1389
	VectorAbs(const Vector& src,
			Vector& dst);  // 1396
	VectorAbs(const Vector& in); // 43
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 43
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 43
	VectorAnyGreater(const Vector& a,
			const Vector& b);  // 44
	Vector::Vector(); // 76
	Vector::Vector(); // 76
	Vector::Vector(); // 76
	Matrix3x3::Matrix3x3(); // 393
	Vector::Vector(); // 1395
	VectorAbs(const Vector& in); // 394
	Vector::Vector(); // 1395
	VectorAbs(const Vector& in); // 395
	Vector::Vector(); // 1395
	VectorAbs(const Vector& in); // 396
	MatrixAbs(const Matrix3x3& m); // 51
	Vector::Vector(); // 445
	DotProduct(const Vector& a,
			const Vector& b);  // 446
	DotProduct(const Vector& a,
			const Vector& b);  // 447
	DotProduct(const Vector& a,
			const Vector& b);  // 448
	VectorTransformByTranspose(const Matrix3x3& m,
					const Vector& v);  // 51
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1431
	Vector::operator-(); // 51
	DotProduct(const Vector& a,
			const Vector& b);  // 446
	Vector::Vector(); // 445
	DotProduct(const Vector& a,
			const Vector& b);  // 447
	DotProduct(const Vector& a,
			const Vector& b);  // 448
	VectorTransformByTranspose(const Matrix3x3& m,
					const Vector& v);  // 51
	Vector::Vector(); // 1395
	FloatMakePositive(vec_t f); // 1387
	FloatMakePositive(vec_t f); // 1388
	FloatMakePositive(vec_t f); // 1389
	VectorAbs(const Vector& src,
			Vector& dst);  // 1396
	VectorAbs(const Vector& in); // 51
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 51
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 51
	VectorAnyGreater(const Vector& a,
			const Vector& b);  // 52
	Vector::Vector(); // 76
	Vector::Vector(); // 76
	Vector::Vector(); // 76
	Matrix3x3::Matrix3x3(); // 405
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 406
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 407
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 408
	MatrixSkew(const Vector& v); // 60
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 431
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 431
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 431
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 431
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 431
	operator*(const Matrix3x3& m,
			const Vector& v);  // 215
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 431
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 431
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 431
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 431
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 431
	operator*(const Matrix3x3& m,
			const Vector& v);  // 214
	Vector::Vector(); // 76
	Vector::Vector(); // 76
	Vector::Vector(); // 76
	Matrix3x3::Matrix3x3(); // 213
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 431
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 431
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 431
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 431
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 431
	operator*(const Matrix3x3& m,
			const Vector& v);  // 216
	operator*(const Matrix3x3& m1,
			const Matrix3x3& m2);  // 60
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1508
	CrossProduct(const Vector& a,
			const Vector& b);  // 60
	Vector::Vector(); // 76
	Vector::Vector(); // 76
	Vector::Vector(); // 76
	Matrix3x3::Matrix3x3(); // 393
	Vector::Vector(); // 1395
	FloatMakePositive(vec_t f); // 1387
	FloatMakePositive(vec_t f); // 1388
	FloatMakePositive(vec_t f); // 1389
	VectorAbs(const Vector& src,
			Vector& dst);  // 1396
	VectorAbs(const Vector& in); // 394
	Vector::Vector(); // 1395
	FloatMakePositive(vec_t f); // 1387
	FloatMakePositive(vec_t f); // 1388
	FloatMakePositive(vec_t f); // 1389
	VectorAbs(const Vector& src,
			Vector& dst);  // 1396
	VectorAbs(const Vector& in); // 395
	Vector::Vector(); // 1395
	FloatMakePositive(vec_t f); // 1387
	FloatMakePositive(vec_t f); // 1388
	FloatMakePositive(vec_t f); // 1389
	VectorAbs(const Vector& src,
			Vector& dst);  // 1396
	VectorAbs(const Vector& in); // 396
	MatrixAbs(const Matrix3x3& m); // 60
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 431
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 431
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 431
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 431
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 431
	operator*(const Matrix3x3& m,
			const Vector& v);  // 60
	Vector::Vector(); // 1395
	VectorAbs(const Vector& in); // 60
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1514
	ModifiedCrossProduct(const Vector& a,
				const Vector& b);  // 60
	Vector::Vector(); // 1395
	FloatMakePositive(vec_t f); // 1387
	FloatMakePositive(vec_t f); // 1388
	FloatMakePositive(vec_t f); // 1389
	VectorAbs(const Vector& src,
			Vector& dst);  // 1396
	VectorAbs(const Vector& in); // 60
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 60
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 60
	VectorAnyGreater(const Vector& a,
			const Vector& b);  // 61
	Vector::Vector(); // 76
	Vector::Vector(); // 76
	Vector::Vector(); // 76
	Matrix3x3::Matrix3x3(); // 405
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 406
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 407
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 408
	MatrixSkew(const Vector& v); // 68
	Vector::Vector(); // 76
	Vector::Vector(); // 76
	Vector::Vector(); // 76
	Matrix3x3::Matrix3x3(); // 213
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 431
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 431
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 431
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 431
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 431
	operator*(const Matrix3x3& m,
			const Vector& v);  // 214
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 431
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 431
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 431
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 431
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 431
	operator*(const Matrix3x3& m,
			const Vector& v);  // 215
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 431
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 431
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 431
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 431
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 431
	operator*(const Matrix3x3& m,
			const Vector& v);  // 216
	operator*(const Matrix3x3& m1,
			const Matrix3x3& m2);  // 68
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1514
	ModifiedCrossProduct(const Vector& a,
				const Vector& b);  // 68
	Vector::Vector(); // 76
	Vector::Vector(); // 76
	Vector::Vector(); // 76
	Matrix3x3::Matrix3x3(); // 393
	Vector::Vector(); // 1395
	FloatMakePositive(vec_t f); // 1387
	FloatMakePositive(vec_t f); // 1388
	FloatMakePositive(vec_t f); // 1389
	VectorAbs(const Vector& src,
			Vector& dst);  // 1396
	VectorAbs(const Vector& in); // 394
	Vector::Vector(); // 1395
	FloatMakePositive(vec_t f); // 1387
	FloatMakePositive(vec_t f); // 1388
	FloatMakePositive(vec_t f); // 1389
	VectorAbs(const Vector& src,
			Vector& dst);  // 1396
	VectorAbs(const Vector& in); // 395
	Vector::Vector(); // 1395
	FloatMakePositive(vec_t f); // 1387
	FloatMakePositive(vec_t f); // 1388
	FloatMakePositive(vec_t f); // 1389
	VectorAbs(const Vector& src,
			Vector& dst);  // 1396
	VectorAbs(const Vector& in); // 396
	MatrixAbs(const Matrix3x3& m); // 68
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 431
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 431
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 431
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 431
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 431
	operator*(const Matrix3x3& m,
			const Vector& v);  // 68
	Vector::Vector(); // 1395
	VectorAbs(const Vector& in); // 68
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1508
	CrossProduct(const Vector& a,
			const Vector& b);  // 68
	Vector::Vector(); // 1395
	FloatMakePositive(vec_t f); // 1387
	FloatMakePositive(vec_t f); // 1388
	FloatMakePositive(vec_t f); // 1389
	VectorAbs(const Vector& src,
			Vector& dst);  // 1396
	VectorAbs(const Vector& in); // 68
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 68
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 68
	VectorAnyGreater(const Vector& a,
			const Vector& b);  // 69
	Vector::Vector(); // 76
	Vector::Vector(); // 76
	Vector::Vector(); // 76
	Matrix3x3::Matrix3x3(); // 405
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 406
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 407
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 408
	MatrixSkew(const Vector& v); // 76
	Vector::Vector(); // 76
	Vector::Vector(); // 76
	Vector::Vector(); // 76
	Matrix3x3::Matrix3x3(); // 213
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 431
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 431
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 431
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 431
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 431
	operator*(const Matrix3x3& m,
			const Vector& v);  // 214
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 431
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 431
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 431
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 431
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 431
	operator*(const Matrix3x3& m,
			const Vector& v);  // 215
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 431
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 431
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 431
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 431
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 431
	operator*(const Matrix3x3& m,
			const Vector& v);  // 216
	operator*(const Matrix3x3& m1,
			const Matrix3x3& m2);  // 76
	Vector::Vector(); // 76
	Vector::Vector(); // 76
	Vector::Vector(); // 76
	Matrix3x3::Matrix3x3(); // 393
	Vector::Vector(); // 1395
	FloatMakePositive(vec_t f); // 1387
	FloatMakePositive(vec_t f); // 1388
	FloatMakePositive(vec_t f); // 1389
	VectorAbs(const Vector& src,
			Vector& dst);  // 1396
	VectorAbs(const Vector& in); // 394
	Vector::Vector(); // 1395
	FloatMakePositive(vec_t f); // 1387
	FloatMakePositive(vec_t f); // 1388
	FloatMakePositive(vec_t f); // 1389
	VectorAbs(const Vector& src,
			Vector& dst);  // 1396
	VectorAbs(const Vector& in); // 395
	Vector::Vector(); // 1395
	FloatMakePositive(vec_t f); // 1387
	FloatMakePositive(vec_t f); // 1388
	FloatMakePositive(vec_t f); // 1389
	VectorAbs(const Vector& src,
			Vector& dst);  // 1396
	VectorAbs(const Vector& in); // 396
	MatrixAbs(const Matrix3x3& m); // 76
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 431
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 431
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 431
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 431
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 431
	operator*(const Matrix3x3& m,
			const Vector& v);  // 76
	Vector::Vector(); // 1395
	VectorAbs(const Vector& in); // 76
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1514
	ModifiedCrossProduct(const Vector& a,
				const Vector& b);  // 76
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1508
	CrossProduct(const Vector& a,
			const Vector& b);  // 76
	Vector::Vector(); // 1395
	FloatMakePositive(vec_t f); // 1387
	FloatMakePositive(vec_t f); // 1388
	FloatMakePositive(vec_t f); // 1389
	VectorAbs(const Vector& src,
			Vector& dst);  // 1396
	VectorAbs(const Vector& in); // 76
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 76
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 76
	VectorAnyGreater(const Vector& a,
			const Vector& b);  // 77
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
} /* size: 3482, variables: 9, inline expansions: 429 (9238 bytes) */

// <05A09DEB> mathlib/obb.cpp:91
// variables: 4
// function calls: 52
void OBB_t::OverlapsSegment(const Vector& p, const Vector& q)
{
	Vector vBoxCenter; // 94
	Quaternion qBoxRotation; // 95
	Vector vBoxExtent; // 96
	Quaternion qBoxInverseRotation; // 98
	Quaternion::Quaternion(); // 868
	QuaternionConjugate(const Quaternion& p); // 98
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 100
	Vector::Vector(); // 608
	VectorRotate(const Vector& vIn1,
			const Quaternion& qIn2);  // 100
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 100
	Vector::Vector(); // 608
	VectorRotate(const Vector& vIn1,
			const Quaternion& qIn2);  // 100
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1534
	VectorMin(const Vector& a,
			const Vector& b);  // 14
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 14
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 15
	VectorAnyGreater(const Vector& a,
			const Vector& b);  // 17
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1539
	VectorMax(const Vector& a,
			const Vector& b);  // 15
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1431
	Vector::operator-(); // 16
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1539
	VectorMax(const Vector& a,
			const Vector& b);  // 16
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 24
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1508
	CrossProduct(const Vector& a,
			const Vector& b);  // 25
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1514
	ModifiedCrossProduct(const Vector& a,
				const Vector& b);  // 25
	Vector::Vector(); // 1395
	FloatMakePositive(vec_t f); // 1387
	FloatMakePositive(vec_t f); // 1388
	FloatMakePositive(vec_t f); // 1389
	VectorAbs(const Vector& src,
			Vector& dst);  // 1396
	VectorAbs(const Vector& in); // 25
	Vector::Vector(); // 1395
	FloatMakePositive(vec_t f); // 1387
	FloatMakePositive(vec_t f); // 1388
	FloatMakePositive(vec_t f); // 1389
	VectorAbs(const Vector& src,
			Vector& dst);  // 1396
	VectorAbs(const Vector& in); // 25
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 25
	VectorAnyGreater(const Vector& a,
			const Vector& b);  // 26
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 11
	TestSegmentOverlap(const Vector& vBoxExtent,
				const Vector& vRayStart,
				const Vector& vRayEnd);  // 100
} /* size: 0, variables: 4, inline expansions: 52 (0 bytes) */

// <05A09D39> mathlib/obb.cpp:105
// variables: 2
void OBB_t::OverlapsTriangle(const Vector& a, const Vector& b, const Vector& c)
{
	const char   __FUNCTION__; // 19533
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 107
	}
} /* size: 0, variables: 1 */

// <05A09838> mathlib/obb.cpp:113
// variables: 14
// function calls: 17
void OBB_t::OverlapsBounds(const AABB_t& aabb)
{
	Vector vBoxCenter1; // 116
	Vector vBoxExtent1; // 117
	Vector vBoxCenter2; // 119
	Quaternion qBoxRotation2; // 120
	Vector vBoxExtent2; // 121
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 116
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 116
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
	Vector::Vector(); // 103
	Vector::Vector(); // 103
	Vector::Vector(); // 103
	Matrix3x3::Matrix3x3(
			const Quaternion& q);  // 123
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 117
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 119
} /* size: 437, variables: 5, inline expansions: 17 (408 bytes) */

// <05A093C7> mathlib/obb.cpp:128
// variables: 16
// function calls: 13
void OBB_t::OverlapsBox(const OBB_t& obb)
{
	Vector vBoxCenter1; // 131
	Quaternion qBoxRotation1; // 132
	Vector vBoxExtent1; // 133
	Quaternion qBoxInverseRotation1; // 135
	Vector vBoxCenter2; // 137
	Quaternion qBoxRotation2; // 138
	Vector vBoxExtent2; // 139
	Quaternion::Quaternion(); // 868
	QuaternionConjugate(const Quaternion& p); // 135
	Vector::Vector(); // 608
	VectorRotate(const Vector& vIn1,
			const Quaternion& qIn2);  // 137
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 137
	Quaternion::Quaternion(); // 2001
	operator*(const Quaternion& p,
			const Quaternion& q);  // 138
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
	Vector::Vector(); // 103
	Vector::Vector(); // 103
	Vector::Vector(); // 103
	Matrix3x3::Matrix3x3(
			const Quaternion& q);  // 141
} /* size: 0, variables: 7, inline expansions: 13 (0 bytes) */

// <05A07B9A> mathlib/obb.cpp:146
// variables: 11
// function calls: 88
void OBB_t::ToAABB()
{
	matrix3x4_t mTransform; // 148
	VectorAligned vCorners; // 150
	matrix3x4_t::InitFromQuaternion(
				const Quaternion& orientation,
				const Vector& vPosition);  // 149
	matrix3x4_t::matrix3x4_t(); // 148
	VectorTransform(const Vector& in1,
			const matrix3x4_t& in2,
			Vector& out);  // 1307
	Vector::Vector(); // 1306
	VectorTransform(const Vector& in1,
			const matrix3x4_t& in2);  // 2707
	matrix3x4_t::TransformVector(
			const Vector& v0);  // 151
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 151
	{
		fltx4 retVal; // 186
		_mm_set_ps(const float  __Z,
				const float  __Y,
				const float  __X,
				const float  __W);  // 187
	}
	Set4Floats<>(float p0,
			float p1,
			float p2,
			float p3);  // 146
	VectorAligned::Init(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 31
	VectorAligned::VectorAligned(
			const Vector& rhs);  // 159
	VectorTransform(const Vector& in1,
			const matrix3x4_t& in2,
			Vector& out);  // 1307
	Vector::Vector(); // 1306
	VectorTransform(const Vector& in1,
			const matrix3x4_t& in2);  // 2707
	matrix3x4_t::TransformVector(
			const Vector& v0);  // 152
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 152
	{
		fltx4 retVal; // 186
		_mm_set_ps(const float  __Z,
				const float  __Y,
				const float  __X,
				const float  __W);  // 187
	}
	Set4Floats<>(float p0,
			float p1,
			float p2,
			float p3);  // 146
	VectorAligned::Init(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 31
	VectorAligned::VectorAligned(
			const Vector& rhs);  // 159
	VectorTransform(const Vector& in1,
			const matrix3x4_t& in2,
			Vector& out);  // 1307
	Vector::Vector(); // 1306
	VectorTransform(const Vector& in1,
			const matrix3x4_t& in2);  // 2707
	matrix3x4_t::TransformVector(
			const Vector& v0);  // 153
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 153
	{
		fltx4 retVal; // 186
		_mm_set_ps(const float  __Z,
				const float  __Y,
				const float  __X,
				const float  __W);  // 187
	}
	Set4Floats<>(float p0,
			float p1,
			float p2,
			float p3);  // 146
	VectorAligned::Init(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 31
	VectorAligned::VectorAligned(
			const Vector& rhs);  // 159
	VectorTransform(const Vector& in1,
			const matrix3x4_t& in2,
			Vector& out);  // 1307
	Vector::Vector(); // 1306
	VectorTransform(const Vector& in1,
			const matrix3x4_t& in2);  // 2707
	matrix3x4_t::TransformVector(
			const Vector& v0);  // 154
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 154
	{
		fltx4 retVal; // 186
		_mm_set_ps(const float  __Z,
				const float  __Y,
				const float  __X,
				const float  __W);  // 187
	}
	Set4Floats<>(float p0,
			float p1,
			float p2,
			float p3);  // 146
	VectorAligned::Init(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 31
	VectorAligned::VectorAligned(
			const Vector& rhs);  // 159
	VectorTransform(const Vector& in1,
			const matrix3x4_t& in2,
			Vector& out);  // 1307
	Vector::Vector(); // 1306
	VectorTransform(const Vector& in1,
			const matrix3x4_t& in2);  // 2707
	matrix3x4_t::TransformVector(
			const Vector& v0);  // 155
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 155
	{
		fltx4 retVal; // 186
		_mm_set_ps(const float  __Z,
				const float  __Y,
				const float  __X,
				const float  __W);  // 187
	}
	Set4Floats<>(float p0,
			float p1,
			float p2,
			float p3);  // 146
	VectorAligned::Init(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 31
	VectorAligned::VectorAligned(
			const Vector& rhs);  // 159
	VectorTransform(const Vector& in1,
			const matrix3x4_t& in2,
			Vector& out);  // 1307
	Vector::Vector(); // 1306
	VectorTransform(const Vector& in1,
			const matrix3x4_t& in2);  // 2707
	matrix3x4_t::TransformVector(
			const Vector& v0);  // 156
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 156
	{
		fltx4 retVal; // 186
		_mm_set_ps(const float  __Z,
				const float  __Y,
				const float  __X,
				const float  __W);  // 187
	}
	Set4Floats<>(float p0,
			float p1,
			float p2,
			float p3);  // 146
	VectorAligned::Init(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 31
	VectorAligned::VectorAligned(
			const Vector& rhs);  // 159
	VectorTransform(const Vector& in1,
			const matrix3x4_t& in2,
			Vector& out);  // 1307
	Vector::Vector(); // 1306
	VectorTransform(const Vector& in1,
			const matrix3x4_t& in2);  // 2707
	matrix3x4_t::TransformVector(
			const Vector& v0);  // 157
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 157
	{
		fltx4 retVal; // 186
		_mm_set_ps(const float  __Z,
				const float  __Y,
				const float  __X,
				const float  __W);  // 187
	}
	Set4Floats<>(float p0,
			float p1,
			float p2,
			float p3);  // 146
	VectorAligned::Init(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 31
	VectorAligned::VectorAligned(
			const Vector& rhs);  // 159
	VectorTransform(const Vector& in1,
			const matrix3x4_t& in2,
			Vector& out);  // 1307
	Vector::Vector(); // 1306
	VectorTransform(const Vector& in1,
			const matrix3x4_t& in2);  // 2707
	matrix3x4_t::TransformVector(
			const Vector& v0);  // 158
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 158
	{
		fltx4 retVal; // 186
		_mm_set_ps(const float  __Z,
				const float  __Y,
				const float  __X,
				const float  __W);  // 187
	}
	Set4Floats<>(float p0,
			float p1,
			float p2,
			float p3);  // 146
	VectorAligned::Init(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 31
	VectorAligned::VectorAligned(
			const Vector& rhs);  // 159
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 139
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 138
	AABB_t::MakeInvalid(); // 286
	Vector::Vector(); // 24
	Vector::Vector(); // 24
	AABB_t::AABB_t(); // 285
	{
		int i; // 287
		_mm_cvtss_f32(__m128 __A); // 1534
		GetZSIMD<>(fltx4 a); // 76
		VectorAligned::z(); // 40
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 40
		VectorAligned::operator Vector(); // 289
		AABB_t::AddPointToBounds(
				const Vector& vPoint);  // 83
		AABB_t::operator|=(
				const Vector& vPoint);  // 289
	}
	GetAabb(const VectorAligned* pPos,
		int nCount);  // 161
} /* size: 1004, variables: 2, inline expansions: 73 (1780 bytes) */

