
//
// public/tier0/logginglisteners.h
//
//	referenced by: libengine2.so
//				   libtier0.so
//
//	functions: 7
//	classes: 4
//

// <0462FC84> ../public/tier0/logginglisteners.h:26
// member functions: 10
// member variables: 3
// vtable entry: 1
// class size: 16
class CSimpleLoggingListener : public ILoggingListener {
public:
	/* class ILoggingListener <ancestor>; */ /* 0 8 */
	void ~CSimpleLoggingListener(CSimpleLoggingListener* );
	void CSimpleLoggingListener(CSimpleLoggingListener* , CSimpleLoggingListener& );
	void CSimpleLoggingListener(CSimpleLoggingListener* , const CSimpleLoggingListener& );
	/* ../public/tier0/logginglisteners.h:29 */
	void CSimpleLoggingListener(CSimpleLoggingListener* , bool, bool);
	/* ../public/tier0/logginglisteners.h:35 */
	virtual void Log(CSimpleLoggingListener* , const LoggingContext_t* , const char* );
	bool m_bQuietPrintf; /* 8 1 */
	bool m_bQuietDebugger; /* 9 1 */
	void ~CSimpleLoggingListener(class CSimpleLoggingListener *); /* linkage=_ZN22CSimpleLoggingListenerD4Ev */
	void CSimpleLoggingListener(class CSimpleLoggingListener *, class CSimpleLoggingListener &); /* linkage=_ZN22CSimpleLoggingListenerC4EOS_ */
	void CSimpleLoggingListener(class CSimpleLoggingListener *, const class CSimpleLoggingListener  &); /* linkage=_ZN22CSimpleLoggingListenerC4ERKS_ */
	void CSimpleLoggingListener(class CSimpleLoggingListener *, bool, bool); /* linkage=_ZN22CSimpleLoggingListenerC4Ebb */
	virtual void Log(class CSimpleLoggingListener *, const class LoggingContext_t  *, const char  *); /* linkage=_ZN22CSimpleLoggingListener3LogEPK16LoggingContext_tPKc */
};

// <0464BC38> ../public/tier0/logginglisteners.h:29
void CSimpleLoggingListener::CSimpleLoggingListener(bool bQuietPrintf, bool bQuietDebugger)
{
} /* size: 0 */

// <0464BC07> ../public/tier0/logginglisteners.h:29
inline void CSimpleLoggingListener::CSimpleLoggingListener(bool bQuietPrintf, bool bQuietDebugger)
{
} /* size: 0 */

// <0028C6DD> ../public/tier0/logginglisteners.h:35
void CSimpleLoggingListener::Log(const LoggingContext_t* pContext, const char* pMessage)
{
} /* size: 0 */

// <000F088F> ../public/tier0/logginglisteners.h:60
// member functions: 7
// member variables: 3
// vtable entry: 1
// class size: 32
class CColorizedLoggingListener : public CSimpleLoggingListener {
public:
	/* class CSimpleLoggingListener <ancestor>; */ /* 0 16 */
	/* ../public/tier0/logginglisteners.h:63 */
	void CColorizedLoggingListener(CColorizedLoggingListener* , bool, bool);
	/* ../public/tier0/logginglisteners.h:68 */
	virtual void Log(CColorizedLoggingListener* , const LoggingContext_t* , const char* );
	Win32ConsoleColorContext_t m_ColorContext; /* 12 12 */
	LoggingSeverity_t m_PrevSeverity; /* 24 4 */
	void ~CColorizedLoggingListener(class CColorizedLoggingListener *); /* linkage=_ZN25CColorizedLoggingListenerD4Ev */
	void CColorizedLoggingListener(class CColorizedLoggingListener *, class CColorizedLoggingListener &); /* linkage=_ZN25CColorizedLoggingListenerC4EOS_ */
	void CColorizedLoggingListener(class CColorizedLoggingListener *, const class CColorizedLoggingListener  &); /* linkage=_ZN25CColorizedLoggingListenerC4ERKS_ */
	void CColorizedLoggingListener(class CColorizedLoggingListener *, bool, bool); /* linkage=_ZN25CColorizedLoggingListenerC4Ebb */
	virtual void Log(class CColorizedLoggingListener *, const class LoggingContext_t  *, const char  *); /* linkage=_ZN25CColorizedLoggingListener3LogEPK16LoggingContext_tPKc */
};

// <0027E930> ../public/tier0/logginglisteners.h:60
// member functions: 10
// member variables: 3
// vtable entry: 1
// class size: 32
class CColorizedLoggingListener : public CSimpleLoggingListener {
public:
	/* class CSimpleLoggingListener <ancestor>; */ /* 0 16 */
	void ~CColorizedLoggingListener(CColorizedLoggingListener* );
	void CColorizedLoggingListener(CColorizedLoggingListener* , CColorizedLoggingListener& );
	void CColorizedLoggingListener(CColorizedLoggingListener* , const CColorizedLoggingListener& );
	/* ../public/tier0/logginglisteners.h:63 */
	void CColorizedLoggingListener(CColorizedLoggingListener* , bool, bool);
	/* ../public/tier0/logginglisteners.h:68 */
	virtual void Log(CColorizedLoggingListener* , const LoggingContext_t* , const char* );
	Win32ConsoleColorContext_t m_ColorContext; /* 12 12 */
	LoggingSeverity_t m_PrevSeverity; /* 24 4 */
	void ~CColorizedLoggingListener(class CColorizedLoggingListener *); /* linkage=_ZN25CColorizedLoggingListenerD4Ev */
	void CColorizedLoggingListener(class CColorizedLoggingListener *, class CColorizedLoggingListener &); /* linkage=_ZN25CColorizedLoggingListenerC4EOS_ */
	void CColorizedLoggingListener(class CColorizedLoggingListener *, const class CColorizedLoggingListener  &); /* linkage=_ZN25CColorizedLoggingListenerC4ERKS_ */
	void CColorizedLoggingListener(class CColorizedLoggingListener *, bool, bool); /* linkage=_ZN25CColorizedLoggingListenerC4Ebb */
	virtual void Log(class CColorizedLoggingListener *, const class LoggingContext_t  *, const char  *); /* linkage=_ZN25CColorizedLoggingListener3LogEPK16LoggingContext_tPKc */
};

// <0028C6BC> ../public/tier0/logginglisteners.h:63
void CColorizedLoggingListener::CColorizedLoggingListener(bool bQuietPrintf, bool bQuietDebugger)
{
} /* size: 0 */

// <0028C68B> ../public/tier0/logginglisteners.h:63
inline void CColorizedLoggingListener::CColorizedLoggingListener(bool bQuietPrintf, bool bQuietDebugger)
{
} /* size: 0 */

// <0028C4D6> ../public/tier0/logginglisteners.h:68
// variables: 2
// function calls: 2
void CColorizedLoggingListener::Log(const LoggingContext_t* pContext, const char* pMessage)
{
	{
		const bool  bSeverityHasChanged; // 72
		int nPrevColor; // 82
		Color::operator==(
				const Color& rhs);  // 142
		Color::operator!=(
				const Color& rhs);  // 84
	}
} /* size: 260 */

// <0462FBAB> ../public/tier0/logginglisteners.h:115
// member functions: 6
// member variable: 1
// vtable entry: 1
// class size: 8
class CSimpleWindowsLoggingListener : public ILoggingListener {
public:
	/* class ILoggingListener <ancestor>; */ /* 0 8 */
	void ~CSimpleWindowsLoggingListener(CSimpleWindowsLoggingListener* );
	void CSimpleWindowsLoggingListener(CSimpleWindowsLoggingListener* , CSimpleWindowsLoggingListener& );
	void CSimpleWindowsLoggingListener(CSimpleWindowsLoggingListener* , const CSimpleWindowsLoggingListener& );
	void CSimpleWindowsLoggingListener(CSimpleWindowsLoggingListener* );
	/* ../public/tier0/logginglisteners.h:118 */
	virtual void Log(CSimpleWindowsLoggingListener* , const LoggingContext_t* , const char* );
	virtual void Log(class CSimpleWindowsLoggingListener *, const class LoggingContext_t  *, const char  *); /* linkage=_ZN29CSimpleWindowsLoggingListener3LogEPK16LoggingContext_tPKc */
};

// <0028C4A6> ../public/tier0/logginglisteners.h:118
void CSimpleWindowsLoggingListener::Log(const LoggingContext_t* pContext, const char* pMessage)
{
} /* size: 0 */

