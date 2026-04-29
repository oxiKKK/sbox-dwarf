
//
// public/tier2/tier2_loggingmetahelpers.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmaterialsystem2.so
//				   libschemasystem.so
//
//	functions: 13
//	classes: 3
//

// <00EADA14> ../public/tier2/tier2_loggingmetahelpers.h:167
// member functions: 6
// member variable: 1
// class size: 40
class CLoggingMetaCommandLink : public LoggingMetaData_t {
public:
	/* struct LoggingMetaData_t <ancestor>; */ /* 0 40 */
	/* ../public/tier2/tier2_loggingmetahelpers.h:170 */
	void CLoggingMetaCommandLink(CLoggingMetaCommandLink* , const char* , LoggingVerbosity_t, CommandLinkFlags_e);
	/* ../public/tier2/tier2_loggingmetahelpers.h:185 */
	void ~CLoggingMetaCommandLink(CLoggingMetaCommandLink* );
	/* ../public/tier2/tier2_loggingmetahelpers.h:191 */
	const CLoggingMetaCommandLink* operator const CLoggingMetaCommandLink*(const CLoggingMetaCommandLink* );
	void CLoggingMetaCommandLink(class CLoggingMetaCommandLink *, const char  *, enum LoggingVerbosity_t, enum CommandLinkFlags_e); /* linkage=_ZN23CLoggingMetaCommandLinkC4EPKc18LoggingVerbosity_t18CommandLinkFlags_e */
	void ~CLoggingMetaCommandLink(class CLoggingMetaCommandLink *); /* linkage=_ZN23CLoggingMetaCommandLinkD4Ev */
	const class CLoggingMetaCommandLink  * operator const CLoggingMetaCommandLink*(const class CLoggingMetaCommandLink  *); /* linkage=_ZNK23CLoggingMetaCommandLinkcvPKS_Ev */
};

// <03624451> ../public/tier2/tier2_loggingmetahelpers.h:170
// variable: 1
void CLoggingMetaCommandLink::CLoggingMetaCommandLink(const char* pLinkCommand, LoggingVerbosity_t verbosity, CommandLinkFlags_e nFlags)
{
	{
		int nLinkCommandLen; // 174
	}
} /* size: 0 */

// <03624406> ../public/tier2/tier2_loggingmetahelpers.h:170
// variable: 1
inline void CLoggingMetaCommandLink::CLoggingMetaCommandLink(const char* pLinkCommand, LoggingVerbosity_t verbosity, CommandLinkFlags_e nFlags)
{
	{
		int nLinkCommandLen; // 174
	}
} /* size: 0 */

// <036243EF> ../public/tier2/tier2_loggingmetahelpers.h:185
void CLoggingMetaCommandLink::~CLoggingMetaCommandLink()
{
} /* size: 0 */

// <036243D6> ../public/tier2/tier2_loggingmetahelpers.h:185
inline void CLoggingMetaCommandLink::~CLoggingMetaCommandLink()
{
} /* size: 0 */

// <036243BD> ../public/tier2/tier2_loggingmetahelpers.h:191
inline void operator const CLoggingMetaCommandLink::CLoggingMetaCommandLink*()
{
} /* size: 0 */

// <01088875> ../public/tier2/tier2_loggingmetahelpers.h:194
void CLoggingMetaCommandLinkOpenAsset::~CLoggingMetaCommandLinkOpenAsset()
{
} /* size: 0 */

// <01088859> ../public/tier2/tier2_loggingmetahelpers.h:194
inline void CLoggingMetaCommandLinkOpenAsset::~CLoggingMetaCommandLinkOpenAsset()
{
} /* size: 0 */

// <00FFC75E> ../public/tier2/tier2_loggingmetahelpers.h:194
// member functions: 4
// member variable: 1
// class size: 40
class CLoggingMetaCommandLinkOpenAsset : public CLoggingMetaCommandLink {
public:
	/* class CLoggingMetaCommandLink <ancestor>; */ /* 0 40 */
	/* ../public/tier2/tier2_loggingmetahelpers.h:197 */
	void CLoggingMetaCommandLinkOpenAsset(CLoggingMetaCommandLinkOpenAsset* , const char* );
	void ~CLoggingMetaCommandLinkOpenAsset(CLoggingMetaCommandLinkOpenAsset* );
	void CLoggingMetaCommandLinkOpenAsset(class CLoggingMetaCommandLinkOpenAsset *, const char  *); /* linkage=_ZN32CLoggingMetaCommandLinkOpenAssetC4EPKc */
	void ~CLoggingMetaCommandLinkOpenAsset(class CLoggingMetaCommandLinkOpenAsset *); /* linkage=_ZN32CLoggingMetaCommandLinkOpenAssetD4Ev */
};

// <0108D623> ../public/tier2/tier2_loggingmetahelpers.h:197
void CLoggingMetaCommandLinkOpenAsset::CLoggingMetaCommandLinkOpenAsset(const char* pAssetName)
{
} /* size: 0 */

// <0108D5FE> ../public/tier2/tier2_loggingmetahelpers.h:197
inline void CLoggingMetaCommandLinkOpenAsset::CLoggingMetaCommandLinkOpenAsset(const char* pAssetName)
{
} /* size: 0 */

// <036242E8> ../public/tier2/tier2_loggingmetahelpers.h:203
void CLoggingMetaCommandLinkNoHistory::~CLoggingMetaCommandLinkNoHistory()
{
} /* size: 0 */

// <036242CB> ../public/tier2/tier2_loggingmetahelpers.h:203
inline void CLoggingMetaCommandLinkNoHistory::~CLoggingMetaCommandLinkNoHistory()
{
} /* size: 0 */

// <023122FB> ../public/tier2/tier2_loggingmetahelpers.h:203
// member functions: 6
// member variable: 1
// class size: 40
class CLoggingMetaCommandLinkNoHistory : public CLoggingMetaCommandLink {
public:
	/* class CLoggingMetaCommandLink <ancestor>; */ /* 0 40 */
	/* ../public/tier2/tier2_loggingmetahelpers.h:206 */
	void CLoggingMetaCommandLinkNoHistory(CLoggingMetaCommandLinkNoHistory* , const char* , LoggingVerbosity_t);
	/* ../public/tier2/tier2_loggingmetahelpers.h:211 */
	const CLoggingMetaCommandLinkNoHistory* operator const CLoggingMetaCommandLinkNoHistory*(const CLoggingMetaCommandLinkNoHistory* );
	void ~CLoggingMetaCommandLinkNoHistory(CLoggingMetaCommandLinkNoHistory* );
	void CLoggingMetaCommandLinkNoHistory(class CLoggingMetaCommandLinkNoHistory *, const char  *, enum LoggingVerbosity_t); /* linkage=_ZN32CLoggingMetaCommandLinkNoHistoryC4EPKc18LoggingVerbosity_t */
	const class CLoggingMetaCommandLinkNoHistory  * operator const CLoggingMetaCommandLinkNoHistory*(const class CLoggingMetaCommandLinkNoHistory  *); /* linkage=_ZNK32CLoggingMetaCommandLinkNoHistorycvPKS_Ev */
	void ~CLoggingMetaCommandLinkNoHistory(class CLoggingMetaCommandLinkNoHistory *); /* linkage=_ZN32CLoggingMetaCommandLinkNoHistoryD4Ev */
};

// <0362439C> ../public/tier2/tier2_loggingmetahelpers.h:206
void CLoggingMetaCommandLinkNoHistory::CLoggingMetaCommandLinkNoHistory(const char* pLinkCommand, LoggingVerbosity_t verbosity)
{
} /* size: 0 */

// <0362436B> ../public/tier2/tier2_loggingmetahelpers.h:206
inline void CLoggingMetaCommandLinkNoHistory::CLoggingMetaCommandLinkNoHistory(const char* pLinkCommand, LoggingVerbosity_t verbosity)
{
} /* size: 0 */

