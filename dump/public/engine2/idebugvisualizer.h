
//
// public/engine2/idebugvisualizer.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//
//	functions: 17
//	classes: 4
//

// <02861D7E> ../public/engine2/idebugvisualizer.h:25
void IDebugVisualizer::IDebugVisualizer()
{
} /* size: 0 */

// <02861D61> ../public/engine2/idebugvisualizer.h:25
inline void IDebugVisualizer::IDebugVisualizer()
{
} /* size: 0 */

// <0005DEE3> ../public/engine2/idebugvisualizer.h:25
// member functions: 12
// member variable: 1
// vtable entries: 3
// class size: 8
class IDebugVisualizer {
	void IDebugVisualizer(IDebugVisualizer* , const IDebugVisualizer& );
	void IDebugVisualizer(IDebugVisualizer* );
	int ()(void) * * _vptr.IDebugVisualizer; /* 0 8 */
	/* ../public/engine2/idebugvisualizer.h:28 */
	virtual void ~IDebugVisualizer(IDebugVisualizer* );
	/* ../public/engine2/idebugvisualizer.h:31 */
	virtual void SetOverlayStartTime(IDebugVisualizer* , float, bool);
	/* ../public/engine2/idebugvisualizer.h:34 */
	virtual void DebugDraw(IDebugVisualizer* , CFrustum* , ISceneView* , float, float);
	/* ../public/engine2/idebugvisualizer.h:35 */
	virtual void AgeList(IDebugVisualizer* , float, float);
	void IDebugVisualizer(class IDebugVisualizer *, const class IDebugVisualizer  &); /* linkage=_ZN16IDebugVisualizerC4ERKS_ */
	void IDebugVisualizer(class IDebugVisualizer *); /* linkage=_ZN16IDebugVisualizerC4Ev */
	virtual void ~IDebugVisualizer(class IDebugVisualizer *); /* linkage=_ZN16IDebugVisualizerD4Ev */
	virtual void SetOverlayStartTime(class IDebugVisualizer *, float, bool); /* linkage=_ZN16IDebugVisualizer19SetOverlayStartTimeEfb */
	virtual void DebugDraw(class IDebugVisualizer *, class CFrustum *, class ISceneView *, float, float); /* linkage=_ZN16IDebugVisualizer9DebugDrawEP8CFrustumP10ISceneViewff */
	virtual void AgeList(class IDebugVisualizer *, float, float); /* linkage=_ZN16IDebugVisualizer7AgeListEff */
};

// <0006264D> ../public/engine2/idebugvisualizer.h:28
void IDebugVisualizer::~IDebugVisualizer()
{
} /* size: 0 */

// <0006261D> ../public/engine2/idebugvisualizer.h:28
inline void IDebugVisualizer::~IDebugVisualizer()
{
} /* size: 0 */

// <0005FB8F> ../public/engine2/idebugvisualizer.h:40
// member functions: 11
// member variables: 2
// vtable entries: 3
// class size: 16
class CDebugVisualizerAbsTime : public IDebugVisualizer {
public:
	/* class IDebugVisualizer <ancestor>; */ /* 0 8 */
	/* ../public/engine2/idebugvisualizer.h:43 */
	void CDebugVisualizerAbsTime(CDebugVisualizerAbsTime* );
	/* ../public/engine2/idebugvisualizer.h:48 */
	virtual void ~CDebugVisualizerAbsTime(CDebugVisualizerAbsTime* );
	/* ../public/engine2/idebugvisualizer.h:53 */
	virtual void SetOverlayStartTime(CDebugVisualizerAbsTime* , float, bool);
	/* ../public/engine2/idebugvisualizer.h:58 */
	virtual void DebugDraw(CDebugVisualizerAbsTime* , CFrustum* , ISceneView* , float, float);
	/* ../public/engine2/idebugvisualizer.h:63 */
	virtual void AgeList(CDebugVisualizerAbsTime* , float, float);
protected:
	ISceneViewDebugOverlays * m_pOverlayList; /* 8 8 */
	void CDebugVisualizerAbsTime(class CDebugVisualizerAbsTime *); /* linkage=_ZN23CDebugVisualizerAbsTimeC4Ev */
	virtual void ~CDebugVisualizerAbsTime(class CDebugVisualizerAbsTime *); /* linkage=_ZN23CDebugVisualizerAbsTimeD4Ev */
	/* <6672b> ../public/engine2/idebugvisualizer.h:53 */
	virtual void SetOverlayStartTime(class CDebugVisualizerAbsTime *, float, bool); /* linkage=_ZN23CDebugVisualizerAbsTime19SetOverlayStartTimeEfb */
	/* <6678a> ../public/engine2/idebugvisualizer.h:58 */
	virtual void DebugDraw(class CDebugVisualizerAbsTime *, class CFrustum *, class ISceneView *, float, float); /* linkage=_ZN23CDebugVisualizerAbsTime9DebugDrawEP8CFrustumP10ISceneViewff */
	/* <66813> ../public/engine2/idebugvisualizer.h:63 */
	virtual void AgeList(class CDebugVisualizerAbsTime *, float, float); /* linkage=_ZN23CDebugVisualizerAbsTime7AgeListEff */
	void CDebugVisualizerAbsTime(class CDebugVisualizerAbsTime *, const class CDebugVisualizerAbsTime  &); /* linkage=_ZN23CDebugVisualizerAbsTimeC4ERKS_ */
};

// <0283DE33> ../public/engine2/idebugvisualizer.h:40
// member functions: 12
// member variables: 2
// vtable entries: 3
// class size: 16
class CDebugVisualizerAbsTime : public IDebugVisualizer {
public:
	/* class IDebugVisualizer <ancestor>; */ /* 0 8 */
	void CDebugVisualizerAbsTime(CDebugVisualizerAbsTime* , const CDebugVisualizerAbsTime& );
	/* ../public/engine2/idebugvisualizer.h:43 */
	void CDebugVisualizerAbsTime(CDebugVisualizerAbsTime* );
	/* ../public/engine2/idebugvisualizer.h:48 */
	virtual void ~CDebugVisualizerAbsTime(CDebugVisualizerAbsTime* );
	/* ../public/engine2/idebugvisualizer.h:53 */
	virtual void SetOverlayStartTime(CDebugVisualizerAbsTime* , float, bool);
	/* ../public/engine2/idebugvisualizer.h:58 */
	virtual void DebugDraw(CDebugVisualizerAbsTime* , CFrustum* , ISceneView* , float, float);
	/* ../public/engine2/idebugvisualizer.h:63 */
	virtual void AgeList(CDebugVisualizerAbsTime* , float, float);
protected:
	ISceneViewDebugOverlays * m_pOverlayList; /* 8 8 */
	void CDebugVisualizerAbsTime(class CDebugVisualizerAbsTime *); /* linkage=_ZN23CDebugVisualizerAbsTimeC4Ev */
	virtual void ~CDebugVisualizerAbsTime(class CDebugVisualizerAbsTime *); /* linkage=_ZN23CDebugVisualizerAbsTimeD4Ev */
	/* <6672b> ../public/engine2/idebugvisualizer.h:53 */
	virtual void SetOverlayStartTime(class CDebugVisualizerAbsTime *, float, bool); /* linkage=_ZN23CDebugVisualizerAbsTime19SetOverlayStartTimeEfb */
	/* <6678a> ../public/engine2/idebugvisualizer.h:58 */
	virtual void DebugDraw(class CDebugVisualizerAbsTime *, class CFrustum *, class ISceneView *, float, float); /* linkage=_ZN23CDebugVisualizerAbsTime9DebugDrawEP8CFrustumP10ISceneViewff */
	/* <66813> ../public/engine2/idebugvisualizer.h:63 */
	virtual void AgeList(class CDebugVisualizerAbsTime *, float, float); /* linkage=_ZN23CDebugVisualizerAbsTime7AgeListEff */
	void CDebugVisualizerAbsTime(class CDebugVisualizerAbsTime *, const class CDebugVisualizerAbsTime  &); /* linkage=_ZN23CDebugVisualizerAbsTimeC4ERKS_ */
};

// <02861D4A> ../public/engine2/idebugvisualizer.h:43
void CDebugVisualizerAbsTime::CDebugVisualizerAbsTime()
{
} /* size: 0 */

// <02861D31> ../public/engine2/idebugvisualizer.h:43
inline void CDebugVisualizerAbsTime::CDebugVisualizerAbsTime()
{
} /* size: 0 */

// <000625EA> ../public/engine2/idebugvisualizer.h:48
void CDebugVisualizerAbsTime::~CDebugVisualizerAbsTime()
{
} /* size: 40 */

// <00062543> ../public/engine2/idebugvisualizer.h:48
// function calls: 2
void CDebugVisualizerAbsTime::~CDebugVisualizerAbsTime()
{
	IDebugVisualizer::~IDebugVisualizer(); // 51
	CDebugVisualizerAbsTime::~CDebugVisualizerAbsTime(); // 51
} /* size: 67, inline expansions: 2 (33 bytes) */

// <0006252A> ../public/engine2/idebugvisualizer.h:48
inline void CDebugVisualizerAbsTime::~CDebugVisualizerAbsTime()
{
} /* size: 0 */

// <0006672B> ../public/engine2/idebugvisualizer.h:53
void CDebugVisualizerAbsTime::SetOverlayStartTime(float flOverlayStartTime, bool bInterpolated)
{
} /* size: 14 */

// <000624F9> ../public/engine2/idebugvisualizer.h:53
inline void CDebugVisualizerAbsTime::SetOverlayStartTime(float flOverlayStartTime, bool bInterpolated)
{
} /* size: 0 */

// <0006678A> ../public/engine2/idebugvisualizer.h:58
void CDebugVisualizerAbsTime::DebugDraw(CFrustum* pFrustum, ISceneView* pView, float flRenderTime, float flTimeStep)
{
} /* size: 29 */

// <000624B0> ../public/engine2/idebugvisualizer.h:58
inline void CDebugVisualizerAbsTime::DebugDraw(CFrustum* pFrustum, ISceneView* pView, float flRenderTime, float flTimeStep)
{
} /* size: 0 */

// <00066813> ../public/engine2/idebugvisualizer.h:63
void CDebugVisualizerAbsTime::AgeList(float flRenderTime, float flTimeStep)
{
} /* size: 29 */

// <0006247F> ../public/engine2/idebugvisualizer.h:63
inline void CDebugVisualizerAbsTime::AgeList(float flRenderTime, float flTimeStep)
{
} /* size: 0 */

// <00062468> ../public/engine2/idebugvisualizer.h:75
void IDebugVisualizerMgr::IDebugVisualizerMgr()
{
} /* size: 0 */

// <0006244B> ../public/engine2/idebugvisualizer.h:75
inline void IDebugVisualizerMgr::IDebugVisualizerMgr()
{
} /* size: 0 */

// <0005F92E> ../public/engine2/idebugvisualizer.h:75
// member functions: 24
// member variable: 1
// vtable entries: 8
// class size: 8
class IDebugVisualizerMgr {
	void IDebugVisualizerMgr(IDebugVisualizerMgr* , IDebugVisualizerMgr& );
	void IDebugVisualizerMgr(IDebugVisualizerMgr* , const IDebugVisualizerMgr& );
	void IDebugVisualizerMgr(IDebugVisualizerMgr* );
	void ~IDebugVisualizerMgr(IDebugVisualizerMgr* );
	int ()(void) * * _vptr.IDebugVisualizerMgr; /* 0 8 */
	/* ../public/engine2/idebugvisualizer.h:78 */
	virtual int GetDebugVisualizerCount(const IDebugVisualizerMgr* );
	/* ../public/engine2/idebugvisualizer.h:79 */
	virtual void AddDebugVisualizer(IDebugVisualizerMgr* , CUtlStringToken, IDebugVisualizer* );
	/* ../public/engine2/idebugvisualizer.h:80 */
	virtual IDebugVisualizer* RemoveDebugVisualizer(IDebugVisualizerMgr* , CUtlStringToken);
	/* ../public/engine2/idebugvisualizer.h:81 */
	virtual IDebugVisualizer* FindDebugVisualizer(IDebugVisualizerMgr* , CUtlStringToken);
	/* ../public/engine2/idebugvisualizer.h:84 */
	virtual void SetOverlayStartTime(IDebugVisualizerMgr* , float, bool);
	/* ../public/engine2/idebugvisualizer.h:87 */
	virtual void DebugDraw(IDebugVisualizerMgr* , CFrustum* , ISceneView* , float, float);
	/* ../public/engine2/idebugvisualizer.h:88 */
	virtual void AgeList(IDebugVisualizerMgr* , float, float);
	/* ../public/engine2/idebugvisualizer.h:89 */
	virtual void SetTimeDelta(IDebugVisualizerMgr* , float64);
	void IDebugVisualizerMgr(class IDebugVisualizerMgr *, class IDebugVisualizerMgr &); /* linkage=_ZN19IDebugVisualizerMgrC4EOS_ */
	void IDebugVisualizerMgr(class IDebugVisualizerMgr *, const class IDebugVisualizerMgr  &); /* linkage=_ZN19IDebugVisualizerMgrC4ERKS_ */
	void IDebugVisualizerMgr(class IDebugVisualizerMgr *); /* linkage=_ZN19IDebugVisualizerMgrC4Ev */
	void ~IDebugVisualizerMgr(class IDebugVisualizerMgr *); /* linkage=_ZN19IDebugVisualizerMgrD4Ev */
	virtual int GetDebugVisualizerCount(const class IDebugVisualizerMgr  *); /* linkage=_ZNK19IDebugVisualizerMgr23GetDebugVisualizerCountEv */
	virtual void AddDebugVisualizer(class IDebugVisualizerMgr *, class CUtlStringToken, class IDebugVisualizer *); /* linkage=_ZN19IDebugVisualizerMgr18AddDebugVisualizerE15CUtlStringTokenP16IDebugVisualizer */
	virtual class IDebugVisualizer * RemoveDebugVisualizer(class IDebugVisualizerMgr *, class CUtlStringToken); /* linkage=_ZN19IDebugVisualizerMgr21RemoveDebugVisualizerE15CUtlStringToken */
	virtual class IDebugVisualizer * FindDebugVisualizer(class IDebugVisualizerMgr *, class CUtlStringToken); /* linkage=_ZN19IDebugVisualizerMgr19FindDebugVisualizerE15CUtlStringToken */
	virtual void SetOverlayStartTime(class IDebugVisualizerMgr *, float, bool); /* linkage=_ZN19IDebugVisualizerMgr19SetOverlayStartTimeEfb */
	virtual void DebugDraw(class IDebugVisualizerMgr *, class CFrustum *, class ISceneView *, float, float); /* linkage=_ZN19IDebugVisualizerMgr9DebugDrawEP8CFrustumP10ISceneViewff */
	virtual void AgeList(class IDebugVisualizerMgr *, float, float); /* linkage=_ZN19IDebugVisualizerMgr7AgeListEff */
	virtual void SetTimeDelta(class IDebugVisualizerMgr *, float64); /* linkage=_ZN19IDebugVisualizerMgr12SetTimeDeltaEd */
};

