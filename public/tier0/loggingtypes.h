
//
// public/tier0/loggingtypes.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmaterialsystem2.so
//				   libschemasystem.so
//				   libtier0.so
//
//	functions: 14
//	classes: 2
//	structs: 2
//

// <0006C44B> ../public/tier0/loggingtypes.h:177
// member functions: 2
// member variables: 5
// struct size: 40
struct LoggingMetaData_t {
	LoggingMetaData_t * m_pNext; /* 0 8 */
	uint64 m_TypeID; /* 8 8 */
	uint8 * m_pData; /* 16 8 */
	size_t m_nDataSize; /* 24 8 */
	uint8 m_nVerbosity; /* 32 1 */
	/* ../public/tier0/loggingtypes.h:185 */
	void LoggingMetaData_t(LoggingMetaData_t* );
	/* ../public/tier0/loggingtypes.h:186 */
	void LoggingMetaData_t(LoggingMetaData_t* , uint64, uint8* , size_t, LoggingVerbosity_t);
};

// <05DFF2C8> ../public/tier0/loggingtypes.h:186
void LoggingMetaData_t::LoggingMetaData_t(uint64 TypeID, uint8* pData, size_t nDataSize, LoggingVerbosity_t verbosity)
{
} /* size: 0 */

// <05DFF27F> ../public/tier0/loggingtypes.h:186
inline void LoggingMetaData_t::LoggingMetaData_t(uint64 TypeID, uint8* pData, size_t nDataSize, LoggingVerbosity_t verbosity)
{
} /* size: 0 */

// <002891E5> ../public/tier0/loggingtypes.h:193
void LoggingContext_t::LoggingContext_t()
{
} /* size: 0 */

// <002891C9> ../public/tier0/loggingtypes.h:193
inline void LoggingContext_t::LoggingContext_t()
{
} /* size: 0 */

// <0006C500> ../public/tier0/loggingtypes.h:193
// member variables: 5
// struct size: 24
struct LoggingContext_t {
	LoggingChannelID_t m_ChannelID; /* 0 4 */
	LoggingChannelFlags_t m_Flags; /* 4 4 */
	LoggingSeverity_t m_Severity; /* 8 4 */
	Color m_Color; /* 12 4 */
	const class LoggingMetaData_t * m_pMetaData; /* 16 8 */
};

// <068353AC> ../public/tier0/loggingtypes.h:223
void ILoggingListener::ILoggingListener()
{
} /* size: 0 */

// <06835390> ../public/tier0/loggingtypes.h:223
inline void ILoggingListener::ILoggingListener()
{
} /* size: 0 */

// <001214AC> ../public/tier0/loggingtypes.h:223
// member functions: 16
// member variable: 1
// vtable entries: 4
// class size: 8
class ILoggingListener {
	void ~ILoggingListener(ILoggingListener* );
	void ILoggingListener(ILoggingListener* , ILoggingListener& );
	void ILoggingListener(ILoggingListener* , const ILoggingListener& );
	void ILoggingListener(ILoggingListener* );
	int ()(void) * * _vptr.ILoggingListener; /* 0 8 */
	/* ../public/tier0/loggingtypes.h:227 */
	virtual void Log(ILoggingListener* , const LoggingContext_t* , const char* );
	/* ../public/tier0/loggingtypes.h:230 */
	virtual void OnChannelRegistered(ILoggingListener* , LoggingChannelID_t);
	/* ../public/tier0/loggingtypes.h:233 */
	virtual void OnChannelVerbosityChanged(ILoggingListener* , LoggingChannelID_t);
	/* ../public/tier0/loggingtypes.h:236 */
	virtual void OnChannelFlagsChanged(ILoggingListener* , LoggingChannelID_t);
	void ~ILoggingListener(class ILoggingListener *); /* linkage=_ZN16ILoggingListenerD4Ev */
	void ILoggingListener(class ILoggingListener *, class ILoggingListener &); /* linkage=_ZN16ILoggingListenerC4EOS_ */
	void ILoggingListener(class ILoggingListener *, const class ILoggingListener  &); /* linkage=_ZN16ILoggingListenerC4ERKS_ */
	void ILoggingListener(class ILoggingListener *); /* linkage=_ZN16ILoggingListenerC4Ev */
	virtual void Log(class ILoggingListener *, const class LoggingContext_t  *, const char  *); /* linkage=_ZN16ILoggingListener3LogEPK16LoggingContext_tPKc */
	/* <28cac2> ../public/tier0/loggingtypes.h:230 */
	virtual void OnChannelRegistered(class ILoggingListener *, LoggingChannelID_t); /* linkage=_ZN16ILoggingListener19OnChannelRegisteredEi */
	/* <28caf2> ../public/tier0/loggingtypes.h:233 */
	virtual void OnChannelVerbosityChanged(class ILoggingListener *, LoggingChannelID_t); /* linkage=_ZN16ILoggingListener25OnChannelVerbosityChangedEi */
	/* <28cb22> ../public/tier0/loggingtypes.h:236 */
	virtual void OnChannelFlagsChanged(class ILoggingListener *, LoggingChannelID_t); /* linkage=_ZN16ILoggingListener21OnChannelFlagsChangedEi */
};

// <0683543B> ../public/tier0/loggingtypes.h:230
void ILoggingListener::OnChannelRegistered(LoggingChannelID_t channel)
{
} /* size: 5 */

// <0028C7DC> ../public/tier0/loggingtypes.h:230
inline void ILoggingListener::OnChannelRegistered(LoggingChannelID_t channel)
{
} /* size: 0 */

// <068353FF> ../public/tier0/loggingtypes.h:233
void ILoggingListener::OnChannelVerbosityChanged(LoggingChannelID_t channel)
{
} /* size: 5 */

// <0028C7B7> ../public/tier0/loggingtypes.h:233
inline void ILoggingListener::OnChannelVerbosityChanged(LoggingChannelID_t channel)
{
} /* size: 0 */

// <068353C3> ../public/tier0/loggingtypes.h:236
void ILoggingListener::OnChannelFlagsChanged(LoggingChannelID_t channel)
{
} /* size: 5 */

// <0028C792> ../public/tier0/loggingtypes.h:236
inline void ILoggingListener::OnChannelFlagsChanged(LoggingChannelID_t channel)
{
} /* size: 0 */

// <0028BD5F> ../public/tier0/loggingtypes.h:248
void ILoggingResponsePolicy::ILoggingResponsePolicy()
{
} /* size: 0 */

// <0028BD43> ../public/tier0/loggingtypes.h:248
inline void ILoggingResponsePolicy::ILoggingResponsePolicy()
{
} /* size: 0 */

// <0027E73B> ../public/tier0/loggingtypes.h:248
// member functions: 10
// member variable: 1
// vtable entry: 1
// class size: 8
class ILoggingResponsePolicy {
	void ~ILoggingResponsePolicy(ILoggingResponsePolicy* );
	void ILoggingResponsePolicy(ILoggingResponsePolicy* , ILoggingResponsePolicy& );
	void ILoggingResponsePolicy(ILoggingResponsePolicy* , const ILoggingResponsePolicy& );
	void ILoggingResponsePolicy(ILoggingResponsePolicy* );
	int ()(void) * * _vptr.ILoggingResponsePolicy; /* 0 8 */
	/* ../public/tier0/loggingtypes.h:251 */
	virtual LoggingResponse_t OnLog(ILoggingResponsePolicy* , const LoggingContext_t* );
	void ~ILoggingResponsePolicy(class ILoggingResponsePolicy *); /* linkage=_ZN22ILoggingResponsePolicyD4Ev */
	void ILoggingResponsePolicy(class ILoggingResponsePolicy *, class ILoggingResponsePolicy &); /* linkage=_ZN22ILoggingResponsePolicyC4EOS_ */
	void ILoggingResponsePolicy(class ILoggingResponsePolicy *, const class ILoggingResponsePolicy  &); /* linkage=_ZN22ILoggingResponsePolicyC4ERKS_ */
	void ILoggingResponsePolicy(class ILoggingResponsePolicy *); /* linkage=_ZN22ILoggingResponsePolicyC4Ev */
	virtual enum LoggingResponse_t OnLog(class ILoggingResponsePolicy *, const class LoggingContext_t  *); /* linkage=_ZN22ILoggingResponsePolicy5OnLogEPK16LoggingContext_t */
};

