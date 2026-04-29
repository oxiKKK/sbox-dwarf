
//
// public/scenesystem/itonemapsystem.h
//
//	referenced by: libengine2.so
//
//	functions: 4
//	class: 1
//	struct: 1
//

// <0121771C> ../public/scenesystem/itonemapsystem.h:13
// member function: 1
// member variables: 11
// struct size: 44
struct SceneTonemapParameters_t {
	float m_flAutoExposureMin; /* 0 4 */
	float m_flAutoExposureMax; /* 4 4 */
	float m_flExposureCompensationScalar; /* 8 4 */
	float m_flTonemapPercentTarget; /* 12 4 */
	float m_flTonemapPercentBrightPixels; /* 16 4 */
	float m_flTonemapMinAvgLum; /* 20 4 */
	float m_flRate; /* 24 4 */
	float m_flAccelerateExposureDown; /* 28 4 */
	float m_flExposureAdaptationSpeedUp; /* 32 4 */
	float m_flExposureAdaptationSpeedDown; /* 36 4 */
	float m_flTonemapEVSmoothingRange; /* 40 4 */
	/* ../public/scenesystem/itonemapsystem.h:32 */
	void SceneTonemapParameters_t(SceneTonemapParameters_t* );
};

// <03A576A5> ../public/scenesystem/itonemapsystem.h:32
void SceneTonemapParameters_t::SceneTonemapParameters_t()
{
} /* size: 0 */

// <03A5768C> ../public/scenesystem/itonemapsystem.h:32
inline void SceneTonemapParameters_t::SceneTonemapParameters_t()
{
} /* size: 0 */

// <03A503B0> ../public/scenesystem/itonemapsystem.h:40
void ITonemapSystem::ITonemapSystem()
{
} /* size: 0 */

// <03A50394> ../public/scenesystem/itonemapsystem.h:40
inline void ITonemapSystem::ITonemapSystem()
{
} /* size: 0 */

// <03A48AB9> ../public/scenesystem/itonemapsystem.h:40
// member functions: 32
// member variable: 1
// vtable entries: 12
// class size: 8
class ITonemapSystem {
	void ~ITonemapSystem(ITonemapSystem* );
	void ITonemapSystem(ITonemapSystem* , ITonemapSystem& );
	void ITonemapSystem(ITonemapSystem* , const ITonemapSystem& );
	void ITonemapSystem(ITonemapSystem* );
	int ()(void) * * _vptr.ITonemapSystem; /* 0 8 */
	/* ../public/scenesystem/itonemapsystem.h:43 */
	virtual void FrameUpdate(ITonemapSystem* , float64);
	/* ../public/scenesystem/itonemapsystem.h:46 */
	virtual float GetCurrentTonemappingScale(const ITonemapSystem* );
	/* ../public/scenesystem/itonemapsystem.h:49 */
	virtual float GetCurrentTonemappingMinLuminance(const ITonemapSystem* );
	/* ../public/scenesystem/itonemapsystem.h:50 */
	virtual float GetCurrentTonemappingMaxLuminance(const ITonemapSystem* );
	/* ../public/scenesystem/itonemapsystem.h:53 */
	virtual void DrawDebugHistogram(ITonemapSystem* , ISceneView* , const RenderViewport_t& );
	/* ../public/scenesystem/itonemapsystem.h:56 */
	virtual IProceduralLayerRenderer* CreateTonemapRendererSingleUse(ITonemapSystem* );
	/* ../public/scenesystem/itonemapsystem.h:59 */
	virtual void SetTonemapParameters(ITonemapSystem* , SceneTonemapParameters_t* );
	/* ../public/scenesystem/itonemapsystem.h:62 */
	virtual void ResetTonemappingScale(ITonemapSystem* , float);
	/* ../public/scenesystem/itonemapsystem.h:66 */
	virtual bool ShouldPerformTonemappingOnHDRInputTexture(ITonemapSystem* );
	/* ../public/scenesystem/itonemapsystem.h:69 */
	virtual float GetDefaultTonemappingScale(const ITonemapSystem* );
	/* ../public/scenesystem/itonemapsystem.h:72 */
	virtual void OverrideScaleWithWeight(ITonemapSystem* , float, float);
	/* ../public/scenesystem/itonemapsystem.h:74 */
	virtual bool UseLogLuminance(ITonemapSystem* );
	void ~ITonemapSystem(class ITonemapSystem *); /* linkage=_ZN14ITonemapSystemD4Ev */
	void ITonemapSystem(class ITonemapSystem *, class ITonemapSystem &); /* linkage=_ZN14ITonemapSystemC4EOS_ */
	void ITonemapSystem(class ITonemapSystem *, const class ITonemapSystem  &); /* linkage=_ZN14ITonemapSystemC4ERKS_ */
	void ITonemapSystem(class ITonemapSystem *); /* linkage=_ZN14ITonemapSystemC4Ev */
	virtual void FrameUpdate(class ITonemapSystem *, float64); /* linkage=_ZN14ITonemapSystem11FrameUpdateEd */
	virtual float GetCurrentTonemappingScale(const class ITonemapSystem  *); /* linkage=_ZNK14ITonemapSystem26GetCurrentTonemappingScaleEv */
	virtual float GetCurrentTonemappingMinLuminance(const class ITonemapSystem  *); /* linkage=_ZNK14ITonemapSystem33GetCurrentTonemappingMinLuminanceEv */
	virtual float GetCurrentTonemappingMaxLuminance(const class ITonemapSystem  *); /* linkage=_ZNK14ITonemapSystem33GetCurrentTonemappingMaxLuminanceEv */
	virtual void DrawDebugHistogram(class ITonemapSystem *, class ISceneView *, const class RenderViewport_t  &); /* linkage=_ZN14ITonemapSystem18DrawDebugHistogramEP10ISceneViewRK16RenderViewport_t */
	virtual class IProceduralLayerRenderer * CreateTonemapRendererSingleUse(class ITonemapSystem *); /* linkage=_ZN14ITonemapSystem30CreateTonemapRendererSingleUseEv */
	virtual void SetTonemapParameters(class ITonemapSystem *, class SceneTonemapParameters_t *); /* linkage=_ZN14ITonemapSystem20SetTonemapParametersEP24SceneTonemapParameters_t */
	virtual void ResetTonemappingScale(class ITonemapSystem *, float); /* linkage=_ZN14ITonemapSystem21ResetTonemappingScaleEf */
	virtual bool ShouldPerformTonemappingOnHDRInputTexture(class ITonemapSystem *); /* linkage=_ZN14ITonemapSystem41ShouldPerformTonemappingOnHDRInputTextureEv */
	virtual float GetDefaultTonemappingScale(const class ITonemapSystem  *); /* linkage=_ZNK14ITonemapSystem26GetDefaultTonemappingScaleEv */
	virtual void OverrideScaleWithWeight(class ITonemapSystem *, float, float); /* linkage=_ZN14ITonemapSystem23OverrideScaleWithWeightEff */
	virtual bool UseLogLuminance(class ITonemapSystem *); /* linkage=_ZN14ITonemapSystem15UseLogLuminanceEv */
};

