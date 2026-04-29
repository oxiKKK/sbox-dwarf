
//
// engine2/loopmodeconsole.cpp
//
//	referenced by: libengine2.so
//
//	functions: 7
//	class: 1
//

// <0078486D> engine2/loopmodeconsole.cpp:18
// member functions: 16
// member variable: 1
// vtable entries: 3
// class size: 8
class CLoopModeConsole : public CLoopModeBase {
public:
	/* class CLoopModeBase <ancestor>; */ /* 0 8 */
	void CLoopModeConsole(CLoopModeConsole* , CLoopModeConsole& );
	void CLoopModeConsole(CLoopModeConsole* , const CLoopModeConsole& );
	/* engine2/loopmodeconsole.cpp:37 */
	bool StaticInit(ILoopType* );
	/* engine2/loopmodeconsole.cpp:42 */
	void StaticShutdown(void);
	/* engine2/loopmodeconsole.cpp:52 */
	virtual bool LoopInit(CLoopModeConsole* , KeyValues* , ILoopModePrerequisiteRegistry* );
	/* engine2/loopmodeconsole.cpp:59 */
	virtual void OnLoopActivate(CLoopModeConsole* , const EngineLoopState_t& , CEventDispatcher<CEventIDManager_Default>* );
	/* engine2/loopmodeconsole.cpp:64 */
	virtual void OnLoopDeactivate(CLoopModeConsole* , const EngineLoopState_t& , CEventDispatcher<CEventIDManager_Default>* );
	/* engine2/loopmodeconsole.cpp:47 */
	void CLoopModeConsole(CLoopModeConsole* );
	void CLoopModeConsole(class CLoopModeConsole *, class CLoopModeConsole &); /* linkage=_ZN16CLoopModeConsoleC4EOS_ */
	void CLoopModeConsole(class CLoopModeConsole *, const class CLoopModeConsole  &); /* linkage=_ZN16CLoopModeConsoleC4ERKS_ */
	/* <786334> engine2/loopmodeconsole.cpp:37 */
	bool StaticInit(class ILoopType *); /* linkage=_ZN16CLoopModeConsole10StaticInitEP9ILoopType */
	/* <78635f> engine2/loopmodeconsole.cpp:42 */
	void StaticShutdown(void); /* linkage=_ZN16CLoopModeConsole14StaticShutdownEv */
	virtual bool LoopInit(class CLoopModeConsole *, class KeyValues *, class ILoopModePrerequisiteRegistry *); /* linkage=_ZN16CLoopModeConsole8LoopInitEP9KeyValuesP29ILoopModePrerequisiteRegistry */
	virtual void OnLoopActivate(class CLoopModeConsole *, const class EngineLoopState_t  &, class CEventDispatcher<CEventIDManager_Default> *); /* linkage=_ZN16CLoopModeConsole14OnLoopActivateERK17EngineLoopState_tP16CEventDispatcherI23CEventIDManager_DefaultE */
	virtual void OnLoopDeactivate(class CLoopModeConsole *, const class EngineLoopState_t  &, class CEventDispatcher<CEventIDManager_Default> *); /* linkage=_ZN16CLoopModeConsole16OnLoopDeactivateERK17EngineLoopState_tP16CEventDispatcherI23CEventIDManager_DefaultE */
	void CLoopModeConsole(class CLoopModeConsole *); /* linkage=_ZN16CLoopModeConsoleC4Ev */
};

// <00786334> engine2/loopmodeconsole.cpp:37
void StaticInit(ILoopType* pEngineLoop)
{
} /* size: 0 */

// <0078635F> engine2/loopmodeconsole.cpp:42
void StaticShutdown(void)
{
} /* size: 0 */

// <00785F61> engine2/loopmodeconsole.cpp:47
// function calls: 2
void CLoopModeConsole::CLoopModeConsole()
{
	ILoopMode::ILoopMode(); // 278
	CLoopModeBase::CLoopModeBase(); // 47
} /* size: 0, inline expansions: 2 (0 bytes) */

// <00785F48> engine2/loopmodeconsole.cpp:47
void CLoopModeConsole::CLoopModeConsole()
{
} /* size: 0 */

// <00785EFE> engine2/loopmodeconsole.cpp:52
void CLoopModeConsole::LoopInit(KeyValues* pKeyValues, ILoopModePrerequisiteRegistry* pRegistry)
{
} /* size: 10 */

// <00785EB4> engine2/loopmodeconsole.cpp:59
void CLoopModeConsole::OnLoopActivate(const EngineLoopState_t& state, CEventDispatcher<CEventIDManager_Default>* pEventDispatcher)
{
} /* size: 5 */

// <00785E83> engine2/loopmodeconsole.cpp:64
void CLoopModeConsole::OnLoopDeactivate(const EngineLoopState_t& state, CEventDispatcher<CEventIDManager_Default>* pEventDispatcher)
{
} /* size: 0 */

