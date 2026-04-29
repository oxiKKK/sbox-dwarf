
//
// rendersystem/renderdevicebase.h
//
//	referenced by: librendersystemempty.so
//				   librendersystemvulkan.so
//
//	functions: 120
//	classes: 8
//	structs: 3
//

// <000DBAD0> rendersystem/renderdevicebase.h:72
// member functions: 18
// member variables: 9
// static member variable: 1
// struct size: 48
struct ConstantBuffer_t {
	/* rendersystem/renderdevicebase.h:76 */
	uint32 CalculateBucket(uint32);
	/* rendersystem/renderdevicebase.h:86 */
	uint32 CalculateAllocationBucket(ConstantBuffer_t* );
	static const int k_NumFlagGroups = 4; /* 0 0 */
	/* rendersystem/renderdevicebase.h:99 */
	uint GetFlagGroupFlags(uint);
	/* rendersystem/renderdevicebase.h:104 */
	uint GetFlagGroupFlags(const ConstantBuffer_t* );
	/* rendersystem/renderdevicebase.h:108 */
	int GetFlagGroup(uint);
	/* rendersystem/renderdevicebase.h:117 */
	int GetFlagGroup(const ConstantBuffer_t* );
	/* rendersystem/renderdevicebase.h:122 */
	ConstantBufferType_t GetType(const ConstantBuffer_t* );
	/* rendersystem/renderdevicebase.h:127 */
	uint8* GetData(ConstantBuffer_t* );
	/* rendersystem/renderdevicebase.h:131 */
	uint8* GetViewData(ConstantBuffer_t* , uint32);
	/* rendersystem/renderdevicebase.h:136 */
	uint32 GetNumViews(const ConstantBuffer_t* );
	/* rendersystem/renderdevicebase.h:142 */
	uint32 GetAllocatedSize(const ConstantBuffer_t* );
	/* rendersystem/renderdevicebase.h:152 */
	uint32 GetViewRequestedSize(const ConstantBuffer_t* );
	/* rendersystem/renderdevicebase.h:156 */
	uint32 GetViewAlignedSize(const ConstantBuffer_t* );
	/* rendersystem/renderdevicebase.h:160 */
	uint32 GetAllViewsSize(const ConstantBuffer_t* );
	/* rendersystem/renderdevicebase.h:165 */
	bool IsImmutable(const ConstantBuffer_t* );
	/* rendersystem/renderdevicebase.h:172 */
	bool WasCreatedByContext(const ConstantBuffer_t* );
	/* rendersystem/renderdevicebase.h:176 */
	bool IsPerFrameWriteOnce(const ConstantBuffer_t* );
	/* rendersystem/renderdevicebase.h:180 */
	bool IsPerFrameLifetimePooled(const ConstantBuffer_t* );
	CConstantBufferVulkan * m_pBuffer; /* 0 8 */
	ConstantBuffer_t * m_pNext; /* 8 8 */
	uint m_nLastFrameUsed; /* 16 4 */
	uint32 m_nViewRequestedSize; /* 20 4 */
	uint32 m_nViewAlignedSize; /* 24 4 */
	uint32 m_nAllocatedSize; /* 28 4 */
	uint32 m_nNumViews; /* 32 4 */
	uint16 m_nFlags; /* 36 2 */
	int8 m_nType; /* 38 1 */
} __attribute__((__aligned__(16)));

// <000DB634> rendersystem/renderdevicebase.h:72
// member functions: 18
// member variables: 8
// static member variable: 1
// struct size: 32
struct ConstantBuffer_t {
	/* rendersystem/renderdevicebase.h:76 */
	uint32 CalculateBucket(uint32);
	/* rendersystem/renderdevicebase.h:86 */
	uint32 CalculateAllocationBucket(ConstantBuffer_t* );
	static const int k_NumFlagGroups = 4; /* 0 0 */
	/* rendersystem/renderdevicebase.h:99 */
	uint GetFlagGroupFlags(uint);
	/* rendersystem/renderdevicebase.h:104 */
	uint GetFlagGroupFlags(const ConstantBuffer_t* );
	/* rendersystem/renderdevicebase.h:108 */
	int GetFlagGroup(uint);
	/* rendersystem/renderdevicebase.h:117 */
	int GetFlagGroup(const ConstantBuffer_t* );
	/* rendersystem/renderdevicebase.h:122 */
	ConstantBufferType_t GetType(const ConstantBuffer_t* );
	/* rendersystem/renderdevicebase.h:127 */
	uint8* GetData(ConstantBuffer_t* );
	/* rendersystem/renderdevicebase.h:131 */
	uint8* GetViewData(ConstantBuffer_t* , uint32);
	/* rendersystem/renderdevicebase.h:136 */
	uint32 GetNumViews(const ConstantBuffer_t* );
	/* rendersystem/renderdevicebase.h:142 */
	uint32 GetAllocatedSize(const ConstantBuffer_t* );
	/* rendersystem/renderdevicebase.h:152 */
	uint32 GetViewRequestedSize(const ConstantBuffer_t* );
	/* rendersystem/renderdevicebase.h:156 */
	uint32 GetViewAlignedSize(const ConstantBuffer_t* );
	/* rendersystem/renderdevicebase.h:160 */
	uint32 GetAllViewsSize(const ConstantBuffer_t* );
	/* rendersystem/renderdevicebase.h:165 */
	bool IsImmutable(const ConstantBuffer_t* );
	/* rendersystem/renderdevicebase.h:172 */
	bool WasCreatedByContext(const ConstantBuffer_t* );
	/* rendersystem/renderdevicebase.h:176 */
	bool IsPerFrameWriteOnce(const ConstantBuffer_t* );
	/* rendersystem/renderdevicebase.h:180 */
	bool IsPerFrameLifetimePooled(const ConstantBuffer_t* );
	ConstantBuffer_t * m_pNext; /* 0 8 */
	uint m_nLastFrameUsed; /* 8 4 */
	uint32 m_nViewRequestedSize; /* 12 4 */
	uint32 m_nViewAlignedSize; /* 16 4 */
	uint32 m_nAllocatedSize; /* 20 4 */
	uint32 m_nNumViews; /* 24 4 */
	uint16 m_nFlags; /* 28 2 */
	int8 m_nType; /* 30 1 */
} __attribute__((__aligned__(16)));

// <001A8894> rendersystem/renderdevicebase.h:76
// variable: 1
inline void CalculateBucket(uint32 nAllocSize)
{
	uint32 nNumFloat4s; // 80
} /* size: 0, variables: 1 */

// <001A887B> rendersystem/renderdevicebase.h:86
inline void ConstantBuffer_t::CalculateAllocationBucket()
{
} /* size: 0 */

// <001A8864> rendersystem/renderdevicebase.h:99
inline void GetFlagGroupFlags(uint nFlags)
{
} /* size: 0 */

// <001A884B> rendersystem/renderdevicebase.h:104
inline void ConstantBuffer_t::GetFlagGroupFlags()
{
} /* size: 0 */

// <001A8828> rendersystem/renderdevicebase.h:108
// variable: 1
inline void GetFlagGroup(uint nFlags)
{
	int nFlagGroup; // 110
} /* size: 0, variables: 1 */

// <001A880F> rendersystem/renderdevicebase.h:117
inline void ConstantBuffer_t::GetFlagGroup()
{
} /* size: 0 */

// <001A87F6> rendersystem/renderdevicebase.h:122
inline void ConstantBuffer_t::GetType()
{
} /* size: 0 */

// <001A87DD> rendersystem/renderdevicebase.h:127
inline void ConstantBuffer_t::GetData()
{
} /* size: 0 */

// <001A87C4> rendersystem/renderdevicebase.h:136
inline void ConstantBuffer_t::GetNumViews()
{
} /* size: 0 */

// <001A87AB> rendersystem/renderdevicebase.h:142
inline void ConstantBuffer_t::GetAllocatedSize()
{
} /* size: 0 */

// <00102E4A> rendersystem/renderdevicebase.h:152
inline void ConstantBuffer_t::GetViewRequestedSize()
{
} /* size: 0 */

// <001A8792> rendersystem/renderdevicebase.h:156
inline void ConstantBuffer_t::GetViewAlignedSize()
{
} /* size: 0 */

// <001A8779> rendersystem/renderdevicebase.h:172
inline void ConstantBuffer_t::WasCreatedByContext()
{
} /* size: 0 */

// <001A8760> rendersystem/renderdevicebase.h:180
inline void ConstantBuffer_t::IsPerFrameLifetimePooled()
{
} /* size: 0 */

// <000DD2A4> rendersystem/renderdevicebase.h:229
// member variables: 2
// struct size: 16
struct RenderPipelineStatsCommandListQueries_t {
	void * m_pBeginQuery; /* 0 8 */
	void * m_pEndQuery; /* 8 8 */
};

// <0017F3D8> rendersystem/renderdevicebase.h:262
void CPipelineFence::~CPipelineFence()
{
} /* size: 0 */

// <0017F3BB> rendersystem/renderdevicebase.h:262
inline void CPipelineFence::~CPipelineFence()
{
} /* size: 0 */

// <000DB3D3> rendersystem/renderdevicebase.h:262
// member functions: 13
// member variables: 2
// class size: 136
class CPipelineFence {
	/* rendersystem/renderdevicebase.h:265 */
	int AddRef(CPipelineFence* );
	/* rendersystem/renderdevicebase.h:266 */
	int Release(CPipelineFence* );
	/* rendersystem/renderdevicebase.h:268 */
	void SetCompleted(CPipelineFence* );
	/* rendersystem/renderdevicebase.h:269 */
	bool IsCompleted(CPipelineFence* );
	/* rendersystem/renderdevicebase.h:270 */
	bool WaitCompleted(CPipelineFence* , uint32);
private:
	/* rendersystem/renderdevicebase.h:273 */
	void CPipelineFence(CPipelineFence* );
	CInterlockedInt m_nRefCount __attribute__((__aligned__(4))); /* 0 4 */
	CThreadEvent m_Event; /* 8 128 */
	/* <1b6a3f> rendersystem/renderdevicebase.cpp:3042 */
	int AddRef(class CPipelineFence *); /* linkage=_ZN14CPipelineFence6AddRefEv */
	/* <1b6aed> rendersystem/renderdevicebase.cpp:3048 */
	int Release(class CPipelineFence *); /* linkage=_ZN14CPipelineFence7ReleaseEv */
	void SetCompleted(class CPipelineFence *); /* linkage=_ZN14CPipelineFence12SetCompletedEv */
	bool IsCompleted(class CPipelineFence *); /* linkage=_ZN14CPipelineFence11IsCompletedEv */
	/* <1b6c23> rendersystem/renderdevicebase.cpp:3063 */
	bool WaitCompleted(class CPipelineFence *, uint32); /* linkage=_ZN14CPipelineFence13WaitCompletedEj */
	void CPipelineFence(class CPipelineFence *); /* linkage=_ZN14CPipelineFenceC4Ev */
	void ~CPipelineFence(class CPipelineFence *); /* linkage=_ZN14CPipelineFenceD4Ev */
} __attribute__((__aligned__(8)));

// <0013DFDF> rendersystem/renderdevicebase.h:262
// member functions: 14
// member variables: 2
// class size: 136
class CPipelineFence {
	/* rendersystem/renderdevicebase.h:265 */
	int AddRef(CPipelineFence* );
	/* rendersystem/renderdevicebase.h:266 */
	int Release(CPipelineFence* );
	/* rendersystem/renderdevicebase.h:268 */
	void SetCompleted(CPipelineFence* );
	/* rendersystem/renderdevicebase.h:269 */
	bool IsCompleted(CPipelineFence* );
	/* rendersystem/renderdevicebase.h:270 */
	bool WaitCompleted(CPipelineFence* , uint32);
private:
	/* rendersystem/renderdevicebase.h:273 */
	void CPipelineFence(CPipelineFence* );
	CInterlockedInt m_nRefCount __attribute__((__aligned__(4))); /* 0 4 */
	CThreadEvent m_Event; /* 8 128 */
	void ~CPipelineFence(CPipelineFence* );
	/* <1b6a3f> rendersystem/renderdevicebase.cpp:3042 */
	int AddRef(class CPipelineFence *); /* linkage=_ZN14CPipelineFence6AddRefEv */
	/* <1b6aed> rendersystem/renderdevicebase.cpp:3048 */
	int Release(class CPipelineFence *); /* linkage=_ZN14CPipelineFence7ReleaseEv */
	void SetCompleted(class CPipelineFence *); /* linkage=_ZN14CPipelineFence12SetCompletedEv */
	bool IsCompleted(class CPipelineFence *); /* linkage=_ZN14CPipelineFence11IsCompletedEv */
	/* <1b6c23> rendersystem/renderdevicebase.cpp:3063 */
	bool WaitCompleted(class CPipelineFence *, uint32); /* linkage=_ZN14CPipelineFence13WaitCompletedEj */
	void CPipelineFence(class CPipelineFence *); /* linkage=_ZN14CPipelineFenceC4Ev */
	void ~CPipelineFence(class CPipelineFence *); /* linkage=_ZN14CPipelineFenceD4Ev */
} __attribute__((__aligned__(8)));

// <001A8747> rendersystem/renderdevicebase.h:269
inline void CPipelineFence::IsCompleted()
{
} /* size: 0 */

// <0015CBFD> rendersystem/renderdevicebase.h:283
// member functions: 16
// member variables: 2
// vtable entries: 2
// class size: 16
class CDeviceFence {
	void CDeviceFence(CDeviceFence* , const CDeviceFence& );
	int ()(void) * * _vptr.CDeviceFence; /* 0 8 */
protected:
	/* rendersystem/renderdevicebase.cpp:3073 */
	void CDeviceFence(CDeviceFence* );
	/* rendersystem/renderdevicebase.cpp:3078 */
	virtual void ~CDeviceFence(CDeviceFence* );
	/* rendersystem/renderdevicebase.cpp:3083 */
	int AddRef(CDeviceFence* );
	/* rendersystem/renderdevicebase.cpp:3089 */
	int Release(CDeviceFence* );
	/* rendersystem/renderdevicebase.h:293 */
	bool IsCompleted(CDeviceFence* );
	/* rendersystem/renderdevicebase.h:296 */
	virtual bool WaitCompleted(CDeviceFence* , uint32);
	/* rendersystem/renderdevicebase.h:299 */
	virtual void ReachedZeroReferences(CDeviceFence* );
private:
	CInterlockedInt m_nRefCount __attribute__((__aligned__(4))); /* 8 4 */
	void CDeviceFence(class CDeviceFence *, const class CDeviceFence  &); /* linkage=_ZN12CDeviceFenceC4ERKS_ */
	void CDeviceFence(class CDeviceFence *); /* linkage=_ZN12CDeviceFenceC4Ev */
	virtual void ~CDeviceFence(class CDeviceFence *); /* linkage=_ZN12CDeviceFenceD4Ev */
	/* <1b6d3c> rendersystem/renderdevicebase.cpp:3083 */
	int AddRef(class CDeviceFence *); /* linkage=_ZN12CDeviceFence6AddRefEv */
	/* <1b6dea> rendersystem/renderdevicebase.cpp:3089 */
	int Release(class CDeviceFence *); /* linkage=_ZN12CDeviceFence7ReleaseEv */
	bool IsCompleted(class CDeviceFence *); /* linkage=_ZN12CDeviceFence11IsCompletedEv */
	virtual bool WaitCompleted(class CDeviceFence *, uint32); /* linkage=_ZN12CDeviceFence13WaitCompletedEj */
	virtual void ReachedZeroReferences(class CDeviceFence *); /* linkage=_ZN12CDeviceFence21ReachedZeroReferencesEv */
} __attribute__((__aligned__(8)));

// <001A872E> rendersystem/renderdevicebase.h:293
inline void CDeviceFence::IsCompleted()
{
} /* size: 0 */

// <00196A26> rendersystem/renderdevicebase.h:309
// function calls: 2
void CDeviceFenceBase::~CDeviceFenceBase()
{
	{
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 3080
	}
	CDeviceFence::~CDeviceFence(); // 309
} /* size: 27, inline expansions: 1 (22 bytes) */

// <001968FC> rendersystem/renderdevicebase.h:309
// function calls: 3
void CDeviceFenceBase::~CDeviceFenceBase()
{
	{
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 3080
	}
	CDeviceFence::~CDeviceFence(); // 309
	CDeviceFenceBase::~CDeviceFenceBase(); // 309
} /* size: 63, inline expansions: 2 (52 bytes) */

// <001968DF> rendersystem/renderdevicebase.h:309
inline void CDeviceFenceBase::~CDeviceFenceBase()
{
} /* size: 0 */

// <0016C0A1> rendersystem/renderdevicebase.h:309
// member functions: 12
// member variables: 2
// vtable entries: 2
// class size: 16
class CDeviceFenceBase : public CDeviceFence {
public:
	/* class CDeviceFence <ancestor>; */ /* 0 16 */
	void CDeviceFenceBase(CDeviceFenceBase* , CDeviceFenceBase& );
	void CDeviceFenceBase(CDeviceFenceBase* , const CDeviceFenceBase& );
	/* rendersystem/renderdevicebase.cpp:855 */
	void CDeviceFenceBase(CDeviceFenceBase* );
	/* rendersystem/renderdevicebase.cpp:861 */
	virtual bool WaitCompleted(CDeviceFenceBase* , uint32);
	/* rendersystem/renderdevicebase.cpp:880 */
	virtual void ReachedZeroReferences(CDeviceFenceBase* );
private:
	uint32 m_nWaitForFrameCompletion; /* 12 4 */
	virtual void ~CDeviceFenceBase(CDeviceFenceBase* );
	void CDeviceFenceBase(class CDeviceFenceBase *, class CDeviceFenceBase &); /* linkage=_ZN16CDeviceFenceBaseC4EOS_ */
	void CDeviceFenceBase(class CDeviceFenceBase *, const class CDeviceFenceBase  &); /* linkage=_ZN16CDeviceFenceBaseC4ERKS_ */
	void CDeviceFenceBase(class CDeviceFenceBase *); /* linkage=_ZN16CDeviceFenceBaseC4Ev */
	virtual bool WaitCompleted(class CDeviceFenceBase *, uint32); /* linkage=_ZN16CDeviceFenceBase13WaitCompletedEj */
	/* <1aeb87> rendersystem/renderdevicebase.cpp:880 */
	virtual void ReachedZeroReferences(class CDeviceFenceBase *); /* linkage=_ZN16CDeviceFenceBase21ReachedZeroReferencesEv */
	virtual void ~CDeviceFenceBase(class CDeviceFenceBase *); /* linkage=_ZN16CDeviceFenceBaseD4Ev */
} __attribute__((__aligned__(8)));

// <000DE0BE> rendersystem/renderdevicebase.h:323
// member functions: 41
// member variables: 15
// vtable entries: 2
// class size: 376
class CSwapChainBase {
	int ()(void) * * _vptr.CSwapChainBase; /* 0 8 */
	/* rendersystem/renderdevicebase.h:326 */
	void CSwapChainBase(CSwapChainBase* );
	/* rendersystem/renderdevicebase.h:337 */
	virtual void ~CSwapChainBase(CSwapChainBase* );
	/* rendersystem/renderdevicebase.h:339 */
	virtual int GetWidth(const CSwapChainBase* );
	/* rendersystem/renderdevicebase.h:340 */
	virtual int GetHeight(const CSwapChainBase* );
	/* rendersystem/renderdevicebase.h:341 */
	const RenderDeviceInfo_t& GetRenderDeviceInfo(const CSwapChainBase* );
	/* rendersystem/renderdevicebase.h:342 */
	PlatWindow_t GetPlatWindowHandle(const CSwapChainBase* );
	/* rendersystem/renderdevicebase.h:343 */
	OsSpecificWindowHandle_t GetOsSpecificWindowHandle(const CSwapChainBase* );
	/* rendersystem/renderdevicebase.h:344 */
	HRenderTexture GetColorTexture(const CSwapChainBase* );
	/* rendersystem/renderdevicebase.h:345 */
	HRenderTexture GetDepthTexture(const CSwapChainBase* );
	/* rendersystem/renderdevicebase.h:346 */
	ImageFormat GetSwapchainDepthFormat(const CSwapChainBase* );
	/* rendersystem/renderdevicebase.h:347 */
	const char* GetDebugName(const CSwapChainBase* );
	/* rendersystem/renderdevicebase.h:348 */
	void SetGPUFrameTimeMS(CSwapChainBase* , float, uint32);
	/* rendersystem/renderdevicebase.h:349 */
	float GetLastGPUFrameTimeMS(const CSwapChainBase* );
	/* rendersystem/renderdevicebase.h:350 */
	uint32 GetLastGPUFrameTimeNumber(const CSwapChainBase* );
	/* rendersystem/renderdevicebase.h:352 */
	bool HasOutstandingPresents(const CSwapChainBase* );
	/* rendersystem/renderdevicebase.h:353 */
	bool WaitOnPresent(const CSwapChainBase* );
	/* rendersystem/renderdevicebase.h:354 */
	void OnPresentQueued(const CSwapChainBase* , int);
	/* rendersystem/renderdevicebase.h:355 */
	void OnPresentCompleted(const CSwapChainBase* , int);
	/* rendersystem/renderdevicebase.h:356 */
	void WaitForOutstandingPresents(const CSwapChainBase* );
protected:
	PlatWindow_t m_hPlatWnd; /* 8 8 */
	OsSpecificWindowHandle_t m_hOsWnd; /* 16 8 */
	RenderDeviceInfo_t m_Mode; /* 24 48 */
	HRenderTextureStrong m_hColorTexture; /* 72 8 */
	HRenderTextureStrong m_hDepthTexture; /* 80 8 */
	char m_debugName[256]; /* 88 256 */
	CInterlockedInt m_nOutstandingPresents __attribute__((__aligned__(4))); /* 344 4 */
	CInterlockedInt m_nLastPresentQueued __attribute__((__aligned__(4))); /* 348 4 */
	CInterlockedInt m_nLastPresentCompleted __attribute__((__aligned__(4))); /* 352 4 */
	int m_nMaxOutstandingPresents; /* 356 4 */
	bool m_bUse32BitDepthBuffer; /* 360 1 */
	ImageFormat m_n32BitDepthBufferFormat; /* 364 4 */
	float m_flLastGPUFrameTimeMS; /* 368 4 */
	uint32 m_nLastGPUFrameTimeNumber; /* 372 4 */
	/* rendersystem/renderdevicebase.h:374 */
	void SetWindowHandles(CSwapChainBase* , PlatWindow_t, OsSpecificWindowHandle_t);
	void CSwapChainBase(class CSwapChainBase *); /* linkage=_ZN14CSwapChainBaseC4Ev */
	virtual void ~CSwapChainBase(class CSwapChainBase *); /* linkage=_ZN14CSwapChainBaseD4Ev */
	/* <1ae9a5> rendersystem/renderdevicebase.h:339 */
	virtual int GetWidth(const class CSwapChainBase  *); /* linkage=_ZNK14CSwapChainBase8GetWidthEv */
	/* <1ae9cf> rendersystem/renderdevicebase.h:340 */
	virtual int GetHeight(const class CSwapChainBase  *); /* linkage=_ZNK14CSwapChainBase9GetHeightEv */
	const class RenderDeviceInfo_t  & GetRenderDeviceInfo(const class CSwapChainBase  *); /* linkage=_ZNK14CSwapChainBase19GetRenderDeviceInfoEv */
	PlatWindow_t GetPlatWindowHandle(const class CSwapChainBase  *); /* linkage=_ZNK14CSwapChainBase19GetPlatWindowHandleEv */
	OsSpecificWindowHandle_t GetOsSpecificWindowHandle(const class CSwapChainBase  *); /* linkage=_ZNK14CSwapChainBase25GetOsSpecificWindowHandleEv */
	HRenderTexture GetColorTexture(const class CSwapChainBase  *); /* linkage=_ZNK14CSwapChainBase15GetColorTextureEv */
	HRenderTexture GetDepthTexture(const class CSwapChainBase  *); /* linkage=_ZNK14CSwapChainBase15GetDepthTextureEv */
	enum ImageFormat GetSwapchainDepthFormat(const class CSwapChainBase  *); /* linkage=_ZNK14CSwapChainBase23GetSwapchainDepthFormatEv */
	const char  * GetDebugName(const class CSwapChainBase  *); /* linkage=_ZNK14CSwapChainBase12GetDebugNameEv */
	/* <1b6efa> rendersystem/renderdevicebase.cpp:3309 */
	void SetGPUFrameTimeMS(class CSwapChainBase *, float, uint32); /* linkage=_ZN14CSwapChainBase17SetGPUFrameTimeMSEfj */
	float GetLastGPUFrameTimeMS(const class CSwapChainBase  *); /* linkage=_ZNK14CSwapChainBase21GetLastGPUFrameTimeMSEv */
	uint32 GetLastGPUFrameTimeNumber(const class CSwapChainBase  *); /* linkage=_ZNK14CSwapChainBase25GetLastGPUFrameTimeNumberEv */
	/* <1b66d7> rendersystem/renderdevicebase.cpp:2949 */
	bool HasOutstandingPresents(const class CSwapChainBase  *); /* linkage=_ZNK14CSwapChainBase22HasOutstandingPresentsEv */
	bool WaitOnPresent(const class CSwapChainBase  *); /* linkage=_ZNK14CSwapChainBase13WaitOnPresentEv */
	/* <1b6732> rendersystem/renderdevicebase.cpp:3009 */
	void OnPresentQueued(const class CSwapChainBase  *, int); /* linkage=_ZNK14CSwapChainBase15OnPresentQueuedEi */
	/* <1b6882> rendersystem/renderdevicebase.cpp:3018 */
	void OnPresentCompleted(const class CSwapChainBase  *, int); /* linkage=_ZNK14CSwapChainBase18OnPresentCompletedEi */
	/* <1b69d2> rendersystem/renderdevicebase.cpp:3026 */
	void WaitForOutstandingPresents(const class CSwapChainBase  *); /* linkage=_ZNK14CSwapChainBase26WaitForOutstandingPresentsEv */
	void SetWindowHandles(class CSwapChainBase *, PlatWindow_t, OsSpecificWindowHandle_t); /* linkage=_ZN14CSwapChainBase16SetWindowHandlesEP14PlatWindow_t__P26OsSpecificWindowHandle_t__ */
	void CSwapChainBase(class CSwapChainBase *, const class CSwapChainBase  &); /* linkage=_ZN14CSwapChainBaseC4ERKS_ */
} __attribute__((__aligned__(8)));

// <00158404> rendersystem/renderdevicebase.h:323
// member functions: 41
// member variables: 15
// vtable entries: 2
// class size: 376
class CSwapChainBase {
	int ()(void) * * _vptr.CSwapChainBase; /* 0 8 */
	/* rendersystem/renderdevicebase.h:326 */
	void CSwapChainBase(CSwapChainBase* );
	/* rendersystem/renderdevicebase.h:337 */
	virtual void ~CSwapChainBase(CSwapChainBase* );
	/* rendersystem/renderdevicebase.h:339 */
	virtual int GetWidth(const CSwapChainBase* );
	/* rendersystem/renderdevicebase.h:340 */
	virtual int GetHeight(const CSwapChainBase* );
	/* rendersystem/renderdevicebase.h:341 */
	const RenderDeviceInfo_t& GetRenderDeviceInfo(const CSwapChainBase* );
	/* rendersystem/renderdevicebase.h:342 */
	PlatWindow_t GetPlatWindowHandle(const CSwapChainBase* );
	/* rendersystem/renderdevicebase.h:343 */
	OsSpecificWindowHandle_t GetOsSpecificWindowHandle(const CSwapChainBase* );
	/* rendersystem/renderdevicebase.h:344 */
	HRenderTexture GetColorTexture(const CSwapChainBase* );
	/* rendersystem/renderdevicebase.h:345 */
	HRenderTexture GetDepthTexture(const CSwapChainBase* );
	/* rendersystem/renderdevicebase.h:346 */
	ImageFormat GetSwapchainDepthFormat(const CSwapChainBase* );
	/* rendersystem/renderdevicebase.h:347 */
	const char* GetDebugName(const CSwapChainBase* );
	/* rendersystem/renderdevicebase.cpp:3309 */
	void SetGPUFrameTimeMS(CSwapChainBase* , float, uint32);
	/* rendersystem/renderdevicebase.h:349 */
	float GetLastGPUFrameTimeMS(const CSwapChainBase* );
	/* rendersystem/renderdevicebase.h:350 */
	uint32 GetLastGPUFrameTimeNumber(const CSwapChainBase* );
	/* rendersystem/renderdevicebase.cpp:2949 */
	bool HasOutstandingPresents(const CSwapChainBase* );
	/* rendersystem/renderdevicebase.cpp:2961 */
	bool WaitOnPresent(const CSwapChainBase* );
	/* rendersystem/renderdevicebase.cpp:3009 */
	void OnPresentQueued(const CSwapChainBase* , int);
	/* rendersystem/renderdevicebase.cpp:3018 */
	void OnPresentCompleted(const CSwapChainBase* , int);
	/* rendersystem/renderdevicebase.cpp:3026 */
	void WaitForOutstandingPresents(const CSwapChainBase* );
protected:
	PlatWindow_t m_hPlatWnd; /* 8 8 */
	OsSpecificWindowHandle_t m_hOsWnd; /* 16 8 */
	RenderDeviceInfo_t m_Mode; /* 24 48 */
	HRenderTextureStrong m_hColorTexture; /* 72 8 */
	HRenderTextureStrong m_hDepthTexture; /* 80 8 */
	char m_debugName[256]; /* 88 256 */
	CInterlockedInt m_nOutstandingPresents __attribute__((__aligned__(4))); /* 344 4 */
	CInterlockedInt m_nLastPresentQueued __attribute__((__aligned__(4))); /* 348 4 */
	CInterlockedInt m_nLastPresentCompleted __attribute__((__aligned__(4))); /* 352 4 */
	int m_nMaxOutstandingPresents; /* 356 4 */
	bool m_bUse32BitDepthBuffer; /* 360 1 */
	ImageFormat m_n32BitDepthBufferFormat; /* 364 4 */
	float m_flLastGPUFrameTimeMS; /* 368 4 */
	uint32 m_nLastGPUFrameTimeNumber; /* 372 4 */
	/* rendersystem/renderdevicebase.cpp:62 */
	void SetWindowHandles(CSwapChainBase* , PlatWindow_t, OsSpecificWindowHandle_t);
	void CSwapChainBase(class CSwapChainBase *); /* linkage=_ZN14CSwapChainBaseC4Ev */
	virtual void ~CSwapChainBase(class CSwapChainBase *); /* linkage=_ZN14CSwapChainBaseD4Ev */
	/* <1ae9a5> rendersystem/renderdevicebase.h:339 */
	virtual int GetWidth(const class CSwapChainBase  *); /* linkage=_ZNK14CSwapChainBase8GetWidthEv */
	/* <1ae9cf> rendersystem/renderdevicebase.h:340 */
	virtual int GetHeight(const class CSwapChainBase  *); /* linkage=_ZNK14CSwapChainBase9GetHeightEv */
	const class RenderDeviceInfo_t  & GetRenderDeviceInfo(const class CSwapChainBase  *); /* linkage=_ZNK14CSwapChainBase19GetRenderDeviceInfoEv */
	PlatWindow_t GetPlatWindowHandle(const class CSwapChainBase  *); /* linkage=_ZNK14CSwapChainBase19GetPlatWindowHandleEv */
	OsSpecificWindowHandle_t GetOsSpecificWindowHandle(const class CSwapChainBase  *); /* linkage=_ZNK14CSwapChainBase25GetOsSpecificWindowHandleEv */
	HRenderTexture GetColorTexture(const class CSwapChainBase  *); /* linkage=_ZNK14CSwapChainBase15GetColorTextureEv */
	HRenderTexture GetDepthTexture(const class CSwapChainBase  *); /* linkage=_ZNK14CSwapChainBase15GetDepthTextureEv */
	enum ImageFormat GetSwapchainDepthFormat(const class CSwapChainBase  *); /* linkage=_ZNK14CSwapChainBase23GetSwapchainDepthFormatEv */
	const char  * GetDebugName(const class CSwapChainBase  *); /* linkage=_ZNK14CSwapChainBase12GetDebugNameEv */
	/* <1b6efa> rendersystem/renderdevicebase.cpp:3309 */
	void SetGPUFrameTimeMS(class CSwapChainBase *, float, uint32); /* linkage=_ZN14CSwapChainBase17SetGPUFrameTimeMSEfj */
	float GetLastGPUFrameTimeMS(const class CSwapChainBase  *); /* linkage=_ZNK14CSwapChainBase21GetLastGPUFrameTimeMSEv */
	uint32 GetLastGPUFrameTimeNumber(const class CSwapChainBase  *); /* linkage=_ZNK14CSwapChainBase25GetLastGPUFrameTimeNumberEv */
	/* <1b66d7> rendersystem/renderdevicebase.cpp:2949 */
	bool HasOutstandingPresents(const class CSwapChainBase  *); /* linkage=_ZNK14CSwapChainBase22HasOutstandingPresentsEv */
	bool WaitOnPresent(const class CSwapChainBase  *); /* linkage=_ZNK14CSwapChainBase13WaitOnPresentEv */
	/* <1b6732> rendersystem/renderdevicebase.cpp:3009 */
	void OnPresentQueued(const class CSwapChainBase  *, int); /* linkage=_ZNK14CSwapChainBase15OnPresentQueuedEi */
	/* <1b6882> rendersystem/renderdevicebase.cpp:3018 */
	void OnPresentCompleted(const class CSwapChainBase  *, int); /* linkage=_ZNK14CSwapChainBase18OnPresentCompletedEi */
	/* <1b69d2> rendersystem/renderdevicebase.cpp:3026 */
	void WaitForOutstandingPresents(const class CSwapChainBase  *); /* linkage=_ZNK14CSwapChainBase26WaitForOutstandingPresentsEv */
	void SetWindowHandles(class CSwapChainBase *, PlatWindow_t, OsSpecificWindowHandle_t); /* linkage=_ZN14CSwapChainBase16SetWindowHandlesEP14PlatWindow_t__P26OsSpecificWindowHandle_t__ */
	void CSwapChainBase(class CSwapChainBase *, const class CSwapChainBase  &); /* linkage=_ZN14CSwapChainBaseC4ERKS_ */
} __attribute__((__aligned__(8)));

// <001A8676> rendersystem/renderdevicebase.h:337
// function calls: 2
void CSwapChainBase::~CSwapChainBase()
{
	CStrongHandle<InfoForResourceTypeCTextureBase>::~CStrongHandle(); // 337
	CStrongHandle<InfoForResourceTypeCTextureBase>::~CStrongHandle(); // 337
} /* size: 50, inline expansions: 2 (10 bytes) */

// <001A857B> rendersystem/renderdevicebase.h:337
// function calls: 3
void CSwapChainBase::~CSwapChainBase()
{
	CStrongHandle<InfoForResourceTypeCTextureBase>::~CStrongHandle(); // 337
	CStrongHandle<InfoForResourceTypeCTextureBase>::~CStrongHandle(); // 337
	CSwapChainBase::~CSwapChainBase(); // 337
} /* size: 63, inline expansions: 3 (39 bytes) */

// <001A8562> rendersystem/renderdevicebase.h:337
inline void CSwapChainBase::~CSwapChainBase()
{
} /* size: 0 */

// <001AE9A5> rendersystem/renderdevicebase.h:339
void CSwapChainBase::GetWidth()
{
} /* size: 8 */

// <001A8549> rendersystem/renderdevicebase.h:339
inline void CSwapChainBase::GetWidth()
{
} /* size: 0 */

// <001AE9CF> rendersystem/renderdevicebase.h:340
void CSwapChainBase::GetHeight()
{
} /* size: 8 */

// <001A8530> rendersystem/renderdevicebase.h:340
inline void CSwapChainBase::GetHeight()
{
} /* size: 0 */

// <001A8517> rendersystem/renderdevicebase.h:341
inline void CSwapChainBase::GetRenderDeviceInfo()
{
} /* size: 0 */

// <001A84FE> rendersystem/renderdevicebase.h:342
inline void CSwapChainBase::GetPlatWindowHandle()
{
} /* size: 0 */

// <001A84E5> rendersystem/renderdevicebase.h:343
inline void CSwapChainBase::GetOsSpecificWindowHandle()
{
} /* size: 0 */

// <001A84CC> rendersystem/renderdevicebase.h:344
inline void CSwapChainBase::GetColorTexture()
{
} /* size: 0 */

// <001A84B3> rendersystem/renderdevicebase.h:345
inline void CSwapChainBase::GetDepthTexture()
{
} /* size: 0 */

// <001A849A> rendersystem/renderdevicebase.h:349
inline void CSwapChainBase::GetLastGPUFrameTimeMS()
{
} /* size: 0 */

// <001A8481> rendersystem/renderdevicebase.h:350
inline void CSwapChainBase::GetLastGPUFrameTimeNumber()
{
} /* size: 0 */

// <0013F6E1> rendersystem/renderdevicebase.h:389
// member functions: 540
// member variables: 90
// vtable entries: 203
// class size: 151,744
class CRenderDeviceBase : public IRenderDevice {
	/* rendersystem/renderdevicebase.h:392 */
	enum IPCMessage_t {
		RELEASE_MESSAGE = 1584664032,
		REACQUIRE_MESSAGE = 1584664033,
		EVICT_MESSAGE = 1584664034,
	};
	/* rendersystem/renderdevicebase.h:788 */
	struct PerFrameMemoryStack_t {
		CMemoryStack * m_pMemStack; /* 0 8 */
		int m_nCurrentAllocations; /* 8 4 */
		int m_nPresentId; /* 12 4 */
		/* rendersystem/renderdevicebase.h:794 */
		void PerFrameMemoryStack_t(PerFrameMemoryStack_t* );
		/* rendersystem/renderdevicebase.h:795 */
		void ~PerFrameMemoryStack_t(PerFrameMemoryStack_t* );
	};
	/* rendersystem/renderdevicebase.h:838 */
	struct MultiViewCBPool_t {
		/* rendersystem/renderdevicebase.h:840 */
		void MultiViewCBPool_t(MultiViewCBPool_t* );
		ConstantBuffer_t * m_pList; /* 0 8 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* rendersystem/renderdevicebase.h:858 */
	struct FencedWaitingList_t<void, void> {
		/* rendersystem/renderdevicebase.h:860 */
		void FencedWaitingList_t(FencedWaitingList_t<void, void>* );
		FencedWaitingList_t<void, void> * m_pNext; /* 0 8 */
		void * m_pFence; /* 8 8 */
		void * m_pResourceList; /* 16 8 */
	};
	/* rendersystem/renderdevicebase.h:858 */
	struct FencedWaitingList_t<CPipelineFence, ConstantBuffer_t> {
		/* rendersystem/renderdevicebase.h:860 */
		void FencedWaitingList_t(FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>* );
		FencedWaitingList_t<CPipelineFence, ConstantBuffer_t> * m_pNext; /* 0 8 */
		CPipelineFence * m_pFence; /* 8 8 */
		ConstantBuffer_t * m_pResourceList; /* 16 8 */
	};
	/* tag__fprintf: volatile_type tag not supported! */;
	/* rendersystem/renderdevicebase.h:873 */
	struct FencedWaitingListTSQueue_t<CPipelineFence, ConstantBuffer_t> : public CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>, CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>, CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>, &CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>::m_pNext> {
	public:
		/* class CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>, CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>, CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>, &CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>::m_pNext> <ancestor>; */ /* 0 16 */
		/* rendersystem/renderdevicebase.h:877 */
		ConstantBuffer_t* FencedPop(FencedWaitingListTSQueue_t<CPipelineFence, ConstantBuffer_t>* , CUtlMemoryPoolMT& );
		/* rendersystem/renderdevicebase.h:893 */
		void FlushToResourceList<CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext> >(FencedWaitingListTSQueue_t<CPipelineFence, ConstantBuffer_t>* , CUtlMemoryPoolMT& , CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext>& );
		void FencedWaitingListTSQueue_t(FencedWaitingListTSQueue_t<CPipelineFence, ConstantBuffer_t>* );
	} __attribute__((__aligned__(8)));
	/* rendersystem/renderdevicebase.h:858 */
	struct FencedWaitingList_t<CDeviceFence, ConstantBuffer_t> {
		/* rendersystem/renderdevicebase.h:860 */
		void FencedWaitingList_t(FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>* );
		FencedWaitingList_t<CDeviceFence, ConstantBuffer_t> * m_pNext; /* 0 8 */
		CDeviceFence * m_pFence; /* 8 8 */
		ConstantBuffer_t * m_pResourceList; /* 16 8 */
	};
	/* tag__fprintf: volatile_type tag not supported! */;
	/* rendersystem/renderdevicebase.h:873 */
	struct FencedWaitingListTSQueue_t<CDeviceFence, ConstantBuffer_t> : public CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>, CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>, CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>, &CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>::m_pNext> {
	public:
		/* class CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>, CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>, CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>, &CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>::m_pNext> <ancestor>; */ /* 0 16 */
		/* rendersystem/renderdevicebase.h:877 */
		ConstantBuffer_t* FencedPop(FencedWaitingListTSQueue_t<CDeviceFence, ConstantBuffer_t>* , CUtlMemoryPoolMT& );
		/* rendersystem/renderdevicebase.h:893 */
		void FlushToResourceList<CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext> >(FencedWaitingListTSQueue_t<CDeviceFence, ConstantBuffer_t>* , CUtlMemoryPoolMT& , CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext>& );
		void FencedWaitingListTSQueue_t(FencedWaitingListTSQueue_t<CDeviceFence, ConstantBuffer_t>* );
	} __attribute__((__aligned__(8)));
	/* rendersystem/renderdevicebase.h:949 */
	class CCommandMemberInitializer_PrintGPUMemoryStatsCommand {
		/* rendersystem/renderdevicebase.h:949 */
		void CCommandMemberInitializer_PrintGPUMemoryStatsCommand(CCommandMemberInitializer_PrintGPUMemoryStatsCommand* );
	private:
		CConCommandMemberAccessor<CRenderDeviceBase> m_ConCommandAccessor; /* 0 160 */
		void ~CCommandMemberInitializer_PrintGPUMemoryStatsCommand(CCommandMemberInitializer_PrintGPUMemoryStatsCommand* );
	};
	/* rendersystem/renderdevicebase.h:971 */
	struct FallbackTextureCopyRequest_t {
		void * m_pAPITexture; /* 0 8 */
		const void * m_pTextureData; /* 8 8 */
	};
	/* tag__fprintf: const_type tag not supported! */;
public:
	/* class IRenderDevice <ancestor>; */ /* 0 16 */
	void CRenderDeviceBase(CRenderDeviceBase* , const CRenderDeviceBase& );
	/* rendersystem/renderdevicebase.cpp:2763 */
	virtual void DestroySwapChain(CRenderDeviceBase* , SwapChainHandle_t);
	/* rendersystem/renderdevicebase.cpp:2893 */
	virtual const RenderDeviceInfo_t& GetSwapChainInfo(const CRenderDeviceBase* , SwapChainHandle_t);
	/* rendersystem/renderdevicebase.cpp:2839 */
	virtual PlatWindow_t GetSwapChainPlatWindow(const CRenderDeviceBase* , SwapChainHandle_t);
	/* rendersystem/renderdevicebase.cpp:2849 */
	virtual OsSpecificWindowHandle_t GetSwapChainOsSpecificWindow(const CRenderDeviceBase* , SwapChainHandle_t);
	/* rendersystem/renderdevicebase.cpp:2784 */
	virtual bool CanRenderToSwapChain(const CRenderDeviceBase* , SwapChainHandle_t);
	/* rendersystem/renderdevicebase.cpp:2794 */
	virtual HRenderTexture GetSwapChainTexture(CRenderDeviceBase* , SwapChainHandle_t, SwapChainBuffer_t);
	/* rendersystem/renderdevicebase.cpp:2803 */
	virtual bool GetSwapChainFromTexture(CRenderDeviceBase* , HRenderTexture, SwapChainHandle_t* , SwapChainBuffer_t* );
	/* rendersystem/renderdevicebase.cpp:2859 */
	virtual bool IsTextureSwapChain(const CRenderDeviceBase* , HRenderTexture);
	/* rendersystem/renderdevicebase.cpp:2867 */
	virtual ImageFormat GetBackBufferFormat(const CRenderDeviceBase* , SwapChainHandle_t);
	/* rendersystem/renderdevicebase.cpp:2875 */
	virtual void GetBackBufferDimensions(const CRenderDeviceBase* , SwapChainHandle_t, int* , int* );
	/* rendersystem/renderdevicebase.h:411 */
	virtual bool IsWindowResizingEnabled(const CRenderDeviceBase* );
	/* rendersystem/renderdevicebase.cpp:2016 */
	virtual const char* GetShaderVersionString(const CRenderDeviceBase* , RenderShaderType_t);
	/* rendersystem/renderdevicebase.h:413 */
	virtual void ForceDeviceLost(CRenderDeviceBase* );
	/* rendersystem/renderdevicebase.cpp:909 */
	virtual void GetRenderTargetDescDimensions(CRenderDeviceBase* , const RenderTargetDesc_t& , int* , int* );
	/* rendersystem/renderdevicebase.cpp:2059 */
	virtual RenderShaderHandle_t CreateShader(CRenderDeviceBase* , RenderShaderType_t, unique_ptr<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >, const char* );
	/* rendersystem/renderdevicebase.cpp:2082 */
	virtual void DestroyShader(CRenderDeviceBase* , RenderShaderType_t, RenderShaderHandle_t);
	/* rendersystem/renderdevicebase.cpp:2103 */
	virtual void GetShaderStats(CRenderDeviceBase* , RenderShaderStats_t* , RenderShaderType_t, RenderShaderHandle_t);
	/* rendersystem/renderdevicebase.cpp:2111 */
	virtual RsRasterizerStateHandle_t FindOrCreateRasterizerState(CRenderDeviceBase* , const RsRasterizerStateDesc_t* );
	/* rendersystem/renderdevicebase.cpp:2124 */
	virtual RsDepthStencilStateHandle_t FindOrCreateDepthStencilState(CRenderDeviceBase* , const RsDepthStencilStateDesc_t* );
	/* rendersystem/renderdevicebase.cpp:2131 */
	virtual const RsDepthStencilStateDesc_t* GetDepthStencilStateDesc(const CRenderDeviceBase* , RsDepthStencilStateHandle_t);
	/* rendersystem/renderdevicebase.cpp:2118 */
	virtual const RsRasterizerStateDesc_t* GetRasterizerStateDesc(const CRenderDeviceBase* , RsRasterizerStateHandle_t);
	/* rendersystem/renderdevicebase.cpp:2137 */
	virtual RsBlendStateHandle_t FindOrCreateBlendState(CRenderDeviceBase* , const RsBlendStateDesc_t* );
	/* rendersystem/renderdevicebase.cpp:1195 */
	virtual IRenderContext* CreateRenderContext(CRenderDeviceBase* , uint, RenderContextCreationInfo_t* , const char* , ...);
	/* rendersystem/renderdevicebase.cpp:1208 */
	virtual void ReleaseRenderContext(CRenderDeviceBase* , IRenderContext* );
	/* rendersystem/renderdevicebase.cpp:1237 */
	virtual void DiscardDisplayList(CRenderDeviceBase* , CDisplayList* );
	/* rendersystem/renderdevicebase.cpp:1220 */
	virtual void SubmitDisplayLists(CRenderDeviceBase* , const DisplayListToSubmit_t* , int);
	/* rendersystem/renderdevicebase.cpp:1162 */
	virtual CDependencyDescriptor* GetDependencyDescriptor(CRenderDeviceBase* , int, const char* );
	/* rendersystem/renderdevicebase.cpp:596 */
	virtual void BeginRendering(CRenderDeviceBase* );
	/* rendersystem/renderdevicebase.cpp:600 */
	virtual void BeginSubmittingDisplayLists(CRenderDeviceBase* , SwapChainHandle_t);
	/* rendersystem/renderdevicebase.cpp:604 */
	virtual bool Present(CRenderDeviceBase* , SwapChainHandle_t);
	/* rendersystem/renderdevicebase.cpp:282 */
	virtual void OnPresentSubmitted(CRenderDeviceBase* );
	/* rendersystem/renderdevicebase.cpp:287 */
	CPipelineFence* GetPresentFence(CRenderDeviceBase* );
	/* rendersystem/renderdevicebase.cpp:299 */
	CPipelineFence* OnQueuePresent(CRenderDeviceBase* );
	/* rendersystem/renderdevicebase.cpp:314 */
	virtual void QueueFencedRecycling(CRenderDeviceBase* , CPipelineFence* );
	/* rendersystem/renderdevicebase.cpp:330 */
	void FlushDynamicConstantBufferRecyclingQueues(CRenderDeviceBase* );
	/* rendersystem/renderdevicebase.cpp:892 */
	virtual void OnFlushSubmitted(CRenderDeviceBase* );
	/* rendersystem/renderdevicebase.cpp:357 */
	virtual void OnPresentCompleted(CRenderDeviceBase* , SwapChainHandle_t, int, CDeviceFence* );
	/* rendersystem/renderdevicebase.cpp:886 */
	virtual void Flush(CRenderDeviceBase* );
	/* rendersystem/renderdevicebase.cpp:902 */
	virtual void ForceFlushGPU(CRenderDeviceBase* , SwapChainHandle_t);
	/* rendersystem/renderdevicebase.cpp:1694 */
	virtual HRenderTexture FindOrCreateTexture(CRenderDeviceBase* , const char* , bool, const CTextureCreationDesc* , const CTextureDesc* , const void* , int);
	/* rendersystem/renderdevicebase.cpp:2318 */
	virtual HRenderTexture GetErrorTexture(CRenderDeviceBase* , RenderTextureDimension_t);
	/* rendersystem/renderdevicebase.cpp:2324 */
	virtual HRenderTexture FindOrCreateFileTexture(CRenderDeviceBase* , const char* , RenderSystemAssetFileLoadMode_t);
	/* rendersystem/renderdevicebase.cpp:2334 */
	virtual HRenderTexture FindFileTexture(CRenderDeviceBase* , ResourceId_t, RenderSystemAssetFileLoadMode_t);
	/* rendersystem/renderdevicebase.cpp:2344 */
	virtual HRenderTexture FindOrCreateExternalTexture(CRenderDeviceBase* , const char* , SharedResourceHandle_t);
	/* rendersystem/renderdevicebase.cpp:2349 */
	virtual bool UpdateExternalTexture(CRenderDeviceBase* , HRenderTexture, SharedResourceHandle_t);
	/* rendersystem/renderdevicebase.h:448 */
	virtual const Sheet_t* GetTextureSheet(CRenderDeviceBase* , HRenderTexture);
	/* rendersystem/renderdevicebase.h:450 */
	virtual RenderQueryHandle_t CreateQueryObject(CRenderDeviceBase* , RenderQueryType_t);
	/* rendersystem/renderdevicebase.h:451 */
	virtual RenderQueryState_t GetQueryData(CRenderDeviceBase* , RenderQueryHandle_t, uint64* );
	/* rendersystem/renderdevicebase.h:452 */
	virtual void DeleteQueryObject(CRenderDeviceBase* , RenderQueryHandle_t);
	/* rendersystem/renderdevicebase.cpp:1570 */
	virtual ConstantBufferHandle_t CreateConstantBuffer(CRenderDeviceBase* , ConstantBufferType_t, uint32, void* , const char* );
	/* rendersystem/renderdevicebase.cpp:1613 */
	virtual ConstantBufferHandle_t CreateMultiViewConstantBuffer(CRenderDeviceBase* , ConstantBufferType_t, uint32, uint32, uint32, const char* );
	/* rendersystem/renderdevicebase.cpp:1651 */
	virtual void DestroyConstantBuffer(CRenderDeviceBase* , ConstantBufferHandle_t);
	/* rendersystem/renderdevicebase.cpp:1668 */
	virtual ConstantBufferType_t GetConstantBufferType(const CRenderDeviceBase* , ConstantBufferHandle_t);
	/* rendersystem/renderdevicebase.cpp:1674 */
	virtual uint32 GetConstantBufferSize(const CRenderDeviceBase* , ConstantBufferHandle_t);
	/* rendersystem/renderdevicebase.cpp:1680 */
	virtual uint32 GetMultiViewConstantBufferSizes(const CRenderDeviceBase* , ConstantBufferHandle_t, uint32* , uint32* );
	/* rendersystem/renderdevicebase.cpp:183 */
	virtual void SetDebugFlag(CRenderDeviceBase* , RenderDebugFlag_t, bool);
	/* rendersystem/renderdevicebase.cpp:196 */
	virtual bool GetDebugFlag(const CRenderDeviceBase* , RenderDebugFlag_t);
	/* rendersystem/renderdevicebase.cpp:203 */
	virtual uint GetDebugFlags(const CRenderDeviceBase* );
	/* rendersystem/renderdevicebase.cpp:2515 */
	virtual void GetMonitorDimensions(const CRenderDeviceBase* , int* , int* );
	/* rendersystem/renderdevicebase.cpp:2520 */
	virtual void GetLargestMonitorDimensions(const CRenderDeviceBase* , int* , int* );
	/* rendersystem/renderdevicebase.cpp:1840 */
	virtual void PreloadTextureBits(CRenderDeviceBase* , HRenderTexture, int32);
	/* rendersystem/renderdevicebase.cpp:1845 */
	virtual void UnloadTextureBits(CRenderDeviceBase* , HRenderTexture);
	/* rendersystem/renderdevicebase.cpp:1861 */
	virtual bool AreTextureBitsLoaded(const CRenderDeviceBase* , HRenderTexture);
	/* rendersystem/renderdevicebase.cpp:1851 */
	virtual void SetTextureStreamingPriority(CRenderDeviceBase* , HRenderTexture, RenderTextureStreamingPriority_t);
	/* rendersystem/renderdevicebase.cpp:1856 */
	virtual void MarkTextureUsed(CRenderDeviceBase* , HRenderTexture, int);
	/* rendersystem/renderdevicebase.cpp:1866 */
	virtual const CTextureDesc* GetOnDiskTextureDesc(const CRenderDeviceBase* , HRenderTexture);
	/* rendersystem/renderdevicebase.cpp:1871 */
	virtual const CTextureDesc* GetTextureDesc(const CRenderDeviceBase* , HRenderTexture);
	/* rendersystem/renderdevicebase.cpp:1876 */
	virtual Vector GetTextureAverageColor(const CRenderDeviceBase* , HRenderTexture);
	/* rendersystem/renderdevicebase.cpp:1881 */
	virtual bool GetCubemapRadianceSHConstants(const CRenderDeviceBase* , HRenderTexture, int, CUtlVector<float, CUtlMemory<float, int> >& );
	/* rendersystem/renderdevicebase.cpp:1932 */
	virtual size_t GetTextureStreamingDataOffset(const CRenderDeviceBase* , HRenderTexture);
	/* rendersystem/renderdevicebase.cpp:1922 */
	virtual RenderMultisampleType_t GetTextureMultisampleType(const CRenderDeviceBase* , HRenderTexture);
	/* rendersystem/renderdevicebase.cpp:1927 */
	virtual bool IsTextureSampleableRenderTarget(const CRenderDeviceBase* , HRenderTexture);
	/* rendersystem/renderdevicebase.cpp:1937 */
	virtual bool IsTextureRenderTarget(const CRenderDeviceBase* , HRenderTexture);
	/* rendersystem/renderdevicebase.cpp:1942 */
	virtual void PinTextureInGPUMemory(CRenderDeviceBase* , HRenderTexture);
	/* rendersystem/renderdevicebase.cpp:1947 */
	virtual void UnpinTextureInGPUMemory(CRenderDeviceBase* , HRenderTexture);
	/* rendersystem/renderdevicebase.cpp:1952 */
	virtual int GetTexturePinCount(CRenderDeviceBase* , HRenderTexture);
	/* rendersystem/renderdevicebase.cpp:1957 */
	virtual bool IsTextureCubeMap(const CRenderDeviceBase* , HRenderTexture);
	/* rendersystem/renderdevicebase.cpp:1962 */
	virtual bool IsTextureFullyResident(const CRenderDeviceBase* , HRenderTexture);
	/* rendersystem/renderdevicebase.cpp:1967 */
	virtual void AddTextureResidencyListener(CRenderDeviceBase* , ITextureResidencyListener* );
	/* rendersystem/renderdevicebase.cpp:1972 */
	virtual void RemoveTextureResidencyListener(CRenderDeviceBase* , ITextureResidencyListener* );
	/* rendersystem/renderdevicebase.cpp:1987 */
	virtual const char* GetMultisampleTypeName(const CRenderDeviceBase* , RenderMultisampleType_t);
	/* rendersystem/renderdevicebase.cpp:2553 */
	virtual bool GetPipelineFrameStats(CRenderDeviceBase* , CRenderPipelineFrameStats& );
	/* rendersystem/renderdevicebase.cpp:2559 */
	virtual void ReleasePipelineFrameStats(CRenderDeviceBase* , CRenderPipelineFrameStats& );
	/* rendersystem/renderdevicebase.cpp:939 */
	virtual uint32 ComputeTextureMemorySize(const CRenderDeviceBase* , const CTextureDesc& );
	/* rendersystem/renderdevicebase.cpp:944 */
	virtual void GetTextureResidencyInfo(const CRenderDeviceBase* , CUtlVector<TextureResidencyInfo_t, CUtlMemory<TextureResidencyInfo_t, int> >& , TextureResidencyStats_t& );
	/* rendersystem/renderdevicebase.cpp:949 */
	virtual bool GetSheetSequenceTextureData(CRenderDeviceBase* , HRenderTexture, HRenderTexture* , Vector2D* , int* );
	/* rendersystem/renderdevicebase.cpp:954 */
	virtual ConstantBufferHandle_t GetSheetSequenceTextureDataConstantBuffer(CRenderDeviceBase* , HRenderTexture);
	/* rendersystem/renderdevicebase.cpp:959 */
	virtual void GetSheetCacheTextureSize(CRenderDeviceBase* , int& , int& );
	/* rendersystem/renderdevicebase.cpp:964 */
	virtual HRenderTexture GetSheetMetaDataTexture(const CRenderDeviceBase* );
	/* rendersystem/renderdevicebase.cpp:969 */
	virtual void CommitSheetCacheData(CRenderDeviceBase* );
	/* rendersystem/renderdevicebase.cpp:978 */
	virtual void AppendStatsSummaryString(CRenderDeviceBase* , CBufferString* );
	/* rendersystem/renderdevicebase.cpp:1015 */
	virtual void UnThrottleTextureStreamingForNFrames(CRenderDeviceBase* , uint32);
	/* rendersystem/renderdevicebase.cpp:1020 */
	virtual int GetNumTextureLoadsInFlight(const CRenderDeviceBase* );
	/* rendersystem/renderdevicebase.cpp:1025 */
	virtual void* GetDeviceSpecificInfo(CRenderDeviceBase* , DeviceSpecificInfo_t);
	/* rendersystem/renderdevicebase.cpp:1130 */
	virtual bool ReadBuffer(CRenderDeviceBase* , RenderBufferHandle_t, uint32, void* , uint32);
	/* rendersystem/renderdevicebase.h:515 */
	virtual void* GetDeviceSpecificTexture(CRenderDeviceBase* , HRenderTexture, RenderTextureDimension_t);
	/* rendersystem/renderdevicebase.h:516 */
	virtual void* GetDeviceSpecificImageView(CRenderDeviceBase* , HRenderTexture, RenderTextureDimension_t, RenderColorSpace_t);
	/* rendersystem/renderdevicebase.h:517 */
	virtual void* GetDeviceSpecificBuffer(CRenderDeviceBase* , RenderBufferHandle_t);
	/* rendersystem/renderdevicebase.h:518 */
	virtual void* GetDeviceSpecificBuffer(CRenderDeviceBase* , IndexBufferHandle_t);
	/* rendersystem/renderdevicebase.h:519 */
	virtual void* GetDeviceSpecificBuffer(CRenderDeviceBase* , VertexBufferHandle_t);
	/* rendersystem/renderdevicebase.h:520 */
	virtual void* GetDeviceSpecificDescriptorSet(CRenderDeviceBase* , RenderDescriptorSetHandle_t);
	/* rendersystem/renderdevicebase.h:521 */
	virtual void* GetDeviceSpecificRayTracePipeline(CRenderDeviceBase* , RenderRayTracePipelineHandle_t);
	/* rendersystem/renderdevicebase.cpp:2697 */
	virtual void RegisterMaxSwapChainDimensionsChangedListener(CRenderDeviceBase* , IMaxSwapChainDimensionsChangedListener* );
	/* rendersystem/renderdevicebase.cpp:2707 */
	virtual void UnregisterMaxSwapChainDimensionsChangedListener(CRenderDeviceBase* , IMaxSwapChainDimensionsChangedListener* );
	/* rendersystem/renderdevicebase.cpp:2713 */
	virtual void GetCurrentMaxSwapChainDimensions(const CRenderDeviceBase* , int* , int* );
	/* rendersystem/renderdevicebase.h:1098 */
	virtual ThreadHandle_t GetRenderThreadHandle(const CRenderDeviceBase* );
	/* rendersystem/renderdevicebase.h:1103 */
	virtual ThreadId_t GetRenderThreadId(const CRenderDeviceBase* );
	/* rendersystem/renderdevicebase.cpp:480 */
	virtual bool HasOutstandingPresents(CRenderDeviceBase* , SwapChainHandle_t);
	/* rendersystem/renderdevicebase.cpp:491 */
	virtual void WaitForOutstandingPresents(CRenderDeviceBase* , SwapChainHandle_t);
	/* rendersystem/renderdevicebase.cpp:534 */
	virtual void ResizeEngineWindow(CRenderDeviceBase* , SwapChainHandle_t, PlatWindow_t, RenderDeviceInfo_t);
	/* rendersystem/renderdevicebase.cpp:580 */
	virtual int GetLastValidSheetCacheFrame(CRenderDeviceBase* );
	/* rendersystem/renderdevicebase.h:541 */
	virtual RenderDescriptorSetHandle_t CreateDescriptorSet(CRenderDeviceBase* , int32, const RenderDescriptorDesc_t* , int32, const RenderDescriptorBinding_t* , bool);
	/* rendersystem/renderdevicebase.h:542 */
	virtual void UpdateDescriptorSet(CRenderDeviceBase* , RenderDescriptorSetHandle_t, int32, const RenderDescriptorBinding_t* );
	/* rendersystem/renderdevicebase.h:543 */
	virtual void DestroyDescriptorSet(CRenderDeviceBase* , RenderDescriptorSetHandle_t);
	/* rendersystem/renderdevicebase.h:544 */
	virtual bool AddDescriptorsToGlobalPerFrameDescriptorSet(CRenderDeviceBase* , int32, const RenderDescriptorDesc_t* );
	/* rendersystem/renderdevicebase.h:545 */
	virtual void UpdateGlobalPerFrameDescriptorBindings(CRenderDeviceBase* , int32, const RenderDescriptorBinding_t* );
	/* rendersystem/renderdevicebase.cpp:585 */
	virtual CRenderPassDesc* AllocPooledRenderPassDesc(CRenderDeviceBase* );
	/* rendersystem/renderdevicebase.cpp:590 */
	virtual void FreePooledRenderPassDesc(CRenderDeviceBase* , CRenderPassDesc* );
	/* rendersystem/renderdevicebase.h:549 */
	virtual RenderPassHandle_t CreateRenderPass(CRenderDeviceBase* , const CRenderPassDesc* );
	/* rendersystem/renderdevicebase.h:550 */
	virtual void DestroyRenderPass(CRenderDeviceBase* , RenderPassHandle_t);
	/* rendersystem/renderdevicebase.h:551 */
	virtual int GetClearFlagsSupportedInRenderPass(CRenderDeviceBase* , int, const RenderTargetDesc_t& , const RenderClearInfo_t& );
	/* rendersystem/renderdevicebase.cpp:3184 */
	virtual void PushRenderDeviceFlags(CRenderDeviceBase* , RenderDeviceFlag_t);
	/* rendersystem/renderdevicebase.cpp:3222 */
	virtual void PopRenderDeviceFlags(CRenderDeviceBase* , RenderDeviceFlag_t);
	/* rendersystem/renderdevicebase.h:555 */
	RenderDeviceFlag_t GetRenderDeviceFlags(const CRenderDeviceBase* );
	/* rendersystem/renderdevicebase.h:556 */
	virtual void OnRenderDeviceFlagsEnabled(CRenderDeviceBase* , RenderDeviceFlag_t);
	/* rendersystem/renderdevicebase.h:557 */
	virtual void OnRenderDeviceFlagsDisabled(CRenderDeviceBase* , RenderDeviceFlag_t);
	/* rendersystem/renderdevicebase.cpp:3159 */
	virtual CThreadFastMutex& GetInputLayoutMutex(CRenderDeviceBase* );
	/* rendersystem/renderdevicebase.cpp:3261 */
	virtual bool GetGPUFrameTimeMS(const CRenderDeviceBase* , SwapChainHandle_t, float* , uint32* );
	/* rendersystem/renderdevicebase.cpp:3329 */
	virtual double ConvertTimestampToSeconds(CRenderDeviceBase* , uint64);
	/* rendersystem/renderdevicebase.cpp:2022 */
	virtual void FreeTextureGPUResources(CRenderDeviceBase* , int32, const HRenderTexture* );
	/* rendersystem/renderdevicebase.h:567 */
	virtual bool IsProfilerAttached(CRenderDeviceBase* );
	/* rendersystem/renderdevicebase.h:568 */
	virtual void UnThrottlePipelineCreationForNFrames(CRenderDeviceBase* , uint32);
	/* rendersystem/renderdevicebase.cpp:3343 */
	virtual void SetTextureGlobalMipLODBias(CRenderDeviceBase* , float);
	/* rendersystem/renderdevicebase.h:571 */
	virtual float GetTextureGlobalMipLODBias(const CRenderDeviceBase* );
	/* rendersystem/renderdevicebase.h:573 */
	virtual void RegisterDescriptorSetLayout(CRenderDeviceBase* , CUtlStringToken, RenderDescriptorSetHandle_t);
	/* rendersystem/renderdevicebase.h:574 */
	virtual RenderDescriptorSetHandle_t GetRegisteredDescriptorSetLayout(const CRenderDeviceBase* , CUtlStringToken);
	/* rendersystem/renderdevicebase.h:576 */
	virtual RenderBLASHandle_t CreateBLAS(CRenderDeviceBase* , const BLASCreateDesc_t& , uint32* );
	/* rendersystem/renderdevicebase.h:577 */
	virtual bool IsCompactible(CRenderDeviceBase* , RenderBLASHandle_t);
	/* rendersystem/renderdevicebase.h:578 */
	virtual IsReadyToCompactResult_t IsReadyToCompact(CRenderDeviceBase* , RenderBLASHandle_t);
	/* rendersystem/renderdevicebase.h:579 */
	virtual RenderBLASHandle_t CreateBLASForCompact(CRenderDeviceBase* , RenderBLASHandle_t);
	/* rendersystem/renderdevicebase.h:580 */
	virtual void DestroyBLAS(CRenderDeviceBase* , RenderBLASHandle_t);
	/* rendersystem/renderdevicebase.h:582 */
	virtual RenderTLASHandle_t CreateTLAS(CRenderDeviceBase* , const TLASCreateDesc_t& , TLASInstance_t* , int);
	/* rendersystem/renderdevicebase.h:583 */
	virtual void DestroyTLAS(CRenderDeviceBase* , RenderTLASHandle_t);
	/* rendersystem/renderdevicebase.h:585 */
	virtual RenderRayTracePipelineHandle_t CreateRayTracePipeline(CRenderDeviceBase* , const RayTracePipelineStateCreateDesc_t& );
	/* rendersystem/renderdevicebase.h:586 */
	virtual void DestroyRayTracePipeline(CRenderDeviceBase* , RenderRayTracePipelineHandle_t);
	/* rendersystem/renderdevicebase.h:587 */
	virtual bool IsCreatingRayTracePipelines(CRenderDeviceBase* );
	/* rendersystem/renderdevicebase.h:589 */
	virtual IRaytraceShaderBindingTable* CreateRayTraceShaderBindingTable(CRenderDeviceBase* , const ShaderBindingTableCreateDesc_t& );
	/* rendersystem/renderdevicebase.h:590 */
	virtual void DestroyRayTraceShaderBindingTable(CRenderDeviceBase* , IRaytraceShaderBindingTable* );
	/* rendersystem/renderdevicebase.h:592 */
	virtual bool IsRayTracingSupported(const CRenderDeviceBase* );
	/* rendersystem/renderdevicebase.h:594 */
	virtual bool IsAsyncPresentEnabled(const CRenderDeviceBase* );
	/* rendersystem/renderdevicebase.cpp:3349 */
	virtual void EnableAsyncPresent(CRenderDeviceBase* , bool);
	/* rendersystem/renderdevicebase.cpp:3363 */
	virtual bool StartRenderDocCapture(CRenderDeviceBase* , PlatWindow_t);
	/* rendersystem/renderdevicebase.cpp:3376 */
	virtual bool EndRenderDocCapture(CRenderDeviceBase* , PlatWindow_t);
	/* rendersystem/renderdevicebase.cpp:3389 */
	virtual uint32 GetTextureViewIndex(const CRenderDeviceBase* , HRenderTexture, RenderColorSpace_t, RenderTextureDimension_t);
	/* rendersystem/renderdevicebase.cpp:3405 */
	virtual RenderDescriptorSetHandle_t GetGlobalLateBoundBindlessDescriptorSet(CRenderDeviceBase* );
	/* rendersystem/renderdevicebase.cpp:3435 */
	virtual PooledIndexBufferHandle_t AllocatePooledIndexBuffer(CRenderDeviceBase* , uint, const uint16* , uint* );
	/* rendersystem/renderdevicebase.cpp:3510 */
	virtual void FreePooledIndexBuffer(CRenderDeviceBase* , PooledIndexBufferHandle_t);
	/* rendersystem/renderdevicebase.cpp:3527 */
	virtual uint GetPooledIndexBufferOffset(CRenderDeviceBase* , PooledIndexBufferHandle_t);
	/* rendersystem/renderdevicebase.cpp:3538 */
	virtual IndexBufferHandle_t GetPooledIndexBuffer(CRenderDeviceBase* );
	/* rendersystem/renderdevicebase.cpp:3543 */
	virtual RenderInputLayout_t GetVertexBufferInputLayout(CRenderDeviceBase* , VertexBufferHandle_t);
	/* rendersystem/renderdevicebase.h:609 */
	virtual void TriggerValidationError(CRenderDeviceBase* );
	/* rendersystem/renderdevicebase.h:611 */
	virtual void DefragmentGPUMemory(CRenderDeviceBase* , RenderDefragFlags_t, bool);
	/* rendersystem/renderdevicebase.cpp:157 */
	virtual bool InitDevice(CRenderDeviceBase* , int, int, int);
	/* rendersystem/renderdevicebase.cpp:168 */
	virtual void ShutdownDevice(CRenderDeviceBase* );
	/* rendersystem/renderdevicebase.h:622 */
	virtual bool IsDeactivated(const CRenderDeviceBase* );
	/* rendersystem/renderdevicebase.h:623 */
	virtual bool SupportsMSAAMode(const CRenderDeviceBase* , ImageFormat, bool, RenderMultisampleType_t);
	/* rendersystem/renderdevicebase.h:624 */
	virtual bool SupportsCSAAMode(const CRenderDeviceBase* , ImageFormat, bool, RenderMultisampleType_t, int);
	/* rendersystem/renderdevicebase.cpp:90 */
	void CRenderDeviceBase(CRenderDeviceBase* );
	/* rendersystem/renderdevicebase.cpp:140 */
	virtual void ~CRenderDeviceBase(CRenderDeviceBase* );
	/* rendersystem/renderdevicebase.h:631 */
	virtual void OtherAppInitializing(CRenderDeviceBase* , bool);
	/* rendersystem/renderdevicebase.h:632 */
	virtual void EvictManagedResourcesInternal(CRenderDeviceBase* );
	/* rendersystem/renderdevicebase.h:1059 */
	void* GetIPCHWnd(CRenderDeviceBase* );
	/* rendersystem/renderdevicebase.h:635 */
	void SendIPCMessage(CRenderDeviceBase* , IPCMessage_t);
	/* rendersystem/renderdevicebase.h:1067 */
	int GetContextFrameCount(const CRenderDeviceBase* );
	/* rendersystem/renderdevicebase.h:1072 */
	uint GetHighestFrameCompleted(const CRenderDeviceBase* );
	/* rendersystem/renderdevicebase.cpp:1180 */
	void ReleaseDependencyDescriptor(CRenderDeviceBase* , CDependencyDescriptor* );
	/* rendersystem/renderdevicebase.h:1109 */
	CColorFormatBase* ColorFormat(CRenderDeviceBase* );
	CThreadEvent m_PresentEvent; /* 16 128 */
	/* rendersystem/renderdevicebase.cpp:231 */
	void ProcessRenderThreadEvents(CRenderDeviceBase* );
	/* rendersystem/renderdevicebase.h:1089 */
	EventQueue_t GetEventQueue(const CRenderDeviceBase* );
	/* rendersystem/renderdevicebase.cpp:3100 */
	void* AllocatePooledBackingStore(CRenderDeviceBase* , PooledBackingStoreType_t, int);
	/* rendersystem/renderdevicebase.cpp:3116 */
	void FreePooledBackingStore(CRenderDeviceBase* , PooledBackingStoreType_t, void* );
	/* rendersystem/renderdevicebase.cpp:716 */
	void* AllocatePerFrameData(CRenderDeviceBase* , uint32);
	/* rendersystem/renderdevicebase.cpp:755 */
	void FreePerFrameData(CRenderDeviceBase* , const void* );
	/* rendersystem/renderdevicebase.h:665 */
	bool ShaderStats(const CRenderDeviceBase* );
	/* rendersystem/renderdevicebase.cpp:2591 */
	virtual void PrintGPUMemoryStats(CRenderDeviceBase* );
	/* rendersystem/renderdevicebase.cpp:2626 */
	int ComputeAllocatedBufferMemorySizeMB(const CRenderDeviceBase* );
	/* rendersystem/renderdevicebase.cpp:3165 */
	void QueueFallbackTextureCopy(CRenderDeviceBase* , void* , void* , int);
	/* rendersystem/renderdevicebase.cpp:3316 */
	void SetGPUFrameTimeMS(CRenderDeviceBase* , SwapChainHandle_t, float, uint32);
	/* rendersystem/renderdevicebase.h:674 */
	virtual uint64 GetGPUMemoryFragmentationBytes(const CRenderDeviceBase* );
protected:
	/* rendersystem/renderdevicebase.h:678 */
	void InstallWindowHook(CRenderDeviceBase* , void* );
	/* rendersystem/renderdevicebase.h:679 */
	void RemoveWindowHook(CRenderDeviceBase* , void* );
	/* rendersystem/renderdevicebase.cpp:1998 */
	void SetCurrentThreadAsOwner(CRenderDeviceBase* );
	/* rendersystem/renderdevicebase.cpp:2003 */
	void RemoveThreadOwner(CRenderDeviceBase* );
	/* rendersystem/renderdevicebase.cpp:2008 */
	bool ThreadOwnsDevice(CRenderDeviceBase* );
	/* rendersystem/renderdevicebase.cpp:236 */
	RenderThreadMode_t ReadThreadModeFromCommandLine(const CRenderDeviceBase* );
	/* rendersystem/renderdevicebase.cpp:225 */
	void SetColorFormat(CRenderDeviceBase* , CColorFormatBase* );
	/* rendersystem/renderdevicebase.cpp:253 */
	virtual void PerFrameCleanup(CRenderDeviceBase* , SwapChainHandle_t);
	/* rendersystem/renderdevicebase.cpp:3178 */
	virtual void UpdateStats(const CRenderDeviceBase* );
	/* rendersystem/renderdevicebase.cpp:211 */
	void DestroyRenderContexts(CRenderDeviceBase* );
	/* rendersystem/renderdevicebase.cpp:1246 */
	void SetContextDefaultState(const CRenderDeviceBase* , IRenderContext* );
	/* rendersystem/renderdevicebase.h:1081 */
	uint FrameBeingWorkedOn(const CRenderDeviceBase* );
	/* rendersystem/renderdevicebase.cpp:499 */
	void GetDesiredWindowSize(CRenderDeviceBase* , RenderDeviceInfo_t, PlatWindow_t, int* , int* );
	/* rendersystem/renderdevicebase.h:705 */
	virtual RenderShaderHandle_t CreateVertexShader(CRenderDeviceBase* , unique_ptr<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >, const char* );
	/* rendersystem/renderdevicebase.h:706 */
	virtual void DestroyVertexShader(CRenderDeviceBase* , RenderShaderHandle_t);
	/* rendersystem/renderdevicebase.h:707 */
	virtual RenderShaderHandle_t CreateGeometryShader(CRenderDeviceBase* , unique_ptr<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >, const char* );
	/* rendersystem/renderdevicebase.h:708 */
	virtual void DestroyGeometryShader(CRenderDeviceBase* , RenderShaderHandle_t);
	/* rendersystem/renderdevicebase.h:709 */
	virtual RenderShaderHandle_t CreateComputeShader(CRenderDeviceBase* , unique_ptr<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >, const char* );
	/* rendersystem/renderdevicebase.h:710 */
	virtual void DestroyComputeShader(CRenderDeviceBase* , RenderShaderHandle_t);
	/* rendersystem/renderdevicebase.h:711 */
	virtual RenderShaderHandle_t CreatePixelShader(CRenderDeviceBase* , unique_ptr<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >, const char* );
	/* rendersystem/renderdevicebase.h:712 */
	virtual void DestroyPixelShader(CRenderDeviceBase* , RenderShaderHandle_t);
	/* rendersystem/renderdevicebase.h:713 */
	virtual RenderShaderHandle_t CreateRayTraceShader(CRenderDeviceBase* , unique_ptr<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >, const char* );
	/* rendersystem/renderdevicebase.h:714 */
	virtual void DestroyRayTraceShader(CRenderDeviceBase* , RenderShaderHandle_t);
	/* rendersystem/renderdevicebase.h:717 */
	virtual void* CreateRasterizerStateFromDesc(CRenderDeviceBase* , const RsRasterizerStateDesc_t* );
	/* rendersystem/renderdevicebase.h:718 */
	virtual void* CreateDepthStencilStateFromDesc(CRenderDeviceBase* , const RsDepthStencilStateDesc_t* );
	/* rendersystem/renderdevicebase.h:719 */
	virtual void* CreateBlendStateFromDesc(CRenderDeviceBase* , const RsBlendStateDesc_t* );
	/* rendersystem/renderdevicebase.cpp:2368 */
	void CreateDefaultRenderStateObjects(CRenderDeviceBase* );
	/* rendersystem/renderdevicebase.cpp:2510 */
	void DestroyDefaultRenderStateObjects(CRenderDeviceBase* );
	/* rendersystem/renderdevicebase.cpp:3411 */
	virtual void CreateIndexBufferPool(CRenderDeviceBase* );
	/* rendersystem/renderdevicebase.cpp:1307 */
	virtual ConstantBufferHandle_t CreateConstantBufferInternal(CRenderDeviceBase* , ConstantBufferType_t, uint32, uint32, uint32, uint, const char* );
	/* rendersystem/renderdevicebase.cpp:1334 */
	virtual void FreeConstantBuffer(CRenderDeviceBase* , ConstantBuffer_t* );
	/* rendersystem/renderdevicebase.cpp:1341 */
	virtual uint32 GetRequiredViewConstantBufferAlignment(const CRenderDeviceBase* );
	/* rendersystem/renderdevicebase.h:737 */
	void FreeConstantBuffer(CRenderDeviceBase* , ConstantBufferHandle_t);
	/* rendersystem/renderdevicebase.cpp:1349 */
	ConstantBufferHandle_t AcquirePooledDynamicConstantBuffer(CRenderDeviceBase* , uint32, uint32, uint32, int, uint);
	/* rendersystem/renderdevicebase.cpp:1476 */
	void ReturnPooledDynamicConstantBuffer(CRenderDeviceBase* , ConstantBuffer_t* );
	/* rendersystem/renderdevicebase.cpp:1493 */
	void ShutdownDynamicConstantBufferPools(CRenderDeviceBase* );
	/* rendersystem/renderdevicebase.h:749 */
	void ReleasePooledDynamicConstantBuffer(CRenderDeviceBase* , ConstantBuffer_t* );
	/* rendersystem/renderdevicebase.cpp:1254 */
	IRenderContext* GetPooledRenderContext(CRenderDeviceBase* );
	/* rendersystem/renderdevicebase.cpp:2564 */
	virtual void ProcessGPUProfilerCommand(CRenderDeviceBase* , const RenderPipelineStatsCmd_t& );
	/* rendersystem/renderdevicebase.cpp:645 */
	virtual float GetLastPresentTime(CRenderDeviceBase* );
	/* rendersystem/renderdevicebase.cpp:3121 */
	virtual void AsyncSetTextureData(CRenderDeviceBase* , HRenderTexture, const CTextureDesc* , const void* , int, int, const Rect3D_t* , uint32, const DataRecycleDelegate_t* , RenderAsyncTextureUpdateFlags_t);
	/* rendersystem/renderdevicebase.cpp:636 */
	void OnPresentQueued(CRenderDeviceBase* , SwapChainHandle_t, int);
	/* rendersystem/renderdevicebase.cpp:2755 */
	SwapChainHandle_t AddSwapChain(CRenderDeviceBase* , CSwapChainBase* );
	/* rendersystem/renderdevicebase.cpp:2743 */
	void ComputeMaxSwapChainDimensions(const CRenderDeviceBase* , int32* , int32* );
	/* rendersystem/renderdevicebase.cpp:2719 */
	void UpdateMaxSwapChainDimensionsAndNotifyListeners(CRenderDeviceBase* );
	/* rendersystem/renderdevicebase.cpp:2734 */
	void UpdateMaxSwapChainDimensionsChangedListeners(CRenderDeviceBase* , int, int);
	/* rendersystem/renderdevicebase.cpp:2774 */
	void DestroyAllSwapChains(CRenderDeviceBase* );
	/* rendersystem/renderdevicebase.cpp:650 */
	void IncrementSubmittedFrameCount(CRenderDeviceBase* , int);
	/* rendersystem/renderdevicebase.cpp:659 */
	void SetUsePerFrameMemoryStack(CRenderDeviceBase* , bool);
	/* rendersystem/renderdevicebase.cpp:810 */
	void SanityCheckPerFrameMemoryStacks(CRenderDeviceBase* , int);
	/* rendersystem/renderdevicebase.cpp:850 */
	virtual CDeviceFence* InsertDeviceFence(CRenderDeviceBase* );
	/* rendersystem/renderdevicebase.h:781 */
	virtual GraphicsAPISpecificTextureHandle_t GetGraphicsAPISpecificTextureHandle(CRenderDeviceBase* , HRenderTexture);
	/* rendersystem/renderdevicebase.cpp:1535 */
	void ProcessConstantBufferDeletionQueue(CRenderDeviceBase* , bool);
	/* rendersystem/renderdevicebase.h:785 */
	virtual bool GetTimestampCounterFrequencyInternal(CRenderDeviceBase* , double* );
private:
	/* rendersystem/renderdevicebase.cpp:676 */
	PerFrameMemoryStack_t* AllocatePerFrameMemoryStack(CRenderDeviceBase* , int);
	/* rendersystem/renderdevicebase.cpp:447 */
	bool TryRecyclingPooledConstantBuffers(CRenderDeviceBase* );
protected:
	CInterlockedUInt m_nHighestFrameSubmitted __attribute__((__aligned__(4))); /* 144 4 */
	uint m_nHighestFrameResourcesMayBeStolenFrom; /* 148 4 */
	CInterlockedUInt m_nDebugFlags __attribute__((__aligned__(4))); /* 152 4 */
	ThreadHandle_t m_Thread; /* 160 8 */
	ThreadId_t m_RenderThreadId; /* 168 8 */
	CRenderThreadBase * m_pRenderThread; /* 176 8 */
	CColorFormatBase * m_pColorFormat; /* 184 8 */
	CTSPool<CDependencyDescriptor> m_DependencyPool __attribute__((__aligned__(16))); /* 192 16 */
	CTSPool<CRenderPassDesc> m_RenderPassDescPool __attribute__((__aligned__(16))); /* 208 16 */
	CUtlTSHash<void*, 1024, RsRasterizerStateDesc_t, CUtlTSHashUseKeyHashMethod<RsRasterizerStateDesc_t> > m_rasterizerStateObjects __attribute__((__aligned__(16))); /* 224 49232 */
	CUtlTSHash<void*, 1024, RsDepthStencilStateDesc_t, CUtlTSHashUseKeyHashMethod<RsDepthStencilStateDesc_t> > m_depthStencilStateObjects __attribute__((__aligned__(16))); /* 49456 49232 */
	CUtlTSHash<void*, 1024, RsBlendStateDesc_t, CUtlTSHashUseKeyHashMethod<RsBlendStateDesc_t> > m_blendStateObjects __attribute__((__aligned__(16))); /* 98688 49232 */
	/* rendersystem/renderdevicebase.h:832 */
	typedef CTSFastPushQueue ConstantBufferPool_t;
	ConstantBufferPool_t m_DynamicConstantBufferPools[4][10] __attribute__((__aligned__(8))); /* 147920 640 */
	CUtlVector<CRenderDeviceBase::MultiViewCBPool_t, CUtlMemory<CRenderDeviceBase::MultiViewCBPool_t, int> > m_mvDynamicConstantBufferPool; /* 148560 32 */
	CThreadFastMutex m_mvDynamicConstantBufferPoolLock; /* 148592 24 */
	ConstantBufferPool_t m_PooledDynamicConstantBuffersReleasedThisFrame __attribute__((__aligned__(8))); /* 148616 16 */
	CInterlockedUInt m_nConstantBuffersInPool __attribute__((__aligned__(4))); /* 148632 4 */
	CInterlockedUInt m_nSingleViewConstantBuffersInPool __attribute__((__aligned__(4))); /* 148636 4 */
	CInterlockedUInt m_nMultiViewConstantBuffersInPool __attribute__((__aligned__(4))); /* 148640 4 */
	CUtlMemoryPoolMT m_FencedWaitingListMemory __attribute__((__aligned__(8))); /* 148648 56 */
	FencedWaitingListTSQueue_t<CPipelineFence, ConstantBuffer_t> m_ConstantBuffersWaitingForPipelineFence __attribute__((__aligned__(8))); /* 148704 16 */
	FencedWaitingListTSQueue_t<CDeviceFence, ConstantBuffer_t> m_ConstantBuffersWaitingForDeviceFence __attribute__((__aligned__(8))); /* 148720 16 */
	CTSPointerList<IRenderContext> m_RenderContextPool __attribute__((__aligned__(16))); /* 148736 16 */
	CInterlockedUInt m_nRenderContexts __attribute__((__aligned__(4))); /* 148752 4 */
	CTSQueue<DynamicVertexBufferHandle_t__*, false> m_DynamicVertexBuffersCreatedByThisDevice __attribute__((__aligned__(16))); /* 148768 64 */
	CTSQueue<DynamicIndexBufferHandle_t__*, false> m_DynamicIndexBuffersCreatedByThisDevice __attribute__((__aligned__(16))); /* 148832 64 */
	CThreadFastMutex m_IBListMutex; /* 148896 24 */
	CUtlIntrusiveDList<CIndexBufferBase> m_IndexBuffers; /* 148920 8 */
	CThreadFastMutex m_VBListMutex; /* 148928 24 */
	CUtlIntrusiveDList<CVertexBufferBase> m_VertexBuffers; /* 148952 8 */
	CUtlIntrusiveDList<CPooledIndexBuffer> m_PooledIndexBuffers; /* 148960 8 */
	IndexBufferHandle_t m_hPooledIndexBuffer; /* 148968 8 */
	unique_ptr<CPoolAllocator, std::default_delete<CPoolAllocator> > m_pPooledIndexBufferAllocator; /* 148976 8 */
	CTSPointerList<void> m_pooledBackingStores[2] __attribute__((__aligned__(16))); /* 148992 32 */
	int m_nAdapter; /* 149024 4 */
	void * m_hWndCookie; /* 149032 8 */
	bool m_bInitialized:1; /* 149040: 0 1 */
	uint8 m_nCaptureSteamVrCompositorTexturesThisFrameMask; /* 149041 1 */
	CTextureDesc m_steamVrCompositorTextureDesc[2]; /* 149044 56 */
	ThreadId_t m_dwThreadId; /* 149104 8 */
	EventQueue_t m_hRenderQueue; /* 149112 8 */
	bool m_bWindowResizable; /* 149120 1 */
	bool m_bShaderStats; /* 149121 1 */
	/* rendersystem/renderdevicebase.cpp:2586 */
	void PrintGPUMemoryStatsCommand(CRenderDeviceBase* , const CCommandContext& , const CCommand& );
	CCommandMemberInitializer_PrintGPUMemoryStatsCommand m_PrintGPUMemoryStatsCommand_register; /* 149128 160 */
	/* rendersystem/renderdevicebase.cpp:2638 */
	void BuildBufferListAndSendToGPUProfiler(const CRenderDeviceBase* );
	/* rendersystem/renderdevicebase.cpp:3068 */
	CPipelineFence* AllocateFence(CRenderDeviceBase* );
	CPipelineFence * m_pNextPresentFence; /* 149288 8 */
	CThreadFastMutex m_windowSizeCallbackMutex; /* 149296 24 */
	CUtlVector<IMaxSwapChainDimensionsChangedListener*, CUtlMemory<IMaxSwapChainDimensionsChangedListener*, int> > m_windowSizeChangeListeners; /* 149320 32 */
	int32 m_nMaxSwapChainWidth; /* 149352 4 */
	int32 m_nMaxSwapChainHeight; /* 149356 4 */
	CUtlFixedLinkedList<CSwapChainBase*> m_SwapChains; /* 149360 80 */
	CTSItemList<CRenderDeviceBase::FallbackTextureCopyRequest_t> m_fallbackTextureCopyQueue[2] __attribute__((__aligned__(16))); /* 149440 64 */
	CInterlockedInt m_nCurrentFallbackTextureQueueIdx __attribute__((__aligned__(4))); /* 149504 4 */
	bool m_bUsePerFrameMemoryStack; /* 149508 1 */
	uint32 m_nNumPerFrameMemoryStackAllocs; /* 149512 4 */
	int m_nMaxInUsePerFrameMemoryStacks; /* 149516 4 */
	PerFrameMemoryStack_t * m_pCurrentStack; /* 149520 8 */
	CUtlVector<CRenderDeviceBase::PerFrameMemoryStack_t*, CUtlMemory<CRenderDeviceBase::PerFrameMemoryStack_t*, int> > m_inUsePerFrameStacks; /* 149528 32 */
	CUtlVector<CRenderDeviceBase::PerFrameMemoryStack_t*, CUtlMemory<CRenderDeviceBase::PerFrameMemoryStack_t*, int> > m_freePerFrameStacks; /* 149560 32 */
	CThreadMutex m_perFrameMemStackMutex; /* 149592 72 */
	float m_flGlobalTextureMipLODBias; /* 149664 4 */
	float m_flGlobalTextureMipLODBiasPrevFrame; /* 149668 4 */
	CRenderResourceMgr m_ResourceMgr; /* 149672 64 */
	CInterlockedInt64 m_nExternalMemorySize __attribute__((__aligned__(8))); /* 149736 8 */
private:
	bool m_bSendBufferList; /* 149744 1 */
	int m_nSheetCacheClearFrame; /* 149748 4 */
	ConstantBufferPool_t m_QueuedCBDeletions __attribute__((__aligned__(8))); /* 149752 16 */
	CThreadFastMutex m_InputLayoutMutex; /* 149768 24 */
	CThreadRWLock_FastRead m_presentFenceRWLock __attribute__((__aligned__(8))); /* 149792 408 */
	void * m_pBuiltinRasterizerStates[3]; /* 150200 24 */
	void * m_pBuiltinDepthStencilState[14]; /* 150224 112 */
	uint32 m_nBuiltinDepthStencilRef[14]; /* 150336 56 */
	void * m_pBuiltinBlendStates[7]; /* 150392 56 */
	RsRasterizerStateHandle_t m_hDefaultRasterizerState; /* 150448 8 */
	RsDepthStencilStateHandle_t m_hDefaultDepthStencilState; /* 150456 8 */
	RsBlendStateHandle_t m_hDefaultBlendState; /* 150464 8 */
	CRenderAttributes m_deviceAttributeList; /* 150480 1184 */
	int m_nCurrentCBCount; /* 151664 4 */
	uint32 m_nCurrentCBBytes; /* 151668 4 */
	float m_flFullscreenGamma; /* 151672 4 */
	CInterlockedFloat m_flLastPresentTime; /* 151676 4 */
	CInterlockedInt m_DeviceFlagRefCounts[1] __attribute__((__aligned__(4))); /* 151680 4 */
	CThreadFastMutex m_DeviceFlagNotificationMutex; /* 151688 24 */
	uintp m_nDeviceFlags; /* 151712 8 */
	float m_flLastGPUFrameTimeMS; /* 151720 4 */
	uint32 m_nLastGPUFrameTimeNumber; /* 151724 4 */
	double m_flOneOverTimestampCounterFrequency; /* 151728 8 */
	bool m_bHasTimestampCounterFrequency; /* 151736 1 */
	CInterlockedInt m_nAsyncPresentEnabled __attribute__((__aligned__(4))); /* 151740 4 */
	/* rendersystem/renderdevicebase.cpp:3554 */
	virtual HRenderTexture FindOrCreateTexture2(CRenderDeviceBase* , const char* , bool, const TextureCreationConfig_t& , const void* , int);
	/* rendersystem/renderdevicebase.cpp:3586 */
	virtual void ClearTexture(CRenderDeviceBase* , HRenderTexture, Color);
	/* rendersystem/renderdevicebase.cpp:3598 */
	virtual void AsyncSetTextureData2(CRenderDeviceBase* , HRenderTexture, const void* , int, Rect3D_t);
	/* rendersystem/renderdevicebase.cpp:3661 */
	virtual void* GetDevicePtr(CRenderDeviceBase* );
	/* rendersystem/renderdevicebase.cpp:3666 */
	virtual void* GetTextureObject(CRenderDeviceBase* , HRenderTexture);
	/* rendersystem/renderdevicebase.cpp:3671 */
	virtual bool IsRenderDocEnabled(CRenderDeviceBase* );
	/* rendersystem/renderdevicebase.cpp:3676 */
	virtual void SetInMainThreadRenderBlock(CRenderDeviceBase* , bool);
	/* rendersystem/renderdevicebase.cpp:3681 */
	virtual bool IsInMainThreadRenderBlock(CRenderDeviceBase* );
	/* rendersystem/renderdevicebase.cpp:3686 */
	virtual int GetTextureLastUsed(CRenderDeviceBase* , HRenderTexture);
	/* rendersystem/renderdevicebase.cpp:3691 */
	virtual void SetForcePreloadStreamingData(CRenderDeviceBase* , bool);
	/* rendersystem/renderdevicebase.cpp:1145 */
	virtual bool ReadBuffer(CRenderDeviceBase* , IndexBufferHandle_t, uint32, void* , uint32);
	/* rendersystem/renderdevicebase.h:656 */
	typedef IndexType_t SwapChainIndex_t;
	/* rendersystem/renderdevicebase.h:1114 */
	const CSwapChainBase* GetSwapChain<CSwapChainBase>(const CRenderDeviceBase* , SwapChainHandle_t);
	/* <1b6c7f> rendersystem/renderdevicebase.cpp:3068 */
	class CPipelineFence * AllocateFence(class CRenderDeviceBase *); /* linkage=_ZN17CRenderDeviceBase13AllocateFenceEv */
	class CPipelineFence * OnQueuePresent(class CRenderDeviceBase *); /* linkage=_ZN17CRenderDeviceBase14OnQueuePresentEv */
	void OnPresentQueued(class CRenderDeviceBase *, SwapChainHandle_t, int); /* linkage=_ZN17CRenderDeviceBase15OnPresentQueuedEP19SwapChainHandle_t__i */
	ConstantBufferHandle_t AcquirePooledDynamicConstantBuffer(class CRenderDeviceBase *, uint32, uint32, uint32, int, uint); /* linkage=_ZN17CRenderDeviceBase34AcquirePooledDynamicConstantBufferEjjjij */
	const class CSwapChainBase  * GetSwapChain<CSwapChainBase>(const class CRenderDeviceBase  *, SwapChainHandle_t); /* linkage=_ZNK17CRenderDeviceBase12GetSwapChainI14CSwapChainBaseEEPKT_P19SwapChainHandle_t__ */
	int GetContextFrameCount(const class CRenderDeviceBase  *); /* linkage=_ZNK17CRenderDeviceBase20GetContextFrameCountEv */
	void CRenderDeviceBase(class CRenderDeviceBase *, const class CRenderDeviceBase  &); /* linkage=_ZN17CRenderDeviceBaseC4ERKS_ */
	/* <1b6f32> rendersystem/renderdevicebase.cpp:2763 */
	virtual void DestroySwapChain(class CRenderDeviceBase *, SwapChainHandle_t); /* linkage=_ZN17CRenderDeviceBase16DestroySwapChainEP19SwapChainHandle_t__ */
	/* <1b0380> rendersystem/renderdevicebase.cpp:2893 */
	virtual const class RenderDeviceInfo_t  & GetSwapChainInfo(const class CRenderDeviceBase  *, SwapChainHandle_t); /* linkage=_ZNK17CRenderDeviceBase16GetSwapChainInfoEP19SwapChainHandle_t__ */
	virtual PlatWindow_t GetSwapChainPlatWindow(const class CRenderDeviceBase  *, SwapChainHandle_t); /* linkage=_ZNK17CRenderDeviceBase22GetSwapChainPlatWindowEP19SwapChainHandle_t__ */
	virtual OsSpecificWindowHandle_t GetSwapChainOsSpecificWindow(const class CRenderDeviceBase  *, SwapChainHandle_t); /* linkage=_ZNK17CRenderDeviceBase28GetSwapChainOsSpecificWindowEP19SwapChainHandle_t__ */
	/* <1b05d6> rendersystem/renderdevicebase.cpp:2784 */
	virtual bool CanRenderToSwapChain(const class CRenderDeviceBase  *, SwapChainHandle_t); /* linkage=_ZNK17CRenderDeviceBase20CanRenderToSwapChainEP19SwapChainHandle_t__ */
	/* <1afc81> rendersystem/renderdevicebase.cpp:2794 */
	virtual HRenderTexture GetSwapChainTexture(class CRenderDeviceBase *, SwapChainHandle_t, enum SwapChainBuffer_t); /* linkage=_ZN17CRenderDeviceBase19GetSwapChainTextureEP19SwapChainHandle_t__17SwapChainBuffer_t */
	virtual bool GetSwapChainFromTexture(class CRenderDeviceBase *, HRenderTexture, SwapChainHandle_t *, enum SwapChainBuffer_t *); /* linkage=_ZN17CRenderDeviceBase23GetSwapChainFromTextureE11CWeakHandleI31InfoForResourceTypeCTextureBaseEPP19SwapChainHandle_t__P17SwapChainBuffer_t */
	virtual bool IsTextureSwapChain(const class CRenderDeviceBase  *, HRenderTexture); /* linkage=_ZNK17CRenderDeviceBase18IsTextureSwapChainE11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	virtual enum ImageFormat GetBackBufferFormat(const class CRenderDeviceBase  *, SwapChainHandle_t); /* linkage=_ZNK17CRenderDeviceBase19GetBackBufferFormatEP19SwapChainHandle_t__ */
	virtual void GetBackBufferDimensions(const class CRenderDeviceBase  *, SwapChainHandle_t, int *, int *); /* linkage=_ZNK17CRenderDeviceBase23GetBackBufferDimensionsEP19SwapChainHandle_t__PiS2_ */
	virtual bool IsWindowResizingEnabled(const class CRenderDeviceBase  *); /* linkage=_ZNK17CRenderDeviceBase23IsWindowResizingEnabledEv */
	virtual const char  * GetShaderVersionString(const class CRenderDeviceBase  *, enum RenderShaderType_t); /* linkage=_ZNK17CRenderDeviceBase22GetShaderVersionStringE18RenderShaderType_t */
	virtual void ForceDeviceLost(class CRenderDeviceBase *); /* linkage=_ZN17CRenderDeviceBase15ForceDeviceLostEv */
	virtual void GetRenderTargetDescDimensions(class CRenderDeviceBase *, const class RenderTargetDesc_t  &, int *, int *); /* linkage=_ZN17CRenderDeviceBase29GetRenderTargetDescDimensionsERK18RenderTargetDesc_tPiS3_ */
	virtual RenderShaderHandle_t CreateShader(class CRenderDeviceBase *, enum RenderShaderType_t, class unique_ptr<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >, const char  *); /* linkage=_ZN17CRenderDeviceBase12CreateShaderE18RenderShaderType_tSt10unique_ptrI21IRenderShaderByteCodeSt14default_deleteIS2_EEPKc */
	virtual void DestroyShader(class CRenderDeviceBase *, enum RenderShaderType_t, RenderShaderHandle_t); /* linkage=_ZN17CRenderDeviceBase13DestroyShaderE18RenderShaderType_tP22RenderShaderHandle_t__ */
	virtual void GetShaderStats(class CRenderDeviceBase *, class RenderShaderStats_t *, enum RenderShaderType_t, RenderShaderHandle_t); /* linkage=_ZN17CRenderDeviceBase14GetShaderStatsEP19RenderShaderStats_t18RenderShaderType_tP22RenderShaderHandle_t__ */
	/* <1b23c8> rendersystem/renderdevicebase.cpp:2111 */
	virtual RsRasterizerStateHandle_t FindOrCreateRasterizerState(class CRenderDeviceBase *, const class RsRasterizerStateDesc_t  *); /* linkage=_ZN17CRenderDeviceBase27FindOrCreateRasterizerStateEPK23RsRasterizerStateDesc_t */
	/* <1b15d9> rendersystem/renderdevicebase.cpp:2124 */
	virtual RsDepthStencilStateHandle_t FindOrCreateDepthStencilState(class CRenderDeviceBase *, const class RsDepthStencilStateDesc_t  *); /* linkage=_ZN17CRenderDeviceBase29FindOrCreateDepthStencilStateEPK25RsDepthStencilStateDesc_t */
	virtual const class RsDepthStencilStateDesc_t  * GetDepthStencilStateDesc(const class CRenderDeviceBase  *, RsDepthStencilStateHandle_t); /* linkage=_ZNK17CRenderDeviceBase24GetDepthStencilStateDescEP29RsDepthStencilStateHandle_t__ */
	virtual const class RsRasterizerStateDesc_t  * GetRasterizerStateDesc(const class CRenderDeviceBase  *, RsRasterizerStateHandle_t); /* linkage=_ZNK17CRenderDeviceBase22GetRasterizerStateDescEP27RsRasterizerStateHandle_t__ */
	/* <1b318d> rendersystem/renderdevicebase.cpp:2137 */
	virtual RsBlendStateHandle_t FindOrCreateBlendState(class CRenderDeviceBase *, const class RsBlendStateDesc_t  *); /* linkage=_ZN17CRenderDeviceBase22FindOrCreateBlendStateEPK18RsBlendStateDesc_t */
	virtual class IRenderContext * CreateRenderContext(class CRenderDeviceBase *, uint, class RenderContextCreationInfo_t *, const char  *, ...); /* linkage=_ZN17CRenderDeviceBase19CreateRenderContextEjP27RenderContextCreationInfo_tPKcz */
	/* <1a9ec2> rendersystem/renderdevicebase.cpp:1208 */
	virtual void ReleaseRenderContext(class CRenderDeviceBase *, class IRenderContext *); /* linkage=_ZN17CRenderDeviceBase20ReleaseRenderContextEP14IRenderContext */
	virtual void DiscardDisplayList(class CRenderDeviceBase *, class CDisplayList *); /* linkage=_ZN17CRenderDeviceBase18DiscardDisplayListEP12CDisplayList */
	/* <1af06b> rendersystem/renderdevicebase.cpp:1220 */
	virtual void SubmitDisplayLists(class CRenderDeviceBase *, const class DisplayListToSubmit_t  *, int); /* linkage=_ZN17CRenderDeviceBase18SubmitDisplayListsEPK21DisplayListToSubmit_ti */
	virtual class CDependencyDescriptor * GetDependencyDescriptor(class CRenderDeviceBase *, int, const char  *); /* linkage=_ZN17CRenderDeviceBase23GetDependencyDescriptorEiPKc */
	virtual void BeginRendering(class CRenderDeviceBase *); /* linkage=_ZN17CRenderDeviceBase14BeginRenderingEv */
	virtual void BeginSubmittingDisplayLists(class CRenderDeviceBase *, SwapChainHandle_t); /* linkage=_ZN17CRenderDeviceBase27BeginSubmittingDisplayListsEP19SwapChainHandle_t__ */
	virtual bool Present(class CRenderDeviceBase *, SwapChainHandle_t); /* linkage=_ZN17CRenderDeviceBase7PresentEP19SwapChainHandle_t__ */
	virtual void OnPresentSubmitted(class CRenderDeviceBase *); /* linkage=_ZN17CRenderDeviceBase18OnPresentSubmittedEv */
	class CPipelineFence * GetPresentFence(class CRenderDeviceBase *); /* linkage=_ZN17CRenderDeviceBase15GetPresentFenceEv */
	/* <1ab30c> rendersystem/renderdevicebase.cpp:314 */
	virtual void QueueFencedRecycling(class CRenderDeviceBase *, class CPipelineFence *); /* linkage=_ZN17CRenderDeviceBase20QueueFencedRecyclingEP14CPipelineFence */
	void FlushDynamicConstantBufferRecyclingQueues(class CRenderDeviceBase *); /* linkage=_ZN17CRenderDeviceBase41FlushDynamicConstantBufferRecyclingQueuesEv */
	/* <1aeff5> rendersystem/renderdevicebase.cpp:892 */
	virtual void OnFlushSubmitted(class CRenderDeviceBase *); /* linkage=_ZN17CRenderDeviceBase16OnFlushSubmittedEv */
	virtual void OnPresentCompleted(class CRenderDeviceBase *, SwapChainHandle_t, int, class CDeviceFence *); /* linkage=_ZN17CRenderDeviceBase18OnPresentCompletedEP19SwapChainHandle_t__iP12CDeviceFence */
	virtual void Flush(class CRenderDeviceBase *); /* linkage=_ZN17CRenderDeviceBase5FlushEv */
	virtual void ForceFlushGPU(class CRenderDeviceBase *, SwapChainHandle_t); /* linkage=_ZN17CRenderDeviceBase13ForceFlushGPUEP19SwapChainHandle_t__ */
	virtual HRenderTexture FindOrCreateTexture(class CRenderDeviceBase *, const char  *, bool, const class CTextureCreationDesc  *, const class CTextureDesc  *, const void  *, int); /* linkage=_ZN17CRenderDeviceBase19FindOrCreateTextureEPKcbPK20CTextureCreationDescPK12CTextureDescPKvi */
	virtual HRenderTexture GetErrorTexture(class CRenderDeviceBase *, enum RenderTextureDimension_t); /* linkage=_ZN17CRenderDeviceBase15GetErrorTextureE24RenderTextureDimension_t */
	virtual HRenderTexture FindOrCreateFileTexture(class CRenderDeviceBase *, const char  *, enum RenderSystemAssetFileLoadMode_t); /* linkage=_ZN17CRenderDeviceBase23FindOrCreateFileTextureEPKc31RenderSystemAssetFileLoadMode_t */
	virtual HRenderTexture FindFileTexture(class CRenderDeviceBase *, class ResourceId_t, enum RenderSystemAssetFileLoadMode_t); /* linkage=_ZN17CRenderDeviceBase15FindFileTextureE12ResourceId_t31RenderSystemAssetFileLoadMode_t */
	virtual HRenderTexture FindOrCreateExternalTexture(class CRenderDeviceBase *, const char  *, SharedResourceHandle_t); /* linkage=_ZN17CRenderDeviceBase27FindOrCreateExternalTextureEPKcy */
	virtual bool UpdateExternalTexture(class CRenderDeviceBase *, HRenderTexture, SharedResourceHandle_t); /* linkage=_ZN17CRenderDeviceBase21UpdateExternalTextureE11CWeakHandleI31InfoForResourceTypeCTextureBaseEy */
	virtual const class Sheet_t  * GetTextureSheet(class CRenderDeviceBase *, HRenderTexture); /* linkage=_ZN17CRenderDeviceBase15GetTextureSheetE11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	virtual RenderQueryHandle_t CreateQueryObject(class CRenderDeviceBase *, enum RenderQueryType_t); /* linkage=_ZN17CRenderDeviceBase17CreateQueryObjectE17RenderQueryType_t */
	virtual enum RenderQueryState_t GetQueryData(class CRenderDeviceBase *, RenderQueryHandle_t, uint64 *); /* linkage=_ZN17CRenderDeviceBase12GetQueryDataEP21RenderQueryHandle_t__Py */
	virtual void DeleteQueryObject(class CRenderDeviceBase *, RenderQueryHandle_t); /* linkage=_ZN17CRenderDeviceBase17DeleteQueryObjectEP21RenderQueryHandle_t__ */
	virtual ConstantBufferHandle_t CreateConstantBuffer(class CRenderDeviceBase *, enum ConstantBufferType_t, uint32, void *, const char  *); /* linkage=_ZN17CRenderDeviceBase20CreateConstantBufferE20ConstantBufferType_tjPvPKc */
	virtual ConstantBufferHandle_t CreateMultiViewConstantBuffer(class CRenderDeviceBase *, enum ConstantBufferType_t, uint32, uint32, uint32, const char  *); /* linkage=_ZN17CRenderDeviceBase29CreateMultiViewConstantBufferE20ConstantBufferType_tjjjPKc */
	virtual void DestroyConstantBuffer(class CRenderDeviceBase *, ConstantBufferHandle_t); /* linkage=_ZN17CRenderDeviceBase21DestroyConstantBufferEP24ConstantBufferHandle_t__ */
	virtual enum ConstantBufferType_t GetConstantBufferType(const class CRenderDeviceBase  *, ConstantBufferHandle_t); /* linkage=_ZNK17CRenderDeviceBase21GetConstantBufferTypeEP24ConstantBufferHandle_t__ */
	virtual uint32 GetConstantBufferSize(const class CRenderDeviceBase  *, ConstantBufferHandle_t); /* linkage=_ZNK17CRenderDeviceBase21GetConstantBufferSizeEP24ConstantBufferHandle_t__ */
	virtual uint32 GetMultiViewConstantBufferSizes(const class CRenderDeviceBase  *, ConstantBufferHandle_t, uint32 *, uint32 *); /* linkage=_ZNK17CRenderDeviceBase31GetMultiViewConstantBufferSizesEP24ConstantBufferHandle_t__PjS2_ */
	/* <1af9eb> rendersystem/renderdevicebase.cpp:183 */
	virtual void SetDebugFlag(class CRenderDeviceBase *, enum RenderDebugFlag_t, bool); /* linkage=_ZN17CRenderDeviceBase12SetDebugFlagE17RenderDebugFlag_tb */
	/* <1aeb19> rendersystem/renderdevicebase.cpp:196 */
	virtual bool GetDebugFlag(const class CRenderDeviceBase  *, enum RenderDebugFlag_t); /* linkage=_ZNK17CRenderDeviceBase12GetDebugFlagE17RenderDebugFlag_t */
	virtual uint GetDebugFlags(const class CRenderDeviceBase  *); /* linkage=_ZNK17CRenderDeviceBase13GetDebugFlagsEv */
	virtual void GetMonitorDimensions(const class CRenderDeviceBase  *, int *, int *); /* linkage=_ZNK17CRenderDeviceBase20GetMonitorDimensionsEPiS0_ */
	virtual void GetLargestMonitorDimensions(const class CRenderDeviceBase  *, int *, int *); /* linkage=_ZNK17CRenderDeviceBase27GetLargestMonitorDimensionsEPiS0_ */
	virtual void PreloadTextureBits(class CRenderDeviceBase *, HRenderTexture, int32); /* linkage=_ZN17CRenderDeviceBase18PreloadTextureBitsE11CWeakHandleI31InfoForResourceTypeCTextureBaseEi */
	virtual void UnloadTextureBits(class CRenderDeviceBase *, HRenderTexture); /* linkage=_ZN17CRenderDeviceBase17UnloadTextureBitsE11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	virtual bool AreTextureBitsLoaded(const class CRenderDeviceBase  *, HRenderTexture); /* linkage=_ZNK17CRenderDeviceBase20AreTextureBitsLoadedE11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	virtual void SetTextureStreamingPriority(class CRenderDeviceBase *, HRenderTexture, enum RenderTextureStreamingPriority_t); /* linkage=_ZN17CRenderDeviceBase27SetTextureStreamingPriorityE11CWeakHandleI31InfoForResourceTypeCTextureBaseE32RenderTextureStreamingPriority_t */
	virtual void MarkTextureUsed(class CRenderDeviceBase *, HRenderTexture, int); /* linkage=_ZN17CRenderDeviceBase15MarkTextureUsedE11CWeakHandleI31InfoForResourceTypeCTextureBaseEi */
	/* <1aee5f> rendersystem/renderdevicebase.cpp:1866 */
	virtual const class CTextureDesc  * GetOnDiskTextureDesc(const class CRenderDeviceBase  *, HRenderTexture); /* linkage=_ZNK17CRenderDeviceBase20GetOnDiskTextureDescE11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	/* <1aef2a> rendersystem/renderdevicebase.cpp:1871 */
	virtual const class CTextureDesc  * GetTextureDesc(const class CRenderDeviceBase  *, HRenderTexture); /* linkage=_ZNK17CRenderDeviceBase14GetTextureDescE11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	virtual class Vector GetTextureAverageColor(const class CRenderDeviceBase  *, HRenderTexture); /* linkage=_ZNK17CRenderDeviceBase22GetTextureAverageColorE11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	virtual bool GetCubemapRadianceSHConstants(const class CRenderDeviceBase  *, HRenderTexture, int, class CUtlVector<float, CUtlMemory<float, int> > &); /* linkage=_ZNK17CRenderDeviceBase29GetCubemapRadianceSHConstantsE11CWeakHandleI31InfoForResourceTypeCTextureBaseEiR10CUtlVectorIf10CUtlMemoryIfiEE */
	virtual size_t GetTextureStreamingDataOffset(const class CRenderDeviceBase  *, HRenderTexture); /* linkage=_ZNK17CRenderDeviceBase29GetTextureStreamingDataOffsetE11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	virtual enum RenderMultisampleType_t GetTextureMultisampleType(const class CRenderDeviceBase  *, HRenderTexture); /* linkage=_ZNK17CRenderDeviceBase25GetTextureMultisampleTypeE11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	virtual bool IsTextureSampleableRenderTarget(const class CRenderDeviceBase  *, HRenderTexture); /* linkage=_ZNK17CRenderDeviceBase31IsTextureSampleableRenderTargetE11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	virtual bool IsTextureRenderTarget(const class CRenderDeviceBase  *, HRenderTexture); /* linkage=_ZNK17CRenderDeviceBase21IsTextureRenderTargetE11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	virtual void PinTextureInGPUMemory(class CRenderDeviceBase *, HRenderTexture); /* linkage=_ZN17CRenderDeviceBase21PinTextureInGPUMemoryE11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	virtual void UnpinTextureInGPUMemory(class CRenderDeviceBase *, HRenderTexture); /* linkage=_ZN17CRenderDeviceBase23UnpinTextureInGPUMemoryE11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	virtual int GetTexturePinCount(class CRenderDeviceBase *, HRenderTexture); /* linkage=_ZN17CRenderDeviceBase18GetTexturePinCountE11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	virtual bool IsTextureCubeMap(const class CRenderDeviceBase  *, HRenderTexture); /* linkage=_ZNK17CRenderDeviceBase16IsTextureCubeMapE11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	virtual bool IsTextureFullyResident(const class CRenderDeviceBase  *, HRenderTexture); /* linkage=_ZNK17CRenderDeviceBase22IsTextureFullyResidentE11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	virtual void AddTextureResidencyListener(class CRenderDeviceBase *, class ITextureResidencyListener *); /* linkage=_ZN17CRenderDeviceBase27AddTextureResidencyListenerEP25ITextureResidencyListener */
	virtual void RemoveTextureResidencyListener(class CRenderDeviceBase *, class ITextureResidencyListener *); /* linkage=_ZN17CRenderDeviceBase30RemoveTextureResidencyListenerEP25ITextureResidencyListener */
	virtual const char  * GetMultisampleTypeName(const class CRenderDeviceBase  *, enum RenderMultisampleType_t); /* linkage=_ZNK17CRenderDeviceBase22GetMultisampleTypeNameE23RenderMultisampleType_t */
	virtual bool GetPipelineFrameStats(class CRenderDeviceBase *, class CRenderPipelineFrameStats &); /* linkage=_ZN17CRenderDeviceBase21GetPipelineFrameStatsER25CRenderPipelineFrameStats */
	virtual void ReleasePipelineFrameStats(class CRenderDeviceBase *, class CRenderPipelineFrameStats &); /* linkage=_ZN17CRenderDeviceBase25ReleasePipelineFrameStatsER25CRenderPipelineFrameStats */
	virtual uint32 ComputeTextureMemorySize(const class CRenderDeviceBase  *, const class CTextureDesc  &); /* linkage=_ZNK17CRenderDeviceBase24ComputeTextureMemorySizeERK12CTextureDesc */
	virtual void GetTextureResidencyInfo(const class CRenderDeviceBase  *, class CUtlVector<TextureResidencyInfo_t, CUtlMemory<TextureResidencyInfo_t, int> > &, class TextureResidencyStats_t &); /* linkage=_ZNK17CRenderDeviceBase23GetTextureResidencyInfoER10CUtlVectorI22TextureResidencyInfo_t10CUtlMemoryIS1_iEER23TextureResidencyStats_t */
	virtual bool GetSheetSequenceTextureData(class CRenderDeviceBase *, HRenderTexture, HRenderTexture *, class Vector2D *, int *); /* linkage=_ZN17CRenderDeviceBase27GetSheetSequenceTextureDataE11CWeakHandleI31InfoForResourceTypeCTextureBaseEPS2_P8Vector2DPi */
	virtual ConstantBufferHandle_t GetSheetSequenceTextureDataConstantBuffer(class CRenderDeviceBase *, HRenderTexture); /* linkage=_ZN17CRenderDeviceBase41GetSheetSequenceTextureDataConstantBufferE11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	virtual void GetSheetCacheTextureSize(class CRenderDeviceBase *, int &, int &); /* linkage=_ZN17CRenderDeviceBase24GetSheetCacheTextureSizeERiS0_ */
	virtual HRenderTexture GetSheetMetaDataTexture(const class CRenderDeviceBase  *); /* linkage=_ZNK17CRenderDeviceBase23GetSheetMetaDataTextureEv */
	/* <1af15e> rendersystem/renderdevicebase.cpp:969 */
	virtual void CommitSheetCacheData(class CRenderDeviceBase *); /* linkage=_ZN17CRenderDeviceBase20CommitSheetCacheDataEv */
	virtual void AppendStatsSummaryString(class CRenderDeviceBase *, class CBufferString *); /* linkage=_ZN17CRenderDeviceBase24AppendStatsSummaryStringEP13CBufferString */
	virtual void UnThrottleTextureStreamingForNFrames(class CRenderDeviceBase *, uint32); /* linkage=_ZN17CRenderDeviceBase36UnThrottleTextureStreamingForNFramesEj */
	virtual int GetNumTextureLoadsInFlight(const class CRenderDeviceBase  *); /* linkage=_ZNK17CRenderDeviceBase26GetNumTextureLoadsInFlightEv */
	virtual void * GetDeviceSpecificInfo(class CRenderDeviceBase *, enum DeviceSpecificInfo_t); /* linkage=_ZN17CRenderDeviceBase21GetDeviceSpecificInfoE20DeviceSpecificInfo_t */
	/* <1b4470> rendersystem/renderdevicebase.cpp:1130 */
	virtual bool ReadBuffer(class CRenderDeviceBase *, RenderBufferHandle_t, uint32, void *, uint32); /* linkage=_ZN17CRenderDeviceBase10ReadBufferEP22RenderBufferHandle_t__jPvj */
	virtual void * GetDeviceSpecificTexture(class CRenderDeviceBase *, HRenderTexture, enum RenderTextureDimension_t); /* linkage=_ZN17CRenderDeviceBase24GetDeviceSpecificTextureE11CWeakHandleI31InfoForResourceTypeCTextureBaseE24RenderTextureDimension_t */
	virtual void * GetDeviceSpecificImageView(class CRenderDeviceBase *, HRenderTexture, enum RenderTextureDimension_t, enum RenderColorSpace_t); /* linkage=_ZN17CRenderDeviceBase26GetDeviceSpecificImageViewE11CWeakHandleI31InfoForResourceTypeCTextureBaseE24RenderTextureDimension_t18RenderColorSpace_t */
	virtual void * GetDeviceSpecificBuffer(class CRenderDeviceBase *, RenderBufferHandle_t); /* linkage=_ZN17CRenderDeviceBase23GetDeviceSpecificBufferEP22RenderBufferHandle_t__ */
	virtual void * GetDeviceSpecificBuffer(class CRenderDeviceBase *, IndexBufferHandle_t); /* linkage=_ZN17CRenderDeviceBase23GetDeviceSpecificBufferEP21IndexBufferHandle_t__ */
	virtual void * GetDeviceSpecificBuffer(class CRenderDeviceBase *, VertexBufferHandle_t); /* linkage=_ZN17CRenderDeviceBase23GetDeviceSpecificBufferEP22VertexBufferHandle_t__ */
	virtual void * GetDeviceSpecificDescriptorSet(class CRenderDeviceBase *, RenderDescriptorSetHandle_t); /* linkage=_ZN17CRenderDeviceBase30GetDeviceSpecificDescriptorSetEP29RenderDescriptorSetHandle_t__ */
	virtual void * GetDeviceSpecificRayTracePipeline(class CRenderDeviceBase *, RenderRayTracePipelineHandle_t); /* linkage=_ZN17CRenderDeviceBase33GetDeviceSpecificRayTracePipelineEP32RenderRayTracePipelineHandle_t__ */
	virtual void RegisterMaxSwapChainDimensionsChangedListener(class CRenderDeviceBase *, class IMaxSwapChainDimensionsChangedListener *); /* linkage=_ZN17CRenderDeviceBase45RegisterMaxSwapChainDimensionsChangedListenerEP38IMaxSwapChainDimensionsChangedListener */
	virtual void UnregisterMaxSwapChainDimensionsChangedListener(class CRenderDeviceBase *, class IMaxSwapChainDimensionsChangedListener *); /* linkage=_ZN17CRenderDeviceBase47UnregisterMaxSwapChainDimensionsChangedListenerEP38IMaxSwapChainDimensionsChangedListener */
	virtual void GetCurrentMaxSwapChainDimensions(const class CRenderDeviceBase  *, int *, int *); /* linkage=_ZNK17CRenderDeviceBase32GetCurrentMaxSwapChainDimensionsEPiS0_ */
	/* <232711> rendersystem/renderdevicebase.h:1098 */
	virtual ThreadHandle_t GetRenderThreadHandle(const class CRenderDeviceBase  *); /* linkage=_ZNK17CRenderDeviceBase21GetRenderThreadHandleEv */
	virtual ThreadId_t GetRenderThreadId(const class CRenderDeviceBase  *); /* linkage=_ZNK17CRenderDeviceBase17GetRenderThreadIdEv */
	virtual bool HasOutstandingPresents(class CRenderDeviceBase *, SwapChainHandle_t); /* linkage=_ZN17CRenderDeviceBase22HasOutstandingPresentsEP19SwapChainHandle_t__ */
	/* <1afea7> rendersystem/renderdevicebase.cpp:491 */
	virtual void WaitForOutstandingPresents(class CRenderDeviceBase *, SwapChainHandle_t); /* linkage=_ZN17CRenderDeviceBase26WaitForOutstandingPresentsEP19SwapChainHandle_t__ */
	virtual void ResizeEngineWindow(class CRenderDeviceBase *, SwapChainHandle_t, PlatWindow_t, class RenderDeviceInfo_t); /* linkage=_ZN17CRenderDeviceBase18ResizeEngineWindowEP19SwapChainHandle_t__P14PlatWindow_t__18RenderDeviceInfo_t */
	virtual int GetLastValidSheetCacheFrame(class CRenderDeviceBase *); /* linkage=_ZN17CRenderDeviceBase27GetLastValidSheetCacheFrameEv */
	virtual RenderDescriptorSetHandle_t CreateDescriptorSet(class CRenderDeviceBase *, int32, const class RenderDescriptorDesc_t  *, int32, const class RenderDescriptorBinding_t  *, bool); /* linkage=_ZN17CRenderDeviceBase19CreateDescriptorSetEiPK22RenderDescriptorDesc_tiPK25RenderDescriptorBinding_tb */
	virtual void UpdateDescriptorSet(class CRenderDeviceBase *, RenderDescriptorSetHandle_t, int32, const class RenderDescriptorBinding_t  *); /* linkage=_ZN17CRenderDeviceBase19UpdateDescriptorSetEP29RenderDescriptorSetHandle_t__iPK25RenderDescriptorBinding_t */
	virtual void DestroyDescriptorSet(class CRenderDeviceBase *, RenderDescriptorSetHandle_t); /* linkage=_ZN17CRenderDeviceBase20DestroyDescriptorSetEP29RenderDescriptorSetHandle_t__ */
	virtual bool AddDescriptorsToGlobalPerFrameDescriptorSet(class CRenderDeviceBase *, int32, const class RenderDescriptorDesc_t  *); /* linkage=_ZN17CRenderDeviceBase43AddDescriptorsToGlobalPerFrameDescriptorSetEiPK22RenderDescriptorDesc_t */
	virtual void UpdateGlobalPerFrameDescriptorBindings(class CRenderDeviceBase *, int32, const class RenderDescriptorBinding_t  *); /* linkage=_ZN17CRenderDeviceBase38UpdateGlobalPerFrameDescriptorBindingsEiPK25RenderDescriptorBinding_t */
	virtual class CRenderPassDesc * AllocPooledRenderPassDesc(class CRenderDeviceBase *); /* linkage=_ZN17CRenderDeviceBase25AllocPooledRenderPassDescEv */
	virtual void FreePooledRenderPassDesc(class CRenderDeviceBase *, class CRenderPassDesc *); /* linkage=_ZN17CRenderDeviceBase24FreePooledRenderPassDescEP15CRenderPassDesc */
	virtual class RenderPassHandle_t CreateRenderPass(class CRenderDeviceBase *, const class CRenderPassDesc  *); /* linkage=_ZN17CRenderDeviceBase16CreateRenderPassEPK15CRenderPassDesc */
	virtual void DestroyRenderPass(class CRenderDeviceBase *, class RenderPassHandle_t); /* linkage=_ZN17CRenderDeviceBase17DestroyRenderPassE18RenderPassHandle_t */
	virtual int GetClearFlagsSupportedInRenderPass(class CRenderDeviceBase *, int, const class RenderTargetDesc_t  &, const class RenderClearInfo_t  &); /* linkage=_ZN17CRenderDeviceBase34GetClearFlagsSupportedInRenderPassEiRK18RenderTargetDesc_tRK17RenderClearInfo_t */
	virtual void PushRenderDeviceFlags(class CRenderDeviceBase *, enum RenderDeviceFlag_t); /* linkage=_ZN17CRenderDeviceBase21PushRenderDeviceFlagsE18RenderDeviceFlag_t */
	virtual void PopRenderDeviceFlags(class CRenderDeviceBase *, enum RenderDeviceFlag_t); /* linkage=_ZN17CRenderDeviceBase20PopRenderDeviceFlagsE18RenderDeviceFlag_t */
	enum RenderDeviceFlag_t GetRenderDeviceFlags(const class CRenderDeviceBase  *); /* linkage=_ZNK17CRenderDeviceBase20GetRenderDeviceFlagsEv */
	/* <1ae9f9> rendersystem/renderdevicebase.h:556 */
	virtual void OnRenderDeviceFlagsEnabled(class CRenderDeviceBase *, enum RenderDeviceFlag_t); /* linkage=_ZN17CRenderDeviceBase26OnRenderDeviceFlagsEnabledE18RenderDeviceFlag_t */
	/* <1aea2a> rendersystem/renderdevicebase.h:557 */
	virtual void OnRenderDeviceFlagsDisabled(class CRenderDeviceBase *, enum RenderDeviceFlag_t); /* linkage=_ZN17CRenderDeviceBase27OnRenderDeviceFlagsDisabledE18RenderDeviceFlag_t */
	virtual class CThreadFastMutex & GetInputLayoutMutex(class CRenderDeviceBase *); /* linkage=_ZN17CRenderDeviceBase19GetInputLayoutMutexEv */
	virtual bool GetGPUFrameTimeMS(const class CRenderDeviceBase  *, SwapChainHandle_t, float *, uint32 *); /* linkage=_ZNK17CRenderDeviceBase17GetGPUFrameTimeMSEP19SwapChainHandle_t__PfPj */
	virtual double ConvertTimestampToSeconds(class CRenderDeviceBase *, uint64); /* linkage=_ZN17CRenderDeviceBase25ConvertTimestampToSecondsEy */
	/* <1b508c> rendersystem/renderdevicebase.cpp:2022 */
	virtual void FreeTextureGPUResources(class CRenderDeviceBase *, int32, const HRenderTexture  *); /* linkage=_ZN17CRenderDeviceBase23FreeTextureGPUResourcesEiPK11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	virtual bool IsProfilerAttached(class CRenderDeviceBase *); /* linkage=_ZN17CRenderDeviceBase18IsProfilerAttachedEv */
	virtual void UnThrottlePipelineCreationForNFrames(class CRenderDeviceBase *, uint32); /* linkage=_ZN17CRenderDeviceBase36UnThrottlePipelineCreationForNFramesEj */
	virtual void SetTextureGlobalMipLODBias(class CRenderDeviceBase *, float); /* linkage=_ZN17CRenderDeviceBase26SetTextureGlobalMipLODBiasEf */
	virtual float GetTextureGlobalMipLODBias(const class CRenderDeviceBase  *); /* linkage=_ZNK17CRenderDeviceBase26GetTextureGlobalMipLODBiasEv */
	virtual void RegisterDescriptorSetLayout(class CRenderDeviceBase *, class CUtlStringToken, RenderDescriptorSetHandle_t); /* linkage=_ZN17CRenderDeviceBase27RegisterDescriptorSetLayoutE15CUtlStringTokenP29RenderDescriptorSetHandle_t__ */
	virtual RenderDescriptorSetHandle_t GetRegisteredDescriptorSetLayout(const class CRenderDeviceBase  *, class CUtlStringToken); /* linkage=_ZNK17CRenderDeviceBase32GetRegisteredDescriptorSetLayoutE15CUtlStringToken */
	virtual RenderBLASHandle_t CreateBLAS(class CRenderDeviceBase *, const class BLASCreateDesc_t  &, uint32 *); /* linkage=_ZN17CRenderDeviceBase10CreateBLASERK16BLASCreateDesc_tPj */
	virtual bool IsCompactible(class CRenderDeviceBase *, RenderBLASHandle_t); /* linkage=_ZN17CRenderDeviceBase13IsCompactibleEP20RenderBLASHandle_t__ */
	virtual enum IsReadyToCompactResult_t IsReadyToCompact(class CRenderDeviceBase *, RenderBLASHandle_t); /* linkage=_ZN17CRenderDeviceBase16IsReadyToCompactEP20RenderBLASHandle_t__ */
	virtual RenderBLASHandle_t CreateBLASForCompact(class CRenderDeviceBase *, RenderBLASHandle_t); /* linkage=_ZN17CRenderDeviceBase20CreateBLASForCompactEP20RenderBLASHandle_t__ */
	virtual void DestroyBLAS(class CRenderDeviceBase *, RenderBLASHandle_t); /* linkage=_ZN17CRenderDeviceBase11DestroyBLASEP20RenderBLASHandle_t__ */
	virtual RenderTLASHandle_t CreateTLAS(class CRenderDeviceBase *, const class TLASCreateDesc_t  &, class TLASInstance_t *, int); /* linkage=_ZN17CRenderDeviceBase10CreateTLASERK16TLASCreateDesc_tP14TLASInstance_ti */
	virtual void DestroyTLAS(class CRenderDeviceBase *, RenderTLASHandle_t); /* linkage=_ZN17CRenderDeviceBase11DestroyTLASEP20RenderTLASHandle_t__ */
	virtual RenderRayTracePipelineHandle_t CreateRayTracePipeline(class CRenderDeviceBase *, const class RayTracePipelineStateCreateDesc_t  &); /* linkage=_ZN17CRenderDeviceBase22CreateRayTracePipelineERK33RayTracePipelineStateCreateDesc_t */
	virtual void DestroyRayTracePipeline(class CRenderDeviceBase *, RenderRayTracePipelineHandle_t); /* linkage=_ZN17CRenderDeviceBase23DestroyRayTracePipelineEP32RenderRayTracePipelineHandle_t__ */
	virtual bool IsCreatingRayTracePipelines(class CRenderDeviceBase *); /* linkage=_ZN17CRenderDeviceBase27IsCreatingRayTracePipelinesEv */
	virtual class IRaytraceShaderBindingTable * CreateRayTraceShaderBindingTable(class CRenderDeviceBase *, const class ShaderBindingTableCreateDesc_t  &); /* linkage=_ZN17CRenderDeviceBase32CreateRayTraceShaderBindingTableERK30ShaderBindingTableCreateDesc_t */
	virtual void DestroyRayTraceShaderBindingTable(class CRenderDeviceBase *, class IRaytraceShaderBindingTable *); /* linkage=_ZN17CRenderDeviceBase33DestroyRayTraceShaderBindingTableEP27IRaytraceShaderBindingTable */
	virtual bool IsRayTracingSupported(const class CRenderDeviceBase  *); /* linkage=_ZNK17CRenderDeviceBase21IsRayTracingSupportedEv */
	/* <a5e343> ./renderdevicebase.h:594 */
	virtual bool IsAsyncPresentEnabled(const class CRenderDeviceBase  *); /* linkage=_ZNK17CRenderDeviceBase21IsAsyncPresentEnabledEv */
	/* <1af80a> rendersystem/renderdevicebase.cpp:3349 */
	virtual void EnableAsyncPresent(class CRenderDeviceBase *, bool); /* linkage=_ZN17CRenderDeviceBase18EnableAsyncPresentEb */
	/* <1b3f86> rendersystem/renderdevicebase.cpp:3363 */
	virtual bool StartRenderDocCapture(class CRenderDeviceBase *, PlatWindow_t); /* linkage=_ZN17CRenderDeviceBase21StartRenderDocCaptureEP14PlatWindow_t__ */
	/* <1b41fb> rendersystem/renderdevicebase.cpp:3376 */
	virtual bool EndRenderDocCapture(class CRenderDeviceBase *, PlatWindow_t); /* linkage=_ZN17CRenderDeviceBase19EndRenderDocCaptureEP14PlatWindow_t__ */
	virtual uint32 GetTextureViewIndex(const class CRenderDeviceBase  *, HRenderTexture, enum RenderColorSpace_t, enum RenderTextureDimension_t); /* linkage=_ZNK17CRenderDeviceBase19GetTextureViewIndexE11CWeakHandleI31InfoForResourceTypeCTextureBaseE18RenderColorSpace_t24RenderTextureDimension_t */
	virtual RenderDescriptorSetHandle_t GetGlobalLateBoundBindlessDescriptorSet(class CRenderDeviceBase *); /* linkage=_ZN17CRenderDeviceBase39GetGlobalLateBoundBindlessDescriptorSetEv */
	virtual PooledIndexBufferHandle_t AllocatePooledIndexBuffer(class CRenderDeviceBase *, uint, const uint16  *, uint *); /* linkage=_ZN17CRenderDeviceBase25AllocatePooledIndexBufferEjPKtPj */
	/* <1b0fae> rendersystem/renderdevicebase.cpp:3510 */
	virtual void FreePooledIndexBuffer(class CRenderDeviceBase *, PooledIndexBufferHandle_t); /* linkage=_ZN17CRenderDeviceBase21FreePooledIndexBufferEP27PooledIndexBufferHandle_t__ */
	virtual uint GetPooledIndexBufferOffset(class CRenderDeviceBase *, PooledIndexBufferHandle_t); /* linkage=_ZN17CRenderDeviceBase26GetPooledIndexBufferOffsetEP27PooledIndexBufferHandle_t__ */
	virtual IndexBufferHandle_t GetPooledIndexBuffer(class CRenderDeviceBase *); /* linkage=_ZN17CRenderDeviceBase20GetPooledIndexBufferEv */
	virtual RenderInputLayout_t GetVertexBufferInputLayout(class CRenderDeviceBase *, VertexBufferHandle_t); /* linkage=_ZN17CRenderDeviceBase26GetVertexBufferInputLayoutEP22VertexBufferHandle_t__ */
	virtual void TriggerValidationError(class CRenderDeviceBase *); /* linkage=_ZN17CRenderDeviceBase22TriggerValidationErrorEv */
	virtual void DefragmentGPUMemory(class CRenderDeviceBase *, enum RenderDefragFlags_t, bool); /* linkage=_ZN17CRenderDeviceBase19DefragmentGPUMemoryE19RenderDefragFlags_tb */
	virtual bool InitDevice(class CRenderDeviceBase *, int, int, int); /* linkage=_ZN17CRenderDeviceBase10InitDeviceEiii */
	virtual void ShutdownDevice(class CRenderDeviceBase *); /* linkage=_ZN17CRenderDeviceBase14ShutdownDeviceEv */
	virtual bool IsDeactivated(const class CRenderDeviceBase  *); /* linkage=_ZNK17CRenderDeviceBase13IsDeactivatedEv */
	virtual bool SupportsMSAAMode(const class CRenderDeviceBase  *, enum ImageFormat, bool, enum RenderMultisampleType_t); /* linkage=_ZNK17CRenderDeviceBase16SupportsMSAAModeE11ImageFormatb23RenderMultisampleType_t */
	virtual bool SupportsCSAAMode(const class CRenderDeviceBase  *, enum ImageFormat, bool, enum RenderMultisampleType_t, int); /* linkage=_ZNK17CRenderDeviceBase16SupportsCSAAModeE11ImageFormatb23RenderMultisampleType_ti */
	void CRenderDeviceBase(class CRenderDeviceBase *); /* linkage=_ZN17CRenderDeviceBaseC4Ev */
	virtual void ~CRenderDeviceBase(class CRenderDeviceBase *); /* linkage=_ZN17CRenderDeviceBaseD4Ev */
	virtual void OtherAppInitializing(class CRenderDeviceBase *, bool); /* linkage=_ZN17CRenderDeviceBase20OtherAppInitializingEb */
	virtual void EvictManagedResourcesInternal(class CRenderDeviceBase *); /* linkage=_ZN17CRenderDeviceBase29EvictManagedResourcesInternalEv */
	void * GetIPCHWnd(class CRenderDeviceBase *); /* linkage=_ZN17CRenderDeviceBase10GetIPCHWndEv */
	void SendIPCMessage(class CRenderDeviceBase *, enum IPCMessage_t); /* linkage=_ZN17CRenderDeviceBase14SendIPCMessageENS_12IPCMessage_tE */
	uint GetHighestFrameCompleted(const class CRenderDeviceBase  *); /* linkage=_ZNK17CRenderDeviceBase24GetHighestFrameCompletedEv */
	void ReleaseDependencyDescriptor(class CRenderDeviceBase *, class CDependencyDescriptor *); /* linkage=_ZN17CRenderDeviceBase27ReleaseDependencyDescriptorEP21CDependencyDescriptor */
	class CColorFormatBase * ColorFormat(class CRenderDeviceBase *); /* linkage=_ZN17CRenderDeviceBase11ColorFormatEv */
	/* <1b56a5> rendersystem/renderdevicebase.cpp:231 */
	void ProcessRenderThreadEvents(class CRenderDeviceBase *); /* linkage=_ZN17CRenderDeviceBase25ProcessRenderThreadEventsEv */
	EventQueue_t GetEventQueue(const class CRenderDeviceBase  *); /* linkage=_ZNK17CRenderDeviceBase13GetEventQueueEv */
	void * AllocatePooledBackingStore(class CRenderDeviceBase *, enum PooledBackingStoreType_t, int); /* linkage=_ZN17CRenderDeviceBase26AllocatePooledBackingStoreE24PooledBackingStoreType_ti */
	void FreePooledBackingStore(class CRenderDeviceBase *, enum PooledBackingStoreType_t, void *); /* linkage=_ZN17CRenderDeviceBase22FreePooledBackingStoreE24PooledBackingStoreType_tPv */
	void * AllocatePerFrameData(class CRenderDeviceBase *, uint32); /* linkage=_ZN17CRenderDeviceBase20AllocatePerFrameDataEj */
	void FreePerFrameData(class CRenderDeviceBase *, const void  *); /* linkage=_ZN17CRenderDeviceBase16FreePerFrameDataEPKv */
	bool ShaderStats(const class CRenderDeviceBase  *); /* linkage=_ZNK17CRenderDeviceBase11ShaderStatsEv */
	/* <1af7a6> rendersystem/renderdevicebase.cpp:2591 */
	virtual void PrintGPUMemoryStats(class CRenderDeviceBase *); /* linkage=_ZN17CRenderDeviceBase19PrintGPUMemoryStatsEv */
	int ComputeAllocatedBufferMemorySizeMB(const class CRenderDeviceBase  *); /* linkage=_ZNK17CRenderDeviceBase34ComputeAllocatedBufferMemorySizeMBEv */
	void QueueFallbackTextureCopy(class CRenderDeviceBase *, void *, void *, int); /* linkage=_ZN17CRenderDeviceBase24QueueFallbackTextureCopyEPvS0_i */
	void SetGPUFrameTimeMS(class CRenderDeviceBase *, SwapChainHandle_t, float, uint32); /* linkage=_ZN17CRenderDeviceBase17SetGPUFrameTimeMSEP19SwapChainHandle_t__fj */
	/* <1aea5b> rendersystem/renderdevicebase.h:674 */
	virtual uint64 GetGPUMemoryFragmentationBytes(const class CRenderDeviceBase  *); /* linkage=_ZNK17CRenderDeviceBase30GetGPUMemoryFragmentationBytesEv */
	void InstallWindowHook(class CRenderDeviceBase *, void *); /* linkage=_ZN17CRenderDeviceBase17InstallWindowHookEPv */
	void RemoveWindowHook(class CRenderDeviceBase *, void *); /* linkage=_ZN17CRenderDeviceBase16RemoveWindowHookEPv */
	void SetCurrentThreadAsOwner(class CRenderDeviceBase *); /* linkage=_ZN17CRenderDeviceBase23SetCurrentThreadAsOwnerEv */
	void RemoveThreadOwner(class CRenderDeviceBase *); /* linkage=_ZN17CRenderDeviceBase17RemoveThreadOwnerEv */
	bool ThreadOwnsDevice(class CRenderDeviceBase *); /* linkage=_ZN17CRenderDeviceBase16ThreadOwnsDeviceEv */
	enum RenderThreadMode_t ReadThreadModeFromCommandLine(const class CRenderDeviceBase  *); /* linkage=_ZNK17CRenderDeviceBase29ReadThreadModeFromCommandLineEv */
	void SetColorFormat(class CRenderDeviceBase *, class CColorFormatBase *); /* linkage=_ZN17CRenderDeviceBase14SetColorFormatEP16CColorFormatBase */
	virtual void PerFrameCleanup(class CRenderDeviceBase *, SwapChainHandle_t); /* linkage=_ZN17CRenderDeviceBase15PerFrameCleanupEP19SwapChainHandle_t__ */
	virtual void UpdateStats(const class CRenderDeviceBase  *); /* linkage=_ZNK17CRenderDeviceBase11UpdateStatsEv */
	void DestroyRenderContexts(class CRenderDeviceBase *); /* linkage=_ZN17CRenderDeviceBase21DestroyRenderContextsEv */
	void SetContextDefaultState(const class CRenderDeviceBase  *, class IRenderContext *); /* linkage=_ZNK17CRenderDeviceBase22SetContextDefaultStateEP14IRenderContext */
	uint FrameBeingWorkedOn(const class CRenderDeviceBase  *); /* linkage=_ZNK17CRenderDeviceBase18FrameBeingWorkedOnEv */
	void GetDesiredWindowSize(class CRenderDeviceBase *, class RenderDeviceInfo_t, PlatWindow_t, int *, int *); /* linkage=_ZN17CRenderDeviceBase20GetDesiredWindowSizeE18RenderDeviceInfo_tP14PlatWindow_t__PiS3_ */
	virtual RenderShaderHandle_t CreateVertexShader(class CRenderDeviceBase *, class unique_ptr<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >, const char  *); /* linkage=_ZN17CRenderDeviceBase18CreateVertexShaderESt10unique_ptrI21IRenderShaderByteCodeSt14default_deleteIS1_EEPKc */
	virtual void DestroyVertexShader(class CRenderDeviceBase *, RenderShaderHandle_t); /* linkage=_ZN17CRenderDeviceBase19DestroyVertexShaderEP22RenderShaderHandle_t__ */
	virtual RenderShaderHandle_t CreateGeometryShader(class CRenderDeviceBase *, class unique_ptr<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >, const char  *); /* linkage=_ZN17CRenderDeviceBase20CreateGeometryShaderESt10unique_ptrI21IRenderShaderByteCodeSt14default_deleteIS1_EEPKc */
	virtual void DestroyGeometryShader(class CRenderDeviceBase *, RenderShaderHandle_t); /* linkage=_ZN17CRenderDeviceBase21DestroyGeometryShaderEP22RenderShaderHandle_t__ */
	virtual RenderShaderHandle_t CreateComputeShader(class CRenderDeviceBase *, class unique_ptr<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >, const char  *); /* linkage=_ZN17CRenderDeviceBase19CreateComputeShaderESt10unique_ptrI21IRenderShaderByteCodeSt14default_deleteIS1_EEPKc */
	virtual void DestroyComputeShader(class CRenderDeviceBase *, RenderShaderHandle_t); /* linkage=_ZN17CRenderDeviceBase20DestroyComputeShaderEP22RenderShaderHandle_t__ */
	virtual RenderShaderHandle_t CreatePixelShader(class CRenderDeviceBase *, class unique_ptr<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >, const char  *); /* linkage=_ZN17CRenderDeviceBase17CreatePixelShaderESt10unique_ptrI21IRenderShaderByteCodeSt14default_deleteIS1_EEPKc */
	virtual void DestroyPixelShader(class CRenderDeviceBase *, RenderShaderHandle_t); /* linkage=_ZN17CRenderDeviceBase18DestroyPixelShaderEP22RenderShaderHandle_t__ */
	/* <1aea85> rendersystem/renderdevicebase.h:713 */
	virtual RenderShaderHandle_t CreateRayTraceShader(class CRenderDeviceBase *, class unique_ptr<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >, const char  *); /* linkage=_ZN17CRenderDeviceBase20CreateRayTraceShaderESt10unique_ptrI21IRenderShaderByteCodeSt14default_deleteIS1_EEPKc */
	/* <1aeabe> rendersystem/renderdevicebase.h:714 */
	virtual void DestroyRayTraceShader(class CRenderDeviceBase *, RenderShaderHandle_t); /* linkage=_ZN17CRenderDeviceBase21DestroyRayTraceShaderEP22RenderShaderHandle_t__ */
	virtual void * CreateRasterizerStateFromDesc(class CRenderDeviceBase *, const class RsRasterizerStateDesc_t  *); /* linkage=_ZN17CRenderDeviceBase29CreateRasterizerStateFromDescEPK23RsRasterizerStateDesc_t */
	virtual void * CreateDepthStencilStateFromDesc(class CRenderDeviceBase *, const class RsDepthStencilStateDesc_t  *); /* linkage=_ZN17CRenderDeviceBase31CreateDepthStencilStateFromDescEPK25RsDepthStencilStateDesc_t */
	virtual void * CreateBlendStateFromDesc(class CRenderDeviceBase *, const class RsBlendStateDesc_t  *); /* linkage=_ZN17CRenderDeviceBase24CreateBlendStateFromDescEPK18RsBlendStateDesc_t */
	void CreateDefaultRenderStateObjects(class CRenderDeviceBase *); /* linkage=_ZN17CRenderDeviceBase31CreateDefaultRenderStateObjectsEv */
	void DestroyDefaultRenderStateObjects(class CRenderDeviceBase *); /* linkage=_ZN17CRenderDeviceBase32DestroyDefaultRenderStateObjectsEv */
	virtual void CreateIndexBufferPool(class CRenderDeviceBase *); /* linkage=_ZN17CRenderDeviceBase21CreateIndexBufferPoolEv */
	virtual ConstantBufferHandle_t CreateConstantBufferInternal(class CRenderDeviceBase *, enum ConstantBufferType_t, uint32, uint32, uint32, uint, const char  *); /* linkage=_ZN17CRenderDeviceBase28CreateConstantBufferInternalE20ConstantBufferType_tjjjjPKc */
	/* <1aee0c> rendersystem/renderdevicebase.cpp:1334 */
	virtual void FreeConstantBuffer(class CRenderDeviceBase *, class ConstantBuffer_t *); /* linkage=_ZN17CRenderDeviceBase18FreeConstantBufferEP16ConstantBuffer_t */
	/* <1aebca> rendersystem/renderdevicebase.cpp:1341 */
	virtual uint32 GetRequiredViewConstantBufferAlignment(const class CRenderDeviceBase  *); /* linkage=_ZNK17CRenderDeviceBase38GetRequiredViewConstantBufferAlignmentEv */
	void FreeConstantBuffer(class CRenderDeviceBase *, ConstantBufferHandle_t); /* linkage=_ZN17CRenderDeviceBase18FreeConstantBufferEP24ConstantBufferHandle_t__ */
	/* <1b5c91> rendersystem/renderdevicebase.cpp:1476 */
	void ReturnPooledDynamicConstantBuffer(class CRenderDeviceBase *, class ConstantBuffer_t *); /* linkage=_ZN17CRenderDeviceBase33ReturnPooledDynamicConstantBufferEP16ConstantBuffer_t */
	void ShutdownDynamicConstantBufferPools(class CRenderDeviceBase *); /* linkage=_ZN17CRenderDeviceBase34ShutdownDynamicConstantBufferPoolsEv */
	void ReleasePooledDynamicConstantBuffer(class CRenderDeviceBase *, class ConstantBuffer_t *); /* linkage=_ZN17CRenderDeviceBase34ReleasePooledDynamicConstantBufferEP16ConstantBuffer_t */
	class IRenderContext * GetPooledRenderContext(class CRenderDeviceBase *); /* linkage=_ZN17CRenderDeviceBase22GetPooledRenderContextEv */
	/* <1aff7d> rendersystem/renderdevicebase.cpp:2564 */
	virtual void ProcessGPUProfilerCommand(class CRenderDeviceBase *, const class RenderPipelineStatsCmd_t  &); /* linkage=_ZN17CRenderDeviceBase25ProcessGPUProfilerCommandERK24RenderPipelineStatsCmd_t */
	virtual float GetLastPresentTime(class CRenderDeviceBase *); /* linkage=_ZN17CRenderDeviceBase18GetLastPresentTimeEv */
	virtual void AsyncSetTextureData(class CRenderDeviceBase *, HRenderTexture, const class CTextureDesc  *, const void  *, int, int, const class Rect3D_t  *, uint32, const DataRecycleDelegate_t  *, RenderAsyncTextureUpdateFlags_t); /* linkage=_ZN17CRenderDeviceBase19AsyncSetTextureDataE11CWeakHandleI31InfoForResourceTypeCTextureBaseEPK12CTextureDescPKviiPK8Rect3D_tjPK12CUtlDelegateIFvS7_EEj */
	SwapChainHandle_t AddSwapChain(class CRenderDeviceBase *, class CSwapChainBase *); /* linkage=_ZN17CRenderDeviceBase12AddSwapChainEP14CSwapChainBase */
	void ComputeMaxSwapChainDimensions(const class CRenderDeviceBase  *, int32 *, int32 *); /* linkage=_ZNK17CRenderDeviceBase29ComputeMaxSwapChainDimensionsEPiS0_ */
	void UpdateMaxSwapChainDimensionsAndNotifyListeners(class CRenderDeviceBase *); /* linkage=_ZN17CRenderDeviceBase46UpdateMaxSwapChainDimensionsAndNotifyListenersEv */
	void UpdateMaxSwapChainDimensionsChangedListeners(class CRenderDeviceBase *, int, int); /* linkage=_ZN17CRenderDeviceBase44UpdateMaxSwapChainDimensionsChangedListenersEii */
	void DestroyAllSwapChains(class CRenderDeviceBase *); /* linkage=_ZN17CRenderDeviceBase20DestroyAllSwapChainsEv */
	/* <1b56d4> rendersystem/renderdevicebase.cpp:650 */
	void IncrementSubmittedFrameCount(class CRenderDeviceBase *, int); /* linkage=_ZN17CRenderDeviceBase28IncrementSubmittedFrameCountEi */
	void SetUsePerFrameMemoryStack(class CRenderDeviceBase *, bool); /* linkage=_ZN17CRenderDeviceBase25SetUsePerFrameMemoryStackEb */
	/* <1b58c7> rendersystem/renderdevicebase.cpp:810 */
	void SanityCheckPerFrameMemoryStacks(class CRenderDeviceBase *, int); /* linkage=_ZN17CRenderDeviceBase31SanityCheckPerFrameMemoryStacksEi */
	/* <1aece2> rendersystem/renderdevicebase.cpp:850 */
	virtual class CDeviceFence * InsertDeviceFence(class CRenderDeviceBase *); /* linkage=_ZN17CRenderDeviceBase17InsertDeviceFenceEv */
	virtual GraphicsAPISpecificTextureHandle_t GetGraphicsAPISpecificTextureHandle(class CRenderDeviceBase *, HRenderTexture); /* linkage=_ZN17CRenderDeviceBase35GetGraphicsAPISpecificTextureHandleE11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	void ProcessConstantBufferDeletionQueue(class CRenderDeviceBase *, bool); /* linkage=_ZN17CRenderDeviceBase34ProcessConstantBufferDeletionQueueEb */
	virtual bool GetTimestampCounterFrequencyInternal(class CRenderDeviceBase *, double *); /* linkage=_ZN17CRenderDeviceBase36GetTimestampCounterFrequencyInternalEPd */
	class PerFrameMemoryStack_t * AllocatePerFrameMemoryStack(class CRenderDeviceBase *, int); /* linkage=_ZN17CRenderDeviceBase27AllocatePerFrameMemoryStackEi */
	bool TryRecyclingPooledConstantBuffers(class CRenderDeviceBase *); /* linkage=_ZN17CRenderDeviceBase33TryRecyclingPooledConstantBuffersEv */
	void PrintGPUMemoryStatsCommand(class CRenderDeviceBase *, const class CCommandContext  &, const class CCommand  &); /* linkage=_ZN17CRenderDeviceBase26PrintGPUMemoryStatsCommandERK15CCommandContextRK8CCommand */
	void BuildBufferListAndSendToGPUProfiler(const class CRenderDeviceBase  *); /* linkage=_ZNK17CRenderDeviceBase35BuildBufferListAndSendToGPUProfilerEv */
	virtual HRenderTexture FindOrCreateTexture2(class CRenderDeviceBase *, const char  *, bool, const class TextureCreationConfig_t  &, const void  *, int); /* linkage=_ZN17CRenderDeviceBase20FindOrCreateTexture2EPKcbRK23TextureCreationConfig_tPKvi */
	virtual void ClearTexture(class CRenderDeviceBase *, HRenderTexture, class Color); /* linkage=_ZN17CRenderDeviceBase12ClearTextureE11CWeakHandleI31InfoForResourceTypeCTextureBaseE5Color */
	virtual void AsyncSetTextureData2(class CRenderDeviceBase *, HRenderTexture, const void  *, int, class Rect3D_t); /* linkage=_ZN17CRenderDeviceBase20AsyncSetTextureData2E11CWeakHandleI31InfoForResourceTypeCTextureBaseEPKvi8Rect3D_t */
	virtual void * GetDevicePtr(class CRenderDeviceBase *); /* linkage=_ZN17CRenderDeviceBase12GetDevicePtrEv */
	virtual void * GetTextureObject(class CRenderDeviceBase *, HRenderTexture); /* linkage=_ZN17CRenderDeviceBase16GetTextureObjectE11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	virtual bool IsRenderDocEnabled(class CRenderDeviceBase *); /* linkage=_ZN17CRenderDeviceBase18IsRenderDocEnabledEv */
	virtual void SetInMainThreadRenderBlock(class CRenderDeviceBase *, bool); /* linkage=_ZN17CRenderDeviceBase26SetInMainThreadRenderBlockEb */
	virtual bool IsInMainThreadRenderBlock(class CRenderDeviceBase *); /* linkage=_ZN17CRenderDeviceBase25IsInMainThreadRenderBlockEv */
	virtual int GetTextureLastUsed(class CRenderDeviceBase *, HRenderTexture); /* linkage=_ZN17CRenderDeviceBase18GetTextureLastUsedE11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	virtual void SetForcePreloadStreamingData(class CRenderDeviceBase *, bool); /* linkage=_ZN17CRenderDeviceBase28SetForcePreloadStreamingDataEb */
	/* <1b4a7e> rendersystem/renderdevicebase.cpp:1145 */
	virtual bool ReadBuffer(class CRenderDeviceBase *, IndexBufferHandle_t, uint32, void *, uint32); /* linkage=_ZN17CRenderDeviceBase10ReadBufferEP21IndexBufferHandle_t__jPvj */
	const class CSwapChainVulkan  * GetSwapChain<CSwapChainVulkan>(const class CRenderDeviceBase  *, SwapChainHandle_t); /* linkage=_ZNK17CRenderDeviceBase12GetSwapChainI16CSwapChainVulkanEEPKT_P19SwapChainHandle_t__ */
	const class CSwapChainEmpty  * GetSwapChain<CSwapChainEmpty>(const class CRenderDeviceBase  *, SwapChainHandle_t); /* linkage=_ZNK17CRenderDeviceBase12GetSwapChainI15CSwapChainEmptyEEPKT_P19SwapChainHandle_t__ */
} __attribute__((__aligned__(16)));

// <001A8453> rendersystem/renderdevicebase.h:411
void CRenderDeviceBase::IsWindowResizingEnabled()
{
} /* size: 12 */

// <001A8425> rendersystem/renderdevicebase.h:413
void CRenderDeviceBase::ForceDeviceLost()
{
} /* size: 5 */

// <001A834E> rendersystem/renderdevicebase.h:448
// function calls: 2
void CRenderDeviceBase::GetTextureSheet(HRenderTexture a1)
{
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 448
} /* size: 73, inline expansions: 2 (14 bytes) */

// <001A82A2> rendersystem/renderdevicebase.h:515
// variables: 2
void* CRenderDeviceBase::GetDeviceSpecificTexture(HRenderTexture hTexture, RenderTextureDimension_t renderDimension)
{
	const char   __FUNCTION__; // 2869
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 515
	}
} /* size: 29, variables: 1 */

// <001A366C> rendersystem/renderdevicebase.h:515
// variables: 2
void* CRenderDeviceBase::GetDeviceSpecificTexture(HRenderTexture hTexture, RenderTextureDimension_t renderDimension)
{
	const char   __FUNCTION__; // 32244
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 515
	}
} /* size: 29, variables: 1 */

// <001A81E1> rendersystem/renderdevicebase.h:516
// variables: 2
void* CRenderDeviceBase::GetDeviceSpecificImageView(HRenderTexture hTexture, RenderTextureDimension_t nDim, RenderColorSpace_t colorSpace)
{
	const char   __FUNCTION__; // 2923
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 516
	}
} /* size: 29, variables: 1 */

// <001A35AB> rendersystem/renderdevicebase.h:516
// variables: 2
void* CRenderDeviceBase::GetDeviceSpecificImageView(HRenderTexture hTexture, RenderTextureDimension_t nDim, RenderColorSpace_t colorSpace)
{
	const char   __FUNCTION__; // 32298
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 516
	}
} /* size: 29, variables: 1 */

// <001A814A> rendersystem/renderdevicebase.h:517
// variables: 2
void* CRenderDeviceBase::GetDeviceSpecificBuffer(RenderBufferHandle_t hBuffer)
{
	const char   __FUNCTION__; // 2842
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 517
	}
} /* size: 29, variables: 1 */

// <001A3514> rendersystem/renderdevicebase.h:517
// variables: 2
void* CRenderDeviceBase::GetDeviceSpecificBuffer(RenderBufferHandle_t hBuffer)
{
	const char   __FUNCTION__; // 32217
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 517
	}
} /* size: 29, variables: 1 */

// <001A80B3> rendersystem/renderdevicebase.h:518
// variables: 2
void* CRenderDeviceBase::GetDeviceSpecificBuffer(IndexBufferHandle_t hBuffer)
{
	const char   __FUNCTION__; // 2842
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 518
	}
} /* size: 29, variables: 1 */

// <001A347D> rendersystem/renderdevicebase.h:518
// variables: 2
void* CRenderDeviceBase::GetDeviceSpecificBuffer(IndexBufferHandle_t hBuffer)
{
	const char   __FUNCTION__; // 32217
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 518
	}
} /* size: 29, variables: 1 */

// <001A801C> rendersystem/renderdevicebase.h:519
// variables: 2
void* CRenderDeviceBase::GetDeviceSpecificBuffer(VertexBufferHandle_t hBuffer)
{
	const char   __FUNCTION__; // 2842
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 519
	}
} /* size: 29, variables: 1 */

// <001A33E6> rendersystem/renderdevicebase.h:519
// variables: 2
void* CRenderDeviceBase::GetDeviceSpecificBuffer(VertexBufferHandle_t hBuffer)
{
	const char   __FUNCTION__; // 32217
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 519
	}
} /* size: 29, variables: 1 */

// <001A7F85> rendersystem/renderdevicebase.h:520
// variables: 2
void* CRenderDeviceBase::GetDeviceSpecificDescriptorSet(RenderDescriptorSetHandle_t hDescriptorSet)
{
	const char   __FUNCTION__; // 3026
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 520
	}
} /* size: 29, variables: 1 */

// <001A334F> rendersystem/renderdevicebase.h:520
// variables: 2
void* CRenderDeviceBase::GetDeviceSpecificDescriptorSet(RenderDescriptorSetHandle_t hDescriptorSet)
{
	const char   __FUNCTION__; // 32401
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 520
	}
} /* size: 29, variables: 1 */

// <001A7EEE> rendersystem/renderdevicebase.h:521
// variables: 2
void* CRenderDeviceBase::GetDeviceSpecificRayTracePipeline(RenderRayTracePipelineHandle_t hRayTracePipeline)
{
	const char   __FUNCTION__; // 3097
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 521
	}
} /* size: 29, variables: 1 */

// <001A32B8> rendersystem/renderdevicebase.h:521
// variables: 2
void* CRenderDeviceBase::GetDeviceSpecificRayTracePipeline(RenderRayTracePipelineHandle_t hRayTracePipeline)
{
	const char   __FUNCTION__; // 32472
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 521
	}
} /* size: 29, variables: 1 */

// <001A7E75> rendersystem/renderdevicebase.h:541
void CRenderDeviceBase::CreateDescriptorSet(int32 nNumDescriptors, const RenderDescriptorDesc_t* pDescriptorDescs, int32 nNumBindings, const RenderDescriptorBinding_t* pDescriptorBindings, bool bFullyRewriteEachFrame)
{
} /* size: 7 */

// <001A7E1A> rendersystem/renderdevicebase.h:542
void CRenderDeviceBase::UpdateDescriptorSet(RenderDescriptorSetHandle_t hDescriptorSet, int32 nNumBindings, const RenderDescriptorBinding_t* pDescriptorBindings)
{
} /* size: 5 */

// <001A7DDD> rendersystem/renderdevicebase.h:543
void CRenderDeviceBase::DestroyDescriptorSet(RenderDescriptorSetHandle_t hDescriptorSet)
{
} /* size: 5 */

// <001A7D91> rendersystem/renderdevicebase.h:544
void CRenderDeviceBase::AddDescriptorsToGlobalPerFrameDescriptorSet(int32 nNumDescriptors, const RenderDescriptorDesc_t* pDescriptorDescs)
{
} /* size: 7 */

// <001A7D45> rendersystem/renderdevicebase.h:545
void CRenderDeviceBase::UpdateGlobalPerFrameDescriptorBindings(int32 nNumBindings, const RenderDescriptorBinding_t* pDescriptorBindings)
{
} /* size: 5 */

// <001A7D08> rendersystem/renderdevicebase.h:549
void CRenderDeviceBase::CreateRenderPass(const CRenderPassDesc* pRenderPassDesc)
{
} /* size: 10 */

// <001A7CCB> rendersystem/renderdevicebase.h:550
void CRenderDeviceBase::DestroyRenderPass(RenderPassHandle_t hRenderPass)
{
} /* size: 5 */

// <001A7C70> rendersystem/renderdevicebase.h:551
void CRenderDeviceBase::GetClearFlagsSupportedInRenderPass(int nClearFlags, const RenderTargetDesc_t& renderTargets, const RenderClearInfo_t& clearInfo)
{
} /* size: 7 */

// <001AE9F9> rendersystem/renderdevicebase.h:556
void CRenderDeviceBase::OnRenderDeviceFlagsEnabled(RenderDeviceFlag_t nFlags)
{
} /* size: 5 */

// <001A7C4A> rendersystem/renderdevicebase.h:556
inline void CRenderDeviceBase::OnRenderDeviceFlagsEnabled(RenderDeviceFlag_t nFlags)
{
} /* size: 0 */

// <001AEA2A> rendersystem/renderdevicebase.h:557
void CRenderDeviceBase::OnRenderDeviceFlagsDisabled(RenderDeviceFlag_t nFlags)
{
} /* size: 5 */

// <001A7C24> rendersystem/renderdevicebase.h:557
inline void CRenderDeviceBase::OnRenderDeviceFlagsDisabled(RenderDeviceFlag_t nFlags)
{
} /* size: 0 */

// <001A7BF6> rendersystem/renderdevicebase.h:567
void CRenderDeviceBase::IsProfilerAttached()
{
} /* size: 7 */

// <001A7BB9> rendersystem/renderdevicebase.h:568
void CRenderDeviceBase::UnThrottlePipelineCreationForNFrames(uint32 nNumberOfFramesForUnthrottledPipelineCreation)
{
} /* size: 5 */

// <001A7B8B> rendersystem/renderdevicebase.h:571
void CRenderDeviceBase::GetTextureGlobalMipLODBias()
{
} /* size: 13 */

// <001A7B3F> rendersystem/renderdevicebase.h:573
void CRenderDeviceBase::RegisterDescriptorSetLayout(CUtlStringToken descriptorSetName, RenderDescriptorSetHandle_t hDescriptorSet)
{
} /* size: 5 */

// <001A7B02> rendersystem/renderdevicebase.h:574
void CRenderDeviceBase::GetRegisteredDescriptorSetLayout(CUtlStringToken descriptorSetName)
{
} /* size: 7 */

// <001A7AB6> rendersystem/renderdevicebase.h:576
void CRenderDeviceBase::CreateBLAS(const BLASCreateDesc_t& desc, uint32* pSizeCounter)
{
} /* size: 7 */

// <001A7A79> rendersystem/renderdevicebase.h:577
void CRenderDeviceBase::IsCompactible(RenderBLASHandle_t hBLAS)
{
} /* size: 7 */

// <001A7A3C> rendersystem/renderdevicebase.h:578
void CRenderDeviceBase::IsReadyToCompact(RenderBLASHandle_t hBLAS)
{
} /* size: 10 */

// <001A79FF> rendersystem/renderdevicebase.h:579
void CRenderDeviceBase::CreateBLASForCompact(RenderBLASHandle_t hBloated)
{
} /* size: 7 */

// <001A79C2> rendersystem/renderdevicebase.h:580
void CRenderDeviceBase::DestroyBLAS(RenderBLASHandle_t hBLAS)
{
} /* size: 5 */

// <001A7967> rendersystem/renderdevicebase.h:582
void CRenderDeviceBase::CreateTLAS(const TLASCreateDesc_t& desc, TLASInstance_t* pInstances, int nInstanceCount)
{
} /* size: 7 */

// <001A792A> rendersystem/renderdevicebase.h:583
void CRenderDeviceBase::DestroyTLAS(RenderTLASHandle_t hTLAS)
{
} /* size: 5 */

// <001A78ED> rendersystem/renderdevicebase.h:585
void CRenderDeviceBase::CreateRayTracePipeline(const RayTracePipelineStateCreateDesc_t& desc)
{
} /* size: 7 */

// <001A78B0> rendersystem/renderdevicebase.h:586
void CRenderDeviceBase::DestroyRayTracePipeline(RenderRayTracePipelineHandle_t hPipeline)
{
} /* size: 5 */

// <001A7882> rendersystem/renderdevicebase.h:587
void CRenderDeviceBase::IsCreatingRayTracePipelines()
{
} /* size: 7 */

// <001A7845> rendersystem/renderdevicebase.h:589
void CRenderDeviceBase::CreateRayTraceShaderBindingTable(const ShaderBindingTableCreateDesc_t& desc)
{
} /* size: 7 */

// <001A7808> rendersystem/renderdevicebase.h:590
void CRenderDeviceBase::DestroyRayTraceShaderBindingTable(IRaytraceShaderBindingTable* pSBT)
{
} /* size: 5 */

// <001A77DA> rendersystem/renderdevicebase.h:592
void CRenderDeviceBase::IsRayTracingSupported()
{
} /* size: 7 */

// <001A777B> rendersystem/renderdevicebase.h:594
// function call: 1
void CRenderDeviceBase::IsAsyncPresentEnabled()
{
	CInterlockedIntT<int, 4>::operator int(); // 594
} /* size: 16, inline expansions: 1 (6 bytes) */

// <001A774D> rendersystem/renderdevicebase.h:609
void CRenderDeviceBase::TriggerValidationError()
{
} /* size: 5 */

// <001A7701> rendersystem/renderdevicebase.h:611
void CRenderDeviceBase::DefragmentGPUMemory(RenderDefragFlags_t defragFlags, bool bAsyncDefrag)
{
} /* size: 5 */

// <001A76C4> rendersystem/renderdevicebase.h:631
void CRenderDeviceBase::OtherAppInitializing(bool initializing)
{
} /* size: 5 */

// <001A7696> rendersystem/renderdevicebase.h:632
void CRenderDeviceBase::EvictManagedResourcesInternal()
{
} /* size: 5 */

// <001AEA5B> rendersystem/renderdevicebase.h:674
void CRenderDeviceBase::GetGPUMemoryFragmentationBytes()
{
} /* size: 7 */

// <001A767D> rendersystem/renderdevicebase.h:674
inline void CRenderDeviceBase::GetGPUMemoryFragmentationBytes()
{
} /* size: 0 */

// <001AEA85> rendersystem/renderdevicebase.h:713
void CRenderDeviceBase::CreateRayTraceShader(unique_ptr<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> > pShaderBuffer, const char* pDebugName)
{
} /* size: 7 */

// <001A764A> rendersystem/renderdevicebase.h:713
inline void CRenderDeviceBase::CreateRayTraceShader(unique_ptr<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> > pShaderBuffer, const char* pDebugName)
{
} /* size: 0 */

// <001AEABE> rendersystem/renderdevicebase.h:714
void CRenderDeviceBase::DestroyRayTraceShader(RenderShaderHandle_t hShader)
{
} /* size: 5 */

// <001A7624> rendersystem/renderdevicebase.h:714
inline void CRenderDeviceBase::DestroyRayTraceShader(RenderShaderHandle_t hShader)
{
} /* size: 0 */

// <001A75FE> rendersystem/renderdevicebase.h:737
inline void CRenderDeviceBase::FreeConstantBuffer(ConstantBufferHandle_t hConstantBuffer)
{
} /* size: 0 */

// <001A75D8> rendersystem/renderdevicebase.h:749
inline void CRenderDeviceBase::ReleasePooledDynamicConstantBuffer(ConstantBuffer_t* pConstantBuffer)
{
} /* size: 0 */

// <001A759A> rendersystem/renderdevicebase.h:781
void CRenderDeviceBase::GetGraphicsAPISpecificTextureHandle(HRenderTexture hTexture)
{
} /* size: 7 */

// <001A7583> rendersystem/renderdevicebase.h:840
void MultiViewCBPool_t::MultiViewCBPool_t()
{
} /* size: 0 */

// <001A756A> rendersystem/renderdevicebase.h:840
inline void MultiViewCBPool_t::MultiViewCBPool_t()
{
} /* size: 0 */

// <001A4FEE> rendersystem/renderdevicebase.h:873
void FencedWaitingListTSQueue_t<CPipelineFence, ConstantBuffer_t>::FencedWaitingListTSQueue_t()
{
} /* size: 0 */

// <001A4FD1> rendersystem/renderdevicebase.h:873
inline void FencedWaitingListTSQueue_t<CPipelineFence, ConstantBuffer_t>::FencedWaitingListTSQueue_t()
{
} /* size: 0 */

// <001A4FBA> rendersystem/renderdevicebase.h:873
void FencedWaitingListTSQueue_t<CDeviceFence, ConstantBuffer_t>::FencedWaitingListTSQueue_t()
{
} /* size: 0 */

// <001A4F9D> rendersystem/renderdevicebase.h:873
inline void FencedWaitingListTSQueue_t<CDeviceFence, ConstantBuffer_t>::FencedWaitingListTSQueue_t()
{
} /* size: 0 */

// <0017828A> rendersystem/renderdevicebase.h:877
// variables: 2
inline void FencedWaitingListTSQueue_t<CPipelineFence, ConstantBuffer_t>::FencedPop(CUtlMemoryPoolMT& fencedWaitingListMemory)
{
	FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>* pPopped; // 879
	{
		ConstantBuffer_t* pResourceList; // 883
	}
} /* size: 0, variables: 1 */

// <00178117> rendersystem/renderdevicebase.h:877
// variables: 2
inline void FencedWaitingListTSQueue_t<CDeviceFence, ConstantBuffer_t>::FencedPop(CUtlMemoryPoolMT& fencedWaitingListMemory)
{
	FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>* pPopped; // 879
	{
		ConstantBuffer_t* pResourceList; // 883
	}
} /* size: 0, variables: 1 */

// <001784DF> rendersystem/renderdevicebase.h:893
inline void FlushToResourceList<CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext> FencedWaitingListTSQueue_t<CDeviceFence, ConstantBuffer_t>::>(CUtlMemoryPoolMT& fencedWaitingListMemory, CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>& recipientList)
{
} /* size: 0 */

// <00178419> rendersystem/renderdevicebase.h:893
inline void FlushToResourceList<CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext> FencedWaitingListTSQueue_t<CPipelineFence, ConstantBuffer_t>::>(CUtlMemoryPoolMT& fencedWaitingListMemory, CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>& recipientList)
{
} /* size: 0 */

// <001A7553> rendersystem/renderdevicebase.h:949
void CCommandMemberInitializer_PrintGPUMemoryStatsCommand::CCommandMemberInitializer_PrintGPUMemoryStatsCommand()
{
} /* size: 0 */

// <001A753A> rendersystem/renderdevicebase.h:949
inline void CCommandMemberInitializer_PrintGPUMemoryStatsCommand::CCommandMemberInitializer_PrintGPUMemoryStatsCommand()
{
} /* size: 0 */

// <001A4E84> rendersystem/renderdevicebase.h:949
void CCommandMemberInitializer_PrintGPUMemoryStatsCommand::~CCommandMemberInitializer_PrintGPUMemoryStatsCommand()
{
} /* size: 0 */

// <001A4E67> rendersystem/renderdevicebase.h:949
inline void CCommandMemberInitializer_PrintGPUMemoryStatsCommand::~CCommandMemberInitializer_PrintGPUMemoryStatsCommand()
{
} /* size: 0 */

// <00342EDB> rendersystem/renderdevicebase.h:1067
inline void CRenderDeviceBase::GetContextFrameCount()
{
} /* size: 0 */

// <001A7508> rendersystem/renderdevicebase.h:1072
inline void CRenderDeviceBase::GetHighestFrameCompleted()
{
} /* size: 0 */

// <00232711> rendersystem/renderdevicebase.h:1098
void CRenderDeviceBase::GetRenderThreadHandle()
{
} /* size: 12 */

// <00231DF3> rendersystem/renderdevicebase.h:1098
inline void CRenderDeviceBase::GetRenderThreadHandle()
{
} /* size: 0 */

// <001A74AC> rendersystem/renderdevicebase.h:1103
void CRenderDeviceBase::GetRenderThreadId()
{
} /* size: 12 */

// <0017832A> rendersystem/renderdevicebase.h:1114
void CRenderDeviceBase::GetSwapChain<CSwapChainBase>(SwapChainHandle_t hSwapChain)
{
} /* size: 0 */

// <00174671> rendersystem/renderdevicebase.h:1130
void CDependencyDescriptor::CDependencyDescriptor()
{
} /* size: 0 */

// <00174654> rendersystem/renderdevicebase.h:1130
inline void CDependencyDescriptor::CDependencyDescriptor()
{
} /* size: 0 */

// <000DCA48> rendersystem/renderdevicebase.h:1130
// member functions: 5
// member variables: 4
// class size: 24
class CDependencyDescriptor {
	int m_nNumSubmitsToSatisfy; /* 0 4 */
	int m_nIndexInDevice; /* 4 4 */
	const char * m_pDebugString; /* 8 8 */
	CUtlIntrusiveList<CCommandStream> m_Dependents; /* 16 8 */
	/* rendersystem/renderdevicebase.h:1138 */
	bool IsSatisfied(const CDependencyDescriptor* );
	/* rendersystem/renderdevicebase.h:1143 */
	void Satisfy(CDependencyDescriptor* );
	bool IsSatisfied(const class CDependencyDescriptor  *); /* linkage=_ZNK21CDependencyDescriptor11IsSatisfiedEv */
	void Satisfy(class CDependencyDescriptor *); /* linkage=_ZN21CDependencyDescriptor7SatisfyEv */
	void CDependencyDescriptor(class CDependencyDescriptor *); /* linkage=_ZN21CDependencyDescriptorC4Ev */
};

// <00231DCF> rendersystem/renderdevicebase.h:1138
inline void CDependencyDescriptor::IsSatisfied()
{
} /* size: 0 */

// <00231D8D> rendersystem/renderdevicebase.h:1143
// variables: 2
inline void CDependencyDescriptor::Satisfy()
{
	const char   __FUNCTION__; // 49563
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1145
	}
} /* size: 0, variables: 1 */

