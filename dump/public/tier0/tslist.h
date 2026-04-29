
//
// public/tier0/tslist.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//				   libtier0.so
//
//	functions: 523
//	classes: 44
//	struct: 1
//	union: 1
//

// <01D140CA> ../public/tier0/tslist.h:65
// member variable: 1
// struct size: 16
struct TSLNodeBase_t {
	TSLNodeBase_t * Next; /* 0 8 */
} __attribute__((__aligned__(16)));

// <01D140EF> ../public/tier0/tslist.h:70
union TSLHead_t {
	Value_t value; /* 0 16 */
	Value32_t value32; /* 0 16 */
	InterlockedPointerX2SizedInt_t valueInterlock; /* 0 16 */
};

// <01D14199> ../public/tier0/tslist.h:113
// member functions: 14
// member variable: 1
// class size: 16
class CTSListBase {
	/* ../public/tier0/tslist.h:116 */
	void CTSListBase(CTSListBase* );
	/* ../public/tier0/tslist.h:133 */
	void ~CTSListBase(CTSListBase* );
	/* ../public/tier0/tslist.h:138 */
	TSLNodeBase_t* Push(CTSListBase* , TSLNodeBase_t* );
	/* ../public/tier0/tslist.h:180 */
	TSLNodeBase_t* Pop(CTSListBase* );
	/* ../public/tier0/tslist.h:215 */
	TSLNodeBase_t* Detach(CTSListBase* );
	/* ../public/tier0/tslist.h:250 */
	union TSLHead_t* AccessUnprotected(CTSListBase* );
	/* ../public/tier0/tslist.h:255 */
	int Count(const CTSListBase* );
private:
	union TSLHead_t m_Head __attribute__((__aligned__(16))); /* 0 16 */
	void CTSListBase(class CTSListBase *); /* linkage=_ZN11CTSListBaseC4Ev */
	void ~CTSListBase(class CTSListBase *); /* linkage=_ZN11CTSListBaseD4Ev */
	class TSLNodeBase_t * Push(class CTSListBase *, class TSLNodeBase_t *); /* linkage=_ZN11CTSListBase4PushEP13TSLNodeBase_t */
	class TSLNodeBase_t * Pop(class CTSListBase *); /* linkage=_ZN11CTSListBase3PopEv */
	class TSLNodeBase_t * Detach(class CTSListBase *); /* linkage=_ZN11CTSListBase6DetachEv */
	union TSLHead_t * AccessUnprotected(class CTSListBase *); /* linkage=_ZN11CTSListBase17AccessUnprotectedEv */
	int Count(const class CTSListBase  *); /* linkage=_ZNK11CTSListBase5CountEv */
} __attribute__((__aligned__(16)));

// <06860C26> ../public/tier0/tslist.h:116
void CTSListBase::CTSListBase()
{
} /* size: 0 */

// <06860C0D> ../public/tier0/tslist.h:116
inline void CTSListBase::CTSListBase()
{
} /* size: 0 */

// <06860BF6> ../public/tier0/tslist.h:133
void CTSListBase::~CTSListBase()
{
} /* size: 0 */

// <06860BDD> ../public/tier0/tslist.h:133
inline void CTSListBase::~CTSListBase()
{
} /* size: 0 */

// <004FCD8D> ../public/tier0/tslist.h:133
// function calls: 4
void CTSListBase::~CTSListBase()
{
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 244
	ThreadPause(void); // 230
	CTSListBase::Detach(); // 135
} /* size: 93, inline expansions: 4 (111 bytes) */

// <06860BA0> ../public/tier0/tslist.h:138
// variables: 2
inline void CTSListBase::Push(TSLNodeBase_t* pNode)
{
	union TSLHead_t oldHead; // 151
	union TSLHead_t newHead; // 152
} /* size: 0, variables: 2 */

// <06860B6F> ../public/tier0/tslist.h:180
// variables: 2
inline void CTSListBase::Pop()
{
	union TSLHead_t oldHead; // 186
	union TSLHead_t newHead; // 187
} /* size: 0, variables: 2 */

// <06860B3E> ../public/tier0/tslist.h:215
// variables: 2
inline void CTSListBase::Detach()
{
	union TSLHead_t oldHead; // 221
	union TSLHead_t newHead; // 222
} /* size: 0, variables: 2 */

// <00C513B7> ../public/tier0/tslist.h:255
inline void CTSListBase::Count()
{
} /* size: 0 */

// <068608C8> ../public/tier0/tslist.h:337
void CTSPool<CThreadedLogger::Buffer_t>::CTSPool()
{
} /* size: 0 */

// <068608AB> ../public/tier0/tslist.h:337
inline void CTSPool<CThreadedLogger::Buffer_t>::CTSPool()
{
} /* size: 0 */

// <04017CC3> ../public/tier0/tslist.h:337
void CTSPool<CRenderAttributes>::CTSPool()
{
} /* size: 0 */

// <04017CA6> ../public/tier0/tslist.h:337
inline void CTSPool<CRenderAttributes>::CTSPool()
{
} /* size: 0 */

// <038824E4> ../public/tier0/tslist.h:337
void CTSPool<SceneViewTimestampQuery_t>::CTSPool()
{
} /* size: 0 */

// <038824C7> ../public/tier0/tslist.h:337
inline void CTSPool<SceneViewTimestampQuery_t>::CTSPool()
{
} /* size: 0 */

// <02F116FB> ../public/tier0/tslist.h:337
void CTSPool<CSceneDrawList>::CTSPool()
{
} /* size: 0 */

// <02F116DE> ../public/tier0/tslist.h:337
inline void CTSPool<CSceneDrawList>::CTSPool()
{
} /* size: 0 */

// <02F1165F> ../public/tier0/tslist.h:337
void CTSPool<CSceneObject>::CTSPool()
{
} /* size: 0 */

// <02F11642> ../public/tier0/tslist.h:337
inline void CTSPool<CSceneObject>::CTSPool()
{
} /* size: 0 */

// <0273A72E> ../public/tier0/tslist.h:337
void CTSPool<CBoneSetup>::CTSPool()
{
} /* size: 0 */

// <0273A711> ../public/tier0/tslist.h:337
inline void CTSPool<CBoneSetup>::CTSPool()
{
} /* size: 0 */

// <00CE9875> ../public/tier0/tslist.h:337
void CTSPool<CThreadLocalAnimationDecodeCache>::CTSPool()
{
} /* size: 0 */

// <00CE9858> ../public/tier0/tslist.h:337
inline void CTSPool<CThreadLocalAnimationDecodeCache>::CTSPool()
{
} /* size: 0 */

// <00C3028D> ../public/tier0/tslist.h:337
void CTSPool<CFallbackTextureVulkan>::CTSPool()
{
} /* size: 0 */

// <00C30270> ../public/tier0/tslist.h:337
inline void CTSPool<CFallbackTextureVulkan>::CTSPool()
{
} /* size: 0 */

// <001A5159> ../public/tier0/tslist.h:337
void CTSPool<CDependencyDescriptor>::CTSPool()
{
} /* size: 0 */

// <001A513C> ../public/tier0/tslist.h:337
inline void CTSPool<CDependencyDescriptor>::CTSPool()
{
} /* size: 0 */

// <001A5125> ../public/tier0/tslist.h:337
void CTSPool<CRenderPassDesc>::CTSPool()
{
} /* size: 0 */

// <001A5108> ../public/tier0/tslist.h:337
inline void CTSPool<CRenderPassDesc>::CTSPool()
{
} /* size: 0 */

// <00101CE8> ../public/tier0/tslist.h:337
void CTSPool<CCommandStream>::CTSPool()
{
} /* size: 0 */

// <00101CCA> ../public/tier0/tslist.h:337
inline void CTSPool<CCommandStream>::CTSPool()
{
} /* size: 0 */

// <001DDE5E> ../public/tier0/tslist.h:337
void CTSPool<JobManualEvent_t>::CTSPool()
{
} /* size: 0 */

// <001DDE41> ../public/tier0/tslist.h:337
inline void CTSPool<JobManualEvent_t>::CTSPool()
{
} /* size: 0 */

// <001380D7> ../public/tier0/tslist.h:337
void CTSPool<COneTimeEvent>::CTSPool()
{
} /* size: 0 */

// <001380BA> ../public/tier0/tslist.h:337
inline void CTSPool<COneTimeEvent>::CTSPool()
{
} /* size: 0 */

// <001727A9> ../public/tier0/tslist.h:337
void CTSPool<CTmpCmdBuffer>::CTSPool()
{
} /* size: 0 */

// <0017278C> ../public/tier0/tslist.h:337
inline void CTSPool<CTmpCmdBuffer>::CTSPool()
{
} /* size: 0 */

// <01D893F4> ../public/tier0/tslist.h:337
// member functions: 17
// member variable: 1
// class size: 16
class CTSPool<CRenderAttributes> : public CTSListBase {
public:
	/* class CTSListBase <ancestor>; */ /* 0 16 */
	/* ../public/tier0/tslist.h:348 */
	void ~CTSPool(CTSPool<CRenderAttributes>* );
	/* ../public/tier0/tslist.h:353 */
	void Purge(CTSPool<CRenderAttributes>* );
	/* ../public/tier0/tslist.h:365 */
	void PutObject(CTSPool<CRenderAttributes>* , CRenderAttributes* );
	/* ../public/tier0/tslist.h:374 */
	CRenderAttributes* GetObject(CTSPool<CRenderAttributes>* );
	/* ../public/tier0/tslist.h:388 */
	CRenderAttributes* Get(CTSPool<CRenderAttributes>* );
	/* ../public/tier0/tslist.h:394 */
	void DeleteObject(CTSPool<CRenderAttributes>* , CRenderAttributes* );
	/* ../public/tier0/tslist.h:341 */
	struct simpleTSPoolStruct_t : public TSLNodeBase_t {
	public:
		/* struct TSLNodeBase_t <ancestor>; */ /* 0 16 */
		CRenderAttributes elem; /* 16 1184 */
		void ~simpleTSPoolStruct_t(simpleTSPoolStruct_t* );
		void simpleTSPoolStruct_t(simpleTSPoolStruct_t* );
	} __attribute__((__aligned__(16)));
	void CTSPool(CTSPool<CRenderAttributes>* );
	void ~CTSPool(class CTSPool<CRenderAttributes> *); /* linkage=_ZN7CTSPoolI17CRenderAttributesED4Ev */
	void Purge(class CTSPool<CRenderAttributes> *); /* linkage=_ZN7CTSPoolI17CRenderAttributesE5PurgeEv */
	void PutObject(class CTSPool<CRenderAttributes> *, class CRenderAttributes *); /* linkage=_ZN7CTSPoolI17CRenderAttributesE9PutObjectEPS0_ */
	class CRenderAttributes * GetObject(class CTSPool<CRenderAttributes> *); /* linkage=_ZN7CTSPoolI17CRenderAttributesE9GetObjectEv */
	class CRenderAttributes * Get(class CTSPool<CRenderAttributes> *); /* linkage=_ZN7CTSPoolI17CRenderAttributesE3GetEv */
	void DeleteObject(class CTSPool<CRenderAttributes> *, class CRenderAttributes *); /* linkage=_ZN7CTSPoolI17CRenderAttributesE12DeleteObjectEPS0_ */
	void CTSPool(class CTSPool<CRenderAttributes> *); /* linkage=_ZN7CTSPoolI17CRenderAttributesEC4Ev */
} __attribute__((__aligned__(16)));

// <02DB260D> ../public/tier0/tslist.h:337
// member functions: 9
// member variable: 1
// class size: 16
class CTSPool<CSceneDrawList> : public CTSListBase {
public:
	/* class CTSListBase <ancestor>; */ /* 0 16 */
	/* ../public/tier0/tslist.h:348 */
	void ~CTSPool(CTSPool<CSceneDrawList>* );
	/* ../public/tier0/tslist.h:353 */
	void Purge(CTSPool<CSceneDrawList>* );
	/* ../public/tier0/tslist.h:365 */
	void PutObject(CTSPool<CSceneDrawList>* , CSceneDrawList* );
	/* ../public/tier0/tslist.h:374 */
	CSceneDrawList* GetObject(CTSPool<CSceneDrawList>* );
	/* ../public/tier0/tslist.h:388 */
	CSceneDrawList* Get(CTSPool<CSceneDrawList>* );
	/* ../public/tier0/tslist.h:394 */
	void DeleteObject(CTSPool<CSceneDrawList>* , CSceneDrawList* );
	/* ../public/tier0/tslist.h:341 */
	struct simpleTSPoolStruct_t : public TSLNodeBase_t {
	public:
		/* struct TSLNodeBase_t <ancestor>; */ /* 0 16 */
		CSceneDrawList elem; /* 16 122904 */
		void simpleTSPoolStruct_t(simpleTSPoolStruct_t* );
	} __attribute__((__aligned__(16)));
	void CTSPool(CTSPool<CSceneDrawList>* );
} __attribute__((__aligned__(16)));

// <02DB50B9> ../public/tier0/tslist.h:337
// member functions: 9
// member variable: 1
// class size: 16
class CTSPool<CSceneObject> : public CTSListBase {
public:
	/* class CTSListBase <ancestor>; */ /* 0 16 */
	/* ../public/tier0/tslist.h:348 */
	void ~CTSPool(CTSPool<CSceneObject>* );
	/* ../public/tier0/tslist.h:353 */
	void Purge(CTSPool<CSceneObject>* );
	/* ../public/tier0/tslist.h:365 */
	void PutObject(CTSPool<CSceneObject>* , CSceneObject* );
	/* ../public/tier0/tslist.h:374 */
	CSceneObject* GetObject(CTSPool<CSceneObject>* );
	/* ../public/tier0/tslist.h:388 */
	CSceneObject* Get(CTSPool<CSceneObject>* );
	/* ../public/tier0/tslist.h:394 */
	void DeleteObject(CTSPool<CSceneObject>* , CSceneObject* );
	/* ../public/tier0/tslist.h:341 */
	struct simpleTSPoolStruct_t : public TSLNodeBase_t {
	public:
		/* struct TSLNodeBase_t <ancestor>; */ /* 0 16 */
		CSceneObject elem __attribute__((__aligned__(16))); /* 16 240 */
		void ~simpleTSPoolStruct_t(simpleTSPoolStruct_t* );
	} __attribute__((__aligned__(16)));
	void CTSPool(CTSPool<CSceneObject>* );
} __attribute__((__aligned__(16)));

// <0385418B> ../public/tier0/tslist.h:337
// member functions: 10
// member variable: 1
// class size: 16
class CTSPool<SceneViewTimestampQuery_t> : public CTSListBase {
public:
	/* class CTSListBase <ancestor>; */ /* 0 16 */
	/* ../public/tier0/tslist.h:348 */
	void ~CTSPool(CTSPool<SceneViewTimestampQuery_t>* );
	/* ../public/tier0/tslist.h:353 */
	void Purge(CTSPool<SceneViewTimestampQuery_t>* );
	/* ../public/tier0/tslist.h:365 */
	void PutObject(CTSPool<SceneViewTimestampQuery_t>* , SceneViewTimestampQuery_t* );
	/* ../public/tier0/tslist.h:374 */
	SceneViewTimestampQuery_t* GetObject(CTSPool<SceneViewTimestampQuery_t>* );
	/* ../public/tier0/tslist.h:388 */
	SceneViewTimestampQuery_t* Get(CTSPool<SceneViewTimestampQuery_t>* );
	/* ../public/tier0/tslist.h:394 */
	void DeleteObject(CTSPool<SceneViewTimestampQuery_t>* , SceneViewTimestampQuery_t* );
	/* ../public/tier0/tslist.h:341 */
	struct simpleTSPoolStruct_t : public TSLNodeBase_t {
	public:
		/* struct TSLNodeBase_t <ancestor>; */ /* 0 16 */
		SceneViewTimestampQuery_t elem; /* 16 120 */
		void simpleTSPoolStruct_t(simpleTSPoolStruct_t* );
		void ~simpleTSPoolStruct_t(simpleTSPoolStruct_t* );
	} __attribute__((__aligned__(16)));
	void CTSPool(CTSPool<SceneViewTimestampQuery_t>* );
} __attribute__((__aligned__(16)));

// <0685A265> ../public/tier0/tslist.h:337
// member functions: 10
// member variable: 1
// class size: 16
class CTSPool<CThreadedLogger::Buffer_t> : public CTSListBase {
public:
	/* class CTSListBase <ancestor>; */ /* 0 16 */
	/* ../public/tier0/tslist.h:348 */
	void ~CTSPool(CTSPool<CThreadedLogger::Buffer_t>* );
	/* ../public/tier0/tslist.h:353 */
	void Purge(CTSPool<CThreadedLogger::Buffer_t>* );
	/* ../public/tier0/tslist.h:365 */
	void PutObject(CTSPool<CThreadedLogger::Buffer_t>* , Buffer_t* );
	/* ../public/tier0/tslist.h:374 */
	Buffer_t* GetObject(CTSPool<CThreadedLogger::Buffer_t>* );
	/* ../public/tier0/tslist.h:388 */
	Buffer_t* Get(CTSPool<CThreadedLogger::Buffer_t>* );
	/* ../public/tier0/tslist.h:394 */
	void DeleteObject(CTSPool<CThreadedLogger::Buffer_t>* , Buffer_t* );
	/* ../public/tier0/tslist.h:341 */
	struct simpleTSPoolStruct_t : public TSLNodeBase_t {
	public:
		/* struct TSLNodeBase_t <ancestor>; */ /* 0 16 */
		Buffer_t elem; /* 16 528 */
		void ~simpleTSPoolStruct_t(simpleTSPoolStruct_t* );
		void simpleTSPoolStruct_t(simpleTSPoolStruct_t* );
	} __attribute__((__aligned__(16)));
	void CTSPool(CTSPool<CThreadedLogger::Buffer_t>* );
} __attribute__((__aligned__(16)));

// <00BDA2A5> ../public/tier0/tslist.h:337
// member functions: 17
// member variable: 1
// class size: 16
class CTSPool<CThreadLocalAnimationDecodeCache> : public CTSListBase {
public:
	/* class CTSListBase <ancestor>; */ /* 0 16 */
	/* ../public/tier0/tslist.h:348 */
	void ~CTSPool(CTSPool<CThreadLocalAnimationDecodeCache>* );
	/* ../public/tier0/tslist.h:353 */
	void Purge(CTSPool<CThreadLocalAnimationDecodeCache>* );
	/* ../public/tier0/tslist.h:365 */
	void PutObject(CTSPool<CThreadLocalAnimationDecodeCache>* , CThreadLocalAnimationDecodeCache* );
	/* ../public/tier0/tslist.h:374 */
	CThreadLocalAnimationDecodeCache* GetObject(CTSPool<CThreadLocalAnimationDecodeCache>* );
	/* ../public/tier0/tslist.h:388 */
	CThreadLocalAnimationDecodeCache* Get(CTSPool<CThreadLocalAnimationDecodeCache>* );
	/* ../public/tier0/tslist.h:394 */
	void DeleteObject(CTSPool<CThreadLocalAnimationDecodeCache>* , CThreadLocalAnimationDecodeCache* );
	/* ../public/tier0/tslist.h:341 */
	struct simpleTSPoolStruct_t : public TSLNodeBase_t {
	public:
		/* struct TSLNodeBase_t <ancestor>; */ /* 0 16 */
		CThreadLocalAnimationDecodeCache elem __attribute__((__aligned__(16))); /* 16 36896 */
		void ~simpleTSPoolStruct_t(simpleTSPoolStruct_t* );
		void simpleTSPoolStruct_t(simpleTSPoolStruct_t* );
	} __attribute__((__aligned__(16)));
	void CTSPool(CTSPool<CThreadLocalAnimationDecodeCache>* );
	void ~CTSPool(class CTSPool<CThreadLocalAnimationDecodeCache> *); /* linkage=_ZN7CTSPoolI32CThreadLocalAnimationDecodeCacheED4Ev */
	void Purge(class CTSPool<CThreadLocalAnimationDecodeCache> *); /* linkage=_ZN7CTSPoolI32CThreadLocalAnimationDecodeCacheE5PurgeEv */
	void PutObject(class CTSPool<CThreadLocalAnimationDecodeCache> *, class CThreadLocalAnimationDecodeCache *); /* linkage=_ZN7CTSPoolI32CThreadLocalAnimationDecodeCacheE9PutObjectEPS0_ */
	class CThreadLocalAnimationDecodeCache * GetObject(class CTSPool<CThreadLocalAnimationDecodeCache> *); /* linkage=_ZN7CTSPoolI32CThreadLocalAnimationDecodeCacheE9GetObjectEv */
	class CThreadLocalAnimationDecodeCache * Get(class CTSPool<CThreadLocalAnimationDecodeCache> *); /* linkage=_ZN7CTSPoolI32CThreadLocalAnimationDecodeCacheE3GetEv */
	void DeleteObject(class CTSPool<CThreadLocalAnimationDecodeCache> *, class CThreadLocalAnimationDecodeCache *); /* linkage=_ZN7CTSPoolI32CThreadLocalAnimationDecodeCacheE12DeleteObjectEPS0_ */
	void CTSPool(class CTSPool<CThreadLocalAnimationDecodeCache> *); /* linkage=_ZN7CTSPoolI32CThreadLocalAnimationDecodeCacheEC4Ev */
} __attribute__((__aligned__(16)));

// <02724D77> ../public/tier0/tslist.h:337
// member functions: 10
// member variable: 1
// class size: 16
class CTSPool<CBoneSetup> : public CTSListBase {
public:
	/* class CTSListBase <ancestor>; */ /* 0 16 */
	/* ../public/tier0/tslist.h:348 */
	void ~CTSPool(CTSPool<CBoneSetup>* );
	/* ../public/tier0/tslist.h:353 */
	void Purge(CTSPool<CBoneSetup>* );
	/* ../public/tier0/tslist.h:365 */
	void PutObject(CTSPool<CBoneSetup>* , CBoneSetup* );
	/* ../public/tier0/tslist.h:374 */
	CBoneSetup* GetObject(CTSPool<CBoneSetup>* );
	/* ../public/tier0/tslist.h:388 */
	CBoneSetup* Get(CTSPool<CBoneSetup>* );
	/* ../public/tier0/tslist.h:394 */
	void DeleteObject(CTSPool<CBoneSetup>* , CBoneSetup* );
	/* ../public/tier0/tslist.h:341 */
	struct simpleTSPoolStruct_t : public TSLNodeBase_t {
	public:
		/* struct TSLNodeBase_t <ancestor>; */ /* 0 16 */
		CBoneSetup elem __attribute__((__aligned__(16))); /* 16 185632 */
		void ~simpleTSPoolStruct_t(simpleTSPoolStruct_t* );
		void simpleTSPoolStruct_t(simpleTSPoolStruct_t* );
	} __attribute__((__aligned__(16)));
	void CTSPool(CTSPool<CBoneSetup>* );
} __attribute__((__aligned__(16)));

// <000E1505> ../public/tier0/tslist.h:337
// member functions: 17
// member variable: 1
// class size: 16
class CTSPool<CCommandStream> : public CTSListBase {
public:
	/* class CTSListBase <ancestor>; */ /* 0 16 */
	/* ../public/tier0/tslist.h:348 */
	void ~CTSPool(CTSPool<CCommandStream>* );
	/* ../public/tier0/tslist.h:353 */
	void Purge(CTSPool<CCommandStream>* );
	/* ../public/tier0/tslist.h:365 */
	void PutObject(CTSPool<CCommandStream>* , CCommandStream* );
	/* ../public/tier0/tslist.h:374 */
	CCommandStream* GetObject(CTSPool<CCommandStream>* );
	/* ../public/tier0/tslist.h:388 */
	CCommandStream* Get(CTSPool<CCommandStream>* );
	/* ../public/tier0/tslist.h:394 */
	void DeleteObject(CTSPool<CCommandStream>* , CCommandStream* );
	/* ../public/tier0/tslist.h:341 */
	struct simpleTSPoolStruct_t : public TSLNodeBase_t {
	public:
		/* struct TSLNodeBase_t <ancestor>; */ /* 0 16 */
		CCommandStream elem __attribute__((__aligned__(8))); /* 16 608 */
		void ~simpleTSPoolStruct_t(simpleTSPoolStruct_t* );
		void simpleTSPoolStruct_t(simpleTSPoolStruct_t* );
	} __attribute__((__aligned__(16)));
	void CTSPool(CTSPool<CCommandStream>* );
	void ~CTSPool(class CTSPool<CCommandStream> *); /* linkage=_ZN7CTSPoolI14CCommandStreamED4Ev */
	void Purge(class CTSPool<CCommandStream> *); /* linkage=_ZN7CTSPoolI14CCommandStreamE5PurgeEv */
	void PutObject(class CTSPool<CCommandStream> *, class CCommandStream *); /* linkage=_ZN7CTSPoolI14CCommandStreamE9PutObjectEPS0_ */
	class CCommandStream * GetObject(class CTSPool<CCommandStream> *); /* linkage=_ZN7CTSPoolI14CCommandStreamE9GetObjectEv */
	class CCommandStream * Get(class CTSPool<CCommandStream> *); /* linkage=_ZN7CTSPoolI14CCommandStreamE3GetEv */
	void DeleteObject(class CTSPool<CCommandStream> *, class CCommandStream *); /* linkage=_ZN7CTSPoolI14CCommandStreamE12DeleteObjectEPS0_ */
	void CTSPool(class CTSPool<CCommandStream> *); /* linkage=_ZN7CTSPoolI14CCommandStreamEC4Ev */
} __attribute__((__aligned__(16)));

// <00158CD5> ../public/tier0/tslist.h:337
// member functions: 16
// member variable: 1
// class size: 16
class CTSPool<CDependencyDescriptor> : public CTSListBase {
public:
	/* class CTSListBase <ancestor>; */ /* 0 16 */
	/* ../public/tier0/tslist.h:348 */
	void ~CTSPool(CTSPool<CDependencyDescriptor>* );
	/* ../public/tier0/tslist.h:353 */
	void Purge(CTSPool<CDependencyDescriptor>* );
	/* ../public/tier0/tslist.h:365 */
	void PutObject(CTSPool<CDependencyDescriptor>* , CDependencyDescriptor* );
	/* ../public/tier0/tslist.h:374 */
	CDependencyDescriptor* GetObject(CTSPool<CDependencyDescriptor>* );
	/* ../public/tier0/tslist.h:388 */
	CDependencyDescriptor* Get(CTSPool<CDependencyDescriptor>* );
	/* ../public/tier0/tslist.h:394 */
	void DeleteObject(CTSPool<CDependencyDescriptor>* , CDependencyDescriptor* );
	/* ../public/tier0/tslist.h:341 */
	struct simpleTSPoolStruct_t : public TSLNodeBase_t {
	public:
		/* struct TSLNodeBase_t <ancestor>; */ /* 0 16 */
		CDependencyDescriptor elem; /* 16 24 */
		void simpleTSPoolStruct_t(simpleTSPoolStruct_t* );
	} __attribute__((__aligned__(16)));
	void CTSPool(CTSPool<CDependencyDescriptor>* );
	void ~CTSPool(class CTSPool<CDependencyDescriptor> *); /* linkage=_ZN7CTSPoolI21CDependencyDescriptorED4Ev */
	void Purge(class CTSPool<CDependencyDescriptor> *); /* linkage=_ZN7CTSPoolI21CDependencyDescriptorE5PurgeEv */
	void PutObject(class CTSPool<CDependencyDescriptor> *, class CDependencyDescriptor *); /* linkage=_ZN7CTSPoolI21CDependencyDescriptorE9PutObjectEPS0_ */
	class CDependencyDescriptor * GetObject(class CTSPool<CDependencyDescriptor> *); /* linkage=_ZN7CTSPoolI21CDependencyDescriptorE9GetObjectEv */
	class CDependencyDescriptor * Get(class CTSPool<CDependencyDescriptor> *); /* linkage=_ZN7CTSPoolI21CDependencyDescriptorE3GetEv */
	void DeleteObject(class CTSPool<CDependencyDescriptor> *, class CDependencyDescriptor *); /* linkage=_ZN7CTSPoolI21CDependencyDescriptorE12DeleteObjectEPS0_ */
	void CTSPool(class CTSPool<CDependencyDescriptor> *); /* linkage=_ZN7CTSPoolI21CDependencyDescriptorEC4Ev */
} __attribute__((__aligned__(16)));

// <00158E24> ../public/tier0/tslist.h:337
// member functions: 10
// member variable: 1
// class size: 16
class CTSPool<CRenderPassDesc> : public CTSListBase {
public:
	/* class CTSListBase <ancestor>; */ /* 0 16 */
	/* ../public/tier0/tslist.h:348 */
	void ~CTSPool(CTSPool<CRenderPassDesc>* );
	/* ../public/tier0/tslist.h:353 */
	void Purge(CTSPool<CRenderPassDesc>* );
	/* ../public/tier0/tslist.h:365 */
	void PutObject(CTSPool<CRenderPassDesc>* , CRenderPassDesc* );
	/* ../public/tier0/tslist.h:374 */
	CRenderPassDesc* GetObject(CTSPool<CRenderPassDesc>* );
	/* ../public/tier0/tslist.h:388 */
	CRenderPassDesc* Get(CTSPool<CRenderPassDesc>* );
	/* ../public/tier0/tslist.h:394 */
	void DeleteObject(CTSPool<CRenderPassDesc>* , CRenderPassDesc* );
	/* ../public/tier0/tslist.h:341 */
	struct simpleTSPoolStruct_t : public TSLNodeBase_t {
	public:
		/* struct TSLNodeBase_t <ancestor>; */ /* 0 16 */
		CRenderPassDesc elem __attribute__((__aligned__(8))); /* 16 2448 */
		void ~simpleTSPoolStruct_t(simpleTSPoolStruct_t* );
		void simpleTSPoolStruct_t(simpleTSPoolStruct_t* );
	} __attribute__((__aligned__(16)));
	void CTSPool(CTSPool<CRenderPassDesc>* );
} __attribute__((__aligned__(16)));

// <00C1704D> ../public/tier0/tslist.h:337
// member functions: 10
// member variable: 1
// class size: 16
class CTSPool<CFallbackTextureVulkan> : public CTSListBase {
public:
	/* class CTSListBase <ancestor>; */ /* 0 16 */
	/* ../public/tier0/tslist.h:348 */
	void ~CTSPool(CTSPool<CFallbackTextureVulkan>* );
	/* ../public/tier0/tslist.h:353 */
	void Purge(CTSPool<CFallbackTextureVulkan>* );
	/* ../public/tier0/tslist.h:365 */
	void PutObject(CTSPool<CFallbackTextureVulkan>* , CFallbackTextureVulkan* );
	/* ../public/tier0/tslist.h:374 */
	CFallbackTextureVulkan* GetObject(CTSPool<CFallbackTextureVulkan>* );
	/* ../public/tier0/tslist.h:388 */
	CFallbackTextureVulkan* Get(CTSPool<CFallbackTextureVulkan>* );
	/* ../public/tier0/tslist.h:394 */
	void DeleteObject(CTSPool<CFallbackTextureVulkan>* , CFallbackTextureVulkan* );
	/* ../public/tier0/tslist.h:341 */
	struct simpleTSPoolStruct_t : public TSLNodeBase_t {
	public:
		/* struct TSLNodeBase_t <ancestor>; */ /* 0 16 */
		CFallbackTextureVulkan elem; /* 16 32 */
		void simpleTSPoolStruct_t(simpleTSPoolStruct_t* );
		void ~simpleTSPoolStruct_t(simpleTSPoolStruct_t* );
	} __attribute__((__aligned__(16)));
	void CTSPool(CTSPool<CFallbackTextureVulkan>* );
} __attribute__((__aligned__(16)));

// <001370D0> ../public/tier0/tslist.h:337
// member functions: 17
// member variable: 1
// class size: 16
class CTSPool<COneTimeEvent> : public CTSListBase {
public:
	/* class CTSListBase <ancestor>; */ /* 0 16 */
	/* ../public/tier0/tslist.h:348 */
	void ~CTSPool(CTSPool<COneTimeEvent>* );
	/* ../public/tier0/tslist.h:353 */
	void Purge(CTSPool<COneTimeEvent>* );
	/* ../public/tier0/tslist.h:365 */
	void PutObject(CTSPool<COneTimeEvent>* , COneTimeEvent* );
	/* ../public/tier0/tslist.h:374 */
	COneTimeEvent* GetObject(CTSPool<COneTimeEvent>* );
	/* ../public/tier0/tslist.h:388 */
	COneTimeEvent* Get(CTSPool<COneTimeEvent>* );
	/* ../public/tier0/tslist.h:394 */
	void DeleteObject(CTSPool<COneTimeEvent>* , COneTimeEvent* );
	/* ../public/tier0/tslist.h:341 */
	struct simpleTSPoolStruct_t : public TSLNodeBase_t {
	public:
		/* struct TSLNodeBase_t <ancestor>; */ /* 0 16 */
		COneTimeEvent elem __attribute__((__aligned__(8))); /* 16 144 */
		void ~simpleTSPoolStruct_t(simpleTSPoolStruct_t* );
		void simpleTSPoolStruct_t(simpleTSPoolStruct_t* );
	} __attribute__((__aligned__(16)));
	void CTSPool(CTSPool<COneTimeEvent>* );
	void ~CTSPool(class CTSPool<COneTimeEvent> *); /* linkage=_ZN7CTSPoolI13COneTimeEventED4Ev */
	void Purge(class CTSPool<COneTimeEvent> *); /* linkage=_ZN7CTSPoolI13COneTimeEventE5PurgeEv */
	void PutObject(class CTSPool<COneTimeEvent> *, class COneTimeEvent *); /* linkage=_ZN7CTSPoolI13COneTimeEventE9PutObjectEPS0_ */
	class COneTimeEvent * GetObject(class CTSPool<COneTimeEvent> *); /* linkage=_ZN7CTSPoolI13COneTimeEventE9GetObjectEv */
	class COneTimeEvent * Get(class CTSPool<COneTimeEvent> *); /* linkage=_ZN7CTSPoolI13COneTimeEventE3GetEv */
	void DeleteObject(class CTSPool<COneTimeEvent> *, class COneTimeEvent *); /* linkage=_ZN7CTSPoolI13COneTimeEventE12DeleteObjectEPS0_ */
	void CTSPool(class CTSPool<COneTimeEvent> *); /* linkage=_ZN7CTSPoolI13COneTimeEventEC4Ev */
} __attribute__((__aligned__(16)));

// <001B898D> ../public/tier0/tslist.h:337
// member functions: 17
// member variable: 1
// class size: 16
class CTSPool<JobManualEvent_t> : public CTSListBase {
public:
	/* class CTSListBase <ancestor>; */ /* 0 16 */
	/* ../public/tier0/tslist.h:348 */
	void ~CTSPool(CTSPool<JobManualEvent_t>* );
	/* ../public/tier0/tslist.h:353 */
	void Purge(CTSPool<JobManualEvent_t>* );
	/* ../public/tier0/tslist.h:365 */
	void PutObject(CTSPool<JobManualEvent_t>* , JobManualEvent_t* );
	/* ../public/tier0/tslist.h:374 */
	JobManualEvent_t* GetObject(CTSPool<JobManualEvent_t>* );
	/* ../public/tier0/tslist.h:388 */
	JobManualEvent_t* Get(CTSPool<JobManualEvent_t>* );
	/* ../public/tier0/tslist.h:394 */
	void DeleteObject(CTSPool<JobManualEvent_t>* , JobManualEvent_t* );
	/* ../public/tier0/tslist.h:341 */
	struct simpleTSPoolStruct_t : public TSLNodeBase_t {
	public:
		/* struct TSLNodeBase_t <ancestor>; */ /* 0 16 */
		JobManualEvent_t elem; /* 16 8 */
		void ~simpleTSPoolStruct_t(simpleTSPoolStruct_t* );
		void simpleTSPoolStruct_t(simpleTSPoolStruct_t* );
	} __attribute__((__aligned__(16)));
	void CTSPool(CTSPool<JobManualEvent_t>* );
	void ~CTSPool(class CTSPool<JobManualEvent_t> *); /* linkage=_ZN7CTSPoolI16JobManualEvent_tED4Ev */
	void Purge(class CTSPool<JobManualEvent_t> *); /* linkage=_ZN7CTSPoolI16JobManualEvent_tE5PurgeEv */
	void PutObject(class CTSPool<JobManualEvent_t> *, class JobManualEvent_t *); /* linkage=_ZN7CTSPoolI16JobManualEvent_tE9PutObjectEPS0_ */
	class JobManualEvent_t * GetObject(class CTSPool<JobManualEvent_t> *); /* linkage=_ZN7CTSPoolI16JobManualEvent_tE9GetObjectEv */
	class JobManualEvent_t * Get(class CTSPool<JobManualEvent_t> *); /* linkage=_ZN7CTSPoolI16JobManualEvent_tE3GetEv */
	void DeleteObject(class CTSPool<JobManualEvent_t> *, class JobManualEvent_t *); /* linkage=_ZN7CTSPoolI16JobManualEvent_tE12DeleteObjectEPS0_ */
	void CTSPool(class CTSPool<JobManualEvent_t> *); /* linkage=_ZN7CTSPoolI16JobManualEvent_tEC4Ev */
} __attribute__((__aligned__(16)));

// <000DFDDB> ../public/tier0/tslist.h:337
// member functions: 17
// member variable: 1
// class size: 16
class CTSPool<CCommandStream> : public CTSListBase {
public:
	/* class CTSListBase <ancestor>; */ /* 0 16 */
	/* ../public/tier0/tslist.h:348 */
	void ~CTSPool(CTSPool<CCommandStream>* );
	/* ../public/tier0/tslist.h:353 */
	void Purge(CTSPool<CCommandStream>* );
	/* ../public/tier0/tslist.h:365 */
	void PutObject(CTSPool<CCommandStream>* , CCommandStream* );
	/* ../public/tier0/tslist.h:374 */
	CCommandStream* GetObject(CTSPool<CCommandStream>* );
	/* ../public/tier0/tslist.h:388 */
	CCommandStream* Get(CTSPool<CCommandStream>* );
	/* ../public/tier0/tslist.h:394 */
	void DeleteObject(CTSPool<CCommandStream>* , CCommandStream* );
	/* ../public/tier0/tslist.h:341 */
	struct simpleTSPoolStruct_t : public TSLNodeBase_t {
	public:
		/* struct TSLNodeBase_t <ancestor>; */ /* 0 16 */
		CCommandStream elem __attribute__((__aligned__(8))); /* 16 600 */
		void ~simpleTSPoolStruct_t(simpleTSPoolStruct_t* );
		void simpleTSPoolStruct_t(simpleTSPoolStruct_t* );
	} __attribute__((__aligned__(16)));
	void CTSPool(CTSPool<CCommandStream>* );
	void ~CTSPool(class CTSPool<CCommandStream> *); /* linkage=_ZN7CTSPoolI14CCommandStreamED4Ev */
	void Purge(class CTSPool<CCommandStream> *); /* linkage=_ZN7CTSPoolI14CCommandStreamE5PurgeEv */
	void PutObject(class CTSPool<CCommandStream> *, class CCommandStream *); /* linkage=_ZN7CTSPoolI14CCommandStreamE9PutObjectEPS0_ */
	class CCommandStream * GetObject(class CTSPool<CCommandStream> *); /* linkage=_ZN7CTSPoolI14CCommandStreamE9GetObjectEv */
	class CCommandStream * Get(class CTSPool<CCommandStream> *); /* linkage=_ZN7CTSPoolI14CCommandStreamE3GetEv */
	void DeleteObject(class CTSPool<CCommandStream> *, class CCommandStream *); /* linkage=_ZN7CTSPoolI14CCommandStreamE12DeleteObjectEPS0_ */
	void CTSPool(class CTSPool<CCommandStream> *); /* linkage=_ZN7CTSPoolI14CCommandStreamEC4Ev */
} __attribute__((__aligned__(16)));

// <0014DA43> ../public/tier0/tslist.h:337
// member functions: 17
// member variable: 1
// class size: 16
class CTSPool<CTmpCmdBuffer> : public CTSListBase {
public:
	/* class CTSListBase <ancestor>; */ /* 0 16 */
	/* ../public/tier0/tslist.h:348 */
	void ~CTSPool(CTSPool<CTmpCmdBuffer>* );
	/* ../public/tier0/tslist.h:353 */
	void Purge(CTSPool<CTmpCmdBuffer>* );
	/* ../public/tier0/tslist.h:365 */
	void PutObject(CTSPool<CTmpCmdBuffer>* , CTmpCmdBuffer* );
	/* ../public/tier0/tslist.h:374 */
	CTmpCmdBuffer* GetObject(CTSPool<CTmpCmdBuffer>* );
	/* ../public/tier0/tslist.h:388 */
	CTmpCmdBuffer* Get(CTSPool<CTmpCmdBuffer>* );
	/* ../public/tier0/tslist.h:394 */
	void DeleteObject(CTSPool<CTmpCmdBuffer>* , CTmpCmdBuffer* );
	/* ../public/tier0/tslist.h:341 */
	struct simpleTSPoolStruct_t : public TSLNodeBase_t {
	public:
		/* struct TSLNodeBase_t <ancestor>; */ /* 0 16 */
		CTmpCmdBuffer elem; /* 16 1104 */
		void ~simpleTSPoolStruct_t(simpleTSPoolStruct_t* );
		void simpleTSPoolStruct_t(simpleTSPoolStruct_t* );
	} __attribute__((__aligned__(16)));
	void CTSPool(CTSPool<CTmpCmdBuffer>* );
	void ~CTSPool(class CTSPool<CTmpCmdBuffer> *); /* linkage=_ZN7CTSPoolI13CTmpCmdBufferED4Ev */
	void Purge(class CTSPool<CTmpCmdBuffer> *); /* linkage=_ZN7CTSPoolI13CTmpCmdBufferE5PurgeEv */
	void PutObject(class CTSPool<CTmpCmdBuffer> *, class CTmpCmdBuffer *); /* linkage=_ZN7CTSPoolI13CTmpCmdBufferE9PutObjectEPS0_ */
	class CTmpCmdBuffer * GetObject(class CTSPool<CTmpCmdBuffer> *); /* linkage=_ZN7CTSPoolI13CTmpCmdBufferE9GetObjectEv */
	class CTmpCmdBuffer * Get(class CTSPool<CTmpCmdBuffer> *); /* linkage=_ZN7CTSPoolI13CTmpCmdBufferE3GetEv */
	void DeleteObject(class CTSPool<CTmpCmdBuffer> *, class CTmpCmdBuffer *); /* linkage=_ZN7CTSPoolI13CTmpCmdBufferE12DeleteObjectEPS0_ */
	void CTSPool(class CTSPool<CTmpCmdBuffer> *); /* linkage=_ZN7CTSPoolI13CTmpCmdBufferEC4Ev */
} __attribute__((__aligned__(16)));

// <0685CD69> ../public/tier0/tslist.h:341
void simpleTSPoolStruct_t::simpleTSPoolStruct_t()
{
} /* size: 0 */

// <0685CD4C> ../public/tier0/tslist.h:341
inline void simpleTSPoolStruct_t::simpleTSPoolStruct_t()
{
} /* size: 0 */

// <0685C391> ../public/tier0/tslist.h:341
void simpleTSPoolStruct_t::~simpleTSPoolStruct_t()
{
} /* size: 0 */

// <0685C374> ../public/tier0/tslist.h:341
inline void simpleTSPoolStruct_t::~simpleTSPoolStruct_t()
{
} /* size: 0 */

// <0685CD99> ../public/tier0/tslist.h:348
void CTSPool<CThreadedLogger::Buffer_t>::~CTSPool()
{
} /* size: 0 */

// <0685CD80> ../public/tier0/tslist.h:348
inline void CTSPool<CThreadedLogger::Buffer_t>::~CTSPool()
{
} /* size: 0 */

// <03FF70FE> ../public/tier0/tslist.h:348
// function calls: 11
void CTSPool<CRenderAttributes>::~CTSPool()
{
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 203
	ThreadPause(void); // 208
	CTSListBase::Pop(); // 358
	simpleTSPoolStruct_t::~simpleTSPoolStruct_t(); // 361
	CTSPool<CRenderAttributes>::Purge(); // 350
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 244
	ThreadPause(void); // 230
	CTSListBase::Detach(); // 135
	CTSListBase::~CTSListBase(); // 351
} /* size: 227, inline expansions: 11 (395 bytes) */

// <03FF70E5> ../public/tier0/tslist.h:348
inline void CTSPool<CRenderAttributes>::~CTSPool()
{
} /* size: 0 */

// <0387BC1F> ../public/tier0/tslist.h:348
void CTSPool<SceneViewTimestampQuery_t>::~CTSPool()
{
} /* size: 0 */

// <0387BC06> ../public/tier0/tslist.h:348
inline void CTSPool<SceneViewTimestampQuery_t>::~CTSPool()
{
} /* size: 0 */

// <02EAE6BC> ../public/tier0/tslist.h:348
void CTSPool<CSceneDrawList>::~CTSPool()
{
} /* size: 0 */

// <02EAE6A3> ../public/tier0/tslist.h:348
inline void CTSPool<CSceneDrawList>::~CTSPool()
{
} /* size: 0 */

// <02EAE4DC> ../public/tier0/tslist.h:348
void CTSPool<CSceneObject>::~CTSPool()
{
} /* size: 0 */

// <02EAE4C3> ../public/tier0/tslist.h:348
inline void CTSPool<CSceneObject>::~CTSPool()
{
} /* size: 0 */

// <02727225> ../public/tier0/tslist.h:348
// function calls: 11
void CTSPool<CBoneSetup>::~CTSPool()
{
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 203
	ThreadPause(void); // 208
	CTSListBase::Pop(); // 358
	simpleTSPoolStruct_t::~simpleTSPoolStruct_t(); // 361
	CTSPool<CBoneSetup>::Purge(); // 350
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 244
	ThreadPause(void); // 230
	CTSListBase::Detach(); // 135
	CTSListBase::~CTSListBase(); // 351
} /* size: 227, inline expansions: 11 (395 bytes) */

// <0272720C> ../public/tier0/tslist.h:348
inline void CTSPool<CBoneSetup>::~CTSPool()
{
} /* size: 0 */

// <00C72599> ../public/tier0/tslist.h:348
void CTSPool<CThreadLocalAnimationDecodeCache>::~CTSPool()
{
} /* size: 0 */

// <00C72580> ../public/tier0/tslist.h:348
inline void CTSPool<CThreadLocalAnimationDecodeCache>::~CTSPool()
{
} /* size: 0 */

// <00C30229> ../public/tier0/tslist.h:348
void CTSPool<CFallbackTextureVulkan>::~CTSPool()
{
} /* size: 0 */

// <00C30210> ../public/tier0/tslist.h:348
inline void CTSPool<CFallbackTextureVulkan>::~CTSPool()
{
} /* size: 0 */

// <00179095> ../public/tier0/tslist.h:348
void CTSPool<CDependencyDescriptor>::~CTSPool()
{
} /* size: 0 */

// <0017907C> ../public/tier0/tslist.h:348
inline void CTSPool<CDependencyDescriptor>::~CTSPool()
{
} /* size: 0 */

// <00179065> ../public/tier0/tslist.h:348
void CTSPool<CRenderPassDesc>::~CTSPool()
{
} /* size: 0 */

// <0017904C> ../public/tier0/tslist.h:348
inline void CTSPool<CRenderPassDesc>::~CTSPool()
{
} /* size: 0 */

// <000F5AEF> ../public/tier0/tslist.h:348
// function calls: 50
void CTSPool<CCommandStream>::~CTSPool()
{
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 203
	ThreadPause(void); // 208
	CTSListBase::Pop(); // 358
	CBufferString::~CBufferString(); // 587
	CBufferStringN<64>::~CBufferStringN(); // 291
	CUtlVectorBase<CDependencyDescriptor::RemoveAll(); // 1798
	CUtlMemoryFixedGrowable_Base<CDependencyDescriptor::Purge_FixedGrowable(
				CDependencyDescriptor** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<CDependencyDescriptor::Purge_FixedGrowable(
				CDependencyDescriptor** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<16, CDependencyDescriptor::Base(); // 237
	CUtlMemoryFixedGrowable<CDependencyDescriptor::Purge(
		int numElements);  // 1799
	CUtlMemory<CDependencyDescriptor::Base(); // 112
	CUtlVectorBase<CDependencyDescriptor::Base(); // 368
	CUtlVectorBase<CDependencyDescriptor::ResetDbgInfo(); // 1800
	CUtlVectorBase<CDependencyDescriptor::Purge(); // 560
	CUtlMemory<CDependencyDescriptor::IsExternallyAllocated(); // 905
	CUtlMemory<CDependencyDescriptor::Purge(); // 903
	CUtlMemory<CDependencyDescriptor::Purge(); // 510
	ValidateAlignment<CDependencyDescriptor*>(void); // 508
	CUtlMemory<CDependencyDescriptor::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<CDependencyDescriptor::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<CDependencyDescriptor::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<CDependencyDescriptor::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<CDependencyDescriptor::~CUtlVectorFixedGrowable(); // 291
	CUtlVectorBase<CDependencyDescriptor::RemoveAll(); // 1798
	CUtlMemoryFixedGrowable_Base<CDependencyDescriptor::Purge_FixedGrowable(
				CDependencyDescriptor** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<CDependencyDescriptor::Purge_FixedGrowable(
				CDependencyDescriptor** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<16, CDependencyDescriptor::Base(); // 237
	CUtlMemoryFixedGrowable<CDependencyDescriptor::Purge(
		int numElements);  // 1799
	CUtlMemory<CDependencyDescriptor::Base(); // 112
	CUtlVectorBase<CDependencyDescriptor::Base(); // 368
	CUtlVectorBase<CDependencyDescriptor::ResetDbgInfo(); // 1800
	CUtlVectorBase<CDependencyDescriptor::Purge(); // 560
	CUtlMemory<CDependencyDescriptor::IsExternallyAllocated(); // 905
	CUtlMemory<CDependencyDescriptor::Purge(); // 903
	CUtlMemory<CDependencyDescriptor::Purge(); // 510
	ValidateAlignment<CDependencyDescriptor*>(void); // 508
	CUtlMemory<CDependencyDescriptor::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<CDependencyDescriptor::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<CDependencyDescriptor::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<CDependencyDescriptor::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<CDependencyDescriptor::~CUtlVectorFixedGrowable(); // 291
	CCommandStream::~CCommandStream(); // 341
	simpleTSPoolStruct_t::~simpleTSPoolStruct_t(); // 361
	CTSPool<CCommandStream>::Purge(); // 350
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 244
	ThreadPause(void); // 230
	CTSListBase::Detach(); // 135
	CTSListBase::~CTSListBase(); // 351
} /* size: 380, inline expansions: 50 (1733 bytes) */

// <000F5AD6> ../public/tier0/tslist.h:348
inline void CTSPool<CCommandStream>::~CTSPool()
{
} /* size: 0 */

// <001CD66E> ../public/tier0/tslist.h:348
void CTSPool<JobManualEvent_t>::~CTSPool()
{
} /* size: 0 */

// <001CD655> ../public/tier0/tslist.h:348
inline void CTSPool<JobManualEvent_t>::~CTSPool()
{
} /* size: 0 */

// <00137683> ../public/tier0/tslist.h:348
// function calls: 14
void CTSPool<COneTimeEvent>::~CTSPool()
{
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 203
	ThreadPause(void); // 208
	CTSListBase::Pop(); // 358
	CThreadEvent::~CThreadEvent(); // 19
	IRefCounted::~IRefCounted(); // 19
	COneTimeEvent::~COneTimeEvent(); // 341
	simpleTSPoolStruct_t::~simpleTSPoolStruct_t(); // 361
	CTSPool<COneTimeEvent>::Purge(); // 350
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 244
	ThreadPause(void); // 230
	CTSListBase::Detach(); // 135
	CTSListBase::~CTSListBase(); // 351
} /* size: 268, inline expansions: 14 (450 bytes) */

// <0013766A> ../public/tier0/tslist.h:348
inline void CTSPool<COneTimeEvent>::~CTSPool()
{
} /* size: 0 */

// <0015246D> ../public/tier0/tslist.h:348
// function calls: 18
void CTSPool<CTmpCmdBuffer>::~CTSPool()
{
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 203
	ThreadPause(void); // 208
	CTSListBase::Pop(); // 358
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 153
	CTmpCmdBuffer::~CTmpCmdBuffer(); // 341
	simpleTSPoolStruct_t::~simpleTSPoolStruct_t(); // 361
	CTSPool<CTmpCmdBuffer>::Purge(); // 350
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 244
	ThreadPause(void); // 230
	CTSListBase::Detach(); // 135
	CTSListBase::~CTSListBase(); // 351
} /* size: 241, inline expansions: 18 (529 bytes) */

// <00152454> ../public/tier0/tslist.h:348
inline void CTSPool<CTmpCmdBuffer>::~CTSPool()
{
} /* size: 0 */

// <0685C343> ../public/tier0/tslist.h:353
// variable: 1
inline void CTSPool<CThreadedLogger::Buffer_t>::Purge()
{
	simpleTSPoolStruct_t* pNode; // 355
} /* size: 0, variables: 1 */

// <03FF6F6B> ../public/tier0/tslist.h:353
// variable: 1
inline void CTSPool<CRenderAttributes>::Purge()
{
	simpleTSPoolStruct_t* pNode; // 355
} /* size: 0, variables: 1 */

// <0387BBAC> ../public/tier0/tslist.h:353
// variable: 1
inline void CTSPool<SceneViewTimestampQuery_t>::Purge()
{
	simpleTSPoolStruct_t* pNode; // 355
} /* size: 0, variables: 1 */

// <02EAC4B9> ../public/tier0/tslist.h:353
// variable: 1
inline void CTSPool<CSceneDrawList>::Purge()
{
	simpleTSPoolStruct_t* pNode; // 355
} /* size: 0, variables: 1 */

// <02EAC454> ../public/tier0/tslist.h:353
// variable: 1
inline void CTSPool<CSceneObject>::Purge()
{
	simpleTSPoolStruct_t* pNode; // 355
} /* size: 0, variables: 1 */

// <027271A7> ../public/tier0/tslist.h:353
// variable: 1
inline void CTSPool<CBoneSetup>::Purge()
{
	simpleTSPoolStruct_t* pNode; // 355
} /* size: 0, variables: 1 */

// <00C71F8F> ../public/tier0/tslist.h:353
// variable: 1
// function calls: 23
void CTSPool<CThreadLocalAnimationDecodeCache>::Purge()
{
	simpleTSPoolStruct_t* pNode; // 355
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 203
	ThreadPause(void); // 208
	CTSListBase::Pop(); // 358
	CUtlVectorBase<CAnimationDecodeCacheEntry_t, CUtlMemoryFixedGrowable<CAnimationDecodeCacheEntry_t, 256, int> >::RemoveAll(); // 1798
	CUtlMemory<CAnimationDecodeCacheEntry_t, int>::IsExternallyAllocated(); // 577
	CUtlMemory<CAnimationDecodeCacheEntry_t, int>::ConvertToExternalMemory(
				CAnimationDecodeCacheEntry_t* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<CAnimationDecodeCacheEntry_t, int>::Purge_FixedGrowable(
				CAnimationDecodeCacheEntry_t* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<CAnimationDecodeCacheEntry_t, int>::Purge_FixedGrowable(
				CAnimationDecodeCacheEntry_t* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<256, CAnimationDecodeCacheEntry_t, 16>::Base(); // 237
	CUtlMemoryFixedGrowable<CAnimationDecodeCacheEntry_t, 256, int>::Purge(
		int numElements);  // 1799
	CUtlVectorBase<CAnimationDecodeCacheEntry_t, CUtlMemoryFixedGrowable<CAnimationDecodeCacheEntry_t, 256, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<CAnimationDecodeCacheEntry_t, CUtlMemoryFixedGrowable<CAnimationDecodeCacheEntry_t, 256, int> >::Purge(); // 560
	ValidateAlignment<CAnimationDecodeCacheEntry_t>(void); // 508
	CUtlMemory<CAnimationDecodeCacheEntry_t, int>::Purge(); // 903
	CUtlMemory<CAnimationDecodeCacheEntry_t, int>::Purge(); // 510
	CUtlMemory<CAnimationDecodeCacheEntry_t, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<CAnimationDecodeCacheEntry_t, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<CAnimationDecodeCacheEntry_t, 256, int>::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<CAnimationDecodeCacheEntry_t, CUtlMemoryFixedGrowable<CAnimationDecodeCacheEntry_t, 256, int> >::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<CAnimationDecodeCacheEntry_t, 256>::~CUtlVectorFixedGrowable(); // 22
	CThreadLocalAnimationDecodeCache::~CThreadLocalAnimationDecodeCache(); // 341
	simpleTSPoolStruct_t::~simpleTSPoolStruct_t(); // 361
} /* size: 214, variables: 1, inline expansions: 23 (680 bytes) */

// <00C2F140> ../public/tier0/tslist.h:353
// variable: 1
inline void CTSPool<CFallbackTextureVulkan>::Purge()
{
	simpleTSPoolStruct_t* pNode; // 355
} /* size: 0, variables: 1 */

// <001756A0> ../public/tier0/tslist.h:353
// variable: 1
inline void CTSPool<CDependencyDescriptor>::Purge()
{
	simpleTSPoolStruct_t* pNode; // 355
} /* size: 0, variables: 1 */

// <0017563B> ../public/tier0/tslist.h:353
// variable: 1
inline void CTSPool<CRenderPassDesc>::Purge()
{
	simpleTSPoolStruct_t* pNode; // 355
} /* size: 0, variables: 1 */

// <000F5A70> ../public/tier0/tslist.h:353
// variable: 1
inline void CTSPool<CCommandStream>::Purge()
{
	simpleTSPoolStruct_t* pNode; // 355
} /* size: 0, variables: 1 */

// <001CBEAE> ../public/tier0/tslist.h:353
// variable: 1
inline void CTSPool<JobManualEvent_t>::Purge()
{
	simpleTSPoolStruct_t* pNode; // 355
} /* size: 0, variables: 1 */

// <00137605> ../public/tier0/tslist.h:353
// variable: 1
inline void CTSPool<COneTimeEvent>::Purge()
{
	simpleTSPoolStruct_t* pNode; // 355
} /* size: 0, variables: 1 */

// <001523EF> ../public/tier0/tslist.h:353
// variable: 1
inline void CTSPool<CTmpCmdBuffer>::Purge()
{
	simpleTSPoolStruct_t* pNode; // 355
} /* size: 0, variables: 1 */

// <0685C5D1> ../public/tier0/tslist.h:365
// variables: 2
inline void CTSPool<CThreadedLogger::Buffer_t>::PutObject(Buffer_t* pInfo)
{
	char* pElem; // 367
	simpleTSPoolStruct_t* pNode; // 369
} /* size: 0, variables: 2 */

// <04006DAB> ../public/tier0/tslist.h:365
// variables: 2
inline void CTSPool<CRenderAttributes>::PutObject(CRenderAttributes* pInfo)
{
	char* pElem; // 367
	simpleTSPoolStruct_t* pNode; // 369
} /* size: 0, variables: 2 */

// <0387BB07> ../public/tier0/tslist.h:365
// variables: 2
inline void CTSPool<SceneViewTimestampQuery_t>::PutObject(SceneViewTimestampQuery_t* pInfo)
{
	char* pElem; // 367
	simpleTSPoolStruct_t* pNode; // 369
} /* size: 0, variables: 2 */

// <03534C0F> ../public/tier0/tslist.h:365
// variables: 2
inline void CTSPool<CSceneObject>::PutObject(CSceneObject* pInfo)
{
	char* pElem; // 367
	simpleTSPoolStruct_t* pNode; // 369
} /* size: 0, variables: 2 */

// <0346929D> ../public/tier0/tslist.h:365
// variables: 2
inline void CTSPool<CSceneDrawList>::PutObject(CSceneDrawList* pInfo)
{
	char* pElem; // 367
	simpleTSPoolStruct_t* pNode; // 369
} /* size: 0, variables: 2 */

// <0272E14C> ../public/tier0/tslist.h:365
// variables: 2
inline void CTSPool<CBoneSetup>::PutObject(CBoneSetup* pInfo)
{
	char* pElem; // 367
	simpleTSPoolStruct_t* pNode; // 369
} /* size: 0, variables: 2 */

// <00C7244C> ../public/tier0/tslist.h:365
// variables: 2
inline void CTSPool<CThreadLocalAnimationDecodeCache>::PutObject(CThreadLocalAnimationDecodeCache* pInfo)
{
	char* pElem; // 367
	simpleTSPoolStruct_t* pNode; // 369
} /* size: 0, variables: 2 */

// <00C2E2AC> ../public/tier0/tslist.h:365
// variables: 2
inline void CTSPool<CFallbackTextureVulkan>::PutObject(CFallbackTextureVulkan* pInfo)
{
	char* pElem; // 367
	simpleTSPoolStruct_t* pNode; // 369
} /* size: 0, variables: 2 */

// <0022E712> ../public/tier0/tslist.h:365
// variables: 2
inline void CTSPool<CCommandStream>::PutObject(CCommandStream* pInfo)
{
	char* pElem; // 367
	simpleTSPoolStruct_t* pNode; // 369
} /* size: 0, variables: 2 */

// <00178004> ../public/tier0/tslist.h:365
// variables: 2
inline void CTSPool<CRenderPassDesc>::PutObject(CRenderPassDesc* pInfo)
{
	char* pElem; // 367
	simpleTSPoolStruct_t* pNode; // 369
} /* size: 0, variables: 2 */

// <00177E48> ../public/tier0/tslist.h:365
// variables: 2
inline void CTSPool<CDependencyDescriptor>::PutObject(CDependencyDescriptor* pInfo)
{
	char* pElem; // 367
	simpleTSPoolStruct_t* pNode; // 369
} /* size: 0, variables: 2 */

// <001CBE23> ../public/tier0/tslist.h:365
// variables: 2
inline void CTSPool<JobManualEvent_t>::PutObject(JobManualEvent_t* pInfo)
{
	char* pElem; // 367
	simpleTSPoolStruct_t* pNode; // 369
} /* size: 0, variables: 2 */

// <00137A12> ../public/tier0/tslist.h:365
// variables: 2
inline void CTSPool<COneTimeEvent>::PutObject(COneTimeEvent* pInfo)
{
	char* pElem; // 367
	simpleTSPoolStruct_t* pNode; // 369
} /* size: 0, variables: 2 */

// <001682A0> ../public/tier0/tslist.h:365
// variables: 2
inline void CTSPool<CTmpCmdBuffer>::PutObject(CTmpCmdBuffer* pInfo)
{
	char* pElem; // 367
	simpleTSPoolStruct_t* pNode; // 369
} /* size: 0, variables: 2 */

// <0685CD26> ../public/tier0/tslist.h:374
// variable: 1
inline void CTSPool<CThreadedLogger::Buffer_t>::GetObject()
{
	simpleTSPoolStruct_t* pNode; // 376
} /* size: 0, variables: 1 */

// <04006F75> ../public/tier0/tslist.h:374
// variable: 1
inline void CTSPool<CSceneObject>::GetObject()
{
	simpleTSPoolStruct_t* pNode; // 376
} /* size: 0, variables: 1 */

// <04006DEB> ../public/tier0/tslist.h:374
// variable: 1
inline void CTSPool<CRenderAttributes>::GetObject()
{
	simpleTSPoolStruct_t* pNode; // 376
} /* size: 0, variables: 1 */

// <0387BB52> ../public/tier0/tslist.h:374
// variable: 1
inline void CTSPool<SceneViewTimestampQuery_t>::GetObject()
{
	simpleTSPoolStruct_t* pNode; // 376
} /* size: 0, variables: 1 */

// <02EB059C> ../public/tier0/tslist.h:374
// variable: 1
inline void CTSPool<CSceneDrawList>::GetObject()
{
	simpleTSPoolStruct_t* pNode; // 376
} /* size: 0, variables: 1 */

// <0272E18C> ../public/tier0/tslist.h:374
// variable: 1
inline void CTSPool<CBoneSetup>::GetObject()
{
	simpleTSPoolStruct_t* pNode; // 376
} /* size: 0, variables: 1 */

// <00C7248C> ../public/tier0/tslist.h:374
// variable: 1
inline void CTSPool<CThreadLocalAnimationDecodeCache>::GetObject()
{
	simpleTSPoolStruct_t* pNode; // 376
} /* size: 0, variables: 1 */

// <00C2B321> ../public/tier0/tslist.h:374
// variable: 1
inline void CTSPool<CFallbackTextureVulkan>::GetObject()
{
	simpleTSPoolStruct_t* pNode; // 376
} /* size: 0, variables: 1 */

// <009DE6DE> ../public/tier0/tslist.h:374
// variable: 1
inline void CTSPool<CCommandStream>::GetObject()
{
	simpleTSPoolStruct_t* pNode; // 376
} /* size: 0, variables: 1 */

// <00178044> ../public/tier0/tslist.h:374
// variable: 1
inline void CTSPool<CRenderPassDesc>::GetObject()
{
	simpleTSPoolStruct_t* pNode; // 376
} /* size: 0, variables: 1 */

// <001745EF> ../public/tier0/tslist.h:374
// variable: 1
inline void CTSPool<CDependencyDescriptor>::GetObject()
{
	simpleTSPoolStruct_t* pNode; // 376
} /* size: 0, variables: 1 */

// <00137A79> ../public/tier0/tslist.h:374
// variable: 1
inline void CTSPool<COneTimeEvent>::GetObject()
{
	simpleTSPoolStruct_t* pNode; // 376
} /* size: 0, variables: 1 */

// <001682E0> ../public/tier0/tslist.h:374
// variable: 1
inline void CTSPool<CTmpCmdBuffer>::GetObject()
{
	simpleTSPoolStruct_t* pNode; // 376
} /* size: 0, variables: 1 */

// <00C2E293> ../public/tier0/tslist.h:388
inline void CTSPool<CFallbackTextureVulkan>::Get()
{
} /* size: 0 */

// <009E9AB5> ../public/tier0/tslist.h:388
inline void CTSPool<CCommandStream>::Get()
{
} /* size: 0 */

// <00177E88> ../public/tier0/tslist.h:388
inline void CTSPool<CDependencyDescriptor>::Get()
{
} /* size: 0 */

// <001CBE6E> ../public/tier0/tslist.h:394
// variables: 2
inline void CTSPool<JobManualEvent_t>::DeleteObject(JobManualEvent_t* pInfo)
{
	char* pElem; // 396
	simpleTSPoolStruct_t* pNode; // 398
} /* size: 0, variables: 2 */

// <001DDE2A> ../public/tier0/tslist.h:446
void CTSPoolCounted<JobManualEvent_t>::CTSPoolCounted()
{
} /* size: 0 */

// <001DDE0D> ../public/tier0/tslist.h:446
inline void CTSPoolCounted<JobManualEvent_t>::CTSPoolCounted()
{
} /* size: 0 */

// <001C85FB> ../public/tier0/tslist.h:446
// function calls: 13
void CTSPoolCounted<JobManualEvent_t>::~CTSPoolCounted()
{
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 203
	ThreadPause(void); // 208
	CTSListBase::Pop(); // 358
	JobManualEvent_t::~JobManualEvent_t(); // 341
	simpleTSPoolStruct_t::~simpleTSPoolStruct_t(); // 361
	CTSPool<JobManualEvent_t>::Purge(); // 350
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 244
	ThreadPause(void); // 230
	CTSListBase::Detach(); // 135
	CTSListBase::~CTSListBase(); // 351
	CTSPool<JobManualEvent_t>::~CTSPool(); // 446
} /* size: 227, inline expansions: 13 (577 bytes) */

// <001C85DE> ../public/tier0/tslist.h:446
inline void CTSPoolCounted<JobManualEvent_t>::~CTSPoolCounted()
{
} /* size: 0 */

// <001B8AF9> ../public/tier0/tslist.h:446
// member functions: 12
// member variables: 2
// class size: 32
class CTSPoolCounted<JobManualEvent_t> : public CTSPool<JobManualEvent_t> {
public:
	/* class CTSPool<JobManualEvent_t> <ancestor>; */ /* 0 16 */
private:
	CInterlockedInt m_nNumInPool __attribute__((__aligned__(4))); /* 16 4 */
	/* ../public/tier0/tslist.h:453 */
	int Count(const CTSPoolCounted<JobManualEvent_t>* );
	/* ../public/tier0/tslist.h:458 */
	void PutObject(CTSPoolCounted<JobManualEvent_t>* , JobManualEvent_t* );
	/* ../public/tier0/tslist.h:464 */
	void PutObjectMax(CTSPoolCounted<JobManualEvent_t>* , JobManualEvent_t* , int);
	/* ../public/tier0/tslist.h:478 */
	JobManualEvent_t* GetObject(CTSPoolCounted<JobManualEvent_t>* );
	/* ../public/tier0/tslist.h:451 */
	typedef struct simpleTSPoolStruct_t poolStruct_t;
	void ~CTSPoolCounted(CTSPoolCounted<JobManualEvent_t>* );
	void CTSPoolCounted(CTSPoolCounted<JobManualEvent_t>* );
	int Count(const class CTSPoolCounted<JobManualEvent_t>  *); /* linkage=_ZNK14CTSPoolCountedI16JobManualEvent_tE5CountEv */
	void PutObject(class CTSPoolCounted<JobManualEvent_t> *, class JobManualEvent_t *); /* linkage=_ZN14CTSPoolCountedI16JobManualEvent_tE9PutObjectEPS0_ */
	void PutObjectMax(class CTSPoolCounted<JobManualEvent_t> *, class JobManualEvent_t *, int); /* linkage=_ZN14CTSPoolCountedI16JobManualEvent_tE12PutObjectMaxEPS0_i */
	class JobManualEvent_t * GetObject(class CTSPoolCounted<JobManualEvent_t> *); /* linkage=_ZN14CTSPoolCountedI16JobManualEvent_tE9GetObjectEv */
	void ~CTSPoolCounted(class CTSPoolCounted<JobManualEvent_t> *); /* linkage=_ZN14CTSPoolCountedI16JobManualEvent_tED4Ev */
	void CTSPoolCounted(class CTSPoolCounted<JobManualEvent_t> *); /* linkage=_ZN14CTSPoolCountedI16JobManualEvent_tEC4Ev */
} __attribute__((__aligned__(16)));

// <001CD581> ../public/tier0/tslist.h:464
// variable: 1
inline void CTSPoolCounted<JobManualEvent_t>::PutObjectMax(JobManualEvent_t* pInfo, int nMax)
{
	int nNewCount; // 466
} /* size: 0, variables: 1 */

// <001CD5C1> ../public/tier0/tslist.h:478
// variable: 1
inline void CTSPoolCounted<JobManualEvent_t>::GetObject()
{
	poolStruct_t* pNode; // 480
} /* size: 0, variables: 1 */

// <0017B31B> ../public/tier0/tslist.h:500
void CTSOverlayPool<CPathString::Buffer_t>::CTSOverlayPool()
{
} /* size: 0 */

// <0017B2FE> ../public/tier0/tslist.h:500
inline void CTSOverlayPool<CPathString::Buffer_t>::CTSOverlayPool()
{
} /* size: 0 */

// <001714E3> ../public/tier0/tslist.h:500
// member functions: 6
// member variable: 1
// class size: 16
class CTSOverlayPool<CPathString::Buffer_t> : public CTSListBase {
public:
	/* class CTSListBase <ancestor>; */ /* 0 16 */
	/* ../public/tier0/tslist.h:503 */
	void ~CTSOverlayPool(CTSOverlayPool<CPathString::Buffer_t>* );
	/* ../public/tier0/tslist.h:509 */
	void Purge(CTSOverlayPool<CPathString::Buffer_t>* );
	/* ../public/tier0/tslist.h:521 */
	void PutObject(CTSOverlayPool<CPathString::Buffer_t>* , Buffer_t* );
	/* ../public/tier0/tslist.h:526 */
	Buffer_t* GetObject(CTSOverlayPool<CPathString::Buffer_t>* );
	/* ../public/tier0/tslist.h:540 */
	Buffer_t* Get(CTSOverlayPool<CPathString::Buffer_t>* );
	void CTSOverlayPool(CTSOverlayPool<CPathString::Buffer_t>* );
} __attribute__((__aligned__(16)));

// <001722B3> ../public/tier0/tslist.h:503
// function calls: 10
void CTSOverlayPool<CPathString::Buffer_t>::~CTSOverlayPool()
{
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 203
	ThreadPause(void); // 208
	CTSListBase::Pop(); // 514
	CTSOverlayPool<CPathString::Buffer_t>::Purge(); // 506
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 244
	ThreadPause(void); // 230
	CTSListBase::Detach(); // 135
	CTSListBase::~CTSListBase(); // 507
} /* size: 215, inline expansions: 10 (372 bytes) */

// <0017229A> ../public/tier0/tslist.h:503
inline void CTSOverlayPool<CPathString::Buffer_t>::~CTSOverlayPool()
{
} /* size: 0 */

// <00172274> ../public/tier0/tslist.h:509
// variable: 1
inline void CTSOverlayPool<CPathString::Buffer_t>::Purge()
{
	Buffer_t* pNode; // 511
} /* size: 0, variables: 1 */

// <0017472C> ../public/tier0/tslist.h:521
inline void CTSOverlayPool<CPathString::Buffer_t>::PutObject(Buffer_t* pNode)
{
} /* size: 0 */

// <00173974> ../public/tier0/tslist.h:526
// variable: 1
inline void CTSOverlayPool<CPathString::Buffer_t>::GetObject()
{
	Buffer_t* pNode; // 528
} /* size: 0, variables: 1 */

// <00174752> ../public/tier0/tslist.h:540
inline void CTSOverlayPool<CPathString::Buffer_t>::Get()
{
} /* size: 0 */

// <001A4DE8> ../public/tier0/tslist.h:720
void CTSItemList<CRenderDeviceBase::FallbackTextureCopyRequest_t>::CTSItemList()
{
} /* size: 0 */

// <001A4DCB> ../public/tier0/tslist.h:720
inline void CTSItemList<CRenderDeviceBase::FallbackTextureCopyRequest_t>::CTSItemList()
{
} /* size: 0 */

// <004FCBCE> ../public/tier0/tslist.h:720
void CTSItemList<int>::CTSItemList()
{
} /* size: 0 */

// <004FCBB0> ../public/tier0/tslist.h:720
inline void CTSItemList<int>::CTSItemList()
{
} /* size: 0 */

// <001D13C7> ../public/tier0/tslist.h:720
void CTSItemList<CAsyncScheduledFunctionManager::call_time_change_t>::CTSItemList()
{
} /* size: 0 */

// <001D13AA> ../public/tier0/tslist.h:720
inline void CTSItemList<CAsyncScheduledFunctionManager::call_time_change_t>::CTSItemList()
{
} /* size: 0 */

// <0016074F> ../public/tier0/tslist.h:720
// member functions: 11
// member variables: 2
// class size: 32
class CTSItemList<CRenderDeviceBase::FallbackTextureCopyRequest_t> : public CTSListBase {
public:
	/* class CTSListBase <ancestor>; */ /* 0 16 */
	/* ../public/tier0/tslist.h:730 */
	void ~CTSItemList(CTSItemList<CRenderDeviceBase::FallbackTextureCopyRequest_t>* );
	/* ../public/tier0/tslist.h:735 */
	void Purge(CTSItemList<CRenderDeviceBase::FallbackTextureCopyRequest_t>* );
	/* ../public/tier0/tslist.h:754 */
	void RemoveAll(CTSItemList<CRenderDeviceBase::FallbackTextureCopyRequest_t>* );
	/* ../public/tier0/tslist.h:766 */
	void PushItem(CTSItemList<CRenderDeviceBase::FallbackTextureCopyRequest_t>* , const FallbackTextureCopyRequest_t& );
	/* ../public/tier0/tslist.h:780 */
	bool PopItem(CTSItemList<CRenderDeviceBase::FallbackTextureCopyRequest_t>* , FallbackTextureCopyRequest_t* );
	/* ../public/tier0/tslist.h:723 */
	struct Node_t : public TSLNodeBase_t {
	public:
		/* struct TSLNodeBase_t <ancestor>; */ /* 0 16 */
		/* ../public/tier0/tslist.h:725 */
		void Node_t(Node_t* );
		/* ../public/tier0/tslist.h:726 */
		void Node_t(Node_t* , const FallbackTextureCopyRequest_t& );
		FallbackTextureCopyRequest_t elem; /* 16 16 */
	} __attribute__((__aligned__(16)));
	/* ../public/tier0/tslist.h:790 */
	Node_t* Detach(CTSItemList<CRenderDeviceBase::FallbackTextureCopyRequest_t>* );
	/* ../public/tier0/tslist.h:795 */
	void FreeNode(CTSItemList<CRenderDeviceBase::FallbackTextureCopyRequest_t>* , Node_t* );
private:
	CTSListBase m_FreeList __attribute__((__aligned__(16))); /* 16 16 */
	void CTSItemList(CTSItemList<CRenderDeviceBase::FallbackTextureCopyRequest_t>* );
} __attribute__((__aligned__(16)));

// <00935127> ../public/tier0/tslist.h:720
// member functions: 10
// member variables: 2
// class size: 32
class CTSItemList<CRenderDeviceBase::FallbackTextureCopyRequest_t> : public CTSListBase {
public:
	/* class CTSListBase <ancestor>; */ /* 0 16 */
	/* ../public/tier0/tslist.h:730 */
	void ~CTSItemList(CTSItemList<CRenderDeviceBase::FallbackTextureCopyRequest_t>* );
	/* ../public/tier0/tslist.h:735 */
	void Purge(CTSItemList<CRenderDeviceBase::FallbackTextureCopyRequest_t>* );
	/* ../public/tier0/tslist.h:754 */
	void RemoveAll(CTSItemList<CRenderDeviceBase::FallbackTextureCopyRequest_t>* );
	/* ../public/tier0/tslist.h:766 */
	void PushItem(CTSItemList<CRenderDeviceBase::FallbackTextureCopyRequest_t>* , const FallbackTextureCopyRequest_t& );
	/* ../public/tier0/tslist.h:780 */
	bool PopItem(CTSItemList<CRenderDeviceBase::FallbackTextureCopyRequest_t>* , FallbackTextureCopyRequest_t* );
	/* ../public/tier0/tslist.h:723 */
	struct Node_t : public TSLNodeBase_t {
	public:
		/* struct TSLNodeBase_t <ancestor>; */ /* 0 16 */
		/* ../public/tier0/tslist.h:725 */
		void Node_t(Node_t* );
		/* ../public/tier0/tslist.h:726 */
		void Node_t(Node_t* , const FallbackTextureCopyRequest_t& );
		FallbackTextureCopyRequest_t elem; /* 16 16 */
	} __attribute__((__aligned__(16)));
	/* ../public/tier0/tslist.h:790 */
	Node_t* Detach(CTSItemList<CRenderDeviceBase::FallbackTextureCopyRequest_t>* );
	/* ../public/tier0/tslist.h:795 */
	void FreeNode(CTSItemList<CRenderDeviceBase::FallbackTextureCopyRequest_t>* , Node_t* );
private:
	CTSListBase m_FreeList __attribute__((__aligned__(16))); /* 16 16 */
} __attribute__((__aligned__(16)));

// <001C4956> ../public/tier0/tslist.h:720
// member functions: 11
// member variables: 2
// class size: 32
class CTSItemList<CAsyncScheduledFunctionManager::call_time_change_t> : public CTSListBase {
public:
	/* class CTSListBase <ancestor>; */ /* 0 16 */
	/* ../public/tier0/tslist.h:730 */
	void ~CTSItemList(CTSItemList<CAsyncScheduledFunctionManager::call_time_change_t>* );
	/* ../public/tier0/tslist.h:735 */
	void Purge(CTSItemList<CAsyncScheduledFunctionManager::call_time_change_t>* );
	/* ../public/tier0/tslist.h:754 */
	void RemoveAll(CTSItemList<CAsyncScheduledFunctionManager::call_time_change_t>* );
	/* ../public/tier0/tslist.h:766 */
	void PushItem(CTSItemList<CAsyncScheduledFunctionManager::call_time_change_t>* , const call_time_change_t& );
	/* ../public/tier0/tslist.h:780 */
	bool PopItem(CTSItemList<CAsyncScheduledFunctionManager::call_time_change_t>* , call_time_change_t* );
	/* ../public/tier0/tslist.h:723 */
	struct Node_t : public TSLNodeBase_t {
	public:
		/* struct TSLNodeBase_t <ancestor>; */ /* 0 16 */
		/* ../public/tier0/tslist.h:725 */
		void Node_t(Node_t* );
		/* ../public/tier0/tslist.h:726 */
		void Node_t(Node_t* , const call_time_change_t& );
		call_time_change_t elem; /* 16 16 */
	} __attribute__((__aligned__(16)));
	/* ../public/tier0/tslist.h:790 */
	Node_t* Detach(CTSItemList<CAsyncScheduledFunctionManager::call_time_change_t>* );
	/* ../public/tier0/tslist.h:795 */
	void FreeNode(CTSItemList<CAsyncScheduledFunctionManager::call_time_change_t>* , Node_t* );
private:
	CTSListBase m_FreeList __attribute__((__aligned__(16))); /* 16 16 */
	void CTSItemList(CTSItemList<CAsyncScheduledFunctionManager::call_time_change_t>* );
} __attribute__((__aligned__(16)));

// <004F28D2> ../public/tier0/tslist.h:720
// member functions: 11
// member variables: 2
// class size: 32
class CTSItemList<int> : public CTSListBase {
public:
	/* class CTSListBase <ancestor>; */ /* 0 16 */
	/* ../public/tier0/tslist.h:730 */
	void ~CTSItemList(CTSItemList<int>* );
	/* ../public/tier0/tslist.h:735 */
	void Purge(CTSItemList<int>* );
	/* ../public/tier0/tslist.h:754 */
	void RemoveAll(CTSItemList<int>* );
	/* ../public/tier0/tslist.h:766 */
	void PushItem(CTSItemList<int>* , const int& );
	/* ../public/tier0/tslist.h:780 */
	bool PopItem(CTSItemList<int>* , int* );
	/* ../public/tier0/tslist.h:723 */
	struct Node_t : public TSLNodeBase_t {
	public:
		/* struct TSLNodeBase_t <ancestor>; */ /* 0 16 */
		/* ../public/tier0/tslist.h:725 */
		void Node_t(Node_t* );
		/* ../public/tier0/tslist.h:726 */
		void Node_t(Node_t* , const int& );
		int elem; /* 16 4 */
	} __attribute__((__aligned__(16)));
	/* ../public/tier0/tslist.h:790 */
	Node_t* Detach(CTSItemList<int>* );
	/* ../public/tier0/tslist.h:795 */
	void FreeNode(CTSItemList<int>* , Node_t* );
private:
	CTSListBase m_FreeList __attribute__((__aligned__(16))); /* 16 16 */
	void CTSItemList(CTSItemList<int>* );
} __attribute__((__aligned__(16)));

// <00178869> ../public/tier0/tslist.h:730
void CTSItemList<CRenderDeviceBase::FallbackTextureCopyRequest_t>::~CTSItemList()
{
} /* size: 0 */

// <00178850> ../public/tier0/tslist.h:730
inline void CTSItemList<CRenderDeviceBase::FallbackTextureCopyRequest_t>::~CTSItemList()
{
} /* size: 0 */

// <004F3508> ../public/tier0/tslist.h:730
// function calls: 20
void CTSItemList<int>::~CTSItemList()
{
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 244
	ThreadPause(void); // 230
	CTSListBase::Detach(); // 792
	CTSItemList<int>::Detach(); // 737
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 244
	ThreadPause(void); // 230
	CTSListBase::Detach(); // 745
	CTSItemList<int>::Purge(); // 732
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 244
	ThreadPause(void); // 230
	CTSListBase::Detach(); // 135
	CTSListBase::~CTSListBase(); // 733
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 244
	ThreadPause(void); // 230
	CTSListBase::Detach(); // 135
	CTSListBase::~CTSListBase(); // 733
} /* size: 426, inline expansions: 20 (971 bytes) */

// <004F34EF> ../public/tier0/tslist.h:730
inline void CTSItemList<int>::~CTSItemList()
{
} /* size: 0 */

// <001CC2FF> ../public/tier0/tslist.h:730
void CTSItemList<CAsyncScheduledFunctionManager::call_time_change_t>::~CTSItemList()
{
} /* size: 0 */

// <001CC2E6> ../public/tier0/tslist.h:730
inline void CTSItemList<CAsyncScheduledFunctionManager::call_time_change_t>::~CTSItemList()
{
} /* size: 0 */

// <00174F5D> ../public/tier0/tslist.h:735
// variables: 2
inline void CTSItemList<CRenderDeviceBase::FallbackTextureCopyRequest_t>::Purge()
{
	Node_t* pCurrent; // 737
	Node_t* pNext; // 738
} /* size: 0, variables: 2 */

// <004F53A2> ../public/tier0/tslist.h:735
// variables: 2
inline void CTSItemList<int>::Purge()
{
	Node_t* pCurrent; // 737
	Node_t* pNext; // 738
} /* size: 0, variables: 2 */

// <001CB0CF> ../public/tier0/tslist.h:735
// variables: 2
inline void CTSItemList<CAsyncScheduledFunctionManager::call_time_change_t>::Purge()
{
	Node_t* pCurrent; // 737
	Node_t* pNext; // 738
} /* size: 0, variables: 2 */

// <001767AA> ../public/tier0/tslist.h:766
// variable: 1
inline void CTSItemList<CRenderDeviceBase::FallbackTextureCopyRequest_t>::PushItem(const FallbackTextureCopyRequest_t& init)
{
	Node_t* pNode; // 768
} /* size: 0, variables: 1 */

// <004F5504> ../public/tier0/tslist.h:766
// variable: 1
inline void CTSItemList<int>::PushItem(const int& init)
{
	Node_t* pNode; // 768
} /* size: 0, variables: 1 */

// <001CC1D8> ../public/tier0/tslist.h:766
// variable: 1
inline void CTSItemList<CAsyncScheduledFunctionManager::call_time_change_t>::PushItem(const call_time_change_t& init)
{
	Node_t* pNode; // 768
} /* size: 0, variables: 1 */

// <009DF7BB> ../public/tier0/tslist.h:780
// variable: 1
inline void CTSItemList<CRenderDeviceBase::FallbackTextureCopyRequest_t>::PopItem(FallbackTextureCopyRequest_t* pResult)
{
	Node_t* pNode; // 782
} /* size: 0, variables: 1 */

// <004F54D1> ../public/tier0/tslist.h:780
// variable: 1
inline void CTSItemList<int>::PopItem(int* pResult)
{
	Node_t* pNode; // 782
} /* size: 0, variables: 1 */

// <001CC175> ../public/tier0/tslist.h:780
// variable: 1
inline void CTSItemList<CAsyncScheduledFunctionManager::call_time_change_t>::PopItem(call_time_change_t* pResult)
{
	Node_t* pNode; // 782
} /* size: 0, variables: 1 */

// <00171B05> ../public/tier0/tslist.h:790
inline void CTSItemList<CRenderDeviceBase::FallbackTextureCopyRequest_t>::Detach()
{
} /* size: 0 */

// <004F4ABC> ../public/tier0/tslist.h:790
inline void CTSItemList<int>::Detach()
{
} /* size: 0 */

// <001CA147> ../public/tier0/tslist.h:790
inline void CTSItemList<CAsyncScheduledFunctionManager::call_time_change_t>::Detach()
{
} /* size: 0 */

// <0231A336> ../public/tier0/tslist.h:822
// member functions: 33
// member variables: 4
// class size: 64
class CTSQueue<CResourceManifest*, false> {
	/* ../public/tier0/tslist.h:834 */
	union NodeLink_t {
		Value_t value; /* 0 16 */
		InterlockedPointerX2SizedInt_t valueInterlock; /* 0 16 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* tag__fprintf: volatile_type tag not supported! */;
	/* ../public/tier0/tslist.h:825 */
	struct Node_t {
		/* ../public/tier0/tslist.h:827 */
		void Node_t(Node_t* );
		/* ../public/tier0/tslist.h:828 */
		void Node_t(Node_t* , CResourceManifest* const& );
		Node_t * pNext; /* 0 8 */
		CResourceManifest * elem; /* 8 8 */
	} __attribute__((__aligned__(16)));
	/* ../public/tier0/tslist.h:845 */
	void CTSQueue(CTSQueue<CResourceManifest*, false>* );
	/* ../public/tier0/tslist.h:868 */
	void ~CTSQueue(CTSQueue<CResourceManifest*, false>* );
	/* ../public/tier0/tslist.h:879 */
	void Purge(CTSQueue<CResourceManifest*, false>* );
	/* ../public/tier0/tslist.h:902 */
	void RemoveAll(CTSQueue<CResourceManifest*, false>* );
	/* ../public/tier0/tslist.h:913 */
	bool ValidateQueue(CTSQueue<CResourceManifest*, false>* );
	/* ../public/tier0/tslist.h:962 */
	Node_t* Push(CTSQueue<CResourceManifest*, false>* , Node_t* );
	/* ../public/tier0/tslist.h:998 */
	Node_t* Pop(CTSQueue<CResourceManifest*, false>* );
	/* ../public/tier0/tslist.h:1077 */
	void FreeNode(CTSQueue<CResourceManifest*, false>* , Node_t* );
	/* ../public/tier0/tslist.h:1083 */
	void PushItem(CTSQueue<CResourceManifest*, false>* , CResourceManifest* const& );
	/* ../public/tier0/tslist.h:1094 */
	bool PopItem(CTSQueue<CResourceManifest*, false>* , CResourceManifest** );
	/* ../public/tier0/tslist.h:1107 */
	int Count(const CTSQueue<CResourceManifest*, false>* );
private:
	/* ../public/tier0/tslist.h:1128 */
	void FinishPush(CTSQueue<CResourceManifest*, false>* , Node_t* , const union NodeLink_t& );
	/* ../public/tier0/tslist.h:1138 */
	Node_t* End(const CTSQueue<CResourceManifest*, false>* );
	/* ../public/tier0/tslist.h:1140 */
	Node_t* InterlockedCompareExchangeNode(CTSQueue<CResourceManifest*, false>* , volatile Node_t** , Node_t* , Node_t* );
	/* ../public/tier0/tslist.h:1145 */
	bool InterlockedCompareExchangeNodeLink(CTSQueue<CResourceManifest*, false>* , volatile union NodeLink_t* , const union NodeLink_t& , const union NodeLink_t& );
	union NodeLink_t m_Head __attribute__((__aligned__(16))); /* 0 16 */
	union NodeLink_t m_Tail __attribute__((__aligned__(16))); /* 16 16 */
	CInterlockedInt m_Count __attribute__((__aligned__(4))); /* 32 4 */
	CTSListBase m_FreeNodes __attribute__((__aligned__(16))); /* 48 16 */
	void CTSQueue(class CTSQueue<CResourceManifest*, false> *); /* linkage=_ZN8CTSQueueIP17CResourceManifestLb0EEC4Ev */
	void ~CTSQueue(class CTSQueue<CResourceManifest*, false> *); /* linkage=_ZN8CTSQueueIP17CResourceManifestLb0EED4Ev */
	void Purge(class CTSQueue<CResourceManifest*, false> *); /* linkage=_ZN8CTSQueueIP17CResourceManifestLb0EE5PurgeEv */
	void RemoveAll(class CTSQueue<CResourceManifest*, false> *); /* linkage=_ZN8CTSQueueIP17CResourceManifestLb0EE9RemoveAllEv */
	bool ValidateQueue(class CTSQueue<CResourceManifest*, false> *); /* linkage=_ZN8CTSQueueIP17CResourceManifestLb0EE13ValidateQueueEv */
	class Node_t * Push(class CTSQueue<CResourceManifest*, false> *, class Node_t *); /* linkage=_ZN8CTSQueueIP17CResourceManifestLb0EE4PushEPNS2_6Node_tE */
	class Node_t * Pop(class CTSQueue<CResourceManifest*, false> *); /* linkage=_ZN8CTSQueueIP17CResourceManifestLb0EE3PopEv */
	void FreeNode(class CTSQueue<CResourceManifest*, false> *, class Node_t *); /* linkage=_ZN8CTSQueueIP17CResourceManifestLb0EE8FreeNodeEPNS2_6Node_tE */
	void PushItem(class CTSQueue<CResourceManifest*, false> *, class CResourceManifest * const &); /* linkage=_ZN8CTSQueueIP17CResourceManifestLb0EE8PushItemERKS1_ */
	bool PopItem(class CTSQueue<CResourceManifest*, false> *, class CResourceManifest * *); /* linkage=_ZN8CTSQueueIP17CResourceManifestLb0EE7PopItemEPS1_ */
	int Count(const class CTSQueue<CResourceManifest*, false>  *); /* linkage=_ZNK8CTSQueueIP17CResourceManifestLb0EE5CountEv */
	void FinishPush(class CTSQueue<CResourceManifest*, false> *, class Node_t *, const union NodeLink_t  &); /* linkage=_ZN8CTSQueueIP17CResourceManifestLb0EE10FinishPushEPNS2_6Node_tERKNS2_10NodeLink_tE */
	class Node_t * End(const class CTSQueue<CResourceManifest*, false>  *); /* linkage=_ZNK8CTSQueueIP17CResourceManifestLb0EE3EndEv */
	class Node_t * InterlockedCompareExchangeNode(class CTSQueue<CResourceManifest*, false> *, volatile class Node_t *  *, class Node_t *, class Node_t *); /* linkage=_ZN8CTSQueueIP17CResourceManifestLb0EE30InterlockedCompareExchangeNodeEPVPNS2_6Node_tES4_S4_ */
	bool InterlockedCompareExchangeNodeLink(class CTSQueue<CResourceManifest*, false> *, volatile union NodeLink_t  *, const union NodeLink_t  &, const union NodeLink_t  &); /* linkage=_ZN8CTSQueueIP17CResourceManifestLb0EE34InterlockedCompareExchangeNodeLinkEPVNS2_10NodeLink_tERKS3_S7_ */
} __attribute__((__aligned__(16)));

// <0231CF1C> ../public/tier0/tslist.h:822
// member functions: 33
// member variables: 4
// class size: 64
class CTSQueue<const ResourceBindingBase_t*, false> {
	/* ../public/tier0/tslist.h:834 */
	union NodeLink_t {
		Value_t value; /* 0 16 */
		InterlockedPointerX2SizedInt_t valueInterlock; /* 0 16 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* tag__fprintf: volatile_type tag not supported! */;
	/* ../public/tier0/tslist.h:825 */
	struct Node_t {
		/* ../public/tier0/tslist.h:827 */
		void Node_t(Node_t* );
		/* ../public/tier0/tslist.h:828 */
		void Node_t(Node_t* , const ResourceBindingBase_t* const& );
		Node_t * pNext; /* 0 8 */
		const class ResourceBindingBase_t * elem; /* 8 8 */
	} __attribute__((__aligned__(16)));
	/* ../public/tier0/tslist.h:845 */
	void CTSQueue(CTSQueue<const ResourceBindingBase_t*, false>* );
	/* ../public/tier0/tslist.h:868 */
	void ~CTSQueue(CTSQueue<const ResourceBindingBase_t*, false>* );
	/* ../public/tier0/tslist.h:879 */
	void Purge(CTSQueue<const ResourceBindingBase_t*, false>* );
	/* ../public/tier0/tslist.h:902 */
	void RemoveAll(CTSQueue<const ResourceBindingBase_t*, false>* );
	/* ../public/tier0/tslist.h:913 */
	bool ValidateQueue(CTSQueue<const ResourceBindingBase_t*, false>* );
	/* ../public/tier0/tslist.h:962 */
	Node_t* Push(CTSQueue<const ResourceBindingBase_t*, false>* , Node_t* );
	/* ../public/tier0/tslist.h:998 */
	Node_t* Pop(CTSQueue<const ResourceBindingBase_t*, false>* );
	/* ../public/tier0/tslist.h:1077 */
	void FreeNode(CTSQueue<const ResourceBindingBase_t*, false>* , Node_t* );
	/* ../public/tier0/tslist.h:1083 */
	void PushItem(CTSQueue<const ResourceBindingBase_t*, false>* , const ResourceBindingBase_t* const& );
	/* ../public/tier0/tslist.h:1094 */
	bool PopItem(CTSQueue<const ResourceBindingBase_t*, false>* , const ResourceBindingBase_t** );
	/* ../public/tier0/tslist.h:1107 */
	int Count(const CTSQueue<const ResourceBindingBase_t*, false>* );
private:
	/* ../public/tier0/tslist.h:1128 */
	void FinishPush(CTSQueue<const ResourceBindingBase_t*, false>* , Node_t* , const union NodeLink_t& );
	/* ../public/tier0/tslist.h:1138 */
	Node_t* End(const CTSQueue<const ResourceBindingBase_t*, false>* );
	/* ../public/tier0/tslist.h:1140 */
	Node_t* InterlockedCompareExchangeNode(CTSQueue<const ResourceBindingBase_t*, false>* , volatile Node_t** , Node_t* , Node_t* );
	/* ../public/tier0/tslist.h:1145 */
	bool InterlockedCompareExchangeNodeLink(CTSQueue<const ResourceBindingBase_t*, false>* , volatile union NodeLink_t* , const union NodeLink_t& , const union NodeLink_t& );
	union NodeLink_t m_Head __attribute__((__aligned__(16))); /* 0 16 */
	union NodeLink_t m_Tail __attribute__((__aligned__(16))); /* 16 16 */
	CInterlockedInt m_Count __attribute__((__aligned__(4))); /* 32 4 */
	CTSListBase m_FreeNodes __attribute__((__aligned__(16))); /* 48 16 */
	void CTSQueue(class CTSQueue<const ResourceBindingBase_t*, false> *); /* linkage=_ZN8CTSQueueIPK21ResourceBindingBase_tLb0EEC4Ev */
	void ~CTSQueue(class CTSQueue<const ResourceBindingBase_t*, false> *); /* linkage=_ZN8CTSQueueIPK21ResourceBindingBase_tLb0EED4Ev */
	void Purge(class CTSQueue<const ResourceBindingBase_t*, false> *); /* linkage=_ZN8CTSQueueIPK21ResourceBindingBase_tLb0EE5PurgeEv */
	void RemoveAll(class CTSQueue<const ResourceBindingBase_t*, false> *); /* linkage=_ZN8CTSQueueIPK21ResourceBindingBase_tLb0EE9RemoveAllEv */
	bool ValidateQueue(class CTSQueue<const ResourceBindingBase_t*, false> *); /* linkage=_ZN8CTSQueueIPK21ResourceBindingBase_tLb0EE13ValidateQueueEv */
	class Node_t * Push(class CTSQueue<const ResourceBindingBase_t*, false> *, class Node_t *); /* linkage=_ZN8CTSQueueIPK21ResourceBindingBase_tLb0EE4PushEPNS3_6Node_tE */
	class Node_t * Pop(class CTSQueue<const ResourceBindingBase_t*, false> *); /* linkage=_ZN8CTSQueueIPK21ResourceBindingBase_tLb0EE3PopEv */
	void FreeNode(class CTSQueue<const ResourceBindingBase_t*, false> *, class Node_t *); /* linkage=_ZN8CTSQueueIPK21ResourceBindingBase_tLb0EE8FreeNodeEPNS3_6Node_tE */
	void PushItem(class CTSQueue<const ResourceBindingBase_t*, false> *, const class ResourceBindingBase_t  * const &); /* linkage=_ZN8CTSQueueIPK21ResourceBindingBase_tLb0EE8PushItemERKS2_ */
	bool PopItem(class CTSQueue<const ResourceBindingBase_t*, false> *, const class ResourceBindingBase_t  * *); /* linkage=_ZN8CTSQueueIPK21ResourceBindingBase_tLb0EE7PopItemEPS2_ */
	int Count(const class CTSQueue<const ResourceBindingBase_t*, false>  *); /* linkage=_ZNK8CTSQueueIPK21ResourceBindingBase_tLb0EE5CountEv */
	void FinishPush(class CTSQueue<const ResourceBindingBase_t*, false> *, class Node_t *, const union NodeLink_t  &); /* linkage=_ZN8CTSQueueIPK21ResourceBindingBase_tLb0EE10FinishPushEPNS3_6Node_tERKNS3_10NodeLink_tE */
	class Node_t * End(const class CTSQueue<const ResourceBindingBase_t*, false>  *); /* linkage=_ZNK8CTSQueueIPK21ResourceBindingBase_tLb0EE3EndEv */
	class Node_t * InterlockedCompareExchangeNode(class CTSQueue<const ResourceBindingBase_t*, false> *, volatile class Node_t *  *, class Node_t *, class Node_t *); /* linkage=_ZN8CTSQueueIPK21ResourceBindingBase_tLb0EE30InterlockedCompareExchangeNodeEPVPNS3_6Node_tES5_S5_ */
	bool InterlockedCompareExchangeNodeLink(class CTSQueue<const ResourceBindingBase_t*, false> *, volatile union NodeLink_t  *, const union NodeLink_t  &, const union NodeLink_t  &); /* linkage=_ZN8CTSQueueIPK21ResourceBindingBase_tLb0EE34InterlockedCompareExchangeNodeLinkEPVNS3_10NodeLink_tERKS4_S8_ */
} __attribute__((__aligned__(16)));

// <024D7BE3> ../public/tier0/tslist.h:822
// member functions: 18
// member variables: 4
// class size: 64
class CTSQueue<CAsyncWaveData*, false> {
	/* ../public/tier0/tslist.h:834 */
	union NodeLink_t {
		Value_t value; /* 0 16 */
		InterlockedPointerX2SizedInt_t valueInterlock; /* 0 16 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* tag__fprintf: volatile_type tag not supported! */;
	/* ../public/tier0/tslist.h:825 */
	struct Node_t {
		/* ../public/tier0/tslist.h:827 */
		void Node_t(Node_t* );
		/* ../public/tier0/tslist.h:828 */
		void Node_t(Node_t* , CAsyncWaveData* const& );
		Node_t * pNext; /* 0 8 */
		CAsyncWaveData * elem; /* 8 8 */
	} __attribute__((__aligned__(16)));
	/* ../public/tier0/tslist.h:845 */
	void CTSQueue(CTSQueue<CAsyncWaveData*, false>* );
	/* ../public/tier0/tslist.h:868 */
	void ~CTSQueue(CTSQueue<CAsyncWaveData*, false>* );
	/* ../public/tier0/tslist.h:879 */
	void Purge(CTSQueue<CAsyncWaveData*, false>* );
	/* ../public/tier0/tslist.h:902 */
	void RemoveAll(CTSQueue<CAsyncWaveData*, false>* );
	/* ../public/tier0/tslist.h:913 */
	bool ValidateQueue(CTSQueue<CAsyncWaveData*, false>* );
	/* ../public/tier0/tslist.h:962 */
	Node_t* Push(CTSQueue<CAsyncWaveData*, false>* , Node_t* );
	/* ../public/tier0/tslist.h:998 */
	Node_t* Pop(CTSQueue<CAsyncWaveData*, false>* );
	/* ../public/tier0/tslist.h:1077 */
	void FreeNode(CTSQueue<CAsyncWaveData*, false>* , Node_t* );
	/* ../public/tier0/tslist.h:1083 */
	void PushItem(CTSQueue<CAsyncWaveData*, false>* , CAsyncWaveData* const& );
	/* ../public/tier0/tslist.h:1094 */
	bool PopItem(CTSQueue<CAsyncWaveData*, false>* , CAsyncWaveData** );
	/* ../public/tier0/tslist.h:1107 */
	int Count(const CTSQueue<CAsyncWaveData*, false>* );
private:
	/* ../public/tier0/tslist.h:1128 */
	void FinishPush(CTSQueue<CAsyncWaveData*, false>* , Node_t* , const union NodeLink_t& );
	/* ../public/tier0/tslist.h:1138 */
	Node_t* End(const CTSQueue<CAsyncWaveData*, false>* );
	/* ../public/tier0/tslist.h:1140 */
	Node_t* InterlockedCompareExchangeNode(CTSQueue<CAsyncWaveData*, false>* , volatile Node_t** , Node_t* , Node_t* );
	/* ../public/tier0/tslist.h:1145 */
	bool InterlockedCompareExchangeNodeLink(CTSQueue<CAsyncWaveData*, false>* , volatile union NodeLink_t* , const union NodeLink_t& , const union NodeLink_t& );
	union NodeLink_t m_Head __attribute__((__aligned__(16))); /* 0 16 */
	union NodeLink_t m_Tail __attribute__((__aligned__(16))); /* 16 16 */
	CInterlockedInt m_Count __attribute__((__aligned__(4))); /* 32 4 */
	CTSListBase m_FreeNodes __attribute__((__aligned__(16))); /* 48 16 */
} __attribute__((__aligned__(16)));

// <02DA39AC> ../public/tier0/tslist.h:822
// member functions: 18
// member variables: 4
// class size: 64
class CTSQueue<CSceneObject*, false> {
	/* ../public/tier0/tslist.h:834 */
	union NodeLink_t {
		Value_t value; /* 0 16 */
		InterlockedPointerX2SizedInt_t valueInterlock; /* 0 16 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* tag__fprintf: volatile_type tag not supported! */;
	/* ../public/tier0/tslist.h:825 */
	struct Node_t {
		/* ../public/tier0/tslist.h:827 */
		void Node_t(Node_t* );
		/* ../public/tier0/tslist.h:828 */
		void Node_t(Node_t* , CSceneObject* const& );
		Node_t * pNext; /* 0 8 */
		CSceneObject * elem; /* 8 8 */
	} __attribute__((__aligned__(16)));
	/* ../public/tier0/tslist.h:845 */
	void CTSQueue(CTSQueue<CSceneObject*, false>* );
	/* ../public/tier0/tslist.h:868 */
	void ~CTSQueue(CTSQueue<CSceneObject*, false>* );
	/* ../public/tier0/tslist.h:879 */
	void Purge(CTSQueue<CSceneObject*, false>* );
	/* ../public/tier0/tslist.h:902 */
	void RemoveAll(CTSQueue<CSceneObject*, false>* );
	/* ../public/tier0/tslist.h:913 */
	bool ValidateQueue(CTSQueue<CSceneObject*, false>* );
	/* ../public/tier0/tslist.h:962 */
	Node_t* Push(CTSQueue<CSceneObject*, false>* , Node_t* );
	/* ../public/tier0/tslist.h:998 */
	Node_t* Pop(CTSQueue<CSceneObject*, false>* );
	/* ../public/tier0/tslist.h:1077 */
	void FreeNode(CTSQueue<CSceneObject*, false>* , Node_t* );
	/* ../public/tier0/tslist.h:1083 */
	void PushItem(CTSQueue<CSceneObject*, false>* , CSceneObject* const& );
	/* ../public/tier0/tslist.h:1094 */
	bool PopItem(CTSQueue<CSceneObject*, false>* , CSceneObject** );
	/* ../public/tier0/tslist.h:1107 */
	int Count(const CTSQueue<CSceneObject*, false>* );
private:
	/* ../public/tier0/tslist.h:1128 */
	void FinishPush(CTSQueue<CSceneObject*, false>* , Node_t* , const union NodeLink_t& );
	/* ../public/tier0/tslist.h:1138 */
	Node_t* End(const CTSQueue<CSceneObject*, false>* );
	/* ../public/tier0/tslist.h:1140 */
	Node_t* InterlockedCompareExchangeNode(CTSQueue<CSceneObject*, false>* , volatile Node_t** , Node_t* , Node_t* );
	/* ../public/tier0/tslist.h:1145 */
	bool InterlockedCompareExchangeNodeLink(CTSQueue<CSceneObject*, false>* , volatile union NodeLink_t* , const union NodeLink_t& , const union NodeLink_t& );
	union NodeLink_t m_Head __attribute__((__aligned__(16))); /* 0 16 */
	union NodeLink_t m_Tail __attribute__((__aligned__(16))); /* 16 16 */
	CInterlockedInt m_Count __attribute__((__aligned__(4))); /* 32 4 */
	CTSListBase m_FreeNodes __attribute__((__aligned__(16))); /* 48 16 */
} __attribute__((__aligned__(16)));

// <0447E383> ../public/tier0/tslist.h:822
// member functions: 18
// member variables: 4
// class size: 64
class CTSQueue<std::function<void()>*, false> {
	/* ../public/tier0/tslist.h:834 */
	union NodeLink_t {
		Value_t value; /* 0 16 */
		InterlockedPointerX2SizedInt_t valueInterlock; /* 0 16 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* tag__fprintf: volatile_type tag not supported! */;
	/* ../public/tier0/tslist.h:825 */
	struct Node_t {
		/* ../public/tier0/tslist.h:827 */
		void Node_t(Node_t* );
		/* ../public/tier0/tslist.h:828 */
		void Node_t(Node_t* , function<void()>* const& );
		Node_t * pNext; /* 0 8 */
		function<void()> * elem; /* 8 8 */
	} __attribute__((__aligned__(16)));
	/* ../public/tier0/tslist.h:845 */
	void CTSQueue(CTSQueue<std::function<void()>*, false>* );
	/* ../public/tier0/tslist.h:868 */
	void ~CTSQueue(CTSQueue<std::function<void()>*, false>* );
	/* ../public/tier0/tslist.h:879 */
	void Purge(CTSQueue<std::function<void()>*, false>* );
	/* ../public/tier0/tslist.h:902 */
	void RemoveAll(CTSQueue<std::function<void()>*, false>* );
	/* ../public/tier0/tslist.h:913 */
	bool ValidateQueue(CTSQueue<std::function<void()>*, false>* );
	/* ../public/tier0/tslist.h:962 */
	Node_t* Push(CTSQueue<std::function<void()>*, false>* , Node_t* );
	/* ../public/tier0/tslist.h:998 */
	Node_t* Pop(CTSQueue<std::function<void()>*, false>* );
	/* ../public/tier0/tslist.h:1077 */
	void FreeNode(CTSQueue<std::function<void()>*, false>* , Node_t* );
	/* ../public/tier0/tslist.h:1083 */
	void PushItem(CTSQueue<std::function<void()>*, false>* , function<void()>* const& );
	/* ../public/tier0/tslist.h:1094 */
	bool PopItem(CTSQueue<std::function<void()>*, false>* , function<void()>** );
	/* ../public/tier0/tslist.h:1107 */
	int Count(const CTSQueue<std::function<void()>*, false>* );
private:
	/* ../public/tier0/tslist.h:1128 */
	void FinishPush(CTSQueue<std::function<void()>*, false>* , Node_t* , const union NodeLink_t& );
	/* ../public/tier0/tslist.h:1138 */
	Node_t* End(const CTSQueue<std::function<void()>*, false>* );
	/* ../public/tier0/tslist.h:1140 */
	Node_t* InterlockedCompareExchangeNode(CTSQueue<std::function<void()>*, false>* , volatile Node_t** , Node_t* , Node_t* );
	/* ../public/tier0/tslist.h:1145 */
	bool InterlockedCompareExchangeNodeLink(CTSQueue<std::function<void()>*, false>* , volatile union NodeLink_t* , const union NodeLink_t& , const union NodeLink_t& );
	union NodeLink_t m_Head __attribute__((__aligned__(16))); /* 0 16 */
	union NodeLink_t m_Tail __attribute__((__aligned__(16))); /* 16 16 */
	CInterlockedInt m_Count __attribute__((__aligned__(4))); /* 32 4 */
	CTSListBase m_FreeNodes __attribute__((__aligned__(16))); /* 48 16 */
} __attribute__((__aligned__(16)));

// <0447F099> ../public/tier0/tslist.h:822
// member functions: 18
// member variables: 4
// class size: 64
class CTSQueue<QueuedSweepNode_t, false> {
	/* ../public/tier0/tslist.h:834 */
	union NodeLink_t {
		Value_t value; /* 0 16 */
		InterlockedPointerX2SizedInt_t valueInterlock; /* 0 16 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* tag__fprintf: volatile_type tag not supported! */;
	/* ../public/tier0/tslist.h:825 */
	struct Node_t {
		/* ../public/tier0/tslist.h:827 */
		void Node_t(Node_t* );
		/* ../public/tier0/tslist.h:828 */
		void Node_t(Node_t* , const QueuedSweepNode_t& );
		Node_t * pNext; /* 0 8 */
		QueuedSweepNode_t elem; /* 8 100 */
	} __attribute__((__aligned__(16)));
	/* ../public/tier0/tslist.h:845 */
	void CTSQueue(CTSQueue<QueuedSweepNode_t, false>* );
	/* ../public/tier0/tslist.h:868 */
	void ~CTSQueue(CTSQueue<QueuedSweepNode_t, false>* );
	/* ../public/tier0/tslist.h:879 */
	void Purge(CTSQueue<QueuedSweepNode_t, false>* );
	/* ../public/tier0/tslist.h:902 */
	void RemoveAll(CTSQueue<QueuedSweepNode_t, false>* );
	/* ../public/tier0/tslist.h:913 */
	bool ValidateQueue(CTSQueue<QueuedSweepNode_t, false>* );
	/* ../public/tier0/tslist.h:962 */
	Node_t* Push(CTSQueue<QueuedSweepNode_t, false>* , Node_t* );
	/* ../public/tier0/tslist.h:998 */
	Node_t* Pop(CTSQueue<QueuedSweepNode_t, false>* );
	/* ../public/tier0/tslist.h:1077 */
	void FreeNode(CTSQueue<QueuedSweepNode_t, false>* , Node_t* );
	/* ../public/tier0/tslist.h:1083 */
	void PushItem(CTSQueue<QueuedSweepNode_t, false>* , const QueuedSweepNode_t& );
	/* ../public/tier0/tslist.h:1094 */
	bool PopItem(CTSQueue<QueuedSweepNode_t, false>* , QueuedSweepNode_t* );
	/* ../public/tier0/tslist.h:1107 */
	int Count(const CTSQueue<QueuedSweepNode_t, false>* );
private:
	/* ../public/tier0/tslist.h:1128 */
	void FinishPush(CTSQueue<QueuedSweepNode_t, false>* , Node_t* , const union NodeLink_t& );
	/* ../public/tier0/tslist.h:1138 */
	Node_t* End(const CTSQueue<QueuedSweepNode_t, false>* );
	/* ../public/tier0/tslist.h:1140 */
	Node_t* InterlockedCompareExchangeNode(CTSQueue<QueuedSweepNode_t, false>* , volatile Node_t** , Node_t* , Node_t* );
	/* ../public/tier0/tslist.h:1145 */
	bool InterlockedCompareExchangeNodeLink(CTSQueue<QueuedSweepNode_t, false>* , volatile union NodeLink_t* , const union NodeLink_t& , const union NodeLink_t& );
	union NodeLink_t m_Head __attribute__((__aligned__(16))); /* 0 16 */
	union NodeLink_t m_Tail __attribute__((__aligned__(16))); /* 16 16 */
	CInterlockedInt m_Count __attribute__((__aligned__(4))); /* 32 4 */
	CTSListBase m_FreeNodes __attribute__((__aligned__(16))); /* 48 16 */
} __attribute__((__aligned__(16)));

// <0447F442> ../public/tier0/tslist.h:822
// member functions: 33
// member variables: 4
// class size: 64
class CTSQueue<SweepGroup_t*, false> {
	/* ../public/tier0/tslist.h:834 */
	union NodeLink_t {
		Value_t value; /* 0 16 */
		InterlockedPointerX2SizedInt_t valueInterlock; /* 0 16 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* tag__fprintf: volatile_type tag not supported! */;
	/* ../public/tier0/tslist.h:825 */
	struct Node_t {
		/* ../public/tier0/tslist.h:827 */
		void Node_t(Node_t* );
		/* ../public/tier0/tslist.h:828 */
		void Node_t(Node_t* , SweepGroup_t* const& );
		Node_t * pNext; /* 0 8 */
		SweepGroup_t * elem; /* 8 8 */
	} __attribute__((__aligned__(16)));
	/* ../public/tier0/tslist.h:845 */
	void CTSQueue(CTSQueue<SweepGroup_t*, false>* );
	/* ../public/tier0/tslist.h:868 */
	void ~CTSQueue(CTSQueue<SweepGroup_t*, false>* );
	/* ../public/tier0/tslist.h:879 */
	void Purge(CTSQueue<SweepGroup_t*, false>* );
	/* ../public/tier0/tslist.h:902 */
	void RemoveAll(CTSQueue<SweepGroup_t*, false>* );
	/* ../public/tier0/tslist.h:913 */
	bool ValidateQueue(CTSQueue<SweepGroup_t*, false>* );
	/* ../public/tier0/tslist.h:962 */
	Node_t* Push(CTSQueue<SweepGroup_t*, false>* , Node_t* );
	/* ../public/tier0/tslist.h:998 */
	Node_t* Pop(CTSQueue<SweepGroup_t*, false>* );
	/* ../public/tier0/tslist.h:1077 */
	void FreeNode(CTSQueue<SweepGroup_t*, false>* , Node_t* );
	/* ../public/tier0/tslist.h:1083 */
	void PushItem(CTSQueue<SweepGroup_t*, false>* , SweepGroup_t* const& );
	/* ../public/tier0/tslist.h:1094 */
	bool PopItem(CTSQueue<SweepGroup_t*, false>* , SweepGroup_t** );
	/* ../public/tier0/tslist.h:1107 */
	int Count(const CTSQueue<SweepGroup_t*, false>* );
private:
	/* ../public/tier0/tslist.h:1128 */
	void FinishPush(CTSQueue<SweepGroup_t*, false>* , Node_t* , const union NodeLink_t& );
	/* ../public/tier0/tslist.h:1138 */
	Node_t* End(const CTSQueue<SweepGroup_t*, false>* );
	/* ../public/tier0/tslist.h:1140 */
	Node_t* InterlockedCompareExchangeNode(CTSQueue<SweepGroup_t*, false>* , volatile Node_t** , Node_t* , Node_t* );
	/* ../public/tier0/tslist.h:1145 */
	bool InterlockedCompareExchangeNodeLink(CTSQueue<SweepGroup_t*, false>* , volatile union NodeLink_t* , const union NodeLink_t& , const union NodeLink_t& );
	union NodeLink_t m_Head __attribute__((__aligned__(16))); /* 0 16 */
	union NodeLink_t m_Tail __attribute__((__aligned__(16))); /* 16 16 */
	CInterlockedInt m_Count __attribute__((__aligned__(4))); /* 32 4 */
	CTSListBase m_FreeNodes __attribute__((__aligned__(16))); /* 48 16 */
	void CTSQueue(class CTSQueue<SweepGroup_t*, false> *); /* linkage=_ZN8CTSQueueIP12SweepGroup_tLb0EEC4Ev */
	void ~CTSQueue(class CTSQueue<SweepGroup_t*, false> *); /* linkage=_ZN8CTSQueueIP12SweepGroup_tLb0EED4Ev */
	void Purge(class CTSQueue<SweepGroup_t*, false> *); /* linkage=_ZN8CTSQueueIP12SweepGroup_tLb0EE5PurgeEv */
	void RemoveAll(class CTSQueue<SweepGroup_t*, false> *); /* linkage=_ZN8CTSQueueIP12SweepGroup_tLb0EE9RemoveAllEv */
	bool ValidateQueue(class CTSQueue<SweepGroup_t*, false> *); /* linkage=_ZN8CTSQueueIP12SweepGroup_tLb0EE13ValidateQueueEv */
	class Node_t * Push(class CTSQueue<SweepGroup_t*, false> *, class Node_t *); /* linkage=_ZN8CTSQueueIP12SweepGroup_tLb0EE4PushEPNS2_6Node_tE */
	class Node_t * Pop(class CTSQueue<SweepGroup_t*, false> *); /* linkage=_ZN8CTSQueueIP12SweepGroup_tLb0EE3PopEv */
	void FreeNode(class CTSQueue<SweepGroup_t*, false> *, class Node_t *); /* linkage=_ZN8CTSQueueIP12SweepGroup_tLb0EE8FreeNodeEPNS2_6Node_tE */
	void PushItem(class CTSQueue<SweepGroup_t*, false> *, class SweepGroup_t * const &); /* linkage=_ZN8CTSQueueIP12SweepGroup_tLb0EE8PushItemERKS1_ */
	bool PopItem(class CTSQueue<SweepGroup_t*, false> *, class SweepGroup_t * *); /* linkage=_ZN8CTSQueueIP12SweepGroup_tLb0EE7PopItemEPS1_ */
	int Count(const class CTSQueue<SweepGroup_t*, false>  *); /* linkage=_ZNK8CTSQueueIP12SweepGroup_tLb0EE5CountEv */
	void FinishPush(class CTSQueue<SweepGroup_t*, false> *, class Node_t *, const union NodeLink_t  &); /* linkage=_ZN8CTSQueueIP12SweepGroup_tLb0EE10FinishPushEPNS2_6Node_tERKNS2_10NodeLink_tE */
	class Node_t * End(const class CTSQueue<SweepGroup_t*, false>  *); /* linkage=_ZNK8CTSQueueIP12SweepGroup_tLb0EE3EndEv */
	class Node_t * InterlockedCompareExchangeNode(class CTSQueue<SweepGroup_t*, false> *, volatile class Node_t *  *, class Node_t *, class Node_t *); /* linkage=_ZN8CTSQueueIP12SweepGroup_tLb0EE30InterlockedCompareExchangeNodeEPVPNS2_6Node_tES4_S4_ */
	bool InterlockedCompareExchangeNodeLink(class CTSQueue<SweepGroup_t*, false> *, volatile union NodeLink_t  *, const union NodeLink_t  &, const union NodeLink_t  &); /* linkage=_ZN8CTSQueueIP12SweepGroup_tLb0EE34InterlockedCompareExchangeNodeLinkEPVNS2_10NodeLink_tERKS3_S7_ */
} __attribute__((__aligned__(16)));

// <06859EB3> ../public/tier0/tslist.h:822
// member functions: 18
// member variables: 4
// class size: 64
class CTSQueue<CThreadedLogger::Buffer_t*, false> {
	/* ../public/tier0/tslist.h:834 */
	union NodeLink_t {
		Value_t value; /* 0 16 */
		InterlockedPointerX2SizedInt_t valueInterlock; /* 0 16 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* tag__fprintf: volatile_type tag not supported! */;
	/* ../public/tier0/tslist.h:825 */
	struct Node_t {
		/* ../public/tier0/tslist.h:827 */
		void Node_t(Node_t* );
		/* ../public/tier0/tslist.h:828 */
		void Node_t(Node_t* , Buffer_t* const& );
		Node_t * pNext; /* 0 8 */
		Buffer_t * elem; /* 8 8 */
	} __attribute__((__aligned__(16)));
	/* ../public/tier0/tslist.h:845 */
	void CTSQueue(CTSQueue<CThreadedLogger::Buffer_t*, false>* );
	/* ../public/tier0/tslist.h:868 */
	void ~CTSQueue(CTSQueue<CThreadedLogger::Buffer_t*, false>* );
	/* ../public/tier0/tslist.h:879 */
	void Purge(CTSQueue<CThreadedLogger::Buffer_t*, false>* );
	/* ../public/tier0/tslist.h:902 */
	void RemoveAll(CTSQueue<CThreadedLogger::Buffer_t*, false>* );
	/* ../public/tier0/tslist.h:913 */
	bool ValidateQueue(CTSQueue<CThreadedLogger::Buffer_t*, false>* );
	/* ../public/tier0/tslist.h:962 */
	Node_t* Push(CTSQueue<CThreadedLogger::Buffer_t*, false>* , Node_t* );
	/* ../public/tier0/tslist.h:998 */
	Node_t* Pop(CTSQueue<CThreadedLogger::Buffer_t*, false>* );
	/* ../public/tier0/tslist.h:1077 */
	void FreeNode(CTSQueue<CThreadedLogger::Buffer_t*, false>* , Node_t* );
	/* ../public/tier0/tslist.h:1083 */
	void PushItem(CTSQueue<CThreadedLogger::Buffer_t*, false>* , Buffer_t* const& );
	/* ../public/tier0/tslist.h:1094 */
	bool PopItem(CTSQueue<CThreadedLogger::Buffer_t*, false>* , Buffer_t** );
	/* ../public/tier0/tslist.h:1107 */
	int Count(const CTSQueue<CThreadedLogger::Buffer_t*, false>* );
private:
	/* ../public/tier0/tslist.h:1128 */
	void FinishPush(CTSQueue<CThreadedLogger::Buffer_t*, false>* , Node_t* , const union NodeLink_t& );
	/* ../public/tier0/tslist.h:1138 */
	Node_t* End(const CTSQueue<CThreadedLogger::Buffer_t*, false>* );
	/* ../public/tier0/tslist.h:1140 */
	Node_t* InterlockedCompareExchangeNode(CTSQueue<CThreadedLogger::Buffer_t*, false>* , volatile Node_t** , Node_t* , Node_t* );
	/* ../public/tier0/tslist.h:1145 */
	bool InterlockedCompareExchangeNodeLink(CTSQueue<CThreadedLogger::Buffer_t*, false>* , volatile union NodeLink_t* , const union NodeLink_t& , const union NodeLink_t& );
	union NodeLink_t m_Head __attribute__((__aligned__(16))); /* 0 16 */
	union NodeLink_t m_Tail __attribute__((__aligned__(16))); /* 16 16 */
	CInterlockedInt m_Count __attribute__((__aligned__(4))); /* 32 4 */
	CTSListBase m_FreeNodes __attribute__((__aligned__(16))); /* 48 16 */
} __attribute__((__aligned__(16)));

// <0015D305> ../public/tier0/tslist.h:822
// member functions: 18
// member variables: 4
// class size: 64
class CTSQueue<DynamicVertexBufferHandle_t__*, false> {
	/* ../public/tier0/tslist.h:834 */
	union NodeLink_t {
		Value_t value; /* 0 16 */
		InterlockedPointerX2SizedInt_t valueInterlock; /* 0 16 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* tag__fprintf: volatile_type tag not supported! */;
	/* ../public/tier0/tslist.h:825 */
	struct Node_t {
		/* ../public/tier0/tslist.h:827 */
		void Node_t(Node_t* );
		/* ../public/tier0/tslist.h:828 */
		void Node_t(Node_t* , DynamicVertexBufferHandle_t__* const& );
		Node_t * pNext; /* 0 8 */
		DynamicVertexBufferHandle_t__ * elem; /* 8 8 */
	} __attribute__((__aligned__(16)));
	/* ../public/tier0/tslist.h:845 */
	void CTSQueue(CTSQueue<DynamicVertexBufferHandle_t__*, false>* );
	/* ../public/tier0/tslist.h:868 */
	void ~CTSQueue(CTSQueue<DynamicVertexBufferHandle_t__*, false>* );
	/* ../public/tier0/tslist.h:879 */
	void Purge(CTSQueue<DynamicVertexBufferHandle_t__*, false>* );
	/* ../public/tier0/tslist.h:902 */
	void RemoveAll(CTSQueue<DynamicVertexBufferHandle_t__*, false>* );
	/* ../public/tier0/tslist.h:913 */
	bool ValidateQueue(CTSQueue<DynamicVertexBufferHandle_t__*, false>* );
	/* ../public/tier0/tslist.h:962 */
	Node_t* Push(CTSQueue<DynamicVertexBufferHandle_t__*, false>* , Node_t* );
	/* ../public/tier0/tslist.h:998 */
	Node_t* Pop(CTSQueue<DynamicVertexBufferHandle_t__*, false>* );
	/* ../public/tier0/tslist.h:1077 */
	void FreeNode(CTSQueue<DynamicVertexBufferHandle_t__*, false>* , Node_t* );
	/* ../public/tier0/tslist.h:1083 */
	void PushItem(CTSQueue<DynamicVertexBufferHandle_t__*, false>* , DynamicVertexBufferHandle_t__* const& );
	/* ../public/tier0/tslist.h:1094 */
	bool PopItem(CTSQueue<DynamicVertexBufferHandle_t__*, false>* , DynamicVertexBufferHandle_t__** );
	/* ../public/tier0/tslist.h:1107 */
	int Count(const CTSQueue<DynamicVertexBufferHandle_t__*, false>* );
private:
	/* ../public/tier0/tslist.h:1128 */
	void FinishPush(CTSQueue<DynamicVertexBufferHandle_t__*, false>* , Node_t* , const union NodeLink_t& );
	/* ../public/tier0/tslist.h:1138 */
	Node_t* End(const CTSQueue<DynamicVertexBufferHandle_t__*, false>* );
	/* ../public/tier0/tslist.h:1140 */
	Node_t* InterlockedCompareExchangeNode(CTSQueue<DynamicVertexBufferHandle_t__*, false>* , volatile Node_t** , Node_t* , Node_t* );
	/* ../public/tier0/tslist.h:1145 */
	bool InterlockedCompareExchangeNodeLink(CTSQueue<DynamicVertexBufferHandle_t__*, false>* , volatile union NodeLink_t* , const union NodeLink_t& , const union NodeLink_t& );
	union NodeLink_t m_Head __attribute__((__aligned__(16))); /* 0 16 */
	union NodeLink_t m_Tail __attribute__((__aligned__(16))); /* 16 16 */
	CInterlockedInt m_Count __attribute__((__aligned__(4))); /* 32 4 */
	CTSListBase m_FreeNodes __attribute__((__aligned__(16))); /* 48 16 */
} __attribute__((__aligned__(16)));

// <0015D6B2> ../public/tier0/tslist.h:822
// member functions: 33
// member variables: 4
// class size: 64
class CTSQueue<DynamicIndexBufferHandle_t__*, false> {
	/* ../public/tier0/tslist.h:834 */
	union NodeLink_t {
		Value_t value; /* 0 16 */
		InterlockedPointerX2SizedInt_t valueInterlock; /* 0 16 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* tag__fprintf: volatile_type tag not supported! */;
	/* ../public/tier0/tslist.h:825 */
	struct Node_t {
		/* ../public/tier0/tslist.h:827 */
		void Node_t(Node_t* );
		/* ../public/tier0/tslist.h:828 */
		void Node_t(Node_t* , DynamicIndexBufferHandle_t__* const& );
		Node_t * pNext; /* 0 8 */
		DynamicIndexBufferHandle_t__ * elem; /* 8 8 */
	} __attribute__((__aligned__(16)));
	/* ../public/tier0/tslist.h:845 */
	void CTSQueue(CTSQueue<DynamicIndexBufferHandle_t__*, false>* );
	/* ../public/tier0/tslist.h:868 */
	void ~CTSQueue(CTSQueue<DynamicIndexBufferHandle_t__*, false>* );
	/* ../public/tier0/tslist.h:879 */
	void Purge(CTSQueue<DynamicIndexBufferHandle_t__*, false>* );
	/* ../public/tier0/tslist.h:902 */
	void RemoveAll(CTSQueue<DynamicIndexBufferHandle_t__*, false>* );
	/* ../public/tier0/tslist.h:913 */
	bool ValidateQueue(CTSQueue<DynamicIndexBufferHandle_t__*, false>* );
	/* ../public/tier0/tslist.h:962 */
	Node_t* Push(CTSQueue<DynamicIndexBufferHandle_t__*, false>* , Node_t* );
	/* ../public/tier0/tslist.h:998 */
	Node_t* Pop(CTSQueue<DynamicIndexBufferHandle_t__*, false>* );
	/* ../public/tier0/tslist.h:1077 */
	void FreeNode(CTSQueue<DynamicIndexBufferHandle_t__*, false>* , Node_t* );
	/* ../public/tier0/tslist.h:1083 */
	void PushItem(CTSQueue<DynamicIndexBufferHandle_t__*, false>* , DynamicIndexBufferHandle_t__* const& );
	/* ../public/tier0/tslist.h:1094 */
	bool PopItem(CTSQueue<DynamicIndexBufferHandle_t__*, false>* , DynamicIndexBufferHandle_t__** );
	/* ../public/tier0/tslist.h:1107 */
	int Count(const CTSQueue<DynamicIndexBufferHandle_t__*, false>* );
private:
	/* ../public/tier0/tslist.h:1128 */
	void FinishPush(CTSQueue<DynamicIndexBufferHandle_t__*, false>* , Node_t* , const union NodeLink_t& );
	/* ../public/tier0/tslist.h:1138 */
	Node_t* End(const CTSQueue<DynamicIndexBufferHandle_t__*, false>* );
	/* ../public/tier0/tslist.h:1140 */
	Node_t* InterlockedCompareExchangeNode(CTSQueue<DynamicIndexBufferHandle_t__*, false>* , volatile Node_t** , Node_t* , Node_t* );
	/* ../public/tier0/tslist.h:1145 */
	bool InterlockedCompareExchangeNodeLink(CTSQueue<DynamicIndexBufferHandle_t__*, false>* , volatile union NodeLink_t* , const union NodeLink_t& , const union NodeLink_t& );
	union NodeLink_t m_Head __attribute__((__aligned__(16))); /* 0 16 */
	union NodeLink_t m_Tail __attribute__((__aligned__(16))); /* 16 16 */
	CInterlockedInt m_Count __attribute__((__aligned__(4))); /* 32 4 */
	CTSListBase m_FreeNodes __attribute__((__aligned__(16))); /* 48 16 */
	void CTSQueue(class CTSQueue<DynamicIndexBufferHandle_t__*, false> *); /* linkage=_ZN8CTSQueueIP28DynamicIndexBufferHandle_t__Lb0EEC4Ev */
	void ~CTSQueue(class CTSQueue<DynamicIndexBufferHandle_t__*, false> *); /* linkage=_ZN8CTSQueueIP28DynamicIndexBufferHandle_t__Lb0EED4Ev */
	void Purge(class CTSQueue<DynamicIndexBufferHandle_t__*, false> *); /* linkage=_ZN8CTSQueueIP28DynamicIndexBufferHandle_t__Lb0EE5PurgeEv */
	void RemoveAll(class CTSQueue<DynamicIndexBufferHandle_t__*, false> *); /* linkage=_ZN8CTSQueueIP28DynamicIndexBufferHandle_t__Lb0EE9RemoveAllEv */
	bool ValidateQueue(class CTSQueue<DynamicIndexBufferHandle_t__*, false> *); /* linkage=_ZN8CTSQueueIP28DynamicIndexBufferHandle_t__Lb0EE13ValidateQueueEv */
	class Node_t * Push(class CTSQueue<DynamicIndexBufferHandle_t__*, false> *, class Node_t *); /* linkage=_ZN8CTSQueueIP28DynamicIndexBufferHandle_t__Lb0EE4PushEPNS2_6Node_tE */
	class Node_t * Pop(class CTSQueue<DynamicIndexBufferHandle_t__*, false> *); /* linkage=_ZN8CTSQueueIP28DynamicIndexBufferHandle_t__Lb0EE3PopEv */
	void FreeNode(class CTSQueue<DynamicIndexBufferHandle_t__*, false> *, class Node_t *); /* linkage=_ZN8CTSQueueIP28DynamicIndexBufferHandle_t__Lb0EE8FreeNodeEPNS2_6Node_tE */
	void PushItem(class CTSQueue<DynamicIndexBufferHandle_t__*, false> *, class DynamicIndexBufferHandle_t__ * const &); /* linkage=_ZN8CTSQueueIP28DynamicIndexBufferHandle_t__Lb0EE8PushItemERKS1_ */
	bool PopItem(class CTSQueue<DynamicIndexBufferHandle_t__*, false> *, class DynamicIndexBufferHandle_t__ * *); /* linkage=_ZN8CTSQueueIP28DynamicIndexBufferHandle_t__Lb0EE7PopItemEPS1_ */
	int Count(const class CTSQueue<DynamicIndexBufferHandle_t__*, false>  *); /* linkage=_ZNK8CTSQueueIP28DynamicIndexBufferHandle_t__Lb0EE5CountEv */
	void FinishPush(class CTSQueue<DynamicIndexBufferHandle_t__*, false> *, class Node_t *, const union NodeLink_t  &); /* linkage=_ZN8CTSQueueIP28DynamicIndexBufferHandle_t__Lb0EE10FinishPushEPNS2_6Node_tERKNS2_10NodeLink_tE */
	class Node_t * End(const class CTSQueue<DynamicIndexBufferHandle_t__*, false>  *); /* linkage=_ZNK8CTSQueueIP28DynamicIndexBufferHandle_t__Lb0EE3EndEv */
	class Node_t * InterlockedCompareExchangeNode(class CTSQueue<DynamicIndexBufferHandle_t__*, false> *, volatile class Node_t *  *, class Node_t *, class Node_t *); /* linkage=_ZN8CTSQueueIP28DynamicIndexBufferHandle_t__Lb0EE30InterlockedCompareExchangeNodeEPVPNS2_6Node_tES4_S4_ */
	bool InterlockedCompareExchangeNodeLink(class CTSQueue<DynamicIndexBufferHandle_t__*, false> *, volatile union NodeLink_t  *, const union NodeLink_t  &, const union NodeLink_t  &); /* linkage=_ZN8CTSQueueIP28DynamicIndexBufferHandle_t__Lb0EE34InterlockedCompareExchangeNodeLinkEPVNS2_10NodeLink_tERKS3_S7_ */
} __attribute__((__aligned__(16)));

// <0022511D> ../public/tier0/tslist.h:822
// member functions: 33
// member variables: 4
// class size: 64
class CTSQueue<CCommandStream*, false> {
	/* ../public/tier0/tslist.h:834 */
	union NodeLink_t {
		Value_t value; /* 0 16 */
		InterlockedPointerX2SizedInt_t valueInterlock; /* 0 16 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* tag__fprintf: volatile_type tag not supported! */;
	/* ../public/tier0/tslist.h:825 */
	struct Node_t {
		/* ../public/tier0/tslist.h:827 */
		void Node_t(Node_t* );
		/* ../public/tier0/tslist.h:828 */
		void Node_t(Node_t* , CCommandStream* const& );
		Node_t * pNext; /* 0 8 */
		CCommandStream * elem; /* 8 8 */
	} __attribute__((__aligned__(16)));
	/* ../public/tier0/tslist.h:845 */
	void CTSQueue(CTSQueue<CCommandStream*, false>* );
	/* ../public/tier0/tslist.h:868 */
	void ~CTSQueue(CTSQueue<CCommandStream*, false>* );
	/* ../public/tier0/tslist.h:879 */
	void Purge(CTSQueue<CCommandStream*, false>* );
	/* ../public/tier0/tslist.h:902 */
	void RemoveAll(CTSQueue<CCommandStream*, false>* );
	/* ../public/tier0/tslist.h:913 */
	bool ValidateQueue(CTSQueue<CCommandStream*, false>* );
	/* ../public/tier0/tslist.h:962 */
	Node_t* Push(CTSQueue<CCommandStream*, false>* , Node_t* );
	/* ../public/tier0/tslist.h:998 */
	Node_t* Pop(CTSQueue<CCommandStream*, false>* );
	/* ../public/tier0/tslist.h:1077 */
	void FreeNode(CTSQueue<CCommandStream*, false>* , Node_t* );
	/* ../public/tier0/tslist.h:1083 */
	void PushItem(CTSQueue<CCommandStream*, false>* , CCommandStream* const& );
	/* ../public/tier0/tslist.h:1094 */
	bool PopItem(CTSQueue<CCommandStream*, false>* , CCommandStream** );
	/* ../public/tier0/tslist.h:1107 */
	int Count(const CTSQueue<CCommandStream*, false>* );
private:
	/* ../public/tier0/tslist.h:1128 */
	void FinishPush(CTSQueue<CCommandStream*, false>* , Node_t* , const union NodeLink_t& );
	/* ../public/tier0/tslist.h:1138 */
	Node_t* End(const CTSQueue<CCommandStream*, false>* );
	/* ../public/tier0/tslist.h:1140 */
	Node_t* InterlockedCompareExchangeNode(CTSQueue<CCommandStream*, false>* , volatile Node_t** , Node_t* , Node_t* );
	/* ../public/tier0/tslist.h:1145 */
	bool InterlockedCompareExchangeNodeLink(CTSQueue<CCommandStream*, false>* , volatile union NodeLink_t* , const union NodeLink_t& , const union NodeLink_t& );
	union NodeLink_t m_Head __attribute__((__aligned__(16))); /* 0 16 */
	union NodeLink_t m_Tail __attribute__((__aligned__(16))); /* 16 16 */
	CInterlockedInt m_Count __attribute__((__aligned__(4))); /* 32 4 */
	CTSListBase m_FreeNodes __attribute__((__aligned__(16))); /* 48 16 */
	void CTSQueue(class CTSQueue<CCommandStream*, false> *); /* linkage=_ZN8CTSQueueIP14CCommandStreamLb0EEC4Ev */
	void ~CTSQueue(class CTSQueue<CCommandStream*, false> *); /* linkage=_ZN8CTSQueueIP14CCommandStreamLb0EED4Ev */
	void Purge(class CTSQueue<CCommandStream*, false> *); /* linkage=_ZN8CTSQueueIP14CCommandStreamLb0EE5PurgeEv */
	void RemoveAll(class CTSQueue<CCommandStream*, false> *); /* linkage=_ZN8CTSQueueIP14CCommandStreamLb0EE9RemoveAllEv */
	bool ValidateQueue(class CTSQueue<CCommandStream*, false> *); /* linkage=_ZN8CTSQueueIP14CCommandStreamLb0EE13ValidateQueueEv */
	class Node_t * Push(class CTSQueue<CCommandStream*, false> *, class Node_t *); /* linkage=_ZN8CTSQueueIP14CCommandStreamLb0EE4PushEPNS2_6Node_tE */
	class Node_t * Pop(class CTSQueue<CCommandStream*, false> *); /* linkage=_ZN8CTSQueueIP14CCommandStreamLb0EE3PopEv */
	void FreeNode(class CTSQueue<CCommandStream*, false> *, class Node_t *); /* linkage=_ZN8CTSQueueIP14CCommandStreamLb0EE8FreeNodeEPNS2_6Node_tE */
	void PushItem(class CTSQueue<CCommandStream*, false> *, class CCommandStream * const &); /* linkage=_ZN8CTSQueueIP14CCommandStreamLb0EE8PushItemERKS1_ */
	bool PopItem(class CTSQueue<CCommandStream*, false> *, class CCommandStream * *); /* linkage=_ZN8CTSQueueIP14CCommandStreamLb0EE7PopItemEPS1_ */
	int Count(const class CTSQueue<CCommandStream*, false>  *); /* linkage=_ZNK8CTSQueueIP14CCommandStreamLb0EE5CountEv */
	void FinishPush(class CTSQueue<CCommandStream*, false> *, class Node_t *, const union NodeLink_t  &); /* linkage=_ZN8CTSQueueIP14CCommandStreamLb0EE10FinishPushEPNS2_6Node_tERKNS2_10NodeLink_tE */
	class Node_t * End(const class CTSQueue<CCommandStream*, false>  *); /* linkage=_ZNK8CTSQueueIP14CCommandStreamLb0EE3EndEv */
	class Node_t * InterlockedCompareExchangeNode(class CTSQueue<CCommandStream*, false> *, volatile class Node_t *  *, class Node_t *, class Node_t *); /* linkage=_ZN8CTSQueueIP14CCommandStreamLb0EE30InterlockedCompareExchangeNodeEPVPNS2_6Node_tES4_S4_ */
	bool InterlockedCompareExchangeNodeLink(class CTSQueue<CCommandStream*, false> *, volatile union NodeLink_t  *, const union NodeLink_t  &, const union NodeLink_t  &); /* linkage=_ZN8CTSQueueIP14CCommandStreamLb0EE34InterlockedCompareExchangeNodeLinkEPVNS2_10NodeLink_tERKS3_S7_ */
} __attribute__((__aligned__(16)));

// <00470D64> ../public/tier0/tslist.h:822
// member functions: 15
// member variables: 4
// class size: 64
class CTSQueue<VkCommandBuffer_T*, false> {
	/* ../public/tier0/tslist.h:834 */
	union NodeLink_t {
		Value_t value; /* 0 16 */
		InterlockedPointerX2SizedInt_t valueInterlock; /* 0 16 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* tag__fprintf: volatile_type tag not supported! */;
	struct Node_t {
	};
	/* ../public/tier0/tslist.h:845 */
	void CTSQueue(CTSQueue<VkCommandBuffer_T*, false>* );
	/* ../public/tier0/tslist.h:868 */
	void ~CTSQueue(CTSQueue<VkCommandBuffer_T*, false>* );
	/* ../public/tier0/tslist.h:879 */
	void Purge(CTSQueue<VkCommandBuffer_T*, false>* );
	/* ../public/tier0/tslist.h:902 */
	void RemoveAll(CTSQueue<VkCommandBuffer_T*, false>* );
	/* ../public/tier0/tslist.h:913 */
	bool ValidateQueue(CTSQueue<VkCommandBuffer_T*, false>* );
	/* ../public/tier0/tslist.h:962 */
	Node_t* Push(CTSQueue<VkCommandBuffer_T*, false>* , Node_t* );
	/* ../public/tier0/tslist.h:998 */
	Node_t* Pop(CTSQueue<VkCommandBuffer_T*, false>* );
	/* ../public/tier0/tslist.h:1077 */
	void FreeNode(CTSQueue<VkCommandBuffer_T*, false>* , Node_t* );
	/* ../public/tier0/tslist.h:1083 */
	void PushItem(CTSQueue<VkCommandBuffer_T*, false>* , VkCommandBuffer_T* const& );
	/* ../public/tier0/tslist.h:1094 */
	bool PopItem(CTSQueue<VkCommandBuffer_T*, false>* , VkCommandBuffer_T** );
	/* ../public/tier0/tslist.h:1107 */
	int Count(const CTSQueue<VkCommandBuffer_T*, false>* );
private:
	/* ../public/tier0/tslist.h:1128 */
	void FinishPush(CTSQueue<VkCommandBuffer_T*, false>* , Node_t* , const union NodeLink_t& );
	/* ../public/tier0/tslist.h:1138 */
	Node_t* End(const CTSQueue<VkCommandBuffer_T*, false>* );
	/* ../public/tier0/tslist.h:1140 */
	Node_t* InterlockedCompareExchangeNode(CTSQueue<VkCommandBuffer_T*, false>* , volatile Node_t** , Node_t* , Node_t* );
	/* ../public/tier0/tslist.h:1145 */
	bool InterlockedCompareExchangeNodeLink(CTSQueue<VkCommandBuffer_T*, false>* , volatile union NodeLink_t* , const union NodeLink_t& , const union NodeLink_t& );
	union NodeLink_t m_Head __attribute__((__aligned__(16))); /* 0 16 */
	union NodeLink_t m_Tail __attribute__((__aligned__(16))); /* 16 16 */
	CInterlockedInt m_Count __attribute__((__aligned__(4))); /* 32 4 */
	CTSListBase m_FreeNodes __attribute__((__aligned__(16))); /* 48 16 */
} __attribute__((__aligned__(16)));

// <0056DCB9> ../public/tier0/tslist.h:822
// member functions: 18
// member variables: 4
// class size: 64
class CTSQueue<VkCommandBuffer_T*, false> {
	/* ../public/tier0/tslist.h:834 */
	union NodeLink_t {
		Value_t value; /* 0 16 */
		InterlockedPointerX2SizedInt_t valueInterlock; /* 0 16 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* tag__fprintf: volatile_type tag not supported! */;
	/* ../public/tier0/tslist.h:825 */
	struct Node_t {
		/* ../public/tier0/tslist.h:827 */
		void Node_t(Node_t* );
		/* ../public/tier0/tslist.h:828 */
		void Node_t(Node_t* , VkCommandBuffer_T* const& );
		Node_t * pNext; /* 0 8 */
		VkCommandBuffer_T * elem; /* 8 8 */
	} __attribute__((__aligned__(16)));
	/* ../public/tier0/tslist.h:845 */
	void CTSQueue(CTSQueue<VkCommandBuffer_T*, false>* );
	/* ../public/tier0/tslist.h:868 */
	void ~CTSQueue(CTSQueue<VkCommandBuffer_T*, false>* );
	/* ../public/tier0/tslist.h:879 */
	void Purge(CTSQueue<VkCommandBuffer_T*, false>* );
	/* ../public/tier0/tslist.h:902 */
	void RemoveAll(CTSQueue<VkCommandBuffer_T*, false>* );
	/* ../public/tier0/tslist.h:913 */
	bool ValidateQueue(CTSQueue<VkCommandBuffer_T*, false>* );
	/* ../public/tier0/tslist.h:962 */
	Node_t* Push(CTSQueue<VkCommandBuffer_T*, false>* , Node_t* );
	/* ../public/tier0/tslist.h:998 */
	Node_t* Pop(CTSQueue<VkCommandBuffer_T*, false>* );
	/* ../public/tier0/tslist.h:1077 */
	void FreeNode(CTSQueue<VkCommandBuffer_T*, false>* , Node_t* );
	/* ../public/tier0/tslist.h:1083 */
	void PushItem(CTSQueue<VkCommandBuffer_T*, false>* , VkCommandBuffer_T* const& );
	/* ../public/tier0/tslist.h:1094 */
	bool PopItem(CTSQueue<VkCommandBuffer_T*, false>* , VkCommandBuffer_T** );
	/* ../public/tier0/tslist.h:1107 */
	int Count(const CTSQueue<VkCommandBuffer_T*, false>* );
private:
	/* ../public/tier0/tslist.h:1128 */
	void FinishPush(CTSQueue<VkCommandBuffer_T*, false>* , Node_t* , const union NodeLink_t& );
	/* ../public/tier0/tslist.h:1138 */
	Node_t* End(const CTSQueue<VkCommandBuffer_T*, false>* );
	/* ../public/tier0/tslist.h:1140 */
	Node_t* InterlockedCompareExchangeNode(CTSQueue<VkCommandBuffer_T*, false>* , volatile Node_t** , Node_t* , Node_t* );
	/* ../public/tier0/tslist.h:1145 */
	bool InterlockedCompareExchangeNodeLink(CTSQueue<VkCommandBuffer_T*, false>* , volatile union NodeLink_t* , const union NodeLink_t& , const union NodeLink_t& );
	union NodeLink_t m_Head __attribute__((__aligned__(16))); /* 0 16 */
	union NodeLink_t m_Tail __attribute__((__aligned__(16))); /* 16 16 */
	CInterlockedInt m_Count __attribute__((__aligned__(4))); /* 32 4 */
	CTSListBase m_FreeNodes __attribute__((__aligned__(16))); /* 48 16 */
} __attribute__((__aligned__(16)));

// <0056F209> ../public/tier0/tslist.h:822
// member functions: 18
// member variables: 4
// class size: 64
class CTSQueue<CMemoryManagerVulkan::FencedResourceList_t, false> {
	/* ../public/tier0/tslist.h:834 */
	union NodeLink_t {
		Value_t value; /* 0 16 */
		InterlockedPointerX2SizedInt_t valueInterlock; /* 0 16 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* tag__fprintf: volatile_type tag not supported! */;
	/* ../public/tier0/tslist.h:825 */
	struct Node_t {
		/* ../public/tier0/tslist.h:827 */
		void Node_t(Node_t* );
		/* ../public/tier0/tslist.h:828 */
		void Node_t(Node_t* , const FencedResourceList_t& );
		Node_t * pNext; /* 0 8 */
		FencedResourceList_t elem; /* 8 24 */
	} __attribute__((__aligned__(16)));
	/* ../public/tier0/tslist.h:845 */
	void CTSQueue(CTSQueue<CMemoryManagerVulkan::FencedResourceList_t, false>* );
	/* ../public/tier0/tslist.h:868 */
	void ~CTSQueue(CTSQueue<CMemoryManagerVulkan::FencedResourceList_t, false>* );
	/* ../public/tier0/tslist.h:879 */
	void Purge(CTSQueue<CMemoryManagerVulkan::FencedResourceList_t, false>* );
	/* ../public/tier0/tslist.h:902 */
	void RemoveAll(CTSQueue<CMemoryManagerVulkan::FencedResourceList_t, false>* );
	/* ../public/tier0/tslist.h:913 */
	bool ValidateQueue(CTSQueue<CMemoryManagerVulkan::FencedResourceList_t, false>* );
	/* ../public/tier0/tslist.h:962 */
	Node_t* Push(CTSQueue<CMemoryManagerVulkan::FencedResourceList_t, false>* , Node_t* );
	/* ../public/tier0/tslist.h:998 */
	Node_t* Pop(CTSQueue<CMemoryManagerVulkan::FencedResourceList_t, false>* );
	/* ../public/tier0/tslist.h:1077 */
	void FreeNode(CTSQueue<CMemoryManagerVulkan::FencedResourceList_t, false>* , Node_t* );
	/* ../public/tier0/tslist.h:1083 */
	void PushItem(CTSQueue<CMemoryManagerVulkan::FencedResourceList_t, false>* , const FencedResourceList_t& );
	/* ../public/tier0/tslist.h:1094 */
	bool PopItem(CTSQueue<CMemoryManagerVulkan::FencedResourceList_t, false>* , FencedResourceList_t* );
	/* ../public/tier0/tslist.h:1107 */
	int Count(const CTSQueue<CMemoryManagerVulkan::FencedResourceList_t, false>* );
private:
	/* ../public/tier0/tslist.h:1128 */
	void FinishPush(CTSQueue<CMemoryManagerVulkan::FencedResourceList_t, false>* , Node_t* , const union NodeLink_t& );
	/* ../public/tier0/tslist.h:1138 */
	Node_t* End(const CTSQueue<CMemoryManagerVulkan::FencedResourceList_t, false>* );
	/* ../public/tier0/tslist.h:1140 */
	Node_t* InterlockedCompareExchangeNode(CTSQueue<CMemoryManagerVulkan::FencedResourceList_t, false>* , volatile Node_t** , Node_t* , Node_t* );
	/* ../public/tier0/tslist.h:1145 */
	bool InterlockedCompareExchangeNodeLink(CTSQueue<CMemoryManagerVulkan::FencedResourceList_t, false>* , volatile union NodeLink_t* , const union NodeLink_t& , const union NodeLink_t& );
	union NodeLink_t m_Head __attribute__((__aligned__(16))); /* 0 16 */
	union NodeLink_t m_Tail __attribute__((__aligned__(16))); /* 16 16 */
	CInterlockedInt m_Count __attribute__((__aligned__(4))); /* 32 4 */
	CTSListBase m_FreeNodes __attribute__((__aligned__(16))); /* 48 16 */
} __attribute__((__aligned__(16)));

// <0062EE6B> ../public/tier0/tslist.h:822
// member functions: 18
// member variables: 4
// class size: 64
class CTSQueue<CFossilizeStateCreator::RegisteredShader_t, false> {
	/* ../public/tier0/tslist.h:834 */
	union NodeLink_t {
		Value_t value; /* 0 16 */
		InterlockedPointerX2SizedInt_t valueInterlock; /* 0 16 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* tag__fprintf: volatile_type tag not supported! */;
	/* ../public/tier0/tslist.h:825 */
	struct Node_t {
		/* ../public/tier0/tslist.h:827 */
		void Node_t(Node_t* );
		/* ../public/tier0/tslist.h:828 */
		void Node_t(Node_t* , const RegisteredShader_t& );
		Node_t * pNext; /* 0 8 */
		RegisteredShader_t elem; /* 8 24 */
	} __attribute__((__aligned__(16)));
	/* ../public/tier0/tslist.h:845 */
	void CTSQueue(CTSQueue<CFossilizeStateCreator::RegisteredShader_t, false>* );
	/* ../public/tier0/tslist.h:868 */
	void ~CTSQueue(CTSQueue<CFossilizeStateCreator::RegisteredShader_t, false>* );
	/* ../public/tier0/tslist.h:879 */
	void Purge(CTSQueue<CFossilizeStateCreator::RegisteredShader_t, false>* );
	/* ../public/tier0/tslist.h:902 */
	void RemoveAll(CTSQueue<CFossilizeStateCreator::RegisteredShader_t, false>* );
	/* ../public/tier0/tslist.h:913 */
	bool ValidateQueue(CTSQueue<CFossilizeStateCreator::RegisteredShader_t, false>* );
	/* ../public/tier0/tslist.h:962 */
	Node_t* Push(CTSQueue<CFossilizeStateCreator::RegisteredShader_t, false>* , Node_t* );
	/* ../public/tier0/tslist.h:998 */
	Node_t* Pop(CTSQueue<CFossilizeStateCreator::RegisteredShader_t, false>* );
	/* ../public/tier0/tslist.h:1077 */
	void FreeNode(CTSQueue<CFossilizeStateCreator::RegisteredShader_t, false>* , Node_t* );
	/* ../public/tier0/tslist.h:1083 */
	void PushItem(CTSQueue<CFossilizeStateCreator::RegisteredShader_t, false>* , const RegisteredShader_t& );
	/* ../public/tier0/tslist.h:1094 */
	bool PopItem(CTSQueue<CFossilizeStateCreator::RegisteredShader_t, false>* , RegisteredShader_t* );
	/* ../public/tier0/tslist.h:1107 */
	int Count(const CTSQueue<CFossilizeStateCreator::RegisteredShader_t, false>* );
private:
	/* ../public/tier0/tslist.h:1128 */
	void FinishPush(CTSQueue<CFossilizeStateCreator::RegisteredShader_t, false>* , Node_t* , const union NodeLink_t& );
	/* ../public/tier0/tslist.h:1138 */
	Node_t* End(const CTSQueue<CFossilizeStateCreator::RegisteredShader_t, false>* );
	/* ../public/tier0/tslist.h:1140 */
	Node_t* InterlockedCompareExchangeNode(CTSQueue<CFossilizeStateCreator::RegisteredShader_t, false>* , volatile Node_t** , Node_t* , Node_t* );
	/* ../public/tier0/tslist.h:1145 */
	bool InterlockedCompareExchangeNodeLink(CTSQueue<CFossilizeStateCreator::RegisteredShader_t, false>* , volatile union NodeLink_t* , const union NodeLink_t& , const union NodeLink_t& );
	union NodeLink_t m_Head __attribute__((__aligned__(16))); /* 0 16 */
	union NodeLink_t m_Tail __attribute__((__aligned__(16))); /* 16 16 */
	CInterlockedInt m_Count __attribute__((__aligned__(4))); /* 32 4 */
	CTSListBase m_FreeNodes __attribute__((__aligned__(16))); /* 48 16 */
} __attribute__((__aligned__(16)));

// <006C620B> ../public/tier0/tslist.h:822
// member functions: 18
// member variables: 4
// class size: 64
class CTSQueue<VkShaderModule_T*, false> {
	/* ../public/tier0/tslist.h:834 */
	union NodeLink_t {
		Value_t value; /* 0 16 */
		InterlockedPointerX2SizedInt_t valueInterlock; /* 0 16 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* tag__fprintf: volatile_type tag not supported! */;
	/* ../public/tier0/tslist.h:825 */
	struct Node_t {
		/* ../public/tier0/tslist.h:827 */
		void Node_t(Node_t* );
		/* ../public/tier0/tslist.h:828 */
		void Node_t(Node_t* , VkShaderModule_T* const& );
		Node_t * pNext; /* 0 8 */
		VkShaderModule_T * elem; /* 8 8 */
	} __attribute__((__aligned__(16)));
	/* ../public/tier0/tslist.h:845 */
	void CTSQueue(CTSQueue<VkShaderModule_T*, false>* );
	/* ../public/tier0/tslist.h:868 */
	void ~CTSQueue(CTSQueue<VkShaderModule_T*, false>* );
	/* ../public/tier0/tslist.h:879 */
	void Purge(CTSQueue<VkShaderModule_T*, false>* );
	/* ../public/tier0/tslist.h:902 */
	void RemoveAll(CTSQueue<VkShaderModule_T*, false>* );
	/* ../public/tier0/tslist.h:913 */
	bool ValidateQueue(CTSQueue<VkShaderModule_T*, false>* );
	/* ../public/tier0/tslist.h:962 */
	Node_t* Push(CTSQueue<VkShaderModule_T*, false>* , Node_t* );
	/* ../public/tier0/tslist.h:998 */
	Node_t* Pop(CTSQueue<VkShaderModule_T*, false>* );
	/* ../public/tier0/tslist.h:1077 */
	void FreeNode(CTSQueue<VkShaderModule_T*, false>* , Node_t* );
	/* ../public/tier0/tslist.h:1083 */
	void PushItem(CTSQueue<VkShaderModule_T*, false>* , VkShaderModule_T* const& );
	/* ../public/tier0/tslist.h:1094 */
	bool PopItem(CTSQueue<VkShaderModule_T*, false>* , VkShaderModule_T** );
	/* ../public/tier0/tslist.h:1107 */
	int Count(const CTSQueue<VkShaderModule_T*, false>* );
private:
	/* ../public/tier0/tslist.h:1128 */
	void FinishPush(CTSQueue<VkShaderModule_T*, false>* , Node_t* , const union NodeLink_t& );
	/* ../public/tier0/tslist.h:1138 */
	Node_t* End(const CTSQueue<VkShaderModule_T*, false>* );
	/* ../public/tier0/tslist.h:1140 */
	Node_t* InterlockedCompareExchangeNode(CTSQueue<VkShaderModule_T*, false>* , volatile Node_t** , Node_t* , Node_t* );
	/* ../public/tier0/tslist.h:1145 */
	bool InterlockedCompareExchangeNodeLink(CTSQueue<VkShaderModule_T*, false>* , volatile union NodeLink_t* , const union NodeLink_t& , const union NodeLink_t& );
	union NodeLink_t m_Head __attribute__((__aligned__(16))); /* 0 16 */
	union NodeLink_t m_Tail __attribute__((__aligned__(16))); /* 16 16 */
	CInterlockedInt m_Count __attribute__((__aligned__(4))); /* 32 4 */
	CTSListBase m_FreeNodes __attribute__((__aligned__(16))); /* 48 16 */
} __attribute__((__aligned__(16)));

// <006C65B9> ../public/tier0/tslist.h:822
// member functions: 18
// member variables: 4
// class size: 64
class CTSQueue<PipelineObjectVulkan_t*, false> {
	/* ../public/tier0/tslist.h:834 */
	union NodeLink_t {
		Value_t value; /* 0 16 */
		InterlockedPointerX2SizedInt_t valueInterlock; /* 0 16 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* tag__fprintf: volatile_type tag not supported! */;
	/* ../public/tier0/tslist.h:825 */
	struct Node_t {
		/* ../public/tier0/tslist.h:827 */
		void Node_t(Node_t* );
		/* ../public/tier0/tslist.h:828 */
		void Node_t(Node_t* , PipelineObjectVulkan_t* const& );
		Node_t * pNext; /* 0 8 */
		PipelineObjectVulkan_t * elem; /* 8 8 */
	} __attribute__((__aligned__(16)));
	/* ../public/tier0/tslist.h:845 */
	void CTSQueue(CTSQueue<PipelineObjectVulkan_t*, false>* );
	/* ../public/tier0/tslist.h:868 */
	void ~CTSQueue(CTSQueue<PipelineObjectVulkan_t*, false>* );
	/* ../public/tier0/tslist.h:879 */
	void Purge(CTSQueue<PipelineObjectVulkan_t*, false>* );
	/* ../public/tier0/tslist.h:902 */
	void RemoveAll(CTSQueue<PipelineObjectVulkan_t*, false>* );
	/* ../public/tier0/tslist.h:913 */
	bool ValidateQueue(CTSQueue<PipelineObjectVulkan_t*, false>* );
	/* ../public/tier0/tslist.h:962 */
	Node_t* Push(CTSQueue<PipelineObjectVulkan_t*, false>* , Node_t* );
	/* ../public/tier0/tslist.h:998 */
	Node_t* Pop(CTSQueue<PipelineObjectVulkan_t*, false>* );
	/* ../public/tier0/tslist.h:1077 */
	void FreeNode(CTSQueue<PipelineObjectVulkan_t*, false>* , Node_t* );
	/* ../public/tier0/tslist.h:1083 */
	void PushItem(CTSQueue<PipelineObjectVulkan_t*, false>* , PipelineObjectVulkan_t* const& );
	/* ../public/tier0/tslist.h:1094 */
	bool PopItem(CTSQueue<PipelineObjectVulkan_t*, false>* , PipelineObjectVulkan_t** );
	/* ../public/tier0/tslist.h:1107 */
	int Count(const CTSQueue<PipelineObjectVulkan_t*, false>* );
private:
	/* ../public/tier0/tslist.h:1128 */
	void FinishPush(CTSQueue<PipelineObjectVulkan_t*, false>* , Node_t* , const union NodeLink_t& );
	/* ../public/tier0/tslist.h:1138 */
	Node_t* End(const CTSQueue<PipelineObjectVulkan_t*, false>* );
	/* ../public/tier0/tslist.h:1140 */
	Node_t* InterlockedCompareExchangeNode(CTSQueue<PipelineObjectVulkan_t*, false>* , volatile Node_t** , Node_t* , Node_t* );
	/* ../public/tier0/tslist.h:1145 */
	bool InterlockedCompareExchangeNodeLink(CTSQueue<PipelineObjectVulkan_t*, false>* , volatile union NodeLink_t* , const union NodeLink_t& , const union NodeLink_t& );
	union NodeLink_t m_Head __attribute__((__aligned__(16))); /* 0 16 */
	union NodeLink_t m_Tail __attribute__((__aligned__(16))); /* 16 16 */
	CInterlockedInt m_Count __attribute__((__aligned__(4))); /* 32 4 */
	CTSListBase m_FreeNodes __attribute__((__aligned__(16))); /* 48 16 */
} __attribute__((__aligned__(16)));

// <006C8487> ../public/tier0/tslist.h:822
// member functions: 18
// member variables: 4
// class size: 64
class CTSQueue<CPipelineManagerVulkan::LinkTimeOptimizedPipeline_t, false> {
	/* ../public/tier0/tslist.h:834 */
	union NodeLink_t {
		Value_t value; /* 0 16 */
		InterlockedPointerX2SizedInt_t valueInterlock; /* 0 16 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* tag__fprintf: volatile_type tag not supported! */;
	/* ../public/tier0/tslist.h:825 */
	struct Node_t {
		/* ../public/tier0/tslist.h:827 */
		void Node_t(Node_t* );
		/* ../public/tier0/tslist.h:828 */
		void Node_t(Node_t* , const LinkTimeOptimizedPipeline_t& );
		Node_t * pNext; /* 0 8 */
		LinkTimeOptimizedPipeline_t elem; /* 8 24 */
	} __attribute__((__aligned__(16)));
	/* ../public/tier0/tslist.h:845 */
	void CTSQueue(CTSQueue<CPipelineManagerVulkan::LinkTimeOptimizedPipeline_t, false>* );
	/* ../public/tier0/tslist.h:868 */
	void ~CTSQueue(CTSQueue<CPipelineManagerVulkan::LinkTimeOptimizedPipeline_t, false>* );
	/* ../public/tier0/tslist.h:879 */
	void Purge(CTSQueue<CPipelineManagerVulkan::LinkTimeOptimizedPipeline_t, false>* );
	/* ../public/tier0/tslist.h:902 */
	void RemoveAll(CTSQueue<CPipelineManagerVulkan::LinkTimeOptimizedPipeline_t, false>* );
	/* ../public/tier0/tslist.h:913 */
	bool ValidateQueue(CTSQueue<CPipelineManagerVulkan::LinkTimeOptimizedPipeline_t, false>* );
	/* ../public/tier0/tslist.h:962 */
	Node_t* Push(CTSQueue<CPipelineManagerVulkan::LinkTimeOptimizedPipeline_t, false>* , Node_t* );
	/* ../public/tier0/tslist.h:998 */
	Node_t* Pop(CTSQueue<CPipelineManagerVulkan::LinkTimeOptimizedPipeline_t, false>* );
	/* ../public/tier0/tslist.h:1077 */
	void FreeNode(CTSQueue<CPipelineManagerVulkan::LinkTimeOptimizedPipeline_t, false>* , Node_t* );
	/* ../public/tier0/tslist.h:1083 */
	void PushItem(CTSQueue<CPipelineManagerVulkan::LinkTimeOptimizedPipeline_t, false>* , const LinkTimeOptimizedPipeline_t& );
	/* ../public/tier0/tslist.h:1094 */
	bool PopItem(CTSQueue<CPipelineManagerVulkan::LinkTimeOptimizedPipeline_t, false>* , LinkTimeOptimizedPipeline_t* );
	/* ../public/tier0/tslist.h:1107 */
	int Count(const CTSQueue<CPipelineManagerVulkan::LinkTimeOptimizedPipeline_t, false>* );
private:
	/* ../public/tier0/tslist.h:1128 */
	void FinishPush(CTSQueue<CPipelineManagerVulkan::LinkTimeOptimizedPipeline_t, false>* , Node_t* , const union NodeLink_t& );
	/* ../public/tier0/tslist.h:1138 */
	Node_t* End(const CTSQueue<CPipelineManagerVulkan::LinkTimeOptimizedPipeline_t, false>* );
	/* ../public/tier0/tslist.h:1140 */
	Node_t* InterlockedCompareExchangeNode(CTSQueue<CPipelineManagerVulkan::LinkTimeOptimizedPipeline_t, false>* , volatile Node_t** , Node_t* , Node_t* );
	/* ../public/tier0/tslist.h:1145 */
	bool InterlockedCompareExchangeNodeLink(CTSQueue<CPipelineManagerVulkan::LinkTimeOptimizedPipeline_t, false>* , volatile union NodeLink_t* , const union NodeLink_t& , const union NodeLink_t& );
	union NodeLink_t m_Head __attribute__((__aligned__(16))); /* 0 16 */
	union NodeLink_t m_Tail __attribute__((__aligned__(16))); /* 16 16 */
	CInterlockedInt m_Count __attribute__((__aligned__(4))); /* 32 4 */
	CTSListBase m_FreeNodes __attribute__((__aligned__(16))); /* 48 16 */
} __attribute__((__aligned__(16)));

// <006C8835> ../public/tier0/tslist.h:822
// member functions: 18
// member variables: 4
// class size: 64
class CTSQueue<CPipelineManagerVulkan::PreWarmPipeline_t, false> {
	/* ../public/tier0/tslist.h:834 */
	union NodeLink_t {
		Value_t value; /* 0 16 */
		InterlockedPointerX2SizedInt_t valueInterlock; /* 0 16 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* tag__fprintf: volatile_type tag not supported! */;
	/* ../public/tier0/tslist.h:825 */
	struct Node_t {
		/* ../public/tier0/tslist.h:827 */
		void Node_t(Node_t* );
		/* ../public/tier0/tslist.h:828 */
		void Node_t(Node_t* , const PreWarmPipeline_t& );
		Node_t * pNext; /* 0 8 */
		PreWarmPipeline_t elem; /* 8 280 */
	} __attribute__((__aligned__(16)));
	/* ../public/tier0/tslist.h:845 */
	void CTSQueue(CTSQueue<CPipelineManagerVulkan::PreWarmPipeline_t, false>* );
	/* ../public/tier0/tslist.h:868 */
	void ~CTSQueue(CTSQueue<CPipelineManagerVulkan::PreWarmPipeline_t, false>* );
	/* ../public/tier0/tslist.h:879 */
	void Purge(CTSQueue<CPipelineManagerVulkan::PreWarmPipeline_t, false>* );
	/* ../public/tier0/tslist.h:902 */
	void RemoveAll(CTSQueue<CPipelineManagerVulkan::PreWarmPipeline_t, false>* );
	/* ../public/tier0/tslist.h:913 */
	bool ValidateQueue(CTSQueue<CPipelineManagerVulkan::PreWarmPipeline_t, false>* );
	/* ../public/tier0/tslist.h:962 */
	Node_t* Push(CTSQueue<CPipelineManagerVulkan::PreWarmPipeline_t, false>* , Node_t* );
	/* ../public/tier0/tslist.h:998 */
	Node_t* Pop(CTSQueue<CPipelineManagerVulkan::PreWarmPipeline_t, false>* );
	/* ../public/tier0/tslist.h:1077 */
	void FreeNode(CTSQueue<CPipelineManagerVulkan::PreWarmPipeline_t, false>* , Node_t* );
	/* ../public/tier0/tslist.h:1083 */
	void PushItem(CTSQueue<CPipelineManagerVulkan::PreWarmPipeline_t, false>* , const PreWarmPipeline_t& );
	/* ../public/tier0/tslist.h:1094 */
	bool PopItem(CTSQueue<CPipelineManagerVulkan::PreWarmPipeline_t, false>* , PreWarmPipeline_t* );
	/* ../public/tier0/tslist.h:1107 */
	int Count(const CTSQueue<CPipelineManagerVulkan::PreWarmPipeline_t, false>* );
private:
	/* ../public/tier0/tslist.h:1128 */
	void FinishPush(CTSQueue<CPipelineManagerVulkan::PreWarmPipeline_t, false>* , Node_t* , const union NodeLink_t& );
	/* ../public/tier0/tslist.h:1138 */
	Node_t* End(const CTSQueue<CPipelineManagerVulkan::PreWarmPipeline_t, false>* );
	/* ../public/tier0/tslist.h:1140 */
	Node_t* InterlockedCompareExchangeNode(CTSQueue<CPipelineManagerVulkan::PreWarmPipeline_t, false>* , volatile Node_t** , Node_t* , Node_t* );
	/* ../public/tier0/tslist.h:1145 */
	bool InterlockedCompareExchangeNodeLink(CTSQueue<CPipelineManagerVulkan::PreWarmPipeline_t, false>* , volatile union NodeLink_t* , const union NodeLink_t& , const union NodeLink_t& );
	union NodeLink_t m_Head __attribute__((__aligned__(16))); /* 0 16 */
	union NodeLink_t m_Tail __attribute__((__aligned__(16))); /* 16 16 */
	CInterlockedInt m_Count __attribute__((__aligned__(4))); /* 32 4 */
	CTSListBase m_FreeNodes __attribute__((__aligned__(16))); /* 48 16 */
} __attribute__((__aligned__(16)));

// <00B4F0A3> ../public/tier0/tslist.h:822
// member functions: 18
// member variables: 4
// class size: 64
class CTSQueue<VkFence_T*, false> {
	/* ../public/tier0/tslist.h:834 */
	union NodeLink_t {
		Value_t value; /* 0 16 */
		InterlockedPointerX2SizedInt_t valueInterlock; /* 0 16 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* tag__fprintf: volatile_type tag not supported! */;
	/* ../public/tier0/tslist.h:825 */
	struct Node_t {
		/* ../public/tier0/tslist.h:827 */
		void Node_t(Node_t* );
		/* ../public/tier0/tslist.h:828 */
		void Node_t(Node_t* , VkFence_T* const& );
		Node_t * pNext; /* 0 8 */
		VkFence_T * elem; /* 8 8 */
	} __attribute__((__aligned__(16)));
	/* ../public/tier0/tslist.h:845 */
	void CTSQueue(CTSQueue<VkFence_T*, false>* );
	/* ../public/tier0/tslist.h:868 */
	void ~CTSQueue(CTSQueue<VkFence_T*, false>* );
	/* ../public/tier0/tslist.h:879 */
	void Purge(CTSQueue<VkFence_T*, false>* );
	/* ../public/tier0/tslist.h:902 */
	void RemoveAll(CTSQueue<VkFence_T*, false>* );
	/* ../public/tier0/tslist.h:913 */
	bool ValidateQueue(CTSQueue<VkFence_T*, false>* );
	/* ../public/tier0/tslist.h:962 */
	Node_t* Push(CTSQueue<VkFence_T*, false>* , Node_t* );
	/* ../public/tier0/tslist.h:998 */
	Node_t* Pop(CTSQueue<VkFence_T*, false>* );
	/* ../public/tier0/tslist.h:1077 */
	void FreeNode(CTSQueue<VkFence_T*, false>* , Node_t* );
	/* ../public/tier0/tslist.h:1083 */
	void PushItem(CTSQueue<VkFence_T*, false>* , VkFence_T* const& );
	/* ../public/tier0/tslist.h:1094 */
	bool PopItem(CTSQueue<VkFence_T*, false>* , VkFence_T** );
	/* ../public/tier0/tslist.h:1107 */
	int Count(const CTSQueue<VkFence_T*, false>* );
private:
	/* ../public/tier0/tslist.h:1128 */
	void FinishPush(CTSQueue<VkFence_T*, false>* , Node_t* , const union NodeLink_t& );
	/* ../public/tier0/tslist.h:1138 */
	Node_t* End(const CTSQueue<VkFence_T*, false>* );
	/* ../public/tier0/tslist.h:1140 */
	Node_t* InterlockedCompareExchangeNode(CTSQueue<VkFence_T*, false>* , volatile Node_t** , Node_t* , Node_t* );
	/* ../public/tier0/tslist.h:1145 */
	bool InterlockedCompareExchangeNodeLink(CTSQueue<VkFence_T*, false>* , volatile union NodeLink_t* , const union NodeLink_t& , const union NodeLink_t& );
	union NodeLink_t m_Head __attribute__((__aligned__(16))); /* 0 16 */
	union NodeLink_t m_Tail __attribute__((__aligned__(16))); /* 16 16 */
	CInterlockedInt m_Count __attribute__((__aligned__(4))); /* 32 4 */
	CTSListBase m_FreeNodes __attribute__((__aligned__(16))); /* 48 16 */
} __attribute__((__aligned__(16)));

// <00121E9A> ../public/tier0/tslist.h:822
// member functions: 18
// member variables: 4
// class size: 64
class CTSQueue<CEventQueue::QueuedEvent_t, false> {
	/* ../public/tier0/tslist.h:834 */
	union NodeLink_t {
		Value_t value; /* 0 16 */
		InterlockedPointerX2SizedInt_t valueInterlock; /* 0 16 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* tag__fprintf: volatile_type tag not supported! */;
	/* ../public/tier0/tslist.h:825 */
	struct Node_t {
		/* ../public/tier0/tslist.h:827 */
		void Node_t(Node_t* );
		/* ../public/tier0/tslist.h:828 */
		void Node_t(Node_t* , const QueuedEvent_t& );
		Node_t * pNext; /* 0 8 */
		QueuedEvent_t elem; /* 8 24 */
	} __attribute__((__aligned__(16)));
	/* ../public/tier0/tslist.h:845 */
	void CTSQueue(CTSQueue<CEventQueue::QueuedEvent_t, false>* );
	/* ../public/tier0/tslist.h:868 */
	void ~CTSQueue(CTSQueue<CEventQueue::QueuedEvent_t, false>* );
	/* ../public/tier0/tslist.h:879 */
	void Purge(CTSQueue<CEventQueue::QueuedEvent_t, false>* );
	/* ../public/tier0/tslist.h:902 */
	void RemoveAll(CTSQueue<CEventQueue::QueuedEvent_t, false>* );
	/* ../public/tier0/tslist.h:913 */
	bool ValidateQueue(CTSQueue<CEventQueue::QueuedEvent_t, false>* );
	/* ../public/tier0/tslist.h:962 */
	Node_t* Push(CTSQueue<CEventQueue::QueuedEvent_t, false>* , Node_t* );
	/* ../public/tier0/tslist.h:998 */
	Node_t* Pop(CTSQueue<CEventQueue::QueuedEvent_t, false>* );
	/* ../public/tier0/tslist.h:1077 */
	void FreeNode(CTSQueue<CEventQueue::QueuedEvent_t, false>* , Node_t* );
	/* ../public/tier0/tslist.h:1083 */
	void PushItem(CTSQueue<CEventQueue::QueuedEvent_t, false>* , const QueuedEvent_t& );
	/* ../public/tier0/tslist.h:1094 */
	bool PopItem(CTSQueue<CEventQueue::QueuedEvent_t, false>* , QueuedEvent_t* );
	/* ../public/tier0/tslist.h:1107 */
	int Count(const CTSQueue<CEventQueue::QueuedEvent_t, false>* );
private:
	/* ../public/tier0/tslist.h:1128 */
	void FinishPush(CTSQueue<CEventQueue::QueuedEvent_t, false>* , Node_t* , const union NodeLink_t& );
	/* ../public/tier0/tslist.h:1138 */
	Node_t* End(const CTSQueue<CEventQueue::QueuedEvent_t, false>* );
	/* ../public/tier0/tslist.h:1140 */
	Node_t* InterlockedCompareExchangeNode(CTSQueue<CEventQueue::QueuedEvent_t, false>* , volatile Node_t** , Node_t* , Node_t* );
	/* ../public/tier0/tslist.h:1145 */
	bool InterlockedCompareExchangeNodeLink(CTSQueue<CEventQueue::QueuedEvent_t, false>* , volatile union NodeLink_t* , const union NodeLink_t& , const union NodeLink_t& );
	union NodeLink_t m_Head __attribute__((__aligned__(16))); /* 0 16 */
	union NodeLink_t m_Tail __attribute__((__aligned__(16))); /* 16 16 */
	CInterlockedInt m_Count __attribute__((__aligned__(4))); /* 32 4 */
	CTSListBase m_FreeNodes __attribute__((__aligned__(16))); /* 48 16 */
} __attribute__((__aligned__(16)));

// <004F251C> ../public/tier0/tslist.h:822
// member functions: 18
// member variables: 4
// class size: 64
class CTSQueue<int, true> {
	/* ../public/tier0/tslist.h:834 */
	union NodeLink_t {
		Value_t value; /* 0 16 */
		InterlockedPointerX2SizedInt_t valueInterlock; /* 0 16 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* tag__fprintf: volatile_type tag not supported! */;
	/* ../public/tier0/tslist.h:825 */
	struct Node_t {
		/* ../public/tier0/tslist.h:827 */
		void Node_t(Node_t* );
		/* ../public/tier0/tslist.h:828 */
		void Node_t(Node_t* , const int& );
		Node_t * pNext; /* 0 8 */
		int elem; /* 8 4 */
	} __attribute__((__aligned__(16)));
	/* ../public/tier0/tslist.h:845 */
	void CTSQueue(CTSQueue<int, true>* );
	/* ../public/tier0/tslist.h:868 */
	void ~CTSQueue(CTSQueue<int, true>* );
	/* ../public/tier0/tslist.h:879 */
	void Purge(CTSQueue<int, true>* );
	/* ../public/tier0/tslist.h:902 */
	void RemoveAll(CTSQueue<int, true>* );
	/* ../public/tier0/tslist.h:913 */
	bool ValidateQueue(CTSQueue<int, true>* );
	/* ../public/tier0/tslist.h:962 */
	Node_t* Push(CTSQueue<int, true>* , Node_t* );
	/* ../public/tier0/tslist.h:998 */
	Node_t* Pop(CTSQueue<int, true>* );
	/* ../public/tier0/tslist.h:1077 */
	void FreeNode(CTSQueue<int, true>* , Node_t* );
	/* ../public/tier0/tslist.h:1083 */
	void PushItem(CTSQueue<int, true>* , const int& );
	/* ../public/tier0/tslist.h:1094 */
	bool PopItem(CTSQueue<int, true>* , int* );
	/* ../public/tier0/tslist.h:1107 */
	int Count(const CTSQueue<int, true>* );
private:
	/* ../public/tier0/tslist.h:1128 */
	void FinishPush(CTSQueue<int, true>* , Node_t* , const union NodeLink_t& );
	/* ../public/tier0/tslist.h:1138 */
	Node_t* End(const CTSQueue<int, true>* );
	/* ../public/tier0/tslist.h:1140 */
	Node_t* InterlockedCompareExchangeNode(CTSQueue<int, true>* , volatile Node_t** , Node_t* , Node_t* );
	/* ../public/tier0/tslist.h:1145 */
	bool InterlockedCompareExchangeNodeLink(CTSQueue<int, true>* , volatile union NodeLink_t* , const union NodeLink_t& , const union NodeLink_t& );
	union NodeLink_t m_Head __attribute__((__aligned__(16))); /* 0 16 */
	union NodeLink_t m_Tail __attribute__((__aligned__(16))); /* 16 16 */
	CInterlockedInt m_Count __attribute__((__aligned__(4))); /* 32 4 */
	CTSListBase m_FreeNodes __attribute__((__aligned__(16))); /* 48 16 */
} __attribute__((__aligned__(16)));

// <0685C292> ../public/tier0/tslist.h:827
void Node_t::Node_t()
{
} /* size: 0 */

// <0685C279> ../public/tier0/tslist.h:827
inline void Node_t::Node_t()
{
} /* size: 0 */

// <0685CE8C> ../public/tier0/tslist.h:845
void CTSQueue<CThreadedLogger::Buffer_t::CTSQueue()
{
} /* size: 0 */

// <0685CE73> ../public/tier0/tslist.h:845
inline void CTSQueue<CThreadedLogger::Buffer_t::CTSQueue()
{
} /* size: 0 */

// <0631460E> ../public/tier0/tslist.h:845
void CTSQueue<std::function<void()>::CTSQueue()>*, false>* this)
{
} /* size: 0 */

// <063145F5> ../public/tier0/tslist.h:845
inline void CTSQueue<std::function<void()>::CTSQueue()>*, false>* this)
{
} /* size: 0 */

// <044A90B6> ../public/tier0/tslist.h:845
void CTSQueue<QueuedSweepNode_t, false>::CTSQueue()
{
} /* size: 0 */

// <044A909D> ../public/tier0/tslist.h:845
inline void CTSQueue<QueuedSweepNode_t, false>::CTSQueue()
{
} /* size: 0 */

// <044A9086> ../public/tier0/tslist.h:845
void CTSQueue<SweepGroup_t::CTSQueue()
{
} /* size: 0 */

// <044A906D> ../public/tier0/tslist.h:845
inline void CTSQueue<SweepGroup_t::CTSQueue()
{
} /* size: 0 */

// <02EABFC0> ../public/tier0/tslist.h:845
void CTSQueue<CSceneObject::CTSQueue()
{
} /* size: 0 */

// <02EABFA7> ../public/tier0/tslist.h:845
inline void CTSQueue<CSceneObject::CTSQueue()
{
} /* size: 0 */

// <024DE593> ../public/tier0/tslist.h:845
void CTSQueue<CAsyncWaveData::CTSQueue()
{
} /* size: 0 */

// <024DE57A> ../public/tier0/tslist.h:845
inline void CTSQueue<CAsyncWaveData::CTSQueue()
{
} /* size: 0 */

// <023596A3> ../public/tier0/tslist.h:845
void CTSQueue<CResourceManifest::CTSQueue()
{
} /* size: 0 */

// <0235968A> ../public/tier0/tslist.h:845
inline void CTSQueue<CResourceManifest::CTSQueue()
{
} /* size: 0 */

// <02359000> ../public/tier0/tslist.h:845
void CTSQueue<const ResourceBindingBase_t::CTSQueue()
{
} /* size: 0 */

// <02358FE7> ../public/tier0/tslist.h:845
inline void CTSQueue<const ResourceBindingBase_t::CTSQueue()
{
} /* size: 0 */

// <00B7590D> ../public/tier0/tslist.h:845
void CTSQueue<VkFence_T::CTSQueue()
{
} /* size: 0 */

// <00B758F4> ../public/tier0/tslist.h:845
inline void CTSQueue<VkFence_T::CTSQueue()
{
} /* size: 0 */

// <00710DD7> ../public/tier0/tslist.h:845
void CTSQueue<VkShaderModule_T::CTSQueue()
{
} /* size: 0 */

// <00710DBE> ../public/tier0/tslist.h:845
inline void CTSQueue<VkShaderModule_T::CTSQueue()
{
} /* size: 0 */

// <00710CF6> ../public/tier0/tslist.h:845
void CTSQueue<PipelineObjectVulkan_t::CTSQueue()
{
} /* size: 0 */

// <00710CDD> ../public/tier0/tslist.h:845
inline void CTSQueue<PipelineObjectVulkan_t::CTSQueue()
{
} /* size: 0 */

// <00710B33> ../public/tier0/tslist.h:845
void CTSQueue<CPipelineManagerVulkan::LinkTimeOptimizedPipeline_t, false>::CTSQueue()
{
} /* size: 0 */

// <00710B1A> ../public/tier0/tslist.h:845
inline void CTSQueue<CPipelineManagerVulkan::LinkTimeOptimizedPipeline_t, false>::CTSQueue()
{
} /* size: 0 */

// <00710A52> ../public/tier0/tslist.h:845
void CTSQueue<CPipelineManagerVulkan::PreWarmPipeline_t, false>::CTSQueue()
{
} /* size: 0 */

// <00710A39> ../public/tier0/tslist.h:845
inline void CTSQueue<CPipelineManagerVulkan::PreWarmPipeline_t, false>::CTSQueue()
{
} /* size: 0 */

// <0066AB9A> ../public/tier0/tslist.h:845
void CTSQueue<CFossilizeStateCreator::RegisteredShader_t, false>::CTSQueue()
{
} /* size: 0 */

// <0066AB81> ../public/tier0/tslist.h:845
inline void CTSQueue<CFossilizeStateCreator::RegisteredShader_t, false>::CTSQueue()
{
} /* size: 0 */

// <0058F7A0> ../public/tier0/tslist.h:845
void CTSQueue<CMemoryManagerVulkan::FencedResourceList_t, false>::CTSQueue()
{
} /* size: 0 */

// <0058F787> ../public/tier0/tslist.h:845
inline void CTSQueue<CMemoryManagerVulkan::FencedResourceList_t, false>::CTSQueue()
{
} /* size: 0 */

// <0058E0AE> ../public/tier0/tslist.h:845
void CTSQueue<VkCommandBuffer_T::CTSQueue()
{
} /* size: 0 */

// <0058E095> ../public/tier0/tslist.h:845
inline void CTSQueue<VkCommandBuffer_T::CTSQueue()
{
} /* size: 0 */

// <0022E6FB> ../public/tier0/tslist.h:845
void CTSQueue<CCommandStream::CTSQueue()
{
} /* size: 0 */

// <0022E6E2> ../public/tier0/tslist.h:845
inline void CTSQueue<CCommandStream::CTSQueue()
{
} /* size: 0 */

// <00178CC3> ../public/tier0/tslist.h:845
void CTSQueue<DynamicVertexBufferHandle_t__::CTSQueue()
{
} /* size: 0 */

// <00178CAA> ../public/tier0/tslist.h:845
inline void CTSQueue<DynamicVertexBufferHandle_t__::CTSQueue()
{
} /* size: 0 */

// <00178BE2> ../public/tier0/tslist.h:845
void CTSQueue<DynamicIndexBufferHandle_t__::CTSQueue()
{
} /* size: 0 */

// <00178BC9> ../public/tier0/tslist.h:845
inline void CTSQueue<DynamicIndexBufferHandle_t__::CTSQueue()
{
} /* size: 0 */

// <004F56A1> ../public/tier0/tslist.h:845
void CTSQueue<int, true>::CTSQueue()
{
} /* size: 0 */

// <004F5688> ../public/tier0/tslist.h:845
inline void CTSQueue<int, true>::CTSQueue()
{
} /* size: 0 */

// <0012B4EE> ../public/tier0/tslist.h:845
void CTSQueue<CEventQueue::QueuedEvent_t, false>::CTSQueue()
{
} /* size: 0 */

// <0012B4D5> ../public/tier0/tslist.h:845
inline void CTSQueue<CEventQueue::QueuedEvent_t, false>::CTSQueue()
{
} /* size: 0 */

// <0685CE4B> ../public/tier0/tslist.h:868
void CTSQueue<CThreadedLogger::Buffer_t::~CTSQueue()
{
	{
		{
		}
		{
		}
		{
		}
	}
} /* size: 0 */

// <0685CDB0> ../public/tier0/tslist.h:868
// variables: 4
inline void CTSQueue<CThreadedLogger::Buffer_t::~CTSQueue()
{
	const char   __FUNCTION__; // 26210
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 871
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 872
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 873
	}
} /* size: 0, variables: 1 */

// <06316518> ../public/tier0/tslist.h:868
// function calls: 13
void CTSQueue<std::function<void()>::~CTSQueue()>*, false>* this)
{
	{
		{
		}
		{
		}
		{
		}
	}
	{
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 203
		ThreadPause(void); // 208
		CTSListBase::Pop(); // 890
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 895
		{
		}
		{
		}
		{
		}
		CTSQueue<std::function<void()>::Purge()>*, false>* this); // 870
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 871
		{
		}
		{
		}
		CTSQueue<std::function<void()>::End()>*, false>* this); // 873
		{
		}
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 244
		ThreadPause(void); // 230
		CTSListBase::Detach(); // 135
		CTSListBase::~CTSListBase(); // 876
	}
} /* size: 541 */

// <06316492> ../public/tier0/tslist.h:868
// variables: 4
inline void CTSQueue<std::function<void()>::~CTSQueue()>*, false>* this)
{
	const char   __FUNCTION__; // 4851
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 871
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 872
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 873
	}
} /* size: 0, variables: 1 */

// <044D9DF5> ../public/tier0/tslist.h:868
// variables: 4
inline void CTSQueue<std::function<void()>::~CTSQueue()>*, false>* this)
{
	const char   __FUNCTION__; // 6571
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 871
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 872
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 873
	}
} /* size: 0, variables: 1 */

// <044BA50F> ../public/tier0/tslist.h:868
// function calls: 13
void CTSQueue<QueuedSweepNode_t, false>::~CTSQueue()
{
	{
		{
		}
		{
		}
		{
		}
	}
	{
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 203
		ThreadPause(void); // 208
		CTSListBase::Pop(); // 890
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 895
		{
		}
		{
		}
		{
		}
		CTSQueue<QueuedSweepNode_t, false>::Purge(); // 870
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 871
		{
		}
		{
		}
		CTSQueue<QueuedSweepNode_t, false>::End(); // 873
		{
		}
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 244
		ThreadPause(void); // 230
		CTSListBase::Detach(); // 135
		CTSListBase::~CTSListBase(); // 876
	}
} /* size: 0 */

// <044BA489> ../public/tier0/tslist.h:868
// variables: 4
inline void CTSQueue<QueuedSweepNode_t, false>::~CTSQueue()
{
	const char   __FUNCTION__; // 6571
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 871
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 872
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 873
	}
} /* size: 0, variables: 1 */

// <044B9FA7> ../public/tier0/tslist.h:868
// function calls: 13
void CTSQueue<SweepGroup_t::~CTSQueue()
{
	{
		{
		}
		{
		}
		{
		}
	}
	{
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 203
		ThreadPause(void); // 208
		CTSListBase::Pop(); // 890
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 895
		{
		}
		{
		}
		{
		}
		CTSQueue<SweepGroup_t::Purge(); // 870
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 871
		{
		}
		{
		}
		CTSQueue<SweepGroup_t::End(); // 873
		{
		}
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 244
		ThreadPause(void); // 230
		CTSListBase::Detach(); // 135
		CTSListBase::~CTSListBase(); // 876
	}
} /* size: 0 */

// <044B9F21> ../public/tier0/tslist.h:868
// variables: 4
inline void CTSQueue<SweepGroup_t::~CTSQueue()
{
	const char   __FUNCTION__; // 6571
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 871
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 872
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 873
	}
} /* size: 0, variables: 1 */

// <02EABF7C> ../public/tier0/tslist.h:868
void CTSQueue<CSceneObject::~CTSQueue()
{
	{
		{
		}
		{
		}
		{
		}
	}
} /* size: 0 */

// <02EABEF3> ../public/tier0/tslist.h:868
// variables: 4
inline void CTSQueue<CSceneObject::~CTSQueue()
{
	const char   __FUNCTION__; // 63412
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 871
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 872
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 873
	}
} /* size: 0, variables: 1 */

// <024DE94A> ../public/tier0/tslist.h:868
void CTSQueue<CAsyncWaveData::~CTSQueue()
{
	{
		{
		}
		{
		}
		{
		}
	}
} /* size: 0 */

// <024DE8C2> ../public/tier0/tslist.h:868
// variables: 4
inline void CTSQueue<CAsyncWaveData::~CTSQueue()
{
	const char   __FUNCTION__; // 16972
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 871
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 872
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 873
	}
} /* size: 0, variables: 1 */

// <023591A5> ../public/tier0/tslist.h:868
// function calls: 13
void CTSQueue<CResourceManifest::~CTSQueue()
{
	{
		{
		}
		{
		}
		{
		}
	}
	{
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 203
		ThreadPause(void); // 208
		CTSListBase::Pop(); // 890
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 895
		{
		}
		{
		}
		{
		}
		CTSQueue<CResourceManifest::Purge(); // 870
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 871
		{
		}
		{
		}
		CTSQueue<CResourceManifest::End(); // 873
		{
		}
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 244
		ThreadPause(void); // 230
		CTSListBase::Detach(); // 135
		CTSListBase::~CTSListBase(); // 876
	}
} /* size: 541 */

// <0235911F> ../public/tier0/tslist.h:868
// variables: 4
inline void CTSQueue<CResourceManifest::~CTSQueue()
{
	const char   __FUNCTION__; // 58429
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 871
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 872
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 873
	}
} /* size: 0, variables: 1 */

// <02358FBC> ../public/tier0/tslist.h:868
void CTSQueue<const ResourceBindingBase_t::~CTSQueue()
{
	{
		{
		}
		{
		}
		{
		}
	}
} /* size: 0 */

// <02358F36> ../public/tier0/tslist.h:868
// variables: 4
inline void CTSQueue<const ResourceBindingBase_t::~CTSQueue()
{
	const char   __FUNCTION__; // 58429
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 871
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 872
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 873
	}
} /* size: 0, variables: 1 */

// <02F3AFA7> ../public/tier0/tslist.h:868
// variables: 4
inline void CTSQueue<std::function<void()>::~CTSQueue()>*, false>* this)
{
	const char   __FUNCTION__; // 11517
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 871
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 872
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 873
	}
} /* size: 0, variables: 1 */

// <01B35507> ../public/tier0/tslist.h:868
// variables: 4
inline void CTSQueue<std::function<void()>::~CTSQueue()>*, false>* this)
{
	const char   __FUNCTION__; // 46960
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 871
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 872
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 873
	}
} /* size: 0, variables: 1 */

// <01B15B9B> ../public/tier0/tslist.h:868
// variables: 4
inline void CTSQueue<QueuedSweepNode_t, false>::~CTSQueue()
{
	const char   __FUNCTION__; // 46960
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 871
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 872
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 873
	}
} /* size: 0, variables: 1 */

// <01B15633> ../public/tier0/tslist.h:868
// variables: 4
inline void CTSQueue<SweepGroup_t::~CTSQueue()
{
	const char   __FUNCTION__; // 46960
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 871
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 872
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 873
	}
} /* size: 0, variables: 1 */

// <00B75CDE> ../public/tier0/tslist.h:868
void CTSQueue<CCommandStream::~CTSQueue()
{
	{
		{
		}
		{
		}
		{
		}
	}
} /* size: 0 */

// <00B75C58> ../public/tier0/tslist.h:868
// variables: 4
inline void CTSQueue<CCommandStream::~CTSQueue()
{
	const char   __FUNCTION__; // 26764
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 871
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 872
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 873
	}
} /* size: 0, variables: 1 */

// <00B758C9> ../public/tier0/tslist.h:868
void CTSQueue<VkFence_T::~CTSQueue()
{
	{
		{
		}
		{
		}
		{
		}
	}
} /* size: 0 */

// <00B75843> ../public/tier0/tslist.h:868
// variables: 4
inline void CTSQueue<VkFence_T::~CTSQueue()
{
	const char   __FUNCTION__; // 26764
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 871
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 872
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 873
	}
} /* size: 0, variables: 1 */

// <00710D93> ../public/tier0/tslist.h:868
void CTSQueue<VkShaderModule_T::~CTSQueue()
{
	{
		{
		}
		{
		}
		{
		}
	}
} /* size: 0 */

// <00710D0D> ../public/tier0/tslist.h:868
// variables: 4
inline void CTSQueue<VkShaderModule_T::~CTSQueue()
{
	const char   __FUNCTION__; // 56758
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 871
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 872
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 873
	}
} /* size: 0, variables: 1 */

// <00710CB2> ../public/tier0/tslist.h:868
void CTSQueue<PipelineObjectVulkan_t::~CTSQueue()
{
	{
		{
		}
		{
		}
		{
		}
	}
} /* size: 0 */

// <00710C2C> ../public/tier0/tslist.h:868
// variables: 4
inline void CTSQueue<PipelineObjectVulkan_t::~CTSQueue()
{
	const char   __FUNCTION__; // 56758
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 871
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 872
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 873
	}
} /* size: 0, variables: 1 */

// <00710AEF> ../public/tier0/tslist.h:868
void CTSQueue<CPipelineManagerVulkan::LinkTimeOptimizedPipeline_t, false>::~CTSQueue()
{
	{
		{
		}
		{
		}
		{
		}
	}
} /* size: 0 */

// <00710A69> ../public/tier0/tslist.h:868
// variables: 4
inline void CTSQueue<CPipelineManagerVulkan::LinkTimeOptimizedPipeline_t, false>::~CTSQueue()
{
	const char   __FUNCTION__; // 56758
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 871
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 872
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 873
	}
} /* size: 0, variables: 1 */

// <00710A0E> ../public/tier0/tslist.h:868
void CTSQueue<CPipelineManagerVulkan::PreWarmPipeline_t, false>::~CTSQueue()
{
	{
		{
		}
		{
		}
		{
		}
	}
} /* size: 0 */

// <00710988> ../public/tier0/tslist.h:868
// variables: 4
inline void CTSQueue<CPipelineManagerVulkan::PreWarmPipeline_t, false>::~CTSQueue()
{
	const char   __FUNCTION__; // 56758
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 871
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 872
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 873
	}
} /* size: 0, variables: 1 */

// <0066A69A> ../public/tier0/tslist.h:868
// function calls: 13
void CTSQueue<CFossilizeStateCreator::RegisteredShader_t, false>::~CTSQueue()
{
	{
		{
		}
		{
		}
		{
		}
	}
	{
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 203
		ThreadPause(void); // 208
		CTSListBase::Pop(); // 890
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 895
		{
		}
		{
		}
		{
		}
		CTSQueue<CFossilizeStateCreator::RegisteredShader_t, false>::Purge(); // 870
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 871
		{
		}
		{
		}
		CTSQueue<CFossilizeStateCreator::RegisteredShader_t, false>::End(); // 873
		{
		}
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 244
		ThreadPause(void); // 230
		CTSListBase::Detach(); // 135
		CTSListBase::~CTSListBase(); // 876
	}
} /* size: 541 */

// <0066A614> ../public/tier0/tslist.h:868
// variables: 4
inline void CTSQueue<CFossilizeStateCreator::RegisteredShader_t, false>::~CTSQueue()
{
	const char   __FUNCTION__; // 31858
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 871
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 872
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 873
	}
} /* size: 0, variables: 1 */

// <0058F75C> ../public/tier0/tslist.h:868
void CTSQueue<CMemoryManagerVulkan::FencedResourceList_t, false>::~CTSQueue()
{
	{
		{
		}
		{
		}
		{
		}
	}
} /* size: 0 */

// <0058F6D6> ../public/tier0/tslist.h:868
// variables: 4
inline void CTSQueue<CMemoryManagerVulkan::FencedResourceList_t, false>::~CTSQueue()
{
	const char   __FUNCTION__; // 35262
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 871
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 872
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 873
	}
} /* size: 0, variables: 1 */

// <0058F108> ../public/tier0/tslist.h:868
void CTSQueue<VkCommandBuffer_T::~CTSQueue()
{
	{
		{
		}
		{
		}
		{
		}
	}
} /* size: 0 */

// <0058F082> ../public/tier0/tslist.h:868
// variables: 4
inline void CTSQueue<VkCommandBuffer_T::~CTSQueue()
{
	const char   __FUNCTION__; // 35262
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 871
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 872
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 873
	}
} /* size: 0, variables: 1 */

// <00178C7F> ../public/tier0/tslist.h:868
void CTSQueue<DynamicVertexBufferHandle_t__::~CTSQueue()
{
	{
		{
		}
		{
		}
		{
		}
	}
} /* size: 0 */

// <00178BF9> ../public/tier0/tslist.h:868
// variables: 4
inline void CTSQueue<DynamicVertexBufferHandle_t__::~CTSQueue()
{
	const char   __FUNCTION__; // 2469
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 871
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 872
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 873
	}
} /* size: 0, variables: 1 */

// <00178B9E> ../public/tier0/tslist.h:868
void CTSQueue<DynamicIndexBufferHandle_t__::~CTSQueue()
{
	{
		{
		}
		{
		}
		{
		}
	}
} /* size: 0 */

// <00178B18> ../public/tier0/tslist.h:868
// variables: 4
inline void CTSQueue<DynamicIndexBufferHandle_t__::~CTSQueue()
{
	const char   __FUNCTION__; // 2469
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 871
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 872
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 873
	}
} /* size: 0, variables: 1 */

// <004F3AF7> ../public/tier0/tslist.h:868
// function calls: 13
void CTSQueue<int, true>::~CTSQueue()
{
	{
		{
		}
		{
		}
		{
		}
	}
	{
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 203
		ThreadPause(void); // 208
		CTSListBase::Pop(); // 890
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 895
		{
		}
		{
		}
		{
		}
		CTSQueue<int, true>::Purge(); // 870
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 871
		{
		}
		{
		}
		CTSQueue<int, true>::End(); // 873
		{
		}
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 244
		ThreadPause(void); // 230
		CTSListBase::Detach(); // 135
		CTSListBase::~CTSListBase(); // 876
	}
} /* size: 541 */

// <004F3A5C> ../public/tier0/tslist.h:868
// variables: 4
inline void CTSQueue<int, true>::~CTSQueue()
{
	const char   __FUNCTION__; // 31078
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 871
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 872
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 873
	}
} /* size: 0, variables: 1 */

// <0012B505> ../public/tier0/tslist.h:868
// variables: 4
inline void CTSQueue<CFunctorCallback::~CTSQueue()
{
	const char   __FUNCTION__; // 46397
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 871
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 872
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 873
	}
} /* size: 0, variables: 1 */

// <0012B4AD> ../public/tier0/tslist.h:868
void CTSQueue<CEventQueue::QueuedEvent_t, false>::~CTSQueue()
{
	{
		{
		}
		{
		}
		{
		}
	}
} /* size: 0 */

// <0012B427> ../public/tier0/tslist.h:868
// variables: 4
inline void CTSQueue<CEventQueue::QueuedEvent_t, false>::~CTSQueue()
{
	const char   __FUNCTION__; // 46397
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 871
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 872
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 873
	}
} /* size: 0, variables: 1 */

// <01724BDF> ../public/tier0/tslist.h:868
// variables: 4
inline void CTSQueue<std::function<void()>::~CTSQueue()>*, false>* this)
{
	const char   __FUNCTION__; // 1701
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 871
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 872
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 873
	}
} /* size: 0, variables: 1 */

// <009BAD6A> ../public/tier0/tslist.h:868
// variables: 4
inline void CTSQueue<std::function<void()>::~CTSQueue()>*, false>* this)
{
	const char   __FUNCTION__; // 39680
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 871
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 872
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 873
	}
} /* size: 0, variables: 1 */

// <0099B3FE> ../public/tier0/tslist.h:868
// variables: 4
inline void CTSQueue<QueuedSweepNode_t, false>::~CTSQueue()
{
	const char   __FUNCTION__; // 39680
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 871
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 872
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 873
	}
} /* size: 0, variables: 1 */

// <0099AE96> ../public/tier0/tslist.h:868
// variables: 4
inline void CTSQueue<SweepGroup_t::~CTSQueue()
{
	const char   __FUNCTION__; // 39680
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 871
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 872
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 873
	}
} /* size: 0, variables: 1 */

// <00176998> ../public/tier0/tslist.h:868
// variables: 4
inline void CTSQueue<DynamicVertexBufferHandle_t__::~CTSQueue()
{
	const char   __FUNCTION__; // 31844
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 871
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 872
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 873
	}
} /* size: 0, variables: 1 */

// <001768B7> ../public/tier0/tslist.h:868
// variables: 4
inline void CTSQueue<DynamicIndexBufferHandle_t__::~CTSQueue()
{
	const char   __FUNCTION__; // 31844
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 871
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 872
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 873
	}
} /* size: 0, variables: 1 */

// <0685C442> ../public/tier0/tslist.h:879
// variables: 5
inline void CTSQueue<CThreadedLogger::Buffer_t::Purge()
{
	const char   __FUNCTION__; // 23809
	Node_t* pNode; // 883
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 895
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 896
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 897
	}
} /* size: 0, variables: 2 */

// <063123F5> ../public/tier0/tslist.h:879
// variables: 5
inline void CTSQueue<std::function<void()>::Purge()>*, false>* this)
{
	const char   __FUNCTION__; // 4748
	Node_t* pNode; // 883
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 895
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 896
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 897
	}
} /* size: 0, variables: 2 */

// <044C3991> ../public/tier0/tslist.h:879
// variables: 5
inline void CTSQueue<std::function<void()>::Purge()>*, false>* this)
{
	const char   __FUNCTION__; // 6529
	Node_t* pNode; // 883
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 895
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 896
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 897
	}
} /* size: 0, variables: 2 */

// <044A8CEC> ../public/tier0/tslist.h:879
// variables: 5
inline void CTSQueue<QueuedSweepNode_t, false>::Purge()
{
	const char   __FUNCTION__; // 6529
	Node_t* pNode; // 883
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 895
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 896
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 897
	}
} /* size: 0, variables: 2 */

// <044A8C40> ../public/tier0/tslist.h:879
// variables: 5
inline void CTSQueue<SweepGroup_t::Purge()
{
	const char   __FUNCTION__; // 6529
	Node_t* pNode; // 883
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 895
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 896
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 897
	}
} /* size: 0, variables: 2 */

// <02E9895D> ../public/tier0/tslist.h:879
// variables: 5
inline void CTSQueue<CSceneObject::Purge()
{
	const char   __FUNCTION__; // 63304
	Node_t* pNode; // 883
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 895
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 896
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 897
	}
} /* size: 0, variables: 2 */

// <024DCF6F> ../public/tier0/tslist.h:879
// variables: 5
inline void CTSQueue<CAsyncWaveData::Purge()
{
	const char   __FUNCTION__; // 16930
	Node_t* pNode; // 883
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 895
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 896
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 897
	}
} /* size: 0, variables: 2 */

// <02355216> ../public/tier0/tslist.h:879
// variables: 5
inline void CTSQueue<CResourceManifest::Purge()
{
	const char   __FUNCTION__; // 58321
	Node_t* pNode; // 883
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 895
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 896
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 897
	}
} /* size: 0, variables: 2 */

// <02354AD8> ../public/tier0/tslist.h:879
// variables: 5
inline void CTSQueue<const ResourceBindingBase_t::Purge()
{
	const char   __FUNCTION__; // 58321
	Node_t* pNode; // 883
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 895
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 896
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 897
	}
} /* size: 0, variables: 2 */

// <02F36F0A> ../public/tier0/tslist.h:879
// variables: 5
inline void CTSQueue<std::function<void()>::Purge()>*, false>* this)
{
	const char   __FUNCTION__; // 11414
	Node_t* pNode; // 883
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 895
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 896
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 897
	}
} /* size: 0, variables: 2 */

// <01B1F0A3> ../public/tier0/tslist.h:879
// variables: 5
inline void CTSQueue<std::function<void()>::Purge()>*, false>* this)
{
	const char   __FUNCTION__; // 46918
	Node_t* pNode; // 883
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 895
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 896
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 897
	}
} /* size: 0, variables: 2 */

// <01B043FE> ../public/tier0/tslist.h:879
// variables: 5
inline void CTSQueue<QueuedSweepNode_t, false>::Purge()
{
	const char   __FUNCTION__; // 46918
	Node_t* pNode; // 883
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 895
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 896
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 897
	}
} /* size: 0, variables: 2 */

// <01B04352> ../public/tier0/tslist.h:879
// variables: 5
inline void CTSQueue<SweepGroup_t::Purge()
{
	const char   __FUNCTION__; // 46918
	Node_t* pNode; // 883
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 895
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 896
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 897
	}
} /* size: 0, variables: 2 */

// <00B72F79> ../public/tier0/tslist.h:879
// variables: 5
inline void CTSQueue<CCommandStream::Purge()
{
	const char   __FUNCTION__; // 26680
	Node_t* pNode; // 883
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 895
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 896
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 897
	}
} /* size: 0, variables: 2 */

// <00B71AE2> ../public/tier0/tslist.h:879
// variables: 5
inline void CTSQueue<VkFence_T::Purge()
{
	const char   __FUNCTION__; // 26680
	Node_t* pNode; // 883
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 895
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 896
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 897
	}
} /* size: 0, variables: 2 */

// <009E7345> ../public/tier0/tslist.h:879
// variables: 5
inline void CTSQueue<DynamicVertexBufferHandle_t__::Purge()
{
	const char   __FUNCTION__; // 28489
	Node_t* pNode; // 883
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 895
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 896
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 897
	}
} /* size: 0, variables: 2 */

// <009E72B2> ../public/tier0/tslist.h:879
// variables: 5
inline void CTSQueue<DynamicIndexBufferHandle_t__::Purge()
{
	const char   __FUNCTION__; // 28489
	Node_t* pNode; // 883
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 895
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 896
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 897
	}
} /* size: 0, variables: 2 */

// <0070BEA8> ../public/tier0/tslist.h:879
// variables: 5
inline void CTSQueue<VkShaderModule_T::Purge()
{
	const char   __FUNCTION__; // 56650
	Node_t* pNode; // 883
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 895
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 896
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 897
	}
} /* size: 0, variables: 2 */

// <0070BDA6> ../public/tier0/tslist.h:879
// variables: 5
inline void CTSQueue<PipelineObjectVulkan_t::Purge()
{
	const char   __FUNCTION__; // 56650
	Node_t* pNode; // 883
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 895
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 896
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 897
	}
} /* size: 0, variables: 2 */

// <0070B94E> ../public/tier0/tslist.h:879
// variables: 5
inline void CTSQueue<CPipelineManagerVulkan::LinkTimeOptimizedPipeline_t, false>::Purge()
{
	const char   __FUNCTION__; // 56650
	Node_t* pNode; // 883
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 895
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 896
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 897
	}
} /* size: 0, variables: 2 */

// <0070B872> ../public/tier0/tslist.h:879
// variables: 5
inline void CTSQueue<CPipelineManagerVulkan::PreWarmPipeline_t, false>::Purge()
{
	const char   __FUNCTION__; // 56650
	Node_t* pNode; // 883
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 895
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 896
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 897
	}
} /* size: 0, variables: 2 */

// <006668EC> ../public/tier0/tslist.h:879
// variables: 5
inline void CTSQueue<CFossilizeStateCreator::RegisteredShader_t, false>::Purge()
{
	const char   __FUNCTION__; // 31750
	Node_t* pNode; // 883
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 895
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 896
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 897
	}
} /* size: 0, variables: 2 */

// <0058F133> ../public/tier0/tslist.h:879
// variables: 5
inline void CTSQueue<VkCommandBuffer_T::Purge()
{
	const char   __FUNCTION__; // 35154
	Node_t* pNode; // 883
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 895
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 896
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 897
	}
} /* size: 0, variables: 2 */

// <0058DCB5> ../public/tier0/tslist.h:879
// variables: 5
inline void CTSQueue<CMemoryManagerVulkan::FencedResourceList_t, false>::Purge()
{
	const char   __FUNCTION__; // 35154
	Node_t* pNode; // 883
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 895
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 896
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 897
	}
} /* size: 0, variables: 2 */

// <0017526E> ../public/tier0/tslist.h:879
// variables: 5
inline void CTSQueue<DynamicVertexBufferHandle_t__::Purge()
{
	const char   __FUNCTION__; // 2361
	Node_t* pNode; // 883
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 895
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 896
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 897
	}
} /* size: 0, variables: 2 */

// <00175192> ../public/tier0/tslist.h:879
// variables: 5
inline void CTSQueue<DynamicIndexBufferHandle_t__::Purge()
{
	const char   __FUNCTION__; // 2361
	Node_t* pNode; // 883
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 895
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 896
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 897
	}
} /* size: 0, variables: 2 */

// <004F52FA> ../public/tier0/tslist.h:879
// variables: 5
inline void CTSQueue<int, true>::Purge()
{
	const char   __FUNCTION__; // 37393
	Node_t* pNode; // 883
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 895
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 896
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 897
	}
} /* size: 0, variables: 2 */

// <0012A987> ../public/tier0/tslist.h:879
// variables: 5
inline void CTSQueue<CFunctorCallback::Purge()
{
	const char   __FUNCTION__; // 59271
	Node_t* pNode; // 883
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 895
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 896
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 897
	}
} /* size: 0, variables: 2 */

// <0012A870> ../public/tier0/tslist.h:879
// variables: 5
inline void CTSQueue<CEventQueue::QueuedEvent_t, false>::Purge()
{
	const char   __FUNCTION__; // 59271
	Node_t* pNode; // 883
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 895
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 896
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 897
	}
} /* size: 0, variables: 2 */

// <009A4906> ../public/tier0/tslist.h:879
// variables: 5
inline void CTSQueue<std::function<void()>::Purge()>*, false>* this)
{
	const char   __FUNCTION__; // 39638
	Node_t* pNode; // 883
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 895
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 896
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 897
	}
} /* size: 0, variables: 2 */

// <00989C61> ../public/tier0/tslist.h:879
// variables: 5
inline void CTSQueue<QueuedSweepNode_t, false>::Purge()
{
	const char   __FUNCTION__; // 39638
	Node_t* pNode; // 883
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 895
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 896
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 897
	}
} /* size: 0, variables: 2 */

// <00989BB5> ../public/tier0/tslist.h:879
// variables: 5
inline void CTSQueue<SweepGroup_t::Purge()
{
	const char   __FUNCTION__; // 39638
	Node_t* pNode; // 883
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 895
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 896
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 897
	}
} /* size: 0, variables: 2 */

// <001732E8> ../public/tier0/tslist.h:879
// variables: 5
inline void CTSQueue<DynamicVertexBufferHandle_t__::Purge()
{
	const char   __FUNCTION__; // 31741
	Node_t* pNode; // 883
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 895
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 896
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 897
	}
} /* size: 0, variables: 2 */

// <0017320C> ../public/tier0/tslist.h:879
// variables: 5
inline void CTSQueue<DynamicIndexBufferHandle_t__::Purge()
{
	const char   __FUNCTION__; // 31741
	Node_t* pNode; // 883
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 895
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 896
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 897
	}
} /* size: 0, variables: 2 */

// <0685C08A> ../public/tier0/tslist.h:913
// variables: 3
inline void CTSQueue<CThreadedLogger::Buffer_t::ValidateQueue()
{
	{
		bool bResult; // 917
		int nNodes; // 918
		Node_t* pNode; // 934
	}
} /* size: 0 */

// <062EB096> ../public/tier0/tslist.h:913
// variables: 3
inline void CTSQueue<std::function<void()>::ValidateQueue()>*, false>* this)
{
	{
		bool bResult; // 917
		int nNodes; // 918
		Node_t* pNode; // 934
	}
} /* size: 0 */

// <0449866E> ../public/tier0/tslist.h:913
// variables: 3
inline void CTSQueue<QueuedSweepNode_t, false>::ValidateQueue()
{
	{
		bool bResult; // 917
		int nNodes; // 918
		Node_t* pNode; // 934
	}
} /* size: 0 */

// <04498163> ../public/tier0/tslist.h:913
// variables: 3
inline void CTSQueue<SweepGroup_t::ValidateQueue()
{
	{
		bool bResult; // 917
		int nNodes; // 918
		Node_t* pNode; // 934
	}
} /* size: 0 */

// <02E8B96D> ../public/tier0/tslist.h:913
// variables: 3
inline void CTSQueue<CSceneObject::ValidateQueue()
{
	{
		bool bResult; // 917
		int nNodes; // 918
		Node_t* pNode; // 934
	}
} /* size: 0 */

// <024DB8EE> ../public/tier0/tslist.h:913
// variables: 3
inline void CTSQueue<CAsyncWaveData::ValidateQueue()
{
	{
		bool bResult; // 917
		int nNodes; // 918
		Node_t* pNode; // 934
	}
} /* size: 0 */

// <02350D6F> ../public/tier0/tslist.h:913
// variables: 3
inline void CTSQueue<CResourceManifest::ValidateQueue()
{
	{
		bool bResult; // 917
		int nNodes; // 918
		Node_t* pNode; // 934
	}
} /* size: 0 */

// <02350B1D> ../public/tier0/tslist.h:913
// variables: 3
inline void CTSQueue<const ResourceBindingBase_t::ValidateQueue()
{
	{
		bool bResult; // 917
		int nNodes; // 918
		Node_t* pNode; // 934
	}
} /* size: 0 */

// <00B6F06C> ../public/tier0/tslist.h:913
// variables: 3
inline void CTSQueue<CCommandStream::ValidateQueue()
{
	{
		bool bResult; // 917
		int nNodes; // 918
		Node_t* pNode; // 934
	}
} /* size: 0 */

// <00B6E3CA> ../public/tier0/tslist.h:913
// variables: 3
inline void CTSQueue<VkFence_T::ValidateQueue()
{
	{
		bool bResult; // 917
		int nNodes; // 918
		Node_t* pNode; // 934
	}
} /* size: 0 */

// <009D872D> ../public/tier0/tslist.h:913
// variables: 3
inline void CTSQueue<DynamicVertexBufferHandle_t__::ValidateQueue()
{
	{
		bool bResult; // 917
		int nNodes; // 918
		Node_t* pNode; // 934
	}
} /* size: 0 */

// <009D8219> ../public/tier0/tslist.h:913
// variables: 3
inline void CTSQueue<DynamicIndexBufferHandle_t__::ValidateQueue()
{
	{
		bool bResult; // 917
		int nNodes; // 918
		Node_t* pNode; // 934
	}
} /* size: 0 */

// <007044E9> ../public/tier0/tslist.h:913
// variables: 3
inline void CTSQueue<VkShaderModule_T::ValidateQueue()
{
	{
		bool bResult; // 917
		int nNodes; // 918
		Node_t* pNode; // 934
	}
} /* size: 0 */

// <007044A7> ../public/tier0/tslist.h:913
// variables: 3
inline void CTSQueue<PipelineObjectVulkan_t::ValidateQueue()
{
	{
		bool bResult; // 917
		int nNodes; // 918
		Node_t* pNode; // 934
	}
} /* size: 0 */

// <00704465> ../public/tier0/tslist.h:913
// variables: 3
inline void CTSQueue<CPipelineManagerVulkan::LinkTimeOptimizedPipeline_t, false>::ValidateQueue()
{
	{
		bool bResult; // 917
		int nNodes; // 918
		Node_t* pNode; // 934
	}
} /* size: 0 */

// <00704423> ../public/tier0/tslist.h:913
// variables: 3
inline void CTSQueue<CPipelineManagerVulkan::PreWarmPipeline_t, false>::ValidateQueue()
{
	{
		bool bResult; // 917
		int nNodes; // 918
		Node_t* pNode; // 934
	}
} /* size: 0 */

// <0065C1DA> ../public/tier0/tslist.h:913
// variables: 3
inline void CTSQueue<CFossilizeStateCreator::RegisteredShader_t, false>::ValidateQueue()
{
	{
		bool bResult; // 917
		int nNodes; // 918
		Node_t* pNode; // 934
	}
} /* size: 0 */

// <0058C11F> ../public/tier0/tslist.h:913
// variables: 3
inline void CTSQueue<VkCommandBuffer_T::ValidateQueue()
{
	{
		bool bResult; // 917
		int nNodes; // 918
		Node_t* pNode; // 934
	}
} /* size: 0 */

// <00589E1A> ../public/tier0/tslist.h:913
// variables: 3
inline void CTSQueue<CMemoryManagerVulkan::FencedResourceList_t, false>::ValidateQueue()
{
	{
		bool bResult; // 917
		int nNodes; // 918
		Node_t* pNode; // 934
	}
} /* size: 0 */

// <004F5550> ../public/tier0/tslist.h:913
// variables: 3
inline void CTSQueue<int, true>::ValidateQueue()
{
	{
		bool bResult; // 917
		int nNodes; // 918
		Node_t* pNode; // 934
	}
} /* size: 0 */

// <00129137> ../public/tier0/tslist.h:913
// variables: 3
inline void CTSQueue<CEventQueue::QueuedEvent_t, false>::ValidateQueue()
{
	{
		bool bResult; // 917
		int nNodes; // 918
		Node_t* pNode; // 934
	}
} /* size: 0 */

// <0685C130> ../public/tier0/tslist.h:962
// variables: 7
inline void CTSQueue<CThreadedLogger::Buffer_t::Push(Node_t* pNode)
{
	const char   __FUNCTION__; // 23064
	union NodeLink_t oldTail; // 967
	int nTries; // 972
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 964
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 965
	}
	{
		Node_t* pCurEnd; // 977
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 988
		}
	}
} /* size: 0, variables: 3 */

// <063122B7> ../public/tier0/tslist.h:962
// variables: 7
inline void CTSQueue<std::function<void()>::Push(Node_t* pNode)
{
	const char   __FUNCTION__; // 4721
	union NodeLink_t oldTail; // 967
	int nTries; // 972
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 964
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 965
	}
	{
		Node_t* pCurEnd; // 977
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 988
		}
	}
} /* size: 0, variables: 3 */

// <044C382D> ../public/tier0/tslist.h:962
// variables: 7
inline void CTSQueue<std::function<void()>::Push(Node_t* pNode)
{
	const char   __FUNCTION__; // 6508
	union NodeLink_t oldTail; // 967
	int nTries; // 972
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 964
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 965
	}
	{
		Node_t* pCurEnd; // 977
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 988
		}
	}
} /* size: 0, variables: 3 */

// <0448F07D> ../public/tier0/tslist.h:962
// variables: 7
inline void CTSQueue<QueuedSweepNode_t, false>::Push(Node_t* pNode)
{
	const char   __FUNCTION__; // 6508
	union NodeLink_t oldTail; // 967
	int nTries; // 972
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 964
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 965
	}
	{
		Node_t* pCurEnd; // 977
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 988
		}
	}
} /* size: 0, variables: 3 */

// <0448DCFB> ../public/tier0/tslist.h:962
// variables: 7
inline void CTSQueue<SweepGroup_t::Push(Node_t* pNode)
{
	const char   __FUNCTION__; // 6508
	union NodeLink_t oldTail; // 967
	int nTries; // 972
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 964
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 965
	}
	{
		Node_t* pCurEnd; // 977
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 988
		}
	}
} /* size: 0, variables: 3 */

// <035323BB> ../public/tier0/tslist.h:962
// variables: 7
inline void CTSQueue<CSceneObject::Push(Node_t* pNode)
{
	const char   __FUNCTION__; // 20233
	union NodeLink_t oldTail; // 967
	int nTries; // 972
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 964
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 965
	}
	{
		Node_t* pCurEnd; // 977
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 988
		}
	}
} /* size: 0, variables: 3 */

// <02E97F53> ../public/tier0/tslist.h:962
// variables: 7
inline void CTSQueue<CSceneObject::Push(Node_t* pNode)
{
	const char   __FUNCTION__; // 63277
	union NodeLink_t oldTail; // 967
	int nTries; // 972
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 964
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 965
	}
	{
		Node_t* pCurEnd; // 977
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 988
		}
	}
} /* size: 0, variables: 3 */

// <024DC015> ../public/tier0/tslist.h:962
// variables: 7
inline void CTSQueue<CAsyncWaveData::Push(Node_t* pNode)
{
	const char   __FUNCTION__; // 16909
	union NodeLink_t oldTail; // 967
	int nTries; // 972
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 964
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 965
	}
	{
		Node_t* pCurEnd; // 977
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 988
		}
	}
} /* size: 0, variables: 3 */

// <02353207> ../public/tier0/tslist.h:962
// variables: 7
inline void CTSQueue<const ResourceBindingBase_t::Push(Node_t* pNode)
{
	const char   __FUNCTION__; // 58294
	union NodeLink_t oldTail; // 967
	int nTries; // 972
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 964
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 965
	}
	{
		Node_t* pCurEnd; // 977
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 988
		}
	}
} /* size: 0, variables: 3 */

// <02352549> ../public/tier0/tslist.h:962
// variables: 7
inline void CTSQueue<CResourceManifest::Push(Node_t* pNode)
{
	const char   __FUNCTION__; // 58294
	union NodeLink_t oldTail; // 967
	int nTries; // 972
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 964
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 965
	}
	{
		Node_t* pCurEnd; // 977
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 988
		}
	}
} /* size: 0, variables: 3 */

// <02F36DCC> ../public/tier0/tslist.h:962
// variables: 7
inline void CTSQueue<std::function<void()>::Push(Node_t* pNode)
{
	const char   __FUNCTION__; // 11387
	union NodeLink_t oldTail; // 967
	int nTries; // 972
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 964
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 965
	}
	{
		Node_t* pCurEnd; // 977
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 988
		}
	}
} /* size: 0, variables: 3 */

// <01B1EF3F> ../public/tier0/tslist.h:962
// variables: 7
inline void CTSQueue<std::function<void()>::Push(Node_t* pNode)
{
	const char   __FUNCTION__; // 46897
	union NodeLink_t oldTail; // 967
	int nTries; // 972
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 964
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 965
	}
	{
		Node_t* pCurEnd; // 977
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 988
		}
	}
} /* size: 0, variables: 3 */

// <01AEA78F> ../public/tier0/tslist.h:962
// variables: 7
inline void CTSQueue<QueuedSweepNode_t, false>::Push(Node_t* pNode)
{
	const char   __FUNCTION__; // 46897
	union NodeLink_t oldTail; // 967
	int nTries; // 972
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 964
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 965
	}
	{
		Node_t* pCurEnd; // 977
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 988
		}
	}
} /* size: 0, variables: 3 */

// <01AE940D> ../public/tier0/tslist.h:962
// variables: 7
inline void CTSQueue<SweepGroup_t::Push(Node_t* pNode)
{
	const char   __FUNCTION__; // 46897
	union NodeLink_t oldTail; // 967
	int nTries; // 972
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 964
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 965
	}
	{
		Node_t* pCurEnd; // 977
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 988
		}
	}
} /* size: 0, variables: 3 */

// <00B6F6EF> ../public/tier0/tslist.h:962
// variables: 7
inline void CTSQueue<VkFence_T::Push(Node_t* pNode)
{
	const char   __FUNCTION__; // 26659
	union NodeLink_t oldTail; // 967
	int nTries; // 972
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 964
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 965
	}
	{
		Node_t* pCurEnd; // 977
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 988
		}
	}
} /* size: 0, variables: 3 */

// <009D6304> ../public/tier0/tslist.h:962
// variables: 7
inline void CTSQueue<DynamicVertexBufferHandle_t__::Push(Node_t* pNode)
{
	const char   __FUNCTION__; // 28462
	union NodeLink_t oldTail; // 967
	int nTries; // 972
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 964
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 965
	}
	{
		Node_t* pCurEnd; // 977
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 988
		}
	}
} /* size: 0, variables: 3 */

// <009D6058> ../public/tier0/tslist.h:962
// variables: 7
inline void CTSQueue<DynamicIndexBufferHandle_t__::Push(Node_t* pNode)
{
	const char   __FUNCTION__; // 28462
	union NodeLink_t oldTail; // 967
	int nTries; // 972
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 964
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 965
	}
	{
		Node_t* pCurEnd; // 977
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 988
		}
	}
} /* size: 0, variables: 3 */

// <00709688> ../public/tier0/tslist.h:962
// variables: 7
inline void CTSQueue<VkShaderModule_T::Push(Node_t* pNode)
{
	const char   __FUNCTION__; // 56623
	union NodeLink_t oldTail; // 967
	int nTries; // 972
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 964
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 965
	}
	{
		Node_t* pCurEnd; // 977
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 988
		}
	}
} /* size: 0, variables: 3 */

// <00709593> ../public/tier0/tslist.h:962
// variables: 7
inline void CTSQueue<PipelineObjectVulkan_t::Push(Node_t* pNode)
{
	const char   __FUNCTION__; // 56623
	union NodeLink_t oldTail; // 967
	int nTries; // 972
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 964
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 965
	}
	{
		Node_t* pCurEnd; // 977
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 988
		}
	}
} /* size: 0, variables: 3 */

// <00705080> ../public/tier0/tslist.h:962
// variables: 7
inline void CTSQueue<CPipelineManagerVulkan::LinkTimeOptimizedPipeline_t, false>::Push(Node_t* pNode)
{
	const char   __FUNCTION__; // 56623
	union NodeLink_t oldTail; // 967
	int nTries; // 972
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 964
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 965
	}
	{
		Node_t* pCurEnd; // 977
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 988
		}
	}
} /* size: 0, variables: 3 */

// <00704A3A> ../public/tier0/tslist.h:962
// variables: 7
inline void CTSQueue<CPipelineManagerVulkan::PreWarmPipeline_t, false>::Push(Node_t* pNode)
{
	const char   __FUNCTION__; // 56623
	union NodeLink_t oldTail; // 967
	int nTries; // 972
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 964
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 965
	}
	{
		Node_t* pCurEnd; // 977
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 988
		}
	}
} /* size: 0, variables: 3 */

// <006619D3> ../public/tier0/tslist.h:962
// variables: 7
inline void CTSQueue<CFossilizeStateCreator::RegisteredShader_t, false>::Push(Node_t* pNode)
{
	const char   __FUNCTION__; // 31723
	union NodeLink_t oldTail; // 967
	int nTries; // 972
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 964
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 965
	}
	{
		Node_t* pCurEnd; // 977
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 988
		}
	}
} /* size: 0, variables: 3 */

// <0058AA49> ../public/tier0/tslist.h:962
// variables: 7
inline void CTSQueue<CMemoryManagerVulkan::FencedResourceList_t, false>::Push(Node_t* pNode)
{
	const char   __FUNCTION__; // 35127
	union NodeLink_t oldTail; // 967
	int nTries; // 972
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 964
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 965
	}
	{
		Node_t* pCurEnd; // 977
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 988
		}
	}
} /* size: 0, variables: 3 */

// <0058A1D2> ../public/tier0/tslist.h:962
// variables: 7
inline void CTSQueue<VkCommandBuffer_T::Push(Node_t* pNode)
{
	const char   __FUNCTION__; // 35127
	union NodeLink_t oldTail; // 967
	int nTries; // 972
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 964
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 965
	}
	{
		Node_t* pCurEnd; // 977
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 988
		}
	}
} /* size: 0, variables: 3 */

// <0022E1BA> ../public/tier0/tslist.h:962
// variables: 7
inline void CTSQueue<CCommandStream::Push(Node_t* pNode)
{
	const char   __FUNCTION__; // 49542
	union NodeLink_t oldTail; // 967
	int nTries; // 972
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 964
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 965
	}
	{
		Node_t* pCurEnd; // 977
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 988
		}
	}
} /* size: 0, variables: 3 */

// <004F5131> ../public/tier0/tslist.h:962
// variables: 7
inline void CTSQueue<int, true>::Push(Node_t* pNode)
{
	const char   __FUNCTION__; // 36977
	union NodeLink_t oldTail; // 967
	int nTries; // 972
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 964
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 965
	}
	{
		Node_t* pCurEnd; // 977
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 988
		}
	}
} /* size: 0, variables: 3 */

// <0012A2C3> ../public/tier0/tslist.h:962
// variables: 7
inline void CTSQueue<CEventQueue::QueuedEvent_t, false>::Push(Node_t* pNode)
{
	const char   __FUNCTION__; // 47650
	union NodeLink_t oldTail; // 967
	int nTries; // 972
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 964
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 965
	}
	{
		Node_t* pCurEnd; // 977
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 988
		}
	}
} /* size: 0, variables: 3 */

// <0005A7F7> ../public/tier0/tslist.h:962
// variables: 7
inline void CTSQueue<std::function<void()>::Push(Node_t* pNode)
{
	const char   __FUNCTION__; // 59194
	union NodeLink_t oldTail; // 967
	int nTries; // 972
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 964
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 965
	}
	{
		Node_t* pCurEnd; // 977
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 988
		}
	}
} /* size: 0, variables: 3 */

// <009A47A2> ../public/tier0/tslist.h:962
// variables: 7
inline void CTSQueue<std::function<void()>::Push(Node_t* pNode)
{
	const char   __FUNCTION__; // 39617
	union NodeLink_t oldTail; // 967
	int nTries; // 972
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 964
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 965
	}
	{
		Node_t* pCurEnd; // 977
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 988
		}
	}
} /* size: 0, variables: 3 */

// <0096FFF2> ../public/tier0/tslist.h:962
// variables: 7
inline void CTSQueue<QueuedSweepNode_t, false>::Push(Node_t* pNode)
{
	const char   __FUNCTION__; // 39617
	union NodeLink_t oldTail; // 967
	int nTries; // 972
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 964
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 965
	}
	{
		Node_t* pCurEnd; // 977
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 988
		}
	}
} /* size: 0, variables: 3 */

// <0096EC70> ../public/tier0/tslist.h:962
// variables: 7
inline void CTSQueue<SweepGroup_t::Push(Node_t* pNode)
{
	const char   __FUNCTION__; // 39617
	union NodeLink_t oldTail; // 967
	int nTries; // 972
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 964
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 965
	}
	{
		Node_t* pCurEnd; // 977
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 988
		}
	}
} /* size: 0, variables: 3 */

// <0685BBE2> ../public/tier0/tslist.h:998
// variables: 14
// function calls: 10
void CTSQueue<CThreadedLogger::Buffer_t::Pop()
{
	const char   __FUNCTION__; // 22667
	volatile union NodeLink_t* pHead; // 1003
	volatile union NodeLink_t* pTail; // 1004
	volatile Node_t** pHeadNode; // 1005
	volatile volatile intp* pHeadSequence; // 1006
	volatile Node_t** pTailNode; // 1007
	union NodeLink_t head; // 1009
	union NodeLink_t newHead; // 1010
	Node_t* pNext; // 1011
	intp tailSequence; // 1012
	Buffer_t* elem; // 1013
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1000
	}
	{
		union NodeLink_t oldTail; // 1047
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 1147
		CTSQueue<CThreadedLogger::Buffer_t::InterlockedCompareExchangeNodeLink(
							volatile union NodeLink_t* pLink,
							const union NodeLink_t& value,
							const union NodeLink_t& comperand);  // 1135
		CTSQueue<CThreadedLogger::Buffer_t::FinishPush(
				Node_t* pNode,
				const union NodeLink_t& oldTail);  // 1050
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1071
	}
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 1147
	CTSQueue<CThreadedLogger::Buffer_t::InterlockedCompareExchangeNodeLink(
						volatile union NodeLink_t* pLink,
						const union NodeLink_t& value,
						const union NodeLink_t& comperand);  // 1060
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<int, 4>::operator--(); // 592
	CInterlockedIntT<int, 4>::operator--(
			int);  // 1072
} /* size: 308, variables: 11, inline expansions: 6 (69 bytes) */

// <06311E18> ../public/tier0/tslist.h:998
// variables: 16
// function calls: 11
void CTSQueue<std::function<void()>::Pop()>*, false>* this)
{
	const char   __FUNCTION__; // 4694
	volatile union NodeLink_t* pHead; // 1003
	volatile union NodeLink_t* pTail; // 1004
	volatile Node_t** pHeadNode; // 1005
	volatile volatile intp* pHeadSequence; // 1006
	volatile Node_t** pTailNode; // 1007
	union NodeLink_t head; // 1009
	union NodeLink_t newHead; // 1010
	Node_t* pNext; // 1011
	intp tailSequence; // 1012
	function<void()>* elem; // 1013
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1000
	}
	{
		union NodeLink_t oldTail; // 1047
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 1147
		CTSQueue<std::function<void()>::InterlockedCompareExchangeNodeLink(
							volatile union NodeLink_t* pLink,
							const union NodeLink_t& value,
							const union NodeLink_t& comperand); // 1135
		CTSQueue<std::function<void()>::FinishPush(
				Node_t* pNode,
				const union NodeLink_t& oldTail); // 1050
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1071
	}
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 1147
	CTSQueue<std::function<void()>::InterlockedCompareExchangeNodeLink(
						volatile union NodeLink_t* pLink,
						const union NodeLink_t& value,
						const union NodeLink_t& comperand); // 1060
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<int, 4>::operator--(); // 592
	CInterlockedIntT<int, 4>::operator--(
			int);  // 1072
} /* size: 308, variables: 11, inline expansions: 6 (69 bytes) */

// <044C339B> ../public/tier0/tslist.h:998
// variables: 16
// function calls: 11
void CTSQueue<std::function<void()>::Pop()>*, false>* this)
{
	const char   __FUNCTION__; // 6487
	volatile union NodeLink_t* pHead; // 1003
	volatile union NodeLink_t* pTail; // 1004
	volatile Node_t** pHeadNode; // 1005
	volatile volatile intp* pHeadSequence; // 1006
	volatile Node_t** pTailNode; // 1007
	union NodeLink_t head; // 1009
	union NodeLink_t newHead; // 1010
	Node_t* pNext; // 1011
	intp tailSequence; // 1012
	function<void()>* elem; // 1013
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1000
	}
	{
		union NodeLink_t oldTail; // 1047
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 1147
		CTSQueue<std::function<void()>::InterlockedCompareExchangeNodeLink(
							volatile union NodeLink_t* pLink,
							const union NodeLink_t& value,
							const union NodeLink_t& comperand); // 1135
		CTSQueue<std::function<void()>::FinishPush(
				Node_t* pNode,
				const union NodeLink_t& oldTail); // 1050
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1071
	}
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 1147
	CTSQueue<std::function<void()>::InterlockedCompareExchangeNodeLink(
						volatile union NodeLink_t* pLink,
						const union NodeLink_t& value,
						const union NodeLink_t& comperand); // 1060
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<int, 4>::operator--(); // 592
	CInterlockedIntT<int, 4>::operator--(
			int);  // 1072
} /* size: 308, variables: 11, inline expansions: 6 (69 bytes) */

// <044981A5> ../public/tier0/tslist.h:998
// variables: 14
// function calls: 11
void CTSQueue<QueuedSweepNode_t, false>::Pop()
{
	const char   __FUNCTION__; // 6487
	volatile union NodeLink_t* pHead; // 1003
	volatile union NodeLink_t* pTail; // 1004
	volatile Node_t** pHeadNode; // 1005
	volatile volatile intp* pHeadSequence; // 1006
	volatile Node_t** pTailNode; // 1007
	union NodeLink_t head; // 1009
	union NodeLink_t newHead; // 1010
	Node_t* pNext; // 1011
	intp tailSequence; // 1012
	QueuedSweepNode_t elem; // 1013
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1000
	}
	{
		union NodeLink_t oldTail; // 1047
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 1147
		CTSQueue<QueuedSweepNode_t, false>::InterlockedCompareExchangeNodeLink(
							volatile union NodeLink_t* pLink,
							const union NodeLink_t& value,
							const union NodeLink_t& comperand);  // 1135
		CTSQueue<QueuedSweepNode_t, false>::FinishPush(
				Node_t* pNode,
				const union NodeLink_t& oldTail);  // 1050
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1071
	}
	QueuedSweepNode_t::QueuedSweepNode_t(); // 1013
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 1147
	CTSQueue<QueuedSweepNode_t, false>::InterlockedCompareExchangeNodeLink(
						volatile union NodeLink_t* pLink,
						const union NodeLink_t& value,
						const union NodeLink_t& comperand);  // 1060
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<int, 4>::operator--(); // 592
	CInterlockedIntT<int, 4>::operator--(
			int);  // 1072
} /* size: 490, variables: 11, inline expansions: 7 (78 bytes) */

// <04497CC6> ../public/tier0/tslist.h:998
// variables: 14
// function calls: 10
void CTSQueue<SweepGroup_t::Pop()
{
	const char   __FUNCTION__; // 6487
	volatile union NodeLink_t* pHead; // 1003
	volatile union NodeLink_t* pTail; // 1004
	volatile Node_t** pHeadNode; // 1005
	volatile volatile intp* pHeadSequence; // 1006
	volatile Node_t** pTailNode; // 1007
	union NodeLink_t head; // 1009
	union NodeLink_t newHead; // 1010
	Node_t* pNext; // 1011
	intp tailSequence; // 1012
	SweepGroup_t* elem; // 1013
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1000
	}
	{
		union NodeLink_t oldTail; // 1047
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 1147
		CTSQueue<SweepGroup_t::InterlockedCompareExchangeNodeLink(
							volatile union NodeLink_t* pLink,
							const union NodeLink_t& value,
							const union NodeLink_t& comperand);  // 1135
		CTSQueue<SweepGroup_t::FinishPush(
				Node_t* pNode,
				const union NodeLink_t& oldTail);  // 1050
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1071
	}
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 1147
	CTSQueue<SweepGroup_t::InterlockedCompareExchangeNodeLink(
						volatile union NodeLink_t* pLink,
						const union NodeLink_t& value,
						const union NodeLink_t& comperand);  // 1060
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<int, 4>::operator--(); // 592
	CInterlockedIntT<int, 4>::operator--(
			int);  // 1072
} /* size: 308, variables: 11, inline expansions: 6 (69 bytes) */

// <02E98038> ../public/tier0/tslist.h:998
// variables: 14
// function calls: 10
void CTSQueue<CSceneObject::Pop()
{
	const char   __FUNCTION__; // 63250
	volatile union NodeLink_t* pHead; // 1003
	volatile union NodeLink_t* pTail; // 1004
	volatile Node_t** pHeadNode; // 1005
	volatile volatile intp* pHeadSequence; // 1006
	volatile Node_t** pTailNode; // 1007
	union NodeLink_t head; // 1009
	union NodeLink_t newHead; // 1010
	Node_t* pNext; // 1011
	intp tailSequence; // 1012
	CSceneObject* elem; // 1013
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1000
	}
	{
		union NodeLink_t oldTail; // 1047
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 1147
		CTSQueue<CSceneObject::InterlockedCompareExchangeNodeLink(
							volatile union NodeLink_t* pLink,
							const union NodeLink_t& value,
							const union NodeLink_t& comperand);  // 1135
		CTSQueue<CSceneObject::FinishPush(
				Node_t* pNode,
				const union NodeLink_t& oldTail);  // 1050
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1071
	}
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 1147
	CTSQueue<CSceneObject::InterlockedCompareExchangeNodeLink(
						volatile union NodeLink_t* pLink,
						const union NodeLink_t& value,
						const union NodeLink_t& comperand);  // 1060
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<int, 4>::operator--(); // 592
	CInterlockedIntT<int, 4>::operator--(
			int);  // 1072
} /* size: 308, variables: 11, inline expansions: 6 (69 bytes) */

// <024DBB78> ../public/tier0/tslist.h:998
// variables: 14
// function calls: 10
void CTSQueue<CAsyncWaveData::Pop()
{
	const char   __FUNCTION__; // 16888
	volatile union NodeLink_t* pHead; // 1003
	volatile union NodeLink_t* pTail; // 1004
	volatile Node_t** pHeadNode; // 1005
	volatile volatile intp* pHeadSequence; // 1006
	volatile Node_t** pTailNode; // 1007
	union NodeLink_t head; // 1009
	union NodeLink_t newHead; // 1010
	Node_t* pNext; // 1011
	intp tailSequence; // 1012
	CAsyncWaveData* elem; // 1013
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1000
	}
	{
		union NodeLink_t oldTail; // 1047
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 1147
		CTSQueue<CAsyncWaveData::InterlockedCompareExchangeNodeLink(
							volatile union NodeLink_t* pLink,
							const union NodeLink_t& value,
							const union NodeLink_t& comperand);  // 1135
		CTSQueue<CAsyncWaveData::FinishPush(
				Node_t* pNode,
				const union NodeLink_t& oldTail);  // 1050
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1071
	}
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 1147
	CTSQueue<CAsyncWaveData::InterlockedCompareExchangeNodeLink(
						volatile union NodeLink_t* pLink,
						const union NodeLink_t& value,
						const union NodeLink_t& comperand);  // 1060
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<int, 4>::operator--(); // 592
	CInterlockedIntT<int, 4>::operator--(
			int);  // 1072
} /* size: 308, variables: 11, inline expansions: 6 (69 bytes) */

// <0235277D> ../public/tier0/tslist.h:998
// variables: 14
// function calls: 10
void CTSQueue<CResourceManifest::Pop()
{
	const char   __FUNCTION__; // 58267
	volatile union NodeLink_t* pHead; // 1003
	volatile union NodeLink_t* pTail; // 1004
	volatile Node_t** pHeadNode; // 1005
	volatile volatile intp* pHeadSequence; // 1006
	volatile Node_t** pTailNode; // 1007
	union NodeLink_t head; // 1009
	union NodeLink_t newHead; // 1010
	Node_t* pNext; // 1011
	intp tailSequence; // 1012
	CResourceManifest* elem; // 1013
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1000
	}
	{
		union NodeLink_t oldTail; // 1047
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 1147
		CTSQueue<CResourceManifest::InterlockedCompareExchangeNodeLink(
							volatile union NodeLink_t* pLink,
							const union NodeLink_t& value,
							const union NodeLink_t& comperand);  // 1135
		CTSQueue<CResourceManifest::FinishPush(
				Node_t* pNode,
				const union NodeLink_t& oldTail);  // 1050
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1071
	}
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 1147
	CTSQueue<CResourceManifest::InterlockedCompareExchangeNodeLink(
						volatile union NodeLink_t* pLink,
						const union NodeLink_t& value,
						const union NodeLink_t& comperand);  // 1060
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<int, 4>::operator--(); // 592
	CInterlockedIntT<int, 4>::operator--(
			int);  // 1072
} /* size: 308, variables: 11, inline expansions: 6 (69 bytes) */

// <02351B57> ../public/tier0/tslist.h:998
// variables: 14
// function calls: 10
void CTSQueue<const ResourceBindingBase_t::Pop()
{
	const char   __FUNCTION__; // 58267
	volatile union NodeLink_t* pHead; // 1003
	volatile union NodeLink_t* pTail; // 1004
	volatile Node_t** pHeadNode; // 1005
	volatile volatile intp* pHeadSequence; // 1006
	volatile Node_t** pTailNode; // 1007
	union NodeLink_t head; // 1009
	union NodeLink_t newHead; // 1010
	Node_t* pNext; // 1011
	intp tailSequence; // 1012
	const ResourceBindingBase_t* elem; // 1013
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1000
	}
	{
		union NodeLink_t oldTail; // 1047
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 1147
		CTSQueue<const ResourceBindingBase_t::InterlockedCompareExchangeNodeLink(
							volatile union NodeLink_t* pLink,
							const union NodeLink_t& value,
							const union NodeLink_t& comperand);  // 1135
		CTSQueue<const ResourceBindingBase_t::FinishPush(
				Node_t* pNode,
				const union NodeLink_t& oldTail);  // 1050
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1071
	}
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 1147
	CTSQueue<const ResourceBindingBase_t::InterlockedCompareExchangeNodeLink(
						volatile union NodeLink_t* pLink,
						const union NodeLink_t& value,
						const union NodeLink_t& comperand);  // 1060
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<int, 4>::operator--(); // 592
	CInterlockedIntT<int, 4>::operator--(
			int);  // 1072
} /* size: 308, variables: 11, inline expansions: 6 (69 bytes) */

// <02F3692D> ../public/tier0/tslist.h:998
// variables: 16
// function calls: 11
void CTSQueue<std::function<void()>::Pop()>*, false>* this)
{
	const char   __FUNCTION__; // 11360
	volatile union NodeLink_t* pHead; // 1003
	volatile union NodeLink_t* pTail; // 1004
	volatile Node_t** pHeadNode; // 1005
	volatile volatile intp* pHeadSequence; // 1006
	volatile Node_t** pTailNode; // 1007
	union NodeLink_t head; // 1009
	union NodeLink_t newHead; // 1010
	Node_t* pNext; // 1011
	intp tailSequence; // 1012
	function<void()>* elem; // 1013
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1000
	}
	{
		union NodeLink_t oldTail; // 1047
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 1147
		CTSQueue<std::function<void()>::InterlockedCompareExchangeNodeLink(
							volatile union NodeLink_t* pLink,
							const union NodeLink_t& value,
							const union NodeLink_t& comperand); // 1135
		CTSQueue<std::function<void()>::FinishPush(
				Node_t* pNode,
				const union NodeLink_t& oldTail); // 1050
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1071
	}
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 1147
	CTSQueue<std::function<void()>::InterlockedCompareExchangeNodeLink(
						volatile union NodeLink_t* pLink,
						const union NodeLink_t& value,
						const union NodeLink_t& comperand); // 1060
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<int, 4>::operator--(); // 592
	CInterlockedIntT<int, 4>::operator--(
			int);  // 1072
} /* size: 0, variables: 11, inline expansions: 6 (0 bytes) */

// <01B1EAAD> ../public/tier0/tslist.h:998
// variables: 16
// function calls: 11
void CTSQueue<std::function<void()>::Pop()>*, false>* this)
{
	const char   __FUNCTION__; // 46876
	volatile union NodeLink_t* pHead; // 1003
	volatile union NodeLink_t* pTail; // 1004
	volatile Node_t** pHeadNode; // 1005
	volatile volatile intp* pHeadSequence; // 1006
	volatile Node_t** pTailNode; // 1007
	union NodeLink_t head; // 1009
	union NodeLink_t newHead; // 1010
	Node_t* pNext; // 1011
	intp tailSequence; // 1012
	function<void()>* elem; // 1013
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1000
	}
	{
		union NodeLink_t oldTail; // 1047
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 1147
		CTSQueue<std::function<void()>::InterlockedCompareExchangeNodeLink(
							volatile union NodeLink_t* pLink,
							const union NodeLink_t& value,
							const union NodeLink_t& comperand); // 1135
		CTSQueue<std::function<void()>::FinishPush(
				Node_t* pNode,
				const union NodeLink_t& oldTail); // 1050
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1071
	}
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 1147
	CTSQueue<std::function<void()>::InterlockedCompareExchangeNodeLink(
						volatile union NodeLink_t* pLink,
						const union NodeLink_t& value,
						const union NodeLink_t& comperand); // 1060
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<int, 4>::operator--(); // 592
	CInterlockedIntT<int, 4>::operator--(
			int);  // 1072
} /* size: 308, variables: 11, inline expansions: 6 (69 bytes) */

// <01AF38B7> ../public/tier0/tslist.h:998
// variables: 14
// function calls: 11
void CTSQueue<QueuedSweepNode_t, false>::Pop()
{
	const char   __FUNCTION__; // 46876
	volatile union NodeLink_t* pHead; // 1003
	volatile union NodeLink_t* pTail; // 1004
	volatile Node_t** pHeadNode; // 1005
	volatile volatile intp* pHeadSequence; // 1006
	volatile Node_t** pTailNode; // 1007
	union NodeLink_t head; // 1009
	union NodeLink_t newHead; // 1010
	Node_t* pNext; // 1011
	intp tailSequence; // 1012
	QueuedSweepNode_t elem; // 1013
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1000
	}
	{
		union NodeLink_t oldTail; // 1047
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 1147
		CTSQueue<QueuedSweepNode_t, false>::InterlockedCompareExchangeNodeLink(
							volatile union NodeLink_t* pLink,
							const union NodeLink_t& value,
							const union NodeLink_t& comperand);  // 1135
		CTSQueue<QueuedSweepNode_t, false>::FinishPush(
				Node_t* pNode,
				const union NodeLink_t& oldTail);  // 1050
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1071
	}
	QueuedSweepNode_t::QueuedSweepNode_t(); // 1013
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 1147
	CTSQueue<QueuedSweepNode_t, false>::InterlockedCompareExchangeNodeLink(
						volatile union NodeLink_t* pLink,
						const union NodeLink_t& value,
						const union NodeLink_t& comperand);  // 1060
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<int, 4>::operator--(); // 592
	CInterlockedIntT<int, 4>::operator--(
			int);  // 1072
} /* size: 490, variables: 11, inline expansions: 7 (78 bytes) */

// <01AF33D8> ../public/tier0/tslist.h:998
// variables: 14
// function calls: 10
void CTSQueue<SweepGroup_t::Pop()
{
	const char   __FUNCTION__; // 46876
	volatile union NodeLink_t* pHead; // 1003
	volatile union NodeLink_t* pTail; // 1004
	volatile Node_t** pHeadNode; // 1005
	volatile volatile intp* pHeadSequence; // 1006
	volatile Node_t** pTailNode; // 1007
	union NodeLink_t head; // 1009
	union NodeLink_t newHead; // 1010
	Node_t* pNext; // 1011
	intp tailSequence; // 1012
	SweepGroup_t* elem; // 1013
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1000
	}
	{
		union NodeLink_t oldTail; // 1047
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 1147
		CTSQueue<SweepGroup_t::InterlockedCompareExchangeNodeLink(
							volatile union NodeLink_t* pLink,
							const union NodeLink_t& value,
							const union NodeLink_t& comperand);  // 1135
		CTSQueue<SweepGroup_t::FinishPush(
				Node_t* pNode,
				const union NodeLink_t& oldTail);  // 1050
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1071
	}
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 1147
	CTSQueue<SweepGroup_t::InterlockedCompareExchangeNodeLink(
						volatile union NodeLink_t* pLink,
						const union NodeLink_t& value,
						const union NodeLink_t& comperand);  // 1060
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<int, 4>::operator--(); // 592
	CInterlockedIntT<int, 4>::operator--(
			int);  // 1072
} /* size: 308, variables: 11, inline expansions: 6 (69 bytes) */

// <00B71353> ../public/tier0/tslist.h:998
// variables: 14
// function calls: 10
void CTSQueue<VkFence_T::Pop()
{
	const char   __FUNCTION__; // 26638
	volatile union NodeLink_t* pHead; // 1003
	volatile union NodeLink_t* pTail; // 1004
	volatile Node_t** pHeadNode; // 1005
	volatile volatile intp* pHeadSequence; // 1006
	volatile Node_t** pTailNode; // 1007
	union NodeLink_t head; // 1009
	union NodeLink_t newHead; // 1010
	Node_t* pNext; // 1011
	intp tailSequence; // 1012
	VkFence_T* elem; // 1013
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1000
	}
	{
		union NodeLink_t oldTail; // 1047
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 1147
		CTSQueue<VkFence_T::InterlockedCompareExchangeNodeLink(
							volatile union NodeLink_t* pLink,
							const union NodeLink_t& value,
							const union NodeLink_t& comperand);  // 1135
		CTSQueue<VkFence_T::FinishPush(
				Node_t* pNode,
				const union NodeLink_t& oldTail);  // 1050
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1071
	}
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 1147
	CTSQueue<VkFence_T::InterlockedCompareExchangeNodeLink(
						volatile union NodeLink_t* pLink,
						const union NodeLink_t& value,
						const union NodeLink_t& comperand);  // 1060
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<int, 4>::operator--(); // 592
	CInterlockedIntT<int, 4>::operator--(
			int);  // 1072
} /* size: 308, variables: 11, inline expansions: 6 (69 bytes) */

// <00B6EBCF> ../public/tier0/tslist.h:998
// variables: 14
// function calls: 10
void CTSQueue<CCommandStream::Pop()
{
	const char   __FUNCTION__; // 26638
	volatile union NodeLink_t* pHead; // 1003
	volatile union NodeLink_t* pTail; // 1004
	volatile Node_t** pHeadNode; // 1005
	volatile volatile intp* pHeadSequence; // 1006
	volatile Node_t** pTailNode; // 1007
	union NodeLink_t head; // 1009
	union NodeLink_t newHead; // 1010
	Node_t* pNext; // 1011
	intp tailSequence; // 1012
	CCommandStream* elem; // 1013
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1000
	}
	{
		union NodeLink_t oldTail; // 1047
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 1147
		CTSQueue<CCommandStream::InterlockedCompareExchangeNodeLink(
							volatile union NodeLink_t* pLink,
							const union NodeLink_t& value,
							const union NodeLink_t& comperand);  // 1135
		CTSQueue<CCommandStream::FinishPush(
				Node_t* pNode,
				const union NodeLink_t& oldTail);  // 1050
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1071
	}
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 1147
	CTSQueue<CCommandStream::InterlockedCompareExchangeNodeLink(
						volatile union NodeLink_t* pLink,
						const union NodeLink_t& value,
						const union NodeLink_t& comperand);  // 1060
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<int, 4>::operator--(); // 592
	CInterlockedIntT<int, 4>::operator--(
			int);  // 1072
} /* size: 308, variables: 11, inline expansions: 6 (69 bytes) */

// <009D829A> ../public/tier0/tslist.h:998
// variables: 14
// function calls: 10
void CTSQueue<DynamicVertexBufferHandle_t__::Pop()
{
	const char   __FUNCTION__; // 28435
	volatile union NodeLink_t* pHead; // 1003
	volatile union NodeLink_t* pTail; // 1004
	volatile Node_t** pHeadNode; // 1005
	volatile volatile intp* pHeadSequence; // 1006
	volatile Node_t** pTailNode; // 1007
	union NodeLink_t head; // 1009
	union NodeLink_t newHead; // 1010
	Node_t* pNext; // 1011
	intp tailSequence; // 1012
	DynamicVertexBufferHandle_t__* elem; // 1013
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1000
	}
	{
		union NodeLink_t oldTail; // 1047
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 1147
		CTSQueue<DynamicVertexBufferHandle_t__::InterlockedCompareExchangeNodeLink(
							volatile union NodeLink_t* pLink,
							const union NodeLink_t& value,
							const union NodeLink_t& comperand);  // 1135
		CTSQueue<DynamicVertexBufferHandle_t__::FinishPush(
				Node_t* pNode,
				const union NodeLink_t& oldTail);  // 1050
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1071
	}
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 1147
	CTSQueue<DynamicVertexBufferHandle_t__::InterlockedCompareExchangeNodeLink(
						volatile union NodeLink_t* pLink,
						const union NodeLink_t& value,
						const union NodeLink_t& comperand);  // 1060
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<int, 4>::operator--(); // 592
	CInterlockedIntT<int, 4>::operator--(
			int);  // 1072
} /* size: 308, variables: 11, inline expansions: 6 (69 bytes) */

// <009D7D7A> ../public/tier0/tslist.h:998
// variables: 14
// function calls: 10
void CTSQueue<DynamicIndexBufferHandle_t__::Pop()
{
	const char   __FUNCTION__; // 28435
	volatile union NodeLink_t* pHead; // 1003
	volatile union NodeLink_t* pTail; // 1004
	volatile Node_t** pHeadNode; // 1005
	volatile volatile intp* pHeadSequence; // 1006
	volatile Node_t** pTailNode; // 1007
	union NodeLink_t head; // 1009
	union NodeLink_t newHead; // 1010
	Node_t* pNext; // 1011
	intp tailSequence; // 1012
	DynamicIndexBufferHandle_t__* elem; // 1013
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1000
	}
	{
		union NodeLink_t oldTail; // 1047
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 1147
		CTSQueue<DynamicIndexBufferHandle_t__::InterlockedCompareExchangeNodeLink(
							volatile union NodeLink_t* pLink,
							const union NodeLink_t& value,
							const union NodeLink_t& comperand);  // 1135
		CTSQueue<DynamicIndexBufferHandle_t__::FinishPush(
				Node_t* pNode,
				const union NodeLink_t& oldTail);  // 1050
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1071
	}
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 1147
	CTSQueue<DynamicIndexBufferHandle_t__::InterlockedCompareExchangeNodeLink(
						volatile union NodeLink_t* pLink,
						const union NodeLink_t& value,
						const union NodeLink_t& comperand);  // 1060
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<int, 4>::operator--(); // 592
	CInterlockedIntT<int, 4>::operator--(
			int);  // 1072
} /* size: 308, variables: 11, inline expansions: 6 (69 bytes) */

// <0070A902> ../public/tier0/tslist.h:998
// variables: 14
// function calls: 10
void CTSQueue<PipelineObjectVulkan_t::Pop()
{
	const char   __FUNCTION__; // 56596
	volatile union NodeLink_t* pHead; // 1003
	volatile union NodeLink_t* pTail; // 1004
	volatile Node_t** pHeadNode; // 1005
	volatile volatile intp* pHeadSequence; // 1006
	volatile Node_t** pTailNode; // 1007
	union NodeLink_t head; // 1009
	union NodeLink_t newHead; // 1010
	Node_t* pNext; // 1011
	intp tailSequence; // 1012
	PipelineObjectVulkan_t* elem; // 1013
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1000
	}
	{
		union NodeLink_t oldTail; // 1047
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 1147
		CTSQueue<PipelineObjectVulkan_t::InterlockedCompareExchangeNodeLink(
							volatile union NodeLink_t* pLink,
							const union NodeLink_t& value,
							const union NodeLink_t& comperand);  // 1135
		CTSQueue<PipelineObjectVulkan_t::FinishPush(
				Node_t* pNode,
				const union NodeLink_t& oldTail);  // 1050
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1071
	}
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 1147
	CTSQueue<PipelineObjectVulkan_t::InterlockedCompareExchangeNodeLink(
						volatile union NodeLink_t* pLink,
						const union NodeLink_t& value,
						const union NodeLink_t& comperand);  // 1060
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<int, 4>::operator--(); // 592
	CInterlockedIntT<int, 4>::operator--(
			int);  // 1072
} /* size: 308, variables: 11, inline expansions: 6 (69 bytes) */

// <0070A2D6> ../public/tier0/tslist.h:998
// variables: 14
// function calls: 10
void CTSQueue<VkShaderModule_T::Pop()
{
	const char   __FUNCTION__; // 56596
	volatile union NodeLink_t* pHead; // 1003
	volatile union NodeLink_t* pTail; // 1004
	volatile Node_t** pHeadNode; // 1005
	volatile volatile intp* pHeadSequence; // 1006
	volatile Node_t** pTailNode; // 1007
	union NodeLink_t head; // 1009
	union NodeLink_t newHead; // 1010
	Node_t* pNext; // 1011
	intp tailSequence; // 1012
	VkShaderModule_T* elem; // 1013
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1000
	}
	{
		union NodeLink_t oldTail; // 1047
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 1147
		CTSQueue<VkShaderModule_T::InterlockedCompareExchangeNodeLink(
							volatile union NodeLink_t* pLink,
							const union NodeLink_t& value,
							const union NodeLink_t& comperand);  // 1135
		CTSQueue<VkShaderModule_T::FinishPush(
				Node_t* pNode,
				const union NodeLink_t& oldTail);  // 1050
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1071
	}
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 1147
	CTSQueue<VkShaderModule_T::InterlockedCompareExchangeNodeLink(
						volatile union NodeLink_t* pLink,
						const union NodeLink_t& value,
						const union NodeLink_t& comperand);  // 1060
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<int, 4>::operator--(); // 592
	CInterlockedIntT<int, 4>::operator--(
			int);  // 1072
} /* size: 308, variables: 11, inline expansions: 6 (69 bytes) */

// <00709E1E> ../public/tier0/tslist.h:998
// variables: 14
// function calls: 10
void CTSQueue<CPipelineManagerVulkan::LinkTimeOptimizedPipeline_t, false>::Pop()
{
	const char   __FUNCTION__; // 56596
	volatile union NodeLink_t* pHead; // 1003
	volatile union NodeLink_t* pTail; // 1004
	volatile Node_t** pHeadNode; // 1005
	volatile volatile intp* pHeadSequence; // 1006
	volatile Node_t** pTailNode; // 1007
	union NodeLink_t head; // 1009
	union NodeLink_t newHead; // 1010
	Node_t* pNext; // 1011
	intp tailSequence; // 1012
	LinkTimeOptimizedPipeline_t elem; // 1013
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1000
	}
	{
		union NodeLink_t oldTail; // 1047
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 1147
		CTSQueue<CPipelineManagerVulkan::LinkTimeOptimizedPipeline_t, false>::InterlockedCompareExchangeNodeLink(
							volatile union NodeLink_t* pLink,
							const union NodeLink_t& value,
							const union NodeLink_t& comperand);  // 1135
		CTSQueue<CPipelineManagerVulkan::LinkTimeOptimizedPipeline_t, false>::FinishPush(
				Node_t* pNode,
				const union NodeLink_t& oldTail);  // 1050
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1071
	}
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 1147
	CTSQueue<CPipelineManagerVulkan::LinkTimeOptimizedPipeline_t, false>::InterlockedCompareExchangeNodeLink(
						volatile union NodeLink_t* pLink,
						const union NodeLink_t& value,
						const union NodeLink_t& comperand);  // 1060
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<int, 4>::operator--(); // 592
	CInterlockedIntT<int, 4>::operator--(
			int);  // 1072
} /* size: 333, variables: 11, inline expansions: 6 (69 bytes) */

// <00709892> ../public/tier0/tslist.h:998
// variables: 14
// function calls: 12
void CTSQueue<CPipelineManagerVulkan::PreWarmPipeline_t, false>::Pop()
{
	const char   __FUNCTION__; // 56596
	volatile union NodeLink_t* pHead; // 1003
	volatile union NodeLink_t* pTail; // 1004
	volatile Node_t** pHeadNode; // 1005
	volatile volatile intp* pHeadSequence; // 1006
	volatile Node_t** pTailNode; // 1007
	union NodeLink_t head; // 1009
	union NodeLink_t newHead; // 1010
	Node_t* pNext; // 1011
	intp tailSequence; // 1012
	PreWarmPipeline_t elem; // 1013
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1000
	}
	{
		union NodeLink_t oldTail; // 1047
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 1147
		CTSQueue<CPipelineManagerVulkan::PreWarmPipeline_t, false>::InterlockedCompareExchangeNodeLink(
							volatile union NodeLink_t* pLink,
							const union NodeLink_t& value,
							const union NodeLink_t& comperand);  // 1135
		CTSQueue<CPipelineManagerVulkan::PreWarmPipeline_t, false>::FinishPush(
				Node_t* pNode,
				const union NodeLink_t& oldTail);  // 1050
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1071
	}
	PipelineCreateInfo_t::PipelineCreateInfo_t(); // 957
	PreWarmPipeline_t::PreWarmPipeline_t(); // 1013
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 1147
	CTSQueue<CPipelineManagerVulkan::PreWarmPipeline_t, false>::InterlockedCompareExchangeNodeLink(
						volatile union NodeLink_t* pLink,
						const union NodeLink_t& value,
						const union NodeLink_t& comperand);  // 1060
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<int, 4>::operator--(); // 592
	CInterlockedIntT<int, 4>::operator--(
			int);  // 1072
} /* size: 486, variables: 11, inline expansions: 8 (69 bytes) */

// <006607B0> ../public/tier0/tslist.h:998
// variables: 14
// function calls: 11
void CTSQueue<CFossilizeStateCreator::RegisteredShader_t, false>::Pop()
{
	const char   __FUNCTION__; // 31696
	volatile union NodeLink_t* pHead; // 1003
	volatile union NodeLink_t* pTail; // 1004
	volatile Node_t** pHeadNode; // 1005
	volatile volatile intp* pHeadSequence; // 1006
	volatile Node_t** pTailNode; // 1007
	union NodeLink_t head; // 1009
	union NodeLink_t newHead; // 1010
	Node_t* pNext; // 1011
	intp tailSequence; // 1012
	RegisteredShader_t elem; // 1013
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1000
	}
	{
		union NodeLink_t oldTail; // 1047
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 1147
		CTSQueue<CFossilizeStateCreator::RegisteredShader_t, false>::InterlockedCompareExchangeNodeLink(
							volatile union NodeLink_t* pLink,
							const union NodeLink_t& value,
							const union NodeLink_t& comperand);  // 1135
		CTSQueue<CFossilizeStateCreator::RegisteredShader_t, false>::FinishPush(
				Node_t* pNode,
				const union NodeLink_t& oldTail);  // 1050
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1071
	}
	RegisteredShader_t::RegisteredShader_t(); // 1013
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 1147
	CTSQueue<CFossilizeStateCreator::RegisteredShader_t, false>::InterlockedCompareExchangeNodeLink(
						volatile union NodeLink_t* pLink,
						const union NodeLink_t& value,
						const union NodeLink_t& comperand);  // 1060
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<int, 4>::operator--(); // 592
	CInterlockedIntT<int, 4>::operator--(
			int);  // 1072
} /* size: 333, variables: 11, inline expansions: 7 (76 bytes) */

// <0058C187> ../public/tier0/tslist.h:998
// variables: 14
// function calls: 10
void CTSQueue<VkCommandBuffer_T::Pop()
{
	const char   __FUNCTION__; // 35100
	volatile union NodeLink_t* pHead; // 1003
	volatile union NodeLink_t* pTail; // 1004
	volatile Node_t** pHeadNode; // 1005
	volatile volatile intp* pHeadSequence; // 1006
	volatile Node_t** pTailNode; // 1007
	union NodeLink_t head; // 1009
	union NodeLink_t newHead; // 1010
	Node_t* pNext; // 1011
	intp tailSequence; // 1012
	VkCommandBuffer_T* elem; // 1013
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1000
	}
	{
		union NodeLink_t oldTail; // 1047
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 1147
		CTSQueue<VkCommandBuffer_T::InterlockedCompareExchangeNodeLink(
							volatile union NodeLink_t* pLink,
							const union NodeLink_t& value,
							const union NodeLink_t& comperand);  // 1135
		CTSQueue<VkCommandBuffer_T::FinishPush(
				Node_t* pNode,
				const union NodeLink_t& oldTail);  // 1050
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1071
	}
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 1147
	CTSQueue<VkCommandBuffer_T::InterlockedCompareExchangeNodeLink(
						volatile union NodeLink_t* pLink,
						const union NodeLink_t& value,
						const union NodeLink_t& comperand);  // 1060
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<int, 4>::operator--(); // 592
	CInterlockedIntT<int, 4>::operator--(
			int);  // 1072
} /* size: 308, variables: 11, inline expansions: 6 (69 bytes) */

// <0058A5BE> ../public/tier0/tslist.h:998
// variables: 14
// function calls: 10
void CTSQueue<CMemoryManagerVulkan::FencedResourceList_t, false>::Pop()
{
	const char   __FUNCTION__; // 35100
	volatile union NodeLink_t* pHead; // 1003
	volatile union NodeLink_t* pTail; // 1004
	volatile Node_t** pHeadNode; // 1005
	volatile volatile intp* pHeadSequence; // 1006
	volatile Node_t** pTailNode; // 1007
	union NodeLink_t head; // 1009
	union NodeLink_t newHead; // 1010
	Node_t* pNext; // 1011
	intp tailSequence; // 1012
	FencedResourceList_t elem; // 1013
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1000
	}
	{
		union NodeLink_t oldTail; // 1047
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 1147
		CTSQueue<CMemoryManagerVulkan::FencedResourceList_t, false>::InterlockedCompareExchangeNodeLink(
							volatile union NodeLink_t* pLink,
							const union NodeLink_t& value,
							const union NodeLink_t& comperand);  // 1135
		CTSQueue<CMemoryManagerVulkan::FencedResourceList_t, false>::FinishPush(
				Node_t* pNode,
				const union NodeLink_t& oldTail);  // 1050
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1071
	}
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 1147
	CTSQueue<CMemoryManagerVulkan::FencedResourceList_t, false>::InterlockedCompareExchangeNodeLink(
						volatile union NodeLink_t* pLink,
						const union NodeLink_t& value,
						const union NodeLink_t& comperand);  // 1060
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<int, 4>::operator--(); // 592
	CInterlockedIntT<int, 4>::operator--(
			int);  // 1072
} /* size: 347, variables: 11, inline expansions: 6 (75 bytes) */

// <0022DAE8> ../public/tier0/tslist.h:998
// variables: 14
// function calls: 10
void CTSQueue<CCommandStream::Pop()
{
	const char   __FUNCTION__; // 49521
	volatile union NodeLink_t* pHead; // 1003
	volatile union NodeLink_t* pTail; // 1004
	volatile Node_t** pHeadNode; // 1005
	volatile volatile intp* pHeadSequence; // 1006
	volatile Node_t** pTailNode; // 1007
	union NodeLink_t head; // 1009
	union NodeLink_t newHead; // 1010
	Node_t* pNext; // 1011
	intp tailSequence; // 1012
	CCommandStream* elem; // 1013
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1000
	}
	{
		union NodeLink_t oldTail; // 1047
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 1147
		CTSQueue<CCommandStream::InterlockedCompareExchangeNodeLink(
							volatile union NodeLink_t* pLink,
							const union NodeLink_t& value,
							const union NodeLink_t& comperand);  // 1135
		CTSQueue<CCommandStream::FinishPush(
				Node_t* pNode,
				const union NodeLink_t& oldTail);  // 1050
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1071
	}
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 1147
	CTSQueue<CCommandStream::InterlockedCompareExchangeNodeLink(
						volatile union NodeLink_t* pLink,
						const union NodeLink_t& value,
						const union NodeLink_t& comperand);  // 1060
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<int, 4>::operator--(); // 592
	CInterlockedIntT<int, 4>::operator--(
			int);  // 1072
} /* size: 308, variables: 11, inline expansions: 6 (69 bytes) */

// <001721EB> ../public/tier0/tslist.h:998
// variables: 14
// function calls: 10
void CTSQueue<DynamicVertexBufferHandle_t__::Pop()
{
	const char   __FUNCTION__; // 2307
	volatile union NodeLink_t* pHead; // 1003
	volatile union NodeLink_t* pTail; // 1004
	volatile Node_t** pHeadNode; // 1005
	volatile volatile intp* pHeadSequence; // 1006
	volatile Node_t** pTailNode; // 1007
	union NodeLink_t head; // 1009
	union NodeLink_t newHead; // 1010
	Node_t* pNext; // 1011
	intp tailSequence; // 1012
	DynamicVertexBufferHandle_t__* elem; // 1013
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1000
	}
	{
		union NodeLink_t oldTail; // 1047
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 1147
		CTSQueue<DynamicVertexBufferHandle_t__::InterlockedCompareExchangeNodeLink(
							volatile union NodeLink_t* pLink,
							const union NodeLink_t& value,
							const union NodeLink_t& comperand);  // 1135
		CTSQueue<DynamicVertexBufferHandle_t__::FinishPush(
				Node_t* pNode,
				const union NodeLink_t& oldTail);  // 1050
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1071
	}
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 1147
	CTSQueue<DynamicVertexBufferHandle_t__::InterlockedCompareExchangeNodeLink(
						volatile union NodeLink_t* pLink,
						const union NodeLink_t& value,
						const union NodeLink_t& comperand);  // 1060
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<int, 4>::operator--(); // 592
	CInterlockedIntT<int, 4>::operator--(
			int);  // 1072
} /* size: 308, variables: 11, inline expansions: 6 (69 bytes) */

// <00171D0C> ../public/tier0/tslist.h:998
// variables: 14
// function calls: 10
void CTSQueue<DynamicIndexBufferHandle_t__::Pop()
{
	const char   __FUNCTION__; // 2307
	volatile union NodeLink_t* pHead; // 1003
	volatile union NodeLink_t* pTail; // 1004
	volatile Node_t** pHeadNode; // 1005
	volatile volatile intp* pHeadSequence; // 1006
	volatile Node_t** pTailNode; // 1007
	union NodeLink_t head; // 1009
	union NodeLink_t newHead; // 1010
	Node_t* pNext; // 1011
	intp tailSequence; // 1012
	DynamicIndexBufferHandle_t__* elem; // 1013
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1000
	}
	{
		union NodeLink_t oldTail; // 1047
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 1147
		CTSQueue<DynamicIndexBufferHandle_t__::InterlockedCompareExchangeNodeLink(
							volatile union NodeLink_t* pLink,
							const union NodeLink_t& value,
							const union NodeLink_t& comperand);  // 1135
		CTSQueue<DynamicIndexBufferHandle_t__::FinishPush(
				Node_t* pNode,
				const union NodeLink_t& oldTail);  // 1050
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1071
	}
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 1147
	CTSQueue<DynamicIndexBufferHandle_t__::InterlockedCompareExchangeNodeLink(
						volatile union NodeLink_t* pLink,
						const union NodeLink_t& value,
						const union NodeLink_t& comperand);  // 1060
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<int, 4>::operator--(); // 592
	CInterlockedIntT<int, 4>::operator--(
			int);  // 1072
} /* size: 308, variables: 11, inline expansions: 6 (69 bytes) */

// <004F4C82> ../public/tier0/tslist.h:998
// variables: 14
// function calls: 10
void CTSQueue<int, true>::Pop()
{
	const char   __FUNCTION__; // 36746
	volatile union NodeLink_t* pHead; // 1003
	volatile union NodeLink_t* pTail; // 1004
	volatile Node_t** pHeadNode; // 1005
	volatile volatile intp* pHeadSequence; // 1006
	volatile Node_t** pTailNode; // 1007
	union NodeLink_t head; // 1009
	union NodeLink_t newHead; // 1010
	Node_t* pNext; // 1011
	intp tailSequence; // 1012
	int elem; // 1013
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1000
	}
	{
		union NodeLink_t oldTail; // 1047
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 1147
		CTSQueue<int, true>::InterlockedCompareExchangeNodeLink(
							volatile union NodeLink_t* pLink,
							const union NodeLink_t& value,
							const union NodeLink_t& comperand);  // 1135
		CTSQueue<int, true>::FinishPush(
				Node_t* pNode,
				const union NodeLink_t& oldTail);  // 1050
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1071
	}
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 1147
	CTSQueue<int, true>::InterlockedCompareExchangeNodeLink(
						volatile union NodeLink_t* pLink,
						const union NodeLink_t& value,
						const union NodeLink_t& comperand);  // 1060
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<int, 4>::operator--(); // 592
	CInterlockedIntT<int, 4>::operator--(
			int);  // 1072
} /* size: 371, variables: 11, inline expansions: 6 (75 bytes) */

// <0012A3DE> ../public/tier0/tslist.h:998
// variables: 14
// function calls: 10
void CTSQueue<CEventQueue::QueuedEvent_t, false>::Pop()
{
	const char   __FUNCTION__; // 57226
	volatile union NodeLink_t* pHead; // 1003
	volatile union NodeLink_t* pTail; // 1004
	volatile Node_t** pHeadNode; // 1005
	volatile volatile intp* pHeadSequence; // 1006
	volatile Node_t** pTailNode; // 1007
	union NodeLink_t head; // 1009
	union NodeLink_t newHead; // 1010
	Node_t* pNext; // 1011
	intp tailSequence; // 1012
	QueuedEvent_t elem; // 1013
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1000
	}
	{
		union NodeLink_t oldTail; // 1047
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 1147
		CTSQueue<CEventQueue::QueuedEvent_t, false>::InterlockedCompareExchangeNodeLink(
							volatile union NodeLink_t* pLink,
							const union NodeLink_t& value,
							const union NodeLink_t& comperand);  // 1135
		CTSQueue<CEventQueue::QueuedEvent_t, false>::FinishPush(
				Node_t* pNode,
				const union NodeLink_t& oldTail);  // 1050
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1071
	}
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 1147
	CTSQueue<CEventQueue::QueuedEvent_t, false>::InterlockedCompareExchangeNodeLink(
						volatile union NodeLink_t* pLink,
						const union NodeLink_t& value,
						const union NodeLink_t& comperand);  // 1060
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<int, 4>::operator--(); // 592
	CInterlockedIntT<int, 4>::operator--(
			int);  // 1072
} /* size: 333, variables: 11, inline expansions: 6 (69 bytes) */

// <00129C7F> ../public/tier0/tslist.h:998
// variables: 14
// function calls: 10
void CTSQueue<CFunctorCallback::Pop()
{
	const char   __FUNCTION__; // 57226
	volatile union NodeLink_t* pHead; // 1003
	volatile union NodeLink_t* pTail; // 1004
	volatile Node_t** pHeadNode; // 1005
	volatile volatile intp* pHeadSequence; // 1006
	volatile Node_t** pTailNode; // 1007
	union NodeLink_t head; // 1009
	union NodeLink_t newHead; // 1010
	Node_t* pNext; // 1011
	intp tailSequence; // 1012
	CFunctorCallback* elem; // 1013
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1000
	}
	{
		union NodeLink_t oldTail; // 1047
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 1147
		CTSQueue<CFunctorCallback::InterlockedCompareExchangeNodeLink(
							volatile union NodeLink_t* pLink,
							const union NodeLink_t& value,
							const union NodeLink_t& comperand);  // 1135
		CTSQueue<CFunctorCallback::FinishPush(
				Node_t* pNode,
				const union NodeLink_t& oldTail);  // 1050
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1071
	}
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 1147
	CTSQueue<CFunctorCallback::InterlockedCompareExchangeNodeLink(
						volatile union NodeLink_t* pLink,
						const union NodeLink_t& value,
						const union NodeLink_t& comperand);  // 1060
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<int, 4>::operator--(); // 592
	CInterlockedIntT<int, 4>::operator--(
			int);  // 1072
} /* size: 308, variables: 11, inline expansions: 6 (69 bytes) */

// <0005A34D> ../public/tier0/tslist.h:998
// variables: 16
// function calls: 11
void CTSQueue<std::function<void()>::Pop()>*, false>* this)
{
	const char   __FUNCTION__; // 58960
	volatile union NodeLink_t* pHead; // 1003
	volatile union NodeLink_t* pTail; // 1004
	volatile Node_t** pHeadNode; // 1005
	volatile volatile intp* pHeadSequence; // 1006
	volatile Node_t** pTailNode; // 1007
	union NodeLink_t head; // 1009
	union NodeLink_t newHead; // 1010
	Node_t* pNext; // 1011
	intp tailSequence; // 1012
	function<void()>* elem; // 1013
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1000
	}
	{
		union NodeLink_t oldTail; // 1047
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 1147
		CTSQueue<std::function<void()>::InterlockedCompareExchangeNodeLink(
							volatile union NodeLink_t* pLink,
							const union NodeLink_t& value,
							const union NodeLink_t& comperand); // 1135
		CTSQueue<std::function<void()>::FinishPush(
				Node_t* pNode,
				const union NodeLink_t& oldTail); // 1050
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1071
	}
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 1147
	CTSQueue<std::function<void()>::InterlockedCompareExchangeNodeLink(
						volatile union NodeLink_t* pLink,
						const union NodeLink_t& value,
						const union NodeLink_t& comperand); // 1060
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<int, 4>::operator--(); // 592
	CInterlockedIntT<int, 4>::operator--(
			int);  // 1072
} /* size: 308, variables: 11, inline expansions: 6 (69 bytes) */

// <01720565> ../public/tier0/tslist.h:998
// variables: 16
// function calls: 11
void CTSQueue<std::function<void()>::Pop()>*, false>* this)
{
	const char   __FUNCTION__; // 1544
	volatile union NodeLink_t* pHead; // 1003
	volatile union NodeLink_t* pTail; // 1004
	volatile Node_t** pHeadNode; // 1005
	volatile volatile intp* pHeadSequence; // 1006
	volatile Node_t** pTailNode; // 1007
	union NodeLink_t head; // 1009
	union NodeLink_t newHead; // 1010
	Node_t* pNext; // 1011
	intp tailSequence; // 1012
	function<void()>* elem; // 1013
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1000
	}
	{
		union NodeLink_t oldTail; // 1047
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 1147
		CTSQueue<std::function<void()>::InterlockedCompareExchangeNodeLink(
							volatile union NodeLink_t* pLink,
							const union NodeLink_t& value,
							const union NodeLink_t& comperand); // 1135
		CTSQueue<std::function<void()>::FinishPush(
				Node_t* pNode,
				const union NodeLink_t& oldTail); // 1050
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1071
	}
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 1147
	CTSQueue<std::function<void()>::InterlockedCompareExchangeNodeLink(
						volatile union NodeLink_t* pLink,
						const union NodeLink_t& value,
						const union NodeLink_t& comperand); // 1060
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<int, 4>::operator--(); // 592
	CInterlockedIntT<int, 4>::operator--(
			int);  // 1072
} /* size: 308, variables: 11, inline expansions: 6 (69 bytes) */

// <009A4310> ../public/tier0/tslist.h:998
// variables: 16
// function calls: 11
void CTSQueue<std::function<void()>::Pop()>*, false>* this)
{
	const char   __FUNCTION__; // 39596
	volatile union NodeLink_t* pHead; // 1003
	volatile union NodeLink_t* pTail; // 1004
	volatile Node_t** pHeadNode; // 1005
	volatile volatile intp* pHeadSequence; // 1006
	volatile Node_t** pTailNode; // 1007
	union NodeLink_t head; // 1009
	union NodeLink_t newHead; // 1010
	Node_t* pNext; // 1011
	intp tailSequence; // 1012
	function<void()>* elem; // 1013
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1000
	}
	{
		union NodeLink_t oldTail; // 1047
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 1147
		CTSQueue<std::function<void()>::InterlockedCompareExchangeNodeLink(
							volatile union NodeLink_t* pLink,
							const union NodeLink_t& value,
							const union NodeLink_t& comperand); // 1135
		CTSQueue<std::function<void()>::FinishPush(
				Node_t* pNode,
				const union NodeLink_t& oldTail); // 1050
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1071
	}
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 1147
	CTSQueue<std::function<void()>::InterlockedCompareExchangeNodeLink(
						volatile union NodeLink_t* pLink,
						const union NodeLink_t& value,
						const union NodeLink_t& comperand); // 1060
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<int, 4>::operator--(); // 592
	CInterlockedIntT<int, 4>::operator--(
			int);  // 1072
} /* size: 0, variables: 11, inline expansions: 6 (0 bytes) */

// <0097911A> ../public/tier0/tslist.h:998
// variables: 14
// function calls: 11
void CTSQueue<QueuedSweepNode_t, false>::Pop()
{
	const char   __FUNCTION__; // 39596
	volatile union NodeLink_t* pHead; // 1003
	volatile union NodeLink_t* pTail; // 1004
	volatile Node_t** pHeadNode; // 1005
	volatile volatile intp* pHeadSequence; // 1006
	volatile Node_t** pTailNode; // 1007
	union NodeLink_t head; // 1009
	union NodeLink_t newHead; // 1010
	Node_t* pNext; // 1011
	intp tailSequence; // 1012
	QueuedSweepNode_t elem; // 1013
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1000
	}
	{
		union NodeLink_t oldTail; // 1047
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 1147
		CTSQueue<QueuedSweepNode_t, false>::InterlockedCompareExchangeNodeLink(
							volatile union NodeLink_t* pLink,
							const union NodeLink_t& value,
							const union NodeLink_t& comperand);  // 1135
		CTSQueue<QueuedSweepNode_t, false>::FinishPush(
				Node_t* pNode,
				const union NodeLink_t& oldTail);  // 1050
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1071
	}
	QueuedSweepNode_t::QueuedSweepNode_t(); // 1013
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 1147
	CTSQueue<QueuedSweepNode_t, false>::InterlockedCompareExchangeNodeLink(
						volatile union NodeLink_t* pLink,
						const union NodeLink_t& value,
						const union NodeLink_t& comperand);  // 1060
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<int, 4>::operator--(); // 592
	CInterlockedIntT<int, 4>::operator--(
			int);  // 1072
} /* size: 0, variables: 11, inline expansions: 7 (0 bytes) */

// <00978C3B> ../public/tier0/tslist.h:998
// variables: 14
// function calls: 10
void CTSQueue<SweepGroup_t::Pop()
{
	const char   __FUNCTION__; // 39596
	volatile union NodeLink_t* pHead; // 1003
	volatile union NodeLink_t* pTail; // 1004
	volatile Node_t** pHeadNode; // 1005
	volatile volatile intp* pHeadSequence; // 1006
	volatile Node_t** pTailNode; // 1007
	union NodeLink_t head; // 1009
	union NodeLink_t newHead; // 1010
	Node_t* pNext; // 1011
	intp tailSequence; // 1012
	SweepGroup_t* elem; // 1013
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1000
	}
	{
		union NodeLink_t oldTail; // 1047
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 1147
		CTSQueue<SweepGroup_t::InterlockedCompareExchangeNodeLink(
							volatile union NodeLink_t* pLink,
							const union NodeLink_t& value,
							const union NodeLink_t& comperand);  // 1135
		CTSQueue<SweepGroup_t::FinishPush(
				Node_t* pNode,
				const union NodeLink_t& oldTail);  // 1050
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1071
	}
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 1147
	CTSQueue<SweepGroup_t::InterlockedCompareExchangeNodeLink(
						volatile union NodeLink_t* pLink,
						const union NodeLink_t& value,
						const union NodeLink_t& comperand);  // 1060
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<int, 4>::operator--(); // 592
	CInterlockedIntT<int, 4>::operator--(
			int);  // 1072
} /* size: 0, variables: 11, inline expansions: 6 (0 bytes) */

// <00170466> ../public/tier0/tslist.h:998
// variables: 14
// function calls: 10
void CTSQueue<DynamicVertexBufferHandle_t__::Pop()
{
	const char   __FUNCTION__; // 31687
	volatile union NodeLink_t* pHead; // 1003
	volatile union NodeLink_t* pTail; // 1004
	volatile Node_t** pHeadNode; // 1005
	volatile volatile intp* pHeadSequence; // 1006
	volatile Node_t** pTailNode; // 1007
	union NodeLink_t head; // 1009
	union NodeLink_t newHead; // 1010
	Node_t* pNext; // 1011
	intp tailSequence; // 1012
	DynamicVertexBufferHandle_t__* elem; // 1013
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1000
	}
	{
		union NodeLink_t oldTail; // 1047
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 1147
		CTSQueue<DynamicVertexBufferHandle_t__::InterlockedCompareExchangeNodeLink(
							volatile union NodeLink_t* pLink,
							const union NodeLink_t& value,
							const union NodeLink_t& comperand);  // 1135
		CTSQueue<DynamicVertexBufferHandle_t__::FinishPush(
				Node_t* pNode,
				const union NodeLink_t& oldTail);  // 1050
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1071
	}
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 1147
	CTSQueue<DynamicVertexBufferHandle_t__::InterlockedCompareExchangeNodeLink(
						volatile union NodeLink_t* pLink,
						const union NodeLink_t& value,
						const union NodeLink_t& comperand);  // 1060
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<int, 4>::operator--(); // 592
	CInterlockedIntT<int, 4>::operator--(
			int);  // 1072
} /* size: 308, variables: 11, inline expansions: 6 (69 bytes) */

// <0016FF87> ../public/tier0/tslist.h:998
// variables: 14
// function calls: 10
void CTSQueue<DynamicIndexBufferHandle_t__::Pop()
{
	const char   __FUNCTION__; // 31687
	volatile union NodeLink_t* pHead; // 1003
	volatile union NodeLink_t* pTail; // 1004
	volatile Node_t** pHeadNode; // 1005
	volatile volatile intp* pHeadSequence; // 1006
	volatile Node_t** pTailNode; // 1007
	union NodeLink_t head; // 1009
	union NodeLink_t newHead; // 1010
	Node_t* pNext; // 1011
	intp tailSequence; // 1012
	DynamicIndexBufferHandle_t__* elem; // 1013
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1000
	}
	{
		union NodeLink_t oldTail; // 1047
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 1147
		CTSQueue<DynamicIndexBufferHandle_t__::InterlockedCompareExchangeNodeLink(
							volatile union NodeLink_t* pLink,
							const union NodeLink_t& value,
							const union NodeLink_t& comperand);  // 1135
		CTSQueue<DynamicIndexBufferHandle_t__::FinishPush(
				Node_t* pNode,
				const union NodeLink_t& oldTail);  // 1050
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1071
	}
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 1147
	CTSQueue<DynamicIndexBufferHandle_t__::InterlockedCompareExchangeNodeLink(
						volatile union NodeLink_t* pLink,
						const union NodeLink_t& value,
						const union NodeLink_t& comperand);  // 1060
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<int, 4>::operator--(); // 592
	CInterlockedIntT<int, 4>::operator--(
			int);  // 1072
} /* size: 308, variables: 11, inline expansions: 6 (69 bytes) */

// <0685BA2F> ../public/tier0/tslist.h:1077
inline void CTSQueue<CThreadedLogger::Buffer_t::FreeNode(Node_t* pNode)
{
} /* size: 0 */

// <06311DF2> ../public/tier0/tslist.h:1077
inline void CTSQueue<std::function<void()>::FreeNode(Node_t* pNode)
{
} /* size: 0 */

// <0448F27E> ../public/tier0/tslist.h:1077
inline void CTSQueue<SweepGroup_t::FreeNode(Node_t* pNode)
{
} /* size: 0 */

// <0448F057> ../public/tier0/tslist.h:1077
inline void CTSQueue<QueuedSweepNode_t, false>::FreeNode(Node_t* pNode)
{
} /* size: 0 */

// <02E98012> ../public/tier0/tslist.h:1077
inline void CTSQueue<CSceneObject::FreeNode(Node_t* pNode)
{
} /* size: 0 */

// <024DBB52> ../public/tier0/tslist.h:1077
inline void CTSQueue<CAsyncWaveData::FreeNode(Node_t* pNode)
{
} /* size: 0 */

// <02352757> ../public/tier0/tslist.h:1077
inline void CTSQueue<CResourceManifest::FreeNode(Node_t* pNode)
{
} /* size: 0 */

// <02351B31> ../public/tier0/tslist.h:1077
inline void CTSQueue<const ResourceBindingBase_t::FreeNode(Node_t* pNode)
{
} /* size: 0 */

// <00B7132D> ../public/tier0/tslist.h:1077
inline void CTSQueue<VkFence_T::FreeNode(Node_t* pNode)
{
} /* size: 0 */

// <0070A8DC> ../public/tier0/tslist.h:1077
inline void CTSQueue<PipelineObjectVulkan_t::FreeNode(Node_t* pNode)
{
} /* size: 0 */

// <0070A2B0> ../public/tier0/tslist.h:1077
inline void CTSQueue<VkShaderModule_T::FreeNode(Node_t* pNode)
{
} /* size: 0 */

// <00709DF8> ../public/tier0/tslist.h:1077
inline void CTSQueue<CPipelineManagerVulkan::LinkTimeOptimizedPipeline_t, false>::FreeNode(Node_t* pNode)
{
} /* size: 0 */

// <0070986C> ../public/tier0/tslist.h:1077
inline void CTSQueue<CPipelineManagerVulkan::PreWarmPipeline_t, false>::FreeNode(Node_t* pNode)
{
} /* size: 0 */

// <0066078A> ../public/tier0/tslist.h:1077
inline void CTSQueue<CFossilizeStateCreator::RegisteredShader_t, false>::FreeNode(Node_t* pNode)
{
} /* size: 0 */

// <0058C161> ../public/tier0/tslist.h:1077
inline void CTSQueue<VkCommandBuffer_T::FreeNode(Node_t* pNode)
{
} /* size: 0 */

// <0058A598> ../public/tier0/tslist.h:1077
inline void CTSQueue<CMemoryManagerVulkan::FencedResourceList_t, false>::FreeNode(Node_t* pNode)
{
} /* size: 0 */

// <0022DAC2> ../public/tier0/tslist.h:1077
inline void CTSQueue<CCommandStream::FreeNode(Node_t* pNode)
{
} /* size: 0 */

// <004F4C5C> ../public/tier0/tslist.h:1077
inline void CTSQueue<int, true>::FreeNode(Node_t* pNode)
{
} /* size: 0 */

// <0012A3B8> ../public/tier0/tslist.h:1077
inline void CTSQueue<CEventQueue::QueuedEvent_t, false>::FreeNode(Node_t* pNode)
{
} /* size: 0 */

// <0685C611> ../public/tier0/tslist.h:1083
// variables: 2
// function calls: 21
void CTSQueue<CThreadedLogger::Buffer_t::PushItem(Buffer_t* const& init)
{
	Node_t* pNode; // 1085
	ThreadPause(void); // 208
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 203
	CTSListBase::Pop(); // 1085
	CopyConstruct<CThreadedLogger::Buffer_t*>(Buffer_t** pMemory,
							Buffer_t* const& src);  // 1090
	{
	}
	{
	}
	{
		Node_t* pCurEnd; // 977
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 1147
		CTSQueue<CThreadedLogger::Buffer_t::InterlockedCompareExchangeNodeLink(
							volatile union NodeLink_t* pLink,
							const union NodeLink_t& value,
							const union NodeLink_t& comperand);  // 1135
		CTSQueue<CThreadedLogger::Buffer_t::FinishPush(
				Node_t* pNode,
				const union NodeLink_t& oldTail);  // 985
		{
		}
		ThreadInterlockedCompareExchange64(volatile int64* p,
							int64 value,
							int64 comparand);  // 416
		ThreadInterlockedCompareExchangePointer(volatile void** p,
							void* value,
							void* comparand);  // 1142
		CTSQueue<CThreadedLogger::Buffer_t::InterlockedCompareExchangeNode(
						volatile Node_t** ppNode,
						Node_t* value,
						Node_t* comperand);  // 977
	}
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 1147
	CTSQueue<CThreadedLogger::Buffer_t::InterlockedCompareExchangeNodeLink(
						volatile union NodeLink_t* pLink,
						const union NodeLink_t& value,
						const union NodeLink_t& comperand);  // 1135
	CTSQueue<CThreadedLogger::Buffer_t::FinishPush(
			Node_t* pNode,
			const union NodeLink_t& oldTail);  // 991
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 582
	CInterlockedIntT<int, 4>::operator++(
			int);  // 993
	CTSQueue<CThreadedLogger::Buffer_t::Push(
		Node_t* pNode);  // 1091
	Node_t::Node_t(); // 1088
} /* size: 451, variables: 1, inline expansions: 14 (504 bytes) */

// <06315D68> ../public/tier0/tslist.h:1083
// variables: 8
// function calls: 22
void CTSQueue<std::function<void()>::PushItem(function<void()>* const& init)
{
	Node_t* pNode; // 1085
	ThreadPause(void); // 208
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 203
	CTSListBase::Pop(); // 1085
	CopyConstruct<std::function<void()>*>(function<void()>** pMemory,
						function<void()>* const& src); // 1090
	{
	}
	{
	}
	{
		Node_t* pCurEnd; // 977
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 1147
		CTSQueue<std::function<void()>::InterlockedCompareExchangeNodeLink(
							volatile union NodeLink_t* pLink,
							const union NodeLink_t& value,
							const union NodeLink_t& comperand); // 1135
		CTSQueue<std::function<void()>::FinishPush(
				Node_t* pNode,
				const union NodeLink_t& oldTail); // 985
		{
		}
		ThreadInterlockedCompareExchange64(volatile int64* p,
							int64 value,
							int64 comparand);  // 416
		ThreadInterlockedCompareExchangePointer(volatile void** p,
							void* value,
							void* comparand);  // 1142
		CTSQueue<std::function<void()>::InterlockedCompareExchangeNode(
						volatile Node_t** ppNode,
						Node_t* value,
						Node_t* comperand); // 977
	}
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 1147
	CTSQueue<std::function<void()>::InterlockedCompareExchangeNodeLink(
						volatile union NodeLink_t* pLink,
						const union NodeLink_t& value,
						const union NodeLink_t& comperand); // 1135
	CTSQueue<std::function<void()>::FinishPush(
			Node_t* pNode,
			const union NodeLink_t& oldTail); // 991
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 582
	CInterlockedIntT<int, 4>::operator++(
			int);  // 993
	CTSQueue<std::function<void()>::Push(
		Node_t* pNode); // 1091
	Node_t::Node_t(); // 1088
} /* size: 451, variables: 1, inline expansions: 14 (504 bytes) */

// <04496C9D> ../public/tier0/tslist.h:1083
// variables: 2
// function calls: 22
void CTSQueue<QueuedSweepNode_t, false>::PushItem(const QueuedSweepNode_t& init)
{
	Node_t* pNode; // 1085
	ThreadPause(void); // 208
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 203
	CTSListBase::Pop(); // 1085
	CopyConstruct<QueuedSweepNode_t>(QueuedSweepNode_t* pMemory,
					const QueuedSweepNode_t& src);  // 1090
	{
	}
	{
	}
	{
		Node_t* pCurEnd; // 977
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 1147
		CTSQueue<QueuedSweepNode_t, false>::InterlockedCompareExchangeNodeLink(
							volatile union NodeLink_t* pLink,
							const union NodeLink_t& value,
							const union NodeLink_t& comperand);  // 1135
		CTSQueue<QueuedSweepNode_t, false>::FinishPush(
				Node_t* pNode,
				const union NodeLink_t& oldTail);  // 985
		{
		}
		ThreadInterlockedCompareExchange64(volatile int64* p,
							int64 value,
							int64 comparand);  // 416
		ThreadInterlockedCompareExchangePointer(volatile void** p,
							void* value,
							void* comparand);  // 1142
		CTSQueue<QueuedSweepNode_t, false>::InterlockedCompareExchangeNode(
						volatile Node_t** ppNode,
						Node_t* value,
						Node_t* comperand);  // 977
	}
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 1147
	CTSQueue<QueuedSweepNode_t, false>::InterlockedCompareExchangeNodeLink(
						volatile union NodeLink_t* pLink,
						const union NodeLink_t& value,
						const union NodeLink_t& comperand);  // 1135
	CTSQueue<QueuedSweepNode_t, false>::FinishPush(
			Node_t* pNode,
			const union NodeLink_t& oldTail);  // 991
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 582
	CInterlockedIntT<int, 4>::operator++(
			int);  // 993
	CTSQueue<QueuedSweepNode_t, false>::Push(
		Node_t* pNode);  // 1091
	QueuedSweepNode_t::QueuedSweepNode_t(); // 827
	Node_t::Node_t(); // 1088
} /* size: 559, variables: 1, inline expansions: 15 (632 bytes) */

// <0448F2A4> ../public/tier0/tslist.h:1083
// variables: 2
// function calls: 21
void CTSQueue<SweepGroup_t::PushItem(SweepGroup_t* const& init)
{
	Node_t* pNode; // 1085
	ThreadPause(void); // 208
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 203
	CTSListBase::Pop(); // 1085
	CopyConstruct<SweepGroup_t*>(SweepGroup_t** pMemory,
					SweepGroup_t* const& src);  // 1090
	{
	}
	{
	}
	{
		Node_t* pCurEnd; // 977
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 1147
		CTSQueue<SweepGroup_t::InterlockedCompareExchangeNodeLink(
							volatile union NodeLink_t* pLink,
							const union NodeLink_t& value,
							const union NodeLink_t& comperand);  // 1135
		CTSQueue<SweepGroup_t::FinishPush(
				Node_t* pNode,
				const union NodeLink_t& oldTail);  // 985
		{
		}
		ThreadInterlockedCompareExchange64(volatile int64* p,
							int64 value,
							int64 comparand);  // 416
		ThreadInterlockedCompareExchangePointer(volatile void** p,
							void* value,
							void* comparand);  // 1142
		CTSQueue<SweepGroup_t::InterlockedCompareExchangeNode(
						volatile Node_t** ppNode,
						Node_t* value,
						Node_t* comperand);  // 977
	}
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 1147
	CTSQueue<SweepGroup_t::InterlockedCompareExchangeNodeLink(
						volatile union NodeLink_t* pLink,
						const union NodeLink_t& value,
						const union NodeLink_t& comperand);  // 1135
	CTSQueue<SweepGroup_t::FinishPush(
			Node_t* pNode,
			const union NodeLink_t& oldTail);  // 991
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 582
	CInterlockedIntT<int, 4>::operator++(
			int);  // 993
	CTSQueue<SweepGroup_t::Push(
		Node_t* pNode);  // 1091
	Node_t::Node_t(); // 1088
} /* size: 451, variables: 1, inline expansions: 14 (504 bytes) */

// <03534B9F> ../public/tier0/tslist.h:1083
// variable: 1
inline void CTSQueue<CSceneObject::PushItem(CSceneObject* const& init)
{
	Node_t* pNode; // 1085
} /* size: 0, variables: 1 */

// <024DD1B7> ../public/tier0/tslist.h:1083
// variables: 2
// function calls: 21
void CTSQueue<CAsyncWaveData::PushItem(CAsyncWaveData* const& init)
{
	Node_t* pNode; // 1085
	ThreadPause(void); // 208
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 203
	CTSListBase::Pop(); // 1085
	CopyConstruct<CAsyncWaveData*>(CAsyncWaveData** pMemory,
					CAsyncWaveData* const& src);  // 1090
	{
	}
	{
	}
	{
		Node_t* pCurEnd; // 977
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 1147
		CTSQueue<CAsyncWaveData::InterlockedCompareExchangeNodeLink(
							volatile union NodeLink_t* pLink,
							const union NodeLink_t& value,
							const union NodeLink_t& comperand);  // 1135
		CTSQueue<CAsyncWaveData::FinishPush(
				Node_t* pNode,
				const union NodeLink_t& oldTail);  // 985
		{
		}
		ThreadInterlockedCompareExchange64(volatile int64* p,
							int64 value,
							int64 comparand);  // 416
		ThreadInterlockedCompareExchangePointer(volatile void** p,
							void* value,
							void* comparand);  // 1142
		CTSQueue<CAsyncWaveData::InterlockedCompareExchangeNode(
						volatile Node_t** ppNode,
						Node_t* value,
						Node_t* comperand);  // 977
	}
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 1147
	CTSQueue<CAsyncWaveData::InterlockedCompareExchangeNodeLink(
						volatile union NodeLink_t* pLink,
						const union NodeLink_t& value,
						const union NodeLink_t& comperand);  // 1135
	CTSQueue<CAsyncWaveData::FinishPush(
			Node_t* pNode,
			const union NodeLink_t& oldTail);  // 991
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 582
	CInterlockedIntT<int, 4>::operator++(
			int);  // 993
	CTSQueue<CAsyncWaveData::Push(
		Node_t* pNode);  // 1091
	Node_t::Node_t(); // 1088
} /* size: 451, variables: 1, inline expansions: 14 (504 bytes) */

// <02357541> ../public/tier0/tslist.h:1083
// variables: 2
// function calls: 21
void CTSQueue<const ResourceBindingBase_t::PushItem(const ResourceBindingBase_t* const& init)
{
	Node_t* pNode; // 1085
	ThreadPause(void); // 208
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 203
	CTSListBase::Pop(); // 1085
	CopyConstruct<const ResourceBindingBase_t*>(const ResourceBindingBase_t ** pMemory,
							const ResourceBindingBase_t* const& src);  // 1090
	{
	}
	{
	}
	{
		Node_t* pCurEnd; // 977
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 1147
		CTSQueue<const ResourceBindingBase_t::InterlockedCompareExchangeNodeLink(
							volatile union NodeLink_t* pLink,
							const union NodeLink_t& value,
							const union NodeLink_t& comperand);  // 1135
		CTSQueue<const ResourceBindingBase_t::FinishPush(
				Node_t* pNode,
				const union NodeLink_t& oldTail);  // 985
		{
		}
		ThreadInterlockedCompareExchange64(volatile int64* p,
							int64 value,
							int64 comparand);  // 416
		ThreadInterlockedCompareExchangePointer(volatile void** p,
							void* value,
							void* comparand);  // 1142
		CTSQueue<const ResourceBindingBase_t::InterlockedCompareExchangeNode(
						volatile Node_t** ppNode,
						Node_t* value,
						Node_t* comperand);  // 977
	}
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 1147
	CTSQueue<const ResourceBindingBase_t::InterlockedCompareExchangeNodeLink(
						volatile union NodeLink_t* pLink,
						const union NodeLink_t& value,
						const union NodeLink_t& comperand);  // 1135
	CTSQueue<const ResourceBindingBase_t::FinishPush(
			Node_t* pNode,
			const union NodeLink_t& oldTail);  // 991
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 582
	CInterlockedIntT<int, 4>::operator++(
			int);  // 993
	CTSQueue<const ResourceBindingBase_t::Push(
		Node_t* pNode);  // 1091
	Node_t::Node_t(); // 1088
} /* size: 451, variables: 1, inline expansions: 14 (504 bytes) */

// <023566BA> ../public/tier0/tslist.h:1083
// variables: 2
// function calls: 21
void CTSQueue<CResourceManifest::PushItem(CResourceManifest* const& init)
{
	Node_t* pNode; // 1085
	ThreadPause(void); // 208
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 203
	CTSListBase::Pop(); // 1085
	CopyConstruct<CResourceManifest*>(CResourceManifest** pMemory,
						CResourceManifest* const& src);  // 1090
	{
	}
	{
	}
	{
		Node_t* pCurEnd; // 977
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 1147
		CTSQueue<CResourceManifest::InterlockedCompareExchangeNodeLink(
							volatile union NodeLink_t* pLink,
							const union NodeLink_t& value,
							const union NodeLink_t& comperand);  // 1135
		CTSQueue<CResourceManifest::FinishPush(
				Node_t* pNode,
				const union NodeLink_t& oldTail);  // 985
		{
		}
		ThreadInterlockedCompareExchange64(volatile int64* p,
							int64 value,
							int64 comparand);  // 416
		ThreadInterlockedCompareExchangePointer(volatile void** p,
							void* value,
							void* comparand);  // 1142
		CTSQueue<CResourceManifest::InterlockedCompareExchangeNode(
						volatile Node_t** ppNode,
						Node_t* value,
						Node_t* comperand);  // 977
	}
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 1147
	CTSQueue<CResourceManifest::InterlockedCompareExchangeNodeLink(
						volatile union NodeLink_t* pLink,
						const union NodeLink_t& value,
						const union NodeLink_t& comperand);  // 1135
	CTSQueue<CResourceManifest::FinishPush(
			Node_t* pNode,
			const union NodeLink_t& oldTail);  // 991
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 582
	CInterlockedIntT<int, 4>::operator++(
			int);  // 993
	CTSQueue<CResourceManifest::Push(
		Node_t* pNode);  // 1091
	Node_t::Node_t(); // 1088
} /* size: 451, variables: 1, inline expansions: 14 (504 bytes) */

// <009E5757> ../public/tier0/tslist.h:1083
// variable: 1
inline void CTSQueue<DynamicVertexBufferHandle_t__::PushItem(DynamicVertexBufferHandle_t__* const& init)
{
	Node_t* pNode; // 1085
} /* size: 0, variables: 1 */

// <009E5674> ../public/tier0/tslist.h:1083
// variable: 1
inline void CTSQueue<DynamicIndexBufferHandle_t__::PushItem(DynamicIndexBufferHandle_t__* const& init)
{
	Node_t* pNode; // 1085
} /* size: 0, variables: 1 */

// <00710288> ../public/tier0/tslist.h:1083
// variable: 1
inline void CTSQueue<VkShaderModule_T::PushItem(VkShaderModule_T* const& init)
{
	Node_t* pNode; // 1085
} /* size: 0, variables: 1 */

// <00710255> ../public/tier0/tslist.h:1083
// variable: 1
inline void CTSQueue<PipelineObjectVulkan_t::PushItem(PipelineObjectVulkan_t* const& init)
{
	Node_t* pNode; // 1085
} /* size: 0, variables: 1 */

// <0070D19B> ../public/tier0/tslist.h:1083
// variables: 2
// function calls: 21
void CTSQueue<CPipelineManagerVulkan::LinkTimeOptimizedPipeline_t, false>::PushItem(const LinkTimeOptimizedPipeline_t& init)
{
	Node_t* pNode; // 1085
	ThreadPause(void); // 208
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 203
	CTSListBase::Pop(); // 1085
	CopyConstruct<CPipelineManagerVulkan::LinkTimeOptimizedPipeline_t>(LinkTimeOptimizedPipeline_t* pMemory,
										const LinkTimeOptimizedPipeline_t& src);  // 1090
	{
	}
	{
	}
	{
		Node_t* pCurEnd; // 977
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 1147
		CTSQueue<CPipelineManagerVulkan::LinkTimeOptimizedPipeline_t, false>::InterlockedCompareExchangeNodeLink(
							volatile union NodeLink_t* pLink,
							const union NodeLink_t& value,
							const union NodeLink_t& comperand);  // 1135
		CTSQueue<CPipelineManagerVulkan::LinkTimeOptimizedPipeline_t, false>::FinishPush(
				Node_t* pNode,
				const union NodeLink_t& oldTail);  // 985
		{
		}
		ThreadInterlockedCompareExchange64(volatile int64* p,
							int64 value,
							int64 comparand);  // 416
		ThreadInterlockedCompareExchangePointer(volatile void** p,
							void* value,
							void* comparand);  // 1142
		CTSQueue<CPipelineManagerVulkan::LinkTimeOptimizedPipeline_t, false>::InterlockedCompareExchangeNode(
						volatile Node_t** ppNode,
						Node_t* value,
						Node_t* comperand);  // 977
	}
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 1147
	CTSQueue<CPipelineManagerVulkan::LinkTimeOptimizedPipeline_t, false>::InterlockedCompareExchangeNodeLink(
						volatile union NodeLink_t* pLink,
						const union NodeLink_t& value,
						const union NodeLink_t& comperand);  // 1135
	CTSQueue<CPipelineManagerVulkan::LinkTimeOptimizedPipeline_t, false>::FinishPush(
			Node_t* pNode,
			const union NodeLink_t& oldTail);  // 991
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 582
	CInterlockedIntT<int, 4>::operator++(
			int);  // 993
	CTSQueue<CPipelineManagerVulkan::LinkTimeOptimizedPipeline_t, false>::Push(
		Node_t* pNode);  // 1091
	Node_t::Node_t(); // 1088
} /* size: 467, variables: 1, inline expansions: 14 (520 bytes) */

// <0070C681> ../public/tier0/tslist.h:1083
// variable: 1
inline void CTSQueue<CPipelineManagerVulkan::PreWarmPipeline_t, false>::PushItem(const PreWarmPipeline_t& init)
{
	Node_t* pNode; // 1085
} /* size: 0, variables: 1 */

// <00667FA4> ../public/tier0/tslist.h:1083
// variables: 2
// function calls: 22
void CTSQueue<CFossilizeStateCreator::RegisteredShader_t, false>::PushItem(const RegisteredShader_t& init)
{
	Node_t* pNode; // 1085
	ThreadPause(void); // 208
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 203
	CTSListBase::Pop(); // 1085
	CopyConstruct<CFossilizeStateCreator::RegisteredShader_t>(RegisteredShader_t* pMemory,
									const RegisteredShader_t& src);  // 1090
	{
	}
	{
	}
	{
		Node_t* pCurEnd; // 977
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 1147
		CTSQueue<CFossilizeStateCreator::RegisteredShader_t, false>::InterlockedCompareExchangeNodeLink(
							volatile union NodeLink_t* pLink,
							const union NodeLink_t& value,
							const union NodeLink_t& comperand);  // 1135
		CTSQueue<CFossilizeStateCreator::RegisteredShader_t, false>::FinishPush(
				Node_t* pNode,
				const union NodeLink_t& oldTail);  // 985
		{
		}
		ThreadInterlockedCompareExchange64(volatile int64* p,
							int64 value,
							int64 comparand);  // 416
		ThreadInterlockedCompareExchangePointer(volatile void** p,
							void* value,
							void* comparand);  // 1142
		CTSQueue<CFossilizeStateCreator::RegisteredShader_t, false>::InterlockedCompareExchangeNode(
						volatile Node_t** ppNode,
						Node_t* value,
						Node_t* comperand);  // 977
	}
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 1147
	CTSQueue<CFossilizeStateCreator::RegisteredShader_t, false>::InterlockedCompareExchangeNodeLink(
						volatile union NodeLink_t* pLink,
						const union NodeLink_t& value,
						const union NodeLink_t& comperand);  // 1135
	CTSQueue<CFossilizeStateCreator::RegisteredShader_t, false>::FinishPush(
			Node_t* pNode,
			const union NodeLink_t& oldTail);  // 991
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 582
	CInterlockedIntT<int, 4>::operator++(
			int);  // 993
	CTSQueue<CFossilizeStateCreator::RegisteredShader_t, false>::Push(
		Node_t* pNode);  // 1091
	RegisteredShader_t::RegisteredShader_t(); // 827
	Node_t::Node_t(); // 1088
} /* size: 483, variables: 1, inline expansions: 15 (568 bytes) */

// <0058EDBE> ../public/tier0/tslist.h:1083
// variable: 1
inline void CTSQueue<CMemoryManagerVulkan::FencedResourceList_t, false>::PushItem(const FencedResourceList_t& init)
{
	Node_t* pNode; // 1085
} /* size: 0, variables: 1 */

// <0058E4E5> ../public/tier0/tslist.h:1083
// variables: 2
// function calls: 21
void CTSQueue<VkCommandBuffer_T::PushItem(VkCommandBuffer_T* const& init)
{
	Node_t* pNode; // 1085
	ThreadPause(void); // 208
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 203
	CTSListBase::Pop(); // 1085
	CopyConstruct<VkCommandBuffer_T*>(VkCommandBuffer_T** pMemory,
						VkCommandBuffer_T* const& src);  // 1090
	{
	}
	{
	}
	{
		Node_t* pCurEnd; // 977
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 1147
		CTSQueue<VkCommandBuffer_T::InterlockedCompareExchangeNodeLink(
							volatile union NodeLink_t* pLink,
							const union NodeLink_t& value,
							const union NodeLink_t& comperand);  // 1135
		CTSQueue<VkCommandBuffer_T::FinishPush(
				Node_t* pNode,
				const union NodeLink_t& oldTail);  // 985
		{
		}
		ThreadInterlockedCompareExchange64(volatile int64* p,
							int64 value,
							int64 comparand);  // 416
		ThreadInterlockedCompareExchangePointer(volatile void** p,
							void* value,
							void* comparand);  // 1142
		CTSQueue<VkCommandBuffer_T::InterlockedCompareExchangeNode(
						volatile Node_t** ppNode,
						Node_t* value,
						Node_t* comperand);  // 977
	}
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 1147
	CTSQueue<VkCommandBuffer_T::InterlockedCompareExchangeNodeLink(
						volatile union NodeLink_t* pLink,
						const union NodeLink_t& value,
						const union NodeLink_t& comperand);  // 1135
	CTSQueue<VkCommandBuffer_T::FinishPush(
			Node_t* pNode,
			const union NodeLink_t& oldTail);  // 991
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 582
	CInterlockedIntT<int, 4>::operator++(
			int);  // 993
	CTSQueue<VkCommandBuffer_T::Push(
		Node_t* pNode);  // 1091
	Node_t::Node_t(); // 1088
} /* size: 451, variables: 1, inline expansions: 14 (504 bytes) */

// <0022E608> ../public/tier0/tslist.h:1083
// variable: 1
inline void CTSQueue<CCommandStream::PushItem(CCommandStream* const& init)
{
	Node_t* pNode; // 1085
} /* size: 0, variables: 1 */

// <004F55C5> ../public/tier0/tslist.h:1083
// variable: 1
inline void CTSQueue<int, true>::PushItem(const int& init)
{
	Node_t* pNode; // 1085
} /* size: 0, variables: 1 */

// <0012B3C1> ../public/tier0/tslist.h:1083
// variable: 1
inline void CTSQueue<CEventQueue::QueuedEvent_t, false>::PushItem(const QueuedEvent_t& init)
{
	Node_t* pNode; // 1085
} /* size: 0, variables: 1 */

// <0005AF64> ../public/tier0/tslist.h:1083
// variable: 1
inline void CTSQueue<std::function<void()>::PushItem(function<void()>* const& init)
{
	Node_t* pNode; // 1085
} /* size: 0, variables: 1 */

// <0685C310> ../public/tier0/tslist.h:1094
// variable: 1
inline void CTSQueue<CThreadedLogger::Buffer_t::PopItem(Buffer_t** pResult)
{
	Node_t* pNode; // 1096
} /* size: 0, variables: 1 */

// <06315D35> ../public/tier0/tslist.h:1094
// variable: 1
inline void CTSQueue<std::function<void()>::PopItem(function<void()>** pResult)
{
	Node_t* pNode; // 1096
} /* size: 0, variables: 1 */

// <04497896> ../public/tier0/tslist.h:1094
// variable: 1
inline void CTSQueue<SweepGroup_t::PopItem(SweepGroup_t** pResult)
{
	Node_t* pNode; // 1096
} /* size: 0, variables: 1 */

// <04496C6A> ../public/tier0/tslist.h:1094
// variable: 1
inline void CTSQueue<QueuedSweepNode_t, false>::PopItem(QueuedSweepNode_t* pResult)
{
	Node_t* pNode; // 1096
} /* size: 0, variables: 1 */

// <02EABAB1> ../public/tier0/tslist.h:1094
// variable: 1
inline void CTSQueue<CSceneObject::PopItem(CSceneObject** pResult)
{
	Node_t* pNode; // 1096
} /* size: 0, variables: 1 */

// <024DD16B> ../public/tier0/tslist.h:1094
// variable: 1
inline void CTSQueue<CAsyncWaveData::PopItem(CAsyncWaveData** pResult)
{
	Node_t* pNode; // 1096
} /* size: 0, variables: 1 */

// <02356FB9> ../public/tier0/tslist.h:1094
// variable: 1
inline void CTSQueue<CResourceManifest::PopItem(CResourceManifest** pResult)
{
	Node_t* pNode; // 1096
} /* size: 0, variables: 1 */

// <0235654B> ../public/tier0/tslist.h:1094
// variable: 1
inline void CTSQueue<const ResourceBindingBase_t::PopItem(const ResourceBindingBase_t ** pResult)
{
	Node_t* pNode; // 1096
} /* size: 0, variables: 1 */

// <00B750A4> ../public/tier0/tslist.h:1094
// variable: 1
inline void CTSQueue<VkFence_T::PopItem(VkFence_T** pResult)
{
	Node_t* pNode; // 1096
} /* size: 0, variables: 1 */

// <007104EE> ../public/tier0/tslist.h:1094
// variable: 1
inline void CTSQueue<PipelineObjectVulkan_t::PopItem(PipelineObjectVulkan_t** pResult)
{
	Node_t* pNode; // 1096
} /* size: 0, variables: 1 */

// <0071037D> ../public/tier0/tslist.h:1094
// variable: 1
inline void CTSQueue<VkShaderModule_T::PopItem(VkShaderModule_T** pResult)
{
	Node_t* pNode; // 1096
} /* size: 0, variables: 1 */

// <0071034A> ../public/tier0/tslist.h:1094
// variable: 1
inline void CTSQueue<CPipelineManagerVulkan::LinkTimeOptimizedPipeline_t, false>::PopItem(LinkTimeOptimizedPipeline_t* pResult)
{
	Node_t* pNode; // 1096
} /* size: 0, variables: 1 */

// <00710317> ../public/tier0/tslist.h:1094
// variable: 1
inline void CTSQueue<CPipelineManagerVulkan::PreWarmPipeline_t, false>::PopItem(PreWarmPipeline_t* pResult)
{
	Node_t* pNode; // 1096
} /* size: 0, variables: 1 */

// <00667C54> ../public/tier0/tslist.h:1094
// variable: 1
inline void CTSQueue<CFossilizeStateCreator::RegisteredShader_t, false>::PopItem(RegisteredShader_t* pResult)
{
	Node_t* pNode; // 1096
} /* size: 0, variables: 1 */

// <0058F1C6> ../public/tier0/tslist.h:1094
// variable: 1
inline void CTSQueue<VkCommandBuffer_T::PopItem(VkCommandBuffer_T** pResult)
{
	Node_t* pNode; // 1096
} /* size: 0, variables: 1 */

// <0058ED6D> ../public/tier0/tslist.h:1094
// variable: 1
inline void CTSQueue<CMemoryManagerVulkan::FencedResourceList_t, false>::PopItem(FencedResourceList_t* pResult)
{
	Node_t* pNode; // 1096
} /* size: 0, variables: 1 */

// <0022E4A8> ../public/tier0/tslist.h:1094
// variable: 1
inline void CTSQueue<CCommandStream::PopItem(CCommandStream** pResult)
{
	Node_t* pNode; // 1096
} /* size: 0, variables: 1 */

// <004F5592> ../public/tier0/tslist.h:1094
// variable: 1
inline void CTSQueue<int, true>::PopItem(int* pResult)
{
	Node_t* pNode; // 1096
} /* size: 0, variables: 1 */

// <0012B3F4> ../public/tier0/tslist.h:1094
// variable: 1
inline void CTSQueue<CEventQueue::QueuedEvent_t, false>::PopItem(QueuedEvent_t* pResult)
{
	Node_t* pNode; // 1096
} /* size: 0, variables: 1 */

// <044D9DDC> ../public/tier0/tslist.h:1107
inline void CTSQueue<std::function<void()>::Count()>*, false>* this)
{
} /* size: 0 */

// <024DD19E> ../public/tier0/tslist.h:1107
inline void CTSQueue<CAsyncWaveData::Count()
{
} /* size: 0 */

// <0235837B> ../public/tier0/tslist.h:1107
inline void CTSQueue<const ResourceBindingBase_t::Count()
{
} /* size: 0 */

// <02358362> ../public/tier0/tslist.h:1107
inline void CTSQueue<CResourceManifest::Count()
{
} /* size: 0 */

// <0058E07C> ../public/tier0/tslist.h:1107
inline void CTSQueue<VkCommandBuffer_T::Count()
{
} /* size: 0 */

// <0058E04A> ../public/tier0/tslist.h:1107
inline void CTSQueue<CMemoryManagerVulkan::FencedResourceList_t, false>::Count()
{
} /* size: 0 */

// <0012B375> ../public/tier0/tslist.h:1107
inline void CTSQueue<CFunctorCallback::Count()
{
} /* size: 0 */

// <0685B9AF> ../public/tier0/tslist.h:1128
// variable: 1
inline void CTSQueue<CThreadedLogger::Buffer_t::FinishPush(Node_t* pNode, const union NodeLink_t& oldTail)
{
	union NodeLink_t newTail; // 1130
} /* size: 0, variables: 1 */

// <062EB016> ../public/tier0/tslist.h:1128
// variable: 1
inline void CTSQueue<std::function<void()>::FinishPush(Node_t* pNode, const union NodeLink_t& oldTail)
{
	union NodeLink_t newTail; // 1130
} /* size: 0, variables: 1 */

// <0448FEF8> ../public/tier0/tslist.h:1128
// variable: 1
inline void CTSQueue<QueuedSweepNode_t, false>::FinishPush(Node_t* pNode, const union NodeLink_t& oldTail)
{
	union NodeLink_t newTail; // 1130
} /* size: 0, variables: 1 */

// <0448FE78> ../public/tier0/tslist.h:1128
// variable: 1
inline void CTSQueue<SweepGroup_t::FinishPush(Node_t* pNode, const union NodeLink_t& oldTail)
{
	union NodeLink_t newTail; // 1130
} /* size: 0, variables: 1 */

// <0352F319> ../public/tier0/tslist.h:1128
// variable: 1
inline void CTSQueue<CSceneObject::FinishPush(Node_t* pNode, const union NodeLink_t& oldTail)
{
	union NodeLink_t newTail; // 1130
} /* size: 0, variables: 1 */

// <024DB293> ../public/tier0/tslist.h:1128
// variable: 1
inline void CTSQueue<CAsyncWaveData::FinishPush(Node_t* pNode, const union NodeLink_t& oldTail)
{
	union NodeLink_t newTail; // 1130
} /* size: 0, variables: 1 */

// <0234E1B5> ../public/tier0/tslist.h:1128
// variable: 1
inline void CTSQueue<const ResourceBindingBase_t::FinishPush(Node_t* pNode, const union NodeLink_t& oldTail)
{
	union NodeLink_t newTail; // 1130
} /* size: 0, variables: 1 */

// <0234DB07> ../public/tier0/tslist.h:1128
// variable: 1
inline void CTSQueue<CResourceManifest::FinishPush(Node_t* pNode, const union NodeLink_t& oldTail)
{
	union NodeLink_t newTail; // 1130
} /* size: 0, variables: 1 */

// <00B6E227> ../public/tier0/tslist.h:1128
// variable: 1
inline void CTSQueue<VkFence_T::FinishPush(Node_t* pNode, const union NodeLink_t& oldTail)
{
	union NodeLink_t newTail; // 1130
} /* size: 0, variables: 1 */

// <00B66FDC> ../public/tier0/tslist.h:1128
// variable: 1
inline void CTSQueue<CCommandStream::FinishPush(Node_t* pNode, const union NodeLink_t& oldTail)
{
	union NodeLink_t newTail; // 1130
} /* size: 0, variables: 1 */

// <009CBC78> ../public/tier0/tslist.h:1128
// variable: 1
inline void CTSQueue<DynamicVertexBufferHandle_t__::FinishPush(Node_t* pNode, const union NodeLink_t& oldTail)
{
	union NodeLink_t newTail; // 1130
} /* size: 0, variables: 1 */

// <009CBBF8> ../public/tier0/tslist.h:1128
// variable: 1
inline void CTSQueue<DynamicIndexBufferHandle_t__::FinishPush(Node_t* pNode, const union NodeLink_t& oldTail)
{
	union NodeLink_t newTail; // 1130
} /* size: 0, variables: 1 */

// <00704072> ../public/tier0/tslist.h:1128
// variable: 1
inline void CTSQueue<PipelineObjectVulkan_t::FinishPush(Node_t* pNode, const union NodeLink_t& oldTail)
{
	union NodeLink_t newTail; // 1130
} /* size: 0, variables: 1 */

// <00703FC0> ../public/tier0/tslist.h:1128
// variable: 1
inline void CTSQueue<VkShaderModule_T::FinishPush(Node_t* pNode, const union NodeLink_t& oldTail)
{
	union NodeLink_t newTail; // 1130
} /* size: 0, variables: 1 */

// <00703F40> ../public/tier0/tslist.h:1128
// variable: 1
inline void CTSQueue<CPipelineManagerVulkan::LinkTimeOptimizedPipeline_t, false>::FinishPush(Node_t* pNode, const union NodeLink_t& oldTail)
{
	union NodeLink_t newTail; // 1130
} /* size: 0, variables: 1 */

// <00703EC0> ../public/tier0/tslist.h:1128
// variable: 1
inline void CTSQueue<CPipelineManagerVulkan::PreWarmPipeline_t, false>::FinishPush(Node_t* pNode, const union NodeLink_t& oldTail)
{
	union NodeLink_t newTail; // 1130
} /* size: 0, variables: 1 */

// <00657167> ../public/tier0/tslist.h:1128
// variable: 1
inline void CTSQueue<CFossilizeStateCreator::RegisteredShader_t, false>::FinishPush(Node_t* pNode, const union NodeLink_t& oldTail)
{
	union NodeLink_t newTail; // 1130
} /* size: 0, variables: 1 */

// <0058822A> ../public/tier0/tslist.h:1128
// variable: 1
inline void CTSQueue<VkCommandBuffer_T::FinishPush(Node_t* pNode, const union NodeLink_t& oldTail)
{
	union NodeLink_t newTail; // 1130
} /* size: 0, variables: 1 */

// <005877EE> ../public/tier0/tslist.h:1128
// variable: 1
inline void CTSQueue<CMemoryManagerVulkan::FencedResourceList_t, false>::FinishPush(Node_t* pNode, const union NodeLink_t& oldTail)
{
	union NodeLink_t newTail; // 1130
} /* size: 0, variables: 1 */

// <004F49CD> ../public/tier0/tslist.h:1128
// variable: 1
inline void CTSQueue<int, true>::FinishPush(Node_t* pNode, const union NodeLink_t& oldTail)
{
	union NodeLink_t newTail; // 1130
} /* size: 0, variables: 1 */

// <001290F7> ../public/tier0/tslist.h:1128
// variable: 1
inline void CTSQueue<CEventQueue::QueuedEvent_t, false>::FinishPush(Node_t* pNode, const union NodeLink_t& oldTail)
{
	union NodeLink_t newTail; // 1130
} /* size: 0, variables: 1 */

// <0685C260> ../public/tier0/tslist.h:1138
inline void CTSQueue<CThreadedLogger::Buffer_t::End()
{
} /* size: 0 */

// <063123DC> ../public/tier0/tslist.h:1138
inline void CTSQueue<std::function<void()>::End()>*, false>* this)
{
} /* size: 0 */

// <044A8CD3> ../public/tier0/tslist.h:1138
inline void CTSQueue<QueuedSweepNode_t, false>::End()
{
} /* size: 0 */

// <044A8C27> ../public/tier0/tslist.h:1138
inline void CTSQueue<SweepGroup_t::End()
{
} /* size: 0 */

// <0352F399> ../public/tier0/tslist.h:1138
inline void CTSQueue<CSceneObject::End()
{
} /* size: 0 */

// <024DCF30> ../public/tier0/tslist.h:1138
inline void CTSQueue<CAsyncWaveData::End()
{
} /* size: 0 */

// <023552A9> ../public/tier0/tslist.h:1138
inline void CTSQueue<CResourceManifest::End()
{
} /* size: 0 */

// <02354B6B> ../public/tier0/tslist.h:1138
inline void CTSQueue<const ResourceBindingBase_t::End()
{
} /* size: 0 */

// <00B72F60> ../public/tier0/tslist.h:1138
inline void CTSQueue<CCommandStream::End()
{
} /* size: 0 */

// <00B71B75> ../public/tier0/tslist.h:1138
inline void CTSQueue<VkFence_T::End()
{
} /* size: 0 */

// <009D825B> ../public/tier0/tslist.h:1138
inline void CTSQueue<DynamicVertexBufferHandle_t__::End()
{
} /* size: 0 */

// <009D7D61> ../public/tier0/tslist.h:1138
inline void CTSQueue<DynamicIndexBufferHandle_t__::End()
{
} /* size: 0 */

// <0070BF3B> ../public/tier0/tslist.h:1138
inline void CTSQueue<VkShaderModule_T::End()
{
} /* size: 0 */

// <0070BE39> ../public/tier0/tslist.h:1138
inline void CTSQueue<PipelineObjectVulkan_t::End()
{
} /* size: 0 */

// <0070B9E1> ../public/tier0/tslist.h:1138
inline void CTSQueue<CPipelineManagerVulkan::LinkTimeOptimizedPipeline_t, false>::End()
{
} /* size: 0 */

// <0070B905> ../public/tier0/tslist.h:1138
inline void CTSQueue<CPipelineManagerVulkan::PreWarmPipeline_t, false>::End()
{
} /* size: 0 */

// <0066697F> ../public/tier0/tslist.h:1138
inline void CTSQueue<CFossilizeStateCreator::RegisteredShader_t, false>::End()
{
} /* size: 0 */

// <0058DD48> ../public/tier0/tslist.h:1138
inline void CTSQueue<CMemoryManagerVulkan::FencedResourceList_t, false>::End()
{
} /* size: 0 */

// <0058C106> ../public/tier0/tslist.h:1138
inline void CTSQueue<VkCommandBuffer_T::End()
{
} /* size: 0 */

// <004F52B1> ../public/tier0/tslist.h:1138
inline void CTSQueue<int, true>::End()
{
} /* size: 0 */

// <0012A918> ../public/tier0/tslist.h:1138
inline void CTSQueue<CEventQueue::QueuedEvent_t, false>::End()
{
} /* size: 0 */

// <0685B9EF> ../public/tier0/tslist.h:1140
inline void CTSQueue<CThreadedLogger::Buffer_t::InterlockedCompareExchangeNode(volatile Node_t** ppNode, Node_t* value, Node_t* comperand)
{
} /* size: 0 */

// <062EB056> ../public/tier0/tslist.h:1140
inline void CTSQueue<std::function<void()>::InterlockedCompareExchangeNode(volatile Node_t** ppNode, Node_t* value, Node_t* comperand)
{
} /* size: 0 */

// <0448DC01> ../public/tier0/tslist.h:1140
inline void CTSQueue<QueuedSweepNode_t, false>::InterlockedCompareExchangeNode(volatile Node_t** ppNode, Node_t* value, Node_t* comperand)
{
} /* size: 0 */

// <0448CF50> ../public/tier0/tslist.h:1140
inline void CTSQueue<SweepGroup_t::InterlockedCompareExchangeNode(volatile Node_t** ppNode, Node_t* value, Node_t* comperand)
{
} /* size: 0 */

// <0352F359> ../public/tier0/tslist.h:1140
inline void CTSQueue<CSceneObject::InterlockedCompareExchangeNode(volatile Node_t** ppNode, Node_t* value, Node_t* comperand)
{
} /* size: 0 */

// <024DB2D3> ../public/tier0/tslist.h:1140
inline void CTSQueue<CAsyncWaveData::InterlockedCompareExchangeNode(volatile Node_t** ppNode, Node_t* value, Node_t* comperand)
{
} /* size: 0 */

// <0234E1F5> ../public/tier0/tslist.h:1140
inline void CTSQueue<const ResourceBindingBase_t::InterlockedCompareExchangeNode(volatile Node_t** ppNode, Node_t* value, Node_t* comperand)
{
} /* size: 0 */

// <0234D8FA> ../public/tier0/tslist.h:1140
inline void CTSQueue<CResourceManifest::InterlockedCompareExchangeNode(volatile Node_t** ppNode, Node_t* value, Node_t* comperand)
{
} /* size: 0 */

// <00B6744D> ../public/tier0/tslist.h:1140
inline void CTSQueue<VkFence_T::InterlockedCompareExchangeNode(volatile Node_t** ppNode, Node_t* value, Node_t* comperand)
{
} /* size: 0 */

// <009C875B> ../public/tier0/tslist.h:1140
inline void CTSQueue<DynamicVertexBufferHandle_t__::InterlockedCompareExchangeNode(volatile Node_t** ppNode, Node_t* value, Node_t* comperand)
{
} /* size: 0 */

// <009C8545> ../public/tier0/tslist.h:1140
inline void CTSQueue<DynamicIndexBufferHandle_t__::InterlockedCompareExchangeNode(volatile Node_t** ppNode, Node_t* value, Node_t* comperand)
{
} /* size: 0 */

// <00703B79> ../public/tier0/tslist.h:1140
inline void CTSQueue<VkShaderModule_T::InterlockedCompareExchangeNode(volatile Node_t** ppNode, Node_t* value, Node_t* comperand)
{
} /* size: 0 */

// <00703B39> ../public/tier0/tslist.h:1140
inline void CTSQueue<PipelineObjectVulkan_t::InterlockedCompareExchangeNode(volatile Node_t** ppNode, Node_t* value, Node_t* comperand)
{
} /* size: 0 */

// <006FDFDD> ../public/tier0/tslist.h:1140
inline void CTSQueue<CPipelineManagerVulkan::LinkTimeOptimizedPipeline_t, false>::InterlockedCompareExchangeNode(volatile Node_t** ppNode, Node_t* value, Node_t* comperand)
{
} /* size: 0 */

// <006FDD5B> ../public/tier0/tslist.h:1140
inline void CTSQueue<CPipelineManagerVulkan::PreWarmPipeline_t, false>::InterlockedCompareExchangeNode(volatile Node_t** ppNode, Node_t* value, Node_t* comperand)
{
} /* size: 0 */

// <006571A7> ../public/tier0/tslist.h:1140
inline void CTSQueue<CFossilizeStateCreator::RegisteredShader_t, false>::InterlockedCompareExchangeNode(volatile Node_t** ppNode, Node_t* value, Node_t* comperand)
{
} /* size: 0 */

// <0058782E> ../public/tier0/tslist.h:1140
inline void CTSQueue<CMemoryManagerVulkan::FencedResourceList_t, false>::InterlockedCompareExchangeNode(volatile Node_t** ppNode, Node_t* value, Node_t* comperand)
{
} /* size: 0 */

// <00585AA2> ../public/tier0/tslist.h:1140
inline void CTSQueue<VkCommandBuffer_T::InterlockedCompareExchangeNode(volatile Node_t** ppNode, Node_t* value, Node_t* comperand)
{
} /* size: 0 */

// <0022D8FB> ../public/tier0/tslist.h:1140
inline void CTSQueue<CCommandStream::InterlockedCompareExchangeNode(volatile Node_t** ppNode, Node_t* value, Node_t* comperand)
{
} /* size: 0 */

// <004F4A0D> ../public/tier0/tslist.h:1140
inline void CTSQueue<int, true>::InterlockedCompareExchangeNode(volatile Node_t** ppNode, Node_t* value, Node_t* comperand)
{
} /* size: 0 */

// <00129077> ../public/tier0/tslist.h:1140
inline void CTSQueue<CEventQueue::QueuedEvent_t, false>::InterlockedCompareExchangeNode(volatile Node_t** ppNode, Node_t* value, Node_t* comperand)
{
} /* size: 0 */

// <0685B96F> ../public/tier0/tslist.h:1145
inline void CTSQueue<CThreadedLogger::Buffer_t::InterlockedCompareExchangeNodeLink(volatile union NodeLink_t* pLink, const union NodeLink_t& value, const union NodeLink_t& comperand)
{
} /* size: 0 */

// <062EAFD6> ../public/tier0/tslist.h:1145
inline void CTSQueue<std::function<void()>::InterlockedCompareExchangeNodeLink(volatile union NodeLink_t* pLink, const union NodeLink_t& value, const union NodeLink_t& comperand)
{
} /* size: 0 */

// <0448FEB8> ../public/tier0/tslist.h:1145
inline void CTSQueue<QueuedSweepNode_t, false>::InterlockedCompareExchangeNodeLink(volatile union NodeLink_t* pLink, const union NodeLink_t& value, const union NodeLink_t& comperand)
{
} /* size: 0 */

// <0448FE38> ../public/tier0/tslist.h:1145
inline void CTSQueue<SweepGroup_t::InterlockedCompareExchangeNodeLink(volatile union NodeLink_t* pLink, const union NodeLink_t& value, const union NodeLink_t& comperand)
{
} /* size: 0 */

// <0352A81C> ../public/tier0/tslist.h:1145
inline void CTSQueue<CSceneObject::InterlockedCompareExchangeNodeLink(volatile union NodeLink_t* pLink, const union NodeLink_t& value, const union NodeLink_t& comperand)
{
} /* size: 0 */

// <024DB253> ../public/tier0/tslist.h:1145
inline void CTSQueue<CAsyncWaveData::InterlockedCompareExchangeNodeLink(volatile union NodeLink_t* pLink, const union NodeLink_t& value, const union NodeLink_t& comperand)
{
} /* size: 0 */

// <0234DAC7> ../public/tier0/tslist.h:1145
inline void CTSQueue<CResourceManifest::InterlockedCompareExchangeNodeLink(volatile union NodeLink_t* pLink, const union NodeLink_t& value, const union NodeLink_t& comperand)
{
} /* size: 0 */

// <0234D7A0> ../public/tier0/tslist.h:1145
inline void CTSQueue<const ResourceBindingBase_t::InterlockedCompareExchangeNodeLink(volatile union NodeLink_t* pLink, const union NodeLink_t& value, const union NodeLink_t& comperand)
{
} /* size: 0 */

// <00B6E1E7> ../public/tier0/tslist.h:1145
inline void CTSQueue<VkFence_T::InterlockedCompareExchangeNodeLink(volatile union NodeLink_t* pLink, const union NodeLink_t& value, const union NodeLink_t& comperand)
{
} /* size: 0 */

// <00B66F9C> ../public/tier0/tslist.h:1145
inline void CTSQueue<CCommandStream::InterlockedCompareExchangeNodeLink(volatile union NodeLink_t* pLink, const union NodeLink_t& value, const union NodeLink_t& comperand)
{
} /* size: 0 */

// <009CBC38> ../public/tier0/tslist.h:1145
inline void CTSQueue<DynamicVertexBufferHandle_t__::InterlockedCompareExchangeNodeLink(volatile union NodeLink_t* pLink, const union NodeLink_t& value, const union NodeLink_t& comperand)
{
} /* size: 0 */

// <009CBBB8> ../public/tier0/tslist.h:1145
inline void CTSQueue<DynamicIndexBufferHandle_t__::InterlockedCompareExchangeNodeLink(volatile union NodeLink_t* pLink, const union NodeLink_t& value, const union NodeLink_t& comperand)
{
} /* size: 0 */

// <00704032> ../public/tier0/tslist.h:1145
inline void CTSQueue<PipelineObjectVulkan_t::InterlockedCompareExchangeNodeLink(volatile union NodeLink_t* pLink, const union NodeLink_t& value, const union NodeLink_t& comperand)
{
} /* size: 0 */

// <00703F80> ../public/tier0/tslist.h:1145
inline void CTSQueue<VkShaderModule_T::InterlockedCompareExchangeNodeLink(volatile union NodeLink_t* pLink, const union NodeLink_t& value, const union NodeLink_t& comperand)
{
} /* size: 0 */

// <00703F00> ../public/tier0/tslist.h:1145
inline void CTSQueue<CPipelineManagerVulkan::LinkTimeOptimizedPipeline_t, false>::InterlockedCompareExchangeNodeLink(volatile union NodeLink_t* pLink, const union NodeLink_t& value, const union NodeLink_t& comperand)
{
} /* size: 0 */

// <00703E80> ../public/tier0/tslist.h:1145
inline void CTSQueue<CPipelineManagerVulkan::PreWarmPipeline_t, false>::InterlockedCompareExchangeNodeLink(volatile union NodeLink_t* pLink, const union NodeLink_t& value, const union NodeLink_t& comperand)
{
} /* size: 0 */

// <0065586F> ../public/tier0/tslist.h:1145
inline void CTSQueue<CFossilizeStateCreator::RegisteredShader_t, false>::InterlockedCompareExchangeNodeLink(volatile union NodeLink_t* pLink, const union NodeLink_t& value, const union NodeLink_t& comperand)
{
} /* size: 0 */

// <005881EA> ../public/tier0/tslist.h:1145
inline void CTSQueue<VkCommandBuffer_T::InterlockedCompareExchangeNodeLink(volatile union NodeLink_t* pLink, const union NodeLink_t& value, const union NodeLink_t& comperand)
{
} /* size: 0 */

// <005877AE> ../public/tier0/tslist.h:1145
inline void CTSQueue<CMemoryManagerVulkan::FencedResourceList_t, false>::InterlockedCompareExchangeNodeLink(volatile union NodeLink_t* pLink, const union NodeLink_t& value, const union NodeLink_t& comperand)
{
} /* size: 0 */

// <004F498D> ../public/tier0/tslist.h:1145
inline void CTSQueue<int, true>::InterlockedCompareExchangeNodeLink(volatile union NodeLink_t* pLink, const union NodeLink_t& value, const union NodeLink_t& comperand)
{
} /* size: 0 */

// <001290B7> ../public/tier0/tslist.h:1145
inline void CTSQueue<CEventQueue::QueuedEvent_t, false>::InterlockedCompareExchangeNodeLink(volatile union NodeLink_t* pLink, const union NodeLink_t& value, const union NodeLink_t& comperand)
{
} /* size: 0 */

