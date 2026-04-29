
//
// public/scenesystem/iscenelayer.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//				   libschemasystem.so
//
//	functions: 56
//	classes: 3
//	structs: 3
//

// <0000BF46> ../public/scenesystem/iscenelayer.h:121
// member variable: 1
// struct size: 4
struct HSceneViewRenderTarget__ {
	int unused; /* 0 4 */
};

// <00052362> ../public/scenesystem/iscenelayer.h:129
// member functions: 11
// member variables: 6
// struct size: 128
struct SceneLayerOutputs_t {
	/* ../public/scenesystem/iscenelayer.h:131 */
	void SceneLayerOutputs_t(SceneLayerOutputs_t* );
	/* ../public/scenesystem/iscenelayer.h:134 */
	void SceneLayerOutputs_t(SceneLayerOutputs_t* , HSceneViewRenderTarget, HSceneViewRenderTarget, RenderColorSpace_t);
	/* ../public/scenesystem/iscenelayer.h:137 */
	void SceneLayerOutputs_t(SceneLayerOutputs_t* , HSceneViewRenderTarget, HSceneViewRenderTarget, HSceneViewRenderTarget, RenderColorSpace_t);
	/* ../public/scenesystem/iscenelayer.h:140 */
	void SceneLayerOutputs_t(SceneLayerOutputs_t* , HSceneViewRenderTarget, HSceneViewRenderTarget, HSceneViewRenderTarget, HSceneViewRenderTarget, RenderColorSpace_t);
	/* ../public/scenesystem/iscenelayer.h:143 */
	void SceneLayerOutputs_t(SceneLayerOutputs_t* , HSceneViewRenderTarget, HSceneViewRenderTarget, HSceneViewRenderTarget, HSceneViewRenderTarget, HSceneViewRenderTarget, RenderColorSpace_t);
	/* ../public/scenesystem/iscenelayer.h:146 */
	void SceneLayerOutputs_t(SceneLayerOutputs_t* , int, HSceneViewRenderTarget* , HSceneViewRenderTarget, RenderColorSpace_t);
	/* ../public/scenesystem/iscenelayer.h:149 */
	void Init(SceneLayerOutputs_t* , HSceneViewRenderTarget, HSceneViewRenderTarget, RenderColorSpace_t);
	/* ../public/scenesystem/iscenelayer.h:157 */
	void Init(SceneLayerOutputs_t* , HSceneViewRenderTarget, HSceneViewRenderTarget, HSceneViewRenderTarget, RenderColorSpace_t);
	/* ../public/scenesystem/iscenelayer.h:166 */
	void Init(SceneLayerOutputs_t* , HSceneViewRenderTarget, HSceneViewRenderTarget, HSceneViewRenderTarget, HSceneViewRenderTarget, RenderColorSpace_t);
	/* ../public/scenesystem/iscenelayer.h:176 */
	void Init(SceneLayerOutputs_t* , HSceneViewRenderTarget, HSceneViewRenderTarget, HSceneViewRenderTarget, HSceneViewRenderTarget, HSceneViewRenderTarget, RenderColorSpace_t);
	/* ../public/scenesystem/iscenelayer.h:187 */
	void Init(SceneLayerOutputs_t* , int, HSceneViewRenderTarget* , HSceneViewRenderTarget, RenderColorSpace_t);
	int m_nColorTargetCount; /* 0 4 */
	HSceneViewRenderTarget m_pColorTargets[8]; /* 8 64 */
	RenderColorSpace_t m_allowSrgbWrites; /* 72 1 */
	HSceneViewRenderTarget m_hDepthTarget; /* 80 8 */
	int m_nColorTargetIndices[8]; /* 88 32 */
	int m_nDepthTargetIndex; /* 120 4 */
};

// <058D84FA> ../../public/scenesystem/iscenelayer.h:129
// member functions: 11
// member variables: 6
// struct size: 128
struct SceneLayerOutputs_t {
	/* ../../public/scenesystem/iscenelayer.h:131 */
	void SceneLayerOutputs_t(SceneLayerOutputs_t* );
	/* ../../public/scenesystem/iscenelayer.h:134 */
	void SceneLayerOutputs_t(SceneLayerOutputs_t* , HSceneViewRenderTarget, HSceneViewRenderTarget, RenderColorSpace_t);
	/* ../../public/scenesystem/iscenelayer.h:137 */
	void SceneLayerOutputs_t(SceneLayerOutputs_t* , HSceneViewRenderTarget, HSceneViewRenderTarget, HSceneViewRenderTarget, RenderColorSpace_t);
	/* ../../public/scenesystem/iscenelayer.h:140 */
	void SceneLayerOutputs_t(SceneLayerOutputs_t* , HSceneViewRenderTarget, HSceneViewRenderTarget, HSceneViewRenderTarget, HSceneViewRenderTarget, RenderColorSpace_t);
	/* ../../public/scenesystem/iscenelayer.h:143 */
	void SceneLayerOutputs_t(SceneLayerOutputs_t* , HSceneViewRenderTarget, HSceneViewRenderTarget, HSceneViewRenderTarget, HSceneViewRenderTarget, HSceneViewRenderTarget, RenderColorSpace_t);
	/* ../../public/scenesystem/iscenelayer.h:146 */
	void SceneLayerOutputs_t(SceneLayerOutputs_t* , int, HSceneViewRenderTarget* , HSceneViewRenderTarget, RenderColorSpace_t);
	/* ../../public/scenesystem/iscenelayer.h:149 */
	void Init(SceneLayerOutputs_t* , HSceneViewRenderTarget, HSceneViewRenderTarget, RenderColorSpace_t);
	/* ../../public/scenesystem/iscenelayer.h:157 */
	void Init(SceneLayerOutputs_t* , HSceneViewRenderTarget, HSceneViewRenderTarget, HSceneViewRenderTarget, RenderColorSpace_t);
	/* ../../public/scenesystem/iscenelayer.h:166 */
	void Init(SceneLayerOutputs_t* , HSceneViewRenderTarget, HSceneViewRenderTarget, HSceneViewRenderTarget, HSceneViewRenderTarget, RenderColorSpace_t);
	/* ../../public/scenesystem/iscenelayer.h:176 */
	void Init(SceneLayerOutputs_t* , HSceneViewRenderTarget, HSceneViewRenderTarget, HSceneViewRenderTarget, HSceneViewRenderTarget, HSceneViewRenderTarget, RenderColorSpace_t);
	/* ../../public/scenesystem/iscenelayer.h:187 */
	void Init(SceneLayerOutputs_t* , int, HSceneViewRenderTarget* , HSceneViewRenderTarget, RenderColorSpace_t);
	int m_nColorTargetCount; /* 0 4 */
	HSceneViewRenderTarget m_pColorTargets[8]; /* 8 64 */
	RenderColorSpace_t m_allowSrgbWrites; /* 72 1 */
	HSceneViewRenderTarget m_hDepthTarget; /* 80 8 */
	int m_nColorTargetIndices[8]; /* 88 32 */
	int m_nDepthTargetIndex; /* 120 4 */
};

// <0347D187> ../public/scenesystem/iscenelayer.h:131
void SceneLayerOutputs_t::SceneLayerOutputs_t()
{
} /* size: 0 */

// <0347D16E> ../public/scenesystem/iscenelayer.h:131
inline void SceneLayerOutputs_t::SceneLayerOutputs_t()
{
} /* size: 0 */

// <02F252E3> ../public/scenesystem/iscenelayer.h:134
void SceneLayerOutputs_t::SceneLayerOutputs_t(HSceneViewRenderTarget hColor0, HSceneViewRenderTarget hDepth, RenderColorSpace_t allowSrgbWrites)
{
} /* size: 0 */

// <02F252A6> ../public/scenesystem/iscenelayer.h:134
inline void SceneLayerOutputs_t::SceneLayerOutputs_t(HSceneViewRenderTarget hColor0, HSceneViewRenderTarget hDepth, RenderColorSpace_t allowSrgbWrites)
{
} /* size: 0 */

// <03AF6AE3> ../public/scenesystem/iscenelayer.h:149
inline void SceneLayerOutputs_t::Init(HSceneViewRenderTarget hColor0, HSceneViewRenderTarget hDepth, RenderColorSpace_t allowSrgbWrites)
{
} /* size: 0 */

// <0005262F> ../public/scenesystem/iscenelayer.h:211
// member functions: 180
// member variables: 41
// vtable entries: 24
// class size: 2,336
class ISceneLayer {
	/* ../public/scenesystem/iscenelayer.h:465 */
	struct RenderTargetAttribute_t {
		HSceneViewRenderTarget m_hRenderTarget; /* 0 8 */
		bool m_bMSAA; /* 8 1 */
		uint32 m_nFlags; /* 12 4 */
		/* ../public/scenesystem/iscenelayer.h:471 */
		bool operator==(RenderTargetAttribute_t* , const RenderTargetAttribute_t& );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/scenesystem/iscenelayer.h:510 */
	struct InputTexture_t {
		HRenderTexture m_hTexture; /* 0 8 */
		RenderImageLayout_t m_nImageLayout; /* 8 4 */
		/* ../public/scenesystem/iscenelayer.h:515 */
		void InputTexture_t(InputTexture_t* );
		/* ../public/scenesystem/iscenelayer.h:520 */
		void InputTexture_t(InputTexture_t* , HRenderTexture, RenderImageLayout_t);
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/scenesystem/iscenelayer.h:529 */
	struct InputSceneViewRenderTarget_t {
		HSceneViewRenderTarget m_hTarget; /* 0 8 */
		RenderImageLayout_t m_nImageLayout; /* 8 4 */
		HRenderTexture m_hComputedTexture; /* 16 8 */
		/* ../public/scenesystem/iscenelayer.h:537 */
		void InputSceneViewRenderTarget_t(InputSceneViewRenderTarget_t* );
		/* ../public/scenesystem/iscenelayer.h:542 */
		void InputSceneViewRenderTarget_t(InputSceneViewRenderTarget_t* , HSceneViewRenderTarget, RenderImageLayout_t);
	};
	/* tag__fprintf: const_type tag not supported! */;
	int ()(void) * * _vptr.ISceneLayer; /* 0 8 */
	/* ../public/scenesystem/iscenelayer.h:214 */
	const CUtlStringToken& GetShaderMode(const ISceneLayer* );
	/* ../public/scenesystem/iscenelayer.h:573 */
	void AddStandardConstantBuffer(ISceneLayer* , CUtlStringToken, ConstantBufferHandle_t);
	/* ../public/scenesystem/iscenelayer.h:218 */
	virtual void SetAssociatedLayer(ISceneLayer* , ISceneLayer* );
	/* ../public/scenesystem/iscenelayer.h:220 */
	virtual CDisplayList* QueueDisplayList(ISceneLayer* , IRenderContext* );
	/* ../public/scenesystem/iscenelayer.h:222 */
	void SetScissorRect(ISceneLayer* , const Rect_t& );
	/* ../public/scenesystem/iscenelayer.h:226 */
	const Rect_t& GetScissorRect(const ISceneLayer* );
	/* ../public/scenesystem/iscenelayer.h:231 */
	void SetClearColor(ISceneLayer* , const Vector4D& , int);
	/* ../public/scenesystem/iscenelayer.h:238 */
	virtual int GetUniqueSceneLayerIndex(const ISceneLayer* );
	/* ../public/scenesystem/iscenelayer.h:245 */
	void SetAttr(ISceneLayer* , CUtlStringToken, HRenderTexture, int32);
	/* ../public/scenesystem/iscenelayer.h:246 */
	void SetAttr(ISceneLayer* , CUtlStringToken, float);
	/* ../public/scenesystem/iscenelayer.h:247 */
	void SetAttr(ISceneLayer* , CUtlStringToken, int);
	/* ../public/scenesystem/iscenelayer.h:248 */
	void SetAttr(ISceneLayer* , CUtlStringToken, const Vector& );
	/* ../public/scenesystem/iscenelayer.h:249 */
	void SetAttr(ISceneLayer* , CUtlStringToken, const Vector4D& );
	/* ../public/scenesystem/iscenelayer.h:250 */
	void SetAttr(ISceneLayer* , CUtlStringToken, const VMatrix& );
	/* ../public/scenesystem/iscenelayer.h:251 */
	void SetAttr(ISceneLayer* , CUtlStringToken, void* );
	/* ../public/scenesystem/iscenelayer.h:252 */
	void SetAttr(ISceneLayer* , CUtlStringToken, ConstantBufferHandle_t);
	/* ../public/scenesystem/iscenelayer.h:254 */
	void SetComboAttr(ISceneLayer* , CUtlStringToken, uint8);
	/* ../public/scenesystem/iscenelayer.h:256 */
	int GetIntValue(const ISceneLayer* , CUtlStringToken, int);
	/* ../public/scenesystem/iscenelayer.h:257 */
	uint8 GetComboValue(const ISceneLayer* , CUtlStringToken, uint8);
	/* ../public/scenesystem/iscenelayer.h:258 */
	float GetFloatValue(const ISceneLayer* , CUtlStringToken, float);
	/* ../public/scenesystem/iscenelayer.h:259 */
	Vector GetVectorValue(const ISceneLayer* , CUtlStringToken, Vector);
	/* ../public/scenesystem/iscenelayer.h:260 */
	void* GetPtrValue(const ISceneLayer* , CUtlStringToken, void* );
	/* ../public/scenesystem/iscenelayer.h:261 */
	HRenderTexture GetTextureValue(const ISceneLayer* , CUtlStringToken, HRenderTexture);
	/* ../public/scenesystem/iscenelayer.h:579 */
	void SetAttr(ISceneLayer* , CUtlStringToken, HSceneViewRenderTarget, SceneLayerMSAAMode_t, uint32);
	/* ../public/scenesystem/iscenelayer.h:591 */
	HSceneViewRenderTarget GetRenderTargetValue(const ISceneLayer* , CUtlStringToken, HSceneViewRenderTarget);
	/* ../public/scenesystem/iscenelayer.h:272 */
	void SetOutput(ISceneLayer* , const SceneLayerOutputs_t& );
	/* ../public/scenesystem/iscenelayer.h:275 */
	virtual const RenderTargetDesc_t& GetRenderTargetDesc(const ISceneLayer* );
	/* ../public/scenesystem/iscenelayer.h:278 */
	IProceduralLayerRenderer* GetProceduralLayerRenderer(const ISceneLayer* );
	/* ../public/scenesystem/iscenelayer.h:281 */
	void SetPreSubmitProceduralLayerRenderer(ISceneLayer* , IProceduralLayerRenderer* , bool);
	/* ../public/scenesystem/iscenelayer.h:289 */
	virtual void SetRenderTargetDesc(ISceneLayer* , const RenderTargetDesc_t& );
	/* ../public/scenesystem/iscenelayer.h:603 */
	void AddObjectFlagsRequiredMask(ISceneLayer* , ESceneObjectFlags);
	/* ../public/scenesystem/iscenelayer.h:608 */
	void AddObjectFlagsExcludedMask(ISceneLayer* , ESceneObjectFlags);
	/* ../public/scenesystem/iscenelayer.h:613 */
	void RemoveObjectFlagsRequiredMask(ISceneLayer* , ESceneObjectFlags);
	/* ../public/scenesystem/iscenelayer.h:618 */
	void RemoveObjectFlagsExcludedMask(ISceneLayer* , ESceneObjectFlags);
	/* ../public/scenesystem/iscenelayer.h:623 */
	ESceneObjectFlags GetObjectFlagsRequiredMask(const ISceneLayer* );
	/* ../public/scenesystem/iscenelayer.h:628 */
	ESceneObjectFlags GetObjectFlagsExcludedMask(const ISceneLayer* );
	/* ../public/scenesystem/iscenelayer.h:633 */
	const char* GetDebugName(const ISceneLayer* );
	/* ../public/scenesystem/iscenelayer.h:303 */
	CUtlStringToken GetLabel(const ISceneLayer* );
	/* ../public/scenesystem/iscenelayer.h:304 */
	void SetLabel(ISceneLayer* , CUtlStringToken);
	/* ../public/scenesystem/iscenelayer.h:307 */
	void SetOverrideRasterizerState(ISceneLayer* , RsRasterizerStateHandle_t);
	/* ../public/scenesystem/iscenelayer.h:308 */
	RsRasterizerStateHandle_t GetOverrideRasterizerState(const ISceneLayer* );
	/* ../public/scenesystem/iscenelayer.h:311 */
	virtual void SetLayerNoCull(ISceneLayer* , bool);
	/* ../public/scenesystem/iscenelayer.h:314 */
	void SetOverrideDepthStencilState(ISceneLayer* , RsDepthStencilStateHandle_t, uint32);
	/* ../public/scenesystem/iscenelayer.h:315 */
	RsDepthStencilStateHandle_t GetOverrideDepthStencilState(const ISceneLayer* );
	/* ../public/scenesystem/iscenelayer.h:316 */
	uint32 GetOverrideStencilRef(const ISceneLayer* );
	/* ../public/scenesystem/iscenelayer.h:317 */
	HMaterial GetOverrideMaterial(const ISceneLayer* );
	/* ../public/scenesystem/iscenelayer.h:320 */
	const RsStencilStateOverride_t* GetStencilStateOverride(const ISceneLayer* );
	/* ../public/scenesystem/iscenelayer.h:321 */
	void SetStencilStateOverride(ISceneLayer* , const RsStencilStateOverride_t& );
	/* ../public/scenesystem/iscenelayer.h:324 */
	const RsDepthBiasStateOverride_t* GetDepthBiasStateOverride(const ISceneLayer* );
	/* ../public/scenesystem/iscenelayer.h:325 */
	void SetDepthBiasStateOverride(ISceneLayer* , const RsDepthBiasStateOverride_t& );
	/* ../public/scenesystem/iscenelayer.h:328 */
	const RsFillModeOverride_t* GetFillModeStateOverride(const ISceneLayer* );
	/* ../public/scenesystem/iscenelayer.h:329 */
	void SetFillModeStateOverride(ISceneLayer* , const RsFillModeOverride_t& );
	/* ../public/scenesystem/iscenelayer.h:336 */
	void SetStencilBitDependency(ISceneLayer* , CUtlStringToken);
	/* ../public/scenesystem/iscenelayer.h:337 */
	CUtlStringToken GetStencilDependency(const ISceneLayer* );
	/* ../public/scenesystem/iscenelayer.h:341 */
	virtual void DisableReflectionsAndRefractionsForObjectsInThisLayer(ISceneLayer* , bool);
	/* ../public/scenesystem/iscenelayer.h:347 */
	virtual void OverrideFrustum(ISceneLayer* , const CFrustum& );
	/* ../public/scenesystem/iscenelayer.h:350 */
	virtual void Override2Frustums(ISceneLayer* , const CFrustum& , const CFrustum& );
	/* ../public/scenesystem/iscenelayer.h:352 */
	ISceneView* GetParentView(const ISceneLayer* );
	/* ../public/scenesystem/iscenelayer.h:359 */
	virtual void SetFadeTargetLayer(ISceneLayer* , ISceneLayer* );
	/* ../public/scenesystem/iscenelayer.h:360 */
	virtual ISceneLayer* GetFadeTargetLayer(const ISceneLayer* );
	/* ../public/scenesystem/iscenelayer.h:363 */
	virtual int FindOrAllocateStencilBit(ISceneLayer* , CUtlStringToken);
	/* ../public/scenesystem/iscenelayer.h:369 */
	virtual bool ParseStringForStencilMaskAndRefValueForRead(ISceneLayer* , const char* , int* , int* );
	/* ../public/scenesystem/iscenelayer.h:372 */
	bool NeedsPerLayerViewConstants(const ISceneLayer* );
	/* ../public/scenesystem/iscenelayer.h:375 */
	void SetObjectMatchID(ISceneLayer* , CUtlStringToken);
	/* ../public/scenesystem/iscenelayer.h:377 */
	void SetOverrideMaterial(ISceneLayer* , HMaterial);
	/* ../public/scenesystem/iscenelayer.h:379 */
	virtual void SetTonemapOverrideScaleValue(ISceneLayer* , float);
	/* ../public/scenesystem/iscenelayer.h:388 */
	virtual void SetAuxiliaryCameraMask(ISceneLayer* , uint);
	/* ../public/scenesystem/iscenelayer.h:391 */
	virtual void SetCustomSortKeyFunction(ISceneLayer* , LayerComputeSortKeyFunc_t* );
	/* ../public/scenesystem/iscenelayer.h:394 */
	void DisableClearScreenIfNoObjectsRendered(ISceneLayer* );
	/* ../public/scenesystem/iscenelayer.h:397 */
	void DisableUnlessOtherLayerRenderedObjects(ISceneLayer* , ISceneLayer* );
	/* ../public/scenesystem/iscenelayer.h:398 */
	CUtlVectorFixedGrowable<ISceneLayer*, 1>& GetLayersThatMustRenderObjectsForThisLayerToBeDrawn(ISceneLayer* );
	/* ../public/scenesystem/iscenelayer.h:399 */
	void SetBoundingVolumeSizeCullThresholdInPercent(ISceneLayer* , float);
	/* ../public/scenesystem/iscenelayer.h:400 */
	float GetBoundingVolumeSizeCullThreshold(const ISceneLayer* );
	/* ../public/scenesystem/iscenelayer.h:401 */
	virtual void ~ISceneLayer(ISceneLayer* );
	/* ../public/scenesystem/iscenelayer.h:404 */
	virtual void SetDynamicContantBufferAttribute(ISceneLayer* , CUtlStringToken, void* , size_t);
	/* ../public/scenesystem/iscenelayer.h:408 */
	virtual void AddSemaphoreDependency(ISceneLayer* , ISceneLayer* );
	/* ../public/scenesystem/iscenelayer.h:411 */
	void SetSemaphore(ISceneLayer* , RenderSemaphoreHandle_t);
	/* ../public/scenesystem/iscenelayer.h:416 */
	RenderSemaphoreHandle_t GetSemaphore(const ISceneLayer* );
	/* ../public/scenesystem/iscenelayer.h:418 */
	virtual void SetCullPlane(ISceneLayer* , const VPlane& );
	/* ../public/scenesystem/iscenelayer.h:420 */
	virtual void AddWorldFilter(ISceneLayer* , ISceneWorld* );
	/* ../public/scenesystem/iscenelayer.h:424 */
	virtual void SetPerfMarker(ISceneLayer* , const char* );
	/* ../public/scenesystem/iscenelayer.h:428 */
	virtual void ClearPerfMarker(ISceneLayer* );
	/* ../public/scenesystem/iscenelayer.h:433 */
	void AddInputTexture(ISceneLayer* , HRenderTexture, RenderImageLayout_t);
	/* ../public/scenesystem/iscenelayer.h:437 */
	void AddInputSceneViewRenderTarget(ISceneLayer* , HSceneViewRenderTarget, RenderImageLayout_t);
	/* ../public/scenesystem/iscenelayer.h:442 */
	virtual bool GetRenderTargetDescDimensions(ISceneLayer* , int* , int* );
	/* ../public/scenesystem/iscenelayer.h:444 */
	virtual void SetWireframeOverride(ISceneLayer* , bool, float);
	RenderViewport_t m_viewport; /* 8 28 */
	ELayerType m_eLayerType; /* 36 4 */
	CUtlStringToken m_shaderMode; /* 40 4 */
	uint64 m_nLayerFlags; /* 48 8 */
	int m_nClearFlags; /* 56 4 */
	SceneLayerOutputs_t m_RenderTargetOutputs; /* 64 128 */
	CRenderAttributes m_Attrs; /* 192 1184 */
	bool m_bRenderOnMainThread; /* 1376 1 */
protected:
	ESceneObjectFlags m_nObjectFlagsRequiredMask; /* 1384 8 */
	ESceneObjectFlags m_nObjectFlagsExcludedMask; /* 1392 8 */
	char m_szDebugName[64]; /* 1400 64 */
	CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t, 16> m_RenderTargetAttribute; /* 1472 336 */
	int16 m_nNumClearColors; /* 1808 2 */
	Vector4D m_vecClearColor[8]; /* 1812 128 */
	Rect_t m_scissorRect; /* 1940 16 */
	IProceduralLayerRenderer * m_pRenderProcedure; /* 1960 8 */
	bool m_bDeleteRenderProcedureWhenFinished; /* 1968 1 */
	RsRasterizerStateHandle_t m_hOverrideRasterizerState; /* 1976 8 */
	RsDepthStencilStateHandle_t m_hOverrideDepthStencilState; /* 1984 8 */
	RsStencilStateOverride_t m_StencilStateOverride; /* 1992 8 */
	RsDepthBiasStateOverride_t m_DepthBiasStateOverride; /* 2000 12 */
	RsFillModeOverride_t m_FillModeOverride; /* 2012 1 */
	bool m_bStencilStateOverridden; /* 2013 1 */
	bool m_bDepthBiasStateOverridden; /* 2014 1 */
	bool m_bFillModeOverridden; /* 2015 1 */
	uint32 m_nOverrideStencilRef; /* 2016 4 */
	float m_flSizeCullThreshold; /* 2020 4 */
	CUtlStringToken m_nObjectMatchID; /* 2024 4 */
	HMaterialStrong m_hOverrideMaterial; /* 2032 8 */
	CUtlStringToken m_nLabel; /* 2040 4 */
	CUtlStringToken m_nStencilBitDependency; /* 2044 4 */
	ISceneView * m_pParentView; /* 2048 8 */
	CUtlVectorFixedGrowable<ISceneLayer*, 1> m_layersThatMustRenderObjectsForThisLayerToBeDrawn __attribute__((__aligned__(8))); /* 2056 40 */
	CUtlVectorFixed<ConstantBufferHandle_t__*, 4> m_standardConstantBuffers __attribute__((__aligned__(8))); /* 2096 48 */
	CUtlVectorFixed<CUtlStringToken, 4> m_standardConstantBufferNames __attribute__((__aligned__(8))); /* 2144 32 */
	CUtlVectorFixedGrowable<ISceneLayer::InputTexture_t, 2> m_inputTextures __attribute__((__aligned__(8))); /* 2176 64 */
	CUtlVectorFixedGrowable<ISceneLayer::InputSceneViewRenderTarget_t, 2> m_inputSceneViewRenderTargets __attribute__((__aligned__(8))); /* 2240 80 */
	RenderSemaphoreHandle_t m_hSemaphore; /* 2320 8 */
	bool m_bDisableClearScreenIfNoObjectsRendered; /* 2328 1 */
	/* ../public/scenesystem/iscenelayer.h:561 */
	void ISceneLayer(ISceneLayer* );
	ELayerEnum LayerEnum; /* 2332 4 */
	const class CUtlStringToken  & GetShaderMode(const class ISceneLayer  *); /* linkage=_ZNK11ISceneLayer13GetShaderModeEv */
	void AddStandardConstantBuffer(class ISceneLayer *, class CUtlStringToken, ConstantBufferHandle_t); /* linkage=_ZN11ISceneLayer25AddStandardConstantBufferE15CUtlStringTokenP24ConstantBufferHandle_t__ */
	virtual void SetAssociatedLayer(class ISceneLayer *, class ISceneLayer *); /* linkage=_ZN11ISceneLayer18SetAssociatedLayerEPS_ */
	virtual class CDisplayList * QueueDisplayList(class ISceneLayer *, class IRenderContext *); /* linkage=_ZN11ISceneLayer16QueueDisplayListEP14IRenderContext */
	void SetScissorRect(class ISceneLayer *, const class Rect_t  &); /* linkage=_ZN11ISceneLayer14SetScissorRectERK6Rect_t */
	const class Rect_t  & GetScissorRect(const class ISceneLayer  *); /* linkage=_ZNK11ISceneLayer14GetScissorRectEv */
	void SetClearColor(class ISceneLayer *, const class Vector4D  &, int); /* linkage=_ZN11ISceneLayer13SetClearColorERK8Vector4Di */
	virtual int GetUniqueSceneLayerIndex(const class ISceneLayer  *); /* linkage=_ZNK11ISceneLayer24GetUniqueSceneLayerIndexEv */
	void SetAttr(class ISceneLayer *, class CUtlStringToken, HRenderTexture, int32); /* linkage=_ZN11ISceneLayer7SetAttrE15CUtlStringToken11CWeakHandleI31InfoForResourceTypeCTextureBaseEi */
	void SetAttr(class ISceneLayer *, class CUtlStringToken, float); /* linkage=_ZN11ISceneLayer7SetAttrE15CUtlStringTokenf */
	void SetAttr(class ISceneLayer *, class CUtlStringToken, int); /* linkage=_ZN11ISceneLayer7SetAttrE15CUtlStringTokeni */
	void SetAttr(class ISceneLayer *, class CUtlStringToken, const class Vector  &); /* linkage=_ZN11ISceneLayer7SetAttrE15CUtlStringTokenRK6Vector */
	void SetAttr(class ISceneLayer *, class CUtlStringToken, const class Vector4D  &); /* linkage=_ZN11ISceneLayer7SetAttrE15CUtlStringTokenRK8Vector4D */
	void SetAttr(class ISceneLayer *, class CUtlStringToken, const class VMatrix  &); /* linkage=_ZN11ISceneLayer7SetAttrE15CUtlStringTokenRK7VMatrix */
	void SetAttr(class ISceneLayer *, class CUtlStringToken, void *); /* linkage=_ZN11ISceneLayer7SetAttrE15CUtlStringTokenPv */
	void SetAttr(class ISceneLayer *, class CUtlStringToken, ConstantBufferHandle_t); /* linkage=_ZN11ISceneLayer7SetAttrE15CUtlStringTokenP24ConstantBufferHandle_t__ */
	void SetComboAttr(class ISceneLayer *, class CUtlStringToken, uint8); /* linkage=_ZN11ISceneLayer12SetComboAttrE15CUtlStringTokenh */
	int GetIntValue(const class ISceneLayer  *, class CUtlStringToken, int); /* linkage=_ZNK11ISceneLayer11GetIntValueE15CUtlStringTokeni */
	uint8 GetComboValue(const class ISceneLayer  *, class CUtlStringToken, uint8); /* linkage=_ZNK11ISceneLayer13GetComboValueE15CUtlStringTokenh */
	float GetFloatValue(const class ISceneLayer  *, class CUtlStringToken, float); /* linkage=_ZNK11ISceneLayer13GetFloatValueE15CUtlStringTokenf */
	class Vector GetVectorValue(const class ISceneLayer  *, class CUtlStringToken, class Vector); /* linkage=_ZNK11ISceneLayer14GetVectorValueE15CUtlStringToken6Vector */
	void * GetPtrValue(const class ISceneLayer  *, class CUtlStringToken, void *); /* linkage=_ZNK11ISceneLayer11GetPtrValueE15CUtlStringTokenPv */
	HRenderTexture GetTextureValue(const class ISceneLayer  *, class CUtlStringToken, HRenderTexture); /* linkage=_ZNK11ISceneLayer15GetTextureValueE15CUtlStringToken11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	void SetAttr(class ISceneLayer *, class CUtlStringToken, HSceneViewRenderTarget, enum SceneLayerMSAAMode_t, uint32); /* linkage=_ZN11ISceneLayer7SetAttrE15CUtlStringTokenP24HSceneViewRenderTarget__20SceneLayerMSAAMode_tj */
	HSceneViewRenderTarget GetRenderTargetValue(const class ISceneLayer  *, class CUtlStringToken, HSceneViewRenderTarget); /* linkage=_ZNK11ISceneLayer20GetRenderTargetValueE15CUtlStringTokenP24HSceneViewRenderTarget__ */
	void SetOutput(class ISceneLayer *, const class SceneLayerOutputs_t  &); /* linkage=_ZN11ISceneLayer9SetOutputERK19SceneLayerOutputs_t */
	virtual const class RenderTargetDesc_t  & GetRenderTargetDesc(const class ISceneLayer  *); /* linkage=_ZNK11ISceneLayer19GetRenderTargetDescEv */
	class IProceduralLayerRenderer * GetProceduralLayerRenderer(const class ISceneLayer  *); /* linkage=_ZNK11ISceneLayer26GetProceduralLayerRendererEv */
	void SetPreSubmitProceduralLayerRenderer(class ISceneLayer *, class IProceduralLayerRenderer *, bool); /* linkage=_ZN11ISceneLayer35SetPreSubmitProceduralLayerRendererEP24IProceduralLayerRendererb */
	virtual void SetRenderTargetDesc(class ISceneLayer *, const class RenderTargetDesc_t  &); /* linkage=_ZN11ISceneLayer19SetRenderTargetDescERK18RenderTargetDesc_t */
	void AddObjectFlagsRequiredMask(class ISceneLayer *, enum ESceneObjectFlags); /* linkage=_ZN11ISceneLayer26AddObjectFlagsRequiredMaskE17ESceneObjectFlags */
	void AddObjectFlagsExcludedMask(class ISceneLayer *, enum ESceneObjectFlags); /* linkage=_ZN11ISceneLayer26AddObjectFlagsExcludedMaskE17ESceneObjectFlags */
	void RemoveObjectFlagsRequiredMask(class ISceneLayer *, enum ESceneObjectFlags); /* linkage=_ZN11ISceneLayer29RemoveObjectFlagsRequiredMaskE17ESceneObjectFlags */
	void RemoveObjectFlagsExcludedMask(class ISceneLayer *, enum ESceneObjectFlags); /* linkage=_ZN11ISceneLayer29RemoveObjectFlagsExcludedMaskE17ESceneObjectFlags */
	enum ESceneObjectFlags GetObjectFlagsRequiredMask(const class ISceneLayer  *); /* linkage=_ZNK11ISceneLayer26GetObjectFlagsRequiredMaskEv */
	enum ESceneObjectFlags GetObjectFlagsExcludedMask(const class ISceneLayer  *); /* linkage=_ZNK11ISceneLayer26GetObjectFlagsExcludedMaskEv */
	const char  * GetDebugName(const class ISceneLayer  *); /* linkage=_ZNK11ISceneLayer12GetDebugNameEv */
	class CUtlStringToken GetLabel(const class ISceneLayer  *); /* linkage=_ZNK11ISceneLayer8GetLabelEv */
	void SetLabel(class ISceneLayer *, class CUtlStringToken); /* linkage=_ZN11ISceneLayer8SetLabelE15CUtlStringToken */
	void SetOverrideRasterizerState(class ISceneLayer *, RsRasterizerStateHandle_t); /* linkage=_ZN11ISceneLayer26SetOverrideRasterizerStateEP27RsRasterizerStateHandle_t__ */
	RsRasterizerStateHandle_t GetOverrideRasterizerState(const class ISceneLayer  *); /* linkage=_ZNK11ISceneLayer26GetOverrideRasterizerStateEv */
	virtual void SetLayerNoCull(class ISceneLayer *, bool); /* linkage=_ZN11ISceneLayer14SetLayerNoCullEb */
	void SetOverrideDepthStencilState(class ISceneLayer *, RsDepthStencilStateHandle_t, uint32); /* linkage=_ZN11ISceneLayer28SetOverrideDepthStencilStateEP29RsDepthStencilStateHandle_t__j */
	RsDepthStencilStateHandle_t GetOverrideDepthStencilState(const class ISceneLayer  *); /* linkage=_ZNK11ISceneLayer28GetOverrideDepthStencilStateEv */
	uint32 GetOverrideStencilRef(const class ISceneLayer  *); /* linkage=_ZNK11ISceneLayer21GetOverrideStencilRefEv */
	HMaterial GetOverrideMaterial(const class ISceneLayer  *); /* linkage=_ZNK11ISceneLayer19GetOverrideMaterialEv */
	const class RsStencilStateOverride_t  * GetStencilStateOverride(const class ISceneLayer  *); /* linkage=_ZNK11ISceneLayer23GetStencilStateOverrideEv */
	void SetStencilStateOverride(class ISceneLayer *, const class RsStencilStateOverride_t  &); /* linkage=_ZN11ISceneLayer23SetStencilStateOverrideERK24RsStencilStateOverride_t */
	const class RsDepthBiasStateOverride_t  * GetDepthBiasStateOverride(const class ISceneLayer  *); /* linkage=_ZNK11ISceneLayer25GetDepthBiasStateOverrideEv */
	void SetDepthBiasStateOverride(class ISceneLayer *, const class RsDepthBiasStateOverride_t  &); /* linkage=_ZN11ISceneLayer25SetDepthBiasStateOverrideERK26RsDepthBiasStateOverride_t */
	const class RsFillModeOverride_t  * GetFillModeStateOverride(const class ISceneLayer  *); /* linkage=_ZNK11ISceneLayer24GetFillModeStateOverrideEv */
	void SetFillModeStateOverride(class ISceneLayer *, const class RsFillModeOverride_t  &); /* linkage=_ZN11ISceneLayer24SetFillModeStateOverrideERK20RsFillModeOverride_t */
	void SetStencilBitDependency(class ISceneLayer *, class CUtlStringToken); /* linkage=_ZN11ISceneLayer23SetStencilBitDependencyE15CUtlStringToken */
	class CUtlStringToken GetStencilDependency(const class ISceneLayer  *); /* linkage=_ZNK11ISceneLayer20GetStencilDependencyEv */
	virtual void DisableReflectionsAndRefractionsForObjectsInThisLayer(class ISceneLayer *, bool); /* linkage=_ZN11ISceneLayer53DisableReflectionsAndRefractionsForObjectsInThisLayerEb */
	virtual void OverrideFrustum(class ISceneLayer *, const class CFrustum  &); /* linkage=_ZN11ISceneLayer15OverrideFrustumERK8CFrustum */
	virtual void Override2Frustums(class ISceneLayer *, const class CFrustum  &, const class CFrustum  &); /* linkage=_ZN11ISceneLayer17Override2FrustumsERK8CFrustumS2_ */
	class ISceneView * GetParentView(const class ISceneLayer  *); /* linkage=_ZNK11ISceneLayer13GetParentViewEv */
	virtual void SetFadeTargetLayer(class ISceneLayer *, class ISceneLayer *); /* linkage=_ZN11ISceneLayer18SetFadeTargetLayerEPS_ */
	virtual class ISceneLayer * GetFadeTargetLayer(const class ISceneLayer  *); /* linkage=_ZNK11ISceneLayer18GetFadeTargetLayerEv */
	virtual int FindOrAllocateStencilBit(class ISceneLayer *, class CUtlStringToken); /* linkage=_ZN11ISceneLayer24FindOrAllocateStencilBitE15CUtlStringToken */
	virtual bool ParseStringForStencilMaskAndRefValueForRead(class ISceneLayer *, const char  *, int *, int *); /* linkage=_ZN11ISceneLayer43ParseStringForStencilMaskAndRefValueForReadEPKcPiS2_ */
	bool NeedsPerLayerViewConstants(const class ISceneLayer  *); /* linkage=_ZNK11ISceneLayer26NeedsPerLayerViewConstantsEv */
	void SetObjectMatchID(class ISceneLayer *, class CUtlStringToken); /* linkage=_ZN11ISceneLayer16SetObjectMatchIDE15CUtlStringToken */
	void SetOverrideMaterial(class ISceneLayer *, HMaterial); /* linkage=_ZN11ISceneLayer19SetOverrideMaterialE11CWeakHandleI29InfoForResourceTypeIMaterial2E */
	virtual void SetTonemapOverrideScaleValue(class ISceneLayer *, float); /* linkage=_ZN11ISceneLayer28SetTonemapOverrideScaleValueEf */
	virtual void SetAuxiliaryCameraMask(class ISceneLayer *, uint); /* linkage=_ZN11ISceneLayer22SetAuxiliaryCameraMaskEj */
	virtual void SetCustomSortKeyFunction(class ISceneLayer *, LayerComputeSortKeyFunc_t *); /* linkage=_ZN11ISceneLayer24SetCustomSortKeyFunctionEPFvP20CMeshDrawPrimitive_tiE */
	void DisableClearScreenIfNoObjectsRendered(class ISceneLayer *); /* linkage=_ZN11ISceneLayer37DisableClearScreenIfNoObjectsRenderedEv */
	void DisableUnlessOtherLayerRenderedObjects(class ISceneLayer *, class ISceneLayer *); /* linkage=_ZN11ISceneLayer38DisableUnlessOtherLayerRenderedObjectsEPS_ */
	class CUtlVectorFixedGrowable<ISceneLayer*, 1> & GetLayersThatMustRenderObjectsForThisLayerToBeDrawn(class ISceneLayer *); /* linkage=_ZN11ISceneLayer51GetLayersThatMustRenderObjectsForThisLayerToBeDrawnEv */
	void SetBoundingVolumeSizeCullThresholdInPercent(class ISceneLayer *, float); /* linkage=_ZN11ISceneLayer43SetBoundingVolumeSizeCullThresholdInPercentEf */
	float GetBoundingVolumeSizeCullThreshold(const class ISceneLayer  *); /* linkage=_ZNK11ISceneLayer34GetBoundingVolumeSizeCullThresholdEv */
	virtual void ~ISceneLayer(class ISceneLayer *); /* linkage=_ZN11ISceneLayerD4Ev */
	virtual void SetDynamicContantBufferAttribute(class ISceneLayer *, class CUtlStringToken, void *, size_t); /* linkage=_ZN11ISceneLayer32SetDynamicContantBufferAttributeE15CUtlStringTokenPvm */
	virtual void AddSemaphoreDependency(class ISceneLayer *, class ISceneLayer *); /* linkage=_ZN11ISceneLayer22AddSemaphoreDependencyEPS_ */
	void SetSemaphore(class ISceneLayer *, RenderSemaphoreHandle_t); /* linkage=_ZN11ISceneLayer12SetSemaphoreEP25RenderSemaphoreHandle_t__ */
	RenderSemaphoreHandle_t GetSemaphore(const class ISceneLayer  *); /* linkage=_ZNK11ISceneLayer12GetSemaphoreEv */
	virtual void SetCullPlane(class ISceneLayer *, const class VPlane  &); /* linkage=_ZN11ISceneLayer12SetCullPlaneERK6VPlane */
	virtual void AddWorldFilter(class ISceneLayer *, class ISceneWorld *); /* linkage=_ZN11ISceneLayer14AddWorldFilterEP11ISceneWorld */
	virtual void SetPerfMarker(class ISceneLayer *, const char  *); /* linkage=_ZN11ISceneLayer13SetPerfMarkerEPKc */
	virtual void ClearPerfMarker(class ISceneLayer *); /* linkage=_ZN11ISceneLayer15ClearPerfMarkerEv */
	void AddInputTexture(class ISceneLayer *, HRenderTexture, enum RenderImageLayout_t); /* linkage=_ZN11ISceneLayer15AddInputTextureE11CWeakHandleI31InfoForResourceTypeCTextureBaseE19RenderImageLayout_t */
	void AddInputSceneViewRenderTarget(class ISceneLayer *, HSceneViewRenderTarget, enum RenderImageLayout_t); /* linkage=_ZN11ISceneLayer29AddInputSceneViewRenderTargetEP24HSceneViewRenderTarget__19RenderImageLayout_t */
	virtual bool GetRenderTargetDescDimensions(class ISceneLayer *, int *, int *); /* linkage=_ZN11ISceneLayer29GetRenderTargetDescDimensionsEPiS0_ */
	virtual void SetWireframeOverride(class ISceneLayer *, bool, float); /* linkage=_ZN11ISceneLayer20SetWireframeOverrideEbf */
	void ISceneLayer(class ISceneLayer *); /* linkage=_ZN11ISceneLayerC4Ev */
	void ISceneLayer(class ISceneLayer *, const class ISceneLayer  &); /* linkage=_ZN11ISceneLayerC4ERKS_ */
} __attribute__((__aligned__(16)));

// <02D5D0CA> ../public/scenesystem/iscenelayer.h:211
// member functions: 181
// member variables: 41
// vtable entries: 24
// class size: 2,336
class ISceneLayer {
	/* ../public/scenesystem/iscenelayer.h:465 */
	struct RenderTargetAttribute_t {
		HSceneViewRenderTarget m_hRenderTarget; /* 0 8 */
		bool m_bMSAA; /* 8 1 */
		uint32 m_nFlags; /* 12 4 */
		/* ../public/scenesystem/iscenelayer.h:471 */
		bool operator==(RenderTargetAttribute_t* , const RenderTargetAttribute_t& );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/scenesystem/iscenelayer.h:510 */
	struct InputTexture_t {
		HRenderTexture m_hTexture; /* 0 8 */
		RenderImageLayout_t m_nImageLayout; /* 8 4 */
		/* ../public/scenesystem/iscenelayer.h:515 */
		void InputTexture_t(InputTexture_t* );
		/* ../public/scenesystem/iscenelayer.h:520 */
		void InputTexture_t(InputTexture_t* , HRenderTexture, RenderImageLayout_t);
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/scenesystem/iscenelayer.h:529 */
	struct InputSceneViewRenderTarget_t {
		HSceneViewRenderTarget m_hTarget; /* 0 8 */
		RenderImageLayout_t m_nImageLayout; /* 8 4 */
		HRenderTexture m_hComputedTexture; /* 16 8 */
		/* ../public/scenesystem/iscenelayer.h:537 */
		void InputSceneViewRenderTarget_t(InputSceneViewRenderTarget_t* );
		/* ../public/scenesystem/iscenelayer.h:542 */
		void InputSceneViewRenderTarget_t(InputSceneViewRenderTarget_t* , HSceneViewRenderTarget, RenderImageLayout_t);
	};
	/* tag__fprintf: const_type tag not supported! */;
	void ISceneLayer(ISceneLayer* , const ISceneLayer& );
	int ()(void) * * _vptr.ISceneLayer; /* 0 8 */
	/* ../public/scenesystem/iscenelayer.h:214 */
	const CUtlStringToken& GetShaderMode(const ISceneLayer* );
	/* ../public/scenesystem/iscenelayer.h:573 */
	void AddStandardConstantBuffer(ISceneLayer* , CUtlStringToken, ConstantBufferHandle_t);
	/* ../public/scenesystem/iscenelayer.h:218 */
	virtual void SetAssociatedLayer(ISceneLayer* , ISceneLayer* );
	/* ../public/scenesystem/iscenelayer.h:220 */
	virtual CDisplayList* QueueDisplayList(ISceneLayer* , IRenderContext* );
	/* ../public/scenesystem/iscenelayer.h:222 */
	void SetScissorRect(ISceneLayer* , const Rect_t& );
	/* ../public/scenesystem/iscenelayer.h:226 */
	const Rect_t& GetScissorRect(const ISceneLayer* );
	/* ../public/scenesystem/iscenelayer.h:231 */
	void SetClearColor(ISceneLayer* , const Vector4D& , int);
	/* ../public/scenesystem/iscenelayer.h:238 */
	virtual int GetUniqueSceneLayerIndex(const ISceneLayer* );
	/* ../public/scenesystem/iscenelayer.h:245 */
	void SetAttr(ISceneLayer* , CUtlStringToken, HRenderTexture, int32);
	/* ../public/scenesystem/iscenelayer.h:246 */
	void SetAttr(ISceneLayer* , CUtlStringToken, float);
	/* ../public/scenesystem/iscenelayer.h:247 */
	void SetAttr(ISceneLayer* , CUtlStringToken, int);
	/* ../public/scenesystem/iscenelayer.h:248 */
	void SetAttr(ISceneLayer* , CUtlStringToken, const Vector& );
	/* ../public/scenesystem/iscenelayer.h:249 */
	void SetAttr(ISceneLayer* , CUtlStringToken, const Vector4D& );
	/* ../public/scenesystem/iscenelayer.h:250 */
	void SetAttr(ISceneLayer* , CUtlStringToken, const VMatrix& );
	/* ../public/scenesystem/iscenelayer.h:251 */
	void SetAttr(ISceneLayer* , CUtlStringToken, void* );
	/* ../public/scenesystem/iscenelayer.h:252 */
	void SetAttr(ISceneLayer* , CUtlStringToken, ConstantBufferHandle_t);
	/* ../public/scenesystem/iscenelayer.h:254 */
	void SetComboAttr(ISceneLayer* , CUtlStringToken, uint8);
	/* ../public/scenesystem/iscenelayer.h:256 */
	int GetIntValue(const ISceneLayer* , CUtlStringToken, int);
	/* ../public/scenesystem/iscenelayer.h:257 */
	uint8 GetComboValue(const ISceneLayer* , CUtlStringToken, uint8);
	/* ../public/scenesystem/iscenelayer.h:258 */
	float GetFloatValue(const ISceneLayer* , CUtlStringToken, float);
	/* ../public/scenesystem/iscenelayer.h:259 */
	Vector GetVectorValue(const ISceneLayer* , CUtlStringToken, Vector);
	/* ../public/scenesystem/iscenelayer.h:260 */
	void* GetPtrValue(const ISceneLayer* , CUtlStringToken, void* );
	/* ../public/scenesystem/iscenelayer.h:261 */
	HRenderTexture GetTextureValue(const ISceneLayer* , CUtlStringToken, HRenderTexture);
	/* ../public/scenesystem/iscenelayer.h:579 */
	void SetAttr(ISceneLayer* , CUtlStringToken, HSceneViewRenderTarget, SceneLayerMSAAMode_t, uint32);
	/* ../public/scenesystem/iscenelayer.h:591 */
	HSceneViewRenderTarget GetRenderTargetValue(const ISceneLayer* , CUtlStringToken, HSceneViewRenderTarget);
	/* ../public/scenesystem/iscenelayer.h:272 */
	void SetOutput(ISceneLayer* , const SceneLayerOutputs_t& );
	/* ../public/scenesystem/iscenelayer.h:275 */
	virtual const RenderTargetDesc_t& GetRenderTargetDesc(const ISceneLayer* );
	/* ../public/scenesystem/iscenelayer.h:278 */
	IProceduralLayerRenderer* GetProceduralLayerRenderer(const ISceneLayer* );
	/* ../public/scenesystem/iscenelayer.h:281 */
	void SetPreSubmitProceduralLayerRenderer(ISceneLayer* , IProceduralLayerRenderer* , bool);
	/* ../public/scenesystem/iscenelayer.h:289 */
	virtual void SetRenderTargetDesc(ISceneLayer* , const RenderTargetDesc_t& );
	/* ../public/scenesystem/iscenelayer.h:603 */
	void AddObjectFlagsRequiredMask(ISceneLayer* , ESceneObjectFlags);
	/* ../public/scenesystem/iscenelayer.h:608 */
	void AddObjectFlagsExcludedMask(ISceneLayer* , ESceneObjectFlags);
	/* ../public/scenesystem/iscenelayer.h:613 */
	void RemoveObjectFlagsRequiredMask(ISceneLayer* , ESceneObjectFlags);
	/* ../public/scenesystem/iscenelayer.h:618 */
	void RemoveObjectFlagsExcludedMask(ISceneLayer* , ESceneObjectFlags);
	/* ../public/scenesystem/iscenelayer.h:623 */
	ESceneObjectFlags GetObjectFlagsRequiredMask(const ISceneLayer* );
	/* ../public/scenesystem/iscenelayer.h:628 */
	ESceneObjectFlags GetObjectFlagsExcludedMask(const ISceneLayer* );
	/* ../public/scenesystem/iscenelayer.h:633 */
	const char* GetDebugName(const ISceneLayer* );
	/* ../public/scenesystem/iscenelayer.h:303 */
	CUtlStringToken GetLabel(const ISceneLayer* );
	/* ../public/scenesystem/iscenelayer.h:304 */
	void SetLabel(ISceneLayer* , CUtlStringToken);
	/* ../public/scenesystem/iscenelayer.h:307 */
	void SetOverrideRasterizerState(ISceneLayer* , RsRasterizerStateHandle_t);
	/* ../public/scenesystem/iscenelayer.h:308 */
	RsRasterizerStateHandle_t GetOverrideRasterizerState(const ISceneLayer* );
	/* ../public/scenesystem/iscenelayer.h:311 */
	virtual void SetLayerNoCull(ISceneLayer* , bool);
	/* ../public/scenesystem/iscenelayer.h:314 */
	void SetOverrideDepthStencilState(ISceneLayer* , RsDepthStencilStateHandle_t, uint32);
	/* ../public/scenesystem/iscenelayer.h:315 */
	RsDepthStencilStateHandle_t GetOverrideDepthStencilState(const ISceneLayer* );
	/* ../public/scenesystem/iscenelayer.h:316 */
	uint32 GetOverrideStencilRef(const ISceneLayer* );
	/* ../public/scenesystem/iscenelayer.h:317 */
	HMaterial GetOverrideMaterial(const ISceneLayer* );
	/* ../public/scenesystem/iscenelayer.h:320 */
	const RsStencilStateOverride_t* GetStencilStateOverride(const ISceneLayer* );
	/* ../public/scenesystem/iscenelayer.h:321 */
	void SetStencilStateOverride(ISceneLayer* , const RsStencilStateOverride_t& );
	/* ../public/scenesystem/iscenelayer.h:324 */
	const RsDepthBiasStateOverride_t* GetDepthBiasStateOverride(const ISceneLayer* );
	/* ../public/scenesystem/iscenelayer.h:325 */
	void SetDepthBiasStateOverride(ISceneLayer* , const RsDepthBiasStateOverride_t& );
	/* ../public/scenesystem/iscenelayer.h:328 */
	const RsFillModeOverride_t* GetFillModeStateOverride(const ISceneLayer* );
	/* ../public/scenesystem/iscenelayer.h:329 */
	void SetFillModeStateOverride(ISceneLayer* , const RsFillModeOverride_t& );
	/* ../public/scenesystem/iscenelayer.h:336 */
	void SetStencilBitDependency(ISceneLayer* , CUtlStringToken);
	/* ../public/scenesystem/iscenelayer.h:337 */
	CUtlStringToken GetStencilDependency(const ISceneLayer* );
	/* ../public/scenesystem/iscenelayer.h:341 */
	virtual void DisableReflectionsAndRefractionsForObjectsInThisLayer(ISceneLayer* , bool);
	/* ../public/scenesystem/iscenelayer.h:347 */
	virtual void OverrideFrustum(ISceneLayer* , const CFrustum& );
	/* ../public/scenesystem/iscenelayer.h:350 */
	virtual void Override2Frustums(ISceneLayer* , const CFrustum& , const CFrustum& );
	/* ../public/scenesystem/iscenelayer.h:352 */
	ISceneView* GetParentView(const ISceneLayer* );
	/* ../public/scenesystem/iscenelayer.h:359 */
	virtual void SetFadeTargetLayer(ISceneLayer* , ISceneLayer* );
	/* ../public/scenesystem/iscenelayer.h:360 */
	virtual ISceneLayer* GetFadeTargetLayer(const ISceneLayer* );
	/* ../public/scenesystem/iscenelayer.h:363 */
	virtual int FindOrAllocateStencilBit(ISceneLayer* , CUtlStringToken);
	/* ../public/scenesystem/iscenelayer.h:369 */
	virtual bool ParseStringForStencilMaskAndRefValueForRead(ISceneLayer* , const char* , int* , int* );
	/* ../public/scenesystem/iscenelayer.h:372 */
	bool NeedsPerLayerViewConstants(const ISceneLayer* );
	/* ../public/scenesystem/iscenelayer.h:375 */
	void SetObjectMatchID(ISceneLayer* , CUtlStringToken);
	/* ../public/scenesystem/iscenelayer.h:377 */
	void SetOverrideMaterial(ISceneLayer* , HMaterial);
	/* ../public/scenesystem/iscenelayer.h:379 */
	virtual void SetTonemapOverrideScaleValue(ISceneLayer* , float);
	/* ../public/scenesystem/iscenelayer.h:388 */
	virtual void SetAuxiliaryCameraMask(ISceneLayer* , uint);
	/* ../public/scenesystem/iscenelayer.h:391 */
	virtual void SetCustomSortKeyFunction(ISceneLayer* , LayerComputeSortKeyFunc_t* );
	/* ../public/scenesystem/iscenelayer.h:394 */
	void DisableClearScreenIfNoObjectsRendered(ISceneLayer* );
	/* ../public/scenesystem/iscenelayer.h:397 */
	void DisableUnlessOtherLayerRenderedObjects(ISceneLayer* , ISceneLayer* );
	/* ../public/scenesystem/iscenelayer.h:398 */
	CUtlVectorFixedGrowable<ISceneLayer*, 1>& GetLayersThatMustRenderObjectsForThisLayerToBeDrawn(ISceneLayer* );
	/* ../public/scenesystem/iscenelayer.h:399 */
	void SetBoundingVolumeSizeCullThresholdInPercent(ISceneLayer* , float);
	/* ../public/scenesystem/iscenelayer.h:400 */
	float GetBoundingVolumeSizeCullThreshold(const ISceneLayer* );
	/* ../public/scenesystem/iscenelayer.h:401 */
	virtual void ~ISceneLayer(ISceneLayer* );
	/* ../public/scenesystem/iscenelayer.h:404 */
	virtual void SetDynamicContantBufferAttribute(ISceneLayer* , CUtlStringToken, void* , size_t);
	/* ../public/scenesystem/iscenelayer.h:408 */
	virtual void AddSemaphoreDependency(ISceneLayer* , ISceneLayer* );
	/* ../public/scenesystem/iscenelayer.h:411 */
	void SetSemaphore(ISceneLayer* , RenderSemaphoreHandle_t);
	/* ../public/scenesystem/iscenelayer.h:416 */
	RenderSemaphoreHandle_t GetSemaphore(const ISceneLayer* );
	/* ../public/scenesystem/iscenelayer.h:418 */
	virtual void SetCullPlane(ISceneLayer* , const VPlane& );
	/* ../public/scenesystem/iscenelayer.h:420 */
	virtual void AddWorldFilter(ISceneLayer* , ISceneWorld* );
	/* ../public/scenesystem/iscenelayer.h:424 */
	virtual void SetPerfMarker(ISceneLayer* , const char* );
	/* ../public/scenesystem/iscenelayer.h:428 */
	virtual void ClearPerfMarker(ISceneLayer* );
	/* ../public/scenesystem/iscenelayer.h:433 */
	void AddInputTexture(ISceneLayer* , HRenderTexture, RenderImageLayout_t);
	/* ../public/scenesystem/iscenelayer.h:437 */
	void AddInputSceneViewRenderTarget(ISceneLayer* , HSceneViewRenderTarget, RenderImageLayout_t);
	/* ../public/scenesystem/iscenelayer.h:442 */
	virtual bool GetRenderTargetDescDimensions(ISceneLayer* , int* , int* );
	/* ../public/scenesystem/iscenelayer.h:444 */
	virtual void SetWireframeOverride(ISceneLayer* , bool, float);
	RenderViewport_t m_viewport; /* 8 28 */
	ELayerType m_eLayerType; /* 36 4 */
	CUtlStringToken m_shaderMode; /* 40 4 */
	uint64 m_nLayerFlags; /* 48 8 */
	int m_nClearFlags; /* 56 4 */
	SceneLayerOutputs_t m_RenderTargetOutputs; /* 64 128 */
	CRenderAttributes m_Attrs; /* 192 1184 */
	bool m_bRenderOnMainThread; /* 1376 1 */
protected:
	ESceneObjectFlags m_nObjectFlagsRequiredMask; /* 1384 8 */
	ESceneObjectFlags m_nObjectFlagsExcludedMask; /* 1392 8 */
	char m_szDebugName[64]; /* 1400 64 */
	CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t, 16> m_RenderTargetAttribute; /* 1472 336 */
	int16 m_nNumClearColors; /* 1808 2 */
	Vector4D m_vecClearColor[8]; /* 1812 128 */
	Rect_t m_scissorRect; /* 1940 16 */
	IProceduralLayerRenderer * m_pRenderProcedure; /* 1960 8 */
	bool m_bDeleteRenderProcedureWhenFinished; /* 1968 1 */
	RsRasterizerStateHandle_t m_hOverrideRasterizerState; /* 1976 8 */
	RsDepthStencilStateHandle_t m_hOverrideDepthStencilState; /* 1984 8 */
	RsStencilStateOverride_t m_StencilStateOverride; /* 1992 8 */
	RsDepthBiasStateOverride_t m_DepthBiasStateOverride; /* 2000 12 */
	RsFillModeOverride_t m_FillModeOverride; /* 2012 1 */
	bool m_bStencilStateOverridden; /* 2013 1 */
	bool m_bDepthBiasStateOverridden; /* 2014 1 */
	bool m_bFillModeOverridden; /* 2015 1 */
	uint32 m_nOverrideStencilRef; /* 2016 4 */
	float m_flSizeCullThreshold; /* 2020 4 */
	CUtlStringToken m_nObjectMatchID; /* 2024 4 */
	HMaterialStrong m_hOverrideMaterial; /* 2032 8 */
	CUtlStringToken m_nLabel; /* 2040 4 */
	CUtlStringToken m_nStencilBitDependency; /* 2044 4 */
	ISceneView * m_pParentView; /* 2048 8 */
	CUtlVectorFixedGrowable<ISceneLayer*, 1> m_layersThatMustRenderObjectsForThisLayerToBeDrawn __attribute__((__aligned__(8))); /* 2056 40 */
	CUtlVectorFixed<ConstantBufferHandle_t__*, 4> m_standardConstantBuffers __attribute__((__aligned__(8))); /* 2096 48 */
	CUtlVectorFixed<CUtlStringToken, 4> m_standardConstantBufferNames __attribute__((__aligned__(8))); /* 2144 32 */
	CUtlVectorFixedGrowable<ISceneLayer::InputTexture_t, 2> m_inputTextures __attribute__((__aligned__(8))); /* 2176 64 */
	CUtlVectorFixedGrowable<ISceneLayer::InputSceneViewRenderTarget_t, 2> m_inputSceneViewRenderTargets __attribute__((__aligned__(8))); /* 2240 80 */
	RenderSemaphoreHandle_t m_hSemaphore; /* 2320 8 */
	bool m_bDisableClearScreenIfNoObjectsRendered; /* 2328 1 */
	/* ../public/scenesystem/iscenelayer.h:561 */
	void ISceneLayer(ISceneLayer* );
	ELayerEnum LayerEnum; /* 2332 4 */
	const class CUtlStringToken  & GetShaderMode(const class ISceneLayer  *); /* linkage=_ZNK11ISceneLayer13GetShaderModeEv */
	void AddStandardConstantBuffer(class ISceneLayer *, class CUtlStringToken, ConstantBufferHandle_t); /* linkage=_ZN11ISceneLayer25AddStandardConstantBufferE15CUtlStringTokenP24ConstantBufferHandle_t__ */
	virtual void SetAssociatedLayer(class ISceneLayer *, class ISceneLayer *); /* linkage=_ZN11ISceneLayer18SetAssociatedLayerEPS_ */
	virtual class CDisplayList * QueueDisplayList(class ISceneLayer *, class IRenderContext *); /* linkage=_ZN11ISceneLayer16QueueDisplayListEP14IRenderContext */
	void SetScissorRect(class ISceneLayer *, const class Rect_t  &); /* linkage=_ZN11ISceneLayer14SetScissorRectERK6Rect_t */
	const class Rect_t  & GetScissorRect(const class ISceneLayer  *); /* linkage=_ZNK11ISceneLayer14GetScissorRectEv */
	void SetClearColor(class ISceneLayer *, const class Vector4D  &, int); /* linkage=_ZN11ISceneLayer13SetClearColorERK8Vector4Di */
	virtual int GetUniqueSceneLayerIndex(const class ISceneLayer  *); /* linkage=_ZNK11ISceneLayer24GetUniqueSceneLayerIndexEv */
	void SetAttr(class ISceneLayer *, class CUtlStringToken, HRenderTexture, int32); /* linkage=_ZN11ISceneLayer7SetAttrE15CUtlStringToken11CWeakHandleI31InfoForResourceTypeCTextureBaseEi */
	void SetAttr(class ISceneLayer *, class CUtlStringToken, float); /* linkage=_ZN11ISceneLayer7SetAttrE15CUtlStringTokenf */
	void SetAttr(class ISceneLayer *, class CUtlStringToken, int); /* linkage=_ZN11ISceneLayer7SetAttrE15CUtlStringTokeni */
	void SetAttr(class ISceneLayer *, class CUtlStringToken, const class Vector  &); /* linkage=_ZN11ISceneLayer7SetAttrE15CUtlStringTokenRK6Vector */
	void SetAttr(class ISceneLayer *, class CUtlStringToken, const class Vector4D  &); /* linkage=_ZN11ISceneLayer7SetAttrE15CUtlStringTokenRK8Vector4D */
	void SetAttr(class ISceneLayer *, class CUtlStringToken, const class VMatrix  &); /* linkage=_ZN11ISceneLayer7SetAttrE15CUtlStringTokenRK7VMatrix */
	void SetAttr(class ISceneLayer *, class CUtlStringToken, void *); /* linkage=_ZN11ISceneLayer7SetAttrE15CUtlStringTokenPv */
	void SetAttr(class ISceneLayer *, class CUtlStringToken, ConstantBufferHandle_t); /* linkage=_ZN11ISceneLayer7SetAttrE15CUtlStringTokenP24ConstantBufferHandle_t__ */
	void SetComboAttr(class ISceneLayer *, class CUtlStringToken, uint8); /* linkage=_ZN11ISceneLayer12SetComboAttrE15CUtlStringTokenh */
	int GetIntValue(const class ISceneLayer  *, class CUtlStringToken, int); /* linkage=_ZNK11ISceneLayer11GetIntValueE15CUtlStringTokeni */
	uint8 GetComboValue(const class ISceneLayer  *, class CUtlStringToken, uint8); /* linkage=_ZNK11ISceneLayer13GetComboValueE15CUtlStringTokenh */
	float GetFloatValue(const class ISceneLayer  *, class CUtlStringToken, float); /* linkage=_ZNK11ISceneLayer13GetFloatValueE15CUtlStringTokenf */
	class Vector GetVectorValue(const class ISceneLayer  *, class CUtlStringToken, class Vector); /* linkage=_ZNK11ISceneLayer14GetVectorValueE15CUtlStringToken6Vector */
	void * GetPtrValue(const class ISceneLayer  *, class CUtlStringToken, void *); /* linkage=_ZNK11ISceneLayer11GetPtrValueE15CUtlStringTokenPv */
	HRenderTexture GetTextureValue(const class ISceneLayer  *, class CUtlStringToken, HRenderTexture); /* linkage=_ZNK11ISceneLayer15GetTextureValueE15CUtlStringToken11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	void SetAttr(class ISceneLayer *, class CUtlStringToken, HSceneViewRenderTarget, enum SceneLayerMSAAMode_t, uint32); /* linkage=_ZN11ISceneLayer7SetAttrE15CUtlStringTokenP24HSceneViewRenderTarget__20SceneLayerMSAAMode_tj */
	HSceneViewRenderTarget GetRenderTargetValue(const class ISceneLayer  *, class CUtlStringToken, HSceneViewRenderTarget); /* linkage=_ZNK11ISceneLayer20GetRenderTargetValueE15CUtlStringTokenP24HSceneViewRenderTarget__ */
	void SetOutput(class ISceneLayer *, const class SceneLayerOutputs_t  &); /* linkage=_ZN11ISceneLayer9SetOutputERK19SceneLayerOutputs_t */
	virtual const class RenderTargetDesc_t  & GetRenderTargetDesc(const class ISceneLayer  *); /* linkage=_ZNK11ISceneLayer19GetRenderTargetDescEv */
	class IProceduralLayerRenderer * GetProceduralLayerRenderer(const class ISceneLayer  *); /* linkage=_ZNK11ISceneLayer26GetProceduralLayerRendererEv */
	void SetPreSubmitProceduralLayerRenderer(class ISceneLayer *, class IProceduralLayerRenderer *, bool); /* linkage=_ZN11ISceneLayer35SetPreSubmitProceduralLayerRendererEP24IProceduralLayerRendererb */
	virtual void SetRenderTargetDesc(class ISceneLayer *, const class RenderTargetDesc_t  &); /* linkage=_ZN11ISceneLayer19SetRenderTargetDescERK18RenderTargetDesc_t */
	void AddObjectFlagsRequiredMask(class ISceneLayer *, enum ESceneObjectFlags); /* linkage=_ZN11ISceneLayer26AddObjectFlagsRequiredMaskE17ESceneObjectFlags */
	void AddObjectFlagsExcludedMask(class ISceneLayer *, enum ESceneObjectFlags); /* linkage=_ZN11ISceneLayer26AddObjectFlagsExcludedMaskE17ESceneObjectFlags */
	void RemoveObjectFlagsRequiredMask(class ISceneLayer *, enum ESceneObjectFlags); /* linkage=_ZN11ISceneLayer29RemoveObjectFlagsRequiredMaskE17ESceneObjectFlags */
	void RemoveObjectFlagsExcludedMask(class ISceneLayer *, enum ESceneObjectFlags); /* linkage=_ZN11ISceneLayer29RemoveObjectFlagsExcludedMaskE17ESceneObjectFlags */
	enum ESceneObjectFlags GetObjectFlagsRequiredMask(const class ISceneLayer  *); /* linkage=_ZNK11ISceneLayer26GetObjectFlagsRequiredMaskEv */
	enum ESceneObjectFlags GetObjectFlagsExcludedMask(const class ISceneLayer  *); /* linkage=_ZNK11ISceneLayer26GetObjectFlagsExcludedMaskEv */
	const char  * GetDebugName(const class ISceneLayer  *); /* linkage=_ZNK11ISceneLayer12GetDebugNameEv */
	class CUtlStringToken GetLabel(const class ISceneLayer  *); /* linkage=_ZNK11ISceneLayer8GetLabelEv */
	void SetLabel(class ISceneLayer *, class CUtlStringToken); /* linkage=_ZN11ISceneLayer8SetLabelE15CUtlStringToken */
	void SetOverrideRasterizerState(class ISceneLayer *, RsRasterizerStateHandle_t); /* linkage=_ZN11ISceneLayer26SetOverrideRasterizerStateEP27RsRasterizerStateHandle_t__ */
	RsRasterizerStateHandle_t GetOverrideRasterizerState(const class ISceneLayer  *); /* linkage=_ZNK11ISceneLayer26GetOverrideRasterizerStateEv */
	virtual void SetLayerNoCull(class ISceneLayer *, bool); /* linkage=_ZN11ISceneLayer14SetLayerNoCullEb */
	void SetOverrideDepthStencilState(class ISceneLayer *, RsDepthStencilStateHandle_t, uint32); /* linkage=_ZN11ISceneLayer28SetOverrideDepthStencilStateEP29RsDepthStencilStateHandle_t__j */
	RsDepthStencilStateHandle_t GetOverrideDepthStencilState(const class ISceneLayer  *); /* linkage=_ZNK11ISceneLayer28GetOverrideDepthStencilStateEv */
	uint32 GetOverrideStencilRef(const class ISceneLayer  *); /* linkage=_ZNK11ISceneLayer21GetOverrideStencilRefEv */
	HMaterial GetOverrideMaterial(const class ISceneLayer  *); /* linkage=_ZNK11ISceneLayer19GetOverrideMaterialEv */
	const class RsStencilStateOverride_t  * GetStencilStateOverride(const class ISceneLayer  *); /* linkage=_ZNK11ISceneLayer23GetStencilStateOverrideEv */
	void SetStencilStateOverride(class ISceneLayer *, const class RsStencilStateOverride_t  &); /* linkage=_ZN11ISceneLayer23SetStencilStateOverrideERK24RsStencilStateOverride_t */
	const class RsDepthBiasStateOverride_t  * GetDepthBiasStateOverride(const class ISceneLayer  *); /* linkage=_ZNK11ISceneLayer25GetDepthBiasStateOverrideEv */
	void SetDepthBiasStateOverride(class ISceneLayer *, const class RsDepthBiasStateOverride_t  &); /* linkage=_ZN11ISceneLayer25SetDepthBiasStateOverrideERK26RsDepthBiasStateOverride_t */
	const class RsFillModeOverride_t  * GetFillModeStateOverride(const class ISceneLayer  *); /* linkage=_ZNK11ISceneLayer24GetFillModeStateOverrideEv */
	void SetFillModeStateOverride(class ISceneLayer *, const class RsFillModeOverride_t  &); /* linkage=_ZN11ISceneLayer24SetFillModeStateOverrideERK20RsFillModeOverride_t */
	void SetStencilBitDependency(class ISceneLayer *, class CUtlStringToken); /* linkage=_ZN11ISceneLayer23SetStencilBitDependencyE15CUtlStringToken */
	class CUtlStringToken GetStencilDependency(const class ISceneLayer  *); /* linkage=_ZNK11ISceneLayer20GetStencilDependencyEv */
	virtual void DisableReflectionsAndRefractionsForObjectsInThisLayer(class ISceneLayer *, bool); /* linkage=_ZN11ISceneLayer53DisableReflectionsAndRefractionsForObjectsInThisLayerEb */
	virtual void OverrideFrustum(class ISceneLayer *, const class CFrustum  &); /* linkage=_ZN11ISceneLayer15OverrideFrustumERK8CFrustum */
	virtual void Override2Frustums(class ISceneLayer *, const class CFrustum  &, const class CFrustum  &); /* linkage=_ZN11ISceneLayer17Override2FrustumsERK8CFrustumS2_ */
	class ISceneView * GetParentView(const class ISceneLayer  *); /* linkage=_ZNK11ISceneLayer13GetParentViewEv */
	virtual void SetFadeTargetLayer(class ISceneLayer *, class ISceneLayer *); /* linkage=_ZN11ISceneLayer18SetFadeTargetLayerEPS_ */
	virtual class ISceneLayer * GetFadeTargetLayer(const class ISceneLayer  *); /* linkage=_ZNK11ISceneLayer18GetFadeTargetLayerEv */
	virtual int FindOrAllocateStencilBit(class ISceneLayer *, class CUtlStringToken); /* linkage=_ZN11ISceneLayer24FindOrAllocateStencilBitE15CUtlStringToken */
	virtual bool ParseStringForStencilMaskAndRefValueForRead(class ISceneLayer *, const char  *, int *, int *); /* linkage=_ZN11ISceneLayer43ParseStringForStencilMaskAndRefValueForReadEPKcPiS2_ */
	bool NeedsPerLayerViewConstants(const class ISceneLayer  *); /* linkage=_ZNK11ISceneLayer26NeedsPerLayerViewConstantsEv */
	void SetObjectMatchID(class ISceneLayer *, class CUtlStringToken); /* linkage=_ZN11ISceneLayer16SetObjectMatchIDE15CUtlStringToken */
	void SetOverrideMaterial(class ISceneLayer *, HMaterial); /* linkage=_ZN11ISceneLayer19SetOverrideMaterialE11CWeakHandleI29InfoForResourceTypeIMaterial2E */
	virtual void SetTonemapOverrideScaleValue(class ISceneLayer *, float); /* linkage=_ZN11ISceneLayer28SetTonemapOverrideScaleValueEf */
	virtual void SetAuxiliaryCameraMask(class ISceneLayer *, uint); /* linkage=_ZN11ISceneLayer22SetAuxiliaryCameraMaskEj */
	virtual void SetCustomSortKeyFunction(class ISceneLayer *, LayerComputeSortKeyFunc_t *); /* linkage=_ZN11ISceneLayer24SetCustomSortKeyFunctionEPFvP20CMeshDrawPrimitive_tiE */
	void DisableClearScreenIfNoObjectsRendered(class ISceneLayer *); /* linkage=_ZN11ISceneLayer37DisableClearScreenIfNoObjectsRenderedEv */
	void DisableUnlessOtherLayerRenderedObjects(class ISceneLayer *, class ISceneLayer *); /* linkage=_ZN11ISceneLayer38DisableUnlessOtherLayerRenderedObjectsEPS_ */
	class CUtlVectorFixedGrowable<ISceneLayer*, 1> & GetLayersThatMustRenderObjectsForThisLayerToBeDrawn(class ISceneLayer *); /* linkage=_ZN11ISceneLayer51GetLayersThatMustRenderObjectsForThisLayerToBeDrawnEv */
	void SetBoundingVolumeSizeCullThresholdInPercent(class ISceneLayer *, float); /* linkage=_ZN11ISceneLayer43SetBoundingVolumeSizeCullThresholdInPercentEf */
	float GetBoundingVolumeSizeCullThreshold(const class ISceneLayer  *); /* linkage=_ZNK11ISceneLayer34GetBoundingVolumeSizeCullThresholdEv */
	virtual void ~ISceneLayer(class ISceneLayer *); /* linkage=_ZN11ISceneLayerD4Ev */
	virtual void SetDynamicContantBufferAttribute(class ISceneLayer *, class CUtlStringToken, void *, size_t); /* linkage=_ZN11ISceneLayer32SetDynamicContantBufferAttributeE15CUtlStringTokenPvm */
	virtual void AddSemaphoreDependency(class ISceneLayer *, class ISceneLayer *); /* linkage=_ZN11ISceneLayer22AddSemaphoreDependencyEPS_ */
	void SetSemaphore(class ISceneLayer *, RenderSemaphoreHandle_t); /* linkage=_ZN11ISceneLayer12SetSemaphoreEP25RenderSemaphoreHandle_t__ */
	RenderSemaphoreHandle_t GetSemaphore(const class ISceneLayer  *); /* linkage=_ZNK11ISceneLayer12GetSemaphoreEv */
	virtual void SetCullPlane(class ISceneLayer *, const class VPlane  &); /* linkage=_ZN11ISceneLayer12SetCullPlaneERK6VPlane */
	virtual void AddWorldFilter(class ISceneLayer *, class ISceneWorld *); /* linkage=_ZN11ISceneLayer14AddWorldFilterEP11ISceneWorld */
	virtual void SetPerfMarker(class ISceneLayer *, const char  *); /* linkage=_ZN11ISceneLayer13SetPerfMarkerEPKc */
	virtual void ClearPerfMarker(class ISceneLayer *); /* linkage=_ZN11ISceneLayer15ClearPerfMarkerEv */
	void AddInputTexture(class ISceneLayer *, HRenderTexture, enum RenderImageLayout_t); /* linkage=_ZN11ISceneLayer15AddInputTextureE11CWeakHandleI31InfoForResourceTypeCTextureBaseE19RenderImageLayout_t */
	void AddInputSceneViewRenderTarget(class ISceneLayer *, HSceneViewRenderTarget, enum RenderImageLayout_t); /* linkage=_ZN11ISceneLayer29AddInputSceneViewRenderTargetEP24HSceneViewRenderTarget__19RenderImageLayout_t */
	virtual bool GetRenderTargetDescDimensions(class ISceneLayer *, int *, int *); /* linkage=_ZN11ISceneLayer29GetRenderTargetDescDimensionsEPiS0_ */
	virtual void SetWireframeOverride(class ISceneLayer *, bool, float); /* linkage=_ZN11ISceneLayer20SetWireframeOverrideEbf */
	void ISceneLayer(class ISceneLayer *); /* linkage=_ZN11ISceneLayerC4Ev */
	void ISceneLayer(class ISceneLayer *, const class ISceneLayer  &); /* linkage=_ZN11ISceneLayerC4ERKS_ */
} __attribute__((__aligned__(16)));

// <058D8AD3> ../../public/scenesystem/iscenelayer.h:211
// member functions: 180
// member variables: 41
// vtable entries: 24
// class size: 2,336
class ISceneLayer {
	/* ../../public/scenesystem/iscenelayer.h:465 */
	struct RenderTargetAttribute_t {
		HSceneViewRenderTarget m_hRenderTarget; /* 0 8 */
		bool m_bMSAA; /* 8 1 */
		uint32 m_nFlags; /* 12 4 */
		/* ../../public/scenesystem/iscenelayer.h:471 */
		bool operator==(RenderTargetAttribute_t* , const RenderTargetAttribute_t& );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../../public/scenesystem/iscenelayer.h:510 */
	struct InputTexture_t {
		HRenderTexture m_hTexture; /* 0 8 */
		RenderImageLayout_t m_nImageLayout; /* 8 4 */
		/* ../../public/scenesystem/iscenelayer.h:515 */
		void InputTexture_t(InputTexture_t* );
		/* ../../public/scenesystem/iscenelayer.h:520 */
		void InputTexture_t(InputTexture_t* , HRenderTexture, RenderImageLayout_t);
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../../public/scenesystem/iscenelayer.h:529 */
	struct InputSceneViewRenderTarget_t {
		HSceneViewRenderTarget m_hTarget; /* 0 8 */
		RenderImageLayout_t m_nImageLayout; /* 8 4 */
		HRenderTexture m_hComputedTexture; /* 16 8 */
		/* ../../public/scenesystem/iscenelayer.h:537 */
		void InputSceneViewRenderTarget_t(InputSceneViewRenderTarget_t* );
		/* ../../public/scenesystem/iscenelayer.h:542 */
		void InputSceneViewRenderTarget_t(InputSceneViewRenderTarget_t* , HSceneViewRenderTarget, RenderImageLayout_t);
	};
	/* tag__fprintf: const_type tag not supported! */;
	int ()(void) * * _vptr.ISceneLayer; /* 0 8 */
	/* ../../public/scenesystem/iscenelayer.h:214 */
	const CUtlStringToken& GetShaderMode(const ISceneLayer* );
	/* ../../public/scenesystem/iscenelayer.h:573 */
	void AddStandardConstantBuffer(ISceneLayer* , CUtlStringToken, ConstantBufferHandle_t);
	/* ../../public/scenesystem/iscenelayer.h:218 */
	virtual void SetAssociatedLayer(ISceneLayer* , ISceneLayer* );
	/* ../../public/scenesystem/iscenelayer.h:220 */
	virtual CDisplayList* QueueDisplayList(ISceneLayer* , IRenderContext* );
	/* ../../public/scenesystem/iscenelayer.h:222 */
	void SetScissorRect(ISceneLayer* , const Rect_t& );
	/* ../../public/scenesystem/iscenelayer.h:226 */
	const Rect_t& GetScissorRect(const ISceneLayer* );
	/* ../../public/scenesystem/iscenelayer.h:231 */
	void SetClearColor(ISceneLayer* , const Vector4D& , int);
	/* ../../public/scenesystem/iscenelayer.h:238 */
	virtual int GetUniqueSceneLayerIndex(const ISceneLayer* );
	/* ../../public/scenesystem/iscenelayer.h:245 */
	void SetAttr(ISceneLayer* , CUtlStringToken, HRenderTexture, int32);
	/* ../../public/scenesystem/iscenelayer.h:246 */
	void SetAttr(ISceneLayer* , CUtlStringToken, float);
	/* ../../public/scenesystem/iscenelayer.h:247 */
	void SetAttr(ISceneLayer* , CUtlStringToken, int);
	/* ../../public/scenesystem/iscenelayer.h:248 */
	void SetAttr(ISceneLayer* , CUtlStringToken, const Vector& );
	/* ../../public/scenesystem/iscenelayer.h:249 */
	void SetAttr(ISceneLayer* , CUtlStringToken, const Vector4D& );
	/* ../../public/scenesystem/iscenelayer.h:250 */
	void SetAttr(ISceneLayer* , CUtlStringToken, const VMatrix& );
	/* ../../public/scenesystem/iscenelayer.h:251 */
	void SetAttr(ISceneLayer* , CUtlStringToken, void* );
	/* ../../public/scenesystem/iscenelayer.h:252 */
	void SetAttr(ISceneLayer* , CUtlStringToken, ConstantBufferHandle_t);
	/* ../../public/scenesystem/iscenelayer.h:254 */
	void SetComboAttr(ISceneLayer* , CUtlStringToken, uint8);
	/* ../../public/scenesystem/iscenelayer.h:256 */
	int GetIntValue(const ISceneLayer* , CUtlStringToken, int);
	/* ../../public/scenesystem/iscenelayer.h:257 */
	uint8 GetComboValue(const ISceneLayer* , CUtlStringToken, uint8);
	/* ../../public/scenesystem/iscenelayer.h:258 */
	float GetFloatValue(const ISceneLayer* , CUtlStringToken, float);
	/* ../../public/scenesystem/iscenelayer.h:259 */
	Vector GetVectorValue(const ISceneLayer* , CUtlStringToken, Vector);
	/* ../../public/scenesystem/iscenelayer.h:260 */
	void* GetPtrValue(const ISceneLayer* , CUtlStringToken, void* );
	/* ../../public/scenesystem/iscenelayer.h:261 */
	HRenderTexture GetTextureValue(const ISceneLayer* , CUtlStringToken, HRenderTexture);
	/* ../../public/scenesystem/iscenelayer.h:579 */
	void SetAttr(ISceneLayer* , CUtlStringToken, HSceneViewRenderTarget, SceneLayerMSAAMode_t, uint32);
	/* ../../public/scenesystem/iscenelayer.h:591 */
	HSceneViewRenderTarget GetRenderTargetValue(const ISceneLayer* , CUtlStringToken, HSceneViewRenderTarget);
	/* ../../public/scenesystem/iscenelayer.h:272 */
	void SetOutput(ISceneLayer* , const SceneLayerOutputs_t& );
	/* ../../public/scenesystem/iscenelayer.h:275 */
	virtual const RenderTargetDesc_t& GetRenderTargetDesc(const ISceneLayer* );
	/* ../../public/scenesystem/iscenelayer.h:278 */
	IProceduralLayerRenderer* GetProceduralLayerRenderer(const ISceneLayer* );
	/* ../../public/scenesystem/iscenelayer.h:281 */
	void SetPreSubmitProceduralLayerRenderer(ISceneLayer* , IProceduralLayerRenderer* , bool);
	/* ../../public/scenesystem/iscenelayer.h:289 */
	virtual void SetRenderTargetDesc(ISceneLayer* , const RenderTargetDesc_t& );
	/* ../../public/scenesystem/iscenelayer.h:603 */
	void AddObjectFlagsRequiredMask(ISceneLayer* , ESceneObjectFlags);
	/* ../../public/scenesystem/iscenelayer.h:608 */
	void AddObjectFlagsExcludedMask(ISceneLayer* , ESceneObjectFlags);
	/* ../../public/scenesystem/iscenelayer.h:613 */
	void RemoveObjectFlagsRequiredMask(ISceneLayer* , ESceneObjectFlags);
	/* ../../public/scenesystem/iscenelayer.h:618 */
	void RemoveObjectFlagsExcludedMask(ISceneLayer* , ESceneObjectFlags);
	/* ../../public/scenesystem/iscenelayer.h:623 */
	ESceneObjectFlags GetObjectFlagsRequiredMask(const ISceneLayer* );
	/* ../../public/scenesystem/iscenelayer.h:628 */
	ESceneObjectFlags GetObjectFlagsExcludedMask(const ISceneLayer* );
	/* ../../public/scenesystem/iscenelayer.h:633 */
	const char* GetDebugName(const ISceneLayer* );
	/* ../../public/scenesystem/iscenelayer.h:303 */
	CUtlStringToken GetLabel(const ISceneLayer* );
	/* ../../public/scenesystem/iscenelayer.h:304 */
	void SetLabel(ISceneLayer* , CUtlStringToken);
	/* ../../public/scenesystem/iscenelayer.h:307 */
	void SetOverrideRasterizerState(ISceneLayer* , RsRasterizerStateHandle_t);
	/* ../../public/scenesystem/iscenelayer.h:308 */
	RsRasterizerStateHandle_t GetOverrideRasterizerState(const ISceneLayer* );
	/* ../../public/scenesystem/iscenelayer.h:311 */
	virtual void SetLayerNoCull(ISceneLayer* , bool);
	/* ../../public/scenesystem/iscenelayer.h:314 */
	void SetOverrideDepthStencilState(ISceneLayer* , RsDepthStencilStateHandle_t, uint32);
	/* ../../public/scenesystem/iscenelayer.h:315 */
	RsDepthStencilStateHandle_t GetOverrideDepthStencilState(const ISceneLayer* );
	/* ../../public/scenesystem/iscenelayer.h:316 */
	uint32 GetOverrideStencilRef(const ISceneLayer* );
	/* ../../public/scenesystem/iscenelayer.h:317 */
	HMaterial GetOverrideMaterial(const ISceneLayer* );
	/* ../../public/scenesystem/iscenelayer.h:320 */
	const RsStencilStateOverride_t* GetStencilStateOverride(const ISceneLayer* );
	/* ../../public/scenesystem/iscenelayer.h:321 */
	void SetStencilStateOverride(ISceneLayer* , const RsStencilStateOverride_t& );
	/* ../../public/scenesystem/iscenelayer.h:324 */
	const RsDepthBiasStateOverride_t* GetDepthBiasStateOverride(const ISceneLayer* );
	/* ../../public/scenesystem/iscenelayer.h:325 */
	void SetDepthBiasStateOverride(ISceneLayer* , const RsDepthBiasStateOverride_t& );
	/* ../../public/scenesystem/iscenelayer.h:328 */
	const RsFillModeOverride_t* GetFillModeStateOverride(const ISceneLayer* );
	/* ../../public/scenesystem/iscenelayer.h:329 */
	void SetFillModeStateOverride(ISceneLayer* , const RsFillModeOverride_t& );
	/* ../../public/scenesystem/iscenelayer.h:336 */
	void SetStencilBitDependency(ISceneLayer* , CUtlStringToken);
	/* ../../public/scenesystem/iscenelayer.h:337 */
	CUtlStringToken GetStencilDependency(const ISceneLayer* );
	/* ../../public/scenesystem/iscenelayer.h:341 */
	virtual void DisableReflectionsAndRefractionsForObjectsInThisLayer(ISceneLayer* , bool);
	/* ../../public/scenesystem/iscenelayer.h:347 */
	virtual void OverrideFrustum(ISceneLayer* , const CFrustum& );
	/* ../../public/scenesystem/iscenelayer.h:350 */
	virtual void Override2Frustums(ISceneLayer* , const CFrustum& , const CFrustum& );
	/* ../../public/scenesystem/iscenelayer.h:352 */
	ISceneView* GetParentView(const ISceneLayer* );
	/* ../../public/scenesystem/iscenelayer.h:359 */
	virtual void SetFadeTargetLayer(ISceneLayer* , ISceneLayer* );
	/* ../../public/scenesystem/iscenelayer.h:360 */
	virtual ISceneLayer* GetFadeTargetLayer(const ISceneLayer* );
	/* ../../public/scenesystem/iscenelayer.h:363 */
	virtual int FindOrAllocateStencilBit(ISceneLayer* , CUtlStringToken);
	/* ../../public/scenesystem/iscenelayer.h:369 */
	virtual bool ParseStringForStencilMaskAndRefValueForRead(ISceneLayer* , const char* , int* , int* );
	/* ../../public/scenesystem/iscenelayer.h:372 */
	bool NeedsPerLayerViewConstants(const ISceneLayer* );
	/* ../../public/scenesystem/iscenelayer.h:375 */
	void SetObjectMatchID(ISceneLayer* , CUtlStringToken);
	/* ../../public/scenesystem/iscenelayer.h:377 */
	void SetOverrideMaterial(ISceneLayer* , HMaterial);
	/* ../../public/scenesystem/iscenelayer.h:379 */
	virtual void SetTonemapOverrideScaleValue(ISceneLayer* , float);
	/* ../../public/scenesystem/iscenelayer.h:388 */
	virtual void SetAuxiliaryCameraMask(ISceneLayer* , uint);
	/* ../../public/scenesystem/iscenelayer.h:391 */
	virtual void SetCustomSortKeyFunction(ISceneLayer* , LayerComputeSortKeyFunc_t* );
	/* ../../public/scenesystem/iscenelayer.h:394 */
	void DisableClearScreenIfNoObjectsRendered(ISceneLayer* );
	/* ../../public/scenesystem/iscenelayer.h:397 */
	void DisableUnlessOtherLayerRenderedObjects(ISceneLayer* , ISceneLayer* );
	/* ../../public/scenesystem/iscenelayer.h:398 */
	CUtlVectorFixedGrowable<ISceneLayer*, 1>& GetLayersThatMustRenderObjectsForThisLayerToBeDrawn(ISceneLayer* );
	/* ../../public/scenesystem/iscenelayer.h:399 */
	void SetBoundingVolumeSizeCullThresholdInPercent(ISceneLayer* , float);
	/* ../../public/scenesystem/iscenelayer.h:400 */
	float GetBoundingVolumeSizeCullThreshold(const ISceneLayer* );
	/* ../../public/scenesystem/iscenelayer.h:401 */
	virtual void ~ISceneLayer(ISceneLayer* );
	/* ../../public/scenesystem/iscenelayer.h:404 */
	virtual void SetDynamicContantBufferAttribute(ISceneLayer* , CUtlStringToken, void* , size_t);
	/* ../../public/scenesystem/iscenelayer.h:408 */
	virtual void AddSemaphoreDependency(ISceneLayer* , ISceneLayer* );
	/* ../../public/scenesystem/iscenelayer.h:411 */
	void SetSemaphore(ISceneLayer* , RenderSemaphoreHandle_t);
	/* ../../public/scenesystem/iscenelayer.h:416 */
	RenderSemaphoreHandle_t GetSemaphore(const ISceneLayer* );
	/* ../../public/scenesystem/iscenelayer.h:418 */
	virtual void SetCullPlane(ISceneLayer* , const VPlane& );
	/* ../../public/scenesystem/iscenelayer.h:420 */
	virtual void AddWorldFilter(ISceneLayer* , ISceneWorld* );
	/* ../../public/scenesystem/iscenelayer.h:424 */
	virtual void SetPerfMarker(ISceneLayer* , const char* );
	/* ../../public/scenesystem/iscenelayer.h:428 */
	virtual void ClearPerfMarker(ISceneLayer* );
	/* ../../public/scenesystem/iscenelayer.h:433 */
	void AddInputTexture(ISceneLayer* , HRenderTexture, RenderImageLayout_t);
	/* ../../public/scenesystem/iscenelayer.h:437 */
	void AddInputSceneViewRenderTarget(ISceneLayer* , HSceneViewRenderTarget, RenderImageLayout_t);
	/* ../../public/scenesystem/iscenelayer.h:442 */
	virtual bool GetRenderTargetDescDimensions(ISceneLayer* , int* , int* );
	/* ../../public/scenesystem/iscenelayer.h:444 */
	virtual void SetWireframeOverride(ISceneLayer* , bool, float);
	RenderViewport_t m_viewport; /* 8 28 */
	ELayerType m_eLayerType; /* 36 4 */
	CUtlStringToken m_shaderMode; /* 40 4 */
	uint64 m_nLayerFlags; /* 48 8 */
	int m_nClearFlags; /* 56 4 */
	SceneLayerOutputs_t m_RenderTargetOutputs; /* 64 128 */
	CRenderAttributes m_Attrs; /* 192 1184 */
	bool m_bRenderOnMainThread; /* 1376 1 */
protected:
	ESceneObjectFlags m_nObjectFlagsRequiredMask; /* 1384 8 */
	ESceneObjectFlags m_nObjectFlagsExcludedMask; /* 1392 8 */
	char m_szDebugName[64]; /* 1400 64 */
	CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t, 16> m_RenderTargetAttribute; /* 1472 336 */
	int16 m_nNumClearColors; /* 1808 2 */
	Vector4D m_vecClearColor[8]; /* 1812 128 */
	Rect_t m_scissorRect; /* 1940 16 */
	IProceduralLayerRenderer * m_pRenderProcedure; /* 1960 8 */
	bool m_bDeleteRenderProcedureWhenFinished; /* 1968 1 */
	RsRasterizerStateHandle_t m_hOverrideRasterizerState; /* 1976 8 */
	RsDepthStencilStateHandle_t m_hOverrideDepthStencilState; /* 1984 8 */
	RsStencilStateOverride_t m_StencilStateOverride; /* 1992 8 */
	RsDepthBiasStateOverride_t m_DepthBiasStateOverride; /* 2000 12 */
	RsFillModeOverride_t m_FillModeOverride; /* 2012 1 */
	bool m_bStencilStateOverridden; /* 2013 1 */
	bool m_bDepthBiasStateOverridden; /* 2014 1 */
	bool m_bFillModeOverridden; /* 2015 1 */
	uint32 m_nOverrideStencilRef; /* 2016 4 */
	float m_flSizeCullThreshold; /* 2020 4 */
	CUtlStringToken m_nObjectMatchID; /* 2024 4 */
	HMaterialStrong m_hOverrideMaterial; /* 2032 8 */
	CUtlStringToken m_nLabel; /* 2040 4 */
	CUtlStringToken m_nStencilBitDependency; /* 2044 4 */
	ISceneView * m_pParentView; /* 2048 8 */
	CUtlVectorFixedGrowable<ISceneLayer*, 1> m_layersThatMustRenderObjectsForThisLayerToBeDrawn __attribute__((__aligned__(8))); /* 2056 40 */
	CUtlVectorFixed<ConstantBufferHandle_t__*, 4> m_standardConstantBuffers __attribute__((__aligned__(8))); /* 2096 48 */
	CUtlVectorFixed<CUtlStringToken, 4> m_standardConstantBufferNames __attribute__((__aligned__(8))); /* 2144 32 */
	CUtlVectorFixedGrowable<ISceneLayer::InputTexture_t, 2> m_inputTextures __attribute__((__aligned__(8))); /* 2176 64 */
	CUtlVectorFixedGrowable<ISceneLayer::InputSceneViewRenderTarget_t, 2> m_inputSceneViewRenderTargets __attribute__((__aligned__(8))); /* 2240 80 */
	RenderSemaphoreHandle_t m_hSemaphore; /* 2320 8 */
	bool m_bDisableClearScreenIfNoObjectsRendered; /* 2328 1 */
	/* ../../public/scenesystem/iscenelayer.h:561 */
	void ISceneLayer(ISceneLayer* );
	ELayerEnum LayerEnum; /* 2332 4 */
	const class CUtlStringToken  & GetShaderMode(const class ISceneLayer  *); /* linkage=_ZNK11ISceneLayer13GetShaderModeEv */
	void AddStandardConstantBuffer(class ISceneLayer *, class CUtlStringToken, ConstantBufferHandle_t); /* linkage=_ZN11ISceneLayer25AddStandardConstantBufferE15CUtlStringTokenP24ConstantBufferHandle_t__ */
	virtual void SetAssociatedLayer(class ISceneLayer *, class ISceneLayer *); /* linkage=_ZN11ISceneLayer18SetAssociatedLayerEPS_ */
	virtual class CDisplayList * QueueDisplayList(class ISceneLayer *, class IRenderContext *); /* linkage=_ZN11ISceneLayer16QueueDisplayListEP14IRenderContext */
	void SetScissorRect(class ISceneLayer *, const class Rect_t  &); /* linkage=_ZN11ISceneLayer14SetScissorRectERK6Rect_t */
	const class Rect_t  & GetScissorRect(const class ISceneLayer  *); /* linkage=_ZNK11ISceneLayer14GetScissorRectEv */
	void SetClearColor(class ISceneLayer *, const class Vector4D  &, int); /* linkage=_ZN11ISceneLayer13SetClearColorERK8Vector4Di */
	virtual int GetUniqueSceneLayerIndex(const class ISceneLayer  *); /* linkage=_ZNK11ISceneLayer24GetUniqueSceneLayerIndexEv */
	void SetAttr(class ISceneLayer *, class CUtlStringToken, HRenderTexture, int32); /* linkage=_ZN11ISceneLayer7SetAttrE15CUtlStringToken11CWeakHandleI31InfoForResourceTypeCTextureBaseEi */
	void SetAttr(class ISceneLayer *, class CUtlStringToken, float); /* linkage=_ZN11ISceneLayer7SetAttrE15CUtlStringTokenf */
	void SetAttr(class ISceneLayer *, class CUtlStringToken, int); /* linkage=_ZN11ISceneLayer7SetAttrE15CUtlStringTokeni */
	void SetAttr(class ISceneLayer *, class CUtlStringToken, const class Vector  &); /* linkage=_ZN11ISceneLayer7SetAttrE15CUtlStringTokenRK6Vector */
	void SetAttr(class ISceneLayer *, class CUtlStringToken, const class Vector4D  &); /* linkage=_ZN11ISceneLayer7SetAttrE15CUtlStringTokenRK8Vector4D */
	void SetAttr(class ISceneLayer *, class CUtlStringToken, const class VMatrix  &); /* linkage=_ZN11ISceneLayer7SetAttrE15CUtlStringTokenRK7VMatrix */
	void SetAttr(class ISceneLayer *, class CUtlStringToken, void *); /* linkage=_ZN11ISceneLayer7SetAttrE15CUtlStringTokenPv */
	void SetAttr(class ISceneLayer *, class CUtlStringToken, ConstantBufferHandle_t); /* linkage=_ZN11ISceneLayer7SetAttrE15CUtlStringTokenP24ConstantBufferHandle_t__ */
	void SetComboAttr(class ISceneLayer *, class CUtlStringToken, uint8); /* linkage=_ZN11ISceneLayer12SetComboAttrE15CUtlStringTokenh */
	int GetIntValue(const class ISceneLayer  *, class CUtlStringToken, int); /* linkage=_ZNK11ISceneLayer11GetIntValueE15CUtlStringTokeni */
	uint8 GetComboValue(const class ISceneLayer  *, class CUtlStringToken, uint8); /* linkage=_ZNK11ISceneLayer13GetComboValueE15CUtlStringTokenh */
	float GetFloatValue(const class ISceneLayer  *, class CUtlStringToken, float); /* linkage=_ZNK11ISceneLayer13GetFloatValueE15CUtlStringTokenf */
	class Vector GetVectorValue(const class ISceneLayer  *, class CUtlStringToken, class Vector); /* linkage=_ZNK11ISceneLayer14GetVectorValueE15CUtlStringToken6Vector */
	void * GetPtrValue(const class ISceneLayer  *, class CUtlStringToken, void *); /* linkage=_ZNK11ISceneLayer11GetPtrValueE15CUtlStringTokenPv */
	HRenderTexture GetTextureValue(const class ISceneLayer  *, class CUtlStringToken, HRenderTexture); /* linkage=_ZNK11ISceneLayer15GetTextureValueE15CUtlStringToken11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	void SetAttr(class ISceneLayer *, class CUtlStringToken, HSceneViewRenderTarget, enum SceneLayerMSAAMode_t, uint32); /* linkage=_ZN11ISceneLayer7SetAttrE15CUtlStringTokenP24HSceneViewRenderTarget__20SceneLayerMSAAMode_tj */
	HSceneViewRenderTarget GetRenderTargetValue(const class ISceneLayer  *, class CUtlStringToken, HSceneViewRenderTarget); /* linkage=_ZNK11ISceneLayer20GetRenderTargetValueE15CUtlStringTokenP24HSceneViewRenderTarget__ */
	void SetOutput(class ISceneLayer *, const class SceneLayerOutputs_t  &); /* linkage=_ZN11ISceneLayer9SetOutputERK19SceneLayerOutputs_t */
	virtual const class RenderTargetDesc_t  & GetRenderTargetDesc(const class ISceneLayer  *); /* linkage=_ZNK11ISceneLayer19GetRenderTargetDescEv */
	class IProceduralLayerRenderer * GetProceduralLayerRenderer(const class ISceneLayer  *); /* linkage=_ZNK11ISceneLayer26GetProceduralLayerRendererEv */
	void SetPreSubmitProceduralLayerRenderer(class ISceneLayer *, class IProceduralLayerRenderer *, bool); /* linkage=_ZN11ISceneLayer35SetPreSubmitProceduralLayerRendererEP24IProceduralLayerRendererb */
	virtual void SetRenderTargetDesc(class ISceneLayer *, const class RenderTargetDesc_t  &); /* linkage=_ZN11ISceneLayer19SetRenderTargetDescERK18RenderTargetDesc_t */
	void AddObjectFlagsRequiredMask(class ISceneLayer *, enum ESceneObjectFlags); /* linkage=_ZN11ISceneLayer26AddObjectFlagsRequiredMaskE17ESceneObjectFlags */
	void AddObjectFlagsExcludedMask(class ISceneLayer *, enum ESceneObjectFlags); /* linkage=_ZN11ISceneLayer26AddObjectFlagsExcludedMaskE17ESceneObjectFlags */
	void RemoveObjectFlagsRequiredMask(class ISceneLayer *, enum ESceneObjectFlags); /* linkage=_ZN11ISceneLayer29RemoveObjectFlagsRequiredMaskE17ESceneObjectFlags */
	void RemoveObjectFlagsExcludedMask(class ISceneLayer *, enum ESceneObjectFlags); /* linkage=_ZN11ISceneLayer29RemoveObjectFlagsExcludedMaskE17ESceneObjectFlags */
	enum ESceneObjectFlags GetObjectFlagsRequiredMask(const class ISceneLayer  *); /* linkage=_ZNK11ISceneLayer26GetObjectFlagsRequiredMaskEv */
	enum ESceneObjectFlags GetObjectFlagsExcludedMask(const class ISceneLayer  *); /* linkage=_ZNK11ISceneLayer26GetObjectFlagsExcludedMaskEv */
	const char  * GetDebugName(const class ISceneLayer  *); /* linkage=_ZNK11ISceneLayer12GetDebugNameEv */
	class CUtlStringToken GetLabel(const class ISceneLayer  *); /* linkage=_ZNK11ISceneLayer8GetLabelEv */
	void SetLabel(class ISceneLayer *, class CUtlStringToken); /* linkage=_ZN11ISceneLayer8SetLabelE15CUtlStringToken */
	void SetOverrideRasterizerState(class ISceneLayer *, RsRasterizerStateHandle_t); /* linkage=_ZN11ISceneLayer26SetOverrideRasterizerStateEP27RsRasterizerStateHandle_t__ */
	RsRasterizerStateHandle_t GetOverrideRasterizerState(const class ISceneLayer  *); /* linkage=_ZNK11ISceneLayer26GetOverrideRasterizerStateEv */
	virtual void SetLayerNoCull(class ISceneLayer *, bool); /* linkage=_ZN11ISceneLayer14SetLayerNoCullEb */
	void SetOverrideDepthStencilState(class ISceneLayer *, RsDepthStencilStateHandle_t, uint32); /* linkage=_ZN11ISceneLayer28SetOverrideDepthStencilStateEP29RsDepthStencilStateHandle_t__j */
	RsDepthStencilStateHandle_t GetOverrideDepthStencilState(const class ISceneLayer  *); /* linkage=_ZNK11ISceneLayer28GetOverrideDepthStencilStateEv */
	uint32 GetOverrideStencilRef(const class ISceneLayer  *); /* linkage=_ZNK11ISceneLayer21GetOverrideStencilRefEv */
	HMaterial GetOverrideMaterial(const class ISceneLayer  *); /* linkage=_ZNK11ISceneLayer19GetOverrideMaterialEv */
	const class RsStencilStateOverride_t  * GetStencilStateOverride(const class ISceneLayer  *); /* linkage=_ZNK11ISceneLayer23GetStencilStateOverrideEv */
	void SetStencilStateOverride(class ISceneLayer *, const class RsStencilStateOverride_t  &); /* linkage=_ZN11ISceneLayer23SetStencilStateOverrideERK24RsStencilStateOverride_t */
	const class RsDepthBiasStateOverride_t  * GetDepthBiasStateOverride(const class ISceneLayer  *); /* linkage=_ZNK11ISceneLayer25GetDepthBiasStateOverrideEv */
	void SetDepthBiasStateOverride(class ISceneLayer *, const class RsDepthBiasStateOverride_t  &); /* linkage=_ZN11ISceneLayer25SetDepthBiasStateOverrideERK26RsDepthBiasStateOverride_t */
	const class RsFillModeOverride_t  * GetFillModeStateOverride(const class ISceneLayer  *); /* linkage=_ZNK11ISceneLayer24GetFillModeStateOverrideEv */
	void SetFillModeStateOverride(class ISceneLayer *, const class RsFillModeOverride_t  &); /* linkage=_ZN11ISceneLayer24SetFillModeStateOverrideERK20RsFillModeOverride_t */
	void SetStencilBitDependency(class ISceneLayer *, class CUtlStringToken); /* linkage=_ZN11ISceneLayer23SetStencilBitDependencyE15CUtlStringToken */
	class CUtlStringToken GetStencilDependency(const class ISceneLayer  *); /* linkage=_ZNK11ISceneLayer20GetStencilDependencyEv */
	virtual void DisableReflectionsAndRefractionsForObjectsInThisLayer(class ISceneLayer *, bool); /* linkage=_ZN11ISceneLayer53DisableReflectionsAndRefractionsForObjectsInThisLayerEb */
	virtual void OverrideFrustum(class ISceneLayer *, const class CFrustum  &); /* linkage=_ZN11ISceneLayer15OverrideFrustumERK8CFrustum */
	virtual void Override2Frustums(class ISceneLayer *, const class CFrustum  &, const class CFrustum  &); /* linkage=_ZN11ISceneLayer17Override2FrustumsERK8CFrustumS2_ */
	class ISceneView * GetParentView(const class ISceneLayer  *); /* linkage=_ZNK11ISceneLayer13GetParentViewEv */
	virtual void SetFadeTargetLayer(class ISceneLayer *, class ISceneLayer *); /* linkage=_ZN11ISceneLayer18SetFadeTargetLayerEPS_ */
	virtual class ISceneLayer * GetFadeTargetLayer(const class ISceneLayer  *); /* linkage=_ZNK11ISceneLayer18GetFadeTargetLayerEv */
	virtual int FindOrAllocateStencilBit(class ISceneLayer *, class CUtlStringToken); /* linkage=_ZN11ISceneLayer24FindOrAllocateStencilBitE15CUtlStringToken */
	virtual bool ParseStringForStencilMaskAndRefValueForRead(class ISceneLayer *, const char  *, int *, int *); /* linkage=_ZN11ISceneLayer43ParseStringForStencilMaskAndRefValueForReadEPKcPiS2_ */
	bool NeedsPerLayerViewConstants(const class ISceneLayer  *); /* linkage=_ZNK11ISceneLayer26NeedsPerLayerViewConstantsEv */
	void SetObjectMatchID(class ISceneLayer *, class CUtlStringToken); /* linkage=_ZN11ISceneLayer16SetObjectMatchIDE15CUtlStringToken */
	void SetOverrideMaterial(class ISceneLayer *, HMaterial); /* linkage=_ZN11ISceneLayer19SetOverrideMaterialE11CWeakHandleI29InfoForResourceTypeIMaterial2E */
	virtual void SetTonemapOverrideScaleValue(class ISceneLayer *, float); /* linkage=_ZN11ISceneLayer28SetTonemapOverrideScaleValueEf */
	virtual void SetAuxiliaryCameraMask(class ISceneLayer *, uint); /* linkage=_ZN11ISceneLayer22SetAuxiliaryCameraMaskEj */
	virtual void SetCustomSortKeyFunction(class ISceneLayer *, LayerComputeSortKeyFunc_t *); /* linkage=_ZN11ISceneLayer24SetCustomSortKeyFunctionEPFvP20CMeshDrawPrimitive_tiE */
	void DisableClearScreenIfNoObjectsRendered(class ISceneLayer *); /* linkage=_ZN11ISceneLayer37DisableClearScreenIfNoObjectsRenderedEv */
	void DisableUnlessOtherLayerRenderedObjects(class ISceneLayer *, class ISceneLayer *); /* linkage=_ZN11ISceneLayer38DisableUnlessOtherLayerRenderedObjectsEPS_ */
	class CUtlVectorFixedGrowable<ISceneLayer*, 1> & GetLayersThatMustRenderObjectsForThisLayerToBeDrawn(class ISceneLayer *); /* linkage=_ZN11ISceneLayer51GetLayersThatMustRenderObjectsForThisLayerToBeDrawnEv */
	void SetBoundingVolumeSizeCullThresholdInPercent(class ISceneLayer *, float); /* linkage=_ZN11ISceneLayer43SetBoundingVolumeSizeCullThresholdInPercentEf */
	float GetBoundingVolumeSizeCullThreshold(const class ISceneLayer  *); /* linkage=_ZNK11ISceneLayer34GetBoundingVolumeSizeCullThresholdEv */
	virtual void ~ISceneLayer(class ISceneLayer *); /* linkage=_ZN11ISceneLayerD4Ev */
	virtual void SetDynamicContantBufferAttribute(class ISceneLayer *, class CUtlStringToken, void *, size_t); /* linkage=_ZN11ISceneLayer32SetDynamicContantBufferAttributeE15CUtlStringTokenPvm */
	virtual void AddSemaphoreDependency(class ISceneLayer *, class ISceneLayer *); /* linkage=_ZN11ISceneLayer22AddSemaphoreDependencyEPS_ */
	void SetSemaphore(class ISceneLayer *, RenderSemaphoreHandle_t); /* linkage=_ZN11ISceneLayer12SetSemaphoreEP25RenderSemaphoreHandle_t__ */
	RenderSemaphoreHandle_t GetSemaphore(const class ISceneLayer  *); /* linkage=_ZNK11ISceneLayer12GetSemaphoreEv */
	virtual void SetCullPlane(class ISceneLayer *, const class VPlane  &); /* linkage=_ZN11ISceneLayer12SetCullPlaneERK6VPlane */
	virtual void AddWorldFilter(class ISceneLayer *, class ISceneWorld *); /* linkage=_ZN11ISceneLayer14AddWorldFilterEP11ISceneWorld */
	virtual void SetPerfMarker(class ISceneLayer *, const char  *); /* linkage=_ZN11ISceneLayer13SetPerfMarkerEPKc */
	virtual void ClearPerfMarker(class ISceneLayer *); /* linkage=_ZN11ISceneLayer15ClearPerfMarkerEv */
	void AddInputTexture(class ISceneLayer *, HRenderTexture, enum RenderImageLayout_t); /* linkage=_ZN11ISceneLayer15AddInputTextureE11CWeakHandleI31InfoForResourceTypeCTextureBaseE19RenderImageLayout_t */
	void AddInputSceneViewRenderTarget(class ISceneLayer *, HSceneViewRenderTarget, enum RenderImageLayout_t); /* linkage=_ZN11ISceneLayer29AddInputSceneViewRenderTargetEP24HSceneViewRenderTarget__19RenderImageLayout_t */
	virtual bool GetRenderTargetDescDimensions(class ISceneLayer *, int *, int *); /* linkage=_ZN11ISceneLayer29GetRenderTargetDescDimensionsEPiS0_ */
	virtual void SetWireframeOverride(class ISceneLayer *, bool, float); /* linkage=_ZN11ISceneLayer20SetWireframeOverrideEbf */
	void ISceneLayer(class ISceneLayer *); /* linkage=_ZN11ISceneLayerC4Ev */
	void ISceneLayer(class ISceneLayer *, const class ISceneLayer  &); /* linkage=_ZN11ISceneLayerC4ERKS_ */
} __attribute__((__aligned__(16)));

// <0402132A> ../public/scenesystem/iscenelayer.h:214
inline void ISceneLayer::GetShaderMode()
{
} /* size: 0 */

// <040B7CDA> ../public/scenesystem/iscenelayer.h:220
void ISceneLayer::QueueDisplayList(IRenderContext* pRenderContext)
{
} /* size: 7 */

// <00101D4A> ../public/scenesystem/iscenelayer.h:226
inline void ISceneLayer::GetScissorRect()
{
} /* size: 0 */

// <03AF6A92> ../public/scenesystem/iscenelayer.h:231
// variables: 2
inline void ISceneLayer::SetClearColor(const Vector4D& vecColor, int nRenderTargetIndex)
{
	const char   __FUNCTION__; // 16046
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 233
	}
} /* size: 0, variables: 1 */

// <027D9AAC> ../public/scenesystem/iscenelayer.h:231
// variables: 2
inline void ISceneLayer::SetClearColor(const Vector4D& vecColor, int nRenderTargetIndex)
{
	const char   __FUNCTION__; // 33966
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 233
	}
} /* size: 0, variables: 1 */

// <01349351> ../public/scenesystem/iscenelayer.h:231
// variables: 2
inline void ISceneLayer::SetClearColor(const Vector4D& vecColor, int nRenderTargetIndex)
{
	const char   __FUNCTION__; // 46857
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 233
	}
} /* size: 0, variables: 1 */

// <03AF6A55> ../public/scenesystem/iscenelayer.h:245
inline void ISceneLayer::SetAttr(CUtlStringToken nTokenID, HRenderTexture txtr, int32 nMipLevel)
{
} /* size: 0 */

// <03AF6A24> ../public/scenesystem/iscenelayer.h:247
inline void ISceneLayer::SetAttr(CUtlStringToken nTokenID, int nValue)
{
} /* size: 0 */

// <03754B01> ../public/scenesystem/iscenelayer.h:248
inline void ISceneLayer::SetAttr(CUtlStringToken nTokenID, const Vector& vecValue)
{
} /* size: 0 */

// <03AF69F3> ../public/scenesystem/iscenelayer.h:254
inline void ISceneLayer::SetComboAttr(CUtlStringToken nTokenID, uint8 nValue)
{
} /* size: 0 */

// <040212BA> ../public/scenesystem/iscenelayer.h:256
inline void ISceneLayer::GetIntValue(CUtlStringToken nTokenID, int nDefaultValue)
{
} /* size: 0 */

// <027D99E6> ../public/scenesystem/iscenelayer.h:261
inline void ISceneLayer::GetTextureValue(CUtlStringToken nTokenID, HRenderTexture nDefaultValue)
{
} /* size: 0 */

// <0347D118> ../public/scenesystem/iscenelayer.h:278
inline void ISceneLayer::GetProceduralLayerRenderer()
{
} /* size: 0 */

// <0324274C> ../public/scenesystem/iscenelayer.h:303
inline void ISceneLayer::GetLabel()
{
} /* size: 0 */

// <03242726> ../public/scenesystem/iscenelayer.h:304
inline void ISceneLayer::SetLabel(CUtlStringToken nTok)
{
} /* size: 0 */

// <0347D0F2> ../public/scenesystem/iscenelayer.h:307
inline void ISceneLayer::SetOverrideRasterizerState(RsRasterizerStateHandle_t hRasterizerState)
{
} /* size: 0 */

// <02F251C7> ../public/scenesystem/iscenelayer.h:308
inline void ISceneLayer::GetOverrideRasterizerState()
{
} /* size: 0 */

// <0347D0BF> ../public/scenesystem/iscenelayer.h:314
inline void ISceneLayer::SetOverrideDepthStencilState(RsDepthStencilStateHandle_t hDsState, uint32 nStencilRef)
{
} /* size: 0 */

// <02F251AE> ../public/scenesystem/iscenelayer.h:315
inline void ISceneLayer::GetOverrideDepthStencilState()
{
} /* size: 0 */

// <02F25195> ../public/scenesystem/iscenelayer.h:316
inline void ISceneLayer::GetOverrideStencilRef()
{
} /* size: 0 */

// <040212A1> ../public/scenesystem/iscenelayer.h:317
inline void ISceneLayer::GetOverrideMaterial()
{
} /* size: 0 */

// <04021288> ../public/scenesystem/iscenelayer.h:320
inline void ISceneLayer::GetStencilStateOverride()
{
} /* size: 0 */

// <0402126F> ../public/scenesystem/iscenelayer.h:324
inline void ISceneLayer::GetDepthBiasStateOverride()
{
} /* size: 0 */

// <0347D099> ../public/scenesystem/iscenelayer.h:325
inline void ISceneLayer::SetDepthBiasStateOverride(const RsDepthBiasStateOverride_t& depthBiasOverride)
{
} /* size: 0 */

// <04021256> ../public/scenesystem/iscenelayer.h:328
inline void ISceneLayer::GetFillModeStateOverride()
{
} /* size: 0 */

// <0347D073> ../public/scenesystem/iscenelayer.h:329
inline void ISceneLayer::SetFillModeStateOverride(const RsFillModeOverride_t& fillModeOverride)
{
} /* size: 0 */

// <03754AE8> ../public/scenesystem/iscenelayer.h:337
inline void ISceneLayer::GetStencilDependency()
{
} /* size: 0 */

// <0402123D> ../public/scenesystem/iscenelayer.h:352
inline void ISceneLayer::GetParentView()
{
} /* size: 0 */

// <02F25124> ../public/scenesystem/iscenelayer.h:372
inline void ISceneLayer::NeedsPerLayerViewConstants()
{
} /* size: 0 */

// <027D99C0> ../public/scenesystem/iscenelayer.h:375
inline void ISceneLayer::SetObjectMatchID(CUtlStringToken nTok)
{
} /* size: 0 */

// <02F2510B> ../public/scenesystem/iscenelayer.h:398
inline void ISceneLayer::GetLayersThatMustRenderObjectsForThisLayerToBeDrawn()
{
} /* size: 0 */

// <013492D2> ../public/scenesystem/iscenelayer.h:399
inline void ISceneLayer::SetBoundingVolumeSizeCullThresholdInPercent(float flSizeCullThreshold)
{
} /* size: 0 */

// <03DABC1C> ../public/scenesystem/iscenelayer.h:400
inline void ISceneLayer::GetBoundingVolumeSizeCullThreshold()
{
} /* size: 0 */

// <0347C23F> ../public/scenesystem/iscenelayer.h:401
// variable: 1
// function calls: 66
void ISceneLayer::~ISceneLayer()
{
	RemoveAll(const CUtlVectorBase<ISceneLayer::InputSceneViewRenderTarget_t, CUtlMemoryFixedGrowable<ISceneLayer::InputSceneViewRender this); // 1798
	CUtlMemory<ISceneLayer::InputSceneViewRenderTarget_t, int>::IsExternallyAllocated(); // 577
	CUtlMemory<ISceneLayer::InputSceneViewRenderTarget_t, int>::ConvertToExternalMemory(
				InputSceneViewRenderTarget_t* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<ISceneLayer::InputSceneViewRenderTarget_t, int>::Purge_FixedGrowable(
				InputSceneViewRenderTarget_t* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<ISceneLayer::InputSceneViewRenderTarget_t, int>::Purge_FixedGrowable(
				InputSceneViewRenderTarget_t* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<2, ISceneLayer::InputSceneViewRenderTarget_t, 8>::Base(); // 237
	CUtlMemoryFixedGrowable<ISceneLayer::InputSceneViewRenderTarget_t, 2, int>::Purge(
		int numElements);  // 1799
	ResetDbgInfo(const CUtlVectorBase<ISceneLayer::InputSceneViewRenderTarget_t, CUtlMemoryFixedGrowable<ISceneLayer::InputSceneViewRender this); // 1800
	Purge(const CUtlVectorBase<ISceneLayer::InputSceneViewRenderTarget_t, CUtlMemoryFixedGrowable<ISceneLayer::InputSceneViewRender this); // 560
	ValidateAlignment<ISceneLayer::InputSceneViewRenderTarget_t>(void); // 508
	CUtlMemory<ISceneLayer::InputSceneViewRenderTarget_t, int>::Purge(); // 903
	CUtlMemory<ISceneLayer::InputSceneViewRenderTarget_t, int>::Purge(); // 510
	CUtlMemory<ISceneLayer::InputSceneViewRenderTarget_t, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<ISceneLayer::InputSceneViewRenderTarget_t, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<ISceneLayer::InputSceneViewRenderTarget_t, 2, int>::~CUtlMemoryFixedGrowable(); // 562
	~CUtlVectorBase(const CUtlVectorBase<ISceneLayer::InputSceneViewRenderTarget_t, CUtlMemoryFixedGrowable<ISceneLayer::InputSceneViewRender this); // 478
	CUtlVectorFixedGrowable<ISceneLayer::InputSceneViewRenderTarget_t, 2>::~CUtlVectorFixedGrowable(); // 401
	CUtlVectorBase<ISceneLayer::InputTexture_t, CUtlMemoryFixedGrowable<ISceneLayer::InputTexture_t, 2, int> >::RemoveAll(); // 1798
	CUtlMemory<ISceneLayer::InputTexture_t, int>::IsExternallyAllocated(); // 577
	CUtlMemory<ISceneLayer::InputTexture_t, int>::ConvertToExternalMemory(
				InputTexture_t* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<ISceneLayer::InputTexture_t, int>::Purge_FixedGrowable(
				InputTexture_t* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<ISceneLayer::InputTexture_t, int>::Purge_FixedGrowable(
				InputTexture_t* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<2, ISceneLayer::InputTexture_t, 8>::Base(); // 237
	CUtlMemoryFixedGrowable<ISceneLayer::InputTexture_t, 2, int>::Purge(
		int numElements);  // 1799
	CUtlVectorBase<ISceneLayer::InputTexture_t, CUtlMemoryFixedGrowable<ISceneLayer::InputTexture_t, 2, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<ISceneLayer::InputTexture_t, CUtlMemoryFixedGrowable<ISceneLayer::InputTexture_t, 2, int> >::Purge(); // 560
	ValidateAlignment<ISceneLayer::InputTexture_t>(void); // 508
	CUtlMemory<ISceneLayer::InputTexture_t, int>::Purge(); // 903
	CUtlMemory<ISceneLayer::InputTexture_t, int>::Purge(); // 510
	CUtlMemory<ISceneLayer::InputTexture_t, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<ISceneLayer::InputTexture_t, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<ISceneLayer::InputTexture_t, 2, int>::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<ISceneLayer::InputTexture_t, CUtlMemoryFixedGrowable<ISceneLayer::InputTexture_t, 2, int> >::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<ISceneLayer::InputTexture_t, 2>::~CUtlVectorFixedGrowable(); // 401
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixed<CUtlStringToken, 4> >::Purge(); // 560
	ValidateAlignment<CUtlStringToken>(void); // 258
	CUtlMemoryFixed<CUtlStringToken, 4>::~CUtlMemoryFixed(); // 562
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixed<CUtlStringToken, 4> >::~CUtlVectorBase(); // 461
	CUtlVectorFixed<CUtlStringToken, 4>::~CUtlVectorFixed(); // 401
	CUtlVectorBase<ConstantBufferHandle_t__::Purge(); // 560
	ValidateAlignment<ConstantBufferHandle_t__*>(void); // 258
	CUtlMemoryFixed<ConstantBufferHandle_t__::~CUtlMemoryFixed(); // 562
	CUtlVectorBase<ConstantBufferHandle_t__::~CUtlVectorBase(); // 461
	CUtlVectorFixed<ConstantBufferHandle_t__::~CUtlVectorFixed(); // 401
	CUtlVectorBase<ISceneLayer::RemoveAll(); // 1798
	CUtlMemory<ISceneLayer::IsExternallyAllocated(); // 577
	CUtlMemory<ISceneLayer::ConvertToExternalMemory(
				ISceneLayer** pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<ISceneLayer::Purge_FixedGrowable(
				ISceneLayer** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<ISceneLayer::Purge_FixedGrowable(
				ISceneLayer** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<1, ISceneLayer::Base(); // 237
	CUtlMemoryFixedGrowable<ISceneLayer::Purge(
		int numElements);  // 1799
	CUtlVectorBase<ISceneLayer::ResetDbgInfo(); // 1800
	CUtlVectorBase<ISceneLayer::Purge(); // 560
	ValidateAlignment<ISceneLayer*>(void); // 508
	CUtlMemory<ISceneLayer::Purge(); // 903
	CUtlMemory<ISceneLayer::Purge(); // 510
	CUtlMemory<ISceneLayer::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<ISceneLayer::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<ISceneLayer::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<ISceneLayer::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<ISceneLayer::~CUtlVectorFixedGrowable(); // 401
	CStrongHandle<InfoForResourceTypeIMaterial2>::~CStrongHandle(); // 401
	{
		OverflowChunk_t* tmp; // 1018
	}
	CUtlIntrusiveList<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t>::Purge(); // 400
	CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t, 16>::ClearButLeaveParentPointerAlone(
					bool bFreeHashMemory);  // 425
	CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t, 16>::Clear(
		bool bFreeHashMemory);  // 371
	CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t, 16>::~CUtlAttributeList(); // 401
} /* size: 528, inline expansions: 66 (2769 bytes) */

// <0347C1D6> ../public/scenesystem/iscenelayer.h:401
void ISceneLayer::~ISceneLayer()
{
} /* size: 36 */

// <0347C1BD> ../public/scenesystem/iscenelayer.h:401
inline void ISceneLayer::~ISceneLayer()
{
} /* size: 0 */

// <02F250D9> ../public/scenesystem/iscenelayer.h:416
inline void ISceneLayer::GetSemaphore()
{
} /* size: 0 */

// <0347B0D2> ../public/scenesystem/iscenelayer.h:561
// function calls: 73
void ISceneLayer::ISceneLayer()
{
	RenderViewport_t::RenderViewport_t(); // 561
	CUtlStringToken::CUtlStringToken(); // 561
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 132
	SceneLayerOutputs_t::SceneLayerOutputs_t(); // 561
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 251
	RsStencilStateDesc_t::RsStencilStateDesc_t(); // 307
	RsStencilStateOverride_t::RsStencilStateOverride_t(); // 561
	{
	}
	AlignedByteArrayExplicit_t<1, ISceneLayer::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<1, ISceneLayer::AlignedByteArray_t(); // 228
	CUtlMemory<ISceneLayer::CUtlMemory(
			ISceneLayer** pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<ISceneLayer::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<ISceneLayer::CUtlMemoryFixedGrowable_Base(
					ISceneLayer** pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<1, ISceneLayer::Base(); // 231
	CUtlMemoryFixedGrowable<ISceneLayer::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<ISceneLayer::ResetDbgInfo(); // 530
	CUtlVectorBase<ISceneLayer::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<ISceneLayer::CUtlVectorFixedGrowable(
				int growSize);  // 561
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 61
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 62
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 63
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 64
	SetFixedKeysToZero<4>(i32x4* pFixedKeys); // 118
	CUtlAttributeListChunk<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t>::CUtlAttributeListChunk(); // 248
	CUtlIntrusiveList<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t>::CUtlIntrusiveList(); // 248
	CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t, 16>::CUtlAttributeList(); // 561
	RsDepthBiasStateOverride_t::RsDepthBiasStateOverride_t(); // 561
	CUtlStringToken::CUtlStringToken(); // 561
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 561
	CWeakHandle<InfoForResourceTypeIMaterial2>::GetBinding(); // 476
	CStrongHandle<InfoForResourceTypeIMaterial2>::Init(
		ResourceHandleTyped_t hResource);  // 476
	CStrongHandle<InfoForResourceTypeIMaterial2>::CStrongHandle(
			const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 561
	CUtlStringToken::CUtlStringToken(); // 561
	CUtlStringToken::CUtlStringToken(); // 561
	{
	}
	AlignedByteArrayExplicit_t<4, ConstantBufferHandle_t__::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<4, ConstantBufferHandle_t__::AlignedByteArray_t(); // 256
	CUtlMemoryFixed<ConstantBufferHandle_t__::CUtlMemoryFixed(
			int nGrowSize,
			int nInitSize);  // 527
	CUtlVectorBase<ConstantBufferHandle_t__::ResetDbgInfo(); // 530
	CUtlVectorBase<ConstantBufferHandle_t__::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 467
	CUtlVectorFixed<ConstantBufferHandle_t__::CUtlVectorFixed(
			int growSize,
			int initCapacity);  // 561
	{
	}
	AlignedByteArrayExplicit_t<4, CUtlStringToken, 4>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<4, CUtlStringToken>::AlignedByteArray_t(); // 256
	CUtlMemoryFixed<CUtlStringToken, 4>::CUtlMemoryFixed(
			int nGrowSize,
			int nInitSize);  // 527
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixed<CUtlStringToken, 4> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixed<CUtlStringToken, 4> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 467
	CUtlVectorFixed<CUtlStringToken, 4>::CUtlVectorFixed(
			int growSize,
			int initCapacity);  // 561
	{
	}
	AlignedByteArrayExplicit_t<2, ISceneLayer::InputTexture_t, 8>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<2, ISceneLayer::InputTexture_t>::AlignedByteArray_t(); // 228
	CUtlMemory<ISceneLayer::InputTexture_t, int>::CUtlMemory(
			InputTexture_t* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<ISceneLayer::InputTexture_t, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<ISceneLayer::InputTexture_t, int>::CUtlMemoryFixedGrowable_Base(
					InputTexture_t* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<2, ISceneLayer::InputTexture_t, 8>::Base(); // 231
	CUtlMemoryFixedGrowable<ISceneLayer::InputTexture_t, 2, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<ISceneLayer::InputTexture_t, CUtlMemoryFixedGrowable<ISceneLayer::InputTexture_t, 2, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<ISceneLayer::InputTexture_t, CUtlMemoryFixedGrowable<ISceneLayer::InputTexture_t, 2, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<ISceneLayer::InputTexture_t, 2>::CUtlVectorFixedGrowable(
				int growSize);  // 561
	{
	}
	AlignedByteArrayExplicit_t<2, ISceneLayer::InputSceneViewRenderTarget_t, 8>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<2, ISceneLayer::InputSceneViewRenderTarget_t>::AlignedByteArray_t(); // 228
	CUtlMemory<ISceneLayer::InputSceneViewRenderTarget_t, int>::CUtlMemory(
			InputSceneViewRenderTarget_t* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<ISceneLayer::InputSceneViewRenderTarget_t, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<ISceneLayer::InputSceneViewRenderTarget_t, int>::CUtlMemoryFixedGrowable_Base(
					InputSceneViewRenderTarget_t* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<2, ISceneLayer::InputSceneViewRenderTarget_t, 8>::Base(); // 231
	CUtlMemoryFixedGrowable<ISceneLayer::InputSceneViewRenderTarget_t, 2, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	ResetDbgInfo(const CUtlVectorBase<ISceneLayer::InputSceneViewRenderTarget_t, CUtlMemoryFixedGrowable<ISceneLayer::InputSceneViewRender this); // 530
	CUtlVectorBase(const CUtlVectorBase<ISceneLayer::InputSceneViewRenderTarget_t, CUtlMemoryFixedGrowable<ISceneLayer::InputSceneViewRender this,
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<ISceneLayer::InputSceneViewRenderTarget_t, 2>::CUtlVectorFixedGrowable(
				int growSize);  // 561
} /* size: 754, inline expansions: 73 (1834 bytes) */

// <0347B0B9> ../public/scenesystem/iscenelayer.h:561
inline void ISceneLayer::ISceneLayer()
{
} /* size: 0 */

// <03AF6997> ../public/scenesystem/iscenelayer.h:579
// variable: 1
inline void ISceneLayer::SetAttr(CUtlStringToken nTokenID, HSceneViewRenderTarget hRenderTarget, SceneLayerMSAAMode_t nMSAAMode, uint32 nFlags)
{
	{
		RenderTargetAttribute_t attr; // 583
	}
} /* size: 0 */

// <032417EB> ../public/scenesystem/iscenelayer.h:579
// variables: 27
// function calls: 66
void ISceneLayer::SetAttr(CUtlStringToken nTokenID, HSceneViewRenderTarget hRenderTarget, SceneLayerMSAAMode_t nMSAAMode, uint32 nFlags)
{
	{
		RenderTargetAttribute_t attr; // 583
		{
			__m128i retVal; // 1105
			_mm_set_epi32(int __q3,
					int __q2,
					int __q1,
					int __q0);  // 648
			_mm_set1_epi32(int __A); // 1106
		}
		ReplicateIX4<>(int nValue); // 356
		{
			int i; // 212
			{
				int nTestResult; // 217
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 217
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 217
				{
					const int  nIndex; // 220
				}
			}
		}
		CUtlAttributeListChunk<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t>::FindIndexOfMatch(
				i32x4 i4KMatch);  // 311
		{
			OverflowChunk_t& p; // 317
			CUtlIntrusiveList<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t>& __for_range; // 33987
			CUtlIntrusiveListIterator<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t> __for_begin; // 33997
			CUtlIntrusiveListIterator<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t> __for_end; // 34007
			CUtlIntrusiveList<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t>::Head(); // 1151
			CUtlIntrusiveListIterator<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t>::CUtlIntrusiveListIterator(
							OverflowChunk_t* pNode);  // 1151
			CUtlIntrusiveList<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t>::begin(); // 317
			CUtlIntrusiveListIterator<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t>::CUtlIntrusiveListIterator(
							OverflowChunk_t* pNode);  // 1156
			CUtlIntrusiveList<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t>::end(); // 317
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 319
			CUtlIntrusiveListIterator<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t>::operator++(); // 317
			CUtlAttributeListChunk<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t>::GetValuePtrFromIndex(
						int nIdx);  // 322
		}
		CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t, 16>::FindIndexOfMatch(
				i32x4 n4Key,
				RenderTargetAttribute_t** pValueOut);  // 309
		CUtlAttributeListChunk<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t>::GetValuePtrFromIndex(
					int nIdx);  // 314
		CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t, 16>::FindIndexOfMatch(
				i32x4 n4Key,
				RenderTargetAttribute_t** pValueOut);  // 356
		CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t, 16>::FindIndexOfMatch(
				uint32 nKey,
				RenderTargetAttribute_t** pValueOut);  // 547
		{
			int i; // 212
			{
				int nTestResult; // 217
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 217
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 217
				{
					const int  nIndex; // 220
				}
			}
		}
		CUtlAttributeListChunk<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t>::FindIndexOfMatch(
				i32x4 i4KMatch);  // 330
		{
			OverflowChunk_t& p; // 337
			CUtlIntrusiveList<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t>& __for_range; // 43242
			CUtlIntrusiveListIterator<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t> __for_begin; // 43252
			CUtlIntrusiveListIterator<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t> __for_end; // 43262
			CUtlIntrusiveListIterator<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t>::CUtlIntrusiveListIterator(
							OverflowChunk_t* pNode);  // 1151
			CUtlIntrusiveList<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t>::begin(); // 337
			CUtlIntrusiveListIterator<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t>::CUtlIntrusiveListIterator(
							OverflowChunk_t* pNode);  // 1156
			CUtlIntrusiveList<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t>::end(); // 337
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 339
			CUtlIntrusiveListIterator<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t>::operator++(); // 337
			CUtlAttributeListChunk<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t>::GetKeyPtrFromIndex(
						int nIdx);  // 342
			CUtlAttributeListChunk<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t>::GetValuePtrFromIndex(
						int nIdx);  // 343
		}
		CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t, 16>::FindIndexAndKeyOfMatch(
					i32x4 n4Key,
					uint32** pKeyOut,
					RenderTargetAttribute_t** pValueOut);  // 328
		CUtlAttributeListChunk<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t>::GetKeyPtrFromIndex(
					int nIdx);  // 333
		CUtlAttributeListChunk<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t>::GetValuePtrFromIndex(
					int nIdx);  // 334
		CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t, 16>::FindIndexAndKeyOfMatch(
					i32x4 n4Key,
					uint32** pKeyOut,
					RenderTargetAttribute_t** pValueOut);  // 556
		{
			OverflowChunk_t* pNew; // 559
			_mm_store_ps(float* __P,
					__m128 __A);  // 2680
			StoreAlignedIntSIMD<>(i32x4& pSIMD,
						const fltx4& a);  // 61
			_mm_store_ps(float* __P,
					__m128 __A);  // 2680
			StoreAlignedIntSIMD<>(i32x4& pSIMD,
						const fltx4& a);  // 62
			_mm_store_ps(float* __P,
					__m128 __A);  // 2680
			StoreAlignedIntSIMD<>(i32x4& pSIMD,
						const fltx4& a);  // 63
			_mm_store_ps(float* __P,
					__m128 __A);  // 2680
			StoreAlignedIntSIMD<>(i32x4& pSIMD,
						const fltx4& a);  // 64
			SetFixedKeysToZero<4>(i32x4* pFixedKeys); // 118
			CUtlAttributeListChunk<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t>::CUtlAttributeListChunk(); // 254
			OverflowChunk_t::OverflowChunk_t(); // 559
			AddToHead<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t, CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t>(OverflowChunk_t *& head,
																OverflowChunk_t* node);  // 960
			CUtlIntrusiveList<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t>::AddToHead(
					OverflowChunk_t* node);  // 560
			CUtlAttributeListChunk<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t>::GetValuePtrFromIndex(
						int nIdx);  // 563
			CUtlAttributeListChunk<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t>::GetKeyPtrFromIndex(
						int nIdx);  // 562
		}
		CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t, 16>::SetValue(
			uint32 nKey,
			RenderTargetAttribute_t nValue);  // 571
		CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t, 16>::SetValue(
			const CUtlStringToken& nTok,
			RenderTargetAttribute_t nValue);  // 587
	}
} /* size: 581 */

// <027D8A86> ../public/scenesystem/iscenelayer.h:579
// variables: 27
// function calls: 66
void ISceneLayer::SetAttr(CUtlStringToken nTokenID, HSceneViewRenderTarget hRenderTarget, SceneLayerMSAAMode_t nMSAAMode, uint32 nFlags)
{
	{
		RenderTargetAttribute_t attr; // 583
		{
			__m128i retVal; // 1105
			_mm_set_epi32(int __q3,
					int __q2,
					int __q1,
					int __q0);  // 648
			_mm_set1_epi32(int __A); // 1106
		}
		ReplicateIX4<>(int nValue); // 356
		{
			int i; // 212
			{
				int nTestResult; // 217
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 217
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 217
				{
					const int  nIndex; // 220
				}
			}
		}
		CUtlAttributeListChunk<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t>::FindIndexOfMatch(
				i32x4 i4KMatch);  // 311
		{
			OverflowChunk_t& p; // 317
			CUtlIntrusiveList<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t>& __for_range; // 51397
			CUtlIntrusiveListIterator<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t> __for_begin; // 51407
			CUtlIntrusiveListIterator<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t> __for_end; // 51417
			CUtlIntrusiveList<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t>::Head(); // 1151
			CUtlIntrusiveListIterator<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t>::CUtlIntrusiveListIterator(
							OverflowChunk_t* pNode);  // 1151
			CUtlIntrusiveList<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t>::begin(); // 317
			CUtlIntrusiveListIterator<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t>::CUtlIntrusiveListIterator(
							OverflowChunk_t* pNode);  // 1156
			CUtlIntrusiveList<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t>::end(); // 317
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 319
			CUtlIntrusiveListIterator<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t>::operator++(); // 317
			CUtlAttributeListChunk<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t>::GetValuePtrFromIndex(
						int nIdx);  // 322
		}
		CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t, 16>::FindIndexOfMatch(
				i32x4 n4Key,
				RenderTargetAttribute_t** pValueOut);  // 309
		CUtlAttributeListChunk<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t>::GetValuePtrFromIndex(
					int nIdx);  // 314
		CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t, 16>::FindIndexOfMatch(
				i32x4 n4Key,
				RenderTargetAttribute_t** pValueOut);  // 356
		CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t, 16>::FindIndexOfMatch(
				uint32 nKey,
				RenderTargetAttribute_t** pValueOut);  // 547
		{
			int i; // 212
			{
				int nTestResult; // 217
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 217
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 217
				{
					const int  nIndex; // 220
				}
			}
		}
		CUtlAttributeListChunk<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t>::FindIndexOfMatch(
				i32x4 i4KMatch);  // 330
		{
			OverflowChunk_t& p; // 337
			CUtlIntrusiveList<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t>& __for_range; // 57970
			CUtlIntrusiveListIterator<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t> __for_begin; // 57980
			CUtlIntrusiveListIterator<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t> __for_end; // 57990
			CUtlIntrusiveListIterator<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t>::CUtlIntrusiveListIterator(
							OverflowChunk_t* pNode);  // 1151
			CUtlIntrusiveList<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t>::begin(); // 337
			CUtlIntrusiveListIterator<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t>::CUtlIntrusiveListIterator(
							OverflowChunk_t* pNode);  // 1156
			CUtlIntrusiveList<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t>::end(); // 337
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 339
			CUtlIntrusiveListIterator<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t>::operator++(); // 337
			CUtlAttributeListChunk<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t>::GetKeyPtrFromIndex(
						int nIdx);  // 342
			CUtlAttributeListChunk<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t>::GetValuePtrFromIndex(
						int nIdx);  // 343
		}
		CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t, 16>::FindIndexAndKeyOfMatch(
					i32x4 n4Key,
					uint32** pKeyOut,
					RenderTargetAttribute_t** pValueOut);  // 328
		CUtlAttributeListChunk<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t>::GetKeyPtrFromIndex(
					int nIdx);  // 333
		CUtlAttributeListChunk<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t>::GetValuePtrFromIndex(
					int nIdx);  // 334
		CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t, 16>::FindIndexAndKeyOfMatch(
					i32x4 n4Key,
					uint32** pKeyOut,
					RenderTargetAttribute_t** pValueOut);  // 556
		{
			OverflowChunk_t* pNew; // 559
			_mm_store_ps(float* __P,
					__m128 __A);  // 2680
			StoreAlignedIntSIMD<>(i32x4& pSIMD,
						const fltx4& a);  // 61
			_mm_store_ps(float* __P,
					__m128 __A);  // 2680
			StoreAlignedIntSIMD<>(i32x4& pSIMD,
						const fltx4& a);  // 62
			_mm_store_ps(float* __P,
					__m128 __A);  // 2680
			StoreAlignedIntSIMD<>(i32x4& pSIMD,
						const fltx4& a);  // 63
			_mm_store_ps(float* __P,
					__m128 __A);  // 2680
			StoreAlignedIntSIMD<>(i32x4& pSIMD,
						const fltx4& a);  // 64
			SetFixedKeysToZero<4>(i32x4* pFixedKeys); // 118
			CUtlAttributeListChunk<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t>::CUtlAttributeListChunk(); // 254
			OverflowChunk_t::OverflowChunk_t(); // 559
			AddToHead<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t, CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t>(OverflowChunk_t *& head,
																OverflowChunk_t* node);  // 960
			CUtlIntrusiveList<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t>::AddToHead(
					OverflowChunk_t* node);  // 560
			CUtlAttributeListChunk<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t>::GetValuePtrFromIndex(
						int nIdx);  // 563
			CUtlAttributeListChunk<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t>::GetKeyPtrFromIndex(
						int nIdx);  // 562
		}
		CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t, 16>::SetValue(
			uint32 nKey,
			RenderTargetAttribute_t nValue);  // 571
		CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t, 16>::SetValue(
			const CUtlStringToken& nTok,
			RenderTargetAttribute_t nValue);  // 587
	}
} /* size: 581 */

// <01DC8385> ../public/scenesystem/iscenelayer.h:579
// variables: 27
// function calls: 66
void ISceneLayer::SetAttr(CUtlStringToken nTokenID, HSceneViewRenderTarget hRenderTarget, SceneLayerMSAAMode_t nMSAAMode, uint32 nFlags)
{
	{
		RenderTargetAttribute_t attr; // 583
		{
			__m128i retVal; // 1105
			_mm_set_epi32(int __q3,
					int __q2,
					int __q1,
					int __q0);  // 648
			_mm_set1_epi32(int __A); // 1106
		}
		ReplicateIX4<>(int nValue); // 356
		{
			int i; // 212
			{
				int nTestResult; // 217
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 217
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 217
				{
					const int  nIndex; // 220
				}
			}
		}
		CUtlAttributeListChunk<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t>::FindIndexOfMatch(
				i32x4 i4KMatch);  // 311
		{
			OverflowChunk_t& p; // 317
			CUtlIntrusiveList<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t>& __for_range; // 64840
			CUtlIntrusiveListIterator<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t> __for_begin; // 64850
			CUtlIntrusiveListIterator<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t> __for_end; // 64860
			CUtlIntrusiveList<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t>::Head(); // 1151
			CUtlIntrusiveListIterator<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t>::CUtlIntrusiveListIterator(
							OverflowChunk_t* pNode);  // 1151
			CUtlIntrusiveList<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t>::begin(); // 317
			CUtlIntrusiveListIterator<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t>::CUtlIntrusiveListIterator(
							OverflowChunk_t* pNode);  // 1156
			CUtlIntrusiveList<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t>::end(); // 317
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 319
			CUtlIntrusiveListIterator<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t>::operator++(); // 317
			CUtlAttributeListChunk<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t>::GetValuePtrFromIndex(
						int nIdx);  // 322
		}
		CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t, 16>::FindIndexOfMatch(
				i32x4 n4Key,
				RenderTargetAttribute_t** pValueOut);  // 309
		CUtlAttributeListChunk<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t>::GetValuePtrFromIndex(
					int nIdx);  // 314
		CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t, 16>::FindIndexOfMatch(
				i32x4 n4Key,
				RenderTargetAttribute_t** pValueOut);  // 356
		CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t, 16>::FindIndexOfMatch(
				uint32 nKey,
				RenderTargetAttribute_t** pValueOut);  // 547
		{
			int i; // 212
			{
				int nTestResult; // 217
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 217
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 217
				{
					const int  nIndex; // 220
				}
			}
		}
		CUtlAttributeListChunk<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t>::FindIndexOfMatch(
				i32x4 i4KMatch);  // 330
		{
			OverflowChunk_t& p; // 337
			CUtlIntrusiveList<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t>& __for_range; // 6286
			CUtlIntrusiveListIterator<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t> __for_begin; // 6296
			CUtlIntrusiveListIterator<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t> __for_end; // 6306
			CUtlIntrusiveListIterator<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t>::CUtlIntrusiveListIterator(
							OverflowChunk_t* pNode);  // 1151
			CUtlIntrusiveList<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t>::begin(); // 337
			CUtlIntrusiveListIterator<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t>::CUtlIntrusiveListIterator(
							OverflowChunk_t* pNode);  // 1156
			CUtlIntrusiveList<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t>::end(); // 337
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 339
			CUtlIntrusiveListIterator<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t>::operator++(); // 337
			CUtlAttributeListChunk<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t>::GetKeyPtrFromIndex(
						int nIdx);  // 342
			CUtlAttributeListChunk<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t>::GetValuePtrFromIndex(
						int nIdx);  // 343
		}
		CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t, 16>::FindIndexAndKeyOfMatch(
					i32x4 n4Key,
					uint32** pKeyOut,
					RenderTargetAttribute_t** pValueOut);  // 328
		CUtlAttributeListChunk<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t>::GetKeyPtrFromIndex(
					int nIdx);  // 333
		CUtlAttributeListChunk<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t>::GetValuePtrFromIndex(
					int nIdx);  // 334
		CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t, 16>::FindIndexAndKeyOfMatch(
					i32x4 n4Key,
					uint32** pKeyOut,
					RenderTargetAttribute_t** pValueOut);  // 556
		{
			OverflowChunk_t* pNew; // 559
			_mm_store_ps(float* __P,
					__m128 __A);  // 2680
			StoreAlignedIntSIMD<>(i32x4& pSIMD,
						const fltx4& a);  // 61
			_mm_store_ps(float* __P,
					__m128 __A);  // 2680
			StoreAlignedIntSIMD<>(i32x4& pSIMD,
						const fltx4& a);  // 62
			_mm_store_ps(float* __P,
					__m128 __A);  // 2680
			StoreAlignedIntSIMD<>(i32x4& pSIMD,
						const fltx4& a);  // 63
			_mm_store_ps(float* __P,
					__m128 __A);  // 2680
			StoreAlignedIntSIMD<>(i32x4& pSIMD,
						const fltx4& a);  // 64
			SetFixedKeysToZero<4>(i32x4* pFixedKeys); // 118
			CUtlAttributeListChunk<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t>::CUtlAttributeListChunk(); // 254
			OverflowChunk_t::OverflowChunk_t(); // 559
			AddToHead<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t, CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t>(OverflowChunk_t *& head,
																OverflowChunk_t* node);  // 960
			CUtlIntrusiveList<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t>::AddToHead(
					OverflowChunk_t* node);  // 560
			CUtlAttributeListChunk<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t>::GetValuePtrFromIndex(
						int nIdx);  // 563
			CUtlAttributeListChunk<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t>::GetKeyPtrFromIndex(
						int nIdx);  // 562
		}
		CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t, 16>::SetValue(
			uint32 nKey,
			RenderTargetAttribute_t nValue);  // 571
		CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t, 16>::SetValue(
			const CUtlStringToken& nTok,
			RenderTargetAttribute_t nValue);  // 587
	}
} /* size: 581 */

// <02F25099> ../public/scenesystem/iscenelayer.h:591
// variable: 1
inline void ISceneLayer::GetRenderTargetValue(CUtlStringToken nTokenID, HSceneViewRenderTarget nDefaultValue)
{
	RenderTargetAttribute_t attr; // 593
} /* size: 0, variables: 1 */

// <03AF6971> ../public/scenesystem/iscenelayer.h:603
inline void ISceneLayer::AddObjectFlagsRequiredMask(ESceneObjectFlags nRequiredFlags)
{
} /* size: 0 */

// <03AF694B> ../public/scenesystem/iscenelayer.h:608
inline void ISceneLayer::AddObjectFlagsExcludedMask(ESceneObjectFlags nExcludedFlags)
{
} /* size: 0 */

// <01349204> ../public/scenesystem/iscenelayer.h:613
inline void ISceneLayer::RemoveObjectFlagsRequiredMask(ESceneObjectFlags nRequiredFlags)
{
} /* size: 0 */

// <013491DE> ../public/scenesystem/iscenelayer.h:618
inline void ISceneLayer::RemoveObjectFlagsExcludedMask(ESceneObjectFlags nExcludedFlags)
{
} /* size: 0 */

// <040211E5> ../public/scenesystem/iscenelayer.h:623
inline void ISceneLayer::GetObjectFlagsRequiredMask()
{
} /* size: 0 */

// <02F2501B> ../public/scenesystem/iscenelayer.h:628
inline void ISceneLayer::GetObjectFlagsExcludedMask()
{
} /* size: 0 */

// <040211CC> ../public/scenesystem/iscenelayer.h:633
inline void ISceneLayer::GetDebugName()
{
} /* size: 0 */

