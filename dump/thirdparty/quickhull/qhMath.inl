
//
// thirdparty/quickhull/qhMath.inl
//
//	referenced by: libengine2.so
//
//	functions: 44
//

// <061F6EB1> thirdparty/quickhull/qhMath.inl:18
inline qhReal qhCos(qhReal Rad)
{
} /* size: 0 */

// <061FE4F6> thirdparty/quickhull/qhMath.inl:66
inline qhReal qhSqrt(qhReal X)
{
} /* size: 0 */

// <061EB65A> thirdparty/quickhull/qhMath.inl:73
inline float qhMin<float>(float X, float Y)
{
} /* size: 0 */

// <061EB628> thirdparty/quickhull/qhMath.inl:80
inline float qhMax<float>(float X, float Y)
{
} /* size: 0 */

// <062035A5> thirdparty/quickhull/qhMath.inl:96
void qhVector3::qhVector3(qhReal x, qhReal y, qhReal z)
{
} /* size: 0 */

// <0620356B> thirdparty/quickhull/qhMath.inl:96
inline void qhVector3::qhVector3(qhReal x, qhReal y, qhReal z)
{
} /* size: 0 */

// <061F6E14> thirdparty/quickhull/qhMath.inl:116
inline void operator qhVector3::qhReal*()
{
} /* size: 0 */

// <061FE44A> thirdparty/quickhull/qhMath.inl:152
inline void qhVector3::operator-=(const qhVector3& V)
{
} /* size: 0 */

// <061F6DC8> thirdparty/quickhull/qhMath.inl:163
inline void qhVector3::operator*=(qhReal S)
{
} /* size: 0 */

// <0620351F> thirdparty/quickhull/qhMath.inl:174
inline void qhVector3::operator/=(qhReal S)
{
} /* size: 0 */

// <05DFE4B1> ../thirdparty/quickhull/qhMath.inl:256
inline qhVector3 operator/(const qhVector3& V, qhReal S)
{
} /* size: 0 */

// <05DFE460> ../thirdparty/quickhull/qhMath.inl:356
// variables: 3
inline qhVector3 qhCross(const qhVector3& V1, const qhVector3& V2)
{
	qhReal X; // 358
	qhReal Y; // 359
	qhReal Z; // 360
} /* size: 0, variables: 3 */

// <061F6C52> thirdparty/quickhull/qhMath.inl:374
// variable: 1
inline qhVector3 qhNormalize(const qhVector3& V)
{
	qhReal Length; // 376
} /* size: 0, variables: 1 */

// <061F6C22> thirdparty/quickhull/qhMath.inl:389
// variable: 1
inline qhVector3 qhAbs(const qhVector3& V)
{
	qhVector3 Out; // 391
} /* size: 0, variables: 1 */

// <061F6BE5> thirdparty/quickhull/qhMath.inl:401
// variable: 1
inline qhVector3 qhMin(const qhVector3& V1, const qhVector3& V2)
{
	qhVector3 Out; // 403
} /* size: 0, variables: 1 */

// <061F6BA8> thirdparty/quickhull/qhMath.inl:413
// variable: 1
inline qhVector3 qhMax(const qhVector3& V1, const qhVector3& V2)
{
	qhVector3 Out; // 415
} /* size: 0, variables: 1 */

// <05DFE430> ../thirdparty/quickhull/qhMath.inl:437
inline qhReal qhDot(const qhVector3& V1, const qhVector3& V2)
{
} /* size: 0 */

// <061F6B55> thirdparty/quickhull/qhMath.inl:444
inline qhReal qhLength(const qhVector3& V)
{
} /* size: 0 */

// <05DFE40D> ../thirdparty/quickhull/qhMath.inl:451
inline qhReal qhLengthSq(const qhVector3& V)
{
} /* size: 0 */

// <061F6B25> thirdparty/quickhull/qhMath.inl:458
inline qhReal qhDistance(const qhVector3& V1, const qhVector3& V2)
{
} /* size: 0 */

// <061F6AE9> thirdparty/quickhull/qhMath.inl:472
inline qhReal qhDet(const qhVector3& V1, const qhVector3& V2, const qhVector3& V3)
{
} /* size: 0 */

// <061F6AC6> thirdparty/quickhull/qhMath.inl:486
inline int qhMaxElement(const qhVector3& V)
{
} /* size: 0 */

// <061FE222> thirdparty/quickhull/qhMath.inl:495
void qhMatrix3::qhMatrix3(qhReal A11, qhReal A22, qhReal A33)
{
} /* size: 0 */

// <061FE1DE> thirdparty/quickhull/qhMath.inl:495
inline void qhMatrix3::qhMatrix3(qhReal A11, qhReal A22, qhReal A33)
{
} /* size: 0 */

// <06203428> thirdparty/quickhull/qhMath.inl:505
void qhMatrix3::qhMatrix3(const qhVector3& C1, const qhVector3& C2, const qhVector3& C3)
{
} /* size: 0 */

// <062033E7> thirdparty/quickhull/qhMath.inl:505
inline void qhMatrix3::qhMatrix3(const qhVector3& C1, const qhVector3& C2, const qhVector3& C3)
{
} /* size: 0 */

// <061FE127> thirdparty/quickhull/qhMath.inl:534
inline void qhMatrix3::operator-=(const qhMatrix3& M)
{
} /* size: 0 */

// <061FE07D> thirdparty/quickhull/qhMath.inl:691
// variable: 1
inline qhMatrix3 qhTranspose(const qhMatrix3& M)
{
	qhMatrix3 Out; // 693
} /* size: 0, variables: 1 */

// <061FDFE1> thirdparty/quickhull/qhMath.inl:739
// variables: 10
inline qhMatrix3 qhConvert(const qhQuaternion& Q)
{
	qhReal XX; // 741
	qhReal YY; // 742
	qhReal ZZ; // 743
	qhReal XY; // 745
	qhReal XZ; // 746
	qhReal XW; // 747
	qhReal YZ; // 748
	qhReal YW; // 749
	qhReal ZW; // 750
	qhMatrix3 Out; // 752
} /* size: 0, variables: 10 */

// <062033BC> thirdparty/quickhull/qhMath.inl:790
void qhQuaternion::qhQuaternion(qhReal x, qhReal y, qhReal z, qhReal w)
{
} /* size: 0 */

// <06203373> thirdparty/quickhull/qhMath.inl:790
inline void qhQuaternion::qhQuaternion(qhReal x, qhReal y, qhReal z, qhReal w)
{
} /* size: 0 */

// <061FDF4C> thirdparty/quickhull/qhMath.inl:801
void qhQuaternion::qhQuaternion(const qhVector3& V, qhReal S)
{
} /* size: 0 */

// <061FDF19> thirdparty/quickhull/qhMath.inl:801
inline void qhQuaternion::qhQuaternion(const qhVector3& V, qhReal S)
{
} /* size: 0 */

// <061FDEB9> thirdparty/quickhull/qhMath.inl:833
// variables: 4
inline qhQuaternion qhRotation(const qhVector3& V1, const qhVector3& V2)
{
	qhQuaternion Out; // 835
	qhVector3 M; // 837
	{
		qhVector3 V; // 840
		qhReal S; // 841
	}
} /* size: 0, variables: 2 */

// <05F08147> ../thirdparty/quickhull/qhMath.inl:998
void qhPlane::qhPlane(const qhVector3& _Normal, qhReal _Offset)
{
} /* size: 0 */

// <05F08110> ../thirdparty/quickhull/qhMath.inl:998
inline void qhPlane::qhPlane(const qhVector3& _Normal, qhReal _Offset)
{
} /* size: 0 */

// <06203352> thirdparty/quickhull/qhMath.inl:1007
void qhPlane::qhPlane(const qhVector3& _Normal, const qhVector3& _Point)
{
} /* size: 0 */

// <0620331B> thirdparty/quickhull/qhMath.inl:1007
inline void qhPlane::qhPlane(const qhVector3& _Normal, const qhVector3& _Point)
{
} /* size: 0 */

// <061F697A> thirdparty/quickhull/qhMath.inl:1016
// variables: 2
void qhPlane::qhPlane(const qhVector3& Point1, const qhVector3& Point2, const qhVector3& Point3)
{
	{
		qhVector3 Edge1; // 1018
		qhVector3 Edge2; // 1019
	}
} /* size: 0 */

// <061F691A> thirdparty/quickhull/qhMath.inl:1016
// variables: 2
inline void qhPlane::qhPlane(const qhVector3& Point1, const qhVector3& Point2, const qhVector3& Point3)
{
	{
		qhVector3 Edge1; // 1018
		qhVector3 Edge2; // 1019
	}
} /* size: 0 */

// <062032F1> thirdparty/quickhull/qhMath.inl:1035
// variable: 1
inline void qhPlane::Normalize()
{
	qhReal Length; // 1037
} /* size: 0, variables: 1 */

// <061F68C6> thirdparty/quickhull/qhMath.inl:1044
inline void qhPlane::Translate(const qhVector3& Translation)
{
} /* size: 0 */

// <062032A6> thirdparty/quickhull/qhMath.inl:1071
void qhBounds3::qhBounds3(const qhVector3& Min, const qhVector3& Max)
{
} /* size: 0 */

// <0620326F> thirdparty/quickhull/qhMath.inl:1071
inline void qhBounds3::qhBounds3(const qhVector3& Min, const qhVector3& Max)
{
} /* size: 0 */

