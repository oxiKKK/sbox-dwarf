
//
// mathlib/extended/camera.cpp
//
//	referenced by: libengine2.so
//
//	functions: 38
//

// <0580CE62> mathlib/extended/camera.cpp:24
void ExtractDirectionVectors(Vector* pForward, Vector* pLeft, Vector* pUp, const matrix3x4_t& mMatrix)
{
} /* size: 0 */

// <0580BEB4> mathlib/extended/camera.cpp:36
// variables: 5
// function calls: 65
void CalcFarPlaneCameraRelativePoints(Vector* p4PointsOut, Vector& vForward, Vector& vUp, Vector& vLeft, float flFarPlane, float flFovX, float flAspect, float flClipSpaceBottomLeftX, float flClipSpaceBottomLeftY, float flClipSpaceTopRightX, float flClipSpaceTopRightY)
{
	Vector vFowardShift; // 41
	Vector vUpShift; // 42
	Vector vRightShift; // 43
	{
		float flTanX; // 51
		float flTanY; // 52
		DEG2RAD(float flDegrees); // 51
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 1478
		operator*(float fl,
				const Vector& v);  // 54
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 1431
		Vector::operator-(); // 55
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 1478
		operator*(float fl,
				const Vector& v);  // 55
	}
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 41
	Vector::operator=(
			const Vector& vOther);  // 46
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1431
	Vector::operator-(); // 47
	Vector::Vector(); // 42
	Vector::Vector(); // 43
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 58
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 58
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 58
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 58
	Vector::operator=(
			const Vector& vOther);  // 58
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 59
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 59
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 59
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 59
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 60
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 60
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 60
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 60
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 61
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 61
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 61
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 61
} /* size: 738, variables: 3, inline expansions: 54 (596 bytes) */

// <0580BE7D> mathlib/extended/camera.cpp:67
// variable: 1
void ComputeWorldToViewMatrix(const matrix3x4_t& cameraToWorld, matrix3x4_t* pOutWorldToView)
{
	matrix3x4_t tmp; // 69
} /* size: 0, variables: 1 */

// <0580B70B> mathlib/extended/camera.cpp:98
// variables: 5
// function calls: 15
void ComputeViewMatrix(VMatrix* pWorldToView, const Camera_t& camera)
{
	matrix3x4_t transform; // 100
	matrix3x4_t invTransform; // 100
	VMatrix matRotate; // 103
	VMatrix matRotateZ; // 105
	VMatrix matRotateX; // 109
	matrix3x4_t::matrix3x4_t(); // 100
	matrix3x4_t::matrix3x4_t(); // 100
	matrix3x4_t::Base(); // 560
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 560
	VMatrix::Init(
		const matrix3x4_t& matrix3x4);  // 499
	VMatrix::VMatrix(
		const matrix3x4_t& matrix3x4);  // 103
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 106
	VMatrix::VMatrix(); // 105
	VMatrix::VMatrix(); // 109
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 110
	matrix3x4_t::Base(); // 683
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 683
	VMatrix::CopyFrom3x4(
			const matrix3x4_t& m3x4);  // 115
} /* size: 0, variables: 5, inline expansions: 15 (0 bytes) */

// <0580B29D> mathlib/extended/camera.cpp:145
// variables: 13
// function calls: 5
void ComputeProjectionMatrix(VMatrix* pCameraToProjection, float flZNear, float flZFar, float flFOVX, float flAspectRatio, float flClipSpaceBottomLeftX, float flClipSpaceBottomLeftY, float flClipSpaceTopRightX, float flClipSpaceTopRightY)
{
	Vector pNearPoints; // 149
	Vector vForward; // 150
	Vector vUp; // 151
	Vector vLeft; // 152
	float l; // 158
	float r; // 159
	float b; // 160
	float t; // 161
	float zn; // 162
	float zf; // 163
	float flWidth; // 165
	float flHeight; // 166
	float flReverseDepth; // 167
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 151
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 150
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 152
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 169
} /* size: 401, variables: 13, inline expansions: 5 (93 bytes) */

// <0580B276> mathlib/extended/camera.cpp:202
inline void ComputeZReversalProjectionMatrix(VMatrix& zReversalProjOut, const VMatrix& projectionMatrix)
{
} /* size: 0 */

// <0580B24F> mathlib/extended/camera.cpp:207
inline void InvertVMatrix(const VMatrix& src, VMatrix& dst)
{
} /* size: 0 */

// <0580AFD1> mathlib/extended/camera.cpp:215
// variables: 4
// function calls: 5
void ComputeScreenSpacePosition(Vector2D* pScreenPosition, const Vector& vecWorldPosition, const Camera_t& camera, int width, int height)
{
	VMatrix view; // 218
	VMatrix proj; // 218
	VMatrix viewproj; // 218
	Vector vecScreenPos; // 223
	ComputeProjectionMatrix(VMatrix* pCameraToProjection,
				const Camera_t& camera,
				int width,
				int height);  // 220
	VMatrix::VMatrix(); // 218
	VMatrix::VMatrix(); // 218
	VMatrix::VMatrix(); // 218
	Vector::Vector(); // 223
} /* size: 0, variables: 4, inline expansions: 5 (0 bytes) */

// <0580A9BA> mathlib/extended/camera.cpp:230
// variables: 7
// function calls: 19
VMatrix ViewMatrixRH(const Vector& vEye, const Vector& vAt, const Vector& vUp)
{
	Vector xAxis; // 232
	Vector yAxis; // 232
	Vector zAxis; // 233
	float flDotX; // 239
	float flDotY; // 240
	float flDotZ; // 241
	VMatrix mRet; // 243
	Vector::NormalizeInPlace(); // 236
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 233
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1508
	CrossProduct(const Vector& a,
			const Vector& b);  // 234
	Vector::Vector(); // 232
	Vector::Vector(); // 232
	Vector::operator=(
			const Vector& vOther);  // 234
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1508
	CrossProduct(const Vector& a,
			const Vector& b);  // 235
	Vector::operator=(
			const Vector& vOther);  // 235
	Vector::NormalizeInPlace(); // 237
	Vector::NormalizeInPlace(); // 238
	DotProduct(const Vector& a,
			const Vector& b);  // 239
	VMatrix::Init(
		vec_t m00,
		vec_t m01,
		vec_t m02,
		vec_t m03,
		vec_t m10,
		vec_t m11,
		vec_t m12,
		vec_t m13,
		vec_t m20,
		vec_t m21,
		vec_t m22,
		vec_t m23,
		vec_t m30,
		vec_t m31,
		vec_t m32,
		vec_t m33);  // 488
	VMatrix::VMatrix(
		vec_t m00,
		vec_t m01,
		vec_t m02,
		vec_t m03,
		vec_t m10,
		vec_t m11,
		vec_t m12,
		vec_t m13,
		vec_t m20,
		vec_t m21,
		vec_t m22,
		vec_t m23,
		vec_t m30,
		vec_t m31,
		vec_t m32,
		vec_t m33);  // 247
	DotProduct(const Vector& a,
			const Vector& b);  // 240
	DotProduct(const Vector& a,
			const Vector& b);  // 241
} /* size: 0, variables: 7, inline expansions: 19 (0 bytes) */

// <0580A3F1> mathlib/extended/camera.cpp:253
// variable: 1
// function calls: 10
void MatricesFromCamera(VMatrix& mWorldToView, VMatrix& mProjection, const Camera_t& camera, float flClipSpaceBottomLeftX, float flClipSpaceBottomLeftY, float flClipSpaceTopRightX, float flClipSpaceTopRightY)
{
	matrix3x4_t cameraToWorld; // 257
	matrix3x4_t::matrix3x4_t(); // 257
	VMatrix::Identity(); // 258
	matrix3x4_t::matrix3x4_t(); // 69
	ComputeWorldToViewMatrix(const matrix3x4_t& cameraToWorld,
				matrix3x4_t* pOutWorldToView);  // 77
	ComputeViewMatrix(matrix3x4_t* pWorldToView,
				matrix3x4_t* pCameraToWorld,
				const Camera_t& camera);  // 259
	Camera_t::IsOrthographic(); // 261
	VMatrix::Init(
		vec_t m00,
		vec_t m01,
		vec_t m02,
		vec_t m03,
		vec_t m10,
		vec_t m11,
		vec_t m12,
		vec_t m13,
		vec_t m20,
		vec_t m21,
		vec_t m22,
		vec_t m23,
		vec_t m30,
		vec_t m31,
		vec_t m32,
		vec_t m33);  // 488
	VMatrix::VMatrix(
		vec_t m00,
		vec_t m01,
		vec_t m02,
		vec_t m03,
		vec_t m10,
		vec_t m11,
		vec_t m12,
		vec_t m13,
		vec_t m20,
		vec_t m21,
		vec_t m22,
		vec_t m23,
		vec_t m30,
		vec_t m31,
		vec_t m32,
		vec_t m33);  // 146
	OrthoMatrixRH(float x1,
			float y1,
			float x2,
			float y2,
			float flNear,
			float flFar);  // 207
	OrthoMatrixRH(float flWidth,
			float flHeight,
			float flNear,
			float flFar);  // 263
} /* size: 0, variables: 1, inline expansions: 10 (0 bytes) */

// <0580A260> mathlib/extended/camera.cpp:273
// variables: 2
// function calls: 3
void FrustumFromViewProj(Frustum_t* pFrustum, const VMatrix& mViewProj, const Vector& origin, bool bD3DClippingRange)
{
	VPlane planes; // 275
	{
		int i; // 279
		DotProduct(const Vector& a,
				const Vector& b);  // 281
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 1431
		Vector::operator-(); // 281
	}
} /* size: 364, variables: 1 */

// <0580A106> mathlib/extended/camera.cpp:288
// variable: 1
// function call: 1
void FrustumFromMatrices(Frustum_t* pFrustum, const VMatrix& mWorldToView, const VMatrix& mProjection, const Vector& origin, bool bD3DClippingRange)
{
	VMatrix viewProj; // 290
	VMatrix::VMatrix(); // 290
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <058099FA> mathlib/extended/camera.cpp:296
// variables: 4
// function calls: 20
VMatrix ViewProjFromVectors(const Vector& origin, float flNear, float flFar, float flFOV, float flAspect, const Vector& vecForward, const Vector& vecLeft, const Vector& vecUp)
{
	matrix3x4_t mCameraToWorld; // 300
	matrix3x4_t mWorldToView; // 301
	VMatrix mProjection; // 303
	VMatrix mViewProj; // 305
	matrix3x4_t::matrix3x4_t(); // 69
	ComputeWorldToViewMatrix(const matrix3x4_t& cameraToWorld,
				matrix3x4_t* pOutWorldToView);  // 88
	matrix3x4_t::SetColumn(
			const Vector& vColumn,
			MatrixAxisType_t nColumn);  // 647
	MatrixSetColumn(const Vector& in,
			MatrixAxisType_t nColumn,
			matrix3x4_t& out);  // 84
	matrix3x4_t::SetColumn(
			const Vector& vColumn,
			MatrixAxisType_t nColumn);  // 647
	MatrixSetColumn(const Vector& in,
			MatrixAxisType_t nColumn,
			matrix3x4_t& out);  // 85
	matrix3x4_t::SetColumn(
			const Vector& vColumn,
			MatrixAxisType_t nColumn);  // 647
	MatrixSetColumn(const Vector& in,
			MatrixAxisType_t nColumn,
			matrix3x4_t& out);  // 86
	matrix3x4_t::SetColumn(
			const Vector& vColumn,
			MatrixAxisType_t nColumn);  // 647
	MatrixSetColumn(const Vector& in,
			MatrixAxisType_t nColumn,
			matrix3x4_t& out);  // 87
	ComputeViewMatrix(matrix3x4_t* pWorldToView,
				matrix3x4_t* pCameraToWorld,
				const Vector& vecOrigin,
				const Vector& vecForward,
				const Vector& vecLeft,
				const Vector& vecUp);  // 302
	matrix3x4_t::matrix3x4_t(); // 300
	matrix3x4_t::matrix3x4_t(); // 301
	VMatrix::VMatrix(); // 303
	VMatrix::VMatrix(); // 305
	matrix3x4_t::Base(); // 560
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 560
	VMatrix::Init(
		const matrix3x4_t& matrix3x4);  // 499
	VMatrix::VMatrix(
		const matrix3x4_t& matrix3x4);  // 306
} /* size: 0, variables: 4, inline expansions: 20 (0 bytes) */

// <058085AD> mathlib/extended/camera.cpp:310
// variables: 10
// function calls: 72
void CFrustum::CFrustum()
{
	{
		const float  flNear; // 314
		const float  flFar; // 315
		const float  flFOV; // 316
		const float  flTanHalfFOV; // 317
		VMatrix mProjection; // 364
	}
	Vector::Vector(); // 27
	QAngle::QAngle(); // 27
	Camera_t::Camera_t(); // 310
	Vector::Vector(); // 310
	Vector::Vector(); // 310
	Vector::Vector(); // 310
	matrix3x4_t::matrix3x4_t(); // 310
	matrix3x4_t::matrix3x4_t(); // 310
	VMatrix::VMatrix(); // 310
	VMatrix::VMatrix(); // 310
	VMatrix::VMatrix(); // 310
	VMatrix::VMatrix(); // 310
	VMatrix::VMatrix(); // 310
	VMatrix::VMatrix(); // 310
	VMatrix::VMatrix(); // 310
	VMatrix::VMatrix(); // 310
	VMatrix::VMatrix(); // 310
	Vector::Vector(); // 310
	QAngle::QAngle(); // 310
	{
		const float  flNear; // 314
		const float  flFar; // 315
		const float  flFOV; // 316
		const float  flTanHalfFOV; // 317
		VMatrix mProjection; // 364
		QAngle::QAngle(
			vec_t flPitchDegrees,
			vec_t flYawDegrees,
			vec_t flRollDegrees);  // 318
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 318
		Vector::operator=(
				const Vector& vOther);  // 78
		Camera_t::InitViewParameters(
					const Vector& vOrigin,
					const QAngle& vAngles);  // 63
		Camera_t::Init(
			const Vector& origin,
			const QAngle& angles,
			float flNear,
			float flFar,
			float flFOV,
			float flAspect);  // 318
		Vector::Init(
			vec_t ix,
			vec_t iy,
			vec_t iz);  // 331
		Vector::Init(
			vec_t ix,
			vec_t iy,
			vec_t iz);  // 329
		Vector::Init(
			vec_t ix,
			vec_t iy,
			vec_t iz);  // 330
		matrix3x4_t::SetToIdentity(); // 334
		matrix3x4_t::matrix3x4_t(
				float m00,
				float m01,
				float m02,
				float m03,
				float m10,
				float m11,
				float m12,
				float m13,
				float m20,
				float m21,
				float m22,
				float m23);  // 342
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 348
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 128
		ComputeProjectionMatrix(VMatrix* pCameraToProjection,
					float flZNear,
					float flZFar,
					float flFOVX,
					float flAspectRatio);  // 365
		VMatrix::operator[](
				int nRow);  // 349
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 357
		VMatrix::operator[](
				int nRow);  // 350
		VMatrix::operator[](
				int nRow);  // 351
		VMatrix::operator[](
				int nRow);  // 352
		VMatrix::operator[](
				int nRow);  // 353
		VMatrix::operator[](
				int nRow);  // 358
		VMatrix::operator[](
				int nRow);  // 359
		VMatrix::operator[](
				int nRow);  // 360
		VMatrix::operator[](
				int nRow);  // 361
		VMatrix::operator[](
				int nRow);  // 362
		VMatrix::VMatrix(); // 364
		ComputeZReversalProjectionMatrix(VMatrix& zReversalProjOut,
						const VMatrix& projectionMatrix);  // 366
		InvertVMatrix(const VMatrix& src,
				VMatrix& dst);  // 367
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 370
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 560
		VMatrix::Init(
			const matrix3x4_t& matrix3x4);  // 499
		VMatrix::VMatrix(
			const matrix3x4_t& matrix3x4);  // 384
		VMatrix::operator[](
				int nRow);  // 371
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 377
		VMatrix::operator[](
				int nRow);  // 372
		VMatrix::operator[](
				int nRow);  // 373
		VMatrix::operator[](
				int nRow);  // 374
		VMatrix::operator[](
				int nRow);  // 375
		VMatrix::operator[](
				int nRow);  // 378
		VMatrix::operator[](
				int nRow);  // 379
		VMatrix::operator[](
				int nRow);  // 380
		VMatrix::operator[](
				int nRow);  // 381
		VMatrix::operator[](
				int nRow);  // 382
		InvertVMatrix(const VMatrix& src,
				VMatrix& dst);  // 385
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 388
		Vector::Init(
			vec_t ix,
			vec_t iy,
			vec_t iz);  // 389
		QAngle::Init(
			vec_t ix,
			vec_t iy,
			vec_t iz);  // 390
	}
} /* size: 864, inline expansions: 19 (0 bytes) */

// <05808531> mathlib/extended/camera.cpp:310
// variables: 7
void CFrustum::CFrustum()
{
	{
		const float  flNear; // 314
		const float  flFar; // 315
		const float  flFOV; // 316
		const float  flTanHalfFOV; // 317
		const float  farDivRange; // 345
		const float  nearFarDivRange; // 346
		VMatrix mProjection; // 364
	}
} /* size: 0 */

// <0580EE76> mathlib/extended/camera.cpp:397
// function call: 1
void CFrustum::SetProj(const VMatrix& mProj)
{
	ComputeZReversalProjectionMatrix(VMatrix& zReversalProjOut,
					const VMatrix& projectionMatrix);  // 400
} /* size: 0, inline expansions: 1 (0 bytes) */

// <05808506> mathlib/extended/camera.cpp:397
void CFrustum::SetProj(const VMatrix& mProj)
{
} /* size: 0 */

// <05807F44> mathlib/extended/camera.cpp:404
// variables: 4
// function calls: 27
void CFrustum::CheckBoxAgainstNearAndFarPlanes(const VectorAligned& minBounds, const VectorAligned& maxBounds)
{
	float flNear; // 407
	float flFar; // 408
	AABB_t aabb; // 409
	int nRet; // 413
	Vector::Vector(); // 24
	Vector::Vector(); // 24
	AABB_t::AABB_t(); // 409
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 40
	_mm_cvtss_f32(__m128 __A); // 1515
	GetYSIMD<>(fltx4 a); // 75
	VectorAligned::y(); // 40
	_mm_cvtss_f32(__m128 __A); // 1496
	GetXSIMD<>(fltx4 a); // 74
	VectorAligned::x(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 410
	Vector::operator=(
			const Vector& vOther);  // 410
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 40
	_mm_cvtss_f32(__m128 __A); // 1515
	GetYSIMD<>(fltx4 a); // 75
	VectorAligned::y(); // 40
	_mm_cvtss_f32(__m128 __A); // 1496
	GetXSIMD<>(fltx4 a); // 74
	VectorAligned::x(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 411
	Vector::operator=(
			const Vector& vOther);  // 411
} /* size: 0, variables: 4, inline expansions: 27 (0 bytes) */

// <05807B26> mathlib/extended/camera.cpp:427
// variables: 7
// function calls: 12
void CFrustum::GetNearAndFarPlanesAroundBox(float* pNear, float* pFar, const AABB_t& inBox, const Vector& vOriginShift)
{
	AABB_t box; // 429
	Vector vCorners; // 433
	float flNear; // 444
	float flFar; // 445
	{
		int i; // 446
		{
			Vector vDelta; // 448
			float flDist; // 449
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 1444
			Vector::Vector(); // 1443
			Vector::operator-(
					const Vector& v);  // 448
			DotProduct(const Vector& a,
					const Vector& b);  // 449
		}
	}
	Vector::operator-=(
			const Vector& v);  // 430
	Vector::operator=(
			const Vector& vOther);  // 434
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 435
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 436
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 437
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 439
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 440
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 441
} /* size: 0, variables: 4, inline expansions: 8 (0 bytes) */

// <05807679> mathlib/extended/camera.cpp:459
// variables: 2
// function calls: 17
void CFrustum::SetCameraPosition(const Vector& vOrigin)
{
	const char   __FUNCTION__; // 57034
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 464
	}
	Vector::operator==(
			const Vector& src);  // 461
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 619
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 619
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 619
	Vector::IsValid(); // 464
	Vector::LengthSqr(); // 627
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 628
	Vector::IsReasonable(
			float range);  // 464
	Vector::operator=(
			const Vector& vOther);  // 465
	matrix3x4_t::matrix3x4_t(); // 69
	ComputeWorldToViewMatrix(const matrix3x4_t& cameraToWorld,
				matrix3x4_t* pOutWorldToView);  // 471
	matrix3x4_t::SetColumn(
			const Vector& vColumn,
			MatrixAxisType_t nColumn);  // 647
	MatrixSetColumn(const Vector& in,
			MatrixAxisType_t nColumn,
			matrix3x4_t& out);  // 468
} /* size: 0, variables: 1, inline expansions: 17 (0 bytes) */

// <05807590> mathlib/extended/camera.cpp:477
// function calls: 2
void CFrustum::SetCameraAngles(const QAngle& angles)
{
	QAngle::operator==(
			const QAngle& src);  // 479
	QAngle::operator=(
			const QAngle& vOther);  // 483
} /* size: 78, inline expansions: 2 (63 bytes) */

// <058071A0> mathlib/extended/camera.cpp:490
// variables: 2
// function calls: 15
void CFrustum::SetCameraPositionAndAngles(const Vector& vOrigin, const QAngle& angles)
{
	const char   __FUNCTION__; // 57242
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 496
	}
	Vector::operator==(
			const Vector& src);  // 492
	QAngle::operator==(
			const QAngle& src);  // 492
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 619
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 619
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 619
	Vector::IsValid(); // 496
	Vector::LengthSqr(); // 627
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 628
	Vector::IsReasonable(
			float range);  // 496
	Vector::operator=(
			const Vector& vOther);  // 497
	QAngle::operator=(
			const QAngle& vOther);  // 498
} /* size: 0, variables: 1, inline expansions: 15 (314 bytes) */

// <05806C30> mathlib/extended/camera.cpp:505
// function calls: 17
void CFrustum::SetCameraVectors(const Vector& vForward, const Vector& vLeft, const Vector& vUp)
{
	Vector::operator==(
			const Vector& src);  // 507
	Vector::operator==(
			const Vector& src);  // 507
	Vector::operator==(
			const Vector& src);  // 507
	Vector::operator=(
			const Vector& vOther);  // 511
	matrix3x4_t::matrix3x4_t(); // 69
	ComputeWorldToViewMatrix(const matrix3x4_t& cameraToWorld,
				matrix3x4_t* pOutWorldToView);  // 88
	matrix3x4_t::SetColumn(
			const Vector& vColumn,
			MatrixAxisType_t nColumn);  // 647
	MatrixSetColumn(const Vector& in,
			MatrixAxisType_t nColumn,
			matrix3x4_t& out);  // 84
	matrix3x4_t::SetColumn(
			const Vector& vColumn,
			MatrixAxisType_t nColumn);  // 647
	MatrixSetColumn(const Vector& in,
			MatrixAxisType_t nColumn,
			matrix3x4_t& out);  // 87
	matrix3x4_t::SetColumn(
			const Vector& vColumn,
			MatrixAxisType_t nColumn);  // 647
	MatrixSetColumn(const Vector& in,
			MatrixAxisType_t nColumn,
			matrix3x4_t& out);  // 85
	matrix3x4_t::SetColumn(
			const Vector& vColumn,
			MatrixAxisType_t nColumn);  // 647
	MatrixSetColumn(const Vector& in,
			MatrixAxisType_t nColumn,
			matrix3x4_t& out);  // 86
	ComputeViewMatrix(matrix3x4_t* pWorldToView,
				matrix3x4_t* pCameraToWorld,
				const Vector& vecOrigin,
				const Vector& vecForward,
				const Vector& vecLeft,
				const Vector& vecUp);  // 516
	Vector::operator=(
			const Vector& vOther);  // 512
	Vector::operator=(
			const Vector& vOther);  // 513
} /* size: 0, inline expansions: 17 (0 bytes) */

// <058067DE> mathlib/extended/camera.cpp:525
// function calls: 15
void CFrustum::UpdateViewAndProjectionFromCamera()
{
	matrix3x4_t::matrix3x4_t(); // 69
	ComputeWorldToViewMatrix(const matrix3x4_t& cameraToWorld,
				matrix3x4_t* pOutWorldToView);  // 77
	ComputeViewMatrix(matrix3x4_t* pWorldToView,
				matrix3x4_t* pCameraToWorld,
				const Camera_t& camera);  // 528
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2764
	matrix3x4_t::GetColumn(
			MatrixAxisType_t nColumn);  // 255
	matrix3x4_t::GetForward(); // 26
	Vector::operator=(
			const Vector& vOther);  // 26
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2764
	matrix3x4_t::GetColumn(
			MatrixAxisType_t nColumn);  // 256
	matrix3x4_t::GetLeft(); // 27
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2764
	matrix3x4_t::GetColumn(
			MatrixAxisType_t nColumn);  // 257
	matrix3x4_t::GetUp(); // 28
	Vector::operator=(
			const Vector& vOther);  // 28
	ExtractDirectionVectors(Vector* pForward,
				Vector* pLeft,
				Vector* pUp,
				const matrix3x4_t& mMatrix);  // 531
} /* size: 249, inline expansions: 15 (366 bytes) */

// <0580638B> mathlib/extended/camera.cpp:537
// function calls: 7
void CFrustum::UpdateProjectionFromCamera()
{
	Camera_t::IsOrthographic(); // 543
	VMatrix::Init(
		vec_t m00,
		vec_t m01,
		vec_t m02,
		vec_t m03,
		vec_t m10,
		vec_t m11,
		vec_t m12,
		vec_t m13,
		vec_t m20,
		vec_t m21,
		vec_t m22,
		vec_t m23,
		vec_t m30,
		vec_t m31,
		vec_t m32,
		vec_t m33);  // 488
	VMatrix::VMatrix(
		vec_t m00,
		vec_t m01,
		vec_t m02,
		vec_t m03,
		vec_t m10,
		vec_t m11,
		vec_t m12,
		vec_t m13,
		vec_t m20,
		vec_t m21,
		vec_t m22,
		vec_t m23,
		vec_t m30,
		vec_t m31,
		vec_t m32,
		vec_t m33);  // 162
	OrthoMatrixOffCenterRH(float x1,
				float y1,
				float x2,
				float y2,
				float flNear,
				float flFar);  // 545
	ComputeZReversalProjectionMatrix(VMatrix& zReversalProjOut,
					const VMatrix& projectionMatrix);  // 559
	CFrustum::GetCameraFOV(); // 562
	DEG2RAD(float flDegrees); // 562
} /* size: 588, inline expansions: 7 (378 bytes) */

// <0580545E> mathlib/extended/camera.cpp:566
// variables: 2
// function calls: 46
void CFrustum::BuildFrustumFromVectors(const Vector& origin, float flNear, float flFar, float flFOV, float flAspect, const Vector& vecForward, const Vector& vecLeft, const Vector& vecUp)
{
	VMatrix worldToView; // 586
	VMatrix viewToWorld; // 588
	QAngle::operator=(
			const QAngle& vOther);  // 79
	Vector::operator=(
			const Vector& vOther);  // 78
	Camera_t::InitViewParameters(
				const Vector& vOrigin,
				const QAngle& vAngles);  // 63
	Camera_t::Init(
		const Vector& origin,
		const QAngle& angles,
		float flNear,
		float flFar,
		float flFOV,
		float flAspect);  // 285
	CFrustum::InitCamera(
			const Vector& origin,
			const QAngle& angles,
			float flNear,
			float flFar,
			float flFOV,
			float flAspect,
			float flClipSpaceBottomLeftX,
			float flClipSpaceBottomLeftY,
			float flClipSpaceTopRightX,
			float flClipSpaceTopRightY);  // 569
	QAngle::QAngle(
		vec_t flPitchDegrees,
		vec_t flYawDegrees,
		vec_t flRollDegrees);  // 569
	matrix3x4_t::SetColumn(
			const Vector& vColumn,
			MatrixAxisType_t nColumn);  // 647
	MatrixSetColumn(const Vector& in,
			MatrixAxisType_t nColumn,
			matrix3x4_t& out);  // 84
	matrix3x4_t::matrix3x4_t(); // 69
	ComputeWorldToViewMatrix(const matrix3x4_t& cameraToWorld,
				matrix3x4_t* pOutWorldToView);  // 88
	matrix3x4_t::SetColumn(
			const Vector& vColumn,
			MatrixAxisType_t nColumn);  // 647
	MatrixSetColumn(const Vector& in,
			MatrixAxisType_t nColumn,
			matrix3x4_t& out);  // 85
	matrix3x4_t::SetColumn(
			const Vector& vColumn,
			MatrixAxisType_t nColumn);  // 647
	MatrixSetColumn(const Vector& in,
			MatrixAxisType_t nColumn,
			matrix3x4_t& out);  // 86
	matrix3x4_t::SetColumn(
			const Vector& vColumn,
			MatrixAxisType_t nColumn);  // 647
	MatrixSetColumn(const Vector& in,
			MatrixAxisType_t nColumn,
			matrix3x4_t& out);  // 87
	ComputeViewMatrix(matrix3x4_t* pWorldToView,
				matrix3x4_t* pCameraToWorld,
				const Vector& vecOrigin,
				const Vector& vecForward,
				const Vector& vecLeft,
				const Vector& vecUp);  // 570
	ComputeZReversalProjectionMatrix(VMatrix& zReversalProjOut,
					const VMatrix& projectionMatrix);  // 572
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 560
	VMatrix::Init(
		const matrix3x4_t& matrix3x4);  // 499
	VMatrix::VMatrix(
		const matrix3x4_t& matrix3x4);  // 574
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2764
	matrix3x4_t::GetColumn(
			MatrixAxisType_t nColumn);  // 255
	matrix3x4_t::GetForward(); // 26
	Vector::operator=(
			const Vector& vOther);  // 26
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2764
	matrix3x4_t::GetColumn(
			MatrixAxisType_t nColumn);  // 256
	matrix3x4_t::GetLeft(); // 27
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2764
	matrix3x4_t::GetColumn(
			MatrixAxisType_t nColumn);  // 257
	matrix3x4_t::GetUp(); // 28
	Vector::operator=(
			const Vector& vOther);  // 28
	ExtractDirectionVectors(Vector* pForward,
				Vector* pLeft,
				Vector* pUp,
				const matrix3x4_t& mMatrix);  // 575
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 560
	VMatrix::Init(
		const matrix3x4_t& matrix3x4);  // 499
	VMatrix::VMatrix(
		const matrix3x4_t& matrix3x4);  // 576
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1431
	Vector::operator-(); // 578
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 560
	VMatrix::Init(
		const matrix3x4_t& matrix3x4);  // 499
	VMatrix::VMatrix(
		const matrix3x4_t& matrix3x4);  // 586
	VMatrix::VMatrix(); // 588
	VMatrix::GetTranslation(
			Vector& vTrans);  // 592
} /* size: 1389, variables: 2, inline expansions: 46 (2478 bytes) */

// <0580496E> mathlib/extended/camera.cpp:601
// variables: 13
// function calls: 32
void CFrustum::BuildShadowFrustum(const VMatrix& mWorldToView, const VMatrix& mProj)
{
	VMatrix& viewToProj; // 607
	const char   __FUNCTION__; // 57061
	VMatrix worldToView; // 610
	VMatrix viewToWorld; // 612
	VMatrix projToView; // 626
	Vector vNearPoint; // 629
	Vector vFarPoint; // 629
	Vector vCornerPoints; // 642
	VMatrix worldToCamLocalWorld; // 649
	VMatrix worldToCamLocalWorldToView; // 654
	VMatrix shadowCamLocalWorldToViewProj; // 655
	VPlane pSixPlanes; // 659
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 608
	}
	CFrustum::SetView(
		const VMatrix& mWorldToView);  // 603
	ComputeZReversalProjectionMatrix(VMatrix& zReversalProjOut,
					const VMatrix& projectionMatrix);  // 400
	CFrustum::SetProj(
		const VMatrix& mProj);  // 604
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 560
	matrix3x4_t::Base(); // 560
	VMatrix::Init(
		const matrix3x4_t& matrix3x4);  // 499
	VMatrix::VMatrix(
		const matrix3x4_t& matrix3x4);  // 610
	VMatrix::VMatrix(); // 612
	Vector::operator=(
			const Vector& vOther);  // 617
	Vector::operator=(
			const Vector& vOther);  // 620
	Vector::operator=(
			const Vector& vOther);  // 623
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 629
	VMatrix::GetTranslation(); // 617
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2764
	matrix3x4_t::GetColumn(
			MatrixAxisType_t nColumn);  // 620
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2764
	matrix3x4_t::GetColumn(
			MatrixAxisType_t nColumn);  // 622
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2764
	matrix3x4_t::GetColumn(
			MatrixAxisType_t nColumn);  // 623
	VMatrix::VMatrix(); // 626
	Vector::Vector(); // 629
	Vector::Vector(); // 629
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 630
	VMatrix::V3Mul(
		const Vector& vIn,
		Vector& vOut);  // 630
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 631
	VMatrix::V3Mul(
		const Vector& vIn,
		Vector& vOut);  // 631
	VMatrix::V3Mul(
		const Vector& vIn,
		Vector& vOut);  // 644
	VMatrix::V3Mul(
		const Vector& vIn,
		Vector& vOut);  // 643
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 643
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 644
	VMatrix::VMatrix(); // 649
} /* size: 0, variables: 12, inline expansions: 32 (0 bytes) */

// <058047BA> mathlib/extended/camera.cpp:665
// variables: 4
// function calls: 2
void CFrustum::CalcFarPlaneCameraRelativePoints(Vector* p4PointsOut, float flFarPlane, float flClipSpaceBottomLeftX, float flClipSpaceBottomLeftY, float flClipSpaceTopRightX, float flClipSpaceTopRightY)
{
	Vector vForward; // 669
	Vector vUp; // 670
	Vector vLeft; // 671
	float flFovX; // 673
	CFrustum::GetCameraFOV(); // 673
	CFrustum::GetCameraAspect(); // 674
} /* size: 152, variables: 4, inline expansions: 2 (0 bytes) */

// <05802FF5> mathlib/extended/camera.cpp:682
// variables: 12
// function calls: 104
void Camera_t::ComputeGeometry(Vector* pVertsOut8, const Vector& vForward, const Vector& vLeft, const Vector& vUp)
{
	Vector vNearLeft; // 684
	Vector vFarLeft; // 684
	Vector vNearUp; // 685
	Vector vFarUp; // 685
	Vector vNear; // 686
	Vector vFar; // 687
	{
		float flTanX; // 698
		float flooAspect; // 699
		float flWidth; // 700
		float flHeight; // 701
		float flFarWidth; // 706
		float flFarHeight; // 707
		DEG2RAD(float flDegrees); // 698
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 703
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 704
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 709
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 708
		Vector::operator=(
				const Vector& vOther);  // 703
		Vector::operator=(
				const Vector& vOther);  // 704
		Vector::operator=(
				const Vector& vOther);  // 708
		Vector::operator=(
				const Vector& vOther);  // 709
	}
	Vector::Vector(); // 684
	Vector::Vector(); // 684
	Vector::Vector(); // 685
	Vector::Vector(); // 685
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 686
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 686
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 687
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 687
	Camera_t::IsOrthographic(); // 689
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 691
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 691
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 692
	Vector::operator=(
			const Vector& vOther);  // 691
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 692
	Vector::operator=(
			const Vector& vOther);  // 693
	Vector::operator=(
			const Vector& vOther);  // 692
	Vector::operator=(
			const Vector& vOther);  // 694
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 712
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 713
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 717
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 712
	Vector::operator=(
			const Vector& vOther);  // 712
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 713
	Vector::operator=(
			const Vector& vOther);  // 713
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 714
	Vector::operator=(
			const Vector& vOther);  // 714
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 715
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 714
	Vector::operator=(
			const Vector& vOther);  // 715
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 718
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 715
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 717
	Vector::operator=(
			const Vector& vOther);  // 717
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 718
	Vector::operator=(
			const Vector& vOther);  // 718
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 719
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 720
	Vector::operator=(
			const Vector& vOther);  // 719
	Vector::operator=(
			const Vector& vOther);  // 720
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 719
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 720
} /* size: 922, variables: 6, inline expansions: 87 (1144 bytes) */

// <05802E67> mathlib/extended/camera.cpp:723
// variables: 3
// function calls: 3
void Camera_t::ComputeGeometry(Vector* pVertsOut8)
{
	Vector vForward; // 725
	Vector vLeft; // 725
	Vector vUp; // 725
	Vector::Vector(); // 725
	Vector::Vector(); // 725
	Vector::Vector(); // 725
} /* size: 0, variables: 3, inline expansions: 3 (0 bytes) */

// <05802D3C> mathlib/extended/camera.cpp:731
// variables: 2
void CFrustum::ComputeBounds(Vector* pMins, Vector* pMaxs)
{
	Vector vPts; // 734
	{
		int i; // 737
	}
} /* size: 0, variables: 1 */

// <0580291A> mathlib/extended/camera.cpp:743
// function calls: 13
void CFrustum::CalcViewProj()
{
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 560
	matrix3x4_t::Base(); // 560
	VMatrix::Init(
		const matrix3x4_t& matrix3x4);  // 499
	VMatrix::VMatrix(
		const matrix3x4_t& matrix3x4);  // 745
	InvertVMatrix(const VMatrix& src,
			VMatrix& dst);  // 746
	InvertVMatrix(const VMatrix& src,
			VMatrix& dst);  // 747
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 560
	VMatrix::Init(
		const matrix3x4_t& matrix3x4);  // 499
	VMatrix::VMatrix(
		const matrix3x4_t& matrix3x4);  // 748
	InvertVMatrix(const VMatrix& src,
			VMatrix& dst);  // 749
	InvertVMatrix(const VMatrix& src,
			VMatrix& dst);  // 750
} /* size: 427, inline expansions: 13 (796 bytes) */

// <058026CA> mathlib/extended/camera.cpp:753
// variable: 1
// function calls: 11
void CFrustum::ComputeScreenSize(Vector vecOrigin, float flRadius)
{
	float flDist; // 762
	Camera_t::IsOrthographic(); // 310
	CFrustum::IsOrthographic(); // 755
	Clamp<float>(const float& val,
			const float& minVal,
			const float& maxVal);  // 769
	Clamp<float>(const float& val,
			const float& minVal,
			const float& maxVal);  // 757
	Vector::operator-=(
			const Vector& v);  // 760
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 762
} /* size: 186, variables: 1, inline expansions: 11 (169 bytes) */

// <0580EF5F> mathlib/extended/camera.cpp:772
// variables: 2
// function calls: 2
void CFrustum::ViewToWorld(const Vector2D& vViewMinusOneToOne, Vector* pOutWorld)
{
	Vector vView3D; // 774
	const VMatrix& invViewProjMatrix; // 779
	CFrustum::GetInvViewProj(); // 779
	Vector::Vector(); // 774
} /* size: 79, variables: 2, inline expansions: 2 (7 bytes) */

// <05802678> mathlib/extended/camera.cpp:772
// variables: 2
void CFrustum::ViewToWorld(const Vector2D& vViewMinusOneToOne, Vector* pOutWorld)
{
	Vector vView3D; // 774
	const VMatrix& invViewProjMatrix; // 779
} /* size: 0, variables: 2 */

// <0580252A> mathlib/extended/camera.cpp:783
// variables: 2
// function calls: 3
void CFrustum::WorldToView(const Vector& vWorld, Vector2D* pOutViewMinusOneToOne)
{
	Vector vView3D; // 785
	const VMatrix& viewProjMatrix; // 786
	CFrustum::GetViewProj(); // 786
	Vector::Vector(); // 785
	Vector2D::operator=(
			const Vector2D& vOther);  // 789
} /* size: 78, variables: 2, inline expansions: 3 (14 bytes) */

// <05802235> mathlib/extended/camera.cpp:792
// variables: 3
// function calls: 9
void CFrustum::ScreenTransform(const Vector& point, Vector& pScreen)
{
	float w; // 797
	bool behind; // 801
	{
		const float  invw; // 811
	}
	Vector::operator[](
			int i);  // 794
	Vector::operator[](
			int i);  // 794
	Vector::operator[](
			int i);  // 794
	Vector::operator[](
			int i);  // 795
	Vector::operator[](
			int i);  // 795
	Vector::operator[](
			int i);  // 795
	Vector::operator[](
			int i);  // 797
	Vector::operator[](
			int i);  // 797
	Vector::operator[](
			int i);  // 797
} /* size: 264, variables: 2, inline expansions: 9 (0 bytes) */

// <05801D66> mathlib/extended/camera.cpp:819
// variables: 3
// function calls: 17
void CFrustum::BuildRay(const Vector2D& vViewMinusOneToOne, Vector* pOutRayStart, Vector* pOutRayDirection)
{
	Vector vClickPoint; // 821
	{
		Camera_t camera; // 826
		Vector vRay; // 828
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::Vector(); // 1443
		Vector::operator-(
				const Vector& v);  // 828
		Vector::operator=(
				const Vector& vOther);  // 831
		Vector::operator=(
				const Vector& vOther);  // 832
	}
	CFrustum::GetInvViewProj(); // 779
	Vector::Vector(); // 774
	CFrustum::ViewToWorld(
			const Vector2D& vViewMinusOneToOne,
			Vector* pOutWorld);  // 822
	Vector::Vector(); // 821
	Camera_t::IsOrthographic(); // 310
	CFrustum::IsOrthographic(); // 824
	Vector::operator=(
			const Vector& vOther);  // 836
	matrix3x4_t::GetRow(
		int nRow);  // 629
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1431
	Vector::operator-(); // 631
	Vector::operator=(
			const Vector& vOther);  // 632
	CFrustum::ViewForward(
			Vector& vViewForward);  // 837
} /* size: 314, variables: 1, inline expansions: 12 (179 bytes) */

