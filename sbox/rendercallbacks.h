
//
// sbox/rendercallbacks.h
//
//	referenced by: libengine2.so
//
//	functions: 10
//	classes: 2
//

// <019FF018> sbox/rendercallbacks.h:8
// function calls: 2
void CReadTexturePixelsManagedCallback::~CReadTexturePixelsManagedCallback()
{
	IRenderReadCallback::~IRenderReadCallback(); // 178
	IReadTexturePixelsCallback::~IReadTexturePixelsCallback(); // 8
} /* size: 5, inline expansions: 2 (0 bytes) */

// <019FEF35> sbox/rendercallbacks.h:8
// function calls: 3
void CReadTexturePixelsManagedCallback::~CReadTexturePixelsManagedCallback()
{
	IRenderReadCallback::~IRenderReadCallback(); // 178
	IReadTexturePixelsCallback::~IReadTexturePixelsCallback(); // 8
	CReadTexturePixelsManagedCallback::~CReadTexturePixelsManagedCallback(); // 8
} /* size: 14, inline expansions: 3 (0 bytes) */

// <019FEF19> sbox/rendercallbacks.h:8
inline void CReadTexturePixelsManagedCallback::~CReadTexturePixelsManagedCallback()
{
} /* size: 0 */

// <01309369> sbox/rendercallbacks.h:8
void CReadTexturePixelsManagedCallback::~CReadTexturePixelsManagedCallback()
{
} /* size: 0 */

// <019F84E9> sbox/rendercallbacks.h:8
// member functions: 18
// member variables: 3
// vtable entries: 2
// class size: 16
class CReadTexturePixelsManagedCallback : public IReadTexturePixelsCallback {
public:
	/* class IReadTexturePixelsCallback <ancestor>; */ /* 0 8 */
	void CReadTexturePixelsManagedCallback(CReadTexturePixelsManagedCallback* , CReadTexturePixelsManagedCallback& );
	void CReadTexturePixelsManagedCallback(CReadTexturePixelsManagedCallback* , const CReadTexturePixelsManagedCallback& );
	/* sbox/rendercallbacks.cpp:6 */
	void CReadTexturePixelsManagedCallback(CReadTexturePixelsManagedCallback* );
	/* sbox/rendercallbacks.cpp:10 */
	virtual void OnReadTexturePixels(CReadTexturePixelsManagedCallback* , const uint8* , ImageFormat, int, int, int, int);
	/* sbox/rendercallbacks.cpp:15 */
	void Done(CReadTexturePixelsManagedCallback* );
	/* sbox/rendercallbacks.cpp:20 */
	void SetManagedId(CReadTexturePixelsManagedCallback* , int);
	/* sbox/rendercallbacks.cpp:25 */
	int GetManagedId(const CReadTexturePixelsManagedCallback* );
	/* sbox/rendercallbacks.cpp:30 */
	virtual bool IsDoneWithData(const CReadTexturePixelsManagedCallback* );
private:
	int m_managedId; /* 8 4 */
	bool m_isDone; /* 12 1 */
	virtual void ~CReadTexturePixelsManagedCallback(CReadTexturePixelsManagedCallback* );
	virtual void OnReadTexturePixels(class CReadTexturePixelsManagedCallback *, const uint8  *, enum ImageFormat, int, int, int, int); /* linkage=_ZN33CReadTexturePixelsManagedCallback19OnReadTexturePixelsEPKh11ImageFormatiiii */
	virtual bool IsDoneWithData(const class CReadTexturePixelsManagedCallback  *); /* linkage=_ZNK33CReadTexturePixelsManagedCallback14IsDoneWithDataEv */
	void Done(class CReadTexturePixelsManagedCallback *); /* linkage=_ZN33CReadTexturePixelsManagedCallback4DoneEv */
	int GetManagedId(const class CReadTexturePixelsManagedCallback  *); /* linkage=_ZNK33CReadTexturePixelsManagedCallback12GetManagedIdEv */
	void SetManagedId(class CReadTexturePixelsManagedCallback *, int); /* linkage=_ZN33CReadTexturePixelsManagedCallback12SetManagedIdEi */
	void CReadTexturePixelsManagedCallback(class CReadTexturePixelsManagedCallback *); /* linkage=_ZN33CReadTexturePixelsManagedCallbackC4Ev */
	virtual void ~CReadTexturePixelsManagedCallback(class CReadTexturePixelsManagedCallback *); /* linkage=_ZN33CReadTexturePixelsManagedCallbackD4Ev */
	void CReadTexturePixelsManagedCallback(class CReadTexturePixelsManagedCallback *, class CReadTexturePixelsManagedCallback &); /* linkage=_ZN33CReadTexturePixelsManagedCallbackC4EOS_ */
	void CReadTexturePixelsManagedCallback(class CReadTexturePixelsManagedCallback *, const class CReadTexturePixelsManagedCallback  &); /* linkage=_ZN33CReadTexturePixelsManagedCallbackC4ERKS_ */
};

// <01259FE6> sbox/rendercallbacks.h:12
void CReadTexturePixelsManagedCallback::CReadTexturePixelsManagedCallback()
{
} /* size: 0 */

// <019FF1A6> sbox/rendercallbacks.h:34
// function calls: 2
void CReadBufferManagedCallback::~CReadBufferManagedCallback()
{
	IRenderReadCallback::~IRenderReadCallback(); // 184
	IReadBufferCallback::~IReadBufferCallback(); // 34
} /* size: 5, inline expansions: 2 (0 bytes) */

// <019FF0C3> sbox/rendercallbacks.h:34
// function calls: 3
void CReadBufferManagedCallback::~CReadBufferManagedCallback()
{
	IRenderReadCallback::~IRenderReadCallback(); // 184
	IReadBufferCallback::~IReadBufferCallback(); // 34
	CReadBufferManagedCallback::~CReadBufferManagedCallback(); // 34
} /* size: 14, inline expansions: 3 (0 bytes) */

// <019FF0A7> sbox/rendercallbacks.h:34
inline void CReadBufferManagedCallback::~CReadBufferManagedCallback()
{
} /* size: 0 */

// <013095B3> sbox/rendercallbacks.h:34
void CReadBufferManagedCallback::~CReadBufferManagedCallback()
{
} /* size: 0 */

// <019F867A> sbox/rendercallbacks.h:34
// member functions: 18
// member variables: 3
// vtable entries: 2
// class size: 16
class CReadBufferManagedCallback : public IReadBufferCallback {
public:
	/* class IReadBufferCallback <ancestor>; */ /* 0 8 */
	void CReadBufferManagedCallback(CReadBufferManagedCallback* , CReadBufferManagedCallback& );
	void CReadBufferManagedCallback(CReadBufferManagedCallback* , const CReadBufferManagedCallback& );
	/* sbox/rendercallbacks.cpp:35 */
	void CReadBufferManagedCallback(CReadBufferManagedCallback* );
	/* sbox/rendercallbacks.cpp:39 */
	virtual void OnReadBuffer(CReadBufferManagedCallback* , const uint8* , int32);
	/* sbox/rendercallbacks.cpp:44 */
	void Done(CReadBufferManagedCallback* );
	/* sbox/rendercallbacks.cpp:49 */
	void SetManagedId(CReadBufferManagedCallback* , int);
	/* sbox/rendercallbacks.cpp:54 */
	int GetManagedId(const CReadBufferManagedCallback* );
	/* sbox/rendercallbacks.cpp:59 */
	virtual bool IsDoneWithData(const CReadBufferManagedCallback* );
private:
	int m_managedId; /* 8 4 */
	bool m_isDone; /* 12 1 */
	virtual void ~CReadBufferManagedCallback(CReadBufferManagedCallback* );
	virtual void OnReadBuffer(class CReadBufferManagedCallback *, const uint8  *, int32); /* linkage=_ZN26CReadBufferManagedCallback12OnReadBufferEPKhi */
	virtual bool IsDoneWithData(const class CReadBufferManagedCallback  *); /* linkage=_ZNK26CReadBufferManagedCallback14IsDoneWithDataEv */
	void Done(class CReadBufferManagedCallback *); /* linkage=_ZN26CReadBufferManagedCallback4DoneEv */
	int GetManagedId(const class CReadBufferManagedCallback  *); /* linkage=_ZNK26CReadBufferManagedCallback12GetManagedIdEv */
	void SetManagedId(class CReadBufferManagedCallback *, int); /* linkage=_ZN26CReadBufferManagedCallback12SetManagedIdEi */
	void CReadBufferManagedCallback(class CReadBufferManagedCallback *); /* linkage=_ZN26CReadBufferManagedCallbackC4Ev */
	virtual void ~CReadBufferManagedCallback(class CReadBufferManagedCallback *); /* linkage=_ZN26CReadBufferManagedCallbackD4Ev */
	void CReadBufferManagedCallback(class CReadBufferManagedCallback *, class CReadBufferManagedCallback &); /* linkage=_ZN26CReadBufferManagedCallbackC4EOS_ */
	void CReadBufferManagedCallback(class CReadBufferManagedCallback *, const class CReadBufferManagedCallback  &); /* linkage=_ZN26CReadBufferManagedCallbackC4ERKS_ */
};

// <0125A002> sbox/rendercallbacks.h:38
void CReadBufferManagedCallback::CReadBufferManagedCallback()
{
} /* size: 0 */

