
//
// thirdparty/quickhull/qhMass.cpp
//
//	referenced by: libengine2.so
//
//	functions: 6
//

// <061FDD7C> thirdparty/quickhull/qhMass.cpp:12
// variables: 7
qhMatrix3 qhSteiner(qhReal Weight, const qhVector3& Center)
{
	qhReal Ixx; // 15
	qhReal Iyy; // 16
	qhReal Izz; // 17
	qhReal Ixy; // 18
	qhReal Ixz; // 19
	qhReal Iyz; // 20
	qhMatrix3 Out; // 23
} /* size: 0, variables: 7 */

// <061FDD4F> thirdparty/quickhull/qhMass.cpp:35
void qhMass::qhMass()
{
} /* size: 0 */

// <061FDA33> thirdparty/quickhull/qhMass.cpp:56
// function calls: 4
void qhMass::ShiftToOrigin()
{
	qhSteiner(qhReal Weight,
			const qhVector3& Center);  // 58
	qhVector3::operator+=(
			const qhVector3& V);  // 525
	qhVector3::operator+=(
			const qhVector3& V);  // 527
	qhMatrix3::operator+=(
			const qhMatrix3& M);  // 58
} /* size: 0, inline expansions: 4 (0 bytes) */

// <061FD901> thirdparty/quickhull/qhMass.cpp:63
// function calls: 4
void qhMass::ShiftToCenter()
{
	qhSteiner(qhReal Weight,
			const qhVector3& Center);  // 65
	qhVector3::operator-=(
			const qhVector3& V);  // 536
	qhVector3::operator-=(
			const qhVector3& V);  // 538
	qhMatrix3::operator-=(
			const qhMatrix3& M);  // 65
} /* size: 0, inline expansions: 4 (0 bytes) */

// <061FD52C> thirdparty/quickhull/qhMass.cpp:70
// variables: 4
// function calls: 12
qhMass qhSphereMass(const qhVector3& Center, qhReal Radius, qhReal Density)
{
	qhReal Volume; // 72
	qhReal Weight; // 73
	qhReal I; // 75
	qhMass Mass; // 77
	qhVector3::qhVector3(
			qhReal x,
			qhReal y,
			qhReal z);  // 230
	operator+(const qhVector3& V1,
			const qhVector3& V2);  // 601
	qhVector3::qhVector3(
			qhReal x,
			qhReal y,
			qhReal z);  // 230
	operator+(const qhVector3& V1,
			const qhVector3& V2);  // 602
	qhVector3::qhVector3(
			qhReal x,
			qhReal y,
			qhReal z);  // 230
	operator+(const qhVector3& V1,
			const qhVector3& V2);  // 603
	operator+(const qhMatrix3& M1,
			const qhMatrix3& M2);  // 80
	qhSteiner(qhReal Weight,
			const qhVector3& Center);  // 80
	qhVector3::qhVector3(
			qhReal x,
			qhReal y,
			qhReal z);  // 496
	qhVector3::qhVector3(
			qhReal x,
			qhReal y,
			qhReal z);  // 497
	qhVector3::qhVector3(
			qhReal x,
			qhReal y,
			qhReal z);  // 498
	qhMatrix3::qhMatrix3(
			qhReal A11,
			qhReal A22,
			qhReal A33);  // 80
} /* size: 0, variables: 4, inline expansions: 12 (0 bytes) */

// <061FB55E> thirdparty/quickhull/qhMass.cpp:87
// variables: 17
// function calls: 126
qhMass qhCapsuleMass(const qhVector3& Center1, const qhVector3& Center2, qhReal Radius, qhReal Density)
{
	qhReal Height; // 90
	qhReal CylinderVolume; // 97
	qhReal CylinderWeight; // 98
	qhReal SphereVolume; // 101
	qhReal SphereWeight; // 102
	qhReal Offset; // 105
	qhReal Ix; // 107
	qhReal Iy; // 108
	qhReal Weight; // 111
	qhVector3 Center; // 112
	qhVector3 Direction; // 113
	qhQuaternion Q; // 114
	qhMatrix3 R; // 115
	qhMass Mass; // 117
	qhVector3::qhVector3(
			qhReal x,
			qhReal y,
			qhReal z);  // 230
	operator+(const qhVector3& V1,
			const qhVector3& V2);  // 93
	qhVector3::qhVector3(
			qhReal x,
			qhReal y,
			qhReal z);  // 244
	operator*(qhReal S,
			const qhVector3& V);  // 93
	qhVector3::qhVector3(
			qhReal x,
			qhReal y,
			qhReal z);  // 237
	operator-(const qhVector3& V1,
			const qhVector3& V2);  // 460
	qhDot(const qhVector3& V1,
		const qhVector3& V2);  // 446
	sqrt(float __x); // 446
	qhLength(const qhVector3& V); // 460
	qhDistance(const qhVector3& V1,
			const qhVector3& V2);  // 90
	qhVector3::qhVector3(
			qhReal x,
			qhReal y,
			qhReal z);  // 237
	operator-(const qhVector3& V1,
			const qhVector3& V2);  // 113
	qhVector3::qhVector3(
			qhReal x,
			qhReal y,
			qhReal z);  // 230
	operator+(const qhVector3& V1,
			const qhVector3& V2);  // 837
	qhVector3::qhVector3(
			qhReal x,
			qhReal y,
			qhReal z);  // 244
	operator*(qhReal S,
			const qhVector3& V);  // 837
	qhDot(const qhVector3& V1,
		const qhVector3& V2);  // 453
	qhLengthSq(const qhVector3& V); // 838
	qhAbs(qhReal X); // 848
	{
		qhVector3 V; // 840
		qhReal S; // 841
		qhVector3::qhVector3(
				qhReal x,
				qhReal y,
				qhReal z);  // 362
		qhCross(const qhVector3& V1,
			const qhVector3& V2);  // 840
		qhDot(const qhVector3& V1,
			const qhVector3& V2);  // 841
		qhQuaternion::qhQuaternion(
				const qhVector3& V,
				qhReal S);  // 843
	}
	sqrt(float __x); // 68
	qhSqrt(qhReal X); // 984
	qhLength(const qhQuaternion& Q); // 958
	{
		qhQuaternion Out; // 961
	}
	qhNormalize(const qhQuaternion& Q); // 956
	qhNormalize(const qhQuaternion& Q); // 865
	qhRotation(const qhVector3& V1,
			const qhVector3& V2);  // 114
	qhDot(const qhVector3& V1,
		const qhVector3& V2);  // 446
	sqrt(float __x); // 446
	qhLength(const qhVector3& V); // 376
	qhVector3::qhVector3(
			qhReal x,
			qhReal y,
			qhReal z);  // 377
	qhNormalize(const qhVector3& V); // 113
	qhVector3::qhVector3(
			qhReal x,
			qhReal y,
			qhReal z);  // 230
	operator+(const qhVector3& V1,
			const qhVector3& V2);  // 112
	qhVector3::qhVector3(
			qhReal x,
			qhReal y,
			qhReal z);  // 244
	operator*(qhReal S,
			const qhVector3& V);  // 112
	qhVector3::qhVector3(
			qhReal x,
			qhReal y,
			qhReal z);  // 753
	qhVector3::qhVector3(
			qhReal x,
			qhReal y,
			qhReal z);  // 754
	qhVector3::qhVector3(
			qhReal x,
			qhReal y,
			qhReal z);  // 755
	qhConvert(const qhQuaternion& Q); // 115
	qhSteiner(qhReal Weight,
			const qhVector3& Center);  // 120
	qhVector3::qhVector3(
			qhReal x,
			qhReal y,
			qhReal z);  // 251
	operator*(const qhVector3& V,
			qhReal S);  // 201
	qhVector3::qhVector3(
			qhReal x,
			qhReal y,
			qhReal z);  // 251
	operator*(const qhVector3& V,
			qhReal S);  // 201
	qhVector3::qhVector3(
			qhReal x,
			qhReal y,
			qhReal z);  // 251
	operator*(const qhVector3& V,
			qhReal S);  // 201
	qhVector3::qhVector3(
			qhReal x,
			qhReal y,
			qhReal z);  // 230
	operator+(const qhVector3& V1,
			const qhVector3& V2);  // 201
	qhVector3::qhVector3(
			qhReal x,
			qhReal y,
			qhReal z);  // 230
	operator+(const qhVector3& V1,
			const qhVector3& V2);  // 201
	operator*(const qhMatrix3& M,
			const qhVector3& V);  // 589
	qhVector3::qhVector3(
			qhReal x,
			qhReal y,
			qhReal z);  // 251
	operator*(const qhVector3& V,
			qhReal S);  // 201
	qhVector3::qhVector3(
			qhReal x,
			qhReal y,
			qhReal z);  // 251
	operator*(const qhVector3& V,
			qhReal S);  // 201
	qhVector3::qhVector3(
			qhReal x,
			qhReal y,
			qhReal z);  // 251
	operator*(const qhVector3& V,
			qhReal S);  // 201
	qhVector3::qhVector3(
			qhReal x,
			qhReal y,
			qhReal z);  // 230
	operator+(const qhVector3& V1,
			const qhVector3& V2);  // 201
	qhVector3::qhVector3(
			qhReal x,
			qhReal y,
			qhReal z);  // 230
	operator+(const qhVector3& V1,
			const qhVector3& V2);  // 201
	operator*(const qhMatrix3& M,
			const qhVector3& V);  // 590
	qhVector3::qhVector3(
			qhReal x,
			qhReal y,
			qhReal z);  // 230
	operator+(const qhVector3& V1,
			const qhVector3& V2);  // 201
	qhVector3::qhVector3(
			qhReal x,
			qhReal y,
			qhReal z);  // 251
	operator*(const qhVector3& V,
			qhReal S);  // 201
	qhVector3::qhVector3(
			qhReal x,
			qhReal y,
			qhReal z);  // 230
	operator+(const qhVector3& V1,
			const qhVector3& V2);  // 201
	qhVector3::qhVector3(
			qhReal x,
			qhReal y,
			qhReal z);  // 251
	operator*(const qhVector3& V,
			qhReal S);  // 201
	qhVector3::qhVector3(
			qhReal x,
			qhReal y,
			qhReal z);  // 251
	operator*(const qhVector3& V,
			qhReal S);  // 201
	operator*(const qhMatrix3& M,
			const qhVector3& V);  // 591
	operator*(const qhMatrix3& M1,
			const qhMatrix3& M2);  // 120
	qhVector3::qhVector3(
			qhReal x,
			qhReal y,
			qhReal z);  // 694
	qhVector3::qhVector3(
			qhReal x,
			qhReal y,
			qhReal z);  // 695
	qhVector3::qhVector3(
			qhReal x,
			qhReal y,
			qhReal z);  // 696
	qhTranspose(const qhMatrix3& M); // 120
	qhVector3::qhVector3(
			qhReal x,
			qhReal y,
			qhReal z);  // 496
	qhVector3::qhVector3(
			qhReal x,
			qhReal y,
			qhReal z);  // 497
	qhVector3::qhVector3(
			qhReal x,
			qhReal y,
			qhReal z);  // 498
	qhMatrix3::qhMatrix3(
			qhReal A11,
			qhReal A22,
			qhReal A33);  // 120
	qhVector3::qhVector3(
			qhReal x,
			qhReal y,
			qhReal z);  // 251
	operator*(const qhVector3& V,
			qhReal S);  // 201
	qhVector3::qhVector3(
			qhReal x,
			qhReal y,
			qhReal z);  // 251
	operator*(const qhVector3& V,
			qhReal S);  // 201
	qhVector3::qhVector3(
			qhReal x,
			qhReal y,
			qhReal z);  // 251
	operator*(const qhVector3& V,
			qhReal S);  // 201
	qhVector3::qhVector3(
			qhReal x,
			qhReal y,
			qhReal z);  // 230
	operator+(const qhVector3& V1,
			const qhVector3& V2);  // 201
	qhVector3::qhVector3(
			qhReal x,
			qhReal y,
			qhReal z);  // 230
	operator+(const qhVector3& V1,
			const qhVector3& V2);  // 201
	operator*(const qhMatrix3& M,
			const qhVector3& V);  // 589
	qhVector3::qhVector3(
			qhReal x,
			qhReal y,
			qhReal z);  // 251
	operator*(const qhVector3& V,
			qhReal S);  // 201
	qhVector3::qhVector3(
			qhReal x,
			qhReal y,
			qhReal z);  // 251
	operator*(const qhVector3& V,
			qhReal S);  // 201
	qhVector3::qhVector3(
			qhReal x,
			qhReal y,
			qhReal z);  // 251
	operator*(const qhVector3& V,
			qhReal S);  // 201
	qhVector3::qhVector3(
			qhReal x,
			qhReal y,
			qhReal z);  // 230
	operator+(const qhVector3& V1,
			const qhVector3& V2);  // 201
	qhVector3::qhVector3(
			qhReal x,
			qhReal y,
			qhReal z);  // 230
	operator+(const qhVector3& V1,
			const qhVector3& V2);  // 201
	operator*(const qhMatrix3& M,
			const qhVector3& V);  // 590
	qhVector3::qhVector3(
			qhReal x,
			qhReal y,
			qhReal z);  // 251
	operator*(const qhVector3& V,
			qhReal S);  // 201
	qhVector3::qhVector3(
			qhReal x,
			qhReal y,
			qhReal z);  // 251
	operator*(const qhVector3& V,
			qhReal S);  // 201
	qhVector3::qhVector3(
			qhReal x,
			qhReal y,
			qhReal z);  // 251
	operator*(const qhVector3& V,
			qhReal S);  // 201
	qhVector3::qhVector3(
			qhReal x,
			qhReal y,
			qhReal z);  // 230
	operator+(const qhVector3& V1,
			const qhVector3& V2);  // 201
	qhVector3::qhVector3(
			qhReal x,
			qhReal y,
			qhReal z);  // 230
	operator+(const qhVector3& V1,
			const qhVector3& V2);  // 201
	operator*(const qhMatrix3& M,
			const qhVector3& V);  // 591
	operator*(const qhMatrix3& M1,
			const qhMatrix3& M2);  // 120
	qhVector3::qhVector3(
			qhReal x,
			qhReal y,
			qhReal z);  // 230
	operator+(const qhVector3& V1,
			const qhVector3& V2);  // 601
	qhVector3::qhVector3(
			qhReal x,
			qhReal y,
			qhReal z);  // 230
	operator+(const qhVector3& V1,
			const qhVector3& V2);  // 602
	qhVector3::qhVector3(
			qhReal x,
			qhReal y,
			qhReal z);  // 230
	operator+(const qhVector3& V1,
			const qhVector3& V2);  // 603
	operator+(const qhMatrix3& M1,
			const qhMatrix3& M2);  // 120
} /* size: 0, variables: 14, inline expansions: 122 (0 bytes) */

