
//
// tier0/tier0_internal.h
//
//	referenced by: libtier0.so
//
//	functions: 5
//	class: 1
//	struct: 1
//

// <001A3D07> tier0/tier0_internal.h:39
// member variables: 3
// struct size: 24
struct FullHTMLEntity_t {
	uchar32 uCharCode; /* 0 4 */
	const char * pchEntity; /* 8 8 */
	int nEntityLength; /* 16 4 */
};

// <00029C13> tier0/tier0_internal.h:50
void CMaximumWaitQueue::CMaximumWaitQueue()
{
} /* size: 0 */

// <00029BF7> tier0/tier0_internal.h:50
inline void CMaximumWaitQueue::CMaximumWaitQueue()
{
} /* size: 0 */

// <0002075E> tier0/tier0_internal.h:50
// member functions: 10
// member variables: 4
// class size: 24
class CMaximumWaitQueue {
	CInterlockedUInt m_nEnter __attribute__((__aligned__(4))); /* 0 4 */
	CInterlockedUInt m_nProcessing __attribute__((__aligned__(4))); /* 4 4 */
	CInterlockedUInt64 m_nHeartBeat __attribute__((__aligned__(8))); /* 8 8 */
	CInterlockedIntT<long long unsigned int, 8> m_nThreadID __attribute__((__aligned__(8))); /* 16 8 */
	/* tier0/tier0_internal.h:58 */
	void HeartBeat(CMaximumWaitQueue* , ThreadId_t);
	/* tier0/tier0_internal.h:69 */
	bool IsOwnedByThread(CMaximumWaitQueue* , ThreadId_t);
	/* tier0/tier0_internal.h:77 */
	uint32 Wait(CMaximumWaitQueue* , ThreadId_t, uint64, uint64, void (*)(void* ), void* );
	/* tier0/tier0_internal.h:134 */
	void Release(CMaximumWaitQueue* , ThreadId_t, uint32);
	void CMaximumWaitQueue(CMaximumWaitQueue* );
	void HeartBeat(class CMaximumWaitQueue *, ThreadId_t); /* linkage=_ZN17CMaximumWaitQueue9HeartBeatEy */
	bool IsOwnedByThread(class CMaximumWaitQueue *, ThreadId_t); /* linkage=_ZN17CMaximumWaitQueue15IsOwnedByThreadEy */
	uint32 Wait(class CMaximumWaitQueue *, ThreadId_t, uint64, uint64, void (*)(void *), void *); /* linkage=_ZN17CMaximumWaitQueue4WaitEyyyPFvPvES0_ */
	void Release(class CMaximumWaitQueue *, ThreadId_t, uint32); /* linkage=_ZN17CMaximumWaitQueue7ReleaseEyj */
	void CMaximumWaitQueue(class CMaximumWaitQueue *); /* linkage=_ZN17CMaximumWaitQueueC4Ev */
} __attribute__((__aligned__(8)));

// <0002F1E4> tier0/tier0_internal.h:69
// variables: 2
inline void CMaximumWaitQueue::IsOwnedByThread(ThreadId_t nThreadID)
{
	uint32 nEnter; // 71
	uint32 nProcessing; // 72
} /* size: 0, variables: 2 */

// <0002F151> tier0/tier0_internal.h:77
// variables: 5
inline void CMaximumWaitQueue::Wait(ThreadId_t nThreadID, uint64 nIncrememntalWaitMS, uint64 nMaxWaitMS, void (*pFN_OncePerWaitCallback)(void *), void* pContext)
{
	CFastTimer maximumWaitTimer; // 79
	uint32 nQueueID; // 82
	{
		uint32 nAutoIncrement_ProcessingNumber; // 87
		uint64 nLastHeartBeat; // 88
		CFastTimer autoIncrementTimer; // 89
	}
} /* size: 0, variables: 2 */

// <0002F120> tier0/tier0_internal.h:134
inline void CMaximumWaitQueue::Release(ThreadId_t nThreadID, uint32 nQueueID)
{
} /* size: 0 */

