
//
// public/scenesystem/ivolumetricfog.h
//
//	referenced by: libengine2.so
//
//	functions: 4
//	classes: 2
//	structs: 2
//

// <012177FC> ../public/scenesystem/ivolumetricfog.h:19
// member functions: 2
// member variables: 20
// struct size: 296
struct SceneVolumetricFogParameters_t {
	/* ../public/scenesystem/ivolumetricfog.h:22 */
	void SceneVolumetricFogParameters_t(SceneVolumetricFogParameters_t* );
	/* ../public/scenesystem/ivolumetricfog.h:38 */
	bool FogEnabled(const SceneVolumetricFogParameters_t* );
	bool m_bFogEnabled; /* 0 1 */
	float m_flAnisotropy; /* 4 4 */
	float m_flScattering; /* 8 4 */
	float m_flDrawDistance; /* 12 4 */
	float m_flFadeInStart; /* 16 4 */
	float m_flFadeInEnd; /* 20 4 */
	Vector m_vBoxMins; /* 24 12 */
	Vector m_vBoxMaxs; /* 36 12 */
	float m_flIndirectStrength; /* 48 4 */
	int m_nIndirectTextureXDim; /* 52 4 */
	int m_nIndirectTextureYDim; /* 56 4 */
	int m_nIndirectTextureZDim; /* 60 4 */
	CUtlVector<Vector, CUtlMemory<Vector, int> > m_fogVolumesMin; /* 64 32 */
	CUtlVector<Vector, CUtlMemory<Vector, int> > m_fogVolumesMax; /* 96 32 */
	CUtlVector<Vector, CUtlMemory<Vector, int> > m_fogVolumeColor; /* 128 32 */
	CUtlVector<float, CUtlMemory<float, int> > m_fogVolumesStrengths; /* 160 32 */
	CUtlVector<float, CUtlMemory<float, int> > m_fogVolumesExponents; /* 192 32 */
	CUtlVector<bool, CUtlMemory<bool, int> > m_fogVolumesAreSpherical; /* 224 32 */
	CUtlVector<VMatrix, CUtlMemory<VMatrix, int> > m_matWorldToVolume; /* 256 32 */
	HRenderTextureStrong m_hBakedFogTexture; /* 288 8 */
};

// <012179A4> ../public/scenesystem/ivolumetricfog.h:68
// member variables: 7
// struct size: 28
struct SceneVolumetricFogParameters2_t {
	bool m_bFogEnabled; /* 0 1 */
	float m_flAnisotropy; /* 4 4 */
	float m_flScattering; /* 8 4 */
	float m_flDrawDistance; /* 12 4 */
	float m_flFadeInStart; /* 16 4 */
	float m_flFadeInEnd; /* 20 4 */
	float m_flIndirectStrength; /* 24 4 */
};

// <039E4704> ../public/scenesystem/ivolumetricfog.h:88
void IVolumetricFog::IVolumetricFog()
{
} /* size: 0 */

// <039E46E8> ../public/scenesystem/ivolumetricfog.h:88
inline void IVolumetricFog::IVolumetricFog()
{
} /* size: 0 */

// <012529D1> ../public/scenesystem/ivolumetricfog.h:88
// member functions: 20
// member variable: 1
// vtable entries: 8
// class size: 8
class IVolumetricFog {
	int ()(void) * * _vptr.IVolumetricFog; /* 0 8 */
	/* ../public/scenesystem/ivolumetricfog.h:91 */
	virtual void ~IVolumetricFog(IVolumetricFog* );
	/* ../public/scenesystem/ivolumetricfog.h:92 */
	virtual void SetParams(IVolumetricFog* , const SceneVolumetricFogParameters_t& );
	/* ../public/scenesystem/ivolumetricfog.h:94 */
	virtual void FrameUpdate(IVolumetricFog* , const CFrustum& , float64);
	/* ../public/scenesystem/ivolumetricfog.h:96 */
	virtual IProceduralLayerRenderer* CreateRendererSingleUse(IVolumetricFog* );
	/* ../public/scenesystem/ivolumetricfog.h:97 */
	virtual bool IsFoggingEnabled(const IVolumetricFog* );
	/* ../public/scenesystem/ivolumetricfog.h:98 */
	virtual void AddFogVolume(IVolumetricFog* , uint32, const Vector& , const Vector& , const Vector& , float, float, bool, VMatrix);
	/* ../public/scenesystem/ivolumetricfog.h:99 */
	virtual void RemoveFogVolume(IVolumetricFog* , uint32);
	/* ../public/scenesystem/ivolumetricfog.h:100 */
	virtual void RemoveAllFogVolumes(IVolumetricFog* );
	/* ../public/scenesystem/ivolumetricfog.h:107 */
	virtual void SetParams(IVolumetricFog* , SceneVolumetricFogParameters2_t, HRenderTexture);
	virtual void ~IVolumetricFog(class IVolumetricFog *); /* linkage=_ZN14IVolumetricFogD4Ev */
	virtual void SetParams(class IVolumetricFog *, const class SceneVolumetricFogParameters_t  &); /* linkage=_ZN14IVolumetricFog9SetParamsERK30SceneVolumetricFogParameters_t */
	virtual void FrameUpdate(class IVolumetricFog *, const class CFrustum  &, float64); /* linkage=_ZN14IVolumetricFog11FrameUpdateERK8CFrustumd */
	virtual class IProceduralLayerRenderer * CreateRendererSingleUse(class IVolumetricFog *); /* linkage=_ZN14IVolumetricFog23CreateRendererSingleUseEv */
	virtual bool IsFoggingEnabled(const class IVolumetricFog  *); /* linkage=_ZNK14IVolumetricFog16IsFoggingEnabledEv */
	virtual void AddFogVolume(class IVolumetricFog *, uint32, const class Vector  &, const class Vector  &, const class Vector  &, float, float, bool, class VMatrix); /* linkage=_ZN14IVolumetricFog12AddFogVolumeEjRK6VectorS2_S2_ffb7VMatrix */
	virtual void RemoveFogVolume(class IVolumetricFog *, uint32); /* linkage=_ZN14IVolumetricFog15RemoveFogVolumeEj */
	virtual void RemoveAllFogVolumes(class IVolumetricFog *); /* linkage=_ZN14IVolumetricFog19RemoveAllFogVolumesEv */
	virtual void SetParams(class IVolumetricFog *, class SceneVolumetricFogParameters2_t, HRenderTexture); /* linkage=_ZN14IVolumetricFog9SetParamsE31SceneVolumetricFogParameters2_t11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	void IVolumetricFog(class IVolumetricFog *, const class IVolumetricFog  &); /* linkage=_ZN14IVolumetricFogC4ERKS_ */
	void IVolumetricFog(class IVolumetricFog *); /* linkage=_ZN14IVolumetricFogC4Ev */
};

// <039CED9C> ../public/scenesystem/ivolumetricfog.h:88
// member functions: 22
// member variable: 1
// vtable entries: 8
// class size: 8
class IVolumetricFog {
	void IVolumetricFog(IVolumetricFog* , const IVolumetricFog& );
	void IVolumetricFog(IVolumetricFog* );
	int ()(void) * * _vptr.IVolumetricFog; /* 0 8 */
	/* ../public/scenesystem/ivolumetricfog.h:91 */
	virtual void ~IVolumetricFog(IVolumetricFog* );
	/* ../public/scenesystem/ivolumetricfog.h:92 */
	virtual void SetParams(IVolumetricFog* , const SceneVolumetricFogParameters_t& );
	/* ../public/scenesystem/ivolumetricfog.h:94 */
	virtual void FrameUpdate(IVolumetricFog* , const CFrustum& , float64);
	/* ../public/scenesystem/ivolumetricfog.h:96 */
	virtual IProceduralLayerRenderer* CreateRendererSingleUse(IVolumetricFog* );
	/* ../public/scenesystem/ivolumetricfog.h:97 */
	virtual bool IsFoggingEnabled(const IVolumetricFog* );
	/* ../public/scenesystem/ivolumetricfog.h:98 */
	virtual void AddFogVolume(IVolumetricFog* , uint32, const Vector& , const Vector& , const Vector& , float, float, bool, VMatrix);
	/* ../public/scenesystem/ivolumetricfog.h:99 */
	virtual void RemoveFogVolume(IVolumetricFog* , uint32);
	/* ../public/scenesystem/ivolumetricfog.h:100 */
	virtual void RemoveAllFogVolumes(IVolumetricFog* );
	/* ../public/scenesystem/ivolumetricfog.h:107 */
	virtual void SetParams(IVolumetricFog* , SceneVolumetricFogParameters2_t, HRenderTexture);
	virtual void ~IVolumetricFog(class IVolumetricFog *); /* linkage=_ZN14IVolumetricFogD4Ev */
	virtual void SetParams(class IVolumetricFog *, const class SceneVolumetricFogParameters_t  &); /* linkage=_ZN14IVolumetricFog9SetParamsERK30SceneVolumetricFogParameters_t */
	virtual void FrameUpdate(class IVolumetricFog *, const class CFrustum  &, float64); /* linkage=_ZN14IVolumetricFog11FrameUpdateERK8CFrustumd */
	virtual class IProceduralLayerRenderer * CreateRendererSingleUse(class IVolumetricFog *); /* linkage=_ZN14IVolumetricFog23CreateRendererSingleUseEv */
	virtual bool IsFoggingEnabled(const class IVolumetricFog  *); /* linkage=_ZNK14IVolumetricFog16IsFoggingEnabledEv */
	virtual void AddFogVolume(class IVolumetricFog *, uint32, const class Vector  &, const class Vector  &, const class Vector  &, float, float, bool, class VMatrix); /* linkage=_ZN14IVolumetricFog12AddFogVolumeEjRK6VectorS2_S2_ffb7VMatrix */
	virtual void RemoveFogVolume(class IVolumetricFog *, uint32); /* linkage=_ZN14IVolumetricFog15RemoveFogVolumeEj */
	virtual void RemoveAllFogVolumes(class IVolumetricFog *); /* linkage=_ZN14IVolumetricFog19RemoveAllFogVolumesEv */
	virtual void SetParams(class IVolumetricFog *, class SceneVolumetricFogParameters2_t, HRenderTexture); /* linkage=_ZN14IVolumetricFog9SetParamsE31SceneVolumetricFogParameters2_t11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	void IVolumetricFog(class IVolumetricFog *, const class IVolumetricFog  &); /* linkage=_ZN14IVolumetricFogC4ERKS_ */
	void IVolumetricFog(class IVolumetricFog *); /* linkage=_ZN14IVolumetricFogC4Ev */
};

// <039F027E> ../public/scenesystem/ivolumetricfog.h:91
void IVolumetricFog::~IVolumetricFog()
{
} /* size: 0 */

// <039F024E> ../public/scenesystem/ivolumetricfog.h:91
inline void IVolumetricFog::~IVolumetricFog()
{
} /* size: 0 */

