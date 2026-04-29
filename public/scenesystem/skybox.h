
//
// public/scenesystem/skybox.h
//
//	referenced by: libengine2.so
//
//	functions: 22
//	classes: 3
//

// <00123815> ../public/scenesystem/skybox.h:19
// member functions: 6
// member variables: 3
// class size: 48
class CSceneSkyBoxLightQuery : public CRefCounted<CRefCountServiceBase<true, CRefMT> > {
public:
	/* class CRefCounted<CRefCountServiceBase<true, CRefMT> > <ancestor>; */ /* 0 16 */
	void CSceneSkyBoxLightQuery(CSceneSkyBoxLightQuery* , const CSceneSkyBoxLightQuery& );
	/* ../public/scenesystem/skybox.h:23 */
	void CSceneSkyBoxLightQuery(CSceneSkyBoxLightQuery* );
	/* ../public/scenesystem/skybox.h:24 */
	virtual void ~CSceneSkyBoxLightQuery(CSceneSkyBoxLightQuery* );
	CThreadSyncValue<bool> m_bReady; /* 12 1 */
	CUtlVector<Vector, CUtlMemory<Vector, int> > m_PrtSkyLightSamples; /* 16 32 */
	void CSceneSkyBoxLightQuery(class CSceneSkyBoxLightQuery *, const class CSceneSkyBoxLightQuery  &); /* linkage=_ZN22CSceneSkyBoxLightQueryC4ERKS_ */
	void CSceneSkyBoxLightQuery(class CSceneSkyBoxLightQuery *); /* linkage=_ZN22CSceneSkyBoxLightQueryC4Ev */
	virtual void ~CSceneSkyBoxLightQuery(class CSceneSkyBoxLightQuery *); /* linkage=_ZN22CSceneSkyBoxLightQueryD4Ev */
};

// <037E9B29> ../public/scenesystem/skybox.h:24
void CSceneSkyBoxLightQuery::~CSceneSkyBoxLightQuery()
{
} /* size: 0 */

// <037E9AF9> ../public/scenesystem/skybox.h:24
inline void CSceneSkyBoxLightQuery::~CSceneSkyBoxLightQuery()
{
} /* size: 0 */

// <00123468> ../public/scenesystem/skybox.h:39
// member functions: 39
// member variables: 12
// vtable entry: 1
// class size: 368
class CSceneSkyBoxObject : public CSceneObject {
public:
	/* class CSceneObject <ancestor>; */ /* 0 240 */
	/* ../public/scenesystem/skybox.h:43 */
	void CSceneSkyBoxObject(CSceneSkyBoxObject* );
	/* ../public/scenesystem/skybox.h:56 */
	virtual void ~CSceneSkyBoxObject(CSceneSkyBoxObject* );
	/* ../public/scenesystem/skybox.h:105 */
	CSceneSkyBoxLightQuery* FindOrCreateLightQuery(const CSceneSkyBoxObject* );
	/* ../public/scenesystem/skybox.h:121 */
	CSceneSkyBoxLightQuery* RelinquishOwnershipOfLightQuery(const CSceneSkyBoxObject* );
	/* ../public/scenesystem/skybox.h:132 */
	void SetLighting_ConstantColorHemisphere(CSceneSkyBoxObject* , const Vector& );
	/* ../public/scenesystem/skybox.h:143 */
	void SetLighting_Samples(CSceneSkyBoxObject* , const Vector* , const Vector* , int);
	/* ../public/scenesystem/skybox.h:64 */
	HMaterial GetMaterial(const CSceneSkyBoxObject* );
	/* ../public/scenesystem/skybox.h:65 */
	void SetMaterial(CSceneSkyBoxObject* , HMaterial);
	/* ../public/scenesystem/skybox.h:164 */
	Vector GetConstantHemisphereColor(const CSceneSkyBoxObject* , bool* );
	/* ../public/scenesystem/skybox.h:176 */
	void SetSkyTint(CSceneSkyBoxObject* , const Vector& );
	/* ../public/scenesystem/skybox.h:181 */
	const Vector& GetSkyTint(const CSceneSkyBoxObject* );
	/* ../public/scenesystem/skybox.h:186 */
	void SetFogType(CSceneSkyBoxObject* , ESkyboxFogType_t);
	/* ../public/scenesystem/skybox.h:191 */
	ESkyboxFogType_t GetFogType(const CSceneSkyBoxObject* );
	/* ../public/scenesystem/skybox.h:196 */
	void SetAngularFogParams(CSceneSkyBoxObject* , float, float, float, float);
	/* ../public/scenesystem/skybox.h:204 */
	float GetFogMinStart(const CSceneSkyBoxObject* );
	/* ../public/scenesystem/skybox.h:209 */
	float GetFogMinEnd(const CSceneSkyBoxObject* );
	/* ../public/scenesystem/skybox.h:214 */
	float GetFogMaxStart(const CSceneSkyBoxObject* );
	/* ../public/scenesystem/skybox.h:219 */
	float GetFogMaxEnd(const CSceneSkyBoxObject* );
	/* ../public/scenesystem/skybox.h:83 */
	virtual void InitManagedHandle(CSceneSkyBoxObject* );
private:
	CThreadMutex m_LightQueryMutex; /* 232 72 */
	CSceneSkyBoxLightQuery * m_pLightQuery; /* 304 8 */
	HMaterialStrong m_hMaterial; /* 312 8 */
	bool m_bHasConstantColor; /* 320 1 */
	Vector m_vConstantHemisphereColor; /* 324 12 */
	Vector m_vTint; /* 336 12 */
	ESkyboxFogType_t m_nFogType; /* 348 4 */
	float m_flFogMinStart; /* 352 4 */
	float m_flFogMinEnd; /* 356 4 */
	float m_flFogMaxStart; /* 360 4 */
	float m_flFogMaxEnd; /* 364 4 */
	void CSceneSkyBoxObject(class CSceneSkyBoxObject *); /* linkage=_ZN18CSceneSkyBoxObjectC4Ev */
	virtual void ~CSceneSkyBoxObject(class CSceneSkyBoxObject *); /* linkage=_ZN18CSceneSkyBoxObjectD4Ev */
	class CSceneSkyBoxLightQuery * FindOrCreateLightQuery(const class CSceneSkyBoxObject  *); /* linkage=_ZNK18CSceneSkyBoxObject22FindOrCreateLightQueryEv */
	class CSceneSkyBoxLightQuery * RelinquishOwnershipOfLightQuery(const class CSceneSkyBoxObject  *); /* linkage=_ZNK18CSceneSkyBoxObject31RelinquishOwnershipOfLightQueryEv */
	void SetLighting_ConstantColorHemisphere(class CSceneSkyBoxObject *, const class Vector  &); /* linkage=_ZN18CSceneSkyBoxObject35SetLighting_ConstantColorHemisphereERK6Vector */
	void SetLighting_Samples(class CSceneSkyBoxObject *, const class Vector  *, const class Vector  *, int); /* linkage=_ZN18CSceneSkyBoxObject19SetLighting_SamplesEPK6VectorS2_i */
	HMaterial GetMaterial(const class CSceneSkyBoxObject  *); /* linkage=_ZNK18CSceneSkyBoxObject11GetMaterialEv */
	void SetMaterial(class CSceneSkyBoxObject *, HMaterial); /* linkage=_ZN18CSceneSkyBoxObject11SetMaterialE11CWeakHandleI29InfoForResourceTypeIMaterial2E */
	class Vector GetConstantHemisphereColor(const class CSceneSkyBoxObject  *, bool *); /* linkage=_ZNK18CSceneSkyBoxObject26GetConstantHemisphereColorEPb */
	void SetSkyTint(class CSceneSkyBoxObject *, const class Vector  &); /* linkage=_ZN18CSceneSkyBoxObject10SetSkyTintERK6Vector */
	const class Vector  & GetSkyTint(const class CSceneSkyBoxObject  *); /* linkage=_ZNK18CSceneSkyBoxObject10GetSkyTintEv */
	void SetFogType(class CSceneSkyBoxObject *, enum ESkyboxFogType_t); /* linkage=_ZN18CSceneSkyBoxObject10SetFogTypeE16ESkyboxFogType_t */
	enum ESkyboxFogType_t GetFogType(const class CSceneSkyBoxObject  *); /* linkage=_ZNK18CSceneSkyBoxObject10GetFogTypeEv */
	void SetAngularFogParams(class CSceneSkyBoxObject *, float, float, float, float); /* linkage=_ZN18CSceneSkyBoxObject19SetAngularFogParamsEffff */
	float GetFogMinStart(const class CSceneSkyBoxObject  *); /* linkage=_ZNK18CSceneSkyBoxObject14GetFogMinStartEv */
	float GetFogMinEnd(const class CSceneSkyBoxObject  *); /* linkage=_ZNK18CSceneSkyBoxObject12GetFogMinEndEv */
	float GetFogMaxStart(const class CSceneSkyBoxObject  *); /* linkage=_ZNK18CSceneSkyBoxObject14GetFogMaxStartEv */
	float GetFogMaxEnd(const class CSceneSkyBoxObject  *); /* linkage=_ZNK18CSceneSkyBoxObject12GetFogMaxEndEv */
	virtual void InitManagedHandle(class CSceneSkyBoxObject *); /* linkage=_ZN18CSceneSkyBoxObject17InitManagedHandleEv */
	void CSceneSkyBoxObject(class CSceneSkyBoxObject *, const class CSceneSkyBoxObject  &); /* linkage=_ZN18CSceneSkyBoxObjectC4ERKS_ */
} __attribute__((__aligned__(16)));

// <037DAA06> ../public/scenesystem/skybox.h:39
// member functions: 40
// member variables: 12
// vtable entry: 1
// class size: 368
class CSceneSkyBoxObject : public CSceneObject {
public:
	/* class CSceneObject <ancestor>; */ /* 0 240 */
	void CSceneSkyBoxObject(CSceneSkyBoxObject* , const CSceneSkyBoxObject& );
	/* ../public/scenesystem/skybox.h:43 */
	void CSceneSkyBoxObject(CSceneSkyBoxObject* );
	/* ../public/scenesystem/skybox.h:56 */
	virtual void ~CSceneSkyBoxObject(CSceneSkyBoxObject* );
	/* ../public/scenesystem/skybox.h:105 */
	CSceneSkyBoxLightQuery* FindOrCreateLightQuery(const CSceneSkyBoxObject* );
	/* ../public/scenesystem/skybox.h:121 */
	CSceneSkyBoxLightQuery* RelinquishOwnershipOfLightQuery(const CSceneSkyBoxObject* );
	/* ../public/scenesystem/skybox.h:132 */
	void SetLighting_ConstantColorHemisphere(CSceneSkyBoxObject* , const Vector& );
	/* ../public/scenesystem/skybox.h:143 */
	void SetLighting_Samples(CSceneSkyBoxObject* , const Vector* , const Vector* , int);
	/* ../public/scenesystem/skybox.h:64 */
	HMaterial GetMaterial(const CSceneSkyBoxObject* );
	/* ../public/scenesystem/skybox.h:65 */
	void SetMaterial(CSceneSkyBoxObject* , HMaterial);
	/* ../public/scenesystem/skybox.h:164 */
	Vector GetConstantHemisphereColor(const CSceneSkyBoxObject* , bool* );
	/* ../public/scenesystem/skybox.h:176 */
	void SetSkyTint(CSceneSkyBoxObject* , const Vector& );
	/* ../public/scenesystem/skybox.h:181 */
	const Vector& GetSkyTint(const CSceneSkyBoxObject* );
	/* ../public/scenesystem/skybox.h:186 */
	void SetFogType(CSceneSkyBoxObject* , ESkyboxFogType_t);
	/* ../public/scenesystem/skybox.h:191 */
	ESkyboxFogType_t GetFogType(const CSceneSkyBoxObject* );
	/* ../public/scenesystem/skybox.h:196 */
	void SetAngularFogParams(CSceneSkyBoxObject* , float, float, float, float);
	/* ../public/scenesystem/skybox.h:204 */
	float GetFogMinStart(const CSceneSkyBoxObject* );
	/* ../public/scenesystem/skybox.h:209 */
	float GetFogMinEnd(const CSceneSkyBoxObject* );
	/* ../public/scenesystem/skybox.h:214 */
	float GetFogMaxStart(const CSceneSkyBoxObject* );
	/* ../public/scenesystem/skybox.h:219 */
	float GetFogMaxEnd(const CSceneSkyBoxObject* );
	/* ../public/scenesystem/skybox.h:83 */
	virtual void InitManagedHandle(CSceneSkyBoxObject* );
private:
	CThreadMutex m_LightQueryMutex; /* 232 72 */
	CSceneSkyBoxLightQuery * m_pLightQuery; /* 304 8 */
	HMaterialStrong m_hMaterial; /* 312 8 */
	bool m_bHasConstantColor; /* 320 1 */
	Vector m_vConstantHemisphereColor; /* 324 12 */
	Vector m_vTint; /* 336 12 */
	ESkyboxFogType_t m_nFogType; /* 348 4 */
	float m_flFogMinStart; /* 352 4 */
	float m_flFogMinEnd; /* 356 4 */
	float m_flFogMaxStart; /* 360 4 */
	float m_flFogMaxEnd; /* 364 4 */
	void CSceneSkyBoxObject(class CSceneSkyBoxObject *); /* linkage=_ZN18CSceneSkyBoxObjectC4Ev */
	virtual void ~CSceneSkyBoxObject(class CSceneSkyBoxObject *); /* linkage=_ZN18CSceneSkyBoxObjectD4Ev */
	class CSceneSkyBoxLightQuery * FindOrCreateLightQuery(const class CSceneSkyBoxObject  *); /* linkage=_ZNK18CSceneSkyBoxObject22FindOrCreateLightQueryEv */
	class CSceneSkyBoxLightQuery * RelinquishOwnershipOfLightQuery(const class CSceneSkyBoxObject  *); /* linkage=_ZNK18CSceneSkyBoxObject31RelinquishOwnershipOfLightQueryEv */
	void SetLighting_ConstantColorHemisphere(class CSceneSkyBoxObject *, const class Vector  &); /* linkage=_ZN18CSceneSkyBoxObject35SetLighting_ConstantColorHemisphereERK6Vector */
	void SetLighting_Samples(class CSceneSkyBoxObject *, const class Vector  *, const class Vector  *, int); /* linkage=_ZN18CSceneSkyBoxObject19SetLighting_SamplesEPK6VectorS2_i */
	HMaterial GetMaterial(const class CSceneSkyBoxObject  *); /* linkage=_ZNK18CSceneSkyBoxObject11GetMaterialEv */
	void SetMaterial(class CSceneSkyBoxObject *, HMaterial); /* linkage=_ZN18CSceneSkyBoxObject11SetMaterialE11CWeakHandleI29InfoForResourceTypeIMaterial2E */
	class Vector GetConstantHemisphereColor(const class CSceneSkyBoxObject  *, bool *); /* linkage=_ZNK18CSceneSkyBoxObject26GetConstantHemisphereColorEPb */
	void SetSkyTint(class CSceneSkyBoxObject *, const class Vector  &); /* linkage=_ZN18CSceneSkyBoxObject10SetSkyTintERK6Vector */
	const class Vector  & GetSkyTint(const class CSceneSkyBoxObject  *); /* linkage=_ZNK18CSceneSkyBoxObject10GetSkyTintEv */
	void SetFogType(class CSceneSkyBoxObject *, enum ESkyboxFogType_t); /* linkage=_ZN18CSceneSkyBoxObject10SetFogTypeE16ESkyboxFogType_t */
	enum ESkyboxFogType_t GetFogType(const class CSceneSkyBoxObject  *); /* linkage=_ZNK18CSceneSkyBoxObject10GetFogTypeEv */
	void SetAngularFogParams(class CSceneSkyBoxObject *, float, float, float, float); /* linkage=_ZN18CSceneSkyBoxObject19SetAngularFogParamsEffff */
	float GetFogMinStart(const class CSceneSkyBoxObject  *); /* linkage=_ZNK18CSceneSkyBoxObject14GetFogMinStartEv */
	float GetFogMinEnd(const class CSceneSkyBoxObject  *); /* linkage=_ZNK18CSceneSkyBoxObject12GetFogMinEndEv */
	float GetFogMaxStart(const class CSceneSkyBoxObject  *); /* linkage=_ZNK18CSceneSkyBoxObject14GetFogMaxStartEv */
	float GetFogMaxEnd(const class CSceneSkyBoxObject  *); /* linkage=_ZNK18CSceneSkyBoxObject12GetFogMaxEndEv */
	virtual void InitManagedHandle(class CSceneSkyBoxObject *); /* linkage=_ZN18CSceneSkyBoxObject17InitManagedHandleEv */
	void CSceneSkyBoxObject(class CSceneSkyBoxObject *, const class CSceneSkyBoxObject  &); /* linkage=_ZN18CSceneSkyBoxObjectC4ERKS_ */
} __attribute__((__aligned__(16)));

// <037E9AE2> ../public/scenesystem/skybox.h:43
void CSceneSkyBoxObject::CSceneSkyBoxObject()
{
} /* size: 0 */

// <037E9AC9> ../public/scenesystem/skybox.h:43
inline void CSceneSkyBoxObject::CSceneSkyBoxObject()
{
} /* size: 0 */

// <037E957E> ../public/scenesystem/skybox.h:56
// function calls: 26
void CSceneSkyBoxObject::~CSceneSkyBoxObject()
{
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 204
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 330
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::Release(); // 56
	CStrongHandle<InfoForResourceTypeIMaterial2>::~CStrongHandle(); // 56
	CThreadMutex::~CThreadMutex(); // 56
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
	CSceneObject::~CSceneObject(); // 56
} /* size: 282, inline expansions: 26 (902 bytes) */

// <037E8FAE> ../public/scenesystem/skybox.h:56
// function calls: 28
void CSceneSkyBoxObject::~CSceneSkyBoxObject()
{
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 204
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 330
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::Release(); // 56
	CStrongHandle<InfoForResourceTypeIMaterial2>::~CStrongHandle(); // 56
	CThreadMutex::~CThreadMutex(); // 56
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
	CSceneObject::~CSceneObject(); // 56
	CSceneSkyBoxObject::~CSceneSkyBoxObject(); // 56
} /* size: 298, inline expansions: 28 (1196 bytes) */

// <037E8F95> ../public/scenesystem/skybox.h:56
inline void CSceneSkyBoxObject::~CSceneSkyBoxObject()
{
} /* size: 0 */

// <036AC7F2> ../public/scenesystem/skybox.h:56
void CSceneSkyBoxObject::~CSceneSkyBoxObject()
{
} /* size: 0 */

// <037E8F7C> ../public/scenesystem/skybox.h:64
inline void CSceneSkyBoxObject::GetMaterial()
{
} /* size: 0 */

// <037E8F57> ../public/scenesystem/skybox.h:65
inline void CSceneSkyBoxObject::SetMaterial(HMaterial hMaterial)
{
} /* size: 0 */

// <037E8ECF> ../public/scenesystem/skybox.h:83
void CSceneSkyBoxObject::InitManagedHandle()
{
} /* size: 96 */

// <01327D96> ../public/scenesystem/skybox.h:132
inline void CSceneSkyBoxObject::SetLighting_ConstantColorHemisphere(const Vector& vSkyColor)
{
} /* size: 0 */

// <013271FE> ../public/scenesystem/skybox.h:143
// variables: 10
// function calls: 45
void CSceneSkyBoxObject::SetLighting_Samples(const Vector* pSkyColors, const Vector* pSkyDirections, int nSkyColors)
{
	SphericalHarmonicRGBFn_t<2> shRadiance; // 145
	{
		int i; // 147
		{
			SphericalHarmonicFn_t<2> fn; // 151
			SphericalHarmonicFn_t<2>::Init(
				const Vector& vDirection);  // 94
			SphericalHarmonicFn_t<2>::SphericalHarmonicFn_t(
						const Vector& vDirection);  // 151
			{
				int i; // 229
			}
			SHMulAdd<2>(const SphericalHarmonicFn_t<2>& a,
					const SphericalHarmonicFn_t<2>& b,
					float flScale,
					SphericalHarmonicFn_t<2>& result);  // 152
			{
				int i; // 229
			}
			SHMulAdd<2>(const SphericalHarmonicFn_t<2>& a,
					const SphericalHarmonicFn_t<2>& b,
					float flScale,
					SphericalHarmonicFn_t<2>& result);  // 154
			{
				int i; // 229
			}
			SHMulAdd<2>(const SphericalHarmonicFn_t<2>& a,
					const SphericalHarmonicFn_t<2>& b,
					float flScale,
					SphericalHarmonicFn_t<2>& result);  // 153
		}
	}
	{
		int i; // 138
	}
	SphericalHarmonicFn_t<2>::Zero(); // 324
	SphericalHarmonicRGBFn_t<2>::Zero(); // 146
	SphericalHarmonicFn_t<2>::SphericalHarmonicFn_t(); // 313
	SphericalHarmonicFn_t<2>::SphericalHarmonicFn_t(); // 313
	SphericalHarmonicFn_t<2>::SphericalHarmonicFn_t(); // 313
	SphericalHarmonicRGBFn_t<2>::SphericalHarmonicRGBFn_t(); // 145
	{
		int i; // 204
	}
	SHScale<2>(const SphericalHarmonicFn_t<2>& a,
			float flScale,
			SphericalHarmonicFn_t<2>& result);  // 378
	{
		int i; // 204
	}
	SHScale<2>(const SphericalHarmonicFn_t<2>& a,
			float flScale,
			SphericalHarmonicFn_t<2>& result);  // 379
	{
		int i; // 204
	}
	SHScale<2>(const SphericalHarmonicFn_t<2>& a,
			float flScale,
			SphericalHarmonicFn_t<2>& result);  // 380
	SHScale<2>(const SphericalHarmonicRGBFn_t<2>& a,
			float flScale,
			SphericalHarmonicRGBFn_t<2>& result);  // 157
	Vector4D::Vector4D(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 301
	SHRadianceToIrradianceEvalConstants(const SphericalHarmonicFn_t<2>& shIrradiance); // 159
	CSceneObject::EnsureExtraData(); // 2289
	CSceneObject::EnsureExtraData(); // 1660
	Vector4D::Vector4D(
		const Vector4D& vOther);  // 571
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::SetValue(
		const CUtlStringToken& nTok,
		Vector4D nValue);  // 277
	Vector4D::Vector4D(
		const Vector4D& vOther);  // 277
	CRenderAttributes::SetVector4DValue(
			CUtlStringToken nTokenID,
			Vector4D vValue);  // 1661
	Vector4D::Vector4D(
		const Vector4D& vOther);  // 1661
	CSceneObject::SetVector4DValue(
			const CUtlStringToken& attrName,
			const Vector4D& vecValue);  // 159
	Vector4D::Vector4D(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 301
	SHRadianceToIrradianceEvalConstants(const SphericalHarmonicFn_t<2>& shIrradiance); // 160
	CSceneObject::EnsureExtraData(); // 2289
	CSceneObject::EnsureExtraData(); // 1660
	Vector4D::Vector4D(
		const Vector4D& vOther);  // 571
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::SetValue(
		const CUtlStringToken& nTok,
		Vector4D nValue);  // 277
	Vector4D::Vector4D(
		const Vector4D& vOther);  // 277
	CRenderAttributes::SetVector4DValue(
			CUtlStringToken nTokenID,
			Vector4D vValue);  // 1661
	Vector4D::Vector4D(
		const Vector4D& vOther);  // 1661
	CSceneObject::SetVector4DValue(
			const CUtlStringToken& attrName,
			const Vector4D& vecValue);  // 160
	Vector4D::Vector4D(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 301
	SHRadianceToIrradianceEvalConstants(const SphericalHarmonicFn_t<2>& shIrradiance); // 161
	CSceneObject::EnsureExtraData(); // 2289
	CSceneObject::EnsureExtraData(); // 1660
	Vector4D::Vector4D(
		const Vector4D& vOther);  // 1661
	Vector4D::Vector4D(
		const Vector4D& vOther);  // 277
	Vector4D::Vector4D(
		const Vector4D& vOther);  // 571
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::SetValue(
		const CUtlStringToken& nTok,
		Vector4D nValue);  // 277
	CRenderAttributes::SetVector4DValue(
			CUtlStringToken nTokenID,
			Vector4D vValue);  // 1661
	CSceneObject::SetVector4DValue(
			const CUtlStringToken& attrName,
			const Vector4D& vecValue);  // 161
} /* size: 683, variables: 1, inline expansions: 40 (843 bytes) */

// <013271D9> ../public/scenesystem/skybox.h:176
inline void CSceneSkyBoxObject::SetSkyTint(const Vector& vTint)
{
} /* size: 0 */

// <037E8EB6> ../public/scenesystem/skybox.h:181
inline void CSceneSkyBoxObject::GetSkyTint()
{
} /* size: 0 */

// <0132719B> ../public/scenesystem/skybox.h:186
inline void CSceneSkyBoxObject::SetFogType(ESkyboxFogType_t nType)
{
} /* size: 0 */

// <037E8E9D> ../public/scenesystem/skybox.h:191
inline void CSceneSkyBoxObject::GetFogType()
{
} /* size: 0 */

// <01327139> ../public/scenesystem/skybox.h:196
inline void CSceneSkyBoxObject::SetAngularFogParams(float flFogMinStart, float flFogMinEnd, float flFogMaxStart, float flFogMaxEnd)
{
} /* size: 0 */

// <037E8E84> ../public/scenesystem/skybox.h:204
inline void CSceneSkyBoxObject::GetFogMinStart()
{
} /* size: 0 */

// <037E8E6B> ../public/scenesystem/skybox.h:209
inline void CSceneSkyBoxObject::GetFogMinEnd()
{
} /* size: 0 */

// <037E8E52> ../public/scenesystem/skybox.h:214
inline void CSceneSkyBoxObject::GetFogMaxStart()
{
} /* size: 0 */

// <037E8E39> ../public/scenesystem/skybox.h:219
inline void CSceneSkyBoxObject::GetFogMaxEnd()
{
} /* size: 0 */

