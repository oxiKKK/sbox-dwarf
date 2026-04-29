
//
// public/scenesystem/envmapsceneobject.h
//
//	referenced by: libengine2.so
//
//	functions: 12
//	class: 1
//

// <0306C590> ../public/scenesystem/envmapsceneobject.h:22
void CEnvMapSceneObject::CEnvMapSceneObject()
{
} /* size: 0 */

// <0306C574> ../public/scenesystem/envmapsceneobject.h:22
inline void CEnvMapSceneObject::CEnvMapSceneObject()
{
} /* size: 0 */

// <0306A213> ../public/scenesystem/envmapsceneobject.h:22
// function calls: 24
void CEnvMapSceneObject::~CEnvMapSceneObject()
{
	CStrongHandle<InfoForResourceTypeCTextureBase>::~CStrongHandle(); // 22
	CStrongHandle<InfoForResourceTypeCTextureBase>::~CStrongHandle(); // 211
	CStrongHandleCopyable<InfoForResourceTypeCTextureBase>::~CStrongHandleCopyable(); // 76
	LightDesc_t::~LightDesc_t(); // 2603
	CManagedHandle::~CManagedHandle(); // 1436
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::RemoveAll(); // 1798
	CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 577
	CUtlMemory<unsigned int, int>::ConvertToExternalMemory(
				unsigned int* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<unsigned int, int>::Purge_FixedGrowable(
				unsigned int* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<unsigned int, int>::Purge_FixedGrowable(
				unsigned int* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<3, unsigned int, 4>::Base(); // 237
	CUtlMemoryFixedGrowable<unsigned int, 3, int>::Purge(
		int numElements);  // 1799
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::Purge(); // 560
	ValidateAlignment<unsigned int>(void); // 508
	CUtlMemory<unsigned int, int>::Purge(); // 903
	CUtlMemory<unsigned int, int>::Purge(); // 510
	CUtlMemory<unsigned int, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<unsigned int, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<unsigned int, 3, int>::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<unsigned int, 3>::~CUtlVectorFixedGrowable(); // 1436
	CSceneObject::~CSceneObject(); // 2603
	CSceneLightObject::~CSceneLightObject(); // 22
} /* size: 217, inline expansions: 24 (886 bytes) */

// <03069CBF> ../public/scenesystem/envmapsceneobject.h:22
// function calls: 26
void CEnvMapSceneObject::~CEnvMapSceneObject()
{
	CStrongHandle<InfoForResourceTypeCTextureBase>::~CStrongHandle(); // 22
	CStrongHandle<InfoForResourceTypeCTextureBase>::~CStrongHandle(); // 211
	CStrongHandleCopyable<InfoForResourceTypeCTextureBase>::~CStrongHandleCopyable(); // 76
	LightDesc_t::~LightDesc_t(); // 2603
	CManagedHandle::~CManagedHandle(); // 1436
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::RemoveAll(); // 1798
	CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 577
	CUtlMemory<unsigned int, int>::ConvertToExternalMemory(
				unsigned int* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<unsigned int, int>::Purge_FixedGrowable(
				unsigned int* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<unsigned int, int>::Purge_FixedGrowable(
				unsigned int* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<3, unsigned int, 4>::Base(); // 237
	CUtlMemoryFixedGrowable<unsigned int, 3, int>::Purge(
		int numElements);  // 1799
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::Purge(); // 560
	ValidateAlignment<unsigned int>(void); // 508
	CUtlMemory<unsigned int, int>::Purge(); // 903
	CUtlMemory<unsigned int, int>::Purge(); // 510
	CUtlMemory<unsigned int, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<unsigned int, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<unsigned int, 3, int>::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<unsigned int, 3>::~CUtlVectorFixedGrowable(); // 1436
	IGenericInterface::~IGenericInterface(); // 1436
	CSceneObject::~CSceneObject(); // 2603
	CSceneLightObject::~CSceneLightObject(); // 22
	CEnvMapSceneObject::~CEnvMapSceneObject(); // 22
} /* size: 225, inline expansions: 26 (1041 bytes) */

// <03069CA3> ../public/scenesystem/envmapsceneobject.h:22
inline void CEnvMapSceneObject::~CEnvMapSceneObject()
{
} /* size: 0 */

// <0304B554> ../public/scenesystem/envmapsceneobject.h:22
// member functions: 22
// member variables: 10
// vtable entry: 1
// class size: 672
class CEnvMapSceneObject : public CSceneLightObject {
public:
	/* class CSceneLightObject <ancestor>; */ /* 0 496 */
	void CEnvMapSceneObject(CEnvMapSceneObject* , CEnvMapSceneObject& );
	void CEnvMapSceneObject(CEnvMapSceneObject* , const CEnvMapSceneObject& );
	void CEnvMapSceneObject(CEnvMapSceneObject* );
	CubemapProjectionMode_t m_nProjectionMode; /* 488 4 */
	Vector m_vBoxProjectMins; /* 492 12 */
	Vector m_vBoxProjectMaxs; /* 504 12 */
	Vector m_vColor; /* 516 12 */
	int m_nRenderPriority; /* 528 4 */
	HRenderTextureStrong m_hEnvMapTexture; /* 536 8 */
	Vector4D m_vNormalizationSH; /* 544 16 */
	SphericalHarmonicRGBFn_t<3> m_RadianceSH; /* 560 108 */
	float m_flFeathering; /* 668 4 */
	/* ../public/scenesystem/envmapsceneobject.h:36 */
	virtual void InitManagedHandle(CEnvMapSceneObject* );
	/* ../public/scenesystem/envmapsceneobject.h:41 */
	void CalculateRadianceSH(CEnvMapSceneObject* );
	/* ../public/scenesystem/envmapsceneobject.h:64 */
	Vector Cube2Direction(int, float, float);
	/* ../public/scenesystem/envmapsceneobject.h:109 */
	float CubemapPixelSolidAngle(Vector, float);
	/* ../public/scenesystem/envmapsceneobject.h:117 */
	void CalculateRadianceSH(CEnvMapSceneObject* , HRenderTexture);
	/* ../public/scenesystem/envmapsceneobject.h:160 */
	void CalculateBounds(CEnvMapSceneObject* );
	/* ../public/scenesystem/envmapsceneobject.h:169 */
	void CalculateNormalizationSH(CEnvMapSceneObject* );
	virtual void ~CEnvMapSceneObject(CEnvMapSceneObject* );
	void CalculateNormalizationSH(class CEnvMapSceneObject *); /* linkage=_ZN18CEnvMapSceneObject24CalculateNormalizationSHEv */
	void CalculateBounds(class CEnvMapSceneObject *); /* linkage=_ZN18CEnvMapSceneObject15CalculateBoundsEv */
	void CalculateRadianceSH(class CEnvMapSceneObject *, HRenderTexture); /* linkage=_ZN18CEnvMapSceneObject19CalculateRadianceSHE11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	float CubemapPixelSolidAngle(class Vector, float); /* linkage=_ZN18CEnvMapSceneObject22CubemapPixelSolidAngleE6Vectorf */
	class Vector Cube2Direction(int, float, float); /* linkage=_ZN18CEnvMapSceneObject14Cube2DirectionEiff */
	void CalculateRadianceSH(class CEnvMapSceneObject *); /* linkage=_ZN18CEnvMapSceneObject19CalculateRadianceSHEv */
	void CEnvMapSceneObject(class CEnvMapSceneObject *, class CEnvMapSceneObject &); /* linkage=_ZN18CEnvMapSceneObjectC4EOS_ */
	void CEnvMapSceneObject(class CEnvMapSceneObject *, const class CEnvMapSceneObject  &); /* linkage=_ZN18CEnvMapSceneObjectC4ERKS_ */
	void CEnvMapSceneObject(class CEnvMapSceneObject *); /* linkage=_ZN18CEnvMapSceneObjectC4Ev */
	virtual void InitManagedHandle(class CEnvMapSceneObject *); /* linkage=_ZN18CEnvMapSceneObject17InitManagedHandleEv */
	virtual void ~CEnvMapSceneObject(class CEnvMapSceneObject *); /* linkage=_ZN18CEnvMapSceneObjectD4Ev */
} __attribute__((__aligned__(16)));

// <03072BAD> ../public/scenesystem/envmapsceneobject.h:36
void CEnvMapSceneObject::InitManagedHandle()
{
} /* size: 96 */

// <01336C7E> ../public/scenesystem/envmapsceneobject.h:41
// variables: 7
// function calls: 46
void CEnvMapSceneObject::CalculateRadianceSH()
{
	const char   __FUNCTION__; // 47019
	{
		CUtlVectorFixedGrowableCompat<float, 9> cubemapRadianceSH; // 52
		const int  nArrayIndex; // 54
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 57
		}
		CUtlMemory<float, int>::CUtlMemory(
				float* pMemory,
				int numElements,
				bool bGrowable,
				uint32 nGrowable_GrowSize);  // 535
		CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 538
		CUtlVectorBase<float, CUtlMemory<float, int> >::CUtlVectorBase(
				float* pMemory,
				int allocationCount,
				int initialCount,
				bool bGrowable);  // 420
		CUtlVector<float, CUtlMemory<float, int> >::CUtlVector(
				float* pMemory,
				int allocationCount,
				int initialCount,
				bool bGrowable);  // 495
		AlignedByteArrayExplicit_t<9, float, 4>::AlignedByteArrayExplicit_t(); // 1597
		AlignedByteArray_t<9, float>::AlignedByteArray_t(); // 495
		AlignedByteArrayExplicit_t<9, float, 4>::Base(); // 497
		CUtlVectorFixedGrowableCompat<float, 9>::CUtlVectorFixedGrowableCompat(
						int growSize);  // 52
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
					ResourceHandle_t hUntypedResource);  // 227
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
		CStrongHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>(); // 55
		CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 57
		CUtlMemory<float, int>::Base(); // 112
		CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 59
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 152
		SphericalHarmonicFn_t<3>::Unserialize(
				const float* pCoeffs);  // 341
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 152
		SphericalHarmonicFn_t<3>::Unserialize(
				const float* pCoeffs);  // 342
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 152
		SphericalHarmonicFn_t<3>::Unserialize(
				const float* pCoeffs);  // 343
		SphericalHarmonicRGBFn_t<3>::Unserialize(
				const float* pCoeffs);  // 59
		CUtlVectorBase<float, CUtlMemory<float, int> >::RemoveAll(); // 1798
		CUtlMemory<float, int>::IsExternallyAllocated(); // 905
		CUtlMemory<float, int>::Purge(); // 903
		CUtlMemory<float, int>::Purge(); // 1799
		CUtlVectorBase<float, CUtlMemory<float, int> >::Purge(); // 560
		ValidateAlignment<float>(void); // 508
		CUtlMemory<float, int>::Purge(); // 510
		CUtlMemory<float, int>::~CUtlMemory(); // 562
		CUtlVectorBase<float, CUtlMemory<float, int> >::~CUtlVectorBase(); // 410
		CUtlVector<float, CUtlMemory<float, int> >::~CUtlVector(); // 489
		CUtlVectorFixedGrowableCompat<float, 9>::~CUtlVectorFixedGrowableCompat(); // 61
	}
	CStrongHandle<InfoForResourceTypeCTextureBase>::HasHandle(); // 45
	{
		int i; // 138
	}
	SphericalHarmonicFn_t<3>::Zero(); // 324
	{
		int i; // 138
	}
	SphericalHarmonicFn_t<3>::Zero(); // 325
	{
		int i; // 138
	}
	SphericalHarmonicFn_t<3>::Zero(); // 326
	SphericalHarmonicRGBFn_t<3>::Zero(); // 43
	CStrongHandle<InfoForResourceTypeCTextureBase>::IsError(); // 45
	CStrongHandle<InfoForResourceTypeCTextureBase>::HasHandle(); // 50
	CStrongHandle<InfoForResourceTypeCTextureBase>::IsError(); // 50
	CWeakHandle<InfoForResourceTypeCTextureBase>::GetBinding(); // 673
	CStrongHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 47
} /* size: 673, variables: 1, inline expansions: 10 (382 bytes) */

// <01336C43> ../public/scenesystem/envmapsceneobject.h:64
// variable: 1
inline void Cube2Direction(int nFaceEWNSUD, float flU, float flV)
{
	Vector vDir; // 66
} /* size: 0, variables: 1 */

// <01336BFC> ../public/scenesystem/envmapsceneobject.h:109
// variables: 3
inline void CubemapPixelSolidAngle(Vector vDirection, float flCubemapPixelArea)
{
	float flLargestComponentValue; // 111
	float flDot; // 112
	float flOoRSqr; // 113
} /* size: 0, variables: 3 */

// <01336064> ../public/scenesystem/envmapsceneobject.h:117
// variables: 42
// function calls: 33
void CEnvMapSceneObject::CalculateRadianceSH(HRenderTexture hTexture)
{
	const CTextureDesc* pDestDesc; // 121
	int nFaceSize; // 122
	int nSize; // 123
	uint8* pBytes; // 124
	float flWtSum; // 126
	{
		int nFace; // 127
		{
			float flPixelArea; // 131
			{
				int r; // 132
				{
					int c; // 134
					{
						int pixelOffset; // 136
						float16* halfData; // 137
						Vector vRadiance; // 138
						Vector vDir; // 143
						float flSolidAngle; // 144
						SphericalHarmonicFn_t<3> fn; // 146
						Vector::Vector(); // 138
						IsInfinity(union float16bits in); // 631
						{
							const float  half_denorm; // 642
							float mantissa; // 643
							float sgn; // 644
						}
						{
							unsigned int mantissa; // 650
							unsigned int biased_exponent; // 651
							unsigned int sign; // 652
						}
						Convert16bitFloatTo32bits(short unsigned int input); // 477
						float16::GetFloat(); // 139
						IsInfinity(union float16bits in); // 631
						{
							const float  half_denorm; // 642
							float mantissa; // 643
							float sgn; // 644
						}
						{
							unsigned int mantissa; // 650
							unsigned int biased_exponent; // 651
							unsigned int sign; // 652
						}
						Convert16bitFloatTo32bits(short unsigned int input); // 477
						float16::GetFloat(); // 140
						IsInfinity(union float16bits in); // 631
						{
							const float  half_denorm; // 642
							float mantissa; // 643
							float sgn; // 644
						}
						{
							unsigned int mantissa; // 650
							unsigned int biased_exponent; // 651
							unsigned int sign; // 652
						}
						Convert16bitFloatTo32bits(short unsigned int input); // 477
						float16::GetFloat(); // 141
						Vector::Vector(
							vec_t X,
							vec_t Y,
							vec_t Z);  // 66
						Vector::Normalized(); // 106
						Cube2Direction(int nFaceEWNSUD,
								float flU,
								float flV);  // 143
						Vector::LargestComponentValue(); // 111
						CubemapPixelSolidAngle(Vector vDirection,
									float flCubemapPixelArea);  // 144
						SphericalHarmonicFn_t<3>::Init(
							const Vector& vDirection);  // 94
						SphericalHarmonicFn_t<3>::SphericalHarmonicFn_t(
									const Vector& vDirection);  // 146
						{
							int i; // 229
						}
						SHMulAdd<3>(const SphericalHarmonicFn_t<3>& a,
								const SphericalHarmonicFn_t<3>& b,
								float flScale,
								SphericalHarmonicFn_t<3>& result);  // 147
						{
							int i; // 229
						}
						SHMulAdd<3>(const SphericalHarmonicFn_t<3>& a,
								const SphericalHarmonicFn_t<3>& b,
								float flScale,
								SphericalHarmonicFn_t<3>& result);  // 148
						{
							int i; // 229
						}
						SHMulAdd<3>(const SphericalHarmonicFn_t<3>& a,
								const SphericalHarmonicFn_t<3>& b,
								float flScale,
								SphericalHarmonicFn_t<3>& result);  // 149
					}
				}
			}
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 129
		}
	}
	{
		int i; // 138
	}
	SphericalHarmonicFn_t<3>::Zero(); // 324
	{
		int i; // 138
	}
	SphericalHarmonicFn_t<3>::Zero(); // 325
	{
		int i; // 138
	}
	SphericalHarmonicFn_t<3>::Zero(); // 326
	SphericalHarmonicRGBFn_t<3>::Zero(); // 119
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 121
	GetMemRequired(int width,
			int height,
			int depth,
			ImageFormat imageFormat,
			bool mipmap,
			int* pAdjustedHeight);  // 123
	{
		int i; // 204
	}
	SHScale<3>(const SphericalHarmonicFn_t<3>& a,
			float flScale,
			SphericalHarmonicFn_t<3>& result);  // 378
	{
		int i; // 204
	}
	SHScale<3>(const SphericalHarmonicFn_t<3>& a,
			float flScale,
			SphericalHarmonicFn_t<3>& result);  // 379
	{
		int i; // 204
	}
	SHScale<3>(const SphericalHarmonicFn_t<3>& a,
			float flScale,
			SphericalHarmonicFn_t<3>& result);  // 380
	SHScale<3>(const SphericalHarmonicRGBFn_t<3>& a,
			float flScale,
			SphericalHarmonicRGBFn_t<3>& result);  // 155
} /* size: 2530, variables: 5, inline expansions: 11 (997 bytes) */

// <01336027> ../public/scenesystem/envmapsceneobject.h:160
// variables: 3
inline void CEnvMapSceneObject::CalculateBounds()
{
	const matrix3x4_t& mTransform; // 162
	AABB_t worldBounds; // 163
	AABB_t localBounds; // 164
} /* size: 0, variables: 3 */

// <01335A48> ../public/scenesystem/envmapsceneobject.h:169
// variables: 13
// function calls: 22
void CEnvMapSceneObject::CalculateNormalizationSH()
{
	const matrix3x4_t& mTransform; // 171
	SphericalHarmonicFn_t<2> lum; // 173
	{
		float flMaxL1; // 191
		float flCurrentL1; // 192
		_mm_load_ss(const float* __P); // 21
		_mm_sqrt_ss(__m128 __A); // 21
		_mm_cvtss_f32(__m128 __A); // 21
		FastSqrt(float x); // 659
		Vector4DLength(const Vector4D& v); // 670
		Vector4D::Length(); // 192
		Vector::operator*=(
				float fl);  // 195
	}
	{
		int i; // 229
	}
	SHMulAdd<2>(const SphericalHarmonicFn_t<2>& a,
			const SphericalHarmonicFn_t<2>& b,
			float flScale,
			SphericalHarmonicFn_t<2>& result);  // 175
	CSceneObject::GetTransform(); // 171
	VectorRotate(const Vector& in1,
			const matrix3x4_t& in2,
			Vector& out);  // 1315
	Vector::Vector(); // 1314
	VectorRotate(const Vector& in1,
			const matrix3x4_t& in2);  // 182
	SphericalHarmonicFn_t<2>::SphericalHarmonicFn_t(); // 173
	{
		int nInCommon; // 100
		{
			int i; // 102
		}
	}
	SphericalHarmonicFn_t<2>::SphericalHarmonicFn_t<3>(
				const SphericalHarmonicFn_t<3>& other);  // 175
	{
		int nInCommon; // 100
		{
			int i; // 102
		}
	}
	SphericalHarmonicFn_t<2>::SphericalHarmonicFn_t<3>(
				const SphericalHarmonicFn_t<3>& other);  // 176
	{
		int i; // 229
	}
	SHMulAdd<2>(const SphericalHarmonicFn_t<2>& a,
			const SphericalHarmonicFn_t<2>& b,
			float flScale,
			SphericalHarmonicFn_t<2>& result);  // 176
	{
		int nInCommon; // 100
		{
			int i; // 102
		}
	}
	SphericalHarmonicFn_t<2>::SphericalHarmonicFn_t<3>(
				const SphericalHarmonicFn_t<3>& other);  // 177
	{
		int i; // 229
	}
	SHMulAdd<2>(const SphericalHarmonicFn_t<2>& a,
			const SphericalHarmonicFn_t<2>& b,
			float flScale,
			SphericalHarmonicFn_t<2>& result);  // 177
	Vector4D::Vector4D(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 301
	SHRadianceToIrradianceEvalConstants(const SphericalHarmonicFn_t<2>& shIrradiance); // 178
	Vector4D::operator=(
			const Vector4D& vOther);  // 178
	Vector4D::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz,
		vec_t iw);  // 200
} /* size: 357, variables: 2, inline expansions: 15 (117 bytes) */

