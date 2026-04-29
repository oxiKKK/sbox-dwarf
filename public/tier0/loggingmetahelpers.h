
//
// public/tier0/loggingmetahelpers.h
//
//	referenced by: libengine2.so
//
//	functions: 12
//	classes: 3
//	struct: 1
//

// <023A2B64> ../public/tier0/loggingmetahelpers.h:42
// member functions: 4
// member variables: 2
// class size: 2,088
class CLoggingMetaTextN<2048> : public LoggingMetaData_t {
public:
	/* struct LoggingMetaData_t <ancestor>; */ /* 0 40 */
	/* ../public/tier0/loggingmetahelpers.h:45 */
	void CLoggingMetaTextN(CLoggingMetaTextN<2048>* , const char* , const char* , ...);
	/* ../public/tier0/loggingmetahelpers.h:62 */
	const LoggingMetaData_t* operator const LoggingMetaData_t*(const CLoggingMetaTextN<2048>* );
protected:
	char m_TextBuffer[2048]; /* 33 2048 */
	void CLoggingMetaTextN(class CLoggingMetaTextN<2048> *, const char  *, const char  *, ...); /* linkage=_ZN17CLoggingMetaTextNILi2048EEC4EPKcS2_z */
	const class LoggingMetaData_t  * operator const LoggingMetaData_t*(const class CLoggingMetaTextN<2048>  *); /* linkage=_ZNK17CLoggingMetaTextNILi2048EEcvPK17LoggingMetaData_tEv */
};

// <023AA843> ../public/tier0/loggingmetahelpers.h:45
// variables: 6
// function calls: 3
void CLoggingMetaTextN<2048>::CLoggingMetaTextN(const char* szShortDescription, const char* pMsgFormat, ...)
{
	{
		va_list args; // 48
		int nDescriptionLength; // 51
		{
			int nTextLength; // 55
		}
	}
	LoggingMetaData_t::LoggingMetaData_t(
				uint64 TypeID,
				uint8* pData,
				size_t nDataSize,
				LoggingVerbosity_t verbosity);  // 46
	{
		va_list args; // 48
		int nDescriptionLength; // 51
		V_strlen(const char* str); // 51
		{
			int nTextLength; // 55
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 54
		}
	}
} /* size: 386, inline expansions: 1 (37 bytes) */

// <023AA7E9> ../public/tier0/loggingmetahelpers.h:45
// variables: 3
inline void CLoggingMetaTextN<2048>::CLoggingMetaTextN(const char* szShortDescription, const char* pMsgFormat, ...)
{
	{
		va_list args; // 48
		int nDescriptionLength; // 51
		{
			int nTextLength; // 55
		}
	}
} /* size: 0 */

// <023A2BE6> ../public/tier0/loggingmetahelpers.h:184
// member functions: 10
// member variables: 3
// class size: 24
class CLogging_MetaDataAllocator {
	/* ../public/tier0/loggingmetahelpers.h:187 */
	void CLogging_MetaDataAllocator(CLogging_MetaDataAllocator* , LoggingVerbosity_t);
	/* ../public/tier0/loggingmetahelpers.h:190 */
	uint8* Allocate(CLogging_MetaDataAllocator* , uint64, size_t, uint, LoggingVerbosity_t);
	/* ../public/tier0/loggingmetahelpers.h:215 */
	void Duplicate(CLogging_MetaDataAllocator* , LoggingMetaData_t* , LoggingVerbosity_t);
	/* ../public/tier0/loggingmetahelpers.h:239 */
	void ReleaseEarly(CLogging_MetaDataAllocator* , uint8* );
	/* ../public/tier0/loggingmetahelpers.h:270 */
	void ~CLogging_MetaDataAllocator(CLogging_MetaDataAllocator* );
	LoggingVerbosity_t m_DefaultVerbosity; /* 0 4 */
protected:
	LoggingMetaData_t * m_pAllocatedMetaDataHead; /* 8 8 */
	LoggingMetaData_t * m_pAllocatedMetaDataTail; /* 16 8 */
	void CLogging_MetaDataAllocator(class CLogging_MetaDataAllocator *, enum LoggingVerbosity_t); /* linkage=_ZN26CLogging_MetaDataAllocatorC4E18LoggingVerbosity_t */
	uint8 * Allocate(class CLogging_MetaDataAllocator *, uint64, size_t, uint, enum LoggingVerbosity_t); /* linkage=_ZN26CLogging_MetaDataAllocator8AllocateEymj18LoggingVerbosity_t */
	void Duplicate(class CLogging_MetaDataAllocator *, class LoggingMetaData_t *, enum LoggingVerbosity_t); /* linkage=_ZN26CLogging_MetaDataAllocator9DuplicateEP17LoggingMetaData_t18LoggingVerbosity_t */
	void ReleaseEarly(class CLogging_MetaDataAllocator *, uint8 *); /* linkage=_ZN26CLogging_MetaDataAllocator12ReleaseEarlyEPh */
	void ~CLogging_MetaDataAllocator(class CLogging_MetaDataAllocator *); /* linkage=_ZN26CLogging_MetaDataAllocatorD4Ev */
};

// <023B28AD> ../public/tier0/loggingmetahelpers.h:187
void CLogging_MetaDataAllocator::CLogging_MetaDataAllocator(LoggingVerbosity_t defaultVerbosity)
{
} /* size: 0 */

// <023B2888> ../public/tier0/loggingmetahelpers.h:187
inline void CLogging_MetaDataAllocator::CLogging_MetaDataAllocator(LoggingVerbosity_t defaultVerbosity)
{
} /* size: 0 */

// <023B281B> ../public/tier0/loggingmetahelpers.h:190
// variables: 3
inline void CLogging_MetaDataAllocator::Allocate(uint64 TypeID, size_t nDataSize, uint nAlignment, LoggingVerbosity_t verbosity)
{
	uintp nAlignmentMinusOne; // 192
	uint8* pAllocated; // 193
	LoggingMetaData_t* pMeta; // 194
} /* size: 0, variables: 3 */

// <023B27D2> ../public/tier0/loggingmetahelpers.h:215
// variables: 2
inline void CLogging_MetaDataAllocator::Duplicate(LoggingMetaData_t* pSource, LoggingVerbosity_t verbosity)
{
	uint8* pAllocated; // 217
	LoggingMetaData_t* pMeta; // 218
} /* size: 0, variables: 2 */

// <023B279E> ../public/tier0/loggingmetahelpers.h:270
// variables: 3
void CLogging_MetaDataAllocator::~CLogging_MetaDataAllocator()
{
	{
		LoggingMetaData_t* pIterate; // 274
		{
			LoggingMetaData_t* pNext; // 277
			bool breakNow; // 280
		}
	}
} /* size: 0 */

// <023B275A> ../public/tier0/loggingmetahelpers.h:270
// variables: 3
inline void CLogging_MetaDataAllocator::~CLogging_MetaDataAllocator()
{
	{
		LoggingMetaData_t* pIterate; // 274
		{
			LoggingMetaData_t* pNext; // 277
			bool breakNow; // 280
		}
	}
} /* size: 0 */

// <023A2CEF> ../public/tier0/loggingmetahelpers.h:352
// member functions: 4
// member variables: 2
// struct size: 16
struct Logging_VarArgsResolver_t {
	/* ../public/tier0/loggingmetahelpers.h:354 */
	void Logging_VarArgsResolver_t(Logging_VarArgsResolver_t* , float);
	/* ../public/tier0/loggingmetahelpers.h:355 */
	void Logging_VarArgsResolver_t(Logging_VarArgsResolver_t* , float, Color& , LoggingMetaData_t* );
	/* ../public/tier0/loggingmetahelpers.h:355 */
	void Logging_VarArgsResolver_t(Logging_VarArgsResolver_t* , float, LoggingMetaData_t* , Color& );
	/* ../public/tier0/loggingmetahelpers.h:357 */
	void Initialize(Logging_VarArgsResolver_t* , const Color* , LoggingMetaData_t* );
	LoggingMetaData_t * m_pMetaData; /* 0 8 */
	const class Color * m_pColor; /* 8 8 */
};

// <023B273E> ../public/tier0/loggingmetahelpers.h:354
void Logging_VarArgsResolver_t::Logging_VarArgsResolver_t(float)
{
} /* size: 0 */

// <023B2720> ../public/tier0/loggingmetahelpers.h:354
inline void Logging_VarArgsResolver_t::Logging_VarArgsResolver_t(float)
{
} /* size: 0 */

// <023B26ED> ../public/tier0/loggingmetahelpers.h:357
inline void Logging_VarArgsResolver_t::Initialize(const Color* pColor, LoggingMetaData_t* pMetaData)
{
} /* size: 0 */

// <023A2DCE> ../public/tier0/loggingmetahelpers.h:415
// member functions: 2
// member variable: 1
// class size: 24
class _CMetaDataAllocatorProtectedAccessor : public CLogging_MetaDataAllocator {
public:
	/* class CLogging_MetaDataAllocator <ancestor>; */ /* 0 24 */
	/* ../public/tier0/loggingmetahelpers.h:418 */
	void Resolve(_CMetaDataAllocatorProtectedAccessor* , LoggingMetaData_t* & );
private:
	/* ../public/tier0/loggingmetahelpers.h:428 */
	void _CMetaDataAllocatorProtectedAccessor(_CMetaDataAllocatorProtectedAccessor* );
};

// <023B26C7> ../public/tier0/loggingmetahelpers.h:418
inline void _CMetaDataAllocatorProtectedAccessor::Resolve(LoggingMetaData_t *& pMetaDataLL)
{
} /* size: 0 */

