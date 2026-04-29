
//
// public/movieobjects/dmevertexdata.h
//
//	referenced by: libengine2.so
//
//	classes: 2
//

// <0613D92D> ../public/movieobjects/dmevertexdata.h:551
// member functions: 22
// member variable: 1
// static member variables: 2
// vtable entries: 6
// class size: 296
class CDmeVertexData : public CDmeVertexDataBase {
public:
	/* class CDmeVertexDataBase <ancestor>; */ /* 0 0 */
	/* ../public/movieobjects/dmevertexdata.h:553 */
	virtual bool IsA(const CDmeVertexData* , CUtlSymbolLarge);
	/* ../public/movieobjects/dmevertexdata.h:553 */
	bool IsA(const CDmeVertexData* , const char* );
	/* ../public/movieobjects/dmevertexdata.h:553 */
	virtual int GetInheritanceDepth(const CDmeVertexData* , CUtlSymbolLarge);
	/* ../public/movieobjects/dmevertexdata.h:553 */
	CUtlSymbolLarge GetStaticTypeSymbol(void);
	/* ../public/movieobjects/dmevertexdata.h:553 */
	CDmeVertexData* Copy(const CDmeVertexData* , TraversalDepth_t, bool, bool);
protected:
	/* ../public/movieobjects/dmevertexdata.h:553 */
	void CDmeVertexData(CDmeVertexData* , DmElementHandle_t, const char* , const DmObjectId_t& , const char* , DmFileId_t);
	/* ../public/movieobjects/dmevertexdata.h:553 */
	virtual void ~CDmeVertexData(CDmeVertexData* );
	/* ../public/movieobjects/dmevertexdata.h:553 */
	void OnConstruction(CDmeVertexData* );
	/* ../public/movieobjects/dmevertexdata.h:553 */
	void OnDestruction(CDmeVertexData* );
	/* ../public/movieobjects/dmevertexdata.h:553 */
	virtual void PerformConstruction(CDmeVertexData* );
	/* ../public/movieobjects/dmevertexdata.h:553 */
	virtual void PerformDestruction(CDmeVertexData* );
	/* ../public/movieobjects/dmevertexdata.h:553 */
	void SetTypeSymbol(CUtlSymbolLarge);
	/* ../public/movieobjects/dmevertexdata.h:553 */
	bool IsA_Implementation(CUtlSymbolLarge);
	/* ../public/movieobjects/dmevertexdata.h:553 */
	int GetInheritanceDepth_Implementation(CUtlSymbolLarge, int);
	/* ../public/movieobjects/dmevertexdata.h:553 */
	virtual int AllocatedSize(const CDmeVertexData* );
private:
	static class CUtlSymbolLarge m_classType; /* 0 0 */
	/* ../public/movieobjects/dmevertexdata.h:553 */
	void* operator new(size_t);
	/* ../public/movieobjects/dmevertexdata.h:553 */
	void* operator new(size_t, int, const char* , int);
	/* ../public/movieobjects/dmevertexdata.h:553 */
	void operator delete(void* );
	/* ../public/movieobjects/dmevertexdata.h:553 */
	void operator delete(void* , int, const char* , int);
	/* ../public/movieobjects/dmevertexdata.h:553 */
	void PurgeFixedAllocator(bool);
	static class CUtlMemoryPool<CDmeVertexData> s_Allocator; /* 0 0 */
	/* ../public/movieobjects/dmevertexdata.h:558 */
	DmeVertexIndex_t AddVertexIndices(CDmeVertexData* , int);
	/* ../public/movieobjects/dmevertexdata.h:561 */
	virtual bool IsVertexDeltaData(const CDmeVertexData* );
};

// <0613F07D> ../public/movieobjects/dmevertexdata.h:570
// member functions: 25
// member variables: 3
// static member variables: 2
// vtable entries: 6
// class size: 328
class CDmeVertexDeltaData : public CDmeVertexDataBase {
public:
	/* class CDmeVertexDataBase <ancestor>; */ /* 0 0 */
	/* ../public/movieobjects/dmevertexdata.h:572 */
	virtual bool IsA(const CDmeVertexDeltaData* , CUtlSymbolLarge);
	/* ../public/movieobjects/dmevertexdata.h:572 */
	bool IsA(const CDmeVertexDeltaData* , const char* );
	/* ../public/movieobjects/dmevertexdata.h:572 */
	virtual int GetInheritanceDepth(const CDmeVertexDeltaData* , CUtlSymbolLarge);
	/* ../public/movieobjects/dmevertexdata.h:572 */
	CUtlSymbolLarge GetStaticTypeSymbol(void);
	/* ../public/movieobjects/dmevertexdata.h:572 */
	CDmeVertexDeltaData* Copy(const CDmeVertexDeltaData* , TraversalDepth_t, bool, bool);
protected:
	/* ../public/movieobjects/dmevertexdata.h:572 */
	void CDmeVertexDeltaData(CDmeVertexDeltaData* , DmElementHandle_t, const char* , const DmObjectId_t& , const char* , DmFileId_t);
	/* ../public/movieobjects/dmevertexdata.h:572 */
	virtual void ~CDmeVertexDeltaData(CDmeVertexDeltaData* );
	/* ../public/movieobjects/dmevertexdata.h:572 */
	void OnConstruction(CDmeVertexDeltaData* );
	/* ../public/movieobjects/dmevertexdata.h:572 */
	void OnDestruction(CDmeVertexDeltaData* );
	/* ../public/movieobjects/dmevertexdata.h:572 */
	virtual void PerformConstruction(CDmeVertexDeltaData* );
	/* ../public/movieobjects/dmevertexdata.h:572 */
	virtual void PerformDestruction(CDmeVertexDeltaData* );
	/* ../public/movieobjects/dmevertexdata.h:572 */
	void SetTypeSymbol(CUtlSymbolLarge);
	/* ../public/movieobjects/dmevertexdata.h:572 */
	bool IsA_Implementation(CUtlSymbolLarge);
	/* ../public/movieobjects/dmevertexdata.h:572 */
	int GetInheritanceDepth_Implementation(CUtlSymbolLarge, int);
	/* ../public/movieobjects/dmevertexdata.h:572 */
	virtual int AllocatedSize(const CDmeVertexDeltaData* );
private:
	static class CUtlSymbolLarge m_classType; /* 0 0 */
	/* ../public/movieobjects/dmevertexdata.h:572 */
	void* operator new(size_t);
	/* ../public/movieobjects/dmevertexdata.h:572 */
	void* operator new(size_t, int, const char* , int);
	/* ../public/movieobjects/dmevertexdata.h:572 */
	void operator delete(void* );
	/* ../public/movieobjects/dmevertexdata.h:572 */
	void operator delete(void* , int, const char* , int);
	/* ../public/movieobjects/dmevertexdata.h:572 */
	void PurgeFixedAllocator(bool);
	static class CUtlMemoryPool<CDmeVertexDeltaData> s_Allocator; /* 0 0 */
	/* ../public/movieobjects/dmevertexdata.h:577 */
	void GenerateWrinkleDelta(CDmeVertexDeltaData* , CDmeVertexData* , float, bool, bool);
	/* ../public/movieobjects/dmevertexdata.h:580 */
	void UpdateWrinkleDelta(CDmeVertexDeltaData* , CDmeVertexData* , float, float);
	/* ../public/movieobjects/dmevertexdata.h:584 */
	float GenerateWeightDelta(CDmeVertexDeltaData* , CDmeVertexData* );
	CDmaVar<bool> m_bCorrected; /* 296 16 */
	CDmaVar<bool> m_bRenderVerts; /* 312 16 */
	/* ../public/movieobjects/dmevertexdata.h:590 */
	virtual bool IsVertexDeltaData(const CDmeVertexDeltaData* );
	/* ../public/movieobjects/dmevertexdata.h:593 */
	float ComputeMaxDeflection(CDmeVertexDeltaData* );
};

