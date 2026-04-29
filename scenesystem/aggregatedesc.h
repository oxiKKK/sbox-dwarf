
//
// scenesystem/aggregatedesc.h
//
//	referenced by: libengine2.so
//
//	class: 1
//

// <03D7D2B2> ../scenesystem/aggregatedesc.h:13
// member functions: 36
// member variables: 4
// vtable entries: 11
// class size: 112
class CAggregateSceneObjectDesc : public CBaseSceneObjectDesc {
	/* ../scenesystem/aggregatedesc.h:71 */
	enum {
		MAX_FRAGMENTS_PER_AGGREGATE = 768,
	};
public:
	/* class CBaseSceneObjectDesc <ancestor>; */ /* 0 0 */
	void CAggregateSceneObjectDesc(CAggregateSceneObjectDesc* , const CAggregateSceneObjectDesc& );
	/* ../scenesystem/aggregatedesc.cpp:161 */
	void CAggregateSceneObjectDesc(CAggregateSceneObjectDesc* );
	/* ../scenesystem/aggregatedesc.cpp:166 */
	virtual void ~CAggregateSceneObjectDesc(CAggregateSceneObjectDesc* );
	/* ../scenesystem/aggregatedesc.cpp:185 */
	virtual const char* GetTypeName(CAggregateSceneObjectDesc* );
	/* ../scenesystem/aggregatedesc.cpp:190 */
	virtual void OnAddedToSceneSystem(CAggregateSceneObjectDesc* );
	/* ../scenesystem/aggregatedesc.cpp:219 */
	virtual void OnRemovedFromSceneSystem(CAggregateSceneObjectDesc* );
	/* ../scenesystem/aggregatedesc.cpp:245 */
	virtual void OnBeginSubmitDisplayLists(CAggregateSceneObjectDesc* );
	/* ../scenesystem/aggregatedesc.cpp:250 */
	virtual void OnFinishingSubmissionOfDisplayLists(CAggregateSceneObjectDesc* );
	/* ../scenesystem/aggregatedesc.cpp:170 */
	virtual CSceneObject* Create(CAggregateSceneObjectDesc* );
	/* ../scenesystem/aggregatedesc.cpp:176 */
	virtual void DeleteNonPooledObject(CAggregateSceneObjectDesc* , CSceneObject* );
	/* ../scenesystem/aggregatedesc.cpp:281 */
	virtual void GeneratePrimitives(CAggregateSceneObjectDesc* , CSceneObject* , const GeneratePrimitivesArgs_t& , GeneratePrimitivesFlags_t, CMeshPrimitiveOutputBuffer& );
	/* ../scenesystem/aggregatedesc.cpp:465 */
	virtual void DrawArray(CAggregateSceneObjectDesc* , IRenderContext* , CMeshDrawPrimitive_t* , int, const ISceneView* , ISceneLayer* , SceneSystemPerFrameStats_t& );
	/* ../scenesystem/aggregatedesc.cpp:475 */
	virtual void DrawArrayExt(CAggregateSceneObjectDesc* , IRenderContext* , CMeshDrawPrimitive_t* , int, const ISceneView* , ISceneLayer* , SceneSystemPerFrameStats_t& , const IMaterial2* );
	/* ../scenesystem/aggregatedesc.cpp:705 */
	virtual void DrawDebug(CAggregateSceneObjectDesc* , IRenderContext* , const CMeshDrawPrimitive_t* , const ISceneView* , ISceneLayer* , int);
private:
	/* ../scenesystem/aggregatedesc.cpp:232 */
	void OnAggregateAdded(CAggregateSceneObjectDesc* , CAggregateSceneObject* );
	/* ../scenesystem/aggregatedesc.cpp:237 */
	void OnAggregateRemoved(CAggregateSceneObjectDesc* , CAggregateSceneObject* );
	/* ../scenesystem/aggregatedesc.cpp:259 */
	AggregateDrawData_t* GetAggregateData(CAggregateSceneObjectDesc* , const CAggregateSceneObject* , const GeneratePrimitivesArgs_t& );
	/* ../scenesystem/aggregatedesc.cpp:670 */
	void SetBakedLightingAttributes(const ISceneView* , const CAggregateSceneObject* , CRenderAttributes& );
	CUtlVector<CAggregateSceneObject*, CUtlMemory<CAggregateSceneObject*, int> > m_aggregates; /* 8 32 */
	VertexBufferHandle_t m_hFragmentIDBuffer; /* 40 8 */
	CUtlScratchMemoryPool * m_pScratchMemPool[8]; /* 48 64 */
	void CAggregateSceneObjectDesc(class CAggregateSceneObjectDesc *, const class CAggregateSceneObjectDesc  &); /* linkage=_ZN25CAggregateSceneObjectDescC4ERKS_ */
	void CAggregateSceneObjectDesc(class CAggregateSceneObjectDesc *); /* linkage=_ZN25CAggregateSceneObjectDescC4Ev */
	virtual void ~CAggregateSceneObjectDesc(class CAggregateSceneObjectDesc *); /* linkage=_ZN25CAggregateSceneObjectDescD4Ev */
	virtual const char  * GetTypeName(class CAggregateSceneObjectDesc *); /* linkage=_ZN25CAggregateSceneObjectDesc11GetTypeNameEv */
	virtual void OnAddedToSceneSystem(class CAggregateSceneObjectDesc *); /* linkage=_ZN25CAggregateSceneObjectDesc20OnAddedToSceneSystemEv */
	virtual void OnRemovedFromSceneSystem(class CAggregateSceneObjectDesc *); /* linkage=_ZN25CAggregateSceneObjectDesc24OnRemovedFromSceneSystemEv */
	virtual void OnBeginSubmitDisplayLists(class CAggregateSceneObjectDesc *); /* linkage=_ZN25CAggregateSceneObjectDesc25OnBeginSubmitDisplayListsEv */
	virtual void OnFinishingSubmissionOfDisplayLists(class CAggregateSceneObjectDesc *); /* linkage=_ZN25CAggregateSceneObjectDesc35OnFinishingSubmissionOfDisplayListsEv */
	virtual class CSceneObject * Create(class CAggregateSceneObjectDesc *); /* linkage=_ZN25CAggregateSceneObjectDesc6CreateEv */
	virtual void DeleteNonPooledObject(class CAggregateSceneObjectDesc *, class CSceneObject *); /* linkage=_ZN25CAggregateSceneObjectDesc21DeleteNonPooledObjectEP12CSceneObject */
	virtual void GeneratePrimitives(class CAggregateSceneObjectDesc *, class CSceneObject *, const class GeneratePrimitivesArgs_t  &, enum GeneratePrimitivesFlags_t, class CMeshPrimitiveOutputBuffer &); /* linkage=_ZN25CAggregateSceneObjectDesc18GeneratePrimitivesEP12CSceneObjectRKN16ISceneObjectDesc24GeneratePrimitivesArgs_tE25GeneratePrimitivesFlags_tR26CMeshPrimitiveOutputBuffer */
	virtual void DrawArray(class CAggregateSceneObjectDesc *, class IRenderContext *, class CMeshDrawPrimitive_t *, int, const class ISceneView  *, class ISceneLayer *, class SceneSystemPerFrameStats_t &); /* linkage=_ZN25CAggregateSceneObjectDesc9DrawArrayEP14IRenderContextP20CMeshDrawPrimitive_tiPK10ISceneViewP11ISceneLayerR26SceneSystemPerFrameStats_t */
	virtual void DrawArrayExt(class CAggregateSceneObjectDesc *, class IRenderContext *, class CMeshDrawPrimitive_t *, int, const class ISceneView  *, class ISceneLayer *, class SceneSystemPerFrameStats_t &, const class IMaterial2  *); /* linkage=_ZN25CAggregateSceneObjectDesc12DrawArrayExtEP14IRenderContextP20CMeshDrawPrimitive_tiPK10ISceneViewP11ISceneLayerR26SceneSystemPerFrameStats_tPK10IMaterial2 */
	virtual void DrawDebug(class CAggregateSceneObjectDesc *, class IRenderContext *, const class CMeshDrawPrimitive_t  *, const class ISceneView  *, class ISceneLayer *, int); /* linkage=_ZN25CAggregateSceneObjectDesc9DrawDebugEP14IRenderContextPK20CMeshDrawPrimitive_tPK10ISceneViewP11ISceneLayeri */
	/* <3db0f3d> ../scenesystem/aggregatedesc.cpp:232 */
	void OnAggregateAdded(class CAggregateSceneObjectDesc *, class CAggregateSceneObject *); /* linkage=_ZN25CAggregateSceneObjectDesc16OnAggregateAddedEP21CAggregateSceneObject */
	/* <3db0ee6> ../scenesystem/aggregatedesc.cpp:237 */
	void OnAggregateRemoved(class CAggregateSceneObjectDesc *, class CAggregateSceneObject *); /* linkage=_ZN25CAggregateSceneObjectDesc18OnAggregateRemovedEP21CAggregateSceneObject */
	class AggregateDrawData_t * GetAggregateData(class CAggregateSceneObjectDesc *, const class CAggregateSceneObject  *, const class GeneratePrimitivesArgs_t  &); /* linkage=_ZN25CAggregateSceneObjectDesc16GetAggregateDataEPK21CAggregateSceneObjectRKN16ISceneObjectDesc24GeneratePrimitivesArgs_tE */
	void SetBakedLightingAttributes(const class ISceneView  *, const class CAggregateSceneObject  *, class CRenderAttributes &); /* linkage=_ZN25CAggregateSceneObjectDesc26SetBakedLightingAttributesEPK10ISceneViewPK21CAggregateSceneObjectR17CRenderAttributes */
};

