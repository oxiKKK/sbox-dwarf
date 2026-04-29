
//
// rendersystem/renderdocapi.h
//
//	referenced by: librendersystemempty.so
//				   librendersystemvulkan.so
//
//	class: 1
//

// <003DBB23> rendersystem/renderdocapi.h:20
// member functions: 28
// member variables: 4
// class size: 24
class CRenderDocAPI {
	void CRenderDocAPI(CRenderDocAPI* , const CRenderDocAPI& );
	int ()(void) * * _vptr.CRenderDocAPI; /* 0 8 */
	/* rendersystem/renderdocapi.cpp:54 */
	void CRenderDocAPI(CRenderDocAPI* );
	/* rendersystem/renderdocapi.cpp:62 */
	virtual void ~CRenderDocAPI(CRenderDocAPI* );
	/* rendersystem/renderdocapi.cpp:68 */
	CRenderDocAPI& Instance(void);
	/* rendersystem/renderdocapi.cpp:99 */
	bool EarlyInitRenderDocHooking(CRenderDocAPI* , const char* );
	/* rendersystem/renderdocapi.cpp:145 */
	bool IsRenderDocActive(CRenderDocAPI* );
	/* rendersystem/renderdocapi.cpp:242 */
	bool StartRenderDocCapture(CRenderDocAPI* , PlatWindow_t);
	/* rendersystem/renderdocapi.cpp:262 */
	bool EndRenderDocCapture(CRenderDocAPI* , PlatWindow_t);
	/* rendersystem/renderdocapi.cpp:84 */
	void Shutdown(CRenderDocAPI* );
	/* rendersystem/renderdocapi.cpp:151 */
	RENDERDOC_API_1_5_0* RenderDocAPI(CRenderDocAPI* );
	/* rendersystem/renderdocapi.cpp:190 */
	void OnBeginFrame(CRenderDocAPI* );
	/* rendersystem/renderdocapi.cpp:214 */
	void OnEndFrame(CRenderDocAPI* );
	/* rendersystem/renderdocapi.cpp:184 */
	void CaptureRenderDocFrame(const CCommandContext& , const CCommand& );
private:
	/* rendersystem/renderdocapi.cpp:158 */
	void QueryRenderDoc(CRenderDocAPI* );
	bool m_bQueriedRenderDoc; /* 8 1 */
	bool m_bInRenderDoc; /* 9 1 */
	RENDERDOC_API_1_5_0 * m_pRenderDocAPI; /* 16 8 */
	void CRenderDocAPI(class CRenderDocAPI *, const class CRenderDocAPI  &); /* linkage=_ZN13CRenderDocAPIC4ERKS_ */
	void CRenderDocAPI(class CRenderDocAPI *); /* linkage=_ZN13CRenderDocAPIC4Ev */
	virtual void ~CRenderDocAPI(class CRenderDocAPI *); /* linkage=_ZN13CRenderDocAPID4Ev */
	class CRenderDocAPI & Instance(void); /* linkage=_ZN13CRenderDocAPI8InstanceEv */
	bool EarlyInitRenderDocHooking(class CRenderDocAPI *, const char  *); /* linkage=_ZN13CRenderDocAPI25EarlyInitRenderDocHookingEPKc */
	bool IsRenderDocActive(class CRenderDocAPI *); /* linkage=_ZN13CRenderDocAPI17IsRenderDocActiveEv */
	bool StartRenderDocCapture(class CRenderDocAPI *, PlatWindow_t); /* linkage=_ZN13CRenderDocAPI21StartRenderDocCaptureEP14PlatWindow_t__ */
	bool EndRenderDocCapture(class CRenderDocAPI *, PlatWindow_t); /* linkage=_ZN13CRenderDocAPI19EndRenderDocCaptureEP14PlatWindow_t__ */
	/* <3e02fc> rendersystem/renderdocapi.cpp:84 */
	void Shutdown(class CRenderDocAPI *); /* linkage=_ZN13CRenderDocAPI8ShutdownEv */
	RENDERDOC_API_1_5_0 * RenderDocAPI(class CRenderDocAPI *); /* linkage=_ZN13CRenderDocAPI12RenderDocAPIEv */
	void OnBeginFrame(class CRenderDocAPI *); /* linkage=_ZN13CRenderDocAPI12OnBeginFrameEv */
	void OnEndFrame(class CRenderDocAPI *); /* linkage=_ZN13CRenderDocAPI10OnEndFrameEv */
	void CaptureRenderDocFrame(const class CCommandContext  &, const class CCommand  &); /* linkage=_ZN13CRenderDocAPI21CaptureRenderDocFrameERK15CCommandContextRK8CCommand */
	void QueryRenderDoc(class CRenderDocAPI *); /* linkage=_ZN13CRenderDocAPI14QueryRenderDocEv */
};

