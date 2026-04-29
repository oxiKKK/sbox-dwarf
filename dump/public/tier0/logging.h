
//
// public/tier0/logging.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libfilesystem_stdio.so
//				   liblocalize.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//				   libschemasystem.so
//				   libtier0.so
//				   libvfx_vulkan.so
//
//	functions: 30
//	structs: 4
//

// <0028BD92> ../public/tier0/logging.h:101
void LoggingChannel_t::LoggingChannel_t()
{
} /* size: 0 */

// <0028BD76> ../public/tier0/logging.h:101
inline void LoggingChannel_t::LoggingChannel_t()
{
} /* size: 0 */

// <0006CACD> ../public/tier0/logging.h:101
// member functions: 3
// member variables: 8
// struct size: 60
struct LoggingChannel_t {
	/* ../public/tier0/logging.h:103 */
	bool IsEnabled(const LoggingChannel_t* , LoggingVerbosity_t);
	/* ../public/tier0/logging.h:105 */
	void SetVerbosity(LoggingChannel_t* , LoggingVerbosity_t);
	/* ../public/tier0/logging.h:107 */
	void SetFlags(LoggingChannel_t* , LoggingChannelFlags_t);
	LoggingChannelID_t m_ID; /* 0 4 */
	LoggingChannelFlags_t m_DefaultFlags; /* 4 4 */
	LoggingChannelFlags_t m_Flags; /* 8 4 */
	LoggingVerbosity_t m_DefaultVerbosity; /* 12 4 */
	LoggingVerbosity_t m_Verbosity; /* 16 4 */
	Color m_SpewColor; /* 20 4 */
	char m_Name[32]; /* 24 32 */
	uint8 m_nModifiedFields; /* 56 1 */
};

// <0027CF6F> ../public/tier0/logging.h:101
// member functions: 5
// member variables: 8
// struct size: 60
struct LoggingChannel_t {
	/* ../public/tier0/logging.h:118 */
	enum ModificationFlags_t {
		MODIFIED_FLAGS = 1,
		MODIFIED_VERBOSITY = 2,
		MODIFIED_SPEWCOLOR = 4,
	} __attribute__((__packed__));
	/* ../public/tier0/logging.h:103 */
	bool IsEnabled(const LoggingChannel_t* , LoggingVerbosity_t);
	/* ../public/tier0/logging.h:105 */
	void SetVerbosity(LoggingChannel_t* , LoggingVerbosity_t);
	/* ../public/tier0/logging.h:107 */
	void SetFlags(LoggingChannel_t* , LoggingChannelFlags_t);
	LoggingChannelID_t m_ID; /* 0 4 */
	LoggingChannelFlags_t m_DefaultFlags; /* 4 4 */
	LoggingChannelFlags_t m_Flags; /* 8 4 */
	LoggingVerbosity_t m_DefaultVerbosity; /* 12 4 */
	LoggingVerbosity_t m_Verbosity; /* 16 4 */
	Color m_SpewColor; /* 20 4 */
	char m_Name[32]; /* 24 32 */
	uint8 m_nModifiedFields; /* 56 1 */
	void LoggingChannel_t(LoggingChannel_t* );
};

// <0028C31D> ../public/tier0/logging.h:103
inline void LoggingChannel_t::IsEnabled(LoggingVerbosity_t verbosity)
{
} /* size: 0 */

// <0028C2F8> ../public/tier0/logging.h:105
inline void LoggingChannel_t::SetVerbosity(LoggingVerbosity_t verbosity)
{
} /* size: 0 */

// <0028C2D3> ../public/tier0/logging.h:107
inline void LoggingChannel_t::SetFlags(LoggingChannelFlags_t flags)
{
} /* size: 0 */

// <0000326E> ../public/tier0/logging.h:127
// member function: 1
// member variables: 3
// struct size: 24
struct LeafCodeInfo_t {
	/* ../public/tier0/logging.h:129 */
	void LeafCodeInfo_t(LeafCodeInfo_t* , const char* , int, const char* );
	const char * m_szFile; /* 0 8 */
	int m_nLine; /* 8 4 */
	const char * m_szFunction; /* 16 8 */
};

// <0000326E> ../../public/tier0/logging.h:127
// member function: 1
// member variables: 3
// struct size: 24
struct LeafCodeInfo_t {
	/* ../../public/tier0/logging.h:129 */
	void LeafCodeInfo_t(LeafCodeInfo_t* , const char* , int, const char* );
	const char * m_szFile; /* 0 8 */
	int m_nLine; /* 8 4 */
	const char * m_szFunction; /* 16 8 */
};

// <06AB85DE> ../public/tier0/logging.h:129
void LeafCodeInfo_t::LeafCodeInfo_t(const char* szFile, int nLine, const char* szFunction)
{
} /* size: 0 */

// <06AB85A1> ../public/tier0/logging.h:129
inline void LeafCodeInfo_t::LeafCodeInfo_t(const char* szFile, int nLine, const char* szFunction)
{
} /* size: 0 */

// <0000416E> ../public/tier0/logging.h:216
LoggingChannelID_t LoggingSystem_RegisterLoggingChannel(const char *, int, LoggingVerbosity_t, Color)
{
} /* size: 0 */

// <00128901> ../public/tier0/logging.h:218
void LoggingSystem_RegisterLoggingListener(ILoggingListener *)
{
} /* size: 0 */

// <046362B3> ../public/tier0/logging.h:220
void LoggingSystem_ResetCurrentLoggingState(void)
{
} /* size: 0 */

// <00128916> ../public/tier0/logging.h:224
void LoggingSystem_PushLoggingState(bool, bool)
{
} /* size: 0 */

// <001288EC> ../public/tier0/logging.h:225
void LoggingSystem_PopLoggingState(bool)
{
} /* size: 0 */

// <046363C0> ../public/tier0/logging.h:226
int LoggingSystem_CurrentStateIndex(bool)
{
} /* size: 0 */

// <00021129> ../public/tier0/logging.h:229
LoggingChannelID_t LoggingSystem_FindChannel(const char *)
{
} /* size: 0 */

// <001284E9> ../public/tier0/logging.h:230
int LoggingSystem_GetChannelCount(void)
{
} /* size: 0 */

// <000C8C8E> ../public/tier0/logging.h:231
LoggingChannelID_t LoggingSystem_GetFirstChannelID(void)
{
} /* size: 0 */

// <000C8C5E> ../public/tier0/logging.h:233
LoggingChannelID_t LoggingSystem_GetNextChannelID(LoggingChannelID_t)
{
} /* size: 0 */

// <00128930> ../public/tier0/logging.h:234
const LoggingChannel_t* LoggingSystem_GetChannel(LoggingChannelID_t)
{
} /* size: 0 */

// <0000410D> ../public/tier0/logging.h:238
bool LoggingSystem_IsChannelEnabled(LoggingChannelID_t, LoggingSeverity_t)
{
} /* size: 0 */

// <023A5D8D> ../public/tier0/logging.h:240
LoggingVerbosity_t LoggingSystem_GetChannelVerbosity(LoggingChannelID_t)
{
} /* size: 0 */

// <01711AE2> ../public/tier0/logging.h:241
void LoggingSystem_SetChannelVerbosity(LoggingChannelID_t, LoggingVerbosity_t)
{
} /* size: 0 */

// <00021111> ../public/tier0/logging.h:245
int32 LoggingSystem_GetChannelColor(LoggingChannelID_t)
{
} /* size: 0 */

// <000C8BC6> ../public/tier0/logging.h:246
void LoggingSystem_SetChannelColor(LoggingChannelID_t, int)
{
} /* size: 0 */

// <000C8B8A> ../public/tier0/logging.h:248
LoggingChannelFlags_t LoggingSystem_GetChannelFlags(LoggingChannelID_t)
{
} /* size: 0 */

// <000C8B70> ../public/tier0/logging.h:249
void LoggingSystem_SetChannelFlags(LoggingChannelID_t, LoggingChannelFlags_t)
{
} /* size: 0 */

// <000040DA> ../public/tier0/logging.h:262
LoggingResponse_t LoggingSystem_Log(LoggingChannelID_t, LoggingSeverity_t, const LeafCodeInfo_t &, const char *, ...)
{
} /* size: 0 */

// <00201259> ../public/tier0/logging.h:268
LoggingResponse_t LoggingSystem_LogDirect(LoggingChannelID_t, LoggingSeverity_t, const char *)
{
} /* size: 0 */

// <00024336> ../public/tier0/logging.h:277
LoggingResponse_t LoggingSystem_LogAssert(const char *, ...)
{
} /* size: 0 */

// <00128164> ../public/tier0/logging.h:280
void LoggingSystem_RegisterBackdoorLoggingListener(ILoggingListener *)
{
} /* size: 0 */

// <00128158> ../public/tier0/logging.h:281
void LoggingSystem_ResetBackdoorLoggingState(void)
{
} /* size: 0 */

