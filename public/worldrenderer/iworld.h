
//
// public/worldrenderer/iworld.h
//
//	referenced by: libengine2.so
//
//	functions: 2
//	class: 1
//

// <01014BB2> ../public/worldrenderer/iworld.h:35
void IWorld::IWorld()
{
} /* size: 0 */

// <01014B96> ../public/worldrenderer/iworld.h:35
inline void IWorld::IWorld()
{
} /* size: 0 */

// <00FF8216> ../public/worldrenderer/iworld.h:35
// member functions: 46
// member variable: 1
// vtable entries: 19
// class size: 8
class IWorld {
	void IWorld(IWorld* , IWorld& );
	void IWorld(IWorld* , const IWorld& );
	void IWorld(IWorld* );
	void ~IWorld(IWorld* );
	int ()(void) * * _vptr.IWorld; /* 0 8 */
	/* ../public/worldrenderer/iworld.h:39 */
	virtual void Init(IWorld* , ISceneWorld* );
	/* ../public/worldrenderer/iworld.h:40 */
	virtual void CreateAndDispatchLoadRequests(IWorld* , const Vector& );
	/* ../public/worldrenderer/iworld.h:41 */
	virtual void Shutdown(IWorld* );
	/* ../public/worldrenderer/iworld.h:44 */
	virtual int GetNumNodes(IWorld* );
	/* ../public/worldrenderer/iworld.h:45 */
	virtual const WorldBuilderParams_t* GetBuilderParams(IWorld* );
	/* ../public/worldrenderer/iworld.h:46 */
	virtual bool IsAncestor(IWorld* , int, int);
	/* ../public/worldrenderer/iworld.h:47 */
	virtual const NodeData_t* GetNodeData(IWorld* , int);
	/* ../public/worldrenderer/iworld.h:48 */
	virtual AABB_t GetNodeBounds(IWorld* , int);
	/* ../public/worldrenderer/iworld.h:49 */
	virtual float GetNodeMinDistance(IWorld* , int);
	/* ../public/worldrenderer/iworld.h:50 */
	virtual void SetWorldTransform(IWorld* , const matrix3x4a_t& );
	/* ../public/worldrenderer/iworld.h:51 */
	virtual const matrix3x4a_t& GetWorldTransform(IWorld* );
	/* ../public/worldrenderer/iworld.h:52 */
	virtual void SetLoadSun(IWorld* , bool);
	/* ../public/worldrenderer/iworld.h:53 */
	virtual bool GetLoadSun(IWorld* );
	/* ../public/worldrenderer/iworld.h:56 */
	virtual void ClearOutstandingLoadRequests(IWorld* );
	/* ../public/worldrenderer/iworld.h:59 */
	virtual void PrecacheAllWorldNodes(IWorld* , WorldNodeFlags_t, ResourceManifestLoadBehavior_t, bool);
	/* ../public/worldrenderer/iworld.h:62 */
	virtual const CUtlVector<const CEntityKeyValues*, CUtlMemory<const CEntityKeyValues*, int> >* GetEntityList(IWorld* , const char* );
	/* ../public/worldrenderer/iworld.h:65 */
	virtual bool HasInvalidBakedLighting(const IWorld* );
	/* ../public/worldrenderer/iworld.h:66 */
	virtual bool HasPreviewBakedLighting(const IWorld* );
	/* ../public/worldrenderer/iworld.h:67 */
	virtual const CSceneSystemBakedLightingInfo* BakedLightingInfo(const IWorld* );
	void IWorld(class IWorld *, class IWorld &); /* linkage=_ZN6IWorldC4EOS_ */
	void IWorld(class IWorld *, const class IWorld  &); /* linkage=_ZN6IWorldC4ERKS_ */
	void IWorld(class IWorld *); /* linkage=_ZN6IWorldC4Ev */
	void ~IWorld(class IWorld *); /* linkage=_ZN6IWorldD4Ev */
	virtual void Init(class IWorld *, class ISceneWorld *); /* linkage=_ZN6IWorld4InitEP11ISceneWorld */
	virtual void CreateAndDispatchLoadRequests(class IWorld *, const class Vector  &); /* linkage=_ZN6IWorld29CreateAndDispatchLoadRequestsERK6Vector */
	virtual void Shutdown(class IWorld *); /* linkage=_ZN6IWorld8ShutdownEv */
	virtual int GetNumNodes(class IWorld *); /* linkage=_ZN6IWorld11GetNumNodesEv */
	virtual const class WorldBuilderParams_t  * GetBuilderParams(class IWorld *); /* linkage=_ZN6IWorld16GetBuilderParamsEv */
	virtual bool IsAncestor(class IWorld *, int, int); /* linkage=_ZN6IWorld10IsAncestorEii */
	virtual const class NodeData_t  * GetNodeData(class IWorld *, int); /* linkage=_ZN6IWorld11GetNodeDataEi */
	virtual class AABB_t GetNodeBounds(class IWorld *, int); /* linkage=_ZN6IWorld13GetNodeBoundsEi */
	virtual float GetNodeMinDistance(class IWorld *, int); /* linkage=_ZN6IWorld18GetNodeMinDistanceEi */
	virtual void SetWorldTransform(class IWorld *, const class matrix3x4a_t  &); /* linkage=_ZN6IWorld17SetWorldTransformERK12matrix3x4a_t */
	virtual const class matrix3x4a_t  & GetWorldTransform(class IWorld *); /* linkage=_ZN6IWorld17GetWorldTransformEv */
	virtual void SetLoadSun(class IWorld *, bool); /* linkage=_ZN6IWorld10SetLoadSunEb */
	virtual bool GetLoadSun(class IWorld *); /* linkage=_ZN6IWorld10GetLoadSunEv */
	virtual void ClearOutstandingLoadRequests(class IWorld *); /* linkage=_ZN6IWorld28ClearOutstandingLoadRequestsEv */
	virtual void PrecacheAllWorldNodes(class IWorld *, enum WorldNodeFlags_t, enum ResourceManifestLoadBehavior_t, bool); /* linkage=_ZN6IWorld21PrecacheAllWorldNodesE16WorldNodeFlags_t30ResourceManifestLoadBehavior_tb */
	virtual const class CUtlVector<const CEntityKeyValues*, CUtlMemory<const CEntityKeyValues*, int> >  * GetEntityList(class IWorld *, const char  *); /* linkage=_ZN6IWorld13GetEntityListEPKc */
	virtual bool HasInvalidBakedLighting(const class IWorld  *); /* linkage=_ZNK6IWorld23HasInvalidBakedLightingEv */
	virtual bool HasPreviewBakedLighting(const class IWorld  *); /* linkage=_ZNK6IWorld23HasPreviewBakedLightingEv */
	virtual const class CSceneSystemBakedLightingInfo  * BakedLightingInfo(const class IWorld  *); /* linkage=_ZNK6IWorld17BakedLightingInfoEv */
};

