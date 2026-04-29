
//
// public/tier2/utlstreambuffer.h
//
//	referenced by: libengine2.so
//				   libmaterialsystem2.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//				   libvfx_vulkan.so
//
//	functions: 2
//	classes: 3
//

// <04734B5B> ../public/tier2/utlstreambuffer.h:21
// member functions: 24
// member variables: 5
// class size: 112
class CUtlStreamBuffer : public CUtlBuffer {
public:
	/* class CUtlBuffer <ancestor>; */ /* 0 80 */
	/* ../public/tier2/utlstreambuffer.h:27 */
	void CUtlStreamBuffer(CUtlStreamBuffer* );
	/* ../public/tier2/utlstreambuffer.h:28 */
	void CUtlStreamBuffer(CUtlStreamBuffer* , const char* , const char* , int, bool, int, int);
	/* ../public/tier2/utlstreambuffer.h:29 */
	void ~CUtlStreamBuffer(CUtlStreamBuffer* );
	/* ../public/tier2/utlstreambuffer.h:32 */
	void Open(CUtlStreamBuffer* , const char* , const char* , int, int);
	/* ../public/tier2/utlstreambuffer.h:35 */
	void Close(CUtlStreamBuffer* );
	/* ../public/tier2/utlstreambuffer.h:38 */
	bool IsOpen(const CUtlStreamBuffer* );
	/* ../public/tier2/utlstreambuffer.h:41 */
	void Flush(CUtlStreamBuffer* );
private:
	/* ../public/tier2/utlstreambuffer.h:52 */
	bool StreamPutOverflow(CUtlStreamBuffer* , int);
	/* ../public/tier2/utlstreambuffer.h:53 */
	bool StreamGetOverflow(CUtlStreamBuffer* , int);
	/* ../public/tier2/utlstreambuffer.h:56 */
	void GrowAllocatedSize(CUtlStreamBuffer* , int);
	/* ../public/tier2/utlstreambuffer.h:59 */
	int ReadBytesFromFile(CUtlStreamBuffer* , int, int);
	/* ../public/tier2/utlstreambuffer.h:61 */
	FileHandle_t OpenFile(CUtlStreamBuffer* , const char* , const char* , int);
	FileHandle_t m_hFileHandle; /* 80 8 */
	char * m_pFileName; /* 88 8 */
	char * m_pPath; /* 96 8 */
	int m_nOpenFileFlags; /* 104 4 */
	void CUtlStreamBuffer(class CUtlStreamBuffer *); /* linkage=_ZN16CUtlStreamBufferC4Ev */
	void CUtlStreamBuffer(class CUtlStreamBuffer *, const char  *, const char  *, int, bool, int, int); /* linkage=_ZN16CUtlStreamBufferC4EPKcS1_ibii */
	void ~CUtlStreamBuffer(class CUtlStreamBuffer *); /* linkage=_ZN16CUtlStreamBufferD4Ev */
	void Open(class CUtlStreamBuffer *, const char  *, const char  *, int, int); /* linkage=_ZN16CUtlStreamBuffer4OpenEPKcS1_ii */
	void Close(class CUtlStreamBuffer *); /* linkage=_ZN16CUtlStreamBuffer5CloseEv */
	/* <6848fc9> tier2/utlstreambuffer.cpp:217 */
	bool IsOpen(const class CUtlStreamBuffer  *); /* linkage=_ZNK16CUtlStreamBuffer6IsOpenEv */
	void Flush(class CUtlStreamBuffer *); /* linkage=_ZN16CUtlStreamBuffer5FlushEv */
	bool StreamPutOverflow(class CUtlStreamBuffer *, int); /* linkage=_ZN16CUtlStreamBuffer17StreamPutOverflowEi */
	bool StreamGetOverflow(class CUtlStreamBuffer *, int); /* linkage=_ZN16CUtlStreamBuffer17StreamGetOverflowEi */
	void GrowAllocatedSize(class CUtlStreamBuffer *, int); /* linkage=_ZN16CUtlStreamBuffer17GrowAllocatedSizeEi */
	int ReadBytesFromFile(class CUtlStreamBuffer *, int, int); /* linkage=_ZN16CUtlStreamBuffer17ReadBytesFromFileEii */
	FileHandle_t OpenFile(class CUtlStreamBuffer *, const char  *, const char  *, int); /* linkage=_ZN16CUtlStreamBuffer8OpenFileEPKcS1_i */
};

// <0684488C> ../public/tier2/utlstreambuffer.h:21
// member functions: 24
// member variables: 5
// class size: 112
class CUtlStreamBuffer : public CUtlBuffer {
	/* ../public/tier2/utlstreambuffer.h:46 */
	enum {
		FILE_OPEN_ERROR = 4,
		FILE_WRITE_ERROR = 8,
	};
public:
	/* class CUtlBuffer <ancestor>; */ /* 0 80 */
	/* ../public/tier2/utlstreambuffer.h:27 */
	void CUtlStreamBuffer(CUtlStreamBuffer* );
	/* ../public/tier2/utlstreambuffer.h:28 */
	void CUtlStreamBuffer(CUtlStreamBuffer* , const char* , const char* , int, bool, int, int);
	/* ../public/tier2/utlstreambuffer.h:29 */
	void ~CUtlStreamBuffer(CUtlStreamBuffer* );
	/* ../public/tier2/utlstreambuffer.h:32 */
	void Open(CUtlStreamBuffer* , const char* , const char* , int, int);
	/* ../public/tier2/utlstreambuffer.h:35 */
	void Close(CUtlStreamBuffer* );
	/* ../public/tier2/utlstreambuffer.h:38 */
	bool IsOpen(const CUtlStreamBuffer* );
	/* ../public/tier2/utlstreambuffer.h:41 */
	void Flush(CUtlStreamBuffer* );
private:
	/* ../public/tier2/utlstreambuffer.h:52 */
	bool StreamPutOverflow(CUtlStreamBuffer* , int);
	/* ../public/tier2/utlstreambuffer.h:53 */
	bool StreamGetOverflow(CUtlStreamBuffer* , int);
	/* ../public/tier2/utlstreambuffer.h:56 */
	void GrowAllocatedSize(CUtlStreamBuffer* , int);
	/* ../public/tier2/utlstreambuffer.h:59 */
	int ReadBytesFromFile(CUtlStreamBuffer* , int, int);
	/* ../public/tier2/utlstreambuffer.h:61 */
	FileHandle_t OpenFile(CUtlStreamBuffer* , const char* , const char* , int);
	FileHandle_t m_hFileHandle; /* 80 8 */
	char * m_pFileName; /* 88 8 */
	char * m_pPath; /* 96 8 */
	int m_nOpenFileFlags; /* 104 4 */
	void CUtlStreamBuffer(class CUtlStreamBuffer *); /* linkage=_ZN16CUtlStreamBufferC4Ev */
	void CUtlStreamBuffer(class CUtlStreamBuffer *, const char  *, const char  *, int, bool, int, int); /* linkage=_ZN16CUtlStreamBufferC4EPKcS1_ibii */
	void ~CUtlStreamBuffer(class CUtlStreamBuffer *); /* linkage=_ZN16CUtlStreamBufferD4Ev */
	void Open(class CUtlStreamBuffer *, const char  *, const char  *, int, int); /* linkage=_ZN16CUtlStreamBuffer4OpenEPKcS1_ii */
	void Close(class CUtlStreamBuffer *); /* linkage=_ZN16CUtlStreamBuffer5CloseEv */
	/* <6848fc9> tier2/utlstreambuffer.cpp:217 */
	bool IsOpen(const class CUtlStreamBuffer  *); /* linkage=_ZNK16CUtlStreamBuffer6IsOpenEv */
	void Flush(class CUtlStreamBuffer *); /* linkage=_ZN16CUtlStreamBuffer5FlushEv */
	bool StreamPutOverflow(class CUtlStreamBuffer *, int); /* linkage=_ZN16CUtlStreamBuffer17StreamPutOverflowEi */
	bool StreamGetOverflow(class CUtlStreamBuffer *, int); /* linkage=_ZN16CUtlStreamBuffer17StreamGetOverflowEi */
	void GrowAllocatedSize(class CUtlStreamBuffer *, int); /* linkage=_ZN16CUtlStreamBuffer17GrowAllocatedSizeEi */
	int ReadBytesFromFile(class CUtlStreamBuffer *, int, int); /* linkage=_ZN16CUtlStreamBuffer17ReadBytesFromFileEii */
	FileHandle_t OpenFile(class CUtlStreamBuffer *, const char  *, const char  *, int); /* linkage=_ZN16CUtlStreamBuffer8OpenFileEPKcS1_i */
};

// <001BBF9D> ../../public/tier2/utlstreambuffer.h:21
// member functions: 24
// member variables: 5
// class size: 112
class CUtlStreamBuffer : public CUtlBuffer {
public:
	/* class CUtlBuffer <ancestor>; */ /* 0 80 */
	/* ../../public/tier2/utlstreambuffer.h:27 */
	void CUtlStreamBuffer(CUtlStreamBuffer* );
	/* ../../public/tier2/utlstreambuffer.h:28 */
	void CUtlStreamBuffer(CUtlStreamBuffer* , const char* , const char* , int, bool, int, int);
	/* ../../public/tier2/utlstreambuffer.h:29 */
	void ~CUtlStreamBuffer(CUtlStreamBuffer* );
	/* ../../public/tier2/utlstreambuffer.h:32 */
	void Open(CUtlStreamBuffer* , const char* , const char* , int, int);
	/* ../../public/tier2/utlstreambuffer.h:35 */
	void Close(CUtlStreamBuffer* );
	/* ../../public/tier2/utlstreambuffer.h:38 */
	bool IsOpen(const CUtlStreamBuffer* );
	/* ../../public/tier2/utlstreambuffer.h:41 */
	void Flush(CUtlStreamBuffer* );
private:
	/* ../../public/tier2/utlstreambuffer.h:52 */
	bool StreamPutOverflow(CUtlStreamBuffer* , int);
	/* ../../public/tier2/utlstreambuffer.h:53 */
	bool StreamGetOverflow(CUtlStreamBuffer* , int);
	/* ../../public/tier2/utlstreambuffer.h:56 */
	void GrowAllocatedSize(CUtlStreamBuffer* , int);
	/* ../../public/tier2/utlstreambuffer.h:59 */
	int ReadBytesFromFile(CUtlStreamBuffer* , int, int);
	/* ../../public/tier2/utlstreambuffer.h:61 */
	FileHandle_t OpenFile(CUtlStreamBuffer* , const char* , const char* , int);
	FileHandle_t m_hFileHandle; /* 80 8 */
	char * m_pFileName; /* 88 8 */
	char * m_pPath; /* 96 8 */
	int m_nOpenFileFlags; /* 104 4 */
	void CUtlStreamBuffer(class CUtlStreamBuffer *); /* linkage=_ZN16CUtlStreamBufferC4Ev */
	void CUtlStreamBuffer(class CUtlStreamBuffer *, const char  *, const char  *, int, bool, int, int); /* linkage=_ZN16CUtlStreamBufferC4EPKcS1_ibii */
	void ~CUtlStreamBuffer(class CUtlStreamBuffer *); /* linkage=_ZN16CUtlStreamBufferD4Ev */
	void Open(class CUtlStreamBuffer *, const char  *, const char  *, int, int); /* linkage=_ZN16CUtlStreamBuffer4OpenEPKcS1_ii */
	void Close(class CUtlStreamBuffer *); /* linkage=_ZN16CUtlStreamBuffer5CloseEv */
	/* <6848fc9> tier2/utlstreambuffer.cpp:217 */
	bool IsOpen(const class CUtlStreamBuffer  *); /* linkage=_ZNK16CUtlStreamBuffer6IsOpenEv */
	void Flush(class CUtlStreamBuffer *); /* linkage=_ZN16CUtlStreamBuffer5FlushEv */
	bool StreamPutOverflow(class CUtlStreamBuffer *, int); /* linkage=_ZN16CUtlStreamBuffer17StreamPutOverflowEi */
	bool StreamGetOverflow(class CUtlStreamBuffer *, int); /* linkage=_ZN16CUtlStreamBuffer17StreamGetOverflowEi */
	void GrowAllocatedSize(class CUtlStreamBuffer *, int); /* linkage=_ZN16CUtlStreamBuffer17GrowAllocatedSizeEi */
	int ReadBytesFromFile(class CUtlStreamBuffer *, int, int); /* linkage=_ZN16CUtlStreamBuffer17ReadBytesFromFileEii */
	FileHandle_t OpenFile(class CUtlStreamBuffer *, const char  *, const char  *, int); /* linkage=_ZN16CUtlStreamBuffer8OpenFileEPKcS1_i */
};

// <068DB28E> ../public/tier2/utlstreambuffer.h:28
void CUtlStreamBuffer::CUtlStreamBuffer(const char* pFileName, const char* pPath, int nFlags, bool bDelayOpen, int nOpenFileFlags, int nInitialOffset)
{
} /* size: 0 */

// <068DB224> ../public/tier2/utlstreambuffer.h:29
void CUtlStreamBuffer::~CUtlStreamBuffer()
{
} /* size: 0 */

