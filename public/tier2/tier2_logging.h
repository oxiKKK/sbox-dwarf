
//
// public/tier2/tier2_logging.h
//
//	referenced by: libengine2.so
//
//	functions: 4
//	classes: 3
//

// <06835275> ../public/tier2/tier2_logging.h:19
void IFileLoggingListener::IFileLoggingListener()
{
} /* size: 0 */

// <06835259> ../public/tier2/tier2_logging.h:19
inline void IFileLoggingListener::IFileLoggingListener()
{
} /* size: 0 */

// <06824986> ../public/tier2/tier2_logging.h:19
// member functions: 14
// member variable: 1
// vtable entries: 3
// class size: 8
class IFileLoggingListener : public ILoggingListener {
	/* ../public/tier2/tier2_logging.h:25 */
	enum {
		k_nFlag_Append = 1,
		k_nFlag_LogTimeStamp = 2,
		k_nFlag_LogChannel = 4,
	};
public:
	/* class ILoggingListener <ancestor>; */ /* 0 8 */
	void IFileLoggingListener(IFileLoggingListener* , IFileLoggingListener& );
	void IFileLoggingListener(IFileLoggingListener* , const IFileLoggingListener& );
	void IFileLoggingListener(IFileLoggingListener* );
	void ~IFileLoggingListener(IFileLoggingListener* );
	/* ../public/tier2/tier2_logging.h:23 */
	virtual void Log(IFileLoggingListener* , const LoggingContext_t* , const char* );
	/* ../public/tier2/tier2_logging.h:32 */
	virtual bool Open(IFileLoggingListener* , const char* , int, const char* );
	/* ../public/tier2/tier2_logging.h:35 */
	virtual void Close(IFileLoggingListener* );
	void IFileLoggingListener(class IFileLoggingListener *, class IFileLoggingListener &); /* linkage=_ZN20IFileLoggingListenerC4EOS_ */
	void IFileLoggingListener(class IFileLoggingListener *, const class IFileLoggingListener  &); /* linkage=_ZN20IFileLoggingListenerC4ERKS_ */
	void IFileLoggingListener(class IFileLoggingListener *); /* linkage=_ZN20IFileLoggingListenerC4Ev */
	void ~IFileLoggingListener(class IFileLoggingListener *); /* linkage=_ZN20IFileLoggingListenerD4Ev */
	virtual void Log(class IFileLoggingListener *, const class LoggingContext_t  *, const char  *); /* linkage=_ZN20IFileLoggingListener3LogEPK16LoggingContext_tPKc */
	virtual bool Open(class IFileLoggingListener *, const char  *, int, const char  *); /* linkage=_ZN20IFileLoggingListener4OpenEPKciS1_ */
	virtual void Close(class IFileLoggingListener *); /* linkage=_ZN20IFileLoggingListener5CloseEv */
};

// <0682FBDC> ../public/tier2/tier2_logging.h:41
// member functions: 12
// member variables: 4
// vtable entries: 3
// class size: 32
class CFileLoggingListener : public IFileLoggingListener {
public:
	/* class IFileLoggingListener <ancestor>; */ /* 0 8 */
	void CFileLoggingListener(CFileLoggingListener* , const CFileLoggingListener& );
	/* tier2/tier2_logging.cpp:12 */
	void CFileLoggingListener(CFileLoggingListener* );
	/* tier2/tier2_logging.cpp:19 */
	void ~CFileLoggingListener(CFileLoggingListener* );
	/* tier2/tier2_logging.cpp:58 */
	virtual void Log(CFileLoggingListener* , const LoggingContext_t* , const char* );
	/* tier2/tier2_logging.cpp:24 */
	virtual bool Open(CFileLoggingListener* , const char* , int, const char* );
	/* tier2/tier2_logging.cpp:47 */
	virtual void Close(CFileLoggingListener* );
private:
	int m_nFlags; /* 8 4 */
	CThreadedLogger * m_pThreadedLogger; /* 16 8 */
	bool m_bAtStartOfLine; /* 24 1 */
	void CFileLoggingListener(class CFileLoggingListener *, const class CFileLoggingListener  &); /* linkage=_ZN20CFileLoggingListenerC4ERKS_ */
	void CFileLoggingListener(class CFileLoggingListener *); /* linkage=_ZN20CFileLoggingListenerC4Ev */
	void ~CFileLoggingListener(class CFileLoggingListener *); /* linkage=_ZN20CFileLoggingListenerD4Ev */
	virtual void Log(class CFileLoggingListener *, const class LoggingContext_t  *, const char  *); /* linkage=_ZN20CFileLoggingListener3LogEPK16LoggingContext_tPKc */
	virtual bool Open(class CFileLoggingListener *, const char  *, int, const char  *); /* linkage=_ZN20CFileLoggingListener4OpenEPKciS1_ */
	/* <6835755> tier2/tier2_logging.cpp:47 */
	virtual void Close(class CFileLoggingListener *); /* linkage=_ZN20CFileLoggingListener5CloseEv */
};

// <007CDE0E> ../public/tier2/tier2_logging.h:44
void CFileLoggingListener::CFileLoggingListener()
{
} /* size: 0 */

// <032F91E2> ../public/tier2/tier2_logging.h:45
void CFileLoggingListener::~CFileLoggingListener()
{
} /* size: 0 */

// <0682FA40> ../public/tier2/tier2_logging.h:62
// member function: 1
// member variable: 1
// vtable entry: 1
// class size: 8
class CHtmlFormattedLoggingListener : public ILoggingListener {
public:
	/* class ILoggingListener <ancestor>; */ /* 0 8 */
private:
	/* tier2/tier2_logging.cpp:118 */
	virtual void Log(CHtmlFormattedLoggingListener* , const LoggingContext_t* , const char* );
};

