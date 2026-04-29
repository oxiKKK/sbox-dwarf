
//
// scenesystem/timestampmgr.h
//
//	referenced by: libengine2.so
//
//	functions: 13
//	class: 1
//	struct: 1
//

// <02DDA941> ../scenesystem/timestampmgr.h:35
// member functions: 2
// member variables: 9
// struct size: 120
struct SceneViewTimestampQuery_t {
	/* ../scenesystem/timestampmgr.h:37 */
	void SceneViewTimestampQuery_t(SceneViewTimestampQuery_t* );
	/* ../scenesystem/timestampmgr.h:47 */
	void ~SceneViewTimestampQuery_t(SceneViewTimestampQuery_t* );
	CUtlString m_sMarkerName; /* 0 8 */
	CUtlStringToken m_nMarkerNameToken; /* 8 4 */
	RenderQueryHandle_t m_hTimestampQuery; /* 16 8 */
	RenderQueryHandle_t m_hPipelineStatsQuery; /* 24 8 */
	bool m_bWasIssued; /* 32 1 */
	bool m_bAvailable; /* 33 1 */
	bool m_bWasPipelineStatsIssued; /* 34 1 */
	uint64 m_nValue; /* 40 8 */
	RenderQueryPipelineStatistics_t m_pipelineStats; /* 48 72 */
};

// <03887F52> ../scenesystem/timestampmgr.h:37
void SceneViewTimestampQuery_t::SceneViewTimestampQuery_t()
{
} /* size: 0 */

// <03887F39> ../scenesystem/timestampmgr.h:37
inline void SceneViewTimestampQuery_t::SceneViewTimestampQuery_t()
{
} /* size: 0 */

// <03887F22> ../scenesystem/timestampmgr.h:47
void SceneViewTimestampQuery_t::~SceneViewTimestampQuery_t()
{
} /* size: 0 */

// <03887F09> ../scenesystem/timestampmgr.h:47
inline void SceneViewTimestampQuery_t::~SceneViewTimestampQuery_t()
{
} /* size: 0 */

// <038526D2> ../scenesystem/timestampmgr.h:76
// member functions: 36
// member variables: 7
// class size: 3,168
class CTimestampManager {
	/* ../scenesystem/timestampmgr.h:122 */
	struct TimestampSceneViewData_t {
		CUtlString m_sViewName; /* 0 8 */
		SwapChainHandle_t m_hSwapChain; /* 8 8 */
		CUtlVector<SceneViewTimestampQuery_t*, CUtlMemory<SceneViewTimestampQuery_t*, int> > m_queryList; /* 16 32 */
		void ~TimestampSceneViewData_t(TimestampSceneViewData_t* );
		void TimestampSceneViewData_t(TimestampSceneViewData_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../scenesystem/timestampmgr.h:130 */
	struct TimestampFrameData_t {
		CThreadRWLock m_timestampRWLock; /* 0 344 */
		bool m_bAllAvailable; /* 344 1 */
		CUtlVector<CTimestampManager::TimestampSceneViewData_t, CUtlMemory<CTimestampManager::TimestampSceneViewData_t, int> > m_timestampViewData; /* 352 32 */
		void ~TimestampFrameData_t(TimestampFrameData_t* );
		void TimestampFrameData_t(TimestampFrameData_t* );
	};
	void CTimestampManager(CTimestampManager* , const CTimestampManager& );
	int ()(void) * * _vptr.CTimestampManager; /* 0 8 */
	/* ../scenesystem/timestampmgr.cpp:36 */
	void CTimestampManager(CTimestampManager* );
	/* ../scenesystem/timestampmgr.cpp:43 */
	virtual void ~CTimestampManager(CTimestampManager* );
	/* ../scenesystem/timestampmgr.h:82 */
	void Init(CTimestampManager* );
	/* ../scenesystem/timestampmgr.h:83 */
	void Shutdown(CTimestampManager* );
	/* ../scenesystem/timestampmgr.cpp:49 */
	SceneViewTimestampQuery_t* AllocateTimestampQuery(CTimestampManager* , const char* );
	/* ../scenesystem/timestampmgr.cpp:95 */
	void IssueTimestampQuery(CTimestampManager* , IRenderContext* , SceneViewTimestampQuery_t* );
	/* ../scenesystem/timestampmgr.cpp:105 */
	void BeginPipelineStatsQuery(CTimestampManager* , IRenderContext* , SceneViewTimestampQuery_t* );
	/* ../scenesystem/timestampmgr.cpp:116 */
	void EndPipelineStatsQuery(CTimestampManager* , IRenderContext* , SceneViewTimestampQuery_t* );
	/* ../scenesystem/timestampmgr.cpp:128 */
	void ManageGlobalTimestamps(CTimestampManager* );
	/* ../scenesystem/timestampmgr.cpp:177 */
	void ManageSceneViewTimestamps(CTimestampManager* , CSceneView* );
	/* ../scenesystem/timestampmgr.cpp:223 */
	void StartNewFrame(CTimestampManager* );
	/* ../scenesystem/timestampmgr.cpp:234 */
	void CollectTimestamps(CTimestampManager* );
	/* ../scenesystem/timestampmgr.cpp:405 */
	void GetMostRecentFrameSummary(CTimestampManager* , SwapChainHandle_t, CUtlVector<SceneSystemTimestampFrameData_t, CUtlMemory<SceneSystemTimestampFrameData_t, int> >& );
	/* ../scenesystem/timestampmgr.cpp:76 */
	void RecycleTimestampQuery(CTimestampManager* , SceneViewTimestampQuery_t* );
	/* ../scenesystem/timestampmgr.cpp:87 */
	void AddManagedTimestampQuery(CTimestampManager* , SceneViewTimestampQuery_t* );
private:
	CThreadFastMutex m_managedTimestampMutex; /* 8 24 */
	CUtlVector<SceneViewTimestampQuery_t*, CUtlMemory<SceneViewTimestampQuery_t*, int> > m_pendingManagedTimestamps; /* 32 32 */
	TimestampFrameData_t m_timestampFrameData[8]; /* 64 3072 */
	uint32 m_nCurrentTimestampIssueIndex; /* 3136 4 */
	uint32 m_nCurrentTimestampReadIndex; /* 3140 4 */
	CTSPool<SceneViewTimestampQuery_t> m_timestampQueryPool __attribute__((__aligned__(16))); /* 3152 16 */
	void CTimestampManager(class CTimestampManager *, const class CTimestampManager  &); /* linkage=_ZN17CTimestampManagerC4ERKS_ */
	void CTimestampManager(class CTimestampManager *); /* linkage=_ZN17CTimestampManagerC4Ev */
	virtual void ~CTimestampManager(class CTimestampManager *); /* linkage=_ZN17CTimestampManagerD4Ev */
	void Init(class CTimestampManager *); /* linkage=_ZN17CTimestampManager4InitEv */
	void Shutdown(class CTimestampManager *); /* linkage=_ZN17CTimestampManager8ShutdownEv */
	class SceneViewTimestampQuery_t * AllocateTimestampQuery(class CTimestampManager *, const char  *); /* linkage=_ZN17CTimestampManager22AllocateTimestampQueryEPKc */
	void IssueTimestampQuery(class CTimestampManager *, class IRenderContext *, class SceneViewTimestampQuery_t *); /* linkage=_ZN17CTimestampManager19IssueTimestampQueryEP14IRenderContextP25SceneViewTimestampQuery_t */
	void BeginPipelineStatsQuery(class CTimestampManager *, class IRenderContext *, class SceneViewTimestampQuery_t *); /* linkage=_ZN17CTimestampManager23BeginPipelineStatsQueryEP14IRenderContextP25SceneViewTimestampQuery_t */
	void EndPipelineStatsQuery(class CTimestampManager *, class IRenderContext *, class SceneViewTimestampQuery_t *); /* linkage=_ZN17CTimestampManager21EndPipelineStatsQueryEP14IRenderContextP25SceneViewTimestampQuery_t */
	void ManageGlobalTimestamps(class CTimestampManager *); /* linkage=_ZN17CTimestampManager22ManageGlobalTimestampsEv */
	void ManageSceneViewTimestamps(class CTimestampManager *, class CSceneView *); /* linkage=_ZN17CTimestampManager25ManageSceneViewTimestampsEP10CSceneView */
	void StartNewFrame(class CTimestampManager *); /* linkage=_ZN17CTimestampManager13StartNewFrameEv */
	void CollectTimestamps(class CTimestampManager *); /* linkage=_ZN17CTimestampManager17CollectTimestampsEv */
	void GetMostRecentFrameSummary(class CTimestampManager *, SwapChainHandle_t, class CUtlVector<SceneSystemTimestampFrameData_t, CUtlMemory<SceneSystemTimestampFrameData_t, int> > &); /* linkage=_ZN17CTimestampManager25GetMostRecentFrameSummaryEP19SwapChainHandle_t__R10CUtlVectorI31SceneSystemTimestampFrameData_t10CUtlMemoryIS3_iEE */
	/* <38896f2> ../scenesystem/timestampmgr.cpp:76 */
	void RecycleTimestampQuery(class CTimestampManager *, class SceneViewTimestampQuery_t *); /* linkage=_ZN17CTimestampManager21RecycleTimestampQueryEP25SceneViewTimestampQuery_t */
	void AddManagedTimestampQuery(class CTimestampManager *, class SceneViewTimestampQuery_t *); /* linkage=_ZN17CTimestampManager24AddManagedTimestampQueryEP25SceneViewTimestampQuery_t */
} __attribute__((__aligned__(16)));

// <02E0EEC5> ../scenesystem/timestampmgr.h:79
void CTimestampManager::CTimestampManager()
{
} /* size: 0 */

// <03879D65> ../scenesystem/timestampmgr.h:122
void TimestampSceneViewData_t::TimestampSceneViewData_t()
{
} /* size: 0 */

// <03879D48> ../scenesystem/timestampmgr.h:122
inline void TimestampSceneViewData_t::TimestampSceneViewData_t()
{
} /* size: 0 */

// <03879CDE> ../scenesystem/timestampmgr.h:122
void TimestampSceneViewData_t::~TimestampSceneViewData_t()
{
} /* size: 0 */

// <03879CC1> ../scenesystem/timestampmgr.h:122
inline void TimestampSceneViewData_t::~TimestampSceneViewData_t()
{
} /* size: 0 */

// <0388254C> ../scenesystem/timestampmgr.h:130
void TimestampFrameData_t::TimestampFrameData_t()
{
} /* size: 0 */

// <0388252F> ../scenesystem/timestampmgr.h:130
inline void TimestampFrameData_t::TimestampFrameData_t()
{
} /* size: 0 */

// <03882518> ../scenesystem/timestampmgr.h:130
void TimestampFrameData_t::~TimestampFrameData_t()
{
} /* size: 0 */

// <038824FB> ../scenesystem/timestampmgr.h:130
inline void TimestampFrameData_t::~TimestampFrameData_t()
{
} /* size: 0 */

