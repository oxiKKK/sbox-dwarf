
//
// common/stackhelpers/stackhelpers.h
//
//	referenced by: libtier0.so
//
//	functions: 2
//	class: 1
//	structs: 2
//

// <004117A8> ../common/stackhelpers/stackhelpers.h:26
// member variables: 6
// struct size: 4,120
struct StackTranslation_LoadedModuleInfo_t {
	uint64 nBaseAddress; /* 0 8 */
	uint32 nSize; /* 8 4 */
	uint8 nGUIDFormat; /* 12 1 */
	char szModuleFileName[4096]; /* 13 4096 */
	uint16 nGUIDBufferSize; /* 4110 2 */
	uint8 GUIDBuffer[1]; /* 4112 1 */
};

// <0041F950> ../common/stackhelpers/stackhelpers.h:45
// member variables: 4
// struct size: 16
struct StackTranslation_VirtualMachineUpdate_t {
	uint64 nVMID; /* 0 8 */
	uint8 nUpdateType; /* 8 1 */
	uint16 nUpdateBufferSize; /* 10 2 */
	uint8 UpdateBuffer[1]; /* 12 1 */
};

// <00490615> ../common/stackhelpers/stackhelpers.h:72
void CStackTranslationHelper::CStackTranslationHelper()
{
} /* size: 0 */

// <004905F8> ../common/stackhelpers/stackhelpers.h:72
inline void CStackTranslationHelper::CStackTranslationHelper()
{
} /* size: 0 */

// <0041FFE5> ../common/stackhelpers/stackhelpers.h:72
// member functions: 52
// member variable: 1
// vtable entries: 18
// class size: 8
class CStackTranslationHelper {
	void CStackTranslationHelper(CStackTranslationHelper* , CStackTranslationHelper& );
	void CStackTranslationHelper(CStackTranslationHelper* , const CStackTranslationHelper& );
	void CStackTranslationHelper(CStackTranslationHelper* );
	void ~CStackTranslationHelper(CStackTranslationHelper* );
	int ()(void) * * _vptr.CStackTranslationHelper; /* 0 8 */
	/* ../common/stackhelpers/stackhelpers.h:75 */
	virtual void AddRef(CStackTranslationHelper* );
	/* ../common/stackhelpers/stackhelpers.h:76 */
	virtual void Release(CStackTranslationHelper* );
	/* ../common/stackhelpers/stackhelpers.h:78 */
	virtual void SetSymbolSearchPath(CStackTranslationHelper* , const char* );
	/* ../common/stackhelpers/stackhelpers.h:79 */
	virtual void SetSymbolSearchPath(CStackTranslationHelper* , const wchar_t* );
	/* ../common/stackhelpers/stackhelpers.h:82 */
	virtual bool CanTranslatePointer(CStackTranslationHelper* , uint64);
	/* ../common/stackhelpers/stackhelpers.h:85 */
	virtual void SetLoadingModuleState(CStackTranslationHelper* , bool);
	/* ../common/stackhelpers/stackhelpers.h:86 */
	virtual void LoadedModule(CStackTranslationHelper* , const char* , PlatModule_t, void* , uint32);
	/* ../common/stackhelpers/stackhelpers.h:87 */
	virtual void UnloadedModule(CStackTranslationHelper* , PlatModule_t);
	/* ../common/stackhelpers/stackhelpers.h:88 */
	virtual void VerifyLoadedModuleMappings(CStackTranslationHelper* );
	/* ../common/stackhelpers/stackhelpers.h:92 */
	virtual bool ProcessModuleMapping(CStackTranslationHelper* , StackTranslation_LoadedModuleInfo_t* );
	/* ../common/stackhelpers/stackhelpers.h:93 */
	virtual bool ProcessVirtualMachineUpdate(CStackTranslationHelper* , StackTranslation_VirtualMachineUpdate_t* );
	/* ../common/stackhelpers/stackhelpers.h:96 */
	virtual void ReturnToMapping(CStackTranslationHelper* , StackTranslation_ModuleMappingMarker_t);
	/* ../common/stackhelpers/stackhelpers.h:97 */
	virtual StackTranslation_ModuleMappingMarker_t GetCurrentMappingMarker(CStackTranslationHelper* );
	/* ../common/stackhelpers/stackhelpers.h:98 */
	virtual StackTranslation_ModuleMappingMarker_t GetNewestMappingMarker(CStackTranslationHelper* );
	/* ../common/stackhelpers/stackhelpers.h:99 */
	virtual void SyncToNewestMappings(CStackTranslationHelper* );
	/* ../common/stackhelpers/stackhelpers.h:100 */
	virtual void UnloadSymbolFiles(CStackTranslationHelper* );
	/* ../common/stackhelpers/stackhelpers.h:105 */
	virtual uint GetTranslationData(CStackTranslationHelper* , uint64, char* , uint, char* , uint, char* , uint, uint* , uint* , uint* );
	/* ../common/stackhelpers/stackhelpers.h:106 */
	virtual uint GetTranslationData(CStackTranslationHelper* , uint64, wchar_t* , uint, wchar_t* , uint, wchar_t* , uint, uint* , uint* , uint* );
	/* ../common/stackhelpers/stackhelpers.h:108 */
	int TranslateStackInfo(CStackTranslationHelper* , const uint64* , int, char* , int, const char* , TranslateStackInfo_StyleFlags_t);
	/* ../common/stackhelpers/stackhelpers.h:109 */
	int TranslateStackInfo(CStackTranslationHelper* , const uint64* , int, wchar_t* , int, const wchar_t* , TranslateStackInfo_StyleFlags_t);
	/* ../common/stackhelpers/stackhelpers.h:111 */
	bool TranslatePointer(CStackTranslationHelper* , uint64, char* , int, TranslateStackInfo_StyleFlags_t);
	/* ../common/stackhelpers/stackhelpers.h:112 */
	bool TranslatePointer(CStackTranslationHelper* , uint64, wchar_t* , int, TranslateStackInfo_StyleFlags_t);
	bool TranslatePointer(class CStackTranslationHelper *, uint64, wchar_t *, int, enum TranslateStackInfo_StyleFlags_t); /* linkage=_ZN23CStackTranslationHelper16TranslatePointerEyPwi31TranslateStackInfo_StyleFlags_t */
	bool TranslatePointer(class CStackTranslationHelper *, uint64, char *, int, enum TranslateStackInfo_StyleFlags_t); /* linkage=_ZN23CStackTranslationHelper16TranslatePointerEyPci31TranslateStackInfo_StyleFlags_t */
	int TranslateStackInfo(class CStackTranslationHelper *, const uint64  *, int, wchar_t *, int, const wchar_t  *, enum TranslateStackInfo_StyleFlags_t); /* linkage=_ZN23CStackTranslationHelper18TranslateStackInfoEPKyiPwiPKw31TranslateStackInfo_StyleFlags_t */
	int TranslateStackInfo(class CStackTranslationHelper *, const uint64  *, int, char *, int, const char  *, enum TranslateStackInfo_StyleFlags_t); /* linkage=_ZN23CStackTranslationHelper18TranslateStackInfoEPKyiPciPKc31TranslateStackInfo_StyleFlags_t */
	void CStackTranslationHelper(class CStackTranslationHelper *, class CStackTranslationHelper &); /* linkage=_ZN23CStackTranslationHelperC4EOS_ */
	void CStackTranslationHelper(class CStackTranslationHelper *, const class CStackTranslationHelper  &); /* linkage=_ZN23CStackTranslationHelperC4ERKS_ */
	void CStackTranslationHelper(class CStackTranslationHelper *); /* linkage=_ZN23CStackTranslationHelperC4Ev */
	void ~CStackTranslationHelper(class CStackTranslationHelper *); /* linkage=_ZN23CStackTranslationHelperD4Ev */
	virtual void AddRef(class CStackTranslationHelper *); /* linkage=_ZN23CStackTranslationHelper6AddRefEv */
	virtual void Release(class CStackTranslationHelper *); /* linkage=_ZN23CStackTranslationHelper7ReleaseEv */
	virtual void SetSymbolSearchPath(class CStackTranslationHelper *, const char  *); /* linkage=_ZN23CStackTranslationHelper19SetSymbolSearchPathEPKc */
	virtual void SetSymbolSearchPath(class CStackTranslationHelper *, const wchar_t  *); /* linkage=_ZN23CStackTranslationHelper19SetSymbolSearchPathEPKw */
	virtual bool CanTranslatePointer(class CStackTranslationHelper *, uint64); /* linkage=_ZN23CStackTranslationHelper19CanTranslatePointerEy */
	virtual void SetLoadingModuleState(class CStackTranslationHelper *, bool); /* linkage=_ZN23CStackTranslationHelper21SetLoadingModuleStateEb */
	virtual void LoadedModule(class CStackTranslationHelper *, const char  *, PlatModule_t, void *, uint32); /* linkage=_ZN23CStackTranslationHelper12LoadedModuleEPKcP13_PlatModule_tPvj */
	virtual void UnloadedModule(class CStackTranslationHelper *, PlatModule_t); /* linkage=_ZN23CStackTranslationHelper14UnloadedModuleEP13_PlatModule_t */
	virtual void VerifyLoadedModuleMappings(class CStackTranslationHelper *); /* linkage=_ZN23CStackTranslationHelper26VerifyLoadedModuleMappingsEv */
	virtual bool ProcessModuleMapping(class CStackTranslationHelper *, class StackTranslation_LoadedModuleInfo_t *); /* linkage=_ZN23CStackTranslationHelper20ProcessModuleMappingEP35StackTranslation_LoadedModuleInfo_t */
	virtual bool ProcessVirtualMachineUpdate(class CStackTranslationHelper *, class StackTranslation_VirtualMachineUpdate_t *); /* linkage=_ZN23CStackTranslationHelper27ProcessVirtualMachineUpdateEP39StackTranslation_VirtualMachineUpdate_t */
	virtual void ReturnToMapping(class CStackTranslationHelper *, StackTranslation_ModuleMappingMarker_t); /* linkage=_ZN23CStackTranslationHelper15ReturnToMappingEj */
	virtual StackTranslation_ModuleMappingMarker_t GetCurrentMappingMarker(class CStackTranslationHelper *); /* linkage=_ZN23CStackTranslationHelper23GetCurrentMappingMarkerEv */
	virtual StackTranslation_ModuleMappingMarker_t GetNewestMappingMarker(class CStackTranslationHelper *); /* linkage=_ZN23CStackTranslationHelper22GetNewestMappingMarkerEv */
	virtual void SyncToNewestMappings(class CStackTranslationHelper *); /* linkage=_ZN23CStackTranslationHelper20SyncToNewestMappingsEv */
	virtual void UnloadSymbolFiles(class CStackTranslationHelper *); /* linkage=_ZN23CStackTranslationHelper17UnloadSymbolFilesEv */
	virtual uint GetTranslationData(class CStackTranslationHelper *, uint64, char *, uint, char *, uint, char *, uint, uint *, uint *, uint *); /* linkage=_ZN23CStackTranslationHelper18GetTranslationDataEyPcjS0_jS0_jPjS1_S1_ */
	virtual uint GetTranslationData(class CStackTranslationHelper *, uint64, wchar_t *, uint, wchar_t *, uint, wchar_t *, uint, uint *, uint *, uint *); /* linkage=_ZN23CStackTranslationHelper18GetTranslationDataEyPwjS0_jS0_jPjS1_S1_ */
};

