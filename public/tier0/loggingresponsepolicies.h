
//
// public/tier0/loggingresponsepolicies.h
//
//	referenced by: libtier0.so
//
//	functions: 5
//	class: 1
//

// <0028BD2C> ../public/tier0/loggingresponsepolicies.h:16
void CDefaultLoggingResponsePolicy::CDefaultLoggingResponsePolicy()
{
} /* size: 0 */

// <0028BD10> ../public/tier0/loggingresponsepolicies.h:16
inline void CDefaultLoggingResponsePolicy::CDefaultLoggingResponsePolicy()
{
} /* size: 0 */

// <0027E870> ../public/tier0/loggingresponsepolicies.h:16
// member functions: 10
// member variable: 1
// vtable entry: 1
// class size: 8
class CDefaultLoggingResponsePolicy : public ILoggingResponsePolicy {
public:
	/* class ILoggingResponsePolicy <ancestor>; */ /* 0 8 */
	void ~CDefaultLoggingResponsePolicy(CDefaultLoggingResponsePolicy* );
	void CDefaultLoggingResponsePolicy(CDefaultLoggingResponsePolicy* , CDefaultLoggingResponsePolicy& );
	void CDefaultLoggingResponsePolicy(CDefaultLoggingResponsePolicy* , const CDefaultLoggingResponsePolicy& );
	void CDefaultLoggingResponsePolicy(CDefaultLoggingResponsePolicy* );
	/* ../public/tier0/loggingresponsepolicies.h:19 */
	virtual LoggingResponse_t OnLog(CDefaultLoggingResponsePolicy* , const LoggingContext_t* );
	void ~CDefaultLoggingResponsePolicy(class CDefaultLoggingResponsePolicy *); /* linkage=_ZN29CDefaultLoggingResponsePolicyD4Ev */
	void CDefaultLoggingResponsePolicy(class CDefaultLoggingResponsePolicy *, class CDefaultLoggingResponsePolicy &); /* linkage=_ZN29CDefaultLoggingResponsePolicyC4EOS_ */
	void CDefaultLoggingResponsePolicy(class CDefaultLoggingResponsePolicy *, const class CDefaultLoggingResponsePolicy  &); /* linkage=_ZN29CDefaultLoggingResponsePolicyC4ERKS_ */
	void CDefaultLoggingResponsePolicy(class CDefaultLoggingResponsePolicy *); /* linkage=_ZN29CDefaultLoggingResponsePolicyC4Ev */
	virtual enum LoggingResponse_t OnLog(class CDefaultLoggingResponsePolicy *, const class LoggingContext_t  *); /* linkage=_ZN29CDefaultLoggingResponsePolicy5OnLogEPK16LoggingContext_t */
};

// <0028C40C> ../public/tier0/loggingresponsepolicies.h:19
void CDefaultLoggingResponsePolicy::OnLog(const LoggingContext_t* pContext)
{
} /* size: 78 */

// <0028C3E8> ../public/tier0/loggingresponsepolicies.h:42
void CNonFatalLoggingResponsePolicy::OnLog(const LoggingContext_t* pContext)
{
} /* size: 0 */

// <0028C383> ../public/tier0/loggingresponsepolicies.h:61
void CFatalAssertLoggingResponsePolicy::OnLog(const LoggingContext_t* pContext)
{
} /* size: 0 */

