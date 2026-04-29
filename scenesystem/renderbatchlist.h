
//
// scenesystem/renderbatchlist.h
//
//	referenced by: libengine2.so
//
//	functions: 2
//	class: 1
//

// <02DC3D13> ../scenesystem/renderbatchlist.h:18
// member functions: 38
// member variables: 25
// class size: 312
class CRenderBatchList {
	/* ../scenesystem/renderbatchlist.h:21 */
	void CRenderBatchList(CRenderBatchList* );
	/* ../scenesystem/renderbatchlist.h:22 */
	void ~CRenderBatchList(CRenderBatchList* );
	/* ../scenesystem/renderbatchlist.h:24 */
	void Init(CRenderBatchList* );
	/* ../scenesystem/renderbatchlist.h:25 */
	void Start(CRenderBatchList* , CSceneView* , CSceneLayer* , EBatchStartFlags_t);
	/* ../scenesystem/renderbatchlist.h:26 */
	void StartRenderingFromPreviousBatchList(CRenderBatchList* , CRenderBatchList* );
	/* ../scenesystem/renderbatchlist.h:27 */
	void AddPrimitive(CRenderBatchList* , CMeshDrawPrimitive_t* );
	/* ../scenesystem/renderbatchlist.h:28 */
	void End(CRenderBatchList* );
	/* ../scenesystem/renderbatchlist.h:29 */
	void ForceNewBatch(CRenderBatchList* );
	/* ../scenesystem/renderbatchlist.h:31 */
	void AddViewToSubmitBeforeISubmit(CRenderBatchList* , CSceneView* );
	/* ../scenesystem/renderbatchlist.h:33 */
	bool SubmitCommandList(CRenderBatchList* , IRenderContext* );
	/* ../scenesystem/renderbatchlist.h:34 */
	void DiscardCommandList(CRenderBatchList* );
	/* ../scenesystem/renderbatchlist.h:35 */
	IRenderContext* GetRenderContext(CRenderBatchList* );
	/* ../scenesystem/renderbatchlist.h:37 */
	SceneSystemPerFrameStats_t& GetStats(CRenderBatchList* );
	/* ../scenesystem/renderbatchlist.h:38 */
	void SetDrewAnything(CRenderBatchList* , bool);
	/* ../scenesystem/renderbatchlist.h:39 */
	bool GetDrewAnything(CRenderBatchList* );
private:
	/* ../scenesystem/renderbatchlist.h:42 */
	void MakeFrameBufferCopy(CRenderBatchList* , bool);
	/* ../scenesystem/renderbatchlist.h:43 */
	void DrawCurrentPrimitives(CRenderBatchList* );
	/* ../scenesystem/renderbatchlist.h:44 */
	bool CanBatchWithPrevousPrimitive(CRenderBatchList* , CMeshDrawPrimitive_t* );
	/* ../scenesystem/renderbatchlist.h:45 */
	void DebugPrimitiveBatchSpew(CRenderBatchList* , CMeshDrawPrimitive_t* , bool);
	CSceneView * m_pView; /* 0 8 */
	CSceneLayer * m_pLayer; /* 8 8 */
	CSceneView * m_pViewToSubmitBeforeSubmit; /* 16 8 */
	CMeshDrawPrimitive_t * m_pStartPrimitive; /* 24 8 */
	IRenderContext * m_pContext; /* 32 8 */
	CDisplayList * m_pDisplayList; /* 40 8 */
	int m_nNumPrimitives; /* 48 4 */
	int m_nCurrentShadowBatchID; /* 52 4 */
	ISceneObjectDesc * m_pCurrentDesc; /* 56 8 */
	const class IMaterial2 * m_pCurrentKeyMaterial; /* 64 8 */
	uint64 m_nCurrentMaterialSimilarityKey; /* 72 8 */
	int16 m_nCurrentEnvMapTexture; /* 80 2 */
	int16 m_nCurrentLightProbeVolumeID; /* 82 2 */
	uint16 m_nMaxRequiredTextureSize; /* 84 2 */
	EBatchFlags m_nCurrentBatchFlags; /* 86 2 */
	const class CSceneSystemBakedLightingInfo * m_pCurrentBakedLightingInfo; /* 88 8 */
	SceneSystemPerFrameStats_t m_stats __attribute__((__aligned__(8))); /* 96 208 */
	bool m_bDrewAnything:1; /* 304: 0 1 */
	bool m_bStartCalled:1; /* 304: 1 1 */
	bool m_bEndCalled:1; /* 304: 2 1 */
	bool m_bShadowBatch:1; /* 304: 3 1 */
	bool m_bBatchNeedsFramebufferCopy:1; /* 304: 4 1 */
	bool m_bExecuteObjectCommandLists:1; /* 304: 5 1 */
	bool m_bSetupLayer:1; /* 304: 6 1 */
	bool m_bFirstBatch:1; /* 304: 7 1 */
	void CRenderBatchList(class CRenderBatchList *); /* linkage=_ZN16CRenderBatchListC4Ev */
	void ~CRenderBatchList(class CRenderBatchList *); /* linkage=_ZN16CRenderBatchListD4Ev */
	/* <3313d6e> ../scenesystem/renderbatchlist.cpp:30 */
	void Init(class CRenderBatchList *); /* linkage=_ZN16CRenderBatchList4InitEv */
	void Start(class CRenderBatchList *, class CSceneView *, class CSceneLayer *, enum EBatchStartFlags_t); /* linkage=_ZN16CRenderBatchList5StartEP10CSceneViewP11CSceneLayer18EBatchStartFlags_t */
	void StartRenderingFromPreviousBatchList(class CRenderBatchList *, class CRenderBatchList *); /* linkage=_ZN16CRenderBatchList35StartRenderingFromPreviousBatchListEPS_ */
	void AddPrimitive(class CRenderBatchList *, class CMeshDrawPrimitive_t *); /* linkage=_ZN16CRenderBatchList12AddPrimitiveEP20CMeshDrawPrimitive_t */
	void End(class CRenderBatchList *); /* linkage=_ZN16CRenderBatchList3EndEv */
	void ForceNewBatch(class CRenderBatchList *); /* linkage=_ZN16CRenderBatchList13ForceNewBatchEv */
	void AddViewToSubmitBeforeISubmit(class CRenderBatchList *, class CSceneView *); /* linkage=_ZN16CRenderBatchList28AddViewToSubmitBeforeISubmitEP10CSceneView */
	bool SubmitCommandList(class CRenderBatchList *, class IRenderContext *); /* linkage=_ZN16CRenderBatchList17SubmitCommandListEP14IRenderContext */
	void DiscardCommandList(class CRenderBatchList *); /* linkage=_ZN16CRenderBatchList18DiscardCommandListEv */
	class IRenderContext * GetRenderContext(class CRenderBatchList *); /* linkage=_ZN16CRenderBatchList16GetRenderContextEv */
	class SceneSystemPerFrameStats_t & GetStats(class CRenderBatchList *); /* linkage=_ZN16CRenderBatchList8GetStatsEv */
	/* <3313e26> ../scenesystem/renderbatchlist.cpp:362 */
	void SetDrewAnything(class CRenderBatchList *, bool); /* linkage=_ZN16CRenderBatchList15SetDrewAnythingEb */
	bool GetDrewAnything(class CRenderBatchList *); /* linkage=_ZN16CRenderBatchList15GetDrewAnythingEv */
	void MakeFrameBufferCopy(class CRenderBatchList *, bool); /* linkage=_ZN16CRenderBatchList19MakeFrameBufferCopyEb */
	void DrawCurrentPrimitives(class CRenderBatchList *); /* linkage=_ZN16CRenderBatchList21DrawCurrentPrimitivesEv */
	/* <3313e5d> ../scenesystem/renderbatchlist.cpp:454 */
	bool CanBatchWithPrevousPrimitive(class CRenderBatchList *, class CMeshDrawPrimitive_t *); /* linkage=_ZN16CRenderBatchList28CanBatchWithPrevousPrimitiveEP20CMeshDrawPrimitive_t */
	void DebugPrimitiveBatchSpew(class CRenderBatchList *, class CMeshDrawPrimitive_t *, bool); /* linkage=_ZN16CRenderBatchList23DebugPrimitiveBatchSpewEP20CMeshDrawPrimitive_tb */
} __attribute__((__aligned__(8)));

// <02E0EB9C> ../scenesystem/renderbatchlist.h:21
void CRenderBatchList::CRenderBatchList()
{
} /* size: 0 */

// <02E0F154> ../scenesystem/renderbatchlist.h:22
void CRenderBatchList::~CRenderBatchList()
{
} /* size: 0 */

