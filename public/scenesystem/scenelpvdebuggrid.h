
//
// public/scenesystem/scenelpvdebuggrid.h
//
//	referenced by: libengine2.so
//
//	function: 1
//	classes: 2
//

// <03925BF2> ../public/scenesystem/scenelpvdebuggrid.h:9
// member functions: 8
// member variables: 6
// class size: 272
class CSceneLPVDebugGridObject : public CSceneObject {
public:
	/* class CSceneObject <ancestor>; */ /* 0 240 */
	void CSceneLPVDebugGridObject(CSceneLPVDebugGridObject* , const CSceneLPVDebugGridObject& );
	/* ../scenesystem/scenelpvdebuggrid.cpp:57 */
	void CSceneLPVDebugGridObject(CSceneLPVDebugGridObject* );
	/* ../scenesystem/scenelpvdebuggrid.cpp:66 */
	virtual void ~CSceneLPVDebugGridObject(CSceneLPVDebugGridObject* );
	/* ../scenesystem/scenelpvdebuggrid.cpp:79 */
	bool NeedsVertexBuffer(const CSceneLPVDebugGridObject* );
	CSceneLightProbeVolumeObject * m_pVolume; /* 232 8 */
	VertexBufferHandle_t m_hCurrentVB; /* 240 8 */
	int m_nVertexCount; /* 248 4 */
	bool m_bUseBalls; /* 252 1 */
	float m_flSampleSize; /* 256 4 */
	void CSceneLPVDebugGridObject(class CSceneLPVDebugGridObject *, const class CSceneLPVDebugGridObject  &); /* linkage=_ZN24CSceneLPVDebugGridObjectC4ERKS_ */
	void CSceneLPVDebugGridObject(class CSceneLPVDebugGridObject *); /* linkage=_ZN24CSceneLPVDebugGridObjectC4Ev */
	virtual void ~CSceneLPVDebugGridObject(class CSceneLPVDebugGridObject *); /* linkage=_ZN24CSceneLPVDebugGridObjectD4Ev */
	/* <394053d> ../scenesystem/scenelpvdebuggrid.cpp:79 */
	bool NeedsVertexBuffer(const class CSceneLPVDebugGridObject  *); /* linkage=_ZNK24CSceneLPVDebugGridObject17NeedsVertexBufferEv */
} __attribute__((__aligned__(16)));

// <03925AE6> ../public/scenesystem/scenelpvdebuggrid.h:25
// member functions: 3
// member variable: 1
// vtable entries: 3
// class size: 8
class CSceneLPVDebugGridObjectDesc : public ISceneObjectDescBase<CSceneLPVDebugGridObject> {
public:
	/* class ISceneObjectDescBase<CSceneLPVDebugGridObject> <ancestor>; */ /* 0 8 */
	/* ../public/scenesystem/scenelpvdebuggrid.h:29 */
	virtual const char* GetTypeName(CSceneLPVDebugGridObjectDesc* );
	/* ../scenesystem/scenelpvdebuggrid.cpp:93 */
	virtual CSceneObject* Create(CSceneLPVDebugGridObjectDesc* );
	/* ../scenesystem/scenelpvdebuggrid.cpp:105 */
	virtual void DrawArray(CSceneLPVDebugGridObjectDesc* , IRenderContext* , CMeshDrawPrimitive_t* , int, const ISceneView* , ISceneLayer* , SceneSystemPerFrameStats_t& );
};

// <03939315> ../public/scenesystem/scenelpvdebuggrid.h:29
void CSceneLPVDebugGridObjectDesc::GetTypeName()
{
} /* size: 12 */

