
//
// public/tier0/eventutils.h
//
//	referenced by: librendersystemvulkan.so
//				   libtier0.so
//
//	functions: 5
//	class: 1
//

// <00137BD0> ../public/tier0/eventutils.h:19
// function call: 1
void COneTimeEvent::~COneTimeEvent()
{
	CThreadEvent::~CThreadEvent(); // 19
} /* size: 49, inline expansions: 1 (9 bytes) */

// <00137AEF> ../public/tier0/eventutils.h:19
// function calls: 3
void COneTimeEvent::~COneTimeEvent()
{
	CThreadEvent::~CThreadEvent(); // 19
	IRefCounted::~IRefCounted(); // 19
	COneTimeEvent::~COneTimeEvent(); // 19
} /* size: 79, inline expansions: 3 (54 bytes) */

// <00137AD3> ../public/tier0/eventutils.h:19
inline void COneTimeEvent::~COneTimeEvent()
{
} /* size: 0 */

// <00136F3E> ../public/tier0/eventutils.h:19
// member functions: 20
// member variables: 3
// vtable entries: 2
// class size: 144
class COneTimeEvent : public IRefCounted {
public:
	/* class IRefCounted <ancestor>; */ /* 0 8 */
	void COneTimeEvent(COneTimeEvent* , COneTimeEvent& );
	void COneTimeEvent(COneTimeEvent* , const COneTimeEvent& );
	/* tier0/eventutils.cpp:21 */
	COneTimeEvent* Allocate(void);
	/* tier0/eventutils.cpp:30 */
	virtual int AddRef(COneTimeEvent* );
	/* tier0/eventutils.cpp:36 */
	virtual int Release(COneTimeEvent* );
	/* ../public/tier0/eventutils.h:27 */
	void Set(COneTimeEvent* );
	/* ../public/tier0/eventutils.h:28 */
	bool Check(COneTimeEvent* );
	/* ../public/tier0/eventutils.h:29 */
	bool Wait(COneTimeEvent* , uint32);
private:
	/* tier0/eventutils.cpp:13 */
	void COneTimeEvent(COneTimeEvent* );
	CThreadEvent m_Event; /* 8 128 */
	CInterlockedInt m_nRefCount __attribute__((__aligned__(4))); /* 136 4 */
	virtual void ~COneTimeEvent(COneTimeEvent* );
	void COneTimeEvent(class COneTimeEvent *, class COneTimeEvent &); /* linkage=_ZN13COneTimeEventC4EOS_ */
	void COneTimeEvent(class COneTimeEvent *, const class COneTimeEvent  &); /* linkage=_ZN13COneTimeEventC4ERKS_ */
	class COneTimeEvent * Allocate(void); /* linkage=_ZN13COneTimeEvent8AllocateEv */
	virtual int AddRef(class COneTimeEvent *); /* linkage=_ZN13COneTimeEvent6AddRefEv */
	/* <138524> tier0/eventutils.cpp:36 */
	virtual int Release(class COneTimeEvent *); /* linkage=_ZN13COneTimeEvent7ReleaseEv */
	void Set(class COneTimeEvent *); /* linkage=_ZN13COneTimeEvent3SetEv */
	bool Check(class COneTimeEvent *); /* linkage=_ZN13COneTimeEvent5CheckEv */
	bool Wait(class COneTimeEvent *, uint32); /* linkage=_ZN13COneTimeEvent4WaitEj */
	void COneTimeEvent(class COneTimeEvent *); /* linkage=_ZN13COneTimeEventC4Ev */
	virtual void ~COneTimeEvent(class COneTimeEvent *); /* linkage=_ZN13COneTimeEventD4Ev */
} __attribute__((__aligned__(8)));

// <007401B1> ../public/tier0/eventutils.h:27
inline void COneTimeEvent::Set()
{
} /* size: 0 */

// <0074018C> ../public/tier0/eventutils.h:29
inline void COneTimeEvent::Wait(uint32 dwTimeout)
{
} /* size: 0 */

