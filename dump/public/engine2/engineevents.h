
//
// public/engine2/engineevents.h
//
//	referenced by: libengine2.so
//
//	functions: 70
//	structs: 30
//

// <001EAE77> ../public/engine2/engineevents.h:29
// member functions: 8
// member variables: 6
// static member variable: 1
// struct size: 32
struct EngineLoopState_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/engine2/engineevents.h:31 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/engine2/engineevents.h:31 */
	EngineLoopState_t* Schema_MarkHelperFn(void);
	/* ../public/engine2/engineevents.h:31 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/engine2/engineevents.h:31 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/engine2/engineevents.h:31 */
	void Schema_CompileTimeVerificationFunction(EngineLoopState_t* );
	/* ../public/engine2/engineevents.h:31 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/engine2/engineevents.h:31 */
	const char* Schema_StaticClassname(void);
	/* ../public/engine2/engineevents.h:31 */
	const CSchemaClassInfo* Schema_DynamicBinding(const EngineLoopState_t* );
	PlatWindow_t m_hWnd; /* 0 8 */
	SwapChainHandle_t m_hSwapChain; /* 8 8 */
	int m_nPlatWindowWidth; /* 16 4 */
	int m_nPlatWindowHeight; /* 20 4 */
	int m_nRenderWidth; /* 24 4 */
	int m_nRenderHeight; /* 28 4 */
};

// <041526ED> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:29
// member functions: 8
// member variables: 6
// static member variable: 1
// struct size: 32
struct EngineLoopState_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:31 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:31 */
	EngineLoopState_t* Schema_MarkHelperFn(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:31 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:31 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:31 */
	void Schema_CompileTimeVerificationFunction(EngineLoopState_t* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:31 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:31 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:31 */
	const CSchemaClassInfo* Schema_DynamicBinding(const EngineLoopState_t* );
	PlatWindow_t m_hWnd; /* 0 8 */
	SwapChainHandle_t m_hSwapChain; /* 8 8 */
	int m_nPlatWindowWidth; /* 16 4 */
	int m_nPlatWindowHeight; /* 20 4 */
	int m_nRenderWidth; /* 24 4 */
	int m_nRenderHeight; /* 28 4 */
};

// <04158762> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:31
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <0415875C> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:31
inline void Schema_StaticClassname(void)
{
} /* size: 0 */

// <04158743> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:31
inline void EngineLoopState_t::Schema_DynamicBinding()
{
} /* size: 0 */

// <00322ED5> ../public/engine2/engineevents.h:48
// member functions: 8
// member variable: 1
// static member variable: 1
// struct size: 4
struct EventFrameBoundary_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/engine2/engineevents.h:50 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/engine2/engineevents.h:50 */
	EventFrameBoundary_t* Schema_MarkHelperFn(void);
	/* ../public/engine2/engineevents.h:50 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/engine2/engineevents.h:50 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/engine2/engineevents.h:50 */
	void Schema_CompileTimeVerificationFunction(EventFrameBoundary_t* );
	/* ../public/engine2/engineevents.h:50 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/engine2/engineevents.h:50 */
	const char* Schema_StaticClassname(void);
	/* ../public/engine2/engineevents.h:50 */
	const CSchemaClassInfo* Schema_DynamicBinding(const EventFrameBoundary_t* );
	float m_flFrameTime; /* 0 4 */
};

// <0415283A> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:48
// member functions: 8
// member variable: 1
// static member variable: 1
// struct size: 4
struct EventFrameBoundary_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:50 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:50 */
	EventFrameBoundary_t* Schema_MarkHelperFn(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:50 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:50 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:50 */
	void Schema_CompileTimeVerificationFunction(EventFrameBoundary_t* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:50 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:50 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:50 */
	const CSchemaClassInfo* Schema_DynamicBinding(const EventFrameBoundary_t* );
	float m_flFrameTime; /* 0 4 */
};

// <0415871E> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:50
inline void EventFrameBoundary_t::Schema_DynamicBinding()
{
} /* size: 0 */

// <000F05C0> ../public/engine2/engineevents.h:55
// member functions: 8
// static member variable: 1
// struct size: 1
struct EventProfileStorageAvailable_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/engine2/engineevents.h:57 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/engine2/engineevents.h:57 */
	EventProfileStorageAvailable_t* Schema_MarkHelperFn(void);
	/* ../public/engine2/engineevents.h:57 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/engine2/engineevents.h:57 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/engine2/engineevents.h:57 */
	void Schema_CompileTimeVerificationFunction(EventProfileStorageAvailable_t* );
	/* ../public/engine2/engineevents.h:57 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/engine2/engineevents.h:57 */
	const char* Schema_StaticClassname(void);
	/* ../public/engine2/engineevents.h:57 */
	const CSchemaClassInfo* Schema_DynamicBinding(const EventProfileStorageAvailable_t* );
};

// <041586F9> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:57
inline void EventProfileStorageAvailable_t::Schema_DynamicBinding()
{
} /* size: 0 */

// <04152A2B> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:61
// member functions: 8
// static member variable: 1
// struct size: 1
struct EventSplitScreenStateChanged_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:63 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:63 */
	EventSplitScreenStateChanged_t* Schema_MarkHelperFn(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:63 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:63 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:63 */
	void Schema_CompileTimeVerificationFunction(EventSplitScreenStateChanged_t* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:63 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:63 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:63 */
	const CSchemaClassInfo* Schema_DynamicBinding(const EventSplitScreenStateChanged_t* );
};

// <041586D4> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:63
inline void EventSplitScreenStateChanged_t::Schema_DynamicBinding()
{
} /* size: 0 */

// <00322FD0> ../public/engine2/engineevents.h:67
// member functions: 10
// member variables: 5
// static member variable: 1
// struct size: 48
struct EventClientOutput_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/engine2/engineevents.h:69 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/engine2/engineevents.h:69 */
	EventClientOutput_t* Schema_MarkHelperFn(void);
	/* ../public/engine2/engineevents.h:69 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/engine2/engineevents.h:69 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/engine2/engineevents.h:69 */
	void Schema_CompileTimeVerificationFunction(EventClientOutput_t* );
	/* ../public/engine2/engineevents.h:69 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/engine2/engineevents.h:69 */
	const char* Schema_StaticClassname(void);
	/* ../public/engine2/engineevents.h:69 */
	const CSchemaClassInfo* Schema_DynamicBinding(const EventClientOutput_t* );
	/* ../public/engine2/engineevents.h:71 */
	void EventClientOutput_t(EventClientOutput_t* );
	/* ../public/engine2/engineevents.h:72 */
	void EventClientOutput_t(EventClientOutput_t* , const EngineLoopState_t& , float, float, float, bool);
	EngineLoopState_t m_LoopState; /* 0 32 */
	float m_flRenderTime; /* 32 4 */
	float m_flRealTime; /* 36 4 */
	float m_flRenderFrameTimeUnbounded; /* 40 4 */
	bool m_bRenderOnly; /* 44 1 */
};

// <04152B1A> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:67
// member functions: 10
// member variables: 5
// static member variable: 1
// struct size: 48
struct EventClientOutput_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:69 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:69 */
	EventClientOutput_t* Schema_MarkHelperFn(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:69 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:69 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:69 */
	void Schema_CompileTimeVerificationFunction(EventClientOutput_t* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:69 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:69 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:69 */
	const CSchemaClassInfo* Schema_DynamicBinding(const EventClientOutput_t* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:71 */
	void EventClientOutput_t(EventClientOutput_t* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:72 */
	void EventClientOutput_t(EventClientOutput_t* , const EngineLoopState_t& , float, float, float, bool);
	EngineLoopState_t m_LoopState; /* 0 32 */
	float m_flRenderTime; /* 32 4 */
	float m_flRealTime; /* 36 4 */
	float m_flRenderFrameTimeUnbounded; /* 40 4 */
	bool m_bRenderOnly; /* 44 1 */
};

// <041586AF> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:69
inline void EventClientOutput_t::Schema_DynamicBinding()
{
} /* size: 0 */

// <0068C06F> ../public/engine2/engineevents.h:69
inline void Schema_StaticBinding(void)
{
} /* size: 0 */

// <04158698> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:71
void EventClientOutput_t::EventClientOutput_t()
{
} /* size: 0 */

// <0415867F> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:71
inline void EventClientOutput_t::EventClientOutput_t()
{
} /* size: 0 */

// <003763C5> ../public/engine2/engineevents.h:72
void EventClientOutput_t::EventClientOutput_t(const EngineLoopState_t& state, float flRenderTime, float flRealTime, float flFrameTimeUnbounded, bool bRenderOnly)
{
} /* size: 0 */

// <00376370> ../public/engine2/engineevents.h:72
inline void EventClientOutput_t::EventClientOutput_t(const EngineLoopState_t& state, float flRenderTime, float flRealTime, float flFrameTimeUnbounded, bool bRenderOnly)
{
} /* size: 0 */

// <00323165> ../public/engine2/engineevents.h:86
// member functions: 10
// member variables: 5
// static member variable: 1
// struct size: 56
struct EventClientPostOutput_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/engine2/engineevents.h:88 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/engine2/engineevents.h:88 */
	EventClientPostOutput_t* Schema_MarkHelperFn(void);
	/* ../public/engine2/engineevents.h:88 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/engine2/engineevents.h:88 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/engine2/engineevents.h:88 */
	void Schema_CompileTimeVerificationFunction(EventClientPostOutput_t* );
	/* ../public/engine2/engineevents.h:88 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/engine2/engineevents.h:88 */
	const char* Schema_StaticClassname(void);
	/* ../public/engine2/engineevents.h:88 */
	const CSchemaClassInfo* Schema_DynamicBinding(const EventClientPostOutput_t* );
	/* ../public/engine2/engineevents.h:90 */
	void EventClientPostOutput_t(EventClientPostOutput_t* );
	/* ../public/engine2/engineevents.h:91 */
	void EventClientPostOutput_t(EventClientPostOutput_t* , const EngineLoopState_t& , float64, float, float, bool);
	EngineLoopState_t m_LoopState; /* 0 32 */
	float64 m_flRenderTime; /* 32 8 */
	float m_flRenderFrameTime; /* 40 4 */
	float m_flRenderFrameTimeUnbounded; /* 44 4 */
	bool m_bRenderOnly; /* 48 1 */
};

// <04152CB1> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:86
// member functions: 10
// member variables: 5
// static member variable: 1
// struct size: 56
struct EventClientPostOutput_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:88 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:88 */
	EventClientPostOutput_t* Schema_MarkHelperFn(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:88 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:88 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:88 */
	void Schema_CompileTimeVerificationFunction(EventClientPostOutput_t* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:88 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:88 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:88 */
	const CSchemaClassInfo* Schema_DynamicBinding(const EventClientPostOutput_t* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:90 */
	void EventClientPostOutput_t(EventClientPostOutput_t* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:91 */
	void EventClientPostOutput_t(EventClientPostOutput_t* , const EngineLoopState_t& , float64, float, float, bool);
	EngineLoopState_t m_LoopState; /* 0 32 */
	float64 m_flRenderTime; /* 32 8 */
	float m_flRenderFrameTime; /* 40 4 */
	float m_flRenderFrameTimeUnbounded; /* 44 4 */
	bool m_bRenderOnly; /* 48 1 */
};

// <0415865A> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:88
inline void EventClientPostOutput_t::Schema_DynamicBinding()
{
} /* size: 0 */

// <04158643> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:90
void EventClientPostOutput_t::EventClientPostOutput_t()
{
} /* size: 0 */

// <0415862A> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:90
inline void EventClientPostOutput_t::EventClientPostOutput_t()
{
} /* size: 0 */

// <00376332> ../public/engine2/engineevents.h:91
void EventClientPostOutput_t::EventClientPostOutput_t(const EngineLoopState_t& state, float64 flRenderTime, float flFrameTime, float flFrameTimeUnbounded, bool bRenderOnly)
{
} /* size: 0 */

// <003762DD> ../public/engine2/engineevents.h:91
inline void EventClientPostOutput_t::EventClientPostOutput_t(const EngineLoopState_t& state, float64 flRenderTime, float flFrameTime, float flFrameTimeUnbounded, bool bRenderOnly)
{
} /* size: 0 */

// <04152E42> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:105
// member functions: 10
// member variables: 3
// static member variable: 1
// struct size: 40
struct EventSimulate_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:107 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:107 */
	EventSimulate_t* Schema_MarkHelperFn(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:107 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:107 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:107 */
	void Schema_CompileTimeVerificationFunction(EventSimulate_t* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:107 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:107 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:107 */
	const CSchemaClassInfo* Schema_DynamicBinding(const EventSimulate_t* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:109 */
	void EventSimulate_t(EventSimulate_t* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:110 */
	void EventSimulate_t(EventSimulate_t* , const EngineLoopState_t& , bool, bool);
	EngineLoopState_t m_LoopState; /* 0 32 */
	bool m_bFirstTick; /* 32 1 */
	bool m_bLastTick; /* 33 1 */
};

// <04158605> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:107
inline void EventSimulate_t::Schema_DynamicBinding()
{
} /* size: 0 */

// <041585EE> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:109
void EventSimulate_t::EventSimulate_t()
{
} /* size: 0 */

// <041585D5> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:109
inline void EventSimulate_t::EventSimulate_t()
{
} /* size: 0 */

// <04152FAB> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:123
// member functions: 10
// member variables: 5
// static member variable: 1
// struct size: 56
struct EventAdvanceTick_t : public EventSimulate_t {
public:
	/* struct EventSimulate_t <ancestor>; */ /* 0 40 */
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:126 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:126 */
	EventAdvanceTick_t* Schema_MarkHelperFn(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:126 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:126 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:126 */
	void Schema_CompileTimeVerificationFunction(EventAdvanceTick_t* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:126 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:126 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:126 */
	const CSchemaClassInfo* Schema_DynamicBinding(const EventAdvanceTick_t* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:128 */
	void EventAdvanceTick_t(EventAdvanceTick_t* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:129 */
	void EventAdvanceTick_t(EventAdvanceTick_t* , const EngineLoopState_t& , bool, bool, int, int, int, int);
	int m_nCurrentTick; /* 36 4 */
	int m_nCurrentTickThisFrame; /* 40 4 */
	int m_nTotalTicksThisFrame; /* 44 4 */
	int m_nTotalTicks; /* 48 4 */
};

// <041585B0> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:126
inline void EventAdvanceTick_t::Schema_DynamicBinding()
{
} /* size: 0 */

// <04158599> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:128
void EventAdvanceTick_t::EventAdvanceTick_t()
{
} /* size: 0 */

// <04158580> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:128
inline void EventAdvanceTick_t::EventAdvanceTick_t()
{
} /* size: 0 */

// <04153140> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:145
// member functions: 10
// member variables: 5
// static member variable: 1
// struct size: 56
struct EventPostAdvanceTick_t : public EventSimulate_t {
public:
	/* struct EventSimulate_t <ancestor>; */ /* 0 40 */
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:148 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:148 */
	EventPostAdvanceTick_t* Schema_MarkHelperFn(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:148 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:148 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:148 */
	void Schema_CompileTimeVerificationFunction(EventPostAdvanceTick_t* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:148 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:148 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:148 */
	const CSchemaClassInfo* Schema_DynamicBinding(const EventPostAdvanceTick_t* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:150 */
	void EventPostAdvanceTick_t(EventPostAdvanceTick_t* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:152 */
	void EventPostAdvanceTick_t(EventPostAdvanceTick_t* , const EngineLoopState_t& , bool, bool, int, int, int, int);
	int m_nCurrentTick; /* 36 4 */
	int m_nCurrentTickThisFrame; /* 40 4 */
	int m_nTotalTicksThisFrame; /* 44 4 */
	int m_nTotalTicks; /* 48 4 */
};

// <0415855B> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:148
inline void EventPostAdvanceTick_t::Schema_DynamicBinding()
{
} /* size: 0 */

// <04158544> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:150
void EventPostAdvanceTick_t::EventPostAdvanceTick_t()
{
} /* size: 0 */

// <0415852B> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:150
inline void EventPostAdvanceTick_t::EventPostAdvanceTick_t()
{
} /* size: 0 */

// <041532D5> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:168
// member functions: 10
// member variable: 1
// static member variable: 1
// struct size: 56
struct EventServerAdvanceTick_t : public EventAdvanceTick_t {
public:
	/* struct EventAdvanceTick_t <ancestor>; */ /* 0 56 */
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:171 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:171 */
	EventServerAdvanceTick_t* Schema_MarkHelperFn(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:171 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:171 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:171 */
	void Schema_CompileTimeVerificationFunction(EventServerAdvanceTick_t* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:171 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:171 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:171 */
	const CSchemaClassInfo* Schema_DynamicBinding(const EventServerAdvanceTick_t* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:173 */
	void EventServerAdvanceTick_t(EventServerAdvanceTick_t* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:174 */
	void EventServerAdvanceTick_t(EventServerAdvanceTick_t* , const EngineLoopState_t& , bool, bool, int, int, int, int);
};

// <04158506> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:171
inline void EventServerAdvanceTick_t::Schema_DynamicBinding()
{
} /* size: 0 */

// <041584EF> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:173
void EventServerAdvanceTick_t::EventServerAdvanceTick_t()
{
} /* size: 0 */

// <041584D6> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:173
inline void EventServerAdvanceTick_t::EventServerAdvanceTick_t()
{
} /* size: 0 */

// <0415342A> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:181
// member functions: 10
// member variable: 1
// static member variable: 1
// struct size: 56
struct EventServerPostAdvanceTick_t : public EventPostAdvanceTick_t {
public:
	/* struct EventPostAdvanceTick_t <ancestor>; */ /* 0 56 */
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:184 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:184 */
	EventServerPostAdvanceTick_t* Schema_MarkHelperFn(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:184 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:184 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:184 */
	void Schema_CompileTimeVerificationFunction(EventServerPostAdvanceTick_t* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:184 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:184 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:184 */
	const CSchemaClassInfo* Schema_DynamicBinding(const EventServerPostAdvanceTick_t* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:186 */
	void EventServerPostAdvanceTick_t(EventServerPostAdvanceTick_t* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:187 */
	void EventServerPostAdvanceTick_t(EventServerPostAdvanceTick_t* , const EngineLoopState_t& , bool, bool, int, int, int, int);
};

// <041584B1> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:184
inline void EventServerPostAdvanceTick_t::Schema_DynamicBinding()
{
} /* size: 0 */

// <0415849A> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:186
void EventServerPostAdvanceTick_t::EventServerPostAdvanceTick_t()
{
} /* size: 0 */

// <04158481> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:186
inline void EventServerPostAdvanceTick_t::EventServerPostAdvanceTick_t()
{
} /* size: 0 */

// <0415357F> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:194
// member functions: 10
// member variable: 1
// static member variable: 1
// struct size: 56
struct EventClientAdvanceTick_t : public EventAdvanceTick_t {
public:
	/* struct EventAdvanceTick_t <ancestor>; */ /* 0 56 */
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:197 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:197 */
	EventClientAdvanceTick_t* Schema_MarkHelperFn(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:197 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:197 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:197 */
	void Schema_CompileTimeVerificationFunction(EventClientAdvanceTick_t* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:197 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:197 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:197 */
	const CSchemaClassInfo* Schema_DynamicBinding(const EventClientAdvanceTick_t* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:199 */
	void EventClientAdvanceTick_t(EventClientAdvanceTick_t* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:200 */
	void EventClientAdvanceTick_t(EventClientAdvanceTick_t* , const EngineLoopState_t& , bool, bool, int, int, int, int);
};

// <0415845C> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:197
inline void EventClientAdvanceTick_t::Schema_DynamicBinding()
{
} /* size: 0 */

// <04158445> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:199
void EventClientAdvanceTick_t::EventClientAdvanceTick_t()
{
} /* size: 0 */

// <0415842C> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:199
inline void EventClientAdvanceTick_t::EventClientAdvanceTick_t()
{
} /* size: 0 */

// <041536D4> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:207
// member functions: 10
// member variable: 1
// static member variable: 1
// struct size: 56
struct EventClientPostAdvanceTick_t : public EventPostAdvanceTick_t {
public:
	/* struct EventPostAdvanceTick_t <ancestor>; */ /* 0 56 */
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:210 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:210 */
	EventClientPostAdvanceTick_t* Schema_MarkHelperFn(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:210 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:210 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:210 */
	void Schema_CompileTimeVerificationFunction(EventClientPostAdvanceTick_t* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:210 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:210 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:210 */
	const CSchemaClassInfo* Schema_DynamicBinding(const EventClientPostAdvanceTick_t* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:212 */
	void EventClientPostAdvanceTick_t(EventClientPostAdvanceTick_t* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:213 */
	void EventClientPostAdvanceTick_t(EventClientPostAdvanceTick_t* , const EngineLoopState_t& , bool, bool, int, int, int);
};

// <04158407> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:210
inline void EventClientPostAdvanceTick_t::Schema_DynamicBinding()
{
} /* size: 0 */

// <041583F0> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:212
void EventClientPostAdvanceTick_t::EventClientPostAdvanceTick_t()
{
} /* size: 0 */

// <041583D7> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:212
inline void EventClientPostAdvanceTick_t::EventClientPostAdvanceTick_t()
{
} /* size: 0 */

// <04153824> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:220
// member functions: 9
// static member variable: 1
// struct size: 1
struct EventClientSendInput_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:222 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:222 */
	EventClientSendInput_t* Schema_MarkHelperFn(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:222 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:222 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:222 */
	void Schema_CompileTimeVerificationFunction(EventClientSendInput_t* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:222 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:222 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:222 */
	const CSchemaClassInfo* Schema_DynamicBinding(const EventClientSendInput_t* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:224 */
	void EventClientSendInput_t(EventClientSendInput_t* );
};

// <041583B2> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:222
inline void EventClientSendInput_t::Schema_DynamicBinding()
{
} /* size: 0 */

// <0415839B> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:224
void EventClientSendInput_t::EventClientSendInput_t()
{
} /* size: 0 */

// <04158382> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:224
inline void EventClientSendInput_t::EventClientSendInput_t()
{
} /* size: 0 */

// <04153930> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:228
// member functions: 10
// member variable: 1
// static member variable: 1
// struct size: 40
struct EventClientPreSimulate_t : public EventSimulate_t {
public:
	/* struct EventSimulate_t <ancestor>; */ /* 0 40 */
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:231 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:231 */
	EventClientPreSimulate_t* Schema_MarkHelperFn(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:231 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:231 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:231 */
	void Schema_CompileTimeVerificationFunction(EventClientPreSimulate_t* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:231 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:231 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:231 */
	const CSchemaClassInfo* Schema_DynamicBinding(const EventClientPreSimulate_t* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:233 */
	void EventClientPreSimulate_t(EventClientPreSimulate_t* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:234 */
	void EventClientPreSimulate_t(EventClientPreSimulate_t* , const EngineLoopState_t& , bool, bool);
};

// <0415835D> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:231
inline void EventClientPreSimulate_t::Schema_DynamicBinding()
{
} /* size: 0 */

// <04158346> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:233
void EventClientPreSimulate_t::EventClientPreSimulate_t()
{
} /* size: 0 */

// <0415832D> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:233
inline void EventClientPreSimulate_t::EventClientPreSimulate_t()
{
} /* size: 0 */

// <04153A71> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:239
// member functions: 10
// member variable: 1
// static member variable: 1
// struct size: 40
struct EventClientSimulate_t : public EventSimulate_t {
public:
	/* struct EventSimulate_t <ancestor>; */ /* 0 40 */
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:242 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:242 */
	EventClientSimulate_t* Schema_MarkHelperFn(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:242 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:242 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:242 */
	void Schema_CompileTimeVerificationFunction(EventClientSimulate_t* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:242 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:242 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:242 */
	const CSchemaClassInfo* Schema_DynamicBinding(const EventClientSimulate_t* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:244 */
	void EventClientSimulate_t(EventClientSimulate_t* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:245 */
	void EventClientSimulate_t(EventClientSimulate_t* , const EngineLoopState_t& , bool, bool);
};

// <04158308> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:242
inline void EventClientSimulate_t::Schema_DynamicBinding()
{
} /* size: 0 */

// <041582F1> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:244
void EventClientSimulate_t::EventClientSimulate_t()
{
} /* size: 0 */

// <041582D8> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:244
inline void EventClientSimulate_t::EventClientSimulate_t()
{
} /* size: 0 */

// <04153BB2> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:250
// member functions: 10
// member variable: 1
// static member variable: 1
// struct size: 40
struct EventServerPollNetworking_t : public EventSimulate_t {
public:
	/* struct EventSimulate_t <ancestor>; */ /* 0 40 */
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:253 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:253 */
	EventServerPollNetworking_t* Schema_MarkHelperFn(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:253 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:253 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:253 */
	void Schema_CompileTimeVerificationFunction(EventServerPollNetworking_t* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:253 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:253 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:253 */
	const CSchemaClassInfo* Schema_DynamicBinding(const EventServerPollNetworking_t* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:255 */
	void EventServerPollNetworking_t(EventServerPollNetworking_t* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:256 */
	void EventServerPollNetworking_t(EventServerPollNetworking_t* , const EngineLoopState_t& , bool, bool);
};

// <041582B3> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:253
inline void EventServerPollNetworking_t::Schema_DynamicBinding()
{
} /* size: 0 */

// <0415829C> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:255
void EventServerPollNetworking_t::EventServerPollNetworking_t()
{
} /* size: 0 */

// <04158283> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:255
inline void EventServerPollNetworking_t::EventServerPollNetworking_t()
{
} /* size: 0 */

// <04153CF4> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:261
// member functions: 10
// member variable: 1
// static member variable: 1
// struct size: 40
struct EventServerProcessNetworking_t : public EventSimulate_t {
public:
	/* struct EventSimulate_t <ancestor>; */ /* 0 40 */
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:264 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:264 */
	EventServerProcessNetworking_t* Schema_MarkHelperFn(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:264 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:264 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:264 */
	void Schema_CompileTimeVerificationFunction(EventServerProcessNetworking_t* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:264 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:264 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:264 */
	const CSchemaClassInfo* Schema_DynamicBinding(const EventServerProcessNetworking_t* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:266 */
	void EventServerProcessNetworking_t(EventServerProcessNetworking_t* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:267 */
	void EventServerProcessNetworking_t(EventServerProcessNetworking_t* , const EngineLoopState_t& , bool, bool);
};

// <0415825E> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:264
inline void EventServerProcessNetworking_t::Schema_DynamicBinding()
{
} /* size: 0 */

// <04158247> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:266
void EventServerProcessNetworking_t::EventServerProcessNetworking_t()
{
} /* size: 0 */

// <0415822E> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:266
inline void EventServerProcessNetworking_t::EventServerProcessNetworking_t()
{
} /* size: 0 */

// <04153E41> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:273
// member functions: 10
// member variable: 1
// static member variable: 1
// struct size: 40
struct EventServerSimulate_t : public EventSimulate_t {
public:
	/* struct EventSimulate_t <ancestor>; */ /* 0 40 */
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:276 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:276 */
	EventServerSimulate_t* Schema_MarkHelperFn(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:276 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:276 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:276 */
	void Schema_CompileTimeVerificationFunction(EventServerSimulate_t* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:276 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:276 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:276 */
	const CSchemaClassInfo* Schema_DynamicBinding(const EventServerSimulate_t* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:278 */
	void EventServerSimulate_t(EventServerSimulate_t* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:279 */
	void EventServerSimulate_t(EventServerSimulate_t* , const EngineLoopState_t& , bool, bool);
};

// <04158209> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:276
inline void EventServerSimulate_t::Schema_DynamicBinding()
{
} /* size: 0 */

// <041581F2> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:278
void EventServerSimulate_t::EventServerSimulate_t()
{
} /* size: 0 */

// <041581D9> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:278
inline void EventServerSimulate_t::EventServerSimulate_t()
{
} /* size: 0 */

// <04153F8E> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:284
// member functions: 10
// member variable: 1
// static member variable: 1
// struct size: 40
struct EventServerPostSimulate_t : public EventSimulate_t {
public:
	/* struct EventSimulate_t <ancestor>; */ /* 0 40 */
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:287 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:287 */
	EventServerPostSimulate_t* Schema_MarkHelperFn(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:287 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:287 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:287 */
	void Schema_CompileTimeVerificationFunction(EventServerPostSimulate_t* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:287 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:287 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:287 */
	const CSchemaClassInfo* Schema_DynamicBinding(const EventServerPostSimulate_t* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:289 */
	void EventServerPostSimulate_t(EventServerPostSimulate_t* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:290 */
	void EventServerPostSimulate_t(EventServerPostSimulate_t* , const EngineLoopState_t& , bool, bool);
};

// <041581B4> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:287
inline void EventServerPostSimulate_t::Schema_DynamicBinding()
{
} /* size: 0 */

// <0415819D> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:289
void EventServerPostSimulate_t::EventServerPostSimulate_t()
{
} /* size: 0 */

// <04158184> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:289
inline void EventServerPostSimulate_t::EventServerPostSimulate_t()
{
} /* size: 0 */

// <041540DB> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:295
// member functions: 10
// member variable: 1
// static member variable: 1
// struct size: 40
struct EventClientPostSimulate_t : public EventSimulate_t {
public:
	/* struct EventSimulate_t <ancestor>; */ /* 0 40 */
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:298 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:298 */
	EventClientPostSimulate_t* Schema_MarkHelperFn(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:298 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:298 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:298 */
	void Schema_CompileTimeVerificationFunction(EventClientPostSimulate_t* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:298 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:298 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:298 */
	const CSchemaClassInfo* Schema_DynamicBinding(const EventClientPostSimulate_t* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:300 */
	void EventClientPostSimulate_t(EventClientPostSimulate_t* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:301 */
	void EventClientPostSimulate_t(EventClientPostSimulate_t* , const EngineLoopState_t& , bool, bool);
};

// <0415815F> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:298
inline void EventClientPostSimulate_t::Schema_DynamicBinding()
{
} /* size: 0 */

// <04158148> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:300
void EventClientPostSimulate_t::EventClientPostSimulate_t()
{
} /* size: 0 */

// <0415812F> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:300
inline void EventClientPostSimulate_t::EventClientPostSimulate_t()
{
} /* size: 0 */

// <04154228> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:305
// member functions: 10
// member variable: 1
// static member variable: 1
// struct size: 40
struct EventClientPauseSimulate_t : public EventSimulate_t {
public:
	/* struct EventSimulate_t <ancestor>; */ /* 0 40 */
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:308 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:308 */
	EventClientPauseSimulate_t* Schema_MarkHelperFn(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:308 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:308 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:308 */
	void Schema_CompileTimeVerificationFunction(EventClientPauseSimulate_t* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:308 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:308 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:308 */
	const CSchemaClassInfo* Schema_DynamicBinding(const EventClientPauseSimulate_t* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:310 */
	void EventClientPauseSimulate_t(EventClientPauseSimulate_t* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:311 */
	void EventClientPauseSimulate_t(EventClientPauseSimulate_t* , const EngineLoopState_t& );
};

// <0415810A> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:308
inline void EventClientPauseSimulate_t::Schema_DynamicBinding()
{
} /* size: 0 */

// <041580F3> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:310
void EventClientPauseSimulate_t::EventClientPauseSimulate_t()
{
} /* size: 0 */

// <041580DA> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:310
inline void EventClientPauseSimulate_t::EventClientPauseSimulate_t()
{
} /* size: 0 */

// <0415436B> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:316
// member functions: 8
// member variables: 2
// static member variable: 1
// struct size: 16
struct EventPostDataUpdate_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:318 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:318 */
	EventPostDataUpdate_t* Schema_MarkHelperFn(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:318 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:318 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:318 */
	void Schema_CompileTimeVerificationFunction(EventPostDataUpdate_t* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:318 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:318 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:318 */
	const CSchemaClassInfo* Schema_DynamicBinding(const EventPostDataUpdate_t* );
	int m_nCount; /* 0 4 */
	PostDataUpdateCall_t * m_pUpdates; /* 8 8 */
};

// <041580B5> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:318
inline void EventPostDataUpdate_t::Schema_DynamicBinding()
{
} /* size: 0 */

// <04154494> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:328
// member functions: 8
// member variables: 2
// static member variable: 1
// struct size: 8
struct EventPreDataUpdate_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:330 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:330 */
	EventPreDataUpdate_t* Schema_MarkHelperFn(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:330 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:330 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:330 */
	void Schema_CompileTimeVerificationFunction(EventPreDataUpdate_t* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:330 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:330 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:330 */
	const CSchemaClassInfo* Schema_DynamicBinding(const EventPreDataUpdate_t* );
	int m_nEntityIndex; /* 0 4 */
	DataUpdateType_t m_UpdateType; /* 4 4 */
};

// <04158090> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:330
inline void EventPreDataUpdate_t::Schema_DynamicBinding()
{
} /* size: 0 */

// <000F06A8> ../public/engine2/engineevents.h:339
// member functions: 9
// member variable: 1
// static member variable: 1
// struct size: 4
struct EventAppShutdown_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/engine2/engineevents.h:341 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/engine2/engineevents.h:341 */
	EventAppShutdown_t* Schema_MarkHelperFn(void);
	/* ../public/engine2/engineevents.h:341 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/engine2/engineevents.h:341 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/engine2/engineevents.h:341 */
	void Schema_CompileTimeVerificationFunction(EventAppShutdown_t* );
	/* ../public/engine2/engineevents.h:341 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/engine2/engineevents.h:341 */
	const char* Schema_StaticClassname(void);
	/* ../public/engine2/engineevents.h:341 */
	const CSchemaClassInfo* Schema_DynamicBinding(const EventAppShutdown_t* );
	/* ../public/engine2/engineevents.h:342 */
	void EventAppShutdown_t(EventAppShutdown_t* );
	int m_nDummy0; /* 0 4 */
};

// <041545C2> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:339
// member functions: 9
// member variable: 1
// static member variable: 1
// struct size: 4
struct EventAppShutdown_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:341 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:341 */
	EventAppShutdown_t* Schema_MarkHelperFn(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:341 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:341 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:341 */
	void Schema_CompileTimeVerificationFunction(EventAppShutdown_t* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:341 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:341 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:341 */
	const CSchemaClassInfo* Schema_DynamicBinding(const EventAppShutdown_t* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:342 */
	void EventAppShutdown_t(EventAppShutdown_t* );
	int m_nDummy0; /* 0 4 */
};

// <0415806B> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:341
inline void EventAppShutdown_t::Schema_DynamicBinding()
{
} /* size: 0 */

// <04158054> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:342
void EventAppShutdown_t::EventAppShutdown_t()
{
} /* size: 0 */

// <0415803B> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/engine2/engineevents.h:342
inline void EventAppShutdown_t::EventAppShutdown_t()
{
} /* size: 0 */

