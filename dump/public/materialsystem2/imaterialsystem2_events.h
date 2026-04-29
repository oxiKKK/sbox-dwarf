
//
// public/materialsystem2/imaterialsystem2_events.h
//
//	referenced by: libmaterialsystem2.so
//
//	function: 1
//	class: 1
//

// <000C04A0> ../public/materialsystem2/imaterialsystem2_events.h:8
// variable: 1
inline void GetEventId(void)
{
	EventId_t s_nEventId; // 8
} /* size: 0, variables: 1 */

// <0008196C> ../public/materialsystem2/imaterialsystem2_events.h:8
// member function: 1
// member variable: 1
// class size: 1
class EShadersUnloaded : public CEventSignature<EShadersUnloaded> {
public:
	/* class CEventSignature<EShadersUnloaded> <ancestor>; */ /* 0 0 */
	/* ../public/materialsystem2/imaterialsystem2_events.h:8 */
	EventId_t GetEventId(void);
};

