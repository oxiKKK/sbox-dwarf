
//
// scenesystem/scenesystem.h
//
//	referenced by: libengine2.so
//
//	functions: 178
//	classes: 16
//	structs: 11
//

// <02F11528> ../scenesystem/scenesystem.h:53
void CMTAtlasDesc_t::CMTAtlasDesc_t()
{
} /* size: 0 */

// <02F1150C> ../scenesystem/scenesystem.h:53
inline void CMTAtlasDesc_t::CMTAtlasDesc_t()
{
} /* size: 0 */

// <02F114F5> ../scenesystem/scenesystem.h:53
void CMTAtlasDesc_t::~CMTAtlasDesc_t()
{
} /* size: 0 */

// <02F114D9> ../scenesystem/scenesystem.h:53
inline void CMTAtlasDesc_t::~CMTAtlasDesc_t()
{
} /* size: 0 */

// <02D9E8CE> ../scenesystem/scenesystem.h:53
// member functions: 3
// member variables: 8
// struct size: 152
struct CMTAtlasDesc_t {
	/* ../scenesystem/scenesystem.h:55 */
	void InitSize(CMTAtlasDesc_t* , int, int, int);
	HRenderTextureStrong m_hCMTAtlas; /* 0 8 */
	RenderTargetDesc_t m_renderTargetDesc; /* 8 120 */
	int m_nWidth; /* 128 4 */
	int m_nHeight; /* 132 4 */
	int m_nLogicalWidth; /* 136 4 */
	int m_nChunkSize; /* 140 4 */
	int m_nColumnsOfChunks; /* 144 4 */
	int m_nRowsOfChunks; /* 148 4 */
	void ~CMTAtlasDesc_t(CMTAtlasDesc_t* );
	void CMTAtlasDesc_t(CMTAtlasDesc_t* );
};

// <03396806> ../scenesystem/scenesystem.h:53
// member function: 1
// member variables: 8
// struct size: 152
struct CMTAtlasDesc_t {
	/* ../scenesystem/scenesystem.h:55 */
	void InitSize(CMTAtlasDesc_t* , int, int, int);
	HRenderTextureStrong m_hCMTAtlas; /* 0 8 */
	RenderTargetDesc_t m_renderTargetDesc; /* 8 120 */
	int m_nWidth; /* 128 4 */
	int m_nHeight; /* 132 4 */
	int m_nLogicalWidth; /* 136 4 */
	int m_nChunkSize; /* 140 4 */
	int m_nColumnsOfChunks; /* 144 4 */
	int m_nRowsOfChunks; /* 148 4 */
};

// <033CAB6F> ../scenesystem/scenesystem.h:55
inline void CMTAtlasDesc_t::InitSize(int nChunkSize, int nLogicalWidth, int nHeight)
{
} /* size: 0 */

// <02D9E9C9> ../scenesystem/scenesystem.h:93
// member functions: 22
// member variables: 4
// class size: 16
class C8x8ElementScoreboardAllocationDesc {
private:
	uint m_nIndex; /* 0 4 */
	uint m_nChunkSize; /* 4 4 */
	uint m_nChunkColumns; /* 8 4 */
	uint m_nChunkRows; /* 12 4 */
	/* ../scenesystem/scenesystem.h:100 */
	C8x8ElementScoreboardAllocationDesc operator=(C8x8ElementScoreboardAllocationDesc* , C8x8ElementScoreboardAllocationDesc& );
	/* ../scenesystem/scenesystem.h:101 */
	void C8x8ElementScoreboardAllocationDesc(C8x8ElementScoreboardAllocationDesc* , C8x8ElementScoreboardAllocationDesc& );
	/* ../scenesystem/scenesystem.h:103 */
	void C8x8ElementScoreboardAllocationDesc(C8x8ElementScoreboardAllocationDesc* );
	/* ../scenesystem/scenesystem.h:107 */
	uint GetUpperLeftX(C8x8ElementScoreboardAllocationDesc* );
	/* ../scenesystem/scenesystem.h:111 */
	uint GetUpperLeftY(C8x8ElementScoreboardAllocationDesc* );
	/* ../scenesystem/scenesystem.h:116 */
	uint GetIndex(const C8x8ElementScoreboardAllocationDesc* );
	/* ../scenesystem/scenesystem.h:117 */
	void SetIndex(C8x8ElementScoreboardAllocationDesc* , uint);
	/* ../scenesystem/scenesystem.h:119 */
	uint GetChunkSize(const C8x8ElementScoreboardAllocationDesc* );
	/* ../scenesystem/scenesystem.h:120 */
	uint GetChunkColumns(const C8x8ElementScoreboardAllocationDesc* );
	/* ../scenesystem/scenesystem.h:121 */
	uint GetChunkRows(const C8x8ElementScoreboardAllocationDesc* );
	/* ../scenesystem/scenesystem.h:122 */
	void SetSize(C8x8ElementScoreboardAllocationDesc* , uint, uint, uint);
	class C8x8ElementScoreboardAllocationDesc operator=(class C8x8ElementScoreboardAllocationDesc *, class C8x8ElementScoreboardAllocationDesc &); /* linkage=_ZN35C8x8ElementScoreboardAllocationDescaSERS_ */
	void C8x8ElementScoreboardAllocationDesc(class C8x8ElementScoreboardAllocationDesc *, class C8x8ElementScoreboardAllocationDesc &); /* linkage=_ZN35C8x8ElementScoreboardAllocationDescC4ERS_ */
	void C8x8ElementScoreboardAllocationDesc(class C8x8ElementScoreboardAllocationDesc *); /* linkage=_ZN35C8x8ElementScoreboardAllocationDescC4Ev */
	uint GetUpperLeftX(class C8x8ElementScoreboardAllocationDesc *); /* linkage=_ZN35C8x8ElementScoreboardAllocationDesc13GetUpperLeftXEv */
	uint GetUpperLeftY(class C8x8ElementScoreboardAllocationDesc *); /* linkage=_ZN35C8x8ElementScoreboardAllocationDesc13GetUpperLeftYEv */
	uint GetIndex(const class C8x8ElementScoreboardAllocationDesc  *); /* linkage=_ZNK35C8x8ElementScoreboardAllocationDesc8GetIndexEv */
	void SetIndex(class C8x8ElementScoreboardAllocationDesc *, uint); /* linkage=_ZN35C8x8ElementScoreboardAllocationDesc8SetIndexEj */
	uint GetChunkSize(const class C8x8ElementScoreboardAllocationDesc  *); /* linkage=_ZNK35C8x8ElementScoreboardAllocationDesc12GetChunkSizeEv */
	uint GetChunkColumns(const class C8x8ElementScoreboardAllocationDesc  *); /* linkage=_ZNK35C8x8ElementScoreboardAllocationDesc15GetChunkColumnsEv */
	uint GetChunkRows(const class C8x8ElementScoreboardAllocationDesc  *); /* linkage=_ZNK35C8x8ElementScoreboardAllocationDesc12GetChunkRowsEv */
	void SetSize(class C8x8ElementScoreboardAllocationDesc *, uint, uint, uint); /* linkage=_ZN35C8x8ElementScoreboardAllocationDesc7SetSizeEjjj */
};

// <02F200F7> ../scenesystem/scenesystem.h:103
void C8x8ElementScoreboardAllocationDesc::C8x8ElementScoreboardAllocationDesc()
{
} /* size: 0 */

// <02F200DE> ../scenesystem/scenesystem.h:103
inline void C8x8ElementScoreboardAllocationDesc::C8x8ElementScoreboardAllocationDesc()
{
} /* size: 0 */

// <02F200C5> ../scenesystem/scenesystem.h:107
inline void C8x8ElementScoreboardAllocationDesc::GetUpperLeftX()
{
} /* size: 0 */

// <02F200AC> ../scenesystem/scenesystem.h:111
inline void C8x8ElementScoreboardAllocationDesc::GetUpperLeftY()
{
} /* size: 0 */

// <02F20087> ../scenesystem/scenesystem.h:117
inline void C8x8ElementScoreboardAllocationDesc::SetIndex(uint nIndex)
{
} /* size: 0 */

// <02F2004A> ../scenesystem/scenesystem.h:122
inline void C8x8ElementScoreboardAllocationDesc::SetSize(uint nChunkSize, uint nChunkColumns, uint nChunkRows)
{
} /* size: 0 */

// <02D9EBAB> ../scenesystem/scenesystem.h:130
// member functions: 8
// member variables: 4
// class size: 24
class CCMTAtlasScoreboard {
private:
	uint64 m_nChunkMask; /* 0 8 */
	uint m_nChunkSize; /* 8 4 */
	uint m_nChunkColumns; /* 12 4 */
	uint m_nChunkRows; /* 16 4 */
	/* ../scenesystem/scenesystem.h:139 */
	void CCMTAtlasScoreboard(CCMTAtlasScoreboard* , uint, uint, uint);
	/* ../scenesystem/scenesystem.h:146 */
	void ~CCMTAtlasScoreboard(CCMTAtlasScoreboard* );
	/* ../scenesystem/scenesystem.h:148 */
	bool AllocateSpace(CCMTAtlasScoreboard* , int, int, C8x8ElementScoreboardAllocationDesc* );
	/* ../scenesystem/scenesystem.h:180 */
	void DeallocateSpace(CCMTAtlasScoreboard* , C8x8ElementScoreboardAllocationDesc& );
	void CCMTAtlasScoreboard(class CCMTAtlasScoreboard *, uint, uint, uint); /* linkage=_ZN19CCMTAtlasScoreboardC4Ejjj */
	void ~CCMTAtlasScoreboard(class CCMTAtlasScoreboard *); /* linkage=_ZN19CCMTAtlasScoreboardD4Ev */
	bool AllocateSpace(class CCMTAtlasScoreboard *, int, int, class C8x8ElementScoreboardAllocationDesc *); /* linkage=_ZN19CCMTAtlasScoreboard13AllocateSpaceEiiP35C8x8ElementScoreboardAllocationDesc */
	void DeallocateSpace(class CCMTAtlasScoreboard *, class C8x8ElementScoreboardAllocationDesc &); /* linkage=_ZN19CCMTAtlasScoreboard15DeallocateSpaceER35C8x8ElementScoreboardAllocationDesc */
};

// <02F20018> ../scenesystem/scenesystem.h:139
// variable: 1
void CCMTAtlasScoreboard::CCMTAtlasScoreboard(uint nChunkSize, uint nChunkColumns, uint nChunkRows)
{
	{
		uint64 nHighBitSet; // 143
	}
} /* size: 0 */

// <02F1FFCD> ../scenesystem/scenesystem.h:139
// variable: 1
inline void CCMTAtlasScoreboard::CCMTAtlasScoreboard(uint nChunkSize, uint nChunkColumns, uint nChunkRows)
{
	{
		uint64 nHighBitSet; // 143
	}
} /* size: 0 */

// <02F1FFB6> ../scenesystem/scenesystem.h:146
void CCMTAtlasScoreboard::~CCMTAtlasScoreboard()
{
} /* size: 0 */

// <02F1FF9D> ../scenesystem/scenesystem.h:146
inline void CCMTAtlasScoreboard::~CCMTAtlasScoreboard()
{
} /* size: 0 */

// <02F1FEF3> ../scenesystem/scenesystem.h:148
// variables: 6
inline void CCMTAtlasScoreboard::AllocateSpace(int nWidth, int nHeight, C8x8ElementScoreboardAllocationDesc* pAtlasAllocDesc)
{
	const char   __FUNCTION__; // 63520
	uint64 nOriginalMask; // 159
	uint64 nMask; // 166
	int i; // 167
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 153
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 163
	}
} /* size: 0, variables: 4 */

// <02E1B363> ../scenesystem/scenesystem.h:196
void NameToLightCookieSequence_t::NameToLightCookieSequence_t()
{
} /* size: 0 */

// <02E1B347> ../scenesystem/scenesystem.h:196
inline void NameToLightCookieSequence_t::NameToLightCookieSequence_t()
{
} /* size: 0 */

// <02D9EC9C> ../scenesystem/scenesystem.h:196
// member function: 1
// member variables: 2
// struct size: 8
struct NameToLightCookieSequence_t {
	CUtlStringToken m_nName; /* 0 4 */
	int m_nSequence; /* 4 4 */
	void NameToLightCookieSequence_t(NameToLightCookieSequence_t* );
};

// <02D9ECE5> ../scenesystem/scenesystem.h:203
// member variables: 3
// struct size: 112
struct SceneObjectCullingBox_t {
	fltx4 m_BoxPlanes[6]; /* 0 96 */
	uint32 m_nBoxId; /* 96 4 */
	SceneSystemBoxCullMode_t m_nMode; /* 100 4 */
};

// <02D9ED25> ../scenesystem/scenesystem.h:210
// member functions: 12
// member variables: 3
// class size: 18,448
class CSceneWorldObjectListChunk {
	/* ../scenesystem/scenesystem.h:213 */
	void CSceneWorldObjectListChunk(CSceneWorldObjectListChunk* );
	int m_nNumObjects; /* 0 4 */
	int m_nBoundsGroupIndex; /* 4 4 */
	CSceneObjectReference_t m_objectReferences[384] __attribute__((__aligned__(16))); /* 16 18432 */
	/* ../scenesystem/scenesystem.h:224 */
	bool IsFull(const CSceneWorldObjectListChunk* );
	/* ../scenesystem/scenesystem.h:225 */
	int NumFree(const CSceneWorldObjectListChunk* );
	/* ../scenesystem/scenesystem.h:226 */
	int FirstFree(const CSceneWorldObjectListChunk* );
	/* ../scenesystem/scenesystem.h:227 */
	int NumObjects(const CSceneWorldObjectListChunk* );
	/* ../scenesystem/scenesystem.h:231 */
	void Check(const CSceneWorldObjectListChunk* , int, const CSceneWorld* );
	void CSceneWorldObjectListChunk(class CSceneWorldObjectListChunk *); /* linkage=_ZN26CSceneWorldObjectListChunkC4Ev */
	bool IsFull(const class CSceneWorldObjectListChunk  *); /* linkage=_ZNK26CSceneWorldObjectListChunk6IsFullEv */
	int NumFree(const class CSceneWorldObjectListChunk  *); /* linkage=_ZNK26CSceneWorldObjectListChunk7NumFreeEv */
	int FirstFree(const class CSceneWorldObjectListChunk  *); /* linkage=_ZNK26CSceneWorldObjectListChunk9FirstFreeEv */
	int NumObjects(const class CSceneWorldObjectListChunk  *); /* linkage=_ZNK26CSceneWorldObjectListChunk10NumObjectsEv */
	void Check(const class CSceneWorldObjectListChunk  *, int, const class CSceneWorld  *); /* linkage=_ZNK26CSceneWorldObjectListChunk5CheckEiPK11CSceneWorld */
} __attribute__((__aligned__(16)));

// <0355E7C4> ../scenesystem/scenesystem.h:213
void CSceneWorldObjectListChunk::CSceneWorldObjectListChunk()
{
} /* size: 0 */

// <0355E7AB> ../scenesystem/scenesystem.h:213
inline void CSceneWorldObjectListChunk::CSceneWorldObjectListChunk()
{
} /* size: 0 */

// <0355E792> ../scenesystem/scenesystem.h:224
inline void CSceneWorldObjectListChunk::IsFull()
{
} /* size: 0 */

// <02F1FEC1> ../scenesystem/scenesystem.h:225
inline void CSceneWorldObjectListChunk::NumFree()
{
} /* size: 0 */

// <02F1FEA8> ../scenesystem/scenesystem.h:226
inline void CSceneWorldObjectListChunk::FirstFree()
{
} /* size: 0 */

// <0355E779> ../scenesystem/scenesystem.h:227
inline void CSceneWorldObjectListChunk::NumObjects()
{
} /* size: 0 */

// <02F05276> ../scenesystem/scenesystem.h:235
void CSceneWorldObjectList::CSceneWorldObjectList()
{
} /* size: 0 */

// <02F0525A> ../scenesystem/scenesystem.h:235
inline void CSceneWorldObjectList::CSceneWorldObjectList()
{
} /* size: 0 */

// <02DA0587> ../scenesystem/scenesystem.h:235
// member functions: 30
// member variables: 2
// class size: 104
class CSceneWorldObjectList {
	/* ../scenesystem/scenesystem.h:238 */
	void ~CSceneWorldObjectList(CSceneWorldObjectList* );
	/* ../scenesystem/scenesystem.h:244 */
	void Purge(CSceneWorldObjectList* );
	/* ../scenesystem/scenesystem.h:247 */
	void FreeUnusedObjectChunks(CSceneWorldObjectList* );
	/* ../scenesystem/scenesystem.h:250 */
	void AddObjectToList(CSceneWorldObjectList* , CSceneObject* );
	/* ../scenesystem/scenesystem.h:253 */
	bool RemoveObjectFromList(CSceneWorldObjectList* , CSceneObject* );
	/* ../scenesystem/scenesystem.h:255 */
	void GetAllSceneObjects(CSceneWorldObjectList* , CUtlVector<CSceneObject*, CUtlMemory<CSceneObject*, int> >& );
	/* ../scenesystem/scenesystem.h:256 */
	int GetSceneObjectCount(const CSceneWorldObjectList* );
	/* ../scenesystem/scenesystem.h:258 */
	void MoveAllObjectsToAnother(CSceneWorldObjectList* , CSceneWorldObjectList* , CSceneWorld* , CSceneWorld* );
	/* ../scenesystem/scenesystem.h:260 */
	int ChunkCount(const CSceneWorldObjectList* );
	/* ../scenesystem/scenesystem.h:264 */
	void Check(const CSceneWorldObjectList* , int, CSceneWorld* );
	/* ../scenesystem/scenesystem.h:267 */
	const CUtlVector<CSceneWorldObjectListChunk*, CUtlMemory<CSceneWorldObjectListChunk*, int> >& ChunkList(const CSceneWorldObjectList* );
private:
	CThreadMutex m_chunkListMutex; /* 0 72 */
	CUtlVector<CSceneWorldObjectListChunk*, CUtlMemory<CSceneWorldObjectListChunk*, int> > m_objectChunks; /* 72 32 */
	/* ../scenesystem/scenesystem.h:275 */
	CSceneWorldObjectListChunk* FindChunkForObject(CSceneWorldObjectList* , const CSceneObject* );
	/* ../scenesystem/scenesystem.h:279 */
	CSceneWorldObjectListChunk* FindOwningChunk(CSceneWorldObjectList* , const CSceneObject* , int& );
	/* ../scenesystem/scenesystem.h:281 */
	void ChangeWorldReferencesInsideSceneObject(CSceneObject* , ISceneWorld* );
	void CSceneWorldObjectList(CSceneWorldObjectList* );
	void ~CSceneWorldObjectList(class CSceneWorldObjectList *); /* linkage=_ZN21CSceneWorldObjectListD4Ev */
	void Purge(class CSceneWorldObjectList *); /* linkage=_ZN21CSceneWorldObjectList5PurgeEv */
	void FreeUnusedObjectChunks(class CSceneWorldObjectList *); /* linkage=_ZN21CSceneWorldObjectList22FreeUnusedObjectChunksEv */
	void AddObjectToList(class CSceneWorldObjectList *, class CSceneObject *); /* linkage=_ZN21CSceneWorldObjectList15AddObjectToListEP12CSceneObject */
	bool RemoveObjectFromList(class CSceneWorldObjectList *, class CSceneObject *); /* linkage=_ZN21CSceneWorldObjectList20RemoveObjectFromListEP12CSceneObject */
	void GetAllSceneObjects(class CSceneWorldObjectList *, class CUtlVector<CSceneObject*, CUtlMemory<CSceneObject*, int> > &); /* linkage=_ZN21CSceneWorldObjectList18GetAllSceneObjectsER10CUtlVectorIP12CSceneObject10CUtlMemoryIS2_iEE */
	int GetSceneObjectCount(const class CSceneWorldObjectList  *); /* linkage=_ZNK21CSceneWorldObjectList19GetSceneObjectCountEv */
	void MoveAllObjectsToAnother(class CSceneWorldObjectList *, class CSceneWorldObjectList *, class CSceneWorld *, class CSceneWorld *); /* linkage=_ZN21CSceneWorldObjectList23MoveAllObjectsToAnotherEPS_P11CSceneWorldS2_ */
	int ChunkCount(const class CSceneWorldObjectList  *); /* linkage=_ZNK21CSceneWorldObjectList10ChunkCountEv */
	void Check(const class CSceneWorldObjectList  *, int, class CSceneWorld *); /* linkage=_ZNK21CSceneWorldObjectList5CheckEiP11CSceneWorld */
	const class CUtlVector<CSceneWorldObjectListChunk*, CUtlMemory<CSceneWorldObjectListChunk*, int> >  & ChunkList(const class CSceneWorldObjectList  *); /* linkage=_ZNK21CSceneWorldObjectList9ChunkListEv */
	class CSceneWorldObjectListChunk * FindChunkForObject(class CSceneWorldObjectList *, const class CSceneObject  *); /* linkage=_ZN21CSceneWorldObjectList18FindChunkForObjectEPK12CSceneObject */
	/* <35676d2> ../scenesystem/sceneobject_methods.cpp:382 */
	class CSceneWorldObjectListChunk * FindOwningChunk(class CSceneWorldObjectList *, const class CSceneObject  *, int &); /* linkage=_ZN21CSceneWorldObjectList15FindOwningChunkEPK12CSceneObjectRi */
	void ChangeWorldReferencesInsideSceneObject(class CSceneObject *, class ISceneWorld *); /* linkage=_ZN21CSceneWorldObjectList38ChangeWorldReferencesInsideSceneObjectEP12CSceneObjectP11ISceneWorld */
	void CSceneWorldObjectList(class CSceneWorldObjectList *); /* linkage=_ZN21CSceneWorldObjectListC4Ev */
};

// <0350A39A> ../scenesystem/scenesystem.h:235
// member functions: 29
// member variables: 2
// class size: 104
class CSceneWorldObjectList {
	/* ../scenesystem/scenesystem.h:238 */
	void ~CSceneWorldObjectList(CSceneWorldObjectList* );
	/* ../scenesystem/scenesystem.h:244 */
	void Purge(CSceneWorldObjectList* );
	/* ../scenesystem/scenesystem.h:247 */
	void FreeUnusedObjectChunks(CSceneWorldObjectList* );
	/* ../scenesystem/scenesystem.h:250 */
	void AddObjectToList(CSceneWorldObjectList* , CSceneObject* );
	/* ../scenesystem/scenesystem.h:253 */
	bool RemoveObjectFromList(CSceneWorldObjectList* , CSceneObject* );
	/* ../scenesystem/scenesystem.h:255 */
	void GetAllSceneObjects(CSceneWorldObjectList* , CUtlVector<CSceneObject*, CUtlMemory<CSceneObject*, int> >& );
	/* ../scenesystem/scenesystem.h:256 */
	int GetSceneObjectCount(const CSceneWorldObjectList* );
	/* ../scenesystem/scenesystem.h:258 */
	void MoveAllObjectsToAnother(CSceneWorldObjectList* , CSceneWorldObjectList* , CSceneWorld* , CSceneWorld* );
	/* ../scenesystem/scenesystem.h:260 */
	int ChunkCount(const CSceneWorldObjectList* );
	/* ../scenesystem/scenesystem.h:264 */
	void Check(const CSceneWorldObjectList* , int, CSceneWorld* );
	/* ../scenesystem/scenesystem.h:267 */
	const CUtlVector<CSceneWorldObjectListChunk*, CUtlMemory<CSceneWorldObjectListChunk*, int> >& ChunkList(const CSceneWorldObjectList* );
private:
	CThreadMutex m_chunkListMutex; /* 0 72 */
	CUtlVector<CSceneWorldObjectListChunk*, CUtlMemory<CSceneWorldObjectListChunk*, int> > m_objectChunks; /* 72 32 */
	/* ../scenesystem/scenesystem.h:275 */
	CSceneWorldObjectListChunk* FindChunkForObject(CSceneWorldObjectList* , const CSceneObject* );
	/* ../scenesystem/scenesystem.h:279 */
	CSceneWorldObjectListChunk* FindOwningChunk(CSceneWorldObjectList* , const CSceneObject* , int& );
	/* ../scenesystem/scenesystem.h:281 */
	void ChangeWorldReferencesInsideSceneObject(CSceneObject* , ISceneWorld* );
	void ~CSceneWorldObjectList(class CSceneWorldObjectList *); /* linkage=_ZN21CSceneWorldObjectListD4Ev */
	void Purge(class CSceneWorldObjectList *); /* linkage=_ZN21CSceneWorldObjectList5PurgeEv */
	void FreeUnusedObjectChunks(class CSceneWorldObjectList *); /* linkage=_ZN21CSceneWorldObjectList22FreeUnusedObjectChunksEv */
	void AddObjectToList(class CSceneWorldObjectList *, class CSceneObject *); /* linkage=_ZN21CSceneWorldObjectList15AddObjectToListEP12CSceneObject */
	bool RemoveObjectFromList(class CSceneWorldObjectList *, class CSceneObject *); /* linkage=_ZN21CSceneWorldObjectList20RemoveObjectFromListEP12CSceneObject */
	void GetAllSceneObjects(class CSceneWorldObjectList *, class CUtlVector<CSceneObject*, CUtlMemory<CSceneObject*, int> > &); /* linkage=_ZN21CSceneWorldObjectList18GetAllSceneObjectsER10CUtlVectorIP12CSceneObject10CUtlMemoryIS2_iEE */
	int GetSceneObjectCount(const class CSceneWorldObjectList  *); /* linkage=_ZNK21CSceneWorldObjectList19GetSceneObjectCountEv */
	void MoveAllObjectsToAnother(class CSceneWorldObjectList *, class CSceneWorldObjectList *, class CSceneWorld *, class CSceneWorld *); /* linkage=_ZN21CSceneWorldObjectList23MoveAllObjectsToAnotherEPS_P11CSceneWorldS2_ */
	int ChunkCount(const class CSceneWorldObjectList  *); /* linkage=_ZNK21CSceneWorldObjectList10ChunkCountEv */
	void Check(const class CSceneWorldObjectList  *, int, class CSceneWorld *); /* linkage=_ZNK21CSceneWorldObjectList5CheckEiP11CSceneWorld */
	const class CUtlVector<CSceneWorldObjectListChunk*, CUtlMemory<CSceneWorldObjectListChunk*, int> >  & ChunkList(const class CSceneWorldObjectList  *); /* linkage=_ZNK21CSceneWorldObjectList9ChunkListEv */
	class CSceneWorldObjectListChunk * FindChunkForObject(class CSceneWorldObjectList *, const class CSceneObject  *); /* linkage=_ZN21CSceneWorldObjectList18FindChunkForObjectEPK12CSceneObject */
	/* <35676d2> ../scenesystem/sceneobject_methods.cpp:382 */
	class CSceneWorldObjectListChunk * FindOwningChunk(class CSceneWorldObjectList *, const class CSceneObject  *, int &); /* linkage=_ZN21CSceneWorldObjectList15FindOwningChunkEPK12CSceneObjectRi */
	void ChangeWorldReferencesInsideSceneObject(class CSceneObject *, class ISceneWorld *); /* linkage=_ZN21CSceneWorldObjectList38ChangeWorldReferencesInsideSceneObjectEP12CSceneObjectP11ISceneWorld */
	void CSceneWorldObjectList(class CSceneWorldObjectList *); /* linkage=_ZN21CSceneWorldObjectListC4Ev */
};

// <02F1FE44> ../scenesystem/scenesystem.h:238
void CSceneWorldObjectList::~CSceneWorldObjectList()
{
} /* size: 0 */

// <02F1FE2B> ../scenesystem/scenesystem.h:238
inline void CSceneWorldObjectList::~CSceneWorldObjectList()
{
} /* size: 0 */

// <02F1FE12> ../scenesystem/scenesystem.h:260
inline void CSceneWorldObjectList::ChunkCount()
{
} /* size: 0 */

// <036AC8B5> ../scenesystem/scenesystem.h:267
inline void CSceneWorldObjectList::ChunkList()
{
} /* size: 0 */

// <02F1FDD4> ../scenesystem/scenesystem.h:281
inline void ChangeWorldReferencesInsideSceneObject(CSceneObject* pObj, ISceneWorld* pNewWorld)
{
} /* size: 0 */

// <02D51394> ../scenesystem/scenesystem.h:290
// member functions: 84
// member variables: 22
// vtable entries: 26
// class size: 1,776
class CSceneWorld : public ISceneWorld {
public:
	/* class ISceneWorld <ancestor>; */ /* 0 8 */
	void CSceneWorld(CSceneWorld* , const CSceneWorld& );
	CSceneWorldObjectList m_objectList[8]; /* 8 832 */
	IPVS * m_pPVS; /* 840 8 */
	CInterlockedInt m_nIDCounter __attribute__((__aligned__(4))); /* 848 4 */
	CUtlSymbol m_WorldDebugName; /* 852 2 */
	CUtlVectorMT<CUtlVector<SceneObjectCullingBox_t, CUtlMemory<SceneObjectCullingBox_t, int> >, CThreadFastMutex> m_CullBoxes; /* 856 80 */
	CUtlVectorMT<CUtlVector<SceneVolumetricFogVolume_t, CUtlMemory<SceneVolumetricFogVolume_t, int> >, CThreadFastMutex> m_VolumetricFogVolumes; /* 936 80 */
	CTSQueue<CSceneObject*, false> m_SceneObjectsToDeleteAtFrameEnd __attribute__((__aligned__(16))); /* 1024 64 */
	/* ../scenesystem/scenesystem.cpp:931 */
	virtual void DeleteEndOfFrameObjects(CSceneWorld* );
	bool m_bBusy; /* 1088 1 */
	uint8 m_nDeletionCheckVar; /* 1089 1 */
	/* ../scenesystem/scenesystem.h:320 */
	bool IsFreed(const CSceneWorld* );
	/* ../scenesystem/scenesystem.h:326 */
	void MarkBusy(CSceneWorld* , bool);
	/* ../scenesystem/scenesystem.h:328 */
	virtual bool IsBusy(const CSceneWorld* );
	/* ../scenesystem/scenesystem.cpp:411 */
	void CSceneWorld(CSceneWorld* , const char* );
	/* ../scenesystem/scenesystem.cpp:422 */
	virtual void ~CSceneWorld(CSceneWorld* );
	/* ../scenesystem/scenesystem.cpp:437 */
	virtual void DeleteAllObjects(CSceneWorld* );
	/* ../scenesystem/scenesystem.cpp:492 */
	virtual void Release(CSceneWorld* );
	/* ../scenesystem/scenesystem.h:338 */
	virtual IPVS* GetPVS(CSceneWorld* );
	/* ../scenesystem/scenesystem.h:343 */
	virtual void SetPVS(CSceneWorld* , IPVS* );
	/* ../scenesystem/scenesystem.cpp:486 */
	virtual uint NextID(CSceneWorld* );
	/* ../scenesystem/scenesystem.h:357 */
	void VerifyWorld(CSceneWorld* );
	/* ../scenesystem/scenesystem.cpp:6171 */
	void VerifyWorldForReal(CSceneWorld* );
	/* ../scenesystem/scenesystem.cpp:907 */
	virtual void MoveAllObjectsToAnotherSceneWorld(CSceneWorld* , ISceneWorld* );
	/* ../scenesystem/scenesystem.cpp:942 */
	virtual void GetWorldBounds(CSceneWorld* , Vector& , Vector& );
	/* ../scenesystem/scenesystem.cpp:953 */
	virtual void GetAllSceneObjects(CSceneWorld* , CUtlVector<CSceneObject*, CUtlMemory<CSceneObject*, int> >& );
	/* ../scenesystem/scenesystem.cpp:962 */
	virtual int GetSceneObjectCount(CSceneWorld* );
	/* ../scenesystem/scenesystem.cpp:393 */
	virtual bool IsEmpty(const CSceneWorld* );
	/* ../scenesystem/scenesystem.cpp:406 */
	int NumberOfObjectsInPartition(const CSceneWorld* , int);
	/* ../scenesystem/scenesystem.cpp:974 */
	virtual const char* GetWorldDebugName(CSceneWorld* );
	/* ../scenesystem/scenesystem.cpp:981 */
	void OnPVSChanged(CSceneWorld* );
	/* ../scenesystem/scenesystem.h:372 */
	virtual void SetDeleteAtEndOfFrame(CSceneWorld* , bool);
	/* ../scenesystem/scenesystem.h:373 */
	virtual bool GetDeleteAtEndOfFrame(CSceneWorld* );
	/* ../scenesystem/scenesystem.cpp:499 */
	virtual void FreeUnusedObjectChunks(CSceneWorld* );
	/* ../scenesystem/scenesystem.cpp:549 */
	uint32 AddCullingBox(CSceneWorld* , SceneSystemBoxCullMode_t, const Vector& , const QAngle& , const Vector& );
	/* ../scenesystem/scenesystem.cpp:564 */
	void RemoveCullingBox(CSceneWorld* , uint32);
	/* ../scenesystem/scenesystem.cpp:575 */
	uint32 AddVolumetricFogVolume(CSceneWorld* , const SceneVolumetricFogVolume_t& );
	/* ../scenesystem/scenesystem.cpp:585 */
	void RemoveVolumetricFogVolume(CSceneWorld* , uint32);
	/* ../scenesystem/scenesystem.h:383 */
	virtual void SetBoundsGroups(CSceneWorld* , const CUtlVector<AABB_t, CUtlMemory<AABB_t, int> >& );
	/* ../scenesystem/scenesystem.h:384 */
	virtual const CUtlVector<AABB_t, CUtlMemory<AABB_t, int> >& GetBoundsGroups(const CSceneWorld* );
	/* ../scenesystem/scenesystem.cpp:596 */
	virtual void Add3DSkyboxWorld(CSceneWorld* , ISceneWorld* );
	/* ../scenesystem/scenesystem.cpp:601 */
	virtual void Remove3DSkyboxWorld(CSceneWorld* , ISceneWorld* );
	/* ../scenesystem/scenesystem.cpp:606 */
	virtual void Set3DSkyboxParameters(CSceneWorld* , Vector, QAngle, float);
	/* ../scenesystem/scenesystem.cpp:613 */
	virtual void Get3DSkybox(CSceneWorld* , ISceneWorld* & , Vector& , QAngle& , float& );
private:
	bool m_bDeleteAtEndOfFrame:1; /* 1090: 0 1 */
	uint32 m_nNextCullingBoxId; /* 1092 4 */
	uint32 m_nNextVolumetricVolumeId; /* 1096 4 */
	CUtlVector<AABB_t, CUtlMemory<AABB_t, int> > m_boundsGroups; /* 1104 32 */
	ISceneWorld * m_p3DSkyboxWorld; /* 1136 8 */
	Vector m_v3DSkyboxOrigin; /* 1144 12 */
	QAngle m_v3DSkyboxAngles; /* 1156 12 */
	float m_v3DSkyboxScale; /* 1168 4 */
	CThreadFastMutex m_traceMutex; /* 1176 24 */
	RayTracingEnvironment m_rayTracingEnvironment; /* 1200 528 */
	/* ../scenesystem/scenesystem.h:409 */
	virtual RayTracingEnvironment* GetRayTracingEnvironment(CSceneWorld* );
	/* ../scenesystem/scenesystem.cpp:7081 */
	virtual bool MeshTrace(CSceneWorld* , const MeshTraceInput& , MeshTraceOutput& );
	/* ../scenesystem/scenesystem.cpp:7097 */
	virtual bool MeshTraceAll(CSceneWorld* , const MeshTraceInput& , CUtlVector<MeshTraceOutput, CUtlMemory<MeshTraceOutput, int> >* );
	CManagedHandle m_ManagedHandle; /* 1728 4 */
	/* ../scenesystem/scenesystem.h:419 */
	virtual const CManagedHandle* GetManagedHandle(const CSceneWorld* );
	/* ../scenesystem/scenesystem.h:424 */
	void AddDirtyRayTrace(CSceneWorld* , CSceneObject* );
	/* ../scenesystem/scenesystem.h:437 */
	void RemoveDirtyRayTrace(CSceneWorld* , CSceneObject* );
	/* ../scenesystem/scenesystem.cpp:7113 */
	void FlushDirtyRayTraceObjects(CSceneWorld* );
	CUtlVector<CSceneObject*, CUtlMemory<CSceneObject*, int> > m_DirtyTraceObjects; /* 1736 32 */
	void CSceneWorld(class CSceneWorld *, const class CSceneWorld  &); /* linkage=_ZN11CSceneWorldC4ERKS_ */
	virtual void DeleteEndOfFrameObjects(class CSceneWorld *); /* linkage=_ZN11CSceneWorld23DeleteEndOfFrameObjectsEv */
	bool IsFreed(const class CSceneWorld  *); /* linkage=_ZNK11CSceneWorld7IsFreedEv */
	void MarkBusy(class CSceneWorld *, bool); /* linkage=_ZN11CSceneWorld8MarkBusyEb */
	/* <3566cc1> ../scenesystem/scenesystem.h:328 */
	virtual bool IsBusy(const class CSceneWorld  *); /* linkage=_ZNK11CSceneWorld6IsBusyEv */
	void CSceneWorld(class CSceneWorld *, const char  *); /* linkage=_ZN11CSceneWorldC4EPKc */
	virtual void ~CSceneWorld(class CSceneWorld *); /* linkage=_ZN11CSceneWorldD4Ev */
	virtual void DeleteAllObjects(class CSceneWorld *); /* linkage=_ZN11CSceneWorld16DeleteAllObjectsEv */
	virtual void Release(class CSceneWorld *); /* linkage=_ZN11CSceneWorld7ReleaseEv */
	/* <3db083f> ../scenesystem/scenesystem.h:338 */
	virtual class IPVS * GetPVS(class CSceneWorld *); /* linkage=_ZN11CSceneWorld6GetPVSEv */
	virtual void SetPVS(class CSceneWorld *, class IPVS *); /* linkage=_ZN11CSceneWorld6SetPVSEP4IPVS */
	virtual uint NextID(class CSceneWorld *); /* linkage=_ZN11CSceneWorld6NextIDEv */
	void VerifyWorld(class CSceneWorld *); /* linkage=_ZN11CSceneWorld11VerifyWorldEv */
	/* <2f3ee2f> ../scenesystem/scenesystem.cpp:6171 */
	void VerifyWorldForReal(class CSceneWorld *); /* linkage=_ZN11CSceneWorld18VerifyWorldForRealEv */
	virtual void MoveAllObjectsToAnotherSceneWorld(class CSceneWorld *, class ISceneWorld *); /* linkage=_ZN11CSceneWorld33MoveAllObjectsToAnotherSceneWorldEP11ISceneWorld */
	virtual void GetWorldBounds(class CSceneWorld *, class Vector &, class Vector &); /* linkage=_ZN11CSceneWorld14GetWorldBoundsER6VectorS1_ */
	/* <2f3057a> ../scenesystem/scenesystem.cpp:953 */
	virtual void GetAllSceneObjects(class CSceneWorld *, class CUtlVector<CSceneObject*, CUtlMemory<CSceneObject*, int> > &); /* linkage=_ZN11CSceneWorld18GetAllSceneObjectsER10CUtlVectorIP12CSceneObject10CUtlMemoryIS2_iEE */
	/* <2f304e6> ../scenesystem/scenesystem.cpp:962 */
	virtual int GetSceneObjectCount(class CSceneWorld *); /* linkage=_ZN11CSceneWorld19GetSceneObjectCountEv */
	virtual bool IsEmpty(const class CSceneWorld  *); /* linkage=_ZNK11CSceneWorld7IsEmptyEv */
	/* <2f3e0d0> ../scenesystem/scenesystem.cpp:406 */
	int NumberOfObjectsInPartition(const class CSceneWorld  *, int); /* linkage=_ZNK11CSceneWorld26NumberOfObjectsInPartitionEi */
	virtual const char  * GetWorldDebugName(class CSceneWorld *); /* linkage=_ZN11CSceneWorld17GetWorldDebugNameEv */
	void OnPVSChanged(class CSceneWorld *); /* linkage=_ZN11CSceneWorld12OnPVSChangedEv */
	/* <2f3025d> ../scenesystem/scenesystem.h:372 */
	virtual void SetDeleteAtEndOfFrame(class CSceneWorld *, bool); /* linkage=_ZN11CSceneWorld21SetDeleteAtEndOfFrameEb */
	/* <2f301e1> ../scenesystem/scenesystem.h:373 */
	virtual bool GetDeleteAtEndOfFrame(class CSceneWorld *); /* linkage=_ZN11CSceneWorld21GetDeleteAtEndOfFrameEv */
	virtual void FreeUnusedObjectChunks(class CSceneWorld *); /* linkage=_ZN11CSceneWorld22FreeUnusedObjectChunksEv */
	uint32 AddCullingBox(class CSceneWorld *, enum SceneSystemBoxCullMode_t, const class Vector  &, const class QAngle  &, const class Vector  &); /* linkage=_ZN11CSceneWorld13AddCullingBoxE24SceneSystemBoxCullMode_tRK6VectorRK6QAngleS3_ */
	void RemoveCullingBox(class CSceneWorld *, uint32); /* linkage=_ZN11CSceneWorld16RemoveCullingBoxEj */
	uint32 AddVolumetricFogVolume(class CSceneWorld *, const class SceneVolumetricFogVolume_t  &); /* linkage=_ZN11CSceneWorld22AddVolumetricFogVolumeERK26SceneVolumetricFogVolume_t */
	void RemoveVolumetricFogVolume(class CSceneWorld *, uint32); /* linkage=_ZN11CSceneWorld25RemoveVolumetricFogVolumeEj */
	virtual void SetBoundsGroups(class CSceneWorld *, const class CUtlVector<AABB_t, CUtlMemory<AABB_t, int> >  &); /* linkage=_ZN11CSceneWorld15SetBoundsGroupsERK10CUtlVectorI6AABB_t10CUtlMemoryIS1_iEE */
	/* <2f2fcfd> ../scenesystem/scenesystem.h:384 */
	virtual const class CUtlVector<AABB_t, CUtlMemory<AABB_t, int> >  & GetBoundsGroups(const class CSceneWorld  *); /* linkage=_ZNK11CSceneWorld15GetBoundsGroupsEv */
	virtual void Add3DSkyboxWorld(class CSceneWorld *, class ISceneWorld *); /* linkage=_ZN11CSceneWorld16Add3DSkyboxWorldEP11ISceneWorld */
	virtual void Remove3DSkyboxWorld(class CSceneWorld *, class ISceneWorld *); /* linkage=_ZN11CSceneWorld19Remove3DSkyboxWorldEP11ISceneWorld */
	virtual void Set3DSkyboxParameters(class CSceneWorld *, class Vector, class QAngle, float); /* linkage=_ZN11CSceneWorld21Set3DSkyboxParametersE6Vector6QAnglef */
	virtual void Get3DSkybox(class CSceneWorld *, class ISceneWorld * &, class Vector &, class QAngle &, float &); /* linkage=_ZN11CSceneWorld11Get3DSkyboxERP11ISceneWorldR6VectorR6QAngleRf */
	/* <3566c66> ../scenesystem/scenesystem.h:409 */
	virtual class RayTracingEnvironment * GetRayTracingEnvironment(class CSceneWorld *); /* linkage=_ZN11CSceneWorld24GetRayTracingEnvironmentEv */
	virtual bool MeshTrace(class CSceneWorld *, const class MeshTraceInput  &, class MeshTraceOutput &); /* linkage=_ZN11CSceneWorld9MeshTraceERK14MeshTraceInputR15MeshTraceOutput */
	virtual bool MeshTraceAll(class CSceneWorld *, const class MeshTraceInput  &, class CUtlVector<MeshTraceOutput, CUtlMemory<MeshTraceOutput, int> > *); /* linkage=_ZN11CSceneWorld12MeshTraceAllERK14MeshTraceInputP10CUtlVectorI15MeshTraceOutput10CUtlMemoryIS4_iEE */
	virtual const class CManagedHandle  * GetManagedHandle(const class CSceneWorld  *); /* linkage=_ZNK11CSceneWorld16GetManagedHandleEv */
	void AddDirtyRayTrace(class CSceneWorld *, class CSceneObject *); /* linkage=_ZN11CSceneWorld16AddDirtyRayTraceEP12CSceneObject */
	void RemoveDirtyRayTrace(class CSceneWorld *, class CSceneObject *); /* linkage=_ZN11CSceneWorld19RemoveDirtyRayTraceEP12CSceneObject */
	void FlushDirtyRayTraceObjects(class CSceneWorld *); /* linkage=_ZN11CSceneWorld25FlushDirtyRayTraceObjectsEv */
} __attribute__((__aligned__(16)));

// <03DAA1BA> ../scenesystem/scenesystem.h:320
inline void CSceneWorld::IsFreed()
{
} /* size: 0 */

// <02F1FD6B> ../scenesystem/scenesystem.h:326
// variables: 2
inline void CSceneWorld::MarkBusy(bool bBusy)
{
	const char   __FUNCTION__; // 63385
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 326
	}
} /* size: 0, variables: 1 */

// <03566CC1> ../scenesystem/scenesystem.h:328
// function call: 1
void CSceneWorld::IsBusy()
{
	CSceneWorld::IsFreed(); // 328
	{
	}
} /* size: 63, inline expansions: 1 (0 bytes) */

// <0355E6E9> ../scenesystem/scenesystem.h:328
// variables: 2
inline void CSceneWorld::IsBusy()
{
	const char   __FUNCTION__; // 20282
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 328
	}
} /* size: 0, variables: 1 */

// <02F1FD0D> ../scenesystem/scenesystem.h:328
// variables: 2
inline void CSceneWorld::IsBusy()
{
	const char   __FUNCTION__; // 63331
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 328
	}
} /* size: 0, variables: 1 */

// <03DB083F> ../scenesystem/scenesystem.h:338
// function call: 1
void CSceneWorld::GetPVS()
{
	CSceneWorld::IsFreed(); // 340
	{
	}
} /* size: 63, inline expansions: 1 (0 bytes) */

// <03DAA15B> ../scenesystem/scenesystem.h:338
// variables: 2
inline void CSceneWorld::GetPVS()
{
	const char   __FUNCTION__; // 24626
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 340
	}
} /* size: 0, variables: 1 */

// <0355E68B> ../scenesystem/scenesystem.h:338
// variables: 2
inline void CSceneWorld::GetPVS()
{
	const char   __FUNCTION__; // 20282
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 340
	}
} /* size: 0, variables: 1 */

// <0323B7AB> ../scenesystem/scenesystem.h:338
// variables: 2
inline void CSceneWorld::GetPVS()
{
	const char   __FUNCTION__; // 39455
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 340
	}
} /* size: 0, variables: 1 */

// <02F1FC4E> ../scenesystem/scenesystem.h:338
// variables: 2
// function call: 1
void CSceneWorld::GetPVS()
{
	const char   __FUNCTION__; // 63331
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 340
	}
	CSceneWorld::IsFreed(); // 340
} /* size: 63, variables: 1, inline expansions: 1 (0 bytes) */

// <02F1FB45> ../scenesystem/scenesystem.h:343
// variables: 2
// function call: 1
void CSceneWorld::SetPVS(IPVS* pPVS)
{
	const char   __FUNCTION__; // 63331
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 345
	}
	CSceneWorld::IsFreed(); // 345
} /* size: 109, variables: 1, inline expansions: 1 (0 bytes) */

// <035670BB> ../scenesystem/scenesystem.h:357
void CSceneWorld::VerifyWorld()
{
	{
	}
} /* size: 23 */

// <0355E648> ../scenesystem/scenesystem.h:357
// variables: 2
inline void CSceneWorld::VerifyWorld()
{
	const char   __FUNCTION__; // 20407
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 357
	}
} /* size: 0, variables: 1 */

// <02F1FB02> ../scenesystem/scenesystem.h:357
// variables: 2
inline void CSceneWorld::VerifyWorld()
{
	const char   __FUNCTION__; // 63466
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 357
	}
} /* size: 0, variables: 1 */

// <02F3025D> ../scenesystem/scenesystem.h:372
// function call: 1
void CSceneWorld::SetDeleteAtEndOfFrame(bool bDelete)
{
	CSceneWorld::IsFreed(); // 372
	{
	}
} /* size: 83, inline expansions: 1 (0 bytes) */

// <02F1FA97> ../scenesystem/scenesystem.h:372
// variables: 2
inline void CSceneWorld::SetDeleteAtEndOfFrame(bool bDelete)
{
	const char   __FUNCTION__; // 63736
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 372
	}
} /* size: 0, variables: 1 */

// <02F301E1> ../scenesystem/scenesystem.h:373
// function call: 1
void CSceneWorld::GetDeleteAtEndOfFrame()
{
	CSceneWorld::IsFreed(); // 373
	{
	}
} /* size: 69, inline expansions: 1 (0 bytes) */

// <02F1FA39> ../scenesystem/scenesystem.h:373
// variables: 2
inline void CSceneWorld::GetDeleteAtEndOfFrame()
{
	const char   __FUNCTION__; // 63736
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 373
	}
} /* size: 0, variables: 1 */

// <02F1F3AA> ../scenesystem/scenesystem.h:383
// variable: 1
// function calls: 29
void CSceneWorld::SetBoundsGroups(const CUtlVector<AABB_t, CUtlMemory<AABB_t, int> >& bounds)
{
	CUtlVectorBase<AABB_t, CUtlMemory<AABB_t, int> >::Count(); // 573
	CUtlVectorBase<AABB_t, CUtlMemory<AABB_t, int> >::RemoveMultipleFromTail(
				int num);  // 1323
	CUtlMemory<AABB_t, int>::NumAllocated(); // 782
	CUtlMemory<AABB_t, int>::IsGrowable(); // 823
	CUtlMemory<AABB_t, int>::IsExternallyAllocated(); // 859
	CUtlMemory<AABB_t, int>::IsExternallyAllocated(); // 861
	CUtlMemory<AABB_t, int>::Grow(
		int num);  // 806
	CUtlVectorBase<AABB_t, CUtlMemory<AABB_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<AABB_t, CUtlMemory<AABB_t, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<AABB_t, CUtlMemory<AABB_t, int> >::GrowVector(
			int num);  // 1445
	{
		int i; // 1451
	}
	CUtlVectorBase<AABB_t, CUtlMemory<AABB_t, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<AABB_t, CUtlMemory<AABB_t, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<AABB_t, CUtlMemory<AABB_t, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<AABB_t, CUtlMemory<AABB_t, int> >::SetCount(
		int count);  // 573
	CUtlMemory<AABB_t, int>::Base(); // 112
	CUtlVectorBase<AABB_t, CUtlMemory<AABB_t, int> >::Base(); // 102
	CUtlVectorBase<AABB_t, CUtlMemory<AABB_t, int> >::begin(); // 574
	CUtlMemory<AABB_t, int>::Base(); // 113
	CUtlVectorBase<AABB_t, CUtlMemory<AABB_t, int> >::Base(); // 105
	CUtlVectorBase<AABB_t, CUtlMemory<AABB_t, int> >::Count(); // 105
	CUtlVectorBase<AABB_t, CUtlMemory<AABB_t, int> >::end(); // 574
	Vector::operator=(
			const Vector& vOther);  // 17
	Vector::operator=(
			const Vector& vOther);  // 17
	AABB_t::operator=(
			const AABB_t  &);  // 209
	UtlTraitsCopyRange<AABB_t>(const AABB_t* pFrom,
					const AABB_t* pFromEnd,
					AABB_t* pTo);  // 200
	UtlTraitsCopyRange<AABB_t>(const AABB_t* pFrom,
					const AABB_t* pFromEnd,
					AABB_t* pTo);  // 574
	CUtlVectorBase<AABB_t, CUtlMemory<AABB_t, int> >::operator=(
			const CUtlVectorBase<AABB_t, CUtlMemory<AABB_t, int> >& other);  // 565
	CUtlVectorBase<AABB_t, CUtlMemory<AABB_t, int> >::operator=(
			const CUtlVectorBase<AABB_t, CUtlMemory<AABB_t, int> >& other);  // 452
	CUtlVector<AABB_t, CUtlMemory<AABB_t, int> >::operator=(
			const CUtlVector<AABB_t, CUtlMemory<AABB_t, int> >& src);  // 383
} /* size: 507, inline expansions: 29 (3883 bytes) */

// <02F2FCFD> ../scenesystem/scenesystem.h:384
void CSceneWorld::GetBoundsGroups()
{
} /* size: 12 */

// <02F1F391> ../scenesystem/scenesystem.h:384
inline void CSceneWorld::GetBoundsGroups()
{
} /* size: 0 */

// <03566C66> ../scenesystem/scenesystem.h:409
void CSceneWorld::GetRayTracingEnvironment()
{
} /* size: 12 */

// <0355E62F> ../scenesystem/scenesystem.h:409
inline void CSceneWorld::GetRayTracingEnvironment()
{
} /* size: 0 */

// <02F1F34A> ../scenesystem/scenesystem.h:419
void CSceneWorld::GetManagedHandle()
{
} /* size: 12 */

// <0355E5FC> ../scenesystem/scenesystem.h:424
// variable: 1
inline void CSceneWorld::AddDirtyRayTrace(CSceneObject* object)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_428; // 428
} /* size: 0, variables: 1 */

// <0355E5C9> ../scenesystem/scenesystem.h:437
// variable: 1
inline void CSceneWorld::RemoveDirtyRayTrace(CSceneObject* object)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_441; // 441
} /* size: 0, variables: 1 */

// <02F1F2FB> ../scenesystem/scenesystem.h:456
// variables: 2
inline int RootLODLevel(const CSceneObject* pObject, const ISceneView* pRootView)
{
	ConVar sc_force_lod_level; // 458
	int nLodLevel; // 460
} /* size: 0, variables: 2 */

// <037440E1> ../scenesystem/scenesystem.h:512
void SceneScratchRenderTargetDesc_t::SceneScratchRenderTargetDesc_t()
{
} /* size: 0 */

// <037440C3> ../scenesystem/scenesystem.h:512
inline void SceneScratchRenderTargetDesc_t::SceneScratchRenderTargetDesc_t()
{
} /* size: 0 */

// <02DA6A22> ../scenesystem/scenesystem.h:512
// member variables: 6
// struct size: 32
struct SceneScratchRenderTargetDesc_t {
	int m_nWidth; /* 0 4 */
	int m_nHeight; /* 4 4 */
	ImageFormat m_Format; /* 8 4 */
	RenderMultisampleType_t m_nMSAAType; /* 12 4 */
	HRenderTexture m_hRenderTarget; /* 16 8 */
	RuntimeTextureSpecificationFlags_t m_nTextureSpecFlags; /* 24 4 */
};

// <02DA6A9C> ../scenesystem/scenesystem.h:565
// member functions: 2
// member variables: 7
// struct size: 64
struct BoneSetupInfo_t {
	/* ../scenesystem/scenesystem.h:567 */
	void BoneSetupInfo_t(BoneSetupInfo_t* );
	/* ../scenesystem/scenesystem.h:572 */
	void Init(BoneSetupInfo_t* );
	CMeshInstance * m_pMeshInstance; /* 0 8 */
	CSceneAnimatableObject * m_pSceneObject; /* 8 8 */
	SceneSystemTransformEntry_t * m_pTransformBufferOutput; /* 16 8 */
	ExtraShaderData_t m_extraShaderData; /* 24 16 */
	const int16 * m_pLocalToMasterMapping; /* 40 8 */
	BoneSetupInfo_t * m_pNext; /* 48 8 */
	int m_nTransforms; /* 56 4 */
};

// <03E9BB41> ../scenesystem/scenesystem.h:567
void BoneSetupInfo_t::BoneSetupInfo_t()
{
} /* size: 0 */

// <03E9BB28> ../scenesystem/scenesystem.h:567
inline void BoneSetupInfo_t::BoneSetupInfo_t()
{
} /* size: 0 */

// <02E98E80> ../scenesystem/scenesystem.h:586
void FlexDescSetupInfo_t::~FlexDescSetupInfo_t()
{
} /* size: 0 */

// <02E98E63> ../scenesystem/scenesystem.h:586
inline void FlexDescSetupInfo_t::~FlexDescSetupInfo_t()
{
} /* size: 0 */

// <02DA6B6D> ../scenesystem/scenesystem.h:586
// member functions: 3
// member variables: 9
// struct size: 96
struct FlexDescSetupInfo_t {
	/* ../scenesystem/scenesystem.h:588 */
	void FlexDescSetupInfo_t(FlexDescSetupInfo_t* );
	/* ../scenesystem/scenesystem.h:593 */
	void Init(FlexDescSetupInfo_t* );
	CModelMeshHandle m_hRenderMesh; /* 0 16 */
	CSceneAnimatableObject * m_pSceneObject; /* 16 8 */
	const int16 * m_pLocalToModelFlexControllerMapping; /* 24 8 */
	FlexDescSetupInfo_t * m_pNext; /* 32 8 */
	CUtlVector<float, CUtlMemory<float, int> > m_flexDescWeights; /* 40 32 */
	int m_nTransformSlotIndexForMorphAndTranslucencyInfo; /* 72 4 */
	bool m_bIsValid; /* 76 1 */
	float * m_pFlexDescDelayedWeights; /* 80 8 */
	float * m_pFlexTimeLast; /* 88 8 */
	void ~FlexDescSetupInfo_t(FlexDescSetupInfo_t* );
};

// <03E5799D> ../scenesystem/scenesystem.h:586
// member functions: 2
// member variables: 9
// struct size: 96
struct FlexDescSetupInfo_t {
	/* ../scenesystem/scenesystem.h:588 */
	void FlexDescSetupInfo_t(FlexDescSetupInfo_t* );
	/* ../scenesystem/scenesystem.h:593 */
	void Init(FlexDescSetupInfo_t* );
	CModelMeshHandle m_hRenderMesh; /* 0 16 */
	CSceneAnimatableObject * m_pSceneObject; /* 16 8 */
	const int16 * m_pLocalToModelFlexControllerMapping; /* 24 8 */
	FlexDescSetupInfo_t * m_pNext; /* 32 8 */
	CUtlVector<float, CUtlMemory<float, int> > m_flexDescWeights; /* 40 32 */
	int m_nTransformSlotIndexForMorphAndTranslucencyInfo; /* 72 4 */
	bool m_bIsValid; /* 76 1 */
	float * m_pFlexDescDelayedWeights; /* 80 8 */
	float * m_pFlexTimeLast; /* 88 8 */
};

// <03E9BB11> ../scenesystem/scenesystem.h:588
void FlexDescSetupInfo_t::FlexDescSetupInfo_t()
{
} /* size: 0 */

// <03E9BAF8> ../scenesystem/scenesystem.h:588
inline void FlexDescSetupInfo_t::FlexDescSetupInfo_t()
{
} /* size: 0 */

// <03E9BADF> ../scenesystem/scenesystem.h:593
inline void FlexDescSetupInfo_t::Init()
{
} /* size: 0 */

// <02DBB10C> ../scenesystem/scenesystem.h:617
// member functions: 14
// member variables: 3
// class size: 24
class CPreRenderSubmissionSetupList<BoneSetupInfo_t> {
	/* ../scenesystem/scenesystem.h:620 */
	void CPreRenderSubmissionSetupList(CPreRenderSubmissionSetupList<BoneSetupInfo_t>* );
	/* ../scenesystem/scenesystem.h:622 */
	void AddSetup(CPreRenderSubmissionSetupList<BoneSetupInfo_t>* , BoneSetupInfo_t* );
	/* ../scenesystem/scenesystem.h:628 */
	BoneSetupInfo_t* GetFreeSetupJob(CPreRenderSubmissionSetupList<BoneSetupInfo_t>* );
	/* ../scenesystem/scenesystem.h:640 */
	void Purge(CPreRenderSubmissionSetupList<BoneSetupInfo_t>* );
	/* ../scenesystem/scenesystem.h:646 */
	int Count(const CPreRenderSubmissionSetupList<BoneSetupInfo_t>* );
	/* ../scenesystem/scenesystem.h:651 */
	BoneSetupInfo_t* Head(CPreRenderSubmissionSetupList<BoneSetupInfo_t>* );
	/* ../scenesystem/scenesystem.h:656 */
	void AppendFreeToList(CPreRenderSubmissionSetupList<BoneSetupInfo_t>* , BoneSetupInfo_t* );
private:
	CUtlIntrusiveList<BoneSetupInfo_t> m_setupList; /* 0 8 */
	CUtlIntrusiveList<BoneSetupInfo_t> m_setupFreeList; /* 8 8 */
	CInterlockedInt m_nCount __attribute__((__aligned__(4))); /* 16 4 */
	void CPreRenderSubmissionSetupList(class CPreRenderSubmissionSetupList<BoneSetupInfo_t> *); /* linkage=_ZN29CPreRenderSubmissionSetupListI15BoneSetupInfo_tEC4Ev */
	void AddSetup(class CPreRenderSubmissionSetupList<BoneSetupInfo_t> *, class BoneSetupInfo_t *); /* linkage=_ZN29CPreRenderSubmissionSetupListI15BoneSetupInfo_tE8AddSetupEPS0_ */
	class BoneSetupInfo_t * GetFreeSetupJob(class CPreRenderSubmissionSetupList<BoneSetupInfo_t> *); /* linkage=_ZN29CPreRenderSubmissionSetupListI15BoneSetupInfo_tE15GetFreeSetupJobEv */
	void Purge(class CPreRenderSubmissionSetupList<BoneSetupInfo_t> *); /* linkage=_ZN29CPreRenderSubmissionSetupListI15BoneSetupInfo_tE5PurgeEv */
	int Count(const class CPreRenderSubmissionSetupList<BoneSetupInfo_t>  *); /* linkage=_ZNK29CPreRenderSubmissionSetupListI15BoneSetupInfo_tE5CountEv */
	class BoneSetupInfo_t * Head(class CPreRenderSubmissionSetupList<BoneSetupInfo_t> *); /* linkage=_ZN29CPreRenderSubmissionSetupListI15BoneSetupInfo_tE4HeadEv */
	void AppendFreeToList(class CPreRenderSubmissionSetupList<BoneSetupInfo_t> *, class BoneSetupInfo_t *); /* linkage=_ZN29CPreRenderSubmissionSetupListI15BoneSetupInfo_tE16AppendFreeToListEPS0_ */
} __attribute__((__aligned__(8)));

// <02DBB66E> ../scenesystem/scenesystem.h:617
// member functions: 14
// member variables: 3
// class size: 24
class CPreRenderSubmissionSetupList<FlexDescSetupInfo_t> {
	/* ../scenesystem/scenesystem.h:620 */
	void CPreRenderSubmissionSetupList(CPreRenderSubmissionSetupList<FlexDescSetupInfo_t>* );
	/* ../scenesystem/scenesystem.h:622 */
	void AddSetup(CPreRenderSubmissionSetupList<FlexDescSetupInfo_t>* , FlexDescSetupInfo_t* );
	/* ../scenesystem/scenesystem.h:628 */
	FlexDescSetupInfo_t* GetFreeSetupJob(CPreRenderSubmissionSetupList<FlexDescSetupInfo_t>* );
	/* ../scenesystem/scenesystem.h:640 */
	void Purge(CPreRenderSubmissionSetupList<FlexDescSetupInfo_t>* );
	/* ../scenesystem/scenesystem.h:646 */
	int Count(const CPreRenderSubmissionSetupList<FlexDescSetupInfo_t>* );
	/* ../scenesystem/scenesystem.h:651 */
	FlexDescSetupInfo_t* Head(CPreRenderSubmissionSetupList<FlexDescSetupInfo_t>* );
	/* ../scenesystem/scenesystem.h:656 */
	void AppendFreeToList(CPreRenderSubmissionSetupList<FlexDescSetupInfo_t>* , FlexDescSetupInfo_t* );
private:
	CUtlIntrusiveList<FlexDescSetupInfo_t> m_setupList; /* 0 8 */
	CUtlIntrusiveList<FlexDescSetupInfo_t> m_setupFreeList; /* 8 8 */
	CInterlockedInt m_nCount __attribute__((__aligned__(4))); /* 16 4 */
	void CPreRenderSubmissionSetupList(class CPreRenderSubmissionSetupList<FlexDescSetupInfo_t> *); /* linkage=_ZN29CPreRenderSubmissionSetupListI19FlexDescSetupInfo_tEC4Ev */
	void AddSetup(class CPreRenderSubmissionSetupList<FlexDescSetupInfo_t> *, class FlexDescSetupInfo_t *); /* linkage=_ZN29CPreRenderSubmissionSetupListI19FlexDescSetupInfo_tE8AddSetupEPS0_ */
	class FlexDescSetupInfo_t * GetFreeSetupJob(class CPreRenderSubmissionSetupList<FlexDescSetupInfo_t> *); /* linkage=_ZN29CPreRenderSubmissionSetupListI19FlexDescSetupInfo_tE15GetFreeSetupJobEv */
	void Purge(class CPreRenderSubmissionSetupList<FlexDescSetupInfo_t> *); /* linkage=_ZN29CPreRenderSubmissionSetupListI19FlexDescSetupInfo_tE5PurgeEv */
	int Count(const class CPreRenderSubmissionSetupList<FlexDescSetupInfo_t>  *); /* linkage=_ZNK29CPreRenderSubmissionSetupListI19FlexDescSetupInfo_tE5CountEv */
	class FlexDescSetupInfo_t * Head(class CPreRenderSubmissionSetupList<FlexDescSetupInfo_t> *); /* linkage=_ZN29CPreRenderSubmissionSetupListI19FlexDescSetupInfo_tE4HeadEv */
	void AppendFreeToList(class CPreRenderSubmissionSetupList<FlexDescSetupInfo_t> *, class FlexDescSetupInfo_t *); /* linkage=_ZN29CPreRenderSubmissionSetupListI19FlexDescSetupInfo_tE16AppendFreeToListEPS0_ */
} __attribute__((__aligned__(8)));

// <02EAE216> ../scenesystem/scenesystem.h:620
void CPreRenderSubmissionSetupList<BoneSetupInfo_t>::CPreRenderSubmissionSetupList()
{
} /* size: 0 */

// <02EAE1FD> ../scenesystem/scenesystem.h:620
inline void CPreRenderSubmissionSetupList<BoneSetupInfo_t>::CPreRenderSubmissionSetupList()
{
} /* size: 0 */

// <02EAE1E6> ../scenesystem/scenesystem.h:620
void CPreRenderSubmissionSetupList<FlexDescSetupInfo_t>::CPreRenderSubmissionSetupList()
{
} /* size: 0 */

// <02EAE1CD> ../scenesystem/scenesystem.h:620
inline void CPreRenderSubmissionSetupList<FlexDescSetupInfo_t>::CPreRenderSubmissionSetupList()
{
} /* size: 0 */

// <03E890C4> ../scenesystem/scenesystem.h:622
inline void CPreRenderSubmissionSetupList<FlexDescSetupInfo_t>::AddSetup(FlexDescSetupInfo_t* pSetup)
{
} /* size: 0 */

// <03E89054> ../scenesystem/scenesystem.h:622
inline void CPreRenderSubmissionSetupList<BoneSetupInfo_t>::AddSetup(BoneSetupInfo_t* pSetup)
{
} /* size: 0 */

// <03E890EA> ../scenesystem/scenesystem.h:628
// variable: 1
inline void CPreRenderSubmissionSetupList<FlexDescSetupInfo_t>::GetFreeSetupJob()
{
	FlexDescSetupInfo_t* pSetup; // 630
} /* size: 0, variables: 1 */

// <03E8907A> ../scenesystem/scenesystem.h:628
// variable: 1
inline void CPreRenderSubmissionSetupList<BoneSetupInfo_t>::GetFreeSetupJob()
{
	BoneSetupInfo_t* pSetup; // 630
} /* size: 0, variables: 1 */

// <02EAC3EB> ../scenesystem/scenesystem.h:640
inline void CPreRenderSubmissionSetupList<BoneSetupInfo_t>::Purge()
{
} /* size: 0 */

// <02EAC3D2> ../scenesystem/scenesystem.h:640
inline void CPreRenderSubmissionSetupList<FlexDescSetupInfo_t>::Purge()
{
} /* size: 0 */

// <02EA608E> ../scenesystem/scenesystem.h:651
inline void CPreRenderSubmissionSetupList<BoneSetupInfo_t>::Head()
{
} /* size: 0 */

// <02EA6016> ../scenesystem/scenesystem.h:651
inline void CPreRenderSubmissionSetupList<FlexDescSetupInfo_t>::Head()
{
} /* size: 0 */

// <02EA6048> ../scenesystem/scenesystem.h:656
// variables: 2
inline void CPreRenderSubmissionSetupList<BoneSetupInfo_t>::AppendFreeToList(BoneSetupInfo_t* pTail)
{
	const char   __FUNCTION__; // 63601
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 659
	}
} /* size: 0, variables: 1 */

// <02EA5FD0> ../scenesystem/scenesystem.h:656
// variables: 2
inline void CPreRenderSubmissionSetupList<FlexDescSetupInfo_t>::AppendFreeToList(FlexDescSetupInfo_t* pTail)
{
	const char   __FUNCTION__; // 63601
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 659
	}
} /* size: 0, variables: 1 */

// <02EC2AD4> ../scenesystem/scenesystem.h:674
void QueuedSceneObjectUpdateJob_t::QueuedSceneObjectUpdateJob_t()
{
} /* size: 0 */

// <02EC2AB7> ../scenesystem/scenesystem.h:674
inline void QueuedSceneObjectUpdateJob_t::QueuedSceneObjectUpdateJob_t()
{
} /* size: 0 */

// <02EA599E> ../scenesystem/scenesystem.h:674
void QueuedSceneObjectUpdateJob_t::~QueuedSceneObjectUpdateJob_t()
{
} /* size: 0 */

// <02EA5981> ../scenesystem/scenesystem.h:674
inline void QueuedSceneObjectUpdateJob_t::~QueuedSceneObjectUpdateJob_t()
{
} /* size: 0 */

// <02DA6C70> ../scenesystem/scenesystem.h:674
// member functions: 2
// member variables: 2
// struct size: 40
struct QueuedSceneObjectUpdateJob_t {
	QueuedSceneObjectUpdateJob_t * m_pNext; /* 0 8 */
	function<void()> m_fn; /* 8 32 */
	void ~QueuedSceneObjectUpdateJob_t(QueuedSceneObjectUpdateJob_t* );
	void QueuedSceneObjectUpdateJob_t(QueuedSceneObjectUpdateJob_t* );
};

// <02B58730> ../scenesystem/scenesystem.h:694
// member functions: 18
// member variables: 5
// class size: 122,904
class CSceneDrawList {
	/* ../scenesystem/scenesystem.h:697 */
	void CSceneDrawList(CSceneDrawList* );
	/* ../scenesystem/scenesystem.h:703 */
	void Init(CSceneDrawList* );
	/* ../scenesystem/scenesystem.h:710 */
	bool IsFull(const CSceneDrawList* );
	/* ../scenesystem/scenesystem.h:711 */
	bool IsEmpty(const CSceneDrawList* );
	/* ../scenesystem/scenesystem.h:712 */
	int Count(const CSceneDrawList* );
	/* ../scenesystem/scenesystem.h:716 */
	void Check(const CSceneDrawList* );
	/* ../scenesystem/scenesystem.h:736 */
	int NumRemainingSlots(const CSceneDrawList* );
	int m_nNumPrimitives; /* 0 4 */
	int m_nCurPrimitiveIndex; /* 4 4 */
	CMeshDrawPrimitive_t m_drawPrimitives[1024]; /* 8 122880 */
	CSceneDrawList * m_pNext; /* 122888 8 */
	DrawListState_t m_nState; /* 122896 4 */
	/* ../scenesystem/scenesystem.h:744 */
	const CMeshDrawPrimitive_t* begin(const CSceneDrawList* );
	/* ../scenesystem/scenesystem.h:745 */
	const CMeshDrawPrimitive_t* end(const CSceneDrawList* );
	void CSceneDrawList(class CSceneDrawList *); /* linkage=_ZN14CSceneDrawListC4Ev */
	void Init(class CSceneDrawList *); /* linkage=_ZN14CSceneDrawList4InitEv */
	bool IsFull(const class CSceneDrawList  *); /* linkage=_ZNK14CSceneDrawList6IsFullEv */
	bool IsEmpty(const class CSceneDrawList  *); /* linkage=_ZNK14CSceneDrawList7IsEmptyEv */
	int Count(const class CSceneDrawList  *); /* linkage=_ZNK14CSceneDrawList5CountEv */
	void Check(const class CSceneDrawList  *); /* linkage=_ZNK14CSceneDrawList5CheckEv */
	int NumRemainingSlots(const class CSceneDrawList  *); /* linkage=_ZNK14CSceneDrawList17NumRemainingSlotsEv */
	const class CMeshDrawPrimitive_t  * begin(const class CSceneDrawList  *); /* linkage=_ZNK14CSceneDrawList5beginEv */
	const class CMeshDrawPrimitive_t  * end(const class CSceneDrawList  *); /* linkage=_ZNK14CSceneDrawList3endEv */
};

// <039C119E> ../scenesystem/utils/../scenesystem.h:694
// member functions: 18
// member variables: 5
// class size: 122,904
class CSceneDrawList {
	/* ../scenesystem/utils/../scenesystem.h:697 */
	void CSceneDrawList(CSceneDrawList* );
	/* ../scenesystem/utils/../scenesystem.h:703 */
	void Init(CSceneDrawList* );
	/* ../scenesystem/utils/../scenesystem.h:710 */
	bool IsFull(const CSceneDrawList* );
	/* ../scenesystem/utils/../scenesystem.h:711 */
	bool IsEmpty(const CSceneDrawList* );
	/* ../scenesystem/utils/../scenesystem.h:712 */
	int Count(const CSceneDrawList* );
	/* ../scenesystem/utils/../scenesystem.h:716 */
	void Check(const CSceneDrawList* );
	/* ../scenesystem/utils/../scenesystem.h:736 */
	int NumRemainingSlots(const CSceneDrawList* );
	int m_nNumPrimitives; /* 0 4 */
	int m_nCurPrimitiveIndex; /* 4 4 */
	CMeshDrawPrimitive_t m_drawPrimitives[1024]; /* 8 122880 */
	CSceneDrawList * m_pNext; /* 122888 8 */
	DrawListState_t m_nState; /* 122896 4 */
	/* ../scenesystem/utils/../scenesystem.h:744 */
	const CMeshDrawPrimitive_t* begin(const CSceneDrawList* );
	/* ../scenesystem/utils/../scenesystem.h:745 */
	const CMeshDrawPrimitive_t* end(const CSceneDrawList* );
	void CSceneDrawList(class CSceneDrawList *); /* linkage=_ZN14CSceneDrawListC4Ev */
	void Init(class CSceneDrawList *); /* linkage=_ZN14CSceneDrawList4InitEv */
	bool IsFull(const class CSceneDrawList  *); /* linkage=_ZNK14CSceneDrawList6IsFullEv */
	bool IsEmpty(const class CSceneDrawList  *); /* linkage=_ZNK14CSceneDrawList7IsEmptyEv */
	int Count(const class CSceneDrawList  *); /* linkage=_ZNK14CSceneDrawList5CountEv */
	void Check(const class CSceneDrawList  *); /* linkage=_ZNK14CSceneDrawList5CheckEv */
	int NumRemainingSlots(const class CSceneDrawList  *); /* linkage=_ZNK14CSceneDrawList17NumRemainingSlotsEv */
	const class CMeshDrawPrimitive_t  * begin(const class CSceneDrawList  *); /* linkage=_ZNK14CSceneDrawList5beginEv */
	const class CMeshDrawPrimitive_t  * end(const class CSceneDrawList  *); /* linkage=_ZNK14CSceneDrawList3endEv */
};

// <02F1F2B0> ../scenesystem/scenesystem.h:697
void CSceneDrawList::CSceneDrawList()
{
} /* size: 0 */

// <02F1F297> ../scenesystem/scenesystem.h:697
inline void CSceneDrawList::CSceneDrawList()
{
} /* size: 0 */

// <02F1F27E> ../scenesystem/scenesystem.h:703
inline void CSceneDrawList::Init()
{
} /* size: 0 */

// <02F1F265> ../scenesystem/scenesystem.h:710
inline void CSceneDrawList::IsFull()
{
} /* size: 0 */

// <02F1F24C> ../scenesystem/scenesystem.h:711
inline void CSceneDrawList::IsEmpty()
{
} /* size: 0 */

// <02F1F233> ../scenesystem/scenesystem.h:712
inline void CSceneDrawList::Count()
{
} /* size: 0 */

// <03475661> ../scenesystem/scenesystem.h:716
// variables: 9
inline void CSceneDrawList::Check()
{
	const char   __FUNCTION__; // 27272
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 718
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 719
	}
	{
		int i; // 722
		{
			const CMeshDrawPrimitive_t* pPrim; // 724
			const CSceneObject* pObj; // 725
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 728
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 729
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 730
			}
		}
	}
} /* size: 0, variables: 1 */

// <02F3095A> ../scenesystem/scenesystem.h:716
void CSceneDrawList::Check()
{
	{
	}
} /* size: 23 */

// <02F1F159> ../scenesystem/scenesystem.h:716
// variables: 9
inline void CSceneDrawList::Check()
{
	const char   __FUNCTION__; // 63304
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 718
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 719
	}
	{
		int i; // 722
		{
			const CMeshDrawPrimitive_t* pPrim; // 724
			const CSceneObject* pObj; // 725
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 728
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 729
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 730
			}
		}
	}
} /* size: 0, variables: 1 */

// <02F1F140> ../scenesystem/scenesystem.h:736
inline void CSceneDrawList::NumRemainingSlots()
{
} /* size: 0 */

// <02F11763> ../scenesystem/scenesystem.h:750
void CViewList::CViewList()
{
} /* size: 0 */

// <02F11746> ../scenesystem/scenesystem.h:750
inline void CViewList::CViewList()
{
} /* size: 0 */

// <02F1172F> ../scenesystem/scenesystem.h:750
void CViewList::~CViewList()
{
} /* size: 0 */

// <02F11712> ../scenesystem/scenesystem.h:750
inline void CViewList::~CViewList()
{
} /* size: 0 */

// <02DA8AD4> ../scenesystem/scenesystem.h:750
// member functions: 10
// member variable: 1
// class size: 160
class CViewList {
	CUtlVectorFixedGrowable<CSceneView*, 16> m_viewList __attribute__((__aligned__(8))); /* 0 160 */
	/* ../scenesystem/scenesystem.h:756 */
	void MoveTo(CViewList* , CViewList& );
	/* ../scenesystem/scenesystem.h:759 */
	void Purge(CViewList* );
	/* ../scenesystem/scenesystem.h:762 */
	void Submit(CViewList* );
	void ~CViewList(CViewList* );
	void CViewList(CViewList* );
	void MoveTo(class CViewList *, class CViewList &); /* linkage=_ZN9CViewList6MoveToERS_ */
	/* <2f4d176> ../scenesystem/scenesystem.cpp:6613 */
	void Purge(class CViewList *); /* linkage=_ZN9CViewList5PurgeEv */
	/* <2f48c76> ../scenesystem/scenesystem.cpp:6604 */
	void Submit(class CViewList *); /* linkage=_ZN9CViewList6SubmitEv */
	void ~CViewList(class CViewList *); /* linkage=_ZN9CViewListD4Ev */
	void CViewList(class CViewList *); /* linkage=_ZN9CViewListC4Ev */
} __attribute__((__aligned__(8)));

// <02DA8BCC> ../scenesystem/scenesystem.h:776
// member functions: 564
// member variables: 113
// vtable entries: 140
// class size: 19,712
class CSceneSystem : public CTier3AppSystem<ISceneSystem, 0>, public CUtlMultiJobProcessor, public IMaxSwapChainDimensionsChangedListener {
	/* ../scenesystem/scenesystem.h:949 */
	class CCommandMemberInitializer_OnPrintExtraDataAllocations {
		/* ../scenesystem/scenesystem.h:949 */
		void CCommandMemberInitializer_OnPrintExtraDataAllocations(CCommandMemberInitializer_OnPrintExtraDataAllocations* );
	private:
		CConCommandMemberAccessor<CSceneSystem> m_ConCommandAccessor; /* 0 160 */
		void ~CCommandMemberInitializer_OnPrintExtraDataAllocations(CCommandMemberInitializer_OnPrintExtraDataAllocations* );
	};
	/* ../scenesystem/scenesystem.h:1018 */
	struct RenderAttributesSetup_t {
		const class CSceneView * m_pView; /* 0 8 */
		ISceneLayer * m_pLayer; /* 8 8 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../scenesystem/scenesystem.h:1294 */
	struct ScratchRenderTarget_t {
		SceneScratchRenderTargetInfo_t m_Info; /* 0 40 */
		int m_nWidth; /* 40 4 */
		int m_nHeight; /* 44 4 */
		int m_nSerialNumber; /* 48 4 */
		uint32 m_nKeepUntilFrame; /* 52 4 */
		HRenderTextureStrong m_hRenderTarget; /* 56 8 */
		CUtlStringToken m_GroupName; /* 64 4 */
		void ScratchRenderTarget_t(ScratchRenderTarget_t* );
		void ~ScratchRenderTarget_t(ScratchRenderTarget_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../scenesystem/scenesystem.h:1621 */
	struct FrameBufferScratchTexInfo_t {
		HRenderTextureStrong hTex; /* 0 8 */
		uint32 nHashCode; /* 8 4 */
		uint16 nWidth; /* 12 2 */
		uint16 nHeight; /* 14 2 */
		int nFramesToLive; /* 16 4 */
		/* ../scenesystem/scenesystem.h:1629 */
		void FrameBufferScratchTexInfo_t(FrameBufferScratchTexInfo_t* );
		/* ../scenesystem/scenesystem.h:1634 */
		void FrameBufferScratchTexInfo_t(FrameBufferScratchTexInfo_t* , const FrameBufferScratchTexInfo_t& );
		void ~FrameBufferScratchTexInfo_t(FrameBufferScratchTexInfo_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../scenesystem/scenesystem.h:1646 */
	struct VertexCacheUpdateRequest_t {
		const class CMeshInstance * m_pMeshInst; /* 0 8 */
		VertexBufferHandle_t m_hVB; /* 8 8 */
		int nVertCount; /* 16 4 */
		int nSrcBindOffset; /* 20 4 */
		int nDestVertexCacheOffset; /* 24 4 */
		int nTransformSlot; /* 28 4 */
		int nBlendWeightCount; /* 32 4 */
		int nMorphVertexOffset; /* 36 4 */
		bool bMorph; /* 40 1 */
		int nElementSizeInBytes; /* 44 4 */
		int nBoneIdxOffset; /* 48 4 */
		int nBoneIndexBits; /* 52 4 */
		int nBoneWeightOffset; /* 56 4 */
		int nNormalOffset; /* 60 4 */
		int nTangentOffset; /* 64 4 */
		bool bHasPackedNormal; /* 68 1 */
	};
	/* tag__fprintf: const_type tag not supported! */;
public:
	/* class CTier3AppSystem<ISceneSystem, 0> <ancestor>; */ /* 0 48 */
	/* class CUtlMultiJobProcessor <ancestor>; */ /* 48 24 */
	/* class IMaxSwapChainDimensionsChangedListener <ancestor>; */ /* 72 8 */
	void CSceneSystem(CSceneSystem* , const CSceneSystem& );
	/* ../scenesystem/scenesystem.cpp:222 */
	virtual InitReturnVal_t Init(CSceneSystem* );
	/* ../scenesystem/scenesystem.cpp:314 */
	virtual void PreShutdown(CSceneSystem* );
	/* ../scenesystem/scenesystem.cpp:320 */
	virtual void Shutdown(CSceneSystem* );
	/* ../scenesystem/scenesystem.cpp:186 */
	virtual const AppSystemInfo_t* GetDependencies(CSceneSystem* );
	/* ../scenesystem/scenesystem.h:806 */
	virtual CSceneObject* CreateSceneObject(CSceneSystem* , ISceneObjectDesc* , ESceneObjectFlags, ISceneWorld* , SceneObjectCreationFlags_t);
	/* ../scenesystem/scenesystem.h:807 */
	virtual CSceneObject* CreateSceneObject(CSceneSystem* , ESceneObjectFlags, ISceneWorld* , SceneObjectCreationFlags_t);
	/* ../scenesystem/scenesystem.h:808 */
	virtual CSceneObject* CreateSceneObjectFromBuffers(CSceneSystem* , ESceneObjectFlags, ISceneWorld* , VertexBufferHandle_t, IndexBufferHandle_t, HMaterial, int, int, const Vector& , const Vector& , RenderPrimitiveType_t, RenderMeshDrawPrimitiveFlags_t, const char* , bool);
	/* ../scenesystem/scenesystem.h:823 */
	virtual CSceneObject* CreateSceneObjectFromStaticBuffers(CSceneSystem* , SceneObjectCreationInfo_t& );
	/* ../scenesystem/scenesystem.h:825 */
	virtual ISceneObjectDesc* GetSceneObjectDesc(CSceneSystem* , const char* );
	/* ../scenesystem/scenesystem.h:826 */
	virtual void AddSceneObjectType(CSceneSystem* , const char* , ISceneObjectDesc* );
	/* ../scenesystem/scenesystem.h:827 */
	virtual void RemoveSceneObjectType(CSceneSystem* , const char* );
	/* ../scenesystem/scenesystem.cpp:1754 */
	virtual void AddListener(CSceneSystem* , ISceneSystemListener* );
	/* ../scenesystem/scenesystem.cpp:1764 */
	virtual void RemoveListener(CSceneSystem* , ISceneSystemListener* );
	/* ../scenesystem/scenesystem.cpp:1627 */
	virtual void BeginRenderingViews(CSceneSystem* , IRenderDevice* , bool);
	/* ../scenesystem/scenesystem.h:833 */
	virtual bool IsRenderingViews(CSceneSystem* );
	/* ../scenesystem/scenesystem.cpp:1769 */
	virtual ISceneView* AddView(CSceneSystem* , const char* , const CViewId& , const CFrustum& , SwapChainHandle_t, ISceneWorld* , const RenderViewport_t& , const CPVSBits* , int);
	/* ../scenesystem/scenesystem.cpp:1808 */
	virtual ISceneView* AddDynamicView(CSceneSystem* , const char* , const ISceneView* , const CFrustum& , SwapChainHandle_t, ISceneWorld* , const RenderViewport_t& , const CPVSBits* , int, int);
	/* ../scenesystem/scenesystem.cpp:1844 */
	virtual ISceneView* AddShadowView(CSceneSystem* , const char* , ISceneView* , const CFrustum* , const RenderViewport_t& , HRenderTexture, int, ESceneObjectFlags, ESceneObjectFlags, int, float, const CFrustum* );
	/* ../scenesystem/scenesystem.cpp:1719 */
	virtual ISceneView* AddViewFromTemplate(CSceneSystem* , const char* , const char* , const ISceneView* , const CFrustum& , SwapChainHandle_t, ISceneWorld* , const RenderViewport_t& , const CPVSBits* , const CRenderAttributes* );
	/* ../scenesystem/scenesystem.cpp:1696 */
	virtual void InstallTemplateViewFactory(CSceneSystem* , const char* , SceneTemplateViewFactoryDelegate_t);
	/* ../scenesystem/scenesystem.cpp:1707 */
	virtual void RemoveTemplateViewFactory(CSceneSystem* , const char* );
	/* ../scenesystem/scenesystem.cpp:6116 */
	virtual void BeginRenderingDynamicView(CSceneSystem* , ISceneView* , const RenderTargetDesc_t* , RenderViewport_t* );
	/* ../scenesystem/scenesystem.cpp:6191 */
	virtual void FinishRenderingViews(CSceneSystem* , float);
	/* ../scenesystem/scenesystem.cpp:1790 */
	virtual ISceneView* FindView(CSceneSystem* , const char* );
	/* ../scenesystem/scenesystem.cpp:6093 */
	virtual IRenderContext* RenderEmbeddedView(CSceneSystem* , ISceneView* , ISceneLayer* , const RenderTargetDesc_t* , RenderViewport_t* );
	/* ../scenesystem/scenesystem.h:850 */
	virtual void SetObjectBounds(CSceneSystem* , CSceneObject* , const Vector& , const Vector& );
	/* ../scenesystem/scenesystem.h:851 */
	virtual void SetObjectBoundsInfinite(CSceneSystem* , CSceneObject* );
	/* ../scenesystem/scenesystem.h:852 */
	virtual void GetObjectBounds(CSceneSystem* , const CSceneObject* , Vector& , Vector& );
	/* ../scenesystem/scenesystem.h:854 */
	virtual void SetPVSFromClusterMembership(CSceneSystem* , CSceneObject* , const uint32* , int);
	/* ../scenesystem/scenesystem.h:856 */
	virtual void SetSceneObjectTransformsFast(CSceneSystem* , CSceneObject** , int, const FourVectors* , const fltx4* , const FourVectors* , const fltx4* , const fltx4* , const fltx4* , float, const fltx4* , const fltx4* , const fltx4* );
	/* ../scenesystem/scenesystem.h:864 */
	virtual int FindOrCreateSceneObjectClass(CSceneSystem* , const char* );
	/* ../scenesystem/scenesystem.h:866 */
	virtual CSceneDebugTextObject* CreateTextObject(CSceneSystem* , Vector2D* , ISceneWorld* , const CTextLayoutInfo* , bool, const Vector& );
	/* ../scenesystem/scenesystem.h:868 */
	virtual CDecalSceneObject* CreateDecal(CSceneSystem* , ISceneWorld* );
	/* ../scenesystem/scenesystem.h:871 */
	virtual CSceneLightObject* CreateLight(CSceneSystem* , const LightDesc_t& , ISceneWorld* , bool);
	/* ../scenesystem/scenesystem.h:872 */
	virtual CSceneSkyBoxObject* CreateSkyBox(CSceneSystem* , HMaterial, ISceneWorld* );
	/* ../scenesystem/scenesystem.h:873 */
	virtual CSceneLightProbeVolumeObject* CreateLightProbeVolume(CSceneSystem* , ISceneWorld* );
	/* ../scenesystem/scenesystem.h:874 */
	virtual CSceneLPVDebugGridObject* CreateLightProbeVolumeDebugGrid(CSceneSystem* , ISceneWorld* , CSceneLightProbeVolumeObject* );
	/* ../scenesystem/scenesystem.h:875 */
	virtual void MarkLightProbeVolumeObjectUpdated(CSceneSystem* , CSceneLightProbeVolumeObject* );
	/* ../scenesystem/scenesystem.h:876 */
	virtual void MarkEnvironmentMapObjectUpdated(CSceneSystem* , CEnvMapSceneObject* );
	/* ../scenesystem/scenesystem.cpp:7002 */
	virtual uint32 AddCullingBox(CSceneSystem* , ISceneWorld* , SceneSystemBoxCullMode_t, const Vector& , const QAngle& , Vector);
	/* ../scenesystem/scenesystem.cpp:7014 */
	virtual void RemoveCullingBox(CSceneSystem* , ISceneWorld* , uint32);
	/* ../scenesystem/scenesystem.cpp:7023 */
	virtual uint32 AddVolumetricFogVolume(CSceneSystem* , ISceneWorld* , const SceneVolumetricFogVolume_t& );
	/* ../scenesystem/scenesystem.cpp:7032 */
	virtual void RemoveVolumetricFogVolume(CSceneSystem* , ISceneWorld* , uint32);
	/* ../scenesystem/scenesystem.cpp:365 */
	virtual ISceneWorld* CreateWorld(CSceneSystem* , const char* );
	/* ../scenesystem/scenesystem.cpp:372 */
	virtual void DestroyWorld(CSceneSystem* , ISceneWorld* );
	/* ../scenesystem/scenesystem.h:889 */
	virtual IRayTraceSceneWorld* CreateRayTraceWorld(CSceneSystem* , const char* , int);
	/* ../scenesystem/scenesystem.h:890 */
	virtual void DestroyRayTraceWorld(CSceneSystem* , IRayTraceSceneWorld* );
	/* ../scenesystem/scenesystem.h:892 */
	virtual VertexBufferHandle_t GetWellKnownVertexBuffer(CSceneSystem* , SceneSystemWellKnownVertexBufferObjectID_t);
	/* ../scenesystem/scenesystem.h:893 */
	virtual IndexBufferHandle_t GetWellKnownIndexBuffer(CSceneSystem* , SceneSystemWellKnownIndexBufferObjectID_t);
	/* ../scenesystem/scenesystem.h:894 */
	virtual RenderInputLayout_t GetWellKnownInputLayout(CSceneSystem* , SceneSystemWellKnownInputLayoutID_t, InputLayoutVariation_t);
	/* ../scenesystem/scenesystem.h:895 */
	virtual const RenderInputLayoutField_t* GetWellKnownInputLayoutFields(CSceneSystem* , SceneSystemWellKnownInputLayoutID_t, int* );
	/* ../scenesystem/scenesystem.h:896 */
	virtual HRenderTexture GetWellKnownTexture(CSceneSystem* , SceneSystemWellKnownTextureObjectID_t);
	/* ../scenesystem/scenesystem.h:897 */
	virtual const IMaterial2* GetWellKnownMaterial(CSceneSystem* , SceneSystemWellKnownMaterialObjectID_t);
	/* ../scenesystem/scenesystem.h:898 */
	virtual HMaterial GetWellKnownMaterialHandle(CSceneSystem* , SceneSystemWellKnownMaterialObjectID_t);
	/* ../scenesystem/scenesystem.h:899 */
	virtual const CSimpleStaticShapeDesc& GetWellKnownShape(CSceneSystem* , SceneSystemWellKnownShapeID_t);
	/* ../scenesystem/scenesystem.h:901 */
	virtual void GetRenderTargetSize(CSceneSystem* , SceneSystemRenderTargetSize_t, int* , int* );
	/* ../scenesystem/scenesystem.h:902 */
	virtual void SetRenderTargetSize(CSceneSystem* , SceneSystemRenderTargetSize_t, int, int);
	/* ../scenesystem/scenesystem.cpp:1289 */
	virtual void FrameUpdate(CSceneSystem* );
	/* ../scenesystem/scenesystem.cpp:1060 */
	virtual void AllocateScratchRenderTargets(CSceneSystem* , CUtlStringToken, int, int, const SceneScratchRenderTargetInfo_t* );
	/* ../scenesystem/scenesystem.cpp:6503 */
	virtual void WaitForRenderingToComplete(CSceneSystem* );
	/* ../scenesystem/scenesystem.cpp:6525 */
	virtual bool IsWaitingOnRenderingJobs(CSceneSystem* );
	/* ../scenesystem/scenesystem.h:911 */
	virtual void DeleteSceneObject(CSceneSystem* , CSceneObject* );
	/* ../scenesystem/scenesystem.h:913 */
	virtual ISceneViewDebugOverlays* CreateSceneViewDebugOverlayList(CSceneSystem* , SceneViewDebugOverlayTimingType_t);
	/* ../scenesystem/scenesystem.h:914 */
	virtual void DestroySceneViewDebugOverlayList(CSceneSystem* , ISceneViewDebugOverlays* );
	/* ../scenesystem/scenesystem.h:916 */
	virtual void MoveObjectToWorld(CSceneSystem* , CSceneObject* , ISceneWorld* );
	/* ../scenesystem/scenesystem.h:921 */
	int AllocateGetTransformSlot(CSceneSystem* , int);
	/* ../scenesystem/scenesystem.cpp:2104 */
	SceneSystemTransformEntry_t* GetPointerFromTransformTextureSlot(CSceneSystem* , int);
	/* ../scenesystem/scenesystem.cpp:6577 */
	virtual void SetIntState(CSceneSystem* , CUtlStringToken, int);
	/* ../scenesystem/scenesystem.cpp:1278 */
	virtual void ComputePipelineRenderTargetInfo(CSceneSystem* , SwapChainHandle_t, bool, PipelineRenderTargetInfo_t* );
	/* ../scenesystem/scenesystem.cpp:1225 */
	virtual void ComputePipelineRenderTargetInfo(CSceneSystem* , int, int, RenderMultisampleType_t, bool, PipelineRenderTargetInfo_t* );
	/* ../scenesystem/scenesystem.cpp:1189 */
	virtual void SetMainSwapChain(CSceneSystem* , SwapChainHandle_t);
	/* ../scenesystem/scenesystem.cpp:678 */
	virtual void GetStatsSummaryString(const CSceneSystem* , CBufferString* );
	/* ../scenesystem/scenesystem.cpp:665 */
	virtual const SceneSystemPerFrameStats_t& GetPerFrameStats(const CSceneSystem* );
	/* ../scenesystem/scenesystem.cpp:6626 */
	virtual CViewId CreateViewId(CSceneSystem* , int);
	/* ../scenesystem/scenesystem.cpp:6633 */
	virtual void SetLightCookieTexture(CSceneSystem* , HRenderTexture);
	/* ../scenesystem/scenesystem.cpp:6638 */
	virtual void SetLightCookieSequenceForLight(CSceneSystem* , CSceneLightObject* , const CUtlStringToken& );
	/* ../scenesystem/scenesystem.cpp:6699 */
	virtual void QueueSceneObjectUpdateJob(CSceneSystem* , function<void()>& );
	/* ../scenesystem/scenesystem.cpp:6690 */
	virtual void ExecuteQueuedSceneObjectUpdateJobs(CSceneSystem* );
	/* ../scenesystem/scenesystem.cpp:6706 */
	virtual void RegisterExtraDataAllocation(CSceneSystem* , const char* );
	/* ../scenesystem/scenesystem.cpp:6719 */
	void OnPrintExtraDataAllocations(CSceneSystem* , const CCommandContext& , const CCommand& );
	CCommandMemberInitializer_OnPrintExtraDataAllocations m_OnPrintExtraDataAllocations_register; /* 80 160 */
	/* ../scenesystem/scenesystem.h:951 */
	virtual void InstallMaterialDependentSceneObjectUpdater(CSceneSystem* , const function<void(CSceneObject*)>& );
	/* ../scenesystem/scenesystem.h:953 */
	virtual uint32 GetFinishRenderingViewsCounter(const CSceneSystem* );
	/* ../scenesystem/scenesystem.cpp:6643 */
	void GetLightCookieOffsetAndScale(CSceneSystem* , CookieSequenceData_t* , const CUtlStringToken& );
	/* ../scenesystem/scenesystem.cpp:6648 */
	void GetLightCookieOffsetAndScale(CSceneSystem* , CookieSequenceData_t* , int);
	/* ../scenesystem/scenesystem.h:957 */
	virtual uint32 GetFrameUpdateCounter(const CSceneSystem* );
	/* ../scenesystem/scenesystem.cpp:6058 */
	void ApplyViewOverrides(CSceneSystem* , CSceneView* , const RenderTargetDesc_t* , RenderViewport_t* );
	/* ../scenesystem/scenesystem.cpp:6077 */
	virtual void ClearHighWaterMarksNextFrame(CSceneSystem* );
	/* ../scenesystem/scenesystem.cpp:6082 */
	virtual float GetCurrentRenderTime(CSceneSystem* );
	/* ../scenesystem/scenesystem.cpp:6087 */
	virtual void AdvanceNonRenderedFrame(CSceneSystem* );
private:
	/* ../scenesystem/scenesystem.h:967 */
	virtual void SceneObject_ScheduleDirtyUpdate(CSceneSystem* , CSceneObject* );
	/* ../scenesystem/scenesystem.h:968 */
	virtual void SceneObject_UnscheduleDirtyUpdate(CSceneSystem* , CSceneObject* );
	/* ../scenesystem/scenesystem.h:969 */
	virtual void SceneObject_AttachExtraData(CSceneSystem* , CSceneObject* );
	/* ../scenesystem/scenesystem.h:970 */
	virtual void SceneObject_AttachLightingCache(CSceneSystem* , CSceneObject* );
	/* ../scenesystem/scenesystem.h:971 */
	virtual void SceneObject_UpdateFlagsBasedOnMaterial(CSceneSystem* , CSceneObject* );
	/* ../scenesystem/scenesystem.h:973 */
	virtual void SceneObject_SetMaterialOverride(CSceneSystem* , CSceneObject* , HMaterial, CUtlStringToken, int);
	/* ../scenesystem/scenesystem.h:975 */
	virtual void SceneObject_AddChild(CSceneSystem* , CSceneObject* , CUtlStringToken, CSceneObject* , uint32);
	/* ../scenesystem/scenesystem.h:976 */
	virtual void SceneObject_RemoveChild(CSceneSystem* , CSceneObject* , CSceneObject* );
	/* ../scenesystem/scenesystem.h:977 */
	virtual CSceneObject* SceneObject_FindChild(CSceneSystem* , const CSceneObject* , CUtlStringToken);
	/* ../scenesystem/scenesystem.h:978 */
	virtual void SceneObject_MirrorTransformToChildSceneObjects(CSceneSystem* , const CSceneObject* );
	/* ../scenesystem/scenesystem.h:979 */
	virtual void SceneObject_MirrorVisibilityToChildSceneObjects(CSceneSystem* , const CSceneObject* );
	/* ../scenesystem/scenesystem.h:980 */
	virtual void SceneObject_SetForceLayerID(CSceneSystem* , CSceneObject* , CUtlStringToken);
	/* ../scenesystem/scenesystem.h:982 */
	virtual void SceneObject_PostFlagsUpdate(CSceneSystem* , CSceneObject* );
	/* ../scenesystem/scenesystem.cpp:5209 */
	void ClearCompositeMorphTextureList(CSceneSystem* );
	/* ../scenesystem/scenesystem.cpp:5249 */
	void GenerateCompositeMorphTextureAtlas(CSceneSystem* );
	/* ../scenesystem/scenesystem.cpp:5835 */
	void UpdateFinalBones(CSceneSystem* );
	/* ../scenesystem/scenesystem.cpp:5884 */
	void HandleFlexSetup(CSceneSystem* , FlexDescSetupInfo_t* );
	/* ../scenesystem/scenesystem.cpp:5929 */
	void UpdateFinalFlexDescs(CSceneSystem* );
	/* ../scenesystem/scenesystem.cpp:6618 */
	void CleanupViewList(CSceneSystem* );
	/* ../scenesystem/scenesystem.cpp:5867 */
	void VrPollHMDRenderState(CSceneSystem* );
	/* ../scenesystem/scenesystem.cpp:1678 */
	CSceneView* NewView(CSceneSystem* , const char* , ISceneWorld* , const CPVSBits* );
	/* ../scenesystem/scenesystem.cpp:1742 */
	void RegisterActiveSceneWorld(CSceneSystem* , CSceneWorld* );
	/* ../scenesystem/scenesystem.cpp:1748 */
	void UnregisterActiveSceneWorld(CSceneSystem* , CSceneWorld* );
	/* ../scenesystem/scenesystem.h:999 */
	void GetCullBoxListForView(const CSceneSystem* , const CSceneView* , CUtlVector<SceneObjectCullingBox_t, CUtlMemory<SceneObjectCullingBox_t, int> >* , CUtlVector<SceneObjectCullingBox_t, CUtlMemory<SceneObjectCullingBox_t, int> >* );
	/* ../scenesystem/scenesystem.cpp:622 */
	CTimestampManager* TimestampManager(CSceneSystem* );
	/* ../scenesystem/scenesystem.h:1005 */
	virtual void OnMaxSwapChainDimensionsChanged(CSceneSystem* , int, int);
	/* ../scenesystem/scenesystem.cpp:114 */
	void CSceneSystem(CSceneSystem* );
	/* ../scenesystem/scenesystem.cpp:170 */
	virtual void ~CSceneSystem(CSceneSystem* );
	/* ../scenesystem/scenesystem.cpp:3688 */
	void Thread_RenderPartition(CSceneSystem* , CSceneView* , int, int);
	/* ../scenesystem/scenesystem.cpp:4123 */
	void Thread_QueueRenderPartitions(CSceneSystem* , CSceneView* );
	/* ../scenesystem/scenesystem.cpp:3821 */
	void SetPerLayerConstants(CSceneSystem* , IRenderContext* , ISceneLayer* , const CSceneView* );
	/* ../scenesystem/scenesystem.cpp:3825 */
	void SetPerLayerData(CSceneSystem* , IRenderContext* , ISceneLayer* , const CSceneView* );
	/* ../scenesystem/scenesystem.cpp:3702 */
	void InitializeRenderAttributes(CSceneSystem* , CSceneView* , float32, RenderAttributesSetup_t* , int);
	/* ../scenesystem/scenesystem.cpp:3735 */
	void InitializeRenderAttributesForLayer(CSceneSystem* , IRenderContext* , ISceneLayer* , const CSceneView* );
	/* ../scenesystem/scenesystem.cpp:3805 */
	void SetPerContextData(CSceneSystem* , IRenderContext* , ISceneLayer* , CSceneView* , bool);
	/* ../scenesystem/scenesystem.cpp:360 */
	bool CanAllocateScratchRenderTargetsOnDemand(const CSceneSystem* );
	/* ../scenesystem/scenesystem.h:1030 */
	void AddObjectToWorld(CSceneSystem* , CSceneObject* );
	/* ../scenesystem/scenesystem.cpp:2110 */
	virtual void BindTransformSlot(CSceneSystem* , IRenderContext* , int, int);
	/* ../scenesystem/scenesystem.cpp:6530 */
	virtual SceneSystemTransformEntry_t* AllocateFrameScopedTransforms(CSceneSystem* , int, int* );
	/* ../scenesystem/scenesystem.cpp:6552 */
	virtual ExtraShaderData_t GetExtraShaderData(CSceneSystem* , const Vector4D& );
	/* ../scenesystem/scenesystem.h:1037 */
	int GetPartition(const CSceneObject* );
	/* ../scenesystem/scenesystem.cpp:2200 */
	int AllocatePerFrameTransformData(CSceneSystem* , int, SceneSystemTransformEntry_t* & );
	/* ../scenesystem/scenesystem.h:1742 */
	SceneSystemTransformEntry_t* GetPerFrameTransformData(CSceneSystem* , int);
	/* ../scenesystem/scenesystem.h:1046 */
	void Render3DDebugOverlays(CSceneSystem* , IRenderContext* , const CFrustum* , ISceneLayer* , CSceneViewDebugOverlays* );
	/* ../scenesystem/scenesystem.h:1047 */
	void Render2DDebugOverlays(CSceneSystem* , IRenderContext* , const CFrustum* , ISceneLayer* , CSceneViewDebugOverlays* );
	/* ../scenesystem/scenesystem.h:1049 */
	bool UseReverseDepth(const CSceneSystem* );
	/* ../scenesystem/scenesystem.h:1051 */
	CLightBinnerStandard* GetOrCreatePooledLightBinnerStandard(CSceneSystem* );
	/* ../scenesystem/scenesystem.h:1053 */
	int AllocateUniqueSceneLayerIndex(CSceneSystem* );
	/* ../scenesystem/scenesystem.cpp:1128 */
	int GetScratchRenderTargetCount(const CSceneSystem* );
	/* ../scenesystem/scenesystem.cpp:1133 */
	int GetScratchRenderTargetDesc(const CSceneSystem* , int, int, SceneScratchRenderTargetDesc_t* );
	/* ../scenesystem/scenesystem.cpp:1150 */
	void MarkScratchRenderTargetUsed(CSceneSystem* , int, bool);
	/* ../scenesystem/scenesystem.cpp:1113 */
	int AllocateDebugScratchRenderTarget(CSceneSystem* , const SceneScratchRenderTargetInfo_t& );
	/* ../scenesystem/scenesystem.cpp:6581 */
	virtual void SetDebugFlag(CSceneSystem* , SceneSystemDebugFlag_t, bool);
	/* ../scenesystem/scenesystem.cpp:6593 */
	virtual bool GetDebugFlag(const CSceneSystem* , SceneSystemDebugFlag_t);
	/* ../scenesystem/scenesystem.cpp:6599 */
	virtual uint GetDebugFlags(const CSceneSystem* );
	CInterlockedInt m_nNumJobsUsedToRender __attribute__((__aligned__(4))); /* 240 4 */
	CInterlockedInt m_nNumJobsUsedForPartitions __attribute__((__aligned__(4))); /* 244 4 */
	CInterlockedInt m_nNumWorldTraversals __attribute__((__aligned__(4))); /* 248 4 */
	CInterlockedInt m_nNumUnbatchableMaterials __attribute__((__aligned__(4))); /* 252 4 */
	/* ../scenesystem/scenesystem.h:1072 */
	void PerformPreDeletionWork(CSceneSystem* );
	/* ../scenesystem/scenesystem.h:1075 */
	virtual void DeleteSceneObjectAtFrameEnd(CSceneSystem* , CSceneObject* );
	/* ../scenesystem/scenesystem.h:1077 */
	virtual CSceneAnimatableObject* CreateAnimatableSceneObjectFromBuffers(CSceneSystem* , ISceneWorld* , HMaterial, SceneObjectBuffers_t& , ESceneObjectFlags, bool);
	/* ../scenesystem/scenesystem.cpp:6653 */
	virtual void SetIgnoreAlphaFade(CSceneSystem* , bool);
	/* ../scenesystem/scenesystem.cpp:6663 */
	virtual void SetupPerObjectLighting(CSceneSystem* , CRenderAttributes& , CSceneObject* , const ISceneLayer* , SetupPerObjectLighting_t);
	/* ../scenesystem/scenesystem.cpp:6658 */
	bool IgnoreAlphaFade(CSceneSystem* );
	/* ../scenesystem/scenesystem.h:1754 */
	SceneSystemGPUProfilerMode_t GetGPUProfilerModeInline(const CSceneSystem* );
	/* ../scenesystem/scenesystem.cpp:6547 */
	const ExtraShaderData_t& GetDefaultExtraShaderData(const CSceneSystem* );
	/* ../scenesystem/scenesystem.h:1759 */
	ExtraShaderData_t CreateExtraShaderData_TintRGBA32(CSceneSystem* , Vector4D, float, uint);
	/* ../scenesystem/scenesystem.h:1108 */
	void ConShowClasses(CSceneSystem* );
	/* ../scenesystem/scenesystem.h:1109 */
	void ConSetClassFlags(CSceneSystem* , const CCommandContext& , const CCommand& );
	/* ../scenesystem/scenesystem.h:1112 */
	virtual void SetObjectClass(CSceneSystem* , CSceneObject* , uint8);
	/* ../scenesystem/scenesystem.h:1114 */
	virtual void GetObjectClassName(CSceneSystem* , uint8, char* , int);
	/* ../scenesystem/scenesystem.h:1116 */
	virtual int ModifyObjectClassFlags(CSceneSystem* , int, int, int);
	/* ../scenesystem/scenesystem.h:1749 */
	CSceneView* GetViewByIndex(const CSceneSystem* , int);
	/* ../scenesystem/scenesystem.cpp:4310 */
	void SubmitDisplayList(CSceneSystem* , CDisplayList* );
	/* ../scenesystem/scenesystem.cpp:4324 */
	void SubmitRenderContext(CSceneSystem* , CRenderContextPtr& );
	/* ../scenesystem/scenesystem.cpp:5949 */
	void FlushPendingDisplayLists(CSceneSystem* );
	CUtlIntrusiveList<QueuedSceneObjectUpdateJob_t> m_sceneObjectUpdateJobs; /* 256 8 */
	CUtlVectorFixedGrowable<DisplayListToSubmit_t, 256> m_displayListsToSubmit __attribute__((__aligned__(8))); /* 264 2080 */
protected:
	/* ../scenesystem/scenesystem.cpp:2875 */
	void CheckForPendingDraws(CSceneSystem* , CSceneView* );
	/* ../scenesystem/scenesystem.cpp:3591 */
	void AddObjectToLayerDrawList(CSceneSystem* , CSceneObject* , CSceneLayer* , CSceneView* , const GeneratePrimitivesArgs_t& , DrawListVector_t& );
	/* ../scenesystem/scenesystem.cpp:2147 */
	virtual void GenerateOverrideDescriptor(const CSceneSystem* , const CSceneSystemStencilState* , RsStencilStateOverride_t* , ISceneLayer* );
	/* ../scenesystem/scenesystem.cpp:2123 */
	virtual uint8 CalculateStencilMask(const CSceneSystem* , const CUtlStringToken* , ISceneLayer* );
	/* ../scenesystem/scenesystem.cpp:6331 */
	void AddPerFrameStatsForView(CSceneSystem* , CSceneView* );
	/* ../scenesystem/scenesystem.cpp:6339 */
	void CompletionWaitJob(CSceneSystem* );
	/* ../scenesystem/scenesystem.h:1156 */
	VertexBufferHandle_t GetInstanceIDBuffer(CSceneSystem* );
	/* ../scenesystem/scenesystem.cpp:6557 */
	void ThreadUpdateDirtyObject(CSceneObject* & );
	/* ../scenesystem/scenesystem.cpp:6563 */
	void UpdateDirtyObjects(CSceneSystem* );
	/* ../scenesystem/scenesystem.h:1160 */
	void InitGfxObjects(CSceneSystem* );
	/* ../scenesystem/scenesystem.h:1161 */
	void ShutdownGfxObjects(CSceneSystem* );
	/* ../scenesystem/scenesystem.h:1163 */
	void CreateStaticShape(CSceneSystem* , int, const float* , int, const int* , CSimpleStaticShapeDesc& , bool, const char* , int, RenderInputLayoutField_t* );
	/* ../scenesystem/scenesystem.h:1165 */
	void ShutdownShape(CSceneSystem* , CSimpleStaticShapeDesc& );
	/* ../scenesystem/scenesystem.cpp:5960 */
	void SubmitAllDisplayLists(CSceneSystem* , SwapChainHandle_t);
	/* ../scenesystem/scenesystem.cpp:4233 */
	void ResolveLayer(CSceneSystem* , CSceneLayer* , CSceneView* , bool);
	/* ../scenesystem/scenesystem.cpp:4655 */
	void AddClearForDiscardedLayer(CSceneSystem* , CSceneView* , CSceneLayer* , int);
	/* ../scenesystem/scenesystem.cpp:4683 */
	void SubmitDisplayListsForView(CSceneSystem* , CSceneView* );
	/* ../scenesystem/scenesystem.cpp:2286 */
	void DrawDrawList(CSceneSystem* , CSceneView* , CSceneLayer* , CSceneDrawList* , CRenderBatchList* );
	/* ../scenesystem/scenesystem.cpp:2397 */
	void QueueDrawDrawList(CSceneSystem* , CSceneView* , CSceneLayer* , CSceneDrawList* , CRenderBatchList* , EBatchStartFlags_t);
	/* ../scenesystem/scenesystem.cpp:2372 */
	void Thread_DrawDrawList(CSceneSystem* , CSceneView* , CSceneLayer* , CSceneDrawList* , CRenderBatchList* , EBatchStartFlags_t);
	/* ../scenesystem/scenesystem.cpp:2426 */
	void SortAndDrawPendingObjects(CSceneSystem* , CSceneView* , CSceneLayer* );
	/* ../scenesystem/scenesystem.cpp:2273 */
	void DrawObjectsToLayer(CSceneSystem* , CSceneView* , CSceneDrawList* , CSceneLayer* , CRenderBatchList* );
	/* ../scenesystem/scenesystem.cpp:2301 */
	void DrawMeshes(CSceneSystem* , CSceneView* , CSceneDrawList* , CSceneLayer* , CRenderBatchList* , int);
	/* ../scenesystem/scenesystem.cpp:5091 */
	void MakeFrameBufferCopy(CSceneSystem* , IRenderContext* , CSceneView* , CSceneLayer* , SceneSystemPerFrameStats_t& , bool);
	/* ../scenesystem/scenesystem.h:1196 */
	virtual void InitObject(CSceneSystem* , CSceneObject* , ESceneObjectFlags, ISceneWorld* );
	/* ../scenesystem/scenesystem.h:1202 */
	void PerformQueuedDeletesForPartition(CSceneSystem* , const PartitionDeletionList_t* );
	/* ../scenesystem/scenesystem.h:1199 */
	typedef struct CUtlVectorFixedGrowable<CSceneObject*, 64> PartitionDeletionList_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../scenesystem/scenesystem.h:1204 */
	void PerformQueuedDeletes(CSceneSystem* , CSceneWorld* );
	/* ../scenesystem/scenesystem.cpp:6296 */
	void PerformQueuedWorldDeletes(CSceneSystem* );
	/* ../scenesystem/scenesystem.cpp:6305 */
	void PerformHighWaterMarkDeletion(CSceneSystem* );
	/* ../scenesystem/scenesystem.h:1210 */
	void DeleteObjectForReal(CSceneSystem* , CSceneObject* );
	/* ../scenesystem/scenesystem.cpp:1736 */
	virtual void GetAllActiveSceneWorlds(CSceneSystem* , CUtlVector<ISceneWorld*, CUtlMemory<ISceneWorld*, int> >& );
	/* ../scenesystem/scenesystem.cpp:7069 */
	void InitLightingSystemForFrame(CSceneSystem* );
	/* ../scenesystem/scenesystem.cpp:6361 */
	void DoDebug3DRenderingForView(CSceneSystem* , CSceneView* );
	/* ../scenesystem/scenesystem.cpp:6393 */
	void DoDebug2DRenderingForView(CSceneSystem* , CSceneView* , const CFrustum* );
	/* ../scenesystem/scenesystem.cpp:6425 */
	void DoLegacyDebugRendering(CSceneSystem* );
	/* ../scenesystem/scenesystem.cpp:6443 */
	virtual void AtFinish(CSceneSystem* );
	/* ../scenesystem/scenesystem.h:1226 */
	virtual void ConstructSceneObject(CSceneSystem* , CSceneObject* );
	/* ../scenesystem/scenesystem.h:1227 */
	virtual void DestructSceneObject(CSceneSystem* , CSceneObject* );
	/* ../scenesystem/scenesystem.h:1231 */
	CSceneObject* CreateSceneObjectFromBuffersInternal(CSceneSystem* , ESceneObjectFlags, ISceneWorld* , VertexBufferHandle_t, IndexBufferHandle_t, HMaterial, int, int, const Vector& , const Vector& , RenderPrimitiveType_t, RenderMeshDrawPrimitiveFlags_t, const char* , bool);
	/* ../scenesystem/scenesystem.h:1246 */
	virtual CSceneObject* CreateSceneObjectFromBuffers(CSceneSystem* , ISceneWorld* , VertexBufferHandle_t, IndexBufferHandle_t, HMaterial, int, int, const Vector& , const Vector& , RenderPrimitiveType_t, const char* , bool);
	/* ../scenesystem/scenesystem.cpp:192 */
	virtual bool ThreadIsInRenderingJob(const CSceneSystem* );
	/* ../scenesystem/scenesystem.cpp:197 */
	float GetTimeAtStartOfRendering(CSceneSystem* );
	/* ../scenesystem/scenesystem.h:1258 */
	void RegisterMaterialSeen(CSceneSystem* , const IMaterial2* );
	/* ../scenesystem/scenesystem.h:1267 */
	CSceneDrawList* GetNewDrawList(CSceneSystem* );
	/* ../scenesystem/scenesystem.h:1276 */
	void ReturnDrawListToPool(CSceneSystem* , CSceneDrawList* );
	/* ../scenesystem/scenesystem.cpp:4333 */
	void AddWorldsInViewToToListOfWorldsVisitedThisFrame(CSceneSystem* , const ISceneView* );
	/* ../scenesystem/scenesystem.cpp:2165 */
	bool ShouldOverrideDepthMaterial(CSceneSystem* , const CMaterialDrawDescriptor* , const ISceneLayer* );
private:
	/* ../scenesystem/scenesystem.cpp:999 */
	void ComputeScratchTargetActualSize(CSceneSystem* , const SceneScratchRenderTargetInfo_t& , int* , int* );
	/* ../scenesystem/scenesystem.cpp:1029 */
	void AllocateActualScratchRenderTarget(CSceneSystem* , int, ScratchRenderTarget_t& );
	/* ../scenesystem/scenesystem.cpp:1174 */
	bool IsScratchRenderTargetValid(CSceneSystem* , const ScratchRenderTarget_t& );
	/* ../scenesystem/scenesystem.h:1315 */
	virtual uint8 GetObjectSettings(const CSceneSystem* , const CSceneObject* );
	/* ../scenesystem/scenesystem.h:1316 */
	int GetNumSpatialPartitions(CSceneSystem* );
	/* ../scenesystem/scenesystem.h:1318 */
	virtual void SnapShotTextureForEachLayer(CSceneSystem* , HRenderTexture);
	/* ../scenesystem/scenesystem.cpp:1359 */
	virtual void FillOutViewConstants(CSceneSystem* , PerViewConstantBuffer_t* , const CFrustum* , const RenderViewport_t& , const RenderTargetDesc_t& , float, float32, const Vector4D& );
	/* ../scenesystem/scenesystem.h:1332 */
	virtual bool VolumetricFogEnabled(const CSceneSystem* );
	/* ../scenesystem/scenesystem.h:1333 */
	virtual bool NonTexturedGradientFogEnabled(const CSceneSystem* );
	/* ../scenesystem/scenesystem.h:1334 */
	virtual bool CubemapFogEnabled(const CSceneSystem* );
	/* ../scenesystem/scenesystem.h:1337 */
	virtual RenderColorSpace_t GetPrimaryRenderTargetColorSpace(const CSceneSystem* );
	/* ../scenesystem/scenesystem.h:1340 */
	virtual ImageFormat GetPrimaryRenderTargetFormat(const CSceneSystem* );
	/* ../scenesystem/scenesystem.h:1343 */
	virtual ImageFormat GetBackBufferFormat(const CSceneSystem* );
	/* ../scenesystem/scenesystem.h:1346 */
	virtual void SceneObject_GetMaterialsForObject(CSceneSystem* , CSceneObject* , CUtlVectorFixedGrowable<CWeakHandle<InfoForResourceTypeIMaterial2>, 2>& , CUtlVectorFixedGrowable<int, 2>& );
	/* ../scenesystem/scenesystem.cpp:633 */
	virtual void SetGPUProfilerMode(CSceneSystem* , SceneSystemGPUProfilerMode_t);
	/* ../scenesystem/scenesystem.cpp:639 */
	virtual SceneSystemGPUProfilerMode_t GetGPUProfilerMode(const CSceneSystem* );
	/* ../scenesystem/scenesystem.cpp:645 */
	virtual void GetMostRecentTimestampFrameSummary(CSceneSystem* , SwapChainHandle_t, CUtlVector<SceneSystemTimestampFrameData_t, CUtlMemory<SceneSystemTimestampFrameData_t, int> >& );
	/* ../scenesystem/scenesystem.cpp:654 */
	virtual bool SetManagedPerfMarker(CSceneSystem* , IRenderContext* , const char* );
	int m_nNumSpatialPartitions; /* 2344 4 */
	CUtlVector<CSceneSystem::ScratchRenderTarget_t, CUtlMemory<CSceneSystem::ScratchRenderTarget_t, int> > m_ScratchRenderTargets; /* 2352 32 */
	CUtlHashDict<ISceneObjectDesc*, true, true> m_TypeDictionary; /* 2384 48 */
	CUtlUniqueObjectStore<CSceneSystemStencilState, 17, CThreadRWLock> m_uniqueStencilStateOverrideStore; /* 2432 5984 */
	CThreadFastMutex m_viewListMutex; /* 8416 24 */
	CViewList m_activeViewList __attribute__((__aligned__(8))); /* 8440 160 */
	CViewList m_finishedViewList __attribute__((__aligned__(8))); /* 8600 160 */
	CTSPool<CSceneDrawList> m_drawListPool __attribute__((__aligned__(16))); /* 8768 16 */
	CUtlVectorFixedGrowable<CSceneObject*, 64> m_deletionQueue[8] __attribute__((__aligned__(8))); /* 8784 4352 */
	CThreadFastMutex m_sceneDeletionQueueMutex[8]; /* 13136 192 */
	CUtlVectorFixedGrowable<ISceneWorld*, 64> m_worldDeletionQueue __attribute__((__aligned__(8))); /* 13328 544 */
	CThreadFastMutex m_worldDeletionQueueMutex; /* 13872 24 */
	CTSPool<CSceneObject> m_TSsceneObjectPool __attribute__((__aligned__(16))); /* 13904 16 */
	float m_flCurTime; /* 13920 4 */
	SceneSystemPerFrameStats_t m_perFrameStats __attribute__((__aligned__(8))); /* 13928 208 */
	SceneSystemPerFrameStats_t m_saveStats __attribute__((__aligned__(8))); /* 14136 208 */
	CThreadFastMutex m_materialListMutex; /* 14344 24 */
	CUtlHashtable<const IMaterial2*, empty_t, DefaultHashFunctor<const IMaterial2*>, DefaultEqualFunctor<const IMaterial2*>, undefined_t, CUtlMemory<CUtlHashtableEntry<const IMaterial2*, empty_t>, int> > m_materialsSeenThisFrame; /* 14368 32 */
	uint m_nFinishRenderingViewsCounter; /* 14400 4 */
	uint m_nFrameUpdateCounter; /* 14404 4 */
	IndexBufferHandle_t m_hIndexBufferObjects[7]; /* 14408 56 */
	VertexBufferHandle_t m_hVertexBufferObjects[8]; /* 14464 64 */
	RenderInputLayout_t m_hInputLayoutObjects[19][3]; /* 14528 456 */
	CSimpleStaticShapeDesc m_wellKnownShapes[4]; /* 14984 96 */
	HRenderTextureStrong m_hWellKnownTextures[12]; /* 15080 96 */
	HMaterialStrong m_hWellKnownMaterials[17]; /* 15176 136 */
	CUtlVector<ISceneSystemListener*, CUtlMemory<ISceneSystemListener*, int> > m_listeners; /* 15312 32 */
	int m_nMinFrameBufferRenderTargetWidth; /* 15344 4 */
	int m_nMinFrameBufferRenderTargetHeight; /* 15348 4 */
	int m_RenderTargetHeights[8]; /* 15352 32 */
	int m_RenderTargetWidths[8]; /* 15384 32 */
	CUtlVector<CSceneObject*, CUtlMemory<CSceneObject*, int> > m_DirtyObjects; /* 15416 32 */
	CThreadFastMutex m_DirtyObjectsMutex; /* 15448 24 */
	CUtlVectorFixedGrowable<ISceneWorld*, 32> m_worldsVisitedDuringFrame __attribute__((__aligned__(8))); /* 15472 288 */
	VertexBufferHandle_t m_hInstanceIDBuffer; /* 15760 8 */
	ExtraShaderData_t m_defaultExtraShaderDataTintRGBA32; /* 15768 16 */
	SceneSystemTransformEntry_t * m_pTransformBufferData; /* 15784 8 */
	CThreadMutex m_transformBufferMutex; /* 15792 72 */
	RenderBufferHandle_t m_hTransformBuffer; /* 15864 8 */
	uint32_t m_nNumAllocatedSlots; /* 15872 4 */
	ConstantBufferHandle_t m_hDefaultPerLayerConstants; /* 15880 8 */
	bool m_bCanAllocateScratchRenderTargetsOnDemand; /* 15888 1 */
	bool m_bBeginHasBeenCalled; /* 15889 1 */
	bool m_bOkToBegin; /* 15890 1 */
	bool m_bUpdateStats; /* 15891 1 */
	volatile bool m_bClientIsWaiting; /* 15892 1 */
	SwapChainHandle_t m_hMainSwapChain; /* 15896 8 */
	RenderMultisampleType_t m_nSwapChainMultisampleType; /* 15904 4 */
	HRenderTexture m_hExtraTextureToSnapshotWithEachLayer; /* 15912 8 */
	int m_nActiveLightBinners; /* 15920 4 */
	CUtlVector<CLightBinnerStandard*, CUtlMemory<CLightBinnerStandard*, int> > m_lightBinnerPool; /* 15928 32 */
	CThreadFastMutex m_lightBinnerLock; /* 15960 24 */
	int m_nCurrentUniqueSceneLayerIndex; /* 15984 4 */
	int m_nDebugScratchRenderTargetCount; /* 15988 4 */
	uint m_nDebugFlags; /* 15992 4 */
	CUtlIntrusiveList<CMorphSet> m_morphSetsToCompositeList; /* 16000 8 */
	CUtlIntrusiveList<CMorphCompositeSet> m_morphCompositeSetFreeList; /* 16008 8 */
	CUtlIntrusiveList<MorphCompositeDesc_t> m_morphCompositeDescFreeList; /* 16016 8 */
	CPreRenderSubmissionSetupList<BoneSetupInfo_t> m_preRenderBoneSetups __attribute__((__aligned__(8))); /* 16024 24 */
	CPreRenderSubmissionSetupList<FlexDescSetupInfo_t> m_preRenderFlexSetups __attribute__((__aligned__(8))); /* 16048 24 */
	CMTAtlasDesc_t m_CMTAtlasDesc; /* 16072 152 */
	CUtlHash<NameToLightCookieSequence_t, bool (*)(const NameToLightCookieSequence_t&, const NameToLightCookieSequence_t&), unsigned int (*)(const NameToLightCookieSequence_t&)> m_nameToLightCookieSequenceMapping; /* 16224 56* /
	CUtlStringMapMT<CUtlDelegate<void(ISceneView*, const CRenderAttributes*)> > m_templateViewFactories; /* 16280 520 */
	CThreadMutex m_activeSceneWorldMutex; /* 16800 72 */
	CUtlVector<ISceneWorld*, CUtlMemory<ISceneWorld*, int> > m_activeSceneWorlds; /* 16872 32 */
	CUtlTSIntIDDictionary<unsigned char> m_objectClassDictionary; /* 16904 400 */
	uint8 m_nPerObjectClassCurrentSettings[256]; /* 17304 256 */
	uint8 m_nDefaultClassID; /* 17560 1 */
	CInterlockedInt m_nObjectClassCount[256] __attribute__((__aligned__(4))); /* 17564 1024 */
	CUtlVectorFixedGrowable<std::function<void(CSceneObject*)>*, 16> m_pMaterialDependentSceneObjectUpdaters __attribute__((__aligned__(8))); /* 18592 160 */
	bool m_bIgnoreAlphaFade; /* 18752 1 */
	bool m_bClearHighWaterMarksNextFrame; /* 18753 1 */
	bool m_bUsesBakedLighting; /* 18754 1 */
	bool m_bVolumetricFogEnabled; /* 18755 1 */
	bool m_bNonTexturedGradientFogEnabled; /* 18756 1 */
	bool m_bCubemapFogEnabled; /* 18757 1 */
	bool m_bCameraTranslationInProjection; /* 18758 1 */
	bool m_bUseReverseZProjection; /* 18759 1 */
	bool m_bUse32BitDepthBuffer; /* 18760 1 */
	RenderColorSpace_t m_primaryRenderTargetColorSpace; /* 18761 1 */
	CClassMemoryPool<CRenderBatchList, CUtlMemoryPool<CRenderBatchList> > m_batchListPool __attribute__((__aligned__(8))); /* 18768 56 */
	CClassMemoryPool<CSceneLayer, CUtlMemoryPool<CSceneLayer> > m_layerPool __attribute__((__aligned__(8))); /* 18824 56 */
	int m_nCurrentViewIssueIndex; /* 18880 4 */
	ImageFormat m_fmtPrimaryRenderTarget; /* 18884 4 */
	ImageFormat m_fmtBackBuffer; /* 18888 4 */
	bool m_bAssertViewportWithinFramebuffer; /* 18892 1 */
	CTimestampManager * m_pTimestampManager; /* 18896 8 */
	SceneSystemGPUProfilerMode_t m_eGPUProfilerMode; /* 18904 4 */
	/* ../scenesystem/scenesystem.h:1559 */
	CUtlIntrusiveList<CMorphCompositeSet>* GetMorphCompositeSetFreeList(CSceneSystem* );
	/* ../scenesystem/scenesystem.h:1560 */
	CUtlIntrusiveList<MorphCompositeDesc_t>* GetMorphCompositeDescFreeList(CSceneSystem* );
	/* ../scenesystem/scenesystem.h:1562 */
	const CMTAtlasDesc_t& GetMorphTextureAtlasDesc(const CSceneSystem* );
	CThreadMutex m_extraDataAllocationMutex; /* 18912 72 */
	CUtlDict<int, int> m_extraDataAllocations; /* 18984 48 */
	/* ../scenesystem/scenesystem.h:1568 */
	bool AppUsesBakedLighting(const CSceneSystem* );
	/* ../scenesystem/scenesystem.cpp:2661 */
	CRenderBatchList* GetBatchList(CSceneSystem* );
	/* ../scenesystem/scenesystem.cpp:2669 */
	void FreeBatchList(CSceneSystem* , CRenderBatchList* );
	/* ../scenesystem/scenesystem.cpp:2677 */
	CSceneLayer* GetSceneLayer(CSceneSystem* );
	/* ../scenesystem/scenesystem.cpp:2682 */
	void FreeSceneLayer(CSceneSystem* , CSceneLayer* );
	/* ../scenesystem/scenesystem.cpp:4421 */
	void DiscardLayerBatchLists(CSceneSystem* , CSceneLayer* );
	/* ../scenesystem/scenesystem.cpp:6912 */
	void HandleVrSubmit(CSceneSystem* , CSceneLayer* , CSceneView* );
	/* ../scenesystem/scenesystem.cpp:6941 */
	void UpdateAllPerLayerViewConstantBuffer(CSceneSystem* , CSceneView* );
	/* ../scenesystem/scenesystem.cpp:6995 */
	bool BindContextForEveryLayer(const CSceneSystem* );
	bool m_bPerLayerViewConstantsChangeDuringSubmit; /* 19032 1 */
	/* ../scenesystem/scenesystem.h:1585 */
	bool PerLayerViewConstantsChangeDuringSubmit(const CSceneSystem* );
	/* ../scenesystem/scenesystem.h:1589 */
	void SetPerLayerViewConstantsChangeDuringSubmit(CSceneSystem* , bool);
	/* ../scenesystem/scenesystem.h:1597 */
	virtual void DownsampleTexture(CSceneSystem* , IRenderContext* , HRenderTexture& , RenderViewport_t* , uint8, bool);
	/* ../scenesystem/scenesystem.cpp:7041 */
	virtual void FlushScratchRenderTargets(CSceneSystem* );
	/* ../scenesystem/scenesystem.h:1603 */
	virtual void SceneObject_MirrorTransformToChildSceneObjectsRelative(CSceneSystem* , const matrix3x4_t& , const CSceneObject* );
	/* ../scenesystem/scenesystem.h:1605 */
	virtual void SceneObject_UpdateRayTraceObject(CSceneSystem* , CSceneObject* );
	/* ../scenesystem/scenesystem.h:1606 */
	virtual void SceneObject_DestroyRayTraceInstance(CSceneSystem* , CSceneObject* );
	/* ../scenesystem/scenesystem.h:1616 */
	virtual HRenderTexture FindOrCreateFrameBufferScratchTexture(CSceneSystem* , ISceneView* , CUtlStringToken, const RenderViewport_t& , ImageFormat, RuntimeTextureSpecificationFlags_t);
	/* ../scenesystem/scenesystem.cpp:6289 */
	virtual void PerformEndOfFrameDeletes(CSceneSystem* );
	CUtlHashtable<unsigned int, CSceneSystem::FrameBufferScratchTexInfo_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CSceneSystem::FrameBufferScratchTexInfo_t>, int> > m_frameBufferScratchTextures; /* 19040 32 */
	bool m_bComputeShaderSkinningEnabled; /* 19072 1 */
	HMaterialStrong m_hCsSkinningMat; /* 19080 8 */
	CUtlVector<CSceneSystem::VertexCacheUpdateRequest_t, CUtlMemory<CSceneSystem::VertexCacheUpdateRequest_t, int> > m_vertexCacheRequests; /* 19088 32 */
	RenderBufferHandle_t m_hCurrFrameVertexCacheBuffer; /* 19120 8 */
	CThreadMutex m_vertexCacheRequestMutex; /* 19128 72 */
	CInterlockedInt m_nVertexCacheSizeRequestedThisFrame __attribute__((__aligned__(4))); /* 19200 4 */
	int m_nCurrFrameVertexCacheBufferSize; /* 19204 4 */
	/* ../scenesystem/scenesystem.cpp:7166 */
	void RunVertexCacheUpdateComputeShader(CSceneSystem* , IRenderContext* );
	/* ../scenesystem/scenesystem.cpp:7204 */
	void DispatchVertexCacheUpdateRequestBlock(CSceneSystem* , IRenderContext* , const VertexCacheUpdateRequest_t* , int);
	/* ../scenesystem/scenesystem.cpp:7289 */
	void ResizeGPUVertexCacheBuffer(CSceneSystem* );
	RenderBufferHandle_t m_hDummyBuffer; /* 19208 8 */
	CUtlVectorFixedGrowable<RenderDescriptorBinding_t, 8> m_globalPerFrameDescriptorBindings __attribute__((__aligned__(8))); /* 19216 416 */
	/* ../scenesystem/scenesystem.cpp:7319 */
	void SetupGlobalPerFrameDescriptors(CSceneSystem* );
	/* ../scenesystem/scenesystem.cpp:7351 */
	void UpdateGlobalPerFrameDescriptorBindings(CSceneSystem* );
	/* ../scenesystem/scenesystem.cpp:7153 */
	bool CanBatchVertexCacheRequests(CSceneSystem* , const VertexCacheUpdateRequest_t& , const VertexCacheUpdateRequest_t& );
	/* ../scenesystem/scenesystem.cpp:7259 */
	void QueueVertexCacheUpdate(CSceneSystem* , const CMeshInstance* , int, int, VertexBufferHandle_t, int, bool, int, int, const VertexBufferLayout_t& );
	/* ../scenesystem/scenesystem.cpp:7283 */
	int FrameAllocVertexCacheBlock(CSceneSystem* , int);
	/* ../scenesystem/scenesystem.h:1694 */
	RenderBufferHandle_t GetCurrentFrameVertexCacheBuffer(const CSceneSystem* );
	/* ../scenesystem/scenesystem.h:1696 */
	bool IsSkinnedVertexCacheEnabled(const CSceneSystem* );
	/* ../scenesystem/scenesystem.h:1699 */
	CThreadMutex& GetScratchRenderTargetMutex(CSceneSystem* );
	/* ../scenesystem/scenesystem.h:1700 */
	void IncrementSRTMutexLockCount(CSceneSystem* , int);
	/* ../scenesystem/scenesystem.h:1701 */
	bool CanEditScratchRenderTargets(const CSceneSystem* );
	CThreadMutex m_scratchRenderTargetEditMutex; /* 19632 72 */
	int m_nSRTMutexLockCount; /* 19704 4 */
protected:
	/* ../scenesystem/scenesystem.cpp:3008 */
	void Thread_RenderPartitionInternalFinal<false, true, false>(CSceneSystem* , CSceneView* , int, int, const CSceneView* );
	/* ../scenesystem/scenesystem.cpp:3008 */
	void Thread_RenderPartitionInternalFinal<false, true, true>(CSceneSystem* , CSceneView* , int, int, const CSceneView* );
	/* ../scenesystem/scenesystem.cpp:3008 */
	void Thread_RenderPartitionInternalFinal<false, false, false>(CSceneSystem* , CSceneView* , int, int, const CSceneView* );
	/* ../scenesystem/scenesystem.cpp:3008 */
	void Thread_RenderPartitionInternalFinal<false, false, true>(CSceneSystem* , CSceneView* , int, int, const CSceneView* );
	/* ../scenesystem/scenesystem.cpp:3008 */
	void Thread_RenderPartitionInternalFinal<true, true, false>(CSceneSystem* , CSceneView* , int, int, const CSceneView* );
	/* ../scenesystem/scenesystem.cpp:3008 */
	void Thread_RenderPartitionInternalFinal<true, true, true>(CSceneSystem* , CSceneView* , int, int, const CSceneView* );
	/* ../scenesystem/scenesystem.cpp:3008 */
	void Thread_RenderPartitionInternalFinal<true, false, false>(CSceneSystem* , CSceneView* , int, int, const CSceneView* );
	/* ../scenesystem/scenesystem.cpp:3008 */
	void Thread_RenderPartitionInternalFinal<true, false, true>(CSceneSystem* , CSceneView* , int, int, const CSceneView* );
	/* ../scenesystem/scenesystem.cpp:3653 */
	void Thread_RenderPartitionInternalAlmostFinal<false, true>(CSceneSystem* , CSceneView* , int, int);
	/* ../scenesystem/scenesystem.cpp:3653 */
	void Thread_RenderPartitionInternalAlmostFinal<false, false>(CSceneSystem* , CSceneView* , int, int);
	/* ../scenesystem/scenesystem.cpp:3653 */
	void Thread_RenderPartitionInternalAlmostFinal<true, true>(CSceneSystem* , CSceneView* , int, int);
	/* ../scenesystem/scenesystem.cpp:3653 */
	void Thread_RenderPartitionInternalAlmostFinal<true, false>(CSceneSystem* , CSceneView* , int, int);
	/* ../scenesystem/scenesystem.cpp:3674 */
	void Thread_RenderPartitionInternal<false>(CSceneSystem* , CSceneView* , int, int);
	/* ../scenesystem/scenesystem.cpp:3674 */
	void Thread_RenderPartitionInternal<true>(CSceneSystem* , CSceneView* , int, int);
	/* ../scenesystem/scenesystem.cpp:2211 */
	void DrawObjectsToLayerInternal<false>(CSceneSystem* , CSceneView* , CSceneDrawList* , CSceneLayer* , CRenderBatchList* );
	/* ../scenesystem/scenesystem.cpp:2211 */
	void DrawObjectsToLayerInternal<true>(CSceneSystem* , CSceneView* , CSceneDrawList* , CSceneLayer* , CRenderBatchList* );
	float GetTimeAtStartOfRendering(class CSceneSystem *); /* linkage=_ZN12CSceneSystem25GetTimeAtStartOfRenderingEv */
	virtual HRenderTexture GetWellKnownTexture(class CSceneSystem *, enum SceneSystemWellKnownTextureObjectID_t); /* linkage=_ZN12CSceneSystem19GetWellKnownTextureE37SceneSystemWellKnownTextureObjectID_t */
	/* <40b8a9b> ../scenesystem/scenesystem.h:1315 */
	virtual uint8 GetObjectSettings(const class CSceneSystem  *, const class CSceneObject  *); /* linkage=_ZNK12CSceneSystem17GetObjectSettingsEPK12CSceneObject */
	class CLightBinnerStandard * GetOrCreatePooledLightBinnerStandard(class CSceneSystem *); /* linkage=_ZN12CSceneSystem36GetOrCreatePooledLightBinnerStandardEv */
	void CSceneSystem(class CSceneSystem *, const class CSceneSystem  &); /* linkage=_ZN12CSceneSystemC4ERKS_ */
	virtual enum InitReturnVal_t Init(class CSceneSystem *); /* linkage=_ZN12CSceneSystem4InitEv */
	virtual void PreShutdown(class CSceneSystem *); /* linkage=_ZN12CSceneSystem11PreShutdownEv */
	virtual void Shutdown(class CSceneSystem *); /* linkage=_ZN12CSceneSystem8ShutdownEv */
	virtual const class AppSystemInfo_t  * GetDependencies(class CSceneSystem *); /* linkage=_ZN12CSceneSystem15GetDependenciesEv */
	virtual class CSceneObject * CreateSceneObject(class CSceneSystem *, class ISceneObjectDesc *, enum ESceneObjectFlags, class ISceneWorld *, SceneObjectCreationFlags_t); /* linkage=_ZN12CSceneSystem17CreateSceneObjectEP16ISceneObjectDesc17ESceneObjectFlagsP11ISceneWorldj */
	virtual class CSceneObject * CreateSceneObject(class CSceneSystem *, enum ESceneObjectFlags, class ISceneWorld *, SceneObjectCreationFlags_t); /* linkage=_ZN12CSceneSystem17CreateSceneObjectE17ESceneObjectFlagsP11ISceneWorldj */
	/* <35a5e18> ../scenesystem/sceneobject_methods.cpp:752 */
	virtual class CSceneObject * CreateSceneObjectFromBuffers(class CSceneSystem *, enum ESceneObjectFlags, class ISceneWorld *, VertexBufferHandle_t, IndexBufferHandle_t, HMaterial, int, int, const class Vector  &, const class Vector  &, enum RenderPrimitiveType_t, enum RenderMeshDrawPrimitiveFlags_t, const char  *, bool); /* linkage=_ZN12CSceneSystem28CreateSceneObjectFromBuffersE17ESceneObjectFlagsP11ISceneWorldP22VertexBufferHandle_t__P21IndexBufferHandle_t__11CWeakHandleI29InfoForResourceTypeIMaterial2EiiRK6VectorSC_21RenderPrimitiveType_t30RenderMeshDrawPrimitiveFlags_tPKcb */
	virtual class CSceneObject * CreateSceneObjectFromStaticBuffers(class CSceneSystem *, class SceneObjectCreationInfo_t &); /* linkage=_ZN12CSceneSystem34CreateSceneObjectFromStaticBuffersER25SceneObjectCreationInfo_t */
	virtual class ISceneObjectDesc * GetSceneObjectDesc(class CSceneSystem *, const char  *); /* linkage=_ZN12CSceneSystem18GetSceneObjectDescEPKc */
	virtual void AddSceneObjectType(class CSceneSystem *, const char  *, class ISceneObjectDesc *); /* linkage=_ZN12CSceneSystem18AddSceneObjectTypeEPKcP16ISceneObjectDesc */
	virtual void RemoveSceneObjectType(class CSceneSystem *, const char  *); /* linkage=_ZN12CSceneSystem21RemoveSceneObjectTypeEPKc */
	virtual void AddListener(class CSceneSystem *, class ISceneSystemListener *); /* linkage=_ZN12CSceneSystem11AddListenerEP20ISceneSystemListener */
	virtual void RemoveListener(class CSceneSystem *, class ISceneSystemListener *); /* linkage=_ZN12CSceneSystem14RemoveListenerEP20ISceneSystemListener */
	virtual void BeginRenderingViews(class CSceneSystem *, class IRenderDevice *, bool); /* linkage=_ZN12CSceneSystem19BeginRenderingViewsEP13IRenderDeviceb */
	virtual bool IsRenderingViews(class CSceneSystem *); /* linkage=_ZN12CSceneSystem16IsRenderingViewsEv */
	virtual class ISceneView * AddView(class CSceneSystem *, const char  *, const class CViewId  &, const class CFrustum  &, SwapChainHandle_t, class ISceneWorld *, const class RenderViewport_t  &, const class CPVSBits  *, int); /* linkage=_ZN12CSceneSystem7AddViewEPKcRK7CViewIdRK8CFrustumP19SwapChainHandle_t__P11ISceneWorldRK16RenderViewport_tPK8CPVSBitsi */
	virtual class ISceneView * AddDynamicView(class CSceneSystem *, const char  *, const class ISceneView  *, const class CFrustum  &, SwapChainHandle_t, class ISceneWorld *, const class RenderViewport_t  &, const class CPVSBits  *, int, int); /* linkage=_ZN12CSceneSystem14AddDynamicViewEPKcPK10ISceneViewRK8CFrustumP19SwapChainHandle_t__P11ISceneWorldRK16RenderViewport_tPK8CPVSBitsii */
	virtual class ISceneView * AddShadowView(class CSceneSystem *, const char  *, class ISceneView *, const class CFrustum  *, const class RenderViewport_t  &, HRenderTexture, int, enum ESceneObjectFlags, enum ESceneObjectFlags, int, float, const class CFrustum  *); /* linkage=_ZN12CSceneSystem13AddShadowViewEPKcP10ISceneViewPK8CFrustumRK16RenderViewport_t11CWeakHandleI31InfoForResourceTypeCTextureBaseEi17ESceneObjectFlagsSD_ifS6_ */
	virtual class ISceneView * AddViewFromTemplate(class CSceneSystem *, const char  *, const char  *, const class ISceneView  *, const class CFrustum  &, SwapChainHandle_t, class ISceneWorld *, const class RenderViewport_t  &, const class CPVSBits  *, const class CRenderAttributes  *); /* linkage=_ZN12CSceneSystem19AddViewFromTemplateEPKcS1_PK10ISceneViewRK8CFrustumP19SwapChainHandle_t__P11ISceneWorldRK16RenderViewport_tPK8CPVSBitsPK17CRenderAttributes */
	virtual void InstallTemplateViewFactory(class CSceneSystem *, const char  *, SceneTemplateViewFactoryDelegate_t); /* linkage=_ZN12CSceneSystem26InstallTemplateViewFactoryEPKc12CUtlDelegateIFvP10ISceneViewPK17CRenderAttributesEE */
	/* <2f40ca5> ../scenesystem/scenesystem.cpp:1707 */
	virtual void RemoveTemplateViewFactory(class CSceneSystem *, const char  *); /* linkage=_ZN12CSceneSystem25RemoveTemplateViewFactoryEPKc */
	virtual void BeginRenderingDynamicView(class CSceneSystem *, class ISceneView *, const class RenderTargetDesc_t  *, class RenderViewport_t *); /* linkage=_ZN12CSceneSystem25BeginRenderingDynamicViewEP10ISceneViewPK18RenderTargetDesc_tP16RenderViewport_t */
	virtual void FinishRenderingViews(class CSceneSystem *, float); /* linkage=_ZN12CSceneSystem20FinishRenderingViewsEf */
	virtual class ISceneView * FindView(class CSceneSystem *, const char  *); /* linkage=_ZN12CSceneSystem8FindViewEPKc */
	virtual class IRenderContext * RenderEmbeddedView(class CSceneSystem *, class ISceneView *, class ISceneLayer *, const class RenderTargetDesc_t  *, class RenderViewport_t *); /* linkage=_ZN12CSceneSystem18RenderEmbeddedViewEP10ISceneViewP11ISceneLayerPK18RenderTargetDesc_tP16RenderViewport_t */
	virtual void SetObjectBounds(class CSceneSystem *, class CSceneObject *, const class Vector  &, const class Vector  &); /* linkage=_ZN12CSceneSystem15SetObjectBoundsEP12CSceneObjectRK6VectorS4_ */
	virtual void SetObjectBoundsInfinite(class CSceneSystem *, class CSceneObject *); /* linkage=_ZN12CSceneSystem23SetObjectBoundsInfiniteEP12CSceneObject */
	virtual void GetObjectBounds(class CSceneSystem *, const class CSceneObject  *, class Vector &, class Vector &); /* linkage=_ZN12CSceneSystem15GetObjectBoundsEPK12CSceneObjectR6VectorS4_ */
	virtual void SetPVSFromClusterMembership(class CSceneSystem *, class CSceneObject *, const uint32  *, int); /* linkage=_ZN12CSceneSystem27SetPVSFromClusterMembershipEP12CSceneObjectPKji */
	virtual void SetSceneObjectTransformsFast(class CSceneSystem *, class CSceneObject * *, int, const class FourVectors  *, const fltx4  *, const class FourVectors  *, const fltx4  *, const fltx4  *, const fltx4  *, float, const fltx4  *, const fltx4  *, const fltx4  *); /* linkage=_ZN12CSceneSystem28SetSceneObjectTransformsFastEPP12CSceneObjectiPK11FourVectorsPKDv4_fS5_S8_S8_S8_fS8_S8_S8_ */
	virtual int FindOrCreateSceneObjectClass(class CSceneSystem *, const char  *); /* linkage=_ZN12CSceneSystem28FindOrCreateSceneObjectClassEPKc */
	virtual class CSceneDebugTextObject * CreateTextObject(class CSceneSystem *, class Vector2D *, class ISceneWorld *, const class CTextLayoutInfo  *, bool, const class Vector  &); /* linkage=_ZN12CSceneSystem16CreateTextObjectEP8Vector2DP11ISceneWorldPK15CTextLayoutInfobRK6Vector */
	virtual class CDecalSceneObject * CreateDecal(class CSceneSystem *, class ISceneWorld *); /* linkage=_ZN12CSceneSystem11CreateDecalEP11ISceneWorld */
	virtual class CSceneLightObject * CreateLight(class CSceneSystem *, const class LightDesc_t  &, class ISceneWorld *, bool); /* linkage=_ZN12CSceneSystem11CreateLightERK11LightDesc_tP11ISceneWorldb */
	virtual class CSceneSkyBoxObject * CreateSkyBox(class CSceneSystem *, HMaterial, class ISceneWorld *); /* linkage=_ZN12CSceneSystem12CreateSkyBoxE11CWeakHandleI29InfoForResourceTypeIMaterial2EP11ISceneWorld */
	virtual class CSceneLightProbeVolumeObject * CreateLightProbeVolume(class CSceneSystem *, class ISceneWorld *); /* linkage=_ZN12CSceneSystem22CreateLightProbeVolumeEP11ISceneWorld */
	virtual class CSceneLPVDebugGridObject * CreateLightProbeVolumeDebugGrid(class CSceneSystem *, class ISceneWorld *, class CSceneLightProbeVolumeObject *); /* linkage=_ZN12CSceneSystem31CreateLightProbeVolumeDebugGridEP11ISceneWorldP28CSceneLightProbeVolumeObject */
	virtual void MarkLightProbeVolumeObjectUpdated(class CSceneSystem *, class CSceneLightProbeVolumeObject *); /* linkage=_ZN12CSceneSystem33MarkLightProbeVolumeObjectUpdatedEP28CSceneLightProbeVolumeObject */
	virtual void MarkEnvironmentMapObjectUpdated(class CSceneSystem *, class CEnvMapSceneObject *); /* linkage=_ZN12CSceneSystem31MarkEnvironmentMapObjectUpdatedEP18CEnvMapSceneObject */
	virtual uint32 AddCullingBox(class CSceneSystem *, class ISceneWorld *, enum SceneSystemBoxCullMode_t, const class Vector  &, const class QAngle  &, class Vector); /* linkage=_ZN12CSceneSystem13AddCullingBoxEP11ISceneWorld24SceneSystemBoxCullMode_tRK6VectorRK6QAngleS3_ */
	virtual void RemoveCullingBox(class CSceneSystem *, class ISceneWorld *, uint32); /* linkage=_ZN12CSceneSystem16RemoveCullingBoxEP11ISceneWorldj */
	virtual uint32 AddVolumetricFogVolume(class CSceneSystem *, class ISceneWorld *, const class SceneVolumetricFogVolume_t  &); /* linkage=_ZN12CSceneSystem22AddVolumetricFogVolumeEP11ISceneWorldRK26SceneVolumetricFogVolume_t */
	virtual void RemoveVolumetricFogVolume(class CSceneSystem *, class ISceneWorld *, uint32); /* linkage=_ZN12CSceneSystem25RemoveVolumetricFogVolumeEP11ISceneWorldj */
	virtual class ISceneWorld * CreateWorld(class CSceneSystem *, const char  *); /* linkage=_ZN12CSceneSystem11CreateWorldEPKc */
	virtual void DestroyWorld(class CSceneSystem *, class ISceneWorld *); /* linkage=_ZN12CSceneSystem12DestroyWorldEP11ISceneWorld */
	virtual class IRayTraceSceneWorld * CreateRayTraceWorld(class CSceneSystem *, const char  *, int); /* linkage=_ZN12CSceneSystem19CreateRayTraceWorldEPKci */
	virtual void DestroyRayTraceWorld(class CSceneSystem *, class IRayTraceSceneWorld *); /* linkage=_ZN12CSceneSystem20DestroyRayTraceWorldEP19IRayTraceSceneWorld */
	virtual VertexBufferHandle_t GetWellKnownVertexBuffer(class CSceneSystem *, enum SceneSystemWellKnownVertexBufferObjectID_t); /* linkage=_ZN12CSceneSystem24GetWellKnownVertexBufferE42SceneSystemWellKnownVertexBufferObjectID_t */
	virtual IndexBufferHandle_t GetWellKnownIndexBuffer(class CSceneSystem *, enum SceneSystemWellKnownIndexBufferObjectID_t); /* linkage=_ZN12CSceneSystem23GetWellKnownIndexBufferE41SceneSystemWellKnownIndexBufferObjectID_t */
	virtual RenderInputLayout_t GetWellKnownInputLayout(class CSceneSystem *, enum SceneSystemWellKnownInputLayoutID_t, enum InputLayoutVariation_t); /* linkage=_ZN12CSceneSystem23GetWellKnownInputLayoutE35SceneSystemWellKnownInputLayoutID_t22InputLayoutVariation_t */
	virtual const class RenderInputLayoutField_t  * GetWellKnownInputLayoutFields(class CSceneSystem *, enum SceneSystemWellKnownInputLayoutID_t, int *); /* linkage=_ZN12CSceneSystem29GetWellKnownInputLayoutFieldsE35SceneSystemWellKnownInputLayoutID_tPi */
	/* <33d2b34> ../scenesystem/scenegfxresources.cpp:1178 */
	virtual const class IMaterial2  * GetWellKnownMaterial(class CSceneSystem *, enum SceneSystemWellKnownMaterialObjectID_t); /* linkage=_ZN12CSceneSystem20GetWellKnownMaterialE38SceneSystemWellKnownMaterialObjectID_t */
	virtual HMaterial GetWellKnownMaterialHandle(class CSceneSystem *, enum SceneSystemWellKnownMaterialObjectID_t); /* linkage=_ZN12CSceneSystem26GetWellKnownMaterialHandleE38SceneSystemWellKnownMaterialObjectID_t */
	virtual const class CSimpleStaticShapeDesc  & GetWellKnownShape(class CSceneSystem *, enum SceneSystemWellKnownShapeID_t); /* linkage=_ZN12CSceneSystem17GetWellKnownShapeE29SceneSystemWellKnownShapeID_t */
	virtual void GetRenderTargetSize(class CSceneSystem *, enum SceneSystemRenderTargetSize_t, int *, int *); /* linkage=_ZN12CSceneSystem19GetRenderTargetSizeE29SceneSystemRenderTargetSize_tPiS1_ */
	/* <33d2ad2> ../scenesystem/scenegfxresources.cpp:1213 */
	virtual void SetRenderTargetSize(class CSceneSystem *, enum SceneSystemRenderTargetSize_t, int, int); /* linkage=_ZN12CSceneSystem19SetRenderTargetSizeE29SceneSystemRenderTargetSize_tii */
	virtual void FrameUpdate(class CSceneSystem *); /* linkage=_ZN12CSceneSystem11FrameUpdateEv */
	virtual void AllocateScratchRenderTargets(class CSceneSystem *, class CUtlStringToken, int, int, const class SceneScratchRenderTargetInfo_t  *); /* linkage=_ZN12CSceneSystem28AllocateScratchRenderTargetsE15CUtlStringTokeniiPK30SceneScratchRenderTargetInfo_t */
	virtual void WaitForRenderingToComplete(class CSceneSystem *); /* linkage=_ZN12CSceneSystem26WaitForRenderingToCompleteEv */
	virtual bool IsWaitingOnRenderingJobs(class CSceneSystem *); /* linkage=_ZN12CSceneSystem24IsWaitingOnRenderingJobsEv */
	virtual void DeleteSceneObject(class CSceneSystem *, class CSceneObject *); /* linkage=_ZN12CSceneSystem17DeleteSceneObjectEP12CSceneObject */
	virtual class ISceneViewDebugOverlays * CreateSceneViewDebugOverlayList(class CSceneSystem *, enum SceneViewDebugOverlayTimingType_t); /* linkage=_ZN12CSceneSystem31CreateSceneViewDebugOverlayListE33SceneViewDebugOverlayTimingType_t */
	virtual void DestroySceneViewDebugOverlayList(class CSceneSystem *, class ISceneViewDebugOverlays *); /* linkage=_ZN12CSceneSystem32DestroySceneViewDebugOverlayListEP23ISceneViewDebugOverlays */
	virtual void MoveObjectToWorld(class CSceneSystem *, class CSceneObject *, class ISceneWorld *); /* linkage=_ZN12CSceneSystem17MoveObjectToWorldEP12CSceneObjectP11ISceneWorld */
	int AllocateGetTransformSlot(class CSceneSystem *, int); /* linkage=_ZN12CSceneSystem24AllocateGetTransformSlotEi */
	/* <2f3e1b8> ../scenesystem/scenesystem.cpp:2104 */
	class SceneSystemTransformEntry_t * GetPointerFromTransformTextureSlot(class CSceneSystem *, int); /* linkage=_ZN12CSceneSystem34GetPointerFromTransformTextureSlotEi */
	virtual void SetIntState(class CSceneSystem *, class CUtlStringToken, int); /* linkage=_ZN12CSceneSystem11SetIntStateE15CUtlStringTokeni */
	virtual void ComputePipelineRenderTargetInfo(class CSceneSystem *, SwapChainHandle_t, bool, class PipelineRenderTargetInfo_t *); /* linkage=_ZN12CSceneSystem31ComputePipelineRenderTargetInfoEP19SwapChainHandle_t__bP26PipelineRenderTargetInfo_t */
	virtual void ComputePipelineRenderTargetInfo(class CSceneSystem *, int, int, enum RenderMultisampleType_t, bool, class PipelineRenderTargetInfo_t *); /* linkage=_ZN12CSceneSystem31ComputePipelineRenderTargetInfoEii23RenderMultisampleType_tbP26PipelineRenderTargetInfo_t */
	virtual void SetMainSwapChain(class CSceneSystem *, SwapChainHandle_t); /* linkage=_ZN12CSceneSystem16SetMainSwapChainEP19SwapChainHandle_t__ */
	virtual void GetStatsSummaryString(const class CSceneSystem  *, class CBufferString *); /* linkage=_ZNK12CSceneSystem21GetStatsSummaryStringEP13CBufferString */
	/* <2f30072> ../scenesystem/scenesystem.cpp:665 */
	virtual const class SceneSystemPerFrameStats_t  & GetPerFrameStats(const class CSceneSystem  *); /* linkage=_ZNK12CSceneSystem16GetPerFrameStatsEv */
	virtual class CViewId CreateViewId(class CSceneSystem *, int); /* linkage=_ZN12CSceneSystem12CreateViewIdEi */
	virtual void SetLightCookieTexture(class CSceneSystem *, HRenderTexture); /* linkage=_ZN12CSceneSystem21SetLightCookieTextureE11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	virtual void SetLightCookieSequenceForLight(class CSceneSystem *, class CSceneLightObject *, const class CUtlStringToken  &); /* linkage=_ZN12CSceneSystem30SetLightCookieSequenceForLightEP17CSceneLightObjectRK15CUtlStringToken */
	virtual void QueueSceneObjectUpdateJob(class CSceneSystem *, class function<void()> &); /* linkage=_ZN12CSceneSystem25QueueSceneObjectUpdateJobEOSt8functionIFvvEE */
	virtual void ExecuteQueuedSceneObjectUpdateJobs(class CSceneSystem *); /* linkage=_ZN12CSceneSystem34ExecuteQueuedSceneObjectUpdateJobsEv */
	virtual void RegisterExtraDataAllocation(class CSceneSystem *, const char  *); /* linkage=_ZN12CSceneSystem27RegisterExtraDataAllocationEPKc */
	void OnPrintExtraDataAllocations(class CSceneSystem *, const class CCommandContext  &, const class CCommand  &); /* linkage=_ZN12CSceneSystem27OnPrintExtraDataAllocationsERK15CCommandContextRK8CCommand */
	virtual void InstallMaterialDependentSceneObjectUpdater(class CSceneSystem *, const class function<void(CSceneObject*)>  &); /* linkage=_ZN12CSceneSystem42InstallMaterialDependentSceneObjectUpdaterERKSt8functionIFvP12CSceneObjectEE */
	/* <2f2fd51> ../scenesystem/scenesystem.h:953 */
	virtual uint32 GetFinishRenderingViewsCounter(const class CSceneSystem  *); /* linkage=_ZNK12CSceneSystem30GetFinishRenderingViewsCounterEv */
	void GetLightCookieOffsetAndScale(class CSceneSystem *, class CookieSequenceData_t *, const class CUtlStringToken  &); /* linkage=_ZN12CSceneSystem28GetLightCookieOffsetAndScaleEP20CookieSequenceData_tRK15CUtlStringToken */
	void GetLightCookieOffsetAndScale(class CSceneSystem *, class CookieSequenceData_t *, int); /* linkage=_ZN12CSceneSystem28GetLightCookieOffsetAndScaleEP20CookieSequenceData_ti */
	/* <2f2fd7b> ../scenesystem/scenesystem.h:957 */
	virtual uint32 GetFrameUpdateCounter(const class CSceneSystem  *); /* linkage=_ZNK12CSceneSystem21GetFrameUpdateCounterEv */
	void ApplyViewOverrides(class CSceneSystem *, class CSceneView *, const class RenderTargetDesc_t  *, class RenderViewport_t *); /* linkage=_ZN12CSceneSystem18ApplyViewOverridesEP10CSceneViewPK18RenderTargetDesc_tP16RenderViewport_t */
	virtual void ClearHighWaterMarksNextFrame(class CSceneSystem *); /* linkage=_ZN12CSceneSystem28ClearHighWaterMarksNextFrameEv */
	virtual float GetCurrentRenderTime(class CSceneSystem *); /* linkage=_ZN12CSceneSystem20GetCurrentRenderTimeEv */
	virtual void AdvanceNonRenderedFrame(class CSceneSystem *); /* linkage=_ZN12CSceneSystem23AdvanceNonRenderedFrameEv */
	virtual void SceneObject_ScheduleDirtyUpdate(class CSceneSystem *, class CSceneObject *); /* linkage=_ZN12CSceneSystem31SceneObject_ScheduleDirtyUpdateEP12CSceneObject */
	virtual void SceneObject_UnscheduleDirtyUpdate(class CSceneSystem *, class CSceneObject *); /* linkage=_ZN12CSceneSystem33SceneObject_UnscheduleDirtyUpdateEP12CSceneObject */
	/* <356766a> ../scenesystem/sceneobject_methods.cpp:62 */
	virtual void SceneObject_AttachExtraData(class CSceneSystem *, class CSceneObject *); /* linkage=_ZN12CSceneSystem27SceneObject_AttachExtraDataEP12CSceneObject */
	/* <3566db9> ../scenesystem/sceneobject_methods.cpp:70 */
	virtual void SceneObject_AttachLightingCache(class CSceneSystem *, class CSceneObject *); /* linkage=_ZN12CSceneSystem31SceneObject_AttachLightingCacheEP12CSceneObject */
	/* <3566eff> ../scenesystem/sceneobject_methods.cpp:277 */
	virtual void SceneObject_UpdateFlagsBasedOnMaterial(class CSceneSystem *, class CSceneObject *); /* linkage=_ZN12CSceneSystem38SceneObject_UpdateFlagsBasedOnMaterialEP12CSceneObject */
	virtual void SceneObject_SetMaterialOverride(class CSceneSystem *, class CSceneObject *, HMaterial, class CUtlStringToken, int); /* linkage=_ZN12CSceneSystem31SceneObject_SetMaterialOverrideEP12CSceneObject11CWeakHandleI29InfoForResourceTypeIMaterial2E15CUtlStringTokeni */
	virtual void SceneObject_AddChild(class CSceneSystem *, class CSceneObject *, class CUtlStringToken, class CSceneObject *, uint32); /* linkage=_ZN12CSceneSystem20SceneObject_AddChildEP12CSceneObject15CUtlStringTokenS1_j */
	virtual void SceneObject_RemoveChild(class CSceneSystem *, class CSceneObject *, class CSceneObject *); /* linkage=_ZN12CSceneSystem23SceneObject_RemoveChildEP12CSceneObjectS1_ */
	virtual class CSceneObject * SceneObject_FindChild(class CSceneSystem *, const class CSceneObject  *, class CUtlStringToken); /* linkage=_ZN12CSceneSystem21SceneObject_FindChildEPK12CSceneObject15CUtlStringToken */
	virtual void SceneObject_MirrorTransformToChildSceneObjects(class CSceneSystem *, const class CSceneObject  *); /* linkage=_ZN12CSceneSystem46SceneObject_MirrorTransformToChildSceneObjectsEPK12CSceneObject */
	virtual void SceneObject_MirrorVisibilityToChildSceneObjects(class CSceneSystem *, const class CSceneObject  *); /* linkage=_ZN12CSceneSystem47SceneObject_MirrorVisibilityToChildSceneObjectsEPK12CSceneObject */
	virtual void SceneObject_SetForceLayerID(class CSceneSystem *, class CSceneObject *, class CUtlStringToken); /* linkage=_ZN12CSceneSystem27SceneObject_SetForceLayerIDEP12CSceneObject15CUtlStringToken */
	/* <35a5d67> ../scenesystem/sceneobject_methods.cpp:1581 */
	virtual void SceneObject_PostFlagsUpdate(class CSceneSystem *, class CSceneObject *); /* linkage=_ZN12CSceneSystem27SceneObject_PostFlagsUpdateEP12CSceneObject */
	void ClearCompositeMorphTextureList(class CSceneSystem *); /* linkage=_ZN12CSceneSystem30ClearCompositeMorphTextureListEv */
	void GenerateCompositeMorphTextureAtlas(class CSceneSystem *); /* linkage=_ZN12CSceneSystem34GenerateCompositeMorphTextureAtlasEv */
	void UpdateFinalBones(class CSceneSystem *); /* linkage=_ZN12CSceneSystem16UpdateFinalBonesEv */
	void HandleFlexSetup(class CSceneSystem *, class FlexDescSetupInfo_t *); /* linkage=_ZN12CSceneSystem15HandleFlexSetupEP19FlexDescSetupInfo_t */
	void UpdateFinalFlexDescs(class CSceneSystem *); /* linkage=_ZN12CSceneSystem20UpdateFinalFlexDescsEv */
	/* <2f4d491> ../scenesystem/scenesystem.cpp:6618 */
	void CleanupViewList(class CSceneSystem *); /* linkage=_ZN12CSceneSystem15CleanupViewListEv */
	/* <2f3edda> ../scenesystem/scenesystem.cpp:5867 */
	void VrPollHMDRenderState(class CSceneSystem *); /* linkage=_ZN12CSceneSystem20VrPollHMDRenderStateEv */
	class CSceneView * NewView(class CSceneSystem *, const char  *, class ISceneWorld *, const class CPVSBits  *); /* linkage=_ZN12CSceneSystem7NewViewEPKcP11ISceneWorldPK8CPVSBits */
	void RegisterActiveSceneWorld(class CSceneSystem *, class CSceneWorld *); /* linkage=_ZN12CSceneSystem24RegisterActiveSceneWorldEP11CSceneWorld */
	void UnregisterActiveSceneWorld(class CSceneSystem *, class CSceneWorld *); /* linkage=_ZN12CSceneSystem26UnregisterActiveSceneWorldEP11CSceneWorld */
	void GetCullBoxListForView(const class CSceneSystem  *, const class CSceneView  *, class CUtlVector<SceneObjectCullingBox_t, CUtlMemory<SceneObjectCullingBox_t, int> > *, class CUtlVector<SceneObjectCullingBox_t, CUtlMemory<SceneObjectCullingBox_t, int> > *); /* linkage=_ZNK12CSceneSystem21GetCullBoxListForViewEPK10CSceneViewP10CUtlVectorI23SceneObjectCullingBox_t10CUtlMemoryIS4_iEES8_ */
	class CTimestampManager * TimestampManager(class CSceneSystem *); /* linkage=_ZN12CSceneSystem16TimestampManagerEv */
	/* <33d3f75> ../scenesystem/scenegfxresources.cpp:1056 */
	virtual void OnMaxSwapChainDimensionsChanged(class CSceneSystem *, int, int); /* linkage=_ZN12CSceneSystem31OnMaxSwapChainDimensionsChangedEii */
	void CSceneSystem(class CSceneSystem *); /* linkage=_ZN12CSceneSystemC4Ev */
	virtual void ~CSceneSystem(class CSceneSystem *); /* linkage=_ZN12CSceneSystemD4Ev */
	void Thread_RenderPartition(class CSceneSystem *, class CSceneView *, int, int); /* linkage=_ZN12CSceneSystem22Thread_RenderPartitionEP10CSceneViewii */
	void Thread_QueueRenderPartitions(class CSceneSystem *, class CSceneView *); /* linkage=_ZN12CSceneSystem28Thread_QueueRenderPartitionsEP10CSceneView */
	/* <2f3e645> ../scenesystem/scenesystem.cpp:3821 */
	void SetPerLayerConstants(class CSceneSystem *, class IRenderContext *, class ISceneLayer *, const class CSceneView  *); /* linkage=_ZN12CSceneSystem20SetPerLayerConstantsEP14IRenderContextP11ISceneLayerPK10CSceneView */
	void SetPerLayerData(class CSceneSystem *, class IRenderContext *, class ISceneLayer *, const class CSceneView  *); /* linkage=_ZN12CSceneSystem15SetPerLayerDataEP14IRenderContextP11ISceneLayerPK10CSceneView */
	void InitializeRenderAttributes(class CSceneSystem *, class CSceneView *, float32, class RenderAttributesSetup_t *, int); /* linkage=_ZN12CSceneSystem26InitializeRenderAttributesEP10CSceneViewfPNS_23RenderAttributesSetup_tEi */
	void InitializeRenderAttributesForLayer(class CSceneSystem *, class IRenderContext *, class ISceneLayer *, const class CSceneView  *); /* linkage=_ZN12CSceneSystem34InitializeRenderAttributesForLayerEP14IRenderContextP11ISceneLayerPK10CSceneView */
	/* <2f3e4ee> ../scenesystem/scenesystem.cpp:3805 */
	void SetPerContextData(class CSceneSystem *, class IRenderContext *, class ISceneLayer *, class CSceneView *, bool); /* linkage=_ZN12CSceneSystem17SetPerContextDataEP14IRenderContextP11ISceneLayerP10CSceneViewb */
	bool CanAllocateScratchRenderTargetsOnDemand(const class CSceneSystem  *); /* linkage=_ZNK12CSceneSystem39CanAllocateScratchRenderTargetsOnDemandEv */
	/* <35a5b59> ../scenesystem/sceneobject_methods.cpp:447 */
	void AddObjectToWorld(class CSceneSystem *, class CSceneObject *); /* linkage=_ZN12CSceneSystem16AddObjectToWorldEP12CSceneObject */
	virtual void BindTransformSlot(class CSceneSystem *, class IRenderContext *, int, int); /* linkage=_ZN12CSceneSystem17BindTransformSlotEP14IRenderContextii */
	virtual class SceneSystemTransformEntry_t * AllocateFrameScopedTransforms(class CSceneSystem *, int, int *); /* linkage=_ZN12CSceneSystem29AllocateFrameScopedTransformsEiPi */
	virtual class ExtraShaderData_t GetExtraShaderData(class CSceneSystem *, const class Vector4D  &); /* linkage=_ZN12CSceneSystem18GetExtraShaderDataERK8Vector4D */
	int GetPartition(const class CSceneObject  *); /* linkage=_ZN12CSceneSystem12GetPartitionEPK12CSceneObject */
	int AllocatePerFrameTransformData(class CSceneSystem *, int, class SceneSystemTransformEntry_t * &); /* linkage=_ZN12CSceneSystem29AllocatePerFrameTransformDataEiRP27SceneSystemTransformEntry_t */
	class SceneSystemTransformEntry_t * GetPerFrameTransformData(class CSceneSystem *, int); /* linkage=_ZN12CSceneSystem24GetPerFrameTransformDataEi */
	void Render3DDebugOverlays(class CSceneSystem *, class IRenderContext *, const class CFrustum  *, class ISceneLayer *, class CSceneViewDebugOverlays *); /* linkage=_ZN12CSceneSystem21Render3DDebugOverlaysEP14IRenderContextPK8CFrustumP11ISceneLayerP23CSceneViewDebugOverlays */
	void Render2DDebugOverlays(class CSceneSystem *, class IRenderContext *, const class CFrustum  *, class ISceneLayer *, class CSceneViewDebugOverlays *); /* linkage=_ZN12CSceneSystem21Render2DDebugOverlaysEP14IRenderContextPK8CFrustumP11ISceneLayerP23CSceneViewDebugOverlays */
	bool UseReverseDepth(const class CSceneSystem  *); /* linkage=_ZNK12CSceneSystem15UseReverseDepthEv */
	int AllocateUniqueSceneLayerIndex(class CSceneSystem *); /* linkage=_ZN12CSceneSystem29AllocateUniqueSceneLayerIndexEv */
	int GetScratchRenderTargetCount(const class CSceneSystem  *); /* linkage=_ZNK12CSceneSystem27GetScratchRenderTargetCountEv */
	int GetScratchRenderTargetDesc(const class CSceneSystem  *, int, int, class SceneScratchRenderTargetDesc_t *); /* linkage=_ZNK12CSceneSystem26GetScratchRenderTargetDescEiiP30SceneScratchRenderTargetDesc_t */
	void MarkScratchRenderTargetUsed(class CSceneSystem *, int, bool); /* linkage=_ZN12CSceneSystem27MarkScratchRenderTargetUsedEib */
	int AllocateDebugScratchRenderTarget(class CSceneSystem *, const class SceneScratchRenderTargetInfo_t  &); /* linkage=_ZN12CSceneSystem32AllocateDebugScratchRenderTargetERK30SceneScratchRenderTargetInfo_t */
	/* <2f30686> ../scenesystem/scenesystem.cpp:6581 */
	virtual void SetDebugFlag(class CSceneSystem *, enum SceneSystemDebugFlag_t, bool); /* linkage=_ZN12CSceneSystem12SetDebugFlagE22SceneSystemDebugFlag_tb */
	virtual bool GetDebugFlag(const class CSceneSystem  *, enum SceneSystemDebugFlag_t); /* linkage=_ZNK12CSceneSystem12GetDebugFlagE22SceneSystemDebugFlag_t */
	virtual uint GetDebugFlags(const class CSceneSystem  *); /* linkage=_ZNK12CSceneSystem13GetDebugFlagsEv */
	/* <35a60d2> ../scenesystem/sceneobject_methods.cpp:938 */
	void PerformPreDeletionWork(class CSceneSystem *); /* linkage=_ZN12CSceneSystem22PerformPreDeletionWorkEv */
	virtual void DeleteSceneObjectAtFrameEnd(class CSceneSystem *, class CSceneObject *); /* linkage=_ZN12CSceneSystem27DeleteSceneObjectAtFrameEndEP12CSceneObject */
	virtual class CSceneAnimatableObject * CreateAnimatableSceneObjectFromBuffers(class CSceneSystem *, class ISceneWorld *, HMaterial, class SceneObjectBuffers_t &, enum ESceneObjectFlags, bool); /* linkage=_ZN12CSceneSystem38CreateAnimatableSceneObjectFromBuffersEP11ISceneWorld11CWeakHandleI29InfoForResourceTypeIMaterial2ER20SceneObjectBuffers_t17ESceneObjectFlagsb */
	virtual void SetIgnoreAlphaFade(class CSceneSystem *, bool); /* linkage=_ZN12CSceneSystem18SetIgnoreAlphaFadeEb */
	virtual void SetupPerObjectLighting(class CSceneSystem *, class CRenderAttributes &, class CSceneObject *, const class ISceneLayer  *, enum SetupPerObjectLighting_t); /* linkage=_ZN12CSceneSystem22SetupPerObjectLightingER17CRenderAttributesP12CSceneObjectPK11ISceneLayer24SetupPerObjectLighting_t */
	bool IgnoreAlphaFade(class CSceneSystem *); /* linkage=_ZN12CSceneSystem15IgnoreAlphaFadeEv */
	enum SceneSystemGPUProfilerMode_t GetGPUProfilerModeInline(const class CSceneSystem  *); /* linkage=_ZNK12CSceneSystem24GetGPUProfilerModeInlineEv */
	/* <2f3f076> ../scenesystem/scenesystem.cpp:6547 */
	const class ExtraShaderData_t  & GetDefaultExtraShaderData(const class CSceneSystem  *); /* linkage=_ZNK12CSceneSystem25GetDefaultExtraShaderDataEv */
	class ExtraShaderData_t CreateExtraShaderData_TintRGBA32(class CSceneSystem *, class Vector4D, float, uint); /* linkage=_ZN12CSceneSystem32CreateExtraShaderData_TintRGBA32E8Vector4Dfj */
	void ConShowClasses(class CSceneSystem *); /* linkage=_ZN12CSceneSystem14ConShowClassesEv */
	void ConSetClassFlags(class CSceneSystem *, const class CCommandContext  &, const class CCommand  &); /* linkage=_ZN12CSceneSystem16ConSetClassFlagsERK15CCommandContextRK8CCommand */
	virtual void SetObjectClass(class CSceneSystem *, class CSceneObject *, uint8); /* linkage=_ZN12CSceneSystem14SetObjectClassEP12CSceneObjecth */
	virtual void GetObjectClassName(class CSceneSystem *, uint8, char *, int); /* linkage=_ZN12CSceneSystem18GetObjectClassNameEhPci */
	virtual int ModifyObjectClassFlags(class CSceneSystem *, int, int, int); /* linkage=_ZN12CSceneSystem22ModifyObjectClassFlagsEiii */
	class CSceneView * GetViewByIndex(const class CSceneSystem  *, int); /* linkage=_ZNK12CSceneSystem14GetViewByIndexEi */
	void SubmitDisplayList(class CSceneSystem *, class CDisplayList *); /* linkage=_ZN12CSceneSystem17SubmitDisplayListEP12CDisplayList */
	void SubmitRenderContext(class CSceneSystem *, class CRenderContextPtr &); /* linkage=_ZN12CSceneSystem19SubmitRenderContextER17CRenderContextPtr */
	void FlushPendingDisplayLists(class CSceneSystem *); /* linkage=_ZN12CSceneSystem24FlushPendingDisplayListsEv */
	/* <2f42a6e> ../scenesystem/scenesystem.cpp:2875 */
	void CheckForPendingDraws(class CSceneSystem *, class CSceneView *); /* linkage=_ZN12CSceneSystem20CheckForPendingDrawsEP10CSceneView */
	void AddObjectToLayerDrawList(class CSceneSystem *, class CSceneObject *, class CSceneLayer *, class CSceneView *, const class GeneratePrimitivesArgs_t  &, DrawListVector_t &); /* linkage=_ZN12CSceneSystem24AddObjectToLayerDrawListEP12CSceneObjectP11CSceneLayerP10CSceneViewRKN16ISceneObjectDesc24GeneratePrimitivesArgs_tER10CUtlVectorIP14CSceneDrawList10CUtlMemoryISC_iEE */
	virtual void GenerateOverrideDescriptor(const class CSceneSystem  *, const class CSceneSystemStencilState  *, class RsStencilStateOverride_t *, class ISceneLayer *); /* linkage=_ZNK12CSceneSystem26GenerateOverrideDescriptorEPK24CSceneSystemStencilStateP24RsStencilStateOverride_tP11ISceneLayer */
	virtual uint8 CalculateStencilMask(const class CSceneSystem  *, const class CUtlStringToken  *, class ISceneLayer *); /* linkage=_ZNK12CSceneSystem20CalculateStencilMaskEPK15CUtlStringTokenP11ISceneLayer */
	/* <2f3ee77> ../scenesystem/scenesystem.cpp:6331 */
	void AddPerFrameStatsForView(class CSceneSystem *, class CSceneView *); /* linkage=_ZN12CSceneSystem23AddPerFrameStatsForViewEP10CSceneView */
	void CompletionWaitJob(class CSceneSystem *); /* linkage=_ZN12CSceneSystem17CompletionWaitJobEv */
	VertexBufferHandle_t GetInstanceIDBuffer(class CSceneSystem *); /* linkage=_ZN12CSceneSystem19GetInstanceIDBufferEv */
	void ThreadUpdateDirtyObject(class CSceneObject * &); /* linkage=_ZN12CSceneSystem23ThreadUpdateDirtyObjectERP12CSceneObject */
	void UpdateDirtyObjects(class CSceneSystem *); /* linkage=_ZN12CSceneSystem18UpdateDirtyObjectsEv */
	void InitGfxObjects(class CSceneSystem *); /* linkage=_ZN12CSceneSystem14InitGfxObjectsEv */
	void ShutdownGfxObjects(class CSceneSystem *); /* linkage=_ZN12CSceneSystem18ShutdownGfxObjectsEv */
	void CreateStaticShape(class CSceneSystem *, int, const float  *, int, const int  *, class CSimpleStaticShapeDesc &, bool, const char  *, int, class RenderInputLayoutField_t *); /* linkage=_ZN12CSceneSystem17CreateStaticShapeEiPKfiPKiR22CSimpleStaticShapeDescbPKciP24RenderInputLayoutField_t */
	void ShutdownShape(class CSceneSystem *, class CSimpleStaticShapeDesc &); /* linkage=_ZN12CSceneSystem13ShutdownShapeER22CSimpleStaticShapeDesc */
	void SubmitAllDisplayLists(class CSceneSystem *, SwapChainHandle_t); /* linkage=_ZN12CSceneSystem21SubmitAllDisplayListsEP19SwapChainHandle_t__ */
	/* <2f453cc> ../scenesystem/scenesystem.cpp:4233 */
	void ResolveLayer(class CSceneSystem *, class CSceneLayer *, class CSceneView *, bool); /* linkage=_ZN12CSceneSystem12ResolveLayerEP11CSceneLayerP10CSceneViewb */
	/* <2f3ed65> ../scenesystem/scenesystem.cpp:4655 */
	void AddClearForDiscardedLayer(class CSceneSystem *, class CSceneView *, class CSceneLayer *, int); /* linkage=_ZN12CSceneSystem25AddClearForDiscardedLayerEP10CSceneViewP11CSceneLayeri */
	/* <2f48bab> ../scenesystem/scenesystem.cpp:4683 */
	void SubmitDisplayListsForView(class CSceneSystem *, class CSceneView *); /* linkage=_ZN12CSceneSystem25SubmitDisplayListsForViewEP10CSceneView */
	void DrawDrawList(class CSceneSystem *, class CSceneView *, class CSceneLayer *, class CSceneDrawList *, class CRenderBatchList *); /* linkage=_ZN12CSceneSystem12DrawDrawListEP10CSceneViewP11CSceneLayerP14CSceneDrawListP16CRenderBatchList */
	void QueueDrawDrawList(class CSceneSystem *, class CSceneView *, class CSceneLayer *, class CSceneDrawList *, class CRenderBatchList *, enum EBatchStartFlags_t); /* linkage=_ZN12CSceneSystem17QueueDrawDrawListEP10CSceneViewP11CSceneLayerP14CSceneDrawListP16CRenderBatchList18EBatchStartFlags_t */
	void Thread_DrawDrawList(class CSceneSystem *, class CSceneView *, class CSceneLayer *, class CSceneDrawList *, class CRenderBatchList *, enum EBatchStartFlags_t); /* linkage=_ZN12CSceneSystem19Thread_DrawDrawListEP10CSceneViewP11CSceneLayerP14CSceneDrawListP16CRenderBatchList18EBatchStartFlags_t */
	void SortAndDrawPendingObjects(class CSceneSystem *, class CSceneView *, class CSceneLayer *); /* linkage=_ZN12CSceneSystem25SortAndDrawPendingObjectsEP10CSceneViewP11CSceneLayer */
	void DrawObjectsToLayer(class CSceneSystem *, class CSceneView *, class CSceneDrawList *, class CSceneLayer *, class CRenderBatchList *); /* linkage=_ZN12CSceneSystem18DrawObjectsToLayerEP10CSceneViewP14CSceneDrawListP11CSceneLayerP16CRenderBatchList */
	void DrawMeshes(class CSceneSystem *, class CSceneView *, class CSceneDrawList *, class CSceneLayer *, class CRenderBatchList *, int); /* linkage=_ZN12CSceneSystem10DrawMeshesEP10CSceneViewP14CSceneDrawListP11CSceneLayerP16CRenderBatchListi */
	void MakeFrameBufferCopy(class CSceneSystem *, class IRenderContext *, class CSceneView *, class CSceneLayer *, class SceneSystemPerFrameStats_t &, bool); /* linkage=_ZN12CSceneSystem19MakeFrameBufferCopyEP14IRenderContextP10CSceneViewP11CSceneLayerR26SceneSystemPerFrameStats_tb */
	virtual void InitObject(class CSceneSystem *, class CSceneObject *, enum ESceneObjectFlags, class ISceneWorld *); /* linkage=_ZN12CSceneSystem10InitObjectEP12CSceneObject17ESceneObjectFlagsP11ISceneWorld */
	/* <35a6118> ../scenesystem/sceneobject_methods.cpp:930 */
	void PerformQueuedDeletesForPartition(class CSceneSystem *, const PartitionDeletionList_t  *); /* linkage=_ZN12CSceneSystem32PerformQueuedDeletesForPartitionEPK23CUtlVectorFixedGrowableIP12CSceneObjectLm64EE */
	void PerformQueuedDeletes(class CSceneSystem *, class CSceneWorld *); /* linkage=_ZN12CSceneSystem20PerformQueuedDeletesEP11CSceneWorld */
	void PerformQueuedWorldDeletes(class CSceneSystem *); /* linkage=_ZN12CSceneSystem25PerformQueuedWorldDeletesEv */
	/* <2f41c2a> ../scenesystem/scenesystem.cpp:6305 */
	void PerformHighWaterMarkDeletion(class CSceneSystem *); /* linkage=_ZN12CSceneSystem28PerformHighWaterMarkDeletionEv */
	void DeleteObjectForReal(class CSceneSystem *, class CSceneObject *); /* linkage=_ZN12CSceneSystem19DeleteObjectForRealEP12CSceneObject */
	virtual void GetAllActiveSceneWorlds(class CSceneSystem *, class CUtlVector<ISceneWorld*, CUtlMemory<ISceneWorld*, int> > &); /* linkage=_ZN12CSceneSystem23GetAllActiveSceneWorldsER10CUtlVectorIP11ISceneWorld10CUtlMemoryIS2_iEE */
	/* <2f3f0ca> ../scenesystem/scenesystem.cpp:7069 */
	void InitLightingSystemForFrame(class CSceneSystem *); /* linkage=_ZN12CSceneSystem26InitLightingSystemForFrameEv */
	/* <2f3efac> ../scenesystem/scenesystem.cpp:6361 */
	void DoDebug3DRenderingForView(class CSceneSystem *, class CSceneView *); /* linkage=_ZN12CSceneSystem25DoDebug3DRenderingForViewEP10CSceneView */
	/* <2f3f007> ../scenesystem/scenesystem.cpp:6393 */
	void DoDebug2DRenderingForView(class CSceneSystem *, class CSceneView *, const class CFrustum  *); /* linkage=_ZN12CSceneSystem25DoDebug2DRenderingForViewEP10CSceneViewPK8CFrustum */
	void DoLegacyDebugRendering(class CSceneSystem *); /* linkage=_ZN12CSceneSystem22DoLegacyDebugRenderingEv */
	virtual void AtFinish(class CSceneSystem *); /* linkage=_ZN12CSceneSystem8AtFinishEv */
	/* <3567530> ../scenesystem/sceneobject_methods.cpp:1216 */
	virtual void ConstructSceneObject(class CSceneSystem *, class CSceneObject *); /* linkage=_ZN12CSceneSystem20ConstructSceneObjectEP12CSceneObject */
	/* <35a6212> ../scenesystem/sceneobject_methods.cpp:1221 */
	virtual void DestructSceneObject(class CSceneSystem *, class CSceneObject *); /* linkage=_ZN12CSceneSystem19DestructSceneObjectEP12CSceneObject */
	class CSceneObject * CreateSceneObjectFromBuffersInternal(class CSceneSystem *, enum ESceneObjectFlags, class ISceneWorld *, VertexBufferHandle_t, IndexBufferHandle_t, HMaterial, int, int, const class Vector  &, const class Vector  &, enum RenderPrimitiveType_t, enum RenderMeshDrawPrimitiveFlags_t, const char  *, bool); /* linkage=_ZN12CSceneSystem36CreateSceneObjectFromBuffersInternalE17ESceneObjectFlagsP11ISceneWorldP22VertexBufferHandle_t__P21IndexBufferHandle_t__11CWeakHandleI29InfoForResourceTypeIMaterial2EiiRK6VectorSC_21RenderPrimitiveType_t30RenderMeshDrawPrimitiveFlags_tPKcb */
	virtual class CSceneObject * CreateSceneObjectFromBuffers(class CSceneSystem *, class ISceneWorld *, VertexBufferHandle_t, IndexBufferHandle_t, HMaterial, int, int, const class Vector  &, const class Vector  &, enum RenderPrimitiveType_t, const char  *, bool); /* linkage=_ZN12CSceneSystem28CreateSceneObjectFromBuffersEP11ISceneWorldP22VertexBufferHandle_t__P21IndexBufferHandle_t__11CWeakHandleI29InfoForResourceTypeIMaterial2EiiRK6VectorSB_21RenderPrimitiveType_tPKcb */
	virtual bool ThreadIsInRenderingJob(const class CSceneSystem  *); /* linkage=_ZNK12CSceneSystem22ThreadIsInRenderingJobEv */
	void RegisterMaterialSeen(class CSceneSystem *, const class IMaterial2  *); /* linkage=_ZN12CSceneSystem20RegisterMaterialSeenEPK10IMaterial2 */
	class CSceneDrawList * GetNewDrawList(class CSceneSystem *); /* linkage=_ZN12CSceneSystem14GetNewDrawListEv */
	void ReturnDrawListToPool(class CSceneSystem *, class CSceneDrawList *); /* linkage=_ZN12CSceneSystem20ReturnDrawListToPoolEP14CSceneDrawList */
	/* <2f41c69> ../scenesystem/scenesystem.cpp:4333 */
	void AddWorldsInViewToToListOfWorldsVisitedThisFrame(class CSceneSystem *, const class ISceneView  *); /* linkage=_ZN12CSceneSystem47AddWorldsInViewToToListOfWorldsVisitedThisFrameEPK10ISceneView */
	bool ShouldOverrideDepthMaterial(class CSceneSystem *, const class CMaterialDrawDescriptor  *, const class ISceneLayer  *); /* linkage=_ZN12CSceneSystem27ShouldOverrideDepthMaterialEPK23CMaterialDrawDescriptorPK11ISceneLayer */
	void ComputeScratchTargetActualSize(class CSceneSystem *, const class SceneScratchRenderTargetInfo_t  &, int *, int *); /* linkage=_ZN12CSceneSystem30ComputeScratchTargetActualSizeERK30SceneScratchRenderTargetInfo_tPiS3_ */
	void AllocateActualScratchRenderTarget(class CSceneSystem *, int, class ScratchRenderTarget_t &); /* linkage=_ZN12CSceneSystem33AllocateActualScratchRenderTargetEiRNS_21ScratchRenderTarget_tE */
	/* <2f3e132> ../scenesystem/scenesystem.cpp:1174 */
	bool IsScratchRenderTargetValid(class CSceneSystem *, const class ScratchRenderTarget_t  &); /* linkage=_ZN12CSceneSystem26IsScratchRenderTargetValidERKNS_21ScratchRenderTarget_tE */
	int GetNumSpatialPartitions(class CSceneSystem *); /* linkage=_ZN12CSceneSystem23GetNumSpatialPartitionsEv */
	virtual void SnapShotTextureForEachLayer(class CSceneSystem *, HRenderTexture); /* linkage=_ZN12CSceneSystem27SnapShotTextureForEachLayerE11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	virtual void FillOutViewConstants(class CSceneSystem *, class PerViewConstantBuffer_t *, const class CFrustum  *, const class RenderViewport_t  &, const class RenderTargetDesc_t  &, float, float32, const class Vector4D  &); /* linkage=_ZN12CSceneSystem20FillOutViewConstantsEP23PerViewConstantBuffer_tPK8CFrustumRK16RenderViewport_tRK18RenderTargetDesc_tffRK8Vector4D */
	virtual bool VolumetricFogEnabled(const class CSceneSystem  *); /* linkage=_ZNK12CSceneSystem20VolumetricFogEnabledEv */
	virtual bool NonTexturedGradientFogEnabled(const class CSceneSystem  *); /* linkage=_ZNK12CSceneSystem29NonTexturedGradientFogEnabledEv */
	virtual bool CubemapFogEnabled(const class CSceneSystem  *); /* linkage=_ZNK12CSceneSystem17CubemapFogEnabledEv */
	virtual enum RenderColorSpace_t GetPrimaryRenderTargetColorSpace(const class CSceneSystem  *); /* linkage=_ZNK12CSceneSystem32GetPrimaryRenderTargetColorSpaceEv */
	virtual enum ImageFormat GetPrimaryRenderTargetFormat(const class CSceneSystem  *); /* linkage=_ZNK12CSceneSystem28GetPrimaryRenderTargetFormatEv */
	virtual enum ImageFormat GetBackBufferFormat(const class CSceneSystem  *); /* linkage=_ZNK12CSceneSystem19GetBackBufferFormatEv */
	virtual void SceneObject_GetMaterialsForObject(class CSceneSystem *, class CSceneObject *, class CUtlVectorFixedGrowable<CWeakHandle<InfoForResourceTypeIMaterial2>, 2> &, class CUtlVectorFixedGrowable<int, 2> &); /* linkage=_ZN12CSceneSystem33SceneObject_GetMaterialsForObjectEP12CSceneObjectR23CUtlVectorFixedGrowableI11CWeakHandleI29InfoForResourceTypeIMaterial2ELm2EERS2_IiLm2EE */
	virtual void SetGPUProfilerMode(class CSceneSystem *, enum SceneSystemGPUProfilerMode_t); /* linkage=_ZN12CSceneSystem18SetGPUProfilerModeE28SceneSystemGPUProfilerMode_t */
	virtual enum SceneSystemGPUProfilerMode_t GetGPUProfilerMode(const class CSceneSystem  *); /* linkage=_ZNK12CSceneSystem18GetGPUProfilerModeEv */
	/* <2f3072b> ../scenesystem/scenesystem.cpp:645 */
	virtual void GetMostRecentTimestampFrameSummary(class CSceneSystem *, SwapChainHandle_t, class CUtlVector<SceneSystemTimestampFrameData_t, CUtlMemory<SceneSystemTimestampFrameData_t, int> > &); /* linkage=_ZN12CSceneSystem34GetMostRecentTimestampFrameSummaryEP19SwapChainHandle_t__R10CUtlVectorI31SceneSystemTimestampFrameData_t10CUtlMemoryIS3_iEE */
	virtual bool SetManagedPerfMarker(class CSceneSystem *, class IRenderContext *, const char  *); /* linkage=_ZN12CSceneSystem20SetManagedPerfMarkerEP14IRenderContextPKc */
	class CUtlIntrusiveList<CMorphCompositeSet> * GetMorphCompositeSetFreeList(class CSceneSystem *); /* linkage=_ZN12CSceneSystem28GetMorphCompositeSetFreeListEv */
	class CUtlIntrusiveList<MorphCompositeDesc_t> * GetMorphCompositeDescFreeList(class CSceneSystem *); /* linkage=_ZN12CSceneSystem29GetMorphCompositeDescFreeListEv */
	const class CMTAtlasDesc_t  & GetMorphTextureAtlasDesc(const class CSceneSystem  *); /* linkage=_ZNK12CSceneSystem24GetMorphTextureAtlasDescEv */
	bool AppUsesBakedLighting(const class CSceneSystem  *); /* linkage=_ZNK12CSceneSystem20AppUsesBakedLightingEv */
	/* <2f3e1e9> ../scenesystem/scenesystem.cpp:2661 */
	class CRenderBatchList * GetBatchList(class CSceneSystem *); /* linkage=_ZN12CSceneSystem12GetBatchListEv */
	/* <2f3e36a> ../scenesystem/scenesystem.cpp:2669 */
	void FreeBatchList(class CSceneSystem *, class CRenderBatchList *); /* linkage=_ZN12CSceneSystem13FreeBatchListEP16CRenderBatchList */
	class CSceneLayer * GetSceneLayer(class CSceneSystem *); /* linkage=_ZN12CSceneSystem13GetSceneLayerEv */
	void FreeSceneLayer(class CSceneSystem *, class CSceneLayer *); /* linkage=_ZN12CSceneSystem14FreeSceneLayerEP11CSceneLayer */
	void DiscardLayerBatchLists(class CSceneSystem *, class CSceneLayer *); /* linkage=_ZN12CSceneSystem22DiscardLayerBatchListsEP11CSceneLayer */
	void HandleVrSubmit(class CSceneSystem *, class CSceneLayer *, class CSceneView *); /* linkage=_ZN12CSceneSystem14HandleVrSubmitEP11CSceneLayerP10CSceneView */
	void UpdateAllPerLayerViewConstantBuffer(class CSceneSystem *, class CSceneView *); /* linkage=_ZN12CSceneSystem35UpdateAllPerLayerViewConstantBufferEP10CSceneView */
	/* <2f3f0a0> ../scenesystem/scenesystem.cpp:6995 */
	bool BindContextForEveryLayer(const class CSceneSystem  *); /* linkage=_ZNK12CSceneSystem24BindContextForEveryLayerEv */
	bool PerLayerViewConstantsChangeDuringSubmit(const class CSceneSystem  *); /* linkage=_ZNK12CSceneSystem39PerLayerViewConstantsChangeDuringSubmitEv */
	void SetPerLayerViewConstantsChangeDuringSubmit(class CSceneSystem *, bool); /* linkage=_ZN12CSceneSystem42SetPerLayerViewConstantsChangeDuringSubmitEb */
	virtual void DownsampleTexture(class CSceneSystem *, class IRenderContext *, HRenderTexture &, class RenderViewport_t *, uint8, bool); /* linkage=_ZN12CSceneSystem17DownsampleTextureEP14IRenderContextR11CWeakHandleI31InfoForResourceTypeCTextureBaseEP16RenderViewport_thb */
	virtual void FlushScratchRenderTargets(class CSceneSystem *); /* linkage=_ZN12CSceneSystem25FlushScratchRenderTargetsEv */
	virtual void SceneObject_MirrorTransformToChildSceneObjectsRelative(class CSceneSystem *, const class matrix3x4_t  &, const class CSceneObject  *); /* linkage=_ZN12CSceneSystem54SceneObject_MirrorTransformToChildSceneObjectsRelativeERK11matrix3x4_tPK12CSceneObject */
	virtual void SceneObject_UpdateRayTraceObject(class CSceneSystem *, class CSceneObject *); /* linkage=_ZN12CSceneSystem32SceneObject_UpdateRayTraceObjectEP12CSceneObject */
	virtual void SceneObject_DestroyRayTraceInstance(class CSceneSystem *, class CSceneObject *); /* linkage=_ZN12CSceneSystem35SceneObject_DestroyRayTraceInstanceEP12CSceneObject */
	virtual HRenderTexture FindOrCreateFrameBufferScratchTexture(class CSceneSystem *, class ISceneView *, class CUtlStringToken, const class RenderViewport_t  &, enum ImageFormat, enum RuntimeTextureSpecificationFlags_t); /* linkage=_ZN12CSceneSystem37FindOrCreateFrameBufferScratchTextureEP10ISceneView15CUtlStringTokenRK16RenderViewport_t11ImageFormat34RuntimeTextureSpecificationFlags_t */
	virtual void PerformEndOfFrameDeletes(class CSceneSystem *); /* linkage=_ZN12CSceneSystem24PerformEndOfFrameDeletesEv */
	void RunVertexCacheUpdateComputeShader(class CSceneSystem *, class IRenderContext *); /* linkage=_ZN12CSceneSystem33RunVertexCacheUpdateComputeShaderEP14IRenderContext */
	void DispatchVertexCacheUpdateRequestBlock(class CSceneSystem *, class IRenderContext *, const class VertexCacheUpdateRequest_t  *, int); /* linkage=_ZN12CSceneSystem37DispatchVertexCacheUpdateRequestBlockEP14IRenderContextPKNS_26VertexCacheUpdateRequest_tEi */
	/* <2f3f173> ../scenesystem/scenesystem.cpp:7289 */
	void ResizeGPUVertexCacheBuffer(class CSceneSystem *); /* linkage=_ZN12CSceneSystem26ResizeGPUVertexCacheBufferEv */
	void SetupGlobalPerFrameDescriptors(class CSceneSystem *); /* linkage=_ZN12CSceneSystem30SetupGlobalPerFrameDescriptorsEv */
	void UpdateGlobalPerFrameDescriptorBindings(class CSceneSystem *); /* linkage=_ZN12CSceneSystem38UpdateGlobalPerFrameDescriptorBindingsEv */
	/* <2f3f0f4> ../scenesystem/scenesystem.cpp:7153 */
	bool CanBatchVertexCacheRequests(class CSceneSystem *, const class VertexCacheUpdateRequest_t  &, const class VertexCacheUpdateRequest_t  &); /* linkage=_ZN12CSceneSystem27CanBatchVertexCacheRequestsERKNS_26VertexCacheUpdateRequest_tES2_ */
	void QueueVertexCacheUpdate(class CSceneSystem *, const class CMeshInstance  *, int, int, VertexBufferHandle_t, int, bool, int, int, const class VertexBufferLayout_t  &); /* linkage=_ZN12CSceneSystem22QueueVertexCacheUpdateEPK13CMeshInstanceiiP22VertexBufferHandle_t__ibiiRK20VertexBufferLayout_t */
	int FrameAllocVertexCacheBlock(class CSceneSystem *, int); /* linkage=_ZN12CSceneSystem26FrameAllocVertexCacheBlockEi */
	RenderBufferHandle_t GetCurrentFrameVertexCacheBuffer(const class CSceneSystem  *); /* linkage=_ZNK12CSceneSystem32GetCurrentFrameVertexCacheBufferEv */
	bool IsSkinnedVertexCacheEnabled(const class CSceneSystem  *); /* linkage=_ZNK12CSceneSystem27IsSkinnedVertexCacheEnabledEv */
	class CThreadMutex & GetScratchRenderTargetMutex(class CSceneSystem *); /* linkage=_ZN12CSceneSystem27GetScratchRenderTargetMutexEv */
	void IncrementSRTMutexLockCount(class CSceneSystem *, int); /* linkage=_ZN12CSceneSystem26IncrementSRTMutexLockCountEi */
	bool CanEditScratchRenderTargets(const class CSceneSystem  *); /* linkage=_ZNK12CSceneSystem27CanEditScratchRenderTargetsEv */
	void Thread_RenderPartitionInternalFinal<false, true, false>(class CSceneSystem *, class CSceneView *, int, int, const class CSceneView  *); /* linkage=_ZN12CSceneSystem35Thread_RenderPartitionInternalFinalILb0ELb1ELb0EEEvP10CSceneViewiiPKS1_ */
	void Thread_RenderPartitionInternalFinal<false, true, true>(class CSceneSystem *, class CSceneView *, int, int, const class CSceneView  *); /* linkage=_ZN12CSceneSystem35Thread_RenderPartitionInternalFinalILb0ELb1ELb1EEEvP10CSceneViewiiPKS1_ */
	void Thread_RenderPartitionInternalFinal<false, false, false>(class CSceneSystem *, class CSceneView *, int, int, const class CSceneView  *); /* linkage=_ZN12CSceneSystem35Thread_RenderPartitionInternalFinalILb0ELb0ELb0EEEvP10CSceneViewiiPKS1_ */
	void Thread_RenderPartitionInternalFinal<false, false, true>(class CSceneSystem *, class CSceneView *, int, int, const class CSceneView  *); /* linkage=_ZN12CSceneSystem35Thread_RenderPartitionInternalFinalILb0ELb0ELb1EEEvP10CSceneViewiiPKS1_ */
	void Thread_RenderPartitionInternalFinal<true, true, false>(class CSceneSystem *, class CSceneView *, int, int, const class CSceneView  *); /* linkage=_ZN12CSceneSystem35Thread_RenderPartitionInternalFinalILb1ELb1ELb0EEEvP10CSceneViewiiPKS1_ */
	void Thread_RenderPartitionInternalFinal<true, true, true>(class CSceneSystem *, class CSceneView *, int, int, const class CSceneView  *); /* linkage=_ZN12CSceneSystem35Thread_RenderPartitionInternalFinalILb1ELb1ELb1EEEvP10CSceneViewiiPKS1_ */
	void Thread_RenderPartitionInternalFinal<true, false, false>(class CSceneSystem *, class CSceneView *, int, int, const class CSceneView  *); /* linkage=_ZN12CSceneSystem35Thread_RenderPartitionInternalFinalILb1ELb0ELb0EEEvP10CSceneViewiiPKS1_ */
	void Thread_RenderPartitionInternalFinal<true, false, true>(class CSceneSystem *, class CSceneView *, int, int, const class CSceneView  *); /* linkage=_ZN12CSceneSystem35Thread_RenderPartitionInternalFinalILb1ELb0ELb1EEEvP10CSceneViewiiPKS1_ */
	void Thread_RenderPartitionInternalAlmostFinal<false, true>(class CSceneSystem *, class CSceneView *, int, int); /* linkage=_ZN12CSceneSystem41Thread_RenderPartitionInternalAlmostFinalILb0ELb1EEEvP10CSceneViewii */
	void Thread_RenderPartitionInternalAlmostFinal<false, false>(class CSceneSystem *, class CSceneView *, int, int); /* linkage=_ZN12CSceneSystem41Thread_RenderPartitionInternalAlmostFinalILb0ELb0EEEvP10CSceneViewii */
	void Thread_RenderPartitionInternalAlmostFinal<true, true>(class CSceneSystem *, class CSceneView *, int, int); /* linkage=_ZN12CSceneSystem41Thread_RenderPartitionInternalAlmostFinalILb1ELb1EEEvP10CSceneViewii */
	void Thread_RenderPartitionInternalAlmostFinal<true, false>(class CSceneSystem *, class CSceneView *, int, int); /* linkage=_ZN12CSceneSystem41Thread_RenderPartitionInternalAlmostFinalILb1ELb0EEEvP10CSceneViewii */
	void Thread_RenderPartitionInternal<false>(class CSceneSystem *, class CSceneView *, int, int); /* linkage=_ZN12CSceneSystem30Thread_RenderPartitionInternalILb0EEEvP10CSceneViewii */
	void Thread_RenderPartitionInternal<true>(class CSceneSystem *, class CSceneView *, int, int); /* linkage=_ZN12CSceneSystem30Thread_RenderPartitionInternalILb1EEEvP10CSceneViewii */
	void DrawObjectsToLayerInternal<false>(class CSceneSystem *, class CSceneView *, class CSceneDrawList *, class CSceneLayer *, class CRenderBatchList *); /* linkage=_ZN12CSceneSystem26DrawObjectsToLayerInternalILb0EEEvP10CSceneViewP14CSceneDrawListP11CSceneLayerP16CRenderBatchList */
	void DrawObjectsToLayerInternal<true>(class CSceneSystem *, class CSceneView *, class CSceneDrawList *, class CSceneLayer *, class CRenderBatchList *); /* linkage=_ZN12CSceneSystem26DrawObjectsToLayerInternalILb1EEEvP10CSceneViewP14CSceneDrawListP11CSceneLayerP16CRenderBatchList */
} __attribute__((__aligned__(16)));

// <02F1F112> ../scenesystem/scenesystem.h:833
void CSceneSystem::IsRenderingViews()
{
} /* size: 12 */

// <02F1F0B5> ../scenesystem/scenesystem.h:921
// variables: 3
inline void CSceneSystem::AllocateGetTransformSlot(int nNumSlots)
{
	int pSlot; // 923
	const char   __FUNCTION__; // 63817
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 926
	}
} /* size: 0, variables: 2 */

// <02F1F09E> ../scenesystem/scenesystem.h:949
void CCommandMemberInitializer_OnPrintExtraDataAllocations::CCommandMemberInitializer_OnPrintExtraDataAllocations()
{
} /* size: 0 */

// <02F1F085> ../scenesystem/scenesystem.h:949
inline void CCommandMemberInitializer_OnPrintExtraDataAllocations::CCommandMemberInitializer_OnPrintExtraDataAllocations()
{
} /* size: 0 */

// <02F1189B> ../scenesystem/scenesystem.h:949
void CCommandMemberInitializer_OnPrintExtraDataAllocations::~CCommandMemberInitializer_OnPrintExtraDataAllocations()
{
} /* size: 0 */

// <02F1187E> ../scenesystem/scenesystem.h:949
inline void CCommandMemberInitializer_OnPrintExtraDataAllocations::~CCommandMemberInitializer_OnPrintExtraDataAllocations()
{
} /* size: 0 */

// <03E9BA92> ../scenesystem/scenesystem.h:953
inline void CSceneSystem::GetFinishRenderingViewsCounter()
{
} /* size: 0 */

// <02F2FD51> ../scenesystem/scenesystem.h:953
void CSceneSystem::GetFinishRenderingViewsCounter()
{
} /* size: 11 */

// <02F2FD7B> ../scenesystem/scenesystem.h:957
void CSceneSystem::GetFrameUpdateCounter()
{
} /* size: 11 */

// <02F1F053> ../scenesystem/scenesystem.h:957
inline void CSceneSystem::GetFrameUpdateCounter()
{
} /* size: 0 */

// <0355E539> ../scenesystem/scenesystem.h:1037
// variables: 2
inline void GetPartition(const CSceneObject* pObj)
{
	const char   __FUNCTION__; // 20434
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1039
	}
} /* size: 0, variables: 1 */

// <02F1F011> ../scenesystem/scenesystem.h:1037
// variables: 2
inline void GetPartition(const CSceneObject* pObj)
{
	const char   __FUNCTION__; // 63493
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1039
	}
} /* size: 0, variables: 1 */

// <0323B75E> ../scenesystem/scenesystem.h:1053
inline void CSceneSystem::AllocateUniqueSceneLayerIndex()
{
} /* size: 0 */

// <0401DF1C> ../scenesystem/scenesystem.h:1258
// variable: 1
inline void CSceneSystem::RegisterMaterialSeen(const IMaterial2* pMaterial)
{
	{
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_1262; // 1262
	}
} /* size: 0 */

// <02F1EFEB> ../scenesystem/scenesystem.h:1267
// variable: 1
inline void CSceneSystem::GetNewDrawList()
{
	CSceneDrawList* pList; // 1269
} /* size: 0, variables: 1 */

// <0347563B> ../scenesystem/scenesystem.h:1276
inline void CSceneSystem::ReturnDrawListToPool(CSceneDrawList* pList)
{
} /* size: 0 */

// <02E98E00> ../scenesystem/scenesystem.h:1294
void ScratchRenderTarget_t::~ScratchRenderTarget_t()
{
} /* size: 0 */

// <02E98DE3> ../scenesystem/scenesystem.h:1294
inline void ScratchRenderTarget_t::~ScratchRenderTarget_t()
{
} /* size: 0 */

// <02E97E99> ../scenesystem/scenesystem.h:1294
void ScratchRenderTarget_t::ScratchRenderTarget_t()
{
} /* size: 0 */

// <02E97E7C> ../scenesystem/scenesystem.h:1294
inline void ScratchRenderTarget_t::ScratchRenderTarget_t()
{
} /* size: 0 */

// <040B8A9B> ../scenesystem/scenesystem.h:1315
void CSceneSystem::GetObjectSettings(const CSceneObject* pObj)
{
} /* size: 17 */

// <040B22D4> ../scenesystem/scenesystem.h:1315
inline void CSceneSystem::GetObjectSettings(const CSceneObject* pObj)
{
} /* size: 0 */

// <03DAA0B2> ../scenesystem/scenesystem.h:1316
inline void CSceneSystem::GetNumSpatialPartitions()
{
} /* size: 0 */

// <02F1EECC> ../scenesystem/scenesystem.h:1318
// function calls: 2
void CSceneSystem::SnapShotTextureForEachLayer(HRenderTexture hText)
{
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1320
} /* size: 15, inline expansions: 2 (20 bytes) */

// <02F1EE9E> ../scenesystem/scenesystem.h:1332
void CSceneSystem::VolumetricFogEnabled()
{
} /* size: 12 */

// <02F1EE70> ../scenesystem/scenesystem.h:1333
void CSceneSystem::NonTexturedGradientFogEnabled()
{
} /* size: 12 */

// <02F1EE42> ../scenesystem/scenesystem.h:1334
void CSceneSystem::CubemapFogEnabled()
{
} /* size: 12 */

// <02F1EE14> ../scenesystem/scenesystem.h:1337
void CSceneSystem::GetPrimaryRenderTargetColorSpace()
{
} /* size: 12 */

// <02F1EDE6> ../scenesystem/scenesystem.h:1340
void CSceneSystem::GetPrimaryRenderTargetFormat()
{
} /* size: 11 */

// <02F1EDB8> ../scenesystem/scenesystem.h:1343
void CSceneSystem::GetBackBufferFormat()
{
} /* size: 11 */

// <03E9BA1E> ../scenesystem/scenesystem.h:1559
inline void CSceneSystem::GetMorphCompositeSetFreeList()
{
} /* size: 0 */

// <03E9BA05> ../scenesystem/scenesystem.h:1560
inline void CSceneSystem::GetMorphCompositeDescFreeList()
{
} /* size: 0 */

// <02F1ED6D> ../scenesystem/scenesystem.h:1562
inline void CSceneSystem::GetMorphTextureAtlasDesc()
{
} /* size: 0 */

// <0401DEDD> ../scenesystem/scenesystem.h:1568
inline void CSceneSystem::AppUsesBakedLighting()
{
} /* size: 0 */

// <0330EAFC> ../scenesystem/scenesystem.h:1585
inline void CSceneSystem::PerLayerViewConstantsChangeDuringSubmit()
{
} /* size: 0 */

// <02F1ED2E> ../scenesystem/scenesystem.h:1589
inline void CSceneSystem::SetPerLayerViewConstantsChangeDuringSubmit(bool bSet)
{
} /* size: 0 */

// <033B3107> ../scenesystem/scenesystem.h:1621
void FrameBufferScratchTexInfo_t::~FrameBufferScratchTexInfo_t()
{
} /* size: 0 */

// <033B30E9> ../scenesystem/scenesystem.h:1621
inline void FrameBufferScratchTexInfo_t::~FrameBufferScratchTexInfo_t()
{
} /* size: 0 */

// <033CAAF2> ../scenesystem/scenesystem.h:1629
void FrameBufferScratchTexInfo_t::FrameBufferScratchTexInfo_t()
{
} /* size: 0 */

// <033CAAD9> ../scenesystem/scenesystem.h:1629
inline void FrameBufferScratchTexInfo_t::FrameBufferScratchTexInfo_t()
{
} /* size: 0 */

// <033CAABD> ../scenesystem/scenesystem.h:1634
void FrameBufferScratchTexInfo_t::FrameBufferScratchTexInfo_t(const FrameBufferScratchTexInfo_t& src)
{
} /* size: 0 */

// <033CAA97> ../scenesystem/scenesystem.h:1634
inline void FrameBufferScratchTexInfo_t::FrameBufferScratchTexInfo_t(const FrameBufferScratchTexInfo_t& src)
{
} /* size: 0 */

// <03E9B9D3> ../scenesystem/scenesystem.h:1696
inline void CSceneSystem::IsSkinnedVertexCacheEnabled()
{
} /* size: 0 */

// <037530D9> ../scenesystem/scenesystem.h:1699
inline void CSceneSystem::GetScratchRenderTargetMutex()
{
} /* size: 0 */

// <037530B3> ../scenesystem/scenesystem.h:1700
inline void CSceneSystem::IncrementSRTMutexLockCount(int nAmount)
{
} /* size: 0 */

// <02DCBE52> ../scenesystem/scenesystem.h:1710
// member functions: 4
// class size: 1
class CScratchRenderTargetEditScope {
	/* ../scenesystem/scenesystem.h:1713 */
	void CScratchRenderTargetEditScope(CScratchRenderTargetEditScope* );
	/* ../scenesystem/scenesystem.h:1719 */
	void ~CScratchRenderTargetEditScope(CScratchRenderTargetEditScope* );
	void CScratchRenderTargetEditScope(class CScratchRenderTargetEditScope *); /* linkage=_ZN29CScratchRenderTargetEditScopeC4Ev */
	void ~CScratchRenderTargetEditScope(class CScratchRenderTargetEditScope *); /* linkage=_ZN29CScratchRenderTargetEditScopeD4Ev */
};

// <0375309C> ../scenesystem/scenesystem.h:1713
void CScratchRenderTargetEditScope::CScratchRenderTargetEditScope()
{
} /* size: 0 */

// <03753083> ../scenesystem/scenesystem.h:1713
inline void CScratchRenderTargetEditScope::CScratchRenderTargetEditScope()
{
} /* size: 0 */

// <0375306C> ../scenesystem/scenesystem.h:1719
void CScratchRenderTargetEditScope::~CScratchRenderTargetEditScope()
{
} /* size: 0 */

// <03753053> ../scenesystem/scenesystem.h:1719
inline void CScratchRenderTargetEditScope::~CScratchRenderTargetEditScope()
{
} /* size: 0 */

// <02F1EC50> ../scenesystem/scenesystem.h:1742
inline void CSceneSystem::GetPerFrameTransformData(int nSlot)
{
} /* size: 0 */

// <0375302D> ../scenesystem/scenesystem.h:1749
inline void CSceneSystem::GetViewByIndex(int nIndex)
{
} /* size: 0 */

// <034755FC> ../scenesystem/scenesystem.h:1754
inline void CSceneSystem::GetGPUProfilerModeInline()
{
} /* size: 0 */

// <0401DE61> ../scenesystem/scenesystem.h:1759
// variables: 4
inline void CSceneSystem::CreateExtraShaderData_TintRGBA32(Vector4D vTint, float fAlphaScale, uint nBlendWeightCount)
{
	const uint32  nR; // 1761
	const uint32  nG; // 1762
	const uint32  nB; // 1763
	ExtraShaderData_t extraData; // 1765
} /* size: 0, variables: 4 */

// <033A8C7C> ../scenesystem/scenesystem.h:1792
// function call: 1
void CBlitTextureToRenderTargetLayer::~CBlitTextureToRenderTargetLayer()
{
	IProceduralLayerRenderer::~IProceduralLayerRenderer(); // 1792
} /* size: 5, inline expansions: 1 (0 bytes) */

// <033A8BC5> ../scenesystem/scenesystem.h:1792
// function calls: 2
void CBlitTextureToRenderTargetLayer::~CBlitTextureToRenderTargetLayer()
{
	IProceduralLayerRenderer::~IProceduralLayerRenderer(); // 1792
	CBlitTextureToRenderTargetLayer::~CBlitTextureToRenderTargetLayer(); // 1792
} /* size: 14, inline expansions: 2 (0 bytes) */

// <033A8BA7> ../scenesystem/scenesystem.h:1792
inline void CBlitTextureToRenderTargetLayer::~CBlitTextureToRenderTargetLayer()
{
} /* size: 0 */

// <033A69DF> ../scenesystem/scenesystem.h:1792
// member functions: 10
// member variables: 4
// vtable entry: 1
// class size: 88
class CBlitTextureToRenderTargetLayer : public IProceduralLayerRenderer {
public:
	/* class IProceduralLayerRenderer <ancestor>; */ /* 0 8 */
	void CBlitTextureToRenderTargetLayer(CBlitTextureToRenderTargetLayer* , CBlitTextureToRenderTargetLayer& );
	void CBlitTextureToRenderTargetLayer(CBlitTextureToRenderTargetLayer* , const CBlitTextureToRenderTargetLayer& );
	/* ../scenesystem/scenegfxresources.cpp:1220 */
	void CBlitTextureToRenderTargetLayer(CBlitTextureToRenderTargetLayer* , const RenderViewport_t& , BlitSetup_t* );
	/* ../scenesystem/scenegfxresources.cpp:1231 */
	virtual void Render(CBlitTextureToRenderTargetLayer* , ISceneView* , IRenderContext* , ISceneLayer* , SceneSystemPerFrameStats_t* );
private:
	RenderViewport_t m_TextureViewport; /* 8 28 */
	BlitSetup_t m_BlitSetup; /* 36 20 */
	RsBlendStateDesc_t m_blendState; /* 56 32 */
	virtual void ~CBlitTextureToRenderTargetLayer(CBlitTextureToRenderTargetLayer* );
	void CBlitTextureToRenderTargetLayer(class CBlitTextureToRenderTargetLayer *, class CBlitTextureToRenderTargetLayer &); /* linkage=_ZN31CBlitTextureToRenderTargetLayerC4EOS_ */
	void CBlitTextureToRenderTargetLayer(class CBlitTextureToRenderTargetLayer *, const class CBlitTextureToRenderTargetLayer  &); /* linkage=_ZN31CBlitTextureToRenderTargetLayerC4ERKS_ */
	void CBlitTextureToRenderTargetLayer(class CBlitTextureToRenderTargetLayer *, const class RenderViewport_t  &, class BlitSetup_t *); /* linkage=_ZN31CBlitTextureToRenderTargetLayerC4ERK16RenderViewport_tP11BlitSetup_t */
	virtual void Render(class CBlitTextureToRenderTargetLayer *, class ISceneView *, class IRenderContext *, class ISceneLayer *, class SceneSystemPerFrameStats_t *); /* linkage=_ZN31CBlitTextureToRenderTargetLayer6RenderEP10ISceneViewP14IRenderContextP11ISceneLayerP26SceneSystemPerFrameStats_t */
	virtual void ~CBlitTextureToRenderTargetLayer(class CBlitTextureToRenderTargetLayer *); /* linkage=_ZN31CBlitTextureToRenderTargetLayerD4Ev */
};

// <0321C1D2> ../scenesystem/scenesystem.h:1795
void CBlitTextureToRenderTargetLayer::CBlitTextureToRenderTargetLayer(const RenderViewport_t& srcViewport, BlitSetup_t* setup)
{
} /* size: 0 */

// <02EA62FC> ../scenesystem/scenesystem.h:1808
inline void MorphPositionSpeedVertex_t::operator=(const MorphPositionSpeedVertex_t &)
{
} /* size: 0 */

// <02DCBEB5> ../scenesystem/scenesystem.h:1808
// member functions: 18
// member variables: 4
// class size: 56
class MorphPositionSpeedVertex_t {
	/* ../scenesystem/scenesystem.h:1811 */
	void MorphPositionSpeedVertex_t(MorphPositionSpeedVertex_t* );
	/* ../scenesystem/scenesystem.h:1812 */
	void ~MorphPositionSpeedVertex_t(MorphPositionSpeedVertex_t* );
	/* ../scenesystem/scenesystem.h:1814 */
	void SetPosition(MorphPositionSpeedVertex_t* , float, float);
	/* ../scenesystem/scenesystem.h:1820 */
	void SetWeights(MorphPositionSpeedVertex_t* , float, float);
	/* ../scenesystem/scenesystem.h:1826 */
	void SetTexCoordPositionSpeed(MorphPositionSpeedVertex_t* , float, float);
	/* ../scenesystem/scenesystem.h:1832 */
	void SetOffsetsPositionSpeed(MorphPositionSpeedVertex_t* , const float* );
	/* ../scenesystem/scenesystem.h:1840 */
	void SetRangesPositionSpeed(MorphPositionSpeedVertex_t* , const float* );
	/* ../scenesystem/scenesystem.h:1848 */
	RenderInputLayout_t GetLayout(void);
	Vector4D m_vecPositionflWeightflDelayedWeight; /* 0 16 */
	Vector2D m_vecTexCoordsPositionSpeed; /* 16 8 */
	Vector4D m_vecOffsetsPositionSpeed; /* 24 16 */
	Vector4D m_vecRangesPositionSpeed; /* 40 16 */
	MorphPositionSpeedVertex_t& operator=(MorphPositionSpeedVertex_t* , const MorphPositionSpeedVertex_t& );
	void MorphPositionSpeedVertex_t(class MorphPositionSpeedVertex_t *); /* linkage=_ZN26MorphPositionSpeedVertex_tC4Ev */
	void ~MorphPositionSpeedVertex_t(class MorphPositionSpeedVertex_t *); /* linkage=_ZN26MorphPositionSpeedVertex_tD4Ev */
	void SetPosition(class MorphPositionSpeedVertex_t *, float, float); /* linkage=_ZN26MorphPositionSpeedVertex_t11SetPositionEff */
	void SetWeights(class MorphPositionSpeedVertex_t *, float, float); /* linkage=_ZN26MorphPositionSpeedVertex_t10SetWeightsEff */
	void SetTexCoordPositionSpeed(class MorphPositionSpeedVertex_t *, float, float); /* linkage=_ZN26MorphPositionSpeedVertex_t24SetTexCoordPositionSpeedEff */
	void SetOffsetsPositionSpeed(class MorphPositionSpeedVertex_t *, const float  *); /* linkage=_ZN26MorphPositionSpeedVertex_t23SetOffsetsPositionSpeedEPKf */
	void SetRangesPositionSpeed(class MorphPositionSpeedVertex_t *, const float  *); /* linkage=_ZN26MorphPositionSpeedVertex_t22SetRangesPositionSpeedEPKf */
	RenderInputLayout_t GetLayout(void); /* linkage=_ZN26MorphPositionSpeedVertex_t9GetLayoutEv */
	class MorphPositionSpeedVertex_t & operator=(class MorphPositionSpeedVertex_t *, const class MorphPositionSpeedVertex_t  &); /* linkage=_ZN26MorphPositionSpeedVertex_taSERKS_ */
};

// <0339B13F> ../scenesystem/scenesystem.h:1808
// member functions: 17
// member variables: 4
// class size: 56
class MorphPositionSpeedVertex_t {
	/* ../scenesystem/scenesystem.h:1811 */
	void MorphPositionSpeedVertex_t(MorphPositionSpeedVertex_t* );
	/* ../scenesystem/scenesystem.h:1812 */
	void ~MorphPositionSpeedVertex_t(MorphPositionSpeedVertex_t* );
	/* ../scenesystem/scenesystem.h:1814 */
	void SetPosition(MorphPositionSpeedVertex_t* , float, float);
	/* ../scenesystem/scenesystem.h:1820 */
	void SetWeights(MorphPositionSpeedVertex_t* , float, float);
	/* ../scenesystem/scenesystem.h:1826 */
	void SetTexCoordPositionSpeed(MorphPositionSpeedVertex_t* , float, float);
	/* ../scenesystem/scenesystem.h:1832 */
	void SetOffsetsPositionSpeed(MorphPositionSpeedVertex_t* , const float* );
	/* ../scenesystem/scenesystem.h:1840 */
	void SetRangesPositionSpeed(MorphPositionSpeedVertex_t* , const float* );
	/* ../scenesystem/scenesystem.h:1848 */
	RenderInputLayout_t GetLayout(void);
	Vector4D m_vecPositionflWeightflDelayedWeight; /* 0 16 */
	Vector2D m_vecTexCoordsPositionSpeed; /* 16 8 */
	Vector4D m_vecOffsetsPositionSpeed; /* 24 16 */
	Vector4D m_vecRangesPositionSpeed; /* 40 16 */
	void MorphPositionSpeedVertex_t(class MorphPositionSpeedVertex_t *); /* linkage=_ZN26MorphPositionSpeedVertex_tC4Ev */
	void ~MorphPositionSpeedVertex_t(class MorphPositionSpeedVertex_t *); /* linkage=_ZN26MorphPositionSpeedVertex_tD4Ev */
	void SetPosition(class MorphPositionSpeedVertex_t *, float, float); /* linkage=_ZN26MorphPositionSpeedVertex_t11SetPositionEff */
	void SetWeights(class MorphPositionSpeedVertex_t *, float, float); /* linkage=_ZN26MorphPositionSpeedVertex_t10SetWeightsEff */
	void SetTexCoordPositionSpeed(class MorphPositionSpeedVertex_t *, float, float); /* linkage=_ZN26MorphPositionSpeedVertex_t24SetTexCoordPositionSpeedEff */
	void SetOffsetsPositionSpeed(class MorphPositionSpeedVertex_t *, const float  *); /* linkage=_ZN26MorphPositionSpeedVertex_t23SetOffsetsPositionSpeedEPKf */
	void SetRangesPositionSpeed(class MorphPositionSpeedVertex_t *, const float  *); /* linkage=_ZN26MorphPositionSpeedVertex_t22SetRangesPositionSpeedEPKf */
	RenderInputLayout_t GetLayout(void); /* linkage=_ZN26MorphPositionSpeedVertex_t9GetLayoutEv */
	class MorphPositionSpeedVertex_t & operator=(class MorphPositionSpeedVertex_t *, const class MorphPositionSpeedVertex_t  &); /* linkage=_ZN26MorphPositionSpeedVertex_taSERKS_ */
};

// <02F1EBAF> ../scenesystem/scenesystem.h:1811
void MorphPositionSpeedVertex_t::MorphPositionSpeedVertex_t()
{
} /* size: 0 */

// <02F1EB96> ../scenesystem/scenesystem.h:1811
inline void MorphPositionSpeedVertex_t::MorphPositionSpeedVertex_t()
{
} /* size: 0 */

// <02F1EB7F> ../scenesystem/scenesystem.h:1812
void MorphPositionSpeedVertex_t::~MorphPositionSpeedVertex_t()
{
} /* size: 0 */

// <02F1EB66> ../scenesystem/scenesystem.h:1812
inline void MorphPositionSpeedVertex_t::~MorphPositionSpeedVertex_t()
{
} /* size: 0 */

// <02F1EB37> ../scenesystem/scenesystem.h:1814
inline void MorphPositionSpeedVertex_t::SetPosition(float x, float y)
{
} /* size: 0 */

// <02F1EB04> ../scenesystem/scenesystem.h:1820
inline void MorphPositionSpeedVertex_t::SetWeights(const float flWeight, const float flDelayedWeight)
{
} /* size: 0 */

// <02F1EAD5> ../scenesystem/scenesystem.h:1826
inline void MorphPositionSpeedVertex_t::SetTexCoordPositionSpeed(const float u, const float v)
{
} /* size: 0 */

// <02F1EAA2> ../scenesystem/scenesystem.h:1832
// variable: 1
inline void MorphPositionSpeedVertex_t::SetOffsetsPositionSpeed(const float* pOffsets)
{
	{
		int i; // 1834
	}
} /* size: 0 */

// <02F1EA6F> ../scenesystem/scenesystem.h:1840
// variable: 1
inline void MorphPositionSpeedVertex_t::SetRangesPositionSpeed(const float* pRanges)
{
	{
		int i; // 1842
	}
} /* size: 0 */

// <02F1EA68> ../scenesystem/scenesystem.h:1848
inline void GetLayout(void)
{
} /* size: 0 */

// <02EA612D> ../scenesystem/scenesystem.h:1860
inline void MorphNormalWrinkleVertex_t::operator=(const MorphNormalWrinkleVertex_t &)
{
} /* size: 0 */

// <02DCC042> ../scenesystem/scenesystem.h:1860
// member functions: 12
// member variables: 6
// struct size: 96
struct MorphNormalWrinkleVertex_t {
	/* ../scenesystem/scenesystem.h:1863 */
	void MorphNormalWrinkleVertex_t(MorphNormalWrinkleVertex_t* );
	/* ../scenesystem/scenesystem.h:1864 */
	void ~MorphNormalWrinkleVertex_t(MorphNormalWrinkleVertex_t* );
	/* ../scenesystem/scenesystem.h:1866 */
	void SetPosition(MorphNormalWrinkleVertex_t* , float, float);
	/* ../scenesystem/scenesystem.h:1872 */
	void SetWeights(MorphNormalWrinkleVertex_t* , float, float);
	/* ../scenesystem/scenesystem.h:1878 */
	void SetTexCoordPositionSpeed(MorphNormalWrinkleVertex_t* , float, float);
	/* ../scenesystem/scenesystem.h:1884 */
	void SetTexCoordNormalWrinkle(MorphNormalWrinkleVertex_t* , float, float);
	/* ../scenesystem/scenesystem.h:1890 */
	void SetOffsetsPositionSpeed(MorphNormalWrinkleVertex_t* , const float* );
	/* ../scenesystem/scenesystem.h:1898 */
	void SetRangesPositionSpeed(MorphNormalWrinkleVertex_t* , const float* );
	/* ../scenesystem/scenesystem.h:1906 */
	void SetOffsetsNormalWrinkle(MorphNormalWrinkleVertex_t* , const float* );
	/* ../scenesystem/scenesystem.h:1914 */
	void SetRangesNormalWrinkle(MorphNormalWrinkleVertex_t* , const float* );
	/* ../scenesystem/scenesystem.h:1922 */
	RenderInputLayout_t GetLayout(void);
	Vector4D m_vecPositionflWeightflDelayedWeight; /* 0 16 */
	Vector4D m_vecTexCoordsPositionSpeedNormalWrinkle; /* 16 16 */
	Vector4D m_vecOffsetsPositionSpeed; /* 32 16 */
	Vector4D m_vecRangesPositionSpeed; /* 48 16 */
	Vector4D m_vecOffsetsNormalWrinkle; /* 64 16 */
	Vector4D m_vecRangesNormalWrinkle; /* 80 16 */
	MorphNormalWrinkleVertex_t& operator=(MorphNormalWrinkleVertex_t* , const MorphNormalWrinkleVertex_t& );
};

// <0339B2A1> ../scenesystem/scenesystem.h:1860
// member functions: 11
// member variables: 6
// struct size: 96
struct MorphNormalWrinkleVertex_t {
	/* ../scenesystem/scenesystem.h:1863 */
	void MorphNormalWrinkleVertex_t(MorphNormalWrinkleVertex_t* );
	/* ../scenesystem/scenesystem.h:1864 */
	void ~MorphNormalWrinkleVertex_t(MorphNormalWrinkleVertex_t* );
	/* ../scenesystem/scenesystem.h:1866 */
	void SetPosition(MorphNormalWrinkleVertex_t* , float, float);
	/* ../scenesystem/scenesystem.h:1872 */
	void SetWeights(MorphNormalWrinkleVertex_t* , float, float);
	/* ../scenesystem/scenesystem.h:1878 */
	void SetTexCoordPositionSpeed(MorphNormalWrinkleVertex_t* , float, float);
	/* ../scenesystem/scenesystem.h:1884 */
	void SetTexCoordNormalWrinkle(MorphNormalWrinkleVertex_t* , float, float);
	/* ../scenesystem/scenesystem.h:1890 */
	void SetOffsetsPositionSpeed(MorphNormalWrinkleVertex_t* , const float* );
	/* ../scenesystem/scenesystem.h:1898 */
	void SetRangesPositionSpeed(MorphNormalWrinkleVertex_t* , const float* );
	/* ../scenesystem/scenesystem.h:1906 */
	void SetOffsetsNormalWrinkle(MorphNormalWrinkleVertex_t* , const float* );
	/* ../scenesystem/scenesystem.h:1914 */
	void SetRangesNormalWrinkle(MorphNormalWrinkleVertex_t* , const float* );
	/* ../scenesystem/scenesystem.h:1922 */
	RenderInputLayout_t GetLayout(void);
	Vector4D m_vecPositionflWeightflDelayedWeight; /* 0 16 */
	Vector4D m_vecTexCoordsPositionSpeedNormalWrinkle; /* 16 16 */
	Vector4D m_vecOffsetsPositionSpeed; /* 32 16 */
	Vector4D m_vecRangesPositionSpeed; /* 48 16 */
	Vector4D m_vecOffsetsNormalWrinkle; /* 64 16 */
	Vector4D m_vecRangesNormalWrinkle; /* 80 16 */
};

// <02F1EA51> ../scenesystem/scenesystem.h:1863
void MorphNormalWrinkleVertex_t::MorphNormalWrinkleVertex_t()
{
} /* size: 0 */

// <02F1EA38> ../scenesystem/scenesystem.h:1863
inline void MorphNormalWrinkleVertex_t::MorphNormalWrinkleVertex_t()
{
} /* size: 0 */

// <02F1EA21> ../scenesystem/scenesystem.h:1864
void MorphNormalWrinkleVertex_t::~MorphNormalWrinkleVertex_t()
{
} /* size: 0 */

// <02F1EA08> ../scenesystem/scenesystem.h:1864
inline void MorphNormalWrinkleVertex_t::~MorphNormalWrinkleVertex_t()
{
} /* size: 0 */

// <02F1E9D9> ../scenesystem/scenesystem.h:1866
inline void MorphNormalWrinkleVertex_t::SetPosition(float x, float y)
{
} /* size: 0 */

// <02F1E9A6> ../scenesystem/scenesystem.h:1872
inline void MorphNormalWrinkleVertex_t::SetWeights(const float flWeight, const float flDelayedWeight)
{
} /* size: 0 */

// <02F1E977> ../scenesystem/scenesystem.h:1878
inline void MorphNormalWrinkleVertex_t::SetTexCoordPositionSpeed(const float u, const float v)
{
} /* size: 0 */

// <02F1E948> ../scenesystem/scenesystem.h:1884
inline void MorphNormalWrinkleVertex_t::SetTexCoordNormalWrinkle(const float u, const float v)
{
} /* size: 0 */

// <02F1E915> ../scenesystem/scenesystem.h:1890
// variable: 1
inline void MorphNormalWrinkleVertex_t::SetOffsetsPositionSpeed(const float* pOffsets)
{
	{
		int i; // 1892
	}
} /* size: 0 */

// <02F1E8E2> ../scenesystem/scenesystem.h:1898
// variable: 1
inline void MorphNormalWrinkleVertex_t::SetRangesPositionSpeed(const float* pRanges)
{
	{
		int i; // 1900
	}
} /* size: 0 */

