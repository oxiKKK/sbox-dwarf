
//
// sbox/engineglue.h
//
//	referenced by: libengine2.so
//
//	class: 1
//

// <011DEDC3> sbox/engineglue.h:8
// member functions: 19
// class size: 1
class EngineGlue {
	/* sbox/engineglue.h:15 */
	void SetResourceData(ResourceHandle_t, void* );
	/* sbox/engineglue.h:20 */
	KeyValues3* JsonToKeyValues3(const char* );
	/* sbox/engineglue.h:21 */
	const char* KeyValues3ToJson(KeyValues3* );
	/* sbox/engineglue.h:22 */
	const char* KeyValuesToJson(const char* );
	/* sbox/engineglue.h:27 */
	KeyValues3* LoadKeyValues3(const char* );
	/* sbox/engineglue.h:32 */
	uint32 GetStringToken(const char* );
	/* sbox/engineglue.h:33 */
	const char* GetStringTokenValue(uint32);
	/* sbox/engineglue.h:34 */
	void SetEngineLoggingVerbose(bool);
	/* sbox/engineglue.h:39 */
	void AddSearchPath(const char* , const char* , bool);
	/* sbox/engineglue.h:40 */
	bool RemoveSearchPath(const char* , const char* );
	/* sbox/engineglue.h:41 */
	bool MountVPK(const char* );
	/* sbox/engineglue.h:42 */
	bool UnmountVPK(const char* );
	/* sbox/engineglue.h:43 */
	bool IsVPKMounted(const char* );
	/* sbox/engineglue.h:48 */
	uint64 ApproximateProcessMemoryUsage(void);
	/* sbox/engineglue.h:53 */
	const char* ReadCompiledResourceFileJson(const void* );
	/* sbox/engineglue.h:54 */
	const char* ReadCompiledResourceFileJsonFromFilesystem(const char* );
	/* sbox/engineglue.h:60 */
	void RequestWebAuthTicket(void);
	/* sbox/engineglue.h:61 */
	void CancelWebAuthTicket(void);
	/* sbox/engineglue.h:62 */
	const char* GetWebAuthTicket(void);
};

