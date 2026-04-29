
//
// thirdparty/quickhull/qhMath.h
//
//	referenced by: libengine2.so
//
//	classes: 5
//

// <009962DB> ../thirdparty/quickhull/qhMath.h:74
// member functions: 24
// member variables: 3
// class size: 12
class qhVector3 {
	qhReal X; /* 0 4 */
	qhReal Y; /* 4 4 */
	qhReal Z; /* 8 4 */
	/* ../thirdparty/quickhull/qhMath.h:81 */
	void qhVector3(qhVector3* );
	/* ../thirdparty/quickhull/qhMath.h:82 */
	void qhVector3(qhVector3* , qhReal, qhReal, qhReal);
	/* ../thirdparty/quickhull/qhMath.h:83 */
	void qhVector3(qhVector3* , const qhReal* );
	/* ../thirdparty/quickhull/qhMath.h:86 */
	qhReal* operator qhReal*(qhVector3* );
	/* ../thirdparty/quickhull/qhMath.h:87 */
	const qhReal* operator const qhReal*(const qhVector3* );
	/* ../thirdparty/quickhull/qhMath.h:90 */
	qhVector3& operator*=(qhVector3* , const qhVector3& );
	/* ../thirdparty/quickhull/qhMath.h:91 */
	qhVector3& operator+=(qhVector3* , const qhVector3& );
	/* ../thirdparty/quickhull/qhMath.h:92 */
	qhVector3& operator-=(qhVector3* , const qhVector3& );
	/* ../thirdparty/quickhull/qhMath.h:93 */
	qhVector3& operator*=(qhVector3* , qhReal);
	/* ../thirdparty/quickhull/qhMath.h:94 */
	qhVector3& operator/=(qhVector3* , qhReal);
	/* ../thirdparty/quickhull/qhMath.h:97 */
	qhVector3 operator+(const qhVector3* );
	/* ../thirdparty/quickhull/qhMath.h:98 */
	qhVector3 operator-(const qhVector3* );
	void qhVector3(class qhVector3 *); /* linkage=_ZN9qhVector3C4Ev */
	void qhVector3(class qhVector3 *, qhReal, qhReal, qhReal); /* linkage=_ZN9qhVector3C4Efff */
	void qhVector3(class qhVector3 *, const qhReal  *); /* linkage=_ZN9qhVector3C4EPKf */
	qhReal * operator qhReal*(class qhVector3 *); /* linkage=_ZN9qhVector3cvPfEv */
	const qhReal  * operator const qhReal*(const class qhVector3  *); /* linkage=_ZNK9qhVector3cvPKfEv */
	class qhVector3 & operator*=(class qhVector3 *, const class qhVector3  &); /* linkage=_ZN9qhVector3mLERKS_ */
	class qhVector3 & operator+=(class qhVector3 *, const class qhVector3  &); /* linkage=_ZN9qhVector3pLERKS_ */
	class qhVector3 & operator-=(class qhVector3 *, const class qhVector3  &); /* linkage=_ZN9qhVector3mIERKS_ */
	class qhVector3 & operator*=(class qhVector3 *, qhReal); /* linkage=_ZN9qhVector3mLEf */
	class qhVector3 & operator/=(class qhVector3 *, qhReal); /* linkage=_ZN9qhVector3dVEf */
	class qhVector3 operator+(const class qhVector3  *); /* linkage=_ZNK9qhVector3psEv */
	class qhVector3 operator-(const class qhVector3  *); /* linkage=_ZNK9qhVector3ngEv */
};

// <00996535> ../thirdparty/quickhull/qhMath.h:159
// member functions: 20
// member variables: 3
// class size: 36
class qhMatrix3 {
	qhVector3 C1; /* 0 12 */
	qhVector3 C2; /* 12 12 */
	qhVector3 C3; /* 24 12 */
	/* ../thirdparty/quickhull/qhMath.h:166 */
	void qhMatrix3(qhMatrix3* );
	/* ../thirdparty/quickhull/qhMath.h:167 */
	void qhMatrix3(qhMatrix3* , qhReal, qhReal, qhReal);
	/* ../thirdparty/quickhull/qhMath.h:168 */
	void qhMatrix3(qhMatrix3* , const qhVector3& , const qhVector3& , const qhVector3& );
	/* ../thirdparty/quickhull/qhMath.h:171 */
	qhMatrix3& operator*=(qhMatrix3* , const qhMatrix3& );
	/* ../thirdparty/quickhull/qhMath.h:172 */
	qhMatrix3& operator+=(qhMatrix3* , const qhMatrix3& );
	/* ../thirdparty/quickhull/qhMath.h:173 */
	qhMatrix3& operator-=(qhMatrix3* , const qhMatrix3& );
	/* ../thirdparty/quickhull/qhMath.h:174 */
	qhMatrix3& operator*=(qhMatrix3* , qhReal);
	/* ../thirdparty/quickhull/qhMath.h:175 */
	qhMatrix3& operator/=(qhMatrix3* , qhReal);
	/* ../thirdparty/quickhull/qhMath.h:178 */
	qhMatrix3 operator+(const qhMatrix3* );
	/* ../thirdparty/quickhull/qhMath.h:179 */
	qhMatrix3 operator-(const qhMatrix3* );
	void qhMatrix3(class qhMatrix3 *); /* linkage=_ZN9qhMatrix3C4Ev */
	void qhMatrix3(class qhMatrix3 *, qhReal, qhReal, qhReal); /* linkage=_ZN9qhMatrix3C4Efff */
	void qhMatrix3(class qhMatrix3 *, const class qhVector3  &, const class qhVector3  &, const class qhVector3  &); /* linkage=_ZN9qhMatrix3C4ERK9qhVector3S2_S2_ */
	class qhMatrix3 & operator*=(class qhMatrix3 *, const class qhMatrix3  &); /* linkage=_ZN9qhMatrix3mLERKS_ */
	class qhMatrix3 & operator+=(class qhMatrix3 *, const class qhMatrix3  &); /* linkage=_ZN9qhMatrix3pLERKS_ */
	class qhMatrix3 & operator-=(class qhMatrix3 *, const class qhMatrix3  &); /* linkage=_ZN9qhMatrix3mIERKS_ */
	class qhMatrix3 & operator*=(class qhMatrix3 *, qhReal); /* linkage=_ZN9qhMatrix3mLEf */
	class qhMatrix3 & operator/=(class qhMatrix3 *, qhReal); /* linkage=_ZN9qhMatrix3dVEf */
	class qhMatrix3 operator+(const class qhMatrix3  *); /* linkage=_ZNK9qhMatrix3psEv */
	class qhMatrix3 operator-(const class qhMatrix3  *); /* linkage=_ZNK9qhMatrix3ngEv */
};

// <00996730> ../thirdparty/quickhull/qhMath.h:215
// member functions: 12
// member variables: 4
// class size: 16
class qhQuaternion {
	qhReal X; /* 0 4 */
	qhReal Y; /* 4 4 */
	qhReal Z; /* 8 4 */
	qhReal W; /* 12 4 */
	/* ../thirdparty/quickhull/qhMath.h:222 */
	void qhQuaternion(qhQuaternion* );
	/* ../thirdparty/quickhull/qhMath.h:223 */
	void qhQuaternion(qhQuaternion* , qhReal, qhReal, qhReal, qhReal);
	/* ../thirdparty/quickhull/qhMath.h:224 */
	void qhQuaternion(qhQuaternion* , const qhVector3& , qhReal);
	/* ../thirdparty/quickhull/qhMath.h:225 */
	void qhQuaternion(qhQuaternion* , const qhReal* );
	/* ../thirdparty/quickhull/qhMath.h:227 */
	qhVector3 V(const qhQuaternion* );
	/* ../thirdparty/quickhull/qhMath.h:228 */
	qhReal S(const qhQuaternion* );
	void qhQuaternion(class qhQuaternion *); /* linkage=_ZN12qhQuaternionC4Ev */
	void qhQuaternion(class qhQuaternion *, qhReal, qhReal, qhReal, qhReal); /* linkage=_ZN12qhQuaternionC4Effff */
	void qhQuaternion(class qhQuaternion *, const class qhVector3  &, qhReal); /* linkage=_ZN12qhQuaternionC4ERK9qhVector3f */
	void qhQuaternion(class qhQuaternion *, const qhReal  *); /* linkage=_ZN12qhQuaternionC4EPKf */
	class qhVector3 V(const class qhQuaternion  *); /* linkage=_ZNK12qhQuaternion1VEv */
	qhReal S(const class qhQuaternion  *); /* linkage=_ZNK12qhQuaternion1SEv */
};

// <00996888> ../thirdparty/quickhull/qhMath.h:268
// member functions: 16
// member variables: 2
// class size: 16
class qhPlane {
	qhVector3 Normal; /* 0 12 */
	qhReal Offset; /* 12 4 */
	/* ../thirdparty/quickhull/qhMath.h:276 */
	void qhPlane(qhPlane* );
	/* ../thirdparty/quickhull/qhMath.h:277 */
	void qhPlane(qhPlane* , const qhVector3& , qhReal);
	/* ../thirdparty/quickhull/qhMath.h:278 */
	void qhPlane(qhPlane* , const qhVector3& , const qhVector3& );
	/* ../thirdparty/quickhull/qhMath.h:279 */
	void qhPlane(qhPlane* , const qhVector3& , const qhVector3& , const qhVector3& );
	/* ../thirdparty/quickhull/qhMath.h:281 */
	void Negate(qhPlane* );
	/* ../thirdparty/quickhull/qhMath.h:282 */
	void Normalize(qhPlane* );
	/* ../thirdparty/quickhull/qhMath.h:283 */
	void Translate(qhPlane* , const qhVector3& );
	/* ../thirdparty/quickhull/qhMath.h:285 */
	qhReal Distance(const qhPlane* , const qhVector3& );
	void qhPlane(class qhPlane *); /* linkage=_ZN7qhPlaneC4Ev */
	void qhPlane(class qhPlane *, const class qhVector3  &, qhReal); /* linkage=_ZN7qhPlaneC4ERK9qhVector3f */
	void qhPlane(class qhPlane *, const class qhVector3  &, const class qhVector3  &); /* linkage=_ZN7qhPlaneC4ERK9qhVector3S2_ */
	void qhPlane(class qhPlane *, const class qhVector3  &, const class qhVector3  &, const class qhVector3  &); /* linkage=_ZN7qhPlaneC4ERK9qhVector3S2_S2_ */
	void Negate(class qhPlane *); /* linkage=_ZN7qhPlane6NegateEv */
	void Normalize(class qhPlane *); /* linkage=_ZN7qhPlane9NormalizeEv */
	void Translate(class qhPlane *, const class qhVector3  &); /* linkage=_ZN7qhPlane9TranslateERK9qhVector3 */
	qhReal Distance(const class qhPlane  *, const class qhVector3  &); /* linkage=_ZNK7qhPlane8DistanceERK9qhVector3 */
};

// <009969F4> ../thirdparty/quickhull/qhMath.h:295
// member functions: 14
// member variables: 2
// class size: 24
class qhBounds3 {
	qhVector3 Min; /* 0 12 */
	qhVector3 Max; /* 12 12 */
	/* ../thirdparty/quickhull/qhMath.h:302 */
	void qhBounds3(qhBounds3* );
	/* ../thirdparty/quickhull/qhMath.h:303 */
	void qhBounds3(qhBounds3* , const qhVector3& , const qhVector3& );
	/* ../thirdparty/quickhull/qhMath.h:306 */
	qhBounds3& operator+=(qhBounds3* , const qhVector3& );
	/* ../thirdparty/quickhull/qhMath.h:307 */
	qhBounds3& operator+=(qhBounds3* , const qhBounds3& );
	/* ../thirdparty/quickhull/qhMath.h:310 */
	qhVector3 GetCenter(const qhBounds3* );
	/* ../thirdparty/quickhull/qhMath.h:311 */
	qhVector3 GetExtent(const qhBounds3* );
	/* ../thirdparty/quickhull/qhMath.h:313 */
	qhReal GetVolume(const qhBounds3* );
	void qhBounds3(class qhBounds3 *); /* linkage=_ZN9qhBounds3C4Ev */
	void qhBounds3(class qhBounds3 *, const class qhVector3  &, const class qhVector3  &); /* linkage=_ZN9qhBounds3C4ERK9qhVector3S2_ */
	class qhBounds3 & operator+=(class qhBounds3 *, const class qhVector3  &); /* linkage=_ZN9qhBounds3pLERK9qhVector3 */
	class qhBounds3 & operator+=(class qhBounds3 *, const class qhBounds3  &); /* linkage=_ZN9qhBounds3pLERKS_ */
	class qhVector3 GetCenter(const class qhBounds3  *); /* linkage=_ZNK9qhBounds39GetCenterEv */
	class qhVector3 GetExtent(const class qhBounds3  *); /* linkage=_ZNK9qhBounds39GetExtentEv */
	qhReal GetVolume(const class qhBounds3  *); /* linkage=_ZNK9qhBounds39GetVolumeEv */
};

