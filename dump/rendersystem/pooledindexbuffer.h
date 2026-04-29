
//
// rendersystem/pooledindexbuffer.h
//
//	referenced by: librendersystemempty.so
//				   librendersystemvulkan.so
//
//	functions: 5
//	class: 1
//

// <000A4FAF> rendersystem/pooledindexbuffer.h:13
// member functions: 10
// member variables: 6
// class size: 48
class CPooledIndexBuffer : public CRenderResource {
public:
	/* class CRenderResource <ancestor>; */ /* 0 16 */
	/* rendersystem/pooledindexbuffer.h:21 */
	void CPooledIndexBuffer(CPooledIndexBuffer* , Handle_t, uint, uint);
	/* rendersystem/pooledindexbuffer.h:18 */
	typedef struct Handle_t Handle_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* rendersystem/pooledindexbuffer.cpp:7 */
	virtual void ~CPooledIndexBuffer(CPooledIndexBuffer* );
	/* rendersystem/pooledindexbuffer.h:32 */
	Handle_t GetHandle(const CPooledIndexBuffer* );
	/* rendersystem/pooledindexbuffer.h:34 */
	uint GetIndexCount(const CPooledIndexBuffer* );
	/* rendersystem/pooledindexbuffer.h:37 */
	uint GetStartIndex(const CPooledIndexBuffer* );
private:
	const uint m_nIndexCount; /* 16 4 */
	const uint m_nIndexSize; /* 20 4 */
	const Handle_t m_Handle; /* 24 8 */
	CPooledIndexBuffer * m_pNext; /* 32 8 */
	CPooledIndexBuffer * m_pPrev; /* 40 8 */
	void CPooledIndexBuffer(class CPooledIndexBuffer *, Handle_t, uint, uint); /* linkage=_ZN18CPooledIndexBufferC4EN14CPoolAllocator8Handle_tEjj */
	virtual void ~CPooledIndexBuffer(class CPooledIndexBuffer *); /* linkage=_ZN18CPooledIndexBufferD4Ev */
	Handle_t GetHandle(const class CPooledIndexBuffer  *); /* linkage=_ZNK18CPooledIndexBuffer9GetHandleEv */
	uint GetIndexCount(const class CPooledIndexBuffer  *); /* linkage=_ZNK18CPooledIndexBuffer13GetIndexCountEv */
	uint GetStartIndex(const class CPooledIndexBuffer  *); /* linkage=_ZNK18CPooledIndexBuffer13GetStartIndexEv */
};

// <001A8926> rendersystem/pooledindexbuffer.h:21
void CPooledIndexBuffer::CPooledIndexBuffer(Handle_t handle, uint nIndexCount, uint nIndexSize)
{
} /* size: 0 */

// <001A88E9> rendersystem/pooledindexbuffer.h:21
inline void CPooledIndexBuffer::CPooledIndexBuffer(Handle_t handle, uint nIndexCount, uint nIndexSize)
{
} /* size: 0 */

// <0016CED1> rendersystem/pooledindexbuffer.h:30
void CPooledIndexBuffer::~CPooledIndexBuffer()
{
} /* size: 0 */

// <001A88D0> rendersystem/pooledindexbuffer.h:32
inline void CPooledIndexBuffer::GetHandle()
{
} /* size: 0 */

// <001A88B7> rendersystem/pooledindexbuffer.h:37
inline void CPooledIndexBuffer::GetStartIndex()
{
} /* size: 0 */

