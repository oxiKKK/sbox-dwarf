
//
// scenesystem/utils/tonemapsystem.h
//
//	referenced by: libengine2.so
//
//	functions: 21
//	classes: 3
//	struct: 1
//

// <03A425C6> ../scenesystem/utils/tonemapsystem.h:29
// member functions: 8
// member variables: 7
// class size: 40
class CHistogramBucket {
	HistogramEntryState_t m_state; /* 0 4 */
	RenderQueryHandle_t m_hOcclusionQueryHandle; /* 8 8 */
	int m_nFrameQueued; /* 16 4 */
	int m_nPixelsInRange; /* 20 4 */
	float m_flLuminanceMin; /* 24 4 */
	float m_flLuminanceMax; /* 28 4 */
	bool m_bIgnoreNextQueryResults; /* 32 1 */
	/* ../scenesystem/utils/tonemapsystem.h:41 */
	bool ContainsValidData(CHistogramBucket* );
	/* ../scenesystem/utils/tonemapsystem.h:49 */
	void ResetBucket(CHistogramBucket* );
	/* ../scenesystem/utils/tonemapsystem.h:55 */
	void CHistogramBucket(CHistogramBucket* );
	/* ../scenesystem/utils/tonemapsystem.h:66 */
	void ~CHistogramBucket(CHistogramBucket* );
	bool ContainsValidData(class CHistogramBucket *); /* linkage=_ZN16CHistogramBucket17ContainsValidDataEv */
	void ResetBucket(class CHistogramBucket *); /* linkage=_ZN16CHistogramBucket11ResetBucketEv */
	void CHistogramBucket(class CHistogramBucket *); /* linkage=_ZN16CHistogramBucketC4Ev */
	void ~CHistogramBucket(class CHistogramBucket *); /* linkage=_ZN16CHistogramBucketD4Ev */
};

// <03A57673> ../scenesystem/utils/tonemapsystem.h:41
inline void CHistogramBucket::ContainsValidData()
{
} /* size: 0 */

// <03A5765A> ../scenesystem/utils/tonemapsystem.h:49
inline void CHistogramBucket::ResetBucket()
{
} /* size: 0 */

// <03A57643> ../scenesystem/utils/tonemapsystem.h:55
void CHistogramBucket::CHistogramBucket()
{
} /* size: 0 */

// <03A5762A> ../scenesystem/utils/tonemapsystem.h:55
inline void CHistogramBucket::CHistogramBucket()
{
} /* size: 0 */

// <03AF4F27> ../scenesystem/utils/tonemapsystem.h:66
void CHistogramBucket::~CHistogramBucket()
{
} /* size: 0 */

// <03AF4F0E> ../scenesystem/utils/tonemapsystem.h:66
inline void CHistogramBucket::~CHistogramBucket()
{
} /* size: 0 */

// <03A426BD> ../scenesystem/utils/tonemapsystem.h:79
// member variables: 7
// struct size: 32
struct TonemapRendererData_t {
	float m_flLuminanceMin; /* 0 4 */
	float m_flLuminanceMax; /* 4 4 */
	float m_flScreenAreaWidth; /* 8 4 */
	float m_flScreenAreaHeight; /* 12 4 */
	bool m_bUseAlphaChannelForAutoExposure; /* 16 1 */
	bool m_bUseLogLuminance; /* 17 1 */
	RenderQueryHandle_t m_hOcclusionQueryHandle; /* 24 8 */
};

// <03A4AC63> ../scenesystem/utils/tonemapsystem.h:91
// function call: 1
void CTonemapRenderer::~CTonemapRenderer()
{
	IProceduralLayerRenderer::~IProceduralLayerRenderer(); // 91
} /* size: 5, inline expansions: 1 (0 bytes) */

// <03A4ABAE> ../scenesystem/utils/tonemapsystem.h:91
// function calls: 2
void CTonemapRenderer::~CTonemapRenderer()
{
	IProceduralLayerRenderer::~IProceduralLayerRenderer(); // 91
	CTonemapRenderer::~CTonemapRenderer(); // 91
} /* size: 14, inline expansions: 2 (0 bytes) */

// <03A4AB92> ../scenesystem/utils/tonemapsystem.h:91
inline void CTonemapRenderer::~CTonemapRenderer()
{
} /* size: 0 */

// <03A48E4F> ../scenesystem/utils/tonemapsystem.h:91
// member functions: 10
// member variables: 2
// vtable entry: 1
// class size: 40
class CTonemapRenderer : public IProceduralLayerRenderer {
public:
	/* class IProceduralLayerRenderer <ancestor>; */ /* 0 8 */
	void CTonemapRenderer(CTonemapRenderer* , CTonemapRenderer& );
	void CTonemapRenderer(CTonemapRenderer* , const CTonemapRenderer& );
	/* ../scenesystem/utils/tonemapsystem.h:94 */
	void CTonemapRenderer(CTonemapRenderer* , const TonemapRendererData_t& );
	/* ../scenesystem/utils/tonemapsystem.cpp:53 */
	virtual void Render(CTonemapRenderer* , ISceneView* , IRenderContext* , ISceneLayer* , SceneSystemPerFrameStats_t* );
private:
	TonemapRendererData_t m_data; /* 8 32 */
	virtual void ~CTonemapRenderer(CTonemapRenderer* );
	void CTonemapRenderer(class CTonemapRenderer *, class CTonemapRenderer &); /* linkage=_ZN16CTonemapRendererC4EOS_ */
	void CTonemapRenderer(class CTonemapRenderer *, const class CTonemapRenderer  &); /* linkage=_ZN16CTonemapRendererC4ERKS_ */
	void CTonemapRenderer(class CTonemapRenderer *, const class TonemapRendererData_t  &); /* linkage=_ZN16CTonemapRendererC4ERK21TonemapRendererData_t */
	virtual void Render(class CTonemapRenderer *, class ISceneView *, class IRenderContext *, class ISceneLayer *, class SceneSystemPerFrameStats_t *); /* linkage=_ZN16CTonemapRenderer6RenderEP10ISceneViewP14IRenderContextP11ISceneLayerP26SceneSystemPerFrameStats_t */
	virtual void ~CTonemapRenderer(class CTonemapRenderer *); /* linkage=_ZN16CTonemapRendererD4Ev */
};

// <03AF4EBF> ../scenesystem/utils/tonemapsystem.h:94
void CTonemapRenderer::CTonemapRenderer(const TonemapRendererData_t& data)
{
} /* size: 0 */

// <03AF4E9A> ../scenesystem/utils/tonemapsystem.h:94
inline void CTonemapRenderer::CTonemapRenderer(const TonemapRendererData_t& data)
{
} /* size: 0 */

// <03AF17B8> ../scenesystem/utils/tonemapsystem.h:109
void CTonemapSystem::~CTonemapSystem()
{
} /* size: 0 */

// <03AF179C> ../scenesystem/utils/tonemapsystem.h:109
inline void CTonemapSystem::~CTonemapSystem()
{
} /* size: 0 */

// <03A4856A> ../scenesystem/utils/tonemapsystem.h:109
// member functions: 53
// member variables: 21
// vtable entries: 12
// class size: 880
class CTonemapSystem : public ITonemapSystem {
public:
	/* class ITonemapSystem <ancestor>; */ /* 0 8 */
	void CTonemapSystem(CTonemapSystem* , CTonemapSystem& );
	void CTonemapSystem(CTonemapSystem* , const CTonemapSystem& );
	/* ../scenesystem/utils/tonemapsystem.cpp:126 */
	void CTonemapSystem(CTonemapSystem* );
	/* ../scenesystem/utils/tonemapsystem.h:116 */
	virtual void FrameUpdate(CTonemapSystem* , float64);
	/* ../scenesystem/utils/tonemapsystem.cpp:193 */
	virtual float GetDefaultTonemappingScale(const CTonemapSystem* );
	/* ../scenesystem/utils/tonemapsystem.cpp:307 */
	virtual float GetCurrentTonemappingScale(const CTonemapSystem* );
	/* ../scenesystem/utils/tonemapsystem.cpp:314 */
	virtual float GetCurrentTonemappingMinLuminance(const CTonemapSystem* );
	/* ../scenesystem/utils/tonemapsystem.cpp:321 */
	virtual float GetCurrentTonemappingMaxLuminance(const CTonemapSystem* );
	/* ../scenesystem/utils/tonemapsystem.cpp:1173 */
	virtual void OverrideScaleWithWeight(CTonemapSystem* , float, float);
	/* ../scenesystem/utils/tonemapsystem.cpp:367 */
	TonemapRendererData_t GenerateRendererData(CTonemapSystem* );
	/* ../scenesystem/utils/tonemapsystem.h:136 */
	virtual IProceduralLayerRenderer* CreateTonemapRendererSingleUse(CTonemapSystem* );
	/* ../scenesystem/utils/tonemapsystem.cpp:202 */
	virtual void SetTonemapParameters(CTonemapSystem* , SceneTonemapParameters_t* );
	/* ../scenesystem/utils/tonemapsystem.cpp:697 */
	virtual void ResetTonemappingScale(CTonemapSystem* , float);
	/* ../scenesystem/utils/tonemapsystem.cpp:1181 */
	virtual bool ShouldPerformTonemappingOnHDRInputTexture(CTonemapSystem* );
	/* ../scenesystem/utils/tonemapsystem.cpp:997 */
	virtual void DrawDebugHistogram(CTonemapSystem* , ISceneView* , const RenderViewport_t& );
	/* ../scenesystem/utils/tonemapsystem.h:150 */
	virtual bool UseLogLuminance(CTonemapSystem* );
	/* ../scenesystem/utils/tonemapsystem.h:155 */
	int GetNumHistogramBuckets(const CTonemapSystem* );
private:
	/* ../scenesystem/utils/tonemapsystem.cpp:238 */
	void UpdateCurrentTonemapParameters(CTonemapSystem* );
	/* ../scenesystem/utils/tonemapsystem.cpp:461 */
	void UpdateBucketRanges(CTonemapSystem* );
	/* ../scenesystem/utils/tonemapsystem.h:166 */
	void IncrementQueryFrame(CTonemapSystem* );
	/* ../scenesystem/utils/tonemapsystem.cpp:329 */
	void ReceiveBucketQueries(CTonemapSystem* );
	/* ../scenesystem/utils/tonemapsystem.cpp:517 */
	float FindLocationOfPercentBrightPixels(CTonemapSystem* , float, float);
	/* ../scenesystem/utils/tonemapsystem.cpp:569 */
	float ComputeTargetTonemapScalar(CTonemapSystem* , bool);
	/* ../scenesystem/utils/tonemapsystem.cpp:722 */
	void CalculateCurrentTonemapScalar(CTonemapSystem* , float64);
	/* ../scenesystem/utils/tonemapsystem.cpp:622 */
	float ComputeTargetExposureLogLuminance(CTonemapSystem* );
	/* ../scenesystem/utils/tonemapsystem.h:177 */
	float GetTargetTonemappingScale(CTonemapSystem* );
	CHistogramBucket m_histogramBucketArray[16]; /* 8 640 */
	int m_nCurrentQueryFrame; /* 648 4 */
	float m_flTargetTonemapScale; /* 652 4 */
	float m_flCurrentTonemapScale; /* 656 4 */
	float m_flTonemapScaleForShader; /* 660 4 */
	float m_flOverriddenTonemapWeight; /* 664 4 */
	float m_flOverriddenTonemapScale; /* 668 4 */
	float m_flOverriddenTimestamp; /* 672 4 */
	float m_flTargetRangeMinLum; /* 676 4 */
	float m_flTargetRangeMaxLum; /* 680 4 */
	int m_nNumMovingAverageValid; /* 684 4 */
	float m_movingAverageTonemapScale[10]; /* 688 40 */
	float64 m_flLastTime; /* 728 8 */
	SceneTonemapParameters_t m_paramsSystemDefaults; /* 736 44 */
	SceneTonemapParameters_t m_paramsExternalOverrides; /* 780 44 */
	SceneTonemapParameters_t m_paramsCurrent; /* 824 44 */
	bool m_bUseAlphaChannelForAutoExposure; /* 868 1 */
	bool m_bUseLogLuminanceForHistogram; /* 869 1 */
	bool m_bUsesHDRBackBuffer; /* 870 1 */
	int32 m_nNumHistogramBuckets; /* 872 4 */
	void CTonemapSystem(class CTonemapSystem *, class CTonemapSystem &); /* linkage=_ZN14CTonemapSystemC4EOS_ */
	void CTonemapSystem(class CTonemapSystem *, const class CTonemapSystem  &); /* linkage=_ZN14CTonemapSystemC4ERKS_ */
	void CTonemapSystem(class CTonemapSystem *); /* linkage=_ZN14CTonemapSystemC4Ev */
	virtual void FrameUpdate(class CTonemapSystem *, float64); /* linkage=_ZN14CTonemapSystem11FrameUpdateEd */
	/* <3a5c477> ../scenesystem/utils/tonemapsystem.cpp:193 */
	virtual float GetDefaultTonemappingScale(const class CTonemapSystem  *); /* linkage=_ZNK14CTonemapSystem26GetDefaultTonemappingScaleEv */
	virtual float GetCurrentTonemappingScale(const class CTonemapSystem  *); /* linkage=_ZNK14CTonemapSystem26GetCurrentTonemappingScaleEv */
	virtual float GetCurrentTonemappingMinLuminance(const class CTonemapSystem  *); /* linkage=_ZNK14CTonemapSystem33GetCurrentTonemappingMinLuminanceEv */
	virtual float GetCurrentTonemappingMaxLuminance(const class CTonemapSystem  *); /* linkage=_ZNK14CTonemapSystem33GetCurrentTonemappingMaxLuminanceEv */
	virtual void OverrideScaleWithWeight(class CTonemapSystem *, float, float); /* linkage=_ZN14CTonemapSystem23OverrideScaleWithWeightEff */
	class TonemapRendererData_t GenerateRendererData(class CTonemapSystem *); /* linkage=_ZN14CTonemapSystem20GenerateRendererDataEv */
	virtual class IProceduralLayerRenderer * CreateTonemapRendererSingleUse(class CTonemapSystem *); /* linkage=_ZN14CTonemapSystem30CreateTonemapRendererSingleUseEv */
	virtual void SetTonemapParameters(class CTonemapSystem *, class SceneTonemapParameters_t *); /* linkage=_ZN14CTonemapSystem20SetTonemapParametersEP24SceneTonemapParameters_t */
	virtual void ResetTonemappingScale(class CTonemapSystem *, float); /* linkage=_ZN14CTonemapSystem21ResetTonemappingScaleEf */
	virtual bool ShouldPerformTonemappingOnHDRInputTexture(class CTonemapSystem *); /* linkage=_ZN14CTonemapSystem41ShouldPerformTonemappingOnHDRInputTextureEv */
	/* <3a5e3ef> ../scenesystem/utils/tonemapsystem.cpp:997 */
	virtual void DrawDebugHistogram(class CTonemapSystem *, class ISceneView *, const class RenderViewport_t  &); /* linkage=_ZN14CTonemapSystem18DrawDebugHistogramEP10ISceneViewRK16RenderViewport_t */
	virtual bool UseLogLuminance(class CTonemapSystem *); /* linkage=_ZN14CTonemapSystem15UseLogLuminanceEv */
	int GetNumHistogramBuckets(const class CTonemapSystem  *); /* linkage=_ZNK14CTonemapSystem22GetNumHistogramBucketsEv */
	void UpdateCurrentTonemapParameters(class CTonemapSystem *); /* linkage=_ZN14CTonemapSystem30UpdateCurrentTonemapParametersEv */
	void UpdateBucketRanges(class CTonemapSystem *); /* linkage=_ZN14CTonemapSystem18UpdateBucketRangesEv */
	void IncrementQueryFrame(class CTonemapSystem *); /* linkage=_ZN14CTonemapSystem19IncrementQueryFrameEv */
	void ReceiveBucketQueries(class CTonemapSystem *); /* linkage=_ZN14CTonemapSystem20ReceiveBucketQueriesEv */
	float FindLocationOfPercentBrightPixels(class CTonemapSystem *, float, float); /* linkage=_ZN14CTonemapSystem33FindLocationOfPercentBrightPixelsEff */
	/* <3a5c83a> ../scenesystem/utils/tonemapsystem.cpp:569 */
	float ComputeTargetTonemapScalar(class CTonemapSystem *, bool); /* linkage=_ZN14CTonemapSystem26ComputeTargetTonemapScalarEb */
	void CalculateCurrentTonemapScalar(class CTonemapSystem *, float64); /* linkage=_ZN14CTonemapSystem29CalculateCurrentTonemapScalarEd */
	float ComputeTargetExposureLogLuminance(class CTonemapSystem *); /* linkage=_ZN14CTonemapSystem33ComputeTargetExposureLogLuminanceEv */
	float GetTargetTonemappingScale(class CTonemapSystem *); /* linkage=_ZN14CTonemapSystem25GetTargetTonemappingScaleEv */
	void ~CTonemapSystem(class CTonemapSystem *); /* linkage=_ZN14CTonemapSystemD4Ev */
};

// <03AE0531> ../scenesystem/utils/tonemapsystem.h:113
void CTonemapSystem::CTonemapSystem()
{
} /* size: 0 */

// <03AF4E70> ../scenesystem/utils/tonemapsystem.h:116
void CTonemapSystem::FrameUpdate(float64 flFrameTime)
{
} /* size: 0 */

// <03A574DC> ../scenesystem/utils/tonemapsystem.h:116
// function call: 1
void CTonemapSystem::FrameUpdate(float64 flFrameTime)
{
	CTonemapSystem::IncrementQueryFrame(); // 120
} /* size: 64, inline expansions: 1 (7 bytes) */

// <03AF4E58> ../scenesystem/utils/tonemapsystem.h:136
void CTonemapSystem::CreateTonemapRendererSingleUse()
{
} /* size: 0 */

// <03A573F2> ../scenesystem/utils/tonemapsystem.h:136
// function calls: 2
void CTonemapSystem::CreateTonemapRendererSingleUse()
{
	IProceduralLayerRenderer::IProceduralLayerRenderer(); // 95
	CTonemapRenderer::CTonemapRenderer(
			const TonemapRendererData_t& data);  // 138
} /* size: 127, inline expansions: 2 (46 bytes) */

// <03AF4E40> ../scenesystem/utils/tonemapsystem.h:150
void CTonemapSystem::UseLogLuminance()
{
} /* size: 0 */

// <03AF4E28> ../scenesystem/utils/tonemapsystem.h:166
void CTonemapSystem::IncrementQueryFrame()
{
} /* size: 0 */

// <03A57390> ../scenesystem/utils/tonemapsystem.h:166
inline void CTonemapSystem::IncrementQueryFrame()
{
} /* size: 0 */

