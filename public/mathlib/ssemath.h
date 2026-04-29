
//
// public/mathlib/ssemath.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//				   libschemasystem.so
//				   libvfx_vulkan.so
//
//	functions: 22
//	classes: 2
//	struct: 1
//

// <04498AD6> ../public/mathlib/ssemath.h:17
inline fltx4 SquareSIMD<(ESIMDLevel)40>(const fltx4& a)
{
} /* size: 0 */

// <04498920> ../public/mathlib/ssemath.h:17
inline fltx4 SquareSIMD<>(const fltx4& a)
{
} /* size: 0 */

// <044BD47E> ../public/mathlib/ssemath.h:23
inline fltx4 LoadSIMD<false>(const void* pIn)
{
} /* size: 0 */

// <044BCE18> ../public/mathlib/ssemath.h:23
inline fltx4 LoadSIMD<true>(const void* pIn)
{
} /* size: 0 */

// <044AB062> ../public/mathlib/ssemath.h:36
inline void StoreSIMD<false>(fltx4* pOut, const fltx4& fl4Value)
{
} /* size: 0 */

// <04499117> ../public/mathlib/ssemath.h:49
inline void StoreSIMD<true>(float* pOut, const fltx4& fl4Value)
{
} /* size: 0 */

// <0450029F> ../public/mathlib/ssemath.h:58
inline fltx4 ZeroOutTrailingFloats(const fltx4& a, int nCount)
{
} /* size: 0 */

// <0450027E> ../public/mathlib/ssemath.h:64
inline float SumOfSIMDFloats(const fltx4& a)
{
} /* size: 0 */

// <06D7E175> ../../public/mathlib/ssemath.h:70
inline float MaxOfSIMDFloats(const fltx4& a)
{
} /* size: 0 */

// <05A14EC0> ../public/mathlib/ssemath.h:90
// variables: 2
inline fltx4 ReciprocalEstSaturateSIMD(const fltx4& a)
{
	fltx4 zero_mask; // 93
	fltx4 a_safe; // 94
} /* size: 0, variables: 2 */

// <0596B285> ../../public/mathlib/ssemath.h:100
// variables: 2
inline fltx4 ReciprocalSaturateSIMD(const fltx4& a)
{
	fltx4 zero_mask; // 103
	fltx4 a_safe; // 104
} /* size: 0, variables: 2 */

// <044BFE93> ../public/mathlib/ssemath.h:114
inline fltx4 ShiftLeftAndMergeSIMD<>(FLTX4 fl4a, FLTX4 fl4b)
{
} /* size: 0 */

// <044BFE59> ../public/mathlib/ssemath.h:120
inline fltx4 ShiftRightAndMergeSIMD<>(FLTX4 fl4a, FLTX4 fl4b)
{
} /* size: 0 */

// <0448AD21> ../public/mathlib/ssemath.h:274
fltx4 SrgbGammaToLinearSIMD(fltx4)
{
} /* size: 0 */

// <0002A034> ../public/mathlib/ssemath.h:302
// member functions: 7
// member variables: 10
// struct size: 160
struct fourplanes_t {
	fltx4 nX; /* 0 16 */
	fltx4 nY; /* 16 16 */
	fltx4 nZ; /* 32 16 */
	fltx4 dist; /* 48 16 */
	fltx4 xSign; /* 64 16 */
	fltx4 ySign; /* 80 16 */
	fltx4 zSign; /* 96 16 */
	fltx4 nXAbs; /* 112 16 */
	fltx4 nYAbs; /* 128 16 */
	fltx4 nZAbs; /* 144 16 */
	/* ../public/mathlib/ssemath.h:315 */
	void ComputeSignbits(fourplanes_t* );
	/* ../public/mathlib/ssemath.h:318 */
	void Set4Planes(fourplanes_t* , const VPlane* );
	/* ../public/mathlib/ssemath.h:319 */
	void Set2Planes(fourplanes_t* , const VPlane* );
	/* ../public/mathlib/ssemath.h:320 */
	void Get4Planes(const fourplanes_t* , VPlane* );
	/* ../public/mathlib/ssemath.h:321 */
	void Get2Planes(const fourplanes_t* , VPlane* );
	/* ../public/mathlib/ssemath.h:323 */
	void GetPlane(const fourplanes_t* , int, Vector* , float* );
	/* ../public/mathlib/ssemath.h:324 */
	void SetPlane(fourplanes_t* , int, const Vector& , float);
} __attribute__((__aligned__(16)));

// <0002A51D> ../public/mathlib/ssemath.h:327
// member functions: 48
// member variable: 1
// class size: 320
class Frustum_t {
	/* ../public/mathlib/ssemath.h:330 */
	void Frustum_t(Frustum_t* );
	/* ../public/mathlib/ssemath.h:331 */
	void SetPlane(Frustum_t* , int, const Vector& , float);
	/* ../public/mathlib/ssemath.h:332 */
	void GetPlane(const Frustum_t* , int, Vector* , float* );
	/* ../public/mathlib/ssemath.h:333 */
	void SetPlanes(Frustum_t* , const VPlane* );
	/* ../public/mathlib/ssemath.h:334 */
	void GetPlanes(const Frustum_t* , VPlane* );
	/* ../public/mathlib/ssemath.h:337 */
	bool Contains(const Frustum_t* , const Vector& , const Vector& );
	/* ../public/mathlib/ssemath.h:340 */
	bool Intersects(const Frustum_t* , const Frustum_t& );
	/* ../public/mathlib/ssemath.h:341 */
	bool Intersects(const Frustum_t* , const Frustum_t& , Vector* , Vector* );
	/* ../public/mathlib/ssemath.h:344 */
	bool Intersects(const Frustum_t* , const Vector& , const Vector& );
	/* ../public/mathlib/ssemath.h:345 */
	bool IntersectsCenterExtents(const Frustum_t* , const Vector& , const Vector& );
	/* ../public/mathlib/ssemath.h:347 */
	bool Intersects(const Frustum_t* , const fltx4& , const fltx4& );
	/* ../public/mathlib/ssemath.h:348 */
	bool IntersectsCenterExtents(const Frustum_t* , const fltx4& , const fltx4& );
	/* ../public/mathlib/ssemath.h:351 */
	void CreatePerspectiveFrustum(Frustum_t* , const Vector& , const Vector& , const Vector& , const Vector& , float, float, float, float);
	/* ../public/mathlib/ssemath.h:355 */
	void CreatePerspectiveFrustumFLU(Frustum_t* , const Vector& , const Vector& , const Vector& , const Vector& , float, float, float, float);
	/* ../public/mathlib/ssemath.h:360 */
	void CreatePerspectiveFrustum(Frustum_t* , const Vector& , const QAngle& , float, float, float, float);
	/* ../public/mathlib/ssemath.h:364 */
	void CreateOrthoFrustum(Frustum_t* , const Vector& , const Vector& , const Vector& , const Vector& , float, float, float, float, float, float);
	/* ../public/mathlib/ssemath.h:367 */
	void CreateOrthoFrustumFLU(Frustum_t* , const Vector& , const Vector& , const Vector& , const Vector& , float, float, float, float, float, float);
	/* ../public/mathlib/ssemath.h:378 */
	bool GetCorners(const Frustum_t* , Vector* );
	fourplanes_t planes[2] __attribute__((__aligned__(16))); /* 0 320 */
	void Frustum_t(class Frustum_t *); /* linkage=_ZN9Frustum_tC4Ev */
	void SetPlane(class Frustum_t *, int, const class Vector__1  &, float); /* linkage=_ZN9Frustum_t8SetPlaneEiRK6Vectorf */
	/* <59dfb8d> mathlib/mathlib.cpp:5612 */
	void GetPlane(const class Frustum_t  *, int, class Vector__1 *, float *); /* linkage=_ZNK9Frustum_t8GetPlaneEiP6VectorPf */
	/* <59dfec1> mathlib/mathlib.cpp:5624 */
	void SetPlanes(class Frustum_t *, const class VPlane  *); /* linkage=_ZN9Frustum_t9SetPlanesEPK6VPlane */
	/* <59e0503> mathlib/mathlib.cpp:5630 */
	void GetPlanes(const class Frustum_t  *, class VPlane *); /* linkage=_ZNK9Frustum_t9GetPlanesEP6VPlane */
	bool Contains(const class Frustum_t  *, const class Vector__1  &, const class Vector__1  &); /* linkage=_ZNK9Frustum_t8ContainsERK6VectorS2_ */
	bool Intersects(const class Frustum_t  *, const class Frustum_t  &); /* linkage=_ZNK9Frustum_t10IntersectsERKS_ */
	bool Intersects(const class Frustum_t  *, const class Frustum_t  &, class Vector__1 *, class Vector__1 *); /* linkage=_ZNK9Frustum_t10IntersectsERKS_P6VectorS3_ */
	bool Intersects(const class Frustum_t  *, const class Vector__1  &, const class Vector__1  &); /* linkage=_ZNK9Frustum_t10IntersectsERK6VectorS2_ */
	bool IntersectsCenterExtents(const class Frustum_t  *, const class Vector__1  &, const class Vector__1  &); /* linkage=_ZNK9Frustum_t23IntersectsCenterExtentsERK6VectorS2_ */
	bool Intersects(const class Frustum_t  *, const fltx4  &, const fltx4  &); /* linkage=_ZNK9Frustum_t10IntersectsERKDv4_fS2_ */
	bool IntersectsCenterExtents(const class Frustum_t  *, const fltx4  &, const fltx4  &); /* linkage=_ZNK9Frustum_t23IntersectsCenterExtentsERKDv4_fS2_ */
	void CreatePerspectiveFrustum(class Frustum_t *, const class Vector__1  &, const class Vector__1  &, const class Vector__1  &, const class Vector__1  &, float, float, float, float); /* linkage=_ZN9Frustum_t24CreatePerspectiveFrustumERK6VectorS2_S2_S2_ffff */
	/* <59e0a8d> mathlib/mathlib.cpp:5851 */
	void CreatePerspectiveFrustumFLU(class Frustum_t *, const class Vector__1  &, const class Vector__1  &, const class Vector__1  &, const class Vector__1  &, float, float, float, float); /* linkage=_ZN9Frustum_t27CreatePerspectiveFrustumFLUERK6VectorS2_S2_S2_ffff */
	void CreatePerspectiveFrustum(class Frustum_t *, const class Vector__1  &, const class QAngle  &, float, float, float, float); /* linkage=_ZN9Frustum_t24CreatePerspectiveFrustumERK6VectorRK6QAngleffff */
	void CreateOrthoFrustum(class Frustum_t *, const class Vector__1  &, const class Vector__1  &, const class Vector__1  &, const class Vector__1  &, float, float, float, float, float, float); /* linkage=_ZN9Frustum_t18CreateOrthoFrustumERK6VectorS2_S2_S2_ffffff */
	/* <59e18b5> mathlib/mathlib.cpp:5880 */
	void CreateOrthoFrustumFLU(class Frustum_t *, const class Vector__1  &, const class Vector__1  &, const class Vector__1  &, const class Vector__1  &, float, float, float, float, float, float); /* linkage=_ZN9Frustum_t21CreateOrthoFrustumFLUERK6VectorS2_S2_S2_ffffff */
	bool GetCorners(const class Frustum_t  *, class Vector__1 *); /* linkage=_ZNK9Frustum_t10GetCornersEP6Vector */
	void SetPlane(class Frustum_t *, int, const class Vector  &, float); /* linkage=_ZN9Frustum_t8SetPlaneEiRK6Vectorf */
	/* <59dfb8d> mathlib/mathlib.cpp:5612 */
	void GetPlane(const class Frustum_t  *, int, class Vector *, float *); /* linkage=_ZNK9Frustum_t8GetPlaneEiP6VectorPf */
	bool Contains(const class Frustum_t  *, const class Vector  &, const class Vector  &); /* linkage=_ZNK9Frustum_t8ContainsERK6VectorS2_ */
	bool Intersects(const class Frustum_t  *, const class Frustum_t  &, class Vector *, class Vector *); /* linkage=_ZNK9Frustum_t10IntersectsERKS_P6VectorS3_ */
	bool Intersects(const class Frustum_t  *, const class Vector  &, const class Vector  &); /* linkage=_ZNK9Frustum_t10IntersectsERK6VectorS2_ */
	bool IntersectsCenterExtents(const class Frustum_t  *, const class Vector  &, const class Vector  &); /* linkage=_ZNK9Frustum_t23IntersectsCenterExtentsERK6VectorS2_ */
	void CreatePerspectiveFrustum(class Frustum_t *, const class Vector  &, const class Vector  &, const class Vector  &, const class Vector  &, float, float, float, float); /* linkage=_ZN9Frustum_t24CreatePerspectiveFrustumERK6VectorS2_S2_S2_ffff */
	/* <59e0a8d> mathlib/mathlib.cpp:5851 */
	void CreatePerspectiveFrustumFLU(class Frustum_t *, const class Vector  &, const class Vector  &, const class Vector  &, const class Vector  &, float, float, float, float); /* linkage=_ZN9Frustum_t27CreatePerspectiveFrustumFLUERK6VectorS2_S2_S2_ffff */
	void CreatePerspectiveFrustum(class Frustum_t *, const class Vector  &, const class QAngle  &, float, float, float, float); /* linkage=_ZN9Frustum_t24CreatePerspectiveFrustumERK6VectorRK6QAngleffff */
	void CreateOrthoFrustum(class Frustum_t *, const class Vector  &, const class Vector  &, const class Vector  &, const class Vector  &, float, float, float, float, float, float); /* linkage=_ZN9Frustum_t18CreateOrthoFrustumERK6VectorS2_S2_S2_ffffff */
	/* <59e18b5> mathlib/mathlib.cpp:5880 */
	void CreateOrthoFrustumFLU(class Frustum_t *, const class Vector  &, const class Vector  &, const class Vector  &, const class Vector  &, float, float, float, float, float, float); /* linkage=_ZN9Frustum_t21CreateOrthoFrustumFLUERK6VectorS2_S2_S2_ffffff */
	bool GetCorners(const class Frustum_t  *, class Vector *); /* linkage=_ZNK9Frustum_t10GetCornersEP6Vector */
} __attribute__((__aligned__(16)));

// <057F0340> ../../public/mathlib/ssemath.h:327
// member functions: 48
// member variable: 1
// class size: 320
class Frustum_t {
	/* ../../public/mathlib/ssemath.h:330 */
	void Frustum_t(Frustum_t* );
	/* ../../public/mathlib/ssemath.h:331 */
	void SetPlane(Frustum_t* , int, const Vector& , float);
	/* ../../public/mathlib/ssemath.h:332 */
	void GetPlane(const Frustum_t* , int, Vector* , float* );
	/* ../../public/mathlib/ssemath.h:333 */
	void SetPlanes(Frustum_t* , const VPlane* );
	/* ../../public/mathlib/ssemath.h:334 */
	void GetPlanes(const Frustum_t* , VPlane* );
	/* ../../public/mathlib/ssemath.h:337 */
	bool Contains(const Frustum_t* , const Vector& , const Vector& );
	/* ../../public/mathlib/ssemath.h:340 */
	bool Intersects(const Frustum_t* , const Frustum_t& );
	/* ../../public/mathlib/ssemath.h:341 */
	bool Intersects(const Frustum_t* , const Frustum_t& , Vector* , Vector* );
	/* ../../public/mathlib/ssemath.h:344 */
	bool Intersects(const Frustum_t* , const Vector& , const Vector& );
	/* ../../public/mathlib/ssemath.h:345 */
	bool IntersectsCenterExtents(const Frustum_t* , const Vector& , const Vector& );
	/* ../../public/mathlib/ssemath.h:347 */
	bool Intersects(const Frustum_t* , const fltx4& , const fltx4& );
	/* ../../public/mathlib/ssemath.h:348 */
	bool IntersectsCenterExtents(const Frustum_t* , const fltx4& , const fltx4& );
	/* ../../public/mathlib/ssemath.h:351 */
	void CreatePerspectiveFrustum(Frustum_t* , const Vector& , const Vector& , const Vector& , const Vector& , float, float, float, float);
	/* ../../public/mathlib/ssemath.h:355 */
	void CreatePerspectiveFrustumFLU(Frustum_t* , const Vector& , const Vector& , const Vector& , const Vector& , float, float, float, float);
	/* ../../public/mathlib/ssemath.h:360 */
	void CreatePerspectiveFrustum(Frustum_t* , const Vector& , const QAngle& , float, float, float, float);
	/* ../../public/mathlib/ssemath.h:364 */
	void CreateOrthoFrustum(Frustum_t* , const Vector& , const Vector& , const Vector& , const Vector& , float, float, float, float, float, float);
	/* ../../public/mathlib/ssemath.h:367 */
	void CreateOrthoFrustumFLU(Frustum_t* , const Vector& , const Vector& , const Vector& , const Vector& , float, float, float, float, float, float);
	/* ../../public/mathlib/ssemath.h:378 */
	bool GetCorners(const Frustum_t* , Vector* );
	fourplanes_t planes[2] __attribute__((__aligned__(16))); /* 0 320 */
	void Frustum_t(class Frustum_t *); /* linkage=_ZN9Frustum_tC4Ev */
	void SetPlane(class Frustum_t *, int, const class Vector__1  &, float); /* linkage=_ZN9Frustum_t8SetPlaneEiRK6Vectorf */
	/* <59dfb8d> mathlib/mathlib.cpp:5612 */
	void GetPlane(const class Frustum_t  *, int, class Vector__1 *, float *); /* linkage=_ZNK9Frustum_t8GetPlaneEiP6VectorPf */
	/* <59dfec1> mathlib/mathlib.cpp:5624 */
	void SetPlanes(class Frustum_t *, const class VPlane  *); /* linkage=_ZN9Frustum_t9SetPlanesEPK6VPlane */
	/* <59e0503> mathlib/mathlib.cpp:5630 */
	void GetPlanes(const class Frustum_t  *, class VPlane *); /* linkage=_ZNK9Frustum_t9GetPlanesEP6VPlane */
	bool Contains(const class Frustum_t  *, const class Vector__1  &, const class Vector__1  &); /* linkage=_ZNK9Frustum_t8ContainsERK6VectorS2_ */
	bool Intersects(const class Frustum_t  *, const class Frustum_t  &); /* linkage=_ZNK9Frustum_t10IntersectsERKS_ */
	bool Intersects(const class Frustum_t  *, const class Frustum_t  &, class Vector__1 *, class Vector__1 *); /* linkage=_ZNK9Frustum_t10IntersectsERKS_P6VectorS3_ */
	bool Intersects(const class Frustum_t  *, const class Vector__1  &, const class Vector__1  &); /* linkage=_ZNK9Frustum_t10IntersectsERK6VectorS2_ */
	bool IntersectsCenterExtents(const class Frustum_t  *, const class Vector__1  &, const class Vector__1  &); /* linkage=_ZNK9Frustum_t23IntersectsCenterExtentsERK6VectorS2_ */
	bool Intersects(const class Frustum_t  *, const fltx4  &, const fltx4  &); /* linkage=_ZNK9Frustum_t10IntersectsERKDv4_fS2_ */
	bool IntersectsCenterExtents(const class Frustum_t  *, const fltx4  &, const fltx4  &); /* linkage=_ZNK9Frustum_t23IntersectsCenterExtentsERKDv4_fS2_ */
	void CreatePerspectiveFrustum(class Frustum_t *, const class Vector__1  &, const class Vector__1  &, const class Vector__1  &, const class Vector__1  &, float, float, float, float); /* linkage=_ZN9Frustum_t24CreatePerspectiveFrustumERK6VectorS2_S2_S2_ffff */
	/* <59e0a8d> mathlib/mathlib.cpp:5851 */
	void CreatePerspectiveFrustumFLU(class Frustum_t *, const class Vector__1  &, const class Vector__1  &, const class Vector__1  &, const class Vector__1  &, float, float, float, float); /* linkage=_ZN9Frustum_t27CreatePerspectiveFrustumFLUERK6VectorS2_S2_S2_ffff */
	void CreatePerspectiveFrustum(class Frustum_t *, const class Vector__1  &, const class QAngle  &, float, float, float, float); /* linkage=_ZN9Frustum_t24CreatePerspectiveFrustumERK6VectorRK6QAngleffff */
	void CreateOrthoFrustum(class Frustum_t *, const class Vector__1  &, const class Vector__1  &, const class Vector__1  &, const class Vector__1  &, float, float, float, float, float, float); /* linkage=_ZN9Frustum_t18CreateOrthoFrustumERK6VectorS2_S2_S2_ffffff */
	/* <59e18b5> mathlib/mathlib.cpp:5880 */
	void CreateOrthoFrustumFLU(class Frustum_t *, const class Vector__1  &, const class Vector__1  &, const class Vector__1  &, const class Vector__1  &, float, float, float, float, float, float); /* linkage=_ZN9Frustum_t21CreateOrthoFrustumFLUERK6VectorS2_S2_S2_ffffff */
	bool GetCorners(const class Frustum_t  *, class Vector__1 *); /* linkage=_ZNK9Frustum_t10GetCornersEP6Vector */
	void SetPlane(class Frustum_t *, int, const class Vector  &, float); /* linkage=_ZN9Frustum_t8SetPlaneEiRK6Vectorf */
	/* <59dfb8d> mathlib/mathlib.cpp:5612 */
	void GetPlane(const class Frustum_t  *, int, class Vector *, float *); /* linkage=_ZNK9Frustum_t8GetPlaneEiP6VectorPf */
	bool Contains(const class Frustum_t  *, const class Vector  &, const class Vector  &); /* linkage=_ZNK9Frustum_t8ContainsERK6VectorS2_ */
	bool Intersects(const class Frustum_t  *, const class Frustum_t  &, class Vector *, class Vector *); /* linkage=_ZNK9Frustum_t10IntersectsERKS_P6VectorS3_ */
	bool Intersects(const class Frustum_t  *, const class Vector  &, const class Vector  &); /* linkage=_ZNK9Frustum_t10IntersectsERK6VectorS2_ */
	bool IntersectsCenterExtents(const class Frustum_t  *, const class Vector  &, const class Vector  &); /* linkage=_ZNK9Frustum_t23IntersectsCenterExtentsERK6VectorS2_ */
	void CreatePerspectiveFrustum(class Frustum_t *, const class Vector  &, const class Vector  &, const class Vector  &, const class Vector  &, float, float, float, float); /* linkage=_ZN9Frustum_t24CreatePerspectiveFrustumERK6VectorS2_S2_S2_ffff */
	/* <59e0a8d> mathlib/mathlib.cpp:5851 */
	void CreatePerspectiveFrustumFLU(class Frustum_t *, const class Vector  &, const class Vector  &, const class Vector  &, const class Vector  &, float, float, float, float); /* linkage=_ZN9Frustum_t27CreatePerspectiveFrustumFLUERK6VectorS2_S2_S2_ffff */
	void CreatePerspectiveFrustum(class Frustum_t *, const class Vector  &, const class QAngle  &, float, float, float, float); /* linkage=_ZN9Frustum_t24CreatePerspectiveFrustumERK6VectorRK6QAngleffff */
	void CreateOrthoFrustum(class Frustum_t *, const class Vector  &, const class Vector  &, const class Vector  &, const class Vector  &, float, float, float, float, float, float); /* linkage=_ZN9Frustum_t18CreateOrthoFrustumERK6VectorS2_S2_S2_ffffff */
	/* <59e18b5> mathlib/mathlib.cpp:5880 */
	void CreateOrthoFrustumFLU(class Frustum_t *, const class Vector  &, const class Vector  &, const class Vector  &, const class Vector  &, float, float, float, float, float, float); /* linkage=_ZN9Frustum_t21CreateOrthoFrustumFLUERK6VectorS2_S2_S2_ffffff */
	bool GetCorners(const class Frustum_t  *, class Vector *); /* linkage=_ZNK9Frustum_t10GetCornersEP6Vector */
} __attribute__((__aligned__(16)));

// <0580142C> ../../public/mathlib/ssemath.h:330
void Frustum_t::Frustum_t()
{
} /* size: 0 */

// <0583E6B4> ../../public/mathlib/ssemath.h:395
fltx4 Pow_FixedPoint_Exponent_SIMD(const fltx4 &, int)
{
} /* size: 0 */

// <0584C667> ../../public/mathlib/ssemath.h:397
inline fltx4 PowSIMD_Approx(const fltx4& x, float exponent)
{
} /* size: 0 */

// <05998A8C> ../public/mathlib/ssemath.h:439
void SeedRandSIMD(uint32)
{
} /* size: 0 */

// <0448AD58> ../public/mathlib/ssemath.h:440
fltx4 RandSIMD(int)
{
} /* size: 0 */

// <0448AD75> ../public/mathlib/ssemath.h:443
int GetSIMDRandContext(void)
{
} /* size: 0 */

// <0448AD3E> ../public/mathlib/ssemath.h:444
void ReleaseSIMDRandContext(int)
{
} /* size: 0 */

// <0450024C> ../public/mathlib/ssemath.h:542
// variable: 1
inline fltx4 NatExpSIMD(const fltx4& val)
{
	fltx4 fl4Result; // 545
} /* size: 0, variables: 1 */

