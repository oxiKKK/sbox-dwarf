
//
// scenesystem/lightbinner_standard.h
//
//	referenced by: libengine2.so
//
//	functions: 21
//	class: 1
//	structs: 7
//

// <02C18333> ../scenesystem/utils/../lightbinner_standard.h:41
// member variables: 2
// struct size: 16
struct LightIndexMapping {
	int Baked; /* 0 4 */
	int Padding[3]; /* 4 12 */
};

// <02C3FA26> ../scenesystem/utils/../lightbinner_standard.h:47
void ViewLightingConfig::ViewLightingConfig()
{
} /* size: 0 */

// <02C3FA0A> ../scenesystem/utils/../lightbinner_standard.h:47
inline void ViewLightingConfig::ViewLightingConfig()
{
} /* size: 0 */

// <02C1835F> ../scenesystem/utils/../lightbinner_standard.h:47
// member function: 1
// member variables: 3
// struct size: 4,128
struct ViewLightingConfig {
	int NumLights[4]; /* 0 16 */
	LightIndexMapping LightIndexMapping[256]; /* 16 4096 */
	Vector4D AmbientLightColor; /* 4112 16 */
	void ViewLightingConfig(ViewLightingConfig* );
};

// <02C183D4> ../scenesystem/utils/../lightbinner_standard.h:63
// member variables: 7
// struct size: 4,272
struct ViewLightingConfigV1 {
	int ViewLightingFlags[4]; /* 0 16 */
	int NumLights[4]; /* 16 16 */
	LightIndexMapping LightIndexMapping[256]; /* 32 4096 */
	Vector4D Shadow3x3PCFConstants[4]; /* 4128 64 */
	Vector4D EnvironmentMapSizeConstants; /* 4192 16 */
	Vector4D LegacyAmbientLightColor[3]; /* 4208 48 */
	Vector4D AmbientLightColor; /* 4256 16 */
};

// <02C3BA20> ../scenesystem/utils/../lightbinner_standard.h:94
void GPULight::GPULight()
{
} /* size: 0 */

// <02C3BA04> ../scenesystem/utils/../lightbinner_standard.h:94
inline void GPULight::GPULight()
{
} /* size: 0 */

// <02C2A820> ../scenesystem/utils/../lightbinner_standard.h:94
void GPULight::GPULight(const GPULight &)
{
} /* size: 0 */

// <02C2A7FF> ../scenesystem/utils/../lightbinner_standard.h:94
inline void GPULight::GPULight(const GPULight &)
{
} /* size: 0 */

// <02C18471> ../scenesystem/utils/../lightbinner_standard.h:94
// member functions: 2
// member variables: 16
// struct size: 148
struct GPULight {
	uint Type; /* 0 4 */
	uint Shape; /* 4 4 */
	uint Flags; /* 8 4 */
	VMatrix LightToWorld; /* 12 64 */
	Vector Color; /* 76 12 */
	float LinearFalloff; /* 88 4 */
	float QuadraticFalloff; /* 92 4 */
	float FalloffBias; /* 96 4 */
	float Radius; /* 100 4 */
	float RadiusSquared; /* 104 4 */
	Vector2D ShapeSize; /* 108 8 */
	Vector4D SpotLightInnerOuterConeCosines; /* 116 16 */
	float FogIntensity; /* 132 4 */
	uint ShadowMapIndex; /* 136 4 */
	uint LightCookieTextureIndex; /* 140 4 */
	uint ShadowMaskTextureIndex; /* 144 4 */
	void GPULight(GPULight* , const GPULight& );
	void GPULight(GPULight* );
};

// <02C33EE1> ../scenesystem/utils/../lightbinner_standard.h:129
void GPUDecal::GPUDecal()
{
} /* size: 0 */

// <02C33EC5> ../scenesystem/utils/../lightbinner_standard.h:129
inline void GPUDecal::GPUDecal()
{
} /* size: 0 */

// <02C24F91> ../scenesystem/utils/../lightbinner_standard.h:129
inline void GPUDecal::operator=(GPUDecal &)
{
} /* size: 0 */

// <02C185B0> ../scenesystem/utils/../lightbinner_standard.h:129
// member functions: 2
// member variables: 8
// struct size: 64
struct GPUDecal {
	Vector Position; /* 0 12 */
	Quaternion Rotation; /* 12 16 */
	Vector Scale; /* 28 12 */
	uint64_t PackedTextureIndex; /* 40 8 */
	uint32_t SortOrder; /* 48 4 */
	uint32_t ExclusionBitMask; /* 52 4 */
	uint32_t ColorTint; /* 56 4 */
	int32_t ExtraDataOffset; /* 60 4 */
	GPUDecal& operator=(GPUDecal* , GPUDecal& );
	void GPUDecal(GPUDecal* );
};

// <02C28D9C> ../scenesystem/utils/../lightbinner_standard.h:145
void GPUDecalExtraData::GPUDecalExtraData(const GPUDecalExtraData &)
{
} /* size: 0 */

// <02C28D7B> ../scenesystem/utils/../lightbinner_standard.h:145
inline void GPUDecalExtraData::GPUDecalExtraData(const GPUDecalExtraData &)
{
} /* size: 0 */

// <02C18678> ../scenesystem/utils/../lightbinner_standard.h:145
// member function: 1
// member variables: 9
// struct size: 48
struct GPUDecalExtraData {
	Vector4D SheetData; /* 0 16 */
	uint SequenceIndex; /* 16 4 */
	float ColorMix; /* 20 4 */
	uint FeatureFlags; /* 24 4 */
	uint HeightTextureIndex; /* 28 4 */
	float ParallaxStrength; /* 32 4 */
	int SamplerIndex; /* 36 4 */
	uint EmissionTextureIndex; /* 40 4 */
	float EmissionEnergy; /* 44 4 */
	void GPUDecalExtraData(GPUDecalExtraData* , const GPUDecalExtraData& );
};

// <02C34782> ../scenesystem/utils/../lightbinner_standard.h:160
void EnvironmentMapConstants::EnvironmentMapConstants()
{
} /* size: 0 */

// <02C34766> ../scenesystem/utils/../lightbinner_standard.h:160
inline void EnvironmentMapConstants::EnvironmentMapConstants()
{
} /* size: 0 */

// <02C2A5BB> ../scenesystem/utils/../lightbinner_standard.h:160
void EnvironmentMapConstants::EnvironmentMapConstants(const EnvironmentMapConstants &)
{
} /* size: 0 */

// <02C2A59A> ../scenesystem/utils/../lightbinner_standard.h:160
inline void EnvironmentMapConstants::EnvironmentMapConstants(const EnvironmentMapConstants &)
{
} /* size: 0 */

// <02C27246> ../scenesystem/utils/../lightbinner_standard.h:160
void EnvironmentMapConstants::EnvironmentMapConstants(EnvironmentMapConstants &)
{
} /* size: 0 */

// <02C27225> ../scenesystem/utils/../lightbinner_standard.h:160
inline void EnvironmentMapConstants::EnvironmentMapConstants(EnvironmentMapConstants &)
{
} /* size: 0 */

// <02C27204> ../scenesystem/utils/../lightbinner_standard.h:160
inline void EnvironmentMapConstants::operator=(EnvironmentMapConstants &)
{
} /* size: 0 */

// <02C1872F> ../scenesystem/utils/../lightbinner_standard.h:160
// member functions: 4
// member variables: 6
// struct size: 128
struct EnvironmentMapConstants {
	matrix3x4a_t WorldToLocal __attribute__((__aligned__(16))); /* 0 48 */
	Vector4D BoxMins; /* 48 16 */
	Vector4D BoxMaxs; /* 64 16 */
	Vector4D Color; /* 80 16 */
	Vector4D NormalizationSH; /* 96 16 */
	uint Attributes[4]; /* 112 16 */
	EnvironmentMapConstants& operator=(EnvironmentMapConstants* , EnvironmentMapConstants& );
	void EnvironmentMapConstants(EnvironmentMapConstants* , EnvironmentMapConstants& );
	void EnvironmentMapConstants(EnvironmentMapConstants* , const EnvironmentMapConstants& );
	void EnvironmentMapConstants(EnvironmentMapConstants* );
} __attribute__((__aligned__(16)));

// <02C0B11D> ../scenesystem/utils/../lightbinner_standard.h:171
// member functions: 40
// member variables: 23
// vtable entries: 3
// class size: 4,984
class CLightBinnerStandard : public CLightBinner2 {
public:
	/* class CLightBinner2 <ancestor>; */ /* 0 0 */
	void CLightBinnerStandard(CLightBinnerStandard* , const CLightBinnerStandard& );
	/* ../scenesystem/lightbinner_standard.cpp:31 */
	void CLightBinnerStandard(CLightBinnerStandard* );
	/* ../scenesystem/lightbinner_standard.cpp:43 */
	void ~CLightBinnerStandard(CLightBinnerStandard* );
	/* ../scenesystem/utils/../lightbinner_standard.h:179 */
	bool DidUpdateConstantBuffers(const CLightBinnerStandard* );
	/* ../scenesystem/utils/../lightbinner_standard.h:180 */
	void SetUpdatedConstantBuffers(CLightBinnerStandard* , bool);
	/* ../scenesystem/lightbinner_standard.cpp:680 */
	virtual void SetRenderAttributesForLightProbeVolume(CLightBinnerStandard* , LightProbeVolumeBinding_t, CRenderAttributes& );
	/* ../scenesystem/lightbinner_standard.cpp:562 */
	void InitForView(CLightBinnerStandard* , CSceneView* , ESceneObjectFlags, ESceneObjectFlags, SceneSystemPerFrameStats_t& );
	/* ../scenesystem/lightbinner_standard.cpp:638 */
	virtual void SetShaderAttributes(CLightBinnerStandard* , CRenderAttributes& );
	bool m_bShadowsEnabled; /* 376 1 */
	CUtlVector<const CSceneLightObjectInternal*, CUtlMemory<const CSceneLightObjectInternal*, int> > m_binnedLights; /* 384 32 */
	/* ../scenesystem/lightbinner_standard.cpp:76 */
	void AddDecal(CLightBinnerStandard* , const CDecalSceneObject* , const VisibleSceneObject_t& );
	/* ../scenesystem/lightbinner_standard.cpp:90 */
	void AddLight(CLightBinnerStandard* , CSceneLightObjectInternal* , const VisibleSceneObject_t& );
private:
	CThreadMutex m_visibleDecalsLock; /* 416 72 */
	CUtlVector<const CDecalSceneObject*, CUtlMemory<const CDecalSceneObject*, int> > m_visibleDecalObjects; /* 488 32 */
	CThreadMutex m_visibleSceneLightsLock; /* 520 72 */
	CUtlVector<const CSceneLightObjectInternal*, CUtlMemory<const CSceneLightObjectInternal*, int> > m_visibleSceneLightObjects; /* 592 32 */
	/* ../scenesystem/lightbinner_standard.cpp:117 */
	void ShadowSetup_ResetLightAllocations(CLightBinnerStandard* );
	/* ../scenesystem/lightbinner_standard.cpp:135 */
	bool GatherVisibleLights(CLightBinnerStandard* , CUtlVector<const CSceneLightObjectInternal*, CUtlMemory<const CSceneLightObjectInternal*, int> >& , CSceneView* , const CFrustum& , ESceneObjectFlags, ESceneObjectFlags);
	/* ../scenesystem/lightbinner_standard.cpp:287 */
	void SetupShadowsForLight(CLightBinnerStandard* , const CSceneLightObjectInternal* , CSceneView* , GPULight* , SceneSystemPerFrameStats_t& );
	/* ../scenesystem/lightbinner_standard.cpp:322 */
	void AddLight(CLightBinnerStandard* , const CSceneLightObjectInternal* , CSceneView* , SceneSystemPerFrameStats_t& );
	/* ../scenesystem/lightbinner_standard.cpp:484 */
	void AllocateLights(CLightBinnerStandard* , const CUtlVector<const CSceneLightObjectInternal*, CUtlMemory<const CSceneLightObjectInternal*, int> >& , CSceneView* , SceneSystemPerFrameStats_t& );
	bool m_bUpdatedConstantBuffers; /* 624 1 */
	/* ../scenesystem/lightbinner_standard.cpp:801 */
	virtual bool UploadLightingToGPU(CLightBinnerStandard* , IRenderContext* );
	CThreadFastMutex m_BinnedLightsMutex; /* 632 24 */
protected:
	ConstantBufferHandle_t m_hViewLightingConfig; /* 656 8 */
	RenderBufferHandle_t m_hBinnedLightsBuffer; /* 664 8 */
	ConstantBufferHandle_t m_hViewLightingConfigV2; /* 672 8 */
	RenderBufferHandle_t m_hBinnedLightsBufferV2; /* 680 8 */
	RenderBufferHandle_t m_hEnvMapConstantsBuffer; /* 688 8 */
	RenderBufferHandle_t m_hDecalsBuffer; /* 696 8 */
	RenderBufferHandle_t m_hDecalsExtraDataBuffer; /* 704 8 */
	CUtlVector<GPULight, CUtlMemory<GPULight, int> > m_pBinnedLightsListGPU; /* 712 32 */
	CUtlVector<EnvironmentMapConstants, CUtlMemory<EnvironmentMapConstants, int> > m_pBinnedEnvMapsListGPU; /* 744 32 */
	CUtlVector<GPUDecal, CUtlMemory<GPUDecal, int> > m_pBinnedDecalsListGPU; /* 776 32 */
	CUtlVector<GPUDecalExtraData, CUtlMemory<GPUDecalExtraData, int> > m_pBinnedDecalsExtraDataListGPU; /* 808 32 */
	ViewLightingConfig m_pViewLightingConfig; /* 840 4128 */
	CSceneView * m_pPrimaryView; /* 4968 8 */
	const class CSceneLightObject * m_pDirectionalLightObject; /* 4976 8 */
	/* ../scenesystem/lightbinner_standard.cpp:699 */
	void InitializeGfxResources(CLightBinnerStandard* );
	/* ../scenesystem/lightbinner_standard.cpp:824 */
	void FillLightingConfigConstants(CLightBinnerStandard* , const CSceneView* , ViewLightingConfig& );
	/* ../scenesystem/lightbinner_standard.cpp:832 */
	void AddEnvironmentMapsForView(CLightBinnerStandard* , CSceneView* );
	/* ../scenesystem/lightbinner_standard.cpp:920 */
	void UploadLightingBuffers(CLightBinnerStandard* , IRenderContext* );
	void CLightBinnerStandard(class CLightBinnerStandard *, const class CLightBinnerStandard  &); /* linkage=_ZN20CLightBinnerStandardC4ERKS_ */
	void CLightBinnerStandard(class CLightBinnerStandard *); /* linkage=_ZN20CLightBinnerStandardC4Ev */
	void ~CLightBinnerStandard(class CLightBinnerStandard *); /* linkage=_ZN20CLightBinnerStandardD4Ev */
	bool DidUpdateConstantBuffers(const class CLightBinnerStandard  *); /* linkage=_ZNK20CLightBinnerStandard24DidUpdateConstantBuffersEv */
	void SetUpdatedConstantBuffers(class CLightBinnerStandard *, bool); /* linkage=_ZN20CLightBinnerStandard25SetUpdatedConstantBuffersEb */
	virtual void SetRenderAttributesForLightProbeVolume(class CLightBinnerStandard *, class LightProbeVolumeBinding_t, class CRenderAttributes &); /* linkage=_ZN20CLightBinnerStandard38SetRenderAttributesForLightProbeVolumeE25LightProbeVolumeBinding_tR17CRenderAttributes */
	void InitForView(class CLightBinnerStandard *, class CSceneView *, enum ESceneObjectFlags, enum ESceneObjectFlags, class SceneSystemPerFrameStats_t &); /* linkage=_ZN20CLightBinnerStandard11InitForViewEP10CSceneView17ESceneObjectFlagsS2_R26SceneSystemPerFrameStats_t */
	virtual void SetShaderAttributes(class CLightBinnerStandard *, class CRenderAttributes &); /* linkage=_ZN20CLightBinnerStandard19SetShaderAttributesER17CRenderAttributes */
	void AddDecal(class CLightBinnerStandard *, const class CDecalSceneObject  *, const class VisibleSceneObject_t  &); /* linkage=_ZN20CLightBinnerStandard8AddDecalEPK17CDecalSceneObjectRK20VisibleSceneObject_t */
	void AddLight(class CLightBinnerStandard *, class CSceneLightObjectInternal *, const class VisibleSceneObject_t  &); /* linkage=_ZN20CLightBinnerStandard8AddLightEP25CSceneLightObjectInternalRK20VisibleSceneObject_t */
	/* <2c4adae> ../scenesystem/lightbinner_standard.cpp:117 */
	void ShadowSetup_ResetLightAllocations(class CLightBinnerStandard *); /* linkage=_ZN20CLightBinnerStandard33ShadowSetup_ResetLightAllocationsEv */
	bool GatherVisibleLights(class CLightBinnerStandard *, class CUtlVector<const CSceneLightObjectInternal*, CUtlMemory<const CSceneLightObjectInternal*, int> > &, class CSceneView *, const class CFrustum  &, enum ESceneObjectFlags, enum ESceneObjectFlags); /* linkage=_ZN20CLightBinnerStandard19GatherVisibleLightsER10CUtlVectorIPK25CSceneLightObjectInternal10CUtlMemoryIS3_iEEP10CSceneViewRK8CFrustum17ESceneObjectFlagsSD_ */
	void SetupShadowsForLight(class CLightBinnerStandard *, const class CSceneLightObjectInternal  *, class CSceneView *, class GPULight *, class SceneSystemPerFrameStats_t &); /* linkage=_ZN20CLightBinnerStandard20SetupShadowsForLightEPK25CSceneLightObjectInternalP10CSceneViewP8GPULightR26SceneSystemPerFrameStats_t */
	void AddLight(class CLightBinnerStandard *, const class CSceneLightObjectInternal  *, class CSceneView *, class SceneSystemPerFrameStats_t &); /* linkage=_ZN20CLightBinnerStandard8AddLightEPK25CSceneLightObjectInternalP10CSceneViewR26SceneSystemPerFrameStats_t */
	void AllocateLights(class CLightBinnerStandard *, const class CUtlVector<const CSceneLightObjectInternal*, CUtlMemory<const CSceneLightObjectInternal*, int> >  &, class CSceneView *, class SceneSystemPerFrameStats_t &); /* linkage=_ZN20CLightBinnerStandard14AllocateLightsERK10CUtlVectorIPK25CSceneLightObjectInternal10CUtlMemoryIS3_iEEP10CSceneViewR26SceneSystemPerFrameStats_t */
	/* <2c4aea4> ../scenesystem/lightbinner_standard.cpp:801 */
	virtual bool UploadLightingToGPU(class CLightBinnerStandard *, class IRenderContext *); /* linkage=_ZN20CLightBinnerStandard19UploadLightingToGPUEP14IRenderContext */
	void InitializeGfxResources(class CLightBinnerStandard *); /* linkage=_ZN20CLightBinnerStandard22InitializeGfxResourcesEv */
	void FillLightingConfigConstants(class CLightBinnerStandard *, const class CSceneView  *, class ViewLightingConfig &); /* linkage=_ZN20CLightBinnerStandard27FillLightingConfigConstantsEPK10CSceneViewR18ViewLightingConfig */
	void AddEnvironmentMapsForView(class CLightBinnerStandard *, class CSceneView *); /* linkage=_ZN20CLightBinnerStandard25AddEnvironmentMapsForViewEP10CSceneView */
	void UploadLightingBuffers(class CLightBinnerStandard *, class IRenderContext *); /* linkage=_ZN20CLightBinnerStandard21UploadLightingBuffersEP14IRenderContext */
};

// <02E0F015> ../scenesystem/lightbinner_standard.h:176
void CLightBinnerStandard::~CLightBinnerStandard()
{
} /* size: 0 */

// <02C3FB9A> ../scenesystem/utils/../lightbinner_standard.h:179
inline void CLightBinnerStandard::DidUpdateConstantBuffers()
{
} /* size: 0 */

// <02C3FB75> ../scenesystem/utils/../lightbinner_standard.h:180
inline void CLightBinnerStandard::SetUpdatedConstantBuffers(bool bUpdated)
{
} /* size: 0 */

