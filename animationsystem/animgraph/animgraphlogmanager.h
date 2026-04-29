
//
// animationsystem/animgraph/animgraphlogmanager.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 2
//	classes: 2
//

// <0083FE6C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animgraphlogmanager.h:13
void CAnimGraphLogManager::~CAnimGraphLogManager()
{
} /* size: 0 */

// <0083FE39> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animgraphlogmanager.h:13
inline void CAnimGraphLogManager::~CAnimGraphLogManager()
{
} /* size: 0 */

// <003914CF> ../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animgraphlogmanager.h:13
// member functions: 20
// member variables: 3
// class size: 120
class CAnimGraphLogManager : public CMutableRefCounted<CMutableRefCountBase<true, CRefMT> > {
public:
	/* class CMutableRefCounted<CMutableRefCountBase<true, CRefMT> > <ancestor>; */ /* 0 16 */
	/* ../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animgraphlogmanager.h:16 */
	void CAnimGraphLogManager(CAnimGraphLogManager* );
	/* ../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animgraphlogmanager.h:18 */
	void AddListener(CAnimGraphLogManager* , IAnimGraphLogListener* );
	/* ../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animgraphlogmanager.h:19 */
	void RemoveListener(CAnimGraphLogManager* , IAnimGraphLogListener* );
	/* ../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animgraphlogmanager.h:21 */
	void LogMessage(CAnimGraphLogManager* , LogSeverity, const AnimNodeLocation_t& , const char* , ...);
	/* ../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animgraphlogmanager.h:22 */
	void LogMessage(CAnimGraphLogManager* , const LoggingMetaData_t& , LogSeverity, const AnimNodeLocation_t& , const char* , ...);
	/* ../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animgraphlogmanager.h:24 */
	void vLogMessage(CAnimGraphLogManager* , LogSeverity, const AnimNodeLocation_t& , const char* , typedef __va_list_tag __va_list_tag* );
	/* ../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animgraphlogmanager.h:25 */
	void vLogMessage(CAnimGraphLogManager* , const LoggingMetaData_t& , LogSeverity, const AnimNodeLocation_t& , const char* , typedef __va_list_tag __va_list_tag* );
private:
	/* ../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animgraphlogmanager.h:29 */
	void SendLogMessage(CAnimGraphLogManager* , const LoggingMetaData_t* , LogSeverity, const AnimNodeLocation_t& , const CUtlString& );
	CUtlVector<IAnimGraphLogListener*, CUtlMemory<IAnimGraphLogListener*, int> > m_listeners; /* 16 32 */
	CThreadMutex m_lock; /* 48 72 */
	virtual void ~CAnimGraphLogManager(CAnimGraphLogManager* );
	void CAnimGraphLogManager(class CAnimGraphLogManager *); /* linkage=_ZN20CAnimGraphLogManagerC4Ev */
	void AddListener(class CAnimGraphLogManager *, class IAnimGraphLogListener *); /* linkage=_ZN20CAnimGraphLogManager11AddListenerEP21IAnimGraphLogListener */
	void RemoveListener(class CAnimGraphLogManager *, class IAnimGraphLogListener *); /* linkage=_ZN20CAnimGraphLogManager14RemoveListenerEP21IAnimGraphLogListener */
	void LogMessage(class CAnimGraphLogManager *, enum LogSeverity, const class AnimNodeLocation_t  &, const char  *, ...); /* linkage=_ZN20CAnimGraphLogManager10LogMessageE11LogSeverityRK18AnimNodeLocation_tPKcz */
	void LogMessage(class CAnimGraphLogManager *, const class LoggingMetaData_t  &, enum LogSeverity, const class AnimNodeLocation_t  &, const char  *, ...); /* linkage=_ZN20CAnimGraphLogManager10LogMessageERK17LoggingMetaData_t11LogSeverityRK18AnimNodeLocation_tPKcz */
	void vLogMessage(class CAnimGraphLogManager *, enum LogSeverity, const class AnimNodeLocation_t  &, const char  *, class typedef __va_list_tag __va_list_tag *); /* linkage=_ZN20CAnimGraphLogManager11vLogMessageE11LogSeverityRK18AnimNodeLocation_tPKcP13__va_list_tag */
	void vLogMessage(class CAnimGraphLogManager *, const class LoggingMetaData_t  &, enum LogSeverity, const class AnimNodeLocation_t  &, const char  *, class typedef __va_list_tag __va_list_tag *); /* linkage=_ZN20CAnimGraphLogManager11vLogMessageERK17LoggingMetaData_t11LogSeverityRK18AnimNodeLocation_tPKcP13__va_list_tag */
	void SendLogMessage(class CAnimGraphLogManager *, const class LoggingMetaData_t  *, enum LogSeverity, const class AnimNodeLocation_t  &, const class CUtlString  &); /* linkage=_ZN20CAnimGraphLogManager14SendLogMessageEPK17LoggingMetaData_t11LogSeverityRK18AnimNodeLocation_tRK10CUtlString */
	virtual void ~CAnimGraphLogManager(class CAnimGraphLogManager *); /* linkage=_ZN20CAnimGraphLogManagerD4Ev */
	void CAnimGraphLogManager(class CAnimGraphLogManager *, class CAnimGraphLogManager &); /* linkage=_ZN20CAnimGraphLogManagerC4EOS_ */
	void CAnimGraphLogManager(class CAnimGraphLogManager *, const class CAnimGraphLogManager  &); /* linkage=_ZN20CAnimGraphLogManagerC4ERKS_ */
};

// <003F9F98> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animgraphlogmanager.h:13
// member functions: 20
// member variables: 3
// class size: 120
class CAnimGraphLogManager : public CMutableRefCounted<CMutableRefCountBase<true, CRefMT> > {
public:
	/* class CMutableRefCounted<CMutableRefCountBase<true, CRefMT> > <ancestor>; */ /* 0 16 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animgraphlogmanager.h:16 */
	void CAnimGraphLogManager(CAnimGraphLogManager* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animgraphlogmanager.h:18 */
	void AddListener(CAnimGraphLogManager* , IAnimGraphLogListener* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animgraphlogmanager.h:19 */
	void RemoveListener(CAnimGraphLogManager* , IAnimGraphLogListener* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animgraphlogmanager.h:21 */
	void LogMessage(CAnimGraphLogManager* , LogSeverity, const AnimNodeLocation_t& , const char* , ...);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animgraphlogmanager.h:22 */
	void LogMessage(CAnimGraphLogManager* , const LoggingMetaData_t& , LogSeverity, const AnimNodeLocation_t& , const char* , ...);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animgraphlogmanager.h:24 */
	void vLogMessage(CAnimGraphLogManager* , LogSeverity, const AnimNodeLocation_t& , const char* , typedef __va_list_tag __va_list_tag* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animgraphlogmanager.h:25 */
	void vLogMessage(CAnimGraphLogManager* , const LoggingMetaData_t& , LogSeverity, const AnimNodeLocation_t& , const char* , typedef __va_list_tag __va_list_tag* );
private:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animgraphlogmanager.h:29 */
	void SendLogMessage(CAnimGraphLogManager* , const LoggingMetaData_t* , LogSeverity, const AnimNodeLocation_t& , const CUtlString& );
	CUtlVector<IAnimGraphLogListener*, CUtlMemory<IAnimGraphLogListener*, int> > m_listeners; /* 16 32 */
	CThreadMutex m_lock; /* 48 72 */
	virtual void ~CAnimGraphLogManager(CAnimGraphLogManager* );
	void CAnimGraphLogManager(class CAnimGraphLogManager *); /* linkage=_ZN20CAnimGraphLogManagerC4Ev */
	void AddListener(class CAnimGraphLogManager *, class IAnimGraphLogListener *); /* linkage=_ZN20CAnimGraphLogManager11AddListenerEP21IAnimGraphLogListener */
	void RemoveListener(class CAnimGraphLogManager *, class IAnimGraphLogListener *); /* linkage=_ZN20CAnimGraphLogManager14RemoveListenerEP21IAnimGraphLogListener */
	void LogMessage(class CAnimGraphLogManager *, enum LogSeverity, const class AnimNodeLocation_t  &, const char  *, ...); /* linkage=_ZN20CAnimGraphLogManager10LogMessageE11LogSeverityRK18AnimNodeLocation_tPKcz */
	void LogMessage(class CAnimGraphLogManager *, const class LoggingMetaData_t  &, enum LogSeverity, const class AnimNodeLocation_t  &, const char  *, ...); /* linkage=_ZN20CAnimGraphLogManager10LogMessageERK17LoggingMetaData_t11LogSeverityRK18AnimNodeLocation_tPKcz */
	void vLogMessage(class CAnimGraphLogManager *, enum LogSeverity, const class AnimNodeLocation_t  &, const char  *, class typedef __va_list_tag __va_list_tag *); /* linkage=_ZN20CAnimGraphLogManager11vLogMessageE11LogSeverityRK18AnimNodeLocation_tPKcP13__va_list_tag */
	void vLogMessage(class CAnimGraphLogManager *, const class LoggingMetaData_t  &, enum LogSeverity, const class AnimNodeLocation_t  &, const char  *, class typedef __va_list_tag __va_list_tag *); /* linkage=_ZN20CAnimGraphLogManager11vLogMessageERK17LoggingMetaData_t11LogSeverityRK18AnimNodeLocation_tPKcP13__va_list_tag */
	void SendLogMessage(class CAnimGraphLogManager *, const class LoggingMetaData_t  *, enum LogSeverity, const class AnimNodeLocation_t  &, const class CUtlString  &); /* linkage=_ZN20CAnimGraphLogManager14SendLogMessageEPK17LoggingMetaData_t11LogSeverityRK18AnimNodeLocation_tRK10CUtlString */
	virtual void ~CAnimGraphLogManager(class CAnimGraphLogManager *); /* linkage=_ZN20CAnimGraphLogManagerD4Ev */
	void CAnimGraphLogManager(class CAnimGraphLogManager *, class CAnimGraphLogManager &); /* linkage=_ZN20CAnimGraphLogManagerC4EOS_ */
	void CAnimGraphLogManager(class CAnimGraphLogManager *, const class CAnimGraphLogManager  &); /* linkage=_ZN20CAnimGraphLogManagerC4ERKS_ */
};

