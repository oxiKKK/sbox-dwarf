
//
// public/tier0/timestamped_event.h
//
//	referenced by: libengine2.so
//
//	functions: 6
//	class: 1
//

// <04635E5F> ../public/tier0/timestamped_event.h:38
int64 TimestampedEvent(TimestampedEvent_t, int64, TimestampedEventPart_t)
{
} /* size: 0 */

// <04635EAE> ../public/tier0/timestamped_event.h:44
int64 TimestampedEventMsgV(TimestampedEvent_t, int64, TimestampedEventPart_t, const char *, typedef __va_list_tag __va_list_tag *)
{
} /* size: 0 */

// <0462A79C> ../public/tier0/timestamped_event.h:49
// member functions: 4
// member variables: 2
// class size: 16
class CTimestampedEventScopeHelper {
	/* ../public/tier0/timestamped_event.h:52 */
	void CTimestampedEventScopeHelper(CTimestampedEventScopeHelper* , TimestampedEvent_t, const char* , ...);
	/* ../public/tier0/timestamped_event.h:61 */
	void ~CTimestampedEventScopeHelper(CTimestampedEventScopeHelper* );
	TimestampedEvent_t m_nEvent; /* 0 4 */
	int64 m_nID; /* 8 8 */
	void CTimestampedEventScopeHelper(class CTimestampedEventScopeHelper *, enum TimestampedEvent_t, const char  *, ...); /* linkage=_ZN28CTimestampedEventScopeHelperC4E18TimestampedEvent_tPKcz */
	void ~CTimestampedEventScopeHelper(class CTimestampedEventScopeHelper *); /* linkage=_ZN28CTimestampedEventScopeHelperD4Ev */
};

// <04649495> ../public/tier0/timestamped_event.h:52
// variables: 2
void CTimestampedEventScopeHelper::CTimestampedEventScopeHelper(TimestampedEvent_t nEvent, const char* pMessage, ...)
{
	{
		va_list args; // 55
	}
	{
		va_list args; // 55
	}
} /* size: 206 */

// <04649455> ../public/tier0/timestamped_event.h:52
// variable: 1
inline void CTimestampedEventScopeHelper::CTimestampedEventScopeHelper(TimestampedEvent_t nEvent, const char* pMessage, ...)
{
	{
		va_list args; // 55
	}
} /* size: 0 */

// <0464943E> ../public/tier0/timestamped_event.h:61
void CTimestampedEventScopeHelper::~CTimestampedEventScopeHelper()
{
} /* size: 0 */

// <04649425> ../public/tier0/timestamped_event.h:61
inline void CTimestampedEventScopeHelper::~CTimestampedEventScopeHelper()
{
} /* size: 0 */

