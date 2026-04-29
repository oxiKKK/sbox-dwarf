
//
// public/tier0/dbg.h
//
//	referenced by: libengine2.so
//				   libtier0.so
//
//	functions: 2
//	class: 1
//	struct: 1
//

// <00128695> ../public/tier0/dbg.h:122
void SetAssertionPrompt(AssertionType_t, AssertionPrompt_t)
{
} /* size: 0 */

// <0001B9D0> ../public/tier0/dbg.h:130
// member variables: 10
// struct size: 56
struct AssertionFailureInfo_t {
	const char * m_pFormattedMsg; /* 0 8 */
	const char * m_pBaseMsg; /* 8 8 */
	const char * m_pFile; /* 16 8 */
	const char * m_pFunction; /* 24 8 */
	const char * m_pRawExpression; /* 32 8 */
	int m_nLine; /* 40 4 */
	int m_nInstanceReportCount; /* 44 4 */
	AssertionType_t m_type; /* 48 4 */
	bool m_bFatal; /* 52 1 */
	bool m_bIgnored; /* 53 1 */
};

// <000F0D6D> ../public/tier0/dbg.h:144
// member functions: 8
// member variables: 4
// vtable entry: 1
// class size: 24
class IAssertionFailureListener {
	int ()(void) * * _vptr.IAssertionFailureListener; /* 0 8 */
	/* ../public/tier0/dbg.h:148 */
	void IAssertionFailureListener(IAssertionFailureListener* , bool);
	/* ../public/tier0/dbg.h:154 */
	virtual void ~IAssertionFailureListener(IAssertionFailureListener* );
	/* ../public/tier0/dbg.h:165 */
	virtual void* AssertionFailure(IAssertionFailureListener* , AssertionFailureInfo_t* );
	/* ../public/tier0/dbg.h:167 */
	bool OnlyMonitorsEachAssertionOnce(IAssertionFailureListener* );
private:
	IAssertionFailureListener * m_pNext; /* 8 8 */
	bool m_bRegistered; /* 16 1 */
	bool m_bOnlyMonitorsEachAssertionOnce; /* 17 1 */
	void IAssertionFailureListener(class IAssertionFailureListener *, bool); /* linkage=_ZN25IAssertionFailureListenerC4Eb */
	virtual void ~IAssertionFailureListener(class IAssertionFailureListener *); /* linkage=_ZN25IAssertionFailureListenerD4Ev */
	virtual void * AssertionFailure(class IAssertionFailureListener *, class AssertionFailureInfo_t *); /* linkage=_ZN25IAssertionFailureListener16AssertionFailureEP22AssertionFailureInfo_t */
	bool OnlyMonitorsEachAssertionOnce(class IAssertionFailureListener *); /* linkage=_ZN25IAssertionFailureListener29OnlyMonitorsEachAssertionOnceEv */
};

// <000F6B25> ../public/tier0/dbg.h:167
inline void IAssertionFailureListener::OnlyMonitorsEachAssertionOnce()
{
} /* size: 0 */

