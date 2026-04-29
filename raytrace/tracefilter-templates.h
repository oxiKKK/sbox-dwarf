
//
// raytrace/tracefilter-templates.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmeshsystem.so
//
//	functions: 16
//

// <0632C018> raytrace/tracefilter-templates.h:4
// variable: 1
inline unsigned int GetSignMask(const Vector& v)
{
	unsigned int ret; // 6
} /* size: 0, variables: 1 */

// <0632B372> raytrace/tracefilter-templates.h:18
// variables: 23
// function calls: 46
void RayTracingEnvironment::FlushStreamEntry<CFilterTags>(CFilteredRayStream<CFilterTags>& s, int msk)
{
	fltx4 tmax; // 22
	fltx4 scl; // 23
	RayTracingResult_t tmpresult; // 25
	{
		int r; // 31
		{
			RayTracingSingleResult_t* out; // 33
			float flHitDistance; // 43
		}
	}
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 166
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 1684
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 1684
	MaddSIMD<>(const fltx4& a,
			const fltx4& b,
			const fltx4& c);  // 167
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 1684
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 1684
	MaddSIMD<>(const fltx4& a,
			const fltx4& b,
			const fltx4& c);  // 168
	FourVectors::operator*(
			const FourVectors& b);  // 456
	FourVectors::length2(); // 461
	{
		fltx4 retVal; // 2350
		_mm_sqrt_ps(__m128 __A); // 2351
	}
	SqrtSIMD<>(const fltx4& a); // 2342
	SqrtEstSIMD<>(const fltx4& a); // 461
	FourVectors::length(); // 22
	{
		fltx4 retVal; // 718
		_mm_and_ps(__m128 __A,
				__m128 __B);  // 719
	}
	AndSIMD<>(const fltx4& a,
			const fltx4& b);  // 104
	{
		fltx4 retVal; // 1851
		_mm_cmpeq_ps(__m128 __A,
				__m128 __B);  // 1852
	}
	CmpEqSIMD<>(const fltx4& a,
			const fltx4& b);  // 103
	{
		fltx4 retVal; // 875
		_mm_or_ps(__m128 __A,
				__m128 __B);  // 876
	}
	OrSIMD<>(const fltx4& a,
		const fltx4& b);  // 104
	{
		fltx4 retVal; // 2418
		_mm_rcp_ps(__m128 __A); // 2419
	}
	ReciprocalEstSIMD<>(const fltx4& a); // 2462
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 2464
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 2464
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 2464
	{
		fltx4 retVal; // 1616
		_mm_sub_ps(__m128 __A,
				__m128 __B);  // 1617
	}
	SubSIMD<>(const fltx4& a,
			const fltx4& b);  // 2464
	ReciprocalSIMD<>(const fltx4& a); // 105
	ReciprocalSaturateSIMD(const fltx4& a); // 23
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 153
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 154
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 155
	FourVectors::operator*=(
			const fltx4& scale);  // 24
	FourVectors::FourVectors(); // 435
	RayTracingResult_t::RayTracingResult_t(); // 25
	RayTracingEnvironment::Trace4RaysInternal<CFilterTags, RayTracingResult_t>(
								const FourRays& rays,
								fltx4 fl4TMin,
								fltx4 fl4TMax,
								int nDirectionSignMask,
								RayTracingResult_t* pResultOut,
								CFilterTags filter,
								ITransparentTriangleCallback* pCallback,
								RTECullMode_t cullMode,
								const InstancedRayTracingEnvironmentReference_t* pInstance,
								const CRaytraceMaterialRemapTable* pMaterialRemap);  // 26
} /* size: 864, variables: 3, inline expansions: 29 (523 bytes) */

// <06328128> raytrace/tracefilter-templates.h:18
// variables: 23
// function calls: 46
void RayTracingEnvironment::FlushStreamEntry<CFilterSkipFlags>(CFilteredRayStream<CFilterSkipFlags>& s, int msk)
{
	fltx4 tmax; // 22
	fltx4 scl; // 23
	RayTracingResult_t tmpresult; // 25
	{
		int r; // 31
		{
			RayTracingSingleResult_t* out; // 33
			float flHitDistance; // 43
		}
	}
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 166
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 1684
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 1684
	MaddSIMD<>(const fltx4& a,
			const fltx4& b,
			const fltx4& c);  // 167
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 1684
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 1684
	MaddSIMD<>(const fltx4& a,
			const fltx4& b,
			const fltx4& c);  // 168
	FourVectors::operator*(
			const FourVectors& b);  // 456
	FourVectors::length2(); // 461
	{
		fltx4 retVal; // 2350
		_mm_sqrt_ps(__m128 __A); // 2351
	}
	SqrtSIMD<>(const fltx4& a); // 2342
	SqrtEstSIMD<>(const fltx4& a); // 461
	FourVectors::length(); // 22
	{
		fltx4 retVal; // 718
		_mm_and_ps(__m128 __A,
				__m128 __B);  // 719
	}
	AndSIMD<>(const fltx4& a,
			const fltx4& b);  // 104
	{
		fltx4 retVal; // 1851
		_mm_cmpeq_ps(__m128 __A,
				__m128 __B);  // 1852
	}
	CmpEqSIMD<>(const fltx4& a,
			const fltx4& b);  // 103
	{
		fltx4 retVal; // 875
		_mm_or_ps(__m128 __A,
				__m128 __B);  // 876
	}
	OrSIMD<>(const fltx4& a,
		const fltx4& b);  // 104
	{
		fltx4 retVal; // 2418
		_mm_rcp_ps(__m128 __A); // 2419
	}
	ReciprocalEstSIMD<>(const fltx4& a); // 2462
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 2464
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 2464
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 2464
	{
		fltx4 retVal; // 1616
		_mm_sub_ps(__m128 __A,
				__m128 __B);  // 1617
	}
	SubSIMD<>(const fltx4& a,
			const fltx4& b);  // 2464
	ReciprocalSIMD<>(const fltx4& a); // 105
	ReciprocalSaturateSIMD(const fltx4& a); // 23
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 153
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 154
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 155
	FourVectors::operator*=(
			const fltx4& scale);  // 24
	FourVectors::FourVectors(); // 435
	RayTracingResult_t::RayTracingResult_t(); // 25
	RayTracingEnvironment::Trace4RaysInternal<CFilterSkipFlags, RayTracingResult_t>(
								const FourRays& rays,
								fltx4 fl4TMin,
								fltx4 fl4TMax,
								int nDirectionSignMask,
								RayTracingResult_t* pResultOut,
								CFilterSkipFlags filter,
								ITransparentTriangleCallback* pCallback,
								RTECullMode_t cullMode,
								const InstancedRayTracingEnvironmentReference_t* pInstance,
								const CRaytraceMaterialRemapTable* pMaterialRemap);  // 26
} /* size: 0, variables: 3, inline expansions: 29 (0 bytes) */

// <06324E11> raytrace/tracefilter-templates.h:18
// variables: 23
// function calls: 47
void RayTracingEnvironment::FlushStreamEntry<CFilterNone>(CFilteredRayStream<CFilterNone>& s, int msk)
{
	fltx4 tmax; // 22
	fltx4 scl; // 23
	RayTracingResult_t tmpresult; // 25
	{
		int r; // 31
		{
			RayTracingSingleResult_t* out; // 33
			float flHitDistance; // 43
		}
	}
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 166
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 1684
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 1684
	MaddSIMD<>(const fltx4& a,
			const fltx4& b,
			const fltx4& c);  // 167
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 1684
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 1684
	MaddSIMD<>(const fltx4& a,
			const fltx4& b,
			const fltx4& c);  // 168
	FourVectors::operator*(
			const FourVectors& b);  // 456
	FourVectors::length2(); // 461
	{
		fltx4 retVal; // 2350
		_mm_sqrt_ps(__m128 __A); // 2351
	}
	SqrtSIMD<>(const fltx4& a); // 2342
	SqrtEstSIMD<>(const fltx4& a); // 461
	FourVectors::length(); // 22
	{
		fltx4 retVal; // 718
		_mm_and_ps(__m128 __A,
				__m128 __B);  // 719
	}
	AndSIMD<>(const fltx4& a,
			const fltx4& b);  // 104
	{
		fltx4 retVal; // 1851
		_mm_cmpeq_ps(__m128 __A,
				__m128 __B);  // 1852
	}
	CmpEqSIMD<>(const fltx4& a,
			const fltx4& b);  // 103
	{
		fltx4 retVal; // 875
		_mm_or_ps(__m128 __A,
				__m128 __B);  // 876
	}
	OrSIMD<>(const fltx4& a,
		const fltx4& b);  // 104
	{
		fltx4 retVal; // 2418
		_mm_rcp_ps(__m128 __A); // 2419
	}
	ReciprocalEstSIMD<>(const fltx4& a); // 2462
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 2464
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 2464
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 2464
	{
		fltx4 retVal; // 1616
		_mm_sub_ps(__m128 __A,
				__m128 __B);  // 1617
	}
	SubSIMD<>(const fltx4& a,
			const fltx4& b);  // 2464
	ReciprocalSIMD<>(const fltx4& a); // 105
	ReciprocalSaturateSIMD(const fltx4& a); // 23
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 153
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 154
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 155
	FourVectors::operator*=(
			const fltx4& scale);  // 24
	FourVectors::FourVectors(); // 435
	RayTracingResult_t::RayTracingResult_t(); // 25
	RayTracingEnvironment::Trace4RaysInternal<CFilterNone, RayTracingResult_t>(
								const FourRays& rays,
								fltx4 fl4TMin,
								fltx4 fl4TMax,
								int nDirectionSignMask,
								RayTracingResult_t* pResultOut,
								CFilterNone filter,
								ITransparentTriangleCallback* pCallback,
								RTECullMode_t cullMode,
								const InstancedRayTracingEnvironmentReference_t* pInstance,
								const CRaytraceMaterialRemapTable* pMaterialRemap);  // 897
	RayTracingEnvironment::Trace4RaysInternal<CFilterNone, RayTracingResult_t>(
								const FourRays& rays,
								fltx4 fl4TMin,
								fltx4 fl4TMax,
								int nDirectionSignMask,
								RayTracingResult_t* pResultOut,
								CFilterNone filter,
								ITransparentTriangleCallback* pCallback,
								RTECullMode_t cullMode,
								const InstancedRayTracingEnvironmentReference_t* pInstance,
								const CRaytraceMaterialRemapTable* pMaterialRemap);  // 26
} /* size: 0, variables: 3, inline expansions: 30 (0 bytes) */

// <0631D642> raytrace/tracefilter-templates.h:18
// variables: 23
// function calls: 46
void RayTracingEnvironment::FlushStreamEntry<CFilterSkipID>(CFilteredRayStream<CFilterSkipID>& s, int msk)
{
	fltx4 tmax; // 22
	fltx4 scl; // 23
	RayTracingResult_t tmpresult; // 25
	{
		int r; // 31
		{
			RayTracingSingleResult_t* out; // 33
			float flHitDistance; // 43
		}
	}
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 166
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 1684
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 1684
	MaddSIMD<>(const fltx4& a,
			const fltx4& b,
			const fltx4& c);  // 167
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 1684
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 1684
	MaddSIMD<>(const fltx4& a,
			const fltx4& b,
			const fltx4& c);  // 168
	FourVectors::operator*(
			const FourVectors& b);  // 456
	FourVectors::length2(); // 461
	{
		fltx4 retVal; // 2350
		_mm_sqrt_ps(__m128 __A); // 2351
	}
	SqrtSIMD<>(const fltx4& a); // 2342
	SqrtEstSIMD<>(const fltx4& a); // 461
	FourVectors::length(); // 22
	{
		fltx4 retVal; // 718
		_mm_and_ps(__m128 __A,
				__m128 __B);  // 719
	}
	AndSIMD<>(const fltx4& a,
			const fltx4& b);  // 104
	{
		fltx4 retVal; // 1851
		_mm_cmpeq_ps(__m128 __A,
				__m128 __B);  // 1852
	}
	CmpEqSIMD<>(const fltx4& a,
			const fltx4& b);  // 103
	{
		fltx4 retVal; // 875
		_mm_or_ps(__m128 __A,
				__m128 __B);  // 876
	}
	OrSIMD<>(const fltx4& a,
		const fltx4& b);  // 104
	{
		fltx4 retVal; // 2418
		_mm_rcp_ps(__m128 __A); // 2419
	}
	ReciprocalEstSIMD<>(const fltx4& a); // 2462
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 2464
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 2464
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 2464
	{
		fltx4 retVal; // 1616
		_mm_sub_ps(__m128 __A,
				__m128 __B);  // 1617
	}
	SubSIMD<>(const fltx4& a,
			const fltx4& b);  // 2464
	ReciprocalSIMD<>(const fltx4& a); // 105
	ReciprocalSaturateSIMD(const fltx4& a); // 23
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 153
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 154
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 155
	FourVectors::operator*=(
			const fltx4& scale);  // 24
	FourVectors::FourVectors(); // 435
	RayTracingResult_t::RayTracingResult_t(); // 25
	RayTracingEnvironment::Trace4RaysInternal<CFilterSkipID, RayTracingResult_t>(
								const FourRays& rays,
								fltx4 fl4TMin,
								fltx4 fl4TMax,
								int nDirectionSignMask,
								RayTracingResult_t* pResultOut,
								CFilterSkipID filter,
								ITransparentTriangleCallback* pCallback,
								RTECullMode_t cullMode,
								const InstancedRayTracingEnvironmentReference_t* pInstance,
								const CRaytraceMaterialRemapTable* pMaterialRemap);  // 26
} /* size: 0, variables: 3, inline expansions: 29 (0 bytes) */

// <0631A3EA> raytrace/tracefilter-templates.h:18
// variables: 23
// function calls: 46
void RayTracingEnvironment::FlushStreamEntry<CFilterRequireFlags>(CFilteredRayStream<CFilterRequireFlags>& s, int msk)
{
	fltx4 tmax; // 22
	fltx4 scl; // 23
	RayTracingResult_t tmpresult; // 25
	{
		int r; // 31
		{
			RayTracingSingleResult_t* out; // 33
			float flHitDistance; // 43
		}
	}
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 166
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 1684
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 1684
	MaddSIMD<>(const fltx4& a,
			const fltx4& b,
			const fltx4& c);  // 167
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 1684
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 1684
	MaddSIMD<>(const fltx4& a,
			const fltx4& b,
			const fltx4& c);  // 168
	FourVectors::operator*(
			const FourVectors& b);  // 456
	FourVectors::length2(); // 461
	{
		fltx4 retVal; // 2350
		_mm_sqrt_ps(__m128 __A); // 2351
	}
	SqrtSIMD<>(const fltx4& a); // 2342
	SqrtEstSIMD<>(const fltx4& a); // 461
	FourVectors::length(); // 22
	{
		fltx4 retVal; // 718
		_mm_and_ps(__m128 __A,
				__m128 __B);  // 719
	}
	AndSIMD<>(const fltx4& a,
			const fltx4& b);  // 104
	{
		fltx4 retVal; // 1851
		_mm_cmpeq_ps(__m128 __A,
				__m128 __B);  // 1852
	}
	CmpEqSIMD<>(const fltx4& a,
			const fltx4& b);  // 103
	{
		fltx4 retVal; // 875
		_mm_or_ps(__m128 __A,
				__m128 __B);  // 876
	}
	OrSIMD<>(const fltx4& a,
		const fltx4& b);  // 104
	{
		fltx4 retVal; // 2418
		_mm_rcp_ps(__m128 __A); // 2419
	}
	ReciprocalEstSIMD<>(const fltx4& a); // 2462
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 2464
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 2464
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 2464
	{
		fltx4 retVal; // 1616
		_mm_sub_ps(__m128 __A,
				__m128 __B);  // 1617
	}
	SubSIMD<>(const fltx4& a,
			const fltx4& b);  // 2464
	ReciprocalSIMD<>(const fltx4& a); // 105
	ReciprocalSaturateSIMD(const fltx4& a); // 23
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 153
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 154
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 155
	FourVectors::operator*=(
			const fltx4& scale);  // 24
	FourVectors::FourVectors(); // 435
	RayTracingResult_t::RayTracingResult_t(); // 25
	RayTracingEnvironment::Trace4RaysInternal<CFilterRequireFlags, RayTracingResult_t>(
									const FourRays& rays,
									fltx4 fl4TMin,
									fltx4 fl4TMax,
									int nDirectionSignMask,
									RayTracingResult_t* pResultOut,
									CFilterRequireFlags filter,
									ITransparentTriangleCallback* pCallback,
									RTECullMode_t cullMode,
									const InstancedRayTracingEnvironmentReference_t* pInstance,
									const CRaytraceMaterialRemapTable* pMaterialRemap);  // 26
} /* size: 0, variables: 3, inline expansions: 29 (0 bytes) */

// <0632AF26> raytrace/tracefilter-templates.h:55
// variables: 3
// function calls: 14
void RayTracingEnvironment::AddToRayStream<CFilterTags>(CFilteredRayStream<CFilterTags>& s, const Vector& start, const Vector& end, RayTracingSingleResult_t* rslt_out)
{
	Vector delta; // 57
	int msk; // 59
	int pos; // 62
	Vector::operator-=(
			const Vector& v);  // 58
	GetSignMask(const Vector& v); // 59
	SubFloat<>(fltx4& a,
			int idx);  // 273
	FourVectors::X(
		int idx);  // 64
	SubFloat<>(fltx4& a,
			int idx);  // 278
	FourVectors::Y(
		int idx);  // 65
	SubFloat<>(fltx4& a,
			int idx);  // 283
	FourVectors::Z(
		int idx);  // 66
	SubFloat<>(fltx4& a,
			int idx);  // 273
	FourVectors::X(
		int idx);  // 67
	SubFloat<>(fltx4& a,
			int idx);  // 278
	FourVectors::Y(
		int idx);  // 68
	SubFloat<>(fltx4& a,
			int idx);  // 283
	FourVectors::Z(
		int idx);  // 69
} /* size: 224, variables: 3, inline expansions: 14 (76 bytes) */

// <063249C5> raytrace/tracefilter-templates.h:55
// variables: 3
// function calls: 14
void RayTracingEnvironment::AddToRayStream<CFilterNone>(CFilteredRayStream<CFilterNone>& s, const Vector& start, const Vector& end, RayTracingSingleResult_t* rslt_out)
{
	Vector delta; // 57
	int msk; // 59
	int pos; // 62
	Vector::operator-=(
			const Vector& v);  // 58
	GetSignMask(const Vector& v); // 59
	SubFloat<>(fltx4& a,
			int idx);  // 273
	FourVectors::X(
		int idx);  // 64
	SubFloat<>(fltx4& a,
			int idx);  // 278
	FourVectors::Y(
		int idx);  // 65
	SubFloat<>(fltx4& a,
			int idx);  // 283
	FourVectors::Z(
		int idx);  // 66
	SubFloat<>(fltx4& a,
			int idx);  // 273
	FourVectors::X(
		int idx);  // 67
	SubFloat<>(fltx4& a,
			int idx);  // 278
	FourVectors::Y(
		int idx);  // 68
	SubFloat<>(fltx4& a,
			int idx);  // 283
	FourVectors::Z(
		int idx);  // 69
} /* size: 0, variables: 3, inline expansions: 14 (0 bytes) */

// <0631D1F6> raytrace/tracefilter-templates.h:55
// variables: 3
// function calls: 14
void RayTracingEnvironment::AddToRayStream<CFilterSkipID>(CFilteredRayStream<CFilterSkipID>& s, const Vector& start, const Vector& end, RayTracingSingleResult_t* rslt_out)
{
	Vector delta; // 57
	int msk; // 59
	int pos; // 62
	Vector::operator-=(
			const Vector& v);  // 58
	GetSignMask(const Vector& v); // 59
	SubFloat<>(fltx4& a,
			int idx);  // 273
	FourVectors::X(
		int idx);  // 64
	SubFloat<>(fltx4& a,
			int idx);  // 278
	FourVectors::Y(
		int idx);  // 65
	SubFloat<>(fltx4& a,
			int idx);  // 283
	FourVectors::Z(
		int idx);  // 66
	SubFloat<>(fltx4& a,
			int idx);  // 273
	FourVectors::X(
		int idx);  // 67
	SubFloat<>(fltx4& a,
			int idx);  // 278
	FourVectors::Y(
		int idx);  // 68
	SubFloat<>(fltx4& a,
			int idx);  // 283
	FourVectors::Z(
		int idx);  // 69
} /* size: 0, variables: 3, inline expansions: 14 (0 bytes) */

// <06319F9E> raytrace/tracefilter-templates.h:55
// variables: 3
// function calls: 14
void RayTracingEnvironment::AddToRayStream<CFilterRequireFlags>(CFilteredRayStream<CFilterRequireFlags>& s, const Vector& start, const Vector& end, RayTracingSingleResult_t* rslt_out)
{
	Vector delta; // 57
	int msk; // 59
	int pos; // 62
	Vector::operator-=(
			const Vector& v);  // 58
	GetSignMask(const Vector& v); // 59
	SubFloat<>(fltx4& a,
			int idx);  // 273
	FourVectors::X(
		int idx);  // 64
	SubFloat<>(fltx4& a,
			int idx);  // 278
	FourVectors::Y(
		int idx);  // 65
	SubFloat<>(fltx4& a,
			int idx);  // 283
	FourVectors::Z(
		int idx);  // 66
	SubFloat<>(fltx4& a,
			int idx);  // 273
	FourVectors::X(
		int idx);  // 67
	SubFloat<>(fltx4& a,
			int idx);  // 278
	FourVectors::Y(
		int idx);  // 68
	SubFloat<>(fltx4& a,
			int idx);  // 283
	FourVectors::Z(
		int idx);  // 69
} /* size: 0, variables: 3, inline expansions: 14 (0 bytes) */

// <02F4C7F1> raytrace/tracefilter-templates.h:55
// variables: 3
// function calls: 14
void RayTracingEnvironment::AddToRayStream<CFilterSkipFlags>(CFilteredRayStream<CFilterSkipFlags>& s, const Vector& start, const Vector& end, RayTracingSingleResult_t* rslt_out)
{
	Vector delta; // 57
	int msk; // 59
	int pos; // 62
	Vector::operator-=(
			const Vector& v);  // 58
	GetSignMask(const Vector& v); // 59
	SubFloat<>(fltx4& a,
			int idx);  // 273
	FourVectors::X(
		int idx);  // 64
	SubFloat<>(fltx4& a,
			int idx);  // 278
	FourVectors::Y(
		int idx);  // 65
	SubFloat<>(fltx4& a,
			int idx);  // 283
	FourVectors::Z(
		int idx);  // 66
	SubFloat<>(fltx4& a,
			int idx);  // 273
	FourVectors::X(
		int idx);  // 67
	SubFloat<>(fltx4& a,
			int idx);  // 278
	FourVectors::Y(
		int idx);  // 68
	SubFloat<>(fltx4& a,
			int idx);  // 283
	FourVectors::Z(
		int idx);  // 69
} /* size: 0, variables: 3, inline expansions: 14 (0 bytes) */

// <0632AD3D> raytrace/tracefilter-templates.h:80
// variables: 3
// function calls: 6
void RayTracingEnvironment::FinishRayStream<CFilterTags>(CFilteredRayStream<CFilterTags>& s)
{
	{
		int msk; // 82
		{
			int cnt; // 84
			{
				int c; // 88
				FourVectors::Y(
					int idx);  // 91
				FourVectors::Z(
					int idx);  // 92
				FourVectors::X(
					int idx);  // 93
				FourVectors::Y(
					int idx);  // 94
				FourVectors::Z(
					int idx);  // 95
				FourVectors::X(
					int idx);  // 90
			}
		}
	}
} /* size: 239 */

// <063247DC> raytrace/tracefilter-templates.h:80
// variables: 3
// function calls: 6
void RayTracingEnvironment::FinishRayStream<CFilterNone>(CFilteredRayStream<CFilterNone>& s)
{
	{
		int msk; // 82
		{
			int cnt; // 84
			{
				int c; // 88
				FourVectors::Y(
					int idx);  // 91
				FourVectors::Z(
					int idx);  // 92
				FourVectors::X(
					int idx);  // 93
				FourVectors::Y(
					int idx);  // 94
				FourVectors::Z(
					int idx);  // 95
				FourVectors::X(
					int idx);  // 90
			}
		}
	}
} /* size: 0 */

// <0631D00D> raytrace/tracefilter-templates.h:80
// variables: 3
// function calls: 6
void RayTracingEnvironment::FinishRayStream<CFilterSkipID>(CFilteredRayStream<CFilterSkipID>& s)
{
	{
		int msk; // 82
		{
			int cnt; // 84
			{
				int c; // 88
				FourVectors::Y(
					int idx);  // 91
				FourVectors::Z(
					int idx);  // 92
				FourVectors::X(
					int idx);  // 93
				FourVectors::Y(
					int idx);  // 94
				FourVectors::Z(
					int idx);  // 95
				FourVectors::X(
					int idx);  // 90
			}
		}
	}
} /* size: 0 */

// <06319DB5> raytrace/tracefilter-templates.h:80
// variables: 3
// function calls: 6
void RayTracingEnvironment::FinishRayStream<CFilterRequireFlags>(CFilteredRayStream<CFilterRequireFlags>& s)
{
	{
		int msk; // 82
		{
			int cnt; // 84
			{
				int c; // 88
				FourVectors::Y(
					int idx);  // 91
				FourVectors::Z(
					int idx);  // 92
				FourVectors::X(
					int idx);  // 93
				FourVectors::Y(
					int idx);  // 94
				FourVectors::Z(
					int idx);  // 95
				FourVectors::X(
					int idx);  // 90
			}
		}
	}
} /* size: 0 */

// <02F4C608> raytrace/tracefilter-templates.h:80
// variables: 3
// function calls: 6
void RayTracingEnvironment::FinishRayStream<CFilterSkipFlags>(CFilteredRayStream<CFilterSkipFlags>& s)
{
	{
		int msk; // 82
		{
			int cnt; // 84
			{
				int c; // 88
				FourVectors::Y(
					int idx);  // 91
				FourVectors::Z(
					int idx);  // 92
				FourVectors::X(
					int idx);  // 93
				FourVectors::Y(
					int idx);  // 94
				FourVectors::Z(
					int idx);  // 95
				FourVectors::X(
					int idx);  // 90
			}
		}
	}
} /* size: 0 */

