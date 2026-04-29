
//
// rendersystem/occlusionquerymgr.h
//
//	referenced by: librendersystemempty.so
//				   librendersystemvulkan.so
//
//	functions: 4
//	classes: 2
//

// <00078336> rendersystem/occlusionquerymgr.h:32
// variables: 2
// function calls: 4
void COcclusionQueryMgr::~COcclusionQueryMgr()
{
	{
		BlockHeader_t* pbh; // 338
		{
			BlockHeader_t* pFree; // 340
		}
	}
	CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >::Purge(); // 167
	CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >::~CUtlFixedMemory(); // 462
	~CUtlLinkedList(const CUtlLinkedList<COcclusionQueryMgr::OcclusionQueryObject_t, long long int, true, long long int, CUtlFixedMemory<UtlL this); // 400
	CUtlFixedLinkedList<COcclusionQueryMgr::OcclusionQueryObject_t>::~CUtlFixedLinkedList(); // 32
} /* size: 54, inline expansions: 4 (118 bytes) */

// <00078319> rendersystem/occlusionquerymgr.h:32
inline void COcclusionQueryMgr::~COcclusionQueryMgr()
{
} /* size: 0 */

// <000766B8> rendersystem/occlusionquerymgr.h:32
// member functions: 29
// member variables: 3
// class size: 112
class COcclusionQueryMgr {
	/* rendersystem/occlusionquerymgr.h:67 */
	struct OcclusionQueryObject_t {
		RenderQueryHandle_t m_QueryHandle[4]; /* 0 32 */
		int m_LastResult; /* 32 4 */
		int m_nFrameIssued; /* 36 4 */
		int m_nCurrentIssue; /* 40 4 */
		bool m_bHasBeenIssued[4]; /* 44 4 */
		/* rendersystem/occlusionquerymgr.h:75 */
		void OcclusionQueryObject_t(OcclusionQueryObject_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* rendersystem/occlusionquerymgr.h:35 */
	void COcclusionQueryMgr(COcclusionQueryMgr* );
	/* rendersystem/occlusionquerymgr.h:38 */
	OcclusionQueryObjectHandle_t CreateOcclusionQueryObject(COcclusionQueryMgr* );
	/* rendersystem/occlusionquerymgr.h:39 */
	void OnCreateOcclusionQueryObject(COcclusionQueryMgr* , OcclusionQueryObjectHandle_t);
	/* rendersystem/occlusionquerymgr.h:40 */
	void DestroyOcclusionQueryObject(COcclusionQueryMgr* , OcclusionQueryObjectHandle_t);
	/* rendersystem/occlusionquerymgr.h:45 */
	bool BeginOcclusionQueryDrawing(COcclusionQueryMgr* , OcclusionQueryObjectHandle_t, IRenderContext* );
	/* rendersystem/occlusionquerymgr.h:46 */
	void EndOcclusionQueryDrawing(COcclusionQueryMgr* , OcclusionQueryObjectHandle_t, IRenderContext* );
	/* rendersystem/occlusionquerymgr.h:49 */
	void ResetOcclusionQueryObject(COcclusionQueryMgr* , OcclusionQueryObjectHandle_t);
	/* rendersystem/occlusionquerymgr.h:53 */
	int OcclusionQuery_GetNumPixelsRendered(COcclusionQueryMgr* , OcclusionQueryObjectHandle_t, bool);
	/* rendersystem/occlusionquerymgr.h:54 */
	void OcclusionQuery_IssueNumPixelsRenderedQuery(COcclusionQueryMgr* , OcclusionQueryObjectHandle_t);
	/* rendersystem/occlusionquerymgr.h:57 */
	void AllocOcclusionQueryObjects(COcclusionQueryMgr* );
	/* rendersystem/occlusionquerymgr.h:58 */
	void FreeOcclusionQueryObjects(COcclusionQueryMgr* );
	/* rendersystem/occlusionquerymgr.h:61 */
	void AdvanceFrame(COcclusionQueryMgr* );
private:
	/* rendersystem/occlusionquerymgr.h:89 */
	void FlushQuery(COcclusionQueryMgr* , OcclusionQueryObjectHandle_t, int);
	CUtlFixedLinkedList<COcclusionQueryMgr::OcclusionQueryObject_t> m_OcclusionQueryObjects; /* 0 80 */
	CThreadFastMutex m_Mutex; /* 80 24 */
	int m_nFrameCount; /* 104 4 */
	void ~COcclusionQueryMgr(COcclusionQueryMgr* );
	void COcclusionQueryMgr(class COcclusionQueryMgr *); /* linkage=_ZN18COcclusionQueryMgrC4Ev */
	OcclusionQueryObjectHandle_t CreateOcclusionQueryObject(class COcclusionQueryMgr *); /* linkage=_ZN18COcclusionQueryMgr26CreateOcclusionQueryObjectEv */
	void OnCreateOcclusionQueryObject(class COcclusionQueryMgr *, OcclusionQueryObjectHandle_t); /* linkage=_ZN18COcclusionQueryMgr28OnCreateOcclusionQueryObjectEP30OcclusionQueryObjectHandle_t__ */
	void DestroyOcclusionQueryObject(class COcclusionQueryMgr *, OcclusionQueryObjectHandle_t); /* linkage=_ZN18COcclusionQueryMgr27DestroyOcclusionQueryObjectEP30OcclusionQueryObjectHandle_t__ */
	bool BeginOcclusionQueryDrawing(class COcclusionQueryMgr *, OcclusionQueryObjectHandle_t, class IRenderContext *); /* linkage=_ZN18COcclusionQueryMgr26BeginOcclusionQueryDrawingEP30OcclusionQueryObjectHandle_t__P14IRenderContext */
	void EndOcclusionQueryDrawing(class COcclusionQueryMgr *, OcclusionQueryObjectHandle_t, class IRenderContext *); /* linkage=_ZN18COcclusionQueryMgr24EndOcclusionQueryDrawingEP30OcclusionQueryObjectHandle_t__P14IRenderContext */
	void ResetOcclusionQueryObject(class COcclusionQueryMgr *, OcclusionQueryObjectHandle_t); /* linkage=_ZN18COcclusionQueryMgr25ResetOcclusionQueryObjectEP30OcclusionQueryObjectHandle_t__ */
	int OcclusionQuery_GetNumPixelsRendered(class COcclusionQueryMgr *, OcclusionQueryObjectHandle_t, bool); /* linkage=_ZN18COcclusionQueryMgr35OcclusionQuery_GetNumPixelsRenderedEP30OcclusionQueryObjectHandle_t__b */
	void OcclusionQuery_IssueNumPixelsRenderedQuery(class COcclusionQueryMgr *, OcclusionQueryObjectHandle_t); /* linkage=_ZN18COcclusionQueryMgr42OcclusionQuery_IssueNumPixelsRenderedQueryEP30OcclusionQueryObjectHandle_t__ */
	void AllocOcclusionQueryObjects(class COcclusionQueryMgr *); /* linkage=_ZN18COcclusionQueryMgr26AllocOcclusionQueryObjectsEv */
	void FreeOcclusionQueryObjects(class COcclusionQueryMgr *); /* linkage=_ZN18COcclusionQueryMgr25FreeOcclusionQueryObjectsEv */
	void AdvanceFrame(class COcclusionQueryMgr *); /* linkage=_ZN18COcclusionQueryMgr12AdvanceFrameEv */
	/* <7c4ab> rendersystem/occlusionquerymgr.cpp:48 */
	void FlushQuery(class COcclusionQueryMgr *, OcclusionQueryObjectHandle_t, int); /* linkage=_ZN18COcclusionQueryMgr10FlushQueryEP30OcclusionQueryObjectHandle_t__i */
	void ~COcclusionQueryMgr(class COcclusionQueryMgr *); /* linkage=_ZN18COcclusionQueryMgrD4Ev */
};

// <000E43F7> rendersystem/occlusionquerymgr.h:32
// member functions: 28
// member variables: 3
// class size: 112
class COcclusionQueryMgr {
	/* rendersystem/occlusionquerymgr.h:67 */
	struct OcclusionQueryObject_t {
		RenderQueryHandle_t m_QueryHandle[4]; /* 0 32 */
		int m_LastResult; /* 32 4 */
		int m_nFrameIssued; /* 36 4 */
		int m_nCurrentIssue; /* 40 4 */
		bool m_bHasBeenIssued[4]; /* 44 4 */
		/* rendersystem/occlusionquerymgr.h:75 */
		void OcclusionQueryObject_t(OcclusionQueryObject_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* rendersystem/occlusionquerymgr.h:35 */
	void COcclusionQueryMgr(COcclusionQueryMgr* );
	/* rendersystem/occlusionquerymgr.h:38 */
	OcclusionQueryObjectHandle_t CreateOcclusionQueryObject(COcclusionQueryMgr* );
	/* rendersystem/occlusionquerymgr.h:39 */
	void OnCreateOcclusionQueryObject(COcclusionQueryMgr* , OcclusionQueryObjectHandle_t);
	/* rendersystem/occlusionquerymgr.h:40 */
	void DestroyOcclusionQueryObject(COcclusionQueryMgr* , OcclusionQueryObjectHandle_t);
	/* rendersystem/occlusionquerymgr.h:45 */
	bool BeginOcclusionQueryDrawing(COcclusionQueryMgr* , OcclusionQueryObjectHandle_t, IRenderContext* );
	/* rendersystem/occlusionquerymgr.h:46 */
	void EndOcclusionQueryDrawing(COcclusionQueryMgr* , OcclusionQueryObjectHandle_t, IRenderContext* );
	/* rendersystem/occlusionquerymgr.h:49 */
	void ResetOcclusionQueryObject(COcclusionQueryMgr* , OcclusionQueryObjectHandle_t);
	/* rendersystem/occlusionquerymgr.h:53 */
	int OcclusionQuery_GetNumPixelsRendered(COcclusionQueryMgr* , OcclusionQueryObjectHandle_t, bool);
	/* rendersystem/occlusionquerymgr.h:54 */
	void OcclusionQuery_IssueNumPixelsRenderedQuery(COcclusionQueryMgr* , OcclusionQueryObjectHandle_t);
	/* rendersystem/occlusionquerymgr.h:57 */
	void AllocOcclusionQueryObjects(COcclusionQueryMgr* );
	/* rendersystem/occlusionquerymgr.h:58 */
	void FreeOcclusionQueryObjects(COcclusionQueryMgr* );
	/* rendersystem/occlusionquerymgr.h:61 */
	void AdvanceFrame(COcclusionQueryMgr* );
private:
	/* rendersystem/occlusionquerymgr.h:89 */
	void FlushQuery(COcclusionQueryMgr* , OcclusionQueryObjectHandle_t, int);
	CUtlFixedLinkedList<COcclusionQueryMgr::OcclusionQueryObject_t> m_OcclusionQueryObjects; /* 0 80 */
	CThreadFastMutex m_Mutex; /* 80 24 */
	int m_nFrameCount; /* 104 4 */
	void COcclusionQueryMgr(class COcclusionQueryMgr *); /* linkage=_ZN18COcclusionQueryMgrC4Ev */
	OcclusionQueryObjectHandle_t CreateOcclusionQueryObject(class COcclusionQueryMgr *); /* linkage=_ZN18COcclusionQueryMgr26CreateOcclusionQueryObjectEv */
	void OnCreateOcclusionQueryObject(class COcclusionQueryMgr *, OcclusionQueryObjectHandle_t); /* linkage=_ZN18COcclusionQueryMgr28OnCreateOcclusionQueryObjectEP30OcclusionQueryObjectHandle_t__ */
	void DestroyOcclusionQueryObject(class COcclusionQueryMgr *, OcclusionQueryObjectHandle_t); /* linkage=_ZN18COcclusionQueryMgr27DestroyOcclusionQueryObjectEP30OcclusionQueryObjectHandle_t__ */
	bool BeginOcclusionQueryDrawing(class COcclusionQueryMgr *, OcclusionQueryObjectHandle_t, class IRenderContext *); /* linkage=_ZN18COcclusionQueryMgr26BeginOcclusionQueryDrawingEP30OcclusionQueryObjectHandle_t__P14IRenderContext */
	void EndOcclusionQueryDrawing(class COcclusionQueryMgr *, OcclusionQueryObjectHandle_t, class IRenderContext *); /* linkage=_ZN18COcclusionQueryMgr24EndOcclusionQueryDrawingEP30OcclusionQueryObjectHandle_t__P14IRenderContext */
	void ResetOcclusionQueryObject(class COcclusionQueryMgr *, OcclusionQueryObjectHandle_t); /* linkage=_ZN18COcclusionQueryMgr25ResetOcclusionQueryObjectEP30OcclusionQueryObjectHandle_t__ */
	int OcclusionQuery_GetNumPixelsRendered(class COcclusionQueryMgr *, OcclusionQueryObjectHandle_t, bool); /* linkage=_ZN18COcclusionQueryMgr35OcclusionQuery_GetNumPixelsRenderedEP30OcclusionQueryObjectHandle_t__b */
	void OcclusionQuery_IssueNumPixelsRenderedQuery(class COcclusionQueryMgr *, OcclusionQueryObjectHandle_t); /* linkage=_ZN18COcclusionQueryMgr42OcclusionQuery_IssueNumPixelsRenderedQueryEP30OcclusionQueryObjectHandle_t__ */
	void AllocOcclusionQueryObjects(class COcclusionQueryMgr *); /* linkage=_ZN18COcclusionQueryMgr26AllocOcclusionQueryObjectsEv */
	void FreeOcclusionQueryObjects(class COcclusionQueryMgr *); /* linkage=_ZN18COcclusionQueryMgr25FreeOcclusionQueryObjectsEv */
	void AdvanceFrame(class COcclusionQueryMgr *); /* linkage=_ZN18COcclusionQueryMgr12AdvanceFrameEv */
	/* <7c4ab> rendersystem/occlusionquerymgr.cpp:48 */
	void FlushQuery(class COcclusionQueryMgr *, OcclusionQueryObjectHandle_t, int); /* linkage=_ZN18COcclusionQueryMgr10FlushQueryEP30OcclusionQueryObjectHandle_t__i */
	void ~COcclusionQueryMgr(class COcclusionQueryMgr *); /* linkage=_ZN18COcclusionQueryMgrD4Ev */
};

// <0007C0F4> rendersystem/occlusionquerymgr.h:75
// variable: 1
void OcclusionQueryObject_t::OcclusionQueryObject_t()
{
	{
		int i; // 77
	}
} /* size: 0 */

// <0007C0CF> rendersystem/occlusionquerymgr.h:75
// variable: 1
inline void OcclusionQueryObject_t::OcclusionQueryObject_t()
{
	{
		int i; // 77
	}
} /* size: 0 */

