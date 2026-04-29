
//
// tier0/platform_posix.cpp
//
//	referenced by: libtier0.so
//
//	functions: 106
//	classes: 23
//	structs: 3
//

// <003A4AF7> tier0/platform_posix.cpp:145
void InitWatchDogTimer(void)
{
} /* size: 0 */

// <003A5230> tier0/platform_posix.cpp:157
// function calls: 3
bool WatchDogHandler(int nSignal, siginfo_t* info, void* ucontext, VSignalHandlerInfo_t& HandlerInfo)
{
	printf(const char* __fmt, ...); // 159
	Plat_IsInDebugSession(void); // 160
	WatchDogHandler(int nSignal,
			siginfo_t* info,
			void* ucontext,
			VSignalHandlerInfo_t& HandlerInfo);  // 157
} /* size: 0, inline expansions: 3 (42 bytes) */

// <003A4AB4> tier0/platform_posix.cpp:157
bool WatchDogHandler(int nSignal, siginfo_t* info, void* ucontext, VSignalHandlerInfo_t& HandlerInfo)
{
} /* size: 0 */

// <003A49F9> tier0/platform_posix.cpp:180
// function call: 1
void Plat_BeginWatchdogTimer(int nSecs)
{
	InitWatchDogTimer(void); // 185
} /* size: 135, inline expansions: 1 (35 bytes) */

// <003A4998> tier0/platform_posix.cpp:196
void Plat_EndWatchdogTimer(void)
{
} /* size: 38 */

// <003A4966> tier0/platform_posix.cpp:202
void Plat_SetWatchdogHandlerFunction(Plat_WatchDogHandlerFunction_t function)
{
} /* size: 12 */

// <003965DF> tier0/platform_posix.cpp:251
// member variable: 1
// struct size: 152
struct sigaction_t : public sigaction {
public:
	/* struct sigaction <ancestor>; */ /* 0 152 */
};

// <003A4897> tier0/platform_posix.cpp:259
void IForceSignalNumberIntoCallStack::IForceSignalNumberIntoCallStack()
{
} /* size: 0 */

// <003A487A> tier0/platform_posix.cpp:259
inline void IForceSignalNumberIntoCallStack::IForceSignalNumberIntoCallStack()
{
} /* size: 0 */

// <00396761> tier0/platform_posix.cpp:259
// member functions: 12
// member variables: 2
// vtable entries: 2
// class size: 16
class IForceSignalNumberIntoCallStack {
	void ~IForceSignalNumberIntoCallStack(IForceSignalNumberIntoCallStack* );
	void IForceSignalNumberIntoCallStack(IForceSignalNumberIntoCallStack* , IForceSignalNumberIntoCallStack& );
	void IForceSignalNumberIntoCallStack(IForceSignalNumberIntoCallStack* , const IForceSignalNumberIntoCallStack& );
	void IForceSignalNumberIntoCallStack(IForceSignalNumberIntoCallStack* );
	int ()(void) * * _vptr.IForceSignalNumberIntoCallStack; /* 0 8 */
	/* tier0/platform_posix.cpp:262 */
	virtual void SignalHandler(IForceSignalNumberIntoCallStack* , siginfo_t* , void* );
	/* tier0/platform_posix.cpp:263 */
	virtual void ForceCrash(IForceSignalNumberIntoCallStack* );
	SignalHandlerMapping_t * m_pSignalInfo; /* 8 8 */
	void ~IForceSignalNumberIntoCallStack(class IForceSignalNumberIntoCallStack *); /* linkage=_ZN31IForceSignalNumberIntoCallStackD4Ev */
	void IForceSignalNumberIntoCallStack(class IForceSignalNumberIntoCallStack *, class IForceSignalNumberIntoCallStack &); /* linkage=_ZN31IForceSignalNumberIntoCallStackC4EOS_ */
	void IForceSignalNumberIntoCallStack(class IForceSignalNumberIntoCallStack *, const class IForceSignalNumberIntoCallStack  &); /* linkage=_ZN31IForceSignalNumberIntoCallStackC4ERKS_ */
	void IForceSignalNumberIntoCallStack(class IForceSignalNumberIntoCallStack *); /* linkage=_ZN31IForceSignalNumberIntoCallStackC4Ev */
	virtual void SignalHandler(class IForceSignalNumberIntoCallStack *, siginfo_t *, void *); /* linkage=_ZN31IForceSignalNumberIntoCallStack13SignalHandlerEP9siginfo_tPv */
	virtual void ForceCrash(class IForceSignalNumberIntoCallStack *); /* linkage=_ZN31IForceSignalNumberIntoCallStack10ForceCrashEv */
};

// <003A4863> tier0/platform_posix.cpp:270
void CSignal<0>::CSignal()
{
} /* size: 0 */

// <003A4846> tier0/platform_posix.cpp:270
inline void CSignal<0>::CSignal()
{
} /* size: 0 */

// <003A482F> tier0/platform_posix.cpp:270
void CSignal<8>::CSignal()
{
} /* size: 0 */

// <003A4812> tier0/platform_posix.cpp:270
inline void CSignal<8>::CSignal()
{
} /* size: 0 */

// <003A47FB> tier0/platform_posix.cpp:270
void CSignal<4>::CSignal()
{
} /* size: 0 */

// <003A47DE> tier0/platform_posix.cpp:270
inline void CSignal<4>::CSignal()
{
} /* size: 0 */

// <003A47C7> tier0/platform_posix.cpp:270
void CSignal<11>::CSignal()
{
} /* size: 0 */

// <003A47AA> tier0/platform_posix.cpp:270
inline void CSignal<11>::CSignal()
{
} /* size: 0 */

// <003A4793> tier0/platform_posix.cpp:270
void CSignal<7>::CSignal()
{
} /* size: 0 */

// <003A4776> tier0/platform_posix.cpp:270
inline void CSignal<7>::CSignal()
{
} /* size: 0 */

// <003A475F> tier0/platform_posix.cpp:270
void CSignal<6>::CSignal()
{
} /* size: 0 */

// <003A4742> tier0/platform_posix.cpp:270
inline void CSignal<6>::CSignal()
{
} /* size: 0 */

// <003A472B> tier0/platform_posix.cpp:270
void CSignal<5>::CSignal()
{
} /* size: 0 */

// <003A470E> tier0/platform_posix.cpp:270
inline void CSignal<5>::CSignal()
{
} /* size: 0 */

// <003A46F7> tier0/platform_posix.cpp:270
void CSignal<31>::CSignal()
{
} /* size: 0 */

// <003A46DA> tier0/platform_posix.cpp:270
inline void CSignal<31>::CSignal()
{
} /* size: 0 */

// <003A46C3> tier0/platform_posix.cpp:270
void CSignal<15>::CSignal()
{
} /* size: 0 */

// <003A46A6> tier0/platform_posix.cpp:270
inline void CSignal<15>::CSignal()
{
} /* size: 0 */

// <003A468F> tier0/platform_posix.cpp:270
void CSignal<2>::CSignal()
{
} /* size: 0 */

// <003A4672> tier0/platform_posix.cpp:270
inline void CSignal<2>::CSignal()
{
} /* size: 0 */

// <003A465B> tier0/platform_posix.cpp:270
void CSignal<3>::CSignal()
{
} /* size: 0 */

// <003A463E> tier0/platform_posix.cpp:270
inline void CSignal<3>::CSignal()
{
} /* size: 0 */

// <003A4627> tier0/platform_posix.cpp:270
void CSignal<9>::CSignal()
{
} /* size: 0 */

// <003A460A> tier0/platform_posix.cpp:270
inline void CSignal<9>::CSignal()
{
} /* size: 0 */

// <003A45F3> tier0/platform_posix.cpp:270
void CSignal<1>::CSignal()
{
} /* size: 0 */

// <003A45D6> tier0/platform_posix.cpp:270
inline void CSignal<1>::CSignal()
{
} /* size: 0 */

// <003A45BF> tier0/platform_posix.cpp:270
void CSignal<14>::CSignal()
{
} /* size: 0 */

// <003A45A2> tier0/platform_posix.cpp:270
inline void CSignal<14>::CSignal()
{
} /* size: 0 */

// <003A458B> tier0/platform_posix.cpp:270
void CSignal<26>::CSignal()
{
} /* size: 0 */

// <003A456E> tier0/platform_posix.cpp:270
inline void CSignal<26>::CSignal()
{
} /* size: 0 */

// <003A4557> tier0/platform_posix.cpp:270
void CSignal<27>::CSignal()
{
} /* size: 0 */

// <003A453A> tier0/platform_posix.cpp:270
inline void CSignal<27>::CSignal()
{
} /* size: 0 */

// <003A4523> tier0/platform_posix.cpp:270
void CSignal<29>::CSignal()
{
} /* size: 0 */

// <003A4506> tier0/platform_posix.cpp:270
inline void CSignal<29>::CSignal()
{
} /* size: 0 */

// <003A4453> tier0/platform_posix.cpp:270
void CSignal<19>::CSignal()
{
} /* size: 0 */

// <003A4436> tier0/platform_posix.cpp:270
inline void CSignal<19>::CSignal()
{
} /* size: 0 */

// <003A43EB> tier0/platform_posix.cpp:270
void CSignal<21>::CSignal()
{
} /* size: 0 */

// <003A43CE> tier0/platform_posix.cpp:270
inline void CSignal<21>::CSignal()
{
} /* size: 0 */

// <003A431B> tier0/platform_posix.cpp:270
void CSignal<25>::CSignal()
{
} /* size: 0 */

// <003A42FE> tier0/platform_posix.cpp:270
inline void CSignal<25>::CSignal()
{
} /* size: 0 */

// <003A42E7> tier0/platform_posix.cpp:270
void CSignal<10>::CSignal()
{
} /* size: 0 */

// <003A42CA> tier0/platform_posix.cpp:270
inline void CSignal<10>::CSignal()
{
} /* size: 0 */

// <00397115> tier0/platform_posix.cpp:270
// member functions: 12
// member variable: 1
// static member variable: 1
// vtable entries: 2
// class size: 16
class CSignal<30> : public IForceSignalNumberIntoCallStack {
public:
	/* class IForceSignalNumberIntoCallStack <ancestor>; */ /* 0 16 */
	void ~CSignal(CSignal<30>* );
	void CSignal(CSignal<30>* , CSignal<30>& );
	void CSignal(CSignal<30>* , const CSignal<30>& );
	void CSignal(CSignal<30>* );
	/* tier0/platform_posix.cpp:1017 */
	virtual void SignalHandler(CSignal<30>* , siginfo_t* , void* );
	/* tier0/platform_posix.cpp:1026 */
	virtual void ForceCrash(CSignal<30>* );
	static class CSignal<30> s_Instance; /* 0 0 */
	void ~CSignal(class CSignal<30> *); /* linkage=_ZN7CSignalILi30EED4Ev */
	void CSignal(class CSignal<30> *, class CSignal<30> &); /* linkage=_ZN7CSignalILi30EEC4EOS0_ */
	void CSignal(class CSignal<30> *, const class CSignal<30>  &); /* linkage=_ZN7CSignalILi30EEC4ERKS0_ */
	void CSignal(class CSignal<30> *); /* linkage=_ZN7CSignalILi30EEC4Ev */
	virtual void SignalHandler(class CSignal<30> *, siginfo_t *, void *); /* linkage=_ZN7CSignalILi30EE13SignalHandlerEP9siginfo_tPv */
	virtual void ForceCrash(class CSignal<30> *); /* linkage=_ZN7CSignalILi30EE10ForceCrashEv */
};

// <00397232> tier0/platform_posix.cpp:270
// member functions: 6
// member variable: 1
// static member variable: 1
// vtable entries: 2
// class size: 16
class CSignal<16> : public IForceSignalNumberIntoCallStack {
public:
	/* class IForceSignalNumberIntoCallStack <ancestor>; */ /* 0 16 */
	void ~CSignal(CSignal<16>* );
	void CSignal(CSignal<16>* , CSignal<16>& );
	void CSignal(CSignal<16>* , const CSignal<16>& );
	void CSignal(CSignal<16>* );
	/* tier0/platform_posix.cpp:1017 */
	virtual void SignalHandler(CSignal<16>* , siginfo_t* , void* );
	/* tier0/platform_posix.cpp:1026 */
	virtual void ForceCrash(CSignal<16>* );
	static class CSignal<16> s_Instance; /* 0 0 */
};

// <0039734F> tier0/platform_posix.cpp:270
// member functions: 6
// member variable: 1
// static member variable: 1
// vtable entries: 2
// class size: 16
class CSignal<28> : public IForceSignalNumberIntoCallStack {
public:
	/* class IForceSignalNumberIntoCallStack <ancestor>; */ /* 0 16 */
	void ~CSignal(CSignal<28>* );
	void CSignal(CSignal<28>* , CSignal<28>& );
	void CSignal(CSignal<28>* , const CSignal<28>& );
	void CSignal(CSignal<28>* );
	/* tier0/platform_posix.cpp:1017 */
	virtual void SignalHandler(CSignal<28>* , siginfo_t* , void* );
	/* tier0/platform_posix.cpp:1026 */
	virtual void ForceCrash(CSignal<28>* );
	static class CSignal<28> s_Instance; /* 0 0 */
};

// <0039746C> tier0/platform_posix.cpp:270
// member functions: 6
// member variable: 1
// static member variable: 1
// vtable entries: 2
// class size: 16
class CSignal<12> : public IForceSignalNumberIntoCallStack {
public:
	/* class IForceSignalNumberIntoCallStack <ancestor>; */ /* 0 16 */
	void ~CSignal(CSignal<12>* );
	void CSignal(CSignal<12>* , CSignal<12>& );
	void CSignal(CSignal<12>* , const CSignal<12>& );
	void CSignal(CSignal<12>* );
	/* tier0/platform_posix.cpp:1017 */
	virtual void SignalHandler(CSignal<12>* , siginfo_t* , void* );
	/* tier0/platform_posix.cpp:1026 */
	virtual void ForceCrash(CSignal<12>* );
	static class CSignal<12> s_Instance; /* 0 0 */
};

// <00397589> tier0/platform_posix.cpp:270
// member functions: 6
// member variable: 1
// static member variable: 1
// vtable entries: 2
// class size: 16
class CSignal<10> : public IForceSignalNumberIntoCallStack {
public:
	/* class IForceSignalNumberIntoCallStack <ancestor>; */ /* 0 16 */
	void ~CSignal(CSignal<10>* );
	void CSignal(CSignal<10>* , CSignal<10>& );
	void CSignal(CSignal<10>* , const CSignal<10>& );
	void CSignal(CSignal<10>* );
	/* tier0/platform_posix.cpp:1017 */
	virtual void SignalHandler(CSignal<10>* , siginfo_t* , void* );
	/* tier0/platform_posix.cpp:1026 */
	virtual void ForceCrash(CSignal<10>* );
	static class CSignal<10> s_Instance; /* 0 0 */
};

// <003977C3> tier0/platform_posix.cpp:270
// member functions: 6
// member variable: 1
// static member variable: 1
// vtable entries: 2
// class size: 16
class CSignal<24> : public IForceSignalNumberIntoCallStack {
public:
	/* class IForceSignalNumberIntoCallStack <ancestor>; */ /* 0 16 */
	void ~CSignal(CSignal<24>* );
	void CSignal(CSignal<24>* , CSignal<24>& );
	void CSignal(CSignal<24>* , const CSignal<24>& );
	void CSignal(CSignal<24>* );
	/* tier0/platform_posix.cpp:1017 */
	virtual void SignalHandler(CSignal<24>* , siginfo_t* , void* );
	/* tier0/platform_posix.cpp:1026 */
	virtual void ForceCrash(CSignal<24>* );
	static class CSignal<24> s_Instance; /* 0 0 */
};

// <003978E0> tier0/platform_posix.cpp:270
// member functions: 6
// member variable: 1
// static member variable: 1
// vtable entries: 2
// class size: 16
class CSignal<13> : public IForceSignalNumberIntoCallStack {
public:
	/* class IForceSignalNumberIntoCallStack <ancestor>; */ /* 0 16 */
	void ~CSignal(CSignal<13>* );
	void CSignal(CSignal<13>* , CSignal<13>& );
	void CSignal(CSignal<13>* , const CSignal<13>& );
	void CSignal(CSignal<13>* );
	/* tier0/platform_posix.cpp:1017 */
	virtual void SignalHandler(CSignal<13>* , siginfo_t* , void* );
	/* tier0/platform_posix.cpp:1026 */
	virtual void ForceCrash(CSignal<13>* );
	static class CSignal<13> s_Instance; /* 0 0 */
};

// <00397C37> tier0/platform_posix.cpp:270
// member functions: 6
// member variable: 1
// static member variable: 1
// vtable entries: 2
// class size: 16
class CSignal<20> : public IForceSignalNumberIntoCallStack {
public:
	/* class IForceSignalNumberIntoCallStack <ancestor>; */ /* 0 16 */
	void ~CSignal(CSignal<20>* );
	void CSignal(CSignal<20>* , CSignal<20>& );
	void CSignal(CSignal<20>* , const CSignal<20>& );
	void CSignal(CSignal<20>* );
	/* tier0/platform_posix.cpp:1017 */
	virtual void SignalHandler(CSignal<20>* , siginfo_t* , void* );
	/* tier0/platform_posix.cpp:1026 */
	virtual void ForceCrash(CSignal<20>* );
	static class CSignal<20> s_Instance; /* 0 0 */
};

// <00397E71> tier0/platform_posix.cpp:270
// member functions: 6
// member variable: 1
// static member variable: 1
// vtable entries: 2
// class size: 16
class CSignal<18> : public IForceSignalNumberIntoCallStack {
public:
	/* class IForceSignalNumberIntoCallStack <ancestor>; */ /* 0 16 */
	void ~CSignal(CSignal<18>* );
	void CSignal(CSignal<18>* , CSignal<18>& );
	void CSignal(CSignal<18>* , const CSignal<18>& );
	void CSignal(CSignal<18>* );
	/* tier0/platform_posix.cpp:1017 */
	virtual void SignalHandler(CSignal<18>* , siginfo_t* , void* );
	/* tier0/platform_posix.cpp:1026 */
	virtual void ForceCrash(CSignal<18>* );
	static class CSignal<18> s_Instance; /* 0 0 */
};

// <00397F8E> tier0/platform_posix.cpp:270
// member functions: 6
// member variable: 1
// static member variable: 1
// vtable entries: 2
// class size: 16
class CSignal<17> : public IForceSignalNumberIntoCallStack {
public:
	/* class IForceSignalNumberIntoCallStack <ancestor>; */ /* 0 16 */
	void ~CSignal(CSignal<17>* );
	void CSignal(CSignal<17>* , CSignal<17>& );
	void CSignal(CSignal<17>* , const CSignal<17>& );
	void CSignal(CSignal<17>* );
	/* tier0/platform_posix.cpp:1017 */
	virtual void SignalHandler(CSignal<17>* , siginfo_t* , void* );
	/* tier0/platform_posix.cpp:1026 */
	virtual void ForceCrash(CSignal<17>* );
	static class CSignal<17> s_Instance; /* 0 0 */
};

// <003980AB> tier0/platform_posix.cpp:270
// member functions: 6
// member variable: 1
// static member variable: 1
// vtable entries: 2
// class size: 16
class CSignal<23> : public IForceSignalNumberIntoCallStack {
public:
	/* class IForceSignalNumberIntoCallStack <ancestor>; */ /* 0 16 */
	void ~CSignal(CSignal<23>* );
	void CSignal(CSignal<23>* , CSignal<23>& );
	void CSignal(CSignal<23>* , const CSignal<23>& );
	void CSignal(CSignal<23>* );
	/* tier0/platform_posix.cpp:1017 */
	virtual void SignalHandler(CSignal<23>* , siginfo_t* , void* );
	/* tier0/platform_posix.cpp:1026 */
	virtual void ForceCrash(CSignal<23>* );
	static class CSignal<23> s_Instance; /* 0 0 */
};

// <003981C8> tier0/platform_posix.cpp:270
// member functions: 6
// member variable: 1
// static member variable: 1
// vtable entries: 2
// class size: 16
class CSignal<29> : public IForceSignalNumberIntoCallStack {
public:
	/* class IForceSignalNumberIntoCallStack <ancestor>; */ /* 0 16 */
	void ~CSignal(CSignal<29>* );
	void CSignal(CSignal<29>* , CSignal<29>& );
	void CSignal(CSignal<29>* , const CSignal<29>& );
	void CSignal(CSignal<29>* );
	/* tier0/platform_posix.cpp:1017 */
	virtual void SignalHandler(CSignal<29>* , siginfo_t* , void* );
	/* tier0/platform_posix.cpp:1026 */
	virtual void ForceCrash(CSignal<29>* );
	static class CSignal<29> s_Instance; /* 0 0 */
};

// <0039863C> tier0/platform_posix.cpp:270
// member functions: 6
// member variable: 1
// static member variable: 1
// vtable entries: 2
// class size: 16
class CSignal<1> : public IForceSignalNumberIntoCallStack {
public:
	/* class IForceSignalNumberIntoCallStack <ancestor>; */ /* 0 16 */
	void ~CSignal(CSignal<1>* );
	void CSignal(CSignal<1>* , CSignal<1>& );
	void CSignal(CSignal<1>* , const CSignal<1>& );
	void CSignal(CSignal<1>* );
	/* tier0/platform_posix.cpp:1017 */
	virtual void SignalHandler(CSignal<1>* , siginfo_t* , void* );
	/* tier0/platform_posix.cpp:1026 */
	virtual void ForceCrash(CSignal<1>* );
	static class CSignal<1> s_Instance; /* 0 0 */
};

// <00398759> tier0/platform_posix.cpp:270
// member functions: 6
// member variable: 1
// static member variable: 1
// vtable entries: 2
// class size: 16
class CSignal<9> : public IForceSignalNumberIntoCallStack {
public:
	/* class IForceSignalNumberIntoCallStack <ancestor>; */ /* 0 16 */
	void ~CSignal(CSignal<9>* );
	void CSignal(CSignal<9>* , CSignal<9>& );
	void CSignal(CSignal<9>* , const CSignal<9>& );
	void CSignal(CSignal<9>* );
	/* tier0/platform_posix.cpp:1017 */
	virtual void SignalHandler(CSignal<9>* , siginfo_t* , void* );
	/* tier0/platform_posix.cpp:1026 */
	virtual void ForceCrash(CSignal<9>* );
	static class CSignal<9> s_Instance; /* 0 0 */
};

// <00398876> tier0/platform_posix.cpp:270
// member functions: 6
// member variable: 1
// static member variable: 1
// vtable entries: 2
// class size: 16
class CSignal<3> : public IForceSignalNumberIntoCallStack {
public:
	/* class IForceSignalNumberIntoCallStack <ancestor>; */ /* 0 16 */
	void ~CSignal(CSignal<3>* );
	void CSignal(CSignal<3>* , CSignal<3>& );
	void CSignal(CSignal<3>* , const CSignal<3>& );
	void CSignal(CSignal<3>* );
	/* tier0/platform_posix.cpp:1017 */
	virtual void SignalHandler(CSignal<3>* , siginfo_t* , void* );
	/* tier0/platform_posix.cpp:1026 */
	virtual void ForceCrash(CSignal<3>* );
	static class CSignal<3> s_Instance; /* 0 0 */
};

// <00398993> tier0/platform_posix.cpp:270
// member functions: 6
// member variable: 1
// static member variable: 1
// vtable entries: 2
// class size: 16
class CSignal<2> : public IForceSignalNumberIntoCallStack {
public:
	/* class IForceSignalNumberIntoCallStack <ancestor>; */ /* 0 16 */
	void ~CSignal(CSignal<2>* );
	void CSignal(CSignal<2>* , CSignal<2>& );
	void CSignal(CSignal<2>* , const CSignal<2>& );
	void CSignal(CSignal<2>* );
	/* tier0/platform_posix.cpp:1017 */
	virtual void SignalHandler(CSignal<2>* , siginfo_t* , void* );
	/* tier0/platform_posix.cpp:1026 */
	virtual void ForceCrash(CSignal<2>* );
	static class CSignal<2> s_Instance; /* 0 0 */
};

// <00398CEA> tier0/platform_posix.cpp:270
// member functions: 6
// member variable: 1
// static member variable: 1
// vtable entries: 2
// class size: 16
class CSignal<5> : public IForceSignalNumberIntoCallStack {
public:
	/* class IForceSignalNumberIntoCallStack <ancestor>; */ /* 0 16 */
	void ~CSignal(CSignal<5>* );
	void CSignal(CSignal<5>* , CSignal<5>& );
	void CSignal(CSignal<5>* , const CSignal<5>& );
	void CSignal(CSignal<5>* );
	/* tier0/platform_posix.cpp:1017 */
	virtual void SignalHandler(CSignal<5>* , siginfo_t* , void* );
	/* tier0/platform_posix.cpp:1026 */
	virtual void ForceCrash(CSignal<5>* );
	static class CSignal<5> s_Instance; /* 0 0 */
};

// <00398E07> tier0/platform_posix.cpp:270
// member functions: 6
// member variable: 1
// static member variable: 1
// vtable entries: 2
// class size: 16
class CSignal<6> : public IForceSignalNumberIntoCallStack {
public:
	/* class IForceSignalNumberIntoCallStack <ancestor>; */ /* 0 16 */
	void ~CSignal(CSignal<6>* );
	void CSignal(CSignal<6>* , CSignal<6>& );
	void CSignal(CSignal<6>* , const CSignal<6>& );
	void CSignal(CSignal<6>* );
	/* tier0/platform_posix.cpp:1017 */
	virtual void SignalHandler(CSignal<6>* , siginfo_t* , void* );
	/* tier0/platform_posix.cpp:1026 */
	virtual void ForceCrash(CSignal<6>* );
	static class CSignal<6> s_Instance; /* 0 0 */
};

// <00398F24> tier0/platform_posix.cpp:270
// member functions: 6
// member variable: 1
// static member variable: 1
// vtable entries: 2
// class size: 16
class CSignal<7> : public IForceSignalNumberIntoCallStack {
public:
	/* class IForceSignalNumberIntoCallStack <ancestor>; */ /* 0 16 */
	void ~CSignal(CSignal<7>* );
	void CSignal(CSignal<7>* , CSignal<7>& );
	void CSignal(CSignal<7>* , const CSignal<7>& );
	void CSignal(CSignal<7>* );
	/* tier0/platform_posix.cpp:1017 */
	virtual void SignalHandler(CSignal<7>* , siginfo_t* , void* );
	/* tier0/platform_posix.cpp:1026 */
	virtual void ForceCrash(CSignal<7>* );
	static class CSignal<7> s_Instance; /* 0 0 */
};

// <0039915E> tier0/platform_posix.cpp:270
// member functions: 6
// member variable: 1
// static member variable: 1
// vtable entries: 2
// class size: 16
class CSignal<4> : public IForceSignalNumberIntoCallStack {
public:
	/* class IForceSignalNumberIntoCallStack <ancestor>; */ /* 0 16 */
	void ~CSignal(CSignal<4>* );
	void CSignal(CSignal<4>* , CSignal<4>& );
	void CSignal(CSignal<4>* , const CSignal<4>& );
	void CSignal(CSignal<4>* );
	/* tier0/platform_posix.cpp:1017 */
	virtual void SignalHandler(CSignal<4>* , siginfo_t* , void* );
	/* tier0/platform_posix.cpp:1026 */
	virtual void ForceCrash(CSignal<4>* );
	static class CSignal<4> s_Instance; /* 0 0 */
};

// <0039927B> tier0/platform_posix.cpp:270
// member functions: 6
// member variable: 1
// static member variable: 1
// vtable entries: 2
// class size: 16
class CSignal<8> : public IForceSignalNumberIntoCallStack {
public:
	/* class IForceSignalNumberIntoCallStack <ancestor>; */ /* 0 16 */
	void ~CSignal(CSignal<8>* );
	void CSignal(CSignal<8>* , CSignal<8>& );
	void CSignal(CSignal<8>* , const CSignal<8>& );
	void CSignal(CSignal<8>* );
	/* tier0/platform_posix.cpp:1017 */
	virtual void SignalHandler(CSignal<8>* , siginfo_t* , void* );
	/* tier0/platform_posix.cpp:1026 */
	virtual void ForceCrash(CSignal<8>* );
	static class CSignal<8> s_Instance; /* 0 0 */
};

// <00399398> tier0/platform_posix.cpp:270
// member functions: 12
// member variable: 1
// static member variable: 1
// vtable entries: 2
// class size: 16
class CSignal<0> : public IForceSignalNumberIntoCallStack {
public:
	/* class IForceSignalNumberIntoCallStack <ancestor>; */ /* 0 16 */
	void ~CSignal(CSignal<0>* );
	void CSignal(CSignal<0>* , CSignal<0>& );
	void CSignal(CSignal<0>* , const CSignal<0>& );
	void CSignal(CSignal<0>* );
	/* tier0/platform_posix.cpp:1017 */
	virtual void SignalHandler(CSignal<0>* , siginfo_t* , void* );
	/* tier0/platform_posix.cpp:1026 */
	virtual void ForceCrash(CSignal<0>* );
	static class CSignal<0> s_Instance; /* 0 0 */
	void ~CSignal(class CSignal<0> *); /* linkage=_ZN7CSignalILi0EED4Ev */
	void CSignal(class CSignal<0> *, class CSignal<0> &); /* linkage=_ZN7CSignalILi0EEC4EOS0_ */
	void CSignal(class CSignal<0> *, const class CSignal<0>  &); /* linkage=_ZN7CSignalILi0EEC4ERKS0_ */
	void CSignal(class CSignal<0> *); /* linkage=_ZN7CSignalILi0EEC4Ev */
	virtual void SignalHandler(class CSignal<0> *, siginfo_t *, void *); /* linkage=_ZN7CSignalILi0EE13SignalHandlerEP9siginfo_tPv */
	virtual void ForceCrash(class CSignal<0> *); /* linkage=_ZN7CSignalILi0EE10ForceCrashEv */
};

// <003965F6> tier0/platform_posix.cpp:282
// member functions: 6
// member variables: 9
// struct size: 208
struct SignalHandlerMapping_t : public VSignalHandlerInfo_t {
public:
	/* struct VSignalHandlerInfo_t <ancestor>; */ /* 0 8 */
	uint32 nFlags; /* 8 4 */
	CInterlockedInt handlingLock __attribute__((__aligned__(4))); /* 12 4 */
	FN_SignalHandler_t * pHandlers; /* 16 8 */
	size_t nHandlers; /* 24 8 */
	size_t nMaxHandlers; /* 32 8 */
	FN_SignalHandler_t singleHandlerMem; /* 40 8 */
	sigaction_t OldAction; /* 48 152 */
	IForceSignalNumberIntoCallStack * pForceSignalNumberIntoCallStack; /* 200 8 */
	/* tier0/platform_posix.cpp:300 */
	void SignalHandlerMapping_t(SignalHandlerMapping_t* );
	/* tier0/platform_posix.cpp:310 */
	void ~SignalHandlerMapping_t(SignalHandlerMapping_t* );
	/* tier0/platform_posix.cpp:318 */
	void Lock(SignalHandlerMapping_t* );
	/* tier0/platform_posix.cpp:326 */
	void Unlock(SignalHandlerMapping_t* );
	/* tier0/platform_posix.cpp:331 */
	void ChooseHandler(SignalHandlerMapping_t* , sigaction_t& );
	/* tier0/platform_posix.cpp:370 */
	const char* GetCachedCompoundName(SignalHandlerMapping_t* , char* , size_t, int);
} __attribute__((__aligned__(8)));

// <003A494F> tier0/platform_posix.cpp:300
void SignalHandlerMapping_t::SignalHandlerMapping_t()
{
} /* size: 0 */

// <003A4936> tier0/platform_posix.cpp:300
inline void SignalHandlerMapping_t::SignalHandlerMapping_t()
{
} /* size: 0 */

// <003A491F> tier0/platform_posix.cpp:310
void SignalHandlerMapping_t::~SignalHandlerMapping_t()
{
} /* size: 0 */

// <003A4906> tier0/platform_posix.cpp:310
inline void SignalHandlerMapping_t::~SignalHandlerMapping_t()
{
} /* size: 0 */

// <003A48ED> tier0/platform_posix.cpp:318
inline void SignalHandlerMapping_t::Lock()
{
} /* size: 0 */

// <003A48D4> tier0/platform_posix.cpp:326
inline void SignalHandlerMapping_t::Unlock()
{
} /* size: 0 */

// <003A48AE> tier0/platform_posix.cpp:331
inline void SignalHandlerMapping_t::ChooseHandler(sigaction_t& action)
{
} /* size: 0 */

// <0039FD29> tier0/platform_posix.cpp:422
void SignalHandlerMemory_t::~SignalHandlerMemory_t()
{
} /* size: 0 */

// <0039FD0C> tier0/platform_posix.cpp:422
inline void SignalHandlerMemory_t::~SignalHandlerMemory_t()
{
} /* size: 0 */

// <0039687F> tier0/platform_posix.cpp:422
// member functions: 2
// member variables: 2
// struct size: 13,528
struct SignalHandlerMemory_t {
	/* tier0/platform_posix.cpp:424 */
	void SignalHandlerMemory_t(SignalHandlerMemory_t* );
	SignalHandlerMapping_t m_Signals[65] __attribute__((__aligned__(8))); /* 0 13520 */
	bool m_bConstructed; /* 13520 1 */
	void ~SignalHandlerMemory_t(SignalHandlerMemory_t* );
} __attribute__((__aligned__(8)));

// <003A29C3> tier0/platform_posix.cpp:432
// variables: 124
// function calls: 49
void SignalHandlerMemory_t::SignalHandlerMemory_t()
{
	{
		 RegisterSignalFunc; // 442
		{
			int i; // 435
		}
		{
			uint32 nErrorSignalFlags; // 487
		}
		{
			uint32 nTerminationSignalFlags; // 574
		}
		{
			uint32 nAlarmSignalFlags; // 622
		}
		{
			int nAsyncIOSignals; // 648
		}
		{
		}
		{
		}
		{
		}
		{
		}
		{
			int nSignal; // 826
			{
				SignalHandlerMapping_t& signal_info; // 828
				char szNameBuffer; // 836
				{
					FN_SigActionHandler_t oldHandler; // 841
					sigaction_t ChosenHandler; // 872
				}
			}
		}
	}
	CInterlockedIntT<int, 4>::CInterlockedIntT(); // 301
	SignalHandlerMapping_t::SignalHandlerMapping_t(); // 432
	{
		 RegisterSignalFunc; // 442
		{
			int i; // 435
		}
		{
			uint32 nErrorSignalFlags; // 487
			{
				SignalHandlerMapping_t& signal_info; // 445
				{
					SignalName_t* pIter; // 456
				}
			}
			operator()(const class* __closure,
					int nSignal,
					SignalName_t* pName,
					uint32 nFlags); // 509
			{
				SignalHandlerMapping_t& signal_info; // 445
				{
					SignalName_t* pIter; // 456
				}
			}
			operator()(const class* __closure,
					int nSignal,
					SignalName_t* pName,
					uint32 nFlags); // 516
			{
				SignalHandlerMapping_t& signal_info; // 445
				{
					SignalName_t* pIter; // 456
				}
			}
			operator()(const class* __closure,
					int nSignal,
					SignalName_t* pName,
					uint32 nFlags); // 523
			{
				SignalHandlerMapping_t& signal_info; // 445
				{
					SignalName_t* pIter; // 456
				}
			}
			operator()(const class* __closure,
					int nSignal,
					SignalName_t* pName,
					uint32 nFlags); // 530
			{
				SignalHandlerMapping_t& signal_info; // 445
				{
					SignalName_t* pIter; // 456
				}
			}
			operator()(const class* __closure,
					int nSignal,
					SignalName_t* pName,
					uint32 nFlags); // 536
			{
				SignalHandlerMapping_t& signal_info; // 445
				{
					SignalName_t* pIter; // 456
				}
			}
			operator()(const class* __closure,
					int nSignal,
					SignalName_t* pName,
					uint32 nFlags); // 542
			{
				SignalHandlerMapping_t& signal_info; // 445
				{
					SignalName_t* pIter; // 456
				}
			}
			operator()(const class* __closure,
					int nSignal,
					SignalName_t* pName,
					uint32 nFlags); // 548
			{
				SignalHandlerMapping_t& signal_info; // 445
				{
					SignalName_t* pIter; // 456
				}
			}
			operator()(const class* __closure,
					int nSignal,
					SignalName_t* pName,
					uint32 nFlags); // 560
		}
		{
			uint32 nTerminationSignalFlags; // 574
			{
				SignalHandlerMapping_t& signal_info; // 445
				{
					SignalName_t* pIter; // 456
				}
			}
			operator()(const class* __closure,
					int nSignal,
					SignalName_t* pName,
					uint32 nFlags); // 580
			{
				SignalHandlerMapping_t& signal_info; // 445
				{
					SignalName_t* pIter; // 456
				}
			}
			operator()(const class* __closure,
					int nSignal,
					SignalName_t* pName,
					uint32 nFlags); // 586
			{
				SignalHandlerMapping_t& signal_info; // 445
				{
					SignalName_t* pIter; // 456
				}
			}
			operator()(const class* __closure,
					int nSignal,
					SignalName_t* pName,
					uint32 nFlags); // 595
			{
				SignalHandlerMapping_t& signal_info; // 445
				{
					SignalName_t* pIter; // 456
				}
			}
			operator()(const class* __closure,
					int nSignal,
					SignalName_t* pName,
					uint32 nFlags); // 604
			{
				SignalHandlerMapping_t& signal_info; // 445
				{
					SignalName_t* pIter; // 456
				}
			}
			operator()(const class* __closure,
					int nSignal,
					SignalName_t* pName,
					uint32 nFlags); // 611
		}
		{
			uint32 nAlarmSignalFlags; // 622
			{
				SignalHandlerMapping_t& signal_info; // 445
				{
					SignalName_t* pIter; // 456
				}
			}
			operator()(const class* __closure,
					int nSignal,
					SignalName_t* pName,
					uint32 nFlags); // 627
			{
				SignalHandlerMapping_t& signal_info; // 445
				{
					SignalName_t* pIter; // 456
				}
			}
			operator()(const class* __closure,
					int nSignal,
					SignalName_t* pName,
					uint32 nFlags); // 633
			{
				SignalHandlerMapping_t& signal_info; // 445
				{
					SignalName_t* pIter; // 456
				}
			}
			operator()(const class* __closure,
					int nSignal,
					SignalName_t* pName,
					uint32 nFlags); // 639
		}
		{
			int nAsyncIOSignals; // 648
			{
				SignalHandlerMapping_t& signal_info; // 445
				{
					SignalName_t* pIter; // 456
				}
			}
			operator()(const class* __closure,
					int nSignal,
					SignalName_t* pName,
					uint32 nFlags); // 656
			{
				SignalHandlerMapping_t& signal_info; // 445
				{
					SignalName_t* pIter; // 456
				}
			}
			operator()(const class* __closure,
					int nSignal,
					SignalName_t* pName,
					uint32 nFlags); // 662
			{
				SignalHandlerMapping_t& signal_info; // 445
				{
					SignalName_t* pIter; // 456
				}
			}
			operator()(const class* __closure,
					int nSignal,
					SignalName_t* pName,
					uint32 nFlags); // 668
		}
		{
			{
				SignalHandlerMapping_t& signal_info; // 445
				{
					SignalName_t* pIter; // 456
				}
			}
			operator()(const class* __closure,
					int nSignal,
					SignalName_t* pName,
					uint32 nFlags); // 684
			{
				SignalHandlerMapping_t& signal_info; // 445
				{
					SignalName_t* pIter; // 456
				}
			}
			operator()(const class* __closure,
					int nSignal,
					SignalName_t* pName,
					uint32 nFlags); // 690
			{
				SignalHandlerMapping_t& signal_info; // 445
				{
					SignalName_t* pIter; // 456
				}
			}
			operator()(const class* __closure,
					int nSignal,
					SignalName_t* pName,
					uint32 nFlags); // 697
			{
				SignalHandlerMapping_t& signal_info; // 445
				{
					SignalName_t* pIter; // 456
				}
			}
			operator()(const class* __closure,
					int nSignal,
					SignalName_t* pName,
					uint32 nFlags); // 703
			{
				SignalHandlerMapping_t& signal_info; // 445
				{
					SignalName_t* pIter; // 456
				}
			}
			operator()(const class* __closure,
					int nSignal,
					SignalName_t* pName,
					uint32 nFlags); // 712
			{
				SignalHandlerMapping_t& signal_info; // 445
				{
					SignalName_t* pIter; // 456
				}
			}
			operator()(const class* __closure,
					int nSignal,
					SignalName_t* pName,
					uint32 nFlags); // 718
			{
				SignalHandlerMapping_t& signal_info; // 445
				{
					SignalName_t* pIter; // 456
				}
			}
			operator()(const class* __closure,
					int nSignal,
					SignalName_t* pName,
					uint32 nFlags); // 727
		}
		{
			{
				SignalHandlerMapping_t& signal_info; // 445
				{
					SignalName_t* pIter; // 456
				}
			}
			operator()(const class* __closure,
					int nSignal,
					SignalName_t* pName,
					uint32 nFlags); // 742
			{
				SignalHandlerMapping_t& signal_info; // 445
				{
					SignalName_t* pIter; // 456
				}
			}
			operator()(const class* __closure,
					int nSignal,
					SignalName_t* pName,
					uint32 nFlags); // 755
			{
				SignalHandlerMapping_t& signal_info; // 445
				{
					SignalName_t* pIter; // 456
				}
			}
			operator()(const class* __closure,
					int nSignal,
					SignalName_t* pName,
					uint32 nFlags); // 761
		}
		{
			{
				SignalHandlerMapping_t& signal_info; // 445
				{
					SignalName_t* pIter; // 456
				}
			}
			operator()(const class* __closure,
					int nSignal,
					SignalName_t* pName,
					uint32 nFlags); // 778
			{
				SignalHandlerMapping_t& signal_info; // 445
				{
					SignalName_t* pIter; // 456
				}
			}
			operator()(const class* __closure,
					int nSignal,
					SignalName_t* pName,
					uint32 nFlags); // 781
			{
				SignalHandlerMapping_t& signal_info; // 445
				{
					SignalName_t* pIter; // 456
				}
			}
			operator()(const class* __closure,
					int nSignal,
					SignalName_t* pName,
					uint32 nFlags); // 789
		}
		{
			{
				SignalHandlerMapping_t& signal_info; // 445
				{
					SignalName_t* pIter; // 456
				}
			}
			operator()(const class* __closure,
					int nSignal,
					SignalName_t* pName,
					uint32 nFlags); // 807
			{
				SignalHandlerMapping_t& signal_info; // 445
				{
					SignalName_t* pIter; // 456
				}
			}
			operator()(const class* __closure,
					int nSignal,
					SignalName_t* pName,
					uint32 nFlags); // 813
		}
		{
			int nSignal; // 826
			{
				SignalHandlerMapping_t& signal_info; // 828
				char szNameBuffer; // 836
				{
					FN_SigActionHandler_t oldHandler; // 841
					sigaction_t ChosenHandler; // 872
					memset(void* __dest,
						int __ch,
						size_t __len);  // 67
					V_memset(void* dest,
						int fill,
						size_t count);  // 334
					memcpy(void* __dest,
						const void* __src,
						size_t __len);  // 91
					V_memcpy(void* dest,
						const void* src,
						size_t count);  // 366
					SignalHandlerMapping_t::ChooseHandler(
							sigaction_t& action);  // 331
					SignalHandlerMapping_t::ChooseHandler(
							sigaction_t& action);  // 873
				}
				ThreadPause(void); // 322
				ThreadInterlockedOr(volatile int32* p,
							int32 value);  // 618
				CInterlockedIntT<int, 4>::InterlockedOr(
						int newValue);  // 320
				SignalHandlerMapping_t::Lock(); // 830
				ThreadInterlockedAnd(volatile int32* p,
							int32 value);  // 629
				CInterlockedIntT<int, 4>::InterlockedAnd(
						int newValue);  // 328
				SignalHandlerMapping_t::Unlock(); // 896
			}
		}
	}
} /* size: 3412, inline expansions: 2 (43 bytes) */

// <003A24C0> tier0/platform_posix.cpp:432
// variables: 45
void SignalHandlerMemory_t::SignalHandlerMemory_t()
{
	{
		 RegisterSignalFunc; // 442
		{
			int i; // 435
		}
		{
			uint32 nErrorSignalFlags; // 487
			SignalName_t s_Name_SIGFPE; // 509
			SignalName_t s_Name_SIGILL; // 516
			SignalName_t s_Name_SIGSEGV; // 523
			SignalName_t s_Name_SIGBUS; // 530
			SignalName_t s_Name_SIGABRT; // 536
			SignalName_t s_Name_SIGIOT; // 542
			SignalName_t s_Name_SIGTRAP; // 548
			SignalName_t s_Name_SIGSYS; // 560
		}
		{
			uint32 nTerminationSignalFlags; // 574
			SignalName_t s_Name_SIGTERM; // 580
			SignalName_t s_Name_SIGINT; // 586
			SignalName_t s_Name_SIGQUIT; // 595
			SignalName_t s_Name_SIGKILL; // 604
			SignalName_t s_Name_SIGHUP; // 611
		}
		{
			uint32 nAlarmSignalFlags; // 622
			SignalName_t s_Name_SIGALRM; // 627
			SignalName_t s_Name_SIGVTALRM; // 633
			SignalName_t s_Name_SIGPROF; // 639
		}
		{
			int nAsyncIOSignals; // 648
			SignalName_t s_Name_SIGIO; // 656
			SignalName_t s_Name_SIGURG; // 662
			SignalName_t s_Name_SIGPOLL; // 668
		}
		{
			SignalName_t s_Name_SIGCHLD; // 684
			SignalName_t s_Name_SIGCLD; // 690
			SignalName_t s_Name_SIGCONT; // 697
			SignalName_t s_Name_SIGSTOP; // 703
			SignalName_t s_Name_SIGTSTP; // 712
			SignalName_t s_Name_SIGTTIN; // 718
			SignalName_t s_Name_SIGTTOU; // 727
		}
		{
			SignalName_t s_Name_SIGPIPE; // 742
			SignalName_t s_Name_SIGXCPU; // 755
			SignalName_t s_Name_SIGXFSZ; // 761
		}
		{
			SignalName_t s_Name_SIGUSR1; // 778
			SignalName_t s_Name_SIGUSR2; // 781
			SignalName_t s_Name_SIGWINCH; // 789
		}
		{
			SignalName_t s_Name_SIGSTKFLT; // 807
			SignalName_t s_Name_SIGPWR; // 813
		}
		{
			int nSignal; // 826
			{
				SignalHandlerMapping_t& signal_info; // 828
				char szNameBuffer; // 836
				{
					FN_SigActionHandler_t oldHandler; // 841
					sigaction_t ChosenHandler; // 872
				}
			}
		}
	}
} /* size: 0 */

// <003A22AC> tier0/platform_posix.cpp:904
// variables: 4
// function call: 1
void V_SignalHandler_Inner(SignalHandlerMapping_t& signal_info, int nSignal, siginfo_t* info, void* ucontext)
{
	bool bBlockDefault; // 954
	{
		int i; // 955
	}
	{
		FN_SigActionHandler_t oldHandler; // 982
		{
			sigaction_t saveAction; // 986
		}
	}
	Plat_IsInDebugSession(void); // 960
} /* size: 376, variables: 1, inline expansions: 1 (14 bytes) */

// <0039F940> tier0/platform_posix.cpp:1017
// function calls: 4
void CSignal<30>::SignalHandler(siginfo_t* info, void* ucontext)
{
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<int, 4>::AtomicAdd(
			int add);  // 1020
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<int, 4>::AtomicAdd(
			int add);  // 1022
} /* size: 60, inline expansions: 4 (36 bytes) */

// <0039F6A8> tier0/platform_posix.cpp:1017
// function calls: 4
void CSignal<16>::SignalHandler(siginfo_t* info, void* ucontext)
{
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<int, 4>::AtomicAdd(
			int add);  // 1020
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<int, 4>::AtomicAdd(
			int add);  // 1022
} /* size: 60, inline expansions: 4 (36 bytes) */

// <0039F410> tier0/platform_posix.cpp:1017
// function calls: 4
void CSignal<28>::SignalHandler(siginfo_t* info, void* ucontext)
{
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<int, 4>::AtomicAdd(
			int add);  // 1020
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<int, 4>::AtomicAdd(
			int add);  // 1022
} /* size: 60, inline expansions: 4 (36 bytes) */

// <0039EEE0> tier0/platform_posix.cpp:1017
// function calls: 4
void CSignal<10>::SignalHandler(siginfo_t* info, void* ucontext)
{
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<int, 4>::AtomicAdd(
			int add);  // 1020
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<int, 4>::AtomicAdd(
			int add);  // 1022
} /* size: 60, inline expansions: 4 (36 bytes) */

// <0039E9B0> tier0/platform_posix.cpp:1017
// function calls: 4
void CSignal<24>::SignalHandler(siginfo_t* info, void* ucontext)
{
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<int, 4>::AtomicAdd(
			int add);  // 1020
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<int, 4>::AtomicAdd(
			int add);  // 1022
} /* size: 60, inline expansions: 4 (36 bytes) */

// <0039E718> tier0/platform_posix.cpp:1017
// function calls: 4
void CSignal<13>::SignalHandler(siginfo_t* info, void* ucontext)
{
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<int, 4>::AtomicAdd(
			int add);  // 1020
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<int, 4>::AtomicAdd(
			int add);  // 1022
} /* size: 60, inline expansions: 4 (36 bytes) */

// <0039DF50> tier0/platform_posix.cpp:1017
// function calls: 4
void CSignal<20>::SignalHandler(siginfo_t* info, void* ucontext)
{
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<int, 4>::AtomicAdd(
			int add);  // 1020
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<int, 4>::AtomicAdd(
			int add);  // 1022
} /* size: 60, inline expansions: 4 (36 bytes) */

// <0039DA20> tier0/platform_posix.cpp:1017
// function calls: 4
void CSignal<18>::SignalHandler(siginfo_t* info, void* ucontext)
{
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<int, 4>::AtomicAdd(
			int add);  // 1020
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<int, 4>::AtomicAdd(
			int add);  // 1022
} /* size: 60, inline expansions: 4 (36 bytes) */

// <0039D788> tier0/platform_posix.cpp:1017
// function calls: 4
void CSignal<17>::SignalHandler(siginfo_t* info, void* ucontext)
{
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<int, 4>::AtomicAdd(
			int add);  // 1020
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<int, 4>::AtomicAdd(
			int add);  // 1022
} /* size: 60, inline expansions: 4 (36 bytes) */

// <0039D4F0> tier0/platform_posix.cpp:1017
// function calls: 4
void CSignal<23>::SignalHandler(siginfo_t* info, void* ucontext)
{
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<int, 4>::AtomicAdd(
			int add);  // 1020
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<int, 4>::AtomicAdd(
			int add);  // 1022
} /* size: 60, inline expansions: 4 (36 bytes) */

// <0039D258> tier0/platform_posix.cpp:1017
// function calls: 4
void CSignal<29>::SignalHandler(siginfo_t* info, void* ucontext)
{
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<int, 4>::AtomicAdd(
			int add);  // 1020
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<int, 4>::AtomicAdd(
			int add);  // 1022
} /* size: 60, inline expansions: 4 (36 bytes) */

// <0039C7F8> tier0/platform_posix.cpp:1017
// function calls: 4
void CSignal<1>::SignalHandler(siginfo_t* info, void* ucontext)
{
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<int, 4>::AtomicAdd(
			int add);  // 1020
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<int, 4>::AtomicAdd(
			int add);  // 1022
} /* size: 60, inline expansions: 4 (36 bytes) */

// <0039C560> tier0/platform_posix.cpp:1017
// function calls: 4
void CSignal<9>::SignalHandler(siginfo_t* info, void* ucontext)
{
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<int, 4>::AtomicAdd(
			int add);  // 1020
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<int, 4>::AtomicAdd(
			int add);  // 1022
} /* size: 60, inline expansions: 4 (36 bytes) */

// <0039C2C8> tier0/platform_posix.cpp:1017
// function calls: 4
void CSignal<3>::SignalHandler(siginfo_t* info, void* ucontext)
{
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<int, 4>::AtomicAdd(
			int add);  // 1020
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<int, 4>::AtomicAdd(
			int add);  // 1022
} /* size: 60, inline expansions: 4 (36 bytes) */

// <0039C030> tier0/platform_posix.cpp:1017
// function calls: 4
void CSignal<2>::SignalHandler(siginfo_t* info, void* ucontext)
{
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<int, 4>::AtomicAdd(
			int add);  // 1020
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<int, 4>::AtomicAdd(
			int add);  // 1022
} /* size: 60, inline expansions: 4 (36 bytes) */

// <0039B868> tier0/platform_posix.cpp:1017
// function calls: 4
void CSignal<5>::SignalHandler(siginfo_t* info, void* ucontext)
{
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<int, 4>::AtomicAdd(
			int add);  // 1020
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<int, 4>::AtomicAdd(
			int add);  // 1022
} /* size: 60, inline expansions: 4 (36 bytes) */

// <0039B5D0> tier0/platform_posix.cpp:1017
// function calls: 4
void CSignal<6>::SignalHandler(siginfo_t* info, void* ucontext)
{
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<int, 4>::AtomicAdd(
			int add);  // 1020
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<int, 4>::AtomicAdd(
			int add);  // 1022
} /* size: 60, inline expansions: 4 (36 bytes) */

// <0039B338> tier0/platform_posix.cpp:1017
// function calls: 4
void CSignal<7>::SignalHandler(siginfo_t* info, void* ucontext)
{
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<int, 4>::AtomicAdd(
			int add);  // 1020
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<int, 4>::AtomicAdd(
			int add);  // 1022
} /* size: 60, inline expansions: 4 (36 bytes) */

// <0039AE08> tier0/platform_posix.cpp:1017
// function calls: 4
void CSignal<4>::SignalHandler(siginfo_t* info, void* ucontext)
{
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<int, 4>::AtomicAdd(
			int add);  // 1020
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<int, 4>::AtomicAdd(
			int add);  // 1022
} /* size: 60, inline expansions: 4 (36 bytes) */

// <0039AB70> tier0/platform_posix.cpp:1017
// function calls: 4
void CSignal<8>::SignalHandler(siginfo_t* info, void* ucontext)
{
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<int, 4>::AtomicAdd(
			int add);  // 1020
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<int, 4>::AtomicAdd(
			int add);  // 1022
} /* size: 60, inline expansions: 4 (36 bytes) */

// <0039A8D8> tier0/platform_posix.cpp:1017
// function calls: 4
void CSignal<0>::SignalHandler(siginfo_t* info, void* ucontext)
{
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<int, 4>::AtomicAdd(
			int add);  // 1020
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<int, 4>::AtomicAdd(
			int add);  // 1022
} /* size: 57, inline expansions: 4 (36 bytes) */

// <0039F810> tier0/platform_posix.cpp:1026
// function calls: 4
void CSignal<30>::ForceCrash()
{
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<int, 4>::AtomicAdd(
			int add);  // 1029
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<int, 4>::AtomicAdd(
			int add);  // 1031
} /* size: 50, inline expansions: 4 (36 bytes) */

// <0039F578> tier0/platform_posix.cpp:1026
// function calls: 4
void CSignal<16>::ForceCrash()
{
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<int, 4>::AtomicAdd(
			int add);  // 1029
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<int, 4>::AtomicAdd(
			int add);  // 1031
} /* size: 50, inline expansions: 4 (36 bytes) */

// <0039F2E0> tier0/platform_posix.cpp:1026
// function calls: 4
void CSignal<28>::ForceCrash()
{
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<int, 4>::AtomicAdd(
			int add);  // 1029
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<int, 4>::AtomicAdd(
			int add);  // 1031
} /* size: 50, inline expansions: 4 (36 bytes) */

// <0039EDB0> tier0/platform_posix.cpp:1026
// function calls: 4
void CSignal<10>::ForceCrash()
{
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<int, 4>::AtomicAdd(
			int add);  // 1029
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<int, 4>::AtomicAdd(
			int add);  // 1031
} /* size: 50, inline expansions: 4 (36 bytes) */

// <0039E880> tier0/platform_posix.cpp:1026
// function calls: 4
void CSignal<24>::ForceCrash()
{
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<int, 4>::AtomicAdd(
			int add);  // 1029
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<int, 4>::AtomicAdd(
			int add);  // 1031
} /* size: 50, inline expansions: 4 (36 bytes) */

// <0039E5E8> tier0/platform_posix.cpp:1026
// function calls: 4
void CSignal<13>::ForceCrash()
{
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<int, 4>::AtomicAdd(
			int add);  // 1029
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<int, 4>::AtomicAdd(
			int add);  // 1031
} /* size: 50, inline expansions: 4 (36 bytes) */

// <0039DE20> tier0/platform_posix.cpp:1026
// function calls: 4
void CSignal<20>::ForceCrash()
{
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<int, 4>::AtomicAdd(
			int add);  // 1029
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<int, 4>::AtomicAdd(
			int add);  // 1031
} /* size: 50, inline expansions: 4 (36 bytes) */

// <0039D8F0> tier0/platform_posix.cpp:1026
// function calls: 4
void CSignal<18>::ForceCrash()
{
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<int, 4>::AtomicAdd(
			int add);  // 1029
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<int, 4>::AtomicAdd(
			int add);  // 1031
} /* size: 50, inline expansions: 4 (36 bytes) */

// <0039D658> tier0/platform_posix.cpp:1026
// function calls: 4
void CSignal<17>::ForceCrash()
{
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<int, 4>::AtomicAdd(
			int add);  // 1029
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<int, 4>::AtomicAdd(
			int add);  // 1031
} /* size: 50, inline expansions: 4 (36 bytes) */

// <0039D3C0> tier0/platform_posix.cpp:1026
// function calls: 4
void CSignal<23>::ForceCrash()
{
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<int, 4>::AtomicAdd(
			int add);  // 1029
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<int, 4>::AtomicAdd(
			int add);  // 1031
} /* size: 50, inline expansions: 4 (36 bytes) */

// <0039D128> tier0/platform_posix.cpp:1026
// function calls: 4
void CSignal<29>::ForceCrash()
{
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<int, 4>::AtomicAdd(
			int add);  // 1029
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<int, 4>::AtomicAdd(
			int add);  // 1031
} /* size: 50, inline expansions: 4 (36 bytes) */

// <0039C6C8> tier0/platform_posix.cpp:1026
// function calls: 4
void CSignal<1>::ForceCrash()
{
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<int, 4>::AtomicAdd(
			int add);  // 1029
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<int, 4>::AtomicAdd(
			int add);  // 1031
} /* size: 50, inline expansions: 4 (36 bytes) */

// <0039C430> tier0/platform_posix.cpp:1026
// function calls: 4
void CSignal<9>::ForceCrash()
{
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<int, 4>::AtomicAdd(
			int add);  // 1029
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<int, 4>::AtomicAdd(
			int add);  // 1031
} /* size: 50, inline expansions: 4 (36 bytes) */

// <0039C198> tier0/platform_posix.cpp:1026
// function calls: 4
void CSignal<3>::ForceCrash()
{
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<int, 4>::AtomicAdd(
			int add);  // 1029
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<int, 4>::AtomicAdd(
			int add);  // 1031
} /* size: 50, inline expansions: 4 (36 bytes) */

// <0039BF00> tier0/platform_posix.cpp:1026
// function calls: 4
void CSignal<2>::ForceCrash()
{
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<int, 4>::AtomicAdd(
			int add);  // 1029
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<int, 4>::AtomicAdd(
			int add);  // 1031
} /* size: 50, inline expansions: 4 (36 bytes) */

// <0039B738> tier0/platform_posix.cpp:1026
// function calls: 4
void CSignal<5>::ForceCrash()
{
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<int, 4>::AtomicAdd(
			int add);  // 1029
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<int, 4>::AtomicAdd(
			int add);  // 1031
} /* size: 50, inline expansions: 4 (36 bytes) */

// <0039B4A0> tier0/platform_posix.cpp:1026
// function calls: 4
void CSignal<6>::ForceCrash()
{
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<int, 4>::AtomicAdd(
			int add);  // 1029
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<int, 4>::AtomicAdd(
			int add);  // 1031
} /* size: 50, inline expansions: 4 (36 bytes) */

// <0039B208> tier0/platform_posix.cpp:1026
// function calls: 4
void CSignal<7>::ForceCrash()
{
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<int, 4>::AtomicAdd(
			int add);  // 1029
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<int, 4>::AtomicAdd(
			int add);  // 1031
} /* size: 50, inline expansions: 4 (36 bytes) */

// <0039ACD8> tier0/platform_posix.cpp:1026
// function calls: 4
void CSignal<4>::ForceCrash()
{
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<int, 4>::AtomicAdd(
			int add);  // 1029
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<int, 4>::AtomicAdd(
			int add);  // 1031
} /* size: 50, inline expansions: 4 (36 bytes) */

// <0039AA40> tier0/platform_posix.cpp:1026
// function calls: 4
void CSignal<8>::ForceCrash()
{
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<int, 4>::AtomicAdd(
			int add);  // 1029
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<int, 4>::AtomicAdd(
			int add);  // 1031
} /* size: 50, inline expansions: 4 (36 bytes) */

// <0039A7A8> tier0/platform_posix.cpp:1026
// function calls: 4
void CSignal<0>::ForceCrash()
{
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<int, 4>::AtomicAdd(
			int add);  // 1029
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<int, 4>::AtomicAdd(
			int add);  // 1031
} /* size: 50, inline expansions: 4 (36 bytes) */

// <003A2256> tier0/platform_posix.cpp:1035
// variables: 2
void V_SignalHandler(int nSignal, siginfo_t* info, void* ucontext)
{
	SignalHandlerMapping_t& signal_info; // 1043
	char szNameBuffer; // 1044
} /* size: 0, variables: 2 */

// <003A109D> tier0/platform_posix.cpp:1070
// variables: 16
// function calls: 61
void Plat_RegisterSignalHandler(int nSignal, FN_SignalHandler_t handler, bool bUnregister)
{
	char szNameBuffer; // 1082
	{
		SignalHandlerMapping_t& signal_info; // 1091
		sigaction_t oldAction; // 1102
		FN_SigActionHandler_t pCurrentHandler; // 1104
		sigaction_t ExpectedHandler; // 1117
		FN_SigActionHandler_t pExpectedHandler; // 1119
		{
		}
		COrderedConstructor_DependencyManagement<SignalHandlerMemory_t>::GetRaw(); // 501
		COrderedConstructor_Create<SignalHandlerMemory_t, COrderedResolve_NoResolve, false>::GetRaw<>(); // 527
		COrderedConstructor_Create<SignalHandlerMemory_t, COrderedResolve_NoResolve, false>::operator->(); // 1091
		ThreadPause(void); // 322
		ThreadInterlockedOr(volatile int32* p,
					int32 value);  // 618
		CInterlockedIntT<int, 4>::InterlockedOr(
				int newValue);  // 320
		SignalHandlerMapping_t::Lock(); // 1100
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 1103
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 366
		SignalHandlerMapping_t::ChooseHandler(
				sigaction_t& action);  // 331
		SignalHandlerMapping_t::ChooseHandler(
				sigaction_t& action);  // 1118
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 1124
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 334
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 366
		SignalHandlerMapping_t::ChooseHandler(
				sigaction_t& action);  // 331
		SignalHandlerMapping_t::ChooseHandler(
				sigaction_t& action);  // 1130
		ThreadInterlockedAnd(volatile int32* p,
					int32 value);  // 629
		CInterlockedIntT<int, 4>::InterlockedAnd(
				int newValue);  // 328
		SignalHandlerMapping_t::Unlock(); // 1142
	}
	{
		SignalHandlerMapping_t& signal_info; // 1150
		sigaction_t oldAction; // 1156
		FN_SigActionHandler_t pCurrentHandler; // 1158
		{
			sigaction_t ExpectedHandler; // 1172
			FN_SigActionHandler_t pExpectedHandler; // 1174
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 91
			V_memcpy(void* dest,
				const void* src,
				size_t count);  // 366
			SignalHandlerMapping_t::ChooseHandler(
					sigaction_t& action);  // 331
			SignalHandlerMapping_t::ChooseHandler(
					sigaction_t& action);  // 1173
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 91
			V_memcpy(void* dest,
				const void* src,
				size_t count);  // 1180
		}
		{
			FN_SignalHandler_t* pNewArray; // 1190
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 91
			V_memcpy(void* dest,
				const void* src,
				size_t count);  // 1191
		}
		{
			int i; // 1204
			{
				int nCopyStart; // 1208
				memcpy(void* __dest,
					const void* __src,
					size_t __len);  // 91
				V_memcpy(void* dest,
					const void* src,
					size_t count);  // 1211
			}
		}
		{
			sigaction_t ExpectedHandler; // 1223
			FN_SigActionHandler_t pExpectedHandler; // 1225
			memset(void* __dest,
				int __ch,
				size_t __len);  // 67
			V_memset(void* dest,
				int fill,
				size_t count);  // 334
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 91
			V_memcpy(void* dest,
				const void* src,
				size_t count);  // 366
			SignalHandlerMapping_t::ChooseHandler(
					sigaction_t& action);  // 331
			SignalHandlerMapping_t::ChooseHandler(
					sigaction_t& action);  // 1224
		}
		{
		}
		COrderedConstructor_DependencyManagement<SignalHandlerMemory_t>::GetRaw(); // 501
		COrderedConstructor_Create<SignalHandlerMemory_t, COrderedResolve_NoResolve, false>::GetRaw<>(); // 527
		COrderedConstructor_Create<SignalHandlerMemory_t, COrderedResolve_NoResolve, false>::operator->(); // 1150
		ThreadPause(void); // 322
		ThreadInterlockedOr(volatile int32* p,
					int32 value);  // 618
		CInterlockedIntT<int, 4>::InterlockedOr(
				int newValue);  // 320
		SignalHandlerMapping_t::Lock(); // 1151
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 1157
		{
		}
		COrderedConstructor_DependencyManagement<SignalHandlerMemory_t>::GetRaw(); // 501
		COrderedConstructor_Create<SignalHandlerMemory_t, COrderedResolve_NoResolve, false>::GetRaw<>(); // 527
		COrderedConstructor_Create<SignalHandlerMemory_t, COrderedResolve_NoResolve, false>::operator->(); // 1170
		{
		}
		COrderedConstructor_DependencyManagement<SignalHandlerMemory_t>::GetRaw(); // 501
		COrderedConstructor_Create<SignalHandlerMemory_t, COrderedResolve_NoResolve, false>::GetRaw<>(); // 527
		COrderedConstructor_Create<SignalHandlerMemory_t, COrderedResolve_NoResolve, false>::operator->(); // 1221
		ThreadInterlockedAnd(volatile int32* p,
					int32 value);  // 629
		CInterlockedIntT<int, 4>::InterlockedAnd(
				int newValue);  // 328
		SignalHandlerMapping_t::Unlock(); // 1238
	}
	{
	}
	COrderedConstructor_DependencyManagement<SignalHandlerMemory_t>::GetRaw(); // 501
	COrderedConstructor_Create<SignalHandlerMemory_t, COrderedResolve_NoResolve, false>::GetRaw<>(); // 527
	COrderedConstructor_Create<SignalHandlerMemory_t, COrderedResolve_NoResolve, false>::operator->(); // 1087
} /* size: 0, variables: 1, inline expansions: 3 (195 bytes) */

