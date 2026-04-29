
//
// public/tier0/tools_stall_monitor.h
//
//	referenced by: libengine2.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemvulkan.so
//				   libtier0.so
//				   libvfx_vulkan.so
//
//	functions: 7
//	classes: 2
//

// <0178C5A6> ../public/tier0/tools_stall_monitor.h:52
void ToolsStallMonitorInternal_BeginScope(CToolsStallMonitorScope *)
{
} /* size: 0 */

// <0178C54D> ../public/tier0/tools_stall_monitor.h:53
void ToolsStallMonitorInternal_EndScope(CToolsStallMonitorScope *)
{
} /* size: 0 */

// <012595B8> ../public/tier0/tools_stall_monitor.h:57
void ToolsStallMonitor_IndicateActivity(void)
{
} /* size: 0 */

// <0178BD33> ../public/tier0/tools_stall_monitor.h:63
// member functions: 4
// member variables: 4
// class size: 24
class CToolsStallMonitorScope {
	/* ../public/tier0/tools_stall_monitor.h:66 */
	void CToolsStallMonitorScope(CToolsStallMonitorScope* , const char* , bool, uint32);
	/* ../public/tier0/tools_stall_monitor.h:74 */
	void ~CToolsStallMonitorScope(CToolsStallMonitorScope* );
	const char * m_pScopeName; /* 0 8 */
	uint32 m_nStallThresholdMS; /* 8 4 */
	uint32 m_nStallDetectedMS; /* 12 4 */
	bool m_bDisableDetection; /* 16 1 */
	void CToolsStallMonitorScope(class CToolsStallMonitorScope *, const char  *, bool, uint32); /* linkage=_ZN23CToolsStallMonitorScopeC4EPKcbj */
	void ~CToolsStallMonitorScope(class CToolsStallMonitorScope *); /* linkage=_ZN23CToolsStallMonitorScopeD4Ev */
};

// <000A782C> ../../public/tier0/tools_stall_monitor.h:63
// member functions: 4
// member variables: 4
// class size: 24
class CToolsStallMonitorScope {
	/* ../../public/tier0/tools_stall_monitor.h:66 */
	void CToolsStallMonitorScope(CToolsStallMonitorScope* , const char* , bool, uint32);
	/* ../../public/tier0/tools_stall_monitor.h:74 */
	void ~CToolsStallMonitorScope(CToolsStallMonitorScope* );
	const char * m_pScopeName; /* 0 8 */
	uint32 m_nStallThresholdMS; /* 8 4 */
	uint32 m_nStallDetectedMS; /* 12 4 */
	bool m_bDisableDetection; /* 16 1 */
	void CToolsStallMonitorScope(class CToolsStallMonitorScope *, const char  *, bool, uint32); /* linkage=_ZN23CToolsStallMonitorScopeC4EPKcbj */
	void ~CToolsStallMonitorScope(class CToolsStallMonitorScope *); /* linkage=_ZN23CToolsStallMonitorScopeD4Ev */
};

// <0178EACB> ../public/tier0/tools_stall_monitor.h:66
void CToolsStallMonitorScope::CToolsStallMonitorScope(const char* pScopeName, bool bDisableDetection, uint32 nStallThresholdMS)
{
} /* size: 0 */

// <0178EA8E> ../public/tier0/tools_stall_monitor.h:66
inline void CToolsStallMonitorScope::CToolsStallMonitorScope(const char* pScopeName, bool bDisableDetection, uint32 nStallThresholdMS)
{
} /* size: 0 */

// <0178EA77> ../public/tier0/tools_stall_monitor.h:74
void CToolsStallMonitorScope::~CToolsStallMonitorScope()
{
} /* size: 0 */

// <0178EA5E> ../public/tier0/tools_stall_monitor.h:74
inline void CToolsStallMonitorScope::~CToolsStallMonitorScope()
{
} /* size: 0 */

