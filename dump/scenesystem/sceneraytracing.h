
//
// scenesystem/sceneraytracing.h
//
//	referenced by: libengine2.so
//
//	class: 1
//

// <036A2F5A> ../scenesystem/sceneraytracing.h:12
// member functions: 16
// member variables: 8
// vtable entries: 3
// class size: 112
class CRayTraceSceneWorld : public IRayTraceSceneWorld {
public:
	/* class IRayTraceSceneWorld <ancestor>; */ /* 0 8 */
	void CRayTraceSceneWorld(CRayTraceSceneWorld* , const CRayTraceSceneWorld& );
	/* ../scenesystem/sceneraytracing.cpp:23 */
	void CRayTraceSceneWorld(CRayTraceSceneWorld* , int);
	/* ../scenesystem/sceneraytracing.cpp:29 */
	virtual void ~CRayTraceSceneWorld(CRayTraceSceneWorld* );
	/* ../scenesystem/sceneraytracing.cpp:41 */
	virtual void BeginBuild(CRayTraceSceneWorld* );
	/* ../scenesystem/sceneraytracing.cpp:51 */
	virtual void AddSceneWorldToBuild(CRayTraceSceneWorld* , ISceneWorld* , IRenderContext* );
	/* ../scenesystem/sceneraytracing.cpp:115 */
	virtual bool EndBuild(CRayTraceSceneWorld* , IRenderContext* , CRenderAttributes* );
	/* ../scenesystem/sceneraytracing.h:28 */
	RenderDescriptorSetHandle_t SceneDescriptorSet(const CRayTraceSceneWorld* );
	/* ../scenesystem/sceneraytracing.h:32 */
	RenderTLASHandle_t TLAS(const CRayTraceSceneWorld* );
private:
	CUtlVector<TLASInstance_t, CUtlMemory<TLASInstance_t, int> > m_TLASInstances; /* 8 32 */
	TLASCreateDesc_t m_TLASDesc; /* 40 24 */
	RenderTLASHandle_t m_hTLAS; /* 64 8 */
	RenderDescriptorSetHandle_t m_hSceneDescriptorSet; /* 72 8 */
	AABB_t m_SceneAABB; /* 80 24 */
	bool m_bIsBuilding; /* 104 1 */
	int m_nMaxRayTypes; /* 108 4 */
	void CRayTraceSceneWorld(class CRayTraceSceneWorld *, const class CRayTraceSceneWorld  &); /* linkage=_ZN19CRayTraceSceneWorldC4ERKS_ */
	void CRayTraceSceneWorld(class CRayTraceSceneWorld *, int); /* linkage=_ZN19CRayTraceSceneWorldC4Ei */
	virtual void ~CRayTraceSceneWorld(class CRayTraceSceneWorld *); /* linkage=_ZN19CRayTraceSceneWorldD4Ev */
	virtual void BeginBuild(class CRayTraceSceneWorld *); /* linkage=_ZN19CRayTraceSceneWorld10BeginBuildEv */
	virtual void AddSceneWorldToBuild(class CRayTraceSceneWorld *, class ISceneWorld *, class IRenderContext *); /* linkage=_ZN19CRayTraceSceneWorld20AddSceneWorldToBuildEP11ISceneWorldP14IRenderContext */
	virtual bool EndBuild(class CRayTraceSceneWorld *, class IRenderContext *, class CRenderAttributes *); /* linkage=_ZN19CRayTraceSceneWorld8EndBuildEP14IRenderContextP17CRenderAttributes */
	RenderDescriptorSetHandle_t SceneDescriptorSet(const class CRayTraceSceneWorld  *); /* linkage=_ZNK19CRayTraceSceneWorld18SceneDescriptorSetEv */
	RenderTLASHandle_t TLAS(const class CRayTraceSceneWorld  *); /* linkage=_ZNK19CRayTraceSceneWorld4TLASEv */
};

