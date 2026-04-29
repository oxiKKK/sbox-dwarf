
//
// empty/renderdevicemgrempty.cpp
//
//	referenced by: librendersystemempty.so
//
//	functions: 19
//

// <003FF6B3> empty/renderdevicemgrempty.cpp:22
void* __CreateCRenderDeviceMgrEmptyIRenderDeviceMgr_interface(void)
{
} /* size: 12 */

// <003FF66A> empty/renderdevicemgrempty.cpp:34
void CRenderDeviceMgrEmpty::CRenderDeviceMgrEmpty()
{
} /* size: 0 */

// <003FF607> empty/renderdevicemgrempty.cpp:38
void CRenderDeviceMgrEmpty::~CRenderDeviceMgrEmpty()
{
} /* size: 19 */

// <003FF57A> empty/renderdevicemgrempty.cpp:38
// function call: 1
void CRenderDeviceMgrEmpty::~CRenderDeviceMgrEmpty()
{
	CRenderDeviceMgrEmpty::~CRenderDeviceMgrEmpty(); // 40
} /* size: 46, inline expansions: 1 (19 bytes) */

// <003FF04F> empty/renderdevicemgrempty.cpp:46
// variables: 2
// function calls: 19
void CRenderDeviceMgrEmpty::Connect(CreateInterfaceFn factory)
{
	int j; // 51
	AdapterInfo_t& info; // 52
	CUtlMemory<CRenderDeviceMgrBase::AdapterInfo_t, int>::NumAllocated(); // 1143
	CUtlMemory<CRenderDeviceMgrBase::AdapterInfo_t, int>::Base(); // 112
	CUtlVectorBase<CRenderDeviceMgrBase::AdapterInfo_t, CUtlMemory<CRenderDeviceMgrBase::AdapterInfo_t, int> >::Base(); // 368
	CUtlVectorBase<CRenderDeviceMgrBase::AdapterInfo_t, CUtlMemory<CRenderDeviceMgrBase::AdapterInfo_t, int> >::ResetDbgInfo(); // 824
	CUtlMemory<CRenderDeviceMgrBase::AdapterInfo_t, int>::IsGrowable(); // 823
	CUtlMemory<CRenderDeviceMgrBase::AdapterInfo_t, int>::IsExternallyAllocated(); // 859
	CUtlMemory<CRenderDeviceMgrBase::AdapterInfo_t, int>::IsExternallyAllocated(); // 861
	CUtlMemory<CRenderDeviceMgrBase::AdapterInfo_t, int>::Grow(
		int num);  // 806
	CUtlVectorBase<CRenderDeviceMgrBase::AdapterInfo_t, CUtlMemory<CRenderDeviceMgrBase::AdapterInfo_t, int> >::GrowMemory(
			int num);  // 1145
	CUtlMemory<CRenderDeviceMgrBase::AdapterInfo_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CRenderDeviceMgrBase::AdapterInfo_t, CUtlMemory<CRenderDeviceMgrBase::AdapterInfo_t, int> >::Element(
		int i);  // 1148
	memset(void* __dest,
		int __ch,
		size_t __len);  // 106
	AdapterInfo_t::AdapterInfo_t(); // 1479
	Construct<CRenderDeviceMgrBase::AdapterInfo_t>(AdapterInfo_t* pMemory); // 1148
	CUtlVectorBase<CRenderDeviceMgrBase::AdapterInfo_t, CUtlMemory<CRenderDeviceMgrBase::AdapterInfo_t, int> >::AddToTail(); // 51
	V_strcpy_safe<512>(char& pDest,
				const char* pSrc);  // 59
	CUtlMemory<CRenderDeviceMgrBase::AdapterInfo_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CRenderDeviceMgrBase::AdapterInfo_t, CUtlMemory<CRenderDeviceMgrBase::AdapterInfo_t, int> >::operator[](
			int i);  // 52
	V_strcpy_safe<128>(char& pDest,
				const char* pSrc);  // 60
} /* size: 644, variables: 2, inline expansions: 19 (1051 bytes) */

// <003FF938> empty/renderdevicemgrempty.cpp:117
// variables: 2
// function call: 1
void CRenderDeviceMgrEmpty::Init()
{
	InitReturnVal_t retVal; // 119
	IRenderDeviceSetup* pDeviceSetup; // 123
	CRenderDeviceMgrEmpty::Init(); // 117
} /* size: 121, variables: 2, inline expansions: 1 (78 bytes) */

// <003FF01E> empty/renderdevicemgrempty.cpp:117
// variables: 2
void CRenderDeviceMgrEmpty::Init()
{
	InitReturnVal_t retVal; // 119
	IRenderDeviceSetup* pDeviceSetup; // 123
} /* size: 0, variables: 2 */

// <003FEF88> empty/renderdevicemgrempty.cpp:147
// function call: 1
void CRenderDeviceMgrEmpty::Shutdown()
{
	CRenderDeviceMgrEmpty::DestroyDevice(); // 151
} /* size: 135, inline expansions: 1 (31 bytes) */

// <003FEF5A> empty/renderdevicemgrempty.cpp:163
void CRenderDeviceMgrEmpty::GetAdapterCount()
{
} /* size: 10 */

// <003FEEA6> empty/renderdevicemgrempty.cpp:172
// function call: 1
void CRenderDeviceMgrEmpty::GetAdapterInfo(int nAdapter, RenderAdapterInfo_t& info)
{
	memset(void* __dest,
		int __ch,
		size_t __len);  // 174
} /* size: 35, inline expansions: 1 (15 bytes) */

// <003FEE5C> empty/renderdevicemgrempty.cpp:184
void CRenderDeviceMgrEmpty::FindAdapterForRawAdapterAndOutput(int nRawAdapter, int nRawOutput)
{
} /* size: 7 */

// <003FEDF6> empty/renderdevicemgrempty.cpp:195
void CRenderDeviceMgrEmpty::FindAdapterForDesktopRect(int nX, int nY, int nWidth, int nHeight)
{
} /* size: 7 */

// <003FED62> empty/renderdevicemgrempty.cpp:204
void CRenderDeviceMgrEmpty::GetMonitorResolution(int* pWidth, int* pHeight, int nAdapter)
{
} /* size: 11 */

// <003FED26> empty/renderdevicemgrempty.cpp:213
void CRenderDeviceMgrEmpty::GetModeCount(int nAdapter)
{
} /* size: 7 */

// <003FEC3C> empty/renderdevicemgrempty.cpp:222
// function calls: 2
void CRenderDeviceMgrEmpty::GetModeInfo(RenderDisplayMode_t* pInfo, int nAdapter, int nMode)
{
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 224
} /* size: 42, inline expansions: 2 (60 bytes) */

// <003FEB60> empty/renderdevicemgrempty.cpp:232
// function calls: 2
void CRenderDeviceMgrEmpty::GetCurrentModeInfo(RenderDisplayMode_t* pInfo, int nAdapter)
{
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 234
} /* size: 35, inline expansions: 2 (60 bytes) */

// <003FEA80> empty/renderdevicemgrempty.cpp:241
// function call: 1
void CRenderDeviceMgrEmpty::CreateDevice(int nAdapter, int nFlags, int nDXLevel)
{
	CRenderDeviceMgrEmpty::DestroyDevice(); // 243
} /* size: 200, inline expansions: 1 (31 bytes) */

// <003FF907> empty/renderdevicemgrempty.cpp:263
void CRenderDeviceMgrEmpty::DestroyDevice()
{
} /* size: 49 */

// <003FEA29> empty/renderdevicemgrempty.cpp:276
void CRenderDeviceMgrEmpty::GetVidMemBytes(int nAdapter)
{
} /* size: 10 */

