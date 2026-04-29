
//
// rendersystem/renderstatehelper.h
//
//	referenced by: librendersystemempty.so
//				   librendersystemvulkan.so
//
//	functions: 12
//	structs: 3
//

// <0016C4F7> rendersystem/renderstatehelper.h:19
// member functions: 5
// member variables: 3
// vtable entry: 1
// struct size: 24
class CRasterizerStateCreator : public ITSHashConstructor<void*> {
public:
	/* class ITSHashConstructor<void*> <ancestor>; */ /* 0 8 */
	void ~CRasterizerStateCreator(CRasterizerStateCreator* );
	void CRasterizerStateCreator(CRasterizerStateCreator* , CRasterizerStateCreator& );
	void CRasterizerStateCreator(CRasterizerStateCreator* , const CRasterizerStateCreator& );
	/* rendersystem/renderstatehelper.h:22 */
	void CRasterizerStateCreator(CRasterizerStateCreator* , const RsRasterizerStateDesc_t* , CRenderDeviceBase* );
	/* rendersystem/renderstatehelper.h:25 */
	virtual void Construct(CRasterizerStateCreator* , void** );
private:
	const class RsRasterizerStateDesc_t * m_pDesc; /* 8 8 */
	CRenderDeviceBase * m_pRenderDevice; /* 16 8 */
};

// <001A6C0E> rendersystem/renderstatehelper.h:22
void CRasterizerStateCreator::CRasterizerStateCreator(const RsRasterizerStateDesc_t* pDesc, CRenderDeviceBase* pRenderDevice)
{
} /* size: 0 */

// <001A6BDD> rendersystem/renderstatehelper.h:22
inline void CRasterizerStateCreator::CRasterizerStateCreator(const RsRasterizerStateDesc_t* pDesc, CRenderDeviceBase* pRenderDevice)
{
} /* size: 0 */

// <001B0679> rendersystem/renderstatehelper.h:25
// variable: 1
// function calls: 10
void CRasterizerStateCreator::Construct(void** pElement)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_29; // 29
	ThreadInterlockedAssignIf64(volatile int64* pDest,
					int64 value,
					int64 comparand);  // 800
	CThreadFastMutex::TryLockInline(
			const char* pFileName,
			int nLineNumber,
			const ThreadId_t  threadId);  // 837
	ThreadPause(void); // 839
	CThreadFastMutex::Lock(
		const char* pFileName,
		int nLineNumber,
		unsigned int nSpinSleepTime);  // 943
	Lock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::CAutoLockT(
			const CThreadFastMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 29
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 31
} /* size: 0, variables: 1, inline expansions: 10 (0 bytes) */

// <001A6BAC> rendersystem/renderstatehelper.h:25
// variable: 1
inline void CRasterizerStateCreator::Construct(void** pElement)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_29; // 29
} /* size: 0, variables: 1 */

// <0016C3F1> rendersystem/renderstatehelper.h:40
// member functions: 5
// member variables: 3
// vtable entry: 1
// struct size: 24
class CDepthStencilStateCreator : public ITSHashConstructor<void*> {
public:
	/* class ITSHashConstructor<void*> <ancestor>; */ /* 0 8 */
	void ~CDepthStencilStateCreator(CDepthStencilStateCreator* );
	void CDepthStencilStateCreator(CDepthStencilStateCreator* , CDepthStencilStateCreator& );
	void CDepthStencilStateCreator(CDepthStencilStateCreator* , const CDepthStencilStateCreator& );
	/* rendersystem/renderstatehelper.h:43 */
	void CDepthStencilStateCreator(CDepthStencilStateCreator* , const RsDepthStencilStateDesc_t* , CRenderDeviceBase* );
	/* rendersystem/renderstatehelper.h:46 */
	virtual void Construct(CDepthStencilStateCreator* , void** );
private:
	const class RsDepthStencilStateDesc_t * m_pDesc; /* 8 8 */
	CRenderDeviceBase * m_pRenderDevice; /* 16 8 */
};

// <001A6B8B> rendersystem/renderstatehelper.h:43
void CDepthStencilStateCreator::CDepthStencilStateCreator(const RsDepthStencilStateDesc_t* pDesc, CRenderDeviceBase* pRenderDevice)
{
} /* size: 0 */

// <001A6B5A> rendersystem/renderstatehelper.h:43
inline void CDepthStencilStateCreator::CDepthStencilStateCreator(const RsDepthStencilStateDesc_t* pDesc, CRenderDeviceBase* pRenderDevice)
{
} /* size: 0 */

// <001B0C9C> rendersystem/renderstatehelper.h:46
// variable: 1
// function calls: 10
void CDepthStencilStateCreator::Construct(void** pElement)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_50; // 50
	ThreadInterlockedAssignIf64(volatile int64* pDest,
					int64 value,
					int64 comparand);  // 800
	CThreadFastMutex::TryLockInline(
			const char* pFileName,
			int nLineNumber,
			const ThreadId_t  threadId);  // 837
	ThreadPause(void); // 839
	CThreadFastMutex::Lock(
		const char* pFileName,
		int nLineNumber,
		unsigned int nSpinSleepTime);  // 943
	Lock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::CAutoLockT(
			const CThreadFastMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 50
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 52
} /* size: 0, variables: 1, inline expansions: 10 (0 bytes) */

// <001A6B29> rendersystem/renderstatehelper.h:46
// variable: 1
inline void CDepthStencilStateCreator::Construct(void** pElement)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_50; // 50
} /* size: 0, variables: 1 */

// <0016C2EB> rendersystem/renderstatehelper.h:61
// member functions: 5
// member variables: 3
// vtable entry: 1
// struct size: 24
class CBlendStateCreator : public ITSHashConstructor<void*> {
public:
	/* class ITSHashConstructor<void*> <ancestor>; */ /* 0 8 */
	void ~CBlendStateCreator(CBlendStateCreator* );
	void CBlendStateCreator(CBlendStateCreator* , CBlendStateCreator& );
	void CBlendStateCreator(CBlendStateCreator* , const CBlendStateCreator& );
	/* rendersystem/renderstatehelper.h:64 */
	void CBlendStateCreator(CBlendStateCreator* , const RsBlendStateDesc_t* , CRenderDeviceBase* );
	/* rendersystem/renderstatehelper.h:67 */
	virtual void Construct(CBlendStateCreator* , void** );
private:
	const class RsBlendStateDesc_t * m_pDesc; /* 8 8 */
	CRenderDeviceBase * m_pRenderDevice; /* 16 8 */
};

// <001A6B08> rendersystem/renderstatehelper.h:64
void CBlendStateCreator::CBlendStateCreator(const RsBlendStateDesc_t* pDesc, CRenderDeviceBase* pRenderDevice)
{
} /* size: 0 */

// <001A6AD7> rendersystem/renderstatehelper.h:64
inline void CBlendStateCreator::CBlendStateCreator(const RsBlendStateDesc_t* pDesc, CRenderDeviceBase* pRenderDevice)
{
} /* size: 0 */

// <001B098A> rendersystem/renderstatehelper.h:67
// variable: 1
// function calls: 10
void CBlendStateCreator::Construct(void** pElement)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_71; // 71
	ThreadInterlockedAssignIf64(volatile int64* pDest,
					int64 value,
					int64 comparand);  // 800
	CThreadFastMutex::TryLockInline(
			const char* pFileName,
			int nLineNumber,
			const ThreadId_t  threadId);  // 837
	ThreadPause(void); // 839
	CThreadFastMutex::Lock(
		const char* pFileName,
		int nLineNumber,
		unsigned int nSpinSleepTime);  // 943
	Lock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::CAutoLockT(
			const CThreadFastMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 71
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 73
} /* size: 0, variables: 1, inline expansions: 10 (0 bytes) */

// <001A6AA6> rendersystem/renderstatehelper.h:67
// variable: 1
inline void CBlendStateCreator::Construct(void** pElement)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_71; // 71
} /* size: 0, variables: 1 */

