
//
// thirdparty/quickhull/qhHalfEdge.cpp
//
//	referenced by: libengine2.so
//
//	functions: 2
//

// <062031B1> thirdparty/quickhull/qhHalfEdge.cpp:12
// function calls: 2
void qhHalfEdge::IsConvex(qhReal Tolerance)
{
	qhDot(const qhVector3& V1,
		const qhVector3& V2);  // 1053
	qhPlane::Distance(
		const qhVector3& Point);  // 14
} /* size: 73, inline expansions: 2 (81 bytes) */

// <06202ACE> thirdparty/quickhull/qhHalfEdge.cpp:98
// variables: 7
// function calls: 13
bool qhIsConvex(const qhFace* Face, qhReal Tolerance)
{
	const qhHalfEdge* Edge; // 100
	{
		qhVector3 Tail; // 104
		qhVector3 Head; // 105
		qhVector3 Offset; // 107
		qhVector3 Normal; // 108
		qhPlane Plane; // 110
		qhReal Distance; // 113
		qhVector3::qhVector3(
				qhReal x,
				qhReal y,
				qhReal z);  // 237
		operator-(const qhVector3& V1,
				const qhVector3& V2);  // 107
		qhVector3::qhVector3(
				qhReal x,
				qhReal y,
				qhReal z);  // 362
		qhCross(const qhVector3& V1,
			const qhVector3& V2);  // 108
		qhDot(const qhVector3& V1,
			const qhVector3& V2);  // 1009
		qhPlane::qhPlane(
			const qhVector3& _Normal,
			const qhVector3& _Point);  // 110
		qhDot(const qhVector3& V1,
			const qhVector3& V2);  // 446
		sqrt(float __x); // 446
		qhLength(const qhVector3& V); // 1037
		qhVector3::operator/=(
				qhReal S);  // 1038
		qhPlane::Normalize(); // 111
		qhDot(const qhVector3& V1,
			const qhVector3& V2);  // 1053
		qhPlane::Distance(
			const qhVector3& Point);  // 113
	}
} /* size: 0, variables: 1 */

