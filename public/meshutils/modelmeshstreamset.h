
//
// public/meshutils/modelmeshstreamset.h
//
//	referenced by: libengine2.so
//
//	functions: 2
//	class: 1
//

// <05C3CB53> ../public/meshutils/modelmeshstreamset.h:15
// member functions: 68
// member variables: 2
// class size: 40
class CModelMeshStreamSet {
	/* ../public/meshutils/modelmeshstreamset.h:19 */
	void CModelMeshStreamSet(CModelMeshStreamSet* );
	/* ../public/meshutils/modelmeshstreamset.h:20 */
	void ~CModelMeshStreamSet(CModelMeshStreamSet* );
	/* ../public/meshutils/modelmeshstreamset.h:21 */
	void CModelMeshStreamSet(CModelMeshStreamSet* , const CModelMeshStreamSet& );
	/* ../public/meshutils/modelmeshstreamset.h:22 */
	CModelMeshStreamSet& operator=(CModelMeshStreamSet* , const CModelMeshStreamSet& );
	/* ../public/meshutils/modelmeshstreamset.h:29 */
	void CopyFrom(CModelMeshStreamSet* , const CModelMeshStreamSet& );
	/* ../public/meshutils/modelmeshstreamset.h:33 */
	bool CanAppendStreamSet(const CModelMeshStreamSet* , const CModelMeshStreamSet& );
	/* ../public/meshutils/modelmeshstreamset.h:39 */
	bool AppendStreamSet(CModelMeshStreamSet* , const CModelMeshStreamSet& , const int* , int);
	/* ../public/meshutils/modelmeshstreamset.h:46 */
	int GetNumValues(const CModelMeshStreamSet* );
	/* ../public/meshutils/modelmeshstreamset.h:49 */
	void SetNumValues(CModelMeshStreamSet* , int);
	/* ../public/meshutils/modelmeshstreamset.h:53 */
	void EnsureCapacity(CModelMeshStreamSet* , int);
	/* ../public/meshutils/modelmeshstreamset.h:56 */
	int AddToTail(CModelMeshStreamSet* );
	/* ../public/meshutils/modelmeshstreamset.h:59 */
	void AddMultipleToTail(CModelMeshStreamSet* , int);
	/* ../public/meshutils/modelmeshstreamset.h:63 */
	void RemoveBySwapWithLast(CModelMeshStreamSet* , int);
	/* ../public/meshutils/modelmeshstreamset.h:71 */
	int GetNumStreams(const CModelMeshStreamSet* );
	/* ../public/meshutils/modelmeshstreamset.h:74 */
	int FindStreamByName(const CModelMeshStreamSet* , const char* );
	/* ../public/meshutils/modelmeshstreamset.h:77 */
	int FindFirstStreamOfType(const CModelMeshStreamSet* , ModelStreamType_t);
	/* ../public/meshutils/modelmeshstreamset.h:81 */
	int AddStream(CModelMeshStreamSet* , const char* , ModelStreamType_t, const void* );
	/* ../public/meshutils/modelmeshstreamset.h:84 */
	void RemoveStream(CModelMeshStreamSet* , int);
	/* ../public/meshutils/modelmeshstreamset.h:87 */
	bool RenameStream(CModelMeshStreamSet* , int, const char* );
	/* ../public/meshutils/modelmeshstreamset.h:90 */
	void RemoveAll(CModelMeshStreamSet* );
	/* ../public/meshutils/modelmeshstreamset.h:93 */
	const char* GetStreamName(const CModelMeshStreamSet* , int);
	/* ../public/meshutils/modelmeshstreamset.h:96 */
	ModelStreamType_t GetStreamType(const CModelMeshStreamSet* , int);
	/* ../public/meshutils/modelmeshstreamset.h:99 */
	ModelStreamDataType_t GetStreamDataType(const CModelMeshStreamSet* , int);
	/* ../public/meshutils/modelmeshstreamset.h:102 */
	const uint32* GetStreamDefaultValueData(const CModelMeshStreamSet* , int);
	/* ../public/meshutils/modelmeshstreamset.h:105 */
	CModelStreamAccessor GetStream(CModelMeshStreamSet* , int);
	/* ../public/meshutils/modelmeshstreamset.h:108 */
	CModelStreamReader GetStream(const CModelMeshStreamSet* , int);
	/* ../public/meshutils/modelmeshstreamset.h:111 */
	void GetStreamsOfType(CModelMeshStreamSet* , ModelStreamType_t, CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >* );
	/* ../public/meshutils/modelmeshstreamset.h:114 */
	void GetStreamsOfType(const CModelMeshStreamSet* , ModelStreamType_t, CUtlVector<CModelStreamReader, CUtlMemory<CModelStreamReader, int> >* );
	/* ../public/meshutils/modelmeshstreamset.h:117 */
	void GetAllStreams(CModelMeshStreamSet* , CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >* );
	/* ../public/meshutils/modelmeshstreamset.h:120 */
	void GetAllStreams(const CModelMeshStreamSet* , CUtlVector<CModelStreamReader, CUtlMemory<CModelStreamReader, int> >* );
	/* ../public/meshutils/modelmeshstreamset.h:125 */
	void SaveToKV3(const CModelMeshStreamSet* , KeyValues3* );
	/* ../public/meshutils/modelmeshstreamset.h:126 */
	bool LoadFromKV3(CModelMeshStreamSet* , const KeyValues3* , CUtlString* );
private:
	/* ../public/meshutils/modelmeshstreamset.h:129 */
	void SaveStreamToKV3(const CModelMeshStreamSet* , const CModelStream* , KeyValues3* );
	/* ../public/meshutils/modelmeshstreamset.h:130 */
	bool AddStreamFromKV3(CModelMeshStreamSet* , const KeyValues3* , CUtlString* );
	int m_nNumValues; /* 0 4 */
	CUtlVector<CModelStream*, CUtlMemory<CModelStream*, int> > m_Streams; /* 8 32 */
	void CModelMeshStreamSet(class CModelMeshStreamSet *); /* linkage=_ZN19CModelMeshStreamSetC4Ev */
	void ~CModelMeshStreamSet(class CModelMeshStreamSet *); /* linkage=_ZN19CModelMeshStreamSetD4Ev */
	void CModelMeshStreamSet(class CModelMeshStreamSet *, const class CModelMeshStreamSet  &); /* linkage=_ZN19CModelMeshStreamSetC4ERKS_ */
	/* <5fdb341> meshutils/modelmeshstreamset.cpp:35 */
	class CModelMeshStreamSet & operator=(class CModelMeshStreamSet *, const class CModelMeshStreamSet  &); /* linkage=_ZN19CModelMeshStreamSetaSERKS_ */
	void CopyFrom(class CModelMeshStreamSet *, const class CModelMeshStreamSet  &); /* linkage=_ZN19CModelMeshStreamSet8CopyFromERKS_ */
	bool CanAppendStreamSet(const class CModelMeshStreamSet  *, const class CModelMeshStreamSet  &); /* linkage=_ZNK19CModelMeshStreamSet18CanAppendStreamSetERKS_ */
	bool AppendStreamSet(class CModelMeshStreamSet *, const class CModelMeshStreamSet  &, const int  *, int); /* linkage=_ZN19CModelMeshStreamSet15AppendStreamSetERKS_PKii */
	/* <5fdaa73> meshutils/modelmeshstreamset.cpp:61 */
	int GetNumValues(const class CModelMeshStreamSet  *); /* linkage=_ZNK19CModelMeshStreamSet12GetNumValuesEv */
	/* <5fdaa9e> meshutils/modelmeshstreamset.cpp:69 */
	void SetNumValues(class CModelMeshStreamSet *, int); /* linkage=_ZN19CModelMeshStreamSet12SetNumValuesEi */
	void EnsureCapacity(class CModelMeshStreamSet *, int); /* linkage=_ZN19CModelMeshStreamSet14EnsureCapacityEi */
	int AddToTail(class CModelMeshStreamSet *); /* linkage=_ZN19CModelMeshStreamSet9AddToTailEv */
	void AddMultipleToTail(class CModelMeshStreamSet *, int); /* linkage=_ZN19CModelMeshStreamSet17AddMultipleToTailEi */
	void RemoveBySwapWithLast(class CModelMeshStreamSet *, int); /* linkage=_ZN19CModelMeshStreamSet20RemoveBySwapWithLastEi */
	/* <5fdadec> meshutils/modelmeshstreamset.cpp:154 */
	int GetNumStreams(const class CModelMeshStreamSet  *); /* linkage=_ZNK19CModelMeshStreamSet13GetNumStreamsEv */
	/* <5fdae47> meshutils/modelmeshstreamset.cpp:162 */
	int FindStreamByName(const class CModelMeshStreamSet  *, const char  *); /* linkage=_ZNK19CModelMeshStreamSet16FindStreamByNameEPKc */
	int FindFirstStreamOfType(const class CModelMeshStreamSet  *, enum ModelStreamType_t); /* linkage=_ZNK19CModelMeshStreamSet21FindFirstStreamOfTypeE17ModelStreamType_t */
	int AddStream(class CModelMeshStreamSet *, const char  *, enum ModelStreamType_t, const void  *); /* linkage=_ZN19CModelMeshStreamSet9AddStreamEPKc17ModelStreamType_tPKv */
	void RemoveStream(class CModelMeshStreamSet *, int); /* linkage=_ZN19CModelMeshStreamSet12RemoveStreamEi */
	bool RenameStream(class CModelMeshStreamSet *, int, const char  *); /* linkage=_ZN19CModelMeshStreamSet12RenameStreamEiPKc */
	/* <5fdabaf> meshutils/modelmeshstreamset.cpp:130 */
	void RemoveAll(class CModelMeshStreamSet *); /* linkage=_ZN19CModelMeshStreamSet9RemoveAllEv */
	/* <5fdaf58> meshutils/modelmeshstreamset.cpp:255 */
	const char  * GetStreamName(const class CModelMeshStreamSet  *, int); /* linkage=_ZNK19CModelMeshStreamSet13GetStreamNameEi */
	/* <5fdb0a5> meshutils/modelmeshstreamset.cpp:268 */
	enum ModelStreamType_t GetStreamType(const class CModelMeshStreamSet  *, int); /* linkage=_ZNK19CModelMeshStreamSet13GetStreamTypeEi */
	enum ModelStreamDataType_t GetStreamDataType(const class CModelMeshStreamSet  *, int); /* linkage=_ZNK19CModelMeshStreamSet17GetStreamDataTypeEi */
	/* <5fdb1f3> meshutils/modelmeshstreamset.cpp:294 */
	const uint32  * GetStreamDefaultValueData(const class CModelMeshStreamSet  *, int); /* linkage=_ZNK19CModelMeshStreamSet25GetStreamDefaultValueDataEi */
	class CModelStreamAccessor GetStream(class CModelMeshStreamSet *, int); /* linkage=_ZN19CModelMeshStreamSet9GetStreamEi */
	class CModelStreamReader GetStream(const class CModelMeshStreamSet  *, int); /* linkage=_ZNK19CModelMeshStreamSet9GetStreamEi */
	void GetStreamsOfType(class CModelMeshStreamSet *, enum ModelStreamType_t, class CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> > *); /* linkage=_ZN19CModelMeshStreamSet16GetStreamsOfTypeE17ModelStreamType_tP10CUtlVectorI20CModelStreamAccessor10CUtlMemoryIS2_iEE */
	void GetStreamsOfType(const class CModelMeshStreamSet  *, enum ModelStreamType_t, class CUtlVector<CModelStreamReader, CUtlMemory<CModelStreamReader, int> > *); /* linkage=_ZNK19CModelMeshStreamSet16GetStreamsOfTypeE17ModelStreamType_tP10CUtlVectorI18CModelStreamReader10CUtlMemoryIS2_iEE */
	void GetAllStreams(class CModelMeshStreamSet *, class CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> > *); /* linkage=_ZN19CModelMeshStreamSet13GetAllStreamsEP10CUtlVectorI20CModelStreamAccessor10CUtlMemoryIS1_iEE */
	void GetAllStreams(const class CModelMeshStreamSet  *, class CUtlVector<CModelStreamReader, CUtlMemory<CModelStreamReader, int> > *); /* linkage=_ZNK19CModelMeshStreamSet13GetAllStreamsEP10CUtlVectorI18CModelStreamReader10CUtlMemoryIS1_iEE */
	void SaveToKV3(const class CModelMeshStreamSet  *, class KeyValues3 *); /* linkage=_ZNK19CModelMeshStreamSet9SaveToKV3EP10KeyValues3 */
	bool LoadFromKV3(class CModelMeshStreamSet *, const class KeyValues3  *, class CUtlString *); /* linkage=_ZN19CModelMeshStreamSet11LoadFromKV3EPK10KeyValues3P10CUtlString */
	void SaveStreamToKV3(const class CModelMeshStreamSet  *, const class CModelStream  *, class KeyValues3 *); /* linkage=_ZNK19CModelMeshStreamSet15SaveStreamToKV3EPK12CModelStreamP10KeyValues3 */
	bool AddStreamFromKV3(class CModelMeshStreamSet *, const class KeyValues3  *, class CUtlString *); /* linkage=_ZN19CModelMeshStreamSet16AddStreamFromKV3EPK10KeyValues3P10CUtlString */
};

// <0606735E> ../public/meshutils/modelmeshstreamset.h:19
void CModelMeshStreamSet::CModelMeshStreamSet()
{
} /* size: 0 */

// <05F5C96C> ../public/meshutils/modelmeshstreamset.h:20
void CModelMeshStreamSet::~CModelMeshStreamSet()
{
} /* size: 0 */

