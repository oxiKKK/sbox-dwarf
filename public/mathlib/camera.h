
//
// public/mathlib/camera.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//				   libschemasystem.so
//
//	functions: 57
//	classes: 3
//	structs: 4
//

// <058099E3> ../../public/mathlib/camera.h:27
void Camera_t::Camera_t()
{
} /* size: 0 */

// <058099C6> ../../public/mathlib/camera.h:27
inline void Camera_t::Camera_t()
{
} /* size: 0 */

// <040B7F23> ../public/mathlib/camera.h:27
inline void Camera_t::operator=(const Camera_t &)
{
} /* size: 0 */

// <00045C99> ../public/mathlib/camera.h:27
// member functions: 10
// member variables: 8
// struct size: 48
struct Camera_t {
	/* ../public/mathlib/camera.h:29 */
	void Init(Camera_t* , const Vector& , const QAngle& , float, float, float, float);
	/* ../public/mathlib/camera.h:30 */
	void InitOrtho(Camera_t* , const Vector& , const QAngle& , float, float, float, float);
	/* ../public/mathlib/camera.h:32 */
	void InitViewParameters(Camera_t* , const Vector& , const QAngle& );
	/* ../public/mathlib/camera.h:34 */
	void InitOrthoProjection(Camera_t* , float, float, float, float);
	/* ../public/mathlib/camera.h:35 */
	bool IsOrthographic(const Camera_t* );
	/* ../public/mathlib/camera.h:36 */
	void InitPerspectiveProjection(Camera_t* , float, float, float, float);
	/* ../public/mathlib/camera.h:39 */
	void ComputeGeometry(const Camera_t* , Vector* );
	/* ../public/mathlib/camera.h:40 */
	void ComputeGeometry(const Camera_t* , Vector* , const Vector& , const Vector& , const Vector& );
	/* ../public/mathlib/camera.h:42 */
	bool operator==(const Camera_t* , const Camera_t& );
	/* ../public/mathlib/camera.h:43 */
	bool operator!=(const Camera_t* , const Camera_t& );
	Vector m_vOrigin; /* 0 12 */
	QAngle m_angles; /* 12 12 */
	float m_flFOVX; /* 24 4 */
	float m_flAspect; /* 28 4 */
	float m_flZNear; /* 32 4 */
	float m_flZFar; /* 36 4 */
	float m_flWidth; /* 40 4 */
	float m_flHeight; /* 44 4 */
} __attribute__((__aligned__(16)));

// <01D18842> ../public/mathlib/camera.h:27
// member functions: 11
// member variables: 8
// struct size: 48
struct Camera_t {
	/* ../public/mathlib/camera.h:29 */
	void Init(Camera_t* , const Vector& , const QAngle& , float, float, float, float);
	/* ../public/mathlib/camera.h:30 */
	void InitOrtho(Camera_t* , const Vector& , const QAngle& , float, float, float, float);
	/* ../public/mathlib/camera.h:32 */
	void InitViewParameters(Camera_t* , const Vector& , const QAngle& );
	/* ../public/mathlib/camera.h:34 */
	void InitOrthoProjection(Camera_t* , float, float, float, float);
	/* ../public/mathlib/camera.h:35 */
	bool IsOrthographic(const Camera_t* );
	/* ../public/mathlib/camera.h:36 */
	void InitPerspectiveProjection(Camera_t* , float, float, float, float);
	/* ../public/mathlib/camera.h:39 */
	void ComputeGeometry(const Camera_t* , Vector* );
	/* ../public/mathlib/camera.h:40 */
	void ComputeGeometry(const Camera_t* , Vector* , const Vector& , const Vector& , const Vector& );
	/* ../public/mathlib/camera.h:42 */
	bool operator==(const Camera_t* , const Camera_t& );
	/* ../public/mathlib/camera.h:43 */
	bool operator!=(const Camera_t* , const Camera_t& );
	Vector m_vOrigin; /* 0 12 */
	QAngle m_angles; /* 12 12 */
	float m_flFOVX; /* 24 4 */
	float m_flAspect; /* 28 4 */
	float m_flZNear; /* 32 4 */
	float m_flZFar; /* 36 4 */
	float m_flWidth; /* 40 4 */
	float m_flHeight; /* 44 4 */
	Camera_t& operator=(Camera_t* , const Camera_t& );
} __attribute__((__aligned__(16)));

// <05800249> ../../public/mathlib/camera.h:27
// member functions: 11
// member variables: 8
// struct size: 48
struct Camera_t {
	/* ../../public/mathlib/camera.h:29 */
	void Init(Camera_t* , const Vector& , const QAngle& , float, float, float, float);
	/* ../../public/mathlib/camera.h:30 */
	void InitOrtho(Camera_t* , const Vector& , const QAngle& , float, float, float, float);
	/* ../../public/mathlib/camera.h:32 */
	void InitViewParameters(Camera_t* , const Vector& , const QAngle& );
	/* ../../public/mathlib/camera.h:34 */
	void InitOrthoProjection(Camera_t* , float, float, float, float);
	/* ../../public/mathlib/camera.h:35 */
	bool IsOrthographic(const Camera_t* );
	/* ../../public/mathlib/camera.h:36 */
	void InitPerspectiveProjection(Camera_t* , float, float, float, float);
	/* ../../public/mathlib/camera.h:39 */
	void ComputeGeometry(const Camera_t* , Vector* );
	/* ../../public/mathlib/camera.h:40 */
	void ComputeGeometry(const Camera_t* , Vector* , const Vector& , const Vector& , const Vector& );
	/* ../../public/mathlib/camera.h:42 */
	bool operator==(const Camera_t* , const Camera_t& );
	/* ../../public/mathlib/camera.h:43 */
	bool operator!=(const Camera_t* , const Camera_t& );
	Vector m_vOrigin; /* 0 12 */
	QAngle m_angles; /* 12 12 */
	float m_flFOVX; /* 24 4 */
	float m_flAspect; /* 28 4 */
	float m_flZNear; /* 32 4 */
	float m_flZFar; /* 36 4 */
	float m_flWidth; /* 40 4 */
	float m_flHeight; /* 44 4 */
	void Camera_t(Camera_t* );
} __attribute__((__aligned__(16)));

// <058A6103> ../../public/mathlib/camera.h:27
// member functions: 10
// member variables: 8
// struct size: 48
struct Camera_t {
	/* ../../public/mathlib/camera.h:29 */
	void Init(Camera_t* , const Vector& , const QAngle& , float, float, float, float);
	/* ../../public/mathlib/camera.h:30 */
	void InitOrtho(Camera_t* , const Vector& , const QAngle& , float, float, float, float);
	/* ../../public/mathlib/camera.h:32 */
	void InitViewParameters(Camera_t* , const Vector& , const QAngle& );
	/* ../../public/mathlib/camera.h:34 */
	void InitOrthoProjection(Camera_t* , float, float, float, float);
	/* ../../public/mathlib/camera.h:35 */
	bool IsOrthographic(const Camera_t* );
	/* ../../public/mathlib/camera.h:36 */
	void InitPerspectiveProjection(Camera_t* , float, float, float, float);
	/* ../../public/mathlib/camera.h:39 */
	void ComputeGeometry(const Camera_t* , Vector* );
	/* ../../public/mathlib/camera.h:40 */
	void ComputeGeometry(const Camera_t* , Vector* , const Vector& , const Vector& , const Vector& );
	/* ../../public/mathlib/camera.h:42 */
	bool operator==(const Camera_t* , const Camera_t& );
	/* ../../public/mathlib/camera.h:43 */
	bool operator!=(const Camera_t* , const Camera_t& );
	Vector m_vOrigin; /* 0 12 */
	QAngle m_angles; /* 12 12 */
	float m_flFOVX; /* 24 4 */
	float m_flAspect; /* 28 4 */
	float m_flZNear; /* 32 4 */
	float m_flZFar; /* 36 4 */
	float m_flWidth; /* 40 4 */
	float m_flHeight; /* 44 4 */
} __attribute__((__aligned__(16)));

// <0580D288> ../../public/mathlib/camera.h:61
inline void Camera_t::Init(const Vector& origin, const QAngle& angles, float flNear, float flFar, float flFOV, float flAspect)
{
} /* size: 0 */

// <01DCE819> ../public/mathlib/camera.h:69
inline void Camera_t::InitOrtho(const Vector& origin, const QAngle& angles, float flNear, float flFar, float flWidth, float flHeight)
{
} /* size: 0 */

// <0580D255> ../../public/mathlib/camera.h:76
inline void Camera_t::InitViewParameters(const Vector& vOrigin, const QAngle& vAngles)
{
} /* size: 0 */

// <01DCE799> ../public/mathlib/camera.h:82
inline void Camera_t::InitOrthoProjection(float flZNear, float flZFar, float flWidth, float flHeight)
{
} /* size: 0 */

// <0580D23A> ../../public/mathlib/camera.h:99
inline void Camera_t::IsOrthographic()
{
} /* size: 0 */

// <0580D1EF> ../../public/mathlib/camera.h:104
inline void Camera_t::InitPerspectiveProjection(float flZNear, float flZFar, float flFOVX, float flAspect)
{
} /* size: 0 */

// <0580D0DD> ../../public/mathlib/camera.h:151
// variables: 4
inline VMatrix OrthoMatrixOffCenterRH(float x1, float y1, float x2, float y2, float flNear, float flFar)
{
	float flDelta; // 153
	float ix; // 155
	float iy; // 156
	VMatrix mRet; // 158
} /* size: 0, variables: 4 */

// <0580D096> ../../public/mathlib/camera.h:205
inline VMatrix OrthoMatrixRH(float flWidth, float flHeight, float flNear, float flFar)
{
} /* size: 0 */

// <040B8ACE> ../public/mathlib/camera.h:264
// function calls: 8
void CFrustum::operator=(const CFrustum &)
{
	Vector::operator=(
			const Vector& vOther);  // 27
	QAngle::operator=(
			const QAngle& vOther);  // 27
	Camera_t::operator=(
			const Camera_t  &);  // 264
	Vector::operator=(
			const Vector& vOther);  // 264
	Vector::operator=(
			const Vector& vOther);  // 264
	Vector::operator=(
			const Vector& vOther);  // 264
	Vector::operator=(
			const Vector& vOther);  // 264
	QAngle::operator=(
			const QAngle& vOther);  // 264
} /* size: 0, inline expansions: 8 (0 bytes) */

// <040B7E23> ../public/mathlib/camera.h:264
inline void CFrustum::operator=(const CFrustum &)
{
} /* size: 0 */

// <00045EF7> ../public/mathlib/camera.h:264
// member functions: 161
// member variables: 26
// class size: 1,136
class CFrustum {
	/* ../public/mathlib/camera.h:268 */
	void CFrustum(CFrustum* );
	/* ../public/mathlib/camera.h:269 */
	void ~CFrustum(CFrustum* );
	/* ../public/mathlib/camera.h:271 */
	void InitCamera(CFrustum* , const Camera_t& );
	/* ../public/mathlib/camera.h:280 */
	void InitCamera(CFrustum* , const Vector& , const QAngle& , float, float, float, float, float, float, float, float);
	/* ../public/mathlib/camera.h:294 */
	void InitOrthoCamera(CFrustum* , const Vector& , const QAngle& , float, float, float, float, float, float, float, float);
	/* ../public/mathlib/camera.h:310 */
	bool IsOrthographic(const CFrustum* );
	/* ../public/mathlib/camera.h:312 */
	void SetCameraPosition(CFrustum* , const Vector& );
	/* ../public/mathlib/camera.h:313 */
	const Vector& GetCameraPosition(const CFrustum* );
	/* ../public/mathlib/camera.h:315 */
	void SetCameraAngles(CFrustum* , const QAngle& );
	/* ../public/mathlib/camera.h:316 */
	const QAngle& GetCameraAngles(const CFrustum* );
	/* ../public/mathlib/camera.h:318 */
	void SetCameraPositionAndAngles(CFrustum* , const Vector& , const QAngle& );
	/* ../public/mathlib/camera.h:321 */
	void SetCameraVectors(CFrustum* , const Vector& , const Vector& , const Vector& );
	/* ../public/mathlib/camera.h:324 */
	void SetCameraNearFarPlanes(CFrustum* , float, float);
	/* ../public/mathlib/camera.h:325 */
	void GetCameraNearFarPlanes(const CFrustum* , float& , float& );
	/* ../public/mathlib/camera.h:328 */
	void SetCameraNearPlane(CFrustum* , float);
	/* ../public/mathlib/camera.h:329 */
	float GetCameraNearPlane(const CFrustum* );
	/* ../public/mathlib/camera.h:332 */
	void SetCameraFarPlane(CFrustum* , float);
	/* ../public/mathlib/camera.h:333 */
	float GetCameraFarPlane(const CFrustum* );
	/* ../public/mathlib/camera.h:336 */
	void SetCameraFOV(CFrustum* , float);
	/* ../public/mathlib/camera.h:337 */
	float GetCameraFOV(const CFrustum* );
	/* ../public/mathlib/camera.h:338 */
	float GetTanHalfFOV(const CFrustum* );
	/* ../public/mathlib/camera.h:340 */
	void SetCameraWidthHeight(CFrustum* , float, float);
	/* ../public/mathlib/camera.h:341 */
	void GetCameraWidthHeight(const CFrustum* , float& , float& );
	/* ../public/mathlib/camera.h:343 */
	float GetCameraWidth(const CFrustum* );
	/* ../public/mathlib/camera.h:344 */
	float GetCameraHeight(const CFrustum* );
	/* ../public/mathlib/camera.h:346 */
	void SetCameraAspect(CFrustum* , float);
	/* ../public/mathlib/camera.h:347 */
	float GetCameraAspect(const CFrustum* );
	/* ../public/mathlib/camera.h:351 */
	int CheckBoxAgainstNearAndFarPlanes(const CFrustum* , const VectorAligned& , const VectorAligned& );
	/* ../public/mathlib/camera.h:354 */
	void GetNearAndFarPlanesAroundBox(const CFrustum* , float* , float* , const AABB_t& , const Vector& );
	/* ../public/mathlib/camera.h:359 */
	float ComputeScreenSize(const CFrustum* , Vector, float);
	/* ../public/mathlib/camera.h:362 */
	float SinFOV(const CFrustum* );
	/* ../public/mathlib/camera.h:364 */
	const Camera_t& GetCameraStruct(const CFrustum* );
	/* ../public/mathlib/camera.h:370 */
	void SetFrustumStruct(CFrustum* , const Frustum_t& );
	/* ../public/mathlib/camera.h:373 */
	const Vector& CameraForward(const CFrustum* );
	/* ../public/mathlib/camera.h:374 */
	const Vector& CameraLeft(const CFrustum* );
	/* ../public/mathlib/camera.h:375 */
	const Vector& CameraUp(const CFrustum* );
	/* ../public/mathlib/camera.h:378 */
	void ViewForward(const CFrustum* , Vector& );
	/* ../public/mathlib/camera.h:379 */
	void ViewLeft(const CFrustum* , Vector& );
	/* ../public/mathlib/camera.h:380 */
	void ViewUp(const CFrustum* , Vector& );
	/* ../public/mathlib/camera.h:383 */
	void SetView(CFrustum* , const VMatrix& );
	/* ../public/mathlib/camera.h:384 */
	const matrix3x4_t& GetView(const CFrustum* );
	/* ../public/mathlib/camera.h:386 */
	void SetProj(CFrustum* , const VMatrix& );
	/* ../public/mathlib/camera.h:387 */
	const VMatrix& GetProj(const CFrustum* );
	/* ../public/mathlib/camera.h:388 */
	const VMatrix& GetInvProj(const CFrustum* );
	/* ../public/mathlib/camera.h:389 */
	const VMatrix& GetReverseZProj(const CFrustum* );
	/* ../public/mathlib/camera.h:390 */
	const VMatrix& GetInvReverseZProj(const CFrustum* );
	/* ../public/mathlib/camera.h:392 */
	bool ScreenTransform(CFrustum* , const Vector& , Vector& );
	/* ../public/mathlib/camera.h:395 */
	const VMatrix& GetViewProj(const CFrustum* );
	/* ../public/mathlib/camera.h:396 */
	VMatrix GetViewProjTranspose(const CFrustum* );
	/* ../public/mathlib/camera.h:397 */
	const VMatrix& GetReverseZViewProj(const CFrustum* );
	/* ../public/mathlib/camera.h:398 */
	VMatrix GetReverseZViewProjTranspose(const CFrustum* );
	/* ../public/mathlib/camera.h:400 */
	const VMatrix& GetInvViewProj(const CFrustum* );
	/* ../public/mathlib/camera.h:401 */
	VMatrix GetInvViewProjTranspose(const CFrustum* );
	/* ../public/mathlib/camera.h:402 */
	const VMatrix& GetInvReverseZViewProj(const CFrustum* );
	/* ../public/mathlib/camera.h:403 */
	VMatrix GetInvReverseZViewProjTranspose(const CFrustum* );
	/* ../public/mathlib/camera.h:405 */
	void SetOverrideProj(CFrustum* , const VMatrix& );
	/* ../public/mathlib/camera.h:406 */
	void ClearOverrideProj(CFrustum* );
	/* ../public/mathlib/camera.h:408 */
	bool BoundingVolumeIntersectsFrustum(const CFrustum* , const AABB_t& );
	/* ../public/mathlib/camera.h:409 */
	bool BoundingVolumeIntersectsFrustum(const CFrustum* , const Vector& , const Vector& );
	/* ../public/mathlib/camera.h:410 */
	bool BoundingVolumeIntersectsFrustum(const CFrustum* , const AABB_t& , Vector& );
	/* ../public/mathlib/camera.h:411 */
	bool BoundingVolumeCenterExtentsIntersectsFrustum(const CFrustum* , const Vector& , const Vector& );
	/* ../public/mathlib/camera.h:414 */
	bool CheckBoxInline(const CFrustum* , const VectorAligned& , const VectorAligned& );
	/* ../public/mathlib/camera.h:417 */
	void BuildFrustumFromVectors(CFrustum* , const Vector& , float, float, float, float, const Vector& , const Vector& , const Vector& );
	/* ../public/mathlib/camera.h:420 */
	void BuildShadowFrustum(CFrustum* , const VMatrix& , const VMatrix& );
	/* ../public/mathlib/camera.h:423 */
	void CalcFarPlaneCameraRelativePoints(const CFrustum* , Vector* , float, float, float, float, float);
	/* ../public/mathlib/camera.h:429 */
	void CalcViewProj(CFrustum* );
	/* ../public/mathlib/camera.h:432 */
	Vector4D TransformPointToHomogenousViewCoordinates(const CFrustum* , const Vector& );
	/* ../public/mathlib/camera.h:434 */
	void SetClipSpaceBounds(CFrustum* , float, float, float, float);
	/* ../public/mathlib/camera.h:436 */
	void GetClipSpaceBounds(const CFrustum* , float& , float& , float& , float& );
	/* ../public/mathlib/camera.h:445 */
	void ComputeBounds(const CFrustum* , Vector* , Vector* );
	/* ../public/mathlib/camera.h:446 */
	void ComputeGeometry(const CFrustum* , Vector* );
	/* ../public/mathlib/camera.h:448 */
	const Frustum_t& GetFrustumStruct(const CFrustum* );
	/* ../public/mathlib/camera.h:451 */
	void GetPlane(const CFrustum* , int, Vector& , float& );
	/* ../public/mathlib/camera.h:454 */
	void ViewToWorld(const CFrustum* , const Vector2D& , Vector* );
	/* ../public/mathlib/camera.h:455 */
	void WorldToView(const CFrustum* , const Vector& , Vector2D* );
	/* ../public/mathlib/camera.h:456 */
	void BuildRay(const CFrustum* , const Vector2D& , Vector* , Vector* );
	/* ../public/mathlib/camera.h:458 */
	void SetWorldScale(CFrustum* , float);
	/* ../public/mathlib/camera.h:459 */
	float GetWorldScale(const CFrustum* );
private:
	/* ../public/mathlib/camera.h:463 */
	void UpdateViewAndProjectionFromCamera(CFrustum* );
	/* ../public/mathlib/camera.h:464 */
	void UpdateProjectionFromCamera(CFrustum* );
protected:
	Camera_t m_camera __attribute__((__aligned__(16))); /* 0 48 */
	Frustum_t m_frustumStruct __attribute__((__aligned__(16))); /* 48 320 */
	float m_flClipSpaceBottomLeftX; /* 368 4 */
	float m_flClipSpaceBottomLeftY; /* 372 4 */
	float m_flClipSpaceTopRightX; /* 376 4 */
	float m_flClipSpaceTopRightY; /* 380 4 */
	bool m_bUseD3DClippingRange; /* 384 1 */
	Vector m_forward; /* 388 12 */
	Vector m_left; /* 400 12 */
	Vector m_up; /* 412 12 */
	matrix3x4_t m_cameraToWorld; /* 424 48 */
	matrix3x4_t m_worldToView; /* 472 48 */
	VMatrix m_projection; /* 520 64 */
	VMatrix m_invProjection; /* 584 64 */
	VMatrix m_viewProj; /* 648 64 */
	VMatrix m_invViewProj; /* 712 64 */
	VMatrix m_revZProjection; /* 776 64 */
	VMatrix m_invRevZProjection; /* 840 64 */
	VMatrix m_revZViewProj; /* 904 64 */
	VMatrix m_invRevZViewProj; /* 968 64 */
	bool m_bHaveOverrideProjectionMatrix; /* 1032 1 */
	VMatrix m_overrideProjection; /* 1036 64 */
	float m_flWorldScale; /* 1100 4 */
	float m_flTanHalfFOV; /* 1104 4 */
	Vector m_vOriginBeforeVr; /* 1108 12 */
	QAngle m_vAnglesBeforeVr; /* 1120 12 */
	void CFrustum(class CFrustum *); /* linkage=_ZN8CFrustumC4Ev */
	void ~CFrustum(class CFrustum *); /* linkage=_ZN8CFrustumD4Ev */
	void InitCamera(class CFrustum *, const class Camera_t  &); /* linkage=_ZN8CFrustum10InitCameraERK8Camera_t */
	void InitCamera(class CFrustum *, const class Vector  &, const class QAngle  &, float, float, float, float, float, float, float, float); /* linkage=_ZN8CFrustum10InitCameraERK6VectorRK6QAngleffffffff */
	void InitOrthoCamera(class CFrustum *, const class Vector  &, const class QAngle  &, float, float, float, float, float, float, float, float); /* linkage=_ZN8CFrustum15InitOrthoCameraERK6VectorRK6QAngleffffffff */
	bool IsOrthographic(const class CFrustum  *); /* linkage=_ZNK8CFrustum14IsOrthographicEv */
	void SetCameraPosition(class CFrustum *, const class Vector  &); /* linkage=_ZN8CFrustum17SetCameraPositionERK6Vector */
	const class Vector  & GetCameraPosition(const class CFrustum  *); /* linkage=_ZNK8CFrustum17GetCameraPositionEv */
	void SetCameraAngles(class CFrustum *, const class QAngle  &); /* linkage=_ZN8CFrustum15SetCameraAnglesERK6QAngle */
	const class QAngle  & GetCameraAngles(const class CFrustum  *); /* linkage=_ZNK8CFrustum15GetCameraAnglesEv */
	void SetCameraPositionAndAngles(class CFrustum *, const class Vector  &, const class QAngle  &); /* linkage=_ZN8CFrustum26SetCameraPositionAndAnglesERK6VectorRK6QAngle */
	void SetCameraVectors(class CFrustum *, const class Vector  &, const class Vector  &, const class Vector  &); /* linkage=_ZN8CFrustum16SetCameraVectorsERK6VectorS2_S2_ */
	void SetCameraNearFarPlanes(class CFrustum *, float, float); /* linkage=_ZN8CFrustum22SetCameraNearFarPlanesEff */
	void GetCameraNearFarPlanes(const class CFrustum  *, float &, float &); /* linkage=_ZNK8CFrustum22GetCameraNearFarPlanesERfS0_ */
	void SetCameraNearPlane(class CFrustum *, float); /* linkage=_ZN8CFrustum18SetCameraNearPlaneEf */
	float GetCameraNearPlane(const class CFrustum  *); /* linkage=_ZNK8CFrustum18GetCameraNearPlaneEv */
	void SetCameraFarPlane(class CFrustum *, float); /* linkage=_ZN8CFrustum17SetCameraFarPlaneEf */
	float GetCameraFarPlane(const class CFrustum  *); /* linkage=_ZNK8CFrustum17GetCameraFarPlaneEv */
	void SetCameraFOV(class CFrustum *, float); /* linkage=_ZN8CFrustum12SetCameraFOVEf */
	float GetCameraFOV(const class CFrustum  *); /* linkage=_ZNK8CFrustum12GetCameraFOVEv */
	float GetTanHalfFOV(const class CFrustum  *); /* linkage=_ZNK8CFrustum13GetTanHalfFOVEv */
	void SetCameraWidthHeight(class CFrustum *, float, float); /* linkage=_ZN8CFrustum20SetCameraWidthHeightEff */
	void GetCameraWidthHeight(const class CFrustum  *, float &, float &); /* linkage=_ZNK8CFrustum20GetCameraWidthHeightERfS0_ */
	float GetCameraWidth(const class CFrustum  *); /* linkage=_ZNK8CFrustum14GetCameraWidthEv */
	float GetCameraHeight(const class CFrustum  *); /* linkage=_ZNK8CFrustum15GetCameraHeightEv */
	void SetCameraAspect(class CFrustum *, float); /* linkage=_ZN8CFrustum15SetCameraAspectEf */
	float GetCameraAspect(const class CFrustum  *); /* linkage=_ZNK8CFrustum15GetCameraAspectEv */
	int CheckBoxAgainstNearAndFarPlanes(const class CFrustum  *, const class VectorAligned  &, const class VectorAligned  &); /* linkage=_ZNK8CFrustum31CheckBoxAgainstNearAndFarPlanesERK13VectorAlignedS2_ */
	void GetNearAndFarPlanesAroundBox(const class CFrustum  *, float *, float *, const class AABB_t  &, const class Vector  &); /* linkage=_ZNK8CFrustum28GetNearAndFarPlanesAroundBoxEPfS0_RK6AABB_tRK6Vector */
	float ComputeScreenSize(const class CFrustum  *, class Vector, float); /* linkage=_ZNK8CFrustum17ComputeScreenSizeE6Vectorf */
	float SinFOV(const class CFrustum  *); /* linkage=_ZNK8CFrustum6SinFOVEv */
	const class Camera_t  & GetCameraStruct(const class CFrustum  *); /* linkage=_ZNK8CFrustum15GetCameraStructEv */
	void SetFrustumStruct(class CFrustum *, const class Frustum_t  &); /* linkage=_ZN8CFrustum16SetFrustumStructERK9Frustum_t */
	const class Vector  & CameraForward(const class CFrustum  *); /* linkage=_ZNK8CFrustum13CameraForwardEv */
	const class Vector  & CameraLeft(const class CFrustum  *); /* linkage=_ZNK8CFrustum10CameraLeftEv */
	const class Vector  & CameraUp(const class CFrustum  *); /* linkage=_ZNK8CFrustum8CameraUpEv */
	void ViewForward(const class CFrustum  *, class Vector &); /* linkage=_ZNK8CFrustum11ViewForwardER6Vector */
	void ViewLeft(const class CFrustum  *, class Vector &); /* linkage=_ZNK8CFrustum8ViewLeftER6Vector */
	void ViewUp(const class CFrustum  *, class Vector &); /* linkage=_ZNK8CFrustum6ViewUpER6Vector */
	void SetView(class CFrustum *, const class VMatrix  &); /* linkage=_ZN8CFrustum7SetViewERK7VMatrix */
	const class matrix3x4_t  & GetView(const class CFrustum  *); /* linkage=_ZNK8CFrustum7GetViewEv */
	/* <580ee76> mathlib/extended/camera.cpp:397 */
	void SetProj(class CFrustum *, const class VMatrix  &); /* linkage=_ZN8CFrustum7SetProjERK7VMatrix */
	const class VMatrix  & GetProj(const class CFrustum  *); /* linkage=_ZNK8CFrustum7GetProjEv */
	const class VMatrix  & GetInvProj(const class CFrustum  *); /* linkage=_ZNK8CFrustum10GetInvProjEv */
	const class VMatrix  & GetReverseZProj(const class CFrustum  *); /* linkage=_ZNK8CFrustum15GetReverseZProjEv */
	const class VMatrix  & GetInvReverseZProj(const class CFrustum  *); /* linkage=_ZNK8CFrustum18GetInvReverseZProjEv */
	bool ScreenTransform(class CFrustum *, const class Vector  &, class Vector &); /* linkage=_ZN8CFrustum15ScreenTransformERK6VectorRS0_ */
	const class VMatrix  & GetViewProj(const class CFrustum  *); /* linkage=_ZNK8CFrustum11GetViewProjEv */
	class VMatrix GetViewProjTranspose(const class CFrustum  *); /* linkage=_ZNK8CFrustum20GetViewProjTransposeEv */
	const class VMatrix  & GetReverseZViewProj(const class CFrustum  *); /* linkage=_ZNK8CFrustum19GetReverseZViewProjEv */
	class VMatrix GetReverseZViewProjTranspose(const class CFrustum  *); /* linkage=_ZNK8CFrustum28GetReverseZViewProjTransposeEv */
	const class VMatrix  & GetInvViewProj(const class CFrustum  *); /* linkage=_ZNK8CFrustum14GetInvViewProjEv */
	class VMatrix GetInvViewProjTranspose(const class CFrustum  *); /* linkage=_ZNK8CFrustum23GetInvViewProjTransposeEv */
	const class VMatrix  & GetInvReverseZViewProj(const class CFrustum  *); /* linkage=_ZNK8CFrustum22GetInvReverseZViewProjEv */
	class VMatrix GetInvReverseZViewProjTranspose(const class CFrustum  *); /* linkage=_ZNK8CFrustum31GetInvReverseZViewProjTransposeEv */
	void SetOverrideProj(class CFrustum *, const class VMatrix  &); /* linkage=_ZN8CFrustum15SetOverrideProjERK7VMatrix */
	void ClearOverrideProj(class CFrustum *); /* linkage=_ZN8CFrustum17ClearOverrideProjEv */
	bool BoundingVolumeIntersectsFrustum(const class CFrustum  *, const class AABB_t  &); /* linkage=_ZNK8CFrustum31BoundingVolumeIntersectsFrustumERK6AABB_t */
	bool BoundingVolumeIntersectsFrustum(const class CFrustum  *, const class Vector  &, const class Vector  &); /* linkage=_ZNK8CFrustum31BoundingVolumeIntersectsFrustumERK6VectorS2_ */
	bool BoundingVolumeIntersectsFrustum(const class CFrustum  *, const class AABB_t  &, class Vector &); /* linkage=_ZNK8CFrustum31BoundingVolumeIntersectsFrustumERK6AABB_tR6Vector */
	bool BoundingVolumeCenterExtentsIntersectsFrustum(const class CFrustum  *, const class Vector  &, const class Vector  &); /* linkage=_ZNK8CFrustum44BoundingVolumeCenterExtentsIntersectsFrustumERK6VectorS2_ */
	bool CheckBoxInline(const class CFrustum  *, const class VectorAligned  &, const class VectorAligned  &); /* linkage=_ZNK8CFrustum14CheckBoxInlineERK13VectorAlignedS2_ */
	void BuildFrustumFromVectors(class CFrustum *, const class Vector  &, float, float, float, float, const class Vector  &, const class Vector  &, const class Vector  &); /* linkage=_ZN8CFrustum23BuildFrustumFromVectorsERK6VectorffffS2_S2_S2_ */
	void BuildShadowFrustum(class CFrustum *, const class VMatrix  &, const class VMatrix  &); /* linkage=_ZN8CFrustum18BuildShadowFrustumERK7VMatrixS2_ */
	void CalcFarPlaneCameraRelativePoints(const class CFrustum  *, class Vector *, float, float, float, float, float); /* linkage=_ZNK8CFrustum32CalcFarPlaneCameraRelativePointsEP6Vectorfffff */
	void CalcViewProj(class CFrustum *); /* linkage=_ZN8CFrustum12CalcViewProjEv */
	class Vector4D TransformPointToHomogenousViewCoordinates(const class CFrustum  *, const class Vector  &); /* linkage=_ZNK8CFrustum41TransformPointToHomogenousViewCoordinatesERK6Vector */
	void SetClipSpaceBounds(class CFrustum *, float, float, float, float); /* linkage=_ZN8CFrustum18SetClipSpaceBoundsEffff */
	void GetClipSpaceBounds(const class CFrustum  *, float &, float &, float &, float &); /* linkage=_ZNK8CFrustum18GetClipSpaceBoundsERfS0_S0_S0_ */
	void ComputeBounds(const class CFrustum  *, class Vector *, class Vector *); /* linkage=_ZNK8CFrustum13ComputeBoundsEP6VectorS1_ */
	void ComputeGeometry(const class CFrustum  *, class Vector *); /* linkage=_ZNK8CFrustum15ComputeGeometryEP6Vector */
	const class Frustum_t  & GetFrustumStruct(const class CFrustum  *); /* linkage=_ZNK8CFrustum16GetFrustumStructEv */
	void GetPlane(const class CFrustum  *, int, class Vector &, float &); /* linkage=_ZNK8CFrustum8GetPlaneEiR6VectorRf */
	/* <580ef5f> mathlib/extended/camera.cpp:772 */
	void ViewToWorld(const class CFrustum  *, const class Vector2D  &, class Vector *); /* linkage=_ZNK8CFrustum11ViewToWorldERK8Vector2DP6Vector */
	void WorldToView(const class CFrustum  *, const class Vector  &, class Vector2D *); /* linkage=_ZNK8CFrustum11WorldToViewERK6VectorP8Vector2D */
	void BuildRay(const class CFrustum  *, const class Vector2D  &, class Vector *, class Vector *); /* linkage=_ZNK8CFrustum8BuildRayERK8Vector2DP6VectorS4_ */
	void SetWorldScale(class CFrustum *, float); /* linkage=_ZN8CFrustum13SetWorldScaleEf */
	float GetWorldScale(const class CFrustum  *); /* linkage=_ZNK8CFrustum13GetWorldScaleEv */
	void UpdateViewAndProjectionFromCamera(class CFrustum *); /* linkage=_ZN8CFrustum33UpdateViewAndProjectionFromCameraEv */
	void UpdateProjectionFromCamera(class CFrustum *); /* linkage=_ZN8CFrustum26UpdateProjectionFromCameraEv */
	class CFrustum & operator=(class CFrustum *, const class CFrustum  &); /* linkage=_ZN8CFrustumaSERKS_ */
} __attribute__((__aligned__(16)));

// <01D18AC6> ../public/mathlib/camera.h:264
// member functions: 162
// member variables: 26
// class size: 1,136
class CFrustum {
	/* ../public/mathlib/camera.h:268 */
	void CFrustum(CFrustum* );
	/* ../public/mathlib/camera.h:269 */
	void ~CFrustum(CFrustum* );
	/* ../public/mathlib/camera.h:271 */
	void InitCamera(CFrustum* , const Camera_t& );
	/* ../public/mathlib/camera.h:280 */
	void InitCamera(CFrustum* , const Vector& , const QAngle& , float, float, float, float, float, float, float, float);
	/* ../public/mathlib/camera.h:294 */
	void InitOrthoCamera(CFrustum* , const Vector& , const QAngle& , float, float, float, float, float, float, float, float);
	/* ../public/mathlib/camera.h:310 */
	bool IsOrthographic(const CFrustum* );
	/* ../public/mathlib/camera.h:312 */
	void SetCameraPosition(CFrustum* , const Vector& );
	/* ../public/mathlib/camera.h:313 */
	const Vector& GetCameraPosition(const CFrustum* );
	/* ../public/mathlib/camera.h:315 */
	void SetCameraAngles(CFrustum* , const QAngle& );
	/* ../public/mathlib/camera.h:316 */
	const QAngle& GetCameraAngles(const CFrustum* );
	/* ../public/mathlib/camera.h:318 */
	void SetCameraPositionAndAngles(CFrustum* , const Vector& , const QAngle& );
	/* ../public/mathlib/camera.h:321 */
	void SetCameraVectors(CFrustum* , const Vector& , const Vector& , const Vector& );
	/* ../public/mathlib/camera.h:324 */
	void SetCameraNearFarPlanes(CFrustum* , float, float);
	/* ../public/mathlib/camera.h:325 */
	void GetCameraNearFarPlanes(const CFrustum* , float& , float& );
	/* ../public/mathlib/camera.h:328 */
	void SetCameraNearPlane(CFrustum* , float);
	/* ../public/mathlib/camera.h:329 */
	float GetCameraNearPlane(const CFrustum* );
	/* ../public/mathlib/camera.h:332 */
	void SetCameraFarPlane(CFrustum* , float);
	/* ../public/mathlib/camera.h:333 */
	float GetCameraFarPlane(const CFrustum* );
	/* ../public/mathlib/camera.h:336 */
	void SetCameraFOV(CFrustum* , float);
	/* ../public/mathlib/camera.h:337 */
	float GetCameraFOV(const CFrustum* );
	/* ../public/mathlib/camera.h:338 */
	float GetTanHalfFOV(const CFrustum* );
	/* ../public/mathlib/camera.h:340 */
	void SetCameraWidthHeight(CFrustum* , float, float);
	/* ../public/mathlib/camera.h:341 */
	void GetCameraWidthHeight(const CFrustum* , float& , float& );
	/* ../public/mathlib/camera.h:343 */
	float GetCameraWidth(const CFrustum* );
	/* ../public/mathlib/camera.h:344 */
	float GetCameraHeight(const CFrustum* );
	/* ../public/mathlib/camera.h:346 */
	void SetCameraAspect(CFrustum* , float);
	/* ../public/mathlib/camera.h:347 */
	float GetCameraAspect(const CFrustum* );
	/* ../public/mathlib/camera.h:351 */
	int CheckBoxAgainstNearAndFarPlanes(const CFrustum* , const VectorAligned& , const VectorAligned& );
	/* ../public/mathlib/camera.h:354 */
	void GetNearAndFarPlanesAroundBox(const CFrustum* , float* , float* , const AABB_t& , const Vector& );
	/* ../public/mathlib/camera.h:359 */
	float ComputeScreenSize(const CFrustum* , Vector, float);
	/* ../public/mathlib/camera.h:362 */
	float SinFOV(const CFrustum* );
	/* ../public/mathlib/camera.h:364 */
	const Camera_t& GetCameraStruct(const CFrustum* );
	/* ../public/mathlib/camera.h:370 */
	void SetFrustumStruct(CFrustum* , const Frustum_t& );
	/* ../public/mathlib/camera.h:373 */
	const Vector& CameraForward(const CFrustum* );
	/* ../public/mathlib/camera.h:374 */
	const Vector& CameraLeft(const CFrustum* );
	/* ../public/mathlib/camera.h:375 */
	const Vector& CameraUp(const CFrustum* );
	/* ../public/mathlib/camera.h:378 */
	void ViewForward(const CFrustum* , Vector& );
	/* ../public/mathlib/camera.h:379 */
	void ViewLeft(const CFrustum* , Vector& );
	/* ../public/mathlib/camera.h:380 */
	void ViewUp(const CFrustum* , Vector& );
	/* ../public/mathlib/camera.h:383 */
	void SetView(CFrustum* , const VMatrix& );
	/* ../public/mathlib/camera.h:384 */
	const matrix3x4_t& GetView(const CFrustum* );
	/* ../public/mathlib/camera.h:386 */
	void SetProj(CFrustum* , const VMatrix& );
	/* ../public/mathlib/camera.h:387 */
	const VMatrix& GetProj(const CFrustum* );
	/* ../public/mathlib/camera.h:388 */
	const VMatrix& GetInvProj(const CFrustum* );
	/* ../public/mathlib/camera.h:389 */
	const VMatrix& GetReverseZProj(const CFrustum* );
	/* ../public/mathlib/camera.h:390 */
	const VMatrix& GetInvReverseZProj(const CFrustum* );
	/* ../public/mathlib/camera.h:392 */
	bool ScreenTransform(CFrustum* , const Vector& , Vector& );
	/* ../public/mathlib/camera.h:395 */
	const VMatrix& GetViewProj(const CFrustum* );
	/* ../public/mathlib/camera.h:396 */
	VMatrix GetViewProjTranspose(const CFrustum* );
	/* ../public/mathlib/camera.h:397 */
	const VMatrix& GetReverseZViewProj(const CFrustum* );
	/* ../public/mathlib/camera.h:398 */
	VMatrix GetReverseZViewProjTranspose(const CFrustum* );
	/* ../public/mathlib/camera.h:400 */
	const VMatrix& GetInvViewProj(const CFrustum* );
	/* ../public/mathlib/camera.h:401 */
	VMatrix GetInvViewProjTranspose(const CFrustum* );
	/* ../public/mathlib/camera.h:402 */
	const VMatrix& GetInvReverseZViewProj(const CFrustum* );
	/* ../public/mathlib/camera.h:403 */
	VMatrix GetInvReverseZViewProjTranspose(const CFrustum* );
	/* ../public/mathlib/camera.h:405 */
	void SetOverrideProj(CFrustum* , const VMatrix& );
	/* ../public/mathlib/camera.h:406 */
	void ClearOverrideProj(CFrustum* );
	/* ../public/mathlib/camera.h:408 */
	bool BoundingVolumeIntersectsFrustum(const CFrustum* , const AABB_t& );
	/* ../public/mathlib/camera.h:409 */
	bool BoundingVolumeIntersectsFrustum(const CFrustum* , const Vector& , const Vector& );
	/* ../public/mathlib/camera.h:410 */
	bool BoundingVolumeIntersectsFrustum(const CFrustum* , const AABB_t& , Vector& );
	/* ../public/mathlib/camera.h:411 */
	bool BoundingVolumeCenterExtentsIntersectsFrustum(const CFrustum* , const Vector& , const Vector& );
	/* ../public/mathlib/camera.h:414 */
	bool CheckBoxInline(const CFrustum* , const VectorAligned& , const VectorAligned& );
	/* ../public/mathlib/camera.h:417 */
	void BuildFrustumFromVectors(CFrustum* , const Vector& , float, float, float, float, const Vector& , const Vector& , const Vector& );
	/* ../public/mathlib/camera.h:420 */
	void BuildShadowFrustum(CFrustum* , const VMatrix& , const VMatrix& );
	/* ../public/mathlib/camera.h:423 */
	void CalcFarPlaneCameraRelativePoints(const CFrustum* , Vector* , float, float, float, float, float);
	/* ../public/mathlib/camera.h:429 */
	void CalcViewProj(CFrustum* );
	/* ../public/mathlib/camera.h:432 */
	Vector4D TransformPointToHomogenousViewCoordinates(const CFrustum* , const Vector& );
	/* ../public/mathlib/camera.h:434 */
	void SetClipSpaceBounds(CFrustum* , float, float, float, float);
	/* ../public/mathlib/camera.h:436 */
	void GetClipSpaceBounds(const CFrustum* , float& , float& , float& , float& );
	/* ../public/mathlib/camera.h:445 */
	void ComputeBounds(const CFrustum* , Vector* , Vector* );
	/* ../public/mathlib/camera.h:446 */
	void ComputeGeometry(const CFrustum* , Vector* );
	/* ../public/mathlib/camera.h:448 */
	const Frustum_t& GetFrustumStruct(const CFrustum* );
	/* ../public/mathlib/camera.h:451 */
	void GetPlane(const CFrustum* , int, Vector& , float& );
	/* ../public/mathlib/camera.h:454 */
	void ViewToWorld(const CFrustum* , const Vector2D& , Vector* );
	/* ../public/mathlib/camera.h:455 */
	void WorldToView(const CFrustum* , const Vector& , Vector2D* );
	/* ../public/mathlib/camera.h:456 */
	void BuildRay(const CFrustum* , const Vector2D& , Vector* , Vector* );
	/* ../public/mathlib/camera.h:458 */
	void SetWorldScale(CFrustum* , float);
	/* ../public/mathlib/camera.h:459 */
	float GetWorldScale(const CFrustum* );
private:
	/* ../public/mathlib/camera.h:463 */
	void UpdateViewAndProjectionFromCamera(CFrustum* );
	/* ../public/mathlib/camera.h:464 */
	void UpdateProjectionFromCamera(CFrustum* );
protected:
	Camera_t m_camera __attribute__((__aligned__(16))); /* 0 48 */
	Frustum_t m_frustumStruct __attribute__((__aligned__(16))); /* 48 320 */
	float m_flClipSpaceBottomLeftX; /* 368 4 */
	float m_flClipSpaceBottomLeftY; /* 372 4 */
	float m_flClipSpaceTopRightX; /* 376 4 */
	float m_flClipSpaceTopRightY; /* 380 4 */
	bool m_bUseD3DClippingRange; /* 384 1 */
	Vector m_forward; /* 388 12 */
	Vector m_left; /* 400 12 */
	Vector m_up; /* 412 12 */
	matrix3x4_t m_cameraToWorld; /* 424 48 */
	matrix3x4_t m_worldToView; /* 472 48 */
	VMatrix m_projection; /* 520 64 */
	VMatrix m_invProjection; /* 584 64 */
	VMatrix m_viewProj; /* 648 64 */
	VMatrix m_invViewProj; /* 712 64 */
	VMatrix m_revZProjection; /* 776 64 */
	VMatrix m_invRevZProjection; /* 840 64 */
	VMatrix m_revZViewProj; /* 904 64 */
	VMatrix m_invRevZViewProj; /* 968 64 */
	bool m_bHaveOverrideProjectionMatrix; /* 1032 1 */
	VMatrix m_overrideProjection; /* 1036 64 */
	float m_flWorldScale; /* 1100 4 */
	float m_flTanHalfFOV; /* 1104 4 */
	Vector m_vOriginBeforeVr; /* 1108 12 */
	QAngle m_vAnglesBeforeVr; /* 1120 12 */
	CFrustum& operator=(CFrustum* , const CFrustum& );
	void CFrustum(class CFrustum *); /* linkage=_ZN8CFrustumC4Ev */
	void ~CFrustum(class CFrustum *); /* linkage=_ZN8CFrustumD4Ev */
	void InitCamera(class CFrustum *, const class Camera_t  &); /* linkage=_ZN8CFrustum10InitCameraERK8Camera_t */
	void InitCamera(class CFrustum *, const class Vector  &, const class QAngle  &, float, float, float, float, float, float, float, float); /* linkage=_ZN8CFrustum10InitCameraERK6VectorRK6QAngleffffffff */
	void InitOrthoCamera(class CFrustum *, const class Vector  &, const class QAngle  &, float, float, float, float, float, float, float, float); /* linkage=_ZN8CFrustum15InitOrthoCameraERK6VectorRK6QAngleffffffff */
	bool IsOrthographic(const class CFrustum  *); /* linkage=_ZNK8CFrustum14IsOrthographicEv */
	void SetCameraPosition(class CFrustum *, const class Vector  &); /* linkage=_ZN8CFrustum17SetCameraPositionERK6Vector */
	const class Vector  & GetCameraPosition(const class CFrustum  *); /* linkage=_ZNK8CFrustum17GetCameraPositionEv */
	void SetCameraAngles(class CFrustum *, const class QAngle  &); /* linkage=_ZN8CFrustum15SetCameraAnglesERK6QAngle */
	const class QAngle  & GetCameraAngles(const class CFrustum  *); /* linkage=_ZNK8CFrustum15GetCameraAnglesEv */
	void SetCameraPositionAndAngles(class CFrustum *, const class Vector  &, const class QAngle  &); /* linkage=_ZN8CFrustum26SetCameraPositionAndAnglesERK6VectorRK6QAngle */
	void SetCameraVectors(class CFrustum *, const class Vector  &, const class Vector  &, const class Vector  &); /* linkage=_ZN8CFrustum16SetCameraVectorsERK6VectorS2_S2_ */
	void SetCameraNearFarPlanes(class CFrustum *, float, float); /* linkage=_ZN8CFrustum22SetCameraNearFarPlanesEff */
	void GetCameraNearFarPlanes(const class CFrustum  *, float &, float &); /* linkage=_ZNK8CFrustum22GetCameraNearFarPlanesERfS0_ */
	void SetCameraNearPlane(class CFrustum *, float); /* linkage=_ZN8CFrustum18SetCameraNearPlaneEf */
	float GetCameraNearPlane(const class CFrustum  *); /* linkage=_ZNK8CFrustum18GetCameraNearPlaneEv */
	void SetCameraFarPlane(class CFrustum *, float); /* linkage=_ZN8CFrustum17SetCameraFarPlaneEf */
	float GetCameraFarPlane(const class CFrustum  *); /* linkage=_ZNK8CFrustum17GetCameraFarPlaneEv */
	void SetCameraFOV(class CFrustum *, float); /* linkage=_ZN8CFrustum12SetCameraFOVEf */
	float GetCameraFOV(const class CFrustum  *); /* linkage=_ZNK8CFrustum12GetCameraFOVEv */
	float GetTanHalfFOV(const class CFrustum  *); /* linkage=_ZNK8CFrustum13GetTanHalfFOVEv */
	void SetCameraWidthHeight(class CFrustum *, float, float); /* linkage=_ZN8CFrustum20SetCameraWidthHeightEff */
	void GetCameraWidthHeight(const class CFrustum  *, float &, float &); /* linkage=_ZNK8CFrustum20GetCameraWidthHeightERfS0_ */
	float GetCameraWidth(const class CFrustum  *); /* linkage=_ZNK8CFrustum14GetCameraWidthEv */
	float GetCameraHeight(const class CFrustum  *); /* linkage=_ZNK8CFrustum15GetCameraHeightEv */
	void SetCameraAspect(class CFrustum *, float); /* linkage=_ZN8CFrustum15SetCameraAspectEf */
	float GetCameraAspect(const class CFrustum  *); /* linkage=_ZNK8CFrustum15GetCameraAspectEv */
	int CheckBoxAgainstNearAndFarPlanes(const class CFrustum  *, const class VectorAligned  &, const class VectorAligned  &); /* linkage=_ZNK8CFrustum31CheckBoxAgainstNearAndFarPlanesERK13VectorAlignedS2_ */
	void GetNearAndFarPlanesAroundBox(const class CFrustum  *, float *, float *, const class AABB_t  &, const class Vector  &); /* linkage=_ZNK8CFrustum28GetNearAndFarPlanesAroundBoxEPfS0_RK6AABB_tRK6Vector */
	float ComputeScreenSize(const class CFrustum  *, class Vector, float); /* linkage=_ZNK8CFrustum17ComputeScreenSizeE6Vectorf */
	float SinFOV(const class CFrustum  *); /* linkage=_ZNK8CFrustum6SinFOVEv */
	const class Camera_t  & GetCameraStruct(const class CFrustum  *); /* linkage=_ZNK8CFrustum15GetCameraStructEv */
	void SetFrustumStruct(class CFrustum *, const class Frustum_t  &); /* linkage=_ZN8CFrustum16SetFrustumStructERK9Frustum_t */
	const class Vector  & CameraForward(const class CFrustum  *); /* linkage=_ZNK8CFrustum13CameraForwardEv */
	const class Vector  & CameraLeft(const class CFrustum  *); /* linkage=_ZNK8CFrustum10CameraLeftEv */
	const class Vector  & CameraUp(const class CFrustum  *); /* linkage=_ZNK8CFrustum8CameraUpEv */
	void ViewForward(const class CFrustum  *, class Vector &); /* linkage=_ZNK8CFrustum11ViewForwardER6Vector */
	void ViewLeft(const class CFrustum  *, class Vector &); /* linkage=_ZNK8CFrustum8ViewLeftER6Vector */
	void ViewUp(const class CFrustum  *, class Vector &); /* linkage=_ZNK8CFrustum6ViewUpER6Vector */
	void SetView(class CFrustum *, const class VMatrix  &); /* linkage=_ZN8CFrustum7SetViewERK7VMatrix */
	const class matrix3x4_t  & GetView(const class CFrustum  *); /* linkage=_ZNK8CFrustum7GetViewEv */
	/* <580ee76> mathlib/extended/camera.cpp:397 */
	void SetProj(class CFrustum *, const class VMatrix  &); /* linkage=_ZN8CFrustum7SetProjERK7VMatrix */
	const class VMatrix  & GetProj(const class CFrustum  *); /* linkage=_ZNK8CFrustum7GetProjEv */
	const class VMatrix  & GetInvProj(const class CFrustum  *); /* linkage=_ZNK8CFrustum10GetInvProjEv */
	const class VMatrix  & GetReverseZProj(const class CFrustum  *); /* linkage=_ZNK8CFrustum15GetReverseZProjEv */
	const class VMatrix  & GetInvReverseZProj(const class CFrustum  *); /* linkage=_ZNK8CFrustum18GetInvReverseZProjEv */
	bool ScreenTransform(class CFrustum *, const class Vector  &, class Vector &); /* linkage=_ZN8CFrustum15ScreenTransformERK6VectorRS0_ */
	const class VMatrix  & GetViewProj(const class CFrustum  *); /* linkage=_ZNK8CFrustum11GetViewProjEv */
	class VMatrix GetViewProjTranspose(const class CFrustum  *); /* linkage=_ZNK8CFrustum20GetViewProjTransposeEv */
	const class VMatrix  & GetReverseZViewProj(const class CFrustum  *); /* linkage=_ZNK8CFrustum19GetReverseZViewProjEv */
	class VMatrix GetReverseZViewProjTranspose(const class CFrustum  *); /* linkage=_ZNK8CFrustum28GetReverseZViewProjTransposeEv */
	const class VMatrix  & GetInvViewProj(const class CFrustum  *); /* linkage=_ZNK8CFrustum14GetInvViewProjEv */
	class VMatrix GetInvViewProjTranspose(const class CFrustum  *); /* linkage=_ZNK8CFrustum23GetInvViewProjTransposeEv */
	const class VMatrix  & GetInvReverseZViewProj(const class CFrustum  *); /* linkage=_ZNK8CFrustum22GetInvReverseZViewProjEv */
	class VMatrix GetInvReverseZViewProjTranspose(const class CFrustum  *); /* linkage=_ZNK8CFrustum31GetInvReverseZViewProjTransposeEv */
	void SetOverrideProj(class CFrustum *, const class VMatrix  &); /* linkage=_ZN8CFrustum15SetOverrideProjERK7VMatrix */
	void ClearOverrideProj(class CFrustum *); /* linkage=_ZN8CFrustum17ClearOverrideProjEv */
	bool BoundingVolumeIntersectsFrustum(const class CFrustum  *, const class AABB_t  &); /* linkage=_ZNK8CFrustum31BoundingVolumeIntersectsFrustumERK6AABB_t */
	bool BoundingVolumeIntersectsFrustum(const class CFrustum  *, const class Vector  &, const class Vector  &); /* linkage=_ZNK8CFrustum31BoundingVolumeIntersectsFrustumERK6VectorS2_ */
	bool BoundingVolumeIntersectsFrustum(const class CFrustum  *, const class AABB_t  &, class Vector &); /* linkage=_ZNK8CFrustum31BoundingVolumeIntersectsFrustumERK6AABB_tR6Vector */
	bool BoundingVolumeCenterExtentsIntersectsFrustum(const class CFrustum  *, const class Vector  &, const class Vector  &); /* linkage=_ZNK8CFrustum44BoundingVolumeCenterExtentsIntersectsFrustumERK6VectorS2_ */
	bool CheckBoxInline(const class CFrustum  *, const class VectorAligned  &, const class VectorAligned  &); /* linkage=_ZNK8CFrustum14CheckBoxInlineERK13VectorAlignedS2_ */
	void BuildFrustumFromVectors(class CFrustum *, const class Vector  &, float, float, float, float, const class Vector  &, const class Vector  &, const class Vector  &); /* linkage=_ZN8CFrustum23BuildFrustumFromVectorsERK6VectorffffS2_S2_S2_ */
	void BuildShadowFrustum(class CFrustum *, const class VMatrix  &, const class VMatrix  &); /* linkage=_ZN8CFrustum18BuildShadowFrustumERK7VMatrixS2_ */
	void CalcFarPlaneCameraRelativePoints(const class CFrustum  *, class Vector *, float, float, float, float, float); /* linkage=_ZNK8CFrustum32CalcFarPlaneCameraRelativePointsEP6Vectorfffff */
	void CalcViewProj(class CFrustum *); /* linkage=_ZN8CFrustum12CalcViewProjEv */
	class Vector4D TransformPointToHomogenousViewCoordinates(const class CFrustum  *, const class Vector  &); /* linkage=_ZNK8CFrustum41TransformPointToHomogenousViewCoordinatesERK6Vector */
	void SetClipSpaceBounds(class CFrustum *, float, float, float, float); /* linkage=_ZN8CFrustum18SetClipSpaceBoundsEffff */
	void GetClipSpaceBounds(const class CFrustum  *, float &, float &, float &, float &); /* linkage=_ZNK8CFrustum18GetClipSpaceBoundsERfS0_S0_S0_ */
	void ComputeBounds(const class CFrustum  *, class Vector *, class Vector *); /* linkage=_ZNK8CFrustum13ComputeBoundsEP6VectorS1_ */
	void ComputeGeometry(const class CFrustum  *, class Vector *); /* linkage=_ZNK8CFrustum15ComputeGeometryEP6Vector */
	const class Frustum_t  & GetFrustumStruct(const class CFrustum  *); /* linkage=_ZNK8CFrustum16GetFrustumStructEv */
	void GetPlane(const class CFrustum  *, int, class Vector &, float &); /* linkage=_ZNK8CFrustum8GetPlaneEiR6VectorRf */
	/* <580ef5f> mathlib/extended/camera.cpp:772 */
	void ViewToWorld(const class CFrustum  *, const class Vector2D  &, class Vector *); /* linkage=_ZNK8CFrustum11ViewToWorldERK8Vector2DP6Vector */
	void WorldToView(const class CFrustum  *, const class Vector  &, class Vector2D *); /* linkage=_ZNK8CFrustum11WorldToViewERK6VectorP8Vector2D */
	void BuildRay(const class CFrustum  *, const class Vector2D  &, class Vector *, class Vector *); /* linkage=_ZNK8CFrustum8BuildRayERK8Vector2DP6VectorS4_ */
	void SetWorldScale(class CFrustum *, float); /* linkage=_ZN8CFrustum13SetWorldScaleEf */
	float GetWorldScale(const class CFrustum  *); /* linkage=_ZNK8CFrustum13GetWorldScaleEv */
	void UpdateViewAndProjectionFromCamera(class CFrustum *); /* linkage=_ZN8CFrustum33UpdateViewAndProjectionFromCameraEv */
	void UpdateProjectionFromCamera(class CFrustum *); /* linkage=_ZN8CFrustum26UpdateProjectionFromCameraEv */
	class CFrustum & operator=(class CFrustum *, const class CFrustum  &); /* linkage=_ZN8CFrustumaSERKS_ */
} __attribute__((__aligned__(16)));

// <058004E8> ../../public/mathlib/camera.h:264
// member functions: 161
// member variables: 26
// class size: 1,136
class CFrustum {
	/* ../../public/mathlib/camera.h:268 */
	void CFrustum(CFrustum* );
	/* ../../public/mathlib/camera.h:269 */
	void ~CFrustum(CFrustum* );
	/* ../../public/mathlib/camera.h:271 */
	void InitCamera(CFrustum* , const Camera_t& );
	/* ../../public/mathlib/camera.h:280 */
	void InitCamera(CFrustum* , const Vector& , const QAngle& , float, float, float, float, float, float, float, float);
	/* ../../public/mathlib/camera.h:294 */
	void InitOrthoCamera(CFrustum* , const Vector& , const QAngle& , float, float, float, float, float, float, float, float);
	/* ../../public/mathlib/camera.h:310 */
	bool IsOrthographic(const CFrustum* );
	/* ../../public/mathlib/camera.h:312 */
	void SetCameraPosition(CFrustum* , const Vector& );
	/* ../../public/mathlib/camera.h:313 */
	const Vector& GetCameraPosition(const CFrustum* );
	/* ../../public/mathlib/camera.h:315 */
	void SetCameraAngles(CFrustum* , const QAngle& );
	/* ../../public/mathlib/camera.h:316 */
	const QAngle& GetCameraAngles(const CFrustum* );
	/* ../../public/mathlib/camera.h:318 */
	void SetCameraPositionAndAngles(CFrustum* , const Vector& , const QAngle& );
	/* ../../public/mathlib/camera.h:321 */
	void SetCameraVectors(CFrustum* , const Vector& , const Vector& , const Vector& );
	/* ../../public/mathlib/camera.h:324 */
	void SetCameraNearFarPlanes(CFrustum* , float, float);
	/* ../../public/mathlib/camera.h:325 */
	void GetCameraNearFarPlanes(const CFrustum* , float& , float& );
	/* ../../public/mathlib/camera.h:328 */
	void SetCameraNearPlane(CFrustum* , float);
	/* ../../public/mathlib/camera.h:329 */
	float GetCameraNearPlane(const CFrustum* );
	/* ../../public/mathlib/camera.h:332 */
	void SetCameraFarPlane(CFrustum* , float);
	/* ../../public/mathlib/camera.h:333 */
	float GetCameraFarPlane(const CFrustum* );
	/* ../../public/mathlib/camera.h:336 */
	void SetCameraFOV(CFrustum* , float);
	/* ../../public/mathlib/camera.h:337 */
	float GetCameraFOV(const CFrustum* );
	/* ../../public/mathlib/camera.h:338 */
	float GetTanHalfFOV(const CFrustum* );
	/* ../../public/mathlib/camera.h:340 */
	void SetCameraWidthHeight(CFrustum* , float, float);
	/* ../../public/mathlib/camera.h:341 */
	void GetCameraWidthHeight(const CFrustum* , float& , float& );
	/* ../../public/mathlib/camera.h:343 */
	float GetCameraWidth(const CFrustum* );
	/* ../../public/mathlib/camera.h:344 */
	float GetCameraHeight(const CFrustum* );
	/* ../../public/mathlib/camera.h:346 */
	void SetCameraAspect(CFrustum* , float);
	/* ../../public/mathlib/camera.h:347 */
	float GetCameraAspect(const CFrustum* );
	/* ../../public/mathlib/camera.h:351 */
	int CheckBoxAgainstNearAndFarPlanes(const CFrustum* , const VectorAligned& , const VectorAligned& );
	/* ../../public/mathlib/camera.h:354 */
	void GetNearAndFarPlanesAroundBox(const CFrustum* , float* , float* , const AABB_t& , const Vector& );
	/* ../../public/mathlib/camera.h:359 */
	float ComputeScreenSize(const CFrustum* , Vector, float);
	/* ../../public/mathlib/camera.h:362 */
	float SinFOV(const CFrustum* );
	/* ../../public/mathlib/camera.h:364 */
	const Camera_t& GetCameraStruct(const CFrustum* );
	/* ../../public/mathlib/camera.h:370 */
	void SetFrustumStruct(CFrustum* , const Frustum_t& );
	/* ../../public/mathlib/camera.h:373 */
	const Vector& CameraForward(const CFrustum* );
	/* ../../public/mathlib/camera.h:374 */
	const Vector& CameraLeft(const CFrustum* );
	/* ../../public/mathlib/camera.h:375 */
	const Vector& CameraUp(const CFrustum* );
	/* ../../public/mathlib/camera.h:378 */
	void ViewForward(const CFrustum* , Vector& );
	/* ../../public/mathlib/camera.h:379 */
	void ViewLeft(const CFrustum* , Vector& );
	/* ../../public/mathlib/camera.h:380 */
	void ViewUp(const CFrustum* , Vector& );
	/* ../../public/mathlib/camera.h:383 */
	void SetView(CFrustum* , const VMatrix& );
	/* ../../public/mathlib/camera.h:384 */
	const matrix3x4_t& GetView(const CFrustum* );
	/* ../../public/mathlib/camera.h:386 */
	void SetProj(CFrustum* , const VMatrix& );
	/* ../../public/mathlib/camera.h:387 */
	const VMatrix& GetProj(const CFrustum* );
	/* ../../public/mathlib/camera.h:388 */
	const VMatrix& GetInvProj(const CFrustum* );
	/* ../../public/mathlib/camera.h:389 */
	const VMatrix& GetReverseZProj(const CFrustum* );
	/* ../../public/mathlib/camera.h:390 */
	const VMatrix& GetInvReverseZProj(const CFrustum* );
	/* ../../public/mathlib/camera.h:392 */
	bool ScreenTransform(CFrustum* , const Vector& , Vector& );
	/* ../../public/mathlib/camera.h:395 */
	const VMatrix& GetViewProj(const CFrustum* );
	/* ../../public/mathlib/camera.h:396 */
	VMatrix GetViewProjTranspose(const CFrustum* );
	/* ../../public/mathlib/camera.h:397 */
	const VMatrix& GetReverseZViewProj(const CFrustum* );
	/* ../../public/mathlib/camera.h:398 */
	VMatrix GetReverseZViewProjTranspose(const CFrustum* );
	/* ../../public/mathlib/camera.h:400 */
	const VMatrix& GetInvViewProj(const CFrustum* );
	/* ../../public/mathlib/camera.h:401 */
	VMatrix GetInvViewProjTranspose(const CFrustum* );
	/* ../../public/mathlib/camera.h:402 */
	const VMatrix& GetInvReverseZViewProj(const CFrustum* );
	/* ../../public/mathlib/camera.h:403 */
	VMatrix GetInvReverseZViewProjTranspose(const CFrustum* );
	/* ../../public/mathlib/camera.h:405 */
	void SetOverrideProj(CFrustum* , const VMatrix& );
	/* ../../public/mathlib/camera.h:406 */
	void ClearOverrideProj(CFrustum* );
	/* ../../public/mathlib/camera.h:408 */
	bool BoundingVolumeIntersectsFrustum(const CFrustum* , const AABB_t& );
	/* ../../public/mathlib/camera.h:409 */
	bool BoundingVolumeIntersectsFrustum(const CFrustum* , const Vector& , const Vector& );
	/* ../../public/mathlib/camera.h:410 */
	bool BoundingVolumeIntersectsFrustum(const CFrustum* , const AABB_t& , Vector& );
	/* ../../public/mathlib/camera.h:411 */
	bool BoundingVolumeCenterExtentsIntersectsFrustum(const CFrustum* , const Vector& , const Vector& );
	/* ../../public/mathlib/camera.h:414 */
	bool CheckBoxInline(const CFrustum* , const VectorAligned& , const VectorAligned& );
	/* ../../public/mathlib/camera.h:417 */
	void BuildFrustumFromVectors(CFrustum* , const Vector& , float, float, float, float, const Vector& , const Vector& , const Vector& );
	/* ../../public/mathlib/camera.h:420 */
	void BuildShadowFrustum(CFrustum* , const VMatrix& , const VMatrix& );
	/* ../../public/mathlib/camera.h:423 */
	void CalcFarPlaneCameraRelativePoints(const CFrustum* , Vector* , float, float, float, float, float);
	/* ../../public/mathlib/camera.h:429 */
	void CalcViewProj(CFrustum* );
	/* ../../public/mathlib/camera.h:432 */
	Vector4D TransformPointToHomogenousViewCoordinates(const CFrustum* , const Vector& );
	/* ../../public/mathlib/camera.h:434 */
	void SetClipSpaceBounds(CFrustum* , float, float, float, float);
	/* ../../public/mathlib/camera.h:436 */
	void GetClipSpaceBounds(const CFrustum* , float& , float& , float& , float& );
	/* ../../public/mathlib/camera.h:445 */
	void ComputeBounds(const CFrustum* , Vector* , Vector* );
	/* ../../public/mathlib/camera.h:446 */
	void ComputeGeometry(const CFrustum* , Vector* );
	/* ../../public/mathlib/camera.h:448 */
	const Frustum_t& GetFrustumStruct(const CFrustum* );
	/* ../../public/mathlib/camera.h:451 */
	void GetPlane(const CFrustum* , int, Vector& , float& );
	/* ../../public/mathlib/camera.h:454 */
	void ViewToWorld(const CFrustum* , const Vector2D& , Vector* );
	/* ../../public/mathlib/camera.h:455 */
	void WorldToView(const CFrustum* , const Vector& , Vector2D* );
	/* ../../public/mathlib/camera.h:456 */
	void BuildRay(const CFrustum* , const Vector2D& , Vector* , Vector* );
	/* ../../public/mathlib/camera.h:458 */
	void SetWorldScale(CFrustum* , float);
	/* ../../public/mathlib/camera.h:459 */
	float GetWorldScale(const CFrustum* );
private:
	/* ../../public/mathlib/camera.h:463 */
	void UpdateViewAndProjectionFromCamera(CFrustum* );
	/* ../../public/mathlib/camera.h:464 */
	void UpdateProjectionFromCamera(CFrustum* );
protected:
	Camera_t m_camera __attribute__((__aligned__(16))); /* 0 48 */
	Frustum_t m_frustumStruct __attribute__((__aligned__(16))); /* 48 320 */
	float m_flClipSpaceBottomLeftX; /* 368 4 */
	float m_flClipSpaceBottomLeftY; /* 372 4 */
	float m_flClipSpaceTopRightX; /* 376 4 */
	float m_flClipSpaceTopRightY; /* 380 4 */
	bool m_bUseD3DClippingRange; /* 384 1 */
	Vector m_forward; /* 388 12 */
	Vector m_left; /* 400 12 */
	Vector m_up; /* 412 12 */
	matrix3x4_t m_cameraToWorld; /* 424 48 */
	matrix3x4_t m_worldToView; /* 472 48 */
	VMatrix m_projection; /* 520 64 */
	VMatrix m_invProjection; /* 584 64 */
	VMatrix m_viewProj; /* 648 64 */
	VMatrix m_invViewProj; /* 712 64 */
	VMatrix m_revZProjection; /* 776 64 */
	VMatrix m_invRevZProjection; /* 840 64 */
	VMatrix m_revZViewProj; /* 904 64 */
	VMatrix m_invRevZViewProj; /* 968 64 */
	bool m_bHaveOverrideProjectionMatrix; /* 1032 1 */
	VMatrix m_overrideProjection; /* 1036 64 */
	float m_flWorldScale; /* 1100 4 */
	float m_flTanHalfFOV; /* 1104 4 */
	Vector m_vOriginBeforeVr; /* 1108 12 */
	QAngle m_vAnglesBeforeVr; /* 1120 12 */
	void CFrustum(class CFrustum *); /* linkage=_ZN8CFrustumC4Ev */
	void ~CFrustum(class CFrustum *); /* linkage=_ZN8CFrustumD4Ev */
	void InitCamera(class CFrustum *, const class Camera_t  &); /* linkage=_ZN8CFrustum10InitCameraERK8Camera_t */
	void InitCamera(class CFrustum *, const class Vector  &, const class QAngle  &, float, float, float, float, float, float, float, float); /* linkage=_ZN8CFrustum10InitCameraERK6VectorRK6QAngleffffffff */
	void InitOrthoCamera(class CFrustum *, const class Vector  &, const class QAngle  &, float, float, float, float, float, float, float, float); /* linkage=_ZN8CFrustum15InitOrthoCameraERK6VectorRK6QAngleffffffff */
	bool IsOrthographic(const class CFrustum  *); /* linkage=_ZNK8CFrustum14IsOrthographicEv */
	void SetCameraPosition(class CFrustum *, const class Vector  &); /* linkage=_ZN8CFrustum17SetCameraPositionERK6Vector */
	const class Vector  & GetCameraPosition(const class CFrustum  *); /* linkage=_ZNK8CFrustum17GetCameraPositionEv */
	void SetCameraAngles(class CFrustum *, const class QAngle  &); /* linkage=_ZN8CFrustum15SetCameraAnglesERK6QAngle */
	const class QAngle  & GetCameraAngles(const class CFrustum  *); /* linkage=_ZNK8CFrustum15GetCameraAnglesEv */
	void SetCameraPositionAndAngles(class CFrustum *, const class Vector  &, const class QAngle  &); /* linkage=_ZN8CFrustum26SetCameraPositionAndAnglesERK6VectorRK6QAngle */
	void SetCameraVectors(class CFrustum *, const class Vector  &, const class Vector  &, const class Vector  &); /* linkage=_ZN8CFrustum16SetCameraVectorsERK6VectorS2_S2_ */
	void SetCameraNearFarPlanes(class CFrustum *, float, float); /* linkage=_ZN8CFrustum22SetCameraNearFarPlanesEff */
	void GetCameraNearFarPlanes(const class CFrustum  *, float &, float &); /* linkage=_ZNK8CFrustum22GetCameraNearFarPlanesERfS0_ */
	void SetCameraNearPlane(class CFrustum *, float); /* linkage=_ZN8CFrustum18SetCameraNearPlaneEf */
	float GetCameraNearPlane(const class CFrustum  *); /* linkage=_ZNK8CFrustum18GetCameraNearPlaneEv */
	void SetCameraFarPlane(class CFrustum *, float); /* linkage=_ZN8CFrustum17SetCameraFarPlaneEf */
	float GetCameraFarPlane(const class CFrustum  *); /* linkage=_ZNK8CFrustum17GetCameraFarPlaneEv */
	void SetCameraFOV(class CFrustum *, float); /* linkage=_ZN8CFrustum12SetCameraFOVEf */
	float GetCameraFOV(const class CFrustum  *); /* linkage=_ZNK8CFrustum12GetCameraFOVEv */
	float GetTanHalfFOV(const class CFrustum  *); /* linkage=_ZNK8CFrustum13GetTanHalfFOVEv */
	void SetCameraWidthHeight(class CFrustum *, float, float); /* linkage=_ZN8CFrustum20SetCameraWidthHeightEff */
	void GetCameraWidthHeight(const class CFrustum  *, float &, float &); /* linkage=_ZNK8CFrustum20GetCameraWidthHeightERfS0_ */
	float GetCameraWidth(const class CFrustum  *); /* linkage=_ZNK8CFrustum14GetCameraWidthEv */
	float GetCameraHeight(const class CFrustum  *); /* linkage=_ZNK8CFrustum15GetCameraHeightEv */
	void SetCameraAspect(class CFrustum *, float); /* linkage=_ZN8CFrustum15SetCameraAspectEf */
	float GetCameraAspect(const class CFrustum  *); /* linkage=_ZNK8CFrustum15GetCameraAspectEv */
	int CheckBoxAgainstNearAndFarPlanes(const class CFrustum  *, const class VectorAligned  &, const class VectorAligned  &); /* linkage=_ZNK8CFrustum31CheckBoxAgainstNearAndFarPlanesERK13VectorAlignedS2_ */
	void GetNearAndFarPlanesAroundBox(const class CFrustum  *, float *, float *, const class AABB_t  &, const class Vector  &); /* linkage=_ZNK8CFrustum28GetNearAndFarPlanesAroundBoxEPfS0_RK6AABB_tRK6Vector */
	float ComputeScreenSize(const class CFrustum  *, class Vector, float); /* linkage=_ZNK8CFrustum17ComputeScreenSizeE6Vectorf */
	float SinFOV(const class CFrustum  *); /* linkage=_ZNK8CFrustum6SinFOVEv */
	const class Camera_t  & GetCameraStruct(const class CFrustum  *); /* linkage=_ZNK8CFrustum15GetCameraStructEv */
	void SetFrustumStruct(class CFrustum *, const class Frustum_t  &); /* linkage=_ZN8CFrustum16SetFrustumStructERK9Frustum_t */
	const class Vector  & CameraForward(const class CFrustum  *); /* linkage=_ZNK8CFrustum13CameraForwardEv */
	const class Vector  & CameraLeft(const class CFrustum  *); /* linkage=_ZNK8CFrustum10CameraLeftEv */
	const class Vector  & CameraUp(const class CFrustum  *); /* linkage=_ZNK8CFrustum8CameraUpEv */
	void ViewForward(const class CFrustum  *, class Vector &); /* linkage=_ZNK8CFrustum11ViewForwardER6Vector */
	void ViewLeft(const class CFrustum  *, class Vector &); /* linkage=_ZNK8CFrustum8ViewLeftER6Vector */
	void ViewUp(const class CFrustum  *, class Vector &); /* linkage=_ZNK8CFrustum6ViewUpER6Vector */
	void SetView(class CFrustum *, const class VMatrix  &); /* linkage=_ZN8CFrustum7SetViewERK7VMatrix */
	const class matrix3x4_t  & GetView(const class CFrustum  *); /* linkage=_ZNK8CFrustum7GetViewEv */
	/* <580ee76> mathlib/extended/camera.cpp:397 */
	void SetProj(class CFrustum *, const class VMatrix  &); /* linkage=_ZN8CFrustum7SetProjERK7VMatrix */
	const class VMatrix  & GetProj(const class CFrustum  *); /* linkage=_ZNK8CFrustum7GetProjEv */
	const class VMatrix  & GetInvProj(const class CFrustum  *); /* linkage=_ZNK8CFrustum10GetInvProjEv */
	const class VMatrix  & GetReverseZProj(const class CFrustum  *); /* linkage=_ZNK8CFrustum15GetReverseZProjEv */
	const class VMatrix  & GetInvReverseZProj(const class CFrustum  *); /* linkage=_ZNK8CFrustum18GetInvReverseZProjEv */
	bool ScreenTransform(class CFrustum *, const class Vector  &, class Vector &); /* linkage=_ZN8CFrustum15ScreenTransformERK6VectorRS0_ */
	const class VMatrix  & GetViewProj(const class CFrustum  *); /* linkage=_ZNK8CFrustum11GetViewProjEv */
	class VMatrix GetViewProjTranspose(const class CFrustum  *); /* linkage=_ZNK8CFrustum20GetViewProjTransposeEv */
	const class VMatrix  & GetReverseZViewProj(const class CFrustum  *); /* linkage=_ZNK8CFrustum19GetReverseZViewProjEv */
	class VMatrix GetReverseZViewProjTranspose(const class CFrustum  *); /* linkage=_ZNK8CFrustum28GetReverseZViewProjTransposeEv */
	const class VMatrix  & GetInvViewProj(const class CFrustum  *); /* linkage=_ZNK8CFrustum14GetInvViewProjEv */
	class VMatrix GetInvViewProjTranspose(const class CFrustum  *); /* linkage=_ZNK8CFrustum23GetInvViewProjTransposeEv */
	const class VMatrix  & GetInvReverseZViewProj(const class CFrustum  *); /* linkage=_ZNK8CFrustum22GetInvReverseZViewProjEv */
	class VMatrix GetInvReverseZViewProjTranspose(const class CFrustum  *); /* linkage=_ZNK8CFrustum31GetInvReverseZViewProjTransposeEv */
	void SetOverrideProj(class CFrustum *, const class VMatrix  &); /* linkage=_ZN8CFrustum15SetOverrideProjERK7VMatrix */
	void ClearOverrideProj(class CFrustum *); /* linkage=_ZN8CFrustum17ClearOverrideProjEv */
	bool BoundingVolumeIntersectsFrustum(const class CFrustum  *, const class AABB_t  &); /* linkage=_ZNK8CFrustum31BoundingVolumeIntersectsFrustumERK6AABB_t */
	bool BoundingVolumeIntersectsFrustum(const class CFrustum  *, const class Vector  &, const class Vector  &); /* linkage=_ZNK8CFrustum31BoundingVolumeIntersectsFrustumERK6VectorS2_ */
	bool BoundingVolumeIntersectsFrustum(const class CFrustum  *, const class AABB_t  &, class Vector &); /* linkage=_ZNK8CFrustum31BoundingVolumeIntersectsFrustumERK6AABB_tR6Vector */
	bool BoundingVolumeCenterExtentsIntersectsFrustum(const class CFrustum  *, const class Vector  &, const class Vector  &); /* linkage=_ZNK8CFrustum44BoundingVolumeCenterExtentsIntersectsFrustumERK6VectorS2_ */
	bool CheckBoxInline(const class CFrustum  *, const class VectorAligned  &, const class VectorAligned  &); /* linkage=_ZNK8CFrustum14CheckBoxInlineERK13VectorAlignedS2_ */
	void BuildFrustumFromVectors(class CFrustum *, const class Vector  &, float, float, float, float, const class Vector  &, const class Vector  &, const class Vector  &); /* linkage=_ZN8CFrustum23BuildFrustumFromVectorsERK6VectorffffS2_S2_S2_ */
	void BuildShadowFrustum(class CFrustum *, const class VMatrix  &, const class VMatrix  &); /* linkage=_ZN8CFrustum18BuildShadowFrustumERK7VMatrixS2_ */
	void CalcFarPlaneCameraRelativePoints(const class CFrustum  *, class Vector *, float, float, float, float, float); /* linkage=_ZNK8CFrustum32CalcFarPlaneCameraRelativePointsEP6Vectorfffff */
	void CalcViewProj(class CFrustum *); /* linkage=_ZN8CFrustum12CalcViewProjEv */
	class Vector4D TransformPointToHomogenousViewCoordinates(const class CFrustum  *, const class Vector  &); /* linkage=_ZNK8CFrustum41TransformPointToHomogenousViewCoordinatesERK6Vector */
	void SetClipSpaceBounds(class CFrustum *, float, float, float, float); /* linkage=_ZN8CFrustum18SetClipSpaceBoundsEffff */
	void GetClipSpaceBounds(const class CFrustum  *, float &, float &, float &, float &); /* linkage=_ZNK8CFrustum18GetClipSpaceBoundsERfS0_S0_S0_ */
	void ComputeBounds(const class CFrustum  *, class Vector *, class Vector *); /* linkage=_ZNK8CFrustum13ComputeBoundsEP6VectorS1_ */
	void ComputeGeometry(const class CFrustum  *, class Vector *); /* linkage=_ZNK8CFrustum15ComputeGeometryEP6Vector */
	const class Frustum_t  & GetFrustumStruct(const class CFrustum  *); /* linkage=_ZNK8CFrustum16GetFrustumStructEv */
	void GetPlane(const class CFrustum  *, int, class Vector &, float &); /* linkage=_ZNK8CFrustum8GetPlaneEiR6VectorRf */
	/* <580ef5f> mathlib/extended/camera.cpp:772 */
	void ViewToWorld(const class CFrustum  *, const class Vector2D  &, class Vector *); /* linkage=_ZNK8CFrustum11ViewToWorldERK8Vector2DP6Vector */
	void WorldToView(const class CFrustum  *, const class Vector  &, class Vector2D *); /* linkage=_ZNK8CFrustum11WorldToViewERK6VectorP8Vector2D */
	void BuildRay(const class CFrustum  *, const class Vector2D  &, class Vector *, class Vector *); /* linkage=_ZNK8CFrustum8BuildRayERK8Vector2DP6VectorS4_ */
	void SetWorldScale(class CFrustum *, float); /* linkage=_ZN8CFrustum13SetWorldScaleEf */
	float GetWorldScale(const class CFrustum  *); /* linkage=_ZNK8CFrustum13GetWorldScaleEv */
	void UpdateViewAndProjectionFromCamera(class CFrustum *); /* linkage=_ZN8CFrustum33UpdateViewAndProjectionFromCameraEv */
	void UpdateProjectionFromCamera(class CFrustum *); /* linkage=_ZN8CFrustum26UpdateProjectionFromCameraEv */
	class CFrustum & operator=(class CFrustum *, const class CFrustum  &); /* linkage=_ZN8CFrustumaSERKS_ */
} __attribute__((__aligned__(16)));

// <040ACBBC> ../public/mathlib/camera.h:268
void CFrustum::CFrustum()
{
} /* size: 0 */

// <06E2A3F4> ../../public/mathlib/camera.h:269
void CFrustum::~CFrustum()
{
} /* size: 0 */

// <06E2A3DB> ../../public/mathlib/camera.h:269
inline void CFrustum::~CFrustum()
{
} /* size: 0 */

// <0580CFFB> ../../public/mathlib/camera.h:280
inline void CFrustum::InitCamera(const Vector& origin, const QAngle& angles, float flNear, float flFar, float flFOV, float flAspect, float flClipSpaceBottomLeftX, float flClipSpaceBottomLeftY, float flClipSpaceTopRightX, float flClipSpaceTopRightY)
{
} /* size: 0 */

// <01DCE5C0> ../public/mathlib/camera.h:294
inline void CFrustum::InitOrthoCamera(const Vector& origin, const QAngle& angles, float flNear, float flFar, float flWidth, float flHeight, float flClipSpaceBottomLeftX, float flClipSpaceBottomLeftY, float flClipSpaceTopRightX, float flClipSpaceTopRightY)
{
} /* size: 0 */

// <0580CFE2> ../../public/mathlib/camera.h:310
inline void CFrustum::IsOrthographic()
{
} /* size: 0 */

// <0580CFC9> ../../public/mathlib/camera.h:313
inline void CFrustum::GetCameraPosition()
{
} /* size: 0 */

// <03AF6FDD> ../public/mathlib/camera.h:316
inline void CFrustum::GetCameraAngles()
{
} /* size: 0 */

// <03AF6FAA> ../public/mathlib/camera.h:325
inline void CFrustum::GetCameraNearFarPlanes(float& flNear, float& flFar)
{
} /* size: 0 */

// <02F2940B> ../public/mathlib/camera.h:329
inline void CFrustum::GetCameraNearPlane()
{
} /* size: 0 */

// <03C44A5B> ../public/mathlib/camera.h:333
inline void CFrustum::GetCameraFarPlane()
{
} /* size: 0 */

// <0580CFB0> ../../public/mathlib/camera.h:337
inline void CFrustum::GetCameraFOV()
{
} /* size: 0 */

// <02F293C0> ../public/mathlib/camera.h:338
inline void CFrustum::GetTanHalfFOV()
{
} /* size: 0 */

// <02FC4902> ../public/mathlib/camera.h:343
inline void CFrustum::GetCameraWidth()
{
} /* size: 0 */

// <0580CF97> ../../public/mathlib/camera.h:347
inline void CFrustum::GetCameraAspect()
{
} /* size: 0 */

// <0580CF7E> ../../public/mathlib/camera.h:364
inline void CFrustum::GetCameraStruct()
{
} /* size: 0 */

// <0580CF65> ../../public/mathlib/camera.h:373
inline void CFrustum::CameraForward()
{
} /* size: 0 */

// <0580CF4C> ../../public/mathlib/camera.h:374
inline void CFrustum::CameraLeft()
{
} /* size: 0 */

// <0580CF33> ../../public/mathlib/camera.h:375
inline void CFrustum::CameraUp()
{
} /* size: 0 */

// <0580CF0D> ../../public/mathlib/camera.h:383
inline void CFrustum::SetView(const VMatrix& mWorldToView)
{
} /* size: 0 */

// <03AF6F91> ../public/mathlib/camera.h:384
inline void CFrustum::GetView()
{
} /* size: 0 */

// <02F29343> ../public/mathlib/camera.h:388
inline void CFrustum::GetInvProj()
{
} /* size: 0 */

// <02F2932A> ../public/mathlib/camera.h:389
inline void CFrustum::GetReverseZProj()
{
} /* size: 0 */

// <02F29311> ../public/mathlib/camera.h:390
inline void CFrustum::GetInvReverseZProj()
{
} /* size: 0 */

// <0580CEF4> ../../public/mathlib/camera.h:395
inline void CFrustum::GetViewProj()
{
} /* size: 0 */

// <039F7A5A> ../public/mathlib/camera.h:396
inline void CFrustum::GetViewProjTranspose()
{
} /* size: 0 */

// <02F292C6> ../public/mathlib/camera.h:397
inline void CFrustum::GetReverseZViewProj()
{
} /* size: 0 */

// <02F292AD> ../public/mathlib/camera.h:398
inline void CFrustum::GetReverseZViewProjTranspose()
{
} /* size: 0 */

// <0580CEDB> ../../public/mathlib/camera.h:400
inline void CFrustum::GetInvViewProj()
{
} /* size: 0 */

// <02F29294> ../public/mathlib/camera.h:401
inline void CFrustum::GetInvViewProjTranspose()
{
} /* size: 0 */

// <01351535> ../public/mathlib/camera.h:402
inline void CFrustum::GetInvReverseZViewProj()
{
} /* size: 0 */

// <02F2927B> ../public/mathlib/camera.h:403
inline void CFrustum::GetInvReverseZViewProjTranspose()
{
} /* size: 0 */

// <031808EF> ../public/mathlib/camera.h:446
inline void CFrustum::ComputeGeometry(Vector* pVertsOut8)
{
} /* size: 0 */

// <01DCE57E> ../public/mathlib/camera.h:516
inline void CFrustum::SetOverrideProj(const VMatrix& overrideProj)
{
} /* size: 0 */

// <01DCE562> ../public/mathlib/camera.h:525
inline void CFrustum::ClearOverrideProj()
{
} /* size: 0 */

// <013514E6> ../public/mathlib/camera.h:572
inline void CFrustum::SetCameraWidthHeight(float flWidth, float flHeight)
{
} /* size: 0 */

// <039F7A17> ../public/mathlib/camera.h:593
// variables: 2
inline void CFrustum::BoundingVolumeIntersectsFrustum(const AABB_t& box)
{
	Vector vMins; // 595
	Vector vMaxs; // 596
} /* size: 0, variables: 2 */

// <031808B9> ../public/mathlib/camera.h:620
// variable: 1
inline void CFrustum::TransformPointToHomogenousViewCoordinates(const Vector& pnt)
{
	Vector4D v4Rslt; // 622
} /* size: 0, variables: 1 */

// <0580CEA5> ../../public/mathlib/camera.h:627
// variable: 1
inline void CFrustum::ViewForward(Vector& vViewForward)
{
	Vector vFrustumDir; // 629
} /* size: 0, variables: 1 */

// <0318084D> ../public/mathlib/camera.h:635
// variable: 1
inline void CFrustum::ViewLeft(Vector& vViewLeft)
{
	Vector vFrustumDir; // 637
} /* size: 0, variables: 1 */

// <03180817> ../public/mathlib/camera.h:642
// variable: 1
inline void CFrustum::ViewUp(Vector& vViewUp)
{
	Vector vFrustumDir; // 644
} /* size: 0, variables: 1 */

// <03DAE5A2> ../public/mathlib/camera.h:667
// variables: 15
inline void CFrustum::CheckBoxInline(const VectorAligned& mins, const VectorAligned& maxs)
{
	fltx4 fl4Origin; // 669
	fltx4 mins4; // 670
	fltx4 maxs4; // 671
	fltx4 minx; // 673
	fltx4 miny; // 674
	fltx4 minz; // 675
	fltx4 maxx; // 676
	fltx4 maxy; // 677
	fltx4 maxz; // 678
	{
		int i; // 682
		{
			fltx4 xTotalBack; // 684
			fltx4 yTotalBack; // 685
			fltx4 zTotalBack; // 686
			fltx4 dotBack; // 687
			fltx4 isOut; // 693
		}
	}
} /* size: 0, variables: 9 */

// <03AF6F4F> ../public/mathlib/camera.h:701
inline void CFrustum::SetWorldScale(float flWorldScale)
{
} /* size: 0 */

// <01351460> ../public/mathlib/camera.h:787
inline void CFrustum::GetPlane(int index, Vector& normalOut, float& distOut)
{
} /* size: 0 */

