
//
// public/tier0/circularbuffer.h
//
//	referenced by: libengine2.so
//				   libtier0.so
//
//	functions: 4
//	class: 1
//

// <02636044> ../public/tier0/circularbuffer.h:17
// member functions: 28
// member variables: 5
// class size: 24
class CCircularBuffer {
private:
	/* ../public/tier0/circularbuffer.h:19 */
	void FreeData(CCircularBuffer* );
	/* ../public/tier0/circularbuffer.h:22 */
	void CCircularBuffer(CCircularBuffer* );
	/* ../public/tier0/circularbuffer.h:23 */
	void ~CCircularBuffer(CCircularBuffer* );
	/* ../public/tier0/circularbuffer.h:24 */
	void CCircularBuffer(CCircularBuffer* , uint);
protected:
	/* ../public/tier0/circularbuffer.h:27 */
	void AssertValid(CCircularBuffer* );
	/* ../public/tier0/circularbuffer.h:30 */
	void Resize(CCircularBuffer* , int);
	/* ../public/tier0/circularbuffer.h:32 */
	void Flush(CCircularBuffer* );
	/* ../public/tier0/circularbuffer.h:34 */
	int GetSize(CCircularBuffer* );
	/* ../public/tier0/circularbuffer.h:39 */
	int GetWriteAvailable(CCircularBuffer* );
	/* ../public/tier0/circularbuffer.h:42 */
	int GetReadAvailable(CCircularBuffer* );
	/* ../public/tier0/circularbuffer.h:44 */
	int Peek(CCircularBuffer* , void* , int);
	/* ../public/tier0/circularbuffer.h:45 */
	int Advance(CCircularBuffer* , int);
	/* ../public/tier0/circularbuffer.h:46 */
	int Read(CCircularBuffer* , void* , int);
	/* ../public/tier0/circularbuffer.h:47 */
	int Write(CCircularBuffer* , const void* , int);
	int m_nCount; /* 0 4 */
	int m_nRead; /* 4 4 */
	int m_nWrite; /* 8 4 */
	int m_nSize; /* 12 4 */
	char * m_pData; /* 16 8 */
	/* <9525a> tier0/circularbuffer.cpp:32 */
	void FreeData(class CCircularBuffer *); /* linkage=_ZN15CCircularBuffer8FreeDataEv */
	void CCircularBuffer(class CCircularBuffer *); /* linkage=_ZN15CCircularBufferC4Ev */
	void ~CCircularBuffer(class CCircularBuffer *); /* linkage=_ZN15CCircularBufferD4Ev */
	void CCircularBuffer(class CCircularBuffer *, uint); /* linkage=_ZN15CCircularBufferC4Ej */
	void AssertValid(class CCircularBuffer *); /* linkage=_ZN15CCircularBuffer11AssertValidEv */
	void Resize(class CCircularBuffer *, int); /* linkage=_ZN15CCircularBuffer6ResizeEi */
	void Flush(class CCircularBuffer *); /* linkage=_ZN15CCircularBuffer5FlushEv */
	int GetSize(class CCircularBuffer *); /* linkage=_ZN15CCircularBuffer7GetSizeEv */
	int GetWriteAvailable(class CCircularBuffer *); /* linkage=_ZN15CCircularBuffer17GetWriteAvailableEv */
	int GetReadAvailable(class CCircularBuffer *); /* linkage=_ZN15CCircularBuffer16GetReadAvailableEv */
	int Peek(class CCircularBuffer *, void *, int); /* linkage=_ZN15CCircularBuffer4PeekEPvi */
	int Advance(class CCircularBuffer *, int); /* linkage=_ZN15CCircularBuffer7AdvanceEi */
	int Read(class CCircularBuffer *, void *, int); /* linkage=_ZN15CCircularBuffer4ReadEPvi */
	int Write(class CCircularBuffer *, const void  *, int); /* linkage=_ZN15CCircularBuffer5WriteEPKvi */
};

// <02639360> ../public/tier0/circularbuffer.h:23
void CCircularBuffer::~CCircularBuffer()
{
} /* size: 0 */

// <026393ED> ../public/tier0/circularbuffer.h:24
void CCircularBuffer::CCircularBuffer(uint nSize)
{
} /* size: 0 */

// <02640BAB> ../public/tier0/circularbuffer.h:39
inline void CCircularBuffer::GetWriteAvailable()
{
} /* size: 0 */

// <02640B92> ../public/tier0/circularbuffer.h:42
inline void CCircularBuffer::GetReadAvailable()
{
} /* size: 0 */

