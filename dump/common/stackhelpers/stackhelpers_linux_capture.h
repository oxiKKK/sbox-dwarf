
//
// common/stackhelpers/stackhelpers_linux_capture.h
//
//	referenced by: libtier0.so
//
//	function: 1
//	struct: 1
//

// <00411871> ../common/stackhelpers/stackhelpers_linux_capture.h:17
// member functions: 18
// member variable: 1
// struct size: 8
class CCaptureHelper_Linux_NoConstruct {
	/* ../common/stackhelpers/stackhelpers_linux_capture.h:32 */
	struct LoadedModule_t {
		LoadedModule_t * pNext; /* 0 8 */
		char * pPath; /* 8 8 */
		uint64 nBaseAddress; /* 16 8 */
		uint32 nSize; /* 24 4 */
		uint32 nNewSize; /* 28 4 */
		uint64 nNewBaseAddress; /* 32 8 */
		StackTranslation_LoadedModuleInfo_t * pInfo; /* 40 8 */
	};
	/* ../common/stackhelpers/stackhelpers_linux_capture.h:20 */
	void ~CCaptureHelper_Linux_NoConstruct(CCaptureHelper_Linux_NoConstruct* );
	/* ../common/stackhelpers/stackhelpers_linux_capture.h:22 */
	void SetSymbolSearchPath(CCaptureHelper_Linux_NoConstruct* , const char* );
	/* ../common/stackhelpers/stackhelpers_linux_capture.h:24 */
	void VerifyLoadedModuleMappings(CCaptureHelper_Linux_NoConstruct* );
	/* ../common/stackhelpers/stackhelpers_linux_capture.h:26 */
	StackTranslation_LoadedModuleInfo_t* LoadedModule(CCaptureHelper_Linux_NoConstruct* , const char* , PlatModule_t, void* , uint32);
	/* ../common/stackhelpers/stackhelpers_linux_capture.h:27 */
	void UnloadedModule(CCaptureHelper_Linux_NoConstruct* , PlatModule_t);
	/* ../common/stackhelpers/stackhelpers_linux_capture.h:29 */
	void SetLoadingModuleState(CCaptureHelper_Linux_NoConstruct* , bool);
protected:
	LoadedModule_t * m_pLoadedModules; /* 0 8 */
	/* ../common/stackhelpers/stackhelpers_linux_capture.h:48 */
	void UnloadModules(CCaptureHelper_Linux_NoConstruct* );
	/* ../common/stackhelpers/stackhelpers_linux_capture.h:50 */
	bool IsElfHeader(CCaptureHelper_Linux_NoConstruct* , uint64);
	/* ../common/stackhelpers/stackhelpers_linux_capture.h:51 */
	bool FindElfBuildId(CCaptureHelper_Linux_NoConstruct* , uint64, uint8** , uint32* );
	/* ../common/stackhelpers/stackhelpers_linux_capture.h:53 */
	uint64 ParseDec(CCaptureHelper_Linux_NoConstruct* , char** );
	/* ../common/stackhelpers/stackhelpers_linux_capture.h:54 */
	uint64 ParseHex(CCaptureHelper_Linux_NoConstruct* , char** );
	/* ../common/stackhelpers/stackhelpers_linux_capture.h:55 */
	char* ReadProcMaps(CCaptureHelper_Linux_NoConstruct* );
	/* ../common/stackhelpers/stackhelpers_linux_capture.h:56 */
	bool ParseProcMaps(CCaptureHelper_Linux_NoConstruct* );
	/* ../common/stackhelpers/stackhelpers_linux_capture.h:58 */
	LoadedModule_t* FindModuleByPath(CCaptureHelper_Linux_NoConstruct* , const char* );
	/* ../common/stackhelpers/stackhelpers_linux_capture.h:59 */
	LoadedModule_t* FindModuleByAddress(CCaptureHelper_Linux_NoConstruct* , uint64);
	/* ../common/stackhelpers/stackhelpers_linux_capture.h:60 */
	StackTranslation_LoadedModuleInfo_t* CreateTranslationInfo(CCaptureHelper_Linux_NoConstruct* , const char* , uint64, uint32, uint8* , uint32);
	/* ../common/stackhelpers/stackhelpers_linux_capture.h:61 */
	LoadedModule_t* AddModule(CCaptureHelper_Linux_NoConstruct* , const char* , uint64, uint32);
	/* ../common/stackhelpers/stackhelpers_linux_capture.h:62 */
	void AddModuleSegment(CCaptureHelper_Linux_NoConstruct* , LoadedModule_t* , uint64, uint32);
};

// <00489A09> ../common/stackhelpers/stackhelpers_linux_capture.h:20
void CCaptureHelper_Linux_NoConstruct::~CCaptureHelper_Linux_NoConstruct()
{
} /* size: 0 */

