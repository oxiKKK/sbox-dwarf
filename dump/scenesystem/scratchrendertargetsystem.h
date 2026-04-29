
//
// scenesystem/scratchrendertargetsystem.h
//
//	referenced by: libengine2.so
//
//	functions: 10
//	classes: 2
//	struct: 1
//

// <03200DF8> ../scenesystem/scratchrendertargetsystem.h:33
// member variable: 1
// struct size: 8
struct OtherTargetInfo_t {
	HRenderTexture m_hRenderTexture; /* 0 8 */
};

// <0323AB60> ../scenesystem/scratchrendertargetsystem.h:50
void CScratchRenderTargetSystem::CScratchRenderTargetSystem()
{
} /* size: 0 */

// <0323AB44> ../scenesystem/scratchrendertargetsystem.h:50
inline void CScratchRenderTargetSystem::CScratchRenderTargetSystem()
{
} /* size: 0 */

// <0323AB2D> ../scenesystem/scratchrendertargetsystem.h:50
void CScratchRenderTargetSystem::~CScratchRenderTargetSystem()
{
} /* size: 0 */

// <0323AB11> ../scenesystem/scratchrendertargetsystem.h:50
inline void CScratchRenderTargetSystem::~CScratchRenderTargetSystem()
{
} /* size: 0 */

// <03200E15> ../scenesystem/scratchrendertargetsystem.h:50
// member functions: 105
// member variables: 4
// static member variable: 1
// class size: 5,400
class CScratchRenderTargetSystem {
	/* ../scenesystem/scratchrendertargetsystem.h:89 */
	enum RenderTargetType_t {
		RT_TYPE_SCRATCH = 0,
		RT_TYPE_HRENDERTEXTURE = 1,
		RT_TYPE_ALIAS = 2,
	};
	/* ../scenesystem/scratchrendertargetsystem.h:96 */
	enum RenderTargetAliasType_t {
		RT_ALIAS_ORIGINAL = 0,
		RT_ALIAS_NOMSAA_COPY = 1,
		RT_ALIAS_MSAA_COPY = 2,
		RT_ALIAS_COUNT = 3,
	};
	/* ../scenesystem/scratchrendertargetsystem.h:105 */
	enum LayerOutputType_t {
		LOT_OUTPUT_COLOR = 0,
		LOT_OUTPUT_DEPTH = 1,
		LOT_OUTPUT_ATTRIBUTE = 2,
	};
	/* ../scenesystem/scratchrendertargetsystem.h:121 */
	enum LayerRemovalReason_t {
		LAYER_REMOVAL_REASON_NOT_REMOVED = 0,
		LAYER_REMOVAL_REASON_HAD_ERROR = 1,
		LAYER_REMOVAL_REASON_OUTPUT_UNUSED = 2,
	};
	/* ../scenesystem/scratchrendertargetsystem.h:135 */
	struct RenderTargetInfo_t {
		RenderTargetId_t m_Id; /* 0 32 */
		RenderTargetType_t m_Type; /* 32 4 */
		HRenderTexture m_hTexture; /* 40 8 */
		SwapChainHandle_t m_hSwapChain; /* 48 8 */
		CTextureDesc m_Info; /* 56 28 */
		uint16 m_nRequestedWidth; /* 84 2 */
		uint16 m_nRequestedHeight; /* 86 2 */
		RenderMultisampleType_t m_nMultisampleType; /* 88 4 */
		CSceneView * m_pOtherView; /* 96 8 */
		int16 m_nOtherIndex; /* 104 2 */
		int16 m_nMustMatchOtherTargetSize; /* 106 2 */
		int16 m_nUnused; /* 108 2 */
		CUtlVector<ImageFormat, CUtlMemory<ImageFormat, int> > m_otherTargetMatchFormats; /* 112 32 */
		uint16 m_bHasMatchingTargets:1; /* 144: 0 2 */
		uint16 m_bHasSharedHiZTargets:1; /* 144: 1 2 */
		uint16 m_bIsWrittenToByExternalView:1; /* 144: 2 2 */
		uint16 m_bIsReadFirstByExternalView:1; /* 144: 3 2 */
		uint16 m_bIsExternalAlias:1; /* 144: 4 2 */
		uint16 m_bIsReadAfterRendering:1; /* 144: 5 2 */
		uint16 m_nAliasUsageFlags:4; /* 144: 6 2 */
		uint16 m_nFlags:6; /* 144:10 2 */
		void ~RenderTargetInfo_t(RenderTargetInfo_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../scenesystem/scratchrendertargetsystem.h:160 */
	struct InputInfo_t {
		uint8 m_bSamplingFromOriginal:1; /* 0: 0 1 */
		uint8 m_nMultisampleType:3; /* 0: 1 1 */
	};
	/* ../scenesystem/scratchrendertargetsystem.h:166 */
	struct OutputInfo_t {
		uint8 m_nOutputType:2; /* 0: 0 1 */
		uint8 m_nResolveMask:3; /* 0: 2 1 */
		uint8 m_nMultisampleType:3; /* 0: 5 1 */
	};
	/* ../scenesystem/scratchrendertargetsystem.h:173 */
	struct LayerInfo_t {
		int m_hLayerHandle; /* 0 4 */
		int m_nOutputCount; /* 4 4 */
		int m_nInputCount; /* 8 4 */
		int m_pOutputs[32]; /* 12 128 */
		int m_pInputs[32]; /* 140 128 */
		CUtlStringToken m_pOutputAttributeName[32]; /* 268 128 */
		CUtlStringToken m_pInputAttributeName[32]; /* 396 128 */
		InputInfo_t m_pInputInfo[32]; /* 524 32 */
		OutputInfo_t m_pOutputInfo[32]; /* 556 32 */
		uint64 m_OutputMask; /* 592 8 */
		uint64 m_InputMask; /* 600 8 */
		uint64 m_DiscardMask; /* 608 8 */
		uint64 m_PreserveMask; /* 616 8 */
		uint8 m_bError:1; /* 624: 0 1 */
		uint8 m_bCanBeDiscarded:1; /* 624: 1 1 */
		LayerRemovalReason_t m_nRemovalReason; /* 628 4 */
		RenderColorSpace_t m_allowSrgbWrites; /* 632 1 */
		SwapChainHandle_t m_hDebugSwapChain; /* 640 8 */
		RenderMultisampleType_t m_nDebugMultisampleType; /* 648 4 */
		const char * m_pLayerDebugName; /* 656 8 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../scenesystem/scratchrendertargetsystem.h:198 */
	struct RenderTargetStateAlias_t {
		HRenderTexture m_hRenderTexture; /* 0 8 */
		int16 m_nFirstLayerUsed; /* 8 2 */
		int16 m_nLastLayerUsed; /* 10 2 */
		int16 m_nScratchRTIndex; /* 12 2 */
	};
	/* ../scenesystem/scratchrendertargetsystem.h:213 */
	struct RenderTargetState_t {
		RenderTargetStateAlias_t m_pAlias[3]; /* 0 48 */
		uint8 m_bIsMSAAAvailable:1; /* 48: 0 1 */
		uint8 m_nBestFitSizeType:2; /* 48: 1 1 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../scenesystem/scratchrendertargetsystem.h:55 */
	void Init(CScratchRenderTargetSystem* , CSceneView* );
	/* ../scenesystem/scratchrendertargetsystem.h:56 */
	void PushNamedRenderTargetScope(CScratchRenderTargetSystem* , const char* );
	/* ../scenesystem/scratchrendertargetsystem.h:57 */
	void PopNamedRenderTargetScope(CScratchRenderTargetSystem* );
	/* ../scenesystem/scratchrendertargetsystem.h:58 */
	HSceneViewRenderTarget FindOrCreateRenderTarget(CScratchRenderTargetSystem* , const char* , HRenderTexture, SceneViewRenderTargetFlags_t);
	/* ../scenesystem/scratchrendertargetsystem.h:59 */
	HSceneViewRenderTarget FindOrCreateRenderTarget(CScratchRenderTargetSystem* , const char* , SwapChainHandle_t, SwapChainBuffer_t, SceneViewRenderTargetFlags_t);
	/* ../scenesystem/scratchrendertargetsystem.h:60 */
	HSceneViewRenderTarget FindOrCreateRenderTarget(CScratchRenderTargetSystem* , const char* , const SceneViewRenderTargetInfo_t& , SceneViewRenderTargetFlags_t);
	/* ../scenesystem/scratchrendertargetsystem.h:61 */
	HSceneViewRenderTarget FindOrCreateRenderTarget(CScratchRenderTargetSystem* , const char* , const char* );
	/* ../scenesystem/scratchrendertargetsystem.h:62 */
	HSceneViewRenderTarget FindOrCreateRenderTarget(CScratchRenderTargetSystem* , const char* , HSceneViewRenderTarget);
	/* ../scenesystem/scratchrendertargetsystem.h:63 */
	HSceneViewRenderTarget FindOrCreateRenderTarget(CScratchRenderTargetSystem* , const char* , ISceneView* , HSceneViewRenderTarget, SceneViewRenderTargetUsageFlags_t);
	/* ../scenesystem/scratchrendertargetsystem.h:64 */
	HSceneViewRenderTarget FindRenderTarget(CScratchRenderTargetSystem* , const char* );
	/* ../scenesystem/scratchrendertargetsystem.h:65 */
	void MarkRenderTargetRead(CScratchRenderTargetSystem* , HSceneViewRenderTarget);
	/* ../scenesystem/scratchrendertargetsystem.h:66 */
	void GetRenderTargetInfo(const CScratchRenderTargetSystem* , HSceneViewRenderTarget, SceneViewRenderTargetInfo_t* );
	/* ../scenesystem/scratchrendertargetsystem.h:67 */
	HRenderTexture GetRenderTargetTexture(CScratchRenderTargetSystem* , HSceneViewRenderTarget);
	/* ../scenesystem/scratchrendertargetsystem.h:68 */
	bool GetRenderTargetInfo(const CScratchRenderTargetSystem* , HSceneViewRenderTarget, OtherTargetInfo_t* );
	/* ../scenesystem/scratchrendertargetsystem.h:70 */
	void ForceIdenticalDimensions(CScratchRenderTargetSystem* , HSceneViewRenderTarget, HSceneViewRenderTarget);
	/* ../scenesystem/scratchrendertargetsystem.h:71 */
	bool IsNonSampleableRenderTarget(const CScratchRenderTargetSystem* , HSceneViewRenderTarget);
	/* ../scenesystem/scratchrendertargetsystem.h:74 */
	int GetScratchRenderTargetCount(const CScratchRenderTargetSystem* );
	/* ../scenesystem/scratchrendertargetsystem.h:78 */
	void ComputeRenderTargetAllocations(CScratchRenderTargetSystem* );
	/* ../scenesystem/scratchrendertargetsystem.h:81 */
	void GetRenderTargetName(const CScratchRenderTargetSystem* , HSceneViewRenderTarget, CBufferString* );
private:
	/* ../scenesystem/scratchrendertargetsystem.h:228 */
	int RenderTargetHandleToLocalIndex(const CScratchRenderTargetSystem* , HSceneViewRenderTarget);
	/* ../scenesystem/scratchrendertargetsystem.h:229 */
	int RenderTargetHandleToViewIndex(const CScratchRenderTargetSystem* , HSceneViewRenderTarget);
	/* ../scenesystem/scratchrendertargetsystem.h:230 */
	HSceneViewRenderTarget IndexToRenderTargetHandle(const CScratchRenderTargetSystem* , int);
	/* ../scenesystem/scratchrendertargetsystem.h:232 */
	int FindRenderTargetById(const CScratchRenderTargetSystem* , const RenderTargetId_t& );
	/* ../scenesystem/scratchrendertargetsystem.h:233 */
	void ComputeLayerInfo(CScratchRenderTargetSystem* , CSceneLayer* , int, LayerInfo_t* );
	/* ../scenesystem/scratchrendertargetsystem.h:234 */
	int ComputeLayerInfo(CScratchRenderTargetSystem* , LayerInfo_t* );
	/* ../scenesystem/scratchrendertargetsystem.h:235 */
	void MarkUnusedLayers(CScratchRenderTargetSystem* , int, LayerInfo_t* );
	/* ../scenesystem/scratchrendertargetsystem.h:236 */
	void RemoveUnusedLayers(CScratchRenderTargetSystem* , int& , LayerInfo_t* );
	/* ../scenesystem/scratchrendertargetsystem.h:237 */
	void ComputeRenderTargetUsageScope(CScratchRenderTargetSystem* , RenderTargetState_t* , int, const LayerInfo_t* );
	/* ../scenesystem/scratchrendertargetsystem.h:238 */
	void AssignTexturesToRenderTargets(CScratchRenderTargetSystem* , int, RenderTargetState_t* , int, LayerInfo_t* );
	/* ../scenesystem/scratchrendertargetsystem.h:239 */
	void ComputeRenderTargetBindings(CScratchRenderTargetSystem* , int, RenderTargetState_t* , int, const LayerInfo_t* );
	/* ../scenesystem/scratchrendertargetsystem.h:240 */
	int FindBestFitScratchRenderTarget(CScratchRenderTargetSystem* , const SceneViewRenderTargetInfo_t& , RenderMultisampleType_t, bool, int, const SceneScratchRenderTargetDesc_t* , const bool* );
	/* ../scenesystem/scratchrendertargetsystem.h:241 */
	void UpdateSwapChainAndMultisampleType(CScratchRenderTargetSystem* , const RenderTargetInfo_t& , bool, CSceneLayer* , LayerInfo_t* );
	/* ../scenesystem/scratchrendertargetsystem.h:242 */
	void ComputeRenderTargetResolves(CScratchRenderTargetSystem* , int, LayerInfo_t* );
	/* ../scenesystem/scratchrendertargetsystem.h:243 */
	void UpdateLayerDiscardibility(CScratchRenderTargetSystem* , const RenderTargetInfo_t& , bool, CSceneLayer* , LayerInfo_t* );
	/* ../scenesystem/scratchrendertargetsystem.h:244 */
	void UpdateOutputResolveMask(CScratchRenderTargetSystem* , OutputInfo_t& , RenderMultisampleType_t, RenderMultisampleType_t, bool, bool, const char* , const RenderTargetId_t& );
	/* ../scenesystem/scratchrendertargetsystem.h:247 */
	void OutputLayerInfo(CScratchRenderTargetSystem* , int, const LayerInfo_t* );
	/* ../scenesystem/scratchrendertargetsystem.h:248 */
	void OutputRenderTargetBindings(CScratchRenderTargetSystem* );
	/* ../scenesystem/scratchrendertargetsystem.h:249 */
	void UpdateRenderTargetMatchState(CScratchRenderTargetSystem* , int, int);
	/* ../scenesystem/scratchrendertargetsystem.h:250 */
	void ComputeDesiredRenderTargetSizes(CScratchRenderTargetSystem* , RenderTargetState_t* );
	/* ../scenesystem/scratchrendertargetsystem.h:251 */
	void InitRenderTargetInfo(CScratchRenderTargetSystem* , RenderTargetInfo_t& );
	/* ../scenesystem/scratchrendertargetsystem.h:252 */
	void OutputRenderTargetUsage(CScratchRenderTargetSystem* , int, const RenderTargetState_t* , LayerInfo_t* );
	/* ../scenesystem/scratchrendertargetsystem.h:253 */
	void OutputRenderTargetInfo(CScratchRenderTargetSystem* , int, const RenderTargetState_t* );
	/* ../scenesystem/scratchrendertargetsystem.h:254 */
	void ComputeInternalLayerFlags(CScratchRenderTargetSystem* );
	/* ../scenesystem/scratchrendertargetsystem.h:255 */
	void TestRenderTargetBindingValidity(CScratchRenderTargetSystem* , int, const LayerInfo_t* );
	/* ../scenesystem/scratchrendertargetsystem.h:256 */
	bool IsAliasMultisampled(const CScratchRenderTargetSystem* , const RenderTargetState_t& , RenderTargetAliasType_t);
	/* ../scenesystem/scratchrendertargetsystem.h:257 */
	RenderTargetAliasType_t GetInputAlias(const CScratchRenderTargetSystem* , const LayerInfo_t& , int);
	/* ../scenesystem/scratchrendertargetsystem.h:258 */
	void AdjustUsageScopeForExternalReferences(CScratchRenderTargetSystem* , int, RenderTargetState_t* , int, const LayerInfo_t* );
	/* ../scenesystem/scratchrendertargetsystem.h:259 */
	void ComputeResolvesForLayer(CScratchRenderTargetSystem* , int, LayerInfo_t& , const char* , LayerInfo_t* );
	/* ../scenesystem/scratchrendertargetsystem.h:260 */
	void ValidateRenderTargetWrite(CScratchRenderTargetSystem* , int, int, const LayerInfo_t* , LayerOutputType_t, bool);
	/* ../scenesystem/scratchrendertargetsystem.h:261 */
	void ValidateLegalRenderTargets(CScratchRenderTargetSystem* );
	CSceneView * m_pView; /* 0 8 */
	CUtlVectorFixedGrowable<CScratchRenderTargetSystem::RenderTargetInfo_t, 35> m_RenderTargets __attribute__((__aligned__(8))); /* 8 5352 */
	int m_nRTStackDepth; /* 5360 4 */
	RenderTargetId_t m_RTScopeId; /* 5368 32 */
	static const char * sm_pOutputResolveNames[0]; /* 0 0 */
	void ~CScratchRenderTargetSystem(CScratchRenderTargetSystem* );
	void CScratchRenderTargetSystem(CScratchRenderTargetSystem* );
	void Init(class CScratchRenderTargetSystem *, class CSceneView *); /* linkage=_ZN26CScratchRenderTargetSystem4InitEP10CSceneView */
	void PushNamedRenderTargetScope(class CScratchRenderTargetSystem *, const char  *); /* linkage=_ZN26CScratchRenderTargetSystem26PushNamedRenderTargetScopeEPKc */
	void PopNamedRenderTargetScope(class CScratchRenderTargetSystem *); /* linkage=_ZN26CScratchRenderTargetSystem25PopNamedRenderTargetScopeEv */
	HSceneViewRenderTarget FindOrCreateRenderTarget(class CScratchRenderTargetSystem *, const char  *, HRenderTexture, SceneViewRenderTargetFlags_t); /* linkage=_ZN26CScratchRenderTargetSystem24FindOrCreateRenderTargetEPKc11CWeakHandleI31InfoForResourceTypeCTextureBaseEj */
	HSceneViewRenderTarget FindOrCreateRenderTarget(class CScratchRenderTargetSystem *, const char  *, SwapChainHandle_t, enum SwapChainBuffer_t, SceneViewRenderTargetFlags_t); /* linkage=_ZN26CScratchRenderTargetSystem24FindOrCreateRenderTargetEPKcP19SwapChainHandle_t__17SwapChainBuffer_tj */
	HSceneViewRenderTarget FindOrCreateRenderTarget(class CScratchRenderTargetSystem *, const char  *, const class SceneViewRenderTargetInfo_t  &, SceneViewRenderTargetFlags_t); /* linkage=_ZN26CScratchRenderTargetSystem24FindOrCreateRenderTargetEPKcRK27SceneViewRenderTargetInfo_tj */
	HSceneViewRenderTarget FindOrCreateRenderTarget(class CScratchRenderTargetSystem *, const char  *, const char  *); /* linkage=_ZN26CScratchRenderTargetSystem24FindOrCreateRenderTargetEPKcS1_ */
	HSceneViewRenderTarget FindOrCreateRenderTarget(class CScratchRenderTargetSystem *, const char  *, HSceneViewRenderTarget); /* linkage=_ZN26CScratchRenderTargetSystem24FindOrCreateRenderTargetEPKcP24HSceneViewRenderTarget__ */
	HSceneViewRenderTarget FindOrCreateRenderTarget(class CScratchRenderTargetSystem *, const char  *, class ISceneView *, HSceneViewRenderTarget, SceneViewRenderTargetUsageFlags_t); /* linkage=_ZN26CScratchRenderTargetSystem24FindOrCreateRenderTargetEPKcP10ISceneViewP24HSceneViewRenderTarget__j */
	HSceneViewRenderTarget FindRenderTarget(class CScratchRenderTargetSystem *, const char  *); /* linkage=_ZN26CScratchRenderTargetSystem16FindRenderTargetEPKc */
	void MarkRenderTargetRead(class CScratchRenderTargetSystem *, HSceneViewRenderTarget); /* linkage=_ZN26CScratchRenderTargetSystem20MarkRenderTargetReadEP24HSceneViewRenderTarget__ */
	void GetRenderTargetInfo(const class CScratchRenderTargetSystem  *, HSceneViewRenderTarget, class SceneViewRenderTargetInfo_t *); /* linkage=_ZNK26CScratchRenderTargetSystem19GetRenderTargetInfoEP24HSceneViewRenderTarget__P27SceneViewRenderTargetInfo_t */
	HRenderTexture GetRenderTargetTexture(class CScratchRenderTargetSystem *, HSceneViewRenderTarget); /* linkage=_ZN26CScratchRenderTargetSystem22GetRenderTargetTextureEP24HSceneViewRenderTarget__ */
	bool GetRenderTargetInfo(const class CScratchRenderTargetSystem  *, HSceneViewRenderTarget, class OtherTargetInfo_t *); /* linkage=_ZNK26CScratchRenderTargetSystem19GetRenderTargetInfoEP24HSceneViewRenderTarget__P17OtherTargetInfo_t */
	void ForceIdenticalDimensions(class CScratchRenderTargetSystem *, HSceneViewRenderTarget, HSceneViewRenderTarget); /* linkage=_ZN26CScratchRenderTargetSystem24ForceIdenticalDimensionsEP24HSceneViewRenderTarget__S1_ */
	bool IsNonSampleableRenderTarget(const class CScratchRenderTargetSystem  *, HSceneViewRenderTarget); /* linkage=_ZNK26CScratchRenderTargetSystem27IsNonSampleableRenderTargetEP24HSceneViewRenderTarget__ */
	int GetScratchRenderTargetCount(const class CScratchRenderTargetSystem  *); /* linkage=_ZNK26CScratchRenderTargetSystem27GetScratchRenderTargetCountEv */
	void ComputeRenderTargetAllocations(class CScratchRenderTargetSystem *); /* linkage=_ZN26CScratchRenderTargetSystem30ComputeRenderTargetAllocationsEv */
	/* <375857d> ../scenesystem/scratchrendertargetsystem.cpp:116 */
	void GetRenderTargetName(const class CScratchRenderTargetSystem  *, HSceneViewRenderTarget, class CBufferString *); /* linkage=_ZNK26CScratchRenderTargetSystem19GetRenderTargetNameEP24HSceneViewRenderTarget__P13CBufferString */
	int RenderTargetHandleToLocalIndex(const class CScratchRenderTargetSystem  *, HSceneViewRenderTarget); /* linkage=_ZNK26CScratchRenderTargetSystem30RenderTargetHandleToLocalIndexEP24HSceneViewRenderTarget__ */
	int RenderTargetHandleToViewIndex(const class CScratchRenderTargetSystem  *, HSceneViewRenderTarget); /* linkage=_ZNK26CScratchRenderTargetSystem29RenderTargetHandleToViewIndexEP24HSceneViewRenderTarget__ */
	HSceneViewRenderTarget IndexToRenderTargetHandle(const class CScratchRenderTargetSystem  *, int); /* linkage=_ZNK26CScratchRenderTargetSystem25IndexToRenderTargetHandleEi */
	int FindRenderTargetById(const class CScratchRenderTargetSystem  *, const class RenderTargetId_t  &); /* linkage=_ZNK26CScratchRenderTargetSystem20FindRenderTargetByIdERK16RenderTargetId_t */
	void ComputeLayerInfo(class CScratchRenderTargetSystem *, class CSceneLayer *, int, class LayerInfo_t *); /* linkage=_ZN26CScratchRenderTargetSystem16ComputeLayerInfoEP11CSceneLayeriPNS_11LayerInfo_tE */
	int ComputeLayerInfo(class CScratchRenderTargetSystem *, class LayerInfo_t *); /* linkage=_ZN26CScratchRenderTargetSystem16ComputeLayerInfoEPNS_11LayerInfo_tE */
	void MarkUnusedLayers(class CScratchRenderTargetSystem *, int, class LayerInfo_t *); /* linkage=_ZN26CScratchRenderTargetSystem16MarkUnusedLayersEiPNS_11LayerInfo_tE */
	void RemoveUnusedLayers(class CScratchRenderTargetSystem *, int &, class LayerInfo_t *); /* linkage=_ZN26CScratchRenderTargetSystem18RemoveUnusedLayersERiPNS_11LayerInfo_tE */
	void ComputeRenderTargetUsageScope(class CScratchRenderTargetSystem *, class RenderTargetState_t *, int, const class LayerInfo_t  *); /* linkage=_ZN26CScratchRenderTargetSystem29ComputeRenderTargetUsageScopeEPNS_19RenderTargetState_tEiPKNS_11LayerInfo_tE */
	void AssignTexturesToRenderTargets(class CScratchRenderTargetSystem *, int, class RenderTargetState_t *, int, class LayerInfo_t *); /* linkage=_ZN26CScratchRenderTargetSystem29AssignTexturesToRenderTargetsEiPNS_19RenderTargetState_tEiPNS_11LayerInfo_tE */
	void ComputeRenderTargetBindings(class CScratchRenderTargetSystem *, int, class RenderTargetState_t *, int, const class LayerInfo_t  *); /* linkage=_ZN26CScratchRenderTargetSystem27ComputeRenderTargetBindingsEiPNS_19RenderTargetState_tEiPKNS_11LayerInfo_tE */
	int FindBestFitScratchRenderTarget(class CScratchRenderTargetSystem *, const class SceneViewRenderTargetInfo_t  &, enum RenderMultisampleType_t, bool, int, const class SceneScratchRenderTargetDesc_t  *, const bool  *); /* linkage=_ZN26CScratchRenderTargetSystem30FindBestFitScratchRenderTargetERK27SceneViewRenderTargetInfo_t23RenderMultisampleType_tbiPK30SceneScratchRenderTargetDesc_tPKb */
	void UpdateSwapChainAndMultisampleType(class CScratchRenderTargetSystem *, const class RenderTargetInfo_t  &, bool, class CSceneLayer *, class LayerInfo_t *); /* linkage=_ZN26CScratchRenderTargetSystem33UpdateSwapChainAndMultisampleTypeERKNS_18RenderTargetInfo_tEbP11CSceneLayerPNS_11LayerInfo_tE */
	void ComputeRenderTargetResolves(class CScratchRenderTargetSystem *, int, class LayerInfo_t *); /* linkage=_ZN26CScratchRenderTargetSystem27ComputeRenderTargetResolvesEiPNS_11LayerInfo_tE */
	void UpdateLayerDiscardibility(class CScratchRenderTargetSystem *, const class RenderTargetInfo_t  &, bool, class CSceneLayer *, class LayerInfo_t *); /* linkage=_ZN26CScratchRenderTargetSystem25UpdateLayerDiscardibilityERKNS_18RenderTargetInfo_tEbP11CSceneLayerPNS_11LayerInfo_tE */
	void UpdateOutputResolveMask(class CScratchRenderTargetSystem *, class OutputInfo_t &, enum RenderMultisampleType_t, enum RenderMultisampleType_t, bool, bool, const char  *, const class RenderTargetId_t  &); /* linkage=_ZN26CScratchRenderTargetSystem23UpdateOutputResolveMaskERNS_12OutputInfo_tE23RenderMultisampleType_tS2_bbPKcRK16RenderTargetId_t */
	/* <3758846> ../scenesystem/scratchrendertargetsystem.cpp:2273 */
	void OutputLayerInfo(class CScratchRenderTargetSystem *, int, const class LayerInfo_t  *); /* linkage=_ZN26CScratchRenderTargetSystem15OutputLayerInfoEiPKNS_11LayerInfo_tE */
	/* <37589fe> ../scenesystem/scratchrendertargetsystem.cpp:2407 */
	void OutputRenderTargetBindings(class CScratchRenderTargetSystem *); /* linkage=_ZN26CScratchRenderTargetSystem26OutputRenderTargetBindingsEv */
	/* <3758a5d> ../scenesystem/scratchrendertargetsystem.cpp:683 */
	void UpdateRenderTargetMatchState(class CScratchRenderTargetSystem *, int, int); /* linkage=_ZN26CScratchRenderTargetSystem28UpdateRenderTargetMatchStateEii */
	void ComputeDesiredRenderTargetSizes(class CScratchRenderTargetSystem *, class RenderTargetState_t *); /* linkage=_ZN26CScratchRenderTargetSystem31ComputeDesiredRenderTargetSizesEPNS_19RenderTargetState_tE */
	/* <3758475> ../scenesystem/scratchrendertargetsystem.cpp:97 */
	void InitRenderTargetInfo(class CScratchRenderTargetSystem *, class RenderTargetInfo_t &); /* linkage=_ZN26CScratchRenderTargetSystem20InitRenderTargetInfoERNS_18RenderTargetInfo_tE */
	/* <37588d2> ../scenesystem/scratchrendertargetsystem.cpp:2319 */
	void OutputRenderTargetUsage(class CScratchRenderTargetSystem *, int, const class RenderTargetState_t  *, class LayerInfo_t *); /* linkage=_ZN26CScratchRenderTargetSystem23OutputRenderTargetUsageEiPKNS_19RenderTargetState_tEPNS_11LayerInfo_tE */
	/* <3758972> ../scenesystem/scratchrendertargetsystem.cpp:2355 */
	void OutputRenderTargetInfo(class CScratchRenderTargetSystem *, int, const class RenderTargetState_t  *); /* linkage=_ZN26CScratchRenderTargetSystem22OutputRenderTargetInfoEiPKNS_19RenderTargetState_tE */
	void ComputeInternalLayerFlags(class CScratchRenderTargetSystem *); /* linkage=_ZN26CScratchRenderTargetSystem25ComputeInternalLayerFlagsEv */
	/* <37587d6> ../scenesystem/scratchrendertargetsystem.cpp:2051 */
	void TestRenderTargetBindingValidity(class CScratchRenderTargetSystem *, int, const class LayerInfo_t  *); /* linkage=_ZN26CScratchRenderTargetSystem31TestRenderTargetBindingValidityEiPKNS_11LayerInfo_tE */
	bool IsAliasMultisampled(const class CScratchRenderTargetSystem  *, const class RenderTargetState_t  &, enum RenderTargetAliasType_t); /* linkage=_ZNK26CScratchRenderTargetSystem19IsAliasMultisampledERKNS_19RenderTargetState_tENS_23RenderTargetAliasType_tE */
	enum RenderTargetAliasType_t GetInputAlias(const class CScratchRenderTargetSystem  *, const class LayerInfo_t  &, int); /* linkage=_ZNK26CScratchRenderTargetSystem13GetInputAliasERKNS_11LayerInfo_tEi */
	void AdjustUsageScopeForExternalReferences(class CScratchRenderTargetSystem *, int, class RenderTargetState_t *, int, const class LayerInfo_t  *); /* linkage=_ZN26CScratchRenderTargetSystem37AdjustUsageScopeForExternalReferencesEiPNS_19RenderTargetState_tEiPKNS_11LayerInfo_tE */
	void ComputeResolvesForLayer(class CScratchRenderTargetSystem *, int, class LayerInfo_t &, const char  *, class LayerInfo_t *); /* linkage=_ZN26CScratchRenderTargetSystem23ComputeResolvesForLayerEiRNS_11LayerInfo_tEPKcPS0_ */
	void ValidateRenderTargetWrite(class CScratchRenderTargetSystem *, int, int, const class LayerInfo_t  *, enum LayerOutputType_t, bool); /* linkage=_ZN26CScratchRenderTargetSystem25ValidateRenderTargetWriteEiiPKNS_11LayerInfo_tENS_17LayerOutputType_tEb */
	void ValidateLegalRenderTargets(class CScratchRenderTargetSystem *); /* linkage=_ZN26CScratchRenderTargetSystem26ValidateLegalRenderTargetsEv */
	void ~CScratchRenderTargetSystem(class CScratchRenderTargetSystem *); /* linkage=_ZN26CScratchRenderTargetSystemD4Ev */
	void CScratchRenderTargetSystem(class CScratchRenderTargetSystem *); /* linkage=_ZN26CScratchRenderTargetSystemC4Ev */
} __attribute__((__aligned__(8)));

// <0370DF39> ../scenesystem/scratchrendertargetsystem.h:50
// member functions: 103
// member variables: 4
// static member variable: 1
// class size: 5,400
class CScratchRenderTargetSystem {
	/* ../scenesystem/scratchrendertargetsystem.h:85 */
	enum {
		MAX_RT_COUNT = 32,
	};
	/* ../scenesystem/scratchrendertargetsystem.h:89 */
	enum RenderTargetType_t {
		RT_TYPE_SCRATCH = 0,
		RT_TYPE_HRENDERTEXTURE = 1,
		RT_TYPE_ALIAS = 2,
	};
	/* ../scenesystem/scratchrendertargetsystem.h:96 */
	enum RenderTargetAliasType_t {
		RT_ALIAS_ORIGINAL = 0,
		RT_ALIAS_NOMSAA_COPY = 1,
		RT_ALIAS_MSAA_COPY = 2,
		RT_ALIAS_COUNT = 3,
	};
	/* ../scenesystem/scratchrendertargetsystem.h:105 */
	enum LayerOutputType_t {
		LOT_OUTPUT_COLOR = 0,
		LOT_OUTPUT_DEPTH = 1,
		LOT_OUTPUT_ATTRIBUTE = 2,
	};
	/* ../scenesystem/scratchrendertargetsystem.h:112 */
	enum OutputResolveMask_t {
		OUTPUT_RESOLVE_NONE = 0,
		OUTPUT_RESOLVE_TO_NOMSAA_COPY = 1,
		OUTPUT_RESOLVE_TO_MSAA_COPY = 2,
		OUTPUT_RESOLVE_BIT_COUNT = 2,
	};
	/* ../scenesystem/scratchrendertargetsystem.h:121 */
	enum LayerRemovalReason_t {
		LAYER_REMOVAL_REASON_NOT_REMOVED = 0,
		LAYER_REMOVAL_REASON_HAD_ERROR = 1,
		LAYER_REMOVAL_REASON_OUTPUT_UNUSED = 2,
	};
	/* ../scenesystem/scratchrendertargetsystem.h:128 */
	enum ScratchRenderTargetHandleMasks_t {
		SRT_HANDLE_MASK_INDEX = 65535,
		SRT_HANDLE_MASK_VIEW_INDEX = 65535,
		SRT_HANDLE_MASK_VIEW_BIT_OFFSET = 16,
	};
	/* ../scenesystem/scratchrendertargetsystem.h:135 */
	struct RenderTargetInfo_t {
		RenderTargetId_t m_Id; /* 0 32 */
		RenderTargetType_t m_Type; /* 32 4 */
		HRenderTexture m_hTexture; /* 40 8 */
		SwapChainHandle_t m_hSwapChain; /* 48 8 */
		CTextureDesc m_Info; /* 56 28 */
		uint16 m_nRequestedWidth; /* 84 2 */
		uint16 m_nRequestedHeight; /* 86 2 */
		RenderMultisampleType_t m_nMultisampleType; /* 88 4 */
		CSceneView * m_pOtherView; /* 96 8 */
		int16 m_nOtherIndex; /* 104 2 */
		int16 m_nMustMatchOtherTargetSize; /* 106 2 */
		int16 m_nUnused; /* 108 2 */
		CUtlVector<ImageFormat, CUtlMemory<ImageFormat, int> > m_otherTargetMatchFormats; /* 112 32 */
		uint16 m_bHasMatchingTargets:1; /* 144: 0 2 */
		uint16 m_bHasSharedHiZTargets:1; /* 144: 1 2 */
		uint16 m_bIsWrittenToByExternalView:1; /* 144: 2 2 */
		uint16 m_bIsReadFirstByExternalView:1; /* 144: 3 2 */
		uint16 m_bIsExternalAlias:1; /* 144: 4 2 */
		uint16 m_bIsReadAfterRendering:1; /* 144: 5 2 */
		uint16 m_nAliasUsageFlags:4; /* 144: 6 2 */
		uint16 m_nFlags:6; /* 144:10 2 */
		void RenderTargetInfo_t(RenderTargetInfo_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../scenesystem/scratchrendertargetsystem.h:160 */
	struct InputInfo_t {
		uint8 m_bSamplingFromOriginal:1; /* 0: 0 1 */
		uint8 m_nMultisampleType:3; /* 0: 1 1 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../scenesystem/scratchrendertargetsystem.h:166 */
	struct OutputInfo_t {
		uint8 m_nOutputType:2; /* 0: 0 1 */
		uint8 m_nResolveMask:3; /* 0: 2 1 */
		uint8 m_nMultisampleType:3; /* 0: 5 1 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../scenesystem/scratchrendertargetsystem.h:173 */
	struct LayerInfo_t {
		int m_hLayerHandle; /* 0 4 */
		int m_nOutputCount; /* 4 4 */
		int m_nInputCount; /* 8 4 */
		int m_pOutputs[32]; /* 12 128 */
		int m_pInputs[32]; /* 140 128 */
		CUtlStringToken m_pOutputAttributeName[32]; /* 268 128 */
		CUtlStringToken m_pInputAttributeName[32]; /* 396 128 */
		InputInfo_t m_pInputInfo[32]; /* 524 32 */
		OutputInfo_t m_pOutputInfo[32]; /* 556 32 */
		uint64 m_OutputMask; /* 592 8 */
		uint64 m_InputMask; /* 600 8 */
		uint64 m_DiscardMask; /* 608 8 */
		uint64 m_PreserveMask; /* 616 8 */
		uint8 m_bError:1; /* 624: 0 1 */
		uint8 m_bCanBeDiscarded:1; /* 624: 1 1 */
		LayerRemovalReason_t m_nRemovalReason; /* 628 4 */
		RenderColorSpace_t m_allowSrgbWrites; /* 632 1 */
		SwapChainHandle_t m_hDebugSwapChain; /* 640 8 */
		RenderMultisampleType_t m_nDebugMultisampleType; /* 648 4 */
		const char * m_pLayerDebugName; /* 656 8 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../scenesystem/scratchrendertargetsystem.h:198 */
	struct RenderTargetStateAlias_t {
		HRenderTexture m_hRenderTexture; /* 0 8 */
		int16 m_nFirstLayerUsed; /* 8 2 */
		int16 m_nLastLayerUsed; /* 10 2 */
		int16 m_nScratchRTIndex; /* 12 2 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../scenesystem/scratchrendertargetsystem.h:213 */
	struct RenderTargetState_t {
		RenderTargetStateAlias_t m_pAlias[3]; /* 0 48 */
		uint8 m_bIsMSAAAvailable:1; /* 48: 0 1 */
		uint8 m_nBestFitSizeType:2; /* 48: 1 1 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../scenesystem/scratchrendertargetsystem.h:55 */
	void Init(CScratchRenderTargetSystem* , CSceneView* );
	/* ../scenesystem/scratchrendertargetsystem.h:56 */
	void PushNamedRenderTargetScope(CScratchRenderTargetSystem* , const char* );
	/* ../scenesystem/scratchrendertargetsystem.h:57 */
	void PopNamedRenderTargetScope(CScratchRenderTargetSystem* );
	/* ../scenesystem/scratchrendertargetsystem.h:58 */
	HSceneViewRenderTarget FindOrCreateRenderTarget(CScratchRenderTargetSystem* , const char* , HRenderTexture, SceneViewRenderTargetFlags_t);
	/* ../scenesystem/scratchrendertargetsystem.h:59 */
	HSceneViewRenderTarget FindOrCreateRenderTarget(CScratchRenderTargetSystem* , const char* , SwapChainHandle_t, SwapChainBuffer_t, SceneViewRenderTargetFlags_t);
	/* ../scenesystem/scratchrendertargetsystem.h:60 */
	HSceneViewRenderTarget FindOrCreateRenderTarget(CScratchRenderTargetSystem* , const char* , const SceneViewRenderTargetInfo_t& , SceneViewRenderTargetFlags_t);
	/* ../scenesystem/scratchrendertargetsystem.h:61 */
	HSceneViewRenderTarget FindOrCreateRenderTarget(CScratchRenderTargetSystem* , const char* , const char* );
	/* ../scenesystem/scratchrendertargetsystem.h:62 */
	HSceneViewRenderTarget FindOrCreateRenderTarget(CScratchRenderTargetSystem* , const char* , HSceneViewRenderTarget);
	/* ../scenesystem/scratchrendertargetsystem.h:63 */
	HSceneViewRenderTarget FindOrCreateRenderTarget(CScratchRenderTargetSystem* , const char* , ISceneView* , HSceneViewRenderTarget, SceneViewRenderTargetUsageFlags_t);
	/* ../scenesystem/scratchrendertargetsystem.h:64 */
	HSceneViewRenderTarget FindRenderTarget(CScratchRenderTargetSystem* , const char* );
	/* ../scenesystem/scratchrendertargetsystem.h:65 */
	void MarkRenderTargetRead(CScratchRenderTargetSystem* , HSceneViewRenderTarget);
	/* ../scenesystem/scratchrendertargetsystem.h:66 */
	void GetRenderTargetInfo(const CScratchRenderTargetSystem* , HSceneViewRenderTarget, SceneViewRenderTargetInfo_t* );
	/* ../scenesystem/scratchrendertargetsystem.h:67 */
	HRenderTexture GetRenderTargetTexture(CScratchRenderTargetSystem* , HSceneViewRenderTarget);
	/* ../scenesystem/scratchrendertargetsystem.h:68 */
	bool GetRenderTargetInfo(const CScratchRenderTargetSystem* , HSceneViewRenderTarget, OtherTargetInfo_t* );
	/* ../scenesystem/scratchrendertargetsystem.h:70 */
	void ForceIdenticalDimensions(CScratchRenderTargetSystem* , HSceneViewRenderTarget, HSceneViewRenderTarget);
	/* ../scenesystem/scratchrendertargetsystem.h:71 */
	bool IsNonSampleableRenderTarget(const CScratchRenderTargetSystem* , HSceneViewRenderTarget);
	/* ../scenesystem/scratchrendertargetsystem.h:74 */
	int GetScratchRenderTargetCount(const CScratchRenderTargetSystem* );
	/* ../scenesystem/scratchrendertargetsystem.h:78 */
	void ComputeRenderTargetAllocations(CScratchRenderTargetSystem* );
	/* ../scenesystem/scratchrendertargetsystem.h:81 */
	void GetRenderTargetName(const CScratchRenderTargetSystem* , HSceneViewRenderTarget, CBufferString* );
private:
	/* ../scenesystem/scratchrendertargetsystem.h:228 */
	int RenderTargetHandleToLocalIndex(const CScratchRenderTargetSystem* , HSceneViewRenderTarget);
	/* ../scenesystem/scratchrendertargetsystem.h:229 */
	int RenderTargetHandleToViewIndex(const CScratchRenderTargetSystem* , HSceneViewRenderTarget);
	/* ../scenesystem/scratchrendertargetsystem.h:230 */
	HSceneViewRenderTarget IndexToRenderTargetHandle(const CScratchRenderTargetSystem* , int);
	/* ../scenesystem/scratchrendertargetsystem.h:232 */
	int FindRenderTargetById(const CScratchRenderTargetSystem* , const RenderTargetId_t& );
	/* ../scenesystem/scratchrendertargetsystem.h:233 */
	void ComputeLayerInfo(CScratchRenderTargetSystem* , CSceneLayer* , int, LayerInfo_t* );
	/* ../scenesystem/scratchrendertargetsystem.h:234 */
	int ComputeLayerInfo(CScratchRenderTargetSystem* , LayerInfo_t* );
	/* ../scenesystem/scratchrendertargetsystem.h:235 */
	void MarkUnusedLayers(CScratchRenderTargetSystem* , int, LayerInfo_t* );
	/* ../scenesystem/scratchrendertargetsystem.h:236 */
	void RemoveUnusedLayers(CScratchRenderTargetSystem* , int& , LayerInfo_t* );
	/* ../scenesystem/scratchrendertargetsystem.h:237 */
	void ComputeRenderTargetUsageScope(CScratchRenderTargetSystem* , RenderTargetState_t* , int, const LayerInfo_t* );
	/* ../scenesystem/scratchrendertargetsystem.h:238 */
	void AssignTexturesToRenderTargets(CScratchRenderTargetSystem* , int, RenderTargetState_t* , int, LayerInfo_t* );
	/* ../scenesystem/scratchrendertargetsystem.h:239 */
	void ComputeRenderTargetBindings(CScratchRenderTargetSystem* , int, RenderTargetState_t* , int, const LayerInfo_t* );
	/* ../scenesystem/scratchrendertargetsystem.h:240 */
	int FindBestFitScratchRenderTarget(CScratchRenderTargetSystem* , const SceneViewRenderTargetInfo_t& , RenderMultisampleType_t, bool, int, const SceneScratchRenderTargetDesc_t* , const bool* );
	/* ../scenesystem/scratchrendertargetsystem.h:241 */
	void UpdateSwapChainAndMultisampleType(CScratchRenderTargetSystem* , const RenderTargetInfo_t& , bool, CSceneLayer* , LayerInfo_t* );
	/* ../scenesystem/scratchrendertargetsystem.h:242 */
	void ComputeRenderTargetResolves(CScratchRenderTargetSystem* , int, LayerInfo_t* );
	/* ../scenesystem/scratchrendertargetsystem.h:243 */
	void UpdateLayerDiscardibility(CScratchRenderTargetSystem* , const RenderTargetInfo_t& , bool, CSceneLayer* , LayerInfo_t* );
	/* ../scenesystem/scratchrendertargetsystem.h:244 */
	void UpdateOutputResolveMask(CScratchRenderTargetSystem* , OutputInfo_t& , RenderMultisampleType_t, RenderMultisampleType_t, bool, bool, const char* , const RenderTargetId_t& );
	/* ../scenesystem/scratchrendertargetsystem.h:247 */
	void OutputLayerInfo(CScratchRenderTargetSystem* , int, const LayerInfo_t* );
	/* ../scenesystem/scratchrendertargetsystem.h:248 */
	void OutputRenderTargetBindings(CScratchRenderTargetSystem* );
	/* ../scenesystem/scratchrendertargetsystem.h:249 */
	void UpdateRenderTargetMatchState(CScratchRenderTargetSystem* , int, int);
	/* ../scenesystem/scratchrendertargetsystem.h:250 */
	void ComputeDesiredRenderTargetSizes(CScratchRenderTargetSystem* , RenderTargetState_t* );
	/* ../scenesystem/scratchrendertargetsystem.h:251 */
	void InitRenderTargetInfo(CScratchRenderTargetSystem* , RenderTargetInfo_t& );
	/* ../scenesystem/scratchrendertargetsystem.h:252 */
	void OutputRenderTargetUsage(CScratchRenderTargetSystem* , int, const RenderTargetState_t* , LayerInfo_t* );
	/* ../scenesystem/scratchrendertargetsystem.h:253 */
	void OutputRenderTargetInfo(CScratchRenderTargetSystem* , int, const RenderTargetState_t* );
	/* ../scenesystem/scratchrendertargetsystem.h:254 */
	void ComputeInternalLayerFlags(CScratchRenderTargetSystem* );
	/* ../scenesystem/scratchrendertargetsystem.h:255 */
	void TestRenderTargetBindingValidity(CScratchRenderTargetSystem* , int, const LayerInfo_t* );
	/* ../scenesystem/scratchrendertargetsystem.h:256 */
	bool IsAliasMultisampled(const CScratchRenderTargetSystem* , const RenderTargetState_t& , RenderTargetAliasType_t);
	/* ../scenesystem/scratchrendertargetsystem.h:257 */
	RenderTargetAliasType_t GetInputAlias(const CScratchRenderTargetSystem* , const LayerInfo_t& , int);
	/* ../scenesystem/scratchrendertargetsystem.h:258 */
	void AdjustUsageScopeForExternalReferences(CScratchRenderTargetSystem* , int, RenderTargetState_t* , int, const LayerInfo_t* );
	/* ../scenesystem/scratchrendertargetsystem.h:259 */
	void ComputeResolvesForLayer(CScratchRenderTargetSystem* , int, LayerInfo_t& , const char* , LayerInfo_t* );
	/* ../scenesystem/scratchrendertargetsystem.h:260 */
	void ValidateRenderTargetWrite(CScratchRenderTargetSystem* , int, int, const LayerInfo_t* , LayerOutputType_t, bool);
	/* ../scenesystem/scratchrendertargetsystem.h:261 */
	void ValidateLegalRenderTargets(CScratchRenderTargetSystem* );
	CSceneView * m_pView; /* 0 8 */
	CUtlVectorFixedGrowable<CScratchRenderTargetSystem::RenderTargetInfo_t, 35> m_RenderTargets __attribute__((__aligned__(8))); /* 8 5352 */
	int m_nRTStackDepth; /* 5360 4 */
	RenderTargetId_t m_RTScopeId; /* 5368 32 */
	static const char * sm_pOutputResolveNames[]; /* 0 0 */
	void Init(class CScratchRenderTargetSystem *, class CSceneView *); /* linkage=_ZN26CScratchRenderTargetSystem4InitEP10CSceneView */
	void PushNamedRenderTargetScope(class CScratchRenderTargetSystem *, const char  *); /* linkage=_ZN26CScratchRenderTargetSystem26PushNamedRenderTargetScopeEPKc */
	void PopNamedRenderTargetScope(class CScratchRenderTargetSystem *); /* linkage=_ZN26CScratchRenderTargetSystem25PopNamedRenderTargetScopeEv */
	HSceneViewRenderTarget FindOrCreateRenderTarget(class CScratchRenderTargetSystem *, const char  *, HRenderTexture, SceneViewRenderTargetFlags_t); /* linkage=_ZN26CScratchRenderTargetSystem24FindOrCreateRenderTargetEPKc11CWeakHandleI31InfoForResourceTypeCTextureBaseEj */
	HSceneViewRenderTarget FindOrCreateRenderTarget(class CScratchRenderTargetSystem *, const char  *, SwapChainHandle_t, enum SwapChainBuffer_t, SceneViewRenderTargetFlags_t); /* linkage=_ZN26CScratchRenderTargetSystem24FindOrCreateRenderTargetEPKcP19SwapChainHandle_t__17SwapChainBuffer_tj */
	HSceneViewRenderTarget FindOrCreateRenderTarget(class CScratchRenderTargetSystem *, const char  *, const class SceneViewRenderTargetInfo_t  &, SceneViewRenderTargetFlags_t); /* linkage=_ZN26CScratchRenderTargetSystem24FindOrCreateRenderTargetEPKcRK27SceneViewRenderTargetInfo_tj */
	HSceneViewRenderTarget FindOrCreateRenderTarget(class CScratchRenderTargetSystem *, const char  *, const char  *); /* linkage=_ZN26CScratchRenderTargetSystem24FindOrCreateRenderTargetEPKcS1_ */
	HSceneViewRenderTarget FindOrCreateRenderTarget(class CScratchRenderTargetSystem *, const char  *, HSceneViewRenderTarget); /* linkage=_ZN26CScratchRenderTargetSystem24FindOrCreateRenderTargetEPKcP24HSceneViewRenderTarget__ */
	HSceneViewRenderTarget FindOrCreateRenderTarget(class CScratchRenderTargetSystem *, const char  *, class ISceneView *, HSceneViewRenderTarget, SceneViewRenderTargetUsageFlags_t); /* linkage=_ZN26CScratchRenderTargetSystem24FindOrCreateRenderTargetEPKcP10ISceneViewP24HSceneViewRenderTarget__j */
	HSceneViewRenderTarget FindRenderTarget(class CScratchRenderTargetSystem *, const char  *); /* linkage=_ZN26CScratchRenderTargetSystem16FindRenderTargetEPKc */
	void MarkRenderTargetRead(class CScratchRenderTargetSystem *, HSceneViewRenderTarget); /* linkage=_ZN26CScratchRenderTargetSystem20MarkRenderTargetReadEP24HSceneViewRenderTarget__ */
	void GetRenderTargetInfo(const class CScratchRenderTargetSystem  *, HSceneViewRenderTarget, class SceneViewRenderTargetInfo_t *); /* linkage=_ZNK26CScratchRenderTargetSystem19GetRenderTargetInfoEP24HSceneViewRenderTarget__P27SceneViewRenderTargetInfo_t */
	HRenderTexture GetRenderTargetTexture(class CScratchRenderTargetSystem *, HSceneViewRenderTarget); /* linkage=_ZN26CScratchRenderTargetSystem22GetRenderTargetTextureEP24HSceneViewRenderTarget__ */
	bool GetRenderTargetInfo(const class CScratchRenderTargetSystem  *, HSceneViewRenderTarget, class OtherTargetInfo_t *); /* linkage=_ZNK26CScratchRenderTargetSystem19GetRenderTargetInfoEP24HSceneViewRenderTarget__P17OtherTargetInfo_t */
	void ForceIdenticalDimensions(class CScratchRenderTargetSystem *, HSceneViewRenderTarget, HSceneViewRenderTarget); /* linkage=_ZN26CScratchRenderTargetSystem24ForceIdenticalDimensionsEP24HSceneViewRenderTarget__S1_ */
	bool IsNonSampleableRenderTarget(const class CScratchRenderTargetSystem  *, HSceneViewRenderTarget); /* linkage=_ZNK26CScratchRenderTargetSystem27IsNonSampleableRenderTargetEP24HSceneViewRenderTarget__ */
	int GetScratchRenderTargetCount(const class CScratchRenderTargetSystem  *); /* linkage=_ZNK26CScratchRenderTargetSystem27GetScratchRenderTargetCountEv */
	void ComputeRenderTargetAllocations(class CScratchRenderTargetSystem *); /* linkage=_ZN26CScratchRenderTargetSystem30ComputeRenderTargetAllocationsEv */
	/* <375857d> ../scenesystem/scratchrendertargetsystem.cpp:116 */
	void GetRenderTargetName(const class CScratchRenderTargetSystem  *, HSceneViewRenderTarget, class CBufferString *); /* linkage=_ZNK26CScratchRenderTargetSystem19GetRenderTargetNameEP24HSceneViewRenderTarget__P13CBufferString */
	int RenderTargetHandleToLocalIndex(const class CScratchRenderTargetSystem  *, HSceneViewRenderTarget); /* linkage=_ZNK26CScratchRenderTargetSystem30RenderTargetHandleToLocalIndexEP24HSceneViewRenderTarget__ */
	int RenderTargetHandleToViewIndex(const class CScratchRenderTargetSystem  *, HSceneViewRenderTarget); /* linkage=_ZNK26CScratchRenderTargetSystem29RenderTargetHandleToViewIndexEP24HSceneViewRenderTarget__ */
	HSceneViewRenderTarget IndexToRenderTargetHandle(const class CScratchRenderTargetSystem  *, int); /* linkage=_ZNK26CScratchRenderTargetSystem25IndexToRenderTargetHandleEi */
	int FindRenderTargetById(const class CScratchRenderTargetSystem  *, const class RenderTargetId_t  &); /* linkage=_ZNK26CScratchRenderTargetSystem20FindRenderTargetByIdERK16RenderTargetId_t */
	void ComputeLayerInfo(class CScratchRenderTargetSystem *, class CSceneLayer *, int, class LayerInfo_t *); /* linkage=_ZN26CScratchRenderTargetSystem16ComputeLayerInfoEP11CSceneLayeriPNS_11LayerInfo_tE */
	int ComputeLayerInfo(class CScratchRenderTargetSystem *, class LayerInfo_t *); /* linkage=_ZN26CScratchRenderTargetSystem16ComputeLayerInfoEPNS_11LayerInfo_tE */
	void MarkUnusedLayers(class CScratchRenderTargetSystem *, int, class LayerInfo_t *); /* linkage=_ZN26CScratchRenderTargetSystem16MarkUnusedLayersEiPNS_11LayerInfo_tE */
	void RemoveUnusedLayers(class CScratchRenderTargetSystem *, int &, class LayerInfo_t *); /* linkage=_ZN26CScratchRenderTargetSystem18RemoveUnusedLayersERiPNS_11LayerInfo_tE */
	void ComputeRenderTargetUsageScope(class CScratchRenderTargetSystem *, class RenderTargetState_t *, int, const class LayerInfo_t  *); /* linkage=_ZN26CScratchRenderTargetSystem29ComputeRenderTargetUsageScopeEPNS_19RenderTargetState_tEiPKNS_11LayerInfo_tE */
	void AssignTexturesToRenderTargets(class CScratchRenderTargetSystem *, int, class RenderTargetState_t *, int, class LayerInfo_t *); /* linkage=_ZN26CScratchRenderTargetSystem29AssignTexturesToRenderTargetsEiPNS_19RenderTargetState_tEiPNS_11LayerInfo_tE */
	void ComputeRenderTargetBindings(class CScratchRenderTargetSystem *, int, class RenderTargetState_t *, int, const class LayerInfo_t  *); /* linkage=_ZN26CScratchRenderTargetSystem27ComputeRenderTargetBindingsEiPNS_19RenderTargetState_tEiPKNS_11LayerInfo_tE */
	int FindBestFitScratchRenderTarget(class CScratchRenderTargetSystem *, const class SceneViewRenderTargetInfo_t  &, enum RenderMultisampleType_t, bool, int, const class SceneScratchRenderTargetDesc_t  *, const bool  *); /* linkage=_ZN26CScratchRenderTargetSystem30FindBestFitScratchRenderTargetERK27SceneViewRenderTargetInfo_t23RenderMultisampleType_tbiPK30SceneScratchRenderTargetDesc_tPKb */
	void UpdateSwapChainAndMultisampleType(class CScratchRenderTargetSystem *, const class RenderTargetInfo_t  &, bool, class CSceneLayer *, class LayerInfo_t *); /* linkage=_ZN26CScratchRenderTargetSystem33UpdateSwapChainAndMultisampleTypeERKNS_18RenderTargetInfo_tEbP11CSceneLayerPNS_11LayerInfo_tE */
	void ComputeRenderTargetResolves(class CScratchRenderTargetSystem *, int, class LayerInfo_t *); /* linkage=_ZN26CScratchRenderTargetSystem27ComputeRenderTargetResolvesEiPNS_11LayerInfo_tE */
	void UpdateLayerDiscardibility(class CScratchRenderTargetSystem *, const class RenderTargetInfo_t  &, bool, class CSceneLayer *, class LayerInfo_t *); /* linkage=_ZN26CScratchRenderTargetSystem25UpdateLayerDiscardibilityERKNS_18RenderTargetInfo_tEbP11CSceneLayerPNS_11LayerInfo_tE */
	void UpdateOutputResolveMask(class CScratchRenderTargetSystem *, class OutputInfo_t &, enum RenderMultisampleType_t, enum RenderMultisampleType_t, bool, bool, const char  *, const class RenderTargetId_t  &); /* linkage=_ZN26CScratchRenderTargetSystem23UpdateOutputResolveMaskERNS_12OutputInfo_tE23RenderMultisampleType_tS2_bbPKcRK16RenderTargetId_t */
	/* <3758846> ../scenesystem/scratchrendertargetsystem.cpp:2273 */
	void OutputLayerInfo(class CScratchRenderTargetSystem *, int, const class LayerInfo_t  *); /* linkage=_ZN26CScratchRenderTargetSystem15OutputLayerInfoEiPKNS_11LayerInfo_tE */
	/* <37589fe> ../scenesystem/scratchrendertargetsystem.cpp:2407 */
	void OutputRenderTargetBindings(class CScratchRenderTargetSystem *); /* linkage=_ZN26CScratchRenderTargetSystem26OutputRenderTargetBindingsEv */
	/* <3758a5d> ../scenesystem/scratchrendertargetsystem.cpp:683 */
	void UpdateRenderTargetMatchState(class CScratchRenderTargetSystem *, int, int); /* linkage=_ZN26CScratchRenderTargetSystem28UpdateRenderTargetMatchStateEii */
	void ComputeDesiredRenderTargetSizes(class CScratchRenderTargetSystem *, class RenderTargetState_t *); /* linkage=_ZN26CScratchRenderTargetSystem31ComputeDesiredRenderTargetSizesEPNS_19RenderTargetState_tE */
	/* <3758475> ../scenesystem/scratchrendertargetsystem.cpp:97 */
	void InitRenderTargetInfo(class CScratchRenderTargetSystem *, class RenderTargetInfo_t &); /* linkage=_ZN26CScratchRenderTargetSystem20InitRenderTargetInfoERNS_18RenderTargetInfo_tE */
	/* <37588d2> ../scenesystem/scratchrendertargetsystem.cpp:2319 */
	void OutputRenderTargetUsage(class CScratchRenderTargetSystem *, int, const class RenderTargetState_t  *, class LayerInfo_t *); /* linkage=_ZN26CScratchRenderTargetSystem23OutputRenderTargetUsageEiPKNS_19RenderTargetState_tEPNS_11LayerInfo_tE */
	/* <3758972> ../scenesystem/scratchrendertargetsystem.cpp:2355 */
	void OutputRenderTargetInfo(class CScratchRenderTargetSystem *, int, const class RenderTargetState_t  *); /* linkage=_ZN26CScratchRenderTargetSystem22OutputRenderTargetInfoEiPKNS_19RenderTargetState_tE */
	void ComputeInternalLayerFlags(class CScratchRenderTargetSystem *); /* linkage=_ZN26CScratchRenderTargetSystem25ComputeInternalLayerFlagsEv */
	/* <37587d6> ../scenesystem/scratchrendertargetsystem.cpp:2051 */
	void TestRenderTargetBindingValidity(class CScratchRenderTargetSystem *, int, const class LayerInfo_t  *); /* linkage=_ZN26CScratchRenderTargetSystem31TestRenderTargetBindingValidityEiPKNS_11LayerInfo_tE */
	bool IsAliasMultisampled(const class CScratchRenderTargetSystem  *, const class RenderTargetState_t  &, enum RenderTargetAliasType_t); /* linkage=_ZNK26CScratchRenderTargetSystem19IsAliasMultisampledERKNS_19RenderTargetState_tENS_23RenderTargetAliasType_tE */
	enum RenderTargetAliasType_t GetInputAlias(const class CScratchRenderTargetSystem  *, const class LayerInfo_t  &, int); /* linkage=_ZNK26CScratchRenderTargetSystem13GetInputAliasERKNS_11LayerInfo_tEi */
	void AdjustUsageScopeForExternalReferences(class CScratchRenderTargetSystem *, int, class RenderTargetState_t *, int, const class LayerInfo_t  *); /* linkage=_ZN26CScratchRenderTargetSystem37AdjustUsageScopeForExternalReferencesEiPNS_19RenderTargetState_tEiPKNS_11LayerInfo_tE */
	void ComputeResolvesForLayer(class CScratchRenderTargetSystem *, int, class LayerInfo_t &, const char  *, class LayerInfo_t *); /* linkage=_ZN26CScratchRenderTargetSystem23ComputeResolvesForLayerEiRNS_11LayerInfo_tEPKcPS0_ */
	void ValidateRenderTargetWrite(class CScratchRenderTargetSystem *, int, int, const class LayerInfo_t  *, enum LayerOutputType_t, bool); /* linkage=_ZN26CScratchRenderTargetSystem25ValidateRenderTargetWriteEiiPKNS_11LayerInfo_tENS_17LayerOutputType_tEb */
	void ValidateLegalRenderTargets(class CScratchRenderTargetSystem *); /* linkage=_ZN26CScratchRenderTargetSystem26ValidateLegalRenderTargetsEv */
	void ~CScratchRenderTargetSystem(class CScratchRenderTargetSystem *); /* linkage=_ZN26CScratchRenderTargetSystemD4Ev */
	void CScratchRenderTargetSystem(class CScratchRenderTargetSystem *); /* linkage=_ZN26CScratchRenderTargetSystemC4Ev */
} __attribute__((__aligned__(8)));

// <03739574> ../scenesystem/scratchrendertargetsystem.h:135
void RenderTargetInfo_t::RenderTargetInfo_t()
{
} /* size: 0 */

// <03739558> ../scenesystem/scratchrendertargetsystem.h:135
inline void RenderTargetInfo_t::RenderTargetInfo_t()
{
} /* size: 0 */

// <0321E459> ../scenesystem/scratchrendertargetsystem.h:135
void RenderTargetInfo_t::~RenderTargetInfo_t()
{
} /* size: 0 */

// <0321E43D> ../scenesystem/scratchrendertargetsystem.h:135
inline void RenderTargetInfo_t::~RenderTargetInfo_t()
{
} /* size: 0 */

// <037549C6> ../scenesystem/scratchrendertargetsystem.h:279
// variable: 1
inline void CScratchRenderTargetSystem::IsAliasMultisampled(const RenderTargetState_t& state, RenderTargetAliasType_t nAlias)
{
	bool pMSAA; // 281
} /* size: 0, variables: 1 */

// <03754970> ../scenesystem/scratchrendertargetsystem.h:285
// variables: 2
inline void CScratchRenderTargetSystem::GetInputAlias(const LayerInfo_t& layer, int nInputIndex)
{
	const InputInfo_t& info; // 287
	bool bUsingMSAA; // 290
} /* size: 0, variables: 2 */

