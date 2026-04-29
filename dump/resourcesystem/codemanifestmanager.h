
//
// resourcesystem/codemanifestmanager.h
//
//	referenced by: libengine2.so
//
//	functions: 8
//	class: 1
//	structs: 2
//

// <0219034A> resourcesystem/codemanifestmanager.h:16
void CodeResourceManifestFenceGroup_t::CodeResourceManifestFenceGroup_t()
{
} /* size: 0 */

// <0219032E> resourcesystem/codemanifestmanager.h:16
inline void CodeResourceManifestFenceGroup_t::CodeResourceManifestFenceGroup_t()
{
} /* size: 0 */

// <0218EC94> resourcesystem/codemanifestmanager.h:16
void CodeResourceManifestFenceGroup_t::~CodeResourceManifestFenceGroup_t()
{
} /* size: 0 */

// <0218EC78> resourcesystem/codemanifestmanager.h:16
inline void CodeResourceManifestFenceGroup_t::~CodeResourceManifestFenceGroup_t()
{
} /* size: 0 */

// <02182ABD> resourcesystem/codemanifestmanager.h:16
// member functions: 2
// member variable: 1
// struct size: 176
struct CodeResourceManifestFenceGroup_t {
	CUtlStringMap<ResourceManifestEntry_t*, CUtlSymbolTable> m_Entries; /* 0 176 */
	void ~CodeResourceManifestFenceGroup_t(CodeResourceManifestFenceGroup_t* );
	void CodeResourceManifestFenceGroup_t(CodeResourceManifestFenceGroup_t* );
};

// <0218423B> resourcesystem/codemanifestmanager.h:25
// member functions: 3
// member variables: 3
// struct size: 72
struct CodeResourceManifest_t {
	/* resourcesystem/codemanifestmanager.h:27 */
	void CodeResourceManifest_t(CodeResourceManifest_t* );
	/* resourcesystem/codemanifestmanager.h:28 */
	void ~CodeResourceManifest_t(CodeResourceManifest_t* );
	UtlSymId_t m_Id; /* 0 2 */
	/* resourcesystem/codemanifestmanager.h:30 */
	CodeResourceManifestFenceGroup_t* FindOrCreateGroup(CodeResourceManifest_t* , int);
	CUtlVector<CodeResourceManifestFenceGroup_t*, CUtlMemory<CodeResourceManifestFenceGroup_t*, int> > m_FenceGroups; /* 8 32 */
	CUtlVector<ResourceManifestDesc_t*, CUtlMemory<ResourceManifestDesc_t*, int> > m_ProceduralFuncs; /* 40 32 */
};

// <02194DD1> resourcesystem/codemanifestmanager.h:47
void CCodeResourceManifestManager::CCodeResourceManifestManager()
{
} /* size: 0 */

// <02194DB5> resourcesystem/codemanifestmanager.h:47
inline void CCodeResourceManifestManager::CCodeResourceManifestManager()
{
} /* size: 0 */

// <0218CD55> resourcesystem/codemanifestmanager.h:47
// function calls: 8
void CCodeResourceManifestManager::~CCodeResourceManifestManager()
{
	CUtlVectorBase<CodeResourceManifest_t::RemoveAll(); // 1798
	CUtlMemory<CodeResourceManifest_t::IsExternallyAllocated(); // 905
	CUtlMemory<CodeResourceManifest_t::Purge(); // 903
	CUtlMemory<CodeResourceManifest_t::Purge(); // 1799
	CUtlVectorBase<CodeResourceManifest_t::Purge(); // 560
	CUtlVectorBase<CodeResourceManifest_t::~CUtlVectorBase(); // 410
	CUtlVector<CodeResourceManifest_t::~CUtlVector(); // 15
	CUtlStringMap<CodeResourceManifest_t::~CUtlStringMap(); // 47
} /* size: 86, inline expansions: 8 (227 bytes) */

// <0218CD39> resourcesystem/codemanifestmanager.h:47
inline void CCodeResourceManifestManager::~CCodeResourceManifestManager()
{
} /* size: 0 */

// <02185E32> resourcesystem/codemanifestmanager.h:47
// member functions: 36
// member variables: 2
// vtable entries: 8
// class size: 184
class CCodeResourceManifestManager : public ICodeResourceManifestManager {
public:
	/* class ICodeResourceManifestManager <ancestor>; */ /* 0 8 */
	void CCodeResourceManifestManager(CCodeResourceManifestManager* , CCodeResourceManifestManager& );
	void CCodeResourceManifestManager(CCodeResourceManifestManager* , const CCodeResourceManifestManager& );
	void CCodeResourceManifestManager(CCodeResourceManifestManager* );
	/* resourcesystem/codemanifestmanager.cpp:122 */
	virtual void RegisterNamedManifest(CCodeResourceManifestManager* , ResourceManifestDesc_t* );
	/* resourcesystem/codemanifestmanager.cpp:185 */
	virtual void UnregisterNamedManifest(CCodeResourceManifestManager* , ResourceManifestDesc_t* );
	/* resourcesystem/codemanifestmanager.cpp:344 */
	virtual bool IsResourceManifestGroupKnown(CCodeResourceManifestManager* , const char* );
	/* resourcesystem/codemanifestmanager.cpp:359 */
	virtual bool IsResourceManifestNamedKnown(CCodeResourceManifestManager* , const char* );
	/* resourcesystem/codemanifestmanager.cpp:414 */
	virtual CodeManifestNameSymbol_t GetNamedManifestResources(CCodeResourceManifestManager* , const char* , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& );
	/* resourcesystem/codemanifestmanager.cpp:429 */
	virtual CodeManifestNameSymbol_t GetGroupManifestResources(CCodeResourceManifestManager* , const char* , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& );
	/* resourcesystem/codemanifestmanager.cpp:375 */
	virtual void DisconnectResourceManifestHandles(CCodeResourceManifestManager* , CodeManifestNameSymbol_t);
	/* resourcesystem/codemanifestmanager.cpp:21 */
	void AddManifestDescToNamedManifest(CCodeResourceManifestManager* , ResourceManifestDesc_t* , CodeResourceManifest_t* );
	/* resourcesystem/codemanifestmanager.cpp:62 */
	void RemoveManifestDescFromNamedManifest(CCodeResourceManifestManager* , ResourceManifestDesc_t* , CodeResourceManifest_t* );
	/* resourcesystem/codemanifestmanager.cpp:222 */
	CodeResourceManifest_t* FindCodeBasedManifest(CCodeResourceManifestManager* , const char* , bool* );
	/* resourcesystem/codemanifestmanager.cpp:387 */
	CodeManifestNameSymbol_t GetCodeManifestResources(CCodeResourceManifestManager* , const char* , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& );
	/* resourcesystem/codemanifestmanager.cpp:327 */
	CodeResourceManifest_t* FindCodeManifest(CCodeResourceManifestManager* , const char* , bool);
	/* resourcesystem/codemanifestmanager.cpp:243 */
	void VisitCodeManifest(CCodeResourceManifestManager* , CManifestResourceGatherer* , CodeResourceManifest_t* , CodeManifestVisitMode_t);
	/* resourcesystem/codemanifestmanager.cpp:476 */
	virtual void GetAllCodeManifests(CCodeResourceManifestManager* , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& );
private:
	CUtlStringMap<CodeResourceManifest_t*, CUtlSymbolTable> m_CodeManifests; /* 8 176 */
	void ~CCodeResourceManifestManager(CCodeResourceManifestManager* );
	void CCodeResourceManifestManager(class CCodeResourceManifestManager *, class CCodeResourceManifestManager &); /* linkage=_ZN28CCodeResourceManifestManagerC4EOS_ */
	void CCodeResourceManifestManager(class CCodeResourceManifestManager *, const class CCodeResourceManifestManager  &); /* linkage=_ZN28CCodeResourceManifestManagerC4ERKS_ */
	void CCodeResourceManifestManager(class CCodeResourceManifestManager *); /* linkage=_ZN28CCodeResourceManifestManagerC4Ev */
	virtual void RegisterNamedManifest(class CCodeResourceManifestManager *, class ResourceManifestDesc_t *); /* linkage=_ZN28CCodeResourceManifestManager21RegisterNamedManifestEP22ResourceManifestDesc_t */
	virtual void UnregisterNamedManifest(class CCodeResourceManifestManager *, class ResourceManifestDesc_t *); /* linkage=_ZN28CCodeResourceManifestManager23UnregisterNamedManifestEP22ResourceManifestDesc_t */
	/* <2196e97> resourcesystem/codemanifestmanager.cpp:344 */
	virtual bool IsResourceManifestGroupKnown(class CCodeResourceManifestManager *, const char  *); /* linkage=_ZN28CCodeResourceManifestManager28IsResourceManifestGroupKnownEPKc */
	/* <2197111> resourcesystem/codemanifestmanager.cpp:359 */
	virtual bool IsResourceManifestNamedKnown(class CCodeResourceManifestManager *, const char  *); /* linkage=_ZN28CCodeResourceManifestManager28IsResourceManifestNamedKnownEPKc */
	/* <2195f12> resourcesystem/codemanifestmanager.cpp:414 */
	virtual CodeManifestNameSymbol_t GetNamedManifestResources(class CCodeResourceManifestManager *, const char  *, class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &); /* linkage=_ZN28CCodeResourceManifestManager25GetNamedManifestResourcesEPKcR10CUtlVectorI10CUtlString10CUtlMemoryIS3_iEE */
	/* <2196164> resourcesystem/codemanifestmanager.cpp:429 */
	virtual CodeManifestNameSymbol_t GetGroupManifestResources(class CCodeResourceManifestManager *, const char  *, class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &); /* linkage=_ZN28CCodeResourceManifestManager25GetGroupManifestResourcesEPKcR10CUtlVectorI10CUtlString10CUtlMemoryIS3_iEE */
	/* <2195eae> resourcesystem/codemanifestmanager.cpp:375 */
	virtual void DisconnectResourceManifestHandles(class CCodeResourceManifestManager *, CodeManifestNameSymbol_t); /* linkage=_ZN28CCodeResourceManifestManager33DisconnectResourceManifestHandlesEt */
	void AddManifestDescToNamedManifest(class CCodeResourceManifestManager *, class ResourceManifestDesc_t *, class CodeResourceManifest_t *); /* linkage=_ZN28CCodeResourceManifestManager30AddManifestDescToNamedManifestEP22ResourceManifestDesc_tP22CodeResourceManifest_t */
	/* <2195ca0> resourcesystem/codemanifestmanager.cpp:62 */
	void RemoveManifestDescFromNamedManifest(class CCodeResourceManifestManager *, class ResourceManifestDesc_t *, class CodeResourceManifest_t *); /* linkage=_ZN28CCodeResourceManifestManager35RemoveManifestDescFromNamedManifestEP22ResourceManifestDesc_tP22CodeResourceManifest_t */
	class CodeResourceManifest_t * FindCodeBasedManifest(class CCodeResourceManifestManager *, const char  *, bool *); /* linkage=_ZN28CCodeResourceManifestManager21FindCodeBasedManifestEPKcPb */
	CodeManifestNameSymbol_t GetCodeManifestResources(class CCodeResourceManifestManager *, const char  *, class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &); /* linkage=_ZN28CCodeResourceManifestManager24GetCodeManifestResourcesEPKcR10CUtlVectorI10CUtlString10CUtlMemoryIS3_iEE */
	/* <219639e> resourcesystem/codemanifestmanager.cpp:327 */
	class CodeResourceManifest_t * FindCodeManifest(class CCodeResourceManifestManager *, const char  *, bool); /* linkage=_ZN28CCodeResourceManifestManager16FindCodeManifestEPKcb */
	void VisitCodeManifest(class CCodeResourceManifestManager *, class CManifestResourceGatherer *, class CodeResourceManifest_t *, enum CodeManifestVisitMode_t); /* linkage=_ZN28CCodeResourceManifestManager17VisitCodeManifestEP25CManifestResourceGathererP22CodeResourceManifest_t23CodeManifestVisitMode_t */
	virtual void GetAllCodeManifests(class CCodeResourceManifestManager *, class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &); /* linkage=_ZN28CCodeResourceManifestManager19GetAllCodeManifestsER10CUtlVectorI10CUtlString10CUtlMemoryIS1_iEE */
	void ~CCodeResourceManifestManager(class CCodeResourceManifestManager *); /* linkage=_ZN28CCodeResourceManifestManagerD4Ev */
};

