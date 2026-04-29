
//
// scenesystem/lightbinner_2.h
//
//	referenced by: libengine2.so
//
//	functions: 12
//	class: 1
//

// <02B6477C> ../scenesystem/lightbinner_2.h:14
// member functions: 60
// member variables: 23
// vtable entries: 7
// class size: 376
class CLightBinner2 : public ISceneEnvironmentMapListener, ISceneLightProbeVolumeListener {
	/* ../scenesystem/lightbinner_2.h:58 */
	struct EnvironmentMapData_t {
		const class CEnvMapSceneObject * m_pEnvMap; /* 0 8 */
		HRenderTexture m_hTexture; /* 8 8 */
		matrix3x4_t m_mTransform; /* 16 48 */
		CubemapProjectionMode_t m_ProjectionMode; /* 64 4 */
		Vector m_vBoxProjectMin; /* 68 12 */
		Vector m_vBoxProjectMax; /* 80 12 */
		Vector m_vColor; /* 92 12 */
		Vector4D m_vNormalizationSH; /* 104 16 */
		int m_nRenderPriority; /* 120 4 */
		float m_flFeathering; /* 124 4 */
		/* ../scenesystem/lightbinner_2.h:71 */
		bool operator==(const EnvironmentMapData_t* , const EnvironmentMapData_t& );
		/* ../scenesystem/lightbinner_2.h:86 */
		bool operator!=(const EnvironmentMapData_t* , const EnvironmentMapData_t& );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../scenesystem/lightbinner_2.h:99 */
	struct LightProbeVolumeData_t {
		const class CSceneLightProbeVolumeObject * m_pLPV; /* 0 8 */
		matrix3x4_t m_mTransform; /* 8 48 */
		Vector m_vVolumeMins; /* 56 12 */
		Vector m_vVolumeMaxs; /* 68 12 */
		HRenderTexture m_hTexture; /* 80 8 */
		HRenderTexture m_hIndexTexture; /* 88 8 */
		HRenderTexture m_hScalarTexture; /* 96 8 */
		int m_nLightGroupCount; /* 104 4 */
		int m_nRenderPriority; /* 108 4 */
		ConstantBufferHandle_t m_cbHandle; /* 112 8 */
		/* ../scenesystem/lightbinner_2.h:112 */
		bool operator==(const LightProbeVolumeData_t* , const LightProbeVolumeData_t& );
		/* ../scenesystem/lightbinner_2.h:127 */
		bool operator!=(const LightProbeVolumeData_t* , const LightProbeVolumeData_t& );
		void LightProbeVolumeData_t(LightProbeVolumeData_t* , const LightProbeVolumeData_t& );
		void LightProbeVolumeData_t(LightProbeVolumeData_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
public:
	/* class ISceneEnvironmentMapListener <ancestor>; */ /* 0 8 */
	/* class ISceneLightProbeVolumeListener <ancestor>; */ /* 8 8 */
	void CLightBinner2(CLightBinner2* , const CLightBinner2& );
	/* ../scenesystem/lightbinner_2.cpp:49 */
	void CLightBinner2(CLightBinner2* );
	/* ../scenesystem/lightbinner_2.cpp:71 */
	void ~CLightBinner2(CLightBinner2* );
	/* ../scenesystem/lightbinner_2.h:24 */
	virtual void SetRenderAttributesForLightProbeVolume(CLightBinner2* , LightProbeVolumeBinding_t, CRenderAttributes& );
	/* ../scenesystem/lightbinner_2.h:27 */
	int NumEnvMaps(const CLightBinner2* );
	/* ../scenesystem/lightbinner_2.h:28 */
	int NumLightProbes(const CLightBinner2* );
	/* ../scenesystem/lightbinner_2.h:29 */
	bool HasLightProbesOrEnvMaps(const CLightBinner2* );
	/* ../scenesystem/lightbinner_2.cpp:393 */
	LightProbeVolumeBinding_t ChooseLightProbeVolume(const CLightBinner2* , const Vector& , const AABB_t& , CUtlStringToken);
	/* ../scenesystem/lightbinner_2.cpp:495 */
	virtual void OnSceneEnvironmentMapCreated(CLightBinner2* , CEnvMapSceneObject* );
	/* ../scenesystem/lightbinner_2.cpp:500 */
	virtual void OnSceneEnvironmentMapDestroyed(CLightBinner2* , CEnvMapSceneObject* );
	/* ../scenesystem/lightbinner_2.cpp:505 */
	virtual void OnSceneEnvironmentMapUpdated(CLightBinner2* , CEnvMapSceneObject* );
	/* ../scenesystem/lightbinner_2.cpp:519 */
	virtual void OnSceneLightProbeVolumeCreated(CLightBinner2* , CSceneLightProbeVolumeObject* );
	/* ../scenesystem/lightbinner_2.cpp:524 */
	virtual void OnSceneLightProbeVolumeDestroyed(CLightBinner2* , CSceneLightProbeVolumeObject* );
	/* ../scenesystem/lightbinner_2.cpp:529 */
	virtual void OnSceneLightProbeVolumeUpdated(CLightBinner2* , CSceneLightProbeVolumeObject* );
	/* ../scenesystem/lightbinner_2.h:43 */
	uint32 GetLightProbeVolumeCacheFingerprint(const CLightBinner2* );
	/* ../scenesystem/lightbinner_2.h:45 */
	uint32 GetEnvironmentMapCacheFingerprint(const CLightBinner2* );
	CUtlVector<CLightBinner2::EnvironmentMapData_t, CUtlMemory<CLightBinner2::EnvironmentMapData_t, int> > m_environmentMapData; /* 16 32 */
	CUtlVector<bool, CUtlMemory<bool, int> > m_environmentMapEnabled; /* 48 32 */
	CUtlVector<CLightBinner2::LightProbeVolumeData_t, CUtlMemory<CLightBinner2::LightProbeVolumeData_t, int> > m_lightProbeVolumeData; /* 80 32 */
	CUtlVector<bool, CUtlMemory<bool, int> > m_lightProbeVolumeEnabled; /* 112 32 */
	CUtlVector<CUtlStringToken, CUtlMemory<CUtlStringToken, int> > m_lightProbeVolumeLightGroups; /* 144 32 */
	CUtlHashtable<int, int, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, int>, int> > m_lightProbeVolumeHandshakeToIndexMap; /* 176 32 */
	CUtlHashtable<CSceneLightProbeVolumeObject*, int, DefaultHashFunctor<CSceneLightProbeVolumeObject*>, DefaultEqualFunctor<CSceneLightProbeVolumeObject*>, undefined_t, CUtlMemory<CUtlHashtableEntry<CSceneLightProbeVolumeObject*, int>, int> > m_lightProveVolumeToIndex; /* 208 32 */
protected:
	HRenderTextureStrongCopyable m_environmentMapDebugTexture; /* 240 8 */
	CUtlVector<CStrongHandleCopyable<InfoForResourceTypeCTextureBase>, CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCTextureBase>, int> > m_lightProbeVolumeDebugTextures; /* 248 32 */
	bool m_bCacheOnlyRenderedWorlds; /* 280 1 */
	uint32 m_worldsToRenderFingerprint; /* 284 4 */
	uint32 m_lightProbeVolumeCacheFingerprint; /* 288 4 */
	uint32 m_environmentMapCacheFingerprint; /* 292 4 */
	bool m_bNeedEnvMapsUpdate; /* 296 1 */
	bool m_bNeedLPVsUpdate; /* 297 1 */
	bool m_bWantCubeMapArrays; /* 298 1 */
	bool m_bLightProbeVolumesSrgb; /* 299 1 */
	bool m_bLightProbeVolumesRGBM; /* 300 1 */
	ImageFormat m_nLightProbeVolumesImageFormat; /* 304 4 */
	CUtlHashtable<CSceneLightProbeVolumeObject*, int, DefaultHashFunctor<CSceneLightProbeVolumeObject*>, DefaultEqualFunctor<CSceneLightProbeVolumeObject*>, undefined_t, CUtlMemory<CUtlHashtableEntry<CSceneLightProbeVolumeObject*, int>, int> > m_LpvToIndex; /* 312 32 */
	CUtlHashtable<const CEnvMapSceneObject*, int, DefaultHashFunctor<const CEnvMapSceneObject*>, DefaultEqualFunctor<const CEnvMapSceneObject*>, undefined_t, CUtlMemory<CUtlHashtableEntry<const CEnvMapSceneObject*, int>, int> > m_environmentMapToIndex; /* 344 32 */
	/* ../scenesystem/lightbinner_2.h:161 */
	void InvalidateEnvironmentMapCache(CLightBinner2* );
	/* ../scenesystem/lightbinner_2.h:162 */
	void InvalidateLightProbeVolumeCache(CLightBinner2* );
	/* ../scenesystem/lightbinner_2.cpp:78 */
	void UpdateVisibleWorldsFromView(CLightBinner2* , const CSceneView* );
	/* ../scenesystem/lightbinner_2.cpp:100 */
	void AddLightProbeVolumesForView(CLightBinner2* , const CSceneView* , ESceneObjectFlags, ESceneObjectFlags);
	/* ../scenesystem/lightbinner_2.cpp:331 */
	bool IsEnvMapEnabledInView(const CLightBinner2* , const CSceneView* , const CEnvMapSceneObject* , ESceneObjectFlags, ESceneObjectFlags);
	/* ../scenesystem/lightbinner_2.cpp:154 */
	void GetLightProbeVolumeData(const CLightBinner2* , const CSceneLightProbeVolumeObject* , LightProbeVolumeData_t* , CUtlVector<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >& );
	/* ../scenesystem/lightbinner_2.cpp:181 */
	bool IsLightProbeVolumeEnabledInView(const CLightBinner2* , const CSceneView* , const CSceneLightProbeVolumeObject* , ESceneObjectFlags, ESceneObjectFlags);
	/* ../scenesystem/lightbinner_2.cpp:351 */
	void DebugCubeMapColors(CLightBinner2* , const CSceneView* );
	/* ../scenesystem/lightbinner_2.cpp:201 */
	void DebugLightProbeVolumeColors(CLightBinner2* , const CSceneView* );
	/* ../scenesystem/lightbinner_2.cpp:26 */
	int DebugColor(CLightBinner2* , const Vector& );
	/* ../scenesystem/lightbinner_2.cpp:36 */
	Vector DebugColor(CLightBinner2* , int);
	void CLightBinner2(class CLightBinner2 *, const class CLightBinner2  &); /* linkage=_ZN13CLightBinner2C4ERKS_ */
	void CLightBinner2(class CLightBinner2 *); /* linkage=_ZN13CLightBinner2C4Ev */
	void ~CLightBinner2(class CLightBinner2 *); /* linkage=_ZN13CLightBinner2D4Ev */
	virtual void SetRenderAttributesForLightProbeVolume(class CLightBinner2 *, class LightProbeVolumeBinding_t, class CRenderAttributes &); /* linkage=_ZN13CLightBinner238SetRenderAttributesForLightProbeVolumeE25LightProbeVolumeBinding_tR17CRenderAttributes */
	int NumEnvMaps(const class CLightBinner2  *); /* linkage=_ZNK13CLightBinner210NumEnvMapsEv */
	int NumLightProbes(const class CLightBinner2  *); /* linkage=_ZNK13CLightBinner214NumLightProbesEv */
	bool HasLightProbesOrEnvMaps(const class CLightBinner2  *); /* linkage=_ZNK13CLightBinner223HasLightProbesOrEnvMapsEv */
	class LightProbeVolumeBinding_t ChooseLightProbeVolume(const class CLightBinner2  *, const class Vector  &, const class AABB_t  &, class CUtlStringToken); /* linkage=_ZNK13CLightBinner222ChooseLightProbeVolumeERK6VectorRK6AABB_t15CUtlStringToken */
	virtual void OnSceneEnvironmentMapCreated(class CLightBinner2 *, class CEnvMapSceneObject *); /* linkage=_ZN13CLightBinner228OnSceneEnvironmentMapCreatedEP18CEnvMapSceneObject */
	virtual void OnSceneEnvironmentMapDestroyed(class CLightBinner2 *, class CEnvMapSceneObject *); /* linkage=_ZN13CLightBinner230OnSceneEnvironmentMapDestroyedEP18CEnvMapSceneObject */
	virtual void OnSceneEnvironmentMapUpdated(class CLightBinner2 *, class CEnvMapSceneObject *); /* linkage=_ZN13CLightBinner228OnSceneEnvironmentMapUpdatedEP18CEnvMapSceneObject */
	/* <2b8b1fa> ../scenesystem/lightbinner_2.cpp:519 */
	virtual void OnSceneLightProbeVolumeCreated(class CLightBinner2 *, class CSceneLightProbeVolumeObject *); /* linkage=_ZN13CLightBinner230OnSceneLightProbeVolumeCreatedEP28CSceneLightProbeVolumeObject */
	virtual void OnSceneLightProbeVolumeDestroyed(class CLightBinner2 *, class CSceneLightProbeVolumeObject *); /* linkage=_ZN13CLightBinner232OnSceneLightProbeVolumeDestroyedEP28CSceneLightProbeVolumeObject */
	/* <2b8c51c> ../scenesystem/lightbinner_2.cpp:529 */
	virtual void OnSceneLightProbeVolumeUpdated(class CLightBinner2 *, class CSceneLightProbeVolumeObject *); /* linkage=_ZN13CLightBinner230OnSceneLightProbeVolumeUpdatedEP28CSceneLightProbeVolumeObject */
	uint32 GetLightProbeVolumeCacheFingerprint(const class CLightBinner2  *); /* linkage=_ZNK13CLightBinner235GetLightProbeVolumeCacheFingerprintEv */
	uint32 GetEnvironmentMapCacheFingerprint(const class CLightBinner2  *); /* linkage=_ZNK13CLightBinner233GetEnvironmentMapCacheFingerprintEv */
	void InvalidateEnvironmentMapCache(class CLightBinner2 *); /* linkage=_ZN13CLightBinner229InvalidateEnvironmentMapCacheEv */
	void InvalidateLightProbeVolumeCache(class CLightBinner2 *); /* linkage=_ZN13CLightBinner231InvalidateLightProbeVolumeCacheEv */
	void UpdateVisibleWorldsFromView(class CLightBinner2 *, const class CSceneView  *); /* linkage=_ZN13CLightBinner227UpdateVisibleWorldsFromViewEPK10CSceneView */
	void AddLightProbeVolumesForView(class CLightBinner2 *, const class CSceneView  *, enum ESceneObjectFlags, enum ESceneObjectFlags); /* linkage=_ZN13CLightBinner227AddLightProbeVolumesForViewEPK10CSceneView17ESceneObjectFlagsS3_ */
	bool IsEnvMapEnabledInView(const class CLightBinner2  *, const class CSceneView  *, const class CEnvMapSceneObject  *, enum ESceneObjectFlags, enum ESceneObjectFlags); /* linkage=_ZNK13CLightBinner221IsEnvMapEnabledInViewEPK10CSceneViewPK18CEnvMapSceneObject17ESceneObjectFlagsS6_ */
	void GetLightProbeVolumeData(const class CLightBinner2  *, const class CSceneLightProbeVolumeObject  *, class LightProbeVolumeData_t *, class CUtlVector<CUtlStringToken, CUtlMemory<CUtlStringToken, int> > &); /* linkage=_ZNK13CLightBinner223GetLightProbeVolumeDataEPK28CSceneLightProbeVolumeObjectPNS_22LightProbeVolumeData_tER10CUtlVectorI15CUtlStringToken10CUtlMemoryIS6_iEE */
	bool IsLightProbeVolumeEnabledInView(const class CLightBinner2  *, const class CSceneView  *, const class CSceneLightProbeVolumeObject  *, enum ESceneObjectFlags, enum ESceneObjectFlags); /* linkage=_ZNK13CLightBinner231IsLightProbeVolumeEnabledInViewEPK10CSceneViewPK28CSceneLightProbeVolumeObject17ESceneObjectFlagsS6_ */
	void DebugCubeMapColors(class CLightBinner2 *, const class CSceneView  *); /* linkage=_ZN13CLightBinner218DebugCubeMapColorsEPK10CSceneView */
	/* <2b8f589> ../scenesystem/lightbinner_2.cpp:201 */
	void DebugLightProbeVolumeColors(class CLightBinner2 *, const class CSceneView  *); /* linkage=_ZN13CLightBinner227DebugLightProbeVolumeColorsEPK10CSceneView */
	int DebugColor(class CLightBinner2 *, const class Vector  &); /* linkage=_ZN13CLightBinner210DebugColorERK6Vector */
	/* <2b8b5c6> ../scenesystem/lightbinner_2.cpp:36 */
	class Vector DebugColor(class CLightBinner2 *, int); /* linkage=_ZN13CLightBinner210DebugColorEi */
};

// <02C2364E> ../scenesystem/utils/../lightbinner_2.h:19
void CLightBinner2::CLightBinner2()
{
} /* size: 0 */

// <02C235B9> ../scenesystem/utils/../lightbinner_2.h:20
void CLightBinner2::~CLightBinner2()
{
} /* size: 0 */

// <04017CF3> ../scenesystem/lightbinner_2.h:29
inline void CLightBinner2::HasLightProbesOrEnvMaps()
{
} /* size: 0 */

// <04017CDA> ../scenesystem/lightbinner_2.h:43
inline void CLightBinner2::GetLightProbeVolumeCacheFingerprint()
{
} /* size: 0 */

// <02B80A02> ../scenesystem/lightbinner_2.h:99
void LightProbeVolumeData_t::LightProbeVolumeData_t()
{
} /* size: 0 */

// <02B809E5> ../scenesystem/lightbinner_2.h:99
inline void LightProbeVolumeData_t::LightProbeVolumeData_t()
{
} /* size: 0 */

// <02B7A296> ../scenesystem/lightbinner_2.h:99
void LightProbeVolumeData_t::LightProbeVolumeData_t(const LightProbeVolumeData_t &)
{
} /* size: 0 */

// <02B7A274> ../scenesystem/lightbinner_2.h:99
inline void LightProbeVolumeData_t::LightProbeVolumeData_t(const LightProbeVolumeData_t &)
{
} /* size: 0 */

// <02B837FB> ../scenesystem/lightbinner_2.h:127
inline void LightProbeVolumeData_t::operator!=(const LightProbeVolumeData_t& rhs)
{
} /* size: 0 */

// <02B837E2> ../scenesystem/lightbinner_2.h:161
inline void CLightBinner2::InvalidateEnvironmentMapCache()
{
} /* size: 0 */

// <02B837C9> ../scenesystem/lightbinner_2.h:162
inline void CLightBinner2::InvalidateLightProbeVolumeCache()
{
} /* size: 0 */

// <02F19DF6> ../scenesystem/lightbinner_2.h:184
// variables: 4
inline LightProbeVolumeBinding_t ChooseLightProbeVolume(CSceneObject* pSceneObject, CLightBinner2* pLightBinner)
{
	{
		CSceneObjectLightingCache_t* pCache; // 188
		int32 nHandshake; // 189
		UtlHashHandle_t hResult; // 190
		{
			LightProbeVolumeBinding_t binding; // 193
		}
	}
} /* size: 0 */

