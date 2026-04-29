
//
// common/stackhelpers/stackhelpers_dwarf_translation.h
//
//	referenced by: libtier0.so
//
//	functions: 12
//	classes: 2
//

// <0041FA5D> ../common/stackhelpers/stackhelpers_dwarf_translation.h:18
// member functions: 58
// member variables: 7
// vtable entries: 18
// class size: 32
class CStackTranslationHelper_Dwarf : public CStackTranslationHelper {
public:
	/* class CStackTranslationHelper <ancestor>; */ /* 0 8 */
	void CStackTranslationHelper_Dwarf(CStackTranslationHelper_Dwarf* , const CStackTranslationHelper_Dwarf& );
	/* ../common/stackhelpers/stackhelpers_dwarf_translation.cpp:49 */
	void CStackTranslationHelper_Dwarf(CStackTranslationHelper_Dwarf* , bool);
	/* ../common/stackhelpers/stackhelpers_dwarf_translation.cpp:59 */
	void ~CStackTranslationHelper_Dwarf(CStackTranslationHelper_Dwarf* );
	/* ../common/stackhelpers/stackhelpers_dwarf_translation.cpp:71 */
	virtual void AddRef(CStackTranslationHelper_Dwarf* );
	/* ../common/stackhelpers/stackhelpers_dwarf_translation.cpp:76 */
	virtual void Release(CStackTranslationHelper_Dwarf* );
	/* ../common/stackhelpers/stackhelpers_dwarf_translation.cpp:391 */
	virtual void SetSymbolSearchPath(CStackTranslationHelper_Dwarf* , const char* );
	/* ../common/stackhelpers/stackhelpers_dwarf_translation.cpp:401 */
	virtual void SetSymbolSearchPath(CStackTranslationHelper_Dwarf* , const wchar_t* );
	/* ../common/stackhelpers/stackhelpers_dwarf_translation.cpp:406 */
	virtual bool CanTranslatePointer(CStackTranslationHelper_Dwarf* , uint64);
	/* ../common/stackhelpers/stackhelpers_dwarf_translation.cpp:411 */
	virtual void SetLoadingModuleState(CStackTranslationHelper_Dwarf* , bool);
	/* ../common/stackhelpers/stackhelpers_dwarf_translation.cpp:415 */
	virtual void LoadedModule(CStackTranslationHelper_Dwarf* , const char* , PlatModule_t, void* , uint32);
	/* ../common/stackhelpers/stackhelpers_dwarf_translation.cpp:420 */
	virtual void UnloadedModule(CStackTranslationHelper_Dwarf* , PlatModule_t);
	/* ../common/stackhelpers/stackhelpers_dwarf_translation.cpp:425 */
	virtual void VerifyLoadedModuleMappings(CStackTranslationHelper_Dwarf* );
	/* ../common/stackhelpers/stackhelpers_dwarf_translation.cpp:430 */
	virtual bool ProcessModuleMapping(CStackTranslationHelper_Dwarf* , StackTranslation_LoadedModuleInfo_t* );
	/* ../common/stackhelpers/stackhelpers_dwarf_translation.cpp:459 */
	virtual bool ProcessVirtualMachineUpdate(CStackTranslationHelper_Dwarf* , StackTranslation_VirtualMachineUpdate_t* );
	/* ../common/stackhelpers/stackhelpers_dwarf_translation.cpp:465 */
	virtual void ReturnToMapping(CStackTranslationHelper_Dwarf* , StackTranslation_ModuleMappingMarker_t);
	/* ../common/stackhelpers/stackhelpers_dwarf_translation.cpp:469 */
	virtual StackTranslation_ModuleMappingMarker_t GetCurrentMappingMarker(CStackTranslationHelper_Dwarf* );
	/* ../common/stackhelpers/stackhelpers_dwarf_translation.cpp:474 */
	virtual StackTranslation_ModuleMappingMarker_t GetNewestMappingMarker(CStackTranslationHelper_Dwarf* );
	/* ../common/stackhelpers/stackhelpers_dwarf_translation.cpp:479 */
	virtual void SyncToNewestMappings(CStackTranslationHelper_Dwarf* );
	/* ../common/stackhelpers/stackhelpers_dwarf_translation.cpp:483 */
	virtual void UnloadSymbolFiles(CStackTranslationHelper_Dwarf* );
	/* ../common/stackhelpers/stackhelpers_dwarf_translation.cpp:491 */
	virtual uint GetTranslationData(CStackTranslationHelper_Dwarf* , uint64, char* , uint, char* , uint, char* , uint, uint* , uint* , uint* );
	/* ../common/stackhelpers/stackhelpers_dwarf_translation.cpp:588 */
	virtual uint GetTranslationData(CStackTranslationHelper_Dwarf* , uint64, wchar_t* , uint, wchar_t* , uint, wchar_t* , uint, uint* , uint* , uint* );
protected:
	/* ../common/stackhelpers/stackhelpers_dwarf_translation.h:49 */
	void Init(CStackTranslationHelper_Dwarf* );
	/* ../common/stackhelpers/stackhelpers_dwarf_translation.cpp:299 */
	CDwarfModule* LoadSymbolsIfNeeded(CStackTranslationHelper_Dwarf* , uint64);
	/* ../common/stackhelpers/stackhelpers_dwarf_translation.cpp:86 */
	void EnsureReady(CStackTranslationHelper_Dwarf* );
	/* ../common/stackhelpers/stackhelpers_dwarf_translation.cpp:95 */
	bool IsElfHeader(CStackTranslationHelper_Dwarf* , uint64);
	/* ../common/stackhelpers/stackhelpers_dwarf_translation.cpp:173 */
	uint32 GetInMemoryModuleSize(CStackTranslationHelper_Dwarf* , uint64);
	/* ../common/stackhelpers/stackhelpers_dwarf_translation.cpp:253 */
	CDwarfModule* AddLoadedModule(CStackTranslationHelper_Dwarf* , const char* , uint64, uint32, uint8, const void* , uint32);
	/* ../common/stackhelpers/stackhelpers_dwarf_translation.cpp:271 */
	CDwarfModule* FindLoadedModule(CStackTranslationHelper_Dwarf* , uint64);
	/* ../common/stackhelpers/stackhelpers_dwarf_translation.cpp:284 */
	bool UnloadLoadedModule(CStackTranslationHelper_Dwarf* , CDwarfModule* );
	volatile bool m_bIsInitialized; /* 8 1 */
	bool m_bIsLocal; /* 9 1 */
	bool m_bModuleListChanged; /* 10 1 */
	uint32 m_nRefCount; /* 12 4 */
	char * m_pSearchPath; /* 16 8 */
	CDwarfModule * m_pModules; /* 24 8 */
	void CStackTranslationHelper_Dwarf(class CStackTranslationHelper_Dwarf *, const class CStackTranslationHelper_Dwarf  &); /* linkage=_ZN29CStackTranslationHelper_DwarfC4ERKS_ */
	void CStackTranslationHelper_Dwarf(class CStackTranslationHelper_Dwarf *, bool); /* linkage=_ZN29CStackTranslationHelper_DwarfC4Eb */
	void ~CStackTranslationHelper_Dwarf(class CStackTranslationHelper_Dwarf *); /* linkage=_ZN29CStackTranslationHelper_DwarfD4Ev */
	virtual void AddRef(class CStackTranslationHelper_Dwarf *); /* linkage=_ZN29CStackTranslationHelper_Dwarf6AddRefEv */
	/* <421d89> ../common/stackhelpers/stackhelpers_dwarf_translation.cpp:76 */
	virtual void Release(class CStackTranslationHelper_Dwarf *); /* linkage=_ZN29CStackTranslationHelper_Dwarf7ReleaseEv */
	virtual void SetSymbolSearchPath(class CStackTranslationHelper_Dwarf *, const char  *); /* linkage=_ZN29CStackTranslationHelper_Dwarf19SetSymbolSearchPathEPKc */
	virtual void SetSymbolSearchPath(class CStackTranslationHelper_Dwarf *, const wchar_t  *); /* linkage=_ZN29CStackTranslationHelper_Dwarf19SetSymbolSearchPathEPKw */
	virtual bool CanTranslatePointer(class CStackTranslationHelper_Dwarf *, uint64); /* linkage=_ZN29CStackTranslationHelper_Dwarf19CanTranslatePointerEy */
	virtual void SetLoadingModuleState(class CStackTranslationHelper_Dwarf *, bool); /* linkage=_ZN29CStackTranslationHelper_Dwarf21SetLoadingModuleStateEb */
	virtual void LoadedModule(class CStackTranslationHelper_Dwarf *, const char  *, PlatModule_t, void *, uint32); /* linkage=_ZN29CStackTranslationHelper_Dwarf12LoadedModuleEPKcP13_PlatModule_tPvj */
	virtual void UnloadedModule(class CStackTranslationHelper_Dwarf *, PlatModule_t); /* linkage=_ZN29CStackTranslationHelper_Dwarf14UnloadedModuleEP13_PlatModule_t */
	virtual void VerifyLoadedModuleMappings(class CStackTranslationHelper_Dwarf *); /* linkage=_ZN29CStackTranslationHelper_Dwarf26VerifyLoadedModuleMappingsEv */
	/* <421ee5> ../common/stackhelpers/stackhelpers_dwarf_translation.cpp:430 */
	virtual bool ProcessModuleMapping(class CStackTranslationHelper_Dwarf *, class StackTranslation_LoadedModuleInfo_t *); /* linkage=_ZN29CStackTranslationHelper_Dwarf20ProcessModuleMappingEP35StackTranslation_LoadedModuleInfo_t */
	virtual bool ProcessVirtualMachineUpdate(class CStackTranslationHelper_Dwarf *, class StackTranslation_VirtualMachineUpdate_t *); /* linkage=_ZN29CStackTranslationHelper_Dwarf27ProcessVirtualMachineUpdateEP39StackTranslation_VirtualMachineUpdate_t */
	virtual void ReturnToMapping(class CStackTranslationHelper_Dwarf *, StackTranslation_ModuleMappingMarker_t); /* linkage=_ZN29CStackTranslationHelper_Dwarf15ReturnToMappingEj */
	virtual StackTranslation_ModuleMappingMarker_t GetCurrentMappingMarker(class CStackTranslationHelper_Dwarf *); /* linkage=_ZN29CStackTranslationHelper_Dwarf23GetCurrentMappingMarkerEv */
	virtual StackTranslation_ModuleMappingMarker_t GetNewestMappingMarker(class CStackTranslationHelper_Dwarf *); /* linkage=_ZN29CStackTranslationHelper_Dwarf22GetNewestMappingMarkerEv */
	virtual void SyncToNewestMappings(class CStackTranslationHelper_Dwarf *); /* linkage=_ZN29CStackTranslationHelper_Dwarf20SyncToNewestMappingsEv */
	virtual void UnloadSymbolFiles(class CStackTranslationHelper_Dwarf *); /* linkage=_ZN29CStackTranslationHelper_Dwarf17UnloadSymbolFilesEv */
	/* <422204> ../common/stackhelpers/stackhelpers_dwarf_translation.cpp:491 */
	virtual uint GetTranslationData(class CStackTranslationHelper_Dwarf *, uint64, char *, uint, char *, uint, char *, uint, uint *, uint *, uint *); /* linkage=_ZN29CStackTranslationHelper_Dwarf18GetTranslationDataEyPcjS0_jS0_jPjS1_S1_ */
	virtual uint GetTranslationData(class CStackTranslationHelper_Dwarf *, uint64, wchar_t *, uint, wchar_t *, uint, wchar_t *, uint, uint *, uint *, uint *); /* linkage=_ZN29CStackTranslationHelper_Dwarf18GetTranslationDataEyPwjS0_jS0_jPjS1_S1_ */
	void Init(class CStackTranslationHelper_Dwarf *); /* linkage=_ZN29CStackTranslationHelper_Dwarf4InitEv */
	class CDwarfModule * LoadSymbolsIfNeeded(class CStackTranslationHelper_Dwarf *, uint64); /* linkage=_ZN29CStackTranslationHelper_Dwarf19LoadSymbolsIfNeededEy */
	/* <421ebc> ../common/stackhelpers/stackhelpers_dwarf_translation.cpp:86 */
	void EnsureReady(class CStackTranslationHelper_Dwarf *); /* linkage=_ZN29CStackTranslationHelper_Dwarf11EnsureReadyEv */
	bool IsElfHeader(class CStackTranslationHelper_Dwarf *, uint64); /* linkage=_ZN29CStackTranslationHelper_Dwarf11IsElfHeaderEy */
	uint32 GetInMemoryModuleSize(class CStackTranslationHelper_Dwarf *, uint64); /* linkage=_ZN29CStackTranslationHelper_Dwarf21GetInMemoryModuleSizeEy */
	class CDwarfModule * AddLoadedModule(class CStackTranslationHelper_Dwarf *, const char  *, uint64, uint32, uint8, const void  *, uint32); /* linkage=_ZN29CStackTranslationHelper_Dwarf15AddLoadedModuleEPKcyjhPKvj */
	/* <422070> ../common/stackhelpers/stackhelpers_dwarf_translation.cpp:271 */
	class CDwarfModule * FindLoadedModule(class CStackTranslationHelper_Dwarf *, uint64); /* linkage=_ZN29CStackTranslationHelper_Dwarf16FindLoadedModuleEy */
	/* <422158> ../common/stackhelpers/stackhelpers_dwarf_translation.cpp:284 */
	bool UnloadLoadedModule(class CStackTranslationHelper_Dwarf *, class CDwarfModule *); /* linkage=_ZN29CStackTranslationHelper_Dwarf18UnloadLoadedModuleEP12CDwarfModule */
};

// <00489AE5> ../common/stackhelpers/stackhelpers_dwarf_translation.h:21
void CStackTranslationHelper_Dwarf::CStackTranslationHelper_Dwarf(bool bIsLocal)
{
} /* size: 0 */

// <00489B0D> ../common/stackhelpers/stackhelpers_dwarf_translation.h:22
void CStackTranslationHelper_Dwarf::~CStackTranslationHelper_Dwarf()
{
} /* size: 0 */

// <004905E1> ../common/stackhelpers/stackhelpers_dwarf_translation.h:78
void CStackTranslationHelper_Dwarf_Local::~CStackTranslationHelper_Dwarf_Local()
{
} /* size: 0 */

// <004905C4> ../common/stackhelpers/stackhelpers_dwarf_translation.h:78
inline void CStackTranslationHelper_Dwarf_Local::~CStackTranslationHelper_Dwarf_Local()
{
} /* size: 0 */

// <00489327> ../common/stackhelpers/stackhelpers_dwarf_translation.h:78
// member functions: 20
// member variable: 1
// vtable entries: 6
// class size: 32
class CStackTranslationHelper_Dwarf_Local : public CStackTranslationHelper_Dwarf {
public:
	/* class CStackTranslationHelper_Dwarf <ancestor>; */ /* 0 0 */
	void ~CStackTranslationHelper_Dwarf_Local(CStackTranslationHelper_Dwarf_Local* );
	void CStackTranslationHelper_Dwarf_Local(CStackTranslationHelper_Dwarf_Local* , CStackTranslationHelper_Dwarf_Local& );
	void CStackTranslationHelper_Dwarf_Local(CStackTranslationHelper_Dwarf_Local* , const CStackTranslationHelper_Dwarf_Local& );
	/* ../common/stackhelpers/stackhelpers_dwarf_translation.h:81 */
	void CStackTranslationHelper_Dwarf_Local(CStackTranslationHelper_Dwarf_Local* );
	/* ../common/stackhelpers/stackhelpers_dwarf_translation.h:83 */
	virtual void AddRef(CStackTranslationHelper_Dwarf_Local* );
	/* ../common/stackhelpers/stackhelpers_dwarf_translation.h:84 */
	virtual void Release(CStackTranslationHelper_Dwarf_Local* );
	/* ../common/stackhelpers/stackhelpers_dwarf_translation.h:87 */
	virtual void ReturnToMapping(CStackTranslationHelper_Dwarf_Local* , StackTranslation_ModuleMappingMarker_t);
	/* ../common/stackhelpers/stackhelpers_dwarf_translation.h:88 */
	virtual StackTranslation_ModuleMappingMarker_t GetCurrentMappingMarker(CStackTranslationHelper_Dwarf_Local* );
	/* ../common/stackhelpers/stackhelpers_dwarf_translation.h:89 */
	virtual StackTranslation_ModuleMappingMarker_t GetNewestMappingMarker(CStackTranslationHelper_Dwarf_Local* );
	/* ../common/stackhelpers/stackhelpers_dwarf_translation.h:90 */
	virtual void SyncToNewestMappings(CStackTranslationHelper_Dwarf_Local* );
	void ~CStackTranslationHelper_Dwarf_Local(class CStackTranslationHelper_Dwarf_Local *); /* linkage=_ZN35CStackTranslationHelper_Dwarf_LocalD4Ev */
	void CStackTranslationHelper_Dwarf_Local(class CStackTranslationHelper_Dwarf_Local *, class CStackTranslationHelper_Dwarf_Local &); /* linkage=_ZN35CStackTranslationHelper_Dwarf_LocalC4EOS_ */
	void CStackTranslationHelper_Dwarf_Local(class CStackTranslationHelper_Dwarf_Local *, const class CStackTranslationHelper_Dwarf_Local  &); /* linkage=_ZN35CStackTranslationHelper_Dwarf_LocalC4ERKS_ */
	void CStackTranslationHelper_Dwarf_Local(class CStackTranslationHelper_Dwarf_Local *); /* linkage=_ZN35CStackTranslationHelper_Dwarf_LocalC4Ev */
	virtual void AddRef(class CStackTranslationHelper_Dwarf_Local *); /* linkage=_ZN35CStackTranslationHelper_Dwarf_Local6AddRefEv */
	virtual void Release(class CStackTranslationHelper_Dwarf_Local *); /* linkage=_ZN35CStackTranslationHelper_Dwarf_Local7ReleaseEv */
	virtual void ReturnToMapping(class CStackTranslationHelper_Dwarf_Local *, StackTranslation_ModuleMappingMarker_t); /* linkage=_ZN35CStackTranslationHelper_Dwarf_Local15ReturnToMappingEj */
	virtual StackTranslation_ModuleMappingMarker_t GetCurrentMappingMarker(class CStackTranslationHelper_Dwarf_Local *); /* linkage=_ZN35CStackTranslationHelper_Dwarf_Local23GetCurrentMappingMarkerEv */
	virtual StackTranslation_ModuleMappingMarker_t GetNewestMappingMarker(class CStackTranslationHelper_Dwarf_Local *); /* linkage=_ZN35CStackTranslationHelper_Dwarf_Local22GetNewestMappingMarkerEv */
	virtual void SyncToNewestMappings(class CStackTranslationHelper_Dwarf_Local *); /* linkage=_ZN35CStackTranslationHelper_Dwarf_Local20SyncToNewestMappingsEv */
};

// <00492AB0> ../common/stackhelpers/stackhelpers_dwarf_translation.h:81
void CStackTranslationHelper_Dwarf_Local::CStackTranslationHelper_Dwarf_Local()
{
} /* size: 0 */

// <00492A97> ../common/stackhelpers/stackhelpers_dwarf_translation.h:81
inline void CStackTranslationHelper_Dwarf_Local::CStackTranslationHelper_Dwarf_Local()
{
} /* size: 0 */

// <00492A69> ../common/stackhelpers/stackhelpers_dwarf_translation.h:83
void CStackTranslationHelper_Dwarf_Local::AddRef()
{
} /* size: 5 */

// <00492A3B> ../common/stackhelpers/stackhelpers_dwarf_translation.h:84
void CStackTranslationHelper_Dwarf_Local::Release()
{
} /* size: 5 */

// <004929FE> ../common/stackhelpers/stackhelpers_dwarf_translation.h:87
void CStackTranslationHelper_Dwarf_Local::ReturnToMapping(StackTranslation_ModuleMappingMarker_t mappingMarker)
{
} /* size: 5 */

// <004929D0> ../common/stackhelpers/stackhelpers_dwarf_translation.h:88
void CStackTranslationHelper_Dwarf_Local::GetCurrentMappingMarker()
{
} /* size: 7 */

// <004929A2> ../common/stackhelpers/stackhelpers_dwarf_translation.h:89
void CStackTranslationHelper_Dwarf_Local::GetNewestMappingMarker()
{
} /* size: 7 */

// <00492974> ../common/stackhelpers/stackhelpers_dwarf_translation.h:90
void CStackTranslationHelper_Dwarf_Local::SyncToNewestMappings()
{
} /* size: 5 */

