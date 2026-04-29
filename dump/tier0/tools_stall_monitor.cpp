
//
// tier0/tools_stall_monitor.cpp
//
//	referenced by: libtier0.so
//
//	functions: 6
//

// <004EB550> tier0/tools_stall_monitor.cpp:43
// variables: 2
// function call: 1
void ToolsStallMonitor_Initialize(ThreadId_t nMainThreadId, uint64 nStallThresholdMS)
{
	const char   __FUNCTION__; // 62701
	{
		int* _pCrash; // 45
	}
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 45
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <004EB546> tier0/tools_stall_monitor.cpp:48
void ToolsStallMonitor_Shutdown(void)
{
} /* size: 0 */

// <004EB52B> tier0/tools_stall_monitor.cpp:52
void ToolsStallMonitor_SetMainThreadWindow(OsSpecificWindowHandle_t hWindow)
{
} /* size: 0 */

// <004EB4D9> tier0/tools_stall_monitor.cpp:56
void ToolsStallMonitor_SetDisplayImageRGBA(int nWidth, int nHeight, const byte* pBytes)
{
} /* size: 5 */

// <004EB4BF> tier0/tools_stall_monitor.cpp:60
void ToolsStallMonitorInternal_BeginScope(CToolsStallMonitorScope* pScope)
{
} /* size: 0 */

// <004EB4A5> tier0/tools_stall_monitor.cpp:64
void ToolsStallMonitorInternal_EndScope(CToolsStallMonitorScope* pScope)
{
} /* size: 0 */

