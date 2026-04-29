
//
// engine2/debugvisualizer.h
//
//	referenced by: libengine2.so
//
//	functions: 4
//	class: 1
//

// <0005DC8A> engine2/debugvisualizer.h:15
// member functions: 23
// member variables: 3
// vtable entries: 8
// class size: 48
class CDebugVisualizerMgr : public IDebugVisualizerMgr {
	/* engine2/debugvisualizer.h:34 */
	struct DebugVisElement_t {
		IDebugVisualizer * m_pVisualizer; /* 0 8 */
		CUtlStringToken m_nVisualizerName; /* 8 4 */
		void DebugVisElement_t(DebugVisElement_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
public:
	/* class IDebugVisualizerMgr <ancestor>; */ /* 0 8 */
	void CDebugVisualizerMgr(CDebugVisualizerMgr* , const CDebugVisualizerMgr& );
	/* engine2/debugvisualizer.cpp:14 */
	void CDebugVisualizerMgr(CDebugVisualizerMgr* );
	/* engine2/debugvisualizer.cpp:18 */
	void ~CDebugVisualizerMgr(CDebugVisualizerMgr* );
	/* engine2/debugvisualizer.cpp:27 */
	virtual int GetDebugVisualizerCount(const CDebugVisualizerMgr* );
	/* engine2/debugvisualizer.cpp:32 */
	virtual void AddDebugVisualizer(CDebugVisualizerMgr* , CUtlStringToken, IDebugVisualizer* );
	/* engine2/debugvisualizer.cpp:39 */
	virtual IDebugVisualizer* RemoveDebugVisualizer(CDebugVisualizerMgr* , CUtlStringToken);
	/* engine2/debugvisualizer.cpp:53 */
	virtual IDebugVisualizer* FindDebugVisualizer(CDebugVisualizerMgr* , CUtlStringToken);
	/* engine2/debugvisualizer.cpp:76 */
	virtual void DebugDraw(CDebugVisualizerMgr* , CFrustum* , ISceneView* , float, float);
	/* engine2/debugvisualizer.cpp:89 */
	virtual void AgeList(CDebugVisualizerMgr* , float, float);
	/* engine2/debugvisualizer.cpp:66 */
	virtual void SetOverlayStartTime(CDebugVisualizerMgr* , float, bool);
	/* engine2/debugvisualizer.cpp:98 */
	virtual void SetTimeDelta(CDebugVisualizerMgr* , float64);
private:
	CUtlVector<CDebugVisualizerMgr::DebugVisElement_t, CUtlMemory<CDebugVisualizerMgr::DebugVisElement_t, int> > m_debugVisualizers; /* 8 32 */
	float64 m_TimeDelta; /* 40 8 */
	void CDebugVisualizerMgr(class CDebugVisualizerMgr *, const class CDebugVisualizerMgr  &); /* linkage=_ZN19CDebugVisualizerMgrC4ERKS_ */
	void CDebugVisualizerMgr(class CDebugVisualizerMgr *); /* linkage=_ZN19CDebugVisualizerMgrC4Ev */
	void ~CDebugVisualizerMgr(class CDebugVisualizerMgr *); /* linkage=_ZN19CDebugVisualizerMgrD4Ev */
	virtual int GetDebugVisualizerCount(const class CDebugVisualizerMgr  *); /* linkage=_ZNK19CDebugVisualizerMgr23GetDebugVisualizerCountEv */
	virtual void AddDebugVisualizer(class CDebugVisualizerMgr *, class CUtlStringToken, class IDebugVisualizer *); /* linkage=_ZN19CDebugVisualizerMgr18AddDebugVisualizerE15CUtlStringTokenP16IDebugVisualizer */
	virtual class IDebugVisualizer * RemoveDebugVisualizer(class CDebugVisualizerMgr *, class CUtlStringToken); /* linkage=_ZN19CDebugVisualizerMgr21RemoveDebugVisualizerE15CUtlStringToken */
	virtual class IDebugVisualizer * FindDebugVisualizer(class CDebugVisualizerMgr *, class CUtlStringToken); /* linkage=_ZN19CDebugVisualizerMgr19FindDebugVisualizerE15CUtlStringToken */
	/* <6687b> engine2/debugvisualizer.cpp:76 */
	virtual void DebugDraw(class CDebugVisualizerMgr *, class CFrustum *, class ISceneView *, float, float); /* linkage=_ZN19CDebugVisualizerMgr9DebugDrawEP8CFrustumP10ISceneViewff */
	virtual void AgeList(class CDebugVisualizerMgr *, float, float); /* linkage=_ZN19CDebugVisualizerMgr7AgeListEff */
	virtual void SetOverlayStartTime(class CDebugVisualizerMgr *, float, bool); /* linkage=_ZN19CDebugVisualizerMgr19SetOverlayStartTimeEfb */
	virtual void SetTimeDelta(class CDebugVisualizerMgr *, float64); /* linkage=_ZN19CDebugVisualizerMgr12SetTimeDeltaEd */
};

// <0022911B> engine2/debugvisualizer.h:18
void CDebugVisualizerMgr::CDebugVisualizerMgr()
{
} /* size: 0 */

// <0022889B> engine2/debugvisualizer.h:19
void CDebugVisualizerMgr::~CDebugVisualizerMgr()
{
} /* size: 0 */

// <00060F89> engine2/debugvisualizer.h:34
void DebugVisElement_t::DebugVisElement_t()
{
} /* size: 0 */

// <00060F6C> engine2/debugvisualizer.h:34
inline void DebugVisElement_t::DebugVisElement_t()
{
} /* size: 0 */

