
//
// ./renderdevicebase.h
//
//	referenced by: librendersystemempty.so
//				   librendersystemvulkan.so
//
//	functions: 71
//	classes: 3
//	structs: 3
//

// <0049024C> ./renderdevicebase.h:72
// member functions: 18
// member variables: 9
// static member variable: 1
// struct size: 48
struct ConstantBuffer_t {
	/* ./renderdevicebase.h:76 */
	uint32 CalculateBucket(uint32);
	/* ./renderdevicebase.h:86 */
	uint32 CalculateAllocationBucket(ConstantBuffer_t* );
	static const int k_NumFlagGroups = 4; /* 0 0 */
	/* ./renderdevicebase.h:99 */
	uint GetFlagGroupFlags(uint);
	/* ./renderdevicebase.h:104 */
	uint GetFlagGroupFlags(const ConstantBuffer_t* );
	/* ./renderdevicebase.h:108 */
	int GetFlagGroup(uint);
	/* ./renderdevicebase.h:117 */
	int GetFlagGroup(const ConstantBuffer_t* );
	/* ./renderdevicebase.h:122 */
	ConstantBufferType_t GetType(const ConstantBuffer_t* );
	/* ./renderdevicebase.h:127 */
	uint8* GetData(ConstantBuffer_t* );
	/* ./renderdevicebase.h:131 */
	uint8* GetViewData(ConstantBuffer_t* , uint32);
	/* ./renderdevicebase.h:136 */
	uint32 GetNumViews(const ConstantBuffer_t* );
	/* ./renderdevicebase.h:142 */
	uint32 GetAllocatedSize(const ConstantBuffer_t* );
	/* ./renderdevicebase.h:152 */
	uint32 GetViewRequestedSize(const ConstantBuffer_t* );
	/* ./renderdevicebase.h:156 */
	uint32 GetViewAlignedSize(const ConstantBuffer_t* );
	/* ./renderdevicebase.h:160 */
	uint32 GetAllViewsSize(const ConstantBuffer_t* );
	/* ./renderdevicebase.h:165 */
	bool IsImmutable(const ConstantBuffer_t* );
	/* ./renderdevicebase.h:172 */
	bool WasCreatedByContext(const ConstantBuffer_t* );
	/* ./renderdevicebase.h:176 */
	bool IsPerFrameWriteOnce(const ConstantBuffer_t* );
	/* ./renderdevicebase.h:180 */
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

// <003D1669> ./renderdevicebase.h:72
// member functions: 18
// member variables: 8
// static member variable: 1
// struct size: 32
struct ConstantBuffer_t {
	/* ./renderdevicebase.h:76 */
	uint32 CalculateBucket(uint32);
	/* ./renderdevicebase.h:86 */
	uint32 CalculateAllocationBucket(ConstantBuffer_t* );
	static const int k_NumFlagGroups = 4; /* 0 0 */
	/* ./renderdevicebase.h:99 */
	uint GetFlagGroupFlags(uint);
	/* ./renderdevicebase.h:104 */
	uint GetFlagGroupFlags(const ConstantBuffer_t* );
	/* ./renderdevicebase.h:108 */
	int GetFlagGroup(uint);
	/* ./renderdevicebase.h:117 */
	int GetFlagGroup(const ConstantBuffer_t* );
	/* ./renderdevicebase.h:122 */
	ConstantBufferType_t GetType(const ConstantBuffer_t* );
	/* ./renderdevicebase.h:127 */
	uint8* GetData(ConstantBuffer_t* );
	/* ./renderdevicebase.h:131 */
	uint8* GetViewData(ConstantBuffer_t* , uint32);
	/* ./renderdevicebase.h:136 */
	uint32 GetNumViews(const ConstantBuffer_t* );
	/* ./renderdevicebase.h:142 */
	uint32 GetAllocatedSize(const ConstantBuffer_t* );
	/* ./renderdevicebase.h:152 */
	uint32 GetViewRequestedSize(const ConstantBuffer_t* );
	/* ./renderdevicebase.h:156 */
	uint32 GetViewAlignedSize(const ConstantBuffer_t* );
	/* ./renderdevicebase.h:160 */
	uint32 GetAllViewsSize(const ConstantBuffer_t* );
	/* ./renderdevicebase.h:165 */
	bool IsImmutable(const ConstantBuffer_t* );
	/* ./renderdevicebase.h:172 */
	bool WasCreatedByContext(const ConstantBuffer_t* );
	/* ./renderdevicebase.h:176 */
	bool IsPerFrameWriteOnce(const ConstantBuffer_t* );
	/* ./renderdevicebase.h:180 */
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

// <0087A902> ./renderdevicebase.h:136
inline void ConstantBuffer_t::GetNumViews()
{
} /* size: 0 */

// <00A58CA8> ./renderdevicebase.h:142
inline void ConstantBuffer_t::GetAllocatedSize()
{
} /* size: 0 */

// <0087A8E9> ./renderdevicebase.h:152
inline void ConstantBuffer_t::GetViewRequestedSize()
{
} /* size: 0 */

// <00A58C8F> ./renderdevicebase.h:156
inline void ConstantBuffer_t::GetViewAlignedSize()
{
} /* size: 0 */

// <00A58C76> ./renderdevicebase.h:160
inline void ConstantBuffer_t::GetAllViewsSize()
{
} /* size: 0 */

// <0087A8B7> ./renderdevicebase.h:165
inline void ConstantBuffer_t::IsImmutable()
{
} /* size: 0 */

// <003EA03A> ./renderdevicebase.h:172
inline void ConstantBuffer_t::WasCreatedByContext()
{
} /* size: 0 */

// <003EA021> ./renderdevicebase.h:180
inline void ConstantBuffer_t::IsPerFrameLifetimePooled()
{
} /* size: 0 */

// <0083DA08> ./renderdevicebase.h:255
inline void ClearVertex_t::operator=(const ClearVertex_t &)
{
} /* size: 0 */

// <0083B27F> ./renderdevicebase.h:255
void ClearVertex_t::ClearVertex_t()
{
} /* size: 0 */

// <0083B263> ./renderdevicebase.h:255
inline void ClearVertex_t::ClearVertex_t()
{
} /* size: 0 */

// <007FEB8E> ./renderdevicebase.h:255
// member functions: 2
// member variables: 2
// struct size: 28
struct ClearVertex_t {
	Vector m_vProjPos; /* 0 12 */
	Vector4D m_vClearColor; /* 12 16 */
	void ClearVertex_t(ClearVertex_t* );
	ClearVertex_t& operator=(ClearVertex_t* , const ClearVertex_t& );
};

// <007F79EF> ./renderdevicebase.h:262
// member functions: 13
// member variables: 2
// class size: 136
class CPipelineFence {
	/* ./renderdevicebase.h:265 */
	int AddRef(CPipelineFence* );
	/* ./renderdevicebase.h:266 */
	int Release(CPipelineFence* );
	/* ./renderdevicebase.h:268 */
	void SetCompleted(CPipelineFence* );
	/* ./renderdevicebase.h:269 */
	bool IsCompleted(CPipelineFence* );
	/* ./renderdevicebase.h:270 */
	bool WaitCompleted(CPipelineFence* , uint32);
private:
	/* ./renderdevicebase.h:273 */
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

// <00A58C5D> ./renderdevicebase.h:269
inline void CPipelineFence::IsCompleted()
{
} /* size: 0 */

// <007FF9EB> ./renderdevicebase.h:323
// member functions: 41
// member variables: 15
// vtable entries: 2
// class size: 376
class CSwapChainBase {
	int ()(void) * * _vptr.CSwapChainBase; /* 0 8 */
	/* ./renderdevicebase.h:326 */
	void CSwapChainBase(CSwapChainBase* );
	/* ./renderdevicebase.h:337 */
	virtual void ~CSwapChainBase(CSwapChainBase* );
	/* ./renderdevicebase.h:339 */
	virtual int GetWidth(const CSwapChainBase* );
	/* ./renderdevicebase.h:340 */
	virtual int GetHeight(const CSwapChainBase* );
	/* ./renderdevicebase.h:341 */
	const RenderDeviceInfo_t& GetRenderDeviceInfo(const CSwapChainBase* );
	/* ./renderdevicebase.h:342 */
	PlatWindow_t GetPlatWindowHandle(const CSwapChainBase* );
	/* ./renderdevicebase.h:343 */
	OsSpecificWindowHandle_t GetOsSpecificWindowHandle(const CSwapChainBase* );
	/* ./renderdevicebase.h:344 */
	HRenderTexture GetColorTexture(const CSwapChainBase* );
	/* ./renderdevicebase.h:345 */
	HRenderTexture GetDepthTexture(const CSwapChainBase* );
	/* ./renderdevicebase.h:346 */
	ImageFormat GetSwapchainDepthFormat(const CSwapChainBase* );
	/* ./renderdevicebase.h:347 */
	const char* GetDebugName(const CSwapChainBase* );
	/* ./renderdevicebase.h:348 */
	void SetGPUFrameTimeMS(CSwapChainBase* , float, uint32);
	/* ./renderdevicebase.h:349 */
	float GetLastGPUFrameTimeMS(const CSwapChainBase* );
	/* ./renderdevicebase.h:350 */
	uint32 GetLastGPUFrameTimeNumber(const CSwapChainBase* );
	/* ./renderdevicebase.h:352 */
	bool HasOutstandingPresents(const CSwapChainBase* );
	/* ./renderdevicebase.h:353 */
	bool WaitOnPresent(const CSwapChainBase* );
	/* ./renderdevicebase.h:354 */
	void OnPresentQueued(const CSwapChainBase* , int);
	/* ./renderdevicebase.h:355 */
	void OnPresentCompleted(const CSwapChainBase* , int);
	/* ./renderdevicebase.h:356 */
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
	/* ./renderdevicebase.h:374 */
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

// <00933233> ./renderdevicebase.h:323
// member functions: 42
// member variables: 15
// vtable entries: 2
// class size: 376
class CSwapChainBase {
	void CSwapChainBase(CSwapChainBase* , const CSwapChainBase& );
	int ()(void) * * _vptr.CSwapChainBase; /* 0 8 */
	/* ./renderdevicebase.h:326 */
	void CSwapChainBase(CSwapChainBase* );
	/* ./renderdevicebase.h:337 */
	virtual void ~CSwapChainBase(CSwapChainBase* );
	/* ./renderdevicebase.h:339 */
	virtual int GetWidth(const CSwapChainBase* );
	/* ./renderdevicebase.h:340 */
	virtual int GetHeight(const CSwapChainBase* );
	/* ./renderdevicebase.h:341 */
	const RenderDeviceInfo_t& GetRenderDeviceInfo(const CSwapChainBase* );
	/* ./renderdevicebase.h:342 */
	PlatWindow_t GetPlatWindowHandle(const CSwapChainBase* );
	/* ./renderdevicebase.h:343 */
	OsSpecificWindowHandle_t GetOsSpecificWindowHandle(const CSwapChainBase* );
	/* ./renderdevicebase.h:344 */
	HRenderTexture GetColorTexture(const CSwapChainBase* );
	/* ./renderdevicebase.h:345 */
	HRenderTexture GetDepthTexture(const CSwapChainBase* );
	/* ./renderdevicebase.h:346 */
	ImageFormat GetSwapchainDepthFormat(const CSwapChainBase* );
	/* ./renderdevicebase.h:347 */
	const char* GetDebugName(const CSwapChainBase* );
	/* ./renderdevicebase.h:348 */
	void SetGPUFrameTimeMS(CSwapChainBase* , float, uint32);
	/* ./renderdevicebase.h:349 */
	float GetLastGPUFrameTimeMS(const CSwapChainBase* );
	/* ./renderdevicebase.h:350 */
	uint32 GetLastGPUFrameTimeNumber(const CSwapChainBase* );
	/* ./renderdevicebase.h:352 */
	bool HasOutstandingPresents(const CSwapChainBase* );
	/* ./renderdevicebase.h:353 */
	bool WaitOnPresent(const CSwapChainBase* );
	/* ./renderdevicebase.h:354 */
	void OnPresentQueued(const CSwapChainBase* , int);
	/* ./renderdevicebase.h:355 */
	void OnPresentCompleted(const CSwapChainBase* , int);
	/* ./renderdevicebase.h:356 */
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
	/* ./renderdevicebase.h:374 */
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

// <00A58C46> ./renderdevicebase.h:326
void CSwapChainBase::CSwapChainBase()
{
} /* size: 0 */

// <00A58C2D> ./renderdevicebase.h:326
inline void CSwapChainBase::CSwapChainBase()
{
} /* size: 0 */

// <00A58B75> ./renderdevicebase.h:337
// function calls: 2
void CSwapChainBase::~CSwapChainBase()
{
	CStrongHandle<InfoForResourceTypeCTextureBase>::~CStrongHandle(); // 337
	CStrongHandle<InfoForResourceTypeCTextureBase>::~CStrongHandle(); // 337
} /* size: 50, inline expansions: 2 (10 bytes) */

// <00A58A7A> ./renderdevicebase.h:337
// function calls: 3
void CSwapChainBase::~CSwapChainBase()
{
	CStrongHandle<InfoForResourceTypeCTextureBase>::~CStrongHandle(); // 337
	CStrongHandle<InfoForResourceTypeCTextureBase>::~CStrongHandle(); // 337
	CSwapChainBase::~CSwapChainBase(); // 337
} /* size: 63, inline expansions: 3 (39 bytes) */

// <00A58A61> ./renderdevicebase.h:337
inline void CSwapChainBase::~CSwapChainBase()
{
} /* size: 0 */

// <00A58A32> ./renderdevicebase.h:339
void CSwapChainBase::GetWidth()
{
} /* size: 8 */

// <00A58A03> ./renderdevicebase.h:340
void CSwapChainBase::GetHeight()
{
} /* size: 8 */

// <0087A89E> ./renderdevicebase.h:341
inline void CSwapChainBase::GetRenderDeviceInfo()
{
} /* size: 0 */

// <00A589EA> ./renderdevicebase.h:342
inline void CSwapChainBase::GetPlatWindowHandle()
{
} /* size: 0 */

// <0087A885> ./renderdevicebase.h:343
inline void CSwapChainBase::GetOsSpecificWindowHandle()
{
} /* size: 0 */

// <0087A86C> ./renderdevicebase.h:344
inline void CSwapChainBase::GetColorTexture()
{
} /* size: 0 */

// <0087A853> ./renderdevicebase.h:347
inline void CSwapChainBase::GetDebugName()
{
} /* size: 0 */

// <00A589BB> ./renderdevicebase.h:411
void CRenderDeviceBase::IsWindowResizingEnabled()
{
} /* size: 12 */

// <00A588E4> ./renderdevicebase.h:448
// function calls: 2
void CRenderDeviceBase::GetTextureSheet(HRenderTexture a1)
{
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 448
} /* size: 73, inline expansions: 2 (14 bytes) */

// <003E9C09> ./renderdevicebase.h:516
// variables: 2
void* CRenderDeviceBase::GetDeviceSpecificImageView(HRenderTexture hTexture, RenderTextureDimension_t nDim, RenderColorSpace_t colorSpace)
{
	const char   __FUNCTION__; // 58033
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 516
	}
} /* size: 29, variables: 1 */

// <003E9B71> ./renderdevicebase.h:517
// variables: 2
void* CRenderDeviceBase::GetDeviceSpecificBuffer(RenderBufferHandle_t hBuffer)
{
	const char   __FUNCTION__; // 57962
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 517
	}
} /* size: 29, variables: 1 */

// <003E9AD9> ./renderdevicebase.h:518
// variables: 2
void* CRenderDeviceBase::GetDeviceSpecificBuffer(IndexBufferHandle_t hBuffer)
{
	const char   __FUNCTION__; // 57962
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 518
	}
} /* size: 29, variables: 1 */

// <003E9A41> ./renderdevicebase.h:519
// variables: 2
void* CRenderDeviceBase::GetDeviceSpecificBuffer(VertexBufferHandle_t hBuffer)
{
	const char   __FUNCTION__; // 57962
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 519
	}
} /* size: 29, variables: 1 */

// <003E99A9> ./renderdevicebase.h:520
// variables: 2
void* CRenderDeviceBase::GetDeviceSpecificDescriptorSet(RenderDescriptorSetHandle_t hDescriptorSet)
{
	const char   __FUNCTION__; // 58126
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 520
	}
} /* size: 29, variables: 1 */

// <003E9911> ./renderdevicebase.h:521
// variables: 2
void* CRenderDeviceBase::GetDeviceSpecificRayTracePipeline(RenderRayTracePipelineHandle_t hRayTracePipeline)
{
	const char   __FUNCTION__; // 58197
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 521
	}
} /* size: 29, variables: 1 */

// <0044DEF9> ./renderdevicebase.h:543
void CRenderDeviceBase::DestroyDescriptorSet(RenderDescriptorSetHandle_t hDescriptorSet)
{
} /* size: 0 */

// <00C505F1> ./renderdevicebase.h:545
void CRenderDeviceBase::UpdateGlobalPerFrameDescriptorBindings(int32 nNumBindings, const RenderDescriptorBinding_t* pDescriptorBindings)
{
} /* size: 0 */

// <003E98B6> ./renderdevicebase.h:551
void CRenderDeviceBase::GetClearFlagsSupportedInRenderPass(int nClearFlags, const RenderTargetDesc_t& renderTargets, const RenderClearInfo_t& clearInfo)
{
} /* size: 7 */

// <003E9879> ./renderdevicebase.h:556
void CRenderDeviceBase::OnRenderDeviceFlagsEnabled(RenderDeviceFlag_t nFlags)
{
} /* size: 5 */

// <003E983C> ./renderdevicebase.h:557
void CRenderDeviceBase::OnRenderDeviceFlagsDisabled(RenderDeviceFlag_t nFlags)
{
} /* size: 5 */

// <003E980E> ./renderdevicebase.h:567
void CRenderDeviceBase::IsProfilerAttached()
{
} /* size: 7 */

// <003E97D1> ./renderdevicebase.h:568
void CRenderDeviceBase::UnThrottlePipelineCreationForNFrames(uint32 nNumberOfFramesForUnthrottledPipelineCreation)
{
} /* size: 5 */

// <00A588B5> ./renderdevicebase.h:571
void CRenderDeviceBase::GetTextureGlobalMipLODBias()
{
} /* size: 13 */

// <003E9757> ./renderdevicebase.h:576
void CRenderDeviceBase::CreateBLAS(const BLASCreateDesc_t& desc, uint32* pSizeCounter)
{
} /* size: 7 */

// <003E971A> ./renderdevicebase.h:577
void CRenderDeviceBase::IsCompactible(RenderBLASHandle_t hBLAS)
{
} /* size: 7 */

// <003E96DD> ./renderdevicebase.h:578
void CRenderDeviceBase::IsReadyToCompact(RenderBLASHandle_t hBLAS)
{
} /* size: 10 */

// <003E96A0> ./renderdevicebase.h:579
void CRenderDeviceBase::CreateBLASForCompact(RenderBLASHandle_t hBloated)
{
} /* size: 7 */

// <003E9663> ./renderdevicebase.h:580
void CRenderDeviceBase::DestroyBLAS(RenderBLASHandle_t hBLAS)
{
} /* size: 5 */

// <003E9608> ./renderdevicebase.h:582
void CRenderDeviceBase::CreateTLAS(const TLASCreateDesc_t& desc, TLASInstance_t* pInstances, int nInstanceCount)
{
} /* size: 7 */

// <003E95CB> ./renderdevicebase.h:583
void CRenderDeviceBase::DestroyTLAS(RenderTLASHandle_t hTLAS)
{
} /* size: 5 */

// <003E958E> ./renderdevicebase.h:585
void CRenderDeviceBase::CreateRayTracePipeline(const RayTracePipelineStateCreateDesc_t& desc)
{
} /* size: 7 */

// <003E9551> ./renderdevicebase.h:586
void CRenderDeviceBase::DestroyRayTracePipeline(RenderRayTracePipelineHandle_t hPipeline)
{
} /* size: 5 */

// <003E9523> ./renderdevicebase.h:587
void CRenderDeviceBase::IsCreatingRayTracePipelines()
{
} /* size: 7 */

// <003E94E6> ./renderdevicebase.h:589
void CRenderDeviceBase::CreateRayTraceShaderBindingTable(const ShaderBindingTableCreateDesc_t& desc)
{
} /* size: 7 */

// <003E94A9> ./renderdevicebase.h:590
void CRenderDeviceBase::DestroyRayTraceShaderBindingTable(IRaytraceShaderBindingTable* pSBT)
{
} /* size: 5 */

// <003E947B> ./renderdevicebase.h:592
void CRenderDeviceBase::IsRayTracingSupported()
{
} /* size: 7 */

// <00A5E343> ./renderdevicebase.h:594
// function call: 1
void CRenderDeviceBase::IsAsyncPresentEnabled()
{
	CInterlockedIntT<int, 4>::operator int(); // 594
} /* size: 16, inline expansions: 1 (6 bytes) */

// <00A5889C> ./renderdevicebase.h:594
inline void CRenderDeviceBase::IsAsyncPresentEnabled()
{
} /* size: 0 */

// <00A58869> ./renderdevicebase.h:611
void CRenderDeviceBase::DefragmentGPUMemory(RenderDefragFlags_t defragFlags, bool bAsyncDefrag)
{
} /* size: 0 */

// <009A6D9E> ./renderdevicebase.h:628
void CRenderDeviceBase::CRenderDeviceBase()
{
} /* size: 0 */

// <009A6933> ./renderdevicebase.h:629
void CRenderDeviceBase::~CRenderDeviceBase()
{
} /* size: 0 */

// <00A5882A> ./renderdevicebase.h:631
void CRenderDeviceBase::OtherAppInitializing(bool initializing)
{
} /* size: 5 */

// <00A587FB> ./renderdevicebase.h:632
void CRenderDeviceBase::EvictManagedResourcesInternal()
{
} /* size: 5 */

// <003E9375> ./renderdevicebase.h:674
void CRenderDeviceBase::GetGPUMemoryFragmentationBytes()
{
} /* size: 7 */

// <003E9328> ./renderdevicebase.h:713
void CRenderDeviceBase::CreateRayTraceShader(unique_ptr<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> > pShaderBuffer, const char* pDebugName)
{
} /* size: 7 */

// <003E92EB> ./renderdevicebase.h:714
void CRenderDeviceBase::DestroyRayTraceShader(RenderShaderHandle_t hShader)
{
} /* size: 5 */

// <003E92C5> ./renderdevicebase.h:737
inline void CRenderDeviceBase::FreeConstantBuffer(ConstantBufferHandle_t hConstantBuffer)
{
} /* size: 0 */

// <00B8B78F> ./renderdevicebase.h:749
inline void CRenderDeviceBase::ReleasePooledDynamicConstantBuffer(ConstantBuffer_t* pConstantBuffer)
{
} /* size: 0 */

// <003E9261> ./renderdevicebase.h:781
void CRenderDeviceBase::GetGraphicsAPISpecificTextureHandle(HRenderTexture hTexture)
{
} /* size: 7 */

// <00C863D5> ./renderdevicebase.h:1067
inline void CRenderDeviceBase::GetContextFrameCount()
{
} /* size: 0 */

// <00A5878D> ./renderdevicebase.h:1098
void CRenderDeviceBase::GetRenderThreadHandle()
{
} /* size: 12 */

// <00A5875E> ./renderdevicebase.h:1103
void CRenderDeviceBase::GetRenderThreadId()
{
} /* size: 12 */

// <00B74D54> ./renderdevicebase.h:1114
void CRenderDeviceBase::GetSwapChain<CSwapChainVulkan>(SwapChainHandle_t hSwapChain)
{
} /* size: 0 */

// <003E6706> ./renderdevicebase.h:1114
void CRenderDeviceBase::GetSwapChain<CSwapChainEmpty>(SwapChainHandle_t hSwapChain)
{
} /* size: 0 */

