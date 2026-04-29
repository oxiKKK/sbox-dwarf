
//
// tier0/loggingsystem.h
//
//	referenced by: libtier0.so
//
//	functions: 8
//	classes: 2
//

// <000F001B> tier0/loggingsystem.h:24
// member functions: 73
// member variables: 8
// static member variable: 1
// class size: 54,496
class CLoggingSystem {
	/* tier0/loggingsystem.h:152 */
	struct BaseLoggingState_t {
		int m_nListenerCount; /* 0 4 */
		ILoggingListener * m_RegisteredListeners[16]; /* 8 128 */
	};
	/* tier0/loggingsystem.h:163 */
	struct LoggingState_t : public BaseLoggingState_t {
	public:
		/* struct BaseLoggingState_t <ancestor>; */ /* 0 136 */
		int m_nPreviousStackEntry; /* 136 4 */
		ILoggingResponsePolicy * m_pLoggingResponse; /* 144 8 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* tier0/loggingsystem.h:172 */
	struct BackdoorLoggingState_t : public BaseLoggingState_t {
	public:
		/* struct BaseLoggingState_t <ancestor>; */ /* 0 136 */
		/* tier0/loggingsystem.h:174 */
		void BackdoorLoggingState_t(BackdoorLoggingState_t* );
		bool m_bEnabled; /* 136 1 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* tier0/loggingsystem.h:27 */
	void CLoggingSystem(CLoggingSystem* );
	/* tier0/loggingsystem.h:28 */
	void ~CLoggingSystem(CLoggingSystem* );
	/* tier0/loggingsystem.h:40 */
	LoggingChannelID_t RegisterLoggingChannel(CLoggingSystem* , const char* , int, LoggingVerbosity_t, Color);
	/* tier0/loggingsystem.h:47 */
	LoggingChannelID_t FindChannel(const CLoggingSystem* , const char* );
	/* tier0/loggingsystem.h:49 */
	int GetChannelCount(const CLoggingSystem* );
	/* tier0/loggingsystem.h:54 */
	LoggingChannel_t* GetChannel(CLoggingSystem* , LoggingChannelID_t);
	/* tier0/loggingsystem.h:55 */
	const LoggingChannel_t* GetChannel(const CLoggingSystem* , LoggingChannelID_t);
	/* tier0/loggingsystem.h:60 */
	bool IsChannelEnabled(const CLoggingSystem* , LoggingChannelID_t, LoggingSeverity_t);
	/* tier0/loggingsystem.h:61 */
	bool IsChannelEnabled(const CLoggingSystem* , LoggingChannelID_t, LoggingVerbosity_t);
	/* tier0/loggingsystem.h:71 */
	LoggingVerbosity_t GetChannelVerbosity(CLoggingSystem* , LoggingChannelID_t);
	/* tier0/loggingsystem.h:72 */
	void SetChannelVerbosity(CLoggingSystem* , LoggingChannelID_t, LoggingVerbosity_t);
	/* tier0/loggingsystem.h:73 */
	void SetChannelVerbosityByName(CLoggingSystem* , const char* , LoggingVerbosity_t);
	/* tier0/loggingsystem.h:80 */
	Color GetChannelColor(const CLoggingSystem* , LoggingChannelID_t);
	/* tier0/loggingsystem.h:81 */
	void SetChannelColor(CLoggingSystem* , LoggingChannelID_t, Color);
	/* tier0/loggingsystem.h:88 */
	LoggingChannelFlags_t GetChannelFlags(const CLoggingSystem* , LoggingChannelID_t);
	/* tier0/loggingsystem.h:89 */
	void SetChannelFlags(CLoggingSystem* , LoggingChannelID_t, LoggingChannelFlags_t);
	/* tier0/loggingsystem.h:103 */
	void PushLoggingState(CLoggingSystem* , bool, bool);
	/* tier0/loggingsystem.h:104 */
	void PopLoggingState(CLoggingSystem* , bool);
	/* tier0/loggingsystem.h:105 */
	int CurrentStateIndex(CLoggingSystem* , bool);
	/* tier0/loggingsystem.h:110 */
	void RegisterLoggingListener(CLoggingSystem* , ILoggingListener* );
	/* tier0/loggingsystem.h:111 */
	void UnregisterLoggingListener(CLoggingSystem* , ILoggingListener* );
	/* tier0/loggingsystem.h:116 */
	void RegisterBackdoorLoggingListener(CLoggingSystem* , ILoggingListener* );
	/* tier0/loggingsystem.h:121 */
	bool IsListenerRegistered(CLoggingSystem* , ILoggingListener* );
	/* tier0/loggingsystem.h:127 */
	void ResetCurrentLoggingState(CLoggingSystem* );
	/* tier0/loggingsystem.h:132 */
	void ResetBackdoorLoggingState(CLoggingSystem* );
	/* tier0/loggingsystem.h:140 */
	void SetLoggingResponsePolicy(CLoggingSystem* , ILoggingResponsePolicy* );
	/* tier0/loggingsystem.h:147 */
	LoggingResponse_t LogDirect(CLoggingSystem* , LoggingChannelID_t, LoggingSeverity_t, const LeafCodeInfo_t* , const LoggingMetaData_t* , Color, const char* , va_list* );
	/* tier0/loggingsystem.h:149 */
	bool EnableBackdoorLoggingListeners(CLoggingSystem* , bool);
private:
	/* tier0/loggingsystem.h:183 */
	LoggingState_t* GetCurrentState(CLoggingSystem* );
	/* tier0/loggingsystem.h:184 */
	const LoggingState_t* GetCurrentState(const CLoggingSystem* );
	/* tier0/loggingsystem.h:186 */
	BackdoorLoggingState_t* GetBackdoorState(CLoggingSystem* );
	/* tier0/loggingsystem.h:187 */
	const BackdoorLoggingState_t* GetBackdoorState(const CLoggingSystem* );
	/* tier0/loggingsystem.h:191 */
	void DispatchNotification_ChannelRegistered(CLoggingSystem* , BaseLoggingState_t* , LoggingChannelID_t);
	/* tier0/loggingsystem.h:192 */
	void DispatchNotification_ChannelVerbosityChanged(CLoggingSystem* , BaseLoggingState_t* , LoggingChannelID_t);
	/* tier0/loggingsystem.h:193 */
	void DispatchNotification_ChannelFlagsChanged(CLoggingSystem* , BaseLoggingState_t* , LoggingChannelID_t);
	/* tier0/loggingsystem.h:196 */
	int FindUnusedStateIndex(CLoggingSystem* );
	int m_nChannelCount; /* 0 4 */
	LoggingChannel_t m_RegisteredChannels[256]; /* 4 15360 */
	CThreadFastMutex m_StateMutex; /* 15368 24 */
	int m_nGlobalStateIndex; /* 15392 4 */
	static const int MAX_LOGGING_STATE_COUNT = 256; /* 0 0 */
	LoggingState_t m_LoggingStates[256]; /* 15400 38912 */
	BackdoorLoggingState_t m_BackdoorLoggingState; /* 54312 144 */
	CDefaultLoggingResponsePolicy m_DefaultLoggingResponse; /* 54456 0 */
	CColorizedLoggingListener m_DefaultLoggingListener; /* 54464 32 */
	void CLoggingSystem(class CLoggingSystem *); /* linkage=_ZN14CLoggingSystemC4Ev */
	void ~CLoggingSystem(class CLoggingSystem *); /* linkage=_ZN14CLoggingSystemD4Ev */
	LoggingChannelID_t RegisterLoggingChannel(class CLoggingSystem *, const char  *, int, enum LoggingVerbosity_t, class Color); /* linkage=_ZN14CLoggingSystem22RegisterLoggingChannelEPKci18LoggingVerbosity_t5Color */
	/* <28ccfc> tier0/logging.cpp:312 */
	LoggingChannelID_t FindChannel(const class CLoggingSystem  *, const char  *); /* linkage=_ZNK14CLoggingSystem11FindChannelEPKc */
	int GetChannelCount(const class CLoggingSystem  *); /* linkage=_ZNK14CLoggingSystem15GetChannelCountEv */
	/* <28d435> tier0/logging.cpp:773 */
	class LoggingChannel_t * GetChannel(class CLoggingSystem *, LoggingChannelID_t); /* linkage=_ZN14CLoggingSystem10GetChannelEi */
	/* <28d471> tier0/logging.cpp:779 */
	const class LoggingChannel_t  * GetChannel(const class CLoggingSystem  *, LoggingChannelID_t); /* linkage=_ZNK14CLoggingSystem10GetChannelEi */
	bool IsChannelEnabled(const class CLoggingSystem  *, LoggingChannelID_t, enum LoggingSeverity_t); /* linkage=_ZNK14CLoggingSystem16IsChannelEnabledEi17LoggingSeverity_t */
	bool IsChannelEnabled(const class CLoggingSystem  *, LoggingChannelID_t, enum LoggingVerbosity_t); /* linkage=_ZNK14CLoggingSystem16IsChannelEnabledEi18LoggingVerbosity_t */
	/* <28cd50> tier0/logging.cpp:325 */
	enum LoggingVerbosity_t GetChannelVerbosity(class CLoggingSystem *, LoggingChannelID_t); /* linkage=_ZN14CLoggingSystem19GetChannelVerbosityEi */
	void SetChannelVerbosity(class CLoggingSystem *, LoggingChannelID_t, enum LoggingVerbosity_t); /* linkage=_ZN14CLoggingSystem19SetChannelVerbosityEi18LoggingVerbosity_t */
	void SetChannelVerbosityByName(class CLoggingSystem *, const char  *, enum LoggingVerbosity_t); /* linkage=_ZN14CLoggingSystem25SetChannelVerbosityByNameEPKc18LoggingVerbosity_t */
	class Color GetChannelColor(const class CLoggingSystem  *, LoggingChannelID_t); /* linkage=_ZNK14CLoggingSystem15GetChannelColorEi */
	void SetChannelColor(class CLoggingSystem *, LoggingChannelID_t, class Color); /* linkage=_ZN14CLoggingSystem15SetChannelColorEi5Color */
	enum LoggingChannelFlags_t GetChannelFlags(const class CLoggingSystem  *, LoggingChannelID_t); /* linkage=_ZNK14CLoggingSystem15GetChannelFlagsEi */
	void SetChannelFlags(class CLoggingSystem *, LoggingChannelID_t, enum LoggingChannelFlags_t); /* linkage=_ZN14CLoggingSystem15SetChannelFlagsEi21LoggingChannelFlags_t */
	void PushLoggingState(class CLoggingSystem *, bool, bool); /* linkage=_ZN14CLoggingSystem16PushLoggingStateEbb */
	void PopLoggingState(class CLoggingSystem *, bool); /* linkage=_ZN14CLoggingSystem15PopLoggingStateEb */
	/* <28cdd9> tier0/logging.cpp:436 */
	int CurrentStateIndex(class CLoggingSystem *, bool); /* linkage=_ZN14CLoggingSystem17CurrentStateIndexEb */
	void RegisterLoggingListener(class CLoggingSystem *, class ILoggingListener *); /* linkage=_ZN14CLoggingSystem23RegisterLoggingListenerEP16ILoggingListener */
	void UnregisterLoggingListener(class CLoggingSystem *, class ILoggingListener *); /* linkage=_ZN14CLoggingSystem25UnregisterLoggingListenerEP16ILoggingListener */
	void RegisterBackdoorLoggingListener(class CLoggingSystem *, class ILoggingListener *); /* linkage=_ZN14CLoggingSystem31RegisterBackdoorLoggingListenerEP16ILoggingListener */
	bool IsListenerRegistered(class CLoggingSystem *, class ILoggingListener *); /* linkage=_ZN14CLoggingSystem20IsListenerRegisteredEP16ILoggingListener */
	/* <28d550> tier0/logging.cpp:542 */
	void ResetCurrentLoggingState(class CLoggingSystem *); /* linkage=_ZN14CLoggingSystem24ResetCurrentLoggingStateEv */
	/* <28d121> tier0/logging.cpp:551 */
	void ResetBackdoorLoggingState(class CLoggingSystem *); /* linkage=_ZN14CLoggingSystem25ResetBackdoorLoggingStateEv */
	void SetLoggingResponsePolicy(class CLoggingSystem *, class ILoggingResponsePolicy *); /* linkage=_ZN14CLoggingSystem24SetLoggingResponsePolicyEP22ILoggingResponsePolicy */
	enum LoggingResponse_t LogDirect(class CLoggingSystem *, LoggingChannelID_t, enum LoggingSeverity_t, const class LeafCodeInfo_t  *, const class LoggingMetaData_t  *, class Color, const char  *, va_list *); /* linkage=_ZN14CLoggingSystem9LogDirectEi17LoggingSeverity_tPK14LeafCodeInfo_tPK17LoggingMetaData_t5ColorPKcPA1_13__va_list_tag */
	/* <28ce17> tier0/logging.cpp:499 */
	bool EnableBackdoorLoggingListeners(class CLoggingSystem *, bool); /* linkage=_ZN14CLoggingSystem30EnableBackdoorLoggingListenersEb */
	/* <28d4ad> tier0/logging.cpp:785 */
	class LoggingState_t * GetCurrentState(class CLoggingSystem *); /* linkage=_ZN14CLoggingSystem15GetCurrentStateEv */
	const class LoggingState_t  * GetCurrentState(const class CLoggingSystem  *); /* linkage=_ZNK14CLoggingSystem15GetCurrentStateEv */
	/* <28d87c> tier0/logging.cpp:817 */
	class BackdoorLoggingState_t * GetBackdoorState(class CLoggingSystem *); /* linkage=_ZN14CLoggingSystem16GetBackdoorStateEv */
	const class BackdoorLoggingState_t  * GetBackdoorState(const class CLoggingSystem  *); /* linkage=_ZNK14CLoggingSystem16GetBackdoorStateEv */
	/* <28d8f7> tier0/logging.cpp:839 */
	void DispatchNotification_ChannelRegistered(class CLoggingSystem *, class BaseLoggingState_t *, LoggingChannelID_t); /* linkage=_ZN14CLoggingSystem38DispatchNotification_ChannelRegisteredEPNS_18BaseLoggingState_tEi */
	/* <28d958> tier0/logging.cpp:847 */
	void DispatchNotification_ChannelVerbosityChanged(class CLoggingSystem *, class BaseLoggingState_t *, LoggingChannelID_t); /* linkage=_ZN14CLoggingSystem44DispatchNotification_ChannelVerbosityChangedEPNS_18BaseLoggingState_tEi */
	/* <28d9b9> tier0/logging.cpp:855 */
	void DispatchNotification_ChannelFlagsChanged(class CLoggingSystem *, class BaseLoggingState_t *, LoggingChannelID_t); /* linkage=_ZN14CLoggingSystem40DispatchNotification_ChannelFlagsChangedEPNS_18BaseLoggingState_tEi */
	/* <28d8a5> tier0/logging.cpp:827 */
	int FindUnusedStateIndex(class CLoggingSystem *); /* linkage=_ZN14CLoggingSystem20FindUnusedStateIndexEv */
};

// <0027DF25> tier0/loggingsystem.h:24
// member functions: 73
// member variables: 8
// static member variable: 1
// class size: 54,496
class CLoggingSystem {
	/* tier0/loggingsystem.h:152 */
	struct BaseLoggingState_t {
		int m_nListenerCount; /* 0 4 */
		ILoggingListener * m_RegisteredListeners[16]; /* 8 128 */
	};
	/* tier0/loggingsystem.h:163 */
	struct LoggingState_t : public BaseLoggingState_t {
	public:
		/* struct BaseLoggingState_t <ancestor>; */ /* 0 136 */
		int m_nPreviousStackEntry; /* 136 4 */
		ILoggingResponsePolicy * m_pLoggingResponse; /* 144 8 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* tier0/loggingsystem.h:172 */
	struct BackdoorLoggingState_t : public BaseLoggingState_t {
	public:
		/* struct BaseLoggingState_t <ancestor>; */ /* 0 136 */
		/* tier0/loggingsystem.h:174 */
		void BackdoorLoggingState_t(BackdoorLoggingState_t* );
		bool m_bEnabled; /* 136 1 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* tier0/loggingsystem.h:27 */
	void CLoggingSystem(CLoggingSystem* );
	/* tier0/loggingsystem.h:28 */
	void ~CLoggingSystem(CLoggingSystem* );
	/* tier0/loggingsystem.h:40 */
	LoggingChannelID_t RegisterLoggingChannel(CLoggingSystem* , const char* , int, LoggingVerbosity_t, Color);
	/* tier0/loggingsystem.h:47 */
	LoggingChannelID_t FindChannel(const CLoggingSystem* , const char* );
	/* tier0/loggingsystem.h:49 */
	int GetChannelCount(const CLoggingSystem* );
	/* tier0/loggingsystem.h:54 */
	LoggingChannel_t* GetChannel(CLoggingSystem* , LoggingChannelID_t);
	/* tier0/loggingsystem.h:55 */
	const LoggingChannel_t* GetChannel(const CLoggingSystem* , LoggingChannelID_t);
	/* tier0/loggingsystem.h:60 */
	bool IsChannelEnabled(const CLoggingSystem* , LoggingChannelID_t, LoggingSeverity_t);
	/* tier0/loggingsystem.h:61 */
	bool IsChannelEnabled(const CLoggingSystem* , LoggingChannelID_t, LoggingVerbosity_t);
	/* tier0/loggingsystem.h:71 */
	LoggingVerbosity_t GetChannelVerbosity(CLoggingSystem* , LoggingChannelID_t);
	/* tier0/loggingsystem.h:72 */
	void SetChannelVerbosity(CLoggingSystem* , LoggingChannelID_t, LoggingVerbosity_t);
	/* tier0/loggingsystem.h:73 */
	void SetChannelVerbosityByName(CLoggingSystem* , const char* , LoggingVerbosity_t);
	/* tier0/loggingsystem.h:80 */
	Color GetChannelColor(const CLoggingSystem* , LoggingChannelID_t);
	/* tier0/loggingsystem.h:81 */
	void SetChannelColor(CLoggingSystem* , LoggingChannelID_t, Color);
	/* tier0/loggingsystem.h:88 */
	LoggingChannelFlags_t GetChannelFlags(const CLoggingSystem* , LoggingChannelID_t);
	/* tier0/loggingsystem.h:89 */
	void SetChannelFlags(CLoggingSystem* , LoggingChannelID_t, LoggingChannelFlags_t);
	/* tier0/loggingsystem.h:103 */
	void PushLoggingState(CLoggingSystem* , bool, bool);
	/* tier0/loggingsystem.h:104 */
	void PopLoggingState(CLoggingSystem* , bool);
	/* tier0/loggingsystem.h:105 */
	int CurrentStateIndex(CLoggingSystem* , bool);
	/* tier0/loggingsystem.h:110 */
	void RegisterLoggingListener(CLoggingSystem* , ILoggingListener* );
	/* tier0/loggingsystem.h:111 */
	void UnregisterLoggingListener(CLoggingSystem* , ILoggingListener* );
	/* tier0/loggingsystem.h:116 */
	void RegisterBackdoorLoggingListener(CLoggingSystem* , ILoggingListener* );
	/* tier0/loggingsystem.h:121 */
	bool IsListenerRegistered(CLoggingSystem* , ILoggingListener* );
	/* tier0/loggingsystem.h:127 */
	void ResetCurrentLoggingState(CLoggingSystem* );
	/* tier0/loggingsystem.h:132 */
	void ResetBackdoorLoggingState(CLoggingSystem* );
	/* tier0/loggingsystem.h:140 */
	void SetLoggingResponsePolicy(CLoggingSystem* , ILoggingResponsePolicy* );
	/* tier0/loggingsystem.h:147 */
	LoggingResponse_t LogDirect(CLoggingSystem* , LoggingChannelID_t, LoggingSeverity_t, const LeafCodeInfo_t* , const LoggingMetaData_t* , Color, const char* , va_list* );
	/* tier0/loggingsystem.h:149 */
	bool EnableBackdoorLoggingListeners(CLoggingSystem* , bool);
private:
	/* tier0/loggingsystem.h:183 */
	LoggingState_t* GetCurrentState(CLoggingSystem* );
	/* tier0/loggingsystem.h:184 */
	const LoggingState_t* GetCurrentState(const CLoggingSystem* );
	/* tier0/loggingsystem.h:186 */
	BackdoorLoggingState_t* GetBackdoorState(CLoggingSystem* );
	/* tier0/loggingsystem.h:187 */
	const BackdoorLoggingState_t* GetBackdoorState(const CLoggingSystem* );
	/* tier0/loggingsystem.h:191 */
	void DispatchNotification_ChannelRegistered(CLoggingSystem* , BaseLoggingState_t* , LoggingChannelID_t);
	/* tier0/loggingsystem.h:192 */
	void DispatchNotification_ChannelVerbosityChanged(CLoggingSystem* , BaseLoggingState_t* , LoggingChannelID_t);
	/* tier0/loggingsystem.h:193 */
	void DispatchNotification_ChannelFlagsChanged(CLoggingSystem* , BaseLoggingState_t* , LoggingChannelID_t);
	/* tier0/loggingsystem.h:196 */
	int FindUnusedStateIndex(CLoggingSystem* );
	int m_nChannelCount; /* 0 4 */
	LoggingChannel_t m_RegisteredChannels[256]; /* 4 15360 */
	CThreadFastMutex m_StateMutex; /* 15368 24 */
	int m_nGlobalStateIndex; /* 15392 4 */
	static const int MAX_LOGGING_STATE_COUNT = 256; /* 0 0 */
	LoggingState_t m_LoggingStates[256]; /* 15400 38912 */
	BackdoorLoggingState_t m_BackdoorLoggingState; /* 54312 144 */
	CDefaultLoggingResponsePolicy m_DefaultLoggingResponse; /* 54456 8 */
	CColorizedLoggingListener m_DefaultLoggingListener; /* 54464 32 */
	void CLoggingSystem(class CLoggingSystem *); /* linkage=_ZN14CLoggingSystemC4Ev */
	void ~CLoggingSystem(class CLoggingSystem *); /* linkage=_ZN14CLoggingSystemD4Ev */
	LoggingChannelID_t RegisterLoggingChannel(class CLoggingSystem *, const char  *, int, enum LoggingVerbosity_t, class Color); /* linkage=_ZN14CLoggingSystem22RegisterLoggingChannelEPKci18LoggingVerbosity_t5Color */
	/* <28ccfc> tier0/logging.cpp:312 */
	LoggingChannelID_t FindChannel(const class CLoggingSystem  *, const char  *); /* linkage=_ZNK14CLoggingSystem11FindChannelEPKc */
	int GetChannelCount(const class CLoggingSystem  *); /* linkage=_ZNK14CLoggingSystem15GetChannelCountEv */
	/* <28d435> tier0/logging.cpp:773 */
	class LoggingChannel_t * GetChannel(class CLoggingSystem *, LoggingChannelID_t); /* linkage=_ZN14CLoggingSystem10GetChannelEi */
	/* <28d471> tier0/logging.cpp:779 */
	const class LoggingChannel_t  * GetChannel(const class CLoggingSystem  *, LoggingChannelID_t); /* linkage=_ZNK14CLoggingSystem10GetChannelEi */
	bool IsChannelEnabled(const class CLoggingSystem  *, LoggingChannelID_t, enum LoggingSeverity_t); /* linkage=_ZNK14CLoggingSystem16IsChannelEnabledEi17LoggingSeverity_t */
	bool IsChannelEnabled(const class CLoggingSystem  *, LoggingChannelID_t, enum LoggingVerbosity_t); /* linkage=_ZNK14CLoggingSystem16IsChannelEnabledEi18LoggingVerbosity_t */
	/* <28cd50> tier0/logging.cpp:325 */
	enum LoggingVerbosity_t GetChannelVerbosity(class CLoggingSystem *, LoggingChannelID_t); /* linkage=_ZN14CLoggingSystem19GetChannelVerbosityEi */
	void SetChannelVerbosity(class CLoggingSystem *, LoggingChannelID_t, enum LoggingVerbosity_t); /* linkage=_ZN14CLoggingSystem19SetChannelVerbosityEi18LoggingVerbosity_t */
	void SetChannelVerbosityByName(class CLoggingSystem *, const char  *, enum LoggingVerbosity_t); /* linkage=_ZN14CLoggingSystem25SetChannelVerbosityByNameEPKc18LoggingVerbosity_t */
	class Color GetChannelColor(const class CLoggingSystem  *, LoggingChannelID_t); /* linkage=_ZNK14CLoggingSystem15GetChannelColorEi */
	void SetChannelColor(class CLoggingSystem *, LoggingChannelID_t, class Color); /* linkage=_ZN14CLoggingSystem15SetChannelColorEi5Color */
	enum LoggingChannelFlags_t GetChannelFlags(const class CLoggingSystem  *, LoggingChannelID_t); /* linkage=_ZNK14CLoggingSystem15GetChannelFlagsEi */
	void SetChannelFlags(class CLoggingSystem *, LoggingChannelID_t, enum LoggingChannelFlags_t); /* linkage=_ZN14CLoggingSystem15SetChannelFlagsEi21LoggingChannelFlags_t */
	void PushLoggingState(class CLoggingSystem *, bool, bool); /* linkage=_ZN14CLoggingSystem16PushLoggingStateEbb */
	void PopLoggingState(class CLoggingSystem *, bool); /* linkage=_ZN14CLoggingSystem15PopLoggingStateEb */
	/* <28cdd9> tier0/logging.cpp:436 */
	int CurrentStateIndex(class CLoggingSystem *, bool); /* linkage=_ZN14CLoggingSystem17CurrentStateIndexEb */
	void RegisterLoggingListener(class CLoggingSystem *, class ILoggingListener *); /* linkage=_ZN14CLoggingSystem23RegisterLoggingListenerEP16ILoggingListener */
	void UnregisterLoggingListener(class CLoggingSystem *, class ILoggingListener *); /* linkage=_ZN14CLoggingSystem25UnregisterLoggingListenerEP16ILoggingListener */
	void RegisterBackdoorLoggingListener(class CLoggingSystem *, class ILoggingListener *); /* linkage=_ZN14CLoggingSystem31RegisterBackdoorLoggingListenerEP16ILoggingListener */
	bool IsListenerRegistered(class CLoggingSystem *, class ILoggingListener *); /* linkage=_ZN14CLoggingSystem20IsListenerRegisteredEP16ILoggingListener */
	/* <28d550> tier0/logging.cpp:542 */
	void ResetCurrentLoggingState(class CLoggingSystem *); /* linkage=_ZN14CLoggingSystem24ResetCurrentLoggingStateEv */
	/* <28d121> tier0/logging.cpp:551 */
	void ResetBackdoorLoggingState(class CLoggingSystem *); /* linkage=_ZN14CLoggingSystem25ResetBackdoorLoggingStateEv */
	void SetLoggingResponsePolicy(class CLoggingSystem *, class ILoggingResponsePolicy *); /* linkage=_ZN14CLoggingSystem24SetLoggingResponsePolicyEP22ILoggingResponsePolicy */
	enum LoggingResponse_t LogDirect(class CLoggingSystem *, LoggingChannelID_t, enum LoggingSeverity_t, const class LeafCodeInfo_t  *, const class LoggingMetaData_t  *, class Color, const char  *, va_list *); /* linkage=_ZN14CLoggingSystem9LogDirectEi17LoggingSeverity_tPK14LeafCodeInfo_tPK17LoggingMetaData_t5ColorPKcPA1_13__va_list_tag */
	/* <28ce17> tier0/logging.cpp:499 */
	bool EnableBackdoorLoggingListeners(class CLoggingSystem *, bool); /* linkage=_ZN14CLoggingSystem30EnableBackdoorLoggingListenersEb */
	/* <28d4ad> tier0/logging.cpp:785 */
	class LoggingState_t * GetCurrentState(class CLoggingSystem *); /* linkage=_ZN14CLoggingSystem15GetCurrentStateEv */
	const class LoggingState_t  * GetCurrentState(const class CLoggingSystem  *); /* linkage=_ZNK14CLoggingSystem15GetCurrentStateEv */
	/* <28d87c> tier0/logging.cpp:817 */
	class BackdoorLoggingState_t * GetBackdoorState(class CLoggingSystem *); /* linkage=_ZN14CLoggingSystem16GetBackdoorStateEv */
	const class BackdoorLoggingState_t  * GetBackdoorState(const class CLoggingSystem  *); /* linkage=_ZNK14CLoggingSystem16GetBackdoorStateEv */
	/* <28d8f7> tier0/logging.cpp:839 */
	void DispatchNotification_ChannelRegistered(class CLoggingSystem *, class BaseLoggingState_t *, LoggingChannelID_t); /* linkage=_ZN14CLoggingSystem38DispatchNotification_ChannelRegisteredEPNS_18BaseLoggingState_tEi */
	/* <28d958> tier0/logging.cpp:847 */
	void DispatchNotification_ChannelVerbosityChanged(class CLoggingSystem *, class BaseLoggingState_t *, LoggingChannelID_t); /* linkage=_ZN14CLoggingSystem44DispatchNotification_ChannelVerbosityChangedEPNS_18BaseLoggingState_tEi */
	/* <28d9b9> tier0/logging.cpp:855 */
	void DispatchNotification_ChannelFlagsChanged(class CLoggingSystem *, class BaseLoggingState_t *, LoggingChannelID_t); /* linkage=_ZN14CLoggingSystem40DispatchNotification_ChannelFlagsChangedEPNS_18BaseLoggingState_tEi */
	/* <28d8a5> tier0/logging.cpp:827 */
	int FindUnusedStateIndex(class CLoggingSystem *); /* linkage=_ZN14CLoggingSystem20FindUnusedStateIndexEv */
};

// <0028BF79> tier0/loggingsystem.h:49
inline void CLoggingSystem::GetChannelCount()
{
} /* size: 0 */

// <0028BF48> tier0/loggingsystem.h:60
inline void CLoggingSystem::IsChannelEnabled(LoggingChannelID_t channelID, LoggingSeverity_t severity)
{
} /* size: 0 */

// <0028BF17> tier0/loggingsystem.h:61
inline void CLoggingSystem::IsChannelEnabled(LoggingChannelID_t channelID, LoggingVerbosity_t verbosity)
{
} /* size: 0 */

// <0028BEF2> tier0/loggingsystem.h:80
inline void CLoggingSystem::GetChannelColor(LoggingChannelID_t channelID)
{
} /* size: 0 */

// <0028BEB4> tier0/loggingsystem.h:81
// variable: 1
inline void CLoggingSystem::SetChannelColor(LoggingChannelID_t channelID, Color color)
{
	LoggingChannel_t* pChannel; // 81
} /* size: 0, variables: 1 */

// <0028BE8F> tier0/loggingsystem.h:88
inline void CLoggingSystem::GetChannelFlags(LoggingChannelID_t channelID)
{
} /* size: 0 */

// <0028BE78> tier0/loggingsystem.h:174
void BackdoorLoggingState_t::BackdoorLoggingState_t()
{
} /* size: 0 */

// <0028BE5F> tier0/loggingsystem.h:174
inline void BackdoorLoggingState_t::BackdoorLoggingState_t()
{
} /* size: 0 */

